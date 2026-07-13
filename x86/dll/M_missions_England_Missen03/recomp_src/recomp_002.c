#include "recomp.h"

/* FUN_10012990 @ 0x10432990 (878 bytes, 273 insns) */
void f_10432990(void) {
  FTRACE(0x10432990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10432990 push ebp */
  push32((uint32_t)(EBP));
  /* 10432991 mov ebp, esp */
  EBP = (ESP);
  /* 10432993 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10432996 push esi */
  push32((uint32_t)(ESI));
  /* 10432997 mov eax, dword ptr [0x10450c98] */
  EAX = (r32((uint32_t)(0x10450c98)));
  /* 1043299c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1043299f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104329a6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 104329ad jmp 0x104329b8 */
  goto L_104329b8;
L_104329af:;
  /* 104329af mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104329b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104329b5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_104329b8:;
  /* 104329b8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104329bc jae 0x104329f1 */
  if (!C.cf) goto L_104329f1;
  /* 104329be mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104329c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104329c4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 104329c7 push ecx */
  push32((uint32_t)(ECX));
  /* 104329c8 call 0x10428810 */
  push32(0x104329cdu); f_10428810();
  /* 104329cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104329d0 mov esi, eax */
  ESI = (EAX);
  /* 104329d2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104329d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104329d8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 104329dc push ecx */
  push32((uint32_t)(ECX));
  /* 104329dd call 0x10428810 */
  push32(0x104329e2u); f_10428810();
  /* 104329e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104329e5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104329e8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 104329ec mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 104329ef jmp 0x104329af */
  goto L_104329af;
L_104329f1:;
  /* 104329f1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 104329f8 jmp 0x10432a03 */
  goto L_10432a03;
L_104329fa:;
  /* 104329fa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104329fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10432a00 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10432a03:;
  /* 10432a03 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10432a07 jae 0x10432a3d */
  if (!C.cf) goto L_10432a3d;
  /* 10432a09 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10432a0c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10432a0f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10432a13 push eax */
  push32((uint32_t)(EAX));
  /* 10432a14 call 0x10428810 */
  push32(0x10432a19u); f_10428810();
  /* 10432a19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432a1c mov esi, eax */
  ESI = (EAX);
  /* 10432a1e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10432a21 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10432a24 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10432a28 push eax */
  push32((uint32_t)(EAX));
  /* 10432a29 call 0x10428810 */
  push32(0x10432a2eu); f_10428810();
  /* 10432a2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432a31 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10432a34 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10432a38 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10432a3b jmp 0x104329fa */
  goto L_104329fa;
L_10432a3d:;
  /* 10432a3d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10432a40 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10432a46 push eax */
  push32((uint32_t)(EAX));
  /* 10432a47 call 0x10428810 */
  push32(0x10432a4cu); f_10428810();
  /* 10432a4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432a4f mov esi, eax */
  ESI = (EAX);
  /* 10432a51 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10432a54 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 10432a5a push edx */
  push32((uint32_t)(EDX));
  /* 10432a5b call 0x10428810 */
  push32(0x10432a60u); f_10428810();
  /* 10432a60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432a63 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10432a66 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10432a6a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10432a6d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10432a70 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10432a76 push edx */
  push32((uint32_t)(EDX));
  /* 10432a77 call 0x10428810 */
  push32(0x10432a7cu); f_10428810();
  /* 10432a7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432a7f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10432a82 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10432a86 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10432a89 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10432a8c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 10432a92 push ecx */
  push32((uint32_t)(ECX));
  /* 10432a93 call 0x10428810 */
  push32(0x10432a98u); f_10428810();
  /* 10432a98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432a9b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10432a9e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10432aa2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10432aa5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10432aa8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10432aae push edx */
  push32((uint32_t)(EDX));
  /* 10432aaf call 0x10428810 */
  push32(0x10432ab4u); f_10428810();
  /* 10432ab4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432ab7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10432aba lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10432abe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10432ac1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10432ac4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10432ac9 push eax */
  push32((uint32_t)(EAX));
  /* 10432aca call 0x104259c0 */
  push32(0x10432acfu); f_104259c0();
  /* 10432acf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432ad2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10432ad5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10432ad9 je 0x10432cf6 */
  if (C.zf) goto L_10432cf6;
  /* 10432adf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10432ae2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10432ae5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10432ae8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10432aee mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10432af1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 10432af6 mov eax, dword ptr [0x10450c98] */
  EAX = (r32((uint32_t)(0x10450c98)));
  /* 10432afb push eax */
  push32((uint32_t)(EAX));
  /* 10432afc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10432aff push ecx */
  push32((uint32_t)(ECX));
  /* 10432b00 call 0x1042c2c0 */
  push32(0x10432b05u); f_1042c2c0();
  /* 10432b05 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432b08 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10432b0f jmp 0x10432b1a */
  goto L_10432b1a;
L_10432b11:;
  /* 10432b11 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10432b14 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10432b17 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10432b1a:;
  /* 10432b1a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10432b1e jae 0x10432b8e */
  if (!C.cf) goto L_10432b8e;
  /* 10432b20 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10432b23 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10432b26 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10432b29 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10432b2c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10432b2f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10432b32 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10432b35 push edx */
  push32((uint32_t)(EDX));
  /* 10432b36 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10432b39 push eax */
  push32((uint32_t)(EAX));
  /* 10432b3a call 0x10428990 */
  push32(0x10432b3fu); f_10428990();
  /* 10432b3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432b42 push eax */
  push32((uint32_t)(EAX));
  /* 10432b43 call 0x10428810 */
  push32(0x10432b48u); f_10428810();
  /* 10432b48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432b4b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10432b4e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10432b52 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10432b55 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10432b58 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10432b5b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10432b5e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 10432b62 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10432b65 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10432b68 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 10432b6c push edx */
  push32((uint32_t)(EDX));
  /* 10432b6d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10432b70 push eax */
  push32((uint32_t)(EAX));
  /* 10432b71 call 0x10428990 */
  push32(0x10432b76u); f_10428990();
  /* 10432b76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432b79 push eax */
  push32((uint32_t)(EAX));
  /* 10432b7a call 0x10428810 */
  push32(0x10432b7fu); f_10428810();
  /* 10432b7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432b82 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10432b85 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10432b89 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10432b8c jmp 0x10432b11 */
  goto L_10432b11;
L_10432b8e:;
  /* 10432b8e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10432b95 jmp 0x10432ba0 */
  goto L_10432ba0;
L_10432b97:;
  /* 10432b97 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10432b9a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10432b9d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10432ba0:;
  /* 10432ba0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10432ba4 jae 0x10432c16 */
  if (!C.cf) goto L_10432c16;
  /* 10432ba6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10432ba9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10432bac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10432baf mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 10432bb3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10432bb6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10432bb9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10432bbd push eax */
  push32((uint32_t)(EAX));
  /* 10432bbe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10432bc1 push ecx */
  push32((uint32_t)(ECX));
  /* 10432bc2 call 0x10428990 */
  push32(0x10432bc7u); f_10428990();
  /* 10432bc7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432bca push eax */
  push32((uint32_t)(EAX));
  /* 10432bcb call 0x10428810 */
  push32(0x10432bd0u); f_10428810();
  /* 10432bd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432bd3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10432bd6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10432bda mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10432bdd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10432be0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10432be3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10432be6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 10432bea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10432bed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10432bf0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10432bf4 push eax */
  push32((uint32_t)(EAX));
  /* 10432bf5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10432bf8 push ecx */
  push32((uint32_t)(ECX));
  /* 10432bf9 call 0x10428990 */
  push32(0x10432bfeu); f_10428990();
  /* 10432bfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432c01 push eax */
  push32((uint32_t)(EAX));
  /* 10432c02 call 0x10428810 */
  push32(0x10432c07u); f_10428810();
  /* 10432c07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432c0a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10432c0d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10432c11 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10432c14 jmp 0x10432b97 */
  goto L_10432b97;
L_10432c16:;
  /* 10432c16 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10432c19 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10432c1c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 10432c22 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10432c25 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10432c2b push ecx */
  push32((uint32_t)(ECX));
  /* 10432c2c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10432c2f push edx */
  push32((uint32_t)(EDX));
  /* 10432c30 call 0x10428990 */
  push32(0x10432c35u); f_10428990();
  /* 10432c35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432c38 push eax */
  push32((uint32_t)(EAX));
  /* 10432c39 call 0x10428810 */
  push32(0x10432c3eu); f_10428810();
  /* 10432c3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432c41 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10432c44 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10432c48 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10432c4b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10432c4e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10432c51 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 10432c57 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10432c5a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10432c60 push eax */
  push32((uint32_t)(EAX));
  /* 10432c61 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10432c64 push ecx */
  push32((uint32_t)(ECX));
  /* 10432c65 call 0x10428990 */
  push32(0x10432c6au); f_10428990();
  /* 10432c6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432c6d push eax */
  push32((uint32_t)(EAX));
  /* 10432c6e call 0x10428810 */
  push32(0x10432c73u); f_10428810();
  /* 10432c73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432c76 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10432c79 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10432c7d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10432c80 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10432c83 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10432c86 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 10432c8c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10432c8f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 10432c95 push ecx */
  push32((uint32_t)(ECX));
  /* 10432c96 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10432c99 push edx */
  push32((uint32_t)(EDX));
  /* 10432c9a call 0x10428990 */
  push32(0x10432c9fu); f_10428990();
  /* 10432c9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432ca2 push eax */
  push32((uint32_t)(EAX));
  /* 10432ca3 call 0x10428810 */
  push32(0x10432ca8u); f_10428810();
  /* 10432ca8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432cab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10432cae lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10432cb2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10432cb5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10432cb8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10432cbb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 10432cc1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10432cc4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10432cca push eax */
  push32((uint32_t)(EAX));
  /* 10432ccb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10432cce push ecx */
  push32((uint32_t)(ECX));
  /* 10432ccf call 0x10428990 */
  push32(0x10432cd4u); f_10428990();
  /* 10432cd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432cd7 push eax */
  push32((uint32_t)(EAX));
  /* 10432cd8 call 0x10428810 */
  push32(0x10432cddu); f_10428810();
  /* 10432cdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432ce0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10432ce3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10432ce7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10432cea mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10432ced mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10432cf0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_10432cf6:;
  /* 10432cf6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10432cf9 pop esi */
  ESI = (pop32());
  /* 10432cfa mov esp, ebp */
  ESP = (EBP);
  /* 10432cfc pop ebp */
  EBP = (pop32());
  /* 10432cfd ret  */
  ESPCHK(0x10432990u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d00 @ 0x10432d00 (31 bytes, 15 insns) */
void f_10432d00(void) {
  FTRACE(0x10432d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10432d00 push ebp */
  push32((uint32_t)(EBP));
  /* 10432d01 mov ebp, esp */
  EBP = (ESP);
  /* 10432d03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10432d05 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10432d08 push eax */
  push32((uint32_t)(EAX));
  /* 10432d09 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10432d0c push ecx */
  push32((uint32_t)(ECX));
  /* 10432d0d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10432d10 push edx */
  push32((uint32_t)(EDX));
  /* 10432d11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10432d14 push eax */
  push32((uint32_t)(EAX));
  /* 10432d15 call 0x10432d20 */
  push32(0x10432d1au); f_10432d20();
  /* 10432d1a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432d1d pop ebp */
  EBP = (pop32());
  /* 10432d1e ret  */
  ESPCHK(0x10432d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d20 @ 0x10432d20 (393 bytes, 123 insns) */
void f_10432d20(void) {
  FTRACE(0x10432d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10432d20 push ebp */
  push32((uint32_t)(EBP));
  /* 10432d21 mov ebp, esp */
  EBP = (ESP);
  /* 10432d23 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10432d26 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10432d2a jne 0x10432d36 */
  if (!C.zf) goto L_10432d36;
  /* 10432d2c mov eax, dword ptr [0x10450c98] */
  EAX = (r32((uint32_t)(0x10450c98)));
  /* 10432d31 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10432d34 jmp 0x10432d3c */
  goto L_10432d3c;
L_10432d36:;
  /* 10432d36 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10432d39 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10432d3c:;
  /* 10432d3c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10432d3f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10432d42 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10432d45 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10432d48 push 0x10451904 */
  push32((uint32_t)(0x10451904u));
  /* 10432d4d call dword ptr [0x1045430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045430c))), 0x10432d53u);
  /* 10432d53 cmp dword ptr [0x104518f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104518f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10432d5a je 0x10432d7a */
  if (C.zf) goto L_10432d7a;
  /* 10432d5c push 0x10451904 */
  push32((uint32_t)(0x10451904u));
  /* 10432d61 call dword ptr [0x104542fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542fc))), 0x10432d67u);
  /* 10432d67 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10432d69 call 0x104293e0 */
  push32(0x10432d6eu); f_104293e0();
  /* 10432d6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432d71 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10432d78 jmp 0x10432d81 */
  goto L_10432d81;
L_10432d7a:;
  /* 10432d7a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10432d81:;
  /* 10432d81 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10432d85 jbe 0x10432e72 */
  if ((C.cf||C.zf)) goto L_10432e72;
  /* 10432d8b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10432d8e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10432d90 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 10432d93 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10432d97 je 0x10432da1 */
  if (C.zf) goto L_10432da1;
  /* 10432d99 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10432d9d je 0x10432da6 */
  if (C.zf) goto L_10432da6;
  /* 10432d9f jmp 0x10432e00 */
  goto L_10432e00;
L_10432da1:;
  /* 10432da1 jmp 0x10432e72 */
  goto L_10432e72;
L_10432da6:;
  /* 10432da6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10432da9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10432dac mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10432daf mov dword ptr [0x104518e0], 0 */
  w32((uint32_t)(0x104518e0), (0x0u));
  /* 10432db9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10432dbc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10432dbf cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10432dc2 jne 0x10432dd7 */
  if (!C.zf) goto L_10432dd7;
  /* 10432dc4 mov dword ptr [0x104518e0], 1 */
  w32((uint32_t)(0x104518e0), (0x1u));
  /* 10432dce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10432dd1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10432dd4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10432dd7:;
  /* 10432dd7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10432dda push ecx */
  push32((uint32_t)(ECX));
  /* 10432ddb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10432dde push edx */
  push32((uint32_t)(EDX));
  /* 10432ddf lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10432de2 push eax */
  push32((uint32_t)(EAX));
  /* 10432de3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10432de6 push ecx */
  push32((uint32_t)(ECX));
  /* 10432de7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10432dea mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10432dec push eax */
  push32((uint32_t)(EAX));
  /* 10432ded call 0x10432eb0 */
  push32(0x10432df2u); f_10432eb0();
  /* 10432df2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432df5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10432df8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10432dfb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10432dfe jmp 0x10432e6d */
  goto L_10432e6d;
L_10432e00:;
  /* 10432e00 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10432e03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10432e05 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10432e07 mov ecx, dword ptr [0x1044fc98] */
  ECX = (r32((uint32_t)(0x1044fc98)));
  /* 10432e0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10432e0f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10432e13 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10432e19 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10432e1b je 0x10432e48 */
  if (C.zf) goto L_10432e48;
  /* 10432e1d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10432e21 jbe 0x10432e48 */
  if ((C.cf||C.zf)) goto L_10432e48;
  /* 10432e23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10432e26 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10432e29 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10432e2b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10432e2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10432e30 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10432e33 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10432e36 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10432e39 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10432e3c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10432e3f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10432e42 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10432e45 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10432e48:;
  /* 10432e48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10432e4b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10432e4e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10432e50 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10432e52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10432e55 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10432e58 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10432e5b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10432e5e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10432e61 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10432e64 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10432e67 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10432e6a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10432e6d:;
  /* 10432e6d jmp 0x10432d81 */
  goto L_10432d81;
L_10432e72:;
  /* 10432e72 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10432e76 je 0x10432e84 */
  if (C.zf) goto L_10432e84;
  /* 10432e78 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10432e7a call 0x10429480 */
  push32(0x10432e7fu); f_10429480();
  /* 10432e7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432e82 jmp 0x10432e8f */
  goto L_10432e8f;
L_10432e84:;
  /* 10432e84 push 0x10451904 */
  push32((uint32_t)(0x10451904u));
  /* 10432e89 call dword ptr [0x104542fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542fc))), 0x10432e8fu);
L_10432e8f:;
  /* 10432e8f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10432e93 jbe 0x10432ea3 */
  if ((C.cf||C.zf)) goto L_10432ea3;
  /* 10432e95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10432e98 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10432e9b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10432e9e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10432ea1 jmp 0x10432ea5 */
  goto L_10432ea5;
L_10432ea3:;
  /* 10432ea3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10432ea5:;
  /* 10432ea5 mov esp, ebp */
  ESP = (EBP);
  /* 10432ea7 pop ebp */
  EBP = (pop32());
  /* 10432ea8 ret  */
  ESPCHK(0x10432d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10012eb0 @ 0x10432eb0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_10432eb0(void) {
  FTRACE(0x10432eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10432eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10432eb1 mov ebp, esp */
  EBP = (ESP);
  /* 10432eb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10432eb6 push esi */
  push32((uint32_t)(ESI));
  /* 10432eb7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10432ebb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10432ebe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10432ec1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10432ec4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10432ec7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10432ecb ja 0x10433418 */
  if ((!C.cf&&!C.zf)) goto L_10433418;
  /* 10432ed1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10432ed4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10432ed6 mov dl, byte ptr [eax + 0x10433479] */
  DL = (r8((uint32_t)(EAX + 0x10433479)));
  /* 10432edc jmp dword ptr [edx*4 + 0x1043341d] */
  switch (EDX) {
    case 0: goto L_104333f6;
    case 1: goto L_10432f05;
    case 2: goto L_10432f4b;
    case 3: goto L_10433098;
    case 4: goto L_104330c0;
    case 5: goto L_1043315f;
    case 6: goto L_104331cb;
    case 7: goto L_104331f4;
    case 8: goto L_10433235;
    case 9: goto L_10433317;
    case 10: goto L_1043337e;
    case 11: goto L_104333cb;
    case 12: goto L_10432ee3;
    case 13: goto L_10432f28;
    case 14: goto L_10432f6e;
    case 15: goto L_1043306e;
    case 16: goto L_10433105;
    case 17: goto L_10433132;
    case 18: goto L_10433187;
    case 19: goto L_1043320b;
    case 20: goto L_104332b9;
    case 21: goto L_10433348;
    case 22: goto L_10433418;
    default: x86_unimpl("switch@0x10432edc out of table"); return;
  }
L_10432ee3:;
  /* 10432ee3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10432ee6 push ecx */
  push32((uint32_t)(ECX));
  /* 10432ee7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10432eea push edx */
  push32((uint32_t)(EDX));
  /* 10432eeb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10432eee mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10432ef1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10432ef4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10432ef7 push eax */
  push32((uint32_t)(EAX));
  /* 10432ef8 call 0x104334d0 */
  push32(0x10432efdu); f_104334d0();
  /* 10432efd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432f00 jmp 0x10433418 */
  goto L_10433418;
L_10432f05:;
  /* 10432f05 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10432f08 push ecx */
  push32((uint32_t)(ECX));
  /* 10432f09 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10432f0c push edx */
  push32((uint32_t)(EDX));
  /* 10432f0d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10432f10 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10432f13 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10432f16 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10432f1a push eax */
  push32((uint32_t)(EAX));
  /* 10432f1b call 0x104334d0 */
  push32(0x10432f20u); f_104334d0();
  /* 10432f20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432f23 jmp 0x10433418 */
  goto L_10433418;
L_10432f28:;
  /* 10432f28 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10432f2b push ecx */
  push32((uint32_t)(ECX));
  /* 10432f2c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10432f2f push edx */
  push32((uint32_t)(EDX));
  /* 10432f30 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10432f33 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10432f36 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10432f39 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10432f3d push eax */
  push32((uint32_t)(EAX));
  /* 10432f3e call 0x104334d0 */
  push32(0x10432f43u); f_104334d0();
  /* 10432f43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432f46 jmp 0x10433418 */
  goto L_10433418;
L_10432f4b:;
  /* 10432f4b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10432f4e push ecx */
  push32((uint32_t)(ECX));
  /* 10432f4f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10432f52 push edx */
  push32((uint32_t)(EDX));
  /* 10432f53 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10432f56 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10432f59 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10432f5c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10432f60 push eax */
  push32((uint32_t)(EAX));
  /* 10432f61 call 0x104334d0 */
  push32(0x10432f66u); f_104334d0();
  /* 10432f66 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432f69 jmp 0x10433418 */
  goto L_10433418;
L_10432f6e:;
  /* 10432f6e cmp dword ptr [0x104518e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104518e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10432f75 je 0x10432ff6 */
  if (C.zf) goto L_10432ff6;
  /* 10432f77 mov dword ptr [0x104518e0], 0 */
  w32((uint32_t)(0x104518e0), (0x0u));
  /* 10432f81 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10432f84 push ecx */
  push32((uint32_t)(ECX));
  /* 10432f85 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10432f88 push edx */
  push32((uint32_t)(EDX));
  /* 10432f89 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10432f8c push eax */
  push32((uint32_t)(EAX));
  /* 10432f8d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10432f90 push ecx */
  push32((uint32_t)(ECX));
  /* 10432f91 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10432f94 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10432f9a push eax */
  push32((uint32_t)(EAX));
  /* 10432f9b call 0x10433680 */
  push32(0x10432fa0u); f_10433680();
  /* 10432fa0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432fa3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10432fa6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10432fa9 jne 0x10432fb0 */
  if (!C.zf) goto L_10432fb0;
  /* 10432fab jmp 0x10433418 */
  goto L_10433418;
L_10432fb0:;
  /* 10432fb0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10432fb3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10432fb5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10432fb8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10432fbb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10432fbd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10432fc0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10432fc3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10432fc5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10432fc8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10432fca sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10432fcd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10432fd0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10432fd2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10432fd5 push ecx */
  push32((uint32_t)(ECX));
  /* 10432fd6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10432fd9 push edx */
  push32((uint32_t)(EDX));
  /* 10432fda mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10432fdd push eax */
  push32((uint32_t)(EAX));
  /* 10432fde mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10432fe1 push ecx */
  push32((uint32_t)(ECX));
  /* 10432fe2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10432fe5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10432feb push eax */
  push32((uint32_t)(EAX));
  /* 10432fec call 0x10433680 */
  push32(0x10432ff1u); f_10433680();
  /* 10432ff1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432ff4 jmp 0x10433069 */
  goto L_10433069;
L_10432ff6:;
  /* 10432ff6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10432ff9 push ecx */
  push32((uint32_t)(ECX));
  /* 10432ffa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10432ffd push edx */
  push32((uint32_t)(EDX));
  /* 10432ffe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10433001 push eax */
  push32((uint32_t)(EAX));
  /* 10433002 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10433005 push ecx */
  push32((uint32_t)(ECX));
  /* 10433006 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10433009 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1043300f push eax */
  push32((uint32_t)(EAX));
  /* 10433010 call 0x10433680 */
  push32(0x10433015u); f_10433680();
  /* 10433015 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10433018 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1043301b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043301e jne 0x10433025 */
  if (!C.zf) goto L_10433025;
  /* 10433020 jmp 0x10433418 */
  goto L_10433418;
L_10433025:;
  /* 10433025 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10433028 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1043302a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 1043302d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10433030 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10433032 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10433035 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10433038 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1043303a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1043303d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1043303f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10433042 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10433045 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10433047 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1043304a push ecx */
  push32((uint32_t)(ECX));
  /* 1043304b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1043304e push edx */
  push32((uint32_t)(EDX));
  /* 1043304f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10433052 push eax */
  push32((uint32_t)(EAX));
  /* 10433053 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10433056 push ecx */
  push32((uint32_t)(ECX));
  /* 10433057 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1043305a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10433060 push eax */
  push32((uint32_t)(EAX));
  /* 10433061 call 0x10433680 */
  push32(0x10433066u); f_10433680();
  /* 10433066 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10433069:;
  /* 10433069 jmp 0x10433418 */
  goto L_10433418;
L_1043306e:;
  /* 1043306e mov ecx, dword ptr [0x104518e0] */
  ECX = (r32((uint32_t)(0x104518e0)));
  /* 10433074 mov dword ptr [0x104518f0], ecx */
  w32((uint32_t)(0x104518f0), (ECX));
  /* 1043307a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1043307d push edx */
  push32((uint32_t)(EDX));
  /* 1043307e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10433081 push eax */
  push32((uint32_t)(EAX));
  /* 10433082 push 2 */
  push32((uint32_t)(0x2u));
  /* 10433084 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10433087 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1043308a push edx */
  push32((uint32_t)(EDX));
  /* 1043308b call 0x10433520 */
  push32(0x10433090u); f_10433520();
  /* 10433090 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10433093 jmp 0x10433418 */
  goto L_10433418;
L_10433098:;
  /* 10433098 mov eax, dword ptr [0x104518e0] */
  EAX = (r32((uint32_t)(0x104518e0)));
  /* 1043309d mov dword ptr [0x104518f0], eax */
  w32((uint32_t)(0x104518f0), (EAX));
  /* 104330a2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104330a5 push ecx */
  push32((uint32_t)(ECX));
  /* 104330a6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104330a9 push edx */
  push32((uint32_t)(EDX));
  /* 104330aa push 2 */
  push32((uint32_t)(0x2u));
  /* 104330ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104330af mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 104330b2 push ecx */
  push32((uint32_t)(ECX));
  /* 104330b3 call 0x10433520 */
  push32(0x104330b8u); f_10433520();
  /* 104330b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104330bb jmp 0x10433418 */
  goto L_10433418;
L_104330c0:;
  /* 104330c0 mov edx, dword ptr [0x104518e0] */
  EDX = (r32((uint32_t)(0x104518e0)));
  /* 104330c6 mov dword ptr [0x104518f0], edx */
  w32((uint32_t)(0x104518f0), (EDX));
  /* 104330cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104330cf mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 104330d2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104330d3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 104330d8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104330da mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104330dd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104330e1 jne 0x104330ea */
  if (!C.zf) goto L_104330ea;
  /* 104330e3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_104330ea:;
  /* 104330ea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104330ed push edx */
  push32((uint32_t)(EDX));
  /* 104330ee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104330f1 push eax */
  push32((uint32_t)(EAX));
  /* 104330f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 104330f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104330f7 push ecx */
  push32((uint32_t)(ECX));
  /* 104330f8 call 0x10433520 */
  push32(0x104330fdu); f_10433520();
  /* 104330fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10433100 jmp 0x10433418 */
  goto L_10433418;
L_10433105:;
  /* 10433105 mov edx, dword ptr [0x104518e0] */
  EDX = (r32((uint32_t)(0x104518e0)));
  /* 1043310b mov dword ptr [0x104518f0], edx */
  w32((uint32_t)(0x104518f0), (EDX));
  /* 10433111 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10433114 push eax */
  push32((uint32_t)(EAX));
  /* 10433115 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10433118 push ecx */
  push32((uint32_t)(ECX));
  /* 10433119 push 3 */
  push32((uint32_t)(0x3u));
  /* 1043311b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1043311e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10433121 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10433124 push eax */
  push32((uint32_t)(EAX));
  /* 10433125 call 0x10433520 */
  push32(0x1043312au); f_10433520();
  /* 1043312a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043312d jmp 0x10433418 */
  goto L_10433418;
L_10433132:;
  /* 10433132 mov ecx, dword ptr [0x104518e0] */
  ECX = (r32((uint32_t)(0x104518e0)));
  /* 10433138 mov dword ptr [0x104518f0], ecx */
  w32((uint32_t)(0x104518f0), (ECX));
  /* 1043313e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10433141 push edx */
  push32((uint32_t)(EDX));
  /* 10433142 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10433145 push eax */
  push32((uint32_t)(EAX));
  /* 10433146 push 2 */
  push32((uint32_t)(0x2u));
  /* 10433148 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1043314b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1043314e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10433151 push edx */
  push32((uint32_t)(EDX));
  /* 10433152 call 0x10433520 */
  push32(0x10433157u); f_10433520();
  /* 10433157 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043315a jmp 0x10433418 */
  goto L_10433418;
L_1043315f:;
  /* 1043315f mov eax, dword ptr [0x104518e0] */
  EAX = (r32((uint32_t)(0x104518e0)));
  /* 10433164 mov dword ptr [0x104518f0], eax */
  w32((uint32_t)(0x104518f0), (EAX));
  /* 10433169 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1043316c push ecx */
  push32((uint32_t)(ECX));
  /* 1043316d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10433170 push edx */
  push32((uint32_t)(EDX));
  /* 10433171 push 2 */
  push32((uint32_t)(0x2u));
  /* 10433173 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10433176 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10433179 push ecx */
  push32((uint32_t)(ECX));
  /* 1043317a call 0x10433520 */
  push32(0x1043317fu); f_10433520();
  /* 1043317f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10433182 jmp 0x10433418 */
  goto L_10433418;
L_10433187:;
  /* 10433187 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1043318a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043318e jg 0x104331ac */
  if ((!C.zf&&C.sf==C.of)) goto L_104331ac;
  /* 10433190 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10433193 push eax */
  push32((uint32_t)(EAX));
  /* 10433194 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10433197 push ecx */
  push32((uint32_t)(ECX));
  /* 10433198 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1043319b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 104331a1 push eax */
  push32((uint32_t)(EAX));
  /* 104331a2 call 0x104334d0 */
  push32(0x104331a7u); f_104334d0();
  /* 104331a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104331aa jmp 0x104331c6 */
  goto L_104331c6;
L_104331ac:;
  /* 104331ac mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104331af push ecx */
  push32((uint32_t)(ECX));
  /* 104331b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104331b3 push edx */
  push32((uint32_t)(EDX));
  /* 104331b4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104331b7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 104331bd push ecx */
  push32((uint32_t)(ECX));
  /* 104331be call 0x104334d0 */
  push32(0x104331c3u); f_104334d0();
  /* 104331c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104331c6:;
  /* 104331c6 jmp 0x10433418 */
  goto L_10433418;
L_104331cb:;
  /* 104331cb mov edx, dword ptr [0x104518e0] */
  EDX = (r32((uint32_t)(0x104518e0)));
  /* 104331d1 mov dword ptr [0x104518f0], edx */
  w32((uint32_t)(0x104518f0), (EDX));
  /* 104331d7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104331da push eax */
  push32((uint32_t)(EAX));
  /* 104331db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104331de push ecx */
  push32((uint32_t)(ECX));
  /* 104331df push 2 */
  push32((uint32_t)(0x2u));
  /* 104331e1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104331e4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104331e6 push eax */
  push32((uint32_t)(EAX));
  /* 104331e7 call 0x10433520 */
  push32(0x104331ecu); f_10433520();
  /* 104331ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104331ef jmp 0x10433418 */
  goto L_10433418;
L_104331f4:;
  /* 104331f4 mov ecx, dword ptr [0x104518e0] */
  ECX = (r32((uint32_t)(0x104518e0)));
  /* 104331fa mov dword ptr [0x104518f0], ecx */
  w32((uint32_t)(0x104518f0), (ECX));
  /* 10433200 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10433203 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10433206 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10433209 jmp 0x1043325d */
  goto L_1043325d;
L_1043320b:;
  /* 1043320b mov ecx, dword ptr [0x104518e0] */
  ECX = (r32((uint32_t)(0x104518e0)));
  /* 10433211 mov dword ptr [0x104518f0], ecx */
  w32((uint32_t)(0x104518f0), (ECX));
  /* 10433217 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1043321a push edx */
  push32((uint32_t)(EDX));
  /* 1043321b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1043321e push eax */
  push32((uint32_t)(EAX));
  /* 1043321f push 1 */
  push32((uint32_t)(0x1u));
  /* 10433221 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10433224 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10433227 push edx */
  push32((uint32_t)(EDX));
  /* 10433228 call 0x10433520 */
  push32(0x1043322du); f_10433520();
  /* 1043322d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10433230 jmp 0x10433418 */
  goto L_10433418;
L_10433235:;
  /* 10433235 mov eax, dword ptr [0x104518e0] */
  EAX = (r32((uint32_t)(0x104518e0)));
  /* 1043323a mov dword ptr [0x104518f0], eax */
  w32((uint32_t)(0x104518f0), (EAX));
  /* 1043323f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10433242 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10433246 jne 0x10433251 */
  if (!C.zf) goto L_10433251;
  /* 10433248 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 1043324f jmp 0x1043325d */
  goto L_1043325d;
L_10433251:;
  /* 10433251 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10433254 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10433257 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1043325a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1043325d:;
  /* 1043325d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10433260 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10433263 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10433266 jge 0x10433271 */
  if ((C.sf==C.of)) goto L_10433271;
  /* 10433268 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1043326f jmp 0x1043329e */
  goto L_1043329e;
L_10433271:;
  /* 10433271 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10433274 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10433277 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10433278 mov ecx, 7 */
  ECX = (0x7u);
  /* 1043327d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1043327f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10433282 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10433285 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10433288 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10433289 mov ecx, 7 */
  ECX = (0x7u);
  /* 1043328e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10433290 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10433293 jl 0x1043329e */
  if ((C.sf!=C.of)) goto L_1043329e;
  /* 10433295 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10433298 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1043329b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1043329e:;
  /* 1043329e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104332a1 push eax */
  push32((uint32_t)(EAX));
  /* 104332a2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104332a5 push ecx */
  push32((uint32_t)(ECX));
  /* 104332a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 104332a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104332ab push edx */
  push32((uint32_t)(EDX));
  /* 104332ac call 0x10433520 */
  push32(0x104332b1u); f_10433520();
  /* 104332b1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104332b4 jmp 0x10433418 */
  goto L_10433418;
L_104332b9:;
  /* 104332b9 cmp dword ptr [0x104518e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104518e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104332c0 je 0x104332f0 */
  if (C.zf) goto L_104332f0;
  /* 104332c2 mov dword ptr [0x104518e0], 0 */
  w32((uint32_t)(0x104518e0), (0x0u));
  /* 104332cc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104332cf push eax */
  push32((uint32_t)(EAX));
  /* 104332d0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104332d3 push ecx */
  push32((uint32_t)(ECX));
  /* 104332d4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104332d7 push edx */
  push32((uint32_t)(EDX));
  /* 104332d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104332db push eax */
  push32((uint32_t)(EAX));
  /* 104332dc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104332df mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 104332e5 push edx */
  push32((uint32_t)(EDX));
  /* 104332e6 call 0x10433680 */
  push32(0x104332ebu); f_10433680();
  /* 104332eb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104332ee jmp 0x10433312 */
  goto L_10433312;
L_104332f0:;
  /* 104332f0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104332f3 push eax */
  push32((uint32_t)(EAX));
  /* 104332f4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104332f7 push ecx */
  push32((uint32_t)(ECX));
  /* 104332f8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104332fb push edx */
  push32((uint32_t)(EDX));
  /* 104332fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104332ff push eax */
  push32((uint32_t)(EAX));
  /* 10433300 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10433303 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10433309 push edx */
  push32((uint32_t)(EDX));
  /* 1043330a call 0x10433680 */
  push32(0x1043330fu); f_10433680();
  /* 1043330f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10433312:;
  /* 10433312 jmp 0x10433418 */
  goto L_10433418;
L_10433317:;
  /* 10433317 mov dword ptr [0x104518e0], 0 */
  w32((uint32_t)(0x104518e0), (0x0u));
  /* 10433321 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10433324 push eax */
  push32((uint32_t)(EAX));
  /* 10433325 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10433328 push ecx */
  push32((uint32_t)(ECX));
  /* 10433329 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1043332c push edx */
  push32((uint32_t)(EDX));
  /* 1043332d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10433330 push eax */
  push32((uint32_t)(EAX));
  /* 10433331 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10433334 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1043333a push edx */
  push32((uint32_t)(EDX));
  /* 1043333b call 0x10433680 */
  push32(0x10433340u); f_10433680();
  /* 10433340 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10433343 jmp 0x10433418 */
  goto L_10433418;
L_10433348:;
  /* 10433348 mov eax, dword ptr [0x104518e0] */
  EAX = (r32((uint32_t)(0x104518e0)));
  /* 1043334d mov dword ptr [0x104518f0], eax */
  w32((uint32_t)(0x104518f0), (EAX));
  /* 10433352 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10433355 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10433358 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10433359 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 1043335e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10433360 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10433363 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10433366 push edx */
  push32((uint32_t)(EDX));
  /* 10433367 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1043336a push eax */
  push32((uint32_t)(EAX));
  /* 1043336b push 2 */
  push32((uint32_t)(0x2u));
  /* 1043336d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10433370 push ecx */
  push32((uint32_t)(ECX));
  /* 10433371 call 0x10433520 */
  push32(0x10433376u); f_10433520();
  /* 10433376 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10433379 jmp 0x10433418 */
  goto L_10433418;
L_1043337e:;
  /* 1043337e mov edx, dword ptr [0x104518e0] */
  EDX = (r32((uint32_t)(0x104518e0)));
  /* 10433384 mov dword ptr [0x104518f0], edx */
  w32((uint32_t)(0x104518f0), (EDX));
  /* 1043338a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1043338d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 10433390 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10433391 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10433396 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10433398 mov ecx, eax */
  ECX = (EAX);
  /* 1043339a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1043339d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104333a0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104333a3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104333a6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104333a7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 104333ac idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104333ae add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104333b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104333b3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104333b6 push eax */
  push32((uint32_t)(EAX));
  /* 104333b7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104333ba push ecx */
  push32((uint32_t)(ECX));
  /* 104333bb push 4 */
  push32((uint32_t)(0x4u));
  /* 104333bd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104333c0 push edx */
  push32((uint32_t)(EDX));
  /* 104333c1 call 0x10433520 */
  push32(0x104333c6u); f_10433520();
  /* 104333c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104333c9 jmp 0x10433418 */
  goto L_10433418;
L_104333cb:;
  /* 104333cb call 0x104344e0 */
  push32(0x104333d0u); f_104344e0();
  /* 104333d0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104333d3 push eax */
  push32((uint32_t)(EAX));
  /* 104333d4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104333d7 push ecx */
  push32((uint32_t)(ECX));
  /* 104333d8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104333db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104333dd cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104333e1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 104333e4 mov ecx, dword ptr [eax*4 + 0x10450e1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10450e1c)));
  /* 104333eb push ecx */
  push32((uint32_t)(ECX));
  /* 104333ec call 0x104334d0 */
  push32(0x104333f1u); f_104334d0();
  /* 104333f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104333f4 jmp 0x10433418 */
  goto L_10433418;
L_104333f6:;
  /* 104333f6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104333f9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104333fb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 104333fe mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10433401 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10433403 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10433406 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10433409 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1043340b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1043340e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10433410 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10433413 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10433416 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10433418:;
  /* 10433418 pop esi */
  ESI = (pop32());
  /* 10433419 mov esp, ebp */
  ESP = (EBP);
  /* 1043341b pop ebp */
  EBP = (pop32());
  /* 1043341c ret  */
  ESPCHK(0x10432eb0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x104334d0 (72 bytes, 30 insns) */
void f_104334d0(void) {
  FTRACE(0x104334d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104334d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104334d1 mov ebp, esp */
  EBP = (ESP);
L_104334d3:;
  /* 104334d3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104334d6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104334d9 je 0x10433516 */
  if (C.zf) goto L_10433516;
  /* 104334db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104334de movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104334e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104334e3 je 0x10433516 */
  if (C.zf) goto L_10433516;
  /* 104334e5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104334e8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104334ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104334ed mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104334ef mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 104334f1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104334f4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104334f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104334f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104334fc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104334fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10433501 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10433504 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10433507 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1043350a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1043350c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1043350f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10433512 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10433514 jmp 0x104334d3 */
  goto L_104334d3;
L_10433516:;
  /* 10433516 pop ebp */
  EBP = (pop32());
  /* 10433517 ret  */
  ESPCHK(0x104334d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013520 @ 0x10433520 (173 bytes, 64 insns) */
void f_10433520(void) {
  FTRACE(0x10433520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10433520 push ebp */
  push32((uint32_t)(EBP));
  /* 10433521 mov ebp, esp */
  EBP = (ESP);
  /* 10433523 push ecx */
  push32((uint32_t)(ECX));
  /* 10433524 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1043352b cmp dword ptr [0x104518f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104518f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10433532 je 0x1043354a */
  if (C.zf) goto L_1043354a;
  /* 10433534 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10433537 push eax */
  push32((uint32_t)(EAX));
  /* 10433538 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1043353b push ecx */
  push32((uint32_t)(ECX));
  /* 1043353c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043353f push edx */
  push32((uint32_t)(EDX));
  /* 10433540 call 0x104335d0 */
  push32(0x10433545u); f_104335d0();
  /* 10433545 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10433548 jmp 0x104335c9 */
  goto L_104335c9;
L_1043354a:;
  /* 1043354a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1043354d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10433550 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10433552 jae 0x104335c0 */
  if (!C.cf) goto L_104335c0;
  /* 10433554 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10433557 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1043355a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1043355d jmp 0x10433568 */
  goto L_10433568;
L_1043355f:;
  /* 1043355f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10433562 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10433565 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10433568:;
  /* 10433568 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1043356b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1043356e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10433570 je 0x104335a4 */
  if (C.zf) goto L_104335a4;
  /* 10433572 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10433575 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10433576 mov ecx, 0xa */
  ECX = (0xau);
  /* 1043357b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1043357d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10433580 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10433583 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10433585 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10433588 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 1043358b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043358e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1043358f mov ecx, 0xa */
  ECX = (0xau);
  /* 10433594 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10433596 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10433599 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1043359c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1043359f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104335a2 jmp 0x1043355f */
  goto L_1043355f;
L_104335a4:;
  /* 104335a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104335a7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104335a9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104335ac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104335af mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 104335b1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104335b4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104335b6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104335b9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104335bc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 104335be jmp 0x104335c9 */
  goto L_104335c9;
L_104335c0:;
  /* 104335c0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104335c3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_104335c9:;
  /* 104335c9 mov esp, ebp */
  ESP = (EBP);
  /* 104335cb pop ebp */
  EBP = (pop32());
  /* 104335cc ret  */
  ESPCHK(0x10433520u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x104335d0 (172 bytes, 65 insns) */
void f_104335d0(void) {
  FTRACE(0x104335d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104335d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104335d1 mov ebp, esp */
  EBP = (ESP);
  /* 104335d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104335d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104335d9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104335db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104335de mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104335e1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104335e4 jbe 0x1043362b */
  if ((C.cf||C.zf)) goto L_1043362b;
L_104335e6:;
  /* 104335e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104335e9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104335ea mov ecx, 0xa */
  ECX = (0xau);
  /* 104335ef idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104335f1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104335f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104335f7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 104335f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104335fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104335ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10433602 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10433605 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10433607 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1043360a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1043360d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1043360f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10433612 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10433613 mov ecx, 0xa */
  ECX = (0xau);
  /* 10433618 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1043361a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1043361d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10433621 jle 0x1043362b */
  if ((C.zf||C.sf!=C.of)) goto L_1043362b;
  /* 10433623 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10433626 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10433629 ja 0x104335e6 */
  if ((!C.cf&&!C.zf)) goto L_104335e6;
L_1043362b:;
  /* 1043362b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1043362e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10433630 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10433633 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10433636 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10433639 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1043363b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1043363e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10433641 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10433644:;
  /* 10433644 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10433647 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10433649 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1043364c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1043364f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10433652 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10433654 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10433656 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10433659 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1043365c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1043365f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10433662 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10433665 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10433667 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1043366a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1043366d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10433670 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10433673 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10433676 jb 0x10433644 */
  if (C.cf) goto L_10433644;
  /* 10433678 mov esp, ebp */
  ESP = (EBP);
  /* 1043367a pop ebp */
  EBP = (pop32());
  /* 1043367b ret  */
  ESPCHK(0x104335d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013680 @ 0x10433680 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_10433680(void) {
  FTRACE(0x10433680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10433680 push ebp */
  push32((uint32_t)(EBP));
  /* 10433681 mov ebp, esp */
  EBP = (ESP);
  /* 10433683 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10433686:;
  /* 10433686 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10433689 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1043368c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1043368e je 0x10433afc */
  if (C.zf) goto L_10433afc;
  /* 10433694 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10433697 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043369a je 0x10433afc */
  if (C.zf) goto L_10433afc;
  /* 104336a0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 104336a4 mov dword ptr [0x104518f0], 0 */
  w32((uint32_t)(0x104518f0), (0x0u));
  /* 104336ae mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 104336b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104336b8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104336bb jmp 0x104336c6 */
  goto L_104336c6;
L_104336bd:;
  /* 104336bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104336c0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104336c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_104336c6:;
  /* 104336c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104336c9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104336cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104336cf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104336d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104336d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104336d8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104336db cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104336dd jne 0x104336e1 */
  if (!C.zf) goto L_104336e1;
  /* 104336df jmp 0x104336bd */
  goto L_104336bd;
L_104336e1:;
  /* 104336e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104336e4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104336e7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104336ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104336ed movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104336f0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 104336f3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104336f6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104336f9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 104336fc cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10433700 ja 0x10433a50 */
  if ((!C.cf&&!C.zf)) goto L_10433a50;
  /* 10433706 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10433709 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1043370b mov al, byte ptr [ecx + 0x10433b2c] */
  AL = (r8((uint32_t)(ECX + 0x10433b2c)));
  /* 10433711 jmp dword ptr [eax*4 + 0x10433b00] */
  switch (EAX) {
    case 0: goto L_1043396f;
    case 1: goto L_10433853;
    case 2: goto L_104337de;
    case 3: goto L_10433718;
    case 4: goto L_10433756;
    case 5: goto L_104337b7;
    case 6: goto L_10433805;
    case 7: goto L_1043382c;
    case 8: goto L_1043389a;
    case 9: goto L_10433794;
    case 10: goto L_10433a50;
    default: x86_unimpl("switch@0x10433711 out of table"); return;
  }
L_10433718:;
  /* 10433718 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1043371b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1043371e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10433721 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10433724 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10433727 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043372b ja 0x10433751 */
  if ((!C.cf&&!C.zf)) goto L_10433751;
  /* 1043372d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10433730 jmp dword ptr [ecx*4 + 0x10433b7f] */
  switch (ECX) {
    case 0: goto L_10433737;
    case 1: goto L_10433741;
    case 2: goto L_10433747;
    case 3: goto L_1043374d;
    case 4: goto L_10433775;
    case 5: goto L_1043377f;
    case 6: goto L_10433785;
    case 7: goto L_1043378b;
    default: x86_unimpl("switch@0x10433730 out of table"); return;
  }
L_10433737:;
  /* 10433737 mov dword ptr [0x104518f0], 1 */
  w32((uint32_t)(0x104518f0), (0x1u));
L_10433741:;
  /* 10433741 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 10433745 jmp 0x10433751 */
  goto L_10433751;
L_10433747:;
  /* 10433747 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 1043374b jmp 0x10433751 */
  goto L_10433751;
L_1043374d:;
  /* 1043374d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_10433751:;
  /* 10433751 jmp 0x10433a50 */
  goto L_10433a50;
L_10433756:;
  /* 10433756 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10433759 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1043375c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1043375f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10433762 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10433765 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10433769 ja 0x1043378f */
  if ((!C.cf&&!C.zf)) goto L_1043378f;
  /* 1043376b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1043376e jmp dword ptr [ecx*4 + 0x10433b8f] */
  switch (ECX) {
    case 0: goto L_10433775;
    case 1: goto L_1043377f;
    case 2: goto L_10433785;
    case 3: goto L_1043378b;
    default: x86_unimpl("switch@0x1043376e out of table"); return;
  }
L_10433775:;
  /* 10433775 mov dword ptr [0x104518f0], 1 */
  w32((uint32_t)(0x104518f0), (0x1u));
L_1043377f:;
  /* 1043377f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 10433783 jmp 0x1043378f */
  goto L_1043378f;
L_10433785:;
  /* 10433785 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 10433789 jmp 0x1043378f */
  goto L_1043378f;
L_1043378b:;
  /* 1043378b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_1043378f:;
  /* 1043378f jmp 0x10433a50 */
  goto L_10433a50;
L_10433794:;
  /* 10433794 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10433797 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1043379a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043379e je 0x104337a8 */
  if (C.zf) goto L_104337a8;
  /* 104337a0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104337a4 je 0x104337ae */
  if (C.zf) goto L_104337ae;
  /* 104337a6 jmp 0x104337b2 */
  goto L_104337b2;
L_104337a8:;
  /* 104337a8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 104337ac jmp 0x104337b2 */
  goto L_104337b2;
L_104337ae:;
  /* 104337ae mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_104337b2:;
  /* 104337b2 jmp 0x10433a50 */
  goto L_10433a50;
L_104337b7:;
  /* 104337b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104337ba mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 104337bd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104337c1 je 0x104337cb */
  if (C.zf) goto L_104337cb;
  /* 104337c3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104337c7 je 0x104337d5 */
  if (C.zf) goto L_104337d5;
  /* 104337c9 jmp 0x104337d9 */
  goto L_104337d9;
L_104337cb:;
  /* 104337cb mov dword ptr [0x104518f0], 1 */
  w32((uint32_t)(0x104518f0), (0x1u));
L_104337d5:;
  /* 104337d5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_104337d9:;
  /* 104337d9 jmp 0x10433a50 */
  goto L_10433a50;
L_104337de:;
  /* 104337de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104337e1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 104337e4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104337e8 je 0x104337f2 */
  if (C.zf) goto L_104337f2;
  /* 104337ea cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104337ee je 0x104337fc */
  if (C.zf) goto L_104337fc;
  /* 104337f0 jmp 0x10433800 */
  goto L_10433800;
L_104337f2:;
  /* 104337f2 mov dword ptr [0x104518f0], 1 */
  w32((uint32_t)(0x104518f0), (0x1u));
L_104337fc:;
  /* 104337fc mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_10433800:;
  /* 10433800 jmp 0x10433a50 */
  goto L_10433a50;
L_10433805:;
  /* 10433805 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10433808 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 1043380b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043380f je 0x10433819 */
  if (C.zf) goto L_10433819;
  /* 10433811 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10433815 je 0x10433823 */
  if (C.zf) goto L_10433823;
  /* 10433817 jmp 0x10433827 */
  goto L_10433827;
L_10433819:;
  /* 10433819 mov dword ptr [0x104518f0], 1 */
  w32((uint32_t)(0x104518f0), (0x1u));
L_10433823:;
  /* 10433823 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_10433827:;
  /* 10433827 jmp 0x10433a50 */
  goto L_10433a50;
L_1043382c:;
  /* 1043382c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1043382f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10433832 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10433836 je 0x10433840 */
  if (C.zf) goto L_10433840;
  /* 10433838 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043383c je 0x1043384a */
  if (C.zf) goto L_1043384a;
  /* 1043383e jmp 0x1043384e */
  goto L_1043384e;
L_10433840:;
  /* 10433840 mov dword ptr [0x104518f0], 1 */
  w32((uint32_t)(0x104518f0), (0x1u));
L_1043384a:;
  /* 1043384a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_1043384e:;
  /* 1043384e jmp 0x10433a50 */
  goto L_10433a50;
L_10433853:;
  /* 10433853 push 0x1044d9fc */
  push32((uint32_t)(0x1044d9fcu));
  /* 10433858 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043385b push ecx */
  push32((uint32_t)(ECX));
  /* 1043385c call 0x104340b0 */
  push32(0x10433861u); f_104340b0();
  /* 10433861 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10433864 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10433866 jne 0x10433873 */
  if (!C.zf) goto L_10433873;
  /* 10433868 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043386b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1043386e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10433871 jmp 0x10433891 */
  goto L_10433891;
L_10433873:;
  /* 10433873 push 0x1044d9f8 */
  push32((uint32_t)(0x1044d9f8u));
  /* 10433878 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043387b push eax */
  push32((uint32_t)(EAX));
  /* 1043387c call 0x104340b0 */
  push32(0x10433881u); f_104340b0();
  /* 10433881 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10433884 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10433886 jne 0x10433891 */
  if (!C.zf) goto L_10433891;
  /* 10433888 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043388b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1043388e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10433891:;
  /* 10433891 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 10433895 jmp 0x10433a50 */
  goto L_10433a50;
L_1043389a:;
  /* 1043389a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1043389d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104338a1 jg 0x104338b1 */
  if ((!C.zf&&C.sf==C.of)) goto L_104338b1;
  /* 104338a3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104338a6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 104338ac mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 104338af jmp 0x104338bd */
  goto L_104338bd;
L_104338b1:;
  /* 104338b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104338b4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 104338ba mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_104338bd:;
  /* 104338bd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104338c1 jle 0x10433964 */
  if ((C.zf||C.sf!=C.of)) goto L_10433964;
  /* 104338c7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104338ca cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104338cd jbe 0x10433964 */
  if ((C.cf||C.zf)) goto L_10433964;
  /* 104338d3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104338d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104338d8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104338da mov ecx, dword ptr [0x1044fc98] */
  ECX = (r32((uint32_t)(0x1044fc98)));
  /* 104338e0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104338e2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 104338e6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 104338ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104338ee je 0x10433927 */
  if (C.zf) goto L_10433927;
  /* 104338f0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104338f3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104338f6 jbe 0x10433927 */
  if ((C.cf||C.zf)) goto L_10433927;
  /* 104338f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104338fb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104338fd mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10433900 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10433902 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10433904 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10433907 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10433909 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1043390c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1043390f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10433911 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10433914 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10433917 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1043391a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1043391d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1043391f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10433922 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10433925 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10433927:;
  /* 10433927 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1043392a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1043392c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1043392f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10433931 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10433933 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10433936 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10433938 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1043393b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1043393e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10433940 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10433943 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10433946 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10433949 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1043394c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1043394e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10433951 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10433954 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10433956 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10433959 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1043395c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1043395f jmp 0x104338bd */
  goto L_104338bd;
L_10433964:;
  /* 10433964 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10433967 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1043396a jmp 0x10433686 */
  goto L_10433686;
L_1043396f:;
  /* 1043396f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10433972 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10433975 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10433977 je 0x10433a42 */
  if (C.zf) goto L_10433a42;
  /* 1043397d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10433980 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10433983 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10433986:;
  /* 10433986 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10433989 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1043398c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1043398e je 0x10433a40 */
  if (C.zf) goto L_10433a40;
  /* 10433994 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10433997 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043399a je 0x10433a40 */
  if (C.zf) goto L_10433a40;
  /* 104339a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104339a3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104339a6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104339a9 jne 0x104339b9 */
  if (!C.zf) goto L_104339b9;
  /* 104339ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104339ae add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104339b1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 104339b4 jmp 0x10433a40 */
  goto L_10433a40;
L_104339b9:;
  /* 104339b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104339bc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104339be mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104339c0 mov edx, dword ptr [0x1044fc98] */
  EDX = (r32((uint32_t)(0x1044fc98)));
  /* 104339c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104339c8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 104339cc and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 104339d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104339d3 je 0x10433a0c */
  if (C.zf) goto L_10433a0c;
  /* 104339d5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104339d8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104339db jbe 0x10433a0c */
  if ((C.cf||C.zf)) goto L_10433a0c;
  /* 104339dd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104339e0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104339e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104339e5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104339e7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 104339e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104339ec mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104339ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104339f1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104339f4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 104339f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104339f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104339fc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104339ff mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10433a02 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10433a04 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10433a07 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10433a0a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10433a0c:;
  /* 10433a0c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10433a0f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10433a11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10433a14 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10433a16 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10433a18 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10433a1b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10433a1d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10433a20 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10433a23 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10433a25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10433a28 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10433a2b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10433a2e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10433a31 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10433a33 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10433a36 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10433a39 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10433a3b jmp 0x10433986 */
  goto L_10433986;
L_10433a40:;
  /* 10433a40 jmp 0x10433a4b */
  goto L_10433a4b;
L_10433a42:;
  /* 10433a42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10433a45 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10433a48 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10433a4b:;
  /* 10433a4b jmp 0x10433686 */
  goto L_10433686;
L_10433a50:;
  /* 10433a50 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10433a54 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10433a56 je 0x10433a7c */
  if (C.zf) goto L_10433a7c;
  /* 10433a58 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10433a5b push edx */
  push32((uint32_t)(EDX));
  /* 10433a5c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10433a5f push eax */
  push32((uint32_t)(EAX));
  /* 10433a60 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10433a63 push ecx */
  push32((uint32_t)(ECX));
  /* 10433a64 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10433a67 push edx */
  push32((uint32_t)(EDX));
  /* 10433a68 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10433a6b push eax */
  push32((uint32_t)(EAX));
  /* 10433a6c call 0x10432eb0 */
  push32(0x10433a71u); f_10432eb0();
  /* 10433a71 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10433a74 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10433a77 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10433a7a jmp 0x10433af7 */
  goto L_10433af7;
L_10433a7c:;
  /* 10433a7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10433a7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10433a81 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10433a83 mov ecx, dword ptr [0x1044fc98] */
  ECX = (r32((uint32_t)(0x1044fc98)));
  /* 10433a89 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10433a8b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10433a8f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10433a95 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10433a97 je 0x10433ac8 */
  if (C.zf) goto L_10433ac8;
  /* 10433a99 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10433a9c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10433a9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10433aa1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10433aa3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10433aa5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10433aa8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10433aaa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10433aad mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10433ab0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10433ab2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10433ab5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10433ab8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10433abb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10433abe mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10433ac0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10433ac3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10433ac6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10433ac8:;
  /* 10433ac8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10433acb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10433acd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10433ad0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10433ad2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10433ad4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10433ad7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10433ad9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10433adc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10433adf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10433ae1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10433ae4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10433ae7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10433aea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10433aed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10433aef sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10433af2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10433af5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10433af7:;
  /* 10433af7 jmp 0x10433686 */
  goto L_10433686;
L_10433afc:;
  /* 10433afc mov esp, ebp */
  ESP = (EBP);
  /* 10433afe pop ebp */
  EBP = (pop32());
  /* 10433aff ret  */
  ESPCHK(0x10433680u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ba0 @ 0x10433ba0 (650 bytes, 178 insns) */
void f_10433ba0(void) {
  FTRACE(0x10433ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10433ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 10433ba1 mov ebp, esp */
  EBP = (ESP);
  /* 10433ba3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10433ba9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10433bad jne 0x10433d09 */
  if (!C.zf) goto L_10433d09;
  /* 10433bb3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10433bb6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 10433bbc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 10433bc2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10433bc5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10433bcc mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 10433bd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10433bd8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10433bde push edx */
  push32((uint32_t)(EDX));
  /* 10433bdf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10433be2 push eax */
  push32((uint32_t)(EAX));
  /* 10433be3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10433be6 push ecx */
  push32((uint32_t)(ECX));
  /* 10433be7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10433bea push edx */
  push32((uint32_t)(EDX));
  /* 10433beb call 0x10434fc0 */
  push32(0x10433bf0u); f_10434fc0();
  /* 10433bf0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10433bf3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10433bf6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10433bfa jne 0x10433c8f */
  if (!C.zf) goto L_10433c8f;
  /* 10433c00 call dword ptr [0x10454338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454338))), 0x10433c06u);
  /* 10433c06 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10433c09 je 0x10433c10 */
  if (C.zf) goto L_10433c10;
  /* 10433c0b jmp 0x10433ced */
  goto L_10433ced;
L_10433c10:;
  /* 10433c10 push 0 */
  push32((uint32_t)(0x0u));
  /* 10433c12 push 0 */
  push32((uint32_t)(0x0u));
  /* 10433c14 push 0 */
  push32((uint32_t)(0x0u));
  /* 10433c16 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10433c19 push eax */
  push32((uint32_t)(EAX));
  /* 10433c1a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10433c1d push ecx */
  push32((uint32_t)(ECX));
  /* 10433c1e call 0x10434fc0 */
  push32(0x10433c23u); f_10434fc0();
  /* 10433c23 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10433c26 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 10433c2c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10433c33 jne 0x10433c3a */
  if (!C.zf) goto L_10433c3a;
  /* 10433c35 jmp 0x10433ced */
  goto L_10433ced;
L_10433c3a:;
  /* 10433c3a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 10433c3c push 0x1044da04 */
  push32((uint32_t)(0x1044da04u));
  /* 10433c41 push 2 */
  push32((uint32_t)(0x2u));
  /* 10433c43 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10433c49 push edx */
  push32((uint32_t)(EDX));
  /* 10433c4a call 0x104259e0 */
  push32(0x10433c4fu); f_104259e0();
  /* 10433c4f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10433c52 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10433c55 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10433c59 jne 0x10433c60 */
  if (!C.zf) goto L_10433c60;
  /* 10433c5b jmp 0x10433ced */
  goto L_10433ced;
L_10433c60:;
  /* 10433c60 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10433c67 push 0 */
  push32((uint32_t)(0x0u));
  /* 10433c69 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 10433c6f push eax */
  push32((uint32_t)(EAX));
  /* 10433c70 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10433c73 push ecx */
  push32((uint32_t)(ECX));
  /* 10433c74 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10433c77 push edx */
  push32((uint32_t)(EDX));
  /* 10433c78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10433c7b push eax */
  push32((uint32_t)(EAX));
  /* 10433c7c call 0x10434fc0 */
  push32(0x10433c81u); f_10434fc0();
  /* 10433c81 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10433c84 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10433c87 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10433c8b jne 0x10433c8f */
  if (!C.zf) goto L_10433c8f;
  /* 10433c8d jmp 0x10433ced */
  goto L_10433ced;
L_10433c8f:;
  /* 10433c8f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10433c91 push 0x1044da04 */
  push32((uint32_t)(0x1044da04u));
  /* 10433c96 push 2 */
  push32((uint32_t)(0x2u));
  /* 10433c98 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10433c9b push ecx */
  push32((uint32_t)(ECX));
  /* 10433c9c call 0x104259e0 */
  push32(0x10433ca1u); f_104259e0();
  /* 10433ca1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10433ca4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 10433caa mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10433cac mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10433cb2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10433cb5 jne 0x10433cb9 */
  if (!C.zf) goto L_10433cb9;
  /* 10433cb7 jmp 0x10433ced */
  goto L_10433ced;
L_10433cb9:;
  /* 10433cb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10433cbc push ecx */
  push32((uint32_t)(ECX));
  /* 10433cbd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10433cc0 push edx */
  push32((uint32_t)(EDX));
  /* 10433cc1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10433cc7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10433cc9 push ecx */
  push32((uint32_t)(ECX));
  /* 10433cca call 0x10429200 */
  push32(0x10433ccfu); f_10429200();
  /* 10433ccf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10433cd2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10433cd6 je 0x10433ce6 */
  if (C.zf) goto L_10433ce6;
  /* 10433cd8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10433cda mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10433cdd push edx */
  push32((uint32_t)(EDX));
  /* 10433cde call 0x10426470 */
  push32(0x10433ce3u); f_10426470();
  /* 10433ce3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10433ce6:;
  /* 10433ce6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10433ce8 jmp 0x10433e26 */
  goto L_10433e26;
L_10433ced:;
  /* 10433ced cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10433cf1 je 0x10433d01 */
  if (C.zf) goto L_10433d01;
  /* 10433cf3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10433cf5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10433cf8 push eax */
  push32((uint32_t)(EAX));
  /* 10433cf9 call 0x10426470 */
  push32(0x10433cfeu); f_10426470();
  /* 10433cfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10433d01:;
  /* 10433d01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10433d04 jmp 0x10433e26 */
  goto L_10433e26;
L_10433d09:;
  /* 10433d09 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10433d0d jne 0x10433e23 */
  if (!C.zf) goto L_10433e23;
  /* 10433d13 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 10433d1d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10433d20 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10433d26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10433d28 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10433d2e push edx */
  push32((uint32_t)(EDX));
  /* 10433d2f push 0x10451808 */
  push32((uint32_t)(0x10451808u));
  /* 10433d34 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10433d37 push eax */
  push32((uint32_t)(EAX));
  /* 10433d38 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10433d3b push ecx */
  push32((uint32_t)(ECX));
  /* 10433d3c call 0x10434e20 */
  push32(0x10433d41u); f_10434e20();
  /* 10433d41 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10433d44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10433d46 jne 0x10433d50 */
  if (!C.zf) goto L_10433d50;
  /* 10433d48 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10433d4b jmp 0x10433e26 */
  goto L_10433e26;
L_10433d50:;
  /* 10433d50 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10433d56 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10433d59 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 10433d63 jmp 0x10433d74 */
  goto L_10433d74;
L_10433d65:;
  /* 10433d65 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10433d6b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10433d6e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_10433d74:;
  /* 10433d74 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10433d7b jge 0x10433e1f */
  if ((C.sf==C.of)) goto L_10433e1f;
  /* 10433d81 cmp dword ptr [0x1044fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1044fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10433d88 jle 0x10433dbb */
  if ((C.zf||C.sf!=C.of)) goto L_10433dbb;
  /* 10433d8a push 4 */
  push32((uint32_t)(0x4u));
  /* 10433d8c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10433d92 mov dl, byte ptr [ecx*2 + 0x10451808] */
  DL = (r8((uint32_t)(ECX*2 + 0x10451808)));
  /* 10433d99 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10433d9f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10433da5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10433daa push eax */
  push32((uint32_t)(EAX));
  /* 10433dab call 0x1042b9f0 */
  push32(0x10433db0u); f_1042b9f0();
  /* 10433db0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10433db3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10433db9 jmp 0x10433dee */
  goto L_10433dee;
L_10433dbb:;
  /* 10433dbb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10433dc1 mov dl, byte ptr [ecx*2 + 0x10451808] */
  DL = (r8((uint32_t)(ECX*2 + 0x10451808)));
  /* 10433dc8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10433dce mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10433dd4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10433dd9 mov ecx, dword ptr [0x1044fc98] */
  ECX = (r32((uint32_t)(0x1044fc98)));
  /* 10433ddf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10433de1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10433de5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10433de8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_10433dee:;
  /* 10433dee cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10433df5 je 0x10433e18 */
  if (C.zf) goto L_10433e18;
  /* 10433df7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10433dfd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10433e00 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10433e03 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 10433e0a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10433e0e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10433e14 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10433e16 jmp 0x10433e1a */
  goto L_10433e1a;
L_10433e18:;
  /* 10433e18 jmp 0x10433e1f */
  goto L_10433e1f;
L_10433e1a:;
  /* 10433e1a jmp 0x10433d65 */
  goto L_10433d65;
L_10433e1f:;
  /* 10433e1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10433e21 jmp 0x10433e26 */
  goto L_10433e26;
L_10433e23:;
  /* 10433e23 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10433e26:;
  /* 10433e26 mov esp, ebp */
  ESP = (EBP);
  /* 10433e28 pop ebp */
  EBP = (pop32());
  /* 10433e29 ret  */
  ESPCHK(0x10433ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013e30 @ 0x10433e30 (10 bytes, 5 insns) */
void f_10433e30(void) {
  FTRACE(0x10433e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10433e30 push ebp */
  push32((uint32_t)(EBP));
  /* 10433e31 mov ebp, esp */
  EBP = (ESP);
  /* 10433e33 mov eax, dword ptr [0x10450d88] */
  EAX = (r32((uint32_t)(0x10450d88)));
  /* 10433e38 pop ebp */
  EBP = (pop32());
  /* 10433e39 ret  */
  ESPCHK(0x10433e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10013e40 @ 0x10433e40 (575 bytes, 196 insns) */
void f_10433e40(void) {
  FTRACE(0x10433e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10433e40 push ebp */
  push32((uint32_t)(EBP));
  /* 10433e41 mov ebp, esp */
  EBP = (ESP);
  /* 10433e43 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10433e45 push 0x1044da10 */
  push32((uint32_t)(0x1044da10u));
  /* 10433e4a push 0x1042eae8 */
  push32((uint32_t)(0x1042eae8u));
  /* 10433e4f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10433e55 push eax */
  push32((uint32_t)(EAX));
  /* 10433e56 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10433e5d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10433e60 push ebx */
  push32((uint32_t)(EBX));
  /* 10433e61 push esi */
  push32((uint32_t)(ESI));
  /* 10433e62 push edi */
  push32((uint32_t)(EDI));
  /* 10433e63 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10433e66 cmp dword ptr [0x10451814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10451814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10433e6d jne 0x10433ebe */
  if (!C.zf) goto L_10433ebe;
  /* 10433e6f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10433e72 push eax */
  push32((uint32_t)(EAX));
  /* 10433e73 push 1 */
  push32((uint32_t)(0x1u));
  /* 10433e75 push 0x1044d144 */
  push32((uint32_t)(0x1044d144u));
  /* 10433e7a push 1 */
  push32((uint32_t)(0x1u));
  /* 10433e7c call dword ptr [0x104542c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542c4))), 0x10433e82u);
  /* 10433e82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10433e84 je 0x10433e92 */
  if (C.zf) goto L_10433e92;
  /* 10433e86 mov dword ptr [0x10451814], 1 */
  w32((uint32_t)(0x10451814), (0x1u));
  /* 10433e90 jmp 0x10433ebe */
  goto L_10433ebe;
L_10433e92:;
  /* 10433e92 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10433e95 push ecx */
  push32((uint32_t)(ECX));
  /* 10433e96 push 1 */
  push32((uint32_t)(0x1u));
  /* 10433e98 push 0x1044d140 */
  push32((uint32_t)(0x1044d140u));
  /* 10433e9d push 1 */
  push32((uint32_t)(0x1u));
  /* 10433e9f push 0 */
  push32((uint32_t)(0x0u));
  /* 10433ea1 call dword ptr [0x104542d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542d4))), 0x10433ea7u);
  /* 10433ea7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10433ea9 je 0x10433eb7 */
  if (C.zf) goto L_10433eb7;
  /* 10433eab mov dword ptr [0x10451814], 2 */
  w32((uint32_t)(0x10451814), (0x2u));
  /* 10433eb5 jmp 0x10433ebe */
  goto L_10433ebe;
L_10433eb7:;
  /* 10433eb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10433eb9 jmp 0x10434099 */
  goto L_10434099;
L_10433ebe:;
  /* 10433ebe cmp dword ptr [0x10451814], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10451814))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10433ec5 jne 0x10433ee2 */
  if (!C.zf) goto L_10433ee2;
  /* 10433ec7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10433eca push edx */
  push32((uint32_t)(EDX));
  /* 10433ecb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10433ece push eax */
  push32((uint32_t)(EAX));
  /* 10433ecf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10433ed2 push ecx */
  push32((uint32_t)(ECX));
  /* 10433ed3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10433ed6 push edx */
  push32((uint32_t)(EDX));
  /* 10433ed7 call dword ptr [0x104542c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542c4))), 0x10433eddu);
  /* 10433edd jmp 0x10434099 */
  goto L_10434099;
L_10433ee2:;
  /* 10433ee2 cmp dword ptr [0x10451814], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10451814))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10433ee9 jne 0x10434097 */
  if (!C.zf) goto L_10434097;
  /* 10433eef cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10433ef3 jne 0x10433efd */
  if (!C.zf) goto L_10433efd;
  /* 10433ef5 mov eax, dword ptr [0x10451788] */
  EAX = (r32((uint32_t)(0x10451788)));
  /* 10433efa mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10433efd:;
  /* 10433efd push 0 */
  push32((uint32_t)(0x0u));
  /* 10433eff push 0 */
  push32((uint32_t)(0x0u));
  /* 10433f01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10433f03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10433f05 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10433f08 push ecx */
  push32((uint32_t)(ECX));
  /* 10433f09 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10433f0c push edx */
  push32((uint32_t)(EDX));
  /* 10433f0d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10433f12 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10433f15 push eax */
  push32((uint32_t)(EAX));
  /* 10433f16 call dword ptr [0x10454364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454364))), 0x10433f1cu);
  /* 10433f1c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10433f1f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10433f23 jne 0x10433f2c */
  if (!C.zf) goto L_10433f2c;
  /* 10433f25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10433f27 jmp 0x10434099 */
  goto L_10434099;
L_10433f2c:;
  /* 10433f2c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10433f33 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10433f36 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10433f39 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10433f3b call 0x10428b80 */
  push32(0x10433f40u); f_10428b80();
  /* 10433f40 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10433f43 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10433f46 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10433f49 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10433f4c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10433f4f push edx */
  push32((uint32_t)(EDX));
  /* 10433f50 push 0 */
  push32((uint32_t)(0x0u));
  /* 10433f52 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10433f55 push eax */
  push32((uint32_t)(EAX));
  /* 10433f56 call 0x10429750 */
  push32(0x10433f5bu); f_10429750();
  /* 10433f5b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10433f5e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10433f65 jmp 0x10433f7e */
  goto L_10433f7e;
  /* 10433f67 mov eax, 1 */
  EAX = (0x1u);
  /* 10433f6c ret  */
  ESPCHK(0x10433e40u, _esp0);
  ESP += 4; return;
  /* 10433f6d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10433f70 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10433f77 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10433f7e:;
  /* 10433f7e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10433f82 jne 0x10433f8b */
  if (!C.zf) goto L_10433f8b;
  /* 10433f84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10433f86 jmp 0x10434099 */
  goto L_10434099;
L_10433f8b:;
  /* 10433f8b push 0 */
  push32((uint32_t)(0x0u));
  /* 10433f8d push 0 */
  push32((uint32_t)(0x0u));
  /* 10433f8f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10433f92 push ecx */
  push32((uint32_t)(ECX));
  /* 10433f93 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10433f96 push edx */
  push32((uint32_t)(EDX));
  /* 10433f97 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10433f9a push eax */
  push32((uint32_t)(EAX));
  /* 10433f9b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10433f9e push ecx */
  push32((uint32_t)(ECX));
  /* 10433f9f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10433fa4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10433fa7 push edx */
  push32((uint32_t)(EDX));
  /* 10433fa8 call dword ptr [0x10454364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454364))), 0x10433faeu);
  /* 10433fae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10433fb0 jne 0x10433fb9 */
  if (!C.zf) goto L_10433fb9;
  /* 10433fb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10433fb4 jmp 0x10434099 */
  goto L_10434099;
L_10433fb9:;
  /* 10433fb9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10433fc0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10433fc3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 10433fc7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10433fca and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10433fcc call 0x10428b80 */
  push32(0x10433fd1u); f_10428b80();
  /* 10433fd1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10433fd4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10433fd7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10433fda mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10433fdd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10433fe4 jmp 0x10433ffd */
  goto L_10433ffd;
  /* 10433fe6 mov eax, 1 */
  EAX = (0x1u);
  /* 10433feb ret  */
  ESPCHK(0x10433e40u, _esp0);
  ESP += 4; return;
  /* 10433fec mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10433fef mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10433ff6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10433ffd:;
  /* 10433ffd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434001 jne 0x1043400a */
  if (!C.zf) goto L_1043400a;
  /* 10434003 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10434005 jmp 0x10434099 */
  goto L_10434099;
L_1043400a:;
  /* 1043400a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043400e jne 0x10434019 */
  if (!C.zf) goto L_10434019;
  /* 10434010 mov edx, dword ptr [0x10451778] */
  EDX = (r32((uint32_t)(0x10451778)));
  /* 10434016 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10434019:;
  /* 10434019 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1043401c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1043401f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 10434025 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10434028 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1043402b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 10434032 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10434035 push ecx */
  push32((uint32_t)(ECX));
  /* 10434036 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10434039 push edx */
  push32((uint32_t)(EDX));
  /* 1043403a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1043403d push eax */
  push32((uint32_t)(EAX));
  /* 1043403e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10434041 push ecx */
  push32((uint32_t)(ECX));
  /* 10434042 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10434045 push edx */
  push32((uint32_t)(EDX));
  /* 10434046 call dword ptr [0x104542d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542d4))), 0x1043404cu);
  /* 1043404c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1043404f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10434052 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10434055 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10434057 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 1043405c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434062 je 0x10434078 */
  if (C.zf) goto L_10434078;
  /* 10434064 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10434067 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1043406a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1043406c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10434070 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434076 je 0x1043407c */
  if (C.zf) goto L_1043407c;
L_10434078:;
  /* 10434078 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1043407a jmp 0x10434099 */
  goto L_10434099;
L_1043407c:;
  /* 1043407c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1043407f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10434081 push eax */
  push32((uint32_t)(EAX));
  /* 10434082 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10434085 push ecx */
  push32((uint32_t)(ECX));
  /* 10434086 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10434089 push edx */
  push32((uint32_t)(EDX));
  /* 1043408a call 0x1042d8d0 */
  push32(0x1043408fu); f_1042d8d0();
  /* 1043408f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10434092 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10434095 jmp 0x10434099 */
  goto L_10434099;
L_10434097:;
  /* 10434097 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10434099:;
  /* 10434099 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1043409c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1043409f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 104340a6 pop edi */
  EDI = (pop32());
  /* 104340a7 pop esi */
  ESI = (pop32());
  /* 104340a8 pop ebx */
  EBX = (pop32());
  /* 104340a9 mov esp, ebp */
  ESP = (EBP);
  /* 104340ab pop ebp */
  EBP = (pop32());
  /* 104340ac ret  */
  ESPCHK(0x10433e40u, _esp0);
  ESP += 4; return;
}

/* FUN_100140b0 @ 0x104340b0 (208 bytes, 85 insns) */
void f_104340b0(void) {
  FTRACE(0x104340b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104340b0 push ebp */
  push32((uint32_t)(EBP));
  /* 104340b1 mov ebp, esp */
  EBP = (ESP);
  /* 104340b3 push edi */
  push32((uint32_t)(EDI));
  /* 104340b4 push esi */
  push32((uint32_t)(ESI));
  /* 104340b5 push ebx */
  push32((uint32_t)(EBX));
  /* 104340b6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 104340b9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 104340bc lea eax, [0x10451770] */
  EAX = ((uint32_t)(0x10451770));
  /* 104340c2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104340c6 jne 0x10434103 */
  if (!C.zf) goto L_10434103;
  /* 104340c8 mov al, 0xff */
  AL = (0xffu);
  /* 104340ca mov edi, edi */
  EDI = (EDI);
L_104340cc:;
  /* 104340cc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 104340ce je 0x104340fe */
  if (C.zf) goto L_104340fe;
  /* 104340d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104340d2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 104340d3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 104340d5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 104340d6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104340d8 je 0x104340cc */
  if (C.zf) goto L_104340cc;
  /* 104340da sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104340dc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104340de sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104340e0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 104340e3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 104340e5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 104340e7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 104340e9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104340eb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104340ed sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104340ef and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 104340f2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 104340f4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 104340f6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104340f8 je 0x104340cc */
  if (C.zf) goto L_104340cc;
  /* 104340fa sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104340fc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_104340fe:;
  /* 104340fe movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10434101 jmp 0x1043417b */
  goto L_1043417b;
L_10434103:;
  /* 10434103 lock inc dword ptr [0x10451904] */
  x86_unimpl("lock inc @ 0x10434103");
  /* 1043410a cmp dword ptr [0x104518f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104518f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434111 jg 0x10434117 */
  if ((!C.zf&&C.sf==C.of)) goto L_10434117;
  /* 10434113 push 0 */
  push32((uint32_t)(0x0u));
  /* 10434115 jmp 0x1043412c */
  goto L_1043412c;
L_10434117:;
  /* 10434117 lock dec dword ptr [0x10451904] */
  x86_unimpl("lock dec @ 0x10434117");
  /* 1043411e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10434120 call 0x104293e0 */
  push32(0x10434125u); f_104293e0();
  /* 10434125 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_1043412c:;
  /* 1043412c mov eax, 0xff */
  EAX = (0xffu);
  /* 10434131 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10434133 nop  */
  /* nop */
L_10434134:;
  /* 10434134 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10434136 je 0x1043415f */
  if (C.zf) goto L_1043415f;
  /* 10434138 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1043413a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1043413b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1043413d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1043413e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10434140 je 0x10434134 */
  if (C.zf) goto L_10434134;
  /* 10434142 push eax */
  push32((uint32_t)(EAX));
  /* 10434143 push ebx */
  push32((uint32_t)(EBX));
  /* 10434144 call 0x10435220 */
  push32(0x10434149u); f_10435220();
  /* 10434149 mov ebx, eax */
  EBX = (EAX);
  /* 1043414b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043414e call 0x10435220 */
  push32(0x10434153u); f_10435220();
  /* 10434153 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10434156 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10434158 je 0x10434134 */
  if (C.zf) goto L_10434134;
  /* 1043415a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1043415c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1043415f:;
  /* 1043415f mov ebx, eax */
  EBX = (EAX);
  /* 10434161 pop eax */
  EAX = (pop32());
  /* 10434162 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10434164 jne 0x1043416f */
  if (!C.zf) goto L_1043416f;
  /* 10434166 lock dec dword ptr [0x10451904] */
  x86_unimpl("lock dec @ 0x10434166");
  /* 1043416d jmp 0x10434179 */
  goto L_10434179;
L_1043416f:;
  /* 1043416f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10434171 call 0x10429480 */
  push32(0x10434176u); f_10429480();
  /* 10434176 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10434179:;
  /* 10434179 mov eax, ebx */
  EAX = (EBX);
L_1043417b:;
  /* 1043417b pop ebx */
  EBX = (pop32());
  /* 1043417c pop esi */
  ESI = (pop32());
  /* 1043417d pop edi */
  EDI = (pop32());
  /* 1043417e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1043417f ret  */
  ESPCHK(0x104340b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014180 @ 0x10434180 (257 bytes, 103 insns) */
void f_10434180(void) {
  FTRACE(0x10434180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10434180 push ebp */
  push32((uint32_t)(EBP));
  /* 10434181 mov ebp, esp */
  EBP = (ESP);
  /* 10434183 push edi */
  push32((uint32_t)(EDI));
  /* 10434184 push esi */
  push32((uint32_t)(ESI));
  /* 10434185 push ebx */
  push32((uint32_t)(EBX));
  /* 10434186 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10434189 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1043418b je 0x1043427a */
  if (C.zf) goto L_1043427a;
  /* 10434191 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10434194 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10434197 lea eax, [0x10451770] */
  EAX = ((uint32_t)(0x10451770));
  /* 1043419d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104341a1 jne 0x104341f1 */
  if (!C.zf) goto L_104341f1;
  /* 104341a3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 104341a5 mov bl, 0x5a */
  BL = (0x5au);
  /* 104341a7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 104341a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_104341ac:;
  /* 104341ac mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 104341ae or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 104341b0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 104341b2 je 0x104341d5 */
  if (C.zf) goto L_104341d5;
  /* 104341b4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 104341b6 je 0x104341d5 */
  if (C.zf) goto L_104341d5;
  /* 104341b8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 104341b9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 104341ba cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104341bc jb 0x104341c4 */
  if (C.cf) goto L_104341c4;
  /* 104341be cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104341c0 ja 0x104341c4 */
  if ((!C.cf&&!C.zf)) goto L_104341c4;
  /* 104341c2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_104341c4:;
  /* 104341c4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104341c6 jb 0x104341ce */
  if (C.cf) goto L_104341ce;
  /* 104341c8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104341ca ja 0x104341ce */
  if ((!C.cf&&!C.zf)) goto L_104341ce;
  /* 104341cc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_104341ce:;
  /* 104341ce cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104341d0 jne 0x104341df */
  if (!C.zf) goto L_104341df;
  /* 104341d2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 104341d3 jne 0x104341ac */
  if (!C.zf) goto L_104341ac;
L_104341d5:;
  /* 104341d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104341d7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104341d9 je 0x1043427a */
  if (C.zf) goto L_1043427a;
L_104341df:;
  /* 104341df mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 104341e4 jb 0x1043427a */
  if (C.cf) goto L_1043427a;
  /* 104341ea neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 104341ec jmp 0x1043427a */
  goto L_1043427a;
L_104341f1:;
  /* 104341f1 lock inc dword ptr [0x10451904] */
  x86_unimpl("lock inc @ 0x104341f1");
  /* 104341f8 cmp dword ptr [0x104518f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104518f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104341ff jg 0x10434205 */
  if ((!C.zf&&C.sf==C.of)) goto L_10434205;
  /* 10434201 push 0 */
  push32((uint32_t)(0x0u));
  /* 10434203 jmp 0x1043421e */
  goto L_1043421e;
L_10434205:;
  /* 10434205 lock dec dword ptr [0x10451904] */
  x86_unimpl("lock dec @ 0x10434205");
  /* 1043420c mov ebx, ecx */
  EBX = (ECX);
  /* 1043420e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10434210 call 0x104293e0 */
  push32(0x10434215u); f_104293e0();
  /* 10434215 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1043421c mov ecx, ebx */
  ECX = (EBX);
L_1043421e:;
  /* 1043421e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10434220 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10434222 mov edi, edi */
  EDI = (EDI);
L_10434224:;
  /* 10434224 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10434226 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10434228 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1043422a je 0x1043424f */
  if (C.zf) goto L_1043424f;
  /* 1043422c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1043422e je 0x1043424f */
  if (C.zf) goto L_1043424f;
  /* 10434230 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10434231 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10434232 push ecx */
  push32((uint32_t)(ECX));
  /* 10434233 push eax */
  push32((uint32_t)(EAX));
  /* 10434234 push ebx */
  push32((uint32_t)(EBX));
  /* 10434235 call 0x10435220 */
  push32(0x1043423au); f_10435220();
  /* 1043423a mov ebx, eax */
  EBX = (EAX);
  /* 1043423c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043423f call 0x10435220 */
  push32(0x10434244u); f_10435220();
  /* 10434244 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10434247 pop ecx */
  ECX = (pop32());
  /* 10434248 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043424a jne 0x10434255 */
  if (!C.zf) goto L_10434255;
  /* 1043424c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1043424d jne 0x10434224 */
  if (!C.zf) goto L_10434224;
L_1043424f:;
  /* 1043424f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10434251 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434253 je 0x1043425e */
  if (C.zf) goto L_1043425e;
L_10434255:;
  /* 10434255 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1043425a jb 0x1043425e */
  if (C.cf) goto L_1043425e;
  /* 1043425c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_1043425e:;
  /* 1043425e pop eax */
  EAX = (pop32());
  /* 1043425f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10434261 jne 0x1043426c */
  if (!C.zf) goto L_1043426c;
  /* 10434263 lock dec dword ptr [0x10451904] */
  x86_unimpl("lock dec @ 0x10434263");
  /* 1043426a jmp 0x1043427a */
  goto L_1043427a;
L_1043426c:;
  /* 1043426c mov ebx, ecx */
  EBX = (ECX);
  /* 1043426e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10434270 call 0x10429480 */
  push32(0x10434275u); f_10429480();
  /* 10434275 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10434278 mov ecx, ebx */
  ECX = (EBX);
L_1043427a:;
  /* 1043427a mov eax, ecx */
  EAX = (ECX);
  /* 1043427c pop ebx */
  EBX = (pop32());
  /* 1043427d pop esi */
  ESI = (pop32());
  /* 1043427e pop edi */
  EDI = (pop32());
  /* 1043427f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10434280 ret  */
  ESPCHK(0x10434180u, _esp0);
  ESP += 4; return;
}

/* FUN_10014290 @ 0x10434290 (255 bytes, 88 insns) */
void f_10434290(void) {
  FTRACE(0x10434290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10434290 push ebp */
  push32((uint32_t)(EBP));
  /* 10434291 mov ebp, esp */
  EBP = (ESP);
  /* 10434293 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10434296:;
  /* 10434296 cmp dword ptr [0x1044fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1044fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043429d jle 0x104342b6 */
  if ((C.zf||C.sf!=C.of)) goto L_104342b6;
  /* 1043429f push 8 */
  push32((uint32_t)(0x8u));
  /* 104342a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104342a4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104342a6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104342a8 push ecx */
  push32((uint32_t)(ECX));
  /* 104342a9 call 0x1042b9f0 */
  push32(0x104342aeu); f_1042b9f0();
  /* 104342ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104342b1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 104342b4 jmp 0x104342cf */
  goto L_104342cf;
L_104342b6:;
  /* 104342b6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104342b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104342bb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104342bd mov ecx, dword ptr [0x1044fc98] */
  ECX = (r32((uint32_t)(0x1044fc98)));
  /* 104342c3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104342c5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 104342c9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 104342cc mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_104342cf:;
  /* 104342cf cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104342d3 je 0x104342e0 */
  if (C.zf) goto L_104342e0;
  /* 104342d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104342d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104342db mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104342de jmp 0x10434296 */
  goto L_10434296;
L_104342e0:;
  /* 104342e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104342e3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104342e5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104342e7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104342ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104342ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104342f0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104342f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104342f6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104342f9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104342fd je 0x10434305 */
  if (C.zf) goto L_10434305;
  /* 104342ff cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434303 jne 0x10434318 */
  if (!C.zf) goto L_10434318;
L_10434305:;
  /* 10434305 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10434308 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1043430a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1043430c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1043430f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10434312 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10434315 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10434318:;
  /* 10434318 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1043431f:;
  /* 1043431f cmp dword ptr [0x1044fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1044fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434326 jle 0x1043433b */
  if ((C.zf||C.sf!=C.of)) goto L_1043433b;
  /* 10434328 push 4 */
  push32((uint32_t)(0x4u));
  /* 1043432a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1043432d push edx */
  push32((uint32_t)(EDX));
  /* 1043432e call 0x1042b9f0 */
  push32(0x10434333u); f_1042b9f0();
  /* 10434333 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10434336 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10434339 jmp 0x10434350 */
  goto L_10434350;
L_1043433b:;
  /* 1043433b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1043433e mov ecx, dword ptr [0x1044fc98] */
  ECX = (r32((uint32_t)(0x1044fc98)));
  /* 10434344 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10434346 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1043434a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1043434d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10434350:;
  /* 10434350 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434354 je 0x1043437b */
  if (C.zf) goto L_1043437b;
  /* 10434356 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10434359 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1043435c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1043435f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 10434363 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10434366 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10434369 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1043436b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1043436d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10434370 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10434373 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10434376 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10434379 jmp 0x1043431f */
  goto L_1043431f;
L_1043437b:;
  /* 1043437b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043437f jne 0x10434388 */
  if (!C.zf) goto L_10434388;
  /* 10434381 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10434384 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10434386 jmp 0x1043438b */
  goto L_1043438b;
L_10434388:;
  /* 10434388 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1043438b:;
  /* 1043438b mov esp, ebp */
  ESP = (EBP);
  /* 1043438d pop ebp */
  EBP = (pop32());
  /* 1043438e ret  */
  ESPCHK(0x10434290u, _esp0);
  ESP += 4; return;
}

/* FUN_10014390 @ 0x10434390 (17 bytes, 8 insns) */
void f_10434390(void) {
  FTRACE(0x10434390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10434390 push ebp */
  push32((uint32_t)(EBP));
  /* 10434391 mov ebp, esp */
  EBP = (ESP);
  /* 10434393 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10434396 push eax */
  push32((uint32_t)(EAX));
  /* 10434397 call 0x10434290 */
  push32(0x1043439cu); f_10434290();
  /* 1043439c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043439f pop ebp */
  EBP = (pop32());
  /* 104343a0 ret  */
  ESPCHK(0x10434390u, _esp0);
  ESP += 4; return;
}

/* FUN_100143b0 @ 0x104343b0 (297 bytes, 106 insns) */
void f_104343b0(void) {
  FTRACE(0x104343b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104343b0 push ebp */
  push32((uint32_t)(EBP));
  /* 104343b1 mov ebp, esp */
  EBP = (ESP);
  /* 104343b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104343b6 push esi */
  push32((uint32_t)(ESI));
L_104343b7:;
  /* 104343b7 cmp dword ptr [0x1044fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1044fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104343be jle 0x104343d7 */
  if ((C.zf||C.sf!=C.of)) goto L_104343d7;
  /* 104343c0 push 8 */
  push32((uint32_t)(0x8u));
  /* 104343c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104343c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104343c7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104343c9 push ecx */
  push32((uint32_t)(ECX));
  /* 104343ca call 0x1042b9f0 */
  push32(0x104343cfu); f_1042b9f0();
  /* 104343cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104343d2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 104343d5 jmp 0x104343f0 */
  goto L_104343f0;
L_104343d7:;
  /* 104343d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104343da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104343dc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104343de mov ecx, dword ptr [0x1044fc98] */
  ECX = (r32((uint32_t)(0x1044fc98)));
  /* 104343e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104343e6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 104343ea and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 104343ed mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_104343f0:;
  /* 104343f0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104343f4 je 0x10434401 */
  if (C.zf) goto L_10434401;
  /* 104343f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104343f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104343fc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104343ff jmp 0x104343b7 */
  goto L_104343b7;
L_10434401:;
  /* 10434401 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10434404 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10434406 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10434408 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1043440b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043440e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10434411 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10434414 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10434417 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1043441a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043441e je 0x10434426 */
  if (C.zf) goto L_10434426;
  /* 10434420 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434424 jne 0x10434439 */
  if (!C.zf) goto L_10434439;
L_10434426:;
  /* 10434426 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10434429 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1043442b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1043442d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10434430 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10434433 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10434436 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10434439:;
  /* 10434439 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10434440 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10434447:;
  /* 10434447 cmp dword ptr [0x1044fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1044fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043444e jle 0x10434463 */
  if ((C.zf||C.sf!=C.of)) goto L_10434463;
  /* 10434450 push 4 */
  push32((uint32_t)(0x4u));
  /* 10434452 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10434455 push edx */
  push32((uint32_t)(EDX));
  /* 10434456 call 0x1042b9f0 */
  push32(0x1043445bu); f_1042b9f0();
  /* 1043445b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043445e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10434461 jmp 0x10434478 */
  goto L_10434478;
L_10434463:;
  /* 10434463 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10434466 mov ecx, dword ptr [0x1044fc98] */
  ECX = (r32((uint32_t)(0x1044fc98)));
  /* 1043446c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1043446e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10434472 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10434475 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_10434478:;
  /* 10434478 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043447c je 0x104344b9 */
  if (C.zf) goto L_104344b9;
  /* 1043447e push 0 */
  push32((uint32_t)(0x0u));
  /* 10434480 push 0xa */
  push32((uint32_t)(0xau));
  /* 10434482 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10434485 push eax */
  push32((uint32_t)(EAX));
  /* 10434486 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10434489 push ecx */
  push32((uint32_t)(ECX));
  /* 1043448a call 0x10435350 */
  push32(0x1043448fu); f_10435350();
  /* 1043448f mov ecx, eax */
  ECX = (EAX);
  /* 10434491 mov esi, edx */
  ESI = (EDX);
  /* 10434493 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10434496 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10434499 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1043449a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1043449c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1043449e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104344a1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 104344a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104344a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104344a9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104344ab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104344ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104344b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104344b4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 104344b7 jmp 0x10434447 */
  goto L_10434447;
L_104344b9:;
  /* 104344b9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104344bd jne 0x104344ce */
  if (!C.zf) goto L_104344ce;
  /* 104344bf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104344c2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 104344c4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104344c7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104344ca neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 104344cc jmp 0x104344d4 */
  goto L_104344d4;
L_104344ce:;
  /* 104344ce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104344d1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_104344d4:;
  /* 104344d4 pop esi */
  ESI = (pop32());
  /* 104344d5 mov esp, ebp */
  ESP = (EBP);
  /* 104344d7 pop ebp */
  EBP = (pop32());
  /* 104344d8 ret  */
  ESPCHK(0x104343b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100144e0 @ 0x104344e0 (61 bytes, 18 insns) */
void f_104344e0(void) {
  FTRACE(0x104344e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104344e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104344e1 mov ebp, esp */
  EBP = (ESP);
  /* 104344e3 cmp dword ptr [0x104518d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104518d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104344ea jne 0x1043451b */
  if (!C.zf) goto L_1043451b;
  /* 104344ec push 0xb */
  push32((uint32_t)(0xbu));
  /* 104344ee call 0x104293e0 */
  push32(0x104344f3u); f_104293e0();
  /* 104344f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104344f6 cmp dword ptr [0x104518d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104518d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104344fd jne 0x10434511 */
  if (!C.zf) goto L_10434511;
  /* 104344ff call 0x10434540 */
  push32(0x10434504u); f_10434540();
  /* 10434504 mov eax, dword ptr [0x104518d0] */
  EAX = (r32((uint32_t)(0x104518d0)));
  /* 10434509 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1043450c mov dword ptr [0x104518d0], eax */
  w32((uint32_t)(0x104518d0), (EAX));
L_10434511:;
  /* 10434511 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10434513 call 0x10429480 */
  push32(0x10434518u); f_10429480();
  /* 10434518 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1043451b:;
  /* 1043451b pop ebp */
  EBP = (pop32());
  /* 1043451c ret  */
  ESPCHK(0x104344e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014520 @ 0x10434520 (30 bytes, 11 insns) */
void f_10434520(void) {
  FTRACE(0x10434520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10434520 push ebp */
  push32((uint32_t)(EBP));
  /* 10434521 mov ebp, esp */
  EBP = (ESP);
  /* 10434523 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10434525 call 0x104293e0 */
  push32(0x1043452au); f_104293e0();
  /* 1043452a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043452d call 0x10434540 */
  push32(0x10434532u); f_10434540();
  /* 10434532 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10434534 call 0x10429480 */
  push32(0x10434539u); f_10429480();
  /* 10434539 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043453c pop ebp */
  EBP = (pop32());
  /* 1043453d ret  */
  ESPCHK(0x10434520u, _esp0);
  ESP += 4; return;
}

/* FUN_10014540 @ 0x10434540 (939 bytes, 266 insns) */
void f_10434540(void) {
  FTRACE(0x10434540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10434540 push ebp */
  push32((uint32_t)(EBP));
  /* 10434541 mov ebp, esp */
  EBP = (ESP);
  /* 10434543 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10434546 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1043454d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1043454f call 0x104293e0 */
  push32(0x10434554u); f_104293e0();
  /* 10434554 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10434557 mov dword ptr [0x10451818], 0 */
  w32((uint32_t)(0x10451818), (0x0u));
  /* 10434561 mov dword ptr [0x10450e38], 0xffffffff */
  w32((uint32_t)(0x10450e38), (0xffffffffu));
  /* 1043456b mov eax, dword ptr [0x10450e38] */
  EAX = (r32((uint32_t)(0x10450e38)));
  /* 10434570 mov dword ptr [0x10450e28], eax */
  w32((uint32_t)(0x10450e28), (EAX));
  /* 10434575 push 0x1044da70 */
  push32((uint32_t)(0x1044da70u));
  /* 1043457a call 0x104353c0 */
  push32(0x1043457fu); f_104353c0();
  /* 1043457f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10434582 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10434585 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434589 jne 0x104346c3 */
  if (!C.zf) goto L_104346c3;
  /* 1043458f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10434591 call 0x10429480 */
  push32(0x10434596u); f_10429480();
  /* 10434596 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10434599 push 0x10451820 */
  push32((uint32_t)(0x10451820u));
  /* 1043459e call dword ptr [0x10454288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454288))), 0x104345a4u);
  /* 104345a4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104345a7 je 0x104346be */
  if (C.zf) goto L_104346be;
  /* 104345ad mov dword ptr [0x10451818], 1 */
  w32((uint32_t)(0x10451818), (0x1u));
  /* 104345b7 mov ecx, dword ptr [0x10451820] */
  ECX = (r32((uint32_t)(0x10451820)));
  /* 104345bd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104345c0 mov dword ptr [0x10450d90], ecx */
  w32((uint32_t)(0x10450d90), (ECX));
  /* 104345c6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104345c8 mov dx, word ptr [0x10451866] */
  DX = (r16((uint32_t)(0x10451866)));
  /* 104345cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104345d1 je 0x104345e9 */
  if (C.zf) goto L_104345e9;
  /* 104345d3 mov eax, dword ptr [0x10451874] */
  EAX = (r32((uint32_t)(0x10451874)));
  /* 104345d8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104345db mov ecx, dword ptr [0x10450d90] */
  ECX = (r32((uint32_t)(0x10450d90)));
  /* 104345e1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104345e3 mov dword ptr [0x10450d90], ecx */
  w32((uint32_t)(0x10450d90), (ECX));
L_104345e9:;
  /* 104345e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104345eb mov dx, word ptr [0x104518ba] */
  DX = (r16((uint32_t)(0x104518ba)));
  /* 104345f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104345f4 je 0x1043461e */
  if (C.zf) goto L_1043461e;
  /* 104345f6 cmp dword ptr [0x104518c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104518c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104345fd je 0x1043461e */
  if (C.zf) goto L_1043461e;
  /* 104345ff mov dword ptr [0x10450d94], 1 */
  w32((uint32_t)(0x10450d94), (0x1u));
  /* 10434609 mov eax, dword ptr [0x104518c8] */
  EAX = (r32((uint32_t)(0x104518c8)));
  /* 1043460e sub eax, dword ptr [0x10451874] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10451874))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10434614 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10434617 mov dword ptr [0x10450d98], eax */
  w32((uint32_t)(0x10450d98), (EAX));
  /* 1043461c jmp 0x10434632 */
  goto L_10434632;
L_1043461e:;
  /* 1043461e mov dword ptr [0x10450d94], 0 */
  w32((uint32_t)(0x10450d94), (0x0u));
  /* 10434628 mov dword ptr [0x10450d98], 0 */
  w32((uint32_t)(0x10450d98), (0x0u));
L_10434632:;
  /* 10434632 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10434635 push ecx */
  push32((uint32_t)(ECX));
  /* 10434636 push 0 */
  push32((uint32_t)(0x0u));
  /* 10434638 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1043463a mov edx, dword ptr [0x10450e1c] */
  EDX = (r32((uint32_t)(0x10450e1c)));
  /* 10434640 push edx */
  push32((uint32_t)(EDX));
  /* 10434641 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10434643 push 0x10451824 */
  push32((uint32_t)(0x10451824u));
  /* 10434648 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1043464d mov eax, dword ptr [0x10451788] */
  EAX = (r32((uint32_t)(0x10451788)));
  /* 10434652 push eax */
  push32((uint32_t)(EAX));
  /* 10434653 call dword ptr [0x10454364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454364))), 0x10434659u);
  /* 10434659 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1043465b je 0x1043466f */
  if (C.zf) goto L_1043466f;
  /* 1043465d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434661 jne 0x1043466f */
  if (!C.zf) goto L_1043466f;
  /* 10434663 mov ecx, dword ptr [0x10450e1c] */
  ECX = (r32((uint32_t)(0x10450e1c)));
  /* 10434669 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 1043466d jmp 0x10434678 */
  goto L_10434678;
L_1043466f:;
  /* 1043466f mov edx, dword ptr [0x10450e1c] */
  EDX = (r32((uint32_t)(0x10450e1c)));
  /* 10434675 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10434678:;
  /* 10434678 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1043467b push eax */
  push32((uint32_t)(EAX));
  /* 1043467c push 0 */
  push32((uint32_t)(0x0u));
  /* 1043467e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10434680 mov ecx, dword ptr [0x10450e20] */
  ECX = (r32((uint32_t)(0x10450e20)));
  /* 10434686 push ecx */
  push32((uint32_t)(ECX));
  /* 10434687 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10434689 push 0x10451878 */
  push32((uint32_t)(0x10451878u));
  /* 1043468e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10434693 mov edx, dword ptr [0x10451788] */
  EDX = (r32((uint32_t)(0x10451788)));
  /* 10434699 push edx */
  push32((uint32_t)(EDX));
  /* 1043469a call dword ptr [0x10454364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454364))), 0x104346a0u);
  /* 104346a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104346a2 je 0x104346b5 */
  if (C.zf) goto L_104346b5;
  /* 104346a4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104346a8 jne 0x104346b5 */
  if (!C.zf) goto L_104346b5;
  /* 104346aa mov eax, dword ptr [0x10450e20] */
  EAX = (r32((uint32_t)(0x10450e20)));
  /* 104346af mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 104346b3 jmp 0x104346be */
  goto L_104346be;
L_104346b5:;
  /* 104346b5 mov ecx, dword ptr [0x10450e20] */
  ECX = (r32((uint32_t)(0x10450e20)));
  /* 104346bb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_104346be:;
  /* 104346be jmp 0x104348e7 */
  goto L_104348e7;
L_104346c3:;
  /* 104346c3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104346c6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104346c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104346cb je 0x104346ed */
  if (C.zf) goto L_104346ed;
  /* 104346cd cmp dword ptr [0x104518cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104518cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104346d4 je 0x104346fc */
  if (C.zf) goto L_104346fc;
  /* 104346d6 mov ecx, dword ptr [0x104518cc] */
  ECX = (r32((uint32_t)(0x104518cc)));
  /* 104346dc push ecx */
  push32((uint32_t)(ECX));
  /* 104346dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104346e0 push edx */
  push32((uint32_t)(EDX));
  /* 104346e1 call 0x10431670 */
  push32(0x104346e6u); f_10431670();
  /* 104346e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104346e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104346eb jne 0x104346fc */
  if (!C.zf) goto L_104346fc;
L_104346ed:;
  /* 104346ed push 0xc */
  push32((uint32_t)(0xcu));
  /* 104346ef call 0x10429480 */
  push32(0x104346f4u); f_10429480();
  /* 104346f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104346f7 jmp 0x104348e7 */
  goto L_104348e7;
L_104346fc:;
  /* 104346fc push 2 */
  push32((uint32_t)(0x2u));
  /* 104346fe mov eax, dword ptr [0x104518cc] */
  EAX = (r32((uint32_t)(0x104518cc)));
  /* 10434703 push eax */
  push32((uint32_t)(EAX));
  /* 10434704 call 0x10426470 */
  push32(0x10434709u); f_10426470();
  /* 10434709 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043470c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 10434711 push 0x1044da68 */
  push32((uint32_t)(0x1044da68u));
  /* 10434716 push 2 */
  push32((uint32_t)(0x2u));
  /* 10434718 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1043471b push ecx */
  push32((uint32_t)(ECX));
  /* 1043471c call 0x10428810 */
  push32(0x10434721u); f_10428810();
  /* 10434721 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10434724 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10434727 push eax */
  push32((uint32_t)(EAX));
  /* 10434728 call 0x104259e0 */
  push32(0x1043472du); f_104259e0();
  /* 1043472d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10434730 mov dword ptr [0x104518cc], eax */
  w32((uint32_t)(0x104518cc), (EAX));
  /* 10434735 cmp dword ptr [0x104518cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104518cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043473c jne 0x1043474d */
  if (!C.zf) goto L_1043474d;
  /* 1043473e push 0xc */
  push32((uint32_t)(0xcu));
  /* 10434740 call 0x10429480 */
  push32(0x10434745u); f_10429480();
  /* 10434745 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10434748 jmp 0x104348e7 */
  goto L_104348e7;
L_1043474d:;
  /* 1043474d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10434750 push edx */
  push32((uint32_t)(EDX));
  /* 10434751 mov eax, dword ptr [0x104518cc] */
  EAX = (r32((uint32_t)(0x104518cc)));
  /* 10434756 push eax */
  push32((uint32_t)(EAX));
  /* 10434757 call 0x10428990 */
  push32(0x1043475cu); f_10428990();
  /* 1043475c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043475f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10434761 call 0x10429480 */
  push32(0x10434766u); f_10429480();
  /* 10434766 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10434769 push 3 */
  push32((uint32_t)(0x3u));
  /* 1043476b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1043476e push ecx */
  push32((uint32_t)(ECX));
  /* 1043476f mov edx, dword ptr [0x10450e1c] */
  EDX = (r32((uint32_t)(0x10450e1c)));
  /* 10434775 push edx */
  push32((uint32_t)(EDX));
  /* 10434776 call 0x10429200 */
  push32(0x1043477bu); f_10429200();
  /* 1043477b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043477e mov eax, dword ptr [0x10450e1c] */
  EAX = (r32((uint32_t)(0x10450e1c)));
  /* 10434783 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 10434787 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1043478a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1043478d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10434790 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10434793 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10434796 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434799 jne 0x104347ad */
  if (!C.zf) goto L_104347ad;
  /* 1043479b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1043479e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104347a1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104347a4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104347a7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104347aa mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_104347ad:;
  /* 104347ad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104347b0 push eax */
  push32((uint32_t)(EAX));
  /* 104347b1 call 0x10434290 */
  push32(0x104347b6u); f_10434290();
  /* 104347b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104347b9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104347bf mov dword ptr [0x10450d90], eax */
  w32((uint32_t)(0x10450d90), (EAX));
L_104347c4:;
  /* 104347c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104347c7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104347ca cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104347cd je 0x104347e5 */
  if (C.zf) goto L_104347e5;
  /* 104347cf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104347d2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104347d5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104347d8 jl 0x104347f0 */
  if ((C.sf!=C.of)) goto L_104347f0;
  /* 104347da mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104347dd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104347e0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104347e3 jg 0x104347f0 */
  if ((!C.zf&&C.sf==C.of)) goto L_104347f0;
L_104347e5:;
  /* 104347e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104347e8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104347eb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104347ee jmp 0x104347c4 */
  goto L_104347c4;
L_104347f0:;
  /* 104347f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104347f3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104347f6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104347f9 jne 0x10434895 */
  if (!C.zf) goto L_10434895;
  /* 104347ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10434802 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10434805 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10434808 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1043480b push edx */
  push32((uint32_t)(EDX));
  /* 1043480c call 0x10434290 */
  push32(0x10434811u); f_10434290();
  /* 10434811 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10434814 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10434817 mov ecx, dword ptr [0x10450d90] */
  ECX = (r32((uint32_t)(0x10450d90)));
  /* 1043481d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1043481f mov dword ptr [0x10450d90], ecx */
  w32((uint32_t)(0x10450d90), (ECX));
L_10434825:;
  /* 10434825 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10434828 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1043482b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043482e jl 0x10434846 */
  if ((C.sf!=C.of)) goto L_10434846;
  /* 10434830 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10434833 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10434836 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434839 jg 0x10434846 */
  if ((!C.zf&&C.sf==C.of)) goto L_10434846;
  /* 1043483b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1043483e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10434841 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10434844 jmp 0x10434825 */
  goto L_10434825;
L_10434846:;
  /* 10434846 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10434849 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1043484c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043484f jne 0x10434895 */
  if (!C.zf) goto L_10434895;
  /* 10434851 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10434854 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10434857 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1043485a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1043485d push ecx */
  push32((uint32_t)(ECX));
  /* 1043485e call 0x10434290 */
  push32(0x10434863u); f_10434290();
  /* 10434863 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10434866 mov edx, dword ptr [0x10450d90] */
  EDX = (r32((uint32_t)(0x10450d90)));
  /* 1043486c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1043486e mov dword ptr [0x10450d90], edx */
  w32((uint32_t)(0x10450d90), (EDX));
L_10434874:;
  /* 10434874 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10434877 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1043487a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043487d jl 0x10434895 */
  if ((C.sf!=C.of)) goto L_10434895;
  /* 1043487f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10434882 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10434885 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434888 jg 0x10434895 */
  if ((!C.zf&&C.sf==C.of)) goto L_10434895;
  /* 1043488a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1043488d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10434890 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10434893 jmp 0x10434874 */
  goto L_10434874;
L_10434895:;
  /* 10434895 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434899 je 0x104348a9 */
  if (C.zf) goto L_104348a9;
  /* 1043489b mov edx, dword ptr [0x10450d90] */
  EDX = (r32((uint32_t)(0x10450d90)));
  /* 104348a1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 104348a3 mov dword ptr [0x10450d90], edx */
  w32((uint32_t)(0x10450d90), (EDX));
L_104348a9:;
  /* 104348a9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104348ac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104348af mov dword ptr [0x10450d94], ecx */
  w32((uint32_t)(0x10450d94), (ECX));
  /* 104348b5 cmp dword ptr [0x10450d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10450d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104348bc je 0x104348de */
  if (C.zf) goto L_104348de;
  /* 104348be push 3 */
  push32((uint32_t)(0x3u));
  /* 104348c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104348c3 push edx */
  push32((uint32_t)(EDX));
  /* 104348c4 mov eax, dword ptr [0x10450e20] */
  EAX = (r32((uint32_t)(0x10450e20)));
  /* 104348c9 push eax */
  push32((uint32_t)(EAX));
  /* 104348ca call 0x10429200 */
  push32(0x104348cfu); f_10429200();
  /* 104348cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104348d2 mov ecx, dword ptr [0x10450e20] */
  ECX = (r32((uint32_t)(0x10450e20)));
  /* 104348d8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 104348dc jmp 0x104348e7 */
  goto L_104348e7;
L_104348de:;
  /* 104348de mov edx, dword ptr [0x10450e20] */
  EDX = (r32((uint32_t)(0x10450e20)));
  /* 104348e4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_104348e7:;
  /* 104348e7 mov esp, ebp */
  ESP = (EBP);
  /* 104348e9 pop ebp */
  EBP = (pop32());
  /* 104348ea ret  */
  ESPCHK(0x10434540u, _esp0);
  ESP += 4; return;
}

/* FUN_100148f0 @ 0x104348f0 (46 bytes, 18 insns) */
void f_104348f0(void) {
  FTRACE(0x104348f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104348f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104348f1 mov ebp, esp */
  EBP = (ESP);
  /* 104348f3 push ecx */
  push32((uint32_t)(ECX));
  /* 104348f4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 104348f6 call 0x104293e0 */
  push32(0x104348fbu); f_104293e0();
  /* 104348fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104348fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10434901 push eax */
  push32((uint32_t)(EAX));
  /* 10434902 call 0x10434920 */
  push32(0x10434907u); f_10434920();
  /* 10434907 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043490a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1043490d push 0xb */
  push32((uint32_t)(0xbu));
  /* 1043490f call 0x10429480 */
  push32(0x10434914u); f_10429480();
  /* 10434914 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10434917 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1043491a mov esp, ebp */
  ESP = (EBP);
  /* 1043491c pop ebp */
  EBP = (pop32());
  /* 1043491d ret  */
  ESPCHK(0x104348f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014920 @ 0x10434920 (762 bytes, 246 insns) */
void f_10434920(void) {
  FTRACE(0x10434920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10434920 push ebp */
  push32((uint32_t)(EBP));
  /* 10434921 mov ebp, esp */
  EBP = (ESP);
  /* 10434923 push ecx */
  push32((uint32_t)(ECX));
  /* 10434924 cmp dword ptr [0x10450d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10450d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043492b jne 0x10434934 */
  if (!C.zf) goto L_10434934;
  /* 1043492d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1043492f jmp 0x10434c16 */
  goto L_10434c16;
L_10434934:;
  /* 10434934 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10434937 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1043493a cmp ecx, dword ptr [0x10450e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10450e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434940 jne 0x10434954 */
  if (!C.zf) goto L_10434954;
  /* 10434942 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10434945 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10434948 cmp eax, dword ptr [0x10450e38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10450e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043494e je 0x10434b1b */
  if (C.zf) goto L_10434b1b;
L_10434954:;
  /* 10434954 cmp dword ptr [0x10451818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10451818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043495b je 0x10434ad5 */
  if (C.zf) goto L_10434ad5;
  /* 10434961 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10434963 mov cx, word ptr [0x104518b8] */
  CX = (r16((uint32_t)(0x104518b8)));
  /* 1043496a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1043496c jne 0x104349c9 */
  if (!C.zf) goto L_104349c9;
  /* 1043496e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10434970 mov dx, word ptr [0x104518c6] */
  DX = (r16((uint32_t)(0x104518c6)));
  /* 10434977 push edx */
  push32((uint32_t)(EDX));
  /* 10434978 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1043497a mov ax, word ptr [0x104518c4] */
  AX = (r16((uint32_t)(0x104518c4)));
  /* 10434980 push eax */
  push32((uint32_t)(EAX));
  /* 10434981 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10434983 mov cx, word ptr [0x104518c2] */
  CX = (r16((uint32_t)(0x104518c2)));
  /* 1043498a push ecx */
  push32((uint32_t)(ECX));
  /* 1043498b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1043498d mov dx, word ptr [0x104518c0] */
  DX = (r16((uint32_t)(0x104518c0)));
  /* 10434994 push edx */
  push32((uint32_t)(EDX));
  /* 10434995 push 0 */
  push32((uint32_t)(0x0u));
  /* 10434997 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10434999 mov ax, word ptr [0x104518bc] */
  AX = (r16((uint32_t)(0x104518bc)));
  /* 1043499f push eax */
  push32((uint32_t)(EAX));
  /* 104349a0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104349a2 mov cx, word ptr [0x104518be] */
  CX = (r16((uint32_t)(0x104518be)));
  /* 104349a9 push ecx */
  push32((uint32_t)(ECX));
  /* 104349aa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104349ac mov dx, word ptr [0x104518ba] */
  DX = (r16((uint32_t)(0x104518ba)));
  /* 104349b3 push edx */
  push32((uint32_t)(EDX));
  /* 104349b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104349b7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 104349ba push ecx */
  push32((uint32_t)(ECX));
  /* 104349bb push 1 */
  push32((uint32_t)(0x1u));
  /* 104349bd push 1 */
  push32((uint32_t)(0x1u));
  /* 104349bf call 0x10434c20 */
  push32(0x104349c4u); f_10434c20();
  /* 104349c4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104349c7 jmp 0x10434a1a */
  goto L_10434a1a;
L_104349c9:;
  /* 104349c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104349cb mov dx, word ptr [0x104518c6] */
  DX = (r16((uint32_t)(0x104518c6)));
  /* 104349d2 push edx */
  push32((uint32_t)(EDX));
  /* 104349d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104349d5 mov ax, word ptr [0x104518c4] */
  AX = (r16((uint32_t)(0x104518c4)));
  /* 104349db push eax */
  push32((uint32_t)(EAX));
  /* 104349dc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104349de mov cx, word ptr [0x104518c2] */
  CX = (r16((uint32_t)(0x104518c2)));
  /* 104349e5 push ecx */
  push32((uint32_t)(ECX));
  /* 104349e6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104349e8 mov dx, word ptr [0x104518c0] */
  DX = (r16((uint32_t)(0x104518c0)));
  /* 104349ef push edx */
  push32((uint32_t)(EDX));
  /* 104349f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104349f2 mov ax, word ptr [0x104518be] */
  AX = (r16((uint32_t)(0x104518be)));
  /* 104349f8 push eax */
  push32((uint32_t)(EAX));
  /* 104349f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 104349fb push 0 */
  push32((uint32_t)(0x0u));
  /* 104349fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104349ff mov cx, word ptr [0x104518ba] */
  CX = (r16((uint32_t)(0x104518ba)));
  /* 10434a06 push ecx */
  push32((uint32_t)(ECX));
  /* 10434a07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10434a0a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10434a0d push eax */
  push32((uint32_t)(EAX));
  /* 10434a0e push 0 */
  push32((uint32_t)(0x0u));
  /* 10434a10 push 1 */
  push32((uint32_t)(0x1u));
  /* 10434a12 call 0x10434c20 */
  push32(0x10434a17u); f_10434c20();
  /* 10434a17 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10434a1a:;
  /* 10434a1a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10434a1c mov cx, word ptr [0x10451864] */
  CX = (r16((uint32_t)(0x10451864)));
  /* 10434a23 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10434a25 jne 0x10434a82 */
  if (!C.zf) goto L_10434a82;
  /* 10434a27 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10434a29 mov dx, word ptr [0x10451872] */
  DX = (r16((uint32_t)(0x10451872)));
  /* 10434a30 push edx */
  push32((uint32_t)(EDX));
  /* 10434a31 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10434a33 mov ax, word ptr [0x10451870] */
  AX = (r16((uint32_t)(0x10451870)));
  /* 10434a39 push eax */
  push32((uint32_t)(EAX));
  /* 10434a3a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10434a3c mov cx, word ptr [0x1045186e] */
  CX = (r16((uint32_t)(0x1045186e)));
  /* 10434a43 push ecx */
  push32((uint32_t)(ECX));
  /* 10434a44 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10434a46 mov dx, word ptr [0x1045186c] */
  DX = (r16((uint32_t)(0x1045186c)));
  /* 10434a4d push edx */
  push32((uint32_t)(EDX));
  /* 10434a4e push 0 */
  push32((uint32_t)(0x0u));
  /* 10434a50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10434a52 mov ax, word ptr [0x10451868] */
  AX = (r16((uint32_t)(0x10451868)));
  /* 10434a58 push eax */
  push32((uint32_t)(EAX));
  /* 10434a59 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10434a5b mov cx, word ptr [0x1045186a] */
  CX = (r16((uint32_t)(0x1045186a)));
  /* 10434a62 push ecx */
  push32((uint32_t)(ECX));
  /* 10434a63 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10434a65 mov dx, word ptr [0x10451866] */
  DX = (r16((uint32_t)(0x10451866)));
  /* 10434a6c push edx */
  push32((uint32_t)(EDX));
  /* 10434a6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10434a70 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10434a73 push ecx */
  push32((uint32_t)(ECX));
  /* 10434a74 push 1 */
  push32((uint32_t)(0x1u));
  /* 10434a76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10434a78 call 0x10434c20 */
  push32(0x10434a7du); f_10434c20();
  /* 10434a7d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10434a80 jmp 0x10434ad3 */
  goto L_10434ad3;
L_10434a82:;
  /* 10434a82 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10434a84 mov dx, word ptr [0x10451872] */
  DX = (r16((uint32_t)(0x10451872)));
  /* 10434a8b push edx */
  push32((uint32_t)(EDX));
  /* 10434a8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10434a8e mov ax, word ptr [0x10451870] */
  AX = (r16((uint32_t)(0x10451870)));
  /* 10434a94 push eax */
  push32((uint32_t)(EAX));
  /* 10434a95 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10434a97 mov cx, word ptr [0x1045186e] */
  CX = (r16((uint32_t)(0x1045186e)));
  /* 10434a9e push ecx */
  push32((uint32_t)(ECX));
  /* 10434a9f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10434aa1 mov dx, word ptr [0x1045186c] */
  DX = (r16((uint32_t)(0x1045186c)));
  /* 10434aa8 push edx */
  push32((uint32_t)(EDX));
  /* 10434aa9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10434aab mov ax, word ptr [0x1045186a] */
  AX = (r16((uint32_t)(0x1045186a)));
  /* 10434ab1 push eax */
  push32((uint32_t)(EAX));
  /* 10434ab2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10434ab4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10434ab6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10434ab8 mov cx, word ptr [0x10451866] */
  CX = (r16((uint32_t)(0x10451866)));
  /* 10434abf push ecx */
  push32((uint32_t)(ECX));
  /* 10434ac0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10434ac3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10434ac6 push eax */
  push32((uint32_t)(EAX));
  /* 10434ac7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10434ac9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10434acb call 0x10434c20 */
  push32(0x10434ad0u); f_10434c20();
  /* 10434ad0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10434ad3:;
  /* 10434ad3 jmp 0x10434b1b */
  goto L_10434b1b;
L_10434ad5:;
  /* 10434ad5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10434ad7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10434ad9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10434adb push 2 */
  push32((uint32_t)(0x2u));
  /* 10434add push 0 */
  push32((uint32_t)(0x0u));
  /* 10434adf push 0 */
  push32((uint32_t)(0x0u));
  /* 10434ae1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10434ae3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10434ae5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10434ae8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10434aeb push edx */
  push32((uint32_t)(EDX));
  /* 10434aec push 1 */
  push32((uint32_t)(0x1u));
  /* 10434aee push 1 */
  push32((uint32_t)(0x1u));
  /* 10434af0 call 0x10434c20 */
  push32(0x10434af5u); f_10434c20();
  /* 10434af5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10434af8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10434afa push 0 */
  push32((uint32_t)(0x0u));
  /* 10434afc push 0 */
  push32((uint32_t)(0x0u));
  /* 10434afe push 2 */
  push32((uint32_t)(0x2u));
  /* 10434b00 push 0 */
  push32((uint32_t)(0x0u));
  /* 10434b02 push 0 */
  push32((uint32_t)(0x0u));
  /* 10434b04 push 5 */
  push32((uint32_t)(0x5u));
  /* 10434b06 push 0xa */
  push32((uint32_t)(0xau));
  /* 10434b08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10434b0b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10434b0e push ecx */
  push32((uint32_t)(ECX));
  /* 10434b0f push 1 */
  push32((uint32_t)(0x1u));
  /* 10434b11 push 0 */
  push32((uint32_t)(0x0u));
  /* 10434b13 call 0x10434c20 */
  push32(0x10434b18u); f_10434c20();
  /* 10434b18 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10434b1b:;
  /* 10434b1b mov edx, dword ptr [0x10450e2c] */
  EDX = (r32((uint32_t)(0x10450e2c)));
  /* 10434b21 cmp edx, dword ptr [0x10450e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10450e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434b27 jge 0x10434b74 */
  if ((C.sf==C.of)) goto L_10434b74;
  /* 10434b29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10434b2c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10434b2f cmp ecx, dword ptr [0x10450e2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10450e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434b35 jl 0x10434b45 */
  if ((C.sf!=C.of)) goto L_10434b45;
  /* 10434b37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10434b3a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10434b3d cmp eax, dword ptr [0x10450e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10450e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434b43 jle 0x10434b4c */
  if ((C.zf||C.sf!=C.of)) goto L_10434b4c;
L_10434b45:;
  /* 10434b45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10434b47 jmp 0x10434c16 */
  goto L_10434c16;
L_10434b4c:;
  /* 10434b4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10434b4f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10434b52 cmp edx, dword ptr [0x10450e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10450e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434b58 jle 0x10434b72 */
  if ((C.zf||C.sf!=C.of)) goto L_10434b72;
  /* 10434b5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10434b5d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10434b60 cmp ecx, dword ptr [0x10450e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10450e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434b66 jge 0x10434b72 */
  if ((C.sf==C.of)) goto L_10434b72;
  /* 10434b68 mov eax, 1 */
  EAX = (0x1u);
  /* 10434b6d jmp 0x10434c16 */
  goto L_10434c16;
L_10434b72:;
  /* 10434b72 jmp 0x10434bb7 */
  goto L_10434bb7;
L_10434b74:;
  /* 10434b74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10434b77 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10434b7a cmp eax, dword ptr [0x10450e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10450e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434b80 jl 0x10434b90 */
  if ((C.sf!=C.of)) goto L_10434b90;
  /* 10434b82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10434b85 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10434b88 cmp edx, dword ptr [0x10450e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10450e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434b8e jle 0x10434b97 */
  if ((C.zf||C.sf!=C.of)) goto L_10434b97;
L_10434b90:;
  /* 10434b90 mov eax, 1 */
  EAX = (0x1u);
  /* 10434b95 jmp 0x10434c16 */
  goto L_10434c16;
L_10434b97:;
  /* 10434b97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10434b9a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10434b9d cmp ecx, dword ptr [0x10450e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10450e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434ba3 jle 0x10434bb7 */
  if ((C.zf||C.sf!=C.of)) goto L_10434bb7;
  /* 10434ba5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10434ba8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10434bab cmp eax, dword ptr [0x10450e2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10450e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434bb1 jge 0x10434bb7 */
  if ((C.sf==C.of)) goto L_10434bb7;
  /* 10434bb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10434bb5 jmp 0x10434c16 */
  goto L_10434c16;
L_10434bb7:;
  /* 10434bb7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10434bba mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10434bbd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10434bc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10434bc3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10434bc5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10434bc7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10434bca mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10434bcd imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10434bd3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10434bd5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10434bdb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10434bde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10434be1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10434be4 cmp edx, dword ptr [0x10450e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10450e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434bea jne 0x10434c02 */
  if (!C.zf) goto L_10434c02;
  /* 10434bec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10434bef cmp eax, dword ptr [0x10450e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10450e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434bf5 jl 0x10434bfe */
  if ((C.sf!=C.of)) goto L_10434bfe;
  /* 10434bf7 mov eax, 1 */
  EAX = (0x1u);
  /* 10434bfc jmp 0x10434c16 */
  goto L_10434c16;
L_10434bfe:;
  /* 10434bfe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10434c00 jmp 0x10434c16 */
  goto L_10434c16;
L_10434c02:;
  /* 10434c02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10434c05 cmp ecx, dword ptr [0x10450e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10450e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434c0b jge 0x10434c14 */
  if ((C.sf==C.of)) goto L_10434c14;
  /* 10434c0d mov eax, 1 */
  EAX = (0x1u);
  /* 10434c12 jmp 0x10434c16 */
  goto L_10434c16;
L_10434c14:;
  /* 10434c14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10434c16:;
  /* 10434c16 mov esp, ebp */
  ESP = (EBP);
  /* 10434c18 pop ebp */
  EBP = (pop32());
  /* 10434c19 ret  */
  ESPCHK(0x10434920u, _esp0);
  ESP += 4; return;
}

/* FUN_10014c20 @ 0x10434c20 (504 bytes, 145 insns) */
void f_10434c20(void) {
  FTRACE(0x10434c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10434c20 push ebp */
  push32((uint32_t)(EBP));
  /* 10434c21 mov ebp, esp */
  EBP = (ESP);
  /* 10434c23 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10434c26 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434c2a jne 0x10434cfc */
  if (!C.zf) goto L_10434cfc;
  /* 10434c30 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10434c33 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10434c36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10434c38 jne 0x10434c49 */
  if (!C.zf) goto L_10434c49;
  /* 10434c3a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10434c3d mov edx, dword ptr [ecx*4 + 0x10450e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10450e4c)));
  /* 10434c44 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10434c47 jmp 0x10434c56 */
  goto L_10434c56;
L_10434c49:;
  /* 10434c49 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10434c4c mov ecx, dword ptr [eax*4 + 0x10450e80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10450e80)));
  /* 10434c53 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10434c56:;
  /* 10434c56 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10434c59 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10434c5c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10434c5f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10434c62 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10434c65 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10434c6b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10434c6e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10434c70 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10434c73 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10434c76 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10434c79 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 10434c7d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10434c7e mov ecx, 7 */
  ECX = (0x7u);
  /* 10434c83 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10434c85 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10434c88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10434c8b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434c8e jge 0x10434ca9 */
  if ((C.sf==C.of)) goto L_10434ca9;
  /* 10434c90 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10434c93 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10434c96 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10434c99 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10434c9c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10434c9f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10434ca2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10434ca4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10434ca7 jmp 0x10434cbd */
  goto L_10434cbd;
L_10434ca9:;
  /* 10434ca9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10434cac sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10434caf mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10434cb2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10434cb5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10434cb8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10434cba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10434cbd:;
  /* 10434cbd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434cc1 jne 0x10434cfa */
  if (!C.zf) goto L_10434cfa;
  /* 10434cc3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10434cc6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10434cc9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10434ccb jne 0x10434cdc */
  if (!C.zf) goto L_10434cdc;
  /* 10434ccd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10434cd0 mov eax, dword ptr [edx*4 + 0x10450e50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10450e50)));
  /* 10434cd7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10434cda jmp 0x10434ce9 */
  goto L_10434ce9;
L_10434cdc:;
  /* 10434cdc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10434cdf mov edx, dword ptr [ecx*4 + 0x10450e84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10450e84)));
  /* 10434ce6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10434ce9:;
  /* 10434ce9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10434cec cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434cef jle 0x10434cfa */
  if ((C.zf||C.sf!=C.of)) goto L_10434cfa;
  /* 10434cf1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10434cf4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10434cf7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10434cfa:;
  /* 10434cfa jmp 0x10434d31 */
  goto L_10434d31;
L_10434cfc:;
  /* 10434cfc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10434cff and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10434d02 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10434d04 jne 0x10434d15 */
  if (!C.zf) goto L_10434d15;
  /* 10434d06 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10434d09 mov ecx, dword ptr [eax*4 + 0x10450e4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10450e4c)));
  /* 10434d10 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10434d13 jmp 0x10434d22 */
  goto L_10434d22;
L_10434d15:;
  /* 10434d15 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10434d18 mov eax, dword ptr [edx*4 + 0x10450e80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10450e80)));
  /* 10434d1f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10434d22:;
  /* 10434d22 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10434d25 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10434d28 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10434d2b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10434d2e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10434d31:;
  /* 10434d31 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434d35 jne 0x10434d71 */
  if (!C.zf) goto L_10434d71;
  /* 10434d37 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10434d3a mov dword ptr [0x10450e2c], eax */
  w32((uint32_t)(0x10450e2c), (EAX));
  /* 10434d3f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10434d42 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10434d45 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10434d48 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10434d4a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10434d4d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10434d50 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10434d52 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10434d58 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10434d5b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10434d5d mov dword ptr [0x10450e30], ecx */
  w32((uint32_t)(0x10450e30), (ECX));
  /* 10434d63 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10434d66 mov dword ptr [0x10450e28], edx */
  w32((uint32_t)(0x10450e28), (EDX));
  /* 10434d6c jmp 0x10434e14 */
  goto L_10434e14;
L_10434d71:;
  /* 10434d71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10434d74 mov dword ptr [0x10450e3c], eax */
  w32((uint32_t)(0x10450e3c), (EAX));
  /* 10434d79 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10434d7c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10434d7f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10434d82 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10434d84 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10434d87 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10434d8a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10434d8c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10434d92 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10434d95 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10434d97 mov dword ptr [0x10450e40], ecx */
  w32((uint32_t)(0x10450e40), (ECX));
  /* 10434d9d mov edx, dword ptr [0x10450d98] */
  EDX = (r32((uint32_t)(0x10450d98)));
  /* 10434da3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10434da9 mov eax, dword ptr [0x10450e40] */
  EAX = (r32((uint32_t)(0x10450e40)));
  /* 10434dae add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10434db0 mov dword ptr [0x10450e40], eax */
  w32((uint32_t)(0x10450e40), (EAX));
  /* 10434db5 cmp dword ptr [0x10450e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10450e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434dbc jge 0x10434de1 */
  if ((C.sf==C.of)) goto L_10434de1;
  /* 10434dbe mov ecx, dword ptr [0x10450e40] */
  ECX = (r32((uint32_t)(0x10450e40)));
  /* 10434dc4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10434dca mov dword ptr [0x10450e40], ecx */
  w32((uint32_t)(0x10450e40), (ECX));
  /* 10434dd0 mov edx, dword ptr [0x10450e3c] */
  EDX = (r32((uint32_t)(0x10450e3c)));
  /* 10434dd6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10434dd9 mov dword ptr [0x10450e3c], edx */
  w32((uint32_t)(0x10450e3c), (EDX));
  /* 10434ddf jmp 0x10434e0b */
  goto L_10434e0b;
L_10434de1:;
  /* 10434de1 cmp dword ptr [0x10450e40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x10450e40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434deb jl 0x10434e0b */
  if ((C.sf!=C.of)) goto L_10434e0b;
  /* 10434ded mov eax, dword ptr [0x10450e40] */
  EAX = (r32((uint32_t)(0x10450e40)));
  /* 10434df2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10434df7 mov dword ptr [0x10450e40], eax */
  w32((uint32_t)(0x10450e40), (EAX));
  /* 10434dfc mov ecx, dword ptr [0x10450e3c] */
  ECX = (r32((uint32_t)(0x10450e3c)));
  /* 10434e02 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10434e05 mov dword ptr [0x10450e3c], ecx */
  w32((uint32_t)(0x10450e3c), (ECX));
L_10434e0b:;
  /* 10434e0b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10434e0e mov dword ptr [0x10450e38], edx */
  w32((uint32_t)(0x10450e38), (EDX));
L_10434e14:;
  /* 10434e14 mov esp, ebp */
  ESP = (EBP);
  /* 10434e16 pop ebp */
  EBP = (pop32());
  /* 10434e17 ret  */
  ESPCHK(0x10434c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10014e20 @ 0x10434e20 (382 bytes, 135 insns) */
void f_10434e20(void) {
  FTRACE(0x10434e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10434e20 push ebp */
  push32((uint32_t)(EBP));
  /* 10434e21 mov ebp, esp */
  EBP = (ESP);
  /* 10434e23 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10434e25 push 0x1044da78 */
  push32((uint32_t)(0x1044da78u));
  /* 10434e2a push 0x1042eae8 */
  push32((uint32_t)(0x1042eae8u));
  /* 10434e2f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10434e35 push eax */
  push32((uint32_t)(EAX));
  /* 10434e36 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10434e3d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10434e40 push ebx */
  push32((uint32_t)(EBX));
  /* 10434e41 push esi */
  push32((uint32_t)(ESI));
  /* 10434e42 push edi */
  push32((uint32_t)(EDI));
  /* 10434e43 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10434e46 cmp dword ptr [0x104518d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104518d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434e4d jne 0x10434e92 */
  if (!C.zf) goto L_10434e92;
  /* 10434e4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10434e51 push 0 */
  push32((uint32_t)(0x0u));
  /* 10434e53 push 1 */
  push32((uint32_t)(0x1u));
  /* 10434e55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10434e57 call dword ptr [0x10454284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454284))), 0x10434e5du);
  /* 10434e5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10434e5f je 0x10434e6d */
  if (C.zf) goto L_10434e6d;
  /* 10434e61 mov dword ptr [0x104518d4], 1 */
  w32((uint32_t)(0x104518d4), (0x1u));
  /* 10434e6b jmp 0x10434e92 */
  goto L_10434e92;
L_10434e6d:;
  /* 10434e6d push 0 */
  push32((uint32_t)(0x0u));
  /* 10434e6f push 0 */
  push32((uint32_t)(0x0u));
  /* 10434e71 push 1 */
  push32((uint32_t)(0x1u));
  /* 10434e73 push 0 */
  push32((uint32_t)(0x0u));
  /* 10434e75 call dword ptr [0x1045429c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045429c))), 0x10434e7bu);
  /* 10434e7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10434e7d je 0x10434e8b */
  if (C.zf) goto L_10434e8b;
  /* 10434e7f mov dword ptr [0x104518d4], 2 */
  w32((uint32_t)(0x104518d4), (0x2u));
  /* 10434e89 jmp 0x10434e92 */
  goto L_10434e92;
L_10434e8b:;
  /* 10434e8b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10434e8d jmp 0x10434fa1 */
  goto L_10434fa1;
L_10434e92:;
  /* 10434e92 cmp dword ptr [0x104518d4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x104518d4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434e99 jne 0x10434eb6 */
  if (!C.zf) goto L_10434eb6;
  /* 10434e9b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10434e9e push eax */
  push32((uint32_t)(EAX));
  /* 10434e9f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10434ea2 push ecx */
  push32((uint32_t)(ECX));
  /* 10434ea3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10434ea6 push edx */
  push32((uint32_t)(EDX));
  /* 10434ea7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10434eaa push eax */
  push32((uint32_t)(EAX));
  /* 10434eab call dword ptr [0x10454284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454284))), 0x10434eb1u);
  /* 10434eb1 jmp 0x10434fa1 */
  goto L_10434fa1;
L_10434eb6:;
  /* 10434eb6 cmp dword ptr [0x104518d4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x104518d4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434ebd jne 0x10434f9f */
  if (!C.zf) goto L_10434f9f;
  /* 10434ec3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434ec7 jne 0x10434ed2 */
  if (!C.zf) goto L_10434ed2;
  /* 10434ec9 mov ecx, dword ptr [0x10451788] */
  ECX = (r32((uint32_t)(0x10451788)));
  /* 10434ecf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10434ed2:;
  /* 10434ed2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10434ed4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10434ed6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10434ed9 push edx */
  push32((uint32_t)(EDX));
  /* 10434eda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10434edd push eax */
  push32((uint32_t)(EAX));
  /* 10434ede call dword ptr [0x1045429c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045429c))), 0x10434ee4u);
  /* 10434ee4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10434ee7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434eeb jne 0x10434ef4 */
  if (!C.zf) goto L_10434ef4;
  /* 10434eed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10434eef jmp 0x10434fa1 */
  goto L_10434fa1;
L_10434ef4:;
  /* 10434ef4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10434efb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10434efe add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10434f01 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10434f03 call 0x10428b80 */
  push32(0x10434f08u); f_10428b80();
  /* 10434f08 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10434f0b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10434f0e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10434f11 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10434f14 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10434f1b jmp 0x10434f34 */
  goto L_10434f34;
  /* 10434f1d mov eax, 1 */
  EAX = (0x1u);
  /* 10434f22 ret  */
  ESPCHK(0x10434e20u, _esp0);
  ESP += 4; return;
  /* 10434f23 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10434f26 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10434f2d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10434f34:;
  /* 10434f34 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434f38 jne 0x10434f3e */
  if (!C.zf) goto L_10434f3e;
  /* 10434f3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10434f3c jmp 0x10434fa1 */
  goto L_10434fa1;
L_10434f3e:;
  /* 10434f3e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10434f41 push edx */
  push32((uint32_t)(EDX));
  /* 10434f42 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10434f45 push eax */
  push32((uint32_t)(EAX));
  /* 10434f46 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10434f49 push ecx */
  push32((uint32_t)(ECX));
  /* 10434f4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10434f4d push edx */
  push32((uint32_t)(EDX));
  /* 10434f4e call dword ptr [0x1045429c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045429c))), 0x10434f54u);
  /* 10434f54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10434f56 jne 0x10434f5c */
  if (!C.zf) goto L_10434f5c;
  /* 10434f58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10434f5a jmp 0x10434fa1 */
  goto L_10434fa1;
L_10434f5c:;
  /* 10434f5c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434f60 jne 0x10434f7d */
  if (!C.zf) goto L_10434f7d;
  /* 10434f62 push 0 */
  push32((uint32_t)(0x0u));
  /* 10434f64 push 0 */
  push32((uint32_t)(0x0u));
  /* 10434f66 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10434f68 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10434f6b push eax */
  push32((uint32_t)(EAX));
  /* 10434f6c push 1 */
  push32((uint32_t)(0x1u));
  /* 10434f6e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10434f71 push ecx */
  push32((uint32_t)(ECX));
  /* 10434f72 call dword ptr [0x104542cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542cc))), 0x10434f78u);
  /* 10434f78 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10434f7b jmp 0x10434f9a */
  goto L_10434f9a;
L_10434f7d:;
  /* 10434f7d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10434f80 push edx */
  push32((uint32_t)(EDX));
  /* 10434f81 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10434f84 push eax */
  push32((uint32_t)(EAX));
  /* 10434f85 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10434f87 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10434f8a push ecx */
  push32((uint32_t)(ECX));
  /* 10434f8b push 1 */
  push32((uint32_t)(0x1u));
  /* 10434f8d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10434f90 push edx */
  push32((uint32_t)(EDX));
  /* 10434f91 call dword ptr [0x104542cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542cc))), 0x10434f97u);
  /* 10434f97 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10434f9a:;
  /* 10434f9a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10434f9d jmp 0x10434fa1 */
  goto L_10434fa1;
L_10434f9f:;
  /* 10434f9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10434fa1:;
  /* 10434fa1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10434fa4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10434fa7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10434fae pop edi */
  EDI = (pop32());
  /* 10434faf pop esi */
  ESI = (pop32());
  /* 10434fb0 pop ebx */
  EBX = (pop32());
  /* 10434fb1 mov esp, ebp */
  ESP = (EBP);
  /* 10434fb3 pop ebp */
  EBP = (pop32());
  /* 10434fb4 ret  */
  ESPCHK(0x10434e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10014fc0 @ 0x10434fc0 (398 bytes, 140 insns) */
void f_10434fc0(void) {
  FTRACE(0x10434fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10434fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10434fc1 mov ebp, esp */
  EBP = (ESP);
  /* 10434fc3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10434fc5 push 0x1044da88 */
  push32((uint32_t)(0x1044da88u));
  /* 10434fca push 0x1042eae8 */
  push32((uint32_t)(0x1042eae8u));
  /* 10434fcf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10434fd5 push eax */
  push32((uint32_t)(EAX));
  /* 10434fd6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10434fdd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10434fe0 push ebx */
  push32((uint32_t)(EBX));
  /* 10434fe1 push esi */
  push32((uint32_t)(ESI));
  /* 10434fe2 push edi */
  push32((uint32_t)(EDI));
  /* 10434fe3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10434fe6 cmp dword ptr [0x104518d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104518d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10434fed jne 0x10435032 */
  if (!C.zf) goto L_10435032;
  /* 10434fef push 0 */
  push32((uint32_t)(0x0u));
  /* 10434ff1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10434ff3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10434ff5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10434ff7 call dword ptr [0x10454284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454284))), 0x10434ffdu);
  /* 10434ffd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10434fff je 0x1043500d */
  if (C.zf) goto L_1043500d;
  /* 10435001 mov dword ptr [0x104518d8], 1 */
  w32((uint32_t)(0x104518d8), (0x1u));
  /* 1043500b jmp 0x10435032 */
  goto L_10435032;
L_1043500d:;
  /* 1043500d push 0 */
  push32((uint32_t)(0x0u));
  /* 1043500f push 0 */
  push32((uint32_t)(0x0u));
  /* 10435011 push 1 */
  push32((uint32_t)(0x1u));
  /* 10435013 push 0 */
  push32((uint32_t)(0x0u));
  /* 10435015 call dword ptr [0x1045429c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045429c))), 0x1043501bu);
  /* 1043501b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1043501d je 0x1043502b */
  if (C.zf) goto L_1043502b;
  /* 1043501f mov dword ptr [0x104518d8], 2 */
  w32((uint32_t)(0x104518d8), (0x2u));
  /* 10435029 jmp 0x10435032 */
  goto L_10435032;
L_1043502b:;
  /* 1043502b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1043502d jmp 0x10435151 */
  goto L_10435151;
L_10435032:;
  /* 10435032 cmp dword ptr [0x104518d8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x104518d8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435039 jne 0x10435056 */
  if (!C.zf) goto L_10435056;
  /* 1043503b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1043503e push eax */
  push32((uint32_t)(EAX));
  /* 1043503f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10435042 push ecx */
  push32((uint32_t)(ECX));
  /* 10435043 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10435046 push edx */
  push32((uint32_t)(EDX));
  /* 10435047 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043504a push eax */
  push32((uint32_t)(EAX));
  /* 1043504b call dword ptr [0x1045429c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045429c))), 0x10435051u);
  /* 10435051 jmp 0x10435151 */
  goto L_10435151;
L_10435056:;
  /* 10435056 cmp dword ptr [0x104518d8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x104518d8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043505d jne 0x1043514f */
  if (!C.zf) goto L_1043514f;
  /* 10435063 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435067 jne 0x10435072 */
  if (!C.zf) goto L_10435072;
  /* 10435069 mov ecx, dword ptr [0x10451788] */
  ECX = (r32((uint32_t)(0x10451788)));
  /* 1043506f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10435072:;
  /* 10435072 push 0 */
  push32((uint32_t)(0x0u));
  /* 10435074 push 0 */
  push32((uint32_t)(0x0u));
  /* 10435076 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10435079 push edx */
  push32((uint32_t)(EDX));
  /* 1043507a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043507d push eax */
  push32((uint32_t)(EAX));
  /* 1043507e call dword ptr [0x10454284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454284))), 0x10435084u);
  /* 10435084 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10435087 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043508b jne 0x10435094 */
  if (!C.zf) goto L_10435094;
  /* 1043508d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1043508f jmp 0x10435151 */
  goto L_10435151;
L_10435094:;
  /* 10435094 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1043509b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1043509e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 104350a0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104350a3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 104350a5 call 0x10428b80 */
  push32(0x104350aau); f_10428b80();
  /* 104350aa mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 104350ad mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 104350b0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104350b3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 104350b6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 104350bd jmp 0x104350d6 */
  goto L_104350d6;
  /* 104350bf mov eax, 1 */
  EAX = (0x1u);
  /* 104350c4 ret  */
  ESPCHK(0x10434fc0u, _esp0);
  ESP += 4; return;
  /* 104350c5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 104350c8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 104350cf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_104350d6:;
  /* 104350d6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104350da jne 0x104350e0 */
  if (!C.zf) goto L_104350e0;
  /* 104350dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104350de jmp 0x10435151 */
  goto L_10435151;
L_104350e0:;
  /* 104350e0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104350e3 push edx */
  push32((uint32_t)(EDX));
  /* 104350e4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104350e7 push eax */
  push32((uint32_t)(EAX));
  /* 104350e8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104350eb push ecx */
  push32((uint32_t)(ECX));
  /* 104350ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104350ef push edx */
  push32((uint32_t)(EDX));
  /* 104350f0 call dword ptr [0x10454284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454284))), 0x104350f6u);
  /* 104350f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104350f8 jne 0x104350fe */
  if (!C.zf) goto L_104350fe;
  /* 104350fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104350fc jmp 0x10435151 */
  goto L_10435151;
L_104350fe:;
  /* 104350fe cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435102 jne 0x10435126 */
  if (!C.zf) goto L_10435126;
  /* 10435104 push 0 */
  push32((uint32_t)(0x0u));
  /* 10435106 push 0 */
  push32((uint32_t)(0x0u));
  /* 10435108 push 0 */
  push32((uint32_t)(0x0u));
  /* 1043510a push 0 */
  push32((uint32_t)(0x0u));
  /* 1043510c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1043510e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10435111 push eax */
  push32((uint32_t)(EAX));
  /* 10435112 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10435117 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1043511a push ecx */
  push32((uint32_t)(ECX));
  /* 1043511b call dword ptr [0x10454364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454364))), 0x10435121u);
  /* 10435121 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10435124 jmp 0x1043514a */
  goto L_1043514a;
L_10435126:;
  /* 10435126 push 0 */
  push32((uint32_t)(0x0u));
  /* 10435128 push 0 */
  push32((uint32_t)(0x0u));
  /* 1043512a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1043512d push edx */
  push32((uint32_t)(EDX));
  /* 1043512e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10435131 push eax */
  push32((uint32_t)(EAX));
  /* 10435132 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10435134 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10435137 push ecx */
  push32((uint32_t)(ECX));
  /* 10435138 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1043513d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10435140 push edx */
  push32((uint32_t)(EDX));
  /* 10435141 call dword ptr [0x10454364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454364))), 0x10435147u);
  /* 10435147 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1043514a:;
  /* 1043514a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1043514d jmp 0x10435151 */
  goto L_10435151;
L_1043514f:;
  /* 1043514f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10435151:;
  /* 10435151 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10435154 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10435157 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1043515e pop edi */
  EDI = (pop32());
  /* 1043515f pop esi */
  ESI = (pop32());
  /* 10435160 pop ebx */
  EBX = (pop32());
  /* 10435161 mov esp, ebp */
  ESP = (EBP);
  /* 10435163 pop ebp */
  EBP = (pop32());
  /* 10435164 ret  */
  ESPCHK(0x10434fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015170 @ 0x10435170 (11 bytes, 6 insns) */
void f_10435170(void) {
  FTRACE(0x10435170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10435170 push ebp */
  push32((uint32_t)(EBP));
  /* 10435171 mov ebp, esp */
  EBP = (ESP);
  /* 10435173 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10435176 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10435179 pop ebp */
  EBP = (pop32());
  /* 1043517a ret  */
  ESPCHK(0x10435170u, _esp0);
  ESP += 4; return;
}

/* FUN_10015180 @ 0x10435180 (147 bytes, 43 insns) */
void f_10435180(void) {
  FTRACE(0x10435180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10435180 push ebp */
  push32((uint32_t)(EBP));
  /* 10435181 mov ebp, esp */
  EBP = (ESP);
  /* 10435183 push ecx */
  push32((uint32_t)(ECX));
  /* 10435184 cmp dword ptr [0x10451778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10451778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043518b jne 0x104351a7 */
  if (!C.zf) goto L_104351a7;
  /* 1043518d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435191 jl 0x104351a2 */
  if ((C.sf!=C.of)) goto L_104351a2;
  /* 10435193 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435197 jg 0x104351a2 */
  if ((!C.zf&&C.sf==C.of)) goto L_104351a2;
  /* 10435199 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043519c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1043519f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_104351a2:;
  /* 104351a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104351a5 jmp 0x1043520f */
  goto L_1043520f;
L_104351a7:;
  /* 104351a7 push 0x10451904 */
  push32((uint32_t)(0x10451904u));
  /* 104351ac call dword ptr [0x1045430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045430c))), 0x104351b2u);
  /* 104351b2 cmp dword ptr [0x104518f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104518f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104351b9 je 0x104351d9 */
  if (C.zf) goto L_104351d9;
  /* 104351bb push 0x10451904 */
  push32((uint32_t)(0x10451904u));
  /* 104351c0 call dword ptr [0x104542fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542fc))), 0x104351c6u);
  /* 104351c6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 104351c8 call 0x104293e0 */
  push32(0x104351cdu); f_104293e0();
  /* 104351cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104351d0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 104351d7 jmp 0x104351e0 */
  goto L_104351e0;
L_104351d9:;
  /* 104351d9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_104351e0:;
  /* 104351e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104351e3 push ecx */
  push32((uint32_t)(ECX));
  /* 104351e4 call 0x10435220 */
  push32(0x104351e9u); f_10435220();
  /* 104351e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104351ec mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104351ef cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104351f3 je 0x10435201 */
  if (C.zf) goto L_10435201;
  /* 104351f5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 104351f7 call 0x10429480 */
  push32(0x104351fcu); f_10429480();
  /* 104351fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104351ff jmp 0x1043520c */
  goto L_1043520c;
L_10435201:;
  /* 10435201 push 0x10451904 */
  push32((uint32_t)(0x10451904u));
  /* 10435206 call dword ptr [0x104542fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542fc))), 0x1043520cu);
L_1043520c:;
  /* 1043520c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1043520f:;
  /* 1043520f mov esp, ebp */
  ESP = (EBP);
  /* 10435211 pop ebp */
  EBP = (pop32());
  /* 10435212 ret  */
  ESPCHK(0x10435180u, _esp0);
  ESP += 4; return;
}

/* FUN_10015220 @ 0x10435220 (299 bytes, 91 insns) */
void f_10435220(void) {
  FTRACE(0x10435220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10435220 push ebp */
  push32((uint32_t)(EBP));
  /* 10435221 mov ebp, esp */
  EBP = (ESP);
  /* 10435223 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10435226 cmp dword ptr [0x10451778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10451778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043522d jne 0x1043524c */
  if (!C.zf) goto L_1043524c;
  /* 1043522f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435233 jl 0x10435244 */
  if ((C.sf!=C.of)) goto L_10435244;
  /* 10435235 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435239 jg 0x10435244 */
  if ((!C.zf&&C.sf==C.of)) goto L_10435244;
  /* 1043523b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043523e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10435241 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10435244:;
  /* 10435244 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10435247 jmp 0x10435347 */
  goto L_10435347;
L_1043524c:;
  /* 1043524c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435253 jge 0x10435293 */
  if ((C.sf==C.of)) goto L_10435293;
  /* 10435255 cmp dword ptr [0x1044fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1044fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043525c jle 0x10435271 */
  if ((C.zf||C.sf!=C.of)) goto L_10435271;
  /* 1043525e push 1 */
  push32((uint32_t)(0x1u));
  /* 10435260 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10435263 push ecx */
  push32((uint32_t)(ECX));
  /* 10435264 call 0x1042b9f0 */
  push32(0x10435269u); f_1042b9f0();
  /* 10435269 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043526c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1043526f jmp 0x10435285 */
  goto L_10435285;
L_10435271:;
  /* 10435271 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10435274 mov eax, dword ptr [0x1044fc98] */
  EAX = (r32((uint32_t)(0x1044fc98)));
  /* 10435279 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1043527b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1043527f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10435282 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10435285:;
  /* 10435285 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435289 jne 0x10435293 */
  if (!C.zf) goto L_10435293;
  /* 1043528b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043528e jmp 0x10435347 */
  goto L_10435347;
L_10435293:;
  /* 10435293 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10435296 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10435299 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1043529f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 104352a5 mov eax, dword ptr [0x1044fc98] */
  EAX = (r32((uint32_t)(0x1044fc98)));
  /* 104352aa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104352ac mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 104352b0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 104352b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104352b8 je 0x104352dc */
  if (C.zf) goto L_104352dc;
  /* 104352ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104352bd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 104352c0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 104352c6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 104352c9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 104352cc mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 104352cf mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 104352d3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 104352da jmp 0x104352ed */
  goto L_104352ed;
L_104352dc:;
  /* 104352dc mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 104352df mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 104352e2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 104352e6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_104352ed:;
  /* 104352ed push 1 */
  push32((uint32_t)(0x1u));
  /* 104352ef push 0 */
  push32((uint32_t)(0x0u));
  /* 104352f1 push 3 */
  push32((uint32_t)(0x3u));
  /* 104352f3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 104352f6 push edx */
  push32((uint32_t)(EDX));
  /* 104352f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104352fa push eax */
  push32((uint32_t)(EAX));
  /* 104352fb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 104352fe push ecx */
  push32((uint32_t)(ECX));
  /* 104352ff push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10435304 mov edx, dword ptr [0x10451778] */
  EDX = (r32((uint32_t)(0x10451778)));
  /* 1043530a push edx */
  push32((uint32_t)(EDX));
  /* 1043530b call 0x1042ddd0 */
  push32(0x10435310u); f_1042ddd0();
  /* 10435310 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10435313 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10435316 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043531a jne 0x10435321 */
  if (!C.zf) goto L_10435321;
  /* 1043531c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043531f jmp 0x10435347 */
  goto L_10435347;
L_10435321:;
  /* 10435321 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435325 jne 0x10435331 */
  if (!C.zf) goto L_10435331;
  /* 10435327 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1043532a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1043532f jmp 0x10435347 */
  goto L_10435347;
L_10435331:;
  /* 10435331 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10435334 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10435339 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 1043533c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10435342 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10435345 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10435347:;
  /* 10435347 mov esp, ebp */
  ESP = (EBP);
  /* 10435349 pop ebp */
  EBP = (pop32());
  /* 1043534a ret  */
  ESPCHK(0x10435220u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x10435350 (52 bytes, 19 insns) */
void f_10435350(void) {
  FTRACE(0x10435350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10435350 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10435354 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10435358 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1043535a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1043535e jne 0x10435369 */
  if (!C.zf) goto L_10435369;
  /* 10435360 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10435364 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10435366 ret 0x10 */
  ESPCHK(0x10435350u, _esp0);
  ESP += 20; return;
L_10435369:;
  /* 10435369 push ebx */
  push32((uint32_t)(EBX));
  /* 1043536a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1043536c mov ebx, eax */
  EBX = (EAX);
  /* 1043536e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10435372 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10435376 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10435378 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1043537c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1043537e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10435380 pop ebx */
  EBX = (pop32());
  /* 10435381 ret 0x10 */
  ESPCHK(0x10435350u, _esp0);
  ESP += 20; return;
}

/* FUN_10015390 @ 0x10435390 (46 bytes, 18 insns) */
void f_10435390(void) {
  FTRACE(0x10435390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10435390 push ebp */
  push32((uint32_t)(EBP));
  /* 10435391 mov ebp, esp */
  EBP = (ESP);
  /* 10435393 push ecx */
  push32((uint32_t)(ECX));
  /* 10435394 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10435396 call 0x104293e0 */
  push32(0x1043539bu); f_104293e0();
  /* 1043539b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043539e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104353a1 push eax */
  push32((uint32_t)(EAX));
  /* 104353a2 call 0x104353c0 */
  push32(0x104353a7u); f_104353c0();
  /* 104353a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104353aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104353ad push 0xc */
  push32((uint32_t)(0xcu));
  /* 104353af call 0x10429480 */
  push32(0x104353b4u); f_10429480();
  /* 104353b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104353b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104353ba mov esp, ebp */
  ESP = (EBP);
  /* 104353bc pop ebp */
  EBP = (pop32());
  /* 104353bd ret  */
  ESPCHK(0x10435390u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x104353c0 (198 bytes, 69 insns) */
void f_104353c0(void) {
  FTRACE(0x104353c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104353c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104353c1 mov ebp, esp */
  EBP = (ESP);
  /* 104353c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104353c6 mov eax, dword ptr [0x10451594] */
  EAX = (r32((uint32_t)(0x10451594)));
  /* 104353cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104353ce cmp dword ptr [0x104530a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104530a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104353d5 jne 0x104353de */
  if (!C.zf) goto L_104353de;
  /* 104353d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104353d9 jmp 0x10435482 */
  goto L_10435482;
L_104353de:;
  /* 104353de cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104353e2 jne 0x10435406 */
  if (!C.zf) goto L_10435406;
  /* 104353e4 cmp dword ptr [0x1045159c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1045159c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104353eb je 0x10435406 */
  if (C.zf) goto L_10435406;
  /* 104353ed call 0x104354e0 */
  push32(0x104353f2u); f_104354e0();
  /* 104353f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104353f4 je 0x104353fd */
  if (C.zf) goto L_104353fd;
  /* 104353f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104353f8 jmp 0x10435482 */
  goto L_10435482;
L_104353fd:;
  /* 104353fd mov ecx, dword ptr [0x10451594] */
  ECX = (r32((uint32_t)(0x10451594)));
  /* 10435403 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10435406:;
  /* 10435406 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043540a je 0x10435480 */
  if (C.zf) goto L_10435480;
  /* 1043540c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435410 je 0x10435480 */
  if (C.zf) goto L_10435480;
  /* 10435412 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10435415 push edx */
  push32((uint32_t)(EDX));
  /* 10435416 call 0x10428810 */
  push32(0x1043541bu); f_10428810();
  /* 1043541b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043541e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10435421:;
  /* 10435421 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10435424 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435427 je 0x10435480 */
  if (C.zf) goto L_10435480;
  /* 10435429 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1043542c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1043542e push edx */
  push32((uint32_t)(EDX));
  /* 1043542f call 0x10428810 */
  push32(0x10435434u); f_10428810();
  /* 10435434 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10435437 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043543a jbe 0x10435475 */
  if ((C.cf||C.zf)) goto L_10435475;
  /* 1043543c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1043543f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10435441 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10435444 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 10435448 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043544b jne 0x10435475 */
  if (!C.zf) goto L_10435475;
  /* 1043544d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10435450 push ecx */
  push32((uint32_t)(ECX));
  /* 10435451 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10435454 push edx */
  push32((uint32_t)(EDX));
  /* 10435455 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10435458 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1043545a push ecx */
  push32((uint32_t)(ECX));
  /* 1043545b call 0x10435490 */
  push32(0x10435460u); f_10435490();
  /* 10435460 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10435463 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10435465 jne 0x10435475 */
  if (!C.zf) goto L_10435475;
  /* 10435467 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1043546a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1043546c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1043546f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 10435473 jmp 0x10435482 */
  goto L_10435482;
L_10435475:;
  /* 10435475 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10435478 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1043547b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1043547e jmp 0x10435421 */
  goto L_10435421;
L_10435480:;
  /* 10435480 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10435482:;
  /* 10435482 mov esp, ebp */
  ESP = (EBP);
  /* 10435484 pop ebp */
  EBP = (pop32());
  /* 10435485 ret  */
  ESPCHK(0x104353c0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x10435490 (79 bytes, 32 insns) */
void f_10435490(void) {
  FTRACE(0x10435490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10435490 push ebp */
  push32((uint32_t)(EBP));
  /* 10435491 mov ebp, esp */
  EBP = (ESP);
  /* 10435493 push ecx */
  push32((uint32_t)(ECX));
  /* 10435494 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435498 jne 0x1043549e */
  if (!C.zf) goto L_1043549e;
  /* 1043549a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1043549c jmp 0x104354db */
  goto L_104354db;
L_1043549e:;
  /* 1043549e mov eax, dword ptr [0x10452c64] */
  EAX = (r32((uint32_t)(0x10452c64)));
  /* 104354a3 push eax */
  push32((uint32_t)(EAX));
  /* 104354a4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104354a7 push ecx */
  push32((uint32_t)(ECX));
  /* 104354a8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104354ab push edx */
  push32((uint32_t)(EDX));
  /* 104354ac mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104354af push eax */
  push32((uint32_t)(EAX));
  /* 104354b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104354b3 push ecx */
  push32((uint32_t)(ECX));
  /* 104354b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 104354b6 mov edx, dword ptr [0x10452f04] */
  EDX = (r32((uint32_t)(0x10452f04)));
  /* 104354bc push edx */
  push32((uint32_t)(EDX));
  /* 104354bd call 0x10435590 */
  push32(0x104354c2u); f_10435590();
  /* 104354c2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104354c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104354c8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104354cc jne 0x104354d5 */
  if (!C.zf) goto L_104354d5;
  /* 104354ce mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 104354d3 jmp 0x104354db */
  goto L_104354db;
L_104354d5:;
  /* 104354d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104354d8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_104354db:;
  /* 104354db mov esp, ebp */
  ESP = (EBP);
  /* 104354dd pop ebp */
  EBP = (pop32());
  /* 104354de ret  */
  ESPCHK(0x10435490u, _esp0);
  ESP += 4; return;
}

/* FUN_100154e0 @ 0x104354e0 (174 bytes, 66 insns) */
void f_104354e0(void) {
  FTRACE(0x104354e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104354e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104354e1 mov ebp, esp */
  EBP = (ESP);
  /* 104354e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104354e6 mov eax, dword ptr [0x1045159c] */
  EAX = (r32((uint32_t)(0x1045159c)));
  /* 104354eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104354ee:;
  /* 104354ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104354f1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104354f4 je 0x10435588 */
  if (C.zf) goto L_10435588;
  /* 104354fa push 0 */
  push32((uint32_t)(0x0u));
  /* 104354fc push 0 */
  push32((uint32_t)(0x0u));
  /* 104354fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10435500 push 0 */
  push32((uint32_t)(0x0u));
  /* 10435502 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10435504 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10435507 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10435509 push eax */
  push32((uint32_t)(EAX));
  /* 1043550a push 0 */
  push32((uint32_t)(0x0u));
  /* 1043550c push 1 */
  push32((uint32_t)(0x1u));
  /* 1043550e call dword ptr [0x10454364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454364))), 0x10435514u);
  /* 10435514 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10435517 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043551b jne 0x10435522 */
  if (!C.zf) goto L_10435522;
  /* 1043551d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10435520 jmp 0x1043558a */
  goto L_1043558a;
L_10435522:;
  /* 10435522 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10435524 push 0x1044da94 */
  push32((uint32_t)(0x1044da94u));
  /* 10435529 push 2 */
  push32((uint32_t)(0x2u));
  /* 1043552b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1043552e push ecx */
  push32((uint32_t)(ECX));
  /* 1043552f call 0x104259e0 */
  push32(0x10435534u); f_104259e0();
  /* 10435534 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10435537 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1043553a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043553e jne 0x10435545 */
  if (!C.zf) goto L_10435545;
  /* 10435540 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10435543 jmp 0x1043558a */
  goto L_1043558a;
L_10435545:;
  /* 10435545 push 0 */
  push32((uint32_t)(0x0u));
  /* 10435547 push 0 */
  push32((uint32_t)(0x0u));
  /* 10435549 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1043554c push edx */
  push32((uint32_t)(EDX));
  /* 1043554d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10435550 push eax */
  push32((uint32_t)(EAX));
  /* 10435551 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10435553 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10435556 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10435558 push edx */
  push32((uint32_t)(EDX));
  /* 10435559 push 0 */
  push32((uint32_t)(0x0u));
  /* 1043555b push 1 */
  push32((uint32_t)(0x1u));
  /* 1043555d call dword ptr [0x10454364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454364))), 0x10435563u);
  /* 10435563 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10435565 jne 0x1043556c */
  if (!C.zf) goto L_1043556c;
  /* 10435567 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1043556a jmp 0x1043558a */
  goto L_1043558a;
L_1043556c:;
  /* 1043556c push 0 */
  push32((uint32_t)(0x0u));
  /* 1043556e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10435571 push eax */
  push32((uint32_t)(EAX));
  /* 10435572 call 0x104359e0 */
  push32(0x10435577u); f_104359e0();
  /* 10435577 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043557a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1043557d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10435580 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10435583 jmp 0x104354ee */
  goto L_104354ee;
L_10435588:;
  /* 10435588 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1043558a:;
  /* 1043558a mov esp, ebp */
  ESP = (EBP);
  /* 1043558c pop ebp */
  EBP = (pop32());
  /* 1043558d ret  */
  ESPCHK(0x104354e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015590 @ 0x10435590 (970 bytes, 340 insns) */
void f_10435590(void) {
  FTRACE(0x10435590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10435590 push ebp */
  push32((uint32_t)(EBP));
  /* 10435591 mov ebp, esp */
  EBP = (ESP);
  /* 10435593 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10435595 push 0x1044dae8 */
  push32((uint32_t)(0x1044dae8u));
  /* 1043559a push 0x1042eae8 */
  push32((uint32_t)(0x1042eae8u));
  /* 1043559f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 104355a5 push eax */
  push32((uint32_t)(EAX));
  /* 104355a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 104355ad add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104355b0 push ebx */
  push32((uint32_t)(EBX));
  /* 104355b1 push esi */
  push32((uint32_t)(ESI));
  /* 104355b2 push edi */
  push32((uint32_t)(EDI));
  /* 104355b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 104355b6 cmp dword ptr [0x104518dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104518dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104355bd jne 0x10435616 */
  if (!C.zf) goto L_10435616;
  /* 104355bf push 1 */
  push32((uint32_t)(0x1u));
  /* 104355c1 push 0x1044d144 */
  push32((uint32_t)(0x1044d144u));
  /* 104355c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 104355c8 push 0x1044d144 */
  push32((uint32_t)(0x1044d144u));
  /* 104355cd push 0 */
  push32((uint32_t)(0x0u));
  /* 104355cf push 0 */
  push32((uint32_t)(0x0u));
  /* 104355d1 call dword ptr [0x10454280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454280))), 0x104355d7u);
  /* 104355d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104355d9 je 0x104355e7 */
  if (C.zf) goto L_104355e7;
  /* 104355db mov dword ptr [0x104518dc], 1 */
  w32((uint32_t)(0x104518dc), (0x1u));
  /* 104355e5 jmp 0x10435616 */
  goto L_10435616;
L_104355e7:;
  /* 104355e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 104355e9 push 0x1044d140 */
  push32((uint32_t)(0x1044d140u));
  /* 104355ee push 1 */
  push32((uint32_t)(0x1u));
  /* 104355f0 push 0x1044d140 */
  push32((uint32_t)(0x1044d140u));
  /* 104355f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104355f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104355f9 call dword ptr [0x1045428c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045428c))), 0x104355ffu);
  /* 104355ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10435601 je 0x1043560f */
  if (C.zf) goto L_1043560f;
  /* 10435603 mov dword ptr [0x104518dc], 2 */
  w32((uint32_t)(0x104518dc), (0x2u));
  /* 1043560d jmp 0x10435616 */
  goto L_10435616;
L_1043560f:;
  /* 1043560f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10435611 jmp 0x10435974 */
  goto L_10435974;
L_10435616:;
  /* 10435616 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043561a jle 0x1043562f */
  if ((C.zf||C.sf!=C.of)) goto L_1043562f;
  /* 1043561c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1043561f push eax */
  push32((uint32_t)(EAX));
  /* 10435620 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10435623 push ecx */
  push32((uint32_t)(ECX));
  /* 10435624 call 0x10435990 */
  push32(0x10435629u); f_10435990();
  /* 10435629 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043562c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1043562f:;
  /* 1043562f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435633 jle 0x10435648 */
  if ((C.zf||C.sf!=C.of)) goto L_10435648;
  /* 10435635 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10435638 push edx */
  push32((uint32_t)(EDX));
  /* 10435639 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1043563c push eax */
  push32((uint32_t)(EAX));
  /* 1043563d call 0x10435990 */
  push32(0x10435642u); f_10435990();
  /* 10435642 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10435645 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_10435648:;
  /* 10435648 cmp dword ptr [0x104518dc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x104518dc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043564f jne 0x10435674 */
  if (!C.zf) goto L_10435674;
  /* 10435651 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10435654 push ecx */
  push32((uint32_t)(ECX));
  /* 10435655 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10435658 push edx */
  push32((uint32_t)(EDX));
  /* 10435659 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1043565c push eax */
  push32((uint32_t)(EAX));
  /* 1043565d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10435660 push ecx */
  push32((uint32_t)(ECX));
  /* 10435661 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10435664 push edx */
  push32((uint32_t)(EDX));
  /* 10435665 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10435668 push eax */
  push32((uint32_t)(EAX));
  /* 10435669 call dword ptr [0x1045428c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045428c))), 0x1043566fu);
  /* 1043566f jmp 0x10435974 */
  goto L_10435974;
L_10435674:;
  /* 10435674 cmp dword ptr [0x104518dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x104518dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043567b jne 0x10435972 */
  if (!C.zf) goto L_10435972;
  /* 10435681 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435685 jne 0x10435690 */
  if (!C.zf) goto L_10435690;
  /* 10435687 mov ecx, dword ptr [0x10451788] */
  ECX = (r32((uint32_t)(0x10451788)));
  /* 1043568d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_10435690:;
  /* 10435690 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435694 je 0x104356a0 */
  if (C.zf) goto L_104356a0;
  /* 10435696 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043569a jne 0x1043581c */
  if (!C.zf) goto L_1043581c;
L_104356a0:;
  /* 104356a0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104356a3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104356a6 jne 0x104356b2 */
  if (!C.zf) goto L_104356b2;
  /* 104356a8 mov eax, 2 */
  EAX = (0x2u);
  /* 104356ad jmp 0x10435974 */
  goto L_10435974;
L_104356b2:;
  /* 104356b2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104356b6 jle 0x104356c2 */
  if ((C.zf||C.sf!=C.of)) goto L_104356c2;
  /* 104356b8 mov eax, 1 */
  EAX = (0x1u);
  /* 104356bd jmp 0x10435974 */
  goto L_10435974;
L_104356c2:;
  /* 104356c2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104356c6 jle 0x104356d2 */
  if ((C.zf||C.sf!=C.of)) goto L_104356d2;
  /* 104356c8 mov eax, 3 */
  EAX = (0x3u);
  /* 104356cd jmp 0x10435974 */
  goto L_10435974;
L_104356d2:;
  /* 104356d2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 104356d5 push eax */
  push32((uint32_t)(EAX));
  /* 104356d6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 104356d9 push ecx */
  push32((uint32_t)(ECX));
  /* 104356da call dword ptr [0x104542d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542d8))), 0x104356e0u);
  /* 104356e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104356e2 jne 0x104356eb */
  if (!C.zf) goto L_104356eb;
  /* 104356e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104356e6 jmp 0x10435974 */
  goto L_10435974;
L_104356eb:;
  /* 104356eb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104356ef jne 0x104356f7 */
  if (!C.zf) goto L_104356f7;
  /* 104356f1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104356f5 je 0x10435724 */
  if (C.zf) goto L_10435724;
L_104356f7:;
  /* 104356f7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104356fb jne 0x10435703 */
  if (!C.zf) goto L_10435703;
  /* 104356fd cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435701 je 0x10435724 */
  if (C.zf) goto L_10435724;
L_10435703:;
  /* 10435703 push 0x1044daa8 */
  push32((uint32_t)(0x1044daa8u));
  /* 10435708 push 0 */
  push32((uint32_t)(0x0u));
  /* 1043570a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 1043570f push 0x1044daa0 */
  push32((uint32_t)(0x1044daa0u));
  /* 10435714 push 2 */
  push32((uint32_t)(0x2u));
  /* 10435716 call 0x10424aa0 */
  push32(0x1043571bu); f_10424aa0();
  /* 1043571b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043571e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435721 jne 0x10435724 */
  if (!C.zf) goto L_10435724;
  /* 10435723 int3  */
  x86_unimpl("int3 @ 0x10435723");
L_10435724:;
  /* 10435724 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10435726 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10435728 jne 0x104356eb */
  if (!C.zf) goto L_104356eb;
  /* 1043572a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043572e jle 0x104357a3 */
  if ((C.zf||C.sf!=C.of)) goto L_104357a3;
  /* 10435730 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435734 jae 0x10435740 */
  if (!C.cf) goto L_10435740;
  /* 10435736 mov eax, 3 */
  EAX = (0x3u);
  /* 1043573b jmp 0x10435974 */
  goto L_10435974;
L_10435740:;
  /* 10435740 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 10435743 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 10435746 jmp 0x10435751 */
  goto L_10435751;
L_10435748:;
  /* 10435748 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1043574b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1043574e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_10435751:;
  /* 10435751 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10435754 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10435756 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10435758 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1043575a je 0x10435799 */
  if (C.zf) goto L_10435799;
  /* 1043575c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1043575f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10435761 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10435764 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10435766 je 0x10435799 */
  if (C.zf) goto L_10435799;
  /* 10435768 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1043576b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1043576d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1043576f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10435772 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10435774 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10435776 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435778 jl 0x10435797 */
  if ((C.sf!=C.of)) goto L_10435797;
  /* 1043577a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1043577d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1043577f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10435781 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10435784 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10435786 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10435789 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043578b jg 0x10435797 */
  if ((!C.zf&&C.sf==C.of)) goto L_10435797;
  /* 1043578d mov eax, 2 */
  EAX = (0x2u);
  /* 10435792 jmp 0x10435974 */
  goto L_10435974;
L_10435797:;
  /* 10435797 jmp 0x10435748 */
  goto L_10435748;
L_10435799:;
  /* 10435799 mov eax, 3 */
  EAX = (0x3u);
  /* 1043579e jmp 0x10435974 */
  goto L_10435974;
L_104357a3:;
  /* 104357a3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104357a7 jle 0x1043581c */
  if ((C.zf||C.sf!=C.of)) goto L_1043581c;
  /* 104357a9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104357ad jae 0x104357b9 */
  if (!C.cf) goto L_104357b9;
  /* 104357af mov eax, 1 */
  EAX = (0x1u);
  /* 104357b4 jmp 0x10435974 */
  goto L_10435974;
L_104357b9:;
  /* 104357b9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 104357bc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 104357bf jmp 0x104357ca */
  goto L_104357ca;
L_104357c1:;
  /* 104357c1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 104357c4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104357c7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_104357ca:;
  /* 104357ca mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 104357cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104357cf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104357d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104357d3 je 0x10435812 */
  if (C.zf) goto L_10435812;
  /* 104357d5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 104357d8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104357da mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 104357dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104357df je 0x10435812 */
  if (C.zf) goto L_10435812;
  /* 104357e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104357e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104357e6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104357e8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 104357eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104357ed mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104357ef cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104357f1 jl 0x10435810 */
  if ((C.sf!=C.of)) goto L_10435810;
  /* 104357f3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104357f6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104357f8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104357fa mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 104357fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104357ff mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10435802 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435804 jg 0x10435810 */
  if ((!C.zf&&C.sf==C.of)) goto L_10435810;
  /* 10435806 mov eax, 2 */
  EAX = (0x2u);
  /* 1043580b jmp 0x10435974 */
  goto L_10435974;
L_10435810:;
  /* 10435810 jmp 0x104357c1 */
  goto L_104357c1;
L_10435812:;
  /* 10435812 mov eax, 1 */
  EAX = (0x1u);
  /* 10435817 jmp 0x10435974 */
  goto L_10435974;
L_1043581c:;
  /* 1043581c push 0 */
  push32((uint32_t)(0x0u));
  /* 1043581e push 0 */
  push32((uint32_t)(0x0u));
  /* 10435820 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10435823 push ecx */
  push32((uint32_t)(ECX));
  /* 10435824 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10435827 push edx */
  push32((uint32_t)(EDX));
  /* 10435828 push 9 */
  push32((uint32_t)(0x9u));
  /* 1043582a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1043582d push eax */
  push32((uint32_t)(EAX));
  /* 1043582e call dword ptr [0x104542cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542cc))), 0x10435834u);
  /* 10435834 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10435837 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043583b jne 0x10435844 */
  if (!C.zf) goto L_10435844;
  /* 1043583d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1043583f jmp 0x10435974 */
  goto L_10435974;
L_10435844:;
  /* 10435844 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1043584b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1043584e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10435850 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10435853 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10435855 call 0x10428b80 */
  push32(0x1043585au); f_10428b80();
  /* 1043585a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 1043585d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10435860 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10435863 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10435866 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1043586d jmp 0x10435886 */
  goto L_10435886;
  /* 1043586f mov eax, 1 */
  EAX = (0x1u);
  /* 10435874 ret  */
  ESPCHK(0x10435590u, _esp0);
  ESP += 4; return;
  /* 10435875 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10435878 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1043587f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10435886:;
  /* 10435886 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043588a jne 0x10435893 */
  if (!C.zf) goto L_10435893;
  /* 1043588c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1043588e jmp 0x10435974 */
  goto L_10435974;
L_10435893:;
  /* 10435893 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10435896 push edx */
  push32((uint32_t)(EDX));
  /* 10435897 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1043589a push eax */
  push32((uint32_t)(EAX));
  /* 1043589b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1043589e push ecx */
  push32((uint32_t)(ECX));
  /* 1043589f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104358a2 push edx */
  push32((uint32_t)(EDX));
  /* 104358a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 104358a5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 104358a8 push eax */
  push32((uint32_t)(EAX));
  /* 104358a9 call dword ptr [0x104542cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542cc))), 0x104358afu);
  /* 104358af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104358b1 jne 0x104358ba */
  if (!C.zf) goto L_104358ba;
  /* 104358b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104358b5 jmp 0x10435974 */
  goto L_10435974;
L_104358ba:;
  /* 104358ba push 0 */
  push32((uint32_t)(0x0u));
  /* 104358bc push 0 */
  push32((uint32_t)(0x0u));
  /* 104358be mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 104358c1 push ecx */
  push32((uint32_t)(ECX));
  /* 104358c2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104358c5 push edx */
  push32((uint32_t)(EDX));
  /* 104358c6 push 9 */
  push32((uint32_t)(0x9u));
  /* 104358c8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 104358cb push eax */
  push32((uint32_t)(EAX));
  /* 104358cc call dword ptr [0x104542cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542cc))), 0x104358d2u);
  /* 104358d2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 104358d5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104358d9 jne 0x104358e2 */
  if (!C.zf) goto L_104358e2;
  /* 104358db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104358dd jmp 0x10435974 */
  goto L_10435974;
L_104358e2:;
  /* 104358e2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 104358e9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104358ec shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 104358ee add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104358f1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 104358f3 call 0x10428b80 */
  push32(0x104358f8u); f_10428b80();
  /* 104358f8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 104358fb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 104358fe mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 10435901 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10435904 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1043590b jmp 0x10435924 */
  goto L_10435924;
  /* 1043590d mov eax, 1 */
  EAX = (0x1u);
  /* 10435912 ret  */
  ESPCHK(0x10435590u, _esp0);
  ESP += 4; return;
  /* 10435913 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10435916 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1043591d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10435924:;
  /* 10435924 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435928 jne 0x1043592e */
  if (!C.zf) goto L_1043592e;
  /* 1043592a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1043592c jmp 0x10435974 */
  goto L_10435974;
L_1043592e:;
  /* 1043592e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10435931 push edx */
  push32((uint32_t)(EDX));
  /* 10435932 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10435935 push eax */
  push32((uint32_t)(EAX));
  /* 10435936 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10435939 push ecx */
  push32((uint32_t)(ECX));
  /* 1043593a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1043593d push edx */
  push32((uint32_t)(EDX));
  /* 1043593e push 1 */
  push32((uint32_t)(0x1u));
  /* 10435940 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10435943 push eax */
  push32((uint32_t)(EAX));
  /* 10435944 call dword ptr [0x104542cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542cc))), 0x1043594au);
  /* 1043594a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1043594c jne 0x10435952 */
  if (!C.zf) goto L_10435952;
  /* 1043594e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10435950 jmp 0x10435974 */
  goto L_10435974;
L_10435952:;
  /* 10435952 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10435955 push ecx */
  push32((uint32_t)(ECX));
  /* 10435956 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10435959 push edx */
  push32((uint32_t)(EDX));
  /* 1043595a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1043595d push eax */
  push32((uint32_t)(EAX));
  /* 1043595e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10435961 push ecx */
  push32((uint32_t)(ECX));
  /* 10435962 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10435965 push edx */
  push32((uint32_t)(EDX));
  /* 10435966 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10435969 push eax */
  push32((uint32_t)(EAX));
  /* 1043596a call dword ptr [0x10454280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454280))), 0x10435970u);
  /* 10435970 jmp 0x10435974 */
  goto L_10435974;
L_10435972:;
  /* 10435972 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10435974:;
  /* 10435974 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 10435977 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1043597a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10435981 pop edi */
  EDI = (pop32());
  /* 10435982 pop esi */
  ESI = (pop32());
  /* 10435983 pop ebx */
  EBX = (pop32());
  /* 10435984 mov esp, ebp */
  ESP = (EBP);
  /* 10435986 pop ebp */
  EBP = (pop32());
  /* 10435987 ret  */
  ESPCHK(0x10435590u, _esp0);
  ESP += 4; return;
}

/* FUN_10015990 @ 0x10435990 (80 bytes, 32 insns) */
void f_10435990(void) {
  FTRACE(0x10435990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10435990 push ebp */
  push32((uint32_t)(EBP));
  /* 10435991 mov ebp, esp */
  EBP = (ESP);
  /* 10435993 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10435996 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10435999 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1043599c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043599f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104359a2:;
  /* 104359a2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104359a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104359a8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104359ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104359ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104359b0 je 0x104359c7 */
  if (C.zf) goto L_104359c7;
  /* 104359b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104359b5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104359b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104359ba je 0x104359c7 */
  if (C.zf) goto L_104359c7;
  /* 104359bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104359bf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104359c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104359c5 jmp 0x104359a2 */
  goto L_104359a2;
L_104359c7:;
  /* 104359c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104359ca movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104359cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104359cf jne 0x104359d9 */
  if (!C.zf) goto L_104359d9;
  /* 104359d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104359d4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104359d7 jmp 0x104359dc */
  goto L_104359dc;
L_104359d9:;
  /* 104359d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_104359dc:;
  /* 104359dc mov esp, ebp */
  ESP = (EBP);
  /* 104359de pop ebp */
  EBP = (pop32());
  /* 104359df ret  */
  ESPCHK(0x10435990u, _esp0);
  ESP += 4; return;
}

/* FUN_100159e0 @ 0x104359e0 (736 bytes, 224 insns) */
void f_104359e0(void) {
  FTRACE(0x104359e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104359e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104359e1 mov ebp, esp */
  EBP = (ESP);
  /* 104359e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104359e6 push esi */
  push32((uint32_t)(ESI));
  /* 104359e7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104359eb je 0x10435a0c */
  if (C.zf) goto L_10435a0c;
  /* 104359ed push 0x3d */
  push32((uint32_t)(0x3du));
  /* 104359ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104359f2 push eax */
  push32((uint32_t)(EAX));
  /* 104359f3 call 0x10435e30 */
  push32(0x104359f8u); f_10435e30();
  /* 104359f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104359fb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104359fe cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435a02 je 0x10435a0c */
  if (C.zf) goto L_10435a0c;
  /* 10435a04 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10435a07 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435a0a jne 0x10435a14 */
  if (!C.zf) goto L_10435a14;
L_10435a0c:;
  /* 10435a0c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10435a0f jmp 0x10435cbb */
  goto L_10435cbb;
L_10435a14:;
  /* 10435a14 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10435a17 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10435a1b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10435a1d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10435a1f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10435a20 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10435a23 mov ecx, dword ptr [0x10451594] */
  ECX = (r32((uint32_t)(0x10451594)));
  /* 10435a29 cmp ecx, dword ptr [0x10451598] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10451598))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435a2f jne 0x10435a45 */
  if (!C.zf) goto L_10435a45;
  /* 10435a31 mov edx, dword ptr [0x10451594] */
  EDX = (r32((uint32_t)(0x10451594)));
  /* 10435a37 push edx */
  push32((uint32_t)(EDX));
  /* 10435a38 call 0x10435d40 */
  push32(0x10435a3du); f_10435d40();
  /* 10435a3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10435a40 mov dword ptr [0x10451594], eax */
  w32((uint32_t)(0x10451594), (EAX));
L_10435a45:;
  /* 10435a45 cmp dword ptr [0x10451594], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10451594))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435a4c jne 0x10435b05 */
  if (!C.zf) goto L_10435b05;
  /* 10435a52 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435a56 je 0x10435a77 */
  if (C.zf) goto L_10435a77;
  /* 10435a58 cmp dword ptr [0x1045159c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1045159c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435a5f je 0x10435a77 */
  if (C.zf) goto L_10435a77;
  /* 10435a61 call 0x104354e0 */
  push32(0x10435a66u); f_104354e0();
  /* 10435a66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10435a68 je 0x10435a72 */
  if (C.zf) goto L_10435a72;
  /* 10435a6a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10435a6d jmp 0x10435cbb */
  goto L_10435cbb;
L_10435a72:;
  /* 10435a72 jmp 0x10435b05 */
  goto L_10435b05;
L_10435a77:;
  /* 10435a77 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435a7b je 0x10435a84 */
  if (C.zf) goto L_10435a84;
  /* 10435a7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10435a7f jmp 0x10435cbb */
  goto L_10435cbb;
L_10435a84:;
  /* 10435a84 cmp dword ptr [0x10451594], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10451594))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435a8b jne 0x10435ac4 */
  if (!C.zf) goto L_10435ac4;
  /* 10435a8d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10435a92 push 0x1044db00 */
  push32((uint32_t)(0x1044db00u));
  /* 10435a97 push 2 */
  push32((uint32_t)(0x2u));
  /* 10435a99 push 4 */
  push32((uint32_t)(0x4u));
  /* 10435a9b call 0x104259e0 */
  push32(0x10435aa0u); f_104259e0();
  /* 10435aa0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10435aa3 mov dword ptr [0x10451594], eax */
  w32((uint32_t)(0x10451594), (EAX));
  /* 10435aa8 cmp dword ptr [0x10451594], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10451594))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435aaf jne 0x10435ab9 */
  if (!C.zf) goto L_10435ab9;
  /* 10435ab1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10435ab4 jmp 0x10435cbb */
  goto L_10435cbb;
L_10435ab9:;
  /* 10435ab9 mov eax, dword ptr [0x10451594] */
  EAX = (r32((uint32_t)(0x10451594)));
  /* 10435abe mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10435ac4:;
  /* 10435ac4 cmp dword ptr [0x1045159c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1045159c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435acb jne 0x10435b05 */
  if (!C.zf) goto L_10435b05;
  /* 10435acd push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 10435ad2 push 0x1044db00 */
  push32((uint32_t)(0x1044db00u));
  /* 10435ad7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10435ad9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10435adb call 0x104259e0 */
  push32(0x10435ae0u); f_104259e0();
  /* 10435ae0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10435ae3 mov dword ptr [0x1045159c], eax */
  w32((uint32_t)(0x1045159c), (EAX));
  /* 10435ae8 cmp dword ptr [0x1045159c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1045159c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435aef jne 0x10435af9 */
  if (!C.zf) goto L_10435af9;
  /* 10435af1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10435af4 jmp 0x10435cbb */
  goto L_10435cbb;
L_10435af9:;
  /* 10435af9 mov ecx, dword ptr [0x1045159c] */
  ECX = (r32((uint32_t)(0x1045159c)));
  /* 10435aff mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_10435b05:;
  /* 10435b05 mov edx, dword ptr [0x10451594] */
  EDX = (r32((uint32_t)(0x10451594)));
  /* 10435b0b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10435b0e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10435b11 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10435b14 push eax */
  push32((uint32_t)(EAX));
  /* 10435b15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10435b18 push ecx */
  push32((uint32_t)(ECX));
  /* 10435b19 call 0x10435cc0 */
  push32(0x10435b1eu); f_10435cc0();
  /* 10435b1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10435b21 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10435b24 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435b28 jl 0x10435bc1 */
  if ((C.sf!=C.of)) goto L_10435bc1;
  /* 10435b2e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10435b31 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435b34 je 0x10435bc1 */
  if (C.zf) goto L_10435bc1;
  /* 10435b3a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435b3e je 0x10435bb3 */
  if (C.zf) goto L_10435bb3;
  /* 10435b40 push 2 */
  push32((uint32_t)(0x2u));
  /* 10435b42 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10435b45 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10435b48 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10435b4b push edx */
  push32((uint32_t)(EDX));
  /* 10435b4c call 0x10426470 */
  push32(0x10435b51u); f_10426470();
  /* 10435b51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10435b54 jmp 0x10435b5f */
  goto L_10435b5f;
L_10435b56:;
  /* 10435b56 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10435b59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10435b5c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10435b5f:;
  /* 10435b5f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10435b62 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10435b65 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435b69 je 0x10435b80 */
  if (C.zf) goto L_10435b80;
  /* 10435b6b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10435b6e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10435b71 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10435b74 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10435b77 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 10435b7b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10435b7e jmp 0x10435b56 */
  goto L_10435b56;
L_10435b80:;
  /* 10435b80 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 10435b85 push 0x1044db00 */
  push32((uint32_t)(0x1044db00u));
  /* 10435b8a push 2 */
  push32((uint32_t)(0x2u));
  /* 10435b8c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10435b8f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10435b92 push eax */
  push32((uint32_t)(EAX));
  /* 10435b93 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10435b96 push ecx */
  push32((uint32_t)(ECX));
  /* 10435b97 call 0x10425e70 */
  push32(0x10435b9cu); f_10425e70();
  /* 10435b9c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10435b9f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10435ba2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435ba6 je 0x10435bb1 */
  if (C.zf) goto L_10435bb1;
  /* 10435ba8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10435bab mov dword ptr [0x10451594], edx */
  w32((uint32_t)(0x10451594), (EDX));
L_10435bb1:;
  /* 10435bb1 jmp 0x10435bbf */
  goto L_10435bbf;
L_10435bb3:;
  /* 10435bb3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10435bb6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10435bb9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10435bbc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_10435bbf:;
  /* 10435bbf jmp 0x10435c34 */
  goto L_10435c34;
L_10435bc1:;
  /* 10435bc1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435bc5 jne 0x10435c2d */
  if (!C.zf) goto L_10435c2d;
  /* 10435bc7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435bcb jge 0x10435bd5 */
  if ((C.sf==C.of)) goto L_10435bd5;
  /* 10435bcd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10435bd0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10435bd2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10435bd5:;
  /* 10435bd5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 10435bda push 0x1044db00 */
  push32((uint32_t)(0x1044db00u));
  /* 10435bdf push 2 */
  push32((uint32_t)(0x2u));
  /* 10435be1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10435be4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 10435beb push edx */
  push32((uint32_t)(EDX));
  /* 10435bec mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10435bef push eax */
  push32((uint32_t)(EAX));
  /* 10435bf0 call 0x10425e70 */
  push32(0x10435bf5u); f_10425e70();
  /* 10435bf5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10435bf8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10435bfb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435bff jne 0x10435c09 */
  if (!C.zf) goto L_10435c09;
  /* 10435c01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10435c04 jmp 0x10435cbb */
  goto L_10435cbb;
L_10435c09:;
  /* 10435c09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10435c0c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10435c0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10435c12 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10435c15 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10435c18 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10435c1b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 10435c23 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10435c26 mov dword ptr [0x10451594], eax */
  w32((uint32_t)(0x10451594), (EAX));
  /* 10435c2b jmp 0x10435c34 */
  goto L_10435c34;
L_10435c2d:;
  /* 10435c2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10435c2f jmp 0x10435cbb */
  goto L_10435cbb;
L_10435c34:;
  /* 10435c34 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435c38 je 0x10435cb9 */
  if (C.zf) goto L_10435cb9;
  /* 10435c3a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 10435c3f push 0x1044db00 */
  push32((uint32_t)(0x1044db00u));
  /* 10435c44 push 2 */
  push32((uint32_t)(0x2u));
  /* 10435c46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10435c49 push ecx */
  push32((uint32_t)(ECX));
  /* 10435c4a call 0x10428810 */
  push32(0x10435c4fu); f_10428810();
  /* 10435c4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10435c52 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10435c55 push eax */
  push32((uint32_t)(EAX));
  /* 10435c56 call 0x104259e0 */
  push32(0x10435c5bu); f_104259e0();
  /* 10435c5b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10435c5e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10435c61 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435c65 je 0x10435cb9 */
  if (C.zf) goto L_10435cb9;
  /* 10435c67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10435c6a push edx */
  push32((uint32_t)(EDX));
  /* 10435c6b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10435c6e push eax */
  push32((uint32_t)(EAX));
  /* 10435c6f call 0x10428990 */
  push32(0x10435c74u); f_10428990();
  /* 10435c74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10435c77 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10435c7a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10435c7d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10435c80 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10435c82 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10435c85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10435c88 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10435c8b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10435c8e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10435c91 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10435c94 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10435c97 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10435c99 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10435c9b not edx */
  EDX = (~(EDX));
  /* 10435c9d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10435ca0 push edx */
  push32((uint32_t)(EDX));
  /* 10435ca1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10435ca4 push eax */
  push32((uint32_t)(EAX));
  /* 10435ca5 call dword ptr [0x1045427c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045427c))), 0x10435cabu);
  /* 10435cab push 2 */
  push32((uint32_t)(0x2u));
  /* 10435cad mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10435cb0 push ecx */
  push32((uint32_t)(ECX));
  /* 10435cb1 call 0x10426470 */
  push32(0x10435cb6u); f_10426470();
  /* 10435cb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10435cb9:;
  /* 10435cb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10435cbb:;
  /* 10435cbb pop esi */
  ESI = (pop32());
  /* 10435cbc mov esp, ebp */
  ESP = (EBP);
  /* 10435cbe pop ebp */
  EBP = (pop32());
  /* 10435cbf ret  */
  ESPCHK(0x104359e0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x10435cc0 (124 bytes, 47 insns) */
void f_10435cc0(void) {
  FTRACE(0x10435cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10435cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10435cc1 mov ebp, esp */
  EBP = (ESP);
  /* 10435cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10435cc4 mov eax, dword ptr [0x10451594] */
  EAX = (r32((uint32_t)(0x10451594)));
  /* 10435cc9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10435ccc jmp 0x10435cd7 */
  goto L_10435cd7;
L_10435cce:;
  /* 10435cce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10435cd1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10435cd4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10435cd7:;
  /* 10435cd7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10435cda cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435cdd je 0x10435d2a */
  if (C.zf) goto L_10435d2a;
  /* 10435cdf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10435ce2 push eax */
  push32((uint32_t)(EAX));
  /* 10435ce3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10435ce6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10435ce8 push edx */
  push32((uint32_t)(EDX));
  /* 10435ce9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10435cec push eax */
  push32((uint32_t)(EAX));
  /* 10435ced call 0x10435490 */
  push32(0x10435cf2u); f_10435490();
  /* 10435cf2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10435cf5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10435cf7 jne 0x10435d28 */
  if (!C.zf) goto L_10435d28;
  /* 10435cf9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10435cfc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10435cfe mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10435d01 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 10435d05 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435d08 je 0x10435d1a */
  if (C.zf) goto L_10435d1a;
  /* 10435d0a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10435d0d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10435d0f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10435d12 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 10435d16 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10435d18 jne 0x10435d28 */
  if (!C.zf) goto L_10435d28;
L_10435d1a:;
  /* 10435d1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10435d1d sub eax, dword ptr [0x10451594] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10451594))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10435d23 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10435d26 jmp 0x10435d38 */
  goto L_10435d38;
L_10435d28:;
  /* 10435d28 jmp 0x10435cce */
  goto L_10435cce;
L_10435d2a:;
  /* 10435d2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10435d2d sub eax, dword ptr [0x10451594] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10451594))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10435d33 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10435d36 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10435d38:;
  /* 10435d38 mov esp, ebp */
  ESP = (EBP);
  /* 10435d3a pop ebp */
  EBP = (pop32());
  /* 10435d3b ret  */
  ESPCHK(0x10435cc0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x10435d40 (238 bytes, 80 insns) */
void f_10435d40(void) {
  FTRACE(0x10435d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10435d40 push ebp */
  push32((uint32_t)(EBP));
  /* 10435d41 mov ebp, esp */
  EBP = (ESP);
  /* 10435d43 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10435d46 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10435d4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10435d50 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10435d53 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435d57 jne 0x10435d60 */
  if (!C.zf) goto L_10435d60;
  /* 10435d59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10435d5b jmp 0x10435e2a */
  goto L_10435e2a;
L_10435d60:;
  /* 10435d60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10435d63 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10435d65 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10435d68 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10435d6b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10435d6e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10435d70 je 0x10435d7d */
  if (C.zf) goto L_10435d7d;
  /* 10435d72 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10435d75 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10435d78 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10435d7b jmp 0x10435d60 */
  goto L_10435d60;
L_10435d7d:;
  /* 10435d7d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 10435d82 push 0x1044db00 */
  push32((uint32_t)(0x1044db00u));
  /* 10435d87 push 2 */
  push32((uint32_t)(0x2u));
  /* 10435d89 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10435d8c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 10435d93 push eax */
  push32((uint32_t)(EAX));
  /* 10435d94 call 0x104259e0 */
  push32(0x10435d99u); f_104259e0();
  /* 10435d99 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10435d9c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10435d9f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10435da2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10435da5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435da9 jne 0x10435db5 */
  if (!C.zf) goto L_10435db5;
  /* 10435dab push 9 */
  push32((uint32_t)(0x9u));
  /* 10435dad call 0x10424950 */
  push32(0x10435db2u); f_10424950();
  /* 10435db2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10435db5:;
  /* 10435db5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10435db8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10435dbb:;
  /* 10435dbb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10435dbe cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435dc1 je 0x10435e1e */
  if (C.zf) goto L_10435e1e;
  /* 10435dc3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 10435dc8 push 0x1044db00 */
  push32((uint32_t)(0x1044db00u));
  /* 10435dcd push 2 */
  push32((uint32_t)(0x2u));
  /* 10435dcf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10435dd2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10435dd4 push edx */
  push32((uint32_t)(EDX));
  /* 10435dd5 call 0x10428810 */
  push32(0x10435ddau); f_10428810();
  /* 10435dda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10435ddd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10435de0 push eax */
  push32((uint32_t)(EAX));
  /* 10435de1 call 0x104259e0 */
  push32(0x10435de6u); f_104259e0();
  /* 10435de6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10435de9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10435dec mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10435dee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10435df1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435df4 je 0x10435e0a */
  if (C.zf) goto L_10435e0a;
  /* 10435df6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10435df9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10435dfb push ecx */
  push32((uint32_t)(ECX));
  /* 10435dfc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10435dff mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10435e01 push eax */
  push32((uint32_t)(EAX));
  /* 10435e02 call 0x10428990 */
  push32(0x10435e07u); f_10428990();
  /* 10435e07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10435e0a:;
  /* 10435e0a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10435e0d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10435e10 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10435e13 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10435e16 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10435e19 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10435e1c jmp 0x10435dbb */
  goto L_10435dbb;
L_10435e1e:;
  /* 10435e1e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10435e21 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10435e27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10435e2a:;
  /* 10435e2a mov esp, ebp */
  ESP = (EBP);
  /* 10435e2c pop ebp */
  EBP = (pop32());
  /* 10435e2d ret  */
  ESPCHK(0x10435d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10015e30 @ 0x10435e30 (237 bytes, 81 insns) */
void f_10435e30(void) {
  FTRACE(0x10435e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10435e30 push ebp */
  push32((uint32_t)(EBP));
  /* 10435e31 mov ebp, esp */
  EBP = (ESP);
  /* 10435e33 push ecx */
  push32((uint32_t)(ECX));
  /* 10435e34 cmp dword ptr [0x10452cec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10452cec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435e3b jne 0x10435e52 */
  if (!C.zf) goto L_10435e52;
  /* 10435e3d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10435e40 push eax */
  push32((uint32_t)(EAX));
  /* 10435e41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10435e44 push ecx */
  push32((uint32_t)(ECX));
  /* 10435e45 call 0x10435f30 */
  push32(0x10435e4au); f_10435f30();
  /* 10435e4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10435e4d jmp 0x10435f19 */
  goto L_10435f19;
L_10435e52:;
  /* 10435e52 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10435e54 call 0x104293e0 */
  push32(0x10435e59u); f_104293e0();
  /* 10435e59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10435e5c jmp 0x10435e67 */
  goto L_10435e67;
L_10435e5e:;
  /* 10435e5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10435e61 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10435e64 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10435e67:;
  /* 10435e67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10435e6a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 10435e6e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10435e72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10435e75 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10435e7b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10435e7d je 0x10435efb */
  if (C.zf) goto L_10435efb;
  /* 10435e7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10435e82 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10435e87 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10435e89 mov cl, byte ptr [eax + 0x10452e01] */
  CL = (r8((uint32_t)(EAX + 0x10452e01)));
  /* 10435e8f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10435e92 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10435e94 je 0x10435ee6 */
  if (C.zf) goto L_10435ee6;
  /* 10435e96 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10435e99 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10435e9c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10435e9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10435ea2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10435ea4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10435ea6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10435ea8 jne 0x10435eb8 */
  if (!C.zf) goto L_10435eb8;
  /* 10435eaa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10435eac call 0x10429480 */
  push32(0x10435eb1u); f_10429480();
  /* 10435eb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10435eb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10435eb6 jmp 0x10435f19 */
  goto L_10435f19;
L_10435eb8:;
  /* 10435eb8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10435ebb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10435ec1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10435ec4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10435ec7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10435ec9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10435ecb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10435ecd cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435ed0 jne 0x10435ee4 */
  if (!C.zf) goto L_10435ee4;
  /* 10435ed2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10435ed4 call 0x10429480 */
  push32(0x10435ed9u); f_10429480();
  /* 10435ed9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10435edc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10435edf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10435ee2 jmp 0x10435f19 */
  goto L_10435f19;
L_10435ee4:;
  /* 10435ee4 jmp 0x10435ef6 */
  goto L_10435ef6;
L_10435ee6:;
  /* 10435ee6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10435ee9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10435eef cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435ef2 jne 0x10435ef6 */
  if (!C.zf) goto L_10435ef6;
  /* 10435ef4 jmp 0x10435efb */
  goto L_10435efb;
L_10435ef6:;
  /* 10435ef6 jmp 0x10435e5e */
  goto L_10435e5e;
L_10435efb:;
  /* 10435efb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10435efd call 0x10429480 */
  push32(0x10435f02u); f_10429480();
  /* 10435f02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10435f05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10435f08 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10435f0d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10435f10 jne 0x10435f17 */
  if (!C.zf) goto L_10435f17;
  /* 10435f12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10435f15 jmp 0x10435f19 */
  goto L_10435f19;
L_10435f17:;
  /* 10435f17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10435f19:;
  /* 10435f19 mov esp, ebp */
  ESP = (EBP);
  /* 10435f1b pop ebp */
  EBP = (pop32());
  /* 10435f1c ret  */
  ESPCHK(0x10435e30u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x10435f30 (193 bytes, 87 insns) */
void f_10435f30(void) {
  FTRACE(0x10435f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10435f30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10435f32 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10435f36 push ebx */
  push32((uint32_t)(EBX));
  /* 10435f37 mov ebx, eax */
  EBX = (EAX);
  /* 10435f39 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10435f3c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10435f40 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10435f46 je 0x10435f5b */
  if (C.zf) goto L_10435f5b;
L_10435f48:;
  /* 10435f48 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 10435f4a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10435f4b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10435f4d je 0x10435f20 */
  if (C.zf) { jmp_ind(0x10435f20u); return; }
  /* 10435f4f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10435f51 je 0x10435fa4 */
  if (C.zf) goto L_10435fa4;
  /* 10435f53 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10435f59 jne 0x10435f48 */
  if (!C.zf) goto L_10435f48;
L_10435f5b:;
  /* 10435f5b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 10435f5d push edi */
  push32((uint32_t)(EDI));
  /* 10435f5e mov eax, ebx */
  EAX = (EBX);
  /* 10435f60 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 10435f63 push esi */
  push32((uint32_t)(ESI));
  /* 10435f64 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_10435f66:;
  /* 10435f66 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10435f68 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 10435f6d mov eax, ecx */
  EAX = (ECX);
  /* 10435f6f mov esi, edi */
  ESI = (EDI);
  /* 10435f71 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 10435f73 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10435f75 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10435f77 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10435f7a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10435f7d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10435f7f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10435f81 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10435f84 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 10435f8a jne 0x10435fa8 */
  if (!C.zf) goto L_10435fa8;
  /* 10435f8c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10435f91 je 0x10435f66 */
  if (C.zf) goto L_10435f66;
  /* 10435f93 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10435f98 jne 0x10435fa2 */
  if (!C.zf) goto L_10435fa2;
  /* 10435f9a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 10435fa0 jne 0x10435f66 */
  if (!C.zf) goto L_10435f66;
L_10435fa2:;
  /* 10435fa2 pop esi */
  ESI = (pop32());
  /* 10435fa3 pop edi */
  EDI = (pop32());
L_10435fa4:;
  /* 10435fa4 pop ebx */
  EBX = (pop32());
  /* 10435fa5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10435fa7 ret  */
  ESPCHK(0x10435f30u, _esp0);
  ESP += 4; return;
L_10435fa8:;
  /* 10435fa8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10435fab cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10435fad je 0x10435fe5 */
  if (C.zf) goto L_10435fe5;
  /* 10435faf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10435fb1 je 0x10435fa2 */
  if (C.zf) goto L_10435fa2;
  /* 10435fb3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10435fb5 je 0x10435fde */
  if (C.zf) goto L_10435fde;
  /* 10435fb7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10435fb9 je 0x10435fa2 */
  if (C.zf) goto L_10435fa2;
  /* 10435fbb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10435fbe cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10435fc0 je 0x10435fd7 */
  if (C.zf) goto L_10435fd7;
  /* 10435fc2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10435fc4 je 0x10435fa2 */
  if (C.zf) goto L_10435fa2;
  /* 10435fc6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10435fc8 je 0x10435fd0 */
  if (C.zf) goto L_10435fd0;
  /* 10435fca test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10435fcc je 0x10435fa2 */
  if (C.zf) goto L_10435fa2;
  /* 10435fce jmp 0x10435f66 */
  goto L_10435f66;
L_10435fd0:;
  /* 10435fd0 pop esi */
  ESI = (pop32());
  /* 10435fd1 pop edi */
  EDI = (pop32());
  /* 10435fd2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 10435fd5 pop ebx */
  EBX = (pop32());
  /* 10435fd6 ret  */
  ESPCHK(0x10435f30u, _esp0);
  ESP += 4; return;
L_10435fd7:;
  /* 10435fd7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 10435fda pop esi */
  ESI = (pop32());
  /* 10435fdb pop edi */
  EDI = (pop32());
  /* 10435fdc pop ebx */
  EBX = (pop32());
  /* 10435fdd ret  */
  ESPCHK(0x10435f30u, _esp0);
  ESP += 4; return;
L_10435fde:;
  /* 10435fde lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 10435fe1 pop esi */
  ESI = (pop32());
  /* 10435fe2 pop edi */
  EDI = (pop32());
  /* 10435fe3 pop ebx */
  EBX = (pop32());
  /* 10435fe4 ret  */
  ESPCHK(0x10435f30u, _esp0);
  ESP += 4; return;
L_10435fe5:;
  /* 10435fe5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 10435fe8 pop esi */
  ESI = (pop32());
  /* 10435fe9 pop edi */
  EDI = (pop32());
  /* 10435fea pop ebx */
  EBX = (pop32());
  /* 10435feb ret  */
  ESPCHK(0x10435f30u, _esp0);
  ESP += 4; return;
  /* 10435fec jmp dword ptr [0x104542e8] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x104542e8)))); return;
}

/* RtlUnwind @ 0x1043613c (6 bytes, 1 insns) */
void f_1043613c(void) {
  FTRACE(0x1043613cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1043613c jmp dword ptr [0x104542b4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x104542b4)))); return;
}

