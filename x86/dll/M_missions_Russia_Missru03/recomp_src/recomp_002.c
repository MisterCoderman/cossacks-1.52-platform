#include "recomp.h"

/* FUN_10012ba0 @ 0x10a12ba0 (878 bytes, 273 insns) */
void f_10a12ba0(void) {
  FTRACE(0x10a12ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a12ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a12ba1 mov ebp, esp */
  EBP = (ESP);
  /* 10a12ba3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a12ba6 push esi */
  push32((uint32_t)(ESI));
  /* 10a12ba7 mov eax, dword ptr [0x10a30c98] */
  EAX = (r32((uint32_t)(0x10a30c98)));
  /* 10a12bac mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a12baf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a12bb6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10a12bbd jmp 0x10a12bc8 */
  goto L_10a12bc8;
L_10a12bbf:;
  /* 10a12bbf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a12bc2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12bc5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10a12bc8:;
  /* 10a12bc8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a12bcc jae 0x10a12c01 */
  if (!C.cf) goto L_10a12c01;
  /* 10a12bce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a12bd1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a12bd4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10a12bd7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a12bd8 call 0x10a08a20 */
  push32(0x10a12bddu); f_10a08a20();
  /* 10a12bdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12be0 mov esi, eax */
  ESI = (EAX);
  /* 10a12be2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a12be5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a12be8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10a12bec push ecx */
  push32((uint32_t)(ECX));
  /* 10a12bed call 0x10a08a20 */
  push32(0x10a12bf2u); f_10a08a20();
  /* 10a12bf2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12bf5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12bf8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10a12bfc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a12bff jmp 0x10a12bbf */
  goto L_10a12bbf;
L_10a12c01:;
  /* 10a12c01 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10a12c08 jmp 0x10a12c13 */
  goto L_10a12c13;
L_10a12c0a:;
  /* 10a12c0a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a12c0d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12c10 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10a12c13:;
  /* 10a12c13 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a12c17 jae 0x10a12c4d */
  if (!C.cf) goto L_10a12c4d;
  /* 10a12c19 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a12c1c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a12c1f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10a12c23 push eax */
  push32((uint32_t)(EAX));
  /* 10a12c24 call 0x10a08a20 */
  push32(0x10a12c29u); f_10a08a20();
  /* 10a12c29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12c2c mov esi, eax */
  ESI = (EAX);
  /* 10a12c2e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a12c31 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a12c34 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10a12c38 push eax */
  push32((uint32_t)(EAX));
  /* 10a12c39 call 0x10a08a20 */
  push32(0x10a12c3eu); f_10a08a20();
  /* 10a12c3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12c41 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12c44 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10a12c48 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a12c4b jmp 0x10a12c0a */
  goto L_10a12c0a;
L_10a12c4d:;
  /* 10a12c4d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a12c50 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10a12c56 push eax */
  push32((uint32_t)(EAX));
  /* 10a12c57 call 0x10a08a20 */
  push32(0x10a12c5cu); f_10a08a20();
  /* 10a12c5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12c5f mov esi, eax */
  ESI = (EAX);
  /* 10a12c61 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a12c64 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 10a12c6a push edx */
  push32((uint32_t)(EDX));
  /* 10a12c6b call 0x10a08a20 */
  push32(0x10a12c70u); f_10a08a20();
  /* 10a12c70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12c73 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12c76 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10a12c7a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a12c7d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a12c80 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10a12c86 push edx */
  push32((uint32_t)(EDX));
  /* 10a12c87 call 0x10a08a20 */
  push32(0x10a12c8cu); f_10a08a20();
  /* 10a12c8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12c8f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a12c92 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10a12c96 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a12c99 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a12c9c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 10a12ca2 push ecx */
  push32((uint32_t)(ECX));
  /* 10a12ca3 call 0x10a08a20 */
  push32(0x10a12ca8u); f_10a08a20();
  /* 10a12ca8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12cab mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a12cae lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10a12cb2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a12cb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a12cb8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10a12cbe push edx */
  push32((uint32_t)(EDX));
  /* 10a12cbf call 0x10a08a20 */
  push32(0x10a12cc4u); f_10a08a20();
  /* 10a12cc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12cc7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a12cca lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10a12cce mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a12cd1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a12cd4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12cd9 push eax */
  push32((uint32_t)(EAX));
  /* 10a12cda call 0x10a05bd0 */
  push32(0x10a12cdfu); f_10a05bd0();
  /* 10a12cdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12ce2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a12ce5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a12ce9 je 0x10a12f06 */
  if (C.zf) goto L_10a12f06;
  /* 10a12cef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a12cf2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10a12cf5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a12cf8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12cfe mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10a12d01 push 0xac */
  push32((uint32_t)(0xacu));
  /* 10a12d06 mov eax, dword ptr [0x10a30c98] */
  EAX = (r32((uint32_t)(0x10a30c98)));
  /* 10a12d0b push eax */
  push32((uint32_t)(EAX));
  /* 10a12d0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a12d0f push ecx */
  push32((uint32_t)(ECX));
  /* 10a12d10 call 0x10a0c4d0 */
  push32(0x10a12d15u); f_10a0c4d0();
  /* 10a12d15 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12d18 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10a12d1f jmp 0x10a12d2a */
  goto L_10a12d2a;
L_10a12d21:;
  /* 10a12d21 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a12d24 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12d27 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10a12d2a:;
  /* 10a12d2a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a12d2e jae 0x10a12d9e */
  if (!C.cf) goto L_10a12d9e;
  /* 10a12d30 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a12d33 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a12d36 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12d39 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10a12d3c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a12d3f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a12d42 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10a12d45 push edx */
  push32((uint32_t)(EDX));
  /* 10a12d46 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12d49 push eax */
  push32((uint32_t)(EAX));
  /* 10a12d4a call 0x10a08ba0 */
  push32(0x10a12d4fu); f_10a08ba0();
  /* 10a12d4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12d52 push eax */
  push32((uint32_t)(EAX));
  /* 10a12d53 call 0x10a08a20 */
  push32(0x10a12d58u); f_10a08a20();
  /* 10a12d58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12d5b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12d5e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10a12d62 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10a12d65 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a12d68 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a12d6b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12d6e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 10a12d72 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a12d75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a12d78 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 10a12d7c push edx */
  push32((uint32_t)(EDX));
  /* 10a12d7d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12d80 push eax */
  push32((uint32_t)(EAX));
  /* 10a12d81 call 0x10a08ba0 */
  push32(0x10a12d86u); f_10a08ba0();
  /* 10a12d86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12d89 push eax */
  push32((uint32_t)(EAX));
  /* 10a12d8a call 0x10a08a20 */
  push32(0x10a12d8fu); f_10a08a20();
  /* 10a12d8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12d92 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12d95 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10a12d99 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10a12d9c jmp 0x10a12d21 */
  goto L_10a12d21;
L_10a12d9e:;
  /* 10a12d9e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10a12da5 jmp 0x10a12db0 */
  goto L_10a12db0;
L_10a12da7:;
  /* 10a12da7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a12daa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12dad mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10a12db0:;
  /* 10a12db0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a12db4 jae 0x10a12e26 */
  if (!C.cf) goto L_10a12e26;
  /* 10a12db6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a12db9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a12dbc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12dbf mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 10a12dc3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a12dc6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a12dc9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10a12dcd push eax */
  push32((uint32_t)(EAX));
  /* 10a12dce mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12dd1 push ecx */
  push32((uint32_t)(ECX));
  /* 10a12dd2 call 0x10a08ba0 */
  push32(0x10a12dd7u); f_10a08ba0();
  /* 10a12dd7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12dda push eax */
  push32((uint32_t)(EAX));
  /* 10a12ddb call 0x10a08a20 */
  push32(0x10a12de0u); f_10a08a20();
  /* 10a12de0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12de3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12de6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10a12dea mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a12ded mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a12df0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a12df3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12df6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 10a12dfa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a12dfd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a12e00 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10a12e04 push eax */
  push32((uint32_t)(EAX));
  /* 10a12e05 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12e08 push ecx */
  push32((uint32_t)(ECX));
  /* 10a12e09 call 0x10a08ba0 */
  push32(0x10a12e0eu); f_10a08ba0();
  /* 10a12e0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12e11 push eax */
  push32((uint32_t)(EAX));
  /* 10a12e12 call 0x10a08a20 */
  push32(0x10a12e17u); f_10a08a20();
  /* 10a12e17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12e1a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12e1d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10a12e21 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a12e24 jmp 0x10a12da7 */
  goto L_10a12da7;
L_10a12e26:;
  /* 10a12e26 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a12e29 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12e2c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 10a12e32 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a12e35 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10a12e3b push ecx */
  push32((uint32_t)(ECX));
  /* 10a12e3c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12e3f push edx */
  push32((uint32_t)(EDX));
  /* 10a12e40 call 0x10a08ba0 */
  push32(0x10a12e45u); f_10a08ba0();
  /* 10a12e45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12e48 push eax */
  push32((uint32_t)(EAX));
  /* 10a12e49 call 0x10a08a20 */
  push32(0x10a12e4eu); f_10a08a20();
  /* 10a12e4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12e51 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12e54 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10a12e58 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10a12e5b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a12e5e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12e61 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 10a12e67 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a12e6a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10a12e70 push eax */
  push32((uint32_t)(EAX));
  /* 10a12e71 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12e74 push ecx */
  push32((uint32_t)(ECX));
  /* 10a12e75 call 0x10a08ba0 */
  push32(0x10a12e7au); f_10a08ba0();
  /* 10a12e7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12e7d push eax */
  push32((uint32_t)(EAX));
  /* 10a12e7e call 0x10a08a20 */
  push32(0x10a12e83u); f_10a08a20();
  /* 10a12e83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12e86 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12e89 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10a12e8d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a12e90 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a12e93 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12e96 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 10a12e9c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a12e9f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 10a12ea5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a12ea6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12ea9 push edx */
  push32((uint32_t)(EDX));
  /* 10a12eaa call 0x10a08ba0 */
  push32(0x10a12eafu); f_10a08ba0();
  /* 10a12eaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12eb2 push eax */
  push32((uint32_t)(EAX));
  /* 10a12eb3 call 0x10a08a20 */
  push32(0x10a12eb8u); f_10a08a20();
  /* 10a12eb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12ebb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12ebe lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10a12ec2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10a12ec5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a12ec8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12ecb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 10a12ed1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a12ed4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10a12eda push eax */
  push32((uint32_t)(EAX));
  /* 10a12edb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12ede push ecx */
  push32((uint32_t)(ECX));
  /* 10a12edf call 0x10a08ba0 */
  push32(0x10a12ee4u); f_10a08ba0();
  /* 10a12ee4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12ee7 push eax */
  push32((uint32_t)(EAX));
  /* 10a12ee8 call 0x10a08a20 */
  push32(0x10a12eedu); f_10a08a20();
  /* 10a12eed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12ef0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12ef3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10a12ef7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a12efa mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a12efd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a12f00 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_10a12f06:;
  /* 10a12f06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a12f09 pop esi */
  ESI = (pop32());
  /* 10a12f0a mov esp, ebp */
  ESP = (EBP);
  /* 10a12f0c pop ebp */
  EBP = (pop32());
  /* 10a12f0d ret  */
  ESPCHK(0x10a12ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f10 @ 0x10a12f10 (31 bytes, 15 insns) */
void f_10a12f10(void) {
  FTRACE(0x10a12f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a12f10 push ebp */
  push32((uint32_t)(EBP));
  /* 10a12f11 mov ebp, esp */
  EBP = (ESP);
  /* 10a12f13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a12f15 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a12f18 push eax */
  push32((uint32_t)(EAX));
  /* 10a12f19 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a12f1c push ecx */
  push32((uint32_t)(ECX));
  /* 10a12f1d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a12f20 push edx */
  push32((uint32_t)(EDX));
  /* 10a12f21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a12f24 push eax */
  push32((uint32_t)(EAX));
  /* 10a12f25 call 0x10a12f30 */
  push32(0x10a12f2au); f_10a12f30();
  /* 10a12f2a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12f2d pop ebp */
  EBP = (pop32());
  /* 10a12f2e ret  */
  ESPCHK(0x10a12f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f30 @ 0x10a12f30 (393 bytes, 123 insns) */
void f_10a12f30(void) {
  FTRACE(0x10a12f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a12f30 push ebp */
  push32((uint32_t)(EBP));
  /* 10a12f31 mov ebp, esp */
  EBP = (ESP);
  /* 10a12f33 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a12f36 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a12f3a jne 0x10a12f46 */
  if (!C.zf) goto L_10a12f46;
  /* 10a12f3c mov eax, dword ptr [0x10a30c98] */
  EAX = (r32((uint32_t)(0x10a30c98)));
  /* 10a12f41 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a12f44 jmp 0x10a12f4c */
  goto L_10a12f4c;
L_10a12f46:;
  /* 10a12f46 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a12f49 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10a12f4c:;
  /* 10a12f4c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a12f4f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a12f52 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a12f55 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a12f58 push 0x10a31a64 */
  push32((uint32_t)(0x10a31a64u));
  /* 10a12f5d call dword ptr [0x10a3435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3435c))), 0x10a12f63u);
  /* 10a12f63 cmp dword ptr [0x10a31a54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31a54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a12f6a je 0x10a12f8a */
  if (C.zf) goto L_10a12f8a;
  /* 10a12f6c push 0x10a31a64 */
  push32((uint32_t)(0x10a31a64u));
  /* 10a12f71 call dword ptr [0x10a3434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3434c))), 0x10a12f77u);
  /* 10a12f77 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a12f79 call 0x10a095f0 */
  push32(0x10a12f7eu); f_10a095f0();
  /* 10a12f7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12f81 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10a12f88 jmp 0x10a12f91 */
  goto L_10a12f91;
L_10a12f8a:;
  /* 10a12f8a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10a12f91:;
  /* 10a12f91 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a12f95 jbe 0x10a13082 */
  if ((C.cf||C.zf)) goto L_10a13082;
  /* 10a12f9b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a12f9e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a12fa0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 10a12fa3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a12fa7 je 0x10a12fb1 */
  if (C.zf) goto L_10a12fb1;
  /* 10a12fa9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a12fad je 0x10a12fb6 */
  if (C.zf) goto L_10a12fb6;
  /* 10a12faf jmp 0x10a13010 */
  goto L_10a13010;
L_10a12fb1:;
  /* 10a12fb1 jmp 0x10a13082 */
  goto L_10a13082;
L_10a12fb6:;
  /* 10a12fb6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a12fb9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12fbc mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10a12fbf mov dword ptr [0x10a31a40], 0 */
  w32((uint32_t)(0x10a31a40), (0x0u));
  /* 10a12fc9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a12fcc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a12fcf cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a12fd2 jne 0x10a12fe7 */
  if (!C.zf) goto L_10a12fe7;
  /* 10a12fd4 mov dword ptr [0x10a31a40], 1 */
  w32((uint32_t)(0x10a31a40), (0x1u));
  /* 10a12fde mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a12fe1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a12fe4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10a12fe7:;
  /* 10a12fe7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a12fea push ecx */
  push32((uint32_t)(ECX));
  /* 10a12feb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10a12fee push edx */
  push32((uint32_t)(EDX));
  /* 10a12fef lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10a12ff2 push eax */
  push32((uint32_t)(EAX));
  /* 10a12ff3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a12ff6 push ecx */
  push32((uint32_t)(ECX));
  /* 10a12ff7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a12ffa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a12ffc push eax */
  push32((uint32_t)(EAX));
  /* 10a12ffd call 0x10a130c0 */
  push32(0x10a13002u); f_10a130c0();
  /* 10a13002 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13005 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13008 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1300b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10a1300e jmp 0x10a1307d */
  goto L_10a1307d;
L_10a13010:;
  /* 10a13010 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13013 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a13015 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a13017 mov ecx, dword ptr [0x10a2fc98] */
  ECX = (r32((uint32_t)(0x10a2fc98)));
  /* 10a1301d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a1301f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10a13023 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10a13029 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a1302b je 0x10a13058 */
  if (C.zf) goto L_10a13058;
  /* 10a1302d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a13031 jbe 0x10a13058 */
  if ((C.cf||C.zf)) goto L_10a13058;
  /* 10a13033 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a13036 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13039 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a1303b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a1303d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a13040 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13043 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a13046 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13049 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1304c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10a1304f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a13052 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a13055 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10a13058:;
  /* 10a13058 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1305b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a1305e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a13060 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a13062 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a13065 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13068 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a1306b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a1306e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13071 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10a13074 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a13077 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a1307a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10a1307d:;
  /* 10a1307d jmp 0x10a12f91 */
  goto L_10a12f91;
L_10a13082:;
  /* 10a13082 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a13086 je 0x10a13094 */
  if (C.zf) goto L_10a13094;
  /* 10a13088 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a1308a call 0x10a09690 */
  push32(0x10a1308fu); f_10a09690();
  /* 10a1308f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13092 jmp 0x10a1309f */
  goto L_10a1309f;
L_10a13094:;
  /* 10a13094 push 0x10a31a64 */
  push32((uint32_t)(0x10a31a64u));
  /* 10a13099 call dword ptr [0x10a3434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3434c))), 0x10a1309fu);
L_10a1309f:;
  /* 10a1309f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a130a3 jbe 0x10a130b3 */
  if ((C.cf||C.zf)) goto L_10a130b3;
  /* 10a130a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a130a8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10a130ab mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a130ae sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a130b1 jmp 0x10a130b5 */
  goto L_10a130b5;
L_10a130b3:;
  /* 10a130b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a130b5:;
  /* 10a130b5 mov esp, ebp */
  ESP = (EBP);
  /* 10a130b7 pop ebp */
  EBP = (pop32());
  /* 10a130b8 ret  */
  ESPCHK(0x10a12f30u, _esp0);
  ESP += 4; return;
}

/* FUN_100130c0 @ 0x10a130c0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_10a130c0(void) {
  FTRACE(0x10a130c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a130c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a130c1 mov ebp, esp */
  EBP = (ESP);
  /* 10a130c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a130c6 push esi */
  push32((uint32_t)(ESI));
  /* 10a130c7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10a130cb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a130ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a130d1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a130d4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a130d7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a130db ja 0x10a13628 */
  if ((!C.cf&&!C.zf)) goto L_10a13628;
  /* 10a130e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a130e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a130e6 mov dl, byte ptr [eax + 0x10a13689] */
  DL = (r8((uint32_t)(EAX + 0x10a13689)));
  /* 10a130ec jmp dword ptr [edx*4 + 0x10a1362d] */
  switch (EDX) {
    case 0: goto L_10a13606;
    case 1: goto L_10a13115;
    case 2: goto L_10a1315b;
    case 3: goto L_10a132a8;
    case 4: goto L_10a132d0;
    case 5: goto L_10a1336f;
    case 6: goto L_10a133db;
    case 7: goto L_10a13404;
    case 8: goto L_10a13445;
    case 9: goto L_10a13527;
    case 10: goto L_10a1358e;
    case 11: goto L_10a135db;
    case 12: goto L_10a130f3;
    case 13: goto L_10a13138;
    case 14: goto L_10a1317e;
    case 15: goto L_10a1327e;
    case 16: goto L_10a13315;
    case 17: goto L_10a13342;
    case 18: goto L_10a13397;
    case 19: goto L_10a1341b;
    case 20: goto L_10a134c9;
    case 21: goto L_10a13558;
    case 22: goto L_10a13628;
    default: x86_unimpl("switch@0x10a130ec out of table"); return;
  }
L_10a130f3:;
  /* 10a130f3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a130f6 push ecx */
  push32((uint32_t)(ECX));
  /* 10a130f7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a130fa push edx */
  push32((uint32_t)(EDX));
  /* 10a130fb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a130fe mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10a13101 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a13104 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10a13107 push eax */
  push32((uint32_t)(EAX));
  /* 10a13108 call 0x10a136e0 */
  push32(0x10a1310du); f_10a136e0();
  /* 10a1310d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13110 jmp 0x10a13628 */
  goto L_10a13628;
L_10a13115:;
  /* 10a13115 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a13118 push ecx */
  push32((uint32_t)(ECX));
  /* 10a13119 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a1311c push edx */
  push32((uint32_t)(EDX));
  /* 10a1311d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a13120 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10a13123 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a13126 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10a1312a push eax */
  push32((uint32_t)(EAX));
  /* 10a1312b call 0x10a136e0 */
  push32(0x10a13130u); f_10a136e0();
  /* 10a13130 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13133 jmp 0x10a13628 */
  goto L_10a13628;
L_10a13138:;
  /* 10a13138 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a1313b push ecx */
  push32((uint32_t)(ECX));
  /* 10a1313c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a1313f push edx */
  push32((uint32_t)(EDX));
  /* 10a13140 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a13143 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a13146 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a13149 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10a1314d push eax */
  push32((uint32_t)(EAX));
  /* 10a1314e call 0x10a136e0 */
  push32(0x10a13153u); f_10a136e0();
  /* 10a13153 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13156 jmp 0x10a13628 */
  goto L_10a13628;
L_10a1315b:;
  /* 10a1315b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a1315e push ecx */
  push32((uint32_t)(ECX));
  /* 10a1315f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13162 push edx */
  push32((uint32_t)(EDX));
  /* 10a13163 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a13166 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a13169 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a1316c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10a13170 push eax */
  push32((uint32_t)(EAX));
  /* 10a13171 call 0x10a136e0 */
  push32(0x10a13176u); f_10a136e0();
  /* 10a13176 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13179 jmp 0x10a13628 */
  goto L_10a13628;
L_10a1317e:;
  /* 10a1317e cmp dword ptr [0x10a31a40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31a40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a13185 je 0x10a13206 */
  if (C.zf) goto L_10a13206;
  /* 10a13187 mov dword ptr [0x10a31a40], 0 */
  w32((uint32_t)(0x10a31a40), (0x0u));
  /* 10a13191 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a13194 push ecx */
  push32((uint32_t)(ECX));
  /* 10a13195 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a13198 push edx */
  push32((uint32_t)(EDX));
  /* 10a13199 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a1319c push eax */
  push32((uint32_t)(EAX));
  /* 10a1319d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a131a0 push ecx */
  push32((uint32_t)(ECX));
  /* 10a131a1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a131a4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10a131aa push eax */
  push32((uint32_t)(EAX));
  /* 10a131ab call 0x10a13890 */
  push32(0x10a131b0u); f_10a13890();
  /* 10a131b0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a131b3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a131b6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a131b9 jne 0x10a131c0 */
  if (!C.zf) goto L_10a131c0;
  /* 10a131bb jmp 0x10a13628 */
  goto L_10a13628;
L_10a131c0:;
  /* 10a131c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a131c3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a131c5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10a131c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a131cb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a131cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a131d0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a131d3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a131d5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a131d8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a131da sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a131dd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a131e0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a131e2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a131e5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a131e6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a131e9 push edx */
  push32((uint32_t)(EDX));
  /* 10a131ea mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a131ed push eax */
  push32((uint32_t)(EAX));
  /* 10a131ee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a131f1 push ecx */
  push32((uint32_t)(ECX));
  /* 10a131f2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a131f5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10a131fb push eax */
  push32((uint32_t)(EAX));
  /* 10a131fc call 0x10a13890 */
  push32(0x10a13201u); f_10a13890();
  /* 10a13201 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13204 jmp 0x10a13279 */
  goto L_10a13279;
L_10a13206:;
  /* 10a13206 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a13209 push ecx */
  push32((uint32_t)(ECX));
  /* 10a1320a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a1320d push edx */
  push32((uint32_t)(EDX));
  /* 10a1320e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13211 push eax */
  push32((uint32_t)(EAX));
  /* 10a13212 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a13215 push ecx */
  push32((uint32_t)(ECX));
  /* 10a13216 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a13219 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10a1321f push eax */
  push32((uint32_t)(EAX));
  /* 10a13220 call 0x10a13890 */
  push32(0x10a13225u); f_10a13890();
  /* 10a13225 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13228 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a1322b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1322e jne 0x10a13235 */
  if (!C.zf) goto L_10a13235;
  /* 10a13230 jmp 0x10a13628 */
  goto L_10a13628;
L_10a13235:;
  /* 10a13235 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13238 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a1323a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10a1323d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13240 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a13242 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13245 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13248 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a1324a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a1324d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a1324f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a13252 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a13255 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a13257 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a1325a push ecx */
  push32((uint32_t)(ECX));
  /* 10a1325b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a1325e push edx */
  push32((uint32_t)(EDX));
  /* 10a1325f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13262 push eax */
  push32((uint32_t)(EAX));
  /* 10a13263 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a13266 push ecx */
  push32((uint32_t)(ECX));
  /* 10a13267 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a1326a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10a13270 push eax */
  push32((uint32_t)(EAX));
  /* 10a13271 call 0x10a13890 */
  push32(0x10a13276u); f_10a13890();
  /* 10a13276 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a13279:;
  /* 10a13279 jmp 0x10a13628 */
  goto L_10a13628;
L_10a1327e:;
  /* 10a1327e mov ecx, dword ptr [0x10a31a40] */
  ECX = (r32((uint32_t)(0x10a31a40)));
  /* 10a13284 mov dword ptr [0x10a31a50], ecx */
  w32((uint32_t)(0x10a31a50), (ECX));
  /* 10a1328a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a1328d push edx */
  push32((uint32_t)(EDX));
  /* 10a1328e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13291 push eax */
  push32((uint32_t)(EAX));
  /* 10a13292 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a13294 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a13297 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a1329a push edx */
  push32((uint32_t)(EDX));
  /* 10a1329b call 0x10a13730 */
  push32(0x10a132a0u); f_10a13730();
  /* 10a132a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a132a3 jmp 0x10a13628 */
  goto L_10a13628;
L_10a132a8:;
  /* 10a132a8 mov eax, dword ptr [0x10a31a40] */
  EAX = (r32((uint32_t)(0x10a31a40)));
  /* 10a132ad mov dword ptr [0x10a31a50], eax */
  w32((uint32_t)(0x10a31a50), (EAX));
  /* 10a132b2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a132b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a132b6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a132b9 push edx */
  push32((uint32_t)(EDX));
  /* 10a132ba push 2 */
  push32((uint32_t)(0x2u));
  /* 10a132bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a132bf mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a132c2 push ecx */
  push32((uint32_t)(ECX));
  /* 10a132c3 call 0x10a13730 */
  push32(0x10a132c8u); f_10a13730();
  /* 10a132c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a132cb jmp 0x10a13628 */
  goto L_10a13628;
L_10a132d0:;
  /* 10a132d0 mov edx, dword ptr [0x10a31a40] */
  EDX = (r32((uint32_t)(0x10a31a40)));
  /* 10a132d6 mov dword ptr [0x10a31a50], edx */
  w32((uint32_t)(0x10a31a50), (EDX));
  /* 10a132dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a132df mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a132e2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a132e3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 10a132e8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a132ea mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a132ed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a132f1 jne 0x10a132fa */
  if (!C.zf) goto L_10a132fa;
  /* 10a132f3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_10a132fa:;
  /* 10a132fa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a132fd push edx */
  push32((uint32_t)(EDX));
  /* 10a132fe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13301 push eax */
  push32((uint32_t)(EAX));
  /* 10a13302 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a13304 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a13307 push ecx */
  push32((uint32_t)(ECX));
  /* 10a13308 call 0x10a13730 */
  push32(0x10a1330du); f_10a13730();
  /* 10a1330d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13310 jmp 0x10a13628 */
  goto L_10a13628;
L_10a13315:;
  /* 10a13315 mov edx, dword ptr [0x10a31a40] */
  EDX = (r32((uint32_t)(0x10a31a40)));
  /* 10a1331b mov dword ptr [0x10a31a50], edx */
  w32((uint32_t)(0x10a31a50), (EDX));
  /* 10a13321 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a13324 push eax */
  push32((uint32_t)(EAX));
  /* 10a13325 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13328 push ecx */
  push32((uint32_t)(ECX));
  /* 10a13329 push 3 */
  push32((uint32_t)(0x3u));
  /* 10a1332b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a1332e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10a13331 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13334 push eax */
  push32((uint32_t)(EAX));
  /* 10a13335 call 0x10a13730 */
  push32(0x10a1333au); f_10a13730();
  /* 10a1333a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1333d jmp 0x10a13628 */
  goto L_10a13628;
L_10a13342:;
  /* 10a13342 mov ecx, dword ptr [0x10a31a40] */
  ECX = (r32((uint32_t)(0x10a31a40)));
  /* 10a13348 mov dword ptr [0x10a31a50], ecx */
  w32((uint32_t)(0x10a31a50), (ECX));
  /* 10a1334e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a13351 push edx */
  push32((uint32_t)(EDX));
  /* 10a13352 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13355 push eax */
  push32((uint32_t)(EAX));
  /* 10a13356 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a13358 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a1335b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10a1335e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13361 push edx */
  push32((uint32_t)(EDX));
  /* 10a13362 call 0x10a13730 */
  push32(0x10a13367u); f_10a13730();
  /* 10a13367 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1336a jmp 0x10a13628 */
  goto L_10a13628;
L_10a1336f:;
  /* 10a1336f mov eax, dword ptr [0x10a31a40] */
  EAX = (r32((uint32_t)(0x10a31a40)));
  /* 10a13374 mov dword ptr [0x10a31a50], eax */
  w32((uint32_t)(0x10a31a50), (EAX));
  /* 10a13379 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a1337c push ecx */
  push32((uint32_t)(ECX));
  /* 10a1337d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13380 push edx */
  push32((uint32_t)(EDX));
  /* 10a13381 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a13383 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a13386 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a13389 push ecx */
  push32((uint32_t)(ECX));
  /* 10a1338a call 0x10a13730 */
  push32(0x10a1338fu); f_10a13730();
  /* 10a1338f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13392 jmp 0x10a13628 */
  goto L_10a13628;
L_10a13397:;
  /* 10a13397 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a1339a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1339e jg 0x10a133bc */
  if ((!C.zf&&C.sf==C.of)) goto L_10a133bc;
  /* 10a133a0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a133a3 push eax */
  push32((uint32_t)(EAX));
  /* 10a133a4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a133a7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a133a8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a133ab mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10a133b1 push eax */
  push32((uint32_t)(EAX));
  /* 10a133b2 call 0x10a136e0 */
  push32(0x10a133b7u); f_10a136e0();
  /* 10a133b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a133ba jmp 0x10a133d6 */
  goto L_10a133d6;
L_10a133bc:;
  /* 10a133bc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a133bf push ecx */
  push32((uint32_t)(ECX));
  /* 10a133c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a133c3 push edx */
  push32((uint32_t)(EDX));
  /* 10a133c4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a133c7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10a133cd push ecx */
  push32((uint32_t)(ECX));
  /* 10a133ce call 0x10a136e0 */
  push32(0x10a133d3u); f_10a136e0();
  /* 10a133d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a133d6:;
  /* 10a133d6 jmp 0x10a13628 */
  goto L_10a13628;
L_10a133db:;
  /* 10a133db mov edx, dword ptr [0x10a31a40] */
  EDX = (r32((uint32_t)(0x10a31a40)));
  /* 10a133e1 mov dword ptr [0x10a31a50], edx */
  w32((uint32_t)(0x10a31a50), (EDX));
  /* 10a133e7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a133ea push eax */
  push32((uint32_t)(EAX));
  /* 10a133eb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a133ee push ecx */
  push32((uint32_t)(ECX));
  /* 10a133ef push 2 */
  push32((uint32_t)(0x2u));
  /* 10a133f1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a133f4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a133f6 push eax */
  push32((uint32_t)(EAX));
  /* 10a133f7 call 0x10a13730 */
  push32(0x10a133fcu); f_10a13730();
  /* 10a133fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a133ff jmp 0x10a13628 */
  goto L_10a13628;
L_10a13404:;
  /* 10a13404 mov ecx, dword ptr [0x10a31a40] */
  ECX = (r32((uint32_t)(0x10a31a40)));
  /* 10a1340a mov dword ptr [0x10a31a50], ecx */
  w32((uint32_t)(0x10a31a50), (ECX));
  /* 10a13410 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a13413 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10a13416 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a13419 jmp 0x10a1346d */
  goto L_10a1346d;
L_10a1341b:;
  /* 10a1341b mov ecx, dword ptr [0x10a31a40] */
  ECX = (r32((uint32_t)(0x10a31a40)));
  /* 10a13421 mov dword ptr [0x10a31a50], ecx */
  w32((uint32_t)(0x10a31a50), (ECX));
  /* 10a13427 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a1342a push edx */
  push32((uint32_t)(EDX));
  /* 10a1342b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a1342e push eax */
  push32((uint32_t)(EAX));
  /* 10a1342f push 1 */
  push32((uint32_t)(0x1u));
  /* 10a13431 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a13434 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10a13437 push edx */
  push32((uint32_t)(EDX));
  /* 10a13438 call 0x10a13730 */
  push32(0x10a1343du); f_10a13730();
  /* 10a1343d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13440 jmp 0x10a13628 */
  goto L_10a13628;
L_10a13445:;
  /* 10a13445 mov eax, dword ptr [0x10a31a40] */
  EAX = (r32((uint32_t)(0x10a31a40)));
  /* 10a1344a mov dword ptr [0x10a31a50], eax */
  w32((uint32_t)(0x10a31a50), (EAX));
  /* 10a1344f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a13452 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a13456 jne 0x10a13461 */
  if (!C.zf) goto L_10a13461;
  /* 10a13458 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 10a1345f jmp 0x10a1346d */
  goto L_10a1346d;
L_10a13461:;
  /* 10a13461 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a13464 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10a13467 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a1346a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a1346d:;
  /* 10a1346d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a13470 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10a13473 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a13476 jge 0x10a13481 */
  if ((C.sf==C.of)) goto L_10a13481;
  /* 10a13478 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a1347f jmp 0x10a134ae */
  goto L_10a134ae;
L_10a13481:;
  /* 10a13481 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a13484 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10a13487 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a13488 mov ecx, 7 */
  ECX = (0x7u);
  /* 10a1348d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a1348f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a13492 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a13495 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10a13498 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a13499 mov ecx, 7 */
  ECX = (0x7u);
  /* 10a1349e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a134a0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a134a3 jl 0x10a134ae */
  if ((C.sf!=C.of)) goto L_10a134ae;
  /* 10a134a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a134a8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a134ab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a134ae:;
  /* 10a134ae mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a134b1 push eax */
  push32((uint32_t)(EAX));
  /* 10a134b2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a134b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a134b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a134b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a134bb push edx */
  push32((uint32_t)(EDX));
  /* 10a134bc call 0x10a13730 */
  push32(0x10a134c1u); f_10a13730();
  /* 10a134c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a134c4 jmp 0x10a13628 */
  goto L_10a13628;
L_10a134c9:;
  /* 10a134c9 cmp dword ptr [0x10a31a40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31a40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a134d0 je 0x10a13500 */
  if (C.zf) goto L_10a13500;
  /* 10a134d2 mov dword ptr [0x10a31a40], 0 */
  w32((uint32_t)(0x10a31a40), (0x0u));
  /* 10a134dc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a134df push eax */
  push32((uint32_t)(EAX));
  /* 10a134e0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a134e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a134e4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a134e7 push edx */
  push32((uint32_t)(EDX));
  /* 10a134e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a134eb push eax */
  push32((uint32_t)(EAX));
  /* 10a134ec mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a134ef mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10a134f5 push edx */
  push32((uint32_t)(EDX));
  /* 10a134f6 call 0x10a13890 */
  push32(0x10a134fbu); f_10a13890();
  /* 10a134fb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a134fe jmp 0x10a13522 */
  goto L_10a13522;
L_10a13500:;
  /* 10a13500 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a13503 push eax */
  push32((uint32_t)(EAX));
  /* 10a13504 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a13507 push ecx */
  push32((uint32_t)(ECX));
  /* 10a13508 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a1350b push edx */
  push32((uint32_t)(EDX));
  /* 10a1350c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a1350f push eax */
  push32((uint32_t)(EAX));
  /* 10a13510 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a13513 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10a13519 push edx */
  push32((uint32_t)(EDX));
  /* 10a1351a call 0x10a13890 */
  push32(0x10a1351fu); f_10a13890();
  /* 10a1351f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a13522:;
  /* 10a13522 jmp 0x10a13628 */
  goto L_10a13628;
L_10a13527:;
  /* 10a13527 mov dword ptr [0x10a31a40], 0 */
  w32((uint32_t)(0x10a31a40), (0x0u));
  /* 10a13531 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a13534 push eax */
  push32((uint32_t)(EAX));
  /* 10a13535 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a13538 push ecx */
  push32((uint32_t)(ECX));
  /* 10a13539 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a1353c push edx */
  push32((uint32_t)(EDX));
  /* 10a1353d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a13540 push eax */
  push32((uint32_t)(EAX));
  /* 10a13541 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a13544 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10a1354a push edx */
  push32((uint32_t)(EDX));
  /* 10a1354b call 0x10a13890 */
  push32(0x10a13550u); f_10a13890();
  /* 10a13550 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13553 jmp 0x10a13628 */
  goto L_10a13628;
L_10a13558:;
  /* 10a13558 mov eax, dword ptr [0x10a31a40] */
  EAX = (r32((uint32_t)(0x10a31a40)));
  /* 10a1355d mov dword ptr [0x10a31a50], eax */
  w32((uint32_t)(0x10a31a50), (EAX));
  /* 10a13562 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a13565 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10a13568 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a13569 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10a1356e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a13570 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a13573 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a13576 push edx */
  push32((uint32_t)(EDX));
  /* 10a13577 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a1357a push eax */
  push32((uint32_t)(EAX));
  /* 10a1357b push 2 */
  push32((uint32_t)(0x2u));
  /* 10a1357d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a13580 push ecx */
  push32((uint32_t)(ECX));
  /* 10a13581 call 0x10a13730 */
  push32(0x10a13586u); f_10a13730();
  /* 10a13586 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13589 jmp 0x10a13628 */
  goto L_10a13628;
L_10a1358e:;
  /* 10a1358e mov edx, dword ptr [0x10a31a40] */
  EDX = (r32((uint32_t)(0x10a31a40)));
  /* 10a13594 mov dword ptr [0x10a31a50], edx */
  w32((uint32_t)(0x10a31a50), (EDX));
  /* 10a1359a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a1359d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 10a135a0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a135a1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10a135a6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a135a8 mov ecx, eax */
  ECX = (EAX);
  /* 10a135aa add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a135ad imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a135b0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a135b3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a135b6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a135b7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 10a135bc idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a135be add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a135c0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a135c3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a135c6 push eax */
  push32((uint32_t)(EAX));
  /* 10a135c7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a135ca push ecx */
  push32((uint32_t)(ECX));
  /* 10a135cb push 4 */
  push32((uint32_t)(0x4u));
  /* 10a135cd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a135d0 push edx */
  push32((uint32_t)(EDX));
  /* 10a135d1 call 0x10a13730 */
  push32(0x10a135d6u); f_10a13730();
  /* 10a135d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a135d9 jmp 0x10a13628 */
  goto L_10a13628;
L_10a135db:;
  /* 10a135db call 0x10a146f0 */
  push32(0x10a135e0u); f_10a146f0();
  /* 10a135e0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a135e3 push eax */
  push32((uint32_t)(EAX));
  /* 10a135e4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a135e7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a135e8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a135eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a135ed cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a135f1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 10a135f4 mov ecx, dword ptr [eax*4 + 0x10a30e1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10a30e1c)));
  /* 10a135fb push ecx */
  push32((uint32_t)(ECX));
  /* 10a135fc call 0x10a136e0 */
  push32(0x10a13601u); f_10a136e0();
  /* 10a13601 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13604 jmp 0x10a13628 */
  goto L_10a13628;
L_10a13606:;
  /* 10a13606 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13609 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a1360b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 10a1360e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13611 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a13613 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13616 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13619 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a1361b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a1361e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a13620 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a13623 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a13626 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10a13628:;
  /* 10a13628 pop esi */
  ESI = (pop32());
  /* 10a13629 mov esp, ebp */
  ESP = (EBP);
  /* 10a1362b pop ebp */
  EBP = (pop32());
  /* 10a1362c ret  */
  ESPCHK(0x10a130c0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x10a136e0 (72 bytes, 30 insns) */
void f_10a136e0(void) {
  FTRACE(0x10a136e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a136e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a136e1 mov ebp, esp */
  EBP = (ESP);
L_10a136e3:;
  /* 10a136e3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a136e6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a136e9 je 0x10a13726 */
  if (C.zf) goto L_10a13726;
  /* 10a136eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a136ee movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a136f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a136f3 je 0x10a13726 */
  if (C.zf) goto L_10a13726;
  /* 10a136f5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a136f8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a136fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a136fd mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a136ff mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10a13701 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a13704 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a13706 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13709 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a1370c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a1370e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a13711 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13714 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10a13717 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a1371a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a1371c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a1371f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13722 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a13724 jmp 0x10a136e3 */
  goto L_10a136e3;
L_10a13726:;
  /* 10a13726 pop ebp */
  EBP = (pop32());
  /* 10a13727 ret  */
  ESPCHK(0x10a136e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013730 @ 0x10a13730 (173 bytes, 64 insns) */
void f_10a13730(void) {
  FTRACE(0x10a13730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a13730 push ebp */
  push32((uint32_t)(EBP));
  /* 10a13731 mov ebp, esp */
  EBP = (ESP);
  /* 10a13733 push ecx */
  push32((uint32_t)(ECX));
  /* 10a13734 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a1373b cmp dword ptr [0x10a31a50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31a50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a13742 je 0x10a1375a */
  if (C.zf) goto L_10a1375a;
  /* 10a13744 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a13747 push eax */
  push32((uint32_t)(EAX));
  /* 10a13748 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a1374b push ecx */
  push32((uint32_t)(ECX));
  /* 10a1374c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1374f push edx */
  push32((uint32_t)(EDX));
  /* 10a13750 call 0x10a137e0 */
  push32(0x10a13755u); f_10a137e0();
  /* 10a13755 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13758 jmp 0x10a137d9 */
  goto L_10a137d9;
L_10a1375a:;
  /* 10a1375a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a1375d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a13760 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a13762 jae 0x10a137d0 */
  if (!C.cf) goto L_10a137d0;
  /* 10a13764 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a13767 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a1376a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10a1376d jmp 0x10a13778 */
  goto L_10a13778;
L_10a1376f:;
  /* 10a1376f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a13772 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a13775 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10a13778:;
  /* 10a13778 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a1377b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1377e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a13780 je 0x10a137b4 */
  if (C.zf) goto L_10a137b4;
  /* 10a13782 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a13785 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a13786 mov ecx, 0xa */
  ECX = (0xau);
  /* 10a1378b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a1378d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13790 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13793 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a13795 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a13798 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 10a1379b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1379e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a1379f mov ecx, 0xa */
  ECX = (0xau);
  /* 10a137a4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a137a6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a137a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a137ac add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a137af mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a137b2 jmp 0x10a1376f */
  goto L_10a1376f;
L_10a137b4:;
  /* 10a137b4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a137b7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a137b9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a137bc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a137bf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a137c1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a137c4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a137c6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a137c9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a137cc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a137ce jmp 0x10a137d9 */
  goto L_10a137d9;
L_10a137d0:;
  /* 10a137d0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a137d3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10a137d9:;
  /* 10a137d9 mov esp, ebp */
  ESP = (EBP);
  /* 10a137db pop ebp */
  EBP = (pop32());
  /* 10a137dc ret  */
  ESPCHK(0x10a13730u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x10a137e0 (172 bytes, 65 insns) */
void f_10a137e0(void) {
  FTRACE(0x10a137e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a137e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a137e1 mov ebp, esp */
  EBP = (ESP);
  /* 10a137e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a137e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a137e9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a137eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a137ee mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a137f1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a137f4 jbe 0x10a1383b */
  if ((C.cf||C.zf)) goto L_10a1383b;
L_10a137f6:;
  /* 10a137f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a137f9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a137fa mov ecx, 0xa */
  ECX = (0xau);
  /* 10a137ff idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a13801 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13804 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a13807 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a13809 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a1380c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1380f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a13812 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13815 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a13817 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a1381a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a1381d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a1381f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a13822 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a13823 mov ecx, 0xa */
  ECX = (0xau);
  /* 10a13828 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a1382a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a1382d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a13831 jle 0x10a1383b */
  if ((C.zf||C.sf!=C.of)) goto L_10a1383b;
  /* 10a13833 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13836 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a13839 ja 0x10a137f6 */
  if ((!C.cf&&!C.zf)) goto L_10a137f6;
L_10a1383b:;
  /* 10a1383b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a1383e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a13840 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a13843 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a13846 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a13849 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10a1384b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a1384e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a13851 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a13854:;
  /* 10a13854 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a13857 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a13859 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10a1385c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a1385f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a13862 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a13864 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10a13866 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a13869 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a1386c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a1386f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a13872 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10a13875 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10a13877 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a1387a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1387d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a13880 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a13883 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a13886 jb 0x10a13854 */
  if (C.cf) goto L_10a13854;
  /* 10a13888 mov esp, ebp */
  ESP = (EBP);
  /* 10a1388a pop ebp */
  EBP = (pop32());
  /* 10a1388b ret  */
  ESPCHK(0x10a137e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013890 @ 0x10a13890 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_10a13890(void) {
  FTRACE(0x10a13890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a13890 push ebp */
  push32((uint32_t)(EBP));
  /* 10a13891 mov ebp, esp */
  EBP = (ESP);
  /* 10a13893 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10a13896:;
  /* 10a13896 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a13899 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a1389c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a1389e je 0x10a13d0c */
  if (C.zf) goto L_10a13d0c;
  /* 10a138a4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a138a7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a138aa je 0x10a13d0c */
  if (C.zf) goto L_10a13d0c;
  /* 10a138b0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a138b4 mov dword ptr [0x10a31a50], 0 */
  w32((uint32_t)(0x10a31a50), (0x0u));
  /* 10a138be mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a138c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a138c8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a138cb jmp 0x10a138d6 */
  goto L_10a138d6;
L_10a138cd:;
  /* 10a138cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a138d0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a138d3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10a138d6:;
  /* 10a138d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a138d9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a138dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a138df movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a138e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a138e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a138e8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a138eb cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a138ed jne 0x10a138f1 */
  if (!C.zf) goto L_10a138f1;
  /* 10a138ef jmp 0x10a138cd */
  goto L_10a138cd;
L_10a138f1:;
  /* 10a138f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a138f4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a138f7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a138fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a138fd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a13900 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a13903 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a13906 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a13909 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10a1390c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a13910 ja 0x10a13c60 */
  if ((!C.cf&&!C.zf)) goto L_10a13c60;
  /* 10a13916 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a13919 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a1391b mov al, byte ptr [ecx + 0x10a13d3c] */
  AL = (r8((uint32_t)(ECX + 0x10a13d3c)));
  /* 10a13921 jmp dword ptr [eax*4 + 0x10a13d10] */
  switch (EAX) {
    case 0: goto L_10a13b7f;
    case 1: goto L_10a13a63;
    case 2: goto L_10a139ee;
    case 3: goto L_10a13928;
    case 4: goto L_10a13966;
    case 5: goto L_10a139c7;
    case 6: goto L_10a13a15;
    case 7: goto L_10a13a3c;
    case 8: goto L_10a13aaa;
    case 9: goto L_10a139a4;
    case 10: goto L_10a13c60;
    default: x86_unimpl("switch@0x10a13921 out of table"); return;
  }
L_10a13928:;
  /* 10a13928 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a1392b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10a1392e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a13931 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a13934 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a13937 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1393b ja 0x10a13961 */
  if ((!C.cf&&!C.zf)) goto L_10a13961;
  /* 10a1393d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a13940 jmp dword ptr [ecx*4 + 0x10a13d8f] */
  switch (ECX) {
    case 0: goto L_10a13947;
    case 1: goto L_10a13951;
    case 2: goto L_10a13957;
    case 3: goto L_10a1395d;
    case 4: goto L_10a13985;
    case 5: goto L_10a1398f;
    case 6: goto L_10a13995;
    case 7: goto L_10a1399b;
    default: x86_unimpl("switch@0x10a13940 out of table"); return;
  }
L_10a13947:;
  /* 10a13947 mov dword ptr [0x10a31a50], 1 */
  w32((uint32_t)(0x10a31a50), (0x1u));
L_10a13951:;
  /* 10a13951 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 10a13955 jmp 0x10a13961 */
  goto L_10a13961;
L_10a13957:;
  /* 10a13957 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 10a1395b jmp 0x10a13961 */
  goto L_10a13961;
L_10a1395d:;
  /* 10a1395d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_10a13961:;
  /* 10a13961 jmp 0x10a13c60 */
  goto L_10a13c60;
L_10a13966:;
  /* 10a13966 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a13969 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10a1396c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a1396f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a13972 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10a13975 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a13979 ja 0x10a1399f */
  if ((!C.cf&&!C.zf)) goto L_10a1399f;
  /* 10a1397b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a1397e jmp dword ptr [ecx*4 + 0x10a13d9f] */
  switch (ECX) {
    case 0: goto L_10a13985;
    case 1: goto L_10a1398f;
    case 2: goto L_10a13995;
    case 3: goto L_10a1399b;
    default: x86_unimpl("switch@0x10a1397e out of table"); return;
  }
L_10a13985:;
  /* 10a13985 mov dword ptr [0x10a31a50], 1 */
  w32((uint32_t)(0x10a31a50), (0x1u));
L_10a1398f:;
  /* 10a1398f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 10a13993 jmp 0x10a1399f */
  goto L_10a1399f;
L_10a13995:;
  /* 10a13995 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 10a13999 jmp 0x10a1399f */
  goto L_10a1399f;
L_10a1399b:;
  /* 10a1399b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_10a1399f:;
  /* 10a1399f jmp 0x10a13c60 */
  goto L_10a13c60;
L_10a139a4:;
  /* 10a139a4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a139a7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10a139aa cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a139ae je 0x10a139b8 */
  if (C.zf) goto L_10a139b8;
  /* 10a139b0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a139b4 je 0x10a139be */
  if (C.zf) goto L_10a139be;
  /* 10a139b6 jmp 0x10a139c2 */
  goto L_10a139c2;
L_10a139b8:;
  /* 10a139b8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 10a139bc jmp 0x10a139c2 */
  goto L_10a139c2;
L_10a139be:;
  /* 10a139be mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_10a139c2:;
  /* 10a139c2 jmp 0x10a13c60 */
  goto L_10a13c60;
L_10a139c7:;
  /* 10a139c7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a139ca mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10a139cd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a139d1 je 0x10a139db */
  if (C.zf) goto L_10a139db;
  /* 10a139d3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a139d7 je 0x10a139e5 */
  if (C.zf) goto L_10a139e5;
  /* 10a139d9 jmp 0x10a139e9 */
  goto L_10a139e9;
L_10a139db:;
  /* 10a139db mov dword ptr [0x10a31a50], 1 */
  w32((uint32_t)(0x10a31a50), (0x1u));
L_10a139e5:;
  /* 10a139e5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_10a139e9:;
  /* 10a139e9 jmp 0x10a13c60 */
  goto L_10a13c60;
L_10a139ee:;
  /* 10a139ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a139f1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10a139f4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a139f8 je 0x10a13a02 */
  if (C.zf) goto L_10a13a02;
  /* 10a139fa cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a139fe je 0x10a13a0c */
  if (C.zf) goto L_10a13a0c;
  /* 10a13a00 jmp 0x10a13a10 */
  goto L_10a13a10;
L_10a13a02:;
  /* 10a13a02 mov dword ptr [0x10a31a50], 1 */
  w32((uint32_t)(0x10a31a50), (0x1u));
L_10a13a0c:;
  /* 10a13a0c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_10a13a10:;
  /* 10a13a10 jmp 0x10a13c60 */
  goto L_10a13c60;
L_10a13a15:;
  /* 10a13a15 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a13a18 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 10a13a1b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a13a1f je 0x10a13a29 */
  if (C.zf) goto L_10a13a29;
  /* 10a13a21 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a13a25 je 0x10a13a33 */
  if (C.zf) goto L_10a13a33;
  /* 10a13a27 jmp 0x10a13a37 */
  goto L_10a13a37;
L_10a13a29:;
  /* 10a13a29 mov dword ptr [0x10a31a50], 1 */
  w32((uint32_t)(0x10a31a50), (0x1u));
L_10a13a33:;
  /* 10a13a33 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_10a13a37:;
  /* 10a13a37 jmp 0x10a13c60 */
  goto L_10a13c60;
L_10a13a3c:;
  /* 10a13a3c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a13a3f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10a13a42 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a13a46 je 0x10a13a50 */
  if (C.zf) goto L_10a13a50;
  /* 10a13a48 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a13a4c je 0x10a13a5a */
  if (C.zf) goto L_10a13a5a;
  /* 10a13a4e jmp 0x10a13a5e */
  goto L_10a13a5e;
L_10a13a50:;
  /* 10a13a50 mov dword ptr [0x10a31a50], 1 */
  w32((uint32_t)(0x10a31a50), (0x1u));
L_10a13a5a:;
  /* 10a13a5a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_10a13a5e:;
  /* 10a13a5e jmp 0x10a13c60 */
  goto L_10a13c60;
L_10a13a63:;
  /* 10a13a63 push 0x10a2dac4 */
  push32((uint32_t)(0x10a2dac4u));
  /* 10a13a68 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a13a6b push ecx */
  push32((uint32_t)(ECX));
  /* 10a13a6c call 0x10a142c0 */
  push32(0x10a13a71u); f_10a142c0();
  /* 10a13a71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13a74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a13a76 jne 0x10a13a83 */
  if (!C.zf) goto L_10a13a83;
  /* 10a13a78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a13a7b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13a7e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a13a81 jmp 0x10a13aa1 */
  goto L_10a13aa1;
L_10a13a83:;
  /* 10a13a83 push 0x10a2dac0 */
  push32((uint32_t)(0x10a2dac0u));
  /* 10a13a88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a13a8b push eax */
  push32((uint32_t)(EAX));
  /* 10a13a8c call 0x10a142c0 */
  push32(0x10a13a91u); f_10a142c0();
  /* 10a13a91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13a94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a13a96 jne 0x10a13aa1 */
  if (!C.zf) goto L_10a13aa1;
  /* 10a13a98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a13a9b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13a9e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a13aa1:;
  /* 10a13aa1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 10a13aa5 jmp 0x10a13c60 */
  goto L_10a13c60;
L_10a13aaa:;
  /* 10a13aaa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a13aad cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a13ab1 jg 0x10a13ac1 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a13ac1;
  /* 10a13ab3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a13ab6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10a13abc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10a13abf jmp 0x10a13acd */
  goto L_10a13acd;
L_10a13ac1:;
  /* 10a13ac1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a13ac4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10a13aca mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10a13acd:;
  /* 10a13acd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a13ad1 jle 0x10a13b74 */
  if ((C.zf||C.sf!=C.of)) goto L_10a13b74;
  /* 10a13ad7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a13ada cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a13add jbe 0x10a13b74 */
  if ((C.cf||C.zf)) goto L_10a13b74;
  /* 10a13ae3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a13ae6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a13ae8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a13aea mov ecx, dword ptr [0x10a2fc98] */
  ECX = (r32((uint32_t)(0x10a2fc98)));
  /* 10a13af0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a13af2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10a13af6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10a13afc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a13afe je 0x10a13b37 */
  if (C.zf) goto L_10a13b37;
  /* 10a13b00 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a13b03 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a13b06 jbe 0x10a13b37 */
  if ((C.cf||C.zf)) goto L_10a13b37;
  /* 10a13b08 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13b0b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a13b0d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a13b10 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a13b12 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10a13b14 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13b17 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a13b19 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13b1c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13b1f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a13b21 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a13b24 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13b27 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10a13b2a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a13b2d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a13b2f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a13b32 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a13b35 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10a13b37:;
  /* 10a13b37 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13b3a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a13b3c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a13b3f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a13b41 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10a13b43 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13b46 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a13b48 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13b4b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13b4e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a13b50 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a13b53 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13b56 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10a13b59 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a13b5c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a13b5e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a13b61 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a13b64 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a13b66 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a13b69 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a13b6c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10a13b6f jmp 0x10a13acd */
  goto L_10a13acd;
L_10a13b74:;
  /* 10a13b74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a13b77 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a13b7a jmp 0x10a13896 */
  goto L_10a13896;
L_10a13b7f:;
  /* 10a13b7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a13b82 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a13b85 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a13b87 je 0x10a13c52 */
  if (C.zf) goto L_10a13c52;
  /* 10a13b8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a13b90 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13b93 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10a13b96:;
  /* 10a13b96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a13b99 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a13b9c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a13b9e je 0x10a13c50 */
  if (C.zf) goto L_10a13c50;
  /* 10a13ba4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a13ba7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a13baa je 0x10a13c50 */
  if (C.zf) goto L_10a13c50;
  /* 10a13bb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a13bb3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a13bb6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a13bb9 jne 0x10a13bc9 */
  if (!C.zf) goto L_10a13bc9;
  /* 10a13bbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a13bbe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13bc1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10a13bc4 jmp 0x10a13c50 */
  goto L_10a13c50;
L_10a13bc9:;
  /* 10a13bc9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a13bcc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a13bce mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a13bd0 mov edx, dword ptr [0x10a2fc98] */
  EDX = (r32((uint32_t)(0x10a2fc98)));
  /* 10a13bd6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a13bd8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10a13bdc and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10a13be1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a13be3 je 0x10a13c1c */
  if (C.zf) goto L_10a13c1c;
  /* 10a13be5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a13be8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a13beb jbe 0x10a13c1c */
  if ((C.cf||C.zf)) goto L_10a13c1c;
  /* 10a13bed mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13bf0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a13bf2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a13bf5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a13bf7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a13bf9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13bfc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a13bfe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13c01 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13c04 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a13c06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a13c09 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13c0c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a13c0f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a13c12 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a13c14 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a13c17 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a13c1a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10a13c1c:;
  /* 10a13c1c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13c1f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a13c21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a13c24 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a13c26 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10a13c28 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13c2b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a13c2d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13c30 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13c33 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a13c35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a13c38 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13c3b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10a13c3e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a13c41 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a13c43 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a13c46 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a13c49 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a13c4b jmp 0x10a13b96 */
  goto L_10a13b96;
L_10a13c50:;
  /* 10a13c50 jmp 0x10a13c5b */
  goto L_10a13c5b;
L_10a13c52:;
  /* 10a13c52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a13c55 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13c58 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10a13c5b:;
  /* 10a13c5b jmp 0x10a13896 */
  goto L_10a13896;
L_10a13c60:;
  /* 10a13c60 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a13c64 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a13c66 je 0x10a13c8c */
  if (C.zf) goto L_10a13c8c;
  /* 10a13c68 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a13c6b push edx */
  push32((uint32_t)(EDX));
  /* 10a13c6c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a13c6f push eax */
  push32((uint32_t)(EAX));
  /* 10a13c70 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13c73 push ecx */
  push32((uint32_t)(ECX));
  /* 10a13c74 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a13c77 push edx */
  push32((uint32_t)(EDX));
  /* 10a13c78 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10a13c7b push eax */
  push32((uint32_t)(EAX));
  /* 10a13c7c call 0x10a130c0 */
  push32(0x10a13c81u); f_10a130c0();
  /* 10a13c81 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13c84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a13c87 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10a13c8a jmp 0x10a13d07 */
  goto L_10a13d07;
L_10a13c8c:;
  /* 10a13c8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a13c8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a13c91 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a13c93 mov ecx, dword ptr [0x10a2fc98] */
  ECX = (r32((uint32_t)(0x10a2fc98)));
  /* 10a13c99 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a13c9b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10a13c9f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10a13ca5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a13ca7 je 0x10a13cd8 */
  if (C.zf) goto L_10a13cd8;
  /* 10a13ca9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13cac mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a13cae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a13cb1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a13cb3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10a13cb5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13cb8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a13cba add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13cbd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13cc0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a13cc2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a13cc5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13cc8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10a13ccb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a13cce mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a13cd0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a13cd3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a13cd6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10a13cd8:;
  /* 10a13cd8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13cdb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a13cdd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a13ce0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a13ce2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a13ce4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13ce7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a13ce9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13cec mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13cef mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a13cf1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a13cf4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13cf7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a13cfa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a13cfd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a13cff sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a13d02 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a13d05 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10a13d07:;
  /* 10a13d07 jmp 0x10a13896 */
  goto L_10a13896;
L_10a13d0c:;
  /* 10a13d0c mov esp, ebp */
  ESP = (EBP);
  /* 10a13d0e pop ebp */
  EBP = (pop32());
  /* 10a13d0f ret  */
  ESPCHK(0x10a13890u, _esp0);
  ESP += 4; return;
}

/* FUN_10013db0 @ 0x10a13db0 (650 bytes, 178 insns) */
void f_10a13db0(void) {
  FTRACE(0x10a13db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a13db0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a13db1 mov ebp, esp */
  EBP = (ESP);
  /* 10a13db3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a13db9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a13dbd jne 0x10a13f19 */
  if (!C.zf) goto L_10a13f19;
  /* 10a13dc3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a13dc6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 10a13dcc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 10a13dd2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a13dd5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a13ddc mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 10a13de6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a13de8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10a13dee push edx */
  push32((uint32_t)(EDX));
  /* 10a13def mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a13df2 push eax */
  push32((uint32_t)(EAX));
  /* 10a13df3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13df6 push ecx */
  push32((uint32_t)(ECX));
  /* 10a13df7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a13dfa push edx */
  push32((uint32_t)(EDX));
  /* 10a13dfb call 0x10a151d0 */
  push32(0x10a13e00u); f_10a151d0();
  /* 10a13e00 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13e03 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a13e06 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a13e0a jne 0x10a13e9f */
  if (!C.zf) goto L_10a13e9f;
  /* 10a13e10 call dword ptr [0x10a34388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34388))), 0x10a13e16u);
  /* 10a13e16 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a13e19 je 0x10a13e20 */
  if (C.zf) goto L_10a13e20;
  /* 10a13e1b jmp 0x10a13efd */
  goto L_10a13efd;
L_10a13e20:;
  /* 10a13e20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a13e22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a13e24 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a13e26 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13e29 push eax */
  push32((uint32_t)(EAX));
  /* 10a13e2a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a13e2d push ecx */
  push32((uint32_t)(ECX));
  /* 10a13e2e call 0x10a151d0 */
  push32(0x10a13e33u); f_10a151d0();
  /* 10a13e33 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13e36 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 10a13e3c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a13e43 jne 0x10a13e4a */
  if (!C.zf) goto L_10a13e4a;
  /* 10a13e45 jmp 0x10a13efd */
  goto L_10a13efd;
L_10a13e4a:;
  /* 10a13e4a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 10a13e4c push 0x10a2dacc */
  push32((uint32_t)(0x10a2daccu));
  /* 10a13e51 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a13e53 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10a13e59 push edx */
  push32((uint32_t)(EDX));
  /* 10a13e5a call 0x10a05bf0 */
  push32(0x10a13e5fu); f_10a05bf0();
  /* 10a13e5f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13e62 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a13e65 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a13e69 jne 0x10a13e70 */
  if (!C.zf) goto L_10a13e70;
  /* 10a13e6b jmp 0x10a13efd */
  goto L_10a13efd;
L_10a13e70:;
  /* 10a13e70 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a13e77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a13e79 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 10a13e7f push eax */
  push32((uint32_t)(EAX));
  /* 10a13e80 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a13e83 push ecx */
  push32((uint32_t)(ECX));
  /* 10a13e84 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13e87 push edx */
  push32((uint32_t)(EDX));
  /* 10a13e88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a13e8b push eax */
  push32((uint32_t)(EAX));
  /* 10a13e8c call 0x10a151d0 */
  push32(0x10a13e91u); f_10a151d0();
  /* 10a13e91 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13e94 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a13e97 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a13e9b jne 0x10a13e9f */
  if (!C.zf) goto L_10a13e9f;
  /* 10a13e9d jmp 0x10a13efd */
  goto L_10a13efd;
L_10a13e9f:;
  /* 10a13e9f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10a13ea1 push 0x10a2dacc */
  push32((uint32_t)(0x10a2daccu));
  /* 10a13ea6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a13ea8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a13eab push ecx */
  push32((uint32_t)(ECX));
  /* 10a13eac call 0x10a05bf0 */
  push32(0x10a13eb1u); f_10a05bf0();
  /* 10a13eb1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13eb4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 10a13eba mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10a13ebc mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10a13ec2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a13ec5 jne 0x10a13ec9 */
  if (!C.zf) goto L_10a13ec9;
  /* 10a13ec7 jmp 0x10a13efd */
  goto L_10a13efd;
L_10a13ec9:;
  /* 10a13ec9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a13ecc push ecx */
  push32((uint32_t)(ECX));
  /* 10a13ecd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a13ed0 push edx */
  push32((uint32_t)(EDX));
  /* 10a13ed1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10a13ed7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a13ed9 push ecx */
  push32((uint32_t)(ECX));
  /* 10a13eda call 0x10a09410 */
  push32(0x10a13edfu); f_10a09410();
  /* 10a13edf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13ee2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a13ee6 je 0x10a13ef6 */
  if (C.zf) goto L_10a13ef6;
  /* 10a13ee8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a13eea mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a13eed push edx */
  push32((uint32_t)(EDX));
  /* 10a13eee call 0x10a06680 */
  push32(0x10a13ef3u); f_10a06680();
  /* 10a13ef3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a13ef6:;
  /* 10a13ef6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a13ef8 jmp 0x10a14036 */
  goto L_10a14036;
L_10a13efd:;
  /* 10a13efd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a13f01 je 0x10a13f11 */
  if (C.zf) goto L_10a13f11;
  /* 10a13f03 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a13f05 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a13f08 push eax */
  push32((uint32_t)(EAX));
  /* 10a13f09 call 0x10a06680 */
  push32(0x10a13f0eu); f_10a06680();
  /* 10a13f0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a13f11:;
  /* 10a13f11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a13f14 jmp 0x10a14036 */
  goto L_10a14036;
L_10a13f19:;
  /* 10a13f19 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a13f1d jne 0x10a14033 */
  if (!C.zf) goto L_10a14033;
  /* 10a13f23 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 10a13f2d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a13f30 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10a13f36 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a13f38 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10a13f3e push edx */
  push32((uint32_t)(EDX));
  /* 10a13f3f push 0x10a31968 */
  push32((uint32_t)(0x10a31968u));
  /* 10a13f44 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a13f47 push eax */
  push32((uint32_t)(EAX));
  /* 10a13f48 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a13f4b push ecx */
  push32((uint32_t)(ECX));
  /* 10a13f4c call 0x10a15030 */
  push32(0x10a13f51u); f_10a15030();
  /* 10a13f51 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13f54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a13f56 jne 0x10a13f60 */
  if (!C.zf) goto L_10a13f60;
  /* 10a13f58 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a13f5b jmp 0x10a14036 */
  goto L_10a14036;
L_10a13f60:;
  /* 10a13f60 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10a13f66 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10a13f69 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 10a13f73 jmp 0x10a13f84 */
  goto L_10a13f84;
L_10a13f75:;
  /* 10a13f75 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10a13f7b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13f7e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_10a13f84:;
  /* 10a13f84 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a13f8b jge 0x10a1402f */
  if ((C.sf==C.of)) goto L_10a1402f;
  /* 10a13f91 cmp dword ptr [0x10a2fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a2fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a13f98 jle 0x10a13fcb */
  if ((C.zf||C.sf!=C.of)) goto L_10a13fcb;
  /* 10a13f9a push 4 */
  push32((uint32_t)(0x4u));
  /* 10a13f9c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10a13fa2 mov dl, byte ptr [ecx*2 + 0x10a31968] */
  DL = (r8((uint32_t)(ECX*2 + 0x10a31968)));
  /* 10a13fa9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10a13faf mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10a13fb5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a13fba push eax */
  push32((uint32_t)(EAX));
  /* 10a13fbb call 0x10a0bc00 */
  push32(0x10a13fc0u); f_10a0bc00();
  /* 10a13fc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a13fc3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10a13fc9 jmp 0x10a13ffe */
  goto L_10a13ffe;
L_10a13fcb:;
  /* 10a13fcb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10a13fd1 mov dl, byte ptr [ecx*2 + 0x10a31968] */
  DL = (r8((uint32_t)(ECX*2 + 0x10a31968)));
  /* 10a13fd8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10a13fde mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10a13fe4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a13fe9 mov ecx, dword ptr [0x10a2fc98] */
  ECX = (r32((uint32_t)(0x10a2fc98)));
  /* 10a13fef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a13ff1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10a13ff5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10a13ff8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_10a13ffe:;
  /* 10a13ffe cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14005 je 0x10a14028 */
  if (C.zf) goto L_10a14028;
  /* 10a14007 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10a1400d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a14010 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a14013 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 10a1401a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10a1401e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10a14024 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10a14026 jmp 0x10a1402a */
  goto L_10a1402a;
L_10a14028:;
  /* 10a14028 jmp 0x10a1402f */
  goto L_10a1402f;
L_10a1402a:;
  /* 10a1402a jmp 0x10a13f75 */
  goto L_10a13f75;
L_10a1402f:;
  /* 10a1402f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a14031 jmp 0x10a14036 */
  goto L_10a14036;
L_10a14033:;
  /* 10a14033 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10a14036:;
  /* 10a14036 mov esp, ebp */
  ESP = (EBP);
  /* 10a14038 pop ebp */
  EBP = (pop32());
  /* 10a14039 ret  */
  ESPCHK(0x10a13db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014040 @ 0x10a14040 (10 bytes, 5 insns) */
void f_10a14040(void) {
  FTRACE(0x10a14040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a14040 push ebp */
  push32((uint32_t)(EBP));
  /* 10a14041 mov ebp, esp */
  EBP = (ESP);
  /* 10a14043 mov eax, dword ptr [0x10a30d88] */
  EAX = (r32((uint32_t)(0x10a30d88)));
  /* 10a14048 pop ebp */
  EBP = (pop32());
  /* 10a14049 ret  */
  ESPCHK(0x10a14040u, _esp0);
  ESP += 4; return;
}

/* FUN_10014050 @ 0x10a14050 (575 bytes, 196 insns) */
void f_10a14050(void) {
  FTRACE(0x10a14050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a14050 push ebp */
  push32((uint32_t)(EBP));
  /* 10a14051 mov ebp, esp */
  EBP = (ESP);
  /* 10a14053 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a14055 push 0x10a2dad8 */
  push32((uint32_t)(0x10a2dad8u));
  /* 10a1405a push 0x10a0ecf8 */
  push32((uint32_t)(0x10a0ecf8u));
  /* 10a1405f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10a14065 push eax */
  push32((uint32_t)(EAX));
  /* 10a14066 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10a1406d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14070 push ebx */
  push32((uint32_t)(EBX));
  /* 10a14071 push esi */
  push32((uint32_t)(ESI));
  /* 10a14072 push edi */
  push32((uint32_t)(EDI));
  /* 10a14073 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a14076 cmp dword ptr [0x10a31974], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31974))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1407d jne 0x10a140ce */
  if (!C.zf) goto L_10a140ce;
  /* 10a1407f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10a14082 push eax */
  push32((uint32_t)(EAX));
  /* 10a14083 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a14085 push 0x10a2d20c */
  push32((uint32_t)(0x10a2d20cu));
  /* 10a1408a push 1 */
  push32((uint32_t)(0x1u));
  /* 10a1408c call dword ptr [0x10a342f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342f4))), 0x10a14092u);
  /* 10a14092 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a14094 je 0x10a140a2 */
  if (C.zf) goto L_10a140a2;
  /* 10a14096 mov dword ptr [0x10a31974], 1 */
  w32((uint32_t)(0x10a31974), (0x1u));
  /* 10a140a0 jmp 0x10a140ce */
  goto L_10a140ce;
L_10a140a2:;
  /* 10a140a2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10a140a5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a140a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a140a8 push 0x10a2d208 */
  push32((uint32_t)(0x10a2d208u));
  /* 10a140ad push 1 */
  push32((uint32_t)(0x1u));
  /* 10a140af push 0 */
  push32((uint32_t)(0x0u));
  /* 10a140b1 call dword ptr [0x10a342f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342f8))), 0x10a140b7u);
  /* 10a140b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a140b9 je 0x10a140c7 */
  if (C.zf) goto L_10a140c7;
  /* 10a140bb mov dword ptr [0x10a31974], 2 */
  w32((uint32_t)(0x10a31974), (0x2u));
  /* 10a140c5 jmp 0x10a140ce */
  goto L_10a140ce;
L_10a140c7:;
  /* 10a140c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a140c9 jmp 0x10a142a9 */
  goto L_10a142a9;
L_10a140ce:;
  /* 10a140ce cmp dword ptr [0x10a31974], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a31974))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a140d5 jne 0x10a140f2 */
  if (!C.zf) goto L_10a140f2;
  /* 10a140d7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a140da push edx */
  push32((uint32_t)(EDX));
  /* 10a140db mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a140de push eax */
  push32((uint32_t)(EAX));
  /* 10a140df mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a140e2 push ecx */
  push32((uint32_t)(ECX));
  /* 10a140e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a140e6 push edx */
  push32((uint32_t)(EDX));
  /* 10a140e7 call dword ptr [0x10a342f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342f4))), 0x10a140edu);
  /* 10a140ed jmp 0x10a142a9 */
  goto L_10a142a9;
L_10a140f2:;
  /* 10a140f2 cmp dword ptr [0x10a31974], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10a31974))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a140f9 jne 0x10a142a7 */
  if (!C.zf) goto L_10a142a7;
  /* 10a140ff cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14103 jne 0x10a1410d */
  if (!C.zf) goto L_10a1410d;
  /* 10a14105 mov eax, dword ptr [0x10a318e8] */
  EAX = (r32((uint32_t)(0x10a318e8)));
  /* 10a1410a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10a1410d:;
  /* 10a1410d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a1410f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a14111 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a14113 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a14115 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a14118 push ecx */
  push32((uint32_t)(ECX));
  /* 10a14119 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a1411c push edx */
  push32((uint32_t)(EDX));
  /* 10a1411d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10a14122 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a14125 push eax */
  push32((uint32_t)(EAX));
  /* 10a14126 call dword ptr [0x10a343b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a343b0))), 0x10a1412cu);
  /* 10a1412c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10a1412f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14133 jne 0x10a1413c */
  if (!C.zf) goto L_10a1413c;
  /* 10a14135 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a14137 jmp 0x10a142a9 */
  goto L_10a142a9;
L_10a1413c:;
  /* 10a1413c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a14143 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a14146 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14149 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10a1414b call 0x10a08d90 */
  push32(0x10a14150u); f_10a08d90();
  /* 10a14150 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10a14153 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a14156 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a14159 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10a1415c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a1415f push edx */
  push32((uint32_t)(EDX));
  /* 10a14160 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a14162 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a14165 push eax */
  push32((uint32_t)(EAX));
  /* 10a14166 call 0x10a09960 */
  push32(0x10a1416bu); f_10a09960();
  /* 10a1416b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1416e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10a14175 jmp 0x10a1418e */
  goto L_10a1418e;
  /* 10a14177 mov eax, 1 */
  EAX = (0x1u);
  /* 10a1417c ret  */
  ESPCHK(0x10a14050u, _esp0);
  ESP += 4; return;
  /* 10a1417d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10a14180 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10a14187 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10a1418e:;
  /* 10a1418e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14192 jne 0x10a1419b */
  if (!C.zf) goto L_10a1419b;
  /* 10a14194 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a14196 jmp 0x10a142a9 */
  goto L_10a142a9;
L_10a1419b:;
  /* 10a1419b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a1419d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a1419f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a141a2 push ecx */
  push32((uint32_t)(ECX));
  /* 10a141a3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a141a6 push edx */
  push32((uint32_t)(EDX));
  /* 10a141a7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a141aa push eax */
  push32((uint32_t)(EAX));
  /* 10a141ab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a141ae push ecx */
  push32((uint32_t)(ECX));
  /* 10a141af push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10a141b4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a141b7 push edx */
  push32((uint32_t)(EDX));
  /* 10a141b8 call dword ptr [0x10a343b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a343b0))), 0x10a141beu);
  /* 10a141be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a141c0 jne 0x10a141c9 */
  if (!C.zf) goto L_10a141c9;
  /* 10a141c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a141c4 jmp 0x10a142a9 */
  goto L_10a142a9;
L_10a141c9:;
  /* 10a141c9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a141d0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a141d3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 10a141d7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a141da and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10a141dc call 0x10a08d90 */
  push32(0x10a141e1u); f_10a08d90();
  /* 10a141e1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10a141e4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a141e7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10a141ea mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10a141ed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10a141f4 jmp 0x10a1420d */
  goto L_10a1420d;
  /* 10a141f6 mov eax, 1 */
  EAX = (0x1u);
  /* 10a141fb ret  */
  ESPCHK(0x10a14050u, _esp0);
  ESP += 4; return;
  /* 10a141fc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10a141ff mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10a14206 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10a1420d:;
  /* 10a1420d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14211 jne 0x10a1421a */
  if (!C.zf) goto L_10a1421a;
  /* 10a14213 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a14215 jmp 0x10a142a9 */
  goto L_10a142a9;
L_10a1421a:;
  /* 10a1421a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1421e jne 0x10a14229 */
  if (!C.zf) goto L_10a14229;
  /* 10a14220 mov edx, dword ptr [0x10a318d8] */
  EDX = (r32((uint32_t)(0x10a318d8)));
  /* 10a14226 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10a14229:;
  /* 10a14229 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a1422c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a1422f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 10a14235 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a14238 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a1423b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 10a14242 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a14245 push ecx */
  push32((uint32_t)(ECX));
  /* 10a14246 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a14249 push edx */
  push32((uint32_t)(EDX));
  /* 10a1424a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a1424d push eax */
  push32((uint32_t)(EAX));
  /* 10a1424e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a14251 push ecx */
  push32((uint32_t)(ECX));
  /* 10a14252 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10a14255 push edx */
  push32((uint32_t)(EDX));
  /* 10a14256 call dword ptr [0x10a342f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342f8))), 0x10a1425cu);
  /* 10a1425c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10a1425f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a14262 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a14265 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a14267 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 10a1426c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14272 je 0x10a14288 */
  if (C.zf) goto L_10a14288;
  /* 10a14274 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a14277 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a1427a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a1427c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10a14280 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14286 je 0x10a1428c */
  if (C.zf) goto L_10a1428c;
L_10a14288:;
  /* 10a14288 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a1428a jmp 0x10a142a9 */
  goto L_10a142a9;
L_10a1428c:;
  /* 10a1428c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a1428f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10a14291 push eax */
  push32((uint32_t)(EAX));
  /* 10a14292 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a14295 push ecx */
  push32((uint32_t)(ECX));
  /* 10a14296 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a14299 push edx */
  push32((uint32_t)(EDX));
  /* 10a1429a call 0x10a0dae0 */
  push32(0x10a1429fu); f_10a0dae0();
  /* 10a1429f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a142a2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a142a5 jmp 0x10a142a9 */
  goto L_10a142a9;
L_10a142a7:;
  /* 10a142a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a142a9:;
  /* 10a142a9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10a142ac mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a142af mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10a142b6 pop edi */
  EDI = (pop32());
  /* 10a142b7 pop esi */
  ESI = (pop32());
  /* 10a142b8 pop ebx */
  EBX = (pop32());
  /* 10a142b9 mov esp, ebp */
  ESP = (EBP);
  /* 10a142bb pop ebp */
  EBP = (pop32());
  /* 10a142bc ret  */
  ESPCHK(0x10a14050u, _esp0);
  ESP += 4; return;
}

/* FUN_100142c0 @ 0x10a142c0 (208 bytes, 85 insns) */
void f_10a142c0(void) {
  FTRACE(0x10a142c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a142c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a142c1 mov ebp, esp */
  EBP = (ESP);
  /* 10a142c3 push edi */
  push32((uint32_t)(EDI));
  /* 10a142c4 push esi */
  push32((uint32_t)(ESI));
  /* 10a142c5 push ebx */
  push32((uint32_t)(EBX));
  /* 10a142c6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10a142c9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10a142cc lea eax, [0x10a318d0] */
  EAX = ((uint32_t)(0x10a318d0));
  /* 10a142d2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a142d6 jne 0x10a14313 */
  if (!C.zf) goto L_10a14313;
  /* 10a142d8 mov al, 0xff */
  AL = (0xffu);
  /* 10a142da mov edi, edi */
  EDI = (EDI);
L_10a142dc:;
  /* 10a142dc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10a142de je 0x10a1430e */
  if (C.zf) goto L_10a1430e;
  /* 10a142e0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a142e2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10a142e3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 10a142e5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10a142e6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a142e8 je 0x10a142dc */
  if (C.zf) goto L_10a142dc;
  /* 10a142ea sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a142ec cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a142ee sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a142f0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10a142f3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a142f5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a142f7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 10a142f9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a142fb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a142fd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a142ff and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10a14302 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a14304 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a14306 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a14308 je 0x10a142dc */
  if (C.zf) goto L_10a142dc;
  /* 10a1430a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a1430c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_10a1430e:;
  /* 10a1430e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10a14311 jmp 0x10a1438b */
  goto L_10a1438b;
L_10a14313:;
  /* 10a14313 lock inc dword ptr [0x10a31a64] */
  x86_unimpl("lock inc @ 0x10a14313");
  /* 10a1431a cmp dword ptr [0x10a31a54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31a54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14321 jg 0x10a14327 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a14327;
  /* 10a14323 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a14325 jmp 0x10a1433c */
  goto L_10a1433c;
L_10a14327:;
  /* 10a14327 lock dec dword ptr [0x10a31a64] */
  x86_unimpl("lock dec @ 0x10a14327");
  /* 10a1432e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a14330 call 0x10a095f0 */
  push32(0x10a14335u); f_10a095f0();
  /* 10a14335 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_10a1433c:;
  /* 10a1433c mov eax, 0xff */
  EAX = (0xffu);
  /* 10a14341 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10a14343 nop  */
  /* nop */
L_10a14344:;
  /* 10a14344 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10a14346 je 0x10a1436f */
  if (C.zf) goto L_10a1436f;
  /* 10a14348 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a1434a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10a1434b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10a1434d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10a1434e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a14350 je 0x10a14344 */
  if (C.zf) goto L_10a14344;
  /* 10a14352 push eax */
  push32((uint32_t)(EAX));
  /* 10a14353 push ebx */
  push32((uint32_t)(EBX));
  /* 10a14354 call 0x10a15430 */
  push32(0x10a14359u); f_10a15430();
  /* 10a14359 mov ebx, eax */
  EBX = (EAX);
  /* 10a1435b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1435e call 0x10a15430 */
  push32(0x10a14363u); f_10a15430();
  /* 10a14363 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14366 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a14368 je 0x10a14344 */
  if (C.zf) goto L_10a14344;
  /* 10a1436a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a1436c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10a1436f:;
  /* 10a1436f mov ebx, eax */
  EBX = (EAX);
  /* 10a14371 pop eax */
  EAX = (pop32());
  /* 10a14372 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a14374 jne 0x10a1437f */
  if (!C.zf) goto L_10a1437f;
  /* 10a14376 lock dec dword ptr [0x10a31a64] */
  x86_unimpl("lock dec @ 0x10a14376");
  /* 10a1437d jmp 0x10a14389 */
  goto L_10a14389;
L_10a1437f:;
  /* 10a1437f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a14381 call 0x10a09690 */
  push32(0x10a14386u); f_10a09690();
  /* 10a14386 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a14389:;
  /* 10a14389 mov eax, ebx */
  EAX = (EBX);
L_10a1438b:;
  /* 10a1438b pop ebx */
  EBX = (pop32());
  /* 10a1438c pop esi */
  ESI = (pop32());
  /* 10a1438d pop edi */
  EDI = (pop32());
  /* 10a1438e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a1438f ret  */
  ESPCHK(0x10a142c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014390 @ 0x10a14390 (257 bytes, 103 insns) */
void f_10a14390(void) {
  FTRACE(0x10a14390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a14390 push ebp */
  push32((uint32_t)(EBP));
  /* 10a14391 mov ebp, esp */
  EBP = (ESP);
  /* 10a14393 push edi */
  push32((uint32_t)(EDI));
  /* 10a14394 push esi */
  push32((uint32_t)(ESI));
  /* 10a14395 push ebx */
  push32((uint32_t)(EBX));
  /* 10a14396 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a14399 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a1439b je 0x10a1448a */
  if (C.zf) goto L_10a1448a;
  /* 10a143a1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10a143a4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10a143a7 lea eax, [0x10a318d0] */
  EAX = ((uint32_t)(0x10a318d0));
  /* 10a143ad cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a143b1 jne 0x10a14401 */
  if (!C.zf) goto L_10a14401;
  /* 10a143b3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 10a143b5 mov bl, 0x5a */
  BL = (0x5au);
  /* 10a143b7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 10a143b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a143bc:;
  /* 10a143bc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 10a143be or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10a143c0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10a143c2 je 0x10a143e5 */
  if (C.zf) goto L_10a143e5;
  /* 10a143c4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10a143c6 je 0x10a143e5 */
  if (C.zf) goto L_10a143e5;
  /* 10a143c8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10a143c9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10a143ca cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a143cc jb 0x10a143d4 */
  if (C.cf) goto L_10a143d4;
  /* 10a143ce cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a143d0 ja 0x10a143d4 */
  if ((!C.cf&&!C.zf)) goto L_10a143d4;
  /* 10a143d2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_10a143d4:;
  /* 10a143d4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a143d6 jb 0x10a143de */
  if (C.cf) goto L_10a143de;
  /* 10a143d8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a143da ja 0x10a143de */
  if ((!C.cf&&!C.zf)) goto L_10a143de;
  /* 10a143dc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_10a143de:;
  /* 10a143de cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a143e0 jne 0x10a143ef */
  if (!C.zf) goto L_10a143ef;
  /* 10a143e2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10a143e3 jne 0x10a143bc */
  if (!C.zf) goto L_10a143bc;
L_10a143e5:;
  /* 10a143e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a143e7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a143e9 je 0x10a1448a */
  if (C.zf) goto L_10a1448a;
L_10a143ef:;
  /* 10a143ef mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10a143f4 jb 0x10a1448a */
  if (C.cf) goto L_10a1448a;
  /* 10a143fa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a143fc jmp 0x10a1448a */
  goto L_10a1448a;
L_10a14401:;
  /* 10a14401 lock inc dword ptr [0x10a31a64] */
  x86_unimpl("lock inc @ 0x10a14401");
  /* 10a14408 cmp dword ptr [0x10a31a54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31a54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1440f jg 0x10a14415 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a14415;
  /* 10a14411 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a14413 jmp 0x10a1442e */
  goto L_10a1442e;
L_10a14415:;
  /* 10a14415 lock dec dword ptr [0x10a31a64] */
  x86_unimpl("lock dec @ 0x10a14415");
  /* 10a1441c mov ebx, ecx */
  EBX = (ECX);
  /* 10a1441e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a14420 call 0x10a095f0 */
  push32(0x10a14425u); f_10a095f0();
  /* 10a14425 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 10a1442c mov ecx, ebx */
  ECX = (EBX);
L_10a1442e:;
  /* 10a1442e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a14430 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10a14432 mov edi, edi */
  EDI = (EDI);
L_10a14434:;
  /* 10a14434 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a14436 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a14438 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10a1443a je 0x10a1445f */
  if (C.zf) goto L_10a1445f;
  /* 10a1443c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10a1443e je 0x10a1445f */
  if (C.zf) goto L_10a1445f;
  /* 10a14440 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10a14441 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10a14442 push ecx */
  push32((uint32_t)(ECX));
  /* 10a14443 push eax */
  push32((uint32_t)(EAX));
  /* 10a14444 push ebx */
  push32((uint32_t)(EBX));
  /* 10a14445 call 0x10a15430 */
  push32(0x10a1444au); f_10a15430();
  /* 10a1444a mov ebx, eax */
  EBX = (EAX);
  /* 10a1444c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1444f call 0x10a15430 */
  push32(0x10a14454u); f_10a15430();
  /* 10a14454 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14457 pop ecx */
  ECX = (pop32());
  /* 10a14458 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1445a jne 0x10a14465 */
  if (!C.zf) goto L_10a14465;
  /* 10a1445c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10a1445d jne 0x10a14434 */
  if (!C.zf) goto L_10a14434;
L_10a1445f:;
  /* 10a1445f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a14461 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14463 je 0x10a1446e */
  if (C.zf) goto L_10a1446e;
L_10a14465:;
  /* 10a14465 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10a1446a jb 0x10a1446e */
  if (C.cf) goto L_10a1446e;
  /* 10a1446c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_10a1446e:;
  /* 10a1446e pop eax */
  EAX = (pop32());
  /* 10a1446f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a14471 jne 0x10a1447c */
  if (!C.zf) goto L_10a1447c;
  /* 10a14473 lock dec dword ptr [0x10a31a64] */
  x86_unimpl("lock dec @ 0x10a14473");
  /* 10a1447a jmp 0x10a1448a */
  goto L_10a1448a;
L_10a1447c:;
  /* 10a1447c mov ebx, ecx */
  EBX = (ECX);
  /* 10a1447e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a14480 call 0x10a09690 */
  push32(0x10a14485u); f_10a09690();
  /* 10a14485 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14488 mov ecx, ebx */
  ECX = (EBX);
L_10a1448a:;
  /* 10a1448a mov eax, ecx */
  EAX = (ECX);
  /* 10a1448c pop ebx */
  EBX = (pop32());
  /* 10a1448d pop esi */
  ESI = (pop32());
  /* 10a1448e pop edi */
  EDI = (pop32());
  /* 10a1448f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a14490 ret  */
  ESPCHK(0x10a14390u, _esp0);
  ESP += 4; return;
}

/* FUN_100144a0 @ 0x10a144a0 (255 bytes, 88 insns) */
void f_10a144a0(void) {
  FTRACE(0x10a144a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a144a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a144a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a144a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10a144a6:;
  /* 10a144a6 cmp dword ptr [0x10a2fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a2fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a144ad jle 0x10a144c6 */
  if ((C.zf||C.sf!=C.of)) goto L_10a144c6;
  /* 10a144af push 8 */
  push32((uint32_t)(0x8u));
  /* 10a144b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a144b4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a144b6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a144b8 push ecx */
  push32((uint32_t)(ECX));
  /* 10a144b9 call 0x10a0bc00 */
  push32(0x10a144beu); f_10a0bc00();
  /* 10a144be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a144c1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a144c4 jmp 0x10a144df */
  goto L_10a144df;
L_10a144c6:;
  /* 10a144c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a144c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a144cb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a144cd mov ecx, dword ptr [0x10a2fc98] */
  ECX = (r32((uint32_t)(0x10a2fc98)));
  /* 10a144d3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a144d5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10a144d9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10a144dc mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10a144df:;
  /* 10a144df cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a144e3 je 0x10a144f0 */
  if (C.zf) goto L_10a144f0;
  /* 10a144e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a144e8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a144eb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a144ee jmp 0x10a144a6 */
  goto L_10a144a6;
L_10a144f0:;
  /* 10a144f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a144f3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a144f5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a144f7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a144fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a144fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14500 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a14503 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a14506 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a14509 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1450d je 0x10a14515 */
  if (C.zf) goto L_10a14515;
  /* 10a1450f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14513 jne 0x10a14528 */
  if (!C.zf) goto L_10a14528;
L_10a14515:;
  /* 10a14515 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a14518 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a1451a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a1451c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a1451f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a14522 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14525 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10a14528:;
  /* 10a14528 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10a1452f:;
  /* 10a1452f cmp dword ptr [0x10a2fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a2fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14536 jle 0x10a1454b */
  if ((C.zf||C.sf!=C.of)) goto L_10a1454b;
  /* 10a14538 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a1453a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a1453d push edx */
  push32((uint32_t)(EDX));
  /* 10a1453e call 0x10a0bc00 */
  push32(0x10a14543u); f_10a0bc00();
  /* 10a14543 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14546 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a14549 jmp 0x10a14560 */
  goto L_10a14560;
L_10a1454b:;
  /* 10a1454b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a1454e mov ecx, dword ptr [0x10a2fc98] */
  ECX = (r32((uint32_t)(0x10a2fc98)));
  /* 10a14554 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a14556 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10a1455a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10a1455d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10a14560:;
  /* 10a14560 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14564 je 0x10a1458b */
  if (C.zf) goto L_10a1458b;
  /* 10a14566 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a14569 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a1456c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a1456f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 10a14573 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a14576 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a14579 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a1457b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a1457d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a14580 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a14583 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14586 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10a14589 jmp 0x10a1452f */
  goto L_10a1452f;
L_10a1458b:;
  /* 10a1458b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1458f jne 0x10a14598 */
  if (!C.zf) goto L_10a14598;
  /* 10a14591 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a14594 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a14596 jmp 0x10a1459b */
  goto L_10a1459b;
L_10a14598:;
  /* 10a14598 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10a1459b:;
  /* 10a1459b mov esp, ebp */
  ESP = (EBP);
  /* 10a1459d pop ebp */
  EBP = (pop32());
  /* 10a1459e ret  */
  ESPCHK(0x10a144a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100145a0 @ 0x10a145a0 (17 bytes, 8 insns) */
void f_10a145a0(void) {
  FTRACE(0x10a145a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a145a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a145a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a145a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a145a6 push eax */
  push32((uint32_t)(EAX));
  /* 10a145a7 call 0x10a144a0 */
  push32(0x10a145acu); f_10a144a0();
  /* 10a145ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a145af pop ebp */
  EBP = (pop32());
  /* 10a145b0 ret  */
  ESPCHK(0x10a145a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100145c0 @ 0x10a145c0 (297 bytes, 106 insns) */
void f_10a145c0(void) {
  FTRACE(0x10a145c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a145c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a145c1 mov ebp, esp */
  EBP = (ESP);
  /* 10a145c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a145c6 push esi */
  push32((uint32_t)(ESI));
L_10a145c7:;
  /* 10a145c7 cmp dword ptr [0x10a2fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a2fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a145ce jle 0x10a145e7 */
  if ((C.zf||C.sf!=C.of)) goto L_10a145e7;
  /* 10a145d0 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a145d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a145d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a145d7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a145d9 push ecx */
  push32((uint32_t)(ECX));
  /* 10a145da call 0x10a0bc00 */
  push32(0x10a145dfu); f_10a0bc00();
  /* 10a145df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a145e2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a145e5 jmp 0x10a14600 */
  goto L_10a14600;
L_10a145e7:;
  /* 10a145e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a145ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a145ec mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a145ee mov ecx, dword ptr [0x10a2fc98] */
  ECX = (r32((uint32_t)(0x10a2fc98)));
  /* 10a145f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a145f6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10a145fa and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10a145fd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10a14600:;
  /* 10a14600 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14604 je 0x10a14611 */
  if (C.zf) goto L_10a14611;
  /* 10a14606 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a14609 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1460c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a1460f jmp 0x10a145c7 */
  goto L_10a145c7;
L_10a14611:;
  /* 10a14611 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a14614 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a14616 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a14618 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a1461b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1461e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14621 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a14624 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a14627 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10a1462a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1462e je 0x10a14636 */
  if (C.zf) goto L_10a14636;
  /* 10a14630 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14634 jne 0x10a14649 */
  if (!C.zf) goto L_10a14649;
L_10a14636:;
  /* 10a14636 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a14639 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a1463b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a1463d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a14640 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a14643 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14646 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10a14649:;
  /* 10a14649 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a14650 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10a14657:;
  /* 10a14657 cmp dword ptr [0x10a2fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a2fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1465e jle 0x10a14673 */
  if ((C.zf||C.sf!=C.of)) goto L_10a14673;
  /* 10a14660 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a14662 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a14665 push edx */
  push32((uint32_t)(EDX));
  /* 10a14666 call 0x10a0bc00 */
  push32(0x10a1466bu); f_10a0bc00();
  /* 10a1466b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1466e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a14671 jmp 0x10a14688 */
  goto L_10a14688;
L_10a14673:;
  /* 10a14673 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a14676 mov ecx, dword ptr [0x10a2fc98] */
  ECX = (r32((uint32_t)(0x10a2fc98)));
  /* 10a1467c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a1467e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10a14682 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10a14685 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_10a14688:;
  /* 10a14688 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1468c je 0x10a146c9 */
  if (C.zf) goto L_10a146c9;
  /* 10a1468e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a14690 push 0xa */
  push32((uint32_t)(0xau));
  /* 10a14692 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a14695 push eax */
  push32((uint32_t)(EAX));
  /* 10a14696 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a14699 push ecx */
  push32((uint32_t)(ECX));
  /* 10a1469a call 0x10a15560 */
  push32(0x10a1469fu); f_10a15560();
  /* 10a1469f mov ecx, eax */
  ECX = (EAX);
  /* 10a146a1 mov esi, edx */
  ESI = (EDX);
  /* 10a146a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a146a6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a146a9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a146aa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a146ac adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a146ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a146b1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 10a146b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a146b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a146b9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a146bb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a146be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a146c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a146c4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10a146c7 jmp 0x10a14657 */
  goto L_10a14657;
L_10a146c9:;
  /* 10a146c9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a146cd jne 0x10a146de */
  if (!C.zf) goto L_10a146de;
  /* 10a146cf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a146d2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a146d4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a146d7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a146da neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a146dc jmp 0x10a146e4 */
  goto L_10a146e4;
L_10a146de:;
  /* 10a146de mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a146e1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10a146e4:;
  /* 10a146e4 pop esi */
  ESI = (pop32());
  /* 10a146e5 mov esp, ebp */
  ESP = (EBP);
  /* 10a146e7 pop ebp */
  EBP = (pop32());
  /* 10a146e8 ret  */
  ESPCHK(0x10a145c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100146f0 @ 0x10a146f0 (61 bytes, 18 insns) */
void f_10a146f0(void) {
  FTRACE(0x10a146f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a146f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a146f1 mov ebp, esp */
  EBP = (ESP);
  /* 10a146f3 cmp dword ptr [0x10a31a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a146fa jne 0x10a1472b */
  if (!C.zf) goto L_10a1472b;
  /* 10a146fc push 0xb */
  push32((uint32_t)(0xbu));
  /* 10a146fe call 0x10a095f0 */
  push32(0x10a14703u); f_10a095f0();
  /* 10a14703 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14706 cmp dword ptr [0x10a31a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1470d jne 0x10a14721 */
  if (!C.zf) goto L_10a14721;
  /* 10a1470f call 0x10a14750 */
  push32(0x10a14714u); f_10a14750();
  /* 10a14714 mov eax, dword ptr [0x10a31a30] */
  EAX = (r32((uint32_t)(0x10a31a30)));
  /* 10a14719 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1471c mov dword ptr [0x10a31a30], eax */
  w32((uint32_t)(0x10a31a30), (EAX));
L_10a14721:;
  /* 10a14721 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10a14723 call 0x10a09690 */
  push32(0x10a14728u); f_10a09690();
  /* 10a14728 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a1472b:;
  /* 10a1472b pop ebp */
  EBP = (pop32());
  /* 10a1472c ret  */
  ESPCHK(0x10a146f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014730 @ 0x10a14730 (30 bytes, 11 insns) */
void f_10a14730(void) {
  FTRACE(0x10a14730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a14730 push ebp */
  push32((uint32_t)(EBP));
  /* 10a14731 mov ebp, esp */
  EBP = (ESP);
  /* 10a14733 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10a14735 call 0x10a095f0 */
  push32(0x10a1473au); f_10a095f0();
  /* 10a1473a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1473d call 0x10a14750 */
  push32(0x10a14742u); f_10a14750();
  /* 10a14742 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10a14744 call 0x10a09690 */
  push32(0x10a14749u); f_10a09690();
  /* 10a14749 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1474c pop ebp */
  EBP = (pop32());
  /* 10a1474d ret  */
  ESPCHK(0x10a14730u, _esp0);
  ESP += 4; return;
}

/* FUN_10014750 @ 0x10a14750 (939 bytes, 266 insns) */
void f_10a14750(void) {
  FTRACE(0x10a14750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a14750 push ebp */
  push32((uint32_t)(EBP));
  /* 10a14751 mov ebp, esp */
  EBP = (ESP);
  /* 10a14753 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a14756 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a1475d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10a1475f call 0x10a095f0 */
  push32(0x10a14764u); f_10a095f0();
  /* 10a14764 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14767 mov dword ptr [0x10a31978], 0 */
  w32((uint32_t)(0x10a31978), (0x0u));
  /* 10a14771 mov dword ptr [0x10a30e38], 0xffffffff */
  w32((uint32_t)(0x10a30e38), (0xffffffffu));
  /* 10a1477b mov eax, dword ptr [0x10a30e38] */
  EAX = (r32((uint32_t)(0x10a30e38)));
  /* 10a14780 mov dword ptr [0x10a30e28], eax */
  w32((uint32_t)(0x10a30e28), (EAX));
  /* 10a14785 push 0x10a2db38 */
  push32((uint32_t)(0x10a2db38u));
  /* 10a1478a call 0x10a155d0 */
  push32(0x10a1478fu); f_10a155d0();
  /* 10a1478f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14792 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a14795 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14799 jne 0x10a148d3 */
  if (!C.zf) goto L_10a148d3;
  /* 10a1479f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10a147a1 call 0x10a09690 */
  push32(0x10a147a6u); f_10a09690();
  /* 10a147a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a147a9 push 0x10a31980 */
  push32((uint32_t)(0x10a31980u));
  /* 10a147ae call dword ptr [0x10a342b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342b8))), 0x10a147b4u);
  /* 10a147b4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a147b7 je 0x10a148ce */
  if (C.zf) goto L_10a148ce;
  /* 10a147bd mov dword ptr [0x10a31978], 1 */
  w32((uint32_t)(0x10a31978), (0x1u));
  /* 10a147c7 mov ecx, dword ptr [0x10a31980] */
  ECX = (r32((uint32_t)(0x10a31980)));
  /* 10a147cd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a147d0 mov dword ptr [0x10a30d90], ecx */
  w32((uint32_t)(0x10a30d90), (ECX));
  /* 10a147d6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a147d8 mov dx, word ptr [0x10a319c6] */
  DX = (r16((uint32_t)(0x10a319c6)));
  /* 10a147df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a147e1 je 0x10a147f9 */
  if (C.zf) goto L_10a147f9;
  /* 10a147e3 mov eax, dword ptr [0x10a319d4] */
  EAX = (r32((uint32_t)(0x10a319d4)));
  /* 10a147e8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a147eb mov ecx, dword ptr [0x10a30d90] */
  ECX = (r32((uint32_t)(0x10a30d90)));
  /* 10a147f1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a147f3 mov dword ptr [0x10a30d90], ecx */
  w32((uint32_t)(0x10a30d90), (ECX));
L_10a147f9:;
  /* 10a147f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a147fb mov dx, word ptr [0x10a31a1a] */
  DX = (r16((uint32_t)(0x10a31a1a)));
  /* 10a14802 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a14804 je 0x10a1482e */
  if (C.zf) goto L_10a1482e;
  /* 10a14806 cmp dword ptr [0x10a31a28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31a28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1480d je 0x10a1482e */
  if (C.zf) goto L_10a1482e;
  /* 10a1480f mov dword ptr [0x10a30d94], 1 */
  w32((uint32_t)(0x10a30d94), (0x1u));
  /* 10a14819 mov eax, dword ptr [0x10a31a28] */
  EAX = (r32((uint32_t)(0x10a31a28)));
  /* 10a1481e sub eax, dword ptr [0x10a319d4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a319d4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a14824 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a14827 mov dword ptr [0x10a30d98], eax */
  w32((uint32_t)(0x10a30d98), (EAX));
  /* 10a1482c jmp 0x10a14842 */
  goto L_10a14842;
L_10a1482e:;
  /* 10a1482e mov dword ptr [0x10a30d94], 0 */
  w32((uint32_t)(0x10a30d94), (0x0u));
  /* 10a14838 mov dword ptr [0x10a30d98], 0 */
  w32((uint32_t)(0x10a30d98), (0x0u));
L_10a14842:;
  /* 10a14842 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10a14845 push ecx */
  push32((uint32_t)(ECX));
  /* 10a14846 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a14848 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10a1484a mov edx, dword ptr [0x10a30e1c] */
  EDX = (r32((uint32_t)(0x10a30e1c)));
  /* 10a14850 push edx */
  push32((uint32_t)(EDX));
  /* 10a14851 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a14853 push 0x10a31984 */
  push32((uint32_t)(0x10a31984u));
  /* 10a14858 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10a1485d mov eax, dword ptr [0x10a318e8] */
  EAX = (r32((uint32_t)(0x10a318e8)));
  /* 10a14862 push eax */
  push32((uint32_t)(EAX));
  /* 10a14863 call dword ptr [0x10a343b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a343b0))), 0x10a14869u);
  /* 10a14869 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a1486b je 0x10a1487f */
  if (C.zf) goto L_10a1487f;
  /* 10a1486d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14871 jne 0x10a1487f */
  if (!C.zf) goto L_10a1487f;
  /* 10a14873 mov ecx, dword ptr [0x10a30e1c] */
  ECX = (r32((uint32_t)(0x10a30e1c)));
  /* 10a14879 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 10a1487d jmp 0x10a14888 */
  goto L_10a14888;
L_10a1487f:;
  /* 10a1487f mov edx, dword ptr [0x10a30e1c] */
  EDX = (r32((uint32_t)(0x10a30e1c)));
  /* 10a14885 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10a14888:;
  /* 10a14888 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10a1488b push eax */
  push32((uint32_t)(EAX));
  /* 10a1488c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a1488e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10a14890 mov ecx, dword ptr [0x10a30e20] */
  ECX = (r32((uint32_t)(0x10a30e20)));
  /* 10a14896 push ecx */
  push32((uint32_t)(ECX));
  /* 10a14897 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a14899 push 0x10a319d8 */
  push32((uint32_t)(0x10a319d8u));
  /* 10a1489e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10a148a3 mov edx, dword ptr [0x10a318e8] */
  EDX = (r32((uint32_t)(0x10a318e8)));
  /* 10a148a9 push edx */
  push32((uint32_t)(EDX));
  /* 10a148aa call dword ptr [0x10a343b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a343b0))), 0x10a148b0u);
  /* 10a148b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a148b2 je 0x10a148c5 */
  if (C.zf) goto L_10a148c5;
  /* 10a148b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a148b8 jne 0x10a148c5 */
  if (!C.zf) goto L_10a148c5;
  /* 10a148ba mov eax, dword ptr [0x10a30e20] */
  EAX = (r32((uint32_t)(0x10a30e20)));
  /* 10a148bf mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 10a148c3 jmp 0x10a148ce */
  goto L_10a148ce;
L_10a148c5:;
  /* 10a148c5 mov ecx, dword ptr [0x10a30e20] */
  ECX = (r32((uint32_t)(0x10a30e20)));
  /* 10a148cb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_10a148ce:;
  /* 10a148ce jmp 0x10a14af7 */
  goto L_10a14af7;
L_10a148d3:;
  /* 10a148d3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a148d6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a148d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a148db je 0x10a148fd */
  if (C.zf) goto L_10a148fd;
  /* 10a148dd cmp dword ptr [0x10a31a2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31a2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a148e4 je 0x10a1490c */
  if (C.zf) goto L_10a1490c;
  /* 10a148e6 mov ecx, dword ptr [0x10a31a2c] */
  ECX = (r32((uint32_t)(0x10a31a2c)));
  /* 10a148ec push ecx */
  push32((uint32_t)(ECX));
  /* 10a148ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a148f0 push edx */
  push32((uint32_t)(EDX));
  /* 10a148f1 call 0x10a11880 */
  push32(0x10a148f6u); f_10a11880();
  /* 10a148f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a148f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a148fb jne 0x10a1490c */
  if (!C.zf) goto L_10a1490c;
L_10a148fd:;
  /* 10a148fd push 0xc */
  push32((uint32_t)(0xcu));
  /* 10a148ff call 0x10a09690 */
  push32(0x10a14904u); f_10a09690();
  /* 10a14904 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14907 jmp 0x10a14af7 */
  goto L_10a14af7;
L_10a1490c:;
  /* 10a1490c push 2 */
  push32((uint32_t)(0x2u));
  /* 10a1490e mov eax, dword ptr [0x10a31a2c] */
  EAX = (r32((uint32_t)(0x10a31a2c)));
  /* 10a14913 push eax */
  push32((uint32_t)(EAX));
  /* 10a14914 call 0x10a06680 */
  push32(0x10a14919u); f_10a06680();
  /* 10a14919 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1491c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 10a14921 push 0x10a2db30 */
  push32((uint32_t)(0x10a2db30u));
  /* 10a14926 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a14928 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a1492b push ecx */
  push32((uint32_t)(ECX));
  /* 10a1492c call 0x10a08a20 */
  push32(0x10a14931u); f_10a08a20();
  /* 10a14931 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14934 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14937 push eax */
  push32((uint32_t)(EAX));
  /* 10a14938 call 0x10a05bf0 */
  push32(0x10a1493du); f_10a05bf0();
  /* 10a1493d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14940 mov dword ptr [0x10a31a2c], eax */
  w32((uint32_t)(0x10a31a2c), (EAX));
  /* 10a14945 cmp dword ptr [0x10a31a2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31a2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1494c jne 0x10a1495d */
  if (!C.zf) goto L_10a1495d;
  /* 10a1494e push 0xc */
  push32((uint32_t)(0xcu));
  /* 10a14950 call 0x10a09690 */
  push32(0x10a14955u); f_10a09690();
  /* 10a14955 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14958 jmp 0x10a14af7 */
  goto L_10a14af7;
L_10a1495d:;
  /* 10a1495d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a14960 push edx */
  push32((uint32_t)(EDX));
  /* 10a14961 mov eax, dword ptr [0x10a31a2c] */
  EAX = (r32((uint32_t)(0x10a31a2c)));
  /* 10a14966 push eax */
  push32((uint32_t)(EAX));
  /* 10a14967 call 0x10a08ba0 */
  push32(0x10a1496cu); f_10a08ba0();
  /* 10a1496c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1496f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10a14971 call 0x10a09690 */
  push32(0x10a14976u); f_10a09690();
  /* 10a14976 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14979 push 3 */
  push32((uint32_t)(0x3u));
  /* 10a1497b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a1497e push ecx */
  push32((uint32_t)(ECX));
  /* 10a1497f mov edx, dword ptr [0x10a30e1c] */
  EDX = (r32((uint32_t)(0x10a30e1c)));
  /* 10a14985 push edx */
  push32((uint32_t)(EDX));
  /* 10a14986 call 0x10a09410 */
  push32(0x10a1498bu); f_10a09410();
  /* 10a1498b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1498e mov eax, dword ptr [0x10a30e1c] */
  EAX = (r32((uint32_t)(0x10a30e1c)));
  /* 10a14993 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 10a14997 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a1499a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1499d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a149a0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a149a3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a149a6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a149a9 jne 0x10a149bd */
  if (!C.zf) goto L_10a149bd;
  /* 10a149ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a149ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a149b1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a149b4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a149b7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a149ba mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10a149bd:;
  /* 10a149bd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a149c0 push eax */
  push32((uint32_t)(EAX));
  /* 10a149c1 call 0x10a144a0 */
  push32(0x10a149c6u); f_10a144a0();
  /* 10a149c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a149c9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a149cf mov dword ptr [0x10a30d90], eax */
  w32((uint32_t)(0x10a30d90), (EAX));
L_10a149d4:;
  /* 10a149d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a149d7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a149da cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a149dd je 0x10a149f5 */
  if (C.zf) goto L_10a149f5;
  /* 10a149df mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a149e2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a149e5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a149e8 jl 0x10a14a00 */
  if ((C.sf!=C.of)) goto L_10a14a00;
  /* 10a149ea mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a149ed movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a149f0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a149f3 jg 0x10a14a00 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a14a00;
L_10a149f5:;
  /* 10a149f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a149f8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a149fb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a149fe jmp 0x10a149d4 */
  goto L_10a149d4;
L_10a14a00:;
  /* 10a14a00 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a14a03 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a14a06 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14a09 jne 0x10a14aa5 */
  if (!C.zf) goto L_10a14aa5;
  /* 10a14a0f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a14a12 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14a15 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a14a18 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a14a1b push edx */
  push32((uint32_t)(EDX));
  /* 10a14a1c call 0x10a144a0 */
  push32(0x10a14a21u); f_10a144a0();
  /* 10a14a21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14a24 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a14a27 mov ecx, dword ptr [0x10a30d90] */
  ECX = (r32((uint32_t)(0x10a30d90)));
  /* 10a14a2d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14a2f mov dword ptr [0x10a30d90], ecx */
  w32((uint32_t)(0x10a30d90), (ECX));
L_10a14a35:;
  /* 10a14a35 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a14a38 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a14a3b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14a3e jl 0x10a14a56 */
  if ((C.sf!=C.of)) goto L_10a14a56;
  /* 10a14a40 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a14a43 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a14a46 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14a49 jg 0x10a14a56 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a14a56;
  /* 10a14a4b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a14a4e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14a51 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a14a54 jmp 0x10a14a35 */
  goto L_10a14a35;
L_10a14a56:;
  /* 10a14a56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a14a59 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a14a5c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14a5f jne 0x10a14aa5 */
  if (!C.zf) goto L_10a14aa5;
  /* 10a14a61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a14a64 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14a67 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a14a6a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a14a6d push ecx */
  push32((uint32_t)(ECX));
  /* 10a14a6e call 0x10a144a0 */
  push32(0x10a14a73u); f_10a144a0();
  /* 10a14a73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14a76 mov edx, dword ptr [0x10a30d90] */
  EDX = (r32((uint32_t)(0x10a30d90)));
  /* 10a14a7c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14a7e mov dword ptr [0x10a30d90], edx */
  w32((uint32_t)(0x10a30d90), (EDX));
L_10a14a84:;
  /* 10a14a84 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a14a87 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a14a8a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14a8d jl 0x10a14aa5 */
  if ((C.sf!=C.of)) goto L_10a14aa5;
  /* 10a14a8f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a14a92 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a14a95 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14a98 jg 0x10a14aa5 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a14aa5;
  /* 10a14a9a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a14a9d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14aa0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a14aa3 jmp 0x10a14a84 */
  goto L_10a14a84;
L_10a14aa5:;
  /* 10a14aa5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14aa9 je 0x10a14ab9 */
  if (C.zf) goto L_10a14ab9;
  /* 10a14aab mov edx, dword ptr [0x10a30d90] */
  EDX = (r32((uint32_t)(0x10a30d90)));
  /* 10a14ab1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a14ab3 mov dword ptr [0x10a30d90], edx */
  w32((uint32_t)(0x10a30d90), (EDX));
L_10a14ab9:;
  /* 10a14ab9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a14abc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a14abf mov dword ptr [0x10a30d94], ecx */
  w32((uint32_t)(0x10a30d94), (ECX));
  /* 10a14ac5 cmp dword ptr [0x10a30d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a30d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14acc je 0x10a14aee */
  if (C.zf) goto L_10a14aee;
  /* 10a14ace push 3 */
  push32((uint32_t)(0x3u));
  /* 10a14ad0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a14ad3 push edx */
  push32((uint32_t)(EDX));
  /* 10a14ad4 mov eax, dword ptr [0x10a30e20] */
  EAX = (r32((uint32_t)(0x10a30e20)));
  /* 10a14ad9 push eax */
  push32((uint32_t)(EAX));
  /* 10a14ada call 0x10a09410 */
  push32(0x10a14adfu); f_10a09410();
  /* 10a14adf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14ae2 mov ecx, dword ptr [0x10a30e20] */
  ECX = (r32((uint32_t)(0x10a30e20)));
  /* 10a14ae8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 10a14aec jmp 0x10a14af7 */
  goto L_10a14af7;
L_10a14aee:;
  /* 10a14aee mov edx, dword ptr [0x10a30e20] */
  EDX = (r32((uint32_t)(0x10a30e20)));
  /* 10a14af4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10a14af7:;
  /* 10a14af7 mov esp, ebp */
  ESP = (EBP);
  /* 10a14af9 pop ebp */
  EBP = (pop32());
  /* 10a14afa ret  */
  ESPCHK(0x10a14750u, _esp0);
  ESP += 4; return;
}

/* FUN_10014b00 @ 0x10a14b00 (46 bytes, 18 insns) */
void f_10a14b00(void) {
  FTRACE(0x10a14b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a14b00 push ebp */
  push32((uint32_t)(EBP));
  /* 10a14b01 mov ebp, esp */
  EBP = (ESP);
  /* 10a14b03 push ecx */
  push32((uint32_t)(ECX));
  /* 10a14b04 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10a14b06 call 0x10a095f0 */
  push32(0x10a14b0bu); f_10a095f0();
  /* 10a14b0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14b0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a14b11 push eax */
  push32((uint32_t)(EAX));
  /* 10a14b12 call 0x10a14b30 */
  push32(0x10a14b17u); f_10a14b30();
  /* 10a14b17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14b1a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a14b1d push 0xb */
  push32((uint32_t)(0xbu));
  /* 10a14b1f call 0x10a09690 */
  push32(0x10a14b24u); f_10a09690();
  /* 10a14b24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14b27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a14b2a mov esp, ebp */
  ESP = (EBP);
  /* 10a14b2c pop ebp */
  EBP = (pop32());
  /* 10a14b2d ret  */
  ESPCHK(0x10a14b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10014b30 @ 0x10a14b30 (762 bytes, 246 insns) */
void f_10a14b30(void) {
  FTRACE(0x10a14b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a14b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10a14b31 mov ebp, esp */
  EBP = (ESP);
  /* 10a14b33 push ecx */
  push32((uint32_t)(ECX));
  /* 10a14b34 cmp dword ptr [0x10a30d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a30d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14b3b jne 0x10a14b44 */
  if (!C.zf) goto L_10a14b44;
  /* 10a14b3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a14b3f jmp 0x10a14e26 */
  goto L_10a14e26;
L_10a14b44:;
  /* 10a14b44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a14b47 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10a14b4a cmp ecx, dword ptr [0x10a30e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a30e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14b50 jne 0x10a14b64 */
  if (!C.zf) goto L_10a14b64;
  /* 10a14b52 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a14b55 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a14b58 cmp eax, dword ptr [0x10a30e38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a30e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14b5e je 0x10a14d2b */
  if (C.zf) goto L_10a14d2b;
L_10a14b64:;
  /* 10a14b64 cmp dword ptr [0x10a31978], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31978))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14b6b je 0x10a14ce5 */
  if (C.zf) goto L_10a14ce5;
  /* 10a14b71 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a14b73 mov cx, word ptr [0x10a31a18] */
  CX = (r16((uint32_t)(0x10a31a18)));
  /* 10a14b7a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a14b7c jne 0x10a14bd9 */
  if (!C.zf) goto L_10a14bd9;
  /* 10a14b7e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a14b80 mov dx, word ptr [0x10a31a26] */
  DX = (r16((uint32_t)(0x10a31a26)));
  /* 10a14b87 push edx */
  push32((uint32_t)(EDX));
  /* 10a14b88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a14b8a mov ax, word ptr [0x10a31a24] */
  AX = (r16((uint32_t)(0x10a31a24)));
  /* 10a14b90 push eax */
  push32((uint32_t)(EAX));
  /* 10a14b91 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a14b93 mov cx, word ptr [0x10a31a22] */
  CX = (r16((uint32_t)(0x10a31a22)));
  /* 10a14b9a push ecx */
  push32((uint32_t)(ECX));
  /* 10a14b9b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a14b9d mov dx, word ptr [0x10a31a20] */
  DX = (r16((uint32_t)(0x10a31a20)));
  /* 10a14ba4 push edx */
  push32((uint32_t)(EDX));
  /* 10a14ba5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a14ba7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a14ba9 mov ax, word ptr [0x10a31a1c] */
  AX = (r16((uint32_t)(0x10a31a1c)));
  /* 10a14baf push eax */
  push32((uint32_t)(EAX));
  /* 10a14bb0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a14bb2 mov cx, word ptr [0x10a31a1e] */
  CX = (r16((uint32_t)(0x10a31a1e)));
  /* 10a14bb9 push ecx */
  push32((uint32_t)(ECX));
  /* 10a14bba xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a14bbc mov dx, word ptr [0x10a31a1a] */
  DX = (r16((uint32_t)(0x10a31a1a)));
  /* 10a14bc3 push edx */
  push32((uint32_t)(EDX));
  /* 10a14bc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a14bc7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10a14bca push ecx */
  push32((uint32_t)(ECX));
  /* 10a14bcb push 1 */
  push32((uint32_t)(0x1u));
  /* 10a14bcd push 1 */
  push32((uint32_t)(0x1u));
  /* 10a14bcf call 0x10a14e30 */
  push32(0x10a14bd4u); f_10a14e30();
  /* 10a14bd4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14bd7 jmp 0x10a14c2a */
  goto L_10a14c2a;
L_10a14bd9:;
  /* 10a14bd9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a14bdb mov dx, word ptr [0x10a31a26] */
  DX = (r16((uint32_t)(0x10a31a26)));
  /* 10a14be2 push edx */
  push32((uint32_t)(EDX));
  /* 10a14be3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a14be5 mov ax, word ptr [0x10a31a24] */
  AX = (r16((uint32_t)(0x10a31a24)));
  /* 10a14beb push eax */
  push32((uint32_t)(EAX));
  /* 10a14bec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a14bee mov cx, word ptr [0x10a31a22] */
  CX = (r16((uint32_t)(0x10a31a22)));
  /* 10a14bf5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a14bf6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a14bf8 mov dx, word ptr [0x10a31a20] */
  DX = (r16((uint32_t)(0x10a31a20)));
  /* 10a14bff push edx */
  push32((uint32_t)(EDX));
  /* 10a14c00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a14c02 mov ax, word ptr [0x10a31a1e] */
  AX = (r16((uint32_t)(0x10a31a1e)));
  /* 10a14c08 push eax */
  push32((uint32_t)(EAX));
  /* 10a14c09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a14c0b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a14c0d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a14c0f mov cx, word ptr [0x10a31a1a] */
  CX = (r16((uint32_t)(0x10a31a1a)));
  /* 10a14c16 push ecx */
  push32((uint32_t)(ECX));
  /* 10a14c17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a14c1a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a14c1d push eax */
  push32((uint32_t)(EAX));
  /* 10a14c1e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a14c20 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a14c22 call 0x10a14e30 */
  push32(0x10a14c27u); f_10a14e30();
  /* 10a14c27 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a14c2a:;
  /* 10a14c2a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a14c2c mov cx, word ptr [0x10a319c4] */
  CX = (r16((uint32_t)(0x10a319c4)));
  /* 10a14c33 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a14c35 jne 0x10a14c92 */
  if (!C.zf) goto L_10a14c92;
  /* 10a14c37 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a14c39 mov dx, word ptr [0x10a319d2] */
  DX = (r16((uint32_t)(0x10a319d2)));
  /* 10a14c40 push edx */
  push32((uint32_t)(EDX));
  /* 10a14c41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a14c43 mov ax, word ptr [0x10a319d0] */
  AX = (r16((uint32_t)(0x10a319d0)));
  /* 10a14c49 push eax */
  push32((uint32_t)(EAX));
  /* 10a14c4a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a14c4c mov cx, word ptr [0x10a319ce] */
  CX = (r16((uint32_t)(0x10a319ce)));
  /* 10a14c53 push ecx */
  push32((uint32_t)(ECX));
  /* 10a14c54 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a14c56 mov dx, word ptr [0x10a319cc] */
  DX = (r16((uint32_t)(0x10a319cc)));
  /* 10a14c5d push edx */
  push32((uint32_t)(EDX));
  /* 10a14c5e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a14c60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a14c62 mov ax, word ptr [0x10a319c8] */
  AX = (r16((uint32_t)(0x10a319c8)));
  /* 10a14c68 push eax */
  push32((uint32_t)(EAX));
  /* 10a14c69 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a14c6b mov cx, word ptr [0x10a319ca] */
  CX = (r16((uint32_t)(0x10a319ca)));
  /* 10a14c72 push ecx */
  push32((uint32_t)(ECX));
  /* 10a14c73 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a14c75 mov dx, word ptr [0x10a319c6] */
  DX = (r16((uint32_t)(0x10a319c6)));
  /* 10a14c7c push edx */
  push32((uint32_t)(EDX));
  /* 10a14c7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a14c80 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10a14c83 push ecx */
  push32((uint32_t)(ECX));
  /* 10a14c84 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a14c86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a14c88 call 0x10a14e30 */
  push32(0x10a14c8du); f_10a14e30();
  /* 10a14c8d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14c90 jmp 0x10a14ce3 */
  goto L_10a14ce3;
L_10a14c92:;
  /* 10a14c92 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a14c94 mov dx, word ptr [0x10a319d2] */
  DX = (r16((uint32_t)(0x10a319d2)));
  /* 10a14c9b push edx */
  push32((uint32_t)(EDX));
  /* 10a14c9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a14c9e mov ax, word ptr [0x10a319d0] */
  AX = (r16((uint32_t)(0x10a319d0)));
  /* 10a14ca4 push eax */
  push32((uint32_t)(EAX));
  /* 10a14ca5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a14ca7 mov cx, word ptr [0x10a319ce] */
  CX = (r16((uint32_t)(0x10a319ce)));
  /* 10a14cae push ecx */
  push32((uint32_t)(ECX));
  /* 10a14caf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a14cb1 mov dx, word ptr [0x10a319cc] */
  DX = (r16((uint32_t)(0x10a319cc)));
  /* 10a14cb8 push edx */
  push32((uint32_t)(EDX));
  /* 10a14cb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a14cbb mov ax, word ptr [0x10a319ca] */
  AX = (r16((uint32_t)(0x10a319ca)));
  /* 10a14cc1 push eax */
  push32((uint32_t)(EAX));
  /* 10a14cc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a14cc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a14cc6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a14cc8 mov cx, word ptr [0x10a319c6] */
  CX = (r16((uint32_t)(0x10a319c6)));
  /* 10a14ccf push ecx */
  push32((uint32_t)(ECX));
  /* 10a14cd0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a14cd3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a14cd6 push eax */
  push32((uint32_t)(EAX));
  /* 10a14cd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a14cd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a14cdb call 0x10a14e30 */
  push32(0x10a14ce0u); f_10a14e30();
  /* 10a14ce0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a14ce3:;
  /* 10a14ce3 jmp 0x10a14d2b */
  goto L_10a14d2b;
L_10a14ce5:;
  /* 10a14ce5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a14ce7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a14ce9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a14ceb push 2 */
  push32((uint32_t)(0x2u));
  /* 10a14ced push 0 */
  push32((uint32_t)(0x0u));
  /* 10a14cef push 0 */
  push32((uint32_t)(0x0u));
  /* 10a14cf1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a14cf3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a14cf5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a14cf8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10a14cfb push edx */
  push32((uint32_t)(EDX));
  /* 10a14cfc push 1 */
  push32((uint32_t)(0x1u));
  /* 10a14cfe push 1 */
  push32((uint32_t)(0x1u));
  /* 10a14d00 call 0x10a14e30 */
  push32(0x10a14d05u); f_10a14e30();
  /* 10a14d05 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14d08 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a14d0a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a14d0c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a14d0e push 2 */
  push32((uint32_t)(0x2u));
  /* 10a14d10 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a14d12 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a14d14 push 5 */
  push32((uint32_t)(0x5u));
  /* 10a14d16 push 0xa */
  push32((uint32_t)(0xau));
  /* 10a14d18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a14d1b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10a14d1e push ecx */
  push32((uint32_t)(ECX));
  /* 10a14d1f push 1 */
  push32((uint32_t)(0x1u));
  /* 10a14d21 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a14d23 call 0x10a14e30 */
  push32(0x10a14d28u); f_10a14e30();
  /* 10a14d28 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a14d2b:;
  /* 10a14d2b mov edx, dword ptr [0x10a30e2c] */
  EDX = (r32((uint32_t)(0x10a30e2c)));
  /* 10a14d31 cmp edx, dword ptr [0x10a30e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10a30e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14d37 jge 0x10a14d84 */
  if ((C.sf==C.of)) goto L_10a14d84;
  /* 10a14d39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a14d3c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10a14d3f cmp ecx, dword ptr [0x10a30e2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a30e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14d45 jl 0x10a14d55 */
  if ((C.sf!=C.of)) goto L_10a14d55;
  /* 10a14d47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a14d4a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10a14d4d cmp eax, dword ptr [0x10a30e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a30e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14d53 jle 0x10a14d5c */
  if ((C.zf||C.sf!=C.of)) goto L_10a14d5c;
L_10a14d55:;
  /* 10a14d55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a14d57 jmp 0x10a14e26 */
  goto L_10a14e26;
L_10a14d5c:;
  /* 10a14d5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a14d5f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10a14d62 cmp edx, dword ptr [0x10a30e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10a30e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14d68 jle 0x10a14d82 */
  if ((C.zf||C.sf!=C.of)) goto L_10a14d82;
  /* 10a14d6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a14d6d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10a14d70 cmp ecx, dword ptr [0x10a30e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a30e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14d76 jge 0x10a14d82 */
  if ((C.sf==C.of)) goto L_10a14d82;
  /* 10a14d78 mov eax, 1 */
  EAX = (0x1u);
  /* 10a14d7d jmp 0x10a14e26 */
  goto L_10a14e26;
L_10a14d82:;
  /* 10a14d82 jmp 0x10a14dc7 */
  goto L_10a14dc7;
L_10a14d84:;
  /* 10a14d84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a14d87 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10a14d8a cmp eax, dword ptr [0x10a30e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a30e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14d90 jl 0x10a14da0 */
  if ((C.sf!=C.of)) goto L_10a14da0;
  /* 10a14d92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a14d95 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10a14d98 cmp edx, dword ptr [0x10a30e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10a30e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14d9e jle 0x10a14da7 */
  if ((C.zf||C.sf!=C.of)) goto L_10a14da7;
L_10a14da0:;
  /* 10a14da0 mov eax, 1 */
  EAX = (0x1u);
  /* 10a14da5 jmp 0x10a14e26 */
  goto L_10a14e26;
L_10a14da7:;
  /* 10a14da7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a14daa mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10a14dad cmp ecx, dword ptr [0x10a30e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a30e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14db3 jle 0x10a14dc7 */
  if ((C.zf||C.sf!=C.of)) goto L_10a14dc7;
  /* 10a14db5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a14db8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10a14dbb cmp eax, dword ptr [0x10a30e2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a30e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14dc1 jge 0x10a14dc7 */
  if ((C.sf==C.of)) goto L_10a14dc7;
  /* 10a14dc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a14dc5 jmp 0x10a14e26 */
  goto L_10a14e26;
L_10a14dc7:;
  /* 10a14dc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a14dca mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a14dcd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a14dd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a14dd3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a14dd5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14dd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a14dda mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a14ddd imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a14de3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14de5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a14deb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a14dee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a14df1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10a14df4 cmp edx, dword ptr [0x10a30e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10a30e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14dfa jne 0x10a14e12 */
  if (!C.zf) goto L_10a14e12;
  /* 10a14dfc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a14dff cmp eax, dword ptr [0x10a30e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a30e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14e05 jl 0x10a14e0e */
  if ((C.sf!=C.of)) goto L_10a14e0e;
  /* 10a14e07 mov eax, 1 */
  EAX = (0x1u);
  /* 10a14e0c jmp 0x10a14e26 */
  goto L_10a14e26;
L_10a14e0e:;
  /* 10a14e0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a14e10 jmp 0x10a14e26 */
  goto L_10a14e26;
L_10a14e12:;
  /* 10a14e12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a14e15 cmp ecx, dword ptr [0x10a30e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a30e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14e1b jge 0x10a14e24 */
  if ((C.sf==C.of)) goto L_10a14e24;
  /* 10a14e1d mov eax, 1 */
  EAX = (0x1u);
  /* 10a14e22 jmp 0x10a14e26 */
  goto L_10a14e26;
L_10a14e24:;
  /* 10a14e24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a14e26:;
  /* 10a14e26 mov esp, ebp */
  ESP = (EBP);
  /* 10a14e28 pop ebp */
  EBP = (pop32());
  /* 10a14e29 ret  */
  ESPCHK(0x10a14b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10014e30 @ 0x10a14e30 (504 bytes, 145 insns) */
void f_10a14e30(void) {
  FTRACE(0x10a14e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a14e30 push ebp */
  push32((uint32_t)(EBP));
  /* 10a14e31 mov ebp, esp */
  EBP = (ESP);
  /* 10a14e33 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a14e36 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14e3a jne 0x10a14f0c */
  if (!C.zf) goto L_10a14f0c;
  /* 10a14e40 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a14e43 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10a14e46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a14e48 jne 0x10a14e59 */
  if (!C.zf) goto L_10a14e59;
  /* 10a14e4a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a14e4d mov edx, dword ptr [ecx*4 + 0x10a30e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10a30e4c)));
  /* 10a14e54 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10a14e57 jmp 0x10a14e66 */
  goto L_10a14e66;
L_10a14e59:;
  /* 10a14e59 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a14e5c mov ecx, dword ptr [eax*4 + 0x10a30e80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10a30e80)));
  /* 10a14e63 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10a14e66:;
  /* 10a14e66 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a14e69 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14e6c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a14e6f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a14e72 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a14e75 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a14e7b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a14e7e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14e80 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a14e83 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a14e86 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10a14e89 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 10a14e8d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a14e8e mov ecx, 7 */
  ECX = (0x7u);
  /* 10a14e93 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a14e95 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a14e98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a14e9b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14e9e jge 0x10a14eb9 */
  if ((C.sf==C.of)) goto L_10a14eb9;
  /* 10a14ea0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10a14ea3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a14ea6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a14ea9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a14eac imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a14eaf add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14eb2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14eb4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a14eb7 jmp 0x10a14ecd */
  goto L_10a14ecd;
L_10a14eb9:;
  /* 10a14eb9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10a14ebc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a14ebf mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a14ec2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a14ec5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14ec8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14eca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a14ecd:;
  /* 10a14ecd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14ed1 jne 0x10a14f0a */
  if (!C.zf) goto L_10a14f0a;
  /* 10a14ed3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a14ed6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10a14ed9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a14edb jne 0x10a14eec */
  if (!C.zf) goto L_10a14eec;
  /* 10a14edd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a14ee0 mov eax, dword ptr [edx*4 + 0x10a30e50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10a30e50)));
  /* 10a14ee7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a14eea jmp 0x10a14ef9 */
  goto L_10a14ef9;
L_10a14eec:;
  /* 10a14eec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a14eef mov edx, dword ptr [ecx*4 + 0x10a30e84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10a30e84)));
  /* 10a14ef6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10a14ef9:;
  /* 10a14ef9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a14efc cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14eff jle 0x10a14f0a */
  if ((C.zf||C.sf!=C.of)) goto L_10a14f0a;
  /* 10a14f01 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a14f04 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a14f07 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10a14f0a:;
  /* 10a14f0a jmp 0x10a14f41 */
  goto L_10a14f41;
L_10a14f0c:;
  /* 10a14f0c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a14f0f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10a14f12 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a14f14 jne 0x10a14f25 */
  if (!C.zf) goto L_10a14f25;
  /* 10a14f16 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a14f19 mov ecx, dword ptr [eax*4 + 0x10a30e4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10a30e4c)));
  /* 10a14f20 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a14f23 jmp 0x10a14f32 */
  goto L_10a14f32;
L_10a14f25:;
  /* 10a14f25 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a14f28 mov eax, dword ptr [edx*4 + 0x10a30e80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10a30e80)));
  /* 10a14f2f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10a14f32:;
  /* 10a14f32 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a14f35 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a14f38 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a14f3b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14f3e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10a14f41:;
  /* 10a14f41 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14f45 jne 0x10a14f81 */
  if (!C.zf) goto L_10a14f81;
  /* 10a14f47 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a14f4a mov dword ptr [0x10a30e2c], eax */
  w32((uint32_t)(0x10a30e2c), (EAX));
  /* 10a14f4f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10a14f52 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a14f55 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10a14f58 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14f5a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a14f5d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10a14f60 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14f62 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a14f68 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10a14f6b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14f6d mov dword ptr [0x10a30e30], ecx */
  w32((uint32_t)(0x10a30e30), (ECX));
  /* 10a14f73 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a14f76 mov dword ptr [0x10a30e28], edx */
  w32((uint32_t)(0x10a30e28), (EDX));
  /* 10a14f7c jmp 0x10a15024 */
  goto L_10a15024;
L_10a14f81:;
  /* 10a14f81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a14f84 mov dword ptr [0x10a30e3c], eax */
  w32((uint32_t)(0x10a30e3c), (EAX));
  /* 10a14f89 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10a14f8c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a14f8f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10a14f92 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14f94 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a14f97 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10a14f9a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14f9c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a14fa2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10a14fa5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14fa7 mov dword ptr [0x10a30e40], ecx */
  w32((uint32_t)(0x10a30e40), (ECX));
  /* 10a14fad mov edx, dword ptr [0x10a30d98] */
  EDX = (r32((uint32_t)(0x10a30d98)));
  /* 10a14fb3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a14fb9 mov eax, dword ptr [0x10a30e40] */
  EAX = (r32((uint32_t)(0x10a30e40)));
  /* 10a14fbe add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14fc0 mov dword ptr [0x10a30e40], eax */
  w32((uint32_t)(0x10a30e40), (EAX));
  /* 10a14fc5 cmp dword ptr [0x10a30e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a30e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14fcc jge 0x10a14ff1 */
  if ((C.sf==C.of)) goto L_10a14ff1;
  /* 10a14fce mov ecx, dword ptr [0x10a30e40] */
  ECX = (r32((uint32_t)(0x10a30e40)));
  /* 10a14fd4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a14fda mov dword ptr [0x10a30e40], ecx */
  w32((uint32_t)(0x10a30e40), (ECX));
  /* 10a14fe0 mov edx, dword ptr [0x10a30e3c] */
  EDX = (r32((uint32_t)(0x10a30e3c)));
  /* 10a14fe6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a14fe9 mov dword ptr [0x10a30e3c], edx */
  w32((uint32_t)(0x10a30e3c), (EDX));
  /* 10a14fef jmp 0x10a1501b */
  goto L_10a1501b;
L_10a14ff1:;
  /* 10a14ff1 cmp dword ptr [0x10a30e40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x10a30e40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a14ffb jl 0x10a1501b */
  if ((C.sf!=C.of)) goto L_10a1501b;
  /* 10a14ffd mov eax, dword ptr [0x10a30e40] */
  EAX = (r32((uint32_t)(0x10a30e40)));
  /* 10a15002 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a15007 mov dword ptr [0x10a30e40], eax */
  w32((uint32_t)(0x10a30e40), (EAX));
  /* 10a1500c mov ecx, dword ptr [0x10a30e3c] */
  ECX = (r32((uint32_t)(0x10a30e3c)));
  /* 10a15012 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15015 mov dword ptr [0x10a30e3c], ecx */
  w32((uint32_t)(0x10a30e3c), (ECX));
L_10a1501b:;
  /* 10a1501b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a1501e mov dword ptr [0x10a30e38], edx */
  w32((uint32_t)(0x10a30e38), (EDX));
L_10a15024:;
  /* 10a15024 mov esp, ebp */
  ESP = (EBP);
  /* 10a15026 pop ebp */
  EBP = (pop32());
  /* 10a15027 ret  */
  ESPCHK(0x10a14e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10015030 @ 0x10a15030 (382 bytes, 135 insns) */
void f_10a15030(void) {
  FTRACE(0x10a15030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a15030 push ebp */
  push32((uint32_t)(EBP));
  /* 10a15031 mov ebp, esp */
  EBP = (ESP);
  /* 10a15033 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a15035 push 0x10a2db40 */
  push32((uint32_t)(0x10a2db40u));
  /* 10a1503a push 0x10a0ecf8 */
  push32((uint32_t)(0x10a0ecf8u));
  /* 10a1503f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10a15045 push eax */
  push32((uint32_t)(EAX));
  /* 10a15046 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10a1504d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15050 push ebx */
  push32((uint32_t)(EBX));
  /* 10a15051 push esi */
  push32((uint32_t)(ESI));
  /* 10a15052 push edi */
  push32((uint32_t)(EDI));
  /* 10a15053 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a15056 cmp dword ptr [0x10a31a34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31a34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1505d jne 0x10a150a2 */
  if (!C.zf) goto L_10a150a2;
  /* 10a1505f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a15061 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a15063 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a15065 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a15067 call dword ptr [0x10a342b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342b4))), 0x10a1506du);
  /* 10a1506d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a1506f je 0x10a1507d */
  if (C.zf) goto L_10a1507d;
  /* 10a15071 mov dword ptr [0x10a31a34], 1 */
  w32((uint32_t)(0x10a31a34), (0x1u));
  /* 10a1507b jmp 0x10a150a2 */
  goto L_10a150a2;
L_10a1507d:;
  /* 10a1507d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a1507f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a15081 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a15083 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a15085 call dword ptr [0x10a342cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342cc))), 0x10a1508bu);
  /* 10a1508b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a1508d je 0x10a1509b */
  if (C.zf) goto L_10a1509b;
  /* 10a1508f mov dword ptr [0x10a31a34], 2 */
  w32((uint32_t)(0x10a31a34), (0x2u));
  /* 10a15099 jmp 0x10a150a2 */
  goto L_10a150a2;
L_10a1509b:;
  /* 10a1509b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a1509d jmp 0x10a151b1 */
  goto L_10a151b1;
L_10a150a2:;
  /* 10a150a2 cmp dword ptr [0x10a31a34], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a31a34))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a150a9 jne 0x10a150c6 */
  if (!C.zf) goto L_10a150c6;
  /* 10a150ab mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a150ae push eax */
  push32((uint32_t)(EAX));
  /* 10a150af mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a150b2 push ecx */
  push32((uint32_t)(ECX));
  /* 10a150b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a150b6 push edx */
  push32((uint32_t)(EDX));
  /* 10a150b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a150ba push eax */
  push32((uint32_t)(EAX));
  /* 10a150bb call dword ptr [0x10a342b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342b4))), 0x10a150c1u);
  /* 10a150c1 jmp 0x10a151b1 */
  goto L_10a151b1;
L_10a150c6:;
  /* 10a150c6 cmp dword ptr [0x10a31a34], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10a31a34))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a150cd jne 0x10a151af */
  if (!C.zf) goto L_10a151af;
  /* 10a150d3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a150d7 jne 0x10a150e2 */
  if (!C.zf) goto L_10a150e2;
  /* 10a150d9 mov ecx, dword ptr [0x10a318e8] */
  ECX = (r32((uint32_t)(0x10a318e8)));
  /* 10a150df mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10a150e2:;
  /* 10a150e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a150e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a150e6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a150e9 push edx */
  push32((uint32_t)(EDX));
  /* 10a150ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a150ed push eax */
  push32((uint32_t)(EAX));
  /* 10a150ee call dword ptr [0x10a342cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342cc))), 0x10a150f4u);
  /* 10a150f4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10a150f7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a150fb jne 0x10a15104 */
  if (!C.zf) goto L_10a15104;
  /* 10a150fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a150ff jmp 0x10a151b1 */
  goto L_10a151b1;
L_10a15104:;
  /* 10a15104 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a1510b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a1510e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15111 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10a15113 call 0x10a08d90 */
  push32(0x10a15118u); f_10a08d90();
  /* 10a15118 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10a1511b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a1511e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a15121 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10a15124 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10a1512b jmp 0x10a15144 */
  goto L_10a15144;
  /* 10a1512d mov eax, 1 */
  EAX = (0x1u);
  /* 10a15132 ret  */
  ESPCHK(0x10a15030u, _esp0);
  ESP += 4; return;
  /* 10a15133 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10a15136 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10a1513d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10a15144:;
  /* 10a15144 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15148 jne 0x10a1514e */
  if (!C.zf) goto L_10a1514e;
  /* 10a1514a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a1514c jmp 0x10a151b1 */
  goto L_10a151b1;
L_10a1514e:;
  /* 10a1514e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a15151 push edx */
  push32((uint32_t)(EDX));
  /* 10a15152 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a15155 push eax */
  push32((uint32_t)(EAX));
  /* 10a15156 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a15159 push ecx */
  push32((uint32_t)(ECX));
  /* 10a1515a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1515d push edx */
  push32((uint32_t)(EDX));
  /* 10a1515e call dword ptr [0x10a342cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342cc))), 0x10a15164u);
  /* 10a15164 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a15166 jne 0x10a1516c */
  if (!C.zf) goto L_10a1516c;
  /* 10a15168 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a1516a jmp 0x10a151b1 */
  goto L_10a151b1;
L_10a1516c:;
  /* 10a1516c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15170 jne 0x10a1518d */
  if (!C.zf) goto L_10a1518d;
  /* 10a15172 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a15174 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a15176 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a15178 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a1517b push eax */
  push32((uint32_t)(EAX));
  /* 10a1517c push 1 */
  push32((uint32_t)(0x1u));
  /* 10a1517e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a15181 push ecx */
  push32((uint32_t)(ECX));
  /* 10a15182 call dword ptr [0x10a342fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342fc))), 0x10a15188u);
  /* 10a15188 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10a1518b jmp 0x10a151aa */
  goto L_10a151aa;
L_10a1518d:;
  /* 10a1518d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a15190 push edx */
  push32((uint32_t)(EDX));
  /* 10a15191 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a15194 push eax */
  push32((uint32_t)(EAX));
  /* 10a15195 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a15197 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a1519a push ecx */
  push32((uint32_t)(ECX));
  /* 10a1519b push 1 */
  push32((uint32_t)(0x1u));
  /* 10a1519d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a151a0 push edx */
  push32((uint32_t)(EDX));
  /* 10a151a1 call dword ptr [0x10a342fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342fc))), 0x10a151a7u);
  /* 10a151a7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10a151aa:;
  /* 10a151aa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a151ad jmp 0x10a151b1 */
  goto L_10a151b1;
L_10a151af:;
  /* 10a151af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a151b1:;
  /* 10a151b1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10a151b4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a151b7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10a151be pop edi */
  EDI = (pop32());
  /* 10a151bf pop esi */
  ESI = (pop32());
  /* 10a151c0 pop ebx */
  EBX = (pop32());
  /* 10a151c1 mov esp, ebp */
  ESP = (EBP);
  /* 10a151c3 pop ebp */
  EBP = (pop32());
  /* 10a151c4 ret  */
  ESPCHK(0x10a15030u, _esp0);
  ESP += 4; return;
}

/* FUN_100151d0 @ 0x10a151d0 (398 bytes, 140 insns) */
void f_10a151d0(void) {
  FTRACE(0x10a151d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a151d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a151d1 mov ebp, esp */
  EBP = (ESP);
  /* 10a151d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a151d5 push 0x10a2db50 */
  push32((uint32_t)(0x10a2db50u));
  /* 10a151da push 0x10a0ecf8 */
  push32((uint32_t)(0x10a0ecf8u));
  /* 10a151df mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10a151e5 push eax */
  push32((uint32_t)(EAX));
  /* 10a151e6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10a151ed add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a151f0 push ebx */
  push32((uint32_t)(EBX));
  /* 10a151f1 push esi */
  push32((uint32_t)(ESI));
  /* 10a151f2 push edi */
  push32((uint32_t)(EDI));
  /* 10a151f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a151f6 cmp dword ptr [0x10a31a38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31a38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a151fd jne 0x10a15242 */
  if (!C.zf) goto L_10a15242;
  /* 10a151ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10a15201 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a15203 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a15205 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a15207 call dword ptr [0x10a342b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342b4))), 0x10a1520du);
  /* 10a1520d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a1520f je 0x10a1521d */
  if (C.zf) goto L_10a1521d;
  /* 10a15211 mov dword ptr [0x10a31a38], 1 */
  w32((uint32_t)(0x10a31a38), (0x1u));
  /* 10a1521b jmp 0x10a15242 */
  goto L_10a15242;
L_10a1521d:;
  /* 10a1521d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a1521f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a15221 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a15223 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a15225 call dword ptr [0x10a342cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342cc))), 0x10a1522bu);
  /* 10a1522b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a1522d je 0x10a1523b */
  if (C.zf) goto L_10a1523b;
  /* 10a1522f mov dword ptr [0x10a31a38], 2 */
  w32((uint32_t)(0x10a31a38), (0x2u));
  /* 10a15239 jmp 0x10a15242 */
  goto L_10a15242;
L_10a1523b:;
  /* 10a1523b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a1523d jmp 0x10a15361 */
  goto L_10a15361;
L_10a15242:;
  /* 10a15242 cmp dword ptr [0x10a31a38], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10a31a38))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15249 jne 0x10a15266 */
  if (!C.zf) goto L_10a15266;
  /* 10a1524b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a1524e push eax */
  push32((uint32_t)(EAX));
  /* 10a1524f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a15252 push ecx */
  push32((uint32_t)(ECX));
  /* 10a15253 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a15256 push edx */
  push32((uint32_t)(EDX));
  /* 10a15257 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1525a push eax */
  push32((uint32_t)(EAX));
  /* 10a1525b call dword ptr [0x10a342cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342cc))), 0x10a15261u);
  /* 10a15261 jmp 0x10a15361 */
  goto L_10a15361;
L_10a15266:;
  /* 10a15266 cmp dword ptr [0x10a31a38], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a31a38))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1526d jne 0x10a1535f */
  if (!C.zf) goto L_10a1535f;
  /* 10a15273 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15277 jne 0x10a15282 */
  if (!C.zf) goto L_10a15282;
  /* 10a15279 mov ecx, dword ptr [0x10a318e8] */
  ECX = (r32((uint32_t)(0x10a318e8)));
  /* 10a1527f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10a15282:;
  /* 10a15282 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a15284 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a15286 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a15289 push edx */
  push32((uint32_t)(EDX));
  /* 10a1528a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1528d push eax */
  push32((uint32_t)(EAX));
  /* 10a1528e call dword ptr [0x10a342b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342b4))), 0x10a15294u);
  /* 10a15294 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10a15297 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1529b jne 0x10a152a4 */
  if (!C.zf) goto L_10a152a4;
  /* 10a1529d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a1529f jmp 0x10a15361 */
  goto L_10a15361;
L_10a152a4:;
  /* 10a152a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a152ab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a152ae shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10a152b0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a152b3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10a152b5 call 0x10a08d90 */
  push32(0x10a152bau); f_10a08d90();
  /* 10a152ba mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10a152bd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a152c0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a152c3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10a152c6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10a152cd jmp 0x10a152e6 */
  goto L_10a152e6;
  /* 10a152cf mov eax, 1 */
  EAX = (0x1u);
  /* 10a152d4 ret  */
  ESPCHK(0x10a151d0u, _esp0);
  ESP += 4; return;
  /* 10a152d5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10a152d8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10a152df mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10a152e6:;
  /* 10a152e6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a152ea jne 0x10a152f0 */
  if (!C.zf) goto L_10a152f0;
  /* 10a152ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a152ee jmp 0x10a15361 */
  goto L_10a15361;
L_10a152f0:;
  /* 10a152f0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a152f3 push edx */
  push32((uint32_t)(EDX));
  /* 10a152f4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a152f7 push eax */
  push32((uint32_t)(EAX));
  /* 10a152f8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a152fb push ecx */
  push32((uint32_t)(ECX));
  /* 10a152fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a152ff push edx */
  push32((uint32_t)(EDX));
  /* 10a15300 call dword ptr [0x10a342b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342b4))), 0x10a15306u);
  /* 10a15306 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a15308 jne 0x10a1530e */
  if (!C.zf) goto L_10a1530e;
  /* 10a1530a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a1530c jmp 0x10a15361 */
  goto L_10a15361;
L_10a1530e:;
  /* 10a1530e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15312 jne 0x10a15336 */
  if (!C.zf) goto L_10a15336;
  /* 10a15314 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a15316 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a15318 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a1531a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a1531c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a1531e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a15321 push eax */
  push32((uint32_t)(EAX));
  /* 10a15322 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10a15327 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a1532a push ecx */
  push32((uint32_t)(ECX));
  /* 10a1532b call dword ptr [0x10a343b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a343b0))), 0x10a15331u);
  /* 10a15331 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10a15334 jmp 0x10a1535a */
  goto L_10a1535a;
L_10a15336:;
  /* 10a15336 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a15338 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a1533a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a1533d push edx */
  push32((uint32_t)(EDX));
  /* 10a1533e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a15341 push eax */
  push32((uint32_t)(EAX));
  /* 10a15342 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a15344 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a15347 push ecx */
  push32((uint32_t)(ECX));
  /* 10a15348 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10a1534d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a15350 push edx */
  push32((uint32_t)(EDX));
  /* 10a15351 call dword ptr [0x10a343b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a343b0))), 0x10a15357u);
  /* 10a15357 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10a1535a:;
  /* 10a1535a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a1535d jmp 0x10a15361 */
  goto L_10a15361;
L_10a1535f:;
  /* 10a1535f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a15361:;
  /* 10a15361 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10a15364 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a15367 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10a1536e pop edi */
  EDI = (pop32());
  /* 10a1536f pop esi */
  ESI = (pop32());
  /* 10a15370 pop ebx */
  EBX = (pop32());
  /* 10a15371 mov esp, ebp */
  ESP = (EBP);
  /* 10a15373 pop ebp */
  EBP = (pop32());
  /* 10a15374 ret  */
  ESPCHK(0x10a151d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015380 @ 0x10a15380 (11 bytes, 6 insns) */
void f_10a15380(void) {
  FTRACE(0x10a15380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a15380 push ebp */
  push32((uint32_t)(EBP));
  /* 10a15381 mov ebp, esp */
  EBP = (ESP);
  /* 10a15383 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a15386 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15389 pop ebp */
  EBP = (pop32());
  /* 10a1538a ret  */
  ESPCHK(0x10a15380u, _esp0);
  ESP += 4; return;
}

/* FUN_10015390 @ 0x10a15390 (147 bytes, 43 insns) */
void f_10a15390(void) {
  FTRACE(0x10a15390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a15390 push ebp */
  push32((uint32_t)(EBP));
  /* 10a15391 mov ebp, esp */
  EBP = (ESP);
  /* 10a15393 push ecx */
  push32((uint32_t)(ECX));
  /* 10a15394 cmp dword ptr [0x10a318d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a318d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1539b jne 0x10a153b7 */
  if (!C.zf) goto L_10a153b7;
  /* 10a1539d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a153a1 jl 0x10a153b2 */
  if ((C.sf!=C.of)) goto L_10a153b2;
  /* 10a153a3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a153a7 jg 0x10a153b2 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a153b2;
  /* 10a153a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a153ac add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a153af mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10a153b2:;
  /* 10a153b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a153b5 jmp 0x10a1541f */
  goto L_10a1541f;
L_10a153b7:;
  /* 10a153b7 push 0x10a31a64 */
  push32((uint32_t)(0x10a31a64u));
  /* 10a153bc call dword ptr [0x10a3435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3435c))), 0x10a153c2u);
  /* 10a153c2 cmp dword ptr [0x10a31a54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31a54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a153c9 je 0x10a153e9 */
  if (C.zf) goto L_10a153e9;
  /* 10a153cb push 0x10a31a64 */
  push32((uint32_t)(0x10a31a64u));
  /* 10a153d0 call dword ptr [0x10a3434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3434c))), 0x10a153d6u);
  /* 10a153d6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a153d8 call 0x10a095f0 */
  push32(0x10a153ddu); f_10a095f0();
  /* 10a153dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a153e0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a153e7 jmp 0x10a153f0 */
  goto L_10a153f0;
L_10a153e9:;
  /* 10a153e9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10a153f0:;
  /* 10a153f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a153f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a153f4 call 0x10a15430 */
  push32(0x10a153f9u); f_10a15430();
  /* 10a153f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a153fc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a153ff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15403 je 0x10a15411 */
  if (C.zf) goto L_10a15411;
  /* 10a15405 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a15407 call 0x10a09690 */
  push32(0x10a1540cu); f_10a09690();
  /* 10a1540c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1540f jmp 0x10a1541c */
  goto L_10a1541c;
L_10a15411:;
  /* 10a15411 push 0x10a31a64 */
  push32((uint32_t)(0x10a31a64u));
  /* 10a15416 call dword ptr [0x10a3434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3434c))), 0x10a1541cu);
L_10a1541c:;
  /* 10a1541c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10a1541f:;
  /* 10a1541f mov esp, ebp */
  ESP = (EBP);
  /* 10a15421 pop ebp */
  EBP = (pop32());
  /* 10a15422 ret  */
  ESPCHK(0x10a15390u, _esp0);
  ESP += 4; return;
}

/* FUN_10015430 @ 0x10a15430 (299 bytes, 91 insns) */
void f_10a15430(void) {
  FTRACE(0x10a15430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a15430 push ebp */
  push32((uint32_t)(EBP));
  /* 10a15431 mov ebp, esp */
  EBP = (ESP);
  /* 10a15433 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a15436 cmp dword ptr [0x10a318d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a318d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1543d jne 0x10a1545c */
  if (!C.zf) goto L_10a1545c;
  /* 10a1543f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15443 jl 0x10a15454 */
  if ((C.sf!=C.of)) goto L_10a15454;
  /* 10a15445 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15449 jg 0x10a15454 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a15454;
  /* 10a1544b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1544e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15451 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10a15454:;
  /* 10a15454 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a15457 jmp 0x10a15557 */
  goto L_10a15557;
L_10a1545c:;
  /* 10a1545c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15463 jge 0x10a154a3 */
  if ((C.sf==C.of)) goto L_10a154a3;
  /* 10a15465 cmp dword ptr [0x10a2fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a2fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1546c jle 0x10a15481 */
  if ((C.zf||C.sf!=C.of)) goto L_10a15481;
  /* 10a1546e push 1 */
  push32((uint32_t)(0x1u));
  /* 10a15470 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a15473 push ecx */
  push32((uint32_t)(ECX));
  /* 10a15474 call 0x10a0bc00 */
  push32(0x10a15479u); f_10a0bc00();
  /* 10a15479 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1547c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a1547f jmp 0x10a15495 */
  goto L_10a15495;
L_10a15481:;
  /* 10a15481 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a15484 mov eax, dword ptr [0x10a2fc98] */
  EAX = (r32((uint32_t)(0x10a2fc98)));
  /* 10a15489 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a1548b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10a1548f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a15492 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10a15495:;
  /* 10a15495 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15499 jne 0x10a154a3 */
  if (!C.zf) goto L_10a154a3;
  /* 10a1549b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1549e jmp 0x10a15557 */
  goto L_10a15557;
L_10a154a3:;
  /* 10a154a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a154a6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10a154a9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a154af and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a154b5 mov eax, dword ptr [0x10a2fc98] */
  EAX = (r32((uint32_t)(0x10a2fc98)));
  /* 10a154ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a154bc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10a154c0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10a154c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a154c8 je 0x10a154ec */
  if (C.zf) goto L_10a154ec;
  /* 10a154ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a154cd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10a154d0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a154d6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 10a154d9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10a154dc mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 10a154df mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 10a154e3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10a154ea jmp 0x10a154fd */
  goto L_10a154fd;
L_10a154ec:;
  /* 10a154ec mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10a154ef mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10a154f2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 10a154f6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10a154fd:;
  /* 10a154fd push 1 */
  push32((uint32_t)(0x1u));
  /* 10a154ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10a15501 push 3 */
  push32((uint32_t)(0x3u));
  /* 10a15503 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10a15506 push edx */
  push32((uint32_t)(EDX));
  /* 10a15507 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a1550a push eax */
  push32((uint32_t)(EAX));
  /* 10a1550b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10a1550e push ecx */
  push32((uint32_t)(ECX));
  /* 10a1550f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10a15514 mov edx, dword ptr [0x10a318d8] */
  EDX = (r32((uint32_t)(0x10a318d8)));
  /* 10a1551a push edx */
  push32((uint32_t)(EDX));
  /* 10a1551b call 0x10a0dfe0 */
  push32(0x10a15520u); f_10a0dfe0();
  /* 10a15520 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15523 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a15526 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1552a jne 0x10a15531 */
  if (!C.zf) goto L_10a15531;
  /* 10a1552c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1552f jmp 0x10a15557 */
  goto L_10a15557;
L_10a15531:;
  /* 10a15531 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15535 jne 0x10a15541 */
  if (!C.zf) goto L_10a15541;
  /* 10a15537 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a1553a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a1553f jmp 0x10a15557 */
  goto L_10a15557;
L_10a15541:;
  /* 10a15541 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a15544 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a15549 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 10a1554c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a15552 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10a15555 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10a15557:;
  /* 10a15557 mov esp, ebp */
  ESP = (EBP);
  /* 10a15559 pop ebp */
  EBP = (pop32());
  /* 10a1555a ret  */
  ESPCHK(0x10a15430u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x10a15560 (52 bytes, 19 insns) */
void f_10a15560(void) {
  FTRACE(0x10a15560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a15560 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a15564 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10a15568 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a1556a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10a1556e jne 0x10a15579 */
  if (!C.zf) goto L_10a15579;
  /* 10a15570 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10a15574 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10a15576 ret 0x10 */
  ESPCHK(0x10a15560u, _esp0);
  ESP += 20; return;
L_10a15579:;
  /* 10a15579 push ebx */
  push32((uint32_t)(EBX));
  /* 10a1557a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10a1557c mov ebx, eax */
  EBX = (EAX);
  /* 10a1557e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a15582 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10a15586 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15588 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a1558c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10a1558e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15590 pop ebx */
  EBX = (pop32());
  /* 10a15591 ret 0x10 */
  ESPCHK(0x10a15560u, _esp0);
  ESP += 20; return;
}

/* FUN_100155a0 @ 0x10a155a0 (46 bytes, 18 insns) */
void f_10a155a0(void) {
  FTRACE(0x10a155a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a155a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a155a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a155a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a155a4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10a155a6 call 0x10a095f0 */
  push32(0x10a155abu); f_10a095f0();
  /* 10a155ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a155ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a155b1 push eax */
  push32((uint32_t)(EAX));
  /* 10a155b2 call 0x10a155d0 */
  push32(0x10a155b7u); f_10a155d0();
  /* 10a155b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a155ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a155bd push 0xc */
  push32((uint32_t)(0xcu));
  /* 10a155bf call 0x10a09690 */
  push32(0x10a155c4u); f_10a09690();
  /* 10a155c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a155c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a155ca mov esp, ebp */
  ESP = (EBP);
  /* 10a155cc pop ebp */
  EBP = (pop32());
  /* 10a155cd ret  */
  ESPCHK(0x10a155a0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x10a155d0 (198 bytes, 69 insns) */
void f_10a155d0(void) {
  FTRACE(0x10a155d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a155d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a155d1 mov ebp, esp */
  EBP = (ESP);
  /* 10a155d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a155d6 mov eax, dword ptr [0x10a316f8] */
  EAX = (r32((uint32_t)(0x10a316f8)));
  /* 10a155db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a155de cmp dword ptr [0x10a33200], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a33200))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a155e5 jne 0x10a155ee */
  if (!C.zf) goto L_10a155ee;
  /* 10a155e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a155e9 jmp 0x10a15692 */
  goto L_10a15692;
L_10a155ee:;
  /* 10a155ee cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a155f2 jne 0x10a15616 */
  if (!C.zf) goto L_10a15616;
  /* 10a155f4 cmp dword ptr [0x10a31700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a155fb je 0x10a15616 */
  if (C.zf) goto L_10a15616;
  /* 10a155fd call 0x10a156f0 */
  push32(0x10a15602u); f_10a156f0();
  /* 10a15602 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a15604 je 0x10a1560d */
  if (C.zf) goto L_10a1560d;
  /* 10a15606 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a15608 jmp 0x10a15692 */
  goto L_10a15692;
L_10a1560d:;
  /* 10a1560d mov ecx, dword ptr [0x10a316f8] */
  ECX = (r32((uint32_t)(0x10a316f8)));
  /* 10a15613 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10a15616:;
  /* 10a15616 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1561a je 0x10a15690 */
  if (C.zf) goto L_10a15690;
  /* 10a1561c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15620 je 0x10a15690 */
  if (C.zf) goto L_10a15690;
  /* 10a15622 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a15625 push edx */
  push32((uint32_t)(EDX));
  /* 10a15626 call 0x10a08a20 */
  push32(0x10a1562bu); f_10a08a20();
  /* 10a1562b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1562e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a15631:;
  /* 10a15631 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a15634 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15637 je 0x10a15690 */
  if (C.zf) goto L_10a15690;
  /* 10a15639 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a1563c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a1563e push edx */
  push32((uint32_t)(EDX));
  /* 10a1563f call 0x10a08a20 */
  push32(0x10a15644u); f_10a08a20();
  /* 10a15644 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15647 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1564a jbe 0x10a15685 */
  if ((C.cf||C.zf)) goto L_10a15685;
  /* 10a1564c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a1564f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a15651 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a15654 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 10a15658 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1565b jne 0x10a15685 */
  if (!C.zf) goto L_10a15685;
  /* 10a1565d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a15660 push ecx */
  push32((uint32_t)(ECX));
  /* 10a15661 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a15664 push edx */
  push32((uint32_t)(EDX));
  /* 10a15665 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a15668 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a1566a push ecx */
  push32((uint32_t)(ECX));
  /* 10a1566b call 0x10a156a0 */
  push32(0x10a15670u); f_10a156a0();
  /* 10a15670 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15673 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a15675 jne 0x10a15685 */
  if (!C.zf) goto L_10a15685;
  /* 10a15677 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a1567a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a1567c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a1567f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 10a15683 jmp 0x10a15692 */
  goto L_10a15692;
L_10a15685:;
  /* 10a15685 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a15688 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1568b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a1568e jmp 0x10a15631 */
  goto L_10a15631;
L_10a15690:;
  /* 10a15690 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a15692:;
  /* 10a15692 mov esp, ebp */
  ESP = (EBP);
  /* 10a15694 pop ebp */
  EBP = (pop32());
  /* 10a15695 ret  */
  ESPCHK(0x10a155d0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x10a156a0 (79 bytes, 32 insns) */
void f_10a156a0(void) {
  FTRACE(0x10a156a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a156a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a156a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a156a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a156a4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a156a8 jne 0x10a156ae */
  if (!C.zf) goto L_10a156ae;
  /* 10a156aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a156ac jmp 0x10a156eb */
  goto L_10a156eb;
L_10a156ae:;
  /* 10a156ae mov eax, dword ptr [0x10a32dc4] */
  EAX = (r32((uint32_t)(0x10a32dc4)));
  /* 10a156b3 push eax */
  push32((uint32_t)(EAX));
  /* 10a156b4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a156b7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a156b8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a156bb push edx */
  push32((uint32_t)(EDX));
  /* 10a156bc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a156bf push eax */
  push32((uint32_t)(EAX));
  /* 10a156c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a156c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a156c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a156c6 mov edx, dword ptr [0x10a33064] */
  EDX = (r32((uint32_t)(0x10a33064)));
  /* 10a156cc push edx */
  push32((uint32_t)(EDX));
  /* 10a156cd call 0x10a157a0 */
  push32(0x10a156d2u); f_10a157a0();
  /* 10a156d2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a156d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a156d8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a156dc jne 0x10a156e5 */
  if (!C.zf) goto L_10a156e5;
  /* 10a156de mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 10a156e3 jmp 0x10a156eb */
  goto L_10a156eb;
L_10a156e5:;
  /* 10a156e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a156e8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10a156eb:;
  /* 10a156eb mov esp, ebp */
  ESP = (EBP);
  /* 10a156ed pop ebp */
  EBP = (pop32());
  /* 10a156ee ret  */
  ESPCHK(0x10a156a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100156f0 @ 0x10a156f0 (174 bytes, 66 insns) */
void f_10a156f0(void) {
  FTRACE(0x10a156f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a156f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a156f1 mov ebp, esp */
  EBP = (ESP);
  /* 10a156f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a156f6 mov eax, dword ptr [0x10a31700] */
  EAX = (r32((uint32_t)(0x10a31700)));
  /* 10a156fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a156fe:;
  /* 10a156fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a15701 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15704 je 0x10a15798 */
  if (C.zf) goto L_10a15798;
  /* 10a1570a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a1570c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a1570e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a15710 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a15712 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a15714 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a15717 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a15719 push eax */
  push32((uint32_t)(EAX));
  /* 10a1571a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a1571c push 1 */
  push32((uint32_t)(0x1u));
  /* 10a1571e call dword ptr [0x10a343b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a343b0))), 0x10a15724u);
  /* 10a15724 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a15727 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1572b jne 0x10a15732 */
  if (!C.zf) goto L_10a15732;
  /* 10a1572d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a15730 jmp 0x10a1579a */
  goto L_10a1579a;
L_10a15732:;
  /* 10a15732 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10a15734 push 0x10a2db5c */
  push32((uint32_t)(0x10a2db5cu));
  /* 10a15739 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a1573b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a1573e push ecx */
  push32((uint32_t)(ECX));
  /* 10a1573f call 0x10a05bf0 */
  push32(0x10a15744u); f_10a05bf0();
  /* 10a15744 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15747 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a1574a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1574e jne 0x10a15755 */
  if (!C.zf) goto L_10a15755;
  /* 10a15750 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a15753 jmp 0x10a1579a */
  goto L_10a1579a;
L_10a15755:;
  /* 10a15755 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a15757 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a15759 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a1575c push edx */
  push32((uint32_t)(EDX));
  /* 10a1575d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a15760 push eax */
  push32((uint32_t)(EAX));
  /* 10a15761 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a15763 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a15766 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a15768 push edx */
  push32((uint32_t)(EDX));
  /* 10a15769 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a1576b push 1 */
  push32((uint32_t)(0x1u));
  /* 10a1576d call dword ptr [0x10a343b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a343b0))), 0x10a15773u);
  /* 10a15773 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a15775 jne 0x10a1577c */
  if (!C.zf) goto L_10a1577c;
  /* 10a15777 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a1577a jmp 0x10a1579a */
  goto L_10a1579a;
L_10a1577c:;
  /* 10a1577c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a1577e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a15781 push eax */
  push32((uint32_t)(EAX));
  /* 10a15782 call 0x10a15bf0 */
  push32(0x10a15787u); f_10a15bf0();
  /* 10a15787 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1578a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a1578d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15790 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a15793 jmp 0x10a156fe */
  goto L_10a156fe;
L_10a15798:;
  /* 10a15798 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a1579a:;
  /* 10a1579a mov esp, ebp */
  ESP = (EBP);
  /* 10a1579c pop ebp */
  EBP = (pop32());
  /* 10a1579d ret  */
  ESPCHK(0x10a156f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100157a0 @ 0x10a157a0 (970 bytes, 340 insns) */
void f_10a157a0(void) {
  FTRACE(0x10a157a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a157a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a157a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a157a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a157a5 push 0x10a2dbb0 */
  push32((uint32_t)(0x10a2dbb0u));
  /* 10a157aa push 0x10a0ecf8 */
  push32((uint32_t)(0x10a0ecf8u));
  /* 10a157af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10a157b5 push eax */
  push32((uint32_t)(EAX));
  /* 10a157b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10a157bd add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a157c0 push ebx */
  push32((uint32_t)(EBX));
  /* 10a157c1 push esi */
  push32((uint32_t)(ESI));
  /* 10a157c2 push edi */
  push32((uint32_t)(EDI));
  /* 10a157c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a157c6 cmp dword ptr [0x10a31a3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31a3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a157cd jne 0x10a15826 */
  if (!C.zf) goto L_10a15826;
  /* 10a157cf push 1 */
  push32((uint32_t)(0x1u));
  /* 10a157d1 push 0x10a2d20c */
  push32((uint32_t)(0x10a2d20cu));
  /* 10a157d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a157d8 push 0x10a2d20c */
  push32((uint32_t)(0x10a2d20cu));
  /* 10a157dd push 0 */
  push32((uint32_t)(0x0u));
  /* 10a157df push 0 */
  push32((uint32_t)(0x0u));
  /* 10a157e1 call dword ptr [0x10a342ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342ac))), 0x10a157e7u);
  /* 10a157e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a157e9 je 0x10a157f7 */
  if (C.zf) goto L_10a157f7;
  /* 10a157eb mov dword ptr [0x10a31a3c], 1 */
  w32((uint32_t)(0x10a31a3c), (0x1u));
  /* 10a157f5 jmp 0x10a15826 */
  goto L_10a15826;
L_10a157f7:;
  /* 10a157f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a157f9 push 0x10a2d208 */
  push32((uint32_t)(0x10a2d208u));
  /* 10a157fe push 1 */
  push32((uint32_t)(0x1u));
  /* 10a15800 push 0x10a2d208 */
  push32((uint32_t)(0x10a2d208u));
  /* 10a15805 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a15807 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a15809 call dword ptr [0x10a342b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342b0))), 0x10a1580fu);
  /* 10a1580f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a15811 je 0x10a1581f */
  if (C.zf) goto L_10a1581f;
  /* 10a15813 mov dword ptr [0x10a31a3c], 2 */
  w32((uint32_t)(0x10a31a3c), (0x2u));
  /* 10a1581d jmp 0x10a15826 */
  goto L_10a15826;
L_10a1581f:;
  /* 10a1581f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a15821 jmp 0x10a15b84 */
  goto L_10a15b84;
L_10a15826:;
  /* 10a15826 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1582a jle 0x10a1583f */
  if ((C.zf||C.sf!=C.of)) goto L_10a1583f;
  /* 10a1582c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a1582f push eax */
  push32((uint32_t)(EAX));
  /* 10a15830 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a15833 push ecx */
  push32((uint32_t)(ECX));
  /* 10a15834 call 0x10a15ba0 */
  push32(0x10a15839u); f_10a15ba0();
  /* 10a15839 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1583c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10a1583f:;
  /* 10a1583f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15843 jle 0x10a15858 */
  if ((C.zf||C.sf!=C.of)) goto L_10a15858;
  /* 10a15845 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10a15848 push edx */
  push32((uint32_t)(EDX));
  /* 10a15849 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a1584c push eax */
  push32((uint32_t)(EAX));
  /* 10a1584d call 0x10a15ba0 */
  push32(0x10a15852u); f_10a15ba0();
  /* 10a15852 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15855 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_10a15858:;
  /* 10a15858 cmp dword ptr [0x10a31a3c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10a31a3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1585f jne 0x10a15884 */
  if (!C.zf) goto L_10a15884;
  /* 10a15861 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10a15864 push ecx */
  push32((uint32_t)(ECX));
  /* 10a15865 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a15868 push edx */
  push32((uint32_t)(EDX));
  /* 10a15869 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a1586c push eax */
  push32((uint32_t)(EAX));
  /* 10a1586d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a15870 push ecx */
  push32((uint32_t)(ECX));
  /* 10a15871 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a15874 push edx */
  push32((uint32_t)(EDX));
  /* 10a15875 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a15878 push eax */
  push32((uint32_t)(EAX));
  /* 10a15879 call dword ptr [0x10a342b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342b0))), 0x10a1587fu);
  /* 10a1587f jmp 0x10a15b84 */
  goto L_10a15b84;
L_10a15884:;
  /* 10a15884 cmp dword ptr [0x10a31a3c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a31a3c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1588b jne 0x10a15b82 */
  if (!C.zf) goto L_10a15b82;
  /* 10a15891 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15895 jne 0x10a158a0 */
  if (!C.zf) goto L_10a158a0;
  /* 10a15897 mov ecx, dword ptr [0x10a318e8] */
  ECX = (r32((uint32_t)(0x10a318e8)));
  /* 10a1589d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_10a158a0:;
  /* 10a158a0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a158a4 je 0x10a158b0 */
  if (C.zf) goto L_10a158b0;
  /* 10a158a6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a158aa jne 0x10a15a2c */
  if (!C.zf) goto L_10a15a2c;
L_10a158b0:;
  /* 10a158b0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a158b3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a158b6 jne 0x10a158c2 */
  if (!C.zf) goto L_10a158c2;
  /* 10a158b8 mov eax, 2 */
  EAX = (0x2u);
  /* 10a158bd jmp 0x10a15b84 */
  goto L_10a15b84;
L_10a158c2:;
  /* 10a158c2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a158c6 jle 0x10a158d2 */
  if ((C.zf||C.sf!=C.of)) goto L_10a158d2;
  /* 10a158c8 mov eax, 1 */
  EAX = (0x1u);
  /* 10a158cd jmp 0x10a15b84 */
  goto L_10a15b84;
L_10a158d2:;
  /* 10a158d2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a158d6 jle 0x10a158e2 */
  if ((C.zf||C.sf!=C.of)) goto L_10a158e2;
  /* 10a158d8 mov eax, 3 */
  EAX = (0x3u);
  /* 10a158dd jmp 0x10a15b84 */
  goto L_10a15b84;
L_10a158e2:;
  /* 10a158e2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 10a158e5 push eax */
  push32((uint32_t)(EAX));
  /* 10a158e6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10a158e9 push ecx */
  push32((uint32_t)(ECX));
  /* 10a158ea call dword ptr [0x10a34308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34308))), 0x10a158f0u);
  /* 10a158f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a158f2 jne 0x10a158fb */
  if (!C.zf) goto L_10a158fb;
  /* 10a158f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a158f6 jmp 0x10a15b84 */
  goto L_10a15b84;
L_10a158fb:;
  /* 10a158fb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a158ff jne 0x10a15907 */
  if (!C.zf) goto L_10a15907;
  /* 10a15901 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15905 je 0x10a15934 */
  if (C.zf) goto L_10a15934;
L_10a15907:;
  /* 10a15907 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1590b jne 0x10a15913 */
  if (!C.zf) goto L_10a15913;
  /* 10a1590d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15911 je 0x10a15934 */
  if (C.zf) goto L_10a15934;
L_10a15913:;
  /* 10a15913 push 0x10a2db70 */
  push32((uint32_t)(0x10a2db70u));
  /* 10a15918 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a1591a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10a1591f push 0x10a2db68 */
  push32((uint32_t)(0x10a2db68u));
  /* 10a15924 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a15926 call 0x10a04cb0 */
  push32(0x10a1592bu); f_10a04cb0();
  /* 10a1592b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1592e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15931 jne 0x10a15934 */
  if (!C.zf) goto L_10a15934;
  /* 10a15933 int3  */
  x86_unimpl("int3 @ 0x10a15933");
L_10a15934:;
  /* 10a15934 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a15936 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a15938 jne 0x10a158fb */
  if (!C.zf) goto L_10a158fb;
  /* 10a1593a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1593e jle 0x10a159b3 */
  if ((C.zf||C.sf!=C.of)) goto L_10a159b3;
  /* 10a15940 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15944 jae 0x10a15950 */
  if (!C.cf) goto L_10a15950;
  /* 10a15946 mov eax, 3 */
  EAX = (0x3u);
  /* 10a1594b jmp 0x10a15b84 */
  goto L_10a15b84;
L_10a15950:;
  /* 10a15950 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 10a15953 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 10a15956 jmp 0x10a15961 */
  goto L_10a15961;
L_10a15958:;
  /* 10a15958 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10a1595b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1595e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_10a15961:;
  /* 10a15961 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10a15964 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a15966 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a15968 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a1596a je 0x10a159a9 */
  if (C.zf) goto L_10a159a9;
  /* 10a1596c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10a1596f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a15971 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10a15974 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a15976 je 0x10a159a9 */
  if (C.zf) goto L_10a159a9;
  /* 10a15978 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a1597b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a1597d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a1597f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10a15982 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a15984 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a15986 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15988 jl 0x10a159a7 */
  if ((C.sf!=C.of)) goto L_10a159a7;
  /* 10a1598a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a1598d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a1598f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a15991 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10a15994 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a15996 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10a15999 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1599b jg 0x10a159a7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a159a7;
  /* 10a1599d mov eax, 2 */
  EAX = (0x2u);
  /* 10a159a2 jmp 0x10a15b84 */
  goto L_10a15b84;
L_10a159a7:;
  /* 10a159a7 jmp 0x10a15958 */
  goto L_10a15958;
L_10a159a9:;
  /* 10a159a9 mov eax, 3 */
  EAX = (0x3u);
  /* 10a159ae jmp 0x10a15b84 */
  goto L_10a15b84;
L_10a159b3:;
  /* 10a159b3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a159b7 jle 0x10a15a2c */
  if ((C.zf||C.sf!=C.of)) goto L_10a15a2c;
  /* 10a159b9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a159bd jae 0x10a159c9 */
  if (!C.cf) goto L_10a159c9;
  /* 10a159bf mov eax, 1 */
  EAX = (0x1u);
  /* 10a159c4 jmp 0x10a15b84 */
  goto L_10a15b84;
L_10a159c9:;
  /* 10a159c9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 10a159cc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 10a159cf jmp 0x10a159da */
  goto L_10a159da;
L_10a159d1:;
  /* 10a159d1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10a159d4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a159d7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_10a159da:;
  /* 10a159da mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10a159dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a159df mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a159e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a159e3 je 0x10a15a22 */
  if (C.zf) goto L_10a15a22;
  /* 10a159e5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10a159e8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a159ea mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10a159ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a159ef je 0x10a15a22 */
  if (C.zf) goto L_10a15a22;
  /* 10a159f1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a159f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a159f6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a159f8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10a159fb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a159fd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a159ff cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15a01 jl 0x10a15a20 */
  if ((C.sf!=C.of)) goto L_10a15a20;
  /* 10a15a03 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a15a06 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a15a08 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a15a0a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10a15a0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a15a0f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10a15a12 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15a14 jg 0x10a15a20 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a15a20;
  /* 10a15a16 mov eax, 2 */
  EAX = (0x2u);
  /* 10a15a1b jmp 0x10a15b84 */
  goto L_10a15b84;
L_10a15a20:;
  /* 10a15a20 jmp 0x10a159d1 */
  goto L_10a159d1;
L_10a15a22:;
  /* 10a15a22 mov eax, 1 */
  EAX = (0x1u);
  /* 10a15a27 jmp 0x10a15b84 */
  goto L_10a15b84;
L_10a15a2c:;
  /* 10a15a2c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a15a2e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a15a30 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a15a33 push ecx */
  push32((uint32_t)(ECX));
  /* 10a15a34 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a15a37 push edx */
  push32((uint32_t)(EDX));
  /* 10a15a38 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a15a3a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10a15a3d push eax */
  push32((uint32_t)(EAX));
  /* 10a15a3e call dword ptr [0x10a342fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342fc))), 0x10a15a44u);
  /* 10a15a44 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10a15a47 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15a4b jne 0x10a15a54 */
  if (!C.zf) goto L_10a15a54;
  /* 10a15a4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a15a4f jmp 0x10a15b84 */
  goto L_10a15b84;
L_10a15a54:;
  /* 10a15a54 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a15a5b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a15a5e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10a15a60 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15a63 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10a15a65 call 0x10a08d90 */
  push32(0x10a15a6au); f_10a08d90();
  /* 10a15a6a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 10a15a6d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a15a70 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10a15a73 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10a15a76 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10a15a7d jmp 0x10a15a96 */
  goto L_10a15a96;
  /* 10a15a7f mov eax, 1 */
  EAX = (0x1u);
  /* 10a15a84 ret  */
  ESPCHK(0x10a157a0u, _esp0);
  ESP += 4; return;
  /* 10a15a85 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10a15a88 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10a15a8f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10a15a96:;
  /* 10a15a96 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15a9a jne 0x10a15aa3 */
  if (!C.zf) goto L_10a15aa3;
  /* 10a15a9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a15a9e jmp 0x10a15b84 */
  goto L_10a15b84;
L_10a15aa3:;
  /* 10a15aa3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a15aa6 push edx */
  push32((uint32_t)(EDX));
  /* 10a15aa7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a15aaa push eax */
  push32((uint32_t)(EAX));
  /* 10a15aab mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a15aae push ecx */
  push32((uint32_t)(ECX));
  /* 10a15aaf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a15ab2 push edx */
  push32((uint32_t)(EDX));
  /* 10a15ab3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a15ab5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10a15ab8 push eax */
  push32((uint32_t)(EAX));
  /* 10a15ab9 call dword ptr [0x10a342fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342fc))), 0x10a15abfu);
  /* 10a15abf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a15ac1 jne 0x10a15aca */
  if (!C.zf) goto L_10a15aca;
  /* 10a15ac3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a15ac5 jmp 0x10a15b84 */
  goto L_10a15b84;
L_10a15aca:;
  /* 10a15aca push 0 */
  push32((uint32_t)(0x0u));
  /* 10a15acc push 0 */
  push32((uint32_t)(0x0u));
  /* 10a15ace mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10a15ad1 push ecx */
  push32((uint32_t)(ECX));
  /* 10a15ad2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a15ad5 push edx */
  push32((uint32_t)(EDX));
  /* 10a15ad6 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a15ad8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10a15adb push eax */
  push32((uint32_t)(EAX));
  /* 10a15adc call dword ptr [0x10a342fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342fc))), 0x10a15ae2u);
  /* 10a15ae2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10a15ae5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15ae9 jne 0x10a15af2 */
  if (!C.zf) goto L_10a15af2;
  /* 10a15aeb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a15aed jmp 0x10a15b84 */
  goto L_10a15b84;
L_10a15af2:;
  /* 10a15af2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a15af9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a15afc shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10a15afe add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15b01 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10a15b03 call 0x10a08d90 */
  push32(0x10a15b08u); f_10a08d90();
  /* 10a15b08 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 10a15b0b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a15b0e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 10a15b11 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10a15b14 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10a15b1b jmp 0x10a15b34 */
  goto L_10a15b34;
  /* 10a15b1d mov eax, 1 */
  EAX = (0x1u);
  /* 10a15b22 ret  */
  ESPCHK(0x10a157a0u, _esp0);
  ESP += 4; return;
  /* 10a15b23 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10a15b26 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10a15b2d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10a15b34:;
  /* 10a15b34 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15b38 jne 0x10a15b3e */
  if (!C.zf) goto L_10a15b3e;
  /* 10a15b3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a15b3c jmp 0x10a15b84 */
  goto L_10a15b84;
L_10a15b3e:;
  /* 10a15b3e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a15b41 push edx */
  push32((uint32_t)(EDX));
  /* 10a15b42 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a15b45 push eax */
  push32((uint32_t)(EAX));
  /* 10a15b46 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10a15b49 push ecx */
  push32((uint32_t)(ECX));
  /* 10a15b4a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a15b4d push edx */
  push32((uint32_t)(EDX));
  /* 10a15b4e push 1 */
  push32((uint32_t)(0x1u));
  /* 10a15b50 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10a15b53 push eax */
  push32((uint32_t)(EAX));
  /* 10a15b54 call dword ptr [0x10a342fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342fc))), 0x10a15b5au);
  /* 10a15b5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a15b5c jne 0x10a15b62 */
  if (!C.zf) goto L_10a15b62;
  /* 10a15b5e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a15b60 jmp 0x10a15b84 */
  goto L_10a15b84;
L_10a15b62:;
  /* 10a15b62 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a15b65 push ecx */
  push32((uint32_t)(ECX));
  /* 10a15b66 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a15b69 push edx */
  push32((uint32_t)(EDX));
  /* 10a15b6a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a15b6d push eax */
  push32((uint32_t)(EAX));
  /* 10a15b6e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a15b71 push ecx */
  push32((uint32_t)(ECX));
  /* 10a15b72 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a15b75 push edx */
  push32((uint32_t)(EDX));
  /* 10a15b76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a15b79 push eax */
  push32((uint32_t)(EAX));
  /* 10a15b7a call dword ptr [0x10a342ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342ac))), 0x10a15b80u);
  /* 10a15b80 jmp 0x10a15b84 */
  goto L_10a15b84;
L_10a15b82:;
  /* 10a15b82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a15b84:;
  /* 10a15b84 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 10a15b87 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a15b8a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10a15b91 pop edi */
  EDI = (pop32());
  /* 10a15b92 pop esi */
  ESI = (pop32());
  /* 10a15b93 pop ebx */
  EBX = (pop32());
  /* 10a15b94 mov esp, ebp */
  ESP = (EBP);
  /* 10a15b96 pop ebp */
  EBP = (pop32());
  /* 10a15b97 ret  */
  ESPCHK(0x10a157a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015ba0 @ 0x10a15ba0 (80 bytes, 32 insns) */
void f_10a15ba0(void) {
  FTRACE(0x10a15ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a15ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a15ba1 mov ebp, esp */
  EBP = (ESP);
  /* 10a15ba3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a15ba6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a15ba9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a15bac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a15baf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a15bb2:;
  /* 10a15bb2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a15bb5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a15bb8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a15bbb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a15bbe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a15bc0 je 0x10a15bd7 */
  if (C.zf) goto L_10a15bd7;
  /* 10a15bc2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a15bc5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a15bc8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a15bca je 0x10a15bd7 */
  if (C.zf) goto L_10a15bd7;
  /* 10a15bcc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a15bcf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15bd2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a15bd5 jmp 0x10a15bb2 */
  goto L_10a15bb2;
L_10a15bd7:;
  /* 10a15bd7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a15bda movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a15bdd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a15bdf jne 0x10a15be9 */
  if (!C.zf) goto L_10a15be9;
  /* 10a15be1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a15be4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a15be7 jmp 0x10a15bec */
  goto L_10a15bec;
L_10a15be9:;
  /* 10a15be9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10a15bec:;
  /* 10a15bec mov esp, ebp */
  ESP = (EBP);
  /* 10a15bee pop ebp */
  EBP = (pop32());
  /* 10a15bef ret  */
  ESPCHK(0x10a15ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015bf0 @ 0x10a15bf0 (736 bytes, 224 insns) */
void f_10a15bf0(void) {
  FTRACE(0x10a15bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a15bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a15bf1 mov ebp, esp */
  EBP = (ESP);
  /* 10a15bf3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a15bf6 push esi */
  push32((uint32_t)(ESI));
  /* 10a15bf7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15bfb je 0x10a15c1c */
  if (C.zf) goto L_10a15c1c;
  /* 10a15bfd push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10a15bff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a15c02 push eax */
  push32((uint32_t)(EAX));
  /* 10a15c03 call 0x10a16040 */
  push32(0x10a15c08u); f_10a16040();
  /* 10a15c08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15c0b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a15c0e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15c12 je 0x10a15c1c */
  if (C.zf) goto L_10a15c1c;
  /* 10a15c14 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a15c17 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15c1a jne 0x10a15c24 */
  if (!C.zf) goto L_10a15c24;
L_10a15c1c:;
  /* 10a15c1c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a15c1f jmp 0x10a15ecb */
  goto L_10a15ecb;
L_10a15c24:;
  /* 10a15c24 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a15c27 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10a15c2b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a15c2d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a15c2f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10a15c30 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a15c33 mov ecx, dword ptr [0x10a316f8] */
  ECX = (r32((uint32_t)(0x10a316f8)));
  /* 10a15c39 cmp ecx, dword ptr [0x10a316fc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a316fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15c3f jne 0x10a15c55 */
  if (!C.zf) goto L_10a15c55;
  /* 10a15c41 mov edx, dword ptr [0x10a316f8] */
  EDX = (r32((uint32_t)(0x10a316f8)));
  /* 10a15c47 push edx */
  push32((uint32_t)(EDX));
  /* 10a15c48 call 0x10a15f50 */
  push32(0x10a15c4du); f_10a15f50();
  /* 10a15c4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15c50 mov dword ptr [0x10a316f8], eax */
  w32((uint32_t)(0x10a316f8), (EAX));
L_10a15c55:;
  /* 10a15c55 cmp dword ptr [0x10a316f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a316f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15c5c jne 0x10a15d15 */
  if (!C.zf) goto L_10a15d15;
  /* 10a15c62 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15c66 je 0x10a15c87 */
  if (C.zf) goto L_10a15c87;
  /* 10a15c68 cmp dword ptr [0x10a31700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15c6f je 0x10a15c87 */
  if (C.zf) goto L_10a15c87;
  /* 10a15c71 call 0x10a156f0 */
  push32(0x10a15c76u); f_10a156f0();
  /* 10a15c76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a15c78 je 0x10a15c82 */
  if (C.zf) goto L_10a15c82;
  /* 10a15c7a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a15c7d jmp 0x10a15ecb */
  goto L_10a15ecb;
L_10a15c82:;
  /* 10a15c82 jmp 0x10a15d15 */
  goto L_10a15d15;
L_10a15c87:;
  /* 10a15c87 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15c8b je 0x10a15c94 */
  if (C.zf) goto L_10a15c94;
  /* 10a15c8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a15c8f jmp 0x10a15ecb */
  goto L_10a15ecb;
L_10a15c94:;
  /* 10a15c94 cmp dword ptr [0x10a316f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a316f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15c9b jne 0x10a15cd4 */
  if (!C.zf) goto L_10a15cd4;
  /* 10a15c9d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10a15ca2 push 0x10a2dbc8 */
  push32((uint32_t)(0x10a2dbc8u));
  /* 10a15ca7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a15ca9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a15cab call 0x10a05bf0 */
  push32(0x10a15cb0u); f_10a05bf0();
  /* 10a15cb0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15cb3 mov dword ptr [0x10a316f8], eax */
  w32((uint32_t)(0x10a316f8), (EAX));
  /* 10a15cb8 cmp dword ptr [0x10a316f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a316f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15cbf jne 0x10a15cc9 */
  if (!C.zf) goto L_10a15cc9;
  /* 10a15cc1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a15cc4 jmp 0x10a15ecb */
  goto L_10a15ecb;
L_10a15cc9:;
  /* 10a15cc9 mov eax, dword ptr [0x10a316f8] */
  EAX = (r32((uint32_t)(0x10a316f8)));
  /* 10a15cce mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10a15cd4:;
  /* 10a15cd4 cmp dword ptr [0x10a31700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15cdb jne 0x10a15d15 */
  if (!C.zf) goto L_10a15d15;
  /* 10a15cdd push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 10a15ce2 push 0x10a2dbc8 */
  push32((uint32_t)(0x10a2dbc8u));
  /* 10a15ce7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a15ce9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a15ceb call 0x10a05bf0 */
  push32(0x10a15cf0u); f_10a05bf0();
  /* 10a15cf0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15cf3 mov dword ptr [0x10a31700], eax */
  w32((uint32_t)(0x10a31700), (EAX));
  /* 10a15cf8 cmp dword ptr [0x10a31700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15cff jne 0x10a15d09 */
  if (!C.zf) goto L_10a15d09;
  /* 10a15d01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a15d04 jmp 0x10a15ecb */
  goto L_10a15ecb;
L_10a15d09:;
  /* 10a15d09 mov ecx, dword ptr [0x10a31700] */
  ECX = (r32((uint32_t)(0x10a31700)));
  /* 10a15d0f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_10a15d15:;
  /* 10a15d15 mov edx, dword ptr [0x10a316f8] */
  EDX = (r32((uint32_t)(0x10a316f8)));
  /* 10a15d1b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10a15d1e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a15d21 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a15d24 push eax */
  push32((uint32_t)(EAX));
  /* 10a15d25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a15d28 push ecx */
  push32((uint32_t)(ECX));
  /* 10a15d29 call 0x10a15ed0 */
  push32(0x10a15d2eu); f_10a15ed0();
  /* 10a15d2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15d31 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a15d34 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15d38 jl 0x10a15dd1 */
  if ((C.sf!=C.of)) goto L_10a15dd1;
  /* 10a15d3e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a15d41 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15d44 je 0x10a15dd1 */
  if (C.zf) goto L_10a15dd1;
  /* 10a15d4a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15d4e je 0x10a15dc3 */
  if (C.zf) goto L_10a15dc3;
  /* 10a15d50 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a15d52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a15d55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a15d58 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10a15d5b push edx */
  push32((uint32_t)(EDX));
  /* 10a15d5c call 0x10a06680 */
  push32(0x10a15d61u); f_10a06680();
  /* 10a15d61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15d64 jmp 0x10a15d6f */
  goto L_10a15d6f;
L_10a15d66:;
  /* 10a15d66 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a15d69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15d6c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a15d6f:;
  /* 10a15d6f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a15d72 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a15d75 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15d79 je 0x10a15d90 */
  if (C.zf) goto L_10a15d90;
  /* 10a15d7b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a15d7e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a15d81 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a15d84 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10a15d87 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 10a15d8b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10a15d8e jmp 0x10a15d66 */
  goto L_10a15d66;
L_10a15d90:;
  /* 10a15d90 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 10a15d95 push 0x10a2dbc8 */
  push32((uint32_t)(0x10a2dbc8u));
  /* 10a15d9a push 2 */
  push32((uint32_t)(0x2u));
  /* 10a15d9c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a15d9f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10a15da2 push eax */
  push32((uint32_t)(EAX));
  /* 10a15da3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a15da6 push ecx */
  push32((uint32_t)(ECX));
  /* 10a15da7 call 0x10a06080 */
  push32(0x10a15dacu); f_10a06080();
  /* 10a15dac add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15daf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a15db2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15db6 je 0x10a15dc1 */
  if (C.zf) goto L_10a15dc1;
  /* 10a15db8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a15dbb mov dword ptr [0x10a316f8], edx */
  w32((uint32_t)(0x10a316f8), (EDX));
L_10a15dc1:;
  /* 10a15dc1 jmp 0x10a15dcf */
  goto L_10a15dcf;
L_10a15dc3:;
  /* 10a15dc3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a15dc6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a15dc9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a15dcc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_10a15dcf:;
  /* 10a15dcf jmp 0x10a15e44 */
  goto L_10a15e44;
L_10a15dd1:;
  /* 10a15dd1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15dd5 jne 0x10a15e3d */
  if (!C.zf) goto L_10a15e3d;
  /* 10a15dd7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15ddb jge 0x10a15de5 */
  if ((C.sf==C.of)) goto L_10a15de5;
  /* 10a15ddd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a15de0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a15de2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a15de5:;
  /* 10a15de5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 10a15dea push 0x10a2dbc8 */
  push32((uint32_t)(0x10a2dbc8u));
  /* 10a15def push 2 */
  push32((uint32_t)(0x2u));
  /* 10a15df1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a15df4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 10a15dfb push edx */
  push32((uint32_t)(EDX));
  /* 10a15dfc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a15dff push eax */
  push32((uint32_t)(EAX));
  /* 10a15e00 call 0x10a06080 */
  push32(0x10a15e05u); f_10a06080();
  /* 10a15e05 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15e08 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a15e0b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15e0f jne 0x10a15e19 */
  if (!C.zf) goto L_10a15e19;
  /* 10a15e11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a15e14 jmp 0x10a15ecb */
  goto L_10a15ecb;
L_10a15e19:;
  /* 10a15e19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a15e1c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a15e1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a15e22 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10a15e25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a15e28 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a15e2b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 10a15e33 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a15e36 mov dword ptr [0x10a316f8], eax */
  w32((uint32_t)(0x10a316f8), (EAX));
  /* 10a15e3b jmp 0x10a15e44 */
  goto L_10a15e44;
L_10a15e3d:;
  /* 10a15e3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a15e3f jmp 0x10a15ecb */
  goto L_10a15ecb;
L_10a15e44:;
  /* 10a15e44 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15e48 je 0x10a15ec9 */
  if (C.zf) goto L_10a15ec9;
  /* 10a15e4a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 10a15e4f push 0x10a2dbc8 */
  push32((uint32_t)(0x10a2dbc8u));
  /* 10a15e54 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a15e56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a15e59 push ecx */
  push32((uint32_t)(ECX));
  /* 10a15e5a call 0x10a08a20 */
  push32(0x10a15e5fu); f_10a08a20();
  /* 10a15e5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15e62 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15e65 push eax */
  push32((uint32_t)(EAX));
  /* 10a15e66 call 0x10a05bf0 */
  push32(0x10a15e6bu); f_10a05bf0();
  /* 10a15e6b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15e6e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a15e71 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15e75 je 0x10a15ec9 */
  if (C.zf) goto L_10a15ec9;
  /* 10a15e77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a15e7a push edx */
  push32((uint32_t)(EDX));
  /* 10a15e7b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a15e7e push eax */
  push32((uint32_t)(EAX));
  /* 10a15e7f call 0x10a08ba0 */
  push32(0x10a15e84u); f_10a08ba0();
  /* 10a15e84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15e87 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a15e8a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a15e8d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a15e90 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15e92 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a15e95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a15e98 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10a15e9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a15e9e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15ea1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a15ea4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a15ea7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a15ea9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a15eab not edx */
  EDX = (~(EDX));
  /* 10a15ead and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10a15eb0 push edx */
  push32((uint32_t)(EDX));
  /* 10a15eb1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a15eb4 push eax */
  push32((uint32_t)(EAX));
  /* 10a15eb5 call dword ptr [0x10a342a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342a8))), 0x10a15ebbu);
  /* 10a15ebb push 2 */
  push32((uint32_t)(0x2u));
  /* 10a15ebd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a15ec0 push ecx */
  push32((uint32_t)(ECX));
  /* 10a15ec1 call 0x10a06680 */
  push32(0x10a15ec6u); f_10a06680();
  /* 10a15ec6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a15ec9:;
  /* 10a15ec9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a15ecb:;
  /* 10a15ecb pop esi */
  ESI = (pop32());
  /* 10a15ecc mov esp, ebp */
  ESP = (EBP);
  /* 10a15ece pop ebp */
  EBP = (pop32());
  /* 10a15ecf ret  */
  ESPCHK(0x10a15bf0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x10a15ed0 (124 bytes, 47 insns) */
void f_10a15ed0(void) {
  FTRACE(0x10a15ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a15ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a15ed1 mov ebp, esp */
  EBP = (ESP);
  /* 10a15ed3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a15ed4 mov eax, dword ptr [0x10a316f8] */
  EAX = (r32((uint32_t)(0x10a316f8)));
  /* 10a15ed9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a15edc jmp 0x10a15ee7 */
  goto L_10a15ee7;
L_10a15ede:;
  /* 10a15ede mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a15ee1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15ee4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a15ee7:;
  /* 10a15ee7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a15eea cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15eed je 0x10a15f3a */
  if (C.zf) goto L_10a15f3a;
  /* 10a15eef mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a15ef2 push eax */
  push32((uint32_t)(EAX));
  /* 10a15ef3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a15ef6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a15ef8 push edx */
  push32((uint32_t)(EDX));
  /* 10a15ef9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a15efc push eax */
  push32((uint32_t)(EAX));
  /* 10a15efd call 0x10a156a0 */
  push32(0x10a15f02u); f_10a156a0();
  /* 10a15f02 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15f05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a15f07 jne 0x10a15f38 */
  if (!C.zf) goto L_10a15f38;
  /* 10a15f09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a15f0c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a15f0e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a15f11 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 10a15f15 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15f18 je 0x10a15f2a */
  if (C.zf) goto L_10a15f2a;
  /* 10a15f1a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a15f1d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a15f1f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a15f22 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 10a15f26 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a15f28 jne 0x10a15f38 */
  if (!C.zf) goto L_10a15f38;
L_10a15f2a:;
  /* 10a15f2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a15f2d sub eax, dword ptr [0x10a316f8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a316f8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a15f33 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10a15f36 jmp 0x10a15f48 */
  goto L_10a15f48;
L_10a15f38:;
  /* 10a15f38 jmp 0x10a15ede */
  goto L_10a15ede;
L_10a15f3a:;
  /* 10a15f3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a15f3d sub eax, dword ptr [0x10a316f8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a316f8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a15f43 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10a15f46 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10a15f48:;
  /* 10a15f48 mov esp, ebp */
  ESP = (EBP);
  /* 10a15f4a pop ebp */
  EBP = (pop32());
  /* 10a15f4b ret  */
  ESPCHK(0x10a15ed0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x10a15f50 (238 bytes, 80 insns) */
void f_10a15f50(void) {
  FTRACE(0x10a15f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a15f50 push ebp */
  push32((uint32_t)(EBP));
  /* 10a15f51 mov ebp, esp */
  EBP = (ESP);
  /* 10a15f53 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a15f56 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10a15f5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a15f60 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a15f63 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15f67 jne 0x10a15f70 */
  if (!C.zf) goto L_10a15f70;
  /* 10a15f69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a15f6b jmp 0x10a1603a */
  goto L_10a1603a;
L_10a15f70:;
  /* 10a15f70 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a15f73 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a15f75 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a15f78 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15f7b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a15f7e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a15f80 je 0x10a15f8d */
  if (C.zf) goto L_10a15f8d;
  /* 10a15f82 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a15f85 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15f88 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10a15f8b jmp 0x10a15f70 */
  goto L_10a15f70;
L_10a15f8d:;
  /* 10a15f8d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 10a15f92 push 0x10a2dbc8 */
  push32((uint32_t)(0x10a2dbc8u));
  /* 10a15f97 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a15f99 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a15f9c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 10a15fa3 push eax */
  push32((uint32_t)(EAX));
  /* 10a15fa4 call 0x10a05bf0 */
  push32(0x10a15fa9u); f_10a05bf0();
  /* 10a15fa9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15fac mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a15faf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a15fb2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a15fb5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15fb9 jne 0x10a15fc5 */
  if (!C.zf) goto L_10a15fc5;
  /* 10a15fbb push 9 */
  push32((uint32_t)(0x9u));
  /* 10a15fbd call 0x10a04b60 */
  push32(0x10a15fc2u); f_10a04b60();
  /* 10a15fc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a15fc5:;
  /* 10a15fc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a15fc8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10a15fcb:;
  /* 10a15fcb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a15fce cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a15fd1 je 0x10a1602e */
  if (C.zf) goto L_10a1602e;
  /* 10a15fd3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 10a15fd8 push 0x10a2dbc8 */
  push32((uint32_t)(0x10a2dbc8u));
  /* 10a15fdd push 2 */
  push32((uint32_t)(0x2u));
  /* 10a15fdf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a15fe2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a15fe4 push edx */
  push32((uint32_t)(EDX));
  /* 10a15fe5 call 0x10a08a20 */
  push32(0x10a15feau); f_10a08a20();
  /* 10a15fea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15fed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15ff0 push eax */
  push32((uint32_t)(EAX));
  /* 10a15ff1 call 0x10a05bf0 */
  push32(0x10a15ff6u); f_10a05bf0();
  /* 10a15ff6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a15ff9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a15ffc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a15ffe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a16001 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a16004 je 0x10a1601a */
  if (C.zf) goto L_10a1601a;
  /* 10a16006 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a16009 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a1600b push ecx */
  push32((uint32_t)(ECX));
  /* 10a1600c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a1600f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a16011 push eax */
  push32((uint32_t)(EAX));
  /* 10a16012 call 0x10a08ba0 */
  push32(0x10a16017u); f_10a08ba0();
  /* 10a16017 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a1601a:;
  /* 10a1601a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a1601d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a16020 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a16023 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a16026 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a16029 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a1602c jmp 0x10a15fcb */
  goto L_10a15fcb;
L_10a1602e:;
  /* 10a1602e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a16031 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a16037 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a1603a:;
  /* 10a1603a mov esp, ebp */
  ESP = (EBP);
  /* 10a1603c pop ebp */
  EBP = (pop32());
  /* 10a1603d ret  */
  ESPCHK(0x10a15f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10016040 @ 0x10a16040 (237 bytes, 81 insns) */
void f_10a16040(void) {
  FTRACE(0x10a16040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a16040 push ebp */
  push32((uint32_t)(EBP));
  /* 10a16041 mov ebp, esp */
  EBP = (ESP);
  /* 10a16043 push ecx */
  push32((uint32_t)(ECX));
  /* 10a16044 cmp dword ptr [0x10a32e4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a32e4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a1604b jne 0x10a16062 */
  if (!C.zf) goto L_10a16062;
  /* 10a1604d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a16050 push eax */
  push32((uint32_t)(EAX));
  /* 10a16051 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a16054 push ecx */
  push32((uint32_t)(ECX));
  /* 10a16055 call 0x10a16140 */
  push32(0x10a1605au); f_10a16140();
  /* 10a1605a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1605d jmp 0x10a16129 */
  goto L_10a16129;
L_10a16062:;
  /* 10a16062 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a16064 call 0x10a095f0 */
  push32(0x10a16069u); f_10a095f0();
  /* 10a16069 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a1606c jmp 0x10a16077 */
  goto L_10a16077;
L_10a1606e:;
  /* 10a1606e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a16071 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a16074 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10a16077:;
  /* 10a16077 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a1607a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 10a1607e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10a16082 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a16085 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a1608b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a1608d je 0x10a1610b */
  if (C.zf) goto L_10a1610b;
  /* 10a1608f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a16092 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a16097 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a16099 mov cl, byte ptr [eax + 0x10a32f61] */
  CL = (r8((uint32_t)(EAX + 0x10a32f61)));
  /* 10a1609f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10a160a2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a160a4 je 0x10a160f6 */
  if (C.zf) goto L_10a160f6;
  /* 10a160a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a160a9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a160ac mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10a160af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a160b2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a160b4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a160b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a160b8 jne 0x10a160c8 */
  if (!C.zf) goto L_10a160c8;
  /* 10a160ba push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a160bc call 0x10a09690 */
  push32(0x10a160c1u); f_10a09690();
  /* 10a160c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a160c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a160c6 jmp 0x10a16129 */
  goto L_10a16129;
L_10a160c8:;
  /* 10a160c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a160cb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a160d1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10a160d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a160d7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a160d9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a160db or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a160dd cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a160e0 jne 0x10a160f4 */
  if (!C.zf) goto L_10a160f4;
  /* 10a160e2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a160e4 call 0x10a09690 */
  push32(0x10a160e9u); f_10a09690();
  /* 10a160e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a160ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a160ef sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a160f2 jmp 0x10a16129 */
  goto L_10a16129;
L_10a160f4:;
  /* 10a160f4 jmp 0x10a16106 */
  goto L_10a16106;
L_10a160f6:;
  /* 10a160f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a160f9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a160ff cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a16102 jne 0x10a16106 */
  if (!C.zf) goto L_10a16106;
  /* 10a16104 jmp 0x10a1610b */
  goto L_10a1610b;
L_10a16106:;
  /* 10a16106 jmp 0x10a1606e */
  goto L_10a1606e;
L_10a1610b:;
  /* 10a1610b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a1610d call 0x10a09690 */
  push32(0x10a16112u); f_10a09690();
  /* 10a16112 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a16115 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a16118 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a1611d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a16120 jne 0x10a16127 */
  if (!C.zf) goto L_10a16127;
  /* 10a16122 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a16125 jmp 0x10a16129 */
  goto L_10a16129;
L_10a16127:;
  /* 10a16127 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a16129:;
  /* 10a16129 mov esp, ebp */
  ESP = (EBP);
  /* 10a1612b pop ebp */
  EBP = (pop32());
  /* 10a1612c ret  */
  ESPCHK(0x10a16040u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x10a16140 (193 bytes, 87 insns) */
void f_10a16140(void) {
  FTRACE(0x10a16140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a16140 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a16142 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10a16146 push ebx */
  push32((uint32_t)(EBX));
  /* 10a16147 mov ebx, eax */
  EBX = (EAX);
  /* 10a16149 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10a1614c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a16150 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10a16156 je 0x10a1616b */
  if (C.zf) goto L_10a1616b;
L_10a16158:;
  /* 10a16158 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 10a1615a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10a1615b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a1615d je 0x10a16130 */
  if (C.zf) { jmp_ind(0x10a16130u); return; }
  /* 10a1615f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10a16161 je 0x10a161b4 */
  if (C.zf) goto L_10a161b4;
  /* 10a16163 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10a16169 jne 0x10a16158 */
  if (!C.zf) goto L_10a16158;
L_10a1616b:;
  /* 10a1616b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 10a1616d push edi */
  push32((uint32_t)(EDI));
  /* 10a1616e mov eax, ebx */
  EAX = (EBX);
  /* 10a16170 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 10a16173 push esi */
  push32((uint32_t)(ESI));
  /* 10a16174 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_10a16176:;
  /* 10a16176 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10a16178 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 10a1617d mov eax, ecx */
  EAX = (ECX);
  /* 10a1617f mov esi, edi */
  ESI = (EDI);
  /* 10a16181 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 10a16183 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a16185 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a16187 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a1618a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a1618d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10a1618f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10a16191 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a16194 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 10a1619a jne 0x10a161b8 */
  if (!C.zf) goto L_10a161b8;
  /* 10a1619c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10a161a1 je 0x10a16176 */
  if (C.zf) goto L_10a16176;
  /* 10a161a3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10a161a8 jne 0x10a161b2 */
  if (!C.zf) goto L_10a161b2;
  /* 10a161aa and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 10a161b0 jne 0x10a16176 */
  if (!C.zf) goto L_10a16176;
L_10a161b2:;
  /* 10a161b2 pop esi */
  ESI = (pop32());
  /* 10a161b3 pop edi */
  EDI = (pop32());
L_10a161b4:;
  /* 10a161b4 pop ebx */
  EBX = (pop32());
  /* 10a161b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a161b7 ret  */
  ESPCHK(0x10a16140u, _esp0);
  ESP += 4; return;
L_10a161b8:;
  /* 10a161b8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10a161bb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a161bd je 0x10a161f5 */
  if (C.zf) goto L_10a161f5;
  /* 10a161bf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10a161c1 je 0x10a161b2 */
  if (C.zf) goto L_10a161b2;
  /* 10a161c3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a161c5 je 0x10a161ee */
  if (C.zf) goto L_10a161ee;
  /* 10a161c7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10a161c9 je 0x10a161b2 */
  if (C.zf) goto L_10a161b2;
  /* 10a161cb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10a161ce cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a161d0 je 0x10a161e7 */
  if (C.zf) goto L_10a161e7;
  /* 10a161d2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10a161d4 je 0x10a161b2 */
  if (C.zf) goto L_10a161b2;
  /* 10a161d6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a161d8 je 0x10a161e0 */
  if (C.zf) goto L_10a161e0;
  /* 10a161da test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10a161dc je 0x10a161b2 */
  if (C.zf) goto L_10a161b2;
  /* 10a161de jmp 0x10a16176 */
  goto L_10a16176;
L_10a161e0:;
  /* 10a161e0 pop esi */
  ESI = (pop32());
  /* 10a161e1 pop edi */
  EDI = (pop32());
  /* 10a161e2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 10a161e5 pop ebx */
  EBX = (pop32());
  /* 10a161e6 ret  */
  ESPCHK(0x10a16140u, _esp0);
  ESP += 4; return;
L_10a161e7:;
  /* 10a161e7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 10a161ea pop esi */
  ESI = (pop32());
  /* 10a161eb pop edi */
  EDI = (pop32());
  /* 10a161ec pop ebx */
  EBX = (pop32());
  /* 10a161ed ret  */
  ESPCHK(0x10a16140u, _esp0);
  ESP += 4; return;
L_10a161ee:;
  /* 10a161ee lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 10a161f1 pop esi */
  ESI = (pop32());
  /* 10a161f2 pop edi */
  EDI = (pop32());
  /* 10a161f3 pop ebx */
  EBX = (pop32());
  /* 10a161f4 ret  */
  ESPCHK(0x10a16140u, _esp0);
  ESP += 4; return;
L_10a161f5:;
  /* 10a161f5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 10a161f8 pop esi */
  ESI = (pop32());
  /* 10a161f9 pop edi */
  EDI = (pop32());
  /* 10a161fa pop ebx */
  EBX = (pop32());
  /* 10a161fb ret  */
  ESPCHK(0x10a16140u, _esp0);
  ESP += 4; return;
  /* 10a161fc jmp dword ptr [0x10a34338] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10a34338)))); return;
}

/* RtlUnwind @ 0x10a1634c (6 bytes, 1 insns) */
void f_10a1634c(void) {
  FTRACE(0x10a1634cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a1634c jmp dword ptr [0x10a342e4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10a342e4)))); return;
}

