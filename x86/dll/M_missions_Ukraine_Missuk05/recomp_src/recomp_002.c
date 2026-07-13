#include "recomp.h"

/* FUN_10019dc0 @ 0x125f9dc0 (289 bytes, 97 insns) */
void f_125f9dc0(void) {
  FTRACE(0x125f9dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f9dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f9dc1 mov ebp, esp */
  EBP = (ESP);
  /* 125f9dc3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f9dc6 push esi */
  push32((uint32_t)(ESI));
  /* 125f9dc7 mov eax, dword ptr [0x12617c98] */
  EAX = (r32((uint32_t)(0x12617c98)));
  /* 125f9dcc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125f9dcf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 125f9dd6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 125f9ddd jmp 0x125f9de8 */
  goto L_125f9de8;
L_125f9ddf:;
  /* 125f9ddf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f9de2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9de5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_125f9de8:;
  /* 125f9de8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9dec jae 0x125f9e21 */
  if (!C.cf) goto L_125f9e21;
  /* 125f9dee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f9df1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f9df4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 125f9df7 push ecx */
  push32((uint32_t)(ECX));
  /* 125f9df8 call 0x125efea0 */
  push32(0x125f9dfdu); f_125efea0();
  /* 125f9dfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9e00 mov esi, eax */
  ESI = (EAX);
  /* 125f9e02 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f9e05 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f9e08 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 125f9e0c push ecx */
  push32((uint32_t)(ECX));
  /* 125f9e0d call 0x125efea0 */
  push32(0x125f9e12u); f_125efea0();
  /* 125f9e12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9e15 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9e18 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 125f9e1c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 125f9e1f jmp 0x125f9ddf */
  goto L_125f9ddf;
L_125f9e21:;
  /* 125f9e21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f9e24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9e27 push eax */
  push32((uint32_t)(EAX));
  /* 125f9e28 call 0x125ed050 */
  push32(0x125f9e2du); f_125ed050();
  /* 125f9e2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9e30 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125f9e33 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9e37 je 0x125f9ed9 */
  if (C.zf) goto L_125f9ed9;
  /* 125f9e3d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f9e40 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125f9e43 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 125f9e4a jmp 0x125f9e55 */
  goto L_125f9e55;
L_125f9e4c:;
  /* 125f9e4c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f9e4f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9e52 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_125f9e55:;
  /* 125f9e55 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9e59 jae 0x125f9eca */
  if (!C.cf) goto L_125f9eca;
  /* 125f9e5b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f9e5e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 125f9e61 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f9e64 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9e67 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125f9e6a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f9e6d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f9e70 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 125f9e73 push ecx */
  push32((uint32_t)(ECX));
  /* 125f9e74 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f9e77 push edx */
  push32((uint32_t)(EDX));
  /* 125f9e78 call 0x125f0020 */
  push32(0x125f9e7du); f_125f0020();
  /* 125f9e7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9e80 push eax */
  push32((uint32_t)(EAX));
  /* 125f9e81 call 0x125efea0 */
  push32(0x125f9e86u); f_125efea0();
  /* 125f9e86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9e89 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f9e8c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9e8e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125f9e91 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f9e94 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 125f9e97 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f9e9a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9e9d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 125f9ea0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f9ea3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f9ea6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 125f9eaa push eax */
  push32((uint32_t)(EAX));
  /* 125f9eab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f9eae push ecx */
  push32((uint32_t)(ECX));
  /* 125f9eaf call 0x125f0020 */
  push32(0x125f9eb4u); f_125f0020();
  /* 125f9eb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9eb7 push eax */
  push32((uint32_t)(EAX));
  /* 125f9eb8 call 0x125efea0 */
  push32(0x125f9ebdu); f_125efea0();
  /* 125f9ebd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9ec0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f9ec3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9ec5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 125f9ec8 jmp 0x125f9e4c */
  goto L_125f9e4c;
L_125f9eca:;
  /* 125f9eca mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f9ecd mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 125f9ed0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f9ed3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9ed6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_125f9ed9:;
  /* 125f9ed9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f9edc pop esi */
  ESI = (pop32());
  /* 125f9edd mov esp, ebp */
  ESP = (EBP);
  /* 125f9edf pop ebp */
  EBP = (pop32());
  /* 125f9ee0 ret  */
  ESPCHK(0x125f9dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019ef0 @ 0x125f9ef0 (291 bytes, 97 insns) */
void f_125f9ef0(void) {
  FTRACE(0x125f9ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f9ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f9ef1 mov ebp, esp */
  EBP = (ESP);
  /* 125f9ef3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f9ef6 push esi */
  push32((uint32_t)(ESI));
  /* 125f9ef7 mov eax, dword ptr [0x12617c98] */
  EAX = (r32((uint32_t)(0x12617c98)));
  /* 125f9efc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125f9eff mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 125f9f06 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 125f9f0d jmp 0x125f9f18 */
  goto L_125f9f18;
L_125f9f0f:;
  /* 125f9f0f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f9f12 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9f15 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_125f9f18:;
  /* 125f9f18 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9f1c jae 0x125f9f52 */
  if (!C.cf) goto L_125f9f52;
  /* 125f9f1e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f9f21 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f9f24 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 125f9f28 push ecx */
  push32((uint32_t)(ECX));
  /* 125f9f29 call 0x125efea0 */
  push32(0x125f9f2eu); f_125efea0();
  /* 125f9f2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9f31 mov esi, eax */
  ESI = (EAX);
  /* 125f9f33 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f9f36 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f9f39 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 125f9f3d push ecx */
  push32((uint32_t)(ECX));
  /* 125f9f3e call 0x125efea0 */
  push32(0x125f9f43u); f_125efea0();
  /* 125f9f43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9f46 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9f49 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 125f9f4d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 125f9f50 jmp 0x125f9f0f */
  goto L_125f9f0f;
L_125f9f52:;
  /* 125f9f52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f9f55 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9f58 push eax */
  push32((uint32_t)(EAX));
  /* 125f9f59 call 0x125ed050 */
  push32(0x125f9f5eu); f_125ed050();
  /* 125f9f5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9f61 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125f9f64 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9f68 je 0x125fa00b */
  if (C.zf) goto L_125fa00b;
  /* 125f9f6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f9f71 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125f9f74 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 125f9f7b jmp 0x125f9f86 */
  goto L_125f9f86;
L_125f9f7d:;
  /* 125f9f7d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f9f80 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9f83 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_125f9f86:;
  /* 125f9f86 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9f8a jae 0x125f9ffc */
  if (!C.cf) goto L_125f9ffc;
  /* 125f9f8c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f9f8f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 125f9f92 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f9f95 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9f98 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125f9f9b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f9f9e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f9fa1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 125f9fa5 push ecx */
  push32((uint32_t)(ECX));
  /* 125f9fa6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f9fa9 push edx */
  push32((uint32_t)(EDX));
  /* 125f9faa call 0x125f0020 */
  push32(0x125f9fafu); f_125f0020();
  /* 125f9faf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9fb2 push eax */
  push32((uint32_t)(EAX));
  /* 125f9fb3 call 0x125efea0 */
  push32(0x125f9fb8u); f_125efea0();
  /* 125f9fb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9fbb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f9fbe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9fc0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125f9fc3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f9fc6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 125f9fc9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f9fcc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9fcf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 125f9fd2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f9fd5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f9fd8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 125f9fdc push eax */
  push32((uint32_t)(EAX));
  /* 125f9fdd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f9fe0 push ecx */
  push32((uint32_t)(ECX));
  /* 125f9fe1 call 0x125f0020 */
  push32(0x125f9fe6u); f_125f0020();
  /* 125f9fe6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9fe9 push eax */
  push32((uint32_t)(EAX));
  /* 125f9fea call 0x125efea0 */
  push32(0x125f9fefu); f_125efea0();
  /* 125f9fef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9ff2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f9ff5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9ff7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 125f9ffa jmp 0x125f9f7d */
  goto L_125f9f7d;
L_125f9ffc:;
  /* 125f9ffc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f9fff mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 125fa002 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125fa005 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa008 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_125fa00b:;
  /* 125fa00b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fa00e pop esi */
  ESI = (pop32());
  /* 125fa00f mov esp, ebp */
  ESP = (EBP);
  /* 125fa011 pop ebp */
  EBP = (pop32());
  /* 125fa012 ret  */
  ESPCHK(0x125f9ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a020 @ 0x125fa020 (878 bytes, 273 insns) */
void f_125fa020(void) {
  FTRACE(0x125fa020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fa020 push ebp */
  push32((uint32_t)(EBP));
  /* 125fa021 mov ebp, esp */
  EBP = (ESP);
  /* 125fa023 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fa026 push esi */
  push32((uint32_t)(ESI));
  /* 125fa027 mov eax, dword ptr [0x12617c98] */
  EAX = (r32((uint32_t)(0x12617c98)));
  /* 125fa02c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125fa02f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 125fa036 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 125fa03d jmp 0x125fa048 */
  goto L_125fa048;
L_125fa03f:;
  /* 125fa03f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125fa042 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa045 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_125fa048:;
  /* 125fa048 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fa04c jae 0x125fa081 */
  if (!C.cf) goto L_125fa081;
  /* 125fa04e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125fa051 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fa054 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 125fa057 push ecx */
  push32((uint32_t)(ECX));
  /* 125fa058 call 0x125efea0 */
  push32(0x125fa05du); f_125efea0();
  /* 125fa05d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa060 mov esi, eax */
  ESI = (EAX);
  /* 125fa062 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125fa065 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fa068 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 125fa06c push ecx */
  push32((uint32_t)(ECX));
  /* 125fa06d call 0x125efea0 */
  push32(0x125fa072u); f_125efea0();
  /* 125fa072 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa075 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa078 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 125fa07c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 125fa07f jmp 0x125fa03f */
  goto L_125fa03f;
L_125fa081:;
  /* 125fa081 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 125fa088 jmp 0x125fa093 */
  goto L_125fa093;
L_125fa08a:;
  /* 125fa08a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125fa08d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa090 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_125fa093:;
  /* 125fa093 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fa097 jae 0x125fa0cd */
  if (!C.cf) goto L_125fa0cd;
  /* 125fa099 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125fa09c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fa09f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 125fa0a3 push eax */
  push32((uint32_t)(EAX));
  /* 125fa0a4 call 0x125efea0 */
  push32(0x125fa0a9u); f_125efea0();
  /* 125fa0a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa0ac mov esi, eax */
  ESI = (EAX);
  /* 125fa0ae mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125fa0b1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fa0b4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 125fa0b8 push eax */
  push32((uint32_t)(EAX));
  /* 125fa0b9 call 0x125efea0 */
  push32(0x125fa0beu); f_125efea0();
  /* 125fa0be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa0c1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa0c4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 125fa0c8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125fa0cb jmp 0x125fa08a */
  goto L_125fa08a;
L_125fa0cd:;
  /* 125fa0cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fa0d0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 125fa0d6 push eax */
  push32((uint32_t)(EAX));
  /* 125fa0d7 call 0x125efea0 */
  push32(0x125fa0dcu); f_125efea0();
  /* 125fa0dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa0df mov esi, eax */
  ESI = (EAX);
  /* 125fa0e1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fa0e4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 125fa0ea push edx */
  push32((uint32_t)(EDX));
  /* 125fa0eb call 0x125efea0 */
  push32(0x125fa0f0u); f_125efea0();
  /* 125fa0f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa0f3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa0f6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 125fa0fa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125fa0fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fa100 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 125fa106 push edx */
  push32((uint32_t)(EDX));
  /* 125fa107 call 0x125efea0 */
  push32(0x125fa10cu); f_125efea0();
  /* 125fa10c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa10f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fa112 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 125fa116 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 125fa119 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fa11c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 125fa122 push ecx */
  push32((uint32_t)(ECX));
  /* 125fa123 call 0x125efea0 */
  push32(0x125fa128u); f_125efea0();
  /* 125fa128 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa12b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fa12e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 125fa132 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125fa135 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fa138 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 125fa13e push edx */
  push32((uint32_t)(EDX));
  /* 125fa13f call 0x125efea0 */
  push32(0x125fa144u); f_125efea0();
  /* 125fa144 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa147 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fa14a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 125fa14e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 125fa151 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fa154 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa159 push eax */
  push32((uint32_t)(EAX));
  /* 125fa15a call 0x125ed050 */
  push32(0x125fa15fu); f_125ed050();
  /* 125fa15f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa162 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125fa165 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fa169 je 0x125fa386 */
  if (C.zf) goto L_125fa386;
  /* 125fa16f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fa172 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 125fa175 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fa178 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa17e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 125fa181 push 0xac */
  push32((uint32_t)(0xacu));
  /* 125fa186 mov eax, dword ptr [0x12617c98] */
  EAX = (r32((uint32_t)(0x12617c98)));
  /* 125fa18b push eax */
  push32((uint32_t)(EAX));
  /* 125fa18c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fa18f push ecx */
  push32((uint32_t)(ECX));
  /* 125fa190 call 0x125f3950 */
  push32(0x125fa195u); f_125f3950();
  /* 125fa195 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa198 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 125fa19f jmp 0x125fa1aa */
  goto L_125fa1aa;
L_125fa1a1:;
  /* 125fa1a1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125fa1a4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa1a7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_125fa1aa:;
  /* 125fa1aa cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fa1ae jae 0x125fa21e */
  if (!C.cf) goto L_125fa21e;
  /* 125fa1b0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125fa1b3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125fa1b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125fa1b9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 125fa1bc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125fa1bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fa1c2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 125fa1c5 push edx */
  push32((uint32_t)(EDX));
  /* 125fa1c6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125fa1c9 push eax */
  push32((uint32_t)(EAX));
  /* 125fa1ca call 0x125f0020 */
  push32(0x125fa1cfu); f_125f0020();
  /* 125fa1cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa1d2 push eax */
  push32((uint32_t)(EAX));
  /* 125fa1d3 call 0x125efea0 */
  push32(0x125fa1d8u); f_125efea0();
  /* 125fa1d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa1db mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125fa1de lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 125fa1e2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 125fa1e5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125fa1e8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125fa1eb mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125fa1ee mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 125fa1f2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125fa1f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fa1f8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 125fa1fc push edx */
  push32((uint32_t)(EDX));
  /* 125fa1fd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125fa200 push eax */
  push32((uint32_t)(EAX));
  /* 125fa201 call 0x125f0020 */
  push32(0x125fa206u); f_125f0020();
  /* 125fa206 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa209 push eax */
  push32((uint32_t)(EAX));
  /* 125fa20a call 0x125efea0 */
  push32(0x125fa20fu); f_125efea0();
  /* 125fa20f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa212 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125fa215 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 125fa219 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 125fa21c jmp 0x125fa1a1 */
  goto L_125fa1a1;
L_125fa21e:;
  /* 125fa21e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 125fa225 jmp 0x125fa230 */
  goto L_125fa230;
L_125fa227:;
  /* 125fa227 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125fa22a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa22d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_125fa230:;
  /* 125fa230 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fa234 jae 0x125fa2a6 */
  if (!C.cf) goto L_125fa2a6;
  /* 125fa236 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125fa239 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125fa23c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125fa23f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 125fa243 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125fa246 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fa249 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 125fa24d push eax */
  push32((uint32_t)(EAX));
  /* 125fa24e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125fa251 push ecx */
  push32((uint32_t)(ECX));
  /* 125fa252 call 0x125f0020 */
  push32(0x125fa257u); f_125f0020();
  /* 125fa257 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa25a push eax */
  push32((uint32_t)(EAX));
  /* 125fa25b call 0x125efea0 */
  push32(0x125fa260u); f_125efea0();
  /* 125fa260 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa263 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125fa266 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 125fa26a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 125fa26d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125fa270 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125fa273 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125fa276 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 125fa27a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125fa27d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fa280 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 125fa284 push eax */
  push32((uint32_t)(EAX));
  /* 125fa285 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125fa288 push ecx */
  push32((uint32_t)(ECX));
  /* 125fa289 call 0x125f0020 */
  push32(0x125fa28eu); f_125f0020();
  /* 125fa28e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa291 push eax */
  push32((uint32_t)(EAX));
  /* 125fa292 call 0x125efea0 */
  push32(0x125fa297u); f_125efea0();
  /* 125fa297 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa29a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125fa29d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 125fa2a1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 125fa2a4 jmp 0x125fa227 */
  goto L_125fa227;
L_125fa2a6:;
  /* 125fa2a6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125fa2a9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125fa2ac mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 125fa2b2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fa2b5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 125fa2bb push ecx */
  push32((uint32_t)(ECX));
  /* 125fa2bc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125fa2bf push edx */
  push32((uint32_t)(EDX));
  /* 125fa2c0 call 0x125f0020 */
  push32(0x125fa2c5u); f_125f0020();
  /* 125fa2c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa2c8 push eax */
  push32((uint32_t)(EAX));
  /* 125fa2c9 call 0x125efea0 */
  push32(0x125fa2ceu); f_125efea0();
  /* 125fa2ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa2d1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125fa2d4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 125fa2d8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 125fa2db mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125fa2de mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125fa2e1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 125fa2e7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fa2ea mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 125fa2f0 push eax */
  push32((uint32_t)(EAX));
  /* 125fa2f1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125fa2f4 push ecx */
  push32((uint32_t)(ECX));
  /* 125fa2f5 call 0x125f0020 */
  push32(0x125fa2fau); f_125f0020();
  /* 125fa2fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa2fd push eax */
  push32((uint32_t)(EAX));
  /* 125fa2fe call 0x125efea0 */
  push32(0x125fa303u); f_125efea0();
  /* 125fa303 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa306 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125fa309 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 125fa30d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 125fa310 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125fa313 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125fa316 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 125fa31c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fa31f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 125fa325 push ecx */
  push32((uint32_t)(ECX));
  /* 125fa326 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125fa329 push edx */
  push32((uint32_t)(EDX));
  /* 125fa32a call 0x125f0020 */
  push32(0x125fa32fu); f_125f0020();
  /* 125fa32f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa332 push eax */
  push32((uint32_t)(EAX));
  /* 125fa333 call 0x125efea0 */
  push32(0x125fa338u); f_125efea0();
  /* 125fa338 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa33b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125fa33e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 125fa342 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 125fa345 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125fa348 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125fa34b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 125fa351 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fa354 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 125fa35a push eax */
  push32((uint32_t)(EAX));
  /* 125fa35b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125fa35e push ecx */
  push32((uint32_t)(ECX));
  /* 125fa35f call 0x125f0020 */
  push32(0x125fa364u); f_125f0020();
  /* 125fa364 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa367 push eax */
  push32((uint32_t)(EAX));
  /* 125fa368 call 0x125efea0 */
  push32(0x125fa36du); f_125efea0();
  /* 125fa36d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa370 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125fa373 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 125fa377 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 125fa37a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125fa37d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125fa380 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_125fa386:;
  /* 125fa386 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fa389 pop esi */
  ESI = (pop32());
  /* 125fa38a mov esp, ebp */
  ESP = (EBP);
  /* 125fa38c pop ebp */
  EBP = (pop32());
  /* 125fa38d ret  */
  ESPCHK(0x125fa020u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a390 @ 0x125fa390 (31 bytes, 15 insns) */
void f_125fa390(void) {
  FTRACE(0x125fa390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fa390 push ebp */
  push32((uint32_t)(EBP));
  /* 125fa391 mov ebp, esp */
  EBP = (ESP);
  /* 125fa393 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fa395 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fa398 push eax */
  push32((uint32_t)(EAX));
  /* 125fa399 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa39c push ecx */
  push32((uint32_t)(ECX));
  /* 125fa39d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fa3a0 push edx */
  push32((uint32_t)(EDX));
  /* 125fa3a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fa3a4 push eax */
  push32((uint32_t)(EAX));
  /* 125fa3a5 call 0x125fa3b0 */
  push32(0x125fa3aau); f_125fa3b0();
  /* 125fa3aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa3ad pop ebp */
  EBP = (pop32());
  /* 125fa3ae ret  */
  ESPCHK(0x125fa390u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a3b0 @ 0x125fa3b0 (394 bytes, 123 insns) */
void f_125fa3b0(void) {
  FTRACE(0x125fa3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fa3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 125fa3b1 mov ebp, esp */
  EBP = (ESP);
  /* 125fa3b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fa3b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fa3b9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125fa3bc push 0x1261917c */
  push32((uint32_t)(0x1261917cu));
  /* 125fa3c1 call dword ptr [0x1261b2e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b2e8))), 0x125fa3c7u);
  /* 125fa3c7 cmp dword ptr [0x1261916c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1261916c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fa3ce je 0x125fa3ee */
  if (C.zf) goto L_125fa3ee;
  /* 125fa3d0 push 0x1261917c */
  push32((uint32_t)(0x1261917cu));
  /* 125fa3d5 call dword ptr [0x1261b3c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b3c8))), 0x125fa3dbu);
  /* 125fa3db push 0x13 */
  push32((uint32_t)(0x13u));
  /* 125fa3dd call 0x125f0a70 */
  push32(0x125fa3e2u); f_125f0a70();
  /* 125fa3e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa3e5 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 125fa3ec jmp 0x125fa3f5 */
  goto L_125fa3f5;
L_125fa3ee:;
  /* 125fa3ee mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_125fa3f5:;
  /* 125fa3f5 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fa3f9 jne 0x125fa406 */
  if (!C.zf) goto L_125fa406;
  /* 125fa3fb mov ecx, dword ptr [0x12617c98] */
  ECX = (r32((uint32_t)(0x12617c98)));
  /* 125fa401 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 125fa404 jmp 0x125fa40c */
  goto L_125fa40c;
L_125fa406:;
  /* 125fa406 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125fa409 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_125fa40c:;
  /* 125fa40c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125fa40f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125fa412:;
  /* 125fa412 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fa416 jbe 0x125fa503 */
  if ((C.cf||C.zf)) goto L_125fa503;
  /* 125fa41c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa41f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125fa421 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 125fa424 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125fa428 je 0x125fa432 */
  if (C.zf) goto L_125fa432;
  /* 125fa42a cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125fa42e je 0x125fa437 */
  if (C.zf) goto L_125fa437;
  /* 125fa430 jmp 0x125fa491 */
  goto L_125fa491;
L_125fa432:;
  /* 125fa432 jmp 0x125fa503 */
  goto L_125fa503;
L_125fa437:;
  /* 125fa437 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa43a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa43d mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 125fa440 mov dword ptr [0x12619158], 0 */
  w32((uint32_t)(0x12619158), (0x0u));
  /* 125fa44a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa44d movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125fa450 cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fa453 jne 0x125fa468 */
  if (!C.zf) goto L_125fa468;
  /* 125fa455 mov dword ptr [0x12619158], 1 */
  w32((uint32_t)(0x12619158), (0x1u));
  /* 125fa45f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa462 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa465 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_125fa468:;
  /* 125fa468 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fa46b push ecx */
  push32((uint32_t)(ECX));
  /* 125fa46c lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 125fa46f push edx */
  push32((uint32_t)(EDX));
  /* 125fa470 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 125fa473 push eax */
  push32((uint32_t)(EAX));
  /* 125fa474 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fa477 push ecx */
  push32((uint32_t)(ECX));
  /* 125fa478 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa47b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125fa47d push eax */
  push32((uint32_t)(EAX));
  /* 125fa47e call 0x125fa540 */
  push32(0x125fa483u); f_125fa540();
  /* 125fa483 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa486 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa489 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa48c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 125fa48f jmp 0x125fa4fe */
  goto L_125fa4fe;
L_125fa491:;
  /* 125fa491 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa494 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fa496 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125fa498 mov ecx, dword ptr [0x12616c98] */
  ECX = (r32((uint32_t)(0x12616c98)));
  /* 125fa49e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125fa4a0 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 125fa4a4 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 125fa4aa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125fa4ac je 0x125fa4d9 */
  if (C.zf) goto L_125fa4d9;
  /* 125fa4ae cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fa4b2 jbe 0x125fa4d9 */
  if ((C.cf||C.zf)) goto L_125fa4d9;
  /* 125fa4b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fa4b7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa4ba mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125fa4bc mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 125fa4be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fa4c1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa4c4 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125fa4c7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa4ca add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa4cd mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 125fa4d0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fa4d3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fa4d6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_125fa4d9:;
  /* 125fa4d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fa4dc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa4df mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125fa4e1 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 125fa4e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fa4e6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa4e9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125fa4ec mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa4ef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa4f2 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 125fa4f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fa4f8 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fa4fb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_125fa4fe:;
  /* 125fa4fe jmp 0x125fa412 */
  goto L_125fa412;
L_125fa503:;
  /* 125fa503 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fa507 je 0x125fa515 */
  if (C.zf) goto L_125fa515;
  /* 125fa509 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 125fa50b call 0x125f0b10 */
  push32(0x125fa510u); f_125f0b10();
  /* 125fa510 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa513 jmp 0x125fa520 */
  goto L_125fa520;
L_125fa515:;
  /* 125fa515 push 0x1261917c */
  push32((uint32_t)(0x1261917cu));
  /* 125fa51a call dword ptr [0x1261b3c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b3c8))), 0x125fa520u);
L_125fa520:;
  /* 125fa520 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fa524 jbe 0x125fa534 */
  if ((C.cf||C.zf)) goto L_125fa534;
  /* 125fa526 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fa529 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 125fa52c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fa52f sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fa532 jmp 0x125fa536 */
  goto L_125fa536;
L_125fa534:;
  /* 125fa534 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125fa536:;
  /* 125fa536 mov esp, ebp */
  ESP = (EBP);
  /* 125fa538 pop ebp */
  EBP = (pop32());
  /* 125fa539 ret  */
  ESPCHK(0x125fa3b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a540 @ 0x125fa540 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_125fa540(void) {
  FTRACE(0x125fa540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fa540 push ebp */
  push32((uint32_t)(EBP));
  /* 125fa541 mov ebp, esp */
  EBP = (ESP);
  /* 125fa543 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fa546 push esi */
  push32((uint32_t)(ESI));
  /* 125fa547 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 125fa54b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125fa54e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fa551 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fa554 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125fa557 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fa55b ja 0x125faaa8 */
  if ((!C.cf&&!C.zf)) goto L_125faaa8;
  /* 125fa561 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fa564 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125fa566 mov dl, byte ptr [eax + 0x125fab09] */
  DL = (r8((uint32_t)(EAX + 0x125fab09)));
  /* 125fa56c jmp dword ptr [edx*4 + 0x125faaad] */
  switch (EDX) {
    case 0: goto L_125faa86;
    case 1: goto L_125fa595;
    case 2: goto L_125fa5db;
    case 3: goto L_125fa728;
    case 4: goto L_125fa750;
    case 5: goto L_125fa7ef;
    case 6: goto L_125fa85b;
    case 7: goto L_125fa884;
    case 8: goto L_125fa8c5;
    case 9: goto L_125fa9a7;
    case 10: goto L_125faa0e;
    case 11: goto L_125faa5b;
    case 12: goto L_125fa573;
    case 13: goto L_125fa5b8;
    case 14: goto L_125fa5fe;
    case 15: goto L_125fa6fe;
    case 16: goto L_125fa795;
    case 17: goto L_125fa7c2;
    case 18: goto L_125fa817;
    case 19: goto L_125fa89b;
    case 20: goto L_125fa949;
    case 21: goto L_125fa9d8;
    case 22: goto L_125faaa8;
    default: x86_unimpl("switch@0x125fa56c out of table"); return;
  }
L_125fa573:;
  /* 125fa573 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fa576 push ecx */
  push32((uint32_t)(ECX));
  /* 125fa577 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa57a push edx */
  push32((uint32_t)(EDX));
  /* 125fa57b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fa57e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 125fa581 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125fa584 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 125fa587 push eax */
  push32((uint32_t)(EAX));
  /* 125fa588 call 0x125fab60 */
  push32(0x125fa58du); f_125fab60();
  /* 125fa58d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa590 jmp 0x125faaa8 */
  goto L_125faaa8;
L_125fa595:;
  /* 125fa595 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fa598 push ecx */
  push32((uint32_t)(ECX));
  /* 125fa599 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa59c push edx */
  push32((uint32_t)(EDX));
  /* 125fa59d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fa5a0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 125fa5a3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125fa5a6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 125fa5aa push eax */
  push32((uint32_t)(EAX));
  /* 125fa5ab call 0x125fab60 */
  push32(0x125fa5b0u); f_125fab60();
  /* 125fa5b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa5b3 jmp 0x125faaa8 */
  goto L_125faaa8;
L_125fa5b8:;
  /* 125fa5b8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fa5bb push ecx */
  push32((uint32_t)(ECX));
  /* 125fa5bc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa5bf push edx */
  push32((uint32_t)(EDX));
  /* 125fa5c0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fa5c3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125fa5c6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125fa5c9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 125fa5cd push eax */
  push32((uint32_t)(EAX));
  /* 125fa5ce call 0x125fab60 */
  push32(0x125fa5d3u); f_125fab60();
  /* 125fa5d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa5d6 jmp 0x125faaa8 */
  goto L_125faaa8;
L_125fa5db:;
  /* 125fa5db mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fa5de push ecx */
  push32((uint32_t)(ECX));
  /* 125fa5df mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa5e2 push edx */
  push32((uint32_t)(EDX));
  /* 125fa5e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fa5e6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125fa5e9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125fa5ec mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 125fa5f0 push eax */
  push32((uint32_t)(EAX));
  /* 125fa5f1 call 0x125fab60 */
  push32(0x125fa5f6u); f_125fab60();
  /* 125fa5f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa5f9 jmp 0x125faaa8 */
  goto L_125faaa8;
L_125fa5fe:;
  /* 125fa5fe cmp dword ptr [0x12619158], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12619158))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fa605 je 0x125fa686 */
  if (C.zf) goto L_125fa686;
  /* 125fa607 mov dword ptr [0x12619158], 0 */
  w32((uint32_t)(0x12619158), (0x0u));
  /* 125fa611 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 125fa614 push ecx */
  push32((uint32_t)(ECX));
  /* 125fa615 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fa618 push edx */
  push32((uint32_t)(EDX));
  /* 125fa619 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa61c push eax */
  push32((uint32_t)(EAX));
  /* 125fa61d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fa620 push ecx */
  push32((uint32_t)(ECX));
  /* 125fa621 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125fa624 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 125fa62a push eax */
  push32((uint32_t)(EAX));
  /* 125fa62b call 0x125fad10 */
  push32(0x125fa630u); f_125fad10();
  /* 125fa630 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa633 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fa636 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fa639 jne 0x125fa640 */
  if (!C.zf) goto L_125fa640;
  /* 125fa63b jmp 0x125faaa8 */
  goto L_125faaa8;
L_125fa640:;
  /* 125fa640 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa643 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125fa645 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 125fa648 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa64b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125fa64d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa650 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa653 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125fa655 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fa658 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125fa65a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fa65d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fa660 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125fa662 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 125fa665 push ecx */
  push32((uint32_t)(ECX));
  /* 125fa666 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fa669 push edx */
  push32((uint32_t)(EDX));
  /* 125fa66a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa66d push eax */
  push32((uint32_t)(EAX));
  /* 125fa66e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fa671 push ecx */
  push32((uint32_t)(ECX));
  /* 125fa672 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125fa675 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 125fa67b push eax */
  push32((uint32_t)(EAX));
  /* 125fa67c call 0x125fad10 */
  push32(0x125fa681u); f_125fad10();
  /* 125fa681 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa684 jmp 0x125fa6f9 */
  goto L_125fa6f9;
L_125fa686:;
  /* 125fa686 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 125fa689 push ecx */
  push32((uint32_t)(ECX));
  /* 125fa68a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fa68d push edx */
  push32((uint32_t)(EDX));
  /* 125fa68e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa691 push eax */
  push32((uint32_t)(EAX));
  /* 125fa692 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fa695 push ecx */
  push32((uint32_t)(ECX));
  /* 125fa696 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125fa699 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 125fa69f push eax */
  push32((uint32_t)(EAX));
  /* 125fa6a0 call 0x125fad10 */
  push32(0x125fa6a5u); f_125fad10();
  /* 125fa6a5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa6a8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fa6ab cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fa6ae jne 0x125fa6b5 */
  if (!C.zf) goto L_125fa6b5;
  /* 125fa6b0 jmp 0x125faaa8 */
  goto L_125faaa8;
L_125fa6b5:;
  /* 125fa6b5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa6b8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125fa6ba mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 125fa6bd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa6c0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125fa6c2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa6c5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa6c8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125fa6ca mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fa6cd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125fa6cf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fa6d2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fa6d5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125fa6d7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 125fa6da push ecx */
  push32((uint32_t)(ECX));
  /* 125fa6db mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fa6de push edx */
  push32((uint32_t)(EDX));
  /* 125fa6df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa6e2 push eax */
  push32((uint32_t)(EAX));
  /* 125fa6e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fa6e6 push ecx */
  push32((uint32_t)(ECX));
  /* 125fa6e7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125fa6ea mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 125fa6f0 push eax */
  push32((uint32_t)(EAX));
  /* 125fa6f1 call 0x125fad10 */
  push32(0x125fa6f6u); f_125fad10();
  /* 125fa6f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125fa6f9:;
  /* 125fa6f9 jmp 0x125faaa8 */
  goto L_125faaa8;
L_125fa6fe:;
  /* 125fa6fe mov ecx, dword ptr [0x12619158] */
  ECX = (r32((uint32_t)(0x12619158)));
  /* 125fa704 mov dword ptr [0x12619168], ecx */
  w32((uint32_t)(0x12619168), (ECX));
  /* 125fa70a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fa70d push edx */
  push32((uint32_t)(EDX));
  /* 125fa70e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa711 push eax */
  push32((uint32_t)(EAX));
  /* 125fa712 push 2 */
  push32((uint32_t)(0x2u));
  /* 125fa714 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fa717 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125fa71a push edx */
  push32((uint32_t)(EDX));
  /* 125fa71b call 0x125fabb0 */
  push32(0x125fa720u); f_125fabb0();
  /* 125fa720 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa723 jmp 0x125faaa8 */
  goto L_125faaa8;
L_125fa728:;
  /* 125fa728 mov eax, dword ptr [0x12619158] */
  EAX = (r32((uint32_t)(0x12619158)));
  /* 125fa72d mov dword ptr [0x12619168], eax */
  w32((uint32_t)(0x12619168), (EAX));
  /* 125fa732 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fa735 push ecx */
  push32((uint32_t)(ECX));
  /* 125fa736 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa739 push edx */
  push32((uint32_t)(EDX));
  /* 125fa73a push 2 */
  push32((uint32_t)(0x2u));
  /* 125fa73c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fa73f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 125fa742 push ecx */
  push32((uint32_t)(ECX));
  /* 125fa743 call 0x125fabb0 */
  push32(0x125fa748u); f_125fabb0();
  /* 125fa748 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa74b jmp 0x125faaa8 */
  goto L_125faaa8;
L_125fa750:;
  /* 125fa750 mov edx, dword ptr [0x12619158] */
  EDX = (r32((uint32_t)(0x12619158)));
  /* 125fa756 mov dword ptr [0x12619168], edx */
  w32((uint32_t)(0x12619168), (EDX));
  /* 125fa75c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fa75f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 125fa762 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125fa763 mov ecx, 0xc */
  ECX = (0xcu);
  /* 125fa768 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125fa76a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125fa76d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fa771 jne 0x125fa77a */
  if (!C.zf) goto L_125fa77a;
  /* 125fa773 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_125fa77a:;
  /* 125fa77a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fa77d push edx */
  push32((uint32_t)(EDX));
  /* 125fa77e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa781 push eax */
  push32((uint32_t)(EAX));
  /* 125fa782 push 2 */
  push32((uint32_t)(0x2u));
  /* 125fa784 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fa787 push ecx */
  push32((uint32_t)(ECX));
  /* 125fa788 call 0x125fabb0 */
  push32(0x125fa78du); f_125fabb0();
  /* 125fa78d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa790 jmp 0x125faaa8 */
  goto L_125faaa8;
L_125fa795:;
  /* 125fa795 mov edx, dword ptr [0x12619158] */
  EDX = (r32((uint32_t)(0x12619158)));
  /* 125fa79b mov dword ptr [0x12619168], edx */
  w32((uint32_t)(0x12619168), (EDX));
  /* 125fa7a1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fa7a4 push eax */
  push32((uint32_t)(EAX));
  /* 125fa7a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa7a8 push ecx */
  push32((uint32_t)(ECX));
  /* 125fa7a9 push 3 */
  push32((uint32_t)(0x3u));
  /* 125fa7ab mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fa7ae mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 125fa7b1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa7b4 push eax */
  push32((uint32_t)(EAX));
  /* 125fa7b5 call 0x125fabb0 */
  push32(0x125fa7bau); f_125fabb0();
  /* 125fa7ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa7bd jmp 0x125faaa8 */
  goto L_125faaa8;
L_125fa7c2:;
  /* 125fa7c2 mov ecx, dword ptr [0x12619158] */
  ECX = (r32((uint32_t)(0x12619158)));
  /* 125fa7c8 mov dword ptr [0x12619168], ecx */
  w32((uint32_t)(0x12619168), (ECX));
  /* 125fa7ce mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fa7d1 push edx */
  push32((uint32_t)(EDX));
  /* 125fa7d2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa7d5 push eax */
  push32((uint32_t)(EAX));
  /* 125fa7d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 125fa7d8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fa7db mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 125fa7de add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa7e1 push edx */
  push32((uint32_t)(EDX));
  /* 125fa7e2 call 0x125fabb0 */
  push32(0x125fa7e7u); f_125fabb0();
  /* 125fa7e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa7ea jmp 0x125faaa8 */
  goto L_125faaa8;
L_125fa7ef:;
  /* 125fa7ef mov eax, dword ptr [0x12619158] */
  EAX = (r32((uint32_t)(0x12619158)));
  /* 125fa7f4 mov dword ptr [0x12619168], eax */
  w32((uint32_t)(0x12619168), (EAX));
  /* 125fa7f9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fa7fc push ecx */
  push32((uint32_t)(ECX));
  /* 125fa7fd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa800 push edx */
  push32((uint32_t)(EDX));
  /* 125fa801 push 2 */
  push32((uint32_t)(0x2u));
  /* 125fa803 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fa806 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125fa809 push ecx */
  push32((uint32_t)(ECX));
  /* 125fa80a call 0x125fabb0 */
  push32(0x125fa80fu); f_125fabb0();
  /* 125fa80f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa812 jmp 0x125faaa8 */
  goto L_125faaa8;
L_125fa817:;
  /* 125fa817 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fa81a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fa81e jg 0x125fa83c */
  if ((!C.zf&&C.sf==C.of)) goto L_125fa83c;
  /* 125fa820 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fa823 push eax */
  push32((uint32_t)(EAX));
  /* 125fa824 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa827 push ecx */
  push32((uint32_t)(ECX));
  /* 125fa828 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125fa82b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 125fa831 push eax */
  push32((uint32_t)(EAX));
  /* 125fa832 call 0x125fab60 */
  push32(0x125fa837u); f_125fab60();
  /* 125fa837 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa83a jmp 0x125fa856 */
  goto L_125fa856;
L_125fa83c:;
  /* 125fa83c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fa83f push ecx */
  push32((uint32_t)(ECX));
  /* 125fa840 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa843 push edx */
  push32((uint32_t)(EDX));
  /* 125fa844 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125fa847 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 125fa84d push ecx */
  push32((uint32_t)(ECX));
  /* 125fa84e call 0x125fab60 */
  push32(0x125fa853u); f_125fab60();
  /* 125fa853 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125fa856:;
  /* 125fa856 jmp 0x125faaa8 */
  goto L_125faaa8;
L_125fa85b:;
  /* 125fa85b mov edx, dword ptr [0x12619158] */
  EDX = (r32((uint32_t)(0x12619158)));
  /* 125fa861 mov dword ptr [0x12619168], edx */
  w32((uint32_t)(0x12619168), (EDX));
  /* 125fa867 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fa86a push eax */
  push32((uint32_t)(EAX));
  /* 125fa86b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa86e push ecx */
  push32((uint32_t)(ECX));
  /* 125fa86f push 2 */
  push32((uint32_t)(0x2u));
  /* 125fa871 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fa874 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125fa876 push eax */
  push32((uint32_t)(EAX));
  /* 125fa877 call 0x125fabb0 */
  push32(0x125fa87cu); f_125fabb0();
  /* 125fa87c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa87f jmp 0x125faaa8 */
  goto L_125faaa8;
L_125fa884:;
  /* 125fa884 mov ecx, dword ptr [0x12619158] */
  ECX = (r32((uint32_t)(0x12619158)));
  /* 125fa88a mov dword ptr [0x12619168], ecx */
  w32((uint32_t)(0x12619168), (ECX));
  /* 125fa890 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fa893 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 125fa896 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125fa899 jmp 0x125fa8ed */
  goto L_125fa8ed;
L_125fa89b:;
  /* 125fa89b mov ecx, dword ptr [0x12619158] */
  ECX = (r32((uint32_t)(0x12619158)));
  /* 125fa8a1 mov dword ptr [0x12619168], ecx */
  w32((uint32_t)(0x12619168), (ECX));
  /* 125fa8a7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fa8aa push edx */
  push32((uint32_t)(EDX));
  /* 125fa8ab mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa8ae push eax */
  push32((uint32_t)(EAX));
  /* 125fa8af push 1 */
  push32((uint32_t)(0x1u));
  /* 125fa8b1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fa8b4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 125fa8b7 push edx */
  push32((uint32_t)(EDX));
  /* 125fa8b8 call 0x125fabb0 */
  push32(0x125fa8bdu); f_125fabb0();
  /* 125fa8bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa8c0 jmp 0x125faaa8 */
  goto L_125faaa8;
L_125fa8c5:;
  /* 125fa8c5 mov eax, dword ptr [0x12619158] */
  EAX = (r32((uint32_t)(0x12619158)));
  /* 125fa8ca mov dword ptr [0x12619168], eax */
  w32((uint32_t)(0x12619168), (EAX));
  /* 125fa8cf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fa8d2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fa8d6 jne 0x125fa8e1 */
  if (!C.zf) goto L_125fa8e1;
  /* 125fa8d8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 125fa8df jmp 0x125fa8ed */
  goto L_125fa8ed;
L_125fa8e1:;
  /* 125fa8e1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fa8e4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 125fa8e7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fa8ea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_125fa8ed:;
  /* 125fa8ed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fa8f0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 125fa8f3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fa8f6 jge 0x125fa901 */
  if ((C.sf==C.of)) goto L_125fa901;
  /* 125fa8f8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125fa8ff jmp 0x125fa92e */
  goto L_125fa92e;
L_125fa901:;
  /* 125fa901 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fa904 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 125fa907 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125fa908 mov ecx, 7 */
  ECX = (0x7u);
  /* 125fa90d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125fa90f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125fa912 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fa915 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 125fa918 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125fa919 mov ecx, 7 */
  ECX = (0x7u);
  /* 125fa91e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125fa920 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fa923 jl 0x125fa92e */
  if ((C.sf!=C.of)) goto L_125fa92e;
  /* 125fa925 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fa928 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa92b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_125fa92e:;
  /* 125fa92e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fa931 push eax */
  push32((uint32_t)(EAX));
  /* 125fa932 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa935 push ecx */
  push32((uint32_t)(ECX));
  /* 125fa936 push 2 */
  push32((uint32_t)(0x2u));
  /* 125fa938 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fa93b push edx */
  push32((uint32_t)(EDX));
  /* 125fa93c call 0x125fabb0 */
  push32(0x125fa941u); f_125fabb0();
  /* 125fa941 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa944 jmp 0x125faaa8 */
  goto L_125faaa8;
L_125fa949:;
  /* 125fa949 cmp dword ptr [0x12619158], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12619158))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fa950 je 0x125fa980 */
  if (C.zf) goto L_125fa980;
  /* 125fa952 mov dword ptr [0x12619158], 0 */
  w32((uint32_t)(0x12619158), (0x0u));
  /* 125fa95c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125fa95f push eax */
  push32((uint32_t)(EAX));
  /* 125fa960 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fa963 push ecx */
  push32((uint32_t)(ECX));
  /* 125fa964 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa967 push edx */
  push32((uint32_t)(EDX));
  /* 125fa968 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fa96b push eax */
  push32((uint32_t)(EAX));
  /* 125fa96c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 125fa96f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 125fa975 push edx */
  push32((uint32_t)(EDX));
  /* 125fa976 call 0x125fad10 */
  push32(0x125fa97bu); f_125fad10();
  /* 125fa97b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa97e jmp 0x125fa9a2 */
  goto L_125fa9a2;
L_125fa980:;
  /* 125fa980 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125fa983 push eax */
  push32((uint32_t)(EAX));
  /* 125fa984 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fa987 push ecx */
  push32((uint32_t)(ECX));
  /* 125fa988 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa98b push edx */
  push32((uint32_t)(EDX));
  /* 125fa98c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fa98f push eax */
  push32((uint32_t)(EAX));
  /* 125fa990 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 125fa993 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 125fa999 push edx */
  push32((uint32_t)(EDX));
  /* 125fa99a call 0x125fad10 */
  push32(0x125fa99fu); f_125fad10();
  /* 125fa99f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125fa9a2:;
  /* 125fa9a2 jmp 0x125faaa8 */
  goto L_125faaa8;
L_125fa9a7:;
  /* 125fa9a7 mov dword ptr [0x12619158], 0 */
  w32((uint32_t)(0x12619158), (0x0u));
  /* 125fa9b1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125fa9b4 push eax */
  push32((uint32_t)(EAX));
  /* 125fa9b5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fa9b8 push ecx */
  push32((uint32_t)(ECX));
  /* 125fa9b9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa9bc push edx */
  push32((uint32_t)(EDX));
  /* 125fa9bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fa9c0 push eax */
  push32((uint32_t)(EAX));
  /* 125fa9c1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 125fa9c4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 125fa9ca push edx */
  push32((uint32_t)(EDX));
  /* 125fa9cb call 0x125fad10 */
  push32(0x125fa9d0u); f_125fad10();
  /* 125fa9d0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fa9d3 jmp 0x125faaa8 */
  goto L_125faaa8;
L_125fa9d8:;
  /* 125fa9d8 mov eax, dword ptr [0x12619158] */
  EAX = (r32((uint32_t)(0x12619158)));
  /* 125fa9dd mov dword ptr [0x12619168], eax */
  w32((uint32_t)(0x12619168), (EAX));
  /* 125fa9e2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fa9e5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 125fa9e8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125fa9e9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 125fa9ee idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125fa9f0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125fa9f3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fa9f6 push edx */
  push32((uint32_t)(EDX));
  /* 125fa9f7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fa9fa push eax */
  push32((uint32_t)(EAX));
  /* 125fa9fb push 2 */
  push32((uint32_t)(0x2u));
  /* 125fa9fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125faa00 push ecx */
  push32((uint32_t)(ECX));
  /* 125faa01 call 0x125fabb0 */
  push32(0x125faa06u); f_125fabb0();
  /* 125faa06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125faa09 jmp 0x125faaa8 */
  goto L_125faaa8;
L_125faa0e:;
  /* 125faa0e mov edx, dword ptr [0x12619158] */
  EDX = (r32((uint32_t)(0x12619158)));
  /* 125faa14 mov dword ptr [0x12619168], edx */
  w32((uint32_t)(0x12619168), (EDX));
  /* 125faa1a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125faa1d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 125faa20 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125faa21 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 125faa26 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125faa28 mov ecx, eax */
  ECX = (EAX);
  /* 125faa2a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125faa2d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125faa30 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125faa33 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 125faa36 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125faa37 mov esi, 0x64 */
  ESI = (0x64u);
  /* 125faa3c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125faa3e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125faa40 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125faa43 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125faa46 push eax */
  push32((uint32_t)(EAX));
  /* 125faa47 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125faa4a push ecx */
  push32((uint32_t)(ECX));
  /* 125faa4b push 4 */
  push32((uint32_t)(0x4u));
  /* 125faa4d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125faa50 push edx */
  push32((uint32_t)(EDX));
  /* 125faa51 call 0x125fabb0 */
  push32(0x125faa56u); f_125fabb0();
  /* 125faa56 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125faa59 jmp 0x125faaa8 */
  goto L_125faaa8;
L_125faa5b:;
  /* 125faa5b call 0x125fbb70 */
  push32(0x125faa60u); f_125fbb70();
  /* 125faa60 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125faa63 push eax */
  push32((uint32_t)(EAX));
  /* 125faa64 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125faa67 push ecx */
  push32((uint32_t)(ECX));
  /* 125faa68 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125faa6b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125faa6d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125faa71 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 125faa74 mov ecx, dword ptr [eax*4 + 0x12617e1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12617e1c)));
  /* 125faa7b push ecx */
  push32((uint32_t)(ECX));
  /* 125faa7c call 0x125fab60 */
  push32(0x125faa81u); f_125fab60();
  /* 125faa81 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125faa84 jmp 0x125faaa8 */
  goto L_125faaa8;
L_125faa86:;
  /* 125faa86 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125faa89 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125faa8b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 125faa8e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125faa91 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125faa93 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125faa96 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125faa99 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125faa9b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125faa9e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125faaa0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125faaa3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125faaa6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_125faaa8:;
  /* 125faaa8 pop esi */
  ESI = (pop32());
  /* 125faaa9 mov esp, ebp */
  ESP = (EBP);
  /* 125faaab pop ebp */
  EBP = (pop32());
  /* 125faaac ret  */
  ESPCHK(0x125fa540u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x125fab60 (72 bytes, 30 insns) */
void f_125fab60(void) {
  FTRACE(0x125fab60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fab60 push ebp */
  push32((uint32_t)(EBP));
  /* 125fab61 mov ebp, esp */
  EBP = (ESP);
L_125fab63:;
  /* 125fab63 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fab66 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fab69 je 0x125faba6 */
  if (C.zf) goto L_125faba6;
  /* 125fab6b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fab6e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125fab71 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125fab73 je 0x125faba6 */
  if (C.zf) goto L_125faba6;
  /* 125fab75 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fab78 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125fab7a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fab7d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125fab7f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 125fab81 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fab84 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125fab86 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fab89 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fab8c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125fab8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fab91 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fab94 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 125fab97 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fab9a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125fab9c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fab9f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125faba2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125faba4 jmp 0x125fab63 */
  goto L_125fab63;
L_125faba6:;
  /* 125faba6 pop ebp */
  EBP = (pop32());
  /* 125faba7 ret  */
  ESPCHK(0x125fab60u, _esp0);
  ESP += 4; return;
}

/* FUN_1001abb0 @ 0x125fabb0 (173 bytes, 64 insns) */
void f_125fabb0(void) {
  FTRACE(0x125fabb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fabb0 push ebp */
  push32((uint32_t)(EBP));
  /* 125fabb1 mov ebp, esp */
  EBP = (ESP);
  /* 125fabb3 push ecx */
  push32((uint32_t)(ECX));
  /* 125fabb4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125fabbb cmp dword ptr [0x12619168], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12619168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fabc2 je 0x125fabda */
  if (C.zf) goto L_125fabda;
  /* 125fabc4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fabc7 push eax */
  push32((uint32_t)(EAX));
  /* 125fabc8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fabcb push ecx */
  push32((uint32_t)(ECX));
  /* 125fabcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fabcf push edx */
  push32((uint32_t)(EDX));
  /* 125fabd0 call 0x125fac60 */
  push32(0x125fabd5u); f_125fac60();
  /* 125fabd5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fabd8 jmp 0x125fac59 */
  goto L_125fac59;
L_125fabda:;
  /* 125fabda mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fabdd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fabe0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fabe2 jae 0x125fac50 */
  if (!C.cf) goto L_125fac50;
  /* 125fabe4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fabe7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fabea mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 125fabed jmp 0x125fabf8 */
  goto L_125fabf8;
L_125fabef:;
  /* 125fabef mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fabf2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fabf5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_125fabf8:;
  /* 125fabf8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fabfb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fabfe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125fac00 je 0x125fac34 */
  if (C.zf) goto L_125fac34;
  /* 125fac02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fac05 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125fac06 mov ecx, 0xa */
  ECX = (0xau);
  /* 125fac0b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125fac0d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fac10 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fac13 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125fac15 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fac18 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 125fac1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fac1e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125fac1f mov ecx, 0xa */
  ECX = (0xau);
  /* 125fac24 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125fac26 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125fac29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fac2c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fac2f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125fac32 jmp 0x125fabef */
  goto L_125fabef;
L_125fac34:;
  /* 125fac34 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fac37 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125fac39 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fac3c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fac3f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 125fac41 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fac44 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125fac46 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fac49 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fac4c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 125fac4e jmp 0x125fac59 */
  goto L_125fac59;
L_125fac50:;
  /* 125fac50 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fac53 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_125fac59:;
  /* 125fac59 mov esp, ebp */
  ESP = (EBP);
  /* 125fac5b pop ebp */
  EBP = (pop32());
  /* 125fac5c ret  */
  ESPCHK(0x125fabb0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x125fac60 (172 bytes, 65 insns) */
void f_125fac60(void) {
  FTRACE(0x125fac60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fac60 push ebp */
  push32((uint32_t)(EBP));
  /* 125fac61 mov ebp, esp */
  EBP = (ESP);
  /* 125fac63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fac66 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fac69 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125fac6b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125fac6e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fac71 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fac74 jbe 0x125facbb */
  if ((C.cf||C.zf)) goto L_125facbb;
L_125fac76:;
  /* 125fac76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fac79 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125fac7a mov ecx, 0xa */
  ECX = (0xau);
  /* 125fac7f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125fac81 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fac84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fac87 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 125fac89 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fac8c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fac8f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125fac92 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fac95 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125fac97 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fac9a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fac9d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125fac9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125faca2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125faca3 mov ecx, 0xa */
  ECX = (0xau);
  /* 125faca8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125facaa mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125facad cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125facb1 jle 0x125facbb */
  if ((C.zf||C.sf!=C.of)) goto L_125facbb;
  /* 125facb3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125facb6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125facb9 ja 0x125fac76 */
  if ((!C.cf&&!C.zf)) goto L_125fac76;
L_125facbb:;
  /* 125facbb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125facbe mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125facc0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125facc3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125facc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125facc9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 125faccb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125facce sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125facd1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_125facd4:;
  /* 125facd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125facd7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125facd9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 125facdc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125facdf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125face2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125face4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 125face6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125face9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125facec mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125facef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125facf2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 125facf5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 125facf7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125facfa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125facfd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125fad00 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fad03 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fad06 jb 0x125facd4 */
  if (C.cf) goto L_125facd4;
  /* 125fad08 mov esp, ebp */
  ESP = (EBP);
  /* 125fad0a pop ebp */
  EBP = (pop32());
  /* 125fad0b ret  */
  ESPCHK(0x125fac60u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ad10 @ 0x125fad10 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_125fad10(void) {
  FTRACE(0x125fad10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fad10 push ebp */
  push32((uint32_t)(EBP));
  /* 125fad11 mov ebp, esp */
  EBP = (ESP);
  /* 125fad13 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_125fad16:;
  /* 125fad16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fad19 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125fad1c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125fad1e je 0x125fb18c */
  if (C.zf) goto L_125fb18c;
  /* 125fad24 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fad27 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fad2a je 0x125fb18c */
  if (C.zf) goto L_125fb18c;
  /* 125fad30 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 125fad34 mov dword ptr [0x12619168], 0 */
  w32((uint32_t)(0x12619168), (0x0u));
  /* 125fad3e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 125fad45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fad48 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125fad4b jmp 0x125fad56 */
  goto L_125fad56;
L_125fad4d:;
  /* 125fad4d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fad50 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fad53 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_125fad56:;
  /* 125fad56 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fad59 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125fad5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fad5f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125fad62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fad65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fad68 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125fad6b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fad6d jne 0x125fad71 */
  if (!C.zf) goto L_125fad71;
  /* 125fad6f jmp 0x125fad4d */
  goto L_125fad4d;
L_125fad71:;
  /* 125fad71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fad74 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fad77 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125fad7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fad7d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125fad80 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125fad83 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125fad86 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fad89 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 125fad8c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fad90 ja 0x125fb0e0 */
  if ((!C.cf&&!C.zf)) goto L_125fb0e0;
  /* 125fad96 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125fad99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fad9b mov al, byte ptr [ecx + 0x125fb1bc] */
  AL = (r8((uint32_t)(ECX + 0x125fb1bc)));
  /* 125fada1 jmp dword ptr [eax*4 + 0x125fb190] */
  switch (EAX) {
    case 0: goto L_125fafff;
    case 1: goto L_125faee3;
    case 2: goto L_125fae6e;
    case 3: goto L_125fada8;
    case 4: goto L_125fade6;
    case 5: goto L_125fae47;
    case 6: goto L_125fae95;
    case 7: goto L_125faebc;
    case 8: goto L_125faf2a;
    case 9: goto L_125fae24;
    case 10: goto L_125fb0e0;
    default: x86_unimpl("switch@0x125fada1 out of table"); return;
  }
L_125fada8:;
  /* 125fada8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fadab mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 125fadae mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125fadb1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fadb4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 125fadb7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fadbb ja 0x125fade1 */
  if ((!C.cf&&!C.zf)) goto L_125fade1;
  /* 125fadbd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125fadc0 jmp dword ptr [ecx*4 + 0x125fb20f] */
  switch (ECX) {
    case 0: goto L_125fadc7;
    case 1: goto L_125fadd1;
    case 2: goto L_125fadd7;
    case 3: goto L_125faddd;
    case 4: goto L_125fae05;
    case 5: goto L_125fae0f;
    case 6: goto L_125fae15;
    case 7: goto L_125fae1b;
    default: x86_unimpl("switch@0x125fadc0 out of table"); return;
  }
L_125fadc7:;
  /* 125fadc7 mov dword ptr [0x12619168], 1 */
  w32((uint32_t)(0x12619168), (0x1u));
L_125fadd1:;
  /* 125fadd1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 125fadd5 jmp 0x125fade1 */
  goto L_125fade1;
L_125fadd7:;
  /* 125fadd7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 125faddb jmp 0x125fade1 */
  goto L_125fade1;
L_125faddd:;
  /* 125faddd mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_125fade1:;
  /* 125fade1 jmp 0x125fb0e0 */
  goto L_125fb0e0;
L_125fade6:;
  /* 125fade6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fade9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 125fadec mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125fadef sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fadf2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 125fadf5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fadf9 ja 0x125fae1f */
  if ((!C.cf&&!C.zf)) goto L_125fae1f;
  /* 125fadfb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125fadfe jmp dword ptr [ecx*4 + 0x125fb21f] */
  switch (ECX) {
    case 0: goto L_125fae05;
    case 1: goto L_125fae0f;
    case 2: goto L_125fae15;
    case 3: goto L_125fae1b;
    default: x86_unimpl("switch@0x125fadfe out of table"); return;
  }
L_125fae05:;
  /* 125fae05 mov dword ptr [0x12619168], 1 */
  w32((uint32_t)(0x12619168), (0x1u));
L_125fae0f:;
  /* 125fae0f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 125fae13 jmp 0x125fae1f */
  goto L_125fae1f;
L_125fae15:;
  /* 125fae15 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 125fae19 jmp 0x125fae1f */
  goto L_125fae1f;
L_125fae1b:;
  /* 125fae1b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_125fae1f:;
  /* 125fae1f jmp 0x125fb0e0 */
  goto L_125fb0e0;
L_125fae24:;
  /* 125fae24 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fae27 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 125fae2a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fae2e je 0x125fae38 */
  if (C.zf) goto L_125fae38;
  /* 125fae30 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fae34 je 0x125fae3e */
  if (C.zf) goto L_125fae3e;
  /* 125fae36 jmp 0x125fae42 */
  goto L_125fae42;
L_125fae38:;
  /* 125fae38 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 125fae3c jmp 0x125fae42 */
  goto L_125fae42;
L_125fae3e:;
  /* 125fae3e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_125fae42:;
  /* 125fae42 jmp 0x125fb0e0 */
  goto L_125fb0e0;
L_125fae47:;
  /* 125fae47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fae4a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 125fae4d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fae51 je 0x125fae5b */
  if (C.zf) goto L_125fae5b;
  /* 125fae53 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fae57 je 0x125fae65 */
  if (C.zf) goto L_125fae65;
  /* 125fae59 jmp 0x125fae69 */
  goto L_125fae69;
L_125fae5b:;
  /* 125fae5b mov dword ptr [0x12619168], 1 */
  w32((uint32_t)(0x12619168), (0x1u));
L_125fae65:;
  /* 125fae65 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_125fae69:;
  /* 125fae69 jmp 0x125fb0e0 */
  goto L_125fb0e0;
L_125fae6e:;
  /* 125fae6e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fae71 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 125fae74 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fae78 je 0x125fae82 */
  if (C.zf) goto L_125fae82;
  /* 125fae7a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fae7e je 0x125fae8c */
  if (C.zf) goto L_125fae8c;
  /* 125fae80 jmp 0x125fae90 */
  goto L_125fae90;
L_125fae82:;
  /* 125fae82 mov dword ptr [0x12619168], 1 */
  w32((uint32_t)(0x12619168), (0x1u));
L_125fae8c:;
  /* 125fae8c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_125fae90:;
  /* 125fae90 jmp 0x125fb0e0 */
  goto L_125fb0e0;
L_125fae95:;
  /* 125fae95 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fae98 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 125fae9b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fae9f je 0x125faea9 */
  if (C.zf) goto L_125faea9;
  /* 125faea1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125faea5 je 0x125faeb3 */
  if (C.zf) goto L_125faeb3;
  /* 125faea7 jmp 0x125faeb7 */
  goto L_125faeb7;
L_125faea9:;
  /* 125faea9 mov dword ptr [0x12619168], 1 */
  w32((uint32_t)(0x12619168), (0x1u));
L_125faeb3:;
  /* 125faeb3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_125faeb7:;
  /* 125faeb7 jmp 0x125fb0e0 */
  goto L_125fb0e0;
L_125faebc:;
  /* 125faebc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125faebf mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 125faec2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125faec6 je 0x125faed0 */
  if (C.zf) goto L_125faed0;
  /* 125faec8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125faecc je 0x125faeda */
  if (C.zf) goto L_125faeda;
  /* 125faece jmp 0x125faede */
  goto L_125faede;
L_125faed0:;
  /* 125faed0 mov dword ptr [0x12619168], 1 */
  w32((uint32_t)(0x12619168), (0x1u));
L_125faeda:;
  /* 125faeda mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_125faede:;
  /* 125faede jmp 0x125fb0e0 */
  goto L_125fb0e0;
L_125faee3:;
  /* 125faee3 push 0x1261533c */
  push32((uint32_t)(0x1261533cu));
  /* 125faee8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125faeeb push ecx */
  push32((uint32_t)(ECX));
  /* 125faeec call 0x125fb740 */
  push32(0x125faef1u); f_125fb740();
  /* 125faef1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125faef4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125faef6 jne 0x125faf03 */
  if (!C.zf) goto L_125faf03;
  /* 125faef8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125faefb add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125faefe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125faf01 jmp 0x125faf21 */
  goto L_125faf21;
L_125faf03:;
  /* 125faf03 push 0x12615338 */
  push32((uint32_t)(0x12615338u));
  /* 125faf08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125faf0b push eax */
  push32((uint32_t)(EAX));
  /* 125faf0c call 0x125fb740 */
  push32(0x125faf11u); f_125fb740();
  /* 125faf11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125faf14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125faf16 jne 0x125faf21 */
  if (!C.zf) goto L_125faf21;
  /* 125faf18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125faf1b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125faf1e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_125faf21:;
  /* 125faf21 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 125faf25 jmp 0x125fb0e0 */
  goto L_125fb0e0;
L_125faf2a:;
  /* 125faf2a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125faf2d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125faf31 jg 0x125faf41 */
  if ((!C.zf&&C.sf==C.of)) goto L_125faf41;
  /* 125faf33 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125faf36 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 125faf3c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 125faf3f jmp 0x125faf4d */
  goto L_125faf4d;
L_125faf41:;
  /* 125faf41 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125faf44 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 125faf4a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_125faf4d:;
  /* 125faf4d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125faf51 jle 0x125faff4 */
  if ((C.zf||C.sf!=C.of)) goto L_125faff4;
  /* 125faf57 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125faf5a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125faf5d jbe 0x125faff4 */
  if ((C.cf||C.zf)) goto L_125faff4;
  /* 125faf63 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125faf66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125faf68 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125faf6a mov ecx, dword ptr [0x12616c98] */
  ECX = (r32((uint32_t)(0x12616c98)));
  /* 125faf70 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125faf72 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 125faf76 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 125faf7c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125faf7e je 0x125fafb7 */
  if (C.zf) goto L_125fafb7;
  /* 125faf80 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125faf83 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125faf86 jbe 0x125fafb7 */
  if ((C.cf||C.zf)) goto L_125fafb7;
  /* 125faf88 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125faf8b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125faf8d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125faf90 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125faf92 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 125faf94 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125faf97 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125faf99 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125faf9c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125faf9f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125fafa1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125fafa4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fafa7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 125fafaa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fafad mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125fafaf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fafb2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fafb5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_125fafb7:;
  /* 125fafb7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fafba mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125fafbc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125fafbf mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125fafc1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 125fafc3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fafc6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125fafc8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fafcb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fafce mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125fafd0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125fafd3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fafd6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 125fafd9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fafdc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125fafde sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fafe1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fafe4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125fafe6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fafe9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fafec mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 125fafef jmp 0x125faf4d */
  goto L_125faf4d;
L_125faff4:;
  /* 125faff4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125faff7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125faffa jmp 0x125fad16 */
  goto L_125fad16;
L_125fafff:;
  /* 125fafff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fb002 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 125fb005 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125fb007 je 0x125fb0d2 */
  if (C.zf) goto L_125fb0d2;
  /* 125fb00d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fb010 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fb013 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_125fb016:;
  /* 125fb016 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fb019 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125fb01c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125fb01e je 0x125fb0d0 */
  if (C.zf) goto L_125fb0d0;
  /* 125fb024 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fb027 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb02a je 0x125fb0d0 */
  if (C.zf) goto L_125fb0d0;
  /* 125fb030 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fb033 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125fb036 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb039 jne 0x125fb049 */
  if (!C.zf) goto L_125fb049;
  /* 125fb03b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fb03e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fb041 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 125fb044 jmp 0x125fb0d0 */
  goto L_125fb0d0;
L_125fb049:;
  /* 125fb049 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fb04c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125fb04e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125fb050 mov edx, dword ptr [0x12616c98] */
  EDX = (r32((uint32_t)(0x12616c98)));
  /* 125fb056 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fb058 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 125fb05c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 125fb061 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125fb063 je 0x125fb09c */
  if (C.zf) goto L_125fb09c;
  /* 125fb065 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fb068 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb06b jbe 0x125fb09c */
  if ((C.cf||C.zf)) goto L_125fb09c;
  /* 125fb06d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fb070 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125fb072 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fb075 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125fb077 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 125fb079 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fb07c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125fb07e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fb081 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fb084 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 125fb086 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fb089 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fb08c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125fb08f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fb092 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125fb094 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fb097 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fb09a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_125fb09c:;
  /* 125fb09c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fb09f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125fb0a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fb0a4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125fb0a6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 125fb0a8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fb0ab mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125fb0ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fb0b0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fb0b3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125fb0b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fb0b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fb0bb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 125fb0be mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fb0c1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125fb0c3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fb0c6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fb0c9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 125fb0cb jmp 0x125fb016 */
  goto L_125fb016;
L_125fb0d0:;
  /* 125fb0d0 jmp 0x125fb0db */
  goto L_125fb0db;
L_125fb0d2:;
  /* 125fb0d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fb0d5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fb0d8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_125fb0db:;
  /* 125fb0db jmp 0x125fad16 */
  goto L_125fad16;
L_125fb0e0:;
  /* 125fb0e0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 125fb0e4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125fb0e6 je 0x125fb10c */
  if (C.zf) goto L_125fb10c;
  /* 125fb0e8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125fb0eb push edx */
  push32((uint32_t)(EDX));
  /* 125fb0ec mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fb0ef push eax */
  push32((uint32_t)(EAX));
  /* 125fb0f0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fb0f3 push ecx */
  push32((uint32_t)(ECX));
  /* 125fb0f4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fb0f7 push edx */
  push32((uint32_t)(EDX));
  /* 125fb0f8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 125fb0fb push eax */
  push32((uint32_t)(EAX));
  /* 125fb0fc call 0x125fa540 */
  push32(0x125fb101u); f_125fa540();
  /* 125fb101 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fb104 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fb107 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 125fb10a jmp 0x125fb187 */
  goto L_125fb187;
L_125fb10c:;
  /* 125fb10c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fb10f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fb111 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125fb113 mov ecx, dword ptr [0x12616c98] */
  ECX = (r32((uint32_t)(0x12616c98)));
  /* 125fb119 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125fb11b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 125fb11f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 125fb125 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125fb127 je 0x125fb158 */
  if (C.zf) goto L_125fb158;
  /* 125fb129 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fb12c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125fb12e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fb131 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125fb133 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 125fb135 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fb138 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125fb13a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fb13d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fb140 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125fb142 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fb145 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fb148 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 125fb14b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fb14e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125fb150 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fb153 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fb156 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_125fb158:;
  /* 125fb158 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fb15b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125fb15d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fb160 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125fb162 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 125fb164 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fb167 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125fb169 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fb16c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fb16f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 125fb171 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fb174 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fb177 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125fb17a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fb17d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125fb17f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fb182 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fb185 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_125fb187:;
  /* 125fb187 jmp 0x125fad16 */
  goto L_125fad16;
L_125fb18c:;
  /* 125fb18c mov esp, ebp */
  ESP = (EBP);
  /* 125fb18e pop ebp */
  EBP = (pop32());
  /* 125fb18f ret  */
  ESPCHK(0x125fad10u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b230 @ 0x125fb230 (650 bytes, 178 insns) */
void f_125fb230(void) {
  FTRACE(0x125fb230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fb230 push ebp */
  push32((uint32_t)(EBP));
  /* 125fb231 mov ebp, esp */
  EBP = (ESP);
  /* 125fb233 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fb239 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb23d jne 0x125fb399 */
  if (!C.zf) goto L_125fb399;
  /* 125fb243 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fb246 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 125fb24c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 125fb252 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125fb255 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125fb25c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 125fb266 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fb268 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 125fb26e push edx */
  push32((uint32_t)(EDX));
  /* 125fb26f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fb272 push eax */
  push32((uint32_t)(EAX));
  /* 125fb273 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fb276 push ecx */
  push32((uint32_t)(ECX));
  /* 125fb277 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fb27a push edx */
  push32((uint32_t)(EDX));
  /* 125fb27b call 0x125fc650 */
  push32(0x125fb280u); f_125fc650();
  /* 125fb280 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fb283 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125fb286 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb28a jne 0x125fb31f */
  if (!C.zf) goto L_125fb31f;
  /* 125fb290 call dword ptr [0x1261b400] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b400))), 0x125fb296u);
  /* 125fb296 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb299 je 0x125fb2a0 */
  if (C.zf) goto L_125fb2a0;
  /* 125fb29b jmp 0x125fb37d */
  goto L_125fb37d;
L_125fb2a0:;
  /* 125fb2a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fb2a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fb2a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fb2a6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fb2a9 push eax */
  push32((uint32_t)(EAX));
  /* 125fb2aa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fb2ad push ecx */
  push32((uint32_t)(ECX));
  /* 125fb2ae call 0x125fc650 */
  push32(0x125fb2b3u); f_125fc650();
  /* 125fb2b3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fb2b6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 125fb2bc cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb2c3 jne 0x125fb2ca */
  if (!C.zf) goto L_125fb2ca;
  /* 125fb2c5 jmp 0x125fb37d */
  goto L_125fb37d;
L_125fb2ca:;
  /* 125fb2ca push 0x58 */
  push32((uint32_t)(0x58u));
  /* 125fb2cc push 0x12615344 */
  push32((uint32_t)(0x12615344u));
  /* 125fb2d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 125fb2d3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 125fb2d9 push edx */
  push32((uint32_t)(EDX));
  /* 125fb2da call 0x125ed070 */
  push32(0x125fb2dfu); f_125ed070();
  /* 125fb2df add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fb2e2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125fb2e5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb2e9 jne 0x125fb2f0 */
  if (!C.zf) goto L_125fb2f0;
  /* 125fb2eb jmp 0x125fb37d */
  goto L_125fb37d;
L_125fb2f0:;
  /* 125fb2f0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 125fb2f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fb2f9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 125fb2ff push eax */
  push32((uint32_t)(EAX));
  /* 125fb300 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fb303 push ecx */
  push32((uint32_t)(ECX));
  /* 125fb304 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fb307 push edx */
  push32((uint32_t)(EDX));
  /* 125fb308 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fb30b push eax */
  push32((uint32_t)(EAX));
  /* 125fb30c call 0x125fc650 */
  push32(0x125fb311u); f_125fc650();
  /* 125fb311 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fb314 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125fb317 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb31b jne 0x125fb31f */
  if (!C.zf) goto L_125fb31f;
  /* 125fb31d jmp 0x125fb37d */
  goto L_125fb37d;
L_125fb31f:;
  /* 125fb31f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 125fb321 push 0x12615344 */
  push32((uint32_t)(0x12615344u));
  /* 125fb326 push 2 */
  push32((uint32_t)(0x2u));
  /* 125fb328 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fb32b push ecx */
  push32((uint32_t)(ECX));
  /* 125fb32c call 0x125ed070 */
  push32(0x125fb331u); f_125ed070();
  /* 125fb331 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fb334 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 125fb33a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 125fb33c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 125fb342 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb345 jne 0x125fb349 */
  if (!C.zf) goto L_125fb349;
  /* 125fb347 jmp 0x125fb37d */
  goto L_125fb37d;
L_125fb349:;
  /* 125fb349 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fb34c push ecx */
  push32((uint32_t)(ECX));
  /* 125fb34d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fb350 push edx */
  push32((uint32_t)(EDX));
  /* 125fb351 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 125fb357 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125fb359 push ecx */
  push32((uint32_t)(ECX));
  /* 125fb35a call 0x125f0890 */
  push32(0x125fb35fu); f_125f0890();
  /* 125fb35f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fb362 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb366 je 0x125fb376 */
  if (C.zf) goto L_125fb376;
  /* 125fb368 push 2 */
  push32((uint32_t)(0x2u));
  /* 125fb36a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fb36d push edx */
  push32((uint32_t)(EDX));
  /* 125fb36e call 0x125edb00 */
  push32(0x125fb373u); f_125edb00();
  /* 125fb373 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125fb376:;
  /* 125fb376 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fb378 jmp 0x125fb4b6 */
  goto L_125fb4b6;
L_125fb37d:;
  /* 125fb37d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb381 je 0x125fb391 */
  if (C.zf) goto L_125fb391;
  /* 125fb383 push 2 */
  push32((uint32_t)(0x2u));
  /* 125fb385 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fb388 push eax */
  push32((uint32_t)(EAX));
  /* 125fb389 call 0x125edb00 */
  push32(0x125fb38eu); f_125edb00();
  /* 125fb38e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125fb391:;
  /* 125fb391 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125fb394 jmp 0x125fb4b6 */
  goto L_125fb4b6;
L_125fb399:;
  /* 125fb399 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb39d jne 0x125fb4b3 */
  if (!C.zf) goto L_125fb4b3;
  /* 125fb3a3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 125fb3ad mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fb3b0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 125fb3b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fb3b8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 125fb3be push edx */
  push32((uint32_t)(EDX));
  /* 125fb3bf push 0x12619080 */
  push32((uint32_t)(0x12619080u));
  /* 125fb3c4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fb3c7 push eax */
  push32((uint32_t)(EAX));
  /* 125fb3c8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fb3cb push ecx */
  push32((uint32_t)(ECX));
  /* 125fb3cc call 0x125fc4b0 */
  push32(0x125fb3d1u); f_125fc4b0();
  /* 125fb3d1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fb3d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125fb3d6 jne 0x125fb3e0 */
  if (!C.zf) goto L_125fb3e0;
  /* 125fb3d8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125fb3db jmp 0x125fb4b6 */
  goto L_125fb4b6;
L_125fb3e0:;
  /* 125fb3e0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 125fb3e6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 125fb3e9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 125fb3f3 jmp 0x125fb404 */
  goto L_125fb404;
L_125fb3f5:;
  /* 125fb3f5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 125fb3fb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fb3fe mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_125fb404:;
  /* 125fb404 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb40b jge 0x125fb4af */
  if ((C.sf==C.of)) goto L_125fb4af;
  /* 125fb411 cmp dword ptr [0x12616ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12616ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb418 jle 0x125fb44b */
  if ((C.zf||C.sf!=C.of)) goto L_125fb44b;
  /* 125fb41a push 4 */
  push32((uint32_t)(0x4u));
  /* 125fb41c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 125fb422 mov dl, byte ptr [ecx*2 + 0x12619080] */
  DL = (r8((uint32_t)(ECX*2 + 0x12619080)));
  /* 125fb429 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 125fb42f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 125fb435 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125fb43a push eax */
  push32((uint32_t)(EAX));
  /* 125fb43b call 0x125f3080 */
  push32(0x125fb440u); f_125f3080();
  /* 125fb440 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fb443 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 125fb449 jmp 0x125fb47e */
  goto L_125fb47e;
L_125fb44b:;
  /* 125fb44b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 125fb451 mov dl, byte ptr [ecx*2 + 0x12619080] */
  DL = (r8((uint32_t)(ECX*2 + 0x12619080)));
  /* 125fb458 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 125fb45e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 125fb464 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125fb469 mov ecx, dword ptr [0x12616c98] */
  ECX = (r32((uint32_t)(0x12616c98)));
  /* 125fb46f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125fb471 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 125fb475 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 125fb478 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_125fb47e:;
  /* 125fb47e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb485 je 0x125fb4a8 */
  if (C.zf) goto L_125fb4a8;
  /* 125fb487 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 125fb48d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125fb490 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125fb493 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 125fb49a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 125fb49e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 125fb4a4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 125fb4a6 jmp 0x125fb4aa */
  goto L_125fb4aa;
L_125fb4a8:;
  /* 125fb4a8 jmp 0x125fb4af */
  goto L_125fb4af;
L_125fb4aa:;
  /* 125fb4aa jmp 0x125fb3f5 */
  goto L_125fb3f5;
L_125fb4af:;
  /* 125fb4af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fb4b1 jmp 0x125fb4b6 */
  goto L_125fb4b6;
L_125fb4b3:;
  /* 125fb4b3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_125fb4b6:;
  /* 125fb4b6 mov esp, ebp */
  ESP = (EBP);
  /* 125fb4b8 pop ebp */
  EBP = (pop32());
  /* 125fb4b9 ret  */
  ESPCHK(0x125fb230u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b4c0 @ 0x125fb4c0 (10 bytes, 5 insns) */
void f_125fb4c0(void) {
  FTRACE(0x125fb4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fb4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 125fb4c1 mov ebp, esp */
  EBP = (ESP);
  /* 125fb4c3 mov eax, dword ptr [0x12617d88] */
  EAX = (r32((uint32_t)(0x12617d88)));
  /* 125fb4c8 pop ebp */
  EBP = (pop32());
  /* 125fb4c9 ret  */
  ESPCHK(0x125fb4c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b4d0 @ 0x125fb4d0 (575 bytes, 196 insns) */
void f_125fb4d0(void) {
  FTRACE(0x125fb4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fb4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 125fb4d1 mov ebp, esp */
  EBP = (ESP);
  /* 125fb4d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 125fb4d5 push 0x12615350 */
  push32((uint32_t)(0x12615350u));
  /* 125fb4da push 0x125f6178 */
  push32((uint32_t)(0x125f6178u));
  /* 125fb4df mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 125fb4e5 push eax */
  push32((uint32_t)(EAX));
  /* 125fb4e6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 125fb4ed add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fb4f0 push ebx */
  push32((uint32_t)(EBX));
  /* 125fb4f1 push esi */
  push32((uint32_t)(ESI));
  /* 125fb4f2 push edi */
  push32((uint32_t)(EDI));
  /* 125fb4f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125fb4f6 cmp dword ptr [0x1261908c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1261908c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb4fd jne 0x125fb54e */
  if (!C.zf) goto L_125fb54e;
  /* 125fb4ff lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 125fb502 push eax */
  push32((uint32_t)(EAX));
  /* 125fb503 push 1 */
  push32((uint32_t)(0x1u));
  /* 125fb505 push 0x12614a80 */
  push32((uint32_t)(0x12614a80u));
  /* 125fb50a push 1 */
  push32((uint32_t)(0x1u));
  /* 125fb50c call dword ptr [0x1261b338] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b338))), 0x125fb512u);
  /* 125fb512 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125fb514 je 0x125fb522 */
  if (C.zf) goto L_125fb522;
  /* 125fb516 mov dword ptr [0x1261908c], 1 */
  w32((uint32_t)(0x1261908c), (0x1u));
  /* 125fb520 jmp 0x125fb54e */
  goto L_125fb54e;
L_125fb522:;
  /* 125fb522 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 125fb525 push ecx */
  push32((uint32_t)(ECX));
  /* 125fb526 push 1 */
  push32((uint32_t)(0x1u));
  /* 125fb528 push 0x12614a7c */
  push32((uint32_t)(0x12614a7cu));
  /* 125fb52d push 1 */
  push32((uint32_t)(0x1u));
  /* 125fb52f push 0 */
  push32((uint32_t)(0x0u));
  /* 125fb531 call dword ptr [0x1261b33c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b33c))), 0x125fb537u);
  /* 125fb537 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125fb539 je 0x125fb547 */
  if (C.zf) goto L_125fb547;
  /* 125fb53b mov dword ptr [0x1261908c], 2 */
  w32((uint32_t)(0x1261908c), (0x2u));
  /* 125fb545 jmp 0x125fb54e */
  goto L_125fb54e;
L_125fb547:;
  /* 125fb547 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fb549 jmp 0x125fb729 */
  goto L_125fb729;
L_125fb54e:;
  /* 125fb54e cmp dword ptr [0x1261908c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1261908c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb555 jne 0x125fb572 */
  if (!C.zf) goto L_125fb572;
  /* 125fb557 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fb55a push edx */
  push32((uint32_t)(EDX));
  /* 125fb55b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fb55e push eax */
  push32((uint32_t)(EAX));
  /* 125fb55f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fb562 push ecx */
  push32((uint32_t)(ECX));
  /* 125fb563 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fb566 push edx */
  push32((uint32_t)(EDX));
  /* 125fb567 call dword ptr [0x1261b338] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b338))), 0x125fb56du);
  /* 125fb56d jmp 0x125fb729 */
  goto L_125fb729;
L_125fb572:;
  /* 125fb572 cmp dword ptr [0x1261908c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1261908c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb579 jne 0x125fb727 */
  if (!C.zf) goto L_125fb727;
  /* 125fb57f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb583 jne 0x125fb58d */
  if (!C.zf) goto L_125fb58d;
  /* 125fb585 mov eax, dword ptr [0x12619000] */
  EAX = (r32((uint32_t)(0x12619000)));
  /* 125fb58a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_125fb58d:;
  /* 125fb58d push 0 */
  push32((uint32_t)(0x0u));
  /* 125fb58f push 0 */
  push32((uint32_t)(0x0u));
  /* 125fb591 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fb593 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fb595 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fb598 push ecx */
  push32((uint32_t)(ECX));
  /* 125fb599 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fb59c push edx */
  push32((uint32_t)(EDX));
  /* 125fb59d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 125fb5a2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125fb5a5 push eax */
  push32((uint32_t)(EAX));
  /* 125fb5a6 call dword ptr [0x1261b38c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b38c))), 0x125fb5acu);
  /* 125fb5ac mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 125fb5af cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb5b3 jne 0x125fb5bc */
  if (!C.zf) goto L_125fb5bc;
  /* 125fb5b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fb5b7 jmp 0x125fb729 */
  goto L_125fb729;
L_125fb5bc:;
  /* 125fb5bc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125fb5c3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125fb5c6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fb5c9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 125fb5cb call 0x125f0210 */
  push32(0x125fb5d0u); f_125f0210();
  /* 125fb5d0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 125fb5d3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125fb5d6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125fb5d9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 125fb5dc mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 125fb5df push edx */
  push32((uint32_t)(EDX));
  /* 125fb5e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fb5e2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125fb5e5 push eax */
  push32((uint32_t)(EAX));
  /* 125fb5e6 call 0x125f0de0 */
  push32(0x125fb5ebu); f_125f0de0();
  /* 125fb5eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fb5ee mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 125fb5f5 jmp 0x125fb60e */
  goto L_125fb60e;
  /* 125fb5f7 mov eax, 1 */
  EAX = (0x1u);
  /* 125fb5fc ret  */
  ESPCHK(0x125fb4d0u, _esp0);
  ESP += 4; return;
  /* 125fb5fd mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 125fb600 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 125fb607 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_125fb60e:;
  /* 125fb60e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb612 jne 0x125fb61b */
  if (!C.zf) goto L_125fb61b;
  /* 125fb614 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fb616 jmp 0x125fb729 */
  goto L_125fb729;
L_125fb61b:;
  /* 125fb61b push 0 */
  push32((uint32_t)(0x0u));
  /* 125fb61d push 0 */
  push32((uint32_t)(0x0u));
  /* 125fb61f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 125fb622 push ecx */
  push32((uint32_t)(ECX));
  /* 125fb623 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125fb626 push edx */
  push32((uint32_t)(EDX));
  /* 125fb627 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fb62a push eax */
  push32((uint32_t)(EAX));
  /* 125fb62b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fb62e push ecx */
  push32((uint32_t)(ECX));
  /* 125fb62f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 125fb634 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125fb637 push edx */
  push32((uint32_t)(EDX));
  /* 125fb638 call dword ptr [0x1261b38c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b38c))), 0x125fb63eu);
  /* 125fb63e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125fb640 jne 0x125fb649 */
  if (!C.zf) goto L_125fb649;
  /* 125fb642 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fb644 jmp 0x125fb729 */
  goto L_125fb729;
L_125fb649:;
  /* 125fb649 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 125fb650 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125fb653 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 125fb657 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fb65a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 125fb65c call 0x125f0210 */
  push32(0x125fb661u); f_125f0210();
  /* 125fb661 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 125fb664 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125fb667 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 125fb66a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 125fb66d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 125fb674 jmp 0x125fb68d */
  goto L_125fb68d;
  /* 125fb676 mov eax, 1 */
  EAX = (0x1u);
  /* 125fb67b ret  */
  ESPCHK(0x125fb4d0u, _esp0);
  ESP += 4; return;
  /* 125fb67c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 125fb67f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 125fb686 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_125fb68d:;
  /* 125fb68d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb691 jne 0x125fb69a */
  if (!C.zf) goto L_125fb69a;
  /* 125fb693 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fb695 jmp 0x125fb729 */
  goto L_125fb729;
L_125fb69a:;
  /* 125fb69a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb69e jne 0x125fb6a9 */
  if (!C.zf) goto L_125fb6a9;
  /* 125fb6a0 mov edx, dword ptr [0x12618ff0] */
  EDX = (r32((uint32_t)(0x12618ff0)));
  /* 125fb6a6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_125fb6a9:;
  /* 125fb6a9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fb6ac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125fb6af mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 125fb6b5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fb6b8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125fb6bb mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 125fb6c2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125fb6c5 push ecx */
  push32((uint32_t)(ECX));
  /* 125fb6c6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 125fb6c9 push edx */
  push32((uint32_t)(EDX));
  /* 125fb6ca mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125fb6cd push eax */
  push32((uint32_t)(EAX));
  /* 125fb6ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fb6d1 push ecx */
  push32((uint32_t)(ECX));
  /* 125fb6d2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 125fb6d5 push edx */
  push32((uint32_t)(EDX));
  /* 125fb6d6 call dword ptr [0x1261b33c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b33c))), 0x125fb6dcu);
  /* 125fb6dc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 125fb6df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fb6e2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125fb6e5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125fb6e7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 125fb6ec cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb6f2 je 0x125fb708 */
  if (C.zf) goto L_125fb708;
  /* 125fb6f4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fb6f7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125fb6fa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125fb6fc mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 125fb700 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb706 je 0x125fb70c */
  if (C.zf) goto L_125fb70c;
L_125fb708:;
  /* 125fb708 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fb70a jmp 0x125fb729 */
  goto L_125fb729;
L_125fb70c:;
  /* 125fb70c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fb70f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 125fb711 push eax */
  push32((uint32_t)(EAX));
  /* 125fb712 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125fb715 push ecx */
  push32((uint32_t)(ECX));
  /* 125fb716 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fb719 push edx */
  push32((uint32_t)(EDX));
  /* 125fb71a call 0x125f4f60 */
  push32(0x125fb71fu); f_125f4f60();
  /* 125fb71f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fb722 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 125fb725 jmp 0x125fb729 */
  goto L_125fb729;
L_125fb727:;
  /* 125fb727 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125fb729:;
  /* 125fb729 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 125fb72c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125fb72f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 125fb736 pop edi */
  EDI = (pop32());
  /* 125fb737 pop esi */
  ESI = (pop32());
  /* 125fb738 pop ebx */
  EBX = (pop32());
  /* 125fb739 mov esp, ebp */
  ESP = (EBP);
  /* 125fb73b pop ebp */
  EBP = (pop32());
  /* 125fb73c ret  */
  ESPCHK(0x125fb4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b740 @ 0x125fb740 (208 bytes, 85 insns) */
void f_125fb740(void) {
  FTRACE(0x125fb740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fb740 push ebp */
  push32((uint32_t)(EBP));
  /* 125fb741 mov ebp, esp */
  EBP = (ESP);
  /* 125fb743 push edi */
  push32((uint32_t)(EDI));
  /* 125fb744 push esi */
  push32((uint32_t)(ESI));
  /* 125fb745 push ebx */
  push32((uint32_t)(EBX));
  /* 125fb746 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 125fb749 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 125fb74c lea eax, [0x12618fe8] */
  EAX = ((uint32_t)(0x12618fe8));
  /* 125fb752 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb756 jne 0x125fb793 */
  if (!C.zf) goto L_125fb793;
  /* 125fb758 mov al, 0xff */
  AL = (0xffu);
  /* 125fb75a mov edi, edi */
  EDI = (EDI);
L_125fb75c:;
  /* 125fb75c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 125fb75e je 0x125fb78e */
  if (C.zf) goto L_125fb78e;
  /* 125fb760 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125fb762 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 125fb763 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 125fb765 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 125fb766 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125fb768 je 0x125fb75c */
  if (C.zf) goto L_125fb75c;
  /* 125fb76a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 125fb76c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125fb76e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 125fb770 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 125fb773 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 125fb775 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 125fb777 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 125fb779 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 125fb77b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125fb77d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 125fb77f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 125fb782 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 125fb784 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 125fb786 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125fb788 je 0x125fb75c */
  if (C.zf) goto L_125fb75c;
  /* 125fb78a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 125fb78c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_125fb78e:;
  /* 125fb78e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 125fb791 jmp 0x125fb80b */
  goto L_125fb80b;
L_125fb793:;
  /* 125fb793 lock inc dword ptr [0x1261917c] */
  x86_unimpl("lock inc @ 0x125fb793");
  /* 125fb79a cmp dword ptr [0x1261916c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1261916c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb7a1 jg 0x125fb7a7 */
  if ((!C.zf&&C.sf==C.of)) goto L_125fb7a7;
  /* 125fb7a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fb7a5 jmp 0x125fb7bc */
  goto L_125fb7bc;
L_125fb7a7:;
  /* 125fb7a7 lock dec dword ptr [0x1261917c] */
  x86_unimpl("lock dec @ 0x125fb7a7");
  /* 125fb7ae push 0x13 */
  push32((uint32_t)(0x13u));
  /* 125fb7b0 call 0x125f0a70 */
  push32(0x125fb7b5u); f_125f0a70();
  /* 125fb7b5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_125fb7bc:;
  /* 125fb7bc mov eax, 0xff */
  EAX = (0xffu);
  /* 125fb7c1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 125fb7c3 nop  */
  /* nop */
L_125fb7c4:;
  /* 125fb7c4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 125fb7c6 je 0x125fb7ef */
  if (C.zf) goto L_125fb7ef;
  /* 125fb7c8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125fb7ca inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 125fb7cb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 125fb7cd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 125fb7ce cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125fb7d0 je 0x125fb7c4 */
  if (C.zf) goto L_125fb7c4;
  /* 125fb7d2 push eax */
  push32((uint32_t)(EAX));
  /* 125fb7d3 push ebx */
  push32((uint32_t)(EBX));
  /* 125fb7d4 call 0x125fc8b0 */
  push32(0x125fb7d9u); f_125fc8b0();
  /* 125fb7d9 mov ebx, eax */
  EBX = (EAX);
  /* 125fb7db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fb7de call 0x125fc8b0 */
  push32(0x125fb7e3u); f_125fc8b0();
  /* 125fb7e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fb7e6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125fb7e8 je 0x125fb7c4 */
  if (C.zf) goto L_125fb7c4;
  /* 125fb7ea sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fb7ec sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_125fb7ef:;
  /* 125fb7ef mov ebx, eax */
  EBX = (EAX);
  /* 125fb7f1 pop eax */
  EAX = (pop32());
  /* 125fb7f2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fb7f4 jne 0x125fb7ff */
  if (!C.zf) goto L_125fb7ff;
  /* 125fb7f6 lock dec dword ptr [0x1261917c] */
  x86_unimpl("lock dec @ 0x125fb7f6");
  /* 125fb7fd jmp 0x125fb809 */
  goto L_125fb809;
L_125fb7ff:;
  /* 125fb7ff push 0x13 */
  push32((uint32_t)(0x13u));
  /* 125fb801 call 0x125f0b10 */
  push32(0x125fb806u); f_125f0b10();
  /* 125fb806 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125fb809:;
  /* 125fb809 mov eax, ebx */
  EAX = (EBX);
L_125fb80b:;
  /* 125fb80b pop ebx */
  EBX = (pop32());
  /* 125fb80c pop esi */
  ESI = (pop32());
  /* 125fb80d pop edi */
  EDI = (pop32());
  /* 125fb80e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125fb80f ret  */
  ESPCHK(0x125fb740u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b810 @ 0x125fb810 (257 bytes, 103 insns) */
void f_125fb810(void) {
  FTRACE(0x125fb810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fb810 push ebp */
  push32((uint32_t)(EBP));
  /* 125fb811 mov ebp, esp */
  EBP = (ESP);
  /* 125fb813 push edi */
  push32((uint32_t)(EDI));
  /* 125fb814 push esi */
  push32((uint32_t)(ESI));
  /* 125fb815 push ebx */
  push32((uint32_t)(EBX));
  /* 125fb816 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fb819 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125fb81b je 0x125fb90a */
  if (C.zf) goto L_125fb90a;
  /* 125fb821 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 125fb824 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 125fb827 lea eax, [0x12618fe8] */
  EAX = ((uint32_t)(0x12618fe8));
  /* 125fb82d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb831 jne 0x125fb881 */
  if (!C.zf) goto L_125fb881;
  /* 125fb833 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 125fb835 mov bl, 0x5a */
  BL = (0x5au);
  /* 125fb837 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 125fb839 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_125fb83c:;
  /* 125fb83c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 125fb83e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 125fb840 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 125fb842 je 0x125fb865 */
  if (C.zf) goto L_125fb865;
  /* 125fb844 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 125fb846 je 0x125fb865 */
  if (C.zf) goto L_125fb865;
  /* 125fb848 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 125fb849 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 125fb84a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125fb84c jb 0x125fb854 */
  if (C.cf) goto L_125fb854;
  /* 125fb84e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125fb850 ja 0x125fb854 */
  if ((!C.cf&&!C.zf)) goto L_125fb854;
  /* 125fb852 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_125fb854:;
  /* 125fb854 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125fb856 jb 0x125fb85e */
  if (C.cf) goto L_125fb85e;
  /* 125fb858 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125fb85a ja 0x125fb85e */
  if ((!C.cf&&!C.zf)) goto L_125fb85e;
  /* 125fb85c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_125fb85e:;
  /* 125fb85e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125fb860 jne 0x125fb86f */
  if (!C.zf) goto L_125fb86f;
  /* 125fb862 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 125fb863 jne 0x125fb83c */
  if (!C.zf) goto L_125fb83c;
L_125fb865:;
  /* 125fb865 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125fb867 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125fb869 je 0x125fb90a */
  if (C.zf) goto L_125fb90a;
L_125fb86f:;
  /* 125fb86f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 125fb874 jb 0x125fb90a */
  if (C.cf) goto L_125fb90a;
  /* 125fb87a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 125fb87c jmp 0x125fb90a */
  goto L_125fb90a;
L_125fb881:;
  /* 125fb881 lock inc dword ptr [0x1261917c] */
  x86_unimpl("lock inc @ 0x125fb881");
  /* 125fb888 cmp dword ptr [0x1261916c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1261916c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb88f jg 0x125fb895 */
  if ((!C.zf&&C.sf==C.of)) goto L_125fb895;
  /* 125fb891 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fb893 jmp 0x125fb8ae */
  goto L_125fb8ae;
L_125fb895:;
  /* 125fb895 lock dec dword ptr [0x1261917c] */
  x86_unimpl("lock dec @ 0x125fb895");
  /* 125fb89c mov ebx, ecx */
  EBX = (ECX);
  /* 125fb89e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 125fb8a0 call 0x125f0a70 */
  push32(0x125fb8a5u); f_125f0a70();
  /* 125fb8a5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 125fb8ac mov ecx, ebx */
  ECX = (EBX);
L_125fb8ae:;
  /* 125fb8ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fb8b0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 125fb8b2 mov edi, edi */
  EDI = (EDI);
L_125fb8b4:;
  /* 125fb8b4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125fb8b6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fb8b8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 125fb8ba je 0x125fb8df */
  if (C.zf) goto L_125fb8df;
  /* 125fb8bc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 125fb8be je 0x125fb8df */
  if (C.zf) goto L_125fb8df;
  /* 125fb8c0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 125fb8c1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 125fb8c2 push ecx */
  push32((uint32_t)(ECX));
  /* 125fb8c3 push eax */
  push32((uint32_t)(EAX));
  /* 125fb8c4 push ebx */
  push32((uint32_t)(EBX));
  /* 125fb8c5 call 0x125fc8b0 */
  push32(0x125fb8cau); f_125fc8b0();
  /* 125fb8ca mov ebx, eax */
  EBX = (EAX);
  /* 125fb8cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fb8cf call 0x125fc8b0 */
  push32(0x125fb8d4u); f_125fc8b0();
  /* 125fb8d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fb8d7 pop ecx */
  ECX = (pop32());
  /* 125fb8d8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb8da jne 0x125fb8e5 */
  if (!C.zf) goto L_125fb8e5;
  /* 125fb8dc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 125fb8dd jne 0x125fb8b4 */
  if (!C.zf) goto L_125fb8b4;
L_125fb8df:;
  /* 125fb8df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125fb8e1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb8e3 je 0x125fb8ee */
  if (C.zf) goto L_125fb8ee;
L_125fb8e5:;
  /* 125fb8e5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 125fb8ea jb 0x125fb8ee */
  if (C.cf) goto L_125fb8ee;
  /* 125fb8ec neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_125fb8ee:;
  /* 125fb8ee pop eax */
  EAX = (pop32());
  /* 125fb8ef or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fb8f1 jne 0x125fb8fc */
  if (!C.zf) goto L_125fb8fc;
  /* 125fb8f3 lock dec dword ptr [0x1261917c] */
  x86_unimpl("lock dec @ 0x125fb8f3");
  /* 125fb8fa jmp 0x125fb90a */
  goto L_125fb90a;
L_125fb8fc:;
  /* 125fb8fc mov ebx, ecx */
  EBX = (ECX);
  /* 125fb8fe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 125fb900 call 0x125f0b10 */
  push32(0x125fb905u); f_125f0b10();
  /* 125fb905 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fb908 mov ecx, ebx */
  ECX = (EBX);
L_125fb90a:;
  /* 125fb90a mov eax, ecx */
  EAX = (ECX);
  /* 125fb90c pop ebx */
  EBX = (pop32());
  /* 125fb90d pop esi */
  ESI = (pop32());
  /* 125fb90e pop edi */
  EDI = (pop32());
  /* 125fb90f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125fb910 ret  */
  ESPCHK(0x125fb810u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b920 @ 0x125fb920 (255 bytes, 88 insns) */
void f_125fb920(void) {
  FTRACE(0x125fb920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fb920 push ebp */
  push32((uint32_t)(EBP));
  /* 125fb921 mov ebp, esp */
  EBP = (ESP);
  /* 125fb923 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_125fb926:;
  /* 125fb926 cmp dword ptr [0x12616ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12616ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb92d jle 0x125fb946 */
  if ((C.zf||C.sf!=C.of)) goto L_125fb946;
  /* 125fb92f push 8 */
  push32((uint32_t)(0x8u));
  /* 125fb931 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fb934 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125fb936 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125fb938 push ecx */
  push32((uint32_t)(ECX));
  /* 125fb939 call 0x125f3080 */
  push32(0x125fb93eu); f_125f3080();
  /* 125fb93e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fb941 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 125fb944 jmp 0x125fb95f */
  goto L_125fb95f;
L_125fb946:;
  /* 125fb946 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fb949 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fb94b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125fb94d mov ecx, dword ptr [0x12616c98] */
  ECX = (r32((uint32_t)(0x12616c98)));
  /* 125fb953 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125fb955 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 125fb959 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 125fb95c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_125fb95f:;
  /* 125fb95f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb963 je 0x125fb970 */
  if (C.zf) goto L_125fb970;
  /* 125fb965 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fb968 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fb96b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125fb96e jmp 0x125fb926 */
  goto L_125fb926;
L_125fb970:;
  /* 125fb970 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fb973 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125fb975 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125fb977 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125fb97a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fb97d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fb980 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125fb983 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fb986 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125fb989 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb98d je 0x125fb995 */
  if (C.zf) goto L_125fb995;
  /* 125fb98f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb993 jne 0x125fb9a8 */
  if (!C.zf) goto L_125fb9a8;
L_125fb995:;
  /* 125fb995 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fb998 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fb99a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125fb99c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125fb99f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fb9a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fb9a5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_125fb9a8:;
  /* 125fb9a8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_125fb9af:;
  /* 125fb9af cmp dword ptr [0x12616ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12616ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb9b6 jle 0x125fb9cb */
  if ((C.zf||C.sf!=C.of)) goto L_125fb9cb;
  /* 125fb9b8 push 4 */
  push32((uint32_t)(0x4u));
  /* 125fb9ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fb9bd push edx */
  push32((uint32_t)(EDX));
  /* 125fb9be call 0x125f3080 */
  push32(0x125fb9c3u); f_125f3080();
  /* 125fb9c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fb9c6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 125fb9c9 jmp 0x125fb9e0 */
  goto L_125fb9e0;
L_125fb9cb:;
  /* 125fb9cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fb9ce mov ecx, dword ptr [0x12616c98] */
  ECX = (r32((uint32_t)(0x12616c98)));
  /* 125fb9d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125fb9d6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 125fb9da and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 125fb9dd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_125fb9e0:;
  /* 125fb9e0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fb9e4 je 0x125fba0b */
  if (C.zf) goto L_125fba0b;
  /* 125fb9e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fb9e9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125fb9ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fb9ef lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 125fb9f3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 125fb9f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fb9f9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125fb9fb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125fb9fd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125fba00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fba03 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fba06 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 125fba09 jmp 0x125fb9af */
  goto L_125fb9af;
L_125fba0b:;
  /* 125fba0b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fba0f jne 0x125fba18 */
  if (!C.zf) goto L_125fba18;
  /* 125fba11 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fba14 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 125fba16 jmp 0x125fba1b */
  goto L_125fba1b;
L_125fba18:;
  /* 125fba18 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_125fba1b:;
  /* 125fba1b mov esp, ebp */
  ESP = (EBP);
  /* 125fba1d pop ebp */
  EBP = (pop32());
  /* 125fba1e ret  */
  ESPCHK(0x125fb920u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ba20 @ 0x125fba20 (17 bytes, 8 insns) */
void f_125fba20(void) {
  FTRACE(0x125fba20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fba20 push ebp */
  push32((uint32_t)(EBP));
  /* 125fba21 mov ebp, esp */
  EBP = (ESP);
  /* 125fba23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fba26 push eax */
  push32((uint32_t)(EAX));
  /* 125fba27 call 0x125fb920 */
  push32(0x125fba2cu); f_125fb920();
  /* 125fba2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fba2f pop ebp */
  EBP = (pop32());
  /* 125fba30 ret  */
  ESPCHK(0x125fba20u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ba40 @ 0x125fba40 (297 bytes, 106 insns) */
void f_125fba40(void) {
  FTRACE(0x125fba40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fba40 push ebp */
  push32((uint32_t)(EBP));
  /* 125fba41 mov ebp, esp */
  EBP = (ESP);
  /* 125fba43 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fba46 push esi */
  push32((uint32_t)(ESI));
L_125fba47:;
  /* 125fba47 cmp dword ptr [0x12616ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12616ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fba4e jle 0x125fba67 */
  if ((C.zf||C.sf!=C.of)) goto L_125fba67;
  /* 125fba50 push 8 */
  push32((uint32_t)(0x8u));
  /* 125fba52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fba55 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125fba57 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125fba59 push ecx */
  push32((uint32_t)(ECX));
  /* 125fba5a call 0x125f3080 */
  push32(0x125fba5fu); f_125f3080();
  /* 125fba5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fba62 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 125fba65 jmp 0x125fba80 */
  goto L_125fba80;
L_125fba67:;
  /* 125fba67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fba6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fba6c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125fba6e mov ecx, dword ptr [0x12616c98] */
  ECX = (r32((uint32_t)(0x12616c98)));
  /* 125fba74 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125fba76 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 125fba7a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 125fba7d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_125fba80:;
  /* 125fba80 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fba84 je 0x125fba91 */
  if (C.zf) goto L_125fba91;
  /* 125fba86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fba89 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fba8c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125fba8f jmp 0x125fba47 */
  goto L_125fba47;
L_125fba91:;
  /* 125fba91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fba94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125fba96 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125fba98 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125fba9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fba9e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbaa1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125fbaa4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fbaa7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 125fbaaa cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fbaae je 0x125fbab6 */
  if (C.zf) goto L_125fbab6;
  /* 125fbab0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fbab4 jne 0x125fbac9 */
  if (!C.zf) goto L_125fbac9;
L_125fbab6:;
  /* 125fbab6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fbab9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fbabb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125fbabd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125fbac0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fbac3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbac6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_125fbac9:;
  /* 125fbac9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 125fbad0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_125fbad7:;
  /* 125fbad7 cmp dword ptr [0x12616ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12616ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fbade jle 0x125fbaf3 */
  if ((C.zf||C.sf!=C.of)) goto L_125fbaf3;
  /* 125fbae0 push 4 */
  push32((uint32_t)(0x4u));
  /* 125fbae2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fbae5 push edx */
  push32((uint32_t)(EDX));
  /* 125fbae6 call 0x125f3080 */
  push32(0x125fbaebu); f_125f3080();
  /* 125fbaeb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbaee mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 125fbaf1 jmp 0x125fbb08 */
  goto L_125fbb08;
L_125fbaf3:;
  /* 125fbaf3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fbaf6 mov ecx, dword ptr [0x12616c98] */
  ECX = (r32((uint32_t)(0x12616c98)));
  /* 125fbafc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125fbafe mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 125fbb02 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 125fbb05 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_125fbb08:;
  /* 125fbb08 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fbb0c je 0x125fbb49 */
  if (C.zf) goto L_125fbb49;
  /* 125fbb0e push 0 */
  push32((uint32_t)(0x0u));
  /* 125fbb10 push 0xa */
  push32((uint32_t)(0xau));
  /* 125fbb12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fbb15 push eax */
  push32((uint32_t)(EAX));
  /* 125fbb16 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fbb19 push ecx */
  push32((uint32_t)(ECX));
  /* 125fbb1a call 0x125fc9e0 */
  push32(0x125fbb1fu); f_125fc9e0();
  /* 125fbb1f mov ecx, eax */
  ECX = (EAX);
  /* 125fbb21 mov esi, edx */
  ESI = (EDX);
  /* 125fbb23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fbb26 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fbb29 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125fbb2a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbb2c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbb2e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125fbb31 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 125fbb34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fbb37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fbb39 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125fbb3b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125fbb3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fbb41 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbb44 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 125fbb47 jmp 0x125fbad7 */
  goto L_125fbad7;
L_125fbb49:;
  /* 125fbb49 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fbb4d jne 0x125fbb5e */
  if (!C.zf) goto L_125fbb5e;
  /* 125fbb4f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fbb52 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 125fbb54 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fbb57 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbb5a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 125fbb5c jmp 0x125fbb64 */
  goto L_125fbb64;
L_125fbb5e:;
  /* 125fbb5e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fbb61 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_125fbb64:;
  /* 125fbb64 pop esi */
  ESI = (pop32());
  /* 125fbb65 mov esp, ebp */
  ESP = (EBP);
  /* 125fbb67 pop ebp */
  EBP = (pop32());
  /* 125fbb68 ret  */
  ESPCHK(0x125fba40u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bb70 @ 0x125fbb70 (61 bytes, 18 insns) */
void f_125fbb70(void) {
  FTRACE(0x125fbb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fbb70 push ebp */
  push32((uint32_t)(EBP));
  /* 125fbb71 mov ebp, esp */
  EBP = (ESP);
  /* 125fbb73 cmp dword ptr [0x12619148], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12619148))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fbb7a jne 0x125fbbab */
  if (!C.zf) goto L_125fbbab;
  /* 125fbb7c push 0xb */
  push32((uint32_t)(0xbu));
  /* 125fbb7e call 0x125f0a70 */
  push32(0x125fbb83u); f_125f0a70();
  /* 125fbb83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbb86 cmp dword ptr [0x12619148], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12619148))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fbb8d jne 0x125fbba1 */
  if (!C.zf) goto L_125fbba1;
  /* 125fbb8f call 0x125fbbd0 */
  push32(0x125fbb94u); f_125fbbd0();
  /* 125fbb94 mov eax, dword ptr [0x12619148] */
  EAX = (r32((uint32_t)(0x12619148)));
  /* 125fbb99 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbb9c mov dword ptr [0x12619148], eax */
  w32((uint32_t)(0x12619148), (EAX));
L_125fbba1:;
  /* 125fbba1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 125fbba3 call 0x125f0b10 */
  push32(0x125fbba8u); f_125f0b10();
  /* 125fbba8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125fbbab:;
  /* 125fbbab pop ebp */
  EBP = (pop32());
  /* 125fbbac ret  */
  ESPCHK(0x125fbb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bbb0 @ 0x125fbbb0 (30 bytes, 11 insns) */
void f_125fbbb0(void) {
  FTRACE(0x125fbbb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fbbb0 push ebp */
  push32((uint32_t)(EBP));
  /* 125fbbb1 mov ebp, esp */
  EBP = (ESP);
  /* 125fbbb3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 125fbbb5 call 0x125f0a70 */
  push32(0x125fbbbau); f_125f0a70();
  /* 125fbbba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbbbd call 0x125fbbd0 */
  push32(0x125fbbc2u); f_125fbbd0();
  /* 125fbbc2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 125fbbc4 call 0x125f0b10 */
  push32(0x125fbbc9u); f_125f0b10();
  /* 125fbbc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbbcc pop ebp */
  EBP = (pop32());
  /* 125fbbcd ret  */
  ESPCHK(0x125fbbb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bbd0 @ 0x125fbbd0 (939 bytes, 266 insns) */
void f_125fbbd0(void) {
  FTRACE(0x125fbbd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fbbd0 push ebp */
  push32((uint32_t)(EBP));
  /* 125fbbd1 mov ebp, esp */
  EBP = (ESP);
  /* 125fbbd3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fbbd6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125fbbdd push 0xc */
  push32((uint32_t)(0xcu));
  /* 125fbbdf call 0x125f0a70 */
  push32(0x125fbbe4u); f_125f0a70();
  /* 125fbbe4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbbe7 mov dword ptr [0x12619090], 0 */
  w32((uint32_t)(0x12619090), (0x0u));
  /* 125fbbf1 mov dword ptr [0x12617e38], 0xffffffff */
  w32((uint32_t)(0x12617e38), (0xffffffffu));
  /* 125fbbfb mov eax, dword ptr [0x12617e38] */
  EAX = (r32((uint32_t)(0x12617e38)));
  /* 125fbc00 mov dword ptr [0x12617e28], eax */
  w32((uint32_t)(0x12617e28), (EAX));
  /* 125fbc05 push 0x126153b0 */
  push32((uint32_t)(0x126153b0u));
  /* 125fbc0a call 0x125fca50 */
  push32(0x125fbc0fu); f_125fca50();
  /* 125fbc0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbc12 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125fbc15 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fbc19 jne 0x125fbd53 */
  if (!C.zf) goto L_125fbd53;
  /* 125fbc1f push 0xc */
  push32((uint32_t)(0xcu));
  /* 125fbc21 call 0x125f0b10 */
  push32(0x125fbc26u); f_125f0b10();
  /* 125fbc26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbc29 push 0x12619098 */
  push32((uint32_t)(0x12619098u));
  /* 125fbc2e call dword ptr [0x1261b2fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b2fc))), 0x125fbc34u);
  /* 125fbc34 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fbc37 je 0x125fbd4e */
  if (C.zf) goto L_125fbd4e;
  /* 125fbc3d mov dword ptr [0x12619090], 1 */
  w32((uint32_t)(0x12619090), (0x1u));
  /* 125fbc47 mov ecx, dword ptr [0x12619098] */
  ECX = (r32((uint32_t)(0x12619098)));
  /* 125fbc4d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125fbc50 mov dword ptr [0x12617d90], ecx */
  w32((uint32_t)(0x12617d90), (ECX));
  /* 125fbc56 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125fbc58 mov dx, word ptr [0x126190de] */
  DX = (r16((uint32_t)(0x126190de)));
  /* 125fbc5f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125fbc61 je 0x125fbc79 */
  if (C.zf) goto L_125fbc79;
  /* 125fbc63 mov eax, dword ptr [0x126190ec] */
  EAX = (r32((uint32_t)(0x126190ec)));
  /* 125fbc68 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125fbc6b mov ecx, dword ptr [0x12617d90] */
  ECX = (r32((uint32_t)(0x12617d90)));
  /* 125fbc71 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbc73 mov dword ptr [0x12617d90], ecx */
  w32((uint32_t)(0x12617d90), (ECX));
L_125fbc79:;
  /* 125fbc79 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125fbc7b mov dx, word ptr [0x12619132] */
  DX = (r16((uint32_t)(0x12619132)));
  /* 125fbc82 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125fbc84 je 0x125fbcae */
  if (C.zf) goto L_125fbcae;
  /* 125fbc86 cmp dword ptr [0x12619140], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12619140))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fbc8d je 0x125fbcae */
  if (C.zf) goto L_125fbcae;
  /* 125fbc8f mov dword ptr [0x12617d94], 1 */
  w32((uint32_t)(0x12617d94), (0x1u));
  /* 125fbc99 mov eax, dword ptr [0x12619140] */
  EAX = (r32((uint32_t)(0x12619140)));
  /* 125fbc9e sub eax, dword ptr [0x126190ec] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x126190ec))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fbca4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125fbca7 mov dword ptr [0x12617d98], eax */
  w32((uint32_t)(0x12617d98), (EAX));
  /* 125fbcac jmp 0x125fbcc2 */
  goto L_125fbcc2;
L_125fbcae:;
  /* 125fbcae mov dword ptr [0x12617d94], 0 */
  w32((uint32_t)(0x12617d94), (0x0u));
  /* 125fbcb8 mov dword ptr [0x12617d98], 0 */
  w32((uint32_t)(0x12617d98), (0x0u));
L_125fbcc2:;
  /* 125fbcc2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 125fbcc5 push ecx */
  push32((uint32_t)(ECX));
  /* 125fbcc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fbcc8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 125fbcca mov edx, dword ptr [0x12617e1c] */
  EDX = (r32((uint32_t)(0x12617e1c)));
  /* 125fbcd0 push edx */
  push32((uint32_t)(EDX));
  /* 125fbcd1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 125fbcd3 push 0x1261909c */
  push32((uint32_t)(0x1261909cu));
  /* 125fbcd8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 125fbcdd mov eax, dword ptr [0x12619000] */
  EAX = (r32((uint32_t)(0x12619000)));
  /* 125fbce2 push eax */
  push32((uint32_t)(EAX));
  /* 125fbce3 call dword ptr [0x1261b38c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b38c))), 0x125fbce9u);
  /* 125fbce9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125fbceb je 0x125fbcff */
  if (C.zf) goto L_125fbcff;
  /* 125fbced cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fbcf1 jne 0x125fbcff */
  if (!C.zf) goto L_125fbcff;
  /* 125fbcf3 mov ecx, dword ptr [0x12617e1c] */
  ECX = (r32((uint32_t)(0x12617e1c)));
  /* 125fbcf9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 125fbcfd jmp 0x125fbd08 */
  goto L_125fbd08;
L_125fbcff:;
  /* 125fbcff mov edx, dword ptr [0x12617e1c] */
  EDX = (r32((uint32_t)(0x12617e1c)));
  /* 125fbd05 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_125fbd08:;
  /* 125fbd08 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 125fbd0b push eax */
  push32((uint32_t)(EAX));
  /* 125fbd0c push 0 */
  push32((uint32_t)(0x0u));
  /* 125fbd0e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 125fbd10 mov ecx, dword ptr [0x12617e20] */
  ECX = (r32((uint32_t)(0x12617e20)));
  /* 125fbd16 push ecx */
  push32((uint32_t)(ECX));
  /* 125fbd17 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 125fbd19 push 0x126190f0 */
  push32((uint32_t)(0x126190f0u));
  /* 125fbd1e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 125fbd23 mov edx, dword ptr [0x12619000] */
  EDX = (r32((uint32_t)(0x12619000)));
  /* 125fbd29 push edx */
  push32((uint32_t)(EDX));
  /* 125fbd2a call dword ptr [0x1261b38c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b38c))), 0x125fbd30u);
  /* 125fbd30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125fbd32 je 0x125fbd45 */
  if (C.zf) goto L_125fbd45;
  /* 125fbd34 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fbd38 jne 0x125fbd45 */
  if (!C.zf) goto L_125fbd45;
  /* 125fbd3a mov eax, dword ptr [0x12617e20] */
  EAX = (r32((uint32_t)(0x12617e20)));
  /* 125fbd3f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 125fbd43 jmp 0x125fbd4e */
  goto L_125fbd4e;
L_125fbd45:;
  /* 125fbd45 mov ecx, dword ptr [0x12617e20] */
  ECX = (r32((uint32_t)(0x12617e20)));
  /* 125fbd4b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_125fbd4e:;
  /* 125fbd4e jmp 0x125fbf77 */
  goto L_125fbf77;
L_125fbd53:;
  /* 125fbd53 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fbd56 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125fbd59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125fbd5b je 0x125fbd7d */
  if (C.zf) goto L_125fbd7d;
  /* 125fbd5d cmp dword ptr [0x12619144], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12619144))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fbd64 je 0x125fbd8c */
  if (C.zf) goto L_125fbd8c;
  /* 125fbd66 mov ecx, dword ptr [0x12619144] */
  ECX = (r32((uint32_t)(0x12619144)));
  /* 125fbd6c push ecx */
  push32((uint32_t)(ECX));
  /* 125fbd6d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fbd70 push edx */
  push32((uint32_t)(EDX));
  /* 125fbd71 call 0x125f8d00 */
  push32(0x125fbd76u); f_125f8d00();
  /* 125fbd76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbd79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125fbd7b jne 0x125fbd8c */
  if (!C.zf) goto L_125fbd8c;
L_125fbd7d:;
  /* 125fbd7d push 0xc */
  push32((uint32_t)(0xcu));
  /* 125fbd7f call 0x125f0b10 */
  push32(0x125fbd84u); f_125f0b10();
  /* 125fbd84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbd87 jmp 0x125fbf77 */
  goto L_125fbf77;
L_125fbd8c:;
  /* 125fbd8c push 2 */
  push32((uint32_t)(0x2u));
  /* 125fbd8e mov eax, dword ptr [0x12619144] */
  EAX = (r32((uint32_t)(0x12619144)));
  /* 125fbd93 push eax */
  push32((uint32_t)(EAX));
  /* 125fbd94 call 0x125edb00 */
  push32(0x125fbd99u); f_125edb00();
  /* 125fbd99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbd9c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 125fbda1 push 0x126153a8 */
  push32((uint32_t)(0x126153a8u));
  /* 125fbda6 push 2 */
  push32((uint32_t)(0x2u));
  /* 125fbda8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fbdab push ecx */
  push32((uint32_t)(ECX));
  /* 125fbdac call 0x125efea0 */
  push32(0x125fbdb1u); f_125efea0();
  /* 125fbdb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbdb4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbdb7 push eax */
  push32((uint32_t)(EAX));
  /* 125fbdb8 call 0x125ed070 */
  push32(0x125fbdbdu); f_125ed070();
  /* 125fbdbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbdc0 mov dword ptr [0x12619144], eax */
  w32((uint32_t)(0x12619144), (EAX));
  /* 125fbdc5 cmp dword ptr [0x12619144], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12619144))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fbdcc jne 0x125fbddd */
  if (!C.zf) goto L_125fbddd;
  /* 125fbdce push 0xc */
  push32((uint32_t)(0xcu));
  /* 125fbdd0 call 0x125f0b10 */
  push32(0x125fbdd5u); f_125f0b10();
  /* 125fbdd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbdd8 jmp 0x125fbf77 */
  goto L_125fbf77;
L_125fbddd:;
  /* 125fbddd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fbde0 push edx */
  push32((uint32_t)(EDX));
  /* 125fbde1 mov eax, dword ptr [0x12619144] */
  EAX = (r32((uint32_t)(0x12619144)));
  /* 125fbde6 push eax */
  push32((uint32_t)(EAX));
  /* 125fbde7 call 0x125f0020 */
  push32(0x125fbdecu); f_125f0020();
  /* 125fbdec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbdef push 0xc */
  push32((uint32_t)(0xcu));
  /* 125fbdf1 call 0x125f0b10 */
  push32(0x125fbdf6u); f_125f0b10();
  /* 125fbdf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbdf9 push 3 */
  push32((uint32_t)(0x3u));
  /* 125fbdfb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fbdfe push ecx */
  push32((uint32_t)(ECX));
  /* 125fbdff mov edx, dword ptr [0x12617e1c] */
  EDX = (r32((uint32_t)(0x12617e1c)));
  /* 125fbe05 push edx */
  push32((uint32_t)(EDX));
  /* 125fbe06 call 0x125f0890 */
  push32(0x125fbe0bu); f_125f0890();
  /* 125fbe0b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbe0e mov eax, dword ptr [0x12617e1c] */
  EAX = (r32((uint32_t)(0x12617e1c)));
  /* 125fbe13 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 125fbe17 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fbe1a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbe1d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125fbe20 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fbe23 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125fbe26 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fbe29 jne 0x125fbe3d */
  if (!C.zf) goto L_125fbe3d;
  /* 125fbe2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fbe2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbe31 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125fbe34 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fbe37 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbe3a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_125fbe3d:;
  /* 125fbe3d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fbe40 push eax */
  push32((uint32_t)(EAX));
  /* 125fbe41 call 0x125fb920 */
  push32(0x125fbe46u); f_125fb920();
  /* 125fbe46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbe49 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125fbe4f mov dword ptr [0x12617d90], eax */
  w32((uint32_t)(0x12617d90), (EAX));
L_125fbe54:;
  /* 125fbe54 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fbe57 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125fbe5a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fbe5d je 0x125fbe75 */
  if (C.zf) goto L_125fbe75;
  /* 125fbe5f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fbe62 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125fbe65 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fbe68 jl 0x125fbe80 */
  if ((C.sf!=C.of)) goto L_125fbe80;
  /* 125fbe6a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fbe6d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125fbe70 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fbe73 jg 0x125fbe80 */
  if ((!C.zf&&C.sf==C.of)) goto L_125fbe80;
L_125fbe75:;
  /* 125fbe75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fbe78 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbe7b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125fbe7e jmp 0x125fbe54 */
  goto L_125fbe54;
L_125fbe80:;
  /* 125fbe80 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fbe83 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125fbe86 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fbe89 jne 0x125fbf25 */
  if (!C.zf) goto L_125fbf25;
  /* 125fbe8f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fbe92 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbe95 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125fbe98 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fbe9b push edx */
  push32((uint32_t)(EDX));
  /* 125fbe9c call 0x125fb920 */
  push32(0x125fbea1u); f_125fb920();
  /* 125fbea1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbea4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125fbea7 mov ecx, dword ptr [0x12617d90] */
  ECX = (r32((uint32_t)(0x12617d90)));
  /* 125fbead add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbeaf mov dword ptr [0x12617d90], ecx */
  w32((uint32_t)(0x12617d90), (ECX));
L_125fbeb5:;
  /* 125fbeb5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fbeb8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125fbebb cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fbebe jl 0x125fbed6 */
  if ((C.sf!=C.of)) goto L_125fbed6;
  /* 125fbec0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fbec3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125fbec6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fbec9 jg 0x125fbed6 */
  if ((!C.zf&&C.sf==C.of)) goto L_125fbed6;
  /* 125fbecb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fbece add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbed1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125fbed4 jmp 0x125fbeb5 */
  goto L_125fbeb5;
L_125fbed6:;
  /* 125fbed6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fbed9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125fbedc cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fbedf jne 0x125fbf25 */
  if (!C.zf) goto L_125fbf25;
  /* 125fbee1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fbee4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbee7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125fbeea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fbeed push ecx */
  push32((uint32_t)(ECX));
  /* 125fbeee call 0x125fb920 */
  push32(0x125fbef3u); f_125fb920();
  /* 125fbef3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbef6 mov edx, dword ptr [0x12617d90] */
  EDX = (r32((uint32_t)(0x12617d90)));
  /* 125fbefc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbefe mov dword ptr [0x12617d90], edx */
  w32((uint32_t)(0x12617d90), (EDX));
L_125fbf04:;
  /* 125fbf04 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fbf07 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125fbf0a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fbf0d jl 0x125fbf25 */
  if ((C.sf!=C.of)) goto L_125fbf25;
  /* 125fbf0f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fbf12 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125fbf15 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fbf18 jg 0x125fbf25 */
  if ((!C.zf&&C.sf==C.of)) goto L_125fbf25;
  /* 125fbf1a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fbf1d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbf20 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125fbf23 jmp 0x125fbf04 */
  goto L_125fbf04;
L_125fbf25:;
  /* 125fbf25 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fbf29 je 0x125fbf39 */
  if (C.zf) goto L_125fbf39;
  /* 125fbf2b mov edx, dword ptr [0x12617d90] */
  EDX = (r32((uint32_t)(0x12617d90)));
  /* 125fbf31 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 125fbf33 mov dword ptr [0x12617d90], edx */
  w32((uint32_t)(0x12617d90), (EDX));
L_125fbf39:;
  /* 125fbf39 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fbf3c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125fbf3f mov dword ptr [0x12617d94], ecx */
  w32((uint32_t)(0x12617d94), (ECX));
  /* 125fbf45 cmp dword ptr [0x12617d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12617d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fbf4c je 0x125fbf6e */
  if (C.zf) goto L_125fbf6e;
  /* 125fbf4e push 3 */
  push32((uint32_t)(0x3u));
  /* 125fbf50 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fbf53 push edx */
  push32((uint32_t)(EDX));
  /* 125fbf54 mov eax, dword ptr [0x12617e20] */
  EAX = (r32((uint32_t)(0x12617e20)));
  /* 125fbf59 push eax */
  push32((uint32_t)(EAX));
  /* 125fbf5a call 0x125f0890 */
  push32(0x125fbf5fu); f_125f0890();
  /* 125fbf5f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbf62 mov ecx, dword ptr [0x12617e20] */
  ECX = (r32((uint32_t)(0x12617e20)));
  /* 125fbf68 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 125fbf6c jmp 0x125fbf77 */
  goto L_125fbf77;
L_125fbf6e:;
  /* 125fbf6e mov edx, dword ptr [0x12617e20] */
  EDX = (r32((uint32_t)(0x12617e20)));
  /* 125fbf74 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_125fbf77:;
  /* 125fbf77 mov esp, ebp */
  ESP = (EBP);
  /* 125fbf79 pop ebp */
  EBP = (pop32());
  /* 125fbf7a ret  */
  ESPCHK(0x125fbbd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bf80 @ 0x125fbf80 (46 bytes, 18 insns) */
void f_125fbf80(void) {
  FTRACE(0x125fbf80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fbf80 push ebp */
  push32((uint32_t)(EBP));
  /* 125fbf81 mov ebp, esp */
  EBP = (ESP);
  /* 125fbf83 push ecx */
  push32((uint32_t)(ECX));
  /* 125fbf84 push 0xb */
  push32((uint32_t)(0xbu));
  /* 125fbf86 call 0x125f0a70 */
  push32(0x125fbf8bu); f_125f0a70();
  /* 125fbf8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbf8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fbf91 push eax */
  push32((uint32_t)(EAX));
  /* 125fbf92 call 0x125fbfb0 */
  push32(0x125fbf97u); f_125fbfb0();
  /* 125fbf97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbf9a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125fbf9d push 0xb */
  push32((uint32_t)(0xbu));
  /* 125fbf9f call 0x125f0b10 */
  push32(0x125fbfa4u); f_125f0b10();
  /* 125fbfa4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fbfa7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fbfaa mov esp, ebp */
  ESP = (EBP);
  /* 125fbfac pop ebp */
  EBP = (pop32());
  /* 125fbfad ret  */
  ESPCHK(0x125fbf80u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bfb0 @ 0x125fbfb0 (762 bytes, 246 insns) */
void f_125fbfb0(void) {
  FTRACE(0x125fbfb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fbfb0 push ebp */
  push32((uint32_t)(EBP));
  /* 125fbfb1 mov ebp, esp */
  EBP = (ESP);
  /* 125fbfb3 push ecx */
  push32((uint32_t)(ECX));
  /* 125fbfb4 cmp dword ptr [0x12617d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12617d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fbfbb jne 0x125fbfc4 */
  if (!C.zf) goto L_125fbfc4;
  /* 125fbfbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fbfbf jmp 0x125fc2a6 */
  goto L_125fc2a6;
L_125fbfc4:;
  /* 125fbfc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fbfc7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 125fbfca cmp ecx, dword ptr [0x12617e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12617e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fbfd0 jne 0x125fbfe4 */
  if (!C.zf) goto L_125fbfe4;
  /* 125fbfd2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fbfd5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 125fbfd8 cmp eax, dword ptr [0x12617e38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12617e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fbfde je 0x125fc1ab */
  if (C.zf) goto L_125fc1ab;
L_125fbfe4:;
  /* 125fbfe4 cmp dword ptr [0x12619090], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12619090))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fbfeb je 0x125fc165 */
  if (C.zf) goto L_125fc165;
  /* 125fbff1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125fbff3 mov cx, word ptr [0x12619130] */
  CX = (r16((uint32_t)(0x12619130)));
  /* 125fbffa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125fbffc jne 0x125fc059 */
  if (!C.zf) goto L_125fc059;
  /* 125fbffe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125fc000 mov dx, word ptr [0x1261913e] */
  DX = (r16((uint32_t)(0x1261913e)));
  /* 125fc007 push edx */
  push32((uint32_t)(EDX));
  /* 125fc008 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fc00a mov ax, word ptr [0x1261913c] */
  AX = (r16((uint32_t)(0x1261913c)));
  /* 125fc010 push eax */
  push32((uint32_t)(EAX));
  /* 125fc011 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125fc013 mov cx, word ptr [0x1261913a] */
  CX = (r16((uint32_t)(0x1261913a)));
  /* 125fc01a push ecx */
  push32((uint32_t)(ECX));
  /* 125fc01b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125fc01d mov dx, word ptr [0x12619138] */
  DX = (r16((uint32_t)(0x12619138)));
  /* 125fc024 push edx */
  push32((uint32_t)(EDX));
  /* 125fc025 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc027 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fc029 mov ax, word ptr [0x12619134] */
  AX = (r16((uint32_t)(0x12619134)));
  /* 125fc02f push eax */
  push32((uint32_t)(EAX));
  /* 125fc030 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125fc032 mov cx, word ptr [0x12619136] */
  CX = (r16((uint32_t)(0x12619136)));
  /* 125fc039 push ecx */
  push32((uint32_t)(ECX));
  /* 125fc03a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125fc03c mov dx, word ptr [0x12619132] */
  DX = (r16((uint32_t)(0x12619132)));
  /* 125fc043 push edx */
  push32((uint32_t)(EDX));
  /* 125fc044 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fc047 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 125fc04a push ecx */
  push32((uint32_t)(ECX));
  /* 125fc04b push 1 */
  push32((uint32_t)(0x1u));
  /* 125fc04d push 1 */
  push32((uint32_t)(0x1u));
  /* 125fc04f call 0x125fc2b0 */
  push32(0x125fc054u); f_125fc2b0();
  /* 125fc054 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fc057 jmp 0x125fc0aa */
  goto L_125fc0aa;
L_125fc059:;
  /* 125fc059 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125fc05b mov dx, word ptr [0x1261913e] */
  DX = (r16((uint32_t)(0x1261913e)));
  /* 125fc062 push edx */
  push32((uint32_t)(EDX));
  /* 125fc063 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fc065 mov ax, word ptr [0x1261913c] */
  AX = (r16((uint32_t)(0x1261913c)));
  /* 125fc06b push eax */
  push32((uint32_t)(EAX));
  /* 125fc06c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125fc06e mov cx, word ptr [0x1261913a] */
  CX = (r16((uint32_t)(0x1261913a)));
  /* 125fc075 push ecx */
  push32((uint32_t)(ECX));
  /* 125fc076 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125fc078 mov dx, word ptr [0x12619138] */
  DX = (r16((uint32_t)(0x12619138)));
  /* 125fc07f push edx */
  push32((uint32_t)(EDX));
  /* 125fc080 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fc082 mov ax, word ptr [0x12619136] */
  AX = (r16((uint32_t)(0x12619136)));
  /* 125fc088 push eax */
  push32((uint32_t)(EAX));
  /* 125fc089 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc08b push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc08d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125fc08f mov cx, word ptr [0x12619132] */
  CX = (r16((uint32_t)(0x12619132)));
  /* 125fc096 push ecx */
  push32((uint32_t)(ECX));
  /* 125fc097 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fc09a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 125fc09d push eax */
  push32((uint32_t)(EAX));
  /* 125fc09e push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc0a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 125fc0a2 call 0x125fc2b0 */
  push32(0x125fc0a7u); f_125fc2b0();
  /* 125fc0a7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125fc0aa:;
  /* 125fc0aa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125fc0ac mov cx, word ptr [0x126190dc] */
  CX = (r16((uint32_t)(0x126190dc)));
  /* 125fc0b3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125fc0b5 jne 0x125fc112 */
  if (!C.zf) goto L_125fc112;
  /* 125fc0b7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125fc0b9 mov dx, word ptr [0x126190ea] */
  DX = (r16((uint32_t)(0x126190ea)));
  /* 125fc0c0 push edx */
  push32((uint32_t)(EDX));
  /* 125fc0c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fc0c3 mov ax, word ptr [0x126190e8] */
  AX = (r16((uint32_t)(0x126190e8)));
  /* 125fc0c9 push eax */
  push32((uint32_t)(EAX));
  /* 125fc0ca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125fc0cc mov cx, word ptr [0x126190e6] */
  CX = (r16((uint32_t)(0x126190e6)));
  /* 125fc0d3 push ecx */
  push32((uint32_t)(ECX));
  /* 125fc0d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125fc0d6 mov dx, word ptr [0x126190e4] */
  DX = (r16((uint32_t)(0x126190e4)));
  /* 125fc0dd push edx */
  push32((uint32_t)(EDX));
  /* 125fc0de push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc0e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fc0e2 mov ax, word ptr [0x126190e0] */
  AX = (r16((uint32_t)(0x126190e0)));
  /* 125fc0e8 push eax */
  push32((uint32_t)(EAX));
  /* 125fc0e9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125fc0eb mov cx, word ptr [0x126190e2] */
  CX = (r16((uint32_t)(0x126190e2)));
  /* 125fc0f2 push ecx */
  push32((uint32_t)(ECX));
  /* 125fc0f3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125fc0f5 mov dx, word ptr [0x126190de] */
  DX = (r16((uint32_t)(0x126190de)));
  /* 125fc0fc push edx */
  push32((uint32_t)(EDX));
  /* 125fc0fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fc100 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 125fc103 push ecx */
  push32((uint32_t)(ECX));
  /* 125fc104 push 1 */
  push32((uint32_t)(0x1u));
  /* 125fc106 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc108 call 0x125fc2b0 */
  push32(0x125fc10du); f_125fc2b0();
  /* 125fc10d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fc110 jmp 0x125fc163 */
  goto L_125fc163;
L_125fc112:;
  /* 125fc112 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125fc114 mov dx, word ptr [0x126190ea] */
  DX = (r16((uint32_t)(0x126190ea)));
  /* 125fc11b push edx */
  push32((uint32_t)(EDX));
  /* 125fc11c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fc11e mov ax, word ptr [0x126190e8] */
  AX = (r16((uint32_t)(0x126190e8)));
  /* 125fc124 push eax */
  push32((uint32_t)(EAX));
  /* 125fc125 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125fc127 mov cx, word ptr [0x126190e6] */
  CX = (r16((uint32_t)(0x126190e6)));
  /* 125fc12e push ecx */
  push32((uint32_t)(ECX));
  /* 125fc12f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125fc131 mov dx, word ptr [0x126190e4] */
  DX = (r16((uint32_t)(0x126190e4)));
  /* 125fc138 push edx */
  push32((uint32_t)(EDX));
  /* 125fc139 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fc13b mov ax, word ptr [0x126190e2] */
  AX = (r16((uint32_t)(0x126190e2)));
  /* 125fc141 push eax */
  push32((uint32_t)(EAX));
  /* 125fc142 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc144 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc146 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125fc148 mov cx, word ptr [0x126190de] */
  CX = (r16((uint32_t)(0x126190de)));
  /* 125fc14f push ecx */
  push32((uint32_t)(ECX));
  /* 125fc150 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fc153 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 125fc156 push eax */
  push32((uint32_t)(EAX));
  /* 125fc157 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc159 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc15b call 0x125fc2b0 */
  push32(0x125fc160u); f_125fc2b0();
  /* 125fc160 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125fc163:;
  /* 125fc163 jmp 0x125fc1ab */
  goto L_125fc1ab;
L_125fc165:;
  /* 125fc165 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc167 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc169 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc16b push 2 */
  push32((uint32_t)(0x2u));
  /* 125fc16d push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc16f push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc171 push 1 */
  push32((uint32_t)(0x1u));
  /* 125fc173 push 4 */
  push32((uint32_t)(0x4u));
  /* 125fc175 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fc178 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 125fc17b push edx */
  push32((uint32_t)(EDX));
  /* 125fc17c push 1 */
  push32((uint32_t)(0x1u));
  /* 125fc17e push 1 */
  push32((uint32_t)(0x1u));
  /* 125fc180 call 0x125fc2b0 */
  push32(0x125fc185u); f_125fc2b0();
  /* 125fc185 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fc188 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc18a push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc18c push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc18e push 2 */
  push32((uint32_t)(0x2u));
  /* 125fc190 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc192 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc194 push 5 */
  push32((uint32_t)(0x5u));
  /* 125fc196 push 0xa */
  push32((uint32_t)(0xau));
  /* 125fc198 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fc19b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 125fc19e push ecx */
  push32((uint32_t)(ECX));
  /* 125fc19f push 1 */
  push32((uint32_t)(0x1u));
  /* 125fc1a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc1a3 call 0x125fc2b0 */
  push32(0x125fc1a8u); f_125fc2b0();
  /* 125fc1a8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125fc1ab:;
  /* 125fc1ab mov edx, dword ptr [0x12617e2c] */
  EDX = (r32((uint32_t)(0x12617e2c)));
  /* 125fc1b1 cmp edx, dword ptr [0x12617e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12617e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc1b7 jge 0x125fc204 */
  if ((C.sf==C.of)) goto L_125fc204;
  /* 125fc1b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fc1bc mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 125fc1bf cmp ecx, dword ptr [0x12617e2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12617e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc1c5 jl 0x125fc1d5 */
  if ((C.sf!=C.of)) goto L_125fc1d5;
  /* 125fc1c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fc1ca mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 125fc1cd cmp eax, dword ptr [0x12617e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12617e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc1d3 jle 0x125fc1dc */
  if ((C.zf||C.sf!=C.of)) goto L_125fc1dc;
L_125fc1d5:;
  /* 125fc1d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fc1d7 jmp 0x125fc2a6 */
  goto L_125fc2a6;
L_125fc1dc:;
  /* 125fc1dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fc1df mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 125fc1e2 cmp edx, dword ptr [0x12617e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12617e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc1e8 jle 0x125fc202 */
  if ((C.zf||C.sf!=C.of)) goto L_125fc202;
  /* 125fc1ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fc1ed mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 125fc1f0 cmp ecx, dword ptr [0x12617e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12617e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc1f6 jge 0x125fc202 */
  if ((C.sf==C.of)) goto L_125fc202;
  /* 125fc1f8 mov eax, 1 */
  EAX = (0x1u);
  /* 125fc1fd jmp 0x125fc2a6 */
  goto L_125fc2a6;
L_125fc202:;
  /* 125fc202 jmp 0x125fc247 */
  goto L_125fc247;
L_125fc204:;
  /* 125fc204 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fc207 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 125fc20a cmp eax, dword ptr [0x12617e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12617e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc210 jl 0x125fc220 */
  if ((C.sf!=C.of)) goto L_125fc220;
  /* 125fc212 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fc215 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 125fc218 cmp edx, dword ptr [0x12617e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12617e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc21e jle 0x125fc227 */
  if ((C.zf||C.sf!=C.of)) goto L_125fc227;
L_125fc220:;
  /* 125fc220 mov eax, 1 */
  EAX = (0x1u);
  /* 125fc225 jmp 0x125fc2a6 */
  goto L_125fc2a6;
L_125fc227:;
  /* 125fc227 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fc22a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 125fc22d cmp ecx, dword ptr [0x12617e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12617e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc233 jle 0x125fc247 */
  if ((C.zf||C.sf!=C.of)) goto L_125fc247;
  /* 125fc235 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fc238 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 125fc23b cmp eax, dword ptr [0x12617e2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12617e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc241 jge 0x125fc247 */
  if ((C.sf==C.of)) goto L_125fc247;
  /* 125fc243 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fc245 jmp 0x125fc2a6 */
  goto L_125fc2a6;
L_125fc247:;
  /* 125fc247 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fc24a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125fc24d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125fc250 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fc253 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125fc255 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fc257 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fc25a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 125fc25d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125fc263 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fc265 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125fc26b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125fc26e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fc271 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 125fc274 cmp edx, dword ptr [0x12617e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12617e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc27a jne 0x125fc292 */
  if (!C.zf) goto L_125fc292;
  /* 125fc27c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fc27f cmp eax, dword ptr [0x12617e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12617e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc285 jl 0x125fc28e */
  if ((C.sf!=C.of)) goto L_125fc28e;
  /* 125fc287 mov eax, 1 */
  EAX = (0x1u);
  /* 125fc28c jmp 0x125fc2a6 */
  goto L_125fc2a6;
L_125fc28e:;
  /* 125fc28e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fc290 jmp 0x125fc2a6 */
  goto L_125fc2a6;
L_125fc292:;
  /* 125fc292 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fc295 cmp ecx, dword ptr [0x12617e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12617e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc29b jge 0x125fc2a4 */
  if ((C.sf==C.of)) goto L_125fc2a4;
  /* 125fc29d mov eax, 1 */
  EAX = (0x1u);
  /* 125fc2a2 jmp 0x125fc2a6 */
  goto L_125fc2a6;
L_125fc2a4:;
  /* 125fc2a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125fc2a6:;
  /* 125fc2a6 mov esp, ebp */
  ESP = (EBP);
  /* 125fc2a8 pop ebp */
  EBP = (pop32());
  /* 125fc2a9 ret  */
  ESPCHK(0x125fbfb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c2b0 @ 0x125fc2b0 (504 bytes, 145 insns) */
void f_125fc2b0(void) {
  FTRACE(0x125fc2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fc2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 125fc2b1 mov ebp, esp */
  EBP = (ESP);
  /* 125fc2b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fc2b6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc2ba jne 0x125fc38c */
  if (!C.zf) goto L_125fc38c;
  /* 125fc2c0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fc2c3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 125fc2c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125fc2c8 jne 0x125fc2d9 */
  if (!C.zf) goto L_125fc2d9;
  /* 125fc2ca mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fc2cd mov edx, dword ptr [ecx*4 + 0x12617e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12617e4c)));
  /* 125fc2d4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 125fc2d7 jmp 0x125fc2e6 */
  goto L_125fc2e6;
L_125fc2d9:;
  /* 125fc2d9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fc2dc mov ecx, dword ptr [eax*4 + 0x12617e80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12617e80)));
  /* 125fc2e3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_125fc2e6:;
  /* 125fc2e6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fc2e9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fc2ec mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 125fc2ef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fc2f2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fc2f5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125fc2fb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fc2fe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fc300 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fc303 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fc306 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 125fc309 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 125fc30d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125fc30e mov ecx, 7 */
  ECX = (0x7u);
  /* 125fc313 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125fc315 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125fc318 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fc31b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc31e jg 0x125fc339 */
  if ((!C.zf&&C.sf==C.of)) goto L_125fc339;
  /* 125fc320 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 125fc323 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fc326 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 125fc329 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fc32c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125fc32f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fc332 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fc334 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125fc337 jmp 0x125fc34d */
  goto L_125fc34d;
L_125fc339:;
  /* 125fc339 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 125fc33c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fc33f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125fc342 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125fc345 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fc348 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fc34a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_125fc34d:;
  /* 125fc34d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc351 jne 0x125fc38a */
  if (!C.zf) goto L_125fc38a;
  /* 125fc353 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fc356 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 125fc359 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125fc35b jne 0x125fc36c */
  if (!C.zf) goto L_125fc36c;
  /* 125fc35d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fc360 mov eax, dword ptr [edx*4 + 0x12617e50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12617e50)));
  /* 125fc367 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 125fc36a jmp 0x125fc379 */
  goto L_125fc379;
L_125fc36c:;
  /* 125fc36c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fc36f mov edx, dword ptr [ecx*4 + 0x12617e84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12617e84)));
  /* 125fc376 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_125fc379:;
  /* 125fc379 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fc37c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc37f jle 0x125fc38a */
  if ((C.zf||C.sf!=C.of)) goto L_125fc38a;
  /* 125fc381 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fc384 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fc387 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_125fc38a:;
  /* 125fc38a jmp 0x125fc3c1 */
  goto L_125fc3c1;
L_125fc38c:;
  /* 125fc38c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fc38f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 125fc392 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125fc394 jne 0x125fc3a5 */
  if (!C.zf) goto L_125fc3a5;
  /* 125fc396 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fc399 mov ecx, dword ptr [eax*4 + 0x12617e4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12617e4c)));
  /* 125fc3a0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125fc3a3 jmp 0x125fc3b2 */
  goto L_125fc3b2;
L_125fc3a5:;
  /* 125fc3a5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fc3a8 mov eax, dword ptr [edx*4 + 0x12617e80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12617e80)));
  /* 125fc3af mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_125fc3b2:;
  /* 125fc3b2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125fc3b5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125fc3b8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fc3bb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fc3be mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_125fc3c1:;
  /* 125fc3c1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc3c5 jne 0x125fc401 */
  if (!C.zf) goto L_125fc401;
  /* 125fc3c7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fc3ca mov dword ptr [0x12617e2c], eax */
  w32((uint32_t)(0x12617e2c), (EAX));
  /* 125fc3cf mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 125fc3d2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125fc3d5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 125fc3d8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fc3da imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125fc3dd mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 125fc3e0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fc3e2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125fc3e8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 125fc3eb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fc3ed mov dword ptr [0x12617e30], ecx */
  w32((uint32_t)(0x12617e30), (ECX));
  /* 125fc3f3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fc3f6 mov dword ptr [0x12617e28], edx */
  w32((uint32_t)(0x12617e28), (EDX));
  /* 125fc3fc jmp 0x125fc4a4 */
  goto L_125fc4a4;
L_125fc401:;
  /* 125fc401 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fc404 mov dword ptr [0x12617e3c], eax */
  w32((uint32_t)(0x12617e3c), (EAX));
  /* 125fc409 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 125fc40c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125fc40f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 125fc412 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fc414 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125fc417 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 125fc41a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fc41c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125fc422 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 125fc425 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fc427 mov dword ptr [0x12617e40], ecx */
  w32((uint32_t)(0x12617e40), (ECX));
  /* 125fc42d mov edx, dword ptr [0x12617d98] */
  EDX = (r32((uint32_t)(0x12617d98)));
  /* 125fc433 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125fc439 mov eax, dword ptr [0x12617e40] */
  EAX = (r32((uint32_t)(0x12617e40)));
  /* 125fc43e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fc440 mov dword ptr [0x12617e40], eax */
  w32((uint32_t)(0x12617e40), (EAX));
  /* 125fc445 cmp dword ptr [0x12617e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12617e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc44c jge 0x125fc471 */
  if ((C.sf==C.of)) goto L_125fc471;
  /* 125fc44e mov ecx, dword ptr [0x12617e40] */
  ECX = (r32((uint32_t)(0x12617e40)));
  /* 125fc454 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fc45a mov dword ptr [0x12617e40], ecx */
  w32((uint32_t)(0x12617e40), (ECX));
  /* 125fc460 mov edx, dword ptr [0x12617e3c] */
  EDX = (r32((uint32_t)(0x12617e3c)));
  /* 125fc466 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fc469 mov dword ptr [0x12617e3c], edx */
  w32((uint32_t)(0x12617e3c), (EDX));
  /* 125fc46f jmp 0x125fc49b */
  goto L_125fc49b;
L_125fc471:;
  /* 125fc471 cmp dword ptr [0x12617e40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x12617e40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc47b jl 0x125fc49b */
  if ((C.sf!=C.of)) goto L_125fc49b;
  /* 125fc47d mov eax, dword ptr [0x12617e40] */
  EAX = (r32((uint32_t)(0x12617e40)));
  /* 125fc482 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fc487 mov dword ptr [0x12617e40], eax */
  w32((uint32_t)(0x12617e40), (EAX));
  /* 125fc48c mov ecx, dword ptr [0x12617e3c] */
  ECX = (r32((uint32_t)(0x12617e3c)));
  /* 125fc492 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fc495 mov dword ptr [0x12617e3c], ecx */
  w32((uint32_t)(0x12617e3c), (ECX));
L_125fc49b:;
  /* 125fc49b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fc49e mov dword ptr [0x12617e38], edx */
  w32((uint32_t)(0x12617e38), (EDX));
L_125fc4a4:;
  /* 125fc4a4 mov esp, ebp */
  ESP = (EBP);
  /* 125fc4a6 pop ebp */
  EBP = (pop32());
  /* 125fc4a7 ret  */
  ESPCHK(0x125fc2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c4b0 @ 0x125fc4b0 (382 bytes, 135 insns) */
void f_125fc4b0(void) {
  FTRACE(0x125fc4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fc4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 125fc4b1 mov ebp, esp */
  EBP = (ESP);
  /* 125fc4b3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 125fc4b5 push 0x126153b8 */
  push32((uint32_t)(0x126153b8u));
  /* 125fc4ba push 0x125f6178 */
  push32((uint32_t)(0x125f6178u));
  /* 125fc4bf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 125fc4c5 push eax */
  push32((uint32_t)(EAX));
  /* 125fc4c6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 125fc4cd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fc4d0 push ebx */
  push32((uint32_t)(EBX));
  /* 125fc4d1 push esi */
  push32((uint32_t)(ESI));
  /* 125fc4d2 push edi */
  push32((uint32_t)(EDI));
  /* 125fc4d3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125fc4d6 cmp dword ptr [0x1261914c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1261914c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc4dd jne 0x125fc522 */
  if (!C.zf) goto L_125fc522;
  /* 125fc4df push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc4e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc4e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 125fc4e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc4e7 call dword ptr [0x1261b2f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b2f8))), 0x125fc4edu);
  /* 125fc4ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125fc4ef je 0x125fc4fd */
  if (C.zf) goto L_125fc4fd;
  /* 125fc4f1 mov dword ptr [0x1261914c], 1 */
  w32((uint32_t)(0x1261914c), (0x1u));
  /* 125fc4fb jmp 0x125fc522 */
  goto L_125fc522;
L_125fc4fd:;
  /* 125fc4fd push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc4ff push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc501 push 1 */
  push32((uint32_t)(0x1u));
  /* 125fc503 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc505 call dword ptr [0x1261b310] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b310))), 0x125fc50bu);
  /* 125fc50b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125fc50d je 0x125fc51b */
  if (C.zf) goto L_125fc51b;
  /* 125fc50f mov dword ptr [0x1261914c], 2 */
  w32((uint32_t)(0x1261914c), (0x2u));
  /* 125fc519 jmp 0x125fc522 */
  goto L_125fc522;
L_125fc51b:;
  /* 125fc51b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fc51d jmp 0x125fc631 */
  goto L_125fc631;
L_125fc522:;
  /* 125fc522 cmp dword ptr [0x1261914c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1261914c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc529 jne 0x125fc546 */
  if (!C.zf) goto L_125fc546;
  /* 125fc52b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fc52e push eax */
  push32((uint32_t)(EAX));
  /* 125fc52f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fc532 push ecx */
  push32((uint32_t)(ECX));
  /* 125fc533 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fc536 push edx */
  push32((uint32_t)(EDX));
  /* 125fc537 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fc53a push eax */
  push32((uint32_t)(EAX));
  /* 125fc53b call dword ptr [0x1261b2f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b2f8))), 0x125fc541u);
  /* 125fc541 jmp 0x125fc631 */
  goto L_125fc631;
L_125fc546:;
  /* 125fc546 cmp dword ptr [0x1261914c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1261914c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc54d jne 0x125fc62f */
  if (!C.zf) goto L_125fc62f;
  /* 125fc553 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc557 jne 0x125fc562 */
  if (!C.zf) goto L_125fc562;
  /* 125fc559 mov ecx, dword ptr [0x12619000] */
  ECX = (r32((uint32_t)(0x12619000)));
  /* 125fc55f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_125fc562:;
  /* 125fc562 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc564 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc566 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fc569 push edx */
  push32((uint32_t)(EDX));
  /* 125fc56a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fc56d push eax */
  push32((uint32_t)(EAX));
  /* 125fc56e call dword ptr [0x1261b310] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b310))), 0x125fc574u);
  /* 125fc574 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 125fc577 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc57b jne 0x125fc584 */
  if (!C.zf) goto L_125fc584;
  /* 125fc57d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fc57f jmp 0x125fc631 */
  goto L_125fc631;
L_125fc584:;
  /* 125fc584 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125fc58b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125fc58e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fc591 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 125fc593 call 0x125f0210 */
  push32(0x125fc598u); f_125f0210();
  /* 125fc598 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 125fc59b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125fc59e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 125fc5a1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 125fc5a4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 125fc5ab jmp 0x125fc5c4 */
  goto L_125fc5c4;
  /* 125fc5ad mov eax, 1 */
  EAX = (0x1u);
  /* 125fc5b2 ret  */
  ESPCHK(0x125fc4b0u, _esp0);
  ESP += 4; return;
  /* 125fc5b3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 125fc5b6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 125fc5bd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_125fc5c4:;
  /* 125fc5c4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc5c8 jne 0x125fc5ce */
  if (!C.zf) goto L_125fc5ce;
  /* 125fc5ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fc5cc jmp 0x125fc631 */
  goto L_125fc631;
L_125fc5ce:;
  /* 125fc5ce mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125fc5d1 push edx */
  push32((uint32_t)(EDX));
  /* 125fc5d2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 125fc5d5 push eax */
  push32((uint32_t)(EAX));
  /* 125fc5d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fc5d9 push ecx */
  push32((uint32_t)(ECX));
  /* 125fc5da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fc5dd push edx */
  push32((uint32_t)(EDX));
  /* 125fc5de call dword ptr [0x1261b310] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b310))), 0x125fc5e4u);
  /* 125fc5e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125fc5e6 jne 0x125fc5ec */
  if (!C.zf) goto L_125fc5ec;
  /* 125fc5e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fc5ea jmp 0x125fc631 */
  goto L_125fc631;
L_125fc5ec:;
  /* 125fc5ec cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc5f0 jne 0x125fc60d */
  if (!C.zf) goto L_125fc60d;
  /* 125fc5f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc5f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc5f6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 125fc5f8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 125fc5fb push eax */
  push32((uint32_t)(EAX));
  /* 125fc5fc push 1 */
  push32((uint32_t)(0x1u));
  /* 125fc5fe mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 125fc601 push ecx */
  push32((uint32_t)(ECX));
  /* 125fc602 call dword ptr [0x1261b340] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b340))), 0x125fc608u);
  /* 125fc608 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 125fc60b jmp 0x125fc62a */
  goto L_125fc62a;
L_125fc60d:;
  /* 125fc60d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fc610 push edx */
  push32((uint32_t)(EDX));
  /* 125fc611 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fc614 push eax */
  push32((uint32_t)(EAX));
  /* 125fc615 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 125fc617 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125fc61a push ecx */
  push32((uint32_t)(ECX));
  /* 125fc61b push 1 */
  push32((uint32_t)(0x1u));
  /* 125fc61d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125fc620 push edx */
  push32((uint32_t)(EDX));
  /* 125fc621 call dword ptr [0x1261b340] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b340))), 0x125fc627u);
  /* 125fc627 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_125fc62a:;
  /* 125fc62a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125fc62d jmp 0x125fc631 */
  goto L_125fc631;
L_125fc62f:;
  /* 125fc62f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125fc631:;
  /* 125fc631 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 125fc634 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125fc637 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 125fc63e pop edi */
  EDI = (pop32());
  /* 125fc63f pop esi */
  ESI = (pop32());
  /* 125fc640 pop ebx */
  EBX = (pop32());
  /* 125fc641 mov esp, ebp */
  ESP = (EBP);
  /* 125fc643 pop ebp */
  EBP = (pop32());
  /* 125fc644 ret  */
  ESPCHK(0x125fc4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c650 @ 0x125fc650 (398 bytes, 140 insns) */
void f_125fc650(void) {
  FTRACE(0x125fc650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fc650 push ebp */
  push32((uint32_t)(EBP));
  /* 125fc651 mov ebp, esp */
  EBP = (ESP);
  /* 125fc653 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 125fc655 push 0x126153c8 */
  push32((uint32_t)(0x126153c8u));
  /* 125fc65a push 0x125f6178 */
  push32((uint32_t)(0x125f6178u));
  /* 125fc65f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 125fc665 push eax */
  push32((uint32_t)(EAX));
  /* 125fc666 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 125fc66d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fc670 push ebx */
  push32((uint32_t)(EBX));
  /* 125fc671 push esi */
  push32((uint32_t)(ESI));
  /* 125fc672 push edi */
  push32((uint32_t)(EDI));
  /* 125fc673 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125fc676 cmp dword ptr [0x12619150], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12619150))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc67d jne 0x125fc6c2 */
  if (!C.zf) goto L_125fc6c2;
  /* 125fc67f push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc681 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc683 push 1 */
  push32((uint32_t)(0x1u));
  /* 125fc685 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc687 call dword ptr [0x1261b2f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b2f8))), 0x125fc68du);
  /* 125fc68d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125fc68f je 0x125fc69d */
  if (C.zf) goto L_125fc69d;
  /* 125fc691 mov dword ptr [0x12619150], 1 */
  w32((uint32_t)(0x12619150), (0x1u));
  /* 125fc69b jmp 0x125fc6c2 */
  goto L_125fc6c2;
L_125fc69d:;
  /* 125fc69d push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc69f push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc6a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 125fc6a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc6a5 call dword ptr [0x1261b310] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b310))), 0x125fc6abu);
  /* 125fc6ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125fc6ad je 0x125fc6bb */
  if (C.zf) goto L_125fc6bb;
  /* 125fc6af mov dword ptr [0x12619150], 2 */
  w32((uint32_t)(0x12619150), (0x2u));
  /* 125fc6b9 jmp 0x125fc6c2 */
  goto L_125fc6c2;
L_125fc6bb:;
  /* 125fc6bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fc6bd jmp 0x125fc7e1 */
  goto L_125fc7e1;
L_125fc6c2:;
  /* 125fc6c2 cmp dword ptr [0x12619150], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12619150))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc6c9 jne 0x125fc6e6 */
  if (!C.zf) goto L_125fc6e6;
  /* 125fc6cb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fc6ce push eax */
  push32((uint32_t)(EAX));
  /* 125fc6cf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fc6d2 push ecx */
  push32((uint32_t)(ECX));
  /* 125fc6d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fc6d6 push edx */
  push32((uint32_t)(EDX));
  /* 125fc6d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fc6da push eax */
  push32((uint32_t)(EAX));
  /* 125fc6db call dword ptr [0x1261b310] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b310))), 0x125fc6e1u);
  /* 125fc6e1 jmp 0x125fc7e1 */
  goto L_125fc7e1;
L_125fc6e6:;
  /* 125fc6e6 cmp dword ptr [0x12619150], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12619150))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc6ed jne 0x125fc7df */
  if (!C.zf) goto L_125fc7df;
  /* 125fc6f3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc6f7 jne 0x125fc702 */
  if (!C.zf) goto L_125fc702;
  /* 125fc6f9 mov ecx, dword ptr [0x12619000] */
  ECX = (r32((uint32_t)(0x12619000)));
  /* 125fc6ff mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_125fc702:;
  /* 125fc702 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc704 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc706 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fc709 push edx */
  push32((uint32_t)(EDX));
  /* 125fc70a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fc70d push eax */
  push32((uint32_t)(EAX));
  /* 125fc70e call dword ptr [0x1261b2f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b2f8))), 0x125fc714u);
  /* 125fc714 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 125fc717 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc71b jne 0x125fc724 */
  if (!C.zf) goto L_125fc724;
  /* 125fc71d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fc71f jmp 0x125fc7e1 */
  goto L_125fc7e1;
L_125fc724:;
  /* 125fc724 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125fc72b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125fc72e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 125fc730 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fc733 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 125fc735 call 0x125f0210 */
  push32(0x125fc73au); f_125f0210();
  /* 125fc73a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 125fc73d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125fc740 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 125fc743 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 125fc746 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 125fc74d jmp 0x125fc766 */
  goto L_125fc766;
  /* 125fc74f mov eax, 1 */
  EAX = (0x1u);
  /* 125fc754 ret  */
  ESPCHK(0x125fc650u, _esp0);
  ESP += 4; return;
  /* 125fc755 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 125fc758 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 125fc75f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_125fc766:;
  /* 125fc766 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc76a jne 0x125fc770 */
  if (!C.zf) goto L_125fc770;
  /* 125fc76c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fc76e jmp 0x125fc7e1 */
  goto L_125fc7e1;
L_125fc770:;
  /* 125fc770 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125fc773 push edx */
  push32((uint32_t)(EDX));
  /* 125fc774 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 125fc777 push eax */
  push32((uint32_t)(EAX));
  /* 125fc778 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fc77b push ecx */
  push32((uint32_t)(ECX));
  /* 125fc77c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fc77f push edx */
  push32((uint32_t)(EDX));
  /* 125fc780 call dword ptr [0x1261b2f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b2f8))), 0x125fc786u);
  /* 125fc786 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125fc788 jne 0x125fc78e */
  if (!C.zf) goto L_125fc78e;
  /* 125fc78a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fc78c jmp 0x125fc7e1 */
  goto L_125fc7e1;
L_125fc78e:;
  /* 125fc78e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc792 jne 0x125fc7b6 */
  if (!C.zf) goto L_125fc7b6;
  /* 125fc794 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc796 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc798 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc79a push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc79c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 125fc79e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 125fc7a1 push eax */
  push32((uint32_t)(EAX));
  /* 125fc7a2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 125fc7a7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 125fc7aa push ecx */
  push32((uint32_t)(ECX));
  /* 125fc7ab call dword ptr [0x1261b38c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b38c))), 0x125fc7b1u);
  /* 125fc7b1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 125fc7b4 jmp 0x125fc7da */
  goto L_125fc7da;
L_125fc7b6:;
  /* 125fc7b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc7b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc7ba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fc7bd push edx */
  push32((uint32_t)(EDX));
  /* 125fc7be mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fc7c1 push eax */
  push32((uint32_t)(EAX));
  /* 125fc7c2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 125fc7c4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125fc7c7 push ecx */
  push32((uint32_t)(ECX));
  /* 125fc7c8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 125fc7cd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125fc7d0 push edx */
  push32((uint32_t)(EDX));
  /* 125fc7d1 call dword ptr [0x1261b38c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b38c))), 0x125fc7d7u);
  /* 125fc7d7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_125fc7da:;
  /* 125fc7da mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125fc7dd jmp 0x125fc7e1 */
  goto L_125fc7e1;
L_125fc7df:;
  /* 125fc7df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125fc7e1:;
  /* 125fc7e1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 125fc7e4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125fc7e7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 125fc7ee pop edi */
  EDI = (pop32());
  /* 125fc7ef pop esi */
  ESI = (pop32());
  /* 125fc7f0 pop ebx */
  EBX = (pop32());
  /* 125fc7f1 mov esp, ebp */
  ESP = (EBP);
  /* 125fc7f3 pop ebp */
  EBP = (pop32());
  /* 125fc7f4 ret  */
  ESPCHK(0x125fc650u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c800 @ 0x125fc800 (11 bytes, 6 insns) */
void f_125fc800(void) {
  FTRACE(0x125fc800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fc800 push ebp */
  push32((uint32_t)(EBP));
  /* 125fc801 mov ebp, esp */
  EBP = (ESP);
  /* 125fc803 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fc806 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fc809 pop ebp */
  EBP = (pop32());
  /* 125fc80a ret  */
  ESPCHK(0x125fc800u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c810 @ 0x125fc810 (147 bytes, 43 insns) */
void f_125fc810(void) {
  FTRACE(0x125fc810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fc810 push ebp */
  push32((uint32_t)(EBP));
  /* 125fc811 mov ebp, esp */
  EBP = (ESP);
  /* 125fc813 push ecx */
  push32((uint32_t)(ECX));
  /* 125fc814 cmp dword ptr [0x12618ff0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12618ff0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc81b jne 0x125fc837 */
  if (!C.zf) goto L_125fc837;
  /* 125fc81d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc821 jl 0x125fc832 */
  if ((C.sf!=C.of)) goto L_125fc832;
  /* 125fc823 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc827 jg 0x125fc832 */
  if ((!C.zf&&C.sf==C.of)) goto L_125fc832;
  /* 125fc829 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fc82c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fc82f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_125fc832:;
  /* 125fc832 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fc835 jmp 0x125fc89f */
  goto L_125fc89f;
L_125fc837:;
  /* 125fc837 push 0x1261917c */
  push32((uint32_t)(0x1261917cu));
  /* 125fc83c call dword ptr [0x1261b2e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b2e8))), 0x125fc842u);
  /* 125fc842 cmp dword ptr [0x1261916c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1261916c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc849 je 0x125fc869 */
  if (C.zf) goto L_125fc869;
  /* 125fc84b push 0x1261917c */
  push32((uint32_t)(0x1261917cu));
  /* 125fc850 call dword ptr [0x1261b3c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b3c8))), 0x125fc856u);
  /* 125fc856 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 125fc858 call 0x125f0a70 */
  push32(0x125fc85du); f_125f0a70();
  /* 125fc85d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fc860 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 125fc867 jmp 0x125fc870 */
  goto L_125fc870;
L_125fc869:;
  /* 125fc869 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_125fc870:;
  /* 125fc870 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fc873 push ecx */
  push32((uint32_t)(ECX));
  /* 125fc874 call 0x125fc8b0 */
  push32(0x125fc879u); f_125fc8b0();
  /* 125fc879 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fc87c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125fc87f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc883 je 0x125fc891 */
  if (C.zf) goto L_125fc891;
  /* 125fc885 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 125fc887 call 0x125f0b10 */
  push32(0x125fc88cu); f_125f0b10();
  /* 125fc88c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fc88f jmp 0x125fc89c */
  goto L_125fc89c;
L_125fc891:;
  /* 125fc891 push 0x1261917c */
  push32((uint32_t)(0x1261917cu));
  /* 125fc896 call dword ptr [0x1261b3c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b3c8))), 0x125fc89cu);
L_125fc89c:;
  /* 125fc89c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_125fc89f:;
  /* 125fc89f mov esp, ebp */
  ESP = (EBP);
  /* 125fc8a1 pop ebp */
  EBP = (pop32());
  /* 125fc8a2 ret  */
  ESPCHK(0x125fc810u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c8b0 @ 0x125fc8b0 (299 bytes, 91 insns) */
void f_125fc8b0(void) {
  FTRACE(0x125fc8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fc8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 125fc8b1 mov ebp, esp */
  EBP = (ESP);
  /* 125fc8b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fc8b6 cmp dword ptr [0x12618ff0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12618ff0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc8bd jne 0x125fc8dc */
  if (!C.zf) goto L_125fc8dc;
  /* 125fc8bf cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc8c3 jl 0x125fc8d4 */
  if ((C.sf!=C.of)) goto L_125fc8d4;
  /* 125fc8c5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc8c9 jg 0x125fc8d4 */
  if ((!C.zf&&C.sf==C.of)) goto L_125fc8d4;
  /* 125fc8cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fc8ce add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fc8d1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_125fc8d4:;
  /* 125fc8d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fc8d7 jmp 0x125fc9d7 */
  goto L_125fc9d7;
L_125fc8dc:;
  /* 125fc8dc cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc8e3 jge 0x125fc923 */
  if ((C.sf==C.of)) goto L_125fc923;
  /* 125fc8e5 cmp dword ptr [0x12616ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12616ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc8ec jle 0x125fc901 */
  if ((C.zf||C.sf!=C.of)) goto L_125fc901;
  /* 125fc8ee push 1 */
  push32((uint32_t)(0x1u));
  /* 125fc8f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fc8f3 push ecx */
  push32((uint32_t)(ECX));
  /* 125fc8f4 call 0x125f3080 */
  push32(0x125fc8f9u); f_125f3080();
  /* 125fc8f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fc8fc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 125fc8ff jmp 0x125fc915 */
  goto L_125fc915;
L_125fc901:;
  /* 125fc901 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fc904 mov eax, dword ptr [0x12616c98] */
  EAX = (r32((uint32_t)(0x12616c98)));
  /* 125fc909 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125fc90b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 125fc90f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 125fc912 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_125fc915:;
  /* 125fc915 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc919 jne 0x125fc923 */
  if (!C.zf) goto L_125fc923;
  /* 125fc91b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fc91e jmp 0x125fc9d7 */
  goto L_125fc9d7;
L_125fc923:;
  /* 125fc923 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fc926 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 125fc929 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 125fc92f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 125fc935 mov eax, dword ptr [0x12616c98] */
  EAX = (r32((uint32_t)(0x12616c98)));
  /* 125fc93a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125fc93c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 125fc940 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 125fc946 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125fc948 je 0x125fc96c */
  if (C.zf) goto L_125fc96c;
  /* 125fc94a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fc94d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 125fc950 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 125fc956 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 125fc959 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 125fc95c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 125fc95f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 125fc963 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 125fc96a jmp 0x125fc97d */
  goto L_125fc97d;
L_125fc96c:;
  /* 125fc96c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 125fc96f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 125fc972 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 125fc976 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_125fc97d:;
  /* 125fc97d push 1 */
  push32((uint32_t)(0x1u));
  /* 125fc97f push 0 */
  push32((uint32_t)(0x0u));
  /* 125fc981 push 3 */
  push32((uint32_t)(0x3u));
  /* 125fc983 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 125fc986 push edx */
  push32((uint32_t)(EDX));
  /* 125fc987 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fc98a push eax */
  push32((uint32_t)(EAX));
  /* 125fc98b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 125fc98e push ecx */
  push32((uint32_t)(ECX));
  /* 125fc98f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 125fc994 mov edx, dword ptr [0x12618ff0] */
  EDX = (r32((uint32_t)(0x12618ff0)));
  /* 125fc99a push edx */
  push32((uint32_t)(EDX));
  /* 125fc99b call 0x125f5460 */
  push32(0x125fc9a0u); f_125f5460();
  /* 125fc9a0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fc9a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125fc9a6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc9aa jne 0x125fc9b1 */
  if (!C.zf) goto L_125fc9b1;
  /* 125fc9ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fc9af jmp 0x125fc9d7 */
  goto L_125fc9d7;
L_125fc9b1:;
  /* 125fc9b1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fc9b5 jne 0x125fc9c1 */
  if (!C.zf) goto L_125fc9c1;
  /* 125fc9b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fc9ba and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125fc9bf jmp 0x125fc9d7 */
  goto L_125fc9d7;
L_125fc9c1:;
  /* 125fc9c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fc9c4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125fc9c9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 125fc9cc and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 125fc9d2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 125fc9d5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_125fc9d7:;
  /* 125fc9d7 mov esp, ebp */
  ESP = (EBP);
  /* 125fc9d9 pop ebp */
  EBP = (pop32());
  /* 125fc9da ret  */
  ESPCHK(0x125fc8b0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x125fc9e0 (52 bytes, 19 insns) */
void f_125fc9e0(void) {
  FTRACE(0x125fc9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fc9e0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 125fc9e4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 125fc9e8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125fc9ea mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 125fc9ee jne 0x125fc9f9 */
  if (!C.zf) goto L_125fc9f9;
  /* 125fc9f0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 125fc9f4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 125fc9f6 ret 0x10 */
  ESPCHK(0x125fc9e0u, _esp0);
  ESP += 20; return;
L_125fc9f9:;
  /* 125fc9f9 push ebx */
  push32((uint32_t)(EBX));
  /* 125fc9fa mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 125fc9fc mov ebx, eax */
  EBX = (EAX);
  /* 125fc9fe mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 125fca02 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 125fca06 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fca08 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 125fca0c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 125fca0e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fca10 pop ebx */
  EBX = (pop32());
  /* 125fca11 ret 0x10 */
  ESPCHK(0x125fc9e0u, _esp0);
  ESP += 20; return;
}

/* FUN_1001ca20 @ 0x125fca20 (46 bytes, 18 insns) */
void f_125fca20(void) {
  FTRACE(0x125fca20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fca20 push ebp */
  push32((uint32_t)(EBP));
  /* 125fca21 mov ebp, esp */
  EBP = (ESP);
  /* 125fca23 push ecx */
  push32((uint32_t)(ECX));
  /* 125fca24 push 0xc */
  push32((uint32_t)(0xcu));
  /* 125fca26 call 0x125f0a70 */
  push32(0x125fca2bu); f_125f0a70();
  /* 125fca2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fca2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fca31 push eax */
  push32((uint32_t)(EAX));
  /* 125fca32 call 0x125fca50 */
  push32(0x125fca37u); f_125fca50();
  /* 125fca37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fca3a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125fca3d push 0xc */
  push32((uint32_t)(0xcu));
  /* 125fca3f call 0x125f0b10 */
  push32(0x125fca44u); f_125f0b10();
  /* 125fca44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fca47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fca4a mov esp, ebp */
  ESP = (EBP);
  /* 125fca4c pop ebp */
  EBP = (pop32());
  /* 125fca4d ret  */
  ESPCHK(0x125fca20u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x125fca50 (198 bytes, 69 insns) */
void f_125fca50(void) {
  FTRACE(0x125fca50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fca50 push ebp */
  push32((uint32_t)(EBP));
  /* 125fca51 mov ebp, esp */
  EBP = (ESP);
  /* 125fca53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fca56 mov eax, dword ptr [0x12618e0c] */
  EAX = (r32((uint32_t)(0x12618e0c)));
  /* 125fca5b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125fca5e cmp dword ptr [0x1261a900], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1261a900))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fca65 jne 0x125fca6e */
  if (!C.zf) goto L_125fca6e;
  /* 125fca67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fca69 jmp 0x125fcb12 */
  goto L_125fcb12;
L_125fca6e:;
  /* 125fca6e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fca72 jne 0x125fca96 */
  if (!C.zf) goto L_125fca96;
  /* 125fca74 cmp dword ptr [0x12618e14], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12618e14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fca7b je 0x125fca96 */
  if (C.zf) goto L_125fca96;
  /* 125fca7d call 0x125fcb70 */
  push32(0x125fca82u); f_125fcb70();
  /* 125fca82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125fca84 je 0x125fca8d */
  if (C.zf) goto L_125fca8d;
  /* 125fca86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fca88 jmp 0x125fcb12 */
  goto L_125fcb12;
L_125fca8d:;
  /* 125fca8d mov ecx, dword ptr [0x12618e0c] */
  ECX = (r32((uint32_t)(0x12618e0c)));
  /* 125fca93 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_125fca96:;
  /* 125fca96 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fca9a je 0x125fcb10 */
  if (C.zf) goto L_125fcb10;
  /* 125fca9c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fcaa0 je 0x125fcb10 */
  if (C.zf) goto L_125fcb10;
  /* 125fcaa2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fcaa5 push edx */
  push32((uint32_t)(EDX));
  /* 125fcaa6 call 0x125efea0 */
  push32(0x125fcaabu); f_125efea0();
  /* 125fcaab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fcaae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125fcab1:;
  /* 125fcab1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fcab4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fcab7 je 0x125fcb10 */
  if (C.zf) goto L_125fcb10;
  /* 125fcab9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fcabc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125fcabe push edx */
  push32((uint32_t)(EDX));
  /* 125fcabf call 0x125efea0 */
  push32(0x125fcac4u); f_125efea0();
  /* 125fcac4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fcac7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fcaca jbe 0x125fcb05 */
  if ((C.cf||C.zf)) goto L_125fcb05;
  /* 125fcacc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fcacf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125fcad1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fcad4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 125fcad8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fcadb jne 0x125fcb05 */
  if (!C.zf) goto L_125fcb05;
  /* 125fcadd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fcae0 push ecx */
  push32((uint32_t)(ECX));
  /* 125fcae1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fcae4 push edx */
  push32((uint32_t)(EDX));
  /* 125fcae5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fcae8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125fcaea push ecx */
  push32((uint32_t)(ECX));
  /* 125fcaeb call 0x125fcb20 */
  push32(0x125fcaf0u); f_125fcb20();
  /* 125fcaf0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fcaf3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125fcaf5 jne 0x125fcb05 */
  if (!C.zf) goto L_125fcb05;
  /* 125fcaf7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fcafa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125fcafc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fcaff lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 125fcb03 jmp 0x125fcb12 */
  goto L_125fcb12;
L_125fcb05:;
  /* 125fcb05 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fcb08 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fcb0b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 125fcb0e jmp 0x125fcab1 */
  goto L_125fcab1;
L_125fcb10:;
  /* 125fcb10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125fcb12:;
  /* 125fcb12 mov esp, ebp */
  ESP = (EBP);
  /* 125fcb14 pop ebp */
  EBP = (pop32());
  /* 125fcb15 ret  */
  ESPCHK(0x125fca50u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x125fcb20 (79 bytes, 32 insns) */
void f_125fcb20(void) {
  FTRACE(0x125fcb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fcb20 push ebp */
  push32((uint32_t)(EBP));
  /* 125fcb21 mov ebp, esp */
  EBP = (ESP);
  /* 125fcb23 push ecx */
  push32((uint32_t)(ECX));
  /* 125fcb24 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fcb28 jne 0x125fcb2e */
  if (!C.zf) goto L_125fcb2e;
  /* 125fcb2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fcb2c jmp 0x125fcb6b */
  goto L_125fcb6b;
L_125fcb2e:;
  /* 125fcb2e mov eax, dword ptr [0x1261a4c4] */
  EAX = (r32((uint32_t)(0x1261a4c4)));
  /* 125fcb33 push eax */
  push32((uint32_t)(EAX));
  /* 125fcb34 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fcb37 push ecx */
  push32((uint32_t)(ECX));
  /* 125fcb38 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fcb3b push edx */
  push32((uint32_t)(EDX));
  /* 125fcb3c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fcb3f push eax */
  push32((uint32_t)(EAX));
  /* 125fcb40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fcb43 push ecx */
  push32((uint32_t)(ECX));
  /* 125fcb44 push 1 */
  push32((uint32_t)(0x1u));
  /* 125fcb46 mov edx, dword ptr [0x1261a764] */
  EDX = (r32((uint32_t)(0x1261a764)));
  /* 125fcb4c push edx */
  push32((uint32_t)(EDX));
  /* 125fcb4d call 0x125fcc20 */
  push32(0x125fcb52u); f_125fcc20();
  /* 125fcb52 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fcb55 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125fcb58 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fcb5c jne 0x125fcb65 */
  if (!C.zf) goto L_125fcb65;
  /* 125fcb5e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 125fcb63 jmp 0x125fcb6b */
  goto L_125fcb6b;
L_125fcb65:;
  /* 125fcb65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fcb68 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_125fcb6b:;
  /* 125fcb6b mov esp, ebp */
  ESP = (EBP);
  /* 125fcb6d pop ebp */
  EBP = (pop32());
  /* 125fcb6e ret  */
  ESPCHK(0x125fcb20u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cb70 @ 0x125fcb70 (174 bytes, 66 insns) */
void f_125fcb70(void) {
  FTRACE(0x125fcb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fcb70 push ebp */
  push32((uint32_t)(EBP));
  /* 125fcb71 mov ebp, esp */
  EBP = (ESP);
  /* 125fcb73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fcb76 mov eax, dword ptr [0x12618e14] */
  EAX = (r32((uint32_t)(0x12618e14)));
  /* 125fcb7b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125fcb7e:;
  /* 125fcb7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fcb81 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fcb84 je 0x125fcc18 */
  if (C.zf) goto L_125fcc18;
  /* 125fcb8a push 0 */
  push32((uint32_t)(0x0u));
  /* 125fcb8c push 0 */
  push32((uint32_t)(0x0u));
  /* 125fcb8e push 0 */
  push32((uint32_t)(0x0u));
  /* 125fcb90 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fcb92 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 125fcb94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fcb97 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125fcb99 push eax */
  push32((uint32_t)(EAX));
  /* 125fcb9a push 0 */
  push32((uint32_t)(0x0u));
  /* 125fcb9c push 1 */
  push32((uint32_t)(0x1u));
  /* 125fcb9e call dword ptr [0x1261b38c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b38c))), 0x125fcba4u);
  /* 125fcba4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125fcba7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fcbab jne 0x125fcbb2 */
  if (!C.zf) goto L_125fcbb2;
  /* 125fcbad or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125fcbb0 jmp 0x125fcc1a */
  goto L_125fcc1a;
L_125fcbb2:;
  /* 125fcbb2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 125fcbb4 push 0x126153d4 */
  push32((uint32_t)(0x126153d4u));
  /* 125fcbb9 push 2 */
  push32((uint32_t)(0x2u));
  /* 125fcbbb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fcbbe push ecx */
  push32((uint32_t)(ECX));
  /* 125fcbbf call 0x125ed070 */
  push32(0x125fcbc4u); f_125ed070();
  /* 125fcbc4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fcbc7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125fcbca cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fcbce jne 0x125fcbd5 */
  if (!C.zf) goto L_125fcbd5;
  /* 125fcbd0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125fcbd3 jmp 0x125fcc1a */
  goto L_125fcc1a;
L_125fcbd5:;
  /* 125fcbd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fcbd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fcbd9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fcbdc push edx */
  push32((uint32_t)(EDX));
  /* 125fcbdd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fcbe0 push eax */
  push32((uint32_t)(EAX));
  /* 125fcbe1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 125fcbe3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fcbe6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125fcbe8 push edx */
  push32((uint32_t)(EDX));
  /* 125fcbe9 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fcbeb push 1 */
  push32((uint32_t)(0x1u));
  /* 125fcbed call dword ptr [0x1261b38c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b38c))), 0x125fcbf3u);
  /* 125fcbf3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125fcbf5 jne 0x125fcbfc */
  if (!C.zf) goto L_125fcbfc;
  /* 125fcbf7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125fcbfa jmp 0x125fcc1a */
  goto L_125fcc1a;
L_125fcbfc:;
  /* 125fcbfc push 0 */
  push32((uint32_t)(0x0u));
  /* 125fcbfe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fcc01 push eax */
  push32((uint32_t)(EAX));
  /* 125fcc02 call 0x125fd070 */
  push32(0x125fcc07u); f_125fd070();
  /* 125fcc07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fcc0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fcc0d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fcc10 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125fcc13 jmp 0x125fcb7e */
  goto L_125fcb7e;
L_125fcc18:;
  /* 125fcc18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125fcc1a:;
  /* 125fcc1a mov esp, ebp */
  ESP = (EBP);
  /* 125fcc1c pop ebp */
  EBP = (pop32());
  /* 125fcc1d ret  */
  ESPCHK(0x125fcb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cc20 @ 0x125fcc20 (970 bytes, 340 insns) */
void f_125fcc20(void) {
  FTRACE(0x125fcc20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fcc20 push ebp */
  push32((uint32_t)(EBP));
  /* 125fcc21 mov ebp, esp */
  EBP = (ESP);
  /* 125fcc23 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 125fcc25 push 0x12615428 */
  push32((uint32_t)(0x12615428u));
  /* 125fcc2a push 0x125f6178 */
  push32((uint32_t)(0x125f6178u));
  /* 125fcc2f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 125fcc35 push eax */
  push32((uint32_t)(EAX));
  /* 125fcc36 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 125fcc3d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fcc40 push ebx */
  push32((uint32_t)(EBX));
  /* 125fcc41 push esi */
  push32((uint32_t)(ESI));
  /* 125fcc42 push edi */
  push32((uint32_t)(EDI));
  /* 125fcc43 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125fcc46 cmp dword ptr [0x12619154], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12619154))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fcc4d jne 0x125fcca6 */
  if (!C.zf) goto L_125fcca6;
  /* 125fcc4f push 1 */
  push32((uint32_t)(0x1u));
  /* 125fcc51 push 0x12614a80 */
  push32((uint32_t)(0x12614a80u));
  /* 125fcc56 push 1 */
  push32((uint32_t)(0x1u));
  /* 125fcc58 push 0x12614a80 */
  push32((uint32_t)(0x12614a80u));
  /* 125fcc5d push 0 */
  push32((uint32_t)(0x0u));
  /* 125fcc5f push 0 */
  push32((uint32_t)(0x0u));
  /* 125fcc61 call dword ptr [0x1261b2f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b2f0))), 0x125fcc67u);
  /* 125fcc67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125fcc69 je 0x125fcc77 */
  if (C.zf) goto L_125fcc77;
  /* 125fcc6b mov dword ptr [0x12619154], 1 */
  w32((uint32_t)(0x12619154), (0x1u));
  /* 125fcc75 jmp 0x125fcca6 */
  goto L_125fcca6;
L_125fcc77:;
  /* 125fcc77 push 1 */
  push32((uint32_t)(0x1u));
  /* 125fcc79 push 0x12614a7c */
  push32((uint32_t)(0x12614a7cu));
  /* 125fcc7e push 1 */
  push32((uint32_t)(0x1u));
  /* 125fcc80 push 0x12614a7c */
  push32((uint32_t)(0x12614a7cu));
  /* 125fcc85 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fcc87 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fcc89 call dword ptr [0x1261b2f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b2f4))), 0x125fcc8fu);
  /* 125fcc8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125fcc91 je 0x125fcc9f */
  if (C.zf) goto L_125fcc9f;
  /* 125fcc93 mov dword ptr [0x12619154], 2 */
  w32((uint32_t)(0x12619154), (0x2u));
  /* 125fcc9d jmp 0x125fcca6 */
  goto L_125fcca6;
L_125fcc9f:;
  /* 125fcc9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fcca1 jmp 0x125fd004 */
  goto L_125fd004;
L_125fcca6:;
  /* 125fcca6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fccaa jle 0x125fccbf */
  if ((C.zf||C.sf!=C.of)) goto L_125fccbf;
  /* 125fccac mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fccaf push eax */
  push32((uint32_t)(EAX));
  /* 125fccb0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fccb3 push ecx */
  push32((uint32_t)(ECX));
  /* 125fccb4 call 0x125fd020 */
  push32(0x125fccb9u); f_125fd020();
  /* 125fccb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fccbc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_125fccbf:;
  /* 125fccbf cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fccc3 jle 0x125fccd8 */
  if ((C.zf||C.sf!=C.of)) goto L_125fccd8;
  /* 125fccc5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 125fccc8 push edx */
  push32((uint32_t)(EDX));
  /* 125fccc9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125fcccc push eax */
  push32((uint32_t)(EAX));
  /* 125fcccd call 0x125fd020 */
  push32(0x125fccd2u); f_125fd020();
  /* 125fccd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fccd5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_125fccd8:;
  /* 125fccd8 cmp dword ptr [0x12619154], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12619154))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fccdf jne 0x125fcd04 */
  if (!C.zf) goto L_125fcd04;
  /* 125fcce1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 125fcce4 push ecx */
  push32((uint32_t)(ECX));
  /* 125fcce5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125fcce8 push edx */
  push32((uint32_t)(EDX));
  /* 125fcce9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fccec push eax */
  push32((uint32_t)(EAX));
  /* 125fcced mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fccf0 push ecx */
  push32((uint32_t)(ECX));
  /* 125fccf1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fccf4 push edx */
  push32((uint32_t)(EDX));
  /* 125fccf5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fccf8 push eax */
  push32((uint32_t)(EAX));
  /* 125fccf9 call dword ptr [0x1261b2f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b2f4))), 0x125fccffu);
  /* 125fccff jmp 0x125fd004 */
  goto L_125fd004;
L_125fcd04:;
  /* 125fcd04 cmp dword ptr [0x12619154], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12619154))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fcd0b jne 0x125fd002 */
  if (!C.zf) goto L_125fd002;
  /* 125fcd11 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fcd15 jne 0x125fcd20 */
  if (!C.zf) goto L_125fcd20;
  /* 125fcd17 mov ecx, dword ptr [0x12619000] */
  ECX = (r32((uint32_t)(0x12619000)));
  /* 125fcd1d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_125fcd20:;
  /* 125fcd20 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fcd24 je 0x125fcd30 */
  if (C.zf) goto L_125fcd30;
  /* 125fcd26 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fcd2a jne 0x125fceac */
  if (!C.zf) goto L_125fceac;
L_125fcd30:;
  /* 125fcd30 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fcd33 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fcd36 jne 0x125fcd42 */
  if (!C.zf) goto L_125fcd42;
  /* 125fcd38 mov eax, 2 */
  EAX = (0x2u);
  /* 125fcd3d jmp 0x125fd004 */
  goto L_125fd004;
L_125fcd42:;
  /* 125fcd42 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fcd46 jle 0x125fcd52 */
  if ((C.zf||C.sf!=C.of)) goto L_125fcd52;
  /* 125fcd48 mov eax, 1 */
  EAX = (0x1u);
  /* 125fcd4d jmp 0x125fd004 */
  goto L_125fd004;
L_125fcd52:;
  /* 125fcd52 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fcd56 jle 0x125fcd62 */
  if ((C.zf||C.sf!=C.of)) goto L_125fcd62;
  /* 125fcd58 mov eax, 3 */
  EAX = (0x3u);
  /* 125fcd5d jmp 0x125fd004 */
  goto L_125fd004;
L_125fcd62:;
  /* 125fcd62 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 125fcd65 push eax */
  push32((uint32_t)(EAX));
  /* 125fcd66 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 125fcd69 push ecx */
  push32((uint32_t)(ECX));
  /* 125fcd6a call dword ptr [0x1261b34c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b34c))), 0x125fcd70u);
  /* 125fcd70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125fcd72 jne 0x125fcd7b */
  if (!C.zf) goto L_125fcd7b;
  /* 125fcd74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fcd76 jmp 0x125fd004 */
  goto L_125fd004;
L_125fcd7b:;
  /* 125fcd7b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fcd7f jne 0x125fcd87 */
  if (!C.zf) goto L_125fcd87;
  /* 125fcd81 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fcd85 je 0x125fcdb4 */
  if (C.zf) goto L_125fcdb4;
L_125fcd87:;
  /* 125fcd87 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fcd8b jne 0x125fcd93 */
  if (!C.zf) goto L_125fcd93;
  /* 125fcd8d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fcd91 je 0x125fcdb4 */
  if (C.zf) goto L_125fcdb4;
L_125fcd93:;
  /* 125fcd93 push 0x126153e8 */
  push32((uint32_t)(0x126153e8u));
  /* 125fcd98 push 0 */
  push32((uint32_t)(0x0u));
  /* 125fcd9a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 125fcd9f push 0x126153e0 */
  push32((uint32_t)(0x126153e0u));
  /* 125fcda4 push 2 */
  push32((uint32_t)(0x2u));
  /* 125fcda6 call 0x125ec130 */
  push32(0x125fcdabu); f_125ec130();
  /* 125fcdab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fcdae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fcdb1 jne 0x125fcdb4 */
  if (!C.zf) goto L_125fcdb4;
  /* 125fcdb3 int3  */
  x86_unimpl("int3 @ 0x125fcdb3");
L_125fcdb4:;
  /* 125fcdb4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125fcdb6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125fcdb8 jne 0x125fcd7b */
  if (!C.zf) goto L_125fcd7b;
  /* 125fcdba cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fcdbe jle 0x125fce33 */
  if ((C.zf||C.sf!=C.of)) goto L_125fce33;
  /* 125fcdc0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fcdc4 jae 0x125fcdd0 */
  if (!C.cf) goto L_125fcdd0;
  /* 125fcdc6 mov eax, 3 */
  EAX = (0x3u);
  /* 125fcdcb jmp 0x125fd004 */
  goto L_125fd004;
L_125fcdd0:;
  /* 125fcdd0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 125fcdd3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 125fcdd6 jmp 0x125fcde1 */
  goto L_125fcde1;
L_125fcdd8:;
  /* 125fcdd8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 125fcddb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fcdde mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_125fcde1:;
  /* 125fcde1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 125fcde4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fcde6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125fcde8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125fcdea je 0x125fce29 */
  if (C.zf) goto L_125fce29;
  /* 125fcdec mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 125fcdef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125fcdf1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 125fcdf4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125fcdf6 je 0x125fce29 */
  if (C.zf) goto L_125fce29;
  /* 125fcdf8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fcdfb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125fcdfd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125fcdff mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 125fce02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fce04 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125fce06 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fce08 jl 0x125fce27 */
  if ((C.sf!=C.of)) goto L_125fce27;
  /* 125fce0a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fce0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125fce0f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125fce11 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 125fce14 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125fce16 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 125fce19 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fce1b jg 0x125fce27 */
  if ((!C.zf&&C.sf==C.of)) goto L_125fce27;
  /* 125fce1d mov eax, 2 */
  EAX = (0x2u);
  /* 125fce22 jmp 0x125fd004 */
  goto L_125fd004;
L_125fce27:;
  /* 125fce27 jmp 0x125fcdd8 */
  goto L_125fcdd8;
L_125fce29:;
  /* 125fce29 mov eax, 3 */
  EAX = (0x3u);
  /* 125fce2e jmp 0x125fd004 */
  goto L_125fd004;
L_125fce33:;
  /* 125fce33 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fce37 jle 0x125fceac */
  if ((C.zf||C.sf!=C.of)) goto L_125fceac;
  /* 125fce39 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fce3d jae 0x125fce49 */
  if (!C.cf) goto L_125fce49;
  /* 125fce3f mov eax, 1 */
  EAX = (0x1u);
  /* 125fce44 jmp 0x125fd004 */
  goto L_125fd004;
L_125fce49:;
  /* 125fce49 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 125fce4c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 125fce4f jmp 0x125fce5a */
  goto L_125fce5a;
L_125fce51:;
  /* 125fce51 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 125fce54 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fce57 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_125fce5a:;
  /* 125fce5a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 125fce5d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125fce5f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125fce61 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125fce63 je 0x125fcea2 */
  if (C.zf) goto L_125fcea2;
  /* 125fce65 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 125fce68 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125fce6a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 125fce6d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125fce6f je 0x125fcea2 */
  if (C.zf) goto L_125fcea2;
  /* 125fce71 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125fce74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fce76 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125fce78 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 125fce7b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125fce7d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125fce7f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fce81 jl 0x125fcea0 */
  if ((C.sf!=C.of)) goto L_125fcea0;
  /* 125fce83 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125fce86 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125fce88 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125fce8a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 125fce8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fce8f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 125fce92 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fce94 jg 0x125fcea0 */
  if ((!C.zf&&C.sf==C.of)) goto L_125fcea0;
  /* 125fce96 mov eax, 2 */
  EAX = (0x2u);
  /* 125fce9b jmp 0x125fd004 */
  goto L_125fd004;
L_125fcea0:;
  /* 125fcea0 jmp 0x125fce51 */
  goto L_125fce51;
L_125fcea2:;
  /* 125fcea2 mov eax, 1 */
  EAX = (0x1u);
  /* 125fcea7 jmp 0x125fd004 */
  goto L_125fd004;
L_125fceac:;
  /* 125fceac push 0 */
  push32((uint32_t)(0x0u));
  /* 125fceae push 0 */
  push32((uint32_t)(0x0u));
  /* 125fceb0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fceb3 push ecx */
  push32((uint32_t)(ECX));
  /* 125fceb4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fceb7 push edx */
  push32((uint32_t)(EDX));
  /* 125fceb8 push 9 */
  push32((uint32_t)(0x9u));
  /* 125fceba mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 125fcebd push eax */
  push32((uint32_t)(EAX));
  /* 125fcebe call dword ptr [0x1261b340] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b340))), 0x125fcec4u);
  /* 125fcec4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 125fcec7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fcecb jne 0x125fced4 */
  if (!C.zf) goto L_125fced4;
  /* 125fcecd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fcecf jmp 0x125fd004 */
  goto L_125fd004;
L_125fced4:;
  /* 125fced4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125fcedb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125fcede shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 125fcee0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fcee3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 125fcee5 call 0x125f0210 */
  push32(0x125fceeau); f_125f0210();
  /* 125fceea mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 125fceed mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125fcef0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 125fcef3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 125fcef6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 125fcefd jmp 0x125fcf16 */
  goto L_125fcf16;
  /* 125fceff mov eax, 1 */
  EAX = (0x1u);
  /* 125fcf04 ret  */
  ESPCHK(0x125fcc20u, _esp0);
  ESP += 4; return;
  /* 125fcf05 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 125fcf08 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 125fcf0f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_125fcf16:;
  /* 125fcf16 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fcf1a jne 0x125fcf23 */
  if (!C.zf) goto L_125fcf23;
  /* 125fcf1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fcf1e jmp 0x125fd004 */
  goto L_125fd004;
L_125fcf23:;
  /* 125fcf23 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125fcf26 push edx */
  push32((uint32_t)(EDX));
  /* 125fcf27 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125fcf2a push eax */
  push32((uint32_t)(EAX));
  /* 125fcf2b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125fcf2e push ecx */
  push32((uint32_t)(ECX));
  /* 125fcf2f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125fcf32 push edx */
  push32((uint32_t)(EDX));
  /* 125fcf33 push 1 */
  push32((uint32_t)(0x1u));
  /* 125fcf35 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 125fcf38 push eax */
  push32((uint32_t)(EAX));
  /* 125fcf39 call dword ptr [0x1261b340] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b340))), 0x125fcf3fu);
  /* 125fcf3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125fcf41 jne 0x125fcf4a */
  if (!C.zf) goto L_125fcf4a;
  /* 125fcf43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fcf45 jmp 0x125fd004 */
  goto L_125fd004;
L_125fcf4a:;
  /* 125fcf4a push 0 */
  push32((uint32_t)(0x0u));
  /* 125fcf4c push 0 */
  push32((uint32_t)(0x0u));
  /* 125fcf4e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 125fcf51 push ecx */
  push32((uint32_t)(ECX));
  /* 125fcf52 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125fcf55 push edx */
  push32((uint32_t)(EDX));
  /* 125fcf56 push 9 */
  push32((uint32_t)(0x9u));
  /* 125fcf58 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 125fcf5b push eax */
  push32((uint32_t)(EAX));
  /* 125fcf5c call dword ptr [0x1261b340] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b340))), 0x125fcf62u);
  /* 125fcf62 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 125fcf65 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fcf69 jne 0x125fcf72 */
  if (!C.zf) goto L_125fcf72;
  /* 125fcf6b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fcf6d jmp 0x125fd004 */
  goto L_125fd004;
L_125fcf72:;
  /* 125fcf72 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 125fcf79 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 125fcf7c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 125fcf7e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fcf81 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 125fcf83 call 0x125f0210 */
  push32(0x125fcf88u); f_125f0210();
  /* 125fcf88 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 125fcf8b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125fcf8e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 125fcf91 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 125fcf94 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 125fcf9b jmp 0x125fcfb4 */
  goto L_125fcfb4;
  /* 125fcf9d mov eax, 1 */
  EAX = (0x1u);
  /* 125fcfa2 ret  */
  ESPCHK(0x125fcc20u, _esp0);
  ESP += 4; return;
  /* 125fcfa3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 125fcfa6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 125fcfad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_125fcfb4:;
  /* 125fcfb4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fcfb8 jne 0x125fcfbe */
  if (!C.zf) goto L_125fcfbe;
  /* 125fcfba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fcfbc jmp 0x125fd004 */
  goto L_125fd004;
L_125fcfbe:;
  /* 125fcfbe mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 125fcfc1 push edx */
  push32((uint32_t)(EDX));
  /* 125fcfc2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125fcfc5 push eax */
  push32((uint32_t)(EAX));
  /* 125fcfc6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 125fcfc9 push ecx */
  push32((uint32_t)(ECX));
  /* 125fcfca mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125fcfcd push edx */
  push32((uint32_t)(EDX));
  /* 125fcfce push 1 */
  push32((uint32_t)(0x1u));
  /* 125fcfd0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 125fcfd3 push eax */
  push32((uint32_t)(EAX));
  /* 125fcfd4 call dword ptr [0x1261b340] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b340))), 0x125fcfdau);
  /* 125fcfda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125fcfdc jne 0x125fcfe2 */
  if (!C.zf) goto L_125fcfe2;
  /* 125fcfde xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fcfe0 jmp 0x125fd004 */
  goto L_125fd004;
L_125fcfe2:;
  /* 125fcfe2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125fcfe5 push ecx */
  push32((uint32_t)(ECX));
  /* 125fcfe6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 125fcfe9 push edx */
  push32((uint32_t)(EDX));
  /* 125fcfea mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125fcfed push eax */
  push32((uint32_t)(EAX));
  /* 125fcfee mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125fcff1 push ecx */
  push32((uint32_t)(ECX));
  /* 125fcff2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fcff5 push edx */
  push32((uint32_t)(EDX));
  /* 125fcff6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fcff9 push eax */
  push32((uint32_t)(EAX));
  /* 125fcffa call dword ptr [0x1261b2f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b2f0))), 0x125fd000u);
  /* 125fd000 jmp 0x125fd004 */
  goto L_125fd004;
L_125fd002:;
  /* 125fd002 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125fd004:;
  /* 125fd004 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 125fd007 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125fd00a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 125fd011 pop edi */
  EDI = (pop32());
  /* 125fd012 pop esi */
  ESI = (pop32());
  /* 125fd013 pop ebx */
  EBX = (pop32());
  /* 125fd014 mov esp, ebp */
  ESP = (EBP);
  /* 125fd016 pop ebp */
  EBP = (pop32());
  /* 125fd017 ret  */
  ESPCHK(0x125fcc20u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d020 @ 0x125fd020 (80 bytes, 32 insns) */
void f_125fd020(void) {
  FTRACE(0x125fd020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fd020 push ebp */
  push32((uint32_t)(EBP));
  /* 125fd021 mov ebp, esp */
  EBP = (ESP);
  /* 125fd023 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fd026 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fd029 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125fd02c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fd02f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_125fd032:;
  /* 125fd032 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fd035 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fd038 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fd03b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125fd03e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125fd040 je 0x125fd057 */
  if (C.zf) goto L_125fd057;
  /* 125fd042 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fd045 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125fd048 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125fd04a je 0x125fd057 */
  if (C.zf) goto L_125fd057;
  /* 125fd04c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fd04f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fd052 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125fd055 jmp 0x125fd032 */
  goto L_125fd032;
L_125fd057:;
  /* 125fd057 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fd05a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125fd05d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125fd05f jne 0x125fd069 */
  if (!C.zf) goto L_125fd069;
  /* 125fd061 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fd064 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fd067 jmp 0x125fd06c */
  goto L_125fd06c;
L_125fd069:;
  /* 125fd069 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_125fd06c:;
  /* 125fd06c mov esp, ebp */
  ESP = (EBP);
  /* 125fd06e pop ebp */
  EBP = (pop32());
  /* 125fd06f ret  */
  ESPCHK(0x125fd020u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d070 @ 0x125fd070 (736 bytes, 224 insns) */
void f_125fd070(void) {
  FTRACE(0x125fd070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fd070 push ebp */
  push32((uint32_t)(EBP));
  /* 125fd071 mov ebp, esp */
  EBP = (ESP);
  /* 125fd073 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fd076 push esi */
  push32((uint32_t)(ESI));
  /* 125fd077 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fd07b je 0x125fd09c */
  if (C.zf) goto L_125fd09c;
  /* 125fd07d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 125fd07f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fd082 push eax */
  push32((uint32_t)(EAX));
  /* 125fd083 call 0x125fd4c0 */
  push32(0x125fd088u); f_125fd4c0();
  /* 125fd088 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fd08b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 125fd08e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fd092 je 0x125fd09c */
  if (C.zf) goto L_125fd09c;
  /* 125fd094 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fd097 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fd09a jne 0x125fd0a4 */
  if (!C.zf) goto L_125fd0a4;
L_125fd09c:;
  /* 125fd09c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125fd09f jmp 0x125fd34b */
  goto L_125fd34b;
L_125fd0a4:;
  /* 125fd0a4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125fd0a7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 125fd0ab neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 125fd0ad sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fd0af inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 125fd0b0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 125fd0b3 mov ecx, dword ptr [0x12618e0c] */
  ECX = (r32((uint32_t)(0x12618e0c)));
  /* 125fd0b9 cmp ecx, dword ptr [0x12618e10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12618e10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fd0bf jne 0x125fd0d5 */
  if (!C.zf) goto L_125fd0d5;
  /* 125fd0c1 mov edx, dword ptr [0x12618e0c] */
  EDX = (r32((uint32_t)(0x12618e0c)));
  /* 125fd0c7 push edx */
  push32((uint32_t)(EDX));
  /* 125fd0c8 call 0x125fd3d0 */
  push32(0x125fd0cdu); f_125fd3d0();
  /* 125fd0cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fd0d0 mov dword ptr [0x12618e0c], eax */
  w32((uint32_t)(0x12618e0c), (EAX));
L_125fd0d5:;
  /* 125fd0d5 cmp dword ptr [0x12618e0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12618e0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fd0dc jne 0x125fd195 */
  if (!C.zf) goto L_125fd195;
  /* 125fd0e2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fd0e6 je 0x125fd107 */
  if (C.zf) goto L_125fd107;
  /* 125fd0e8 cmp dword ptr [0x12618e14], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12618e14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fd0ef je 0x125fd107 */
  if (C.zf) goto L_125fd107;
  /* 125fd0f1 call 0x125fcb70 */
  push32(0x125fd0f6u); f_125fcb70();
  /* 125fd0f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125fd0f8 je 0x125fd102 */
  if (C.zf) goto L_125fd102;
  /* 125fd0fa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125fd0fd jmp 0x125fd34b */
  goto L_125fd34b;
L_125fd102:;
  /* 125fd102 jmp 0x125fd195 */
  goto L_125fd195;
L_125fd107:;
  /* 125fd107 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fd10b je 0x125fd114 */
  if (C.zf) goto L_125fd114;
  /* 125fd10d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fd10f jmp 0x125fd34b */
  goto L_125fd34b;
L_125fd114:;
  /* 125fd114 cmp dword ptr [0x12618e0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12618e0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fd11b jne 0x125fd154 */
  if (!C.zf) goto L_125fd154;
  /* 125fd11d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 125fd122 push 0x12615440 */
  push32((uint32_t)(0x12615440u));
  /* 125fd127 push 2 */
  push32((uint32_t)(0x2u));
  /* 125fd129 push 4 */
  push32((uint32_t)(0x4u));
  /* 125fd12b call 0x125ed070 */
  push32(0x125fd130u); f_125ed070();
  /* 125fd130 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fd133 mov dword ptr [0x12618e0c], eax */
  w32((uint32_t)(0x12618e0c), (EAX));
  /* 125fd138 cmp dword ptr [0x12618e0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12618e0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fd13f jne 0x125fd149 */
  if (!C.zf) goto L_125fd149;
  /* 125fd141 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125fd144 jmp 0x125fd34b */
  goto L_125fd34b;
L_125fd149:;
  /* 125fd149 mov eax, dword ptr [0x12618e0c] */
  EAX = (r32((uint32_t)(0x12618e0c)));
  /* 125fd14e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_125fd154:;
  /* 125fd154 cmp dword ptr [0x12618e14], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12618e14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fd15b jne 0x125fd195 */
  if (!C.zf) goto L_125fd195;
  /* 125fd15d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 125fd162 push 0x12615440 */
  push32((uint32_t)(0x12615440u));
  /* 125fd167 push 2 */
  push32((uint32_t)(0x2u));
  /* 125fd169 push 4 */
  push32((uint32_t)(0x4u));
  /* 125fd16b call 0x125ed070 */
  push32(0x125fd170u); f_125ed070();
  /* 125fd170 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fd173 mov dword ptr [0x12618e14], eax */
  w32((uint32_t)(0x12618e14), (EAX));
  /* 125fd178 cmp dword ptr [0x12618e14], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12618e14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fd17f jne 0x125fd189 */
  if (!C.zf) goto L_125fd189;
  /* 125fd181 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125fd184 jmp 0x125fd34b */
  goto L_125fd34b;
L_125fd189:;
  /* 125fd189 mov ecx, dword ptr [0x12618e14] */
  ECX = (r32((uint32_t)(0x12618e14)));
  /* 125fd18f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_125fd195:;
  /* 125fd195 mov edx, dword ptr [0x12618e0c] */
  EDX = (r32((uint32_t)(0x12618e0c)));
  /* 125fd19b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 125fd19e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125fd1a1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fd1a4 push eax */
  push32((uint32_t)(EAX));
  /* 125fd1a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fd1a8 push ecx */
  push32((uint32_t)(ECX));
  /* 125fd1a9 call 0x125fd350 */
  push32(0x125fd1aeu); f_125fd350();
  /* 125fd1ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fd1b1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125fd1b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fd1b8 jl 0x125fd251 */
  if ((C.sf!=C.of)) goto L_125fd251;
  /* 125fd1be mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fd1c1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fd1c4 je 0x125fd251 */
  if (C.zf) goto L_125fd251;
  /* 125fd1ca cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fd1ce je 0x125fd243 */
  if (C.zf) goto L_125fd243;
  /* 125fd1d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 125fd1d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fd1d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fd1d8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 125fd1db push edx */
  push32((uint32_t)(EDX));
  /* 125fd1dc call 0x125edb00 */
  push32(0x125fd1e1u); f_125edb00();
  /* 125fd1e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fd1e4 jmp 0x125fd1ef */
  goto L_125fd1ef;
L_125fd1e6:;
  /* 125fd1e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fd1e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fd1ec mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_125fd1ef:;
  /* 125fd1ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fd1f2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fd1f5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fd1f9 je 0x125fd210 */
  if (C.zf) goto L_125fd210;
  /* 125fd1fb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fd1fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fd201 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fd204 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 125fd207 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 125fd20b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 125fd20e jmp 0x125fd1e6 */
  goto L_125fd1e6;
L_125fd210:;
  /* 125fd210 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 125fd215 push 0x12615440 */
  push32((uint32_t)(0x12615440u));
  /* 125fd21a push 2 */
  push32((uint32_t)(0x2u));
  /* 125fd21c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fd21f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 125fd222 push eax */
  push32((uint32_t)(EAX));
  /* 125fd223 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fd226 push ecx */
  push32((uint32_t)(ECX));
  /* 125fd227 call 0x125ed500 */
  push32(0x125fd22cu); f_125ed500();
  /* 125fd22c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fd22f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125fd232 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fd236 je 0x125fd241 */
  if (C.zf) goto L_125fd241;
  /* 125fd238 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fd23b mov dword ptr [0x12618e0c], edx */
  w32((uint32_t)(0x12618e0c), (EDX));
L_125fd241:;
  /* 125fd241 jmp 0x125fd24f */
  goto L_125fd24f;
L_125fd243:;
  /* 125fd243 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fd246 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fd249 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fd24c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_125fd24f:;
  /* 125fd24f jmp 0x125fd2c4 */
  goto L_125fd2c4;
L_125fd251:;
  /* 125fd251 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fd255 jne 0x125fd2bd */
  if (!C.zf) goto L_125fd2bd;
  /* 125fd257 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fd25b jge 0x125fd265 */
  if ((C.sf==C.of)) goto L_125fd265;
  /* 125fd25d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fd260 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 125fd262 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_125fd265:;
  /* 125fd265 push 0xce */
  push32((uint32_t)(0xceu));
  /* 125fd26a push 0x12615440 */
  push32((uint32_t)(0x12615440u));
  /* 125fd26f push 2 */
  push32((uint32_t)(0x2u));
  /* 125fd271 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fd274 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 125fd27b push edx */
  push32((uint32_t)(EDX));
  /* 125fd27c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fd27f push eax */
  push32((uint32_t)(EAX));
  /* 125fd280 call 0x125ed500 */
  push32(0x125fd285u); f_125ed500();
  /* 125fd285 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fd288 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125fd28b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fd28f jne 0x125fd299 */
  if (!C.zf) goto L_125fd299;
  /* 125fd291 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125fd294 jmp 0x125fd34b */
  goto L_125fd34b;
L_125fd299:;
  /* 125fd299 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fd29c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fd29f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fd2a2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 125fd2a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fd2a8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fd2ab mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 125fd2b3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fd2b6 mov dword ptr [0x12618e0c], eax */
  w32((uint32_t)(0x12618e0c), (EAX));
  /* 125fd2bb jmp 0x125fd2c4 */
  goto L_125fd2c4;
L_125fd2bd:;
  /* 125fd2bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fd2bf jmp 0x125fd34b */
  goto L_125fd34b;
L_125fd2c4:;
  /* 125fd2c4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fd2c8 je 0x125fd349 */
  if (C.zf) goto L_125fd349;
  /* 125fd2ca push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 125fd2cf push 0x12615440 */
  push32((uint32_t)(0x12615440u));
  /* 125fd2d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 125fd2d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fd2d9 push ecx */
  push32((uint32_t)(ECX));
  /* 125fd2da call 0x125efea0 */
  push32(0x125fd2dfu); f_125efea0();
  /* 125fd2df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fd2e2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fd2e5 push eax */
  push32((uint32_t)(EAX));
  /* 125fd2e6 call 0x125ed070 */
  push32(0x125fd2ebu); f_125ed070();
  /* 125fd2eb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fd2ee mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 125fd2f1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fd2f5 je 0x125fd349 */
  if (C.zf) goto L_125fd349;
  /* 125fd2f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fd2fa push edx */
  push32((uint32_t)(EDX));
  /* 125fd2fb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125fd2fe push eax */
  push32((uint32_t)(EAX));
  /* 125fd2ff call 0x125f0020 */
  push32(0x125fd304u); f_125f0020();
  /* 125fd304 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fd307 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125fd30a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fd30d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125fd310 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fd312 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125fd315 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fd318 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 125fd31b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fd31e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fd321 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125fd324 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125fd327 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 125fd329 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fd32b not edx */
  EDX = (~(EDX));
  /* 125fd32d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 125fd330 push edx */
  push32((uint32_t)(EDX));
  /* 125fd331 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125fd334 push eax */
  push32((uint32_t)(EAX));
  /* 125fd335 call dword ptr [0x1261b2ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b2ec))), 0x125fd33bu);
  /* 125fd33b push 2 */
  push32((uint32_t)(0x2u));
  /* 125fd33d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125fd340 push ecx */
  push32((uint32_t)(ECX));
  /* 125fd341 call 0x125edb00 */
  push32(0x125fd346u); f_125edb00();
  /* 125fd346 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125fd349:;
  /* 125fd349 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125fd34b:;
  /* 125fd34b pop esi */
  ESI = (pop32());
  /* 125fd34c mov esp, ebp */
  ESP = (EBP);
  /* 125fd34e pop ebp */
  EBP = (pop32());
  /* 125fd34f ret  */
  ESPCHK(0x125fd070u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x125fd350 (124 bytes, 47 insns) */
void f_125fd350(void) {
  FTRACE(0x125fd350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fd350 push ebp */
  push32((uint32_t)(EBP));
  /* 125fd351 mov ebp, esp */
  EBP = (ESP);
  /* 125fd353 push ecx */
  push32((uint32_t)(ECX));
  /* 125fd354 mov eax, dword ptr [0x12618e0c] */
  EAX = (r32((uint32_t)(0x12618e0c)));
  /* 125fd359 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125fd35c jmp 0x125fd367 */
  goto L_125fd367;
L_125fd35e:;
  /* 125fd35e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fd361 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fd364 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_125fd367:;
  /* 125fd367 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fd36a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fd36d je 0x125fd3ba */
  if (C.zf) goto L_125fd3ba;
  /* 125fd36f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fd372 push eax */
  push32((uint32_t)(EAX));
  /* 125fd373 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fd376 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125fd378 push edx */
  push32((uint32_t)(EDX));
  /* 125fd379 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fd37c push eax */
  push32((uint32_t)(EAX));
  /* 125fd37d call 0x125fcb20 */
  push32(0x125fd382u); f_125fcb20();
  /* 125fd382 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fd385 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125fd387 jne 0x125fd3b8 */
  if (!C.zf) goto L_125fd3b8;
  /* 125fd389 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fd38c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125fd38e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fd391 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 125fd395 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fd398 je 0x125fd3aa */
  if (C.zf) goto L_125fd3aa;
  /* 125fd39a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fd39d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125fd39f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fd3a2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 125fd3a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125fd3a8 jne 0x125fd3b8 */
  if (!C.zf) goto L_125fd3b8;
L_125fd3aa:;
  /* 125fd3aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fd3ad sub eax, dword ptr [0x12618e0c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12618e0c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fd3b3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 125fd3b6 jmp 0x125fd3c8 */
  goto L_125fd3c8;
L_125fd3b8:;
  /* 125fd3b8 jmp 0x125fd35e */
  goto L_125fd35e;
L_125fd3ba:;
  /* 125fd3ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fd3bd sub eax, dword ptr [0x12618e0c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12618e0c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fd3c3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 125fd3c6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_125fd3c8:;
  /* 125fd3c8 mov esp, ebp */
  ESP = (EBP);
  /* 125fd3ca pop ebp */
  EBP = (pop32());
  /* 125fd3cb ret  */
  ESPCHK(0x125fd350u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x125fd3d0 (238 bytes, 80 insns) */
void f_125fd3d0(void) {
  FTRACE(0x125fd3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fd3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 125fd3d1 mov ebp, esp */
  EBP = (ESP);
  /* 125fd3d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fd3d6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 125fd3dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fd3e0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125fd3e3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fd3e7 jne 0x125fd3f0 */
  if (!C.zf) goto L_125fd3f0;
  /* 125fd3e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fd3eb jmp 0x125fd4ba */
  goto L_125fd4ba;
L_125fd3f0:;
  /* 125fd3f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fd3f3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125fd3f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fd3f8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fd3fb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125fd3fe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125fd400 je 0x125fd40d */
  if (C.zf) goto L_125fd40d;
  /* 125fd402 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125fd405 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fd408 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 125fd40b jmp 0x125fd3f0 */
  goto L_125fd3f0;
L_125fd40d:;
  /* 125fd40d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 125fd412 push 0x12615440 */
  push32((uint32_t)(0x12615440u));
  /* 125fd417 push 2 */
  push32((uint32_t)(0x2u));
  /* 125fd419 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125fd41c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 125fd423 push eax */
  push32((uint32_t)(EAX));
  /* 125fd424 call 0x125ed070 */
  push32(0x125fd429u); f_125ed070();
  /* 125fd429 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fd42c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125fd42f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fd432 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125fd435 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fd439 jne 0x125fd445 */
  if (!C.zf) goto L_125fd445;
  /* 125fd43b push 9 */
  push32((uint32_t)(0x9u));
  /* 125fd43d call 0x125ebfe0 */
  push32(0x125fd442u); f_125ebfe0();
  /* 125fd442 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125fd445:;
  /* 125fd445 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fd448 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_125fd44b:;
  /* 125fd44b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fd44e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fd451 je 0x125fd4ae */
  if (C.zf) goto L_125fd4ae;
  /* 125fd453 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 125fd458 push 0x12615440 */
  push32((uint32_t)(0x12615440u));
  /* 125fd45d push 2 */
  push32((uint32_t)(0x2u));
  /* 125fd45f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fd462 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125fd464 push edx */
  push32((uint32_t)(EDX));
  /* 125fd465 call 0x125efea0 */
  push32(0x125fd46au); f_125efea0();
  /* 125fd46a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fd46d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fd470 push eax */
  push32((uint32_t)(EAX));
  /* 125fd471 call 0x125ed070 */
  push32(0x125fd476u); f_125ed070();
  /* 125fd476 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fd479 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fd47c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125fd47e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fd481 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fd484 je 0x125fd49a */
  if (C.zf) goto L_125fd49a;
  /* 125fd486 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fd489 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125fd48b push ecx */
  push32((uint32_t)(ECX));
  /* 125fd48c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fd48f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125fd491 push eax */
  push32((uint32_t)(EAX));
  /* 125fd492 call 0x125f0020 */
  push32(0x125fd497u); f_125f0020();
  /* 125fd497 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125fd49a:;
  /* 125fd49a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125fd49d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fd4a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125fd4a3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fd4a6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fd4a9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 125fd4ac jmp 0x125fd44b */
  goto L_125fd44b;
L_125fd4ae:;
  /* 125fd4ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125fd4b1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 125fd4b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_125fd4ba:;
  /* 125fd4ba mov esp, ebp */
  ESP = (EBP);
  /* 125fd4bc pop ebp */
  EBP = (pop32());
  /* 125fd4bd ret  */
  ESPCHK(0x125fd3d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d4c0 @ 0x125fd4c0 (237 bytes, 81 insns) */
void f_125fd4c0(void) {
  FTRACE(0x125fd4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fd4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 125fd4c1 mov ebp, esp */
  EBP = (ESP);
  /* 125fd4c3 push ecx */
  push32((uint32_t)(ECX));
  /* 125fd4c4 cmp dword ptr [0x1261a54c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1261a54c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fd4cb jne 0x125fd4e2 */
  if (!C.zf) goto L_125fd4e2;
  /* 125fd4cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125fd4d0 push eax */
  push32((uint32_t)(EAX));
  /* 125fd4d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fd4d4 push ecx */
  push32((uint32_t)(ECX));
  /* 125fd4d5 call 0x125fd5c0 */
  push32(0x125fd4dau); f_125fd5c0();
  /* 125fd4da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fd4dd jmp 0x125fd5a9 */
  goto L_125fd5a9;
L_125fd4e2:;
  /* 125fd4e2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 125fd4e4 call 0x125f0a70 */
  push32(0x125fd4e9u); f_125f0a70();
  /* 125fd4e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fd4ec jmp 0x125fd4f7 */
  goto L_125fd4f7;
L_125fd4ee:;
  /* 125fd4ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fd4f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fd4f4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_125fd4f7:;
  /* 125fd4f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fd4fa movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 125fd4fe mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 125fd502 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fd505 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 125fd50b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125fd50d je 0x125fd58b */
  if (C.zf) goto L_125fd58b;
  /* 125fd50f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fd512 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125fd517 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125fd519 mov cl, byte ptr [eax + 0x1261a661] */
  CL = (r8((uint32_t)(EAX + 0x1261a661)));
  /* 125fd51f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 125fd522 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125fd524 je 0x125fd576 */
  if (C.zf) goto L_125fd576;
  /* 125fd526 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fd529 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fd52c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 125fd52f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fd532 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125fd534 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125fd536 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125fd538 jne 0x125fd548 */
  if (!C.zf) goto L_125fd548;
  /* 125fd53a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 125fd53c call 0x125f0b10 */
  push32(0x125fd541u); f_125f0b10();
  /* 125fd541 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fd544 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fd546 jmp 0x125fd5a9 */
  goto L_125fd5a9;
L_125fd548:;
  /* 125fd548 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fd54b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 125fd551 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 125fd554 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fd557 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125fd559 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125fd55b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 125fd55d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fd560 jne 0x125fd574 */
  if (!C.zf) goto L_125fd574;
  /* 125fd562 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 125fd564 call 0x125f0b10 */
  push32(0x125fd569u); f_125f0b10();
  /* 125fd569 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fd56c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fd56f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125fd572 jmp 0x125fd5a9 */
  goto L_125fd5a9;
L_125fd574:;
  /* 125fd574 jmp 0x125fd586 */
  goto L_125fd586;
L_125fd576:;
  /* 125fd576 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fd579 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 125fd57f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fd582 jne 0x125fd586 */
  if (!C.zf) goto L_125fd586;
  /* 125fd584 jmp 0x125fd58b */
  goto L_125fd58b;
L_125fd586:;
  /* 125fd586 jmp 0x125fd4ee */
  goto L_125fd4ee;
L_125fd58b:;
  /* 125fd58b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 125fd58d call 0x125f0b10 */
  push32(0x125fd592u); f_125f0b10();
  /* 125fd592 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125fd595 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125fd598 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125fd59d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125fd5a0 jne 0x125fd5a7 */
  if (!C.zf) goto L_125fd5a7;
  /* 125fd5a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125fd5a5 jmp 0x125fd5a9 */
  goto L_125fd5a9;
L_125fd5a7:;
  /* 125fd5a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125fd5a9:;
  /* 125fd5a9 mov esp, ebp */
  ESP = (EBP);
  /* 125fd5ab pop ebp */
  EBP = (pop32());
  /* 125fd5ac ret  */
  ESPCHK(0x125fd4c0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x125fd5c0 (193 bytes, 87 insns) */
void f_125fd5c0(void) {
  FTRACE(0x125fd5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fd5c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fd5c2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 125fd5c6 push ebx */
  push32((uint32_t)(EBX));
  /* 125fd5c7 mov ebx, eax */
  EBX = (EAX);
  /* 125fd5c9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 125fd5cc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 125fd5d0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 125fd5d6 je 0x125fd5eb */
  if (C.zf) goto L_125fd5eb;
L_125fd5d8:;
  /* 125fd5d8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 125fd5da inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 125fd5db cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125fd5dd je 0x125fd5b0 */
  if (C.zf) { jmp_ind(0x125fd5b0u); return; }
  /* 125fd5df test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 125fd5e1 je 0x125fd634 */
  if (C.zf) goto L_125fd634;
  /* 125fd5e3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 125fd5e9 jne 0x125fd5d8 */
  if (!C.zf) goto L_125fd5d8;
L_125fd5eb:;
  /* 125fd5eb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 125fd5ed push edi */
  push32((uint32_t)(EDI));
  /* 125fd5ee mov eax, ebx */
  EAX = (EBX);
  /* 125fd5f0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 125fd5f3 push esi */
  push32((uint32_t)(ESI));
  /* 125fd5f4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_125fd5f6:;
  /* 125fd5f6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 125fd5f8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 125fd5fd mov eax, ecx */
  EAX = (ECX);
  /* 125fd5ff mov esi, edi */
  ESI = (EDI);
  /* 125fd601 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 125fd603 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 125fd605 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 125fd607 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 125fd60a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125fd60d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 125fd60f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 125fd611 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125fd614 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 125fd61a jne 0x125fd638 */
  if (!C.zf) goto L_125fd638;
  /* 125fd61c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 125fd621 je 0x125fd5f6 */
  if (C.zf) goto L_125fd5f6;
  /* 125fd623 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 125fd628 jne 0x125fd632 */
  if (!C.zf) goto L_125fd632;
  /* 125fd62a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 125fd630 jne 0x125fd5f6 */
  if (!C.zf) goto L_125fd5f6;
L_125fd632:;
  /* 125fd632 pop esi */
  ESI = (pop32());
  /* 125fd633 pop edi */
  EDI = (pop32());
L_125fd634:;
  /* 125fd634 pop ebx */
  EBX = (pop32());
  /* 125fd635 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125fd637 ret  */
  ESPCHK(0x125fd5c0u, _esp0);
  ESP += 4; return;
L_125fd638:;
  /* 125fd638 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 125fd63b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125fd63d je 0x125fd675 */
  if (C.zf) goto L_125fd675;
  /* 125fd63f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 125fd641 je 0x125fd632 */
  if (C.zf) goto L_125fd632;
  /* 125fd643 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125fd645 je 0x125fd66e */
  if (C.zf) goto L_125fd66e;
  /* 125fd647 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 125fd649 je 0x125fd632 */
  if (C.zf) goto L_125fd632;
  /* 125fd64b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 125fd64e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125fd650 je 0x125fd667 */
  if (C.zf) goto L_125fd667;
  /* 125fd652 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 125fd654 je 0x125fd632 */
  if (C.zf) goto L_125fd632;
  /* 125fd656 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125fd658 je 0x125fd660 */
  if (C.zf) goto L_125fd660;
  /* 125fd65a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 125fd65c je 0x125fd632 */
  if (C.zf) goto L_125fd632;
  /* 125fd65e jmp 0x125fd5f6 */
  goto L_125fd5f6;
L_125fd660:;
  /* 125fd660 pop esi */
  ESI = (pop32());
  /* 125fd661 pop edi */
  EDI = (pop32());
  /* 125fd662 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 125fd665 pop ebx */
  EBX = (pop32());
  /* 125fd666 ret  */
  ESPCHK(0x125fd5c0u, _esp0);
  ESP += 4; return;
L_125fd667:;
  /* 125fd667 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 125fd66a pop esi */
  ESI = (pop32());
  /* 125fd66b pop edi */
  EDI = (pop32());
  /* 125fd66c pop ebx */
  EBX = (pop32());
  /* 125fd66d ret  */
  ESPCHK(0x125fd5c0u, _esp0);
  ESP += 4; return;
L_125fd66e:;
  /* 125fd66e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 125fd671 pop esi */
  ESI = (pop32());
  /* 125fd672 pop edi */
  EDI = (pop32());
  /* 125fd673 pop ebx */
  EBX = (pop32());
  /* 125fd674 ret  */
  ESPCHK(0x125fd5c0u, _esp0);
  ESP += 4; return;
L_125fd675:;
  /* 125fd675 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 125fd678 pop esi */
  ESI = (pop32());
  /* 125fd679 pop edi */
  EDI = (pop32());
  /* 125fd67a pop ebx */
  EBX = (pop32());
  /* 125fd67b ret  */
  ESPCHK(0x125fd5c0u, _esp0);
  ESP += 4; return;
  /* 125fd67c jmp dword ptr [0x1261b3b4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1261b3b4)))); return;
}

/* RtlUnwind @ 0x125fd7cc (6 bytes, 1 insns) */
void f_125fd7cc(void) {
  FTRACE(0x125fd7ccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125fd7cc jmp dword ptr [0x1261b328] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1261b328)))); return;
}

