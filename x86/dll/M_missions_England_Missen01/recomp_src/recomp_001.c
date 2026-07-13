#include "recomp.h"

/* FUN_10008e70 @ 0x103a8e70 (490 bytes, 165 insns) */
void f_103a8e70(void) {
  FTRACE(0x103a8e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a8e70 push ebp */
  push32((uint32_t)(EBP));
  /* 103a8e71 mov ebp, esp */
  EBP = (ESP);
  /* 103a8e73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a8e76 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8e7a jne 0x103a8e8d */
  if (!C.zf) goto L_103a8e8d;
  /* 103a8e7c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a8e7f push eax */
  push32((uint32_t)(EAX));
  /* 103a8e80 call 0x103a8cc0 */
  push32(0x103a8e85u); f_103a8cc0();
  /* 103a8e85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8e88 jmp 0x103a9056 */
  goto L_103a9056;
L_103a8e8d:;
  /* 103a8e8d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8e91 jne 0x103a8ea6 */
  if (!C.zf) goto L_103a8ea6;
  /* 103a8e93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a8e96 push ecx */
  push32((uint32_t)(ECX));
  /* 103a8e97 call 0x103a9060 */
  push32(0x103a8e9cu); f_103a9060();
  /* 103a8e9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8e9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a8ea1 jmp 0x103a9056 */
  goto L_103a9056;
L_103a8ea6:;
  /* 103a8ea6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 103a8ead cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8eb1 ja 0x103a9029 */
  if ((!C.cf&&!C.zf)) goto L_103a9029;
  /* 103a8eb7 push 9 */
  push32((uint32_t)(0x9u));
  /* 103a8eb9 call 0x103a88f0 */
  push32(0x103a8ebeu); f_103a88f0();
  /* 103a8ebe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8ec1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a8ec4 push edx */
  push32((uint32_t)(EDX));
  /* 103a8ec5 call 0x103a91f0 */
  push32(0x103a8ecau); f_103a91f0();
  /* 103a8eca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8ecd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103a8ed0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8ed4 je 0x103a8fec */
  if (C.zf) goto L_103a8fec;
  /* 103a8eda mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a8edd cmp eax, dword ptr [0x103cec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x103cec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8ee3 ja 0x103a8f60 */
  if ((!C.cf&&!C.zf)) goto L_103a8f60;
  /* 103a8ee5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a8ee8 push ecx */
  push32((uint32_t)(ECX));
  /* 103a8ee9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a8eec push edx */
  push32((uint32_t)(EDX));
  /* 103a8eed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a8ef0 push eax */
  push32((uint32_t)(EAX));
  /* 103a8ef1 call 0x103aa0c0 */
  push32(0x103a8ef6u); f_103aa0c0();
  /* 103a8ef6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8ef9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a8efb je 0x103a8f05 */
  if (C.zf) goto L_103a8f05;
  /* 103a8efd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a8f00 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103a8f03 jmp 0x103a8f60 */
  goto L_103a8f60;
L_103a8f05:;
  /* 103a8f05 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a8f08 push edx */
  push32((uint32_t)(EDX));
  /* 103a8f09 call 0x103a9880 */
  push32(0x103a8f0eu); f_103a9880();
  /* 103a8f0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8f11 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103a8f14 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8f18 je 0x103a8f60 */
  if (C.zf) goto L_103a8f60;
  /* 103a8f1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a8f1d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 103a8f20 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a8f23 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103a8f26 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a8f29 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8f2c jae 0x103a8f36 */
  if (!C.cf) goto L_103a8f36;
  /* 103a8f2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a8f31 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 103a8f34 jmp 0x103a8f3c */
  goto L_103a8f3c;
L_103a8f36:;
  /* 103a8f36 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a8f39 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_103a8f3c:;
  /* 103a8f3c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a8f3f push edx */
  push32((uint32_t)(EDX));
  /* 103a8f40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a8f43 push eax */
  push32((uint32_t)(EAX));
  /* 103a8f44 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a8f47 push ecx */
  push32((uint32_t)(ECX));
  /* 103a8f48 call 0x103ab7d0 */
  push32(0x103a8f4du); f_103ab7d0();
  /* 103a8f4d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8f50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a8f53 push edx */
  push32((uint32_t)(EDX));
  /* 103a8f54 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a8f57 push eax */
  push32((uint32_t)(EAX));
  /* 103a8f58 call 0x103a92b0 */
  push32(0x103a8f5du); f_103a92b0();
  /* 103a8f5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a8f60:;
  /* 103a8f60 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8f64 jne 0x103a8fe0 */
  if (!C.zf) goto L_103a8fe0;
  /* 103a8f66 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8f6a jne 0x103a8f73 */
  if (!C.zf) goto L_103a8f73;
  /* 103a8f6c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_103a8f73:;
  /* 103a8f73 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a8f76 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8f79 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 103a8f7c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 103a8f7f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a8f82 push edx */
  push32((uint32_t)(EDX));
  /* 103a8f83 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a8f85 mov eax, dword ptr [0x103d1f8c] */
  EAX = (r32((uint32_t)(0x103d1f8c)));
  /* 103a8f8a push eax */
  push32((uint32_t)(EAX));
  /* 103a8f8b call dword ptr [0x103d330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d330c))), 0x103a8f91u);
  /* 103a8f91 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103a8f94 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8f98 je 0x103a8fe0 */
  if (C.zf) goto L_103a8fe0;
  /* 103a8f9a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a8f9d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 103a8fa0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a8fa3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103a8fa6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a8fa9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8fac jae 0x103a8fb6 */
  if (!C.cf) goto L_103a8fb6;
  /* 103a8fae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a8fb1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 103a8fb4 jmp 0x103a8fbc */
  goto L_103a8fbc;
L_103a8fb6:;
  /* 103a8fb6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a8fb9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_103a8fbc:;
  /* 103a8fbc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103a8fbf push eax */
  push32((uint32_t)(EAX));
  /* 103a8fc0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a8fc3 push ecx */
  push32((uint32_t)(ECX));
  /* 103a8fc4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a8fc7 push edx */
  push32((uint32_t)(EDX));
  /* 103a8fc8 call 0x103ab7d0 */
  push32(0x103a8fcdu); f_103ab7d0();
  /* 103a8fcd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8fd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a8fd3 push eax */
  push32((uint32_t)(EAX));
  /* 103a8fd4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a8fd7 push ecx */
  push32((uint32_t)(ECX));
  /* 103a8fd8 call 0x103a92b0 */
  push32(0x103a8fddu); f_103a92b0();
  /* 103a8fdd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a8fe0:;
  /* 103a8fe0 push 9 */
  push32((uint32_t)(0x9u));
  /* 103a8fe2 call 0x103a8990 */
  push32(0x103a8fe7u); f_103a8990();
  /* 103a8fe7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8fea jmp 0x103a9029 */
  goto L_103a9029;
L_103a8fec:;
  /* 103a8fec push 9 */
  push32((uint32_t)(0x9u));
  /* 103a8fee call 0x103a8990 */
  push32(0x103a8ff3u); f_103a8990();
  /* 103a8ff3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8ff6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8ffa jne 0x103a9003 */
  if (!C.zf) goto L_103a9003;
  /* 103a8ffc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_103a9003:;
  /* 103a9003 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a9006 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9009 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 103a900c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 103a900f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a9012 push eax */
  push32((uint32_t)(EAX));
  /* 103a9013 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a9016 push ecx */
  push32((uint32_t)(ECX));
  /* 103a9017 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a9019 mov edx, dword ptr [0x103d1f8c] */
  EDX = (r32((uint32_t)(0x103d1f8c)));
  /* 103a901f push edx */
  push32((uint32_t)(EDX));
  /* 103a9020 call dword ptr [0x103d3308] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3308))), 0x103a9026u);
  /* 103a9026 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_103a9029:;
  /* 103a9029 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a902d jne 0x103a9038 */
  if (!C.zf) goto L_103a9038;
  /* 103a902f cmp dword ptr [0x103d07d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d07d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a9036 jne 0x103a903d */
  if (!C.zf) goto L_103a903d;
L_103a9038:;
  /* 103a9038 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a903b jmp 0x103a9056 */
  goto L_103a9056;
L_103a903d:;
  /* 103a903d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a9040 push eax */
  push32((uint32_t)(EAX));
  /* 103a9041 call 0x103a8c30 */
  push32(0x103a9046u); f_103a8c30();
  /* 103a9046 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9049 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a904b jne 0x103a9051 */
  if (!C.zf) goto L_103a9051;
  /* 103a904d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a904f jmp 0x103a9056 */
  goto L_103a9056;
L_103a9051:;
  /* 103a9051 jmp 0x103a8ea6 */
  goto L_103a8ea6;
L_103a9056:;
  /* 103a9056 mov esp, ebp */
  ESP = (EBP);
  /* 103a9058 pop ebp */
  EBP = (pop32());
  /* 103a9059 ret  */
  ESPCHK(0x103a8e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10009060 @ 0x103a9060 (104 bytes, 38 insns) */
void f_103a9060(void) {
  FTRACE(0x103a9060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a9060 push ebp */
  push32((uint32_t)(EBP));
  /* 103a9061 mov ebp, esp */
  EBP = (ESP);
  /* 103a9063 push ecx */
  push32((uint32_t)(ECX));
  /* 103a9064 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a9068 jne 0x103a906c */
  if (!C.zf) goto L_103a906c;
  /* 103a906a jmp 0x103a90c4 */
  goto L_103a90c4;
L_103a906c:;
  /* 103a906c push 9 */
  push32((uint32_t)(0x9u));
  /* 103a906e call 0x103a88f0 */
  push32(0x103a9073u); f_103a88f0();
  /* 103a9073 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9076 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a9079 push eax */
  push32((uint32_t)(EAX));
  /* 103a907a call 0x103a91f0 */
  push32(0x103a907fu); f_103a91f0();
  /* 103a907f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9082 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a9085 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a9089 je 0x103a90a7 */
  if (C.zf) goto L_103a90a7;
  /* 103a908b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a908e push ecx */
  push32((uint32_t)(ECX));
  /* 103a908f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a9092 push edx */
  push32((uint32_t)(EDX));
  /* 103a9093 call 0x103a92b0 */
  push32(0x103a9098u); f_103a92b0();
  /* 103a9098 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a909b push 9 */
  push32((uint32_t)(0x9u));
  /* 103a909d call 0x103a8990 */
  push32(0x103a90a2u); f_103a8990();
  /* 103a90a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a90a5 jmp 0x103a90c4 */
  goto L_103a90c4;
L_103a90a7:;
  /* 103a90a7 push 9 */
  push32((uint32_t)(0x9u));
  /* 103a90a9 call 0x103a8990 */
  push32(0x103a90aeu); f_103a8990();
  /* 103a90ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a90b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a90b4 push eax */
  push32((uint32_t)(EAX));
  /* 103a90b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a90b7 mov ecx, dword ptr [0x103d1f8c] */
  ECX = (r32((uint32_t)(0x103d1f8c)));
  /* 103a90bd push ecx */
  push32((uint32_t)(ECX));
  /* 103a90be call dword ptr [0x103d33b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d33b4))), 0x103a90c4u);
L_103a90c4:;
  /* 103a90c4 mov esp, ebp */
  ESP = (EBP);
  /* 103a90c6 pop ebp */
  EBP = (pop32());
  /* 103a90c7 ret  */
  ESPCHK(0x103a9060u, _esp0);
  ESP += 4; return;
}

/* FUN_100090d0 @ 0x103a90d0 (116 bytes, 34 insns) */
void f_103a90d0(void) {
  FTRACE(0x103a90d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a90d0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a90d1 mov ebp, esp */
  EBP = (ESP);
  /* 103a90d3 push ecx */
  push32((uint32_t)(ECX));
  /* 103a90d4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 103a90db push 9 */
  push32((uint32_t)(0x9u));
  /* 103a90dd call 0x103a88f0 */
  push32(0x103a90e2u); f_103a88f0();
  /* 103a90e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a90e5 call 0x103aa7e0 */
  push32(0x103a90eau); f_103aa7e0();
  /* 103a90ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a90ec jge 0x103a90f5 */
  if ((C.sf==C.of)) goto L_103a90f5;
  /* 103a90ee mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_103a90f5:;
  /* 103a90f5 push 9 */
  push32((uint32_t)(0x9u));
  /* 103a90f7 call 0x103a8990 */
  push32(0x103a90fcu); f_103a8990();
  /* 103a90fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a90ff push 0 */
  push32((uint32_t)(0x0u));
  /* 103a9101 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a9103 mov eax, dword ptr [0x103d1f8c] */
  EAX = (r32((uint32_t)(0x103d1f8c)));
  /* 103a9108 push eax */
  push32((uint32_t)(EAX));
  /* 103a9109 call dword ptr [0x103d3398] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3398))), 0x103a910fu);
  /* 103a910f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a9111 jne 0x103a913d */
  if (!C.zf) goto L_103a913d;
  /* 103a9113 call dword ptr [0x103d3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3378))), 0x103a9119u);
  /* 103a9119 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a911c jne 0x103a9136 */
  if (!C.zf) goto L_103a9136;
  /* 103a911e call 0x103acdd0 */
  push32(0x103a9123u); f_103acdd0();
  /* 103a9123 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 103a9129 call 0x103acdc0 */
  push32(0x103a912eu); f_103acdc0();
  /* 103a912e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 103a9134 jmp 0x103a913d */
  goto L_103a913d;
L_103a9136:;
  /* 103a9136 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_103a913d:;
  /* 103a913d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a9140 mov esp, ebp */
  ESP = (EBP);
  /* 103a9142 pop ebp */
  EBP = (pop32());
  /* 103a9143 ret  */
  ESPCHK(0x103a90d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009150 @ 0x103a9150 (10 bytes, 5 insns) */
void f_103a9150(void) {
  FTRACE(0x103a9150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a9150 push ebp */
  push32((uint32_t)(EBP));
  /* 103a9151 mov ebp, esp */
  EBP = (ESP);
  /* 103a9153 call 0x103a90d0 */
  push32(0x103a9158u); f_103a90d0();
  /* 103a9158 pop ebp */
  EBP = (pop32());
  /* 103a9159 ret  */
  ESPCHK(0x103a9150u, _esp0);
  ESP += 4; return;
}

/* FUN_10009160 @ 0x103a9160 (10 bytes, 5 insns) */
void f_103a9160(void) {
  FTRACE(0x103a9160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a9160 push ebp */
  push32((uint32_t)(EBP));
  /* 103a9161 mov ebp, esp */
  EBP = (ESP);
  /* 103a9163 mov eax, dword ptr [0x103cec94] */
  EAX = (r32((uint32_t)(0x103cec94)));
  /* 103a9168 pop ebp */
  EBP = (pop32());
  /* 103a9169 ret  */
  ESPCHK(0x103a9160u, _esp0);
  ESP += 4; return;
}

/* FUN_10009170 @ 0x103a9170 (31 bytes, 11 insns) */
void f_103a9170(void) {
  FTRACE(0x103a9170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a9170 push ebp */
  push32((uint32_t)(EBP));
  /* 103a9171 mov ebp, esp */
  EBP = (ESP);
  /* 103a9173 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a917a jbe 0x103a9180 */
  if ((C.cf||C.zf)) goto L_103a9180;
  /* 103a917c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a917e jmp 0x103a918d */
  goto L_103a918d;
L_103a9180:;
  /* 103a9180 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a9183 mov dword ptr [0x103cec94], eax */
  w32((uint32_t)(0x103cec94), (EAX));
  /* 103a9188 mov eax, 1 */
  EAX = (0x1u);
L_103a918d:;
  /* 103a918d pop ebp */
  EBP = (pop32());
  /* 103a918e ret  */
  ESPCHK(0x103a9170u, _esp0);
  ESP += 4; return;
}

/* FUN_10009190 @ 0x103a9190 (89 bytes, 20 insns) */
void f_103a9190(void) {
  FTRACE(0x103a9190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a9190 push ebp */
  push32((uint32_t)(EBP));
  /* 103a9191 mov ebp, esp */
  EBP = (ESP);
  /* 103a9193 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 103a9198 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a919a mov eax, dword ptr [0x103d1f8c] */
  EAX = (r32((uint32_t)(0x103d1f8c)));
  /* 103a919f push eax */
  push32((uint32_t)(EAX));
  /* 103a91a0 call dword ptr [0x103d330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d330c))), 0x103a91a6u);
  /* 103a91a6 mov dword ptr [0x103d1f88], eax */
  w32((uint32_t)(0x103d1f88), (EAX));
  /* 103a91ab cmp dword ptr [0x103d1f88], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d1f88))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a91b2 jne 0x103a91b8 */
  if (!C.zf) goto L_103a91b8;
  /* 103a91b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a91b6 jmp 0x103a91e7 */
  goto L_103a91e7;
L_103a91b8:;
  /* 103a91b8 mov ecx, dword ptr [0x103d1f88] */
  ECX = (r32((uint32_t)(0x103d1f88)));
  /* 103a91be mov dword ptr [0x103d1f7c], ecx */
  w32((uint32_t)(0x103d1f7c), (ECX));
  /* 103a91c4 mov dword ptr [0x103d1f80], 0 */
  w32((uint32_t)(0x103d1f80), (0x0u));
  /* 103a91ce mov dword ptr [0x103d1f84], 0 */
  w32((uint32_t)(0x103d1f84), (0x0u));
  /* 103a91d8 mov dword ptr [0x103d1f68], 0x10 */
  w32((uint32_t)(0x103d1f68), (0x10u));
  /* 103a91e2 mov eax, 1 */
  EAX = (0x1u);
L_103a91e7:;
  /* 103a91e7 pop ebp */
  EBP = (pop32());
  /* 103a91e8 ret  */
  ESPCHK(0x103a9190u, _esp0);
  ESP += 4; return;
}

/* FUN_100091f0 @ 0x103a91f0 (85 bytes, 29 insns) */
void f_103a91f0(void) {
  FTRACE(0x103a91f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a91f0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a91f1 mov ebp, esp */
  EBP = (ESP);
  /* 103a91f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a91f6 mov eax, dword ptr [0x103d1f84] */
  EAX = (r32((uint32_t)(0x103d1f84)));
  /* 103a91fb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103a91fe mov ecx, dword ptr [0x103d1f88] */
  ECX = (r32((uint32_t)(0x103d1f88)));
  /* 103a9204 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9206 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103a9209 mov edx, dword ptr [0x103d1f88] */
  EDX = (r32((uint32_t)(0x103d1f88)));
  /* 103a920f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_103a9212:;
  /* 103a9212 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a9215 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a9218 jae 0x103a923f */
  if (!C.cf) goto L_103a923f;
  /* 103a921a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a921d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a9220 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a9223 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103a9226 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a922d jae 0x103a9234 */
  if (!C.cf) goto L_103a9234;
  /* 103a922f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a9232 jmp 0x103a9241 */
  goto L_103a9241;
L_103a9234:;
  /* 103a9234 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a9237 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a923a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103a923d jmp 0x103a9212 */
  goto L_103a9212;
L_103a923f:;
  /* 103a923f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103a9241:;
  /* 103a9241 mov esp, ebp */
  ESP = (EBP);
  /* 103a9243 pop ebp */
  EBP = (pop32());
  /* 103a9244 ret  */
  ESPCHK(0x103a91f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009250 @ 0x103a9250 (95 bytes, 33 insns) */
void f_103a9250(void) {
  FTRACE(0x103a9250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a9250 push ebp */
  push32((uint32_t)(EBP));
  /* 103a9251 mov ebp, esp */
  EBP = (ESP);
  /* 103a9253 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a9256 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a9259 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a925c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a925f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103a9262 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a9265 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 103a9268 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103a926b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103a9270 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a9273 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103a9275 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a9278 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 103a927b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 103a927d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a927f jne 0x103a92a1 */
  if (!C.zf) goto L_103a92a1;
  /* 103a9281 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a9284 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 103a9287 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a9289 jne 0x103a92a1 */
  if (!C.zf) goto L_103a92a1;
  /* 103a928b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a928e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 103a9294 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a9296 je 0x103a92a1 */
  if (C.zf) goto L_103a92a1;
  /* 103a9298 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 103a929f jmp 0x103a92a8 */
  goto L_103a92a8;
L_103a92a1:;
  /* 103a92a1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_103a92a8:;
  /* 103a92a8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a92ab mov esp, ebp */
  ESP = (EBP);
  /* 103a92ad pop ebp */
  EBP = (pop32());
  /* 103a92ae ret  */
  ESPCHK(0x103a9250u, _esp0);
  ESP += 4; return;
}

/* FUN_100092b0 @ 0x103a92b0 (1485 bytes, 453 insns) */
void f_103a92b0(void) {
  FTRACE(0x103a92b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a92b0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a92b1 mov ebp, esp */
  EBP = (ESP);
  /* 103a92b3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a92b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a92b9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103a92bc mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 103a92bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a92c2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a92c5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a92c8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 103a92cb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a92ce shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 103a92d1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103a92d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a92d7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103a92dd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103a92e0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 103a92e7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103a92ea mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a92ed sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a92f0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 103a92f3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103a92f6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103a92f8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a92fb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 103a92fe mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103a9301 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9304 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 103a9307 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 103a930a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103a930c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 103a930f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103a9312 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 103a9315 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103a9318 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103a931b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 103a931e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a9320 jne 0x103a9448 */
  if (!C.zf) goto L_103a9448;
  /* 103a9326 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103a9329 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 103a932c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a932f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 103a9332 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a9336 jbe 0x103a933f */
  if ((C.cf||C.zf)) goto L_103a933f;
  /* 103a9338 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_103a933f:;
  /* 103a933f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 103a9342 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 103a9345 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 103a9348 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a934b jne 0x103a9421 */
  if (!C.zf) goto L_103a9421;
  /* 103a9351 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a9355 jae 0x103a93b6 */
  if (!C.cf) goto L_103a93b6;
  /* 103a9357 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103a935c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103a935f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103a9361 not eax */
  EAX = (~(EAX));
  /* 103a9363 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a9366 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103a9369 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 103a936d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103a936f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a9372 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103a9375 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 103a9379 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103a937c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a937f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 103a9382 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 103a9385 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103a9388 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a938b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 103a938e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103a9391 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9394 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 103a9398 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a939a jne 0x103a93b4 */
  if (!C.zf) goto L_103a93b4;
  /* 103a939c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103a93a1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103a93a4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103a93a6 not eax */
  EAX = (~(EAX));
  /* 103a93a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a93ab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103a93ad and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 103a93af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a93b2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_103a93b4:;
  /* 103a93b4 jmp 0x103a9421 */
  goto L_103a9421;
L_103a93b6:;
  /* 103a93b6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103a93b9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a93bc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103a93c1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103a93c3 not edx */
  EDX = (~(EDX));
  /* 103a93c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a93c8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103a93cb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 103a93d2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103a93d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a93d7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103a93da mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 103a93e1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103a93e4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a93e7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 103a93ea sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 103a93ed mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103a93f0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a93f3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 103a93f6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103a93f9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a93fc movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 103a9400 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a9402 jne 0x103a9421 */
  if (!C.zf) goto L_103a9421;
  /* 103a9404 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103a9407 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a940a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103a940f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103a9411 not edx */
  EDX = (~(EDX));
  /* 103a9413 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a9416 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103a9419 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 103a941b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a941e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_103a9421:;
  /* 103a9421 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 103a9424 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 103a9427 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 103a942a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 103a942d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 103a9430 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 103a9433 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103a9436 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 103a9439 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 103a943c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 103a943f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103a9442 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9445 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_103a9448:;
  /* 103a9448 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103a944b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 103a944e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a9451 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 103a9454 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a9458 jbe 0x103a9461 */
  if ((C.cf||C.zf)) goto L_103a9461;
  /* 103a945a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_103a9461:;
  /* 103a9461 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a9464 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 103a9467 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a9469 jne 0x103a95c5 */
  if (!C.zf) goto L_103a95c5;
  /* 103a946f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103a9472 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a9475 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 103a9478 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a947b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 103a947e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a9481 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 103a9484 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a9488 jbe 0x103a9491 */
  if ((C.cf||C.zf)) goto L_103a9491;
  /* 103a948a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_103a9491:;
  /* 103a9491 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103a9494 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9497 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 103a949a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103a949d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 103a94a0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a94a3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 103a94a6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a94aa jbe 0x103a94b3 */
  if ((C.cf||C.zf)) goto L_103a94b3;
  /* 103a94ac mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_103a94b3:;
  /* 103a94b3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103a94b6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a94b9 je 0x103a95bf */
  if (C.zf) goto L_103a95bf;
  /* 103a94bf mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 103a94c2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 103a94c5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 103a94c8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a94cb jne 0x103a95a1 */
  if (!C.zf) goto L_103a95a1;
  /* 103a94d1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a94d5 jae 0x103a9536 */
  if (!C.cf) goto L_103a9536;
  /* 103a94d7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103a94dc mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103a94df shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103a94e1 not edx */
  EDX = (~(EDX));
  /* 103a94e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a94e6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103a94e9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 103a94ed and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103a94ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a94f2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103a94f5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 103a94f9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103a94fc add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a94ff mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 103a9502 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 103a9505 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103a9508 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a950b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 103a950e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103a9511 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9514 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 103a9518 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a951a jne 0x103a9534 */
  if (!C.zf) goto L_103a9534;
  /* 103a951c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103a9521 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103a9524 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103a9526 not edx */
  EDX = (~(EDX));
  /* 103a9528 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a952b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103a952d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 103a952f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a9532 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_103a9534:;
  /* 103a9534 jmp 0x103a95a1 */
  goto L_103a95a1;
L_103a9536:;
  /* 103a9536 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103a9539 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a953c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103a9541 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103a9543 not eax */
  EAX = (~(EAX));
  /* 103a9545 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a9548 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103a954b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 103a9552 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103a9554 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a9557 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103a955a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 103a9561 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103a9564 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9567 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 103a956a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 103a956d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103a9570 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9573 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 103a9576 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103a9579 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a957c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 103a9580 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a9582 jne 0x103a95a1 */
  if (!C.zf) goto L_103a95a1;
  /* 103a9584 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103a9587 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a958a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103a958f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103a9591 not eax */
  EAX = (~(EAX));
  /* 103a9593 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a9596 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103a9599 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 103a959b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a959e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_103a95a1:;
  /* 103a95a1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 103a95a4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 103a95a7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 103a95aa mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103a95ad mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 103a95b0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 103a95b3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 103a95b6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 103a95b9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 103a95bc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_103a95bf:;
  /* 103a95bf mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 103a95c2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_103a95c5:;
  /* 103a95c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a95c8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 103a95cb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a95cd jne 0x103a95db */
  if (!C.zf) goto L_103a95db;
  /* 103a95cf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103a95d2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a95d5 je 0x103a96eb */
  if (C.zf) goto L_103a96eb;
L_103a95db:;
  /* 103a95db mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103a95de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a95e1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 103a95e4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 103a95e7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103a95ea mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103a95ed mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103a95f0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 103a95f3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103a95f6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103a95f9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 103a95fc mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 103a95ff mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103a9602 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 103a9605 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103a9608 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103a960b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103a960e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 103a9611 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103a9614 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103a9617 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 103a961a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a961d jne 0x103a96eb */
  if (!C.zf) goto L_103a96eb;
  /* 103a9623 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a9627 jae 0x103a9684 */
  if (!C.cf) goto L_103a9684;
  /* 103a9629 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103a962c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a962f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 103a9633 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103a9636 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9639 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 103a963c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 103a963f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103a9642 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9645 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 103a9648 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a964a jne 0x103a9662 */
  if (!C.zf) goto L_103a9662;
  /* 103a964c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103a9651 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 103a9654 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103a9656 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a9659 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103a965b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 103a965d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a9660 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_103a9662:;
  /* 103a9662 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103a9667 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 103a966a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103a966c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a966f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103a9672 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 103a9676 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103a9678 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a967b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103a967e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 103a9682 jmp 0x103a96eb */
  goto L_103a96eb;
L_103a9684:;
  /* 103a9684 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103a9687 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a968a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 103a968e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103a9691 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9694 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 103a9697 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 103a969a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103a969d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a96a0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 103a96a3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a96a5 jne 0x103a96c2 */
  if (!C.zf) goto L_103a96c2;
  /* 103a96a7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 103a96aa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a96ad mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103a96b2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103a96b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a96b7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103a96ba or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 103a96bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a96bf mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_103a96c2:;
  /* 103a96c2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 103a96c5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a96c8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103a96cd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103a96cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a96d2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103a96d5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 103a96dc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103a96de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a96e1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 103a96e4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_103a96eb:;
  /* 103a96eb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103a96ee mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103a96f1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 103a96f3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103a96f6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a96f9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103a96fc mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 103a96ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a9702 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103a9704 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a9707 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a970a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103a970c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a970f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a9712 jne 0x103a9879 */
  if (!C.zf) goto L_103a9879;
  /* 103a9718 cmp dword ptr [0x103d1f80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d1f80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a971f je 0x103a9868 */
  if (C.zf) goto L_103a9868;
  /* 103a9725 mov eax, dword ptr [0x103d1f78] */
  EAX = (r32((uint32_t)(0x103d1f78)));
  /* 103a972a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 103a972d mov ecx, dword ptr [0x103d1f80] */
  ECX = (r32((uint32_t)(0x103d1f80)));
  /* 103a9733 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103a9736 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9738 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 103a973b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 103a9740 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 103a9745 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a9748 push eax */
  push32((uint32_t)(EAX));
  /* 103a9749 call dword ptr [0x103d336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d336c))), 0x103a974fu);
  /* 103a974f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103a9754 mov ecx, dword ptr [0x103d1f78] */
  ECX = (r32((uint32_t)(0x103d1f78)));
  /* 103a975a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103a975c mov eax, dword ptr [0x103d1f80] */
  EAX = (r32((uint32_t)(0x103d1f80)));
  /* 103a9761 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 103a9764 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 103a9766 mov edx, dword ptr [0x103d1f80] */
  EDX = (r32((uint32_t)(0x103d1f80)));
  /* 103a976c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 103a976f mov eax, dword ptr [0x103d1f80] */
  EAX = (r32((uint32_t)(0x103d1f80)));
  /* 103a9774 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103a9777 mov edx, dword ptr [0x103d1f78] */
  EDX = (r32((uint32_t)(0x103d1f78)));
  /* 103a977d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 103a9788 mov eax, dword ptr [0x103d1f80] */
  EAX = (r32((uint32_t)(0x103d1f80)));
  /* 103a978d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103a9790 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 103a9793 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 103a9796 mov eax, dword ptr [0x103d1f80] */
  EAX = (r32((uint32_t)(0x103d1f80)));
  /* 103a979b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103a979e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 103a97a1 mov edx, dword ptr [0x103d1f80] */
  EDX = (r32((uint32_t)(0x103d1f80)));
  /* 103a97a7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 103a97aa movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 103a97ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a97b0 jne 0x103a97c6 */
  if (!C.zf) goto L_103a97c6;
  /* 103a97b2 mov edx, dword ptr [0x103d1f80] */
  EDX = (r32((uint32_t)(0x103d1f80)));
  /* 103a97b8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 103a97bb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 103a97bd mov ecx, dword ptr [0x103d1f80] */
  ECX = (r32((uint32_t)(0x103d1f80)));
  /* 103a97c3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_103a97c6:;
  /* 103a97c6 mov edx, dword ptr [0x103d1f80] */
  EDX = (r32((uint32_t)(0x103d1f80)));
  /* 103a97cc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a97d0 jne 0x103a9868 */
  if (!C.zf) goto L_103a9868;
  /* 103a97d6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 103a97db push 0 */
  push32((uint32_t)(0x0u));
  /* 103a97dd mov eax, dword ptr [0x103d1f80] */
  EAX = (r32((uint32_t)(0x103d1f80)));
  /* 103a97e2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 103a97e5 push ecx */
  push32((uint32_t)(ECX));
  /* 103a97e6 call dword ptr [0x103d336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d336c))), 0x103a97ecu);
  /* 103a97ec mov edx, dword ptr [0x103d1f80] */
  EDX = (r32((uint32_t)(0x103d1f80)));
  /* 103a97f2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 103a97f5 push eax */
  push32((uint32_t)(EAX));
  /* 103a97f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a97f8 mov ecx, dword ptr [0x103d1f8c] */
  ECX = (r32((uint32_t)(0x103d1f8c)));
  /* 103a97fe push ecx */
  push32((uint32_t)(ECX));
  /* 103a97ff call dword ptr [0x103d33b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d33b4))), 0x103a9805u);
  /* 103a9805 mov edx, dword ptr [0x103d1f84] */
  EDX = (r32((uint32_t)(0x103d1f84)));
  /* 103a980b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103a980e mov eax, dword ptr [0x103d1f88] */
  EAX = (r32((uint32_t)(0x103d1f88)));
  /* 103a9813 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9815 mov ecx, dword ptr [0x103d1f80] */
  ECX = (r32((uint32_t)(0x103d1f80)));
  /* 103a981b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a981e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a9820 push eax */
  push32((uint32_t)(EAX));
  /* 103a9821 mov edx, dword ptr [0x103d1f80] */
  EDX = (r32((uint32_t)(0x103d1f80)));
  /* 103a9827 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a982a push edx */
  push32((uint32_t)(EDX));
  /* 103a982b mov eax, dword ptr [0x103d1f80] */
  EAX = (r32((uint32_t)(0x103d1f80)));
  /* 103a9830 push eax */
  push32((uint32_t)(EAX));
  /* 103a9831 call 0x103acde0 */
  push32(0x103a9836u); f_103acde0();
  /* 103a9836 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9839 mov ecx, dword ptr [0x103d1f84] */
  ECX = (r32((uint32_t)(0x103d1f84)));
  /* 103a983f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a9842 mov dword ptr [0x103d1f84], ecx */
  w32((uint32_t)(0x103d1f84), (ECX));
  /* 103a9848 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a984b cmp edx, dword ptr [0x103d1f80] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x103d1f80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a9851 jbe 0x103a985c */
  if ((C.cf||C.zf)) goto L_103a985c;
  /* 103a9853 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a9856 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a9859 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_103a985c:;
  /* 103a985c mov ecx, dword ptr [0x103d1f88] */
  ECX = (r32((uint32_t)(0x103d1f88)));
  /* 103a9862 mov dword ptr [0x103d1f7c], ecx */
  w32((uint32_t)(0x103d1f7c), (ECX));
L_103a9868:;
  /* 103a9868 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a986b mov dword ptr [0x103d1f80], edx */
  w32((uint32_t)(0x103d1f80), (EDX));
  /* 103a9871 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a9874 mov dword ptr [0x103d1f78], eax */
  w32((uint32_t)(0x103d1f78), (EAX));
L_103a9879:;
  /* 103a9879 mov esp, ebp */
  ESP = (EBP);
  /* 103a987b pop ebp */
  EBP = (pop32());
  /* 103a987c ret  */
  ESPCHK(0x103a92b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009880 @ 0x103a9880 (1334 bytes, 427 insns) */
void f_103a9880(void) {
  FTRACE(0x103a9880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a9880 push ebp */
  push32((uint32_t)(EBP));
  /* 103a9881 mov ebp, esp */
  EBP = (ESP);
  /* 103a9883 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a9886 push esi */
  push32((uint32_t)(ESI));
  /* 103a9887 mov eax, dword ptr [0x103d1f84] */
  EAX = (r32((uint32_t)(0x103d1f84)));
  /* 103a988c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103a988f mov ecx, dword ptr [0x103d1f88] */
  ECX = (r32((uint32_t)(0x103d1f88)));
  /* 103a9895 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9897 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 103a989a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a989d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a98a0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 103a98a3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 103a98a6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103a98a9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 103a98ac sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a98af mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 103a98b2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a98b6 jge 0x103a98cc */
  if ((C.sf==C.of)) goto L_103a98cc;
  /* 103a98b8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 103a98bb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103a98be shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103a98c0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 103a98c3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 103a98ca jmp 0x103a98e1 */
  goto L_103a98e1;
L_103a98cc:;
  /* 103a98cc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 103a98d3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103a98d6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a98d9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a98dc shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103a98de mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_103a98e1:;
  /* 103a98e1 mov ecx, dword ptr [0x103d1f7c] */
  ECX = (r32((uint32_t)(0x103d1f7c)));
  /* 103a98e7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_103a98ea:;
  /* 103a98ea mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a98ed cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a98f0 jae 0x103a9916 */
  if (!C.cf) goto L_103a9916;
  /* 103a98f2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a98f5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103a98f8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 103a98fa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a98fd mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 103a9900 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 103a9903 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103a9905 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a9907 je 0x103a990b */
  if (C.zf) goto L_103a990b;
  /* 103a9909 jmp 0x103a9916 */
  goto L_103a9916;
L_103a990b:;
  /* 103a990b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a990e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9911 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 103a9914 jmp 0x103a98ea */
  goto L_103a98ea;
L_103a9916:;
  /* 103a9916 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a9919 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a991c jne 0x103a99fd */
  if (!C.zf) goto L_103a99fd;
  /* 103a9922 mov eax, dword ptr [0x103d1f88] */
  EAX = (r32((uint32_t)(0x103d1f88)));
  /* 103a9927 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_103a992a:;
  /* 103a992a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a992d cmp ecx, dword ptr [0x103d1f7c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x103d1f7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a9933 jae 0x103a9959 */
  if (!C.cf) goto L_103a9959;
  /* 103a9935 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a9938 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103a993b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 103a993d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a9940 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 103a9943 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 103a9946 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103a9948 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a994a je 0x103a994e */
  if (C.zf) goto L_103a994e;
  /* 103a994c jmp 0x103a9959 */
  goto L_103a9959;
L_103a994e:;
  /* 103a994e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a9951 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9954 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 103a9957 jmp 0x103a992a */
  goto L_103a992a;
L_103a9959:;
  /* 103a9959 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a995c cmp ecx, dword ptr [0x103d1f7c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x103d1f7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a9962 jne 0x103a99fd */
  if (!C.zf) goto L_103a99fd;
L_103a9968:;
  /* 103a9968 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a996b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a996e jae 0x103a9986 */
  if (!C.cf) goto L_103a9986;
  /* 103a9970 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a9973 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a9977 je 0x103a997b */
  if (C.zf) goto L_103a997b;
  /* 103a9979 jmp 0x103a9986 */
  goto L_103a9986;
L_103a997b:;
  /* 103a997b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a997e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9981 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 103a9984 jmp 0x103a9968 */
  goto L_103a9968;
L_103a9986:;
  /* 103a9986 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a9989 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a998c jne 0x103a99d7 */
  if (!C.zf) goto L_103a99d7;
  /* 103a998e mov eax, dword ptr [0x103d1f88] */
  EAX = (r32((uint32_t)(0x103d1f88)));
  /* 103a9993 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_103a9996:;
  /* 103a9996 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a9999 cmp ecx, dword ptr [0x103d1f7c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x103d1f7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a999f jae 0x103a99b7 */
  if (!C.cf) goto L_103a99b7;
  /* 103a99a1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a99a4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a99a8 je 0x103a99ac */
  if (C.zf) goto L_103a99ac;
  /* 103a99aa jmp 0x103a99b7 */
  goto L_103a99b7;
L_103a99ac:;
  /* 103a99ac mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a99af add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a99b2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 103a99b5 jmp 0x103a9996 */
  goto L_103a9996;
L_103a99b7:;
  /* 103a99b7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a99ba cmp ecx, dword ptr [0x103d1f7c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x103d1f7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a99c0 jne 0x103a99d7 */
  if (!C.zf) goto L_103a99d7;
  /* 103a99c2 call 0x103a9dc0 */
  push32(0x103a99c7u); f_103a9dc0();
  /* 103a99c7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 103a99ca cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a99ce jne 0x103a99d7 */
  if (!C.zf) goto L_103a99d7;
  /* 103a99d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a99d2 jmp 0x103a9db1 */
  goto L_103a9db1;
L_103a99d7:;
  /* 103a99d7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a99da push edx */
  push32((uint32_t)(EDX));
  /* 103a99db call 0x103a9ed0 */
  push32(0x103a99e0u); f_103a9ed0();
  /* 103a99e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a99e3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a99e6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 103a99e9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 103a99eb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a99ee mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103a99f1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a99f4 jne 0x103a99fd */
  if (!C.zf) goto L_103a99fd;
  /* 103a99f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a99f8 jmp 0x103a9db1 */
  goto L_103a9db1;
L_103a99fd:;
  /* 103a99fd mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a9a00 mov dword ptr [0x103d1f7c], edx */
  w32((uint32_t)(0x103d1f7c), (EDX));
  /* 103a9a06 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a9a09 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103a9a0c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 103a9a0f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 103a9a12 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103a9a14 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 103a9a17 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a9a1b je 0x103a9a40 */
  if (C.zf) goto L_103a9a40;
  /* 103a9a1d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103a9a20 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 103a9a23 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103a9a26 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 103a9a2a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103a9a2d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 103a9a30 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 103a9a33 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 103a9a3a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 103a9a3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a9a3e jne 0x103a9a75 */
  if (!C.zf) goto L_103a9a75;
L_103a9a40:;
  /* 103a9a40 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_103a9a47:;
  /* 103a9a47 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103a9a4a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 103a9a4d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103a9a50 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 103a9a54 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103a9a57 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 103a9a5a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 103a9a5d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 103a9a64 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 103a9a66 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a9a68 jne 0x103a9a75 */
  if (!C.zf) goto L_103a9a75;
  /* 103a9a6a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103a9a6d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9a70 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 103a9a73 jmp 0x103a9a47 */
  goto L_103a9a47;
L_103a9a75:;
  /* 103a9a75 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103a9a78 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103a9a7e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 103a9a81 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 103a9a88 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103a9a8b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 103a9a92 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103a9a95 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 103a9a98 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103a9a9b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 103a9a9f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 103a9aa2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a9aa6 jne 0x103a9ac2 */
  if (!C.zf) goto L_103a9ac2;
  /* 103a9aa8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 103a9aaf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103a9ab2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 103a9ab5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 103a9ab8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 103a9abf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_103a9ac2:;
  /* 103a9ac2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a9ac6 jl 0x103a9adb */
  if ((C.sf!=C.of)) goto L_103a9adb;
  /* 103a9ac8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103a9acb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 103a9acd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 103a9ad0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103a9ad3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9ad6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 103a9ad9 jmp 0x103a9ac2 */
  goto L_103a9ac2;
L_103a9adb:;
  /* 103a9adb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 103a9ade mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a9ae1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 103a9ae5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 103a9ae8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a9aeb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103a9aed sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a9af0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103a9af3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a9af6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 103a9af9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a9afc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 103a9aff cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a9b03 jle 0x103a9b0c */
  if ((C.zf||C.sf!=C.of)) goto L_103a9b0c;
  /* 103a9b05 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_103a9b0c:;
  /* 103a9b0c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103a9b0f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a9b12 je 0x103a9d30 */
  if (C.zf) goto L_103a9d30;
  /* 103a9b18 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a9b1b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a9b1e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 103a9b21 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a9b24 jne 0x103a9bfa */
  if (!C.zf) goto L_103a9bfa;
  /* 103a9b2a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a9b2e jge 0x103a9b8f */
  if ((C.sf==C.of)) goto L_103a9b8f;
  /* 103a9b30 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103a9b35 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103a9b38 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103a9b3a not eax */
  EAX = (~(EAX));
  /* 103a9b3c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103a9b3f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 103a9b42 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 103a9b46 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103a9b48 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103a9b4b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 103a9b4e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 103a9b52 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 103a9b55 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9b58 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 103a9b5b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 103a9b5e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 103a9b61 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9b64 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 103a9b67 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 103a9b6a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9b6d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 103a9b71 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a9b73 jne 0x103a9b8d */
  if (!C.zf) goto L_103a9b8d;
  /* 103a9b75 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103a9b7a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103a9b7d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103a9b7f not eax */
  EAX = (~(EAX));
  /* 103a9b81 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a9b84 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103a9b86 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 103a9b88 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a9b8b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_103a9b8d:;
  /* 103a9b8d jmp 0x103a9bfa */
  goto L_103a9bfa;
L_103a9b8f:;
  /* 103a9b8f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103a9b92 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a9b95 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103a9b9a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103a9b9c not edx */
  EDX = (~(EDX));
  /* 103a9b9e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103a9ba1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 103a9ba4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 103a9bab and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103a9bad mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103a9bb0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 103a9bb3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 103a9bba mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 103a9bbd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9bc0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 103a9bc3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 103a9bc6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 103a9bc9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9bcc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 103a9bcf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 103a9bd2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9bd5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 103a9bd9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a9bdb jne 0x103a9bfa */
  if (!C.zf) goto L_103a9bfa;
  /* 103a9bdd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103a9be0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a9be3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103a9be8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103a9bea not edx */
  EDX = (~(EDX));
  /* 103a9bec mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a9bef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103a9bf2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 103a9bf4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a9bf7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_103a9bfa:;
  /* 103a9bfa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a9bfd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 103a9c00 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a9c03 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 103a9c06 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 103a9c09 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a9c0c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103a9c0f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a9c12 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 103a9c15 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 103a9c18 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a9c1c je 0x103a9d30 */
  if (C.zf) goto L_103a9d30;
  /* 103a9c22 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103a9c25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a9c28 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 103a9c2b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103a9c2e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a9c31 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a9c34 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103a9c37 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 103a9c3a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a9c3d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a9c40 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 103a9c43 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a9c46 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a9c49 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 103a9c4c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a9c4f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103a9c52 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a9c55 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 103a9c58 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a9c5b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a9c5e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 103a9c61 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a9c64 jne 0x103a9d30 */
  if (!C.zf) goto L_103a9d30;
  /* 103a9c6a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a9c6e jge 0x103a9cca */
  if ((C.sf==C.of)) goto L_103a9cca;
  /* 103a9c70 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 103a9c73 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9c76 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 103a9c7a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 103a9c7d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9c80 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 103a9c83 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 103a9c85 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 103a9c88 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9c8b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 103a9c8e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a9c90 jne 0x103a9ca8 */
  if (!C.zf) goto L_103a9ca8;
  /* 103a9c92 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103a9c97 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103a9c9a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103a9c9c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a9c9f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103a9ca1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 103a9ca3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a9ca6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_103a9ca8:;
  /* 103a9ca8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103a9cad mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103a9cb0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103a9cb2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103a9cb5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 103a9cb8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 103a9cbc or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103a9cbe mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103a9cc1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 103a9cc4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 103a9cc8 jmp 0x103a9d30 */
  goto L_103a9d30;
L_103a9cca:;
  /* 103a9cca mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 103a9ccd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9cd0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 103a9cd4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 103a9cd7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9cda mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 103a9cdd add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 103a9cdf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 103a9ce2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9ce5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 103a9ce8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a9cea jne 0x103a9d07 */
  if (!C.zf) goto L_103a9d07;
  /* 103a9cec mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103a9cef sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a9cf2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103a9cf7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103a9cf9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a9cfc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103a9cff or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 103a9d01 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a9d04 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_103a9d07:;
  /* 103a9d07 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103a9d0a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a9d0d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103a9d12 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103a9d14 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103a9d17 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 103a9d1a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 103a9d21 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103a9d23 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103a9d26 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 103a9d29 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_103a9d30:;
  /* 103a9d30 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a9d34 je 0x103a9d4a */
  if (C.zf) goto L_103a9d4a;
  /* 103a9d36 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a9d39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a9d3c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 103a9d3e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a9d41 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9d44 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a9d47 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_103a9d4a:;
  /* 103a9d4a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a9d4d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9d50 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 103a9d53 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 103a9d56 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9d59 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a9d5c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103a9d5e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 103a9d61 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9d64 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a9d67 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9d6a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 103a9d6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a9d70 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103a9d72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a9d75 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103a9d77 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9d7a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a9d7d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 103a9d7f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a9d81 jne 0x103a9da3 */
  if (!C.zf) goto L_103a9da3;
  /* 103a9d83 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a9d86 cmp eax, dword ptr [0x103d1f80] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x103d1f80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a9d8c jne 0x103a9da3 */
  if (!C.zf) goto L_103a9da3;
  /* 103a9d8e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103a9d91 cmp ecx, dword ptr [0x103d1f78] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x103d1f78))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a9d97 jne 0x103a9da3 */
  if (!C.zf) goto L_103a9da3;
  /* 103a9d99 mov dword ptr [0x103d1f80], 0 */
  w32((uint32_t)(0x103d1f80), (0x0u));
L_103a9da3:;
  /* 103a9da3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 103a9da6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103a9da9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 103a9dab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a9dae add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_103a9db1:;
  /* 103a9db1 pop esi */
  ESI = (pop32());
  /* 103a9db2 mov esp, ebp */
  ESP = (EBP);
  /* 103a9db4 pop ebp */
  EBP = (pop32());
  /* 103a9db5 ret  */
  ESPCHK(0x103a9880u, _esp0);
  ESP += 4; return;
}

/* FUN_10009dc0 @ 0x103a9dc0 (271 bytes, 78 insns) */
void f_103a9dc0(void) {
  FTRACE(0x103a9dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a9dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a9dc1 mov ebp, esp */
  EBP = (ESP);
  /* 103a9dc3 push ecx */
  push32((uint32_t)(ECX));
  /* 103a9dc4 mov eax, dword ptr [0x103d1f84] */
  EAX = (r32((uint32_t)(0x103d1f84)));
  /* 103a9dc9 cmp eax, dword ptr [0x103d1f68] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x103d1f68))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a9dcf jne 0x103a9e1b */
  if (!C.zf) goto L_103a9e1b;
  /* 103a9dd1 mov ecx, dword ptr [0x103d1f68] */
  ECX = (r32((uint32_t)(0x103d1f68)));
  /* 103a9dd7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9dda imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103a9ddd push ecx */
  push32((uint32_t)(ECX));
  /* 103a9dde mov edx, dword ptr [0x103d1f88] */
  EDX = (r32((uint32_t)(0x103d1f88)));
  /* 103a9de4 push edx */
  push32((uint32_t)(EDX));
  /* 103a9de5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a9de7 mov eax, dword ptr [0x103d1f8c] */
  EAX = (r32((uint32_t)(0x103d1f8c)));
  /* 103a9dec push eax */
  push32((uint32_t)(EAX));
  /* 103a9ded call dword ptr [0x103d3308] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3308))), 0x103a9df3u);
  /* 103a9df3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a9df6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a9dfa jne 0x103a9e03 */
  if (!C.zf) goto L_103a9e03;
  /* 103a9dfc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a9dfe jmp 0x103a9ecb */
  goto L_103a9ecb;
L_103a9e03:;
  /* 103a9e03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a9e06 mov dword ptr [0x103d1f88], ecx */
  w32((uint32_t)(0x103d1f88), (ECX));
  /* 103a9e0c mov edx, dword ptr [0x103d1f68] */
  EDX = (r32((uint32_t)(0x103d1f68)));
  /* 103a9e12 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9e15 mov dword ptr [0x103d1f68], edx */
  w32((uint32_t)(0x103d1f68), (EDX));
L_103a9e1b:;
  /* 103a9e1b mov eax, dword ptr [0x103d1f84] */
  EAX = (r32((uint32_t)(0x103d1f84)));
  /* 103a9e20 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103a9e23 mov ecx, dword ptr [0x103d1f88] */
  ECX = (r32((uint32_t)(0x103d1f88)));
  /* 103a9e29 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9e2b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103a9e2e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 103a9e33 push 8 */
  push32((uint32_t)(0x8u));
  /* 103a9e35 mov edx, dword ptr [0x103d1f8c] */
  EDX = (r32((uint32_t)(0x103d1f8c)));
  /* 103a9e3b push edx */
  push32((uint32_t)(EDX));
  /* 103a9e3c call dword ptr [0x103d330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d330c))), 0x103a9e42u);
  /* 103a9e42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a9e45 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 103a9e48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a9e4b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a9e4f jne 0x103a9e55 */
  if (!C.zf) goto L_103a9e55;
  /* 103a9e51 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a9e53 jmp 0x103a9ecb */
  goto L_103a9ecb;
L_103a9e55:;
  /* 103a9e55 push 4 */
  push32((uint32_t)(0x4u));
  /* 103a9e57 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 103a9e5c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 103a9e61 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a9e63 call dword ptr [0x103d3304] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3304))), 0x103a9e69u);
  /* 103a9e69 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a9e6c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 103a9e6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a9e72 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a9e76 jne 0x103a9e92 */
  if (!C.zf) goto L_103a9e92;
  /* 103a9e78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a9e7b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103a9e7e push ecx */
  push32((uint32_t)(ECX));
  /* 103a9e7f push 0 */
  push32((uint32_t)(0x0u));
  /* 103a9e81 mov edx, dword ptr [0x103d1f8c] */
  EDX = (r32((uint32_t)(0x103d1f8c)));
  /* 103a9e87 push edx */
  push32((uint32_t)(EDX));
  /* 103a9e88 call dword ptr [0x103d33b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d33b4))), 0x103a9e8eu);
  /* 103a9e8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a9e90 jmp 0x103a9ecb */
  goto L_103a9ecb;
L_103a9e92:;
  /* 103a9e92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a9e95 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 103a9e9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a9e9e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 103a9ea5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a9ea8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 103a9eaf mov eax, dword ptr [0x103d1f84] */
  EAX = (r32((uint32_t)(0x103d1f84)));
  /* 103a9eb4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9eb7 mov dword ptr [0x103d1f84], eax */
  w32((uint32_t)(0x103d1f84), (EAX));
  /* 103a9ebc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a9ebf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 103a9ec2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 103a9ec8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_103a9ecb:;
  /* 103a9ecb mov esp, ebp */
  ESP = (EBP);
  /* 103a9ecd pop ebp */
  EBP = (pop32());
  /* 103a9ece ret  */
  ESPCHK(0x103a9dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ed0 @ 0x103a9ed0 (494 bytes, 149 insns) */
void f_103a9ed0(void) {
  FTRACE(0x103a9ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a9ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a9ed1 mov ebp, esp */
  EBP = (ESP);
  /* 103a9ed3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a9ed6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a9ed9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103a9edc mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 103a9edf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a9ee2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 103a9ee5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103a9ee8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_103a9eef:;
  /* 103a9eef cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a9ef3 jl 0x103a9f08 */
  if ((C.sf!=C.of)) goto L_103a9f08;
  /* 103a9ef5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a9ef8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 103a9efa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103a9efd mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 103a9f00 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9f03 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 103a9f06 jmp 0x103a9eef */
  goto L_103a9eef;
L_103a9f08:;
  /* 103a9f08 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103a9f0b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103a9f11 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103a9f14 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 103a9f1b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 103a9f1e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 103a9f25 jmp 0x103a9f30 */
  goto L_103a9f30;
L_103a9f27:;
  /* 103a9f27 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 103a9f2a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9f2d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_103a9f30:;
  /* 103a9f30 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a9f34 jge 0x103a9f56 */
  if ((C.sf==C.of)) goto L_103a9f56;
  /* 103a9f36 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103a9f39 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a9f3c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 103a9f3f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 103a9f42 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a9f45 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a9f48 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 103a9f4b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a9f4e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a9f51 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 103a9f54 jmp 0x103a9f27 */
  goto L_103a9f27;
L_103a9f56:;
  /* 103a9f56 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 103a9f59 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 103a9f5c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a9f5f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 103a9f62 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9f64 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 103a9f67 push 4 */
  push32((uint32_t)(0x4u));
  /* 103a9f69 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 103a9f6e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 103a9f73 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a9f76 push edx */
  push32((uint32_t)(EDX));
  /* 103a9f77 call dword ptr [0x103d3304] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3304))), 0x103a9f7du);
  /* 103a9f7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a9f7f jne 0x103a9f89 */
  if (!C.zf) goto L_103a9f89;
  /* 103a9f81 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a9f84 jmp 0x103aa0ba */
  goto L_103aa0ba;
L_103a9f89:;
  /* 103a9f89 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a9f8c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9f91 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 103a9f94 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a9f97 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103a9f9a jmp 0x103a9fa8 */
  goto L_103a9fa8;
L_103a9f9c:;
  /* 103a9f9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a9f9f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9fa5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_103a9fa8:;
  /* 103a9fa8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a9fab cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a9fae ja 0x103aa00d */
  if ((!C.cf&&!C.zf)) goto L_103aa00d;
  /* 103a9fb0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a9fb3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 103a9fba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a9fbd mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 103a9fc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a9fca add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9fcd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 103a9fd0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a9fd3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 103a9fd9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a9fdc add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9fe2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a9fe5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 103a9fe8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a9feb sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a9ff1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a9ff4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 103a9ff7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a9ffa add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a9fff mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 103aa002 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103aa005 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 103aa00b jmp 0x103a9f9c */
  goto L_103a9f9c;
L_103aa00d:;
  /* 103aa00d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103aa010 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa016 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 103aa019 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103aa01c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa01f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103aa022 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 103aa025 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103aa028 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 103aa02b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 103aa02e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103aa031 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103aa034 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 103aa037 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103aa03a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa03d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103aa040 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 103aa043 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103aa046 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 103aa049 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 103aa04c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103aa04f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103aa052 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 103aa055 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103aa058 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103aa05b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 103aa063 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 103aa066 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103aa069 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 103aa074 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103aa077 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 103aa07b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103aa07e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 103aa081 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 103aa084 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103aa087 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 103aa08a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103aa08c jne 0x103aa09d */
  if (!C.zf) goto L_103aa09d;
  /* 103aa08e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aa091 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103aa094 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 103aa097 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aa09a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_103aa09d:;
  /* 103aa09d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103aa0a2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 103aa0a5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103aa0a7 not edx */
  EDX = (~(EDX));
  /* 103aa0a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aa0ac mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 103aa0af and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 103aa0b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aa0b4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 103aa0b7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_103aa0ba:;
  /* 103aa0ba mov esp, ebp */
  ESP = (EBP);
  /* 103aa0bc pop ebp */
  EBP = (pop32());
  /* 103aa0bd ret  */
  ESPCHK(0x103a9ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0c0 @ 0x103aa0c0 (1515 bytes, 489 insns) */
void f_103aa0c0(void) {
  FTRACE(0x103aa0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103aa0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 103aa0c1 mov ebp, esp */
  EBP = (ESP);
  /* 103aa0c3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aa0c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103aa0c9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa0cc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 103aa0ce mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 103aa0d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aa0d4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 103aa0d7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 103aa0da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aa0dd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103aa0e0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aa0e3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103aa0e6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103aa0e9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 103aa0ec mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103aa0ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103aa0f2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103aa0f8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa0fb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 103aa102 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103aa105 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103aa108 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aa10b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 103aa10e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103aa111 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103aa113 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aa116 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 103aa119 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103aa11c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa11f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 103aa122 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103aa125 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103aa127 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 103aa12a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103aa12d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aa130 jle 0x103aa3e6 */
  if ((C.zf||C.sf!=C.of)) goto L_103aa3e6;
  /* 103aa136 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103aa139 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 103aa13c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103aa13e jne 0x103aa14b */
  if (!C.zf) goto L_103aa14b;
  /* 103aa140 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 103aa143 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa146 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aa149 jle 0x103aa152 */
  if ((C.zf||C.sf!=C.of)) goto L_103aa152;
L_103aa14b:;
  /* 103aa14b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103aa14d jmp 0x103aa6a7 */
  goto L_103aa6a7;
L_103aa152:;
  /* 103aa152 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103aa155 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 103aa158 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aa15b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 103aa15e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aa162 jbe 0x103aa16b */
  if ((C.cf||C.zf)) goto L_103aa16b;
  /* 103aa164 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_103aa16b:;
  /* 103aa16b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103aa16e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103aa171 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 103aa174 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aa177 jne 0x103aa24d */
  if (!C.zf) goto L_103aa24d;
  /* 103aa17d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aa181 jae 0x103aa1e2 */
  if (!C.cf) goto L_103aa1e2;
  /* 103aa183 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103aa188 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103aa18b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103aa18d not edx */
  EDX = (~(EDX));
  /* 103aa18f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103aa192 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa195 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 103aa199 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103aa19b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103aa19e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa1a1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 103aa1a5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa1a8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa1ab mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 103aa1ae sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 103aa1b1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa1b4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa1b7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 103aa1ba mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa1bd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa1c0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 103aa1c4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103aa1c6 jne 0x103aa1e0 */
  if (!C.zf) goto L_103aa1e0;
  /* 103aa1c8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103aa1cd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103aa1d0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103aa1d2 not edx */
  EDX = (~(EDX));
  /* 103aa1d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aa1d7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103aa1d9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 103aa1db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aa1de mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_103aa1e0:;
  /* 103aa1e0 jmp 0x103aa24d */
  goto L_103aa24d;
L_103aa1e2:;
  /* 103aa1e2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103aa1e5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aa1e8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103aa1ed shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103aa1ef not eax */
  EAX = (~(EAX));
  /* 103aa1f1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103aa1f4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa1f7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 103aa1fe and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103aa200 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103aa203 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa206 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 103aa20d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa210 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa213 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 103aa216 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 103aa219 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa21c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa21f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 103aa222 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa225 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa228 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 103aa22c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103aa22e jne 0x103aa24d */
  if (!C.zf) goto L_103aa24d;
  /* 103aa230 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103aa233 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aa236 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103aa23b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103aa23d not eax */
  EAX = (~(EAX));
  /* 103aa23f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aa242 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103aa245 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 103aa247 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aa24a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_103aa24d:;
  /* 103aa24d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103aa250 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 103aa253 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103aa256 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103aa259 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 103aa25c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103aa25f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 103aa262 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103aa265 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 103aa268 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 103aa26b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103aa26e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa271 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aa274 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 103aa277 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aa27b jle 0x103aa3c7 */
  if ((C.zf||C.sf!=C.of)) goto L_103aa3c7;
  /* 103aa281 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103aa284 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa287 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 103aa28a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103aa28d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 103aa290 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aa293 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 103aa296 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aa29a jbe 0x103aa2a3 */
  if ((C.cf||C.zf)) goto L_103aa2a3;
  /* 103aa29c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_103aa2a3:;
  /* 103aa2a3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 103aa2a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103aa2a9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 103aa2ac mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 103aa2af mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103aa2b2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103aa2b5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103aa2b8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 103aa2bb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103aa2be mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103aa2c1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 103aa2c4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103aa2c7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103aa2ca mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 103aa2cd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103aa2d0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103aa2d3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103aa2d6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 103aa2d9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103aa2dc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103aa2df mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 103aa2e2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aa2e5 jne 0x103aa3b3 */
  if (!C.zf) goto L_103aa3b3;
  /* 103aa2eb cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aa2ef jae 0x103aa34c */
  if (!C.cf) goto L_103aa34c;
  /* 103aa2f1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa2f4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa2f7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 103aa2fb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa2fe add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa301 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 103aa304 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 103aa307 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa30a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa30d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 103aa310 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103aa312 jne 0x103aa32a */
  if (!C.zf) goto L_103aa32a;
  /* 103aa314 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103aa319 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103aa31c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103aa31e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aa321 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103aa323 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 103aa325 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aa328 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_103aa32a:;
  /* 103aa32a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103aa32f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103aa332 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103aa334 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103aa337 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa33a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 103aa33e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103aa340 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103aa343 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa346 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 103aa34a jmp 0x103aa3b3 */
  goto L_103aa3b3;
L_103aa34c:;
  /* 103aa34c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa34f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa352 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 103aa356 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa359 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa35c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 103aa35f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 103aa362 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa365 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa368 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 103aa36b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103aa36d jne 0x103aa38a */
  if (!C.zf) goto L_103aa38a;
  /* 103aa36f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103aa372 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aa375 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103aa37a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103aa37c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aa37f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103aa382 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 103aa384 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aa387 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_103aa38a:;
  /* 103aa38a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103aa38d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aa390 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103aa395 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103aa397 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103aa39a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa39d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 103aa3a4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103aa3a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103aa3a9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa3ac mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_103aa3b3:;
  /* 103aa3b3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103aa3b6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103aa3b9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 103aa3bb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103aa3be add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa3c1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103aa3c4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_103aa3c7:;
  /* 103aa3c7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103aa3ca add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa3cd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103aa3d0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103aa3d2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103aa3d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa3d8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103aa3db add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa3de mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 103aa3e1 jmp 0x103aa6a2 */
  goto L_103aa6a2;
L_103aa3e6:;
  /* 103aa3e6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103aa3e9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aa3ec jge 0x103aa6a2 */
  if ((C.sf==C.of)) goto L_103aa6a2;
  /* 103aa3f2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103aa3f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa3f8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103aa3fb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 103aa3fd mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103aa400 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa403 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103aa406 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa409 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 103aa40c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103aa40f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa412 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 103aa415 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103aa418 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aa41b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 103aa41e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 103aa421 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 103aa424 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aa427 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 103aa42a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aa42e jbe 0x103aa437 */
  if ((C.cf||C.zf)) goto L_103aa437;
  /* 103aa430 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_103aa437:;
  /* 103aa437 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103aa43a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 103aa43d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103aa43f jne 0x103aa580 */
  if (!C.zf) goto L_103aa580;
  /* 103aa445 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103aa448 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 103aa44b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aa44e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 103aa451 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aa455 jbe 0x103aa45e */
  if ((C.cf||C.zf)) goto L_103aa45e;
  /* 103aa457 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_103aa45e:;
  /* 103aa45e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103aa461 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103aa464 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 103aa467 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aa46a jne 0x103aa540 */
  if (!C.zf) goto L_103aa540;
  /* 103aa470 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aa474 jae 0x103aa4d5 */
  if (!C.cf) goto L_103aa4d5;
  /* 103aa476 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103aa47b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103aa47e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103aa480 not edx */
  EDX = (~(EDX));
  /* 103aa482 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103aa485 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa488 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 103aa48c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103aa48e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103aa491 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa494 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 103aa498 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa49b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa49e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 103aa4a1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 103aa4a4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa4a7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa4aa mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 103aa4ad mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa4b0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa4b3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 103aa4b7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103aa4b9 jne 0x103aa4d3 */
  if (!C.zf) goto L_103aa4d3;
  /* 103aa4bb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103aa4c0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103aa4c3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103aa4c5 not edx */
  EDX = (~(EDX));
  /* 103aa4c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aa4ca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103aa4cc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 103aa4ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aa4d1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_103aa4d3:;
  /* 103aa4d3 jmp 0x103aa540 */
  goto L_103aa540;
L_103aa4d5:;
  /* 103aa4d5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103aa4d8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aa4db mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103aa4e0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103aa4e2 not eax */
  EAX = (~(EAX));
  /* 103aa4e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103aa4e7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa4ea mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 103aa4f1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103aa4f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103aa4f6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa4f9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 103aa500 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa503 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa506 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 103aa509 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 103aa50c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa50f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa512 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 103aa515 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa518 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa51b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 103aa51f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103aa521 jne 0x103aa540 */
  if (!C.zf) goto L_103aa540;
  /* 103aa523 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103aa526 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aa529 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103aa52e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103aa530 not eax */
  EAX = (~(EAX));
  /* 103aa532 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aa535 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103aa538 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 103aa53a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aa53d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_103aa540:;
  /* 103aa540 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103aa543 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 103aa546 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103aa549 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103aa54c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 103aa54f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103aa552 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 103aa555 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103aa558 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 103aa55b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 103aa55e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103aa561 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa564 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 103aa567 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 103aa56a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 103aa56d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aa570 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 103aa573 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aa577 jbe 0x103aa580 */
  if ((C.cf||C.zf)) goto L_103aa580;
  /* 103aa579 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_103aa580:;
  /* 103aa580 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103aa583 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103aa586 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 103aa589 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 103aa58c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103aa58f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103aa592 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103aa595 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 103aa598 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103aa59b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103aa59e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 103aa5a1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103aa5a4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103aa5a7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 103aa5aa mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103aa5ad mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103aa5b0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103aa5b3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 103aa5b6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103aa5b9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103aa5bc mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 103aa5bf cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aa5c2 jne 0x103aa68e */
  if (!C.zf) goto L_103aa68e;
  /* 103aa5c8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aa5cc jae 0x103aa628 */
  if (!C.cf) goto L_103aa628;
  /* 103aa5ce mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa5d1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa5d4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 103aa5d8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa5db add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa5de mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 103aa5e1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 103aa5e3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa5e6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa5e9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 103aa5ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103aa5ee jne 0x103aa606 */
  if (!C.zf) goto L_103aa606;
  /* 103aa5f0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103aa5f5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103aa5f8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103aa5fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aa5fd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103aa5ff or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 103aa601 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aa604 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_103aa606:;
  /* 103aa606 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103aa60b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103aa60e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103aa610 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103aa613 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa616 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 103aa61a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103aa61c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103aa61f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa622 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 103aa626 jmp 0x103aa68e */
  goto L_103aa68e;
L_103aa628:;
  /* 103aa628 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa62b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa62e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 103aa632 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa635 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa638 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 103aa63b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 103aa63d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa640 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa643 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 103aa646 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103aa648 jne 0x103aa665 */
  if (!C.zf) goto L_103aa665;
  /* 103aa64a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103aa64d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aa650 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 103aa655 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103aa657 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aa65a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103aa65d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 103aa65f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aa662 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_103aa665:;
  /* 103aa665 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103aa668 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aa66b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103aa670 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103aa672 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103aa675 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa678 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 103aa67f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103aa681 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103aa684 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103aa687 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_103aa68e:;
  /* 103aa68e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103aa691 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 103aa694 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 103aa696 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103aa699 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa69c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103aa69f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_103aa6a2:;
  /* 103aa6a2 mov eax, 1 */
  EAX = (0x1u);
L_103aa6a7:;
  /* 103aa6a7 mov esp, ebp */
  ESP = (EBP);
  /* 103aa6a9 pop ebp */
  EBP = (pop32());
  /* 103aa6aa ret  */
  ESPCHK(0x103aa0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6b0 @ 0x103aa6b0 (304 bytes, 79 insns) */
void f_103aa6b0(void) {
  FTRACE(0x103aa6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103aa6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 103aa6b1 mov ebp, esp */
  EBP = (ESP);
  /* 103aa6b3 push ecx */
  push32((uint32_t)(ECX));
  /* 103aa6b4 cmp dword ptr [0x103d1f80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d1f80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aa6bb je 0x103aa7dc */
  if (C.zf) goto L_103aa7dc;
  /* 103aa6c1 mov eax, dword ptr [0x103d1f78] */
  EAX = (r32((uint32_t)(0x103d1f78)));
  /* 103aa6c6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 103aa6c9 mov ecx, dword ptr [0x103d1f80] */
  ECX = (r32((uint32_t)(0x103d1f80)));
  /* 103aa6cf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103aa6d2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa6d4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103aa6d7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 103aa6dc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 103aa6e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103aa6e4 push eax */
  push32((uint32_t)(EAX));
  /* 103aa6e5 call dword ptr [0x103d336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d336c))), 0x103aa6ebu);
  /* 103aa6eb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103aa6f0 mov ecx, dword ptr [0x103d1f78] */
  ECX = (r32((uint32_t)(0x103d1f78)));
  /* 103aa6f6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103aa6f8 mov eax, dword ptr [0x103d1f80] */
  EAX = (r32((uint32_t)(0x103d1f80)));
  /* 103aa6fd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 103aa700 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 103aa702 mov edx, dword ptr [0x103d1f80] */
  EDX = (r32((uint32_t)(0x103d1f80)));
  /* 103aa708 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 103aa70b mov eax, dword ptr [0x103d1f80] */
  EAX = (r32((uint32_t)(0x103d1f80)));
  /* 103aa710 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103aa713 mov edx, dword ptr [0x103d1f78] */
  EDX = (r32((uint32_t)(0x103d1f78)));
  /* 103aa719 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 103aa724 mov eax, dword ptr [0x103d1f80] */
  EAX = (r32((uint32_t)(0x103d1f80)));
  /* 103aa729 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103aa72c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 103aa72f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 103aa732 mov eax, dword ptr [0x103d1f80] */
  EAX = (r32((uint32_t)(0x103d1f80)));
  /* 103aa737 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103aa73a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 103aa73d mov edx, dword ptr [0x103d1f80] */
  EDX = (r32((uint32_t)(0x103d1f80)));
  /* 103aa743 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 103aa746 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 103aa74a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103aa74c jne 0x103aa762 */
  if (!C.zf) goto L_103aa762;
  /* 103aa74e mov edx, dword ptr [0x103d1f80] */
  EDX = (r32((uint32_t)(0x103d1f80)));
  /* 103aa754 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 103aa757 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 103aa759 mov ecx, dword ptr [0x103d1f80] */
  ECX = (r32((uint32_t)(0x103d1f80)));
  /* 103aa75f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_103aa762:;
  /* 103aa762 mov edx, dword ptr [0x103d1f80] */
  EDX = (r32((uint32_t)(0x103d1f80)));
  /* 103aa768 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aa76c jne 0x103aa7d2 */
  if (!C.zf) goto L_103aa7d2;
  /* 103aa76e cmp dword ptr [0x103d1f84], 1 */
  { uint32_t _a=(r32((uint32_t)(0x103d1f84))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aa775 jle 0x103aa7d2 */
  if ((C.zf||C.sf!=C.of)) goto L_103aa7d2;
  /* 103aa777 mov eax, dword ptr [0x103d1f80] */
  EAX = (r32((uint32_t)(0x103d1f80)));
  /* 103aa77c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103aa77f push ecx */
  push32((uint32_t)(ECX));
  /* 103aa780 push 0 */
  push32((uint32_t)(0x0u));
  /* 103aa782 mov edx, dword ptr [0x103d1f8c] */
  EDX = (r32((uint32_t)(0x103d1f8c)));
  /* 103aa788 push edx */
  push32((uint32_t)(EDX));
  /* 103aa789 call dword ptr [0x103d33b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d33b4))), 0x103aa78fu);
  /* 103aa78f mov eax, dword ptr [0x103d1f84] */
  EAX = (r32((uint32_t)(0x103d1f84)));
  /* 103aa794 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103aa797 mov ecx, dword ptr [0x103d1f88] */
  ECX = (r32((uint32_t)(0x103d1f88)));
  /* 103aa79d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa79f mov edx, dword ptr [0x103d1f80] */
  EDX = (r32((uint32_t)(0x103d1f80)));
  /* 103aa7a5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa7a8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aa7aa push ecx */
  push32((uint32_t)(ECX));
  /* 103aa7ab mov eax, dword ptr [0x103d1f80] */
  EAX = (r32((uint32_t)(0x103d1f80)));
  /* 103aa7b0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa7b3 push eax */
  push32((uint32_t)(EAX));
  /* 103aa7b4 mov ecx, dword ptr [0x103d1f80] */
  ECX = (r32((uint32_t)(0x103d1f80)));
  /* 103aa7ba push ecx */
  push32((uint32_t)(ECX));
  /* 103aa7bb call 0x103acde0 */
  push32(0x103aa7c0u); f_103acde0();
  /* 103aa7c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa7c3 mov edx, dword ptr [0x103d1f84] */
  EDX = (r32((uint32_t)(0x103d1f84)));
  /* 103aa7c9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aa7cc mov dword ptr [0x103d1f84], edx */
  w32((uint32_t)(0x103d1f84), (EDX));
L_103aa7d2:;
  /* 103aa7d2 mov dword ptr [0x103d1f80], 0 */
  w32((uint32_t)(0x103d1f80), (0x0u));
L_103aa7dc:;
  /* 103aa7dc mov esp, ebp */
  ESP = (EBP);
  /* 103aa7de pop ebp */
  EBP = (pop32());
  /* 103aa7df ret  */
  ESPCHK(0x103aa6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7e0 @ 0x103aa7e0 (1565 bytes, 343 insns) */
void f_103aa7e0(void) {
  FTRACE(0x103aa7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103aa7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 103aa7e1 mov ebp, esp */
  EBP = (ESP);
  /* 103aa7e3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aa7e9 mov eax, dword ptr [0x103d1f84] */
  EAX = (r32((uint32_t)(0x103d1f84)));
  /* 103aa7ee imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103aa7f1 push eax */
  push32((uint32_t)(EAX));
  /* 103aa7f2 mov ecx, dword ptr [0x103d1f88] */
  ECX = (r32((uint32_t)(0x103d1f88)));
  /* 103aa7f8 push ecx */
  push32((uint32_t)(ECX));
  /* 103aa7f9 call dword ptr [0x103d3390] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3390))), 0x103aa7ffu);
  /* 103aa7ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103aa801 je 0x103aa80b */
  if (C.zf) goto L_103aa80b;
  /* 103aa803 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103aa806 jmp 0x103aadf9 */
  goto L_103aadf9;
L_103aa80b:;
  /* 103aa80b mov edx, dword ptr [0x103d1f88] */
  EDX = (r32((uint32_t)(0x103d1f88)));
  /* 103aa811 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 103aa817 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 103aa821 jmp 0x103aa832 */
  goto L_103aa832;
L_103aa823:;
  /* 103aa823 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 103aa829 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa82c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_103aa832:;
  /* 103aa832 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 103aa838 cmp ecx, dword ptr [0x103d1f84] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x103d1f84))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aa83e jge 0x103aadf7 */
  if ((C.sf==C.of)) goto L_103aadf7;
  /* 103aa844 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 103aa84a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 103aa84d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 103aa853 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 103aa858 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 103aa85e push ecx */
  push32((uint32_t)(ECX));
  /* 103aa85f call dword ptr [0x103d3390] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3390))), 0x103aa865u);
  /* 103aa865 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103aa867 je 0x103aa873 */
  if (C.zf) goto L_103aa873;
  /* 103aa869 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 103aa86e jmp 0x103aadf9 */
  goto L_103aadf9;
L_103aa873:;
  /* 103aa873 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 103aa879 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 103aa87c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 103aa882 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 103aa888 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa88e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 103aa891 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 103aa897 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 103aa89a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103aa89d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 103aa8a7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 103aa8b1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 103aa8b8 jmp 0x103aa8c3 */
  goto L_103aa8c3;
L_103aa8ba:;
  /* 103aa8ba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103aa8bd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa8c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_103aa8c3:;
  /* 103aa8c3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aa8c7 jge 0x103aadbb */
  if ((C.sf==C.of)) goto L_103aadbb;
  /* 103aa8cd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 103aa8d7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 103aa8e1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 103aa8eb mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 103aa8f5 jmp 0x103aa906 */
  goto L_103aa906;
L_103aa8f7:;
  /* 103aa8f7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 103aa8fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa900 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_103aa906:;
  /* 103aa906 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aa90d jge 0x103aa922 */
  if ((C.sf==C.of)) goto L_103aa922;
  /* 103aa90f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 103aa915 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 103aa920 jmp 0x103aa8f7 */
  goto L_103aa8f7;
L_103aa922:;
  /* 103aa922 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aa926 jl 0x103aad5d */
  if ((C.sf!=C.of)) goto L_103aad5d;
  /* 103aa92c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 103aa931 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 103aa937 push ecx */
  push32((uint32_t)(ECX));
  /* 103aa938 call dword ptr [0x103d3390] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3390))), 0x103aa93eu);
  /* 103aa93e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103aa940 je 0x103aa94c */
  if (C.zf) goto L_103aa94c;
  /* 103aa942 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 103aa947 jmp 0x103aadf9 */
  goto L_103aadf9;
L_103aa94c:;
  /* 103aa94c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 103aa952 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103aa955 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 103aa95f jmp 0x103aa970 */
  goto L_103aa970;
L_103aa961:;
  /* 103aa961 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 103aa967 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa96a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_103aa970:;
  /* 103aa970 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aa977 jge 0x103aaaf4 */
  if ((C.sf==C.of)) goto L_103aaaf4;
  /* 103aa97d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103aa980 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa983 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 103aa989 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 103aa98f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aa995 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 103aa99b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 103aa9a1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aa9a5 jne 0x103aa9b2 */
  if (!C.zf) goto L_103aa9b2;
  /* 103aa9a7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 103aa9ad cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aa9b0 je 0x103aa9bc */
  if (C.zf) goto L_103aa9bc;
L_103aa9b2:;
  /* 103aa9b2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 103aa9b7 jmp 0x103aadf9 */
  goto L_103aadf9;
L_103aa9bc:;
  /* 103aa9bc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 103aa9c2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103aa9c4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 103aa9ca mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 103aa9d0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 103aa9d6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 103aa9dc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 103aa9df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103aa9e1 je 0x103aaa19 */
  if (C.zf) goto L_103aaa19;
  /* 103aa9e3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 103aa9e9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aa9ec mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 103aa9f2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aa9fc jle 0x103aaa08 */
  if ((C.zf||C.sf!=C.of)) goto L_103aaa08;
  /* 103aa9fe mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 103aaa03 jmp 0x103aadf9 */
  goto L_103aadf9;
L_103aaa08:;
  /* 103aaa08 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 103aaa0e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aaa11 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 103aaa17 jmp 0x103aaa5b */
  goto L_103aaa5b;
L_103aaa19:;
  /* 103aaa19 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 103aaa1f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 103aaa22 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aaa25 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 103aaa2b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aaa32 jle 0x103aaa3e */
  if ((C.zf||C.sf!=C.of)) goto L_103aaa3e;
  /* 103aaa34 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_103aaa3e:;
  /* 103aaa3e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 103aaa44 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 103aaa4b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aaa4e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 103aaa54 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_103aaa5b:;
  /* 103aaa5b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aaa62 jl 0x103aaa7d */
  if ((C.sf!=C.of)) goto L_103aaa7d;
  /* 103aaa64 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 103aaa6a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 103aaa6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103aaa6f jne 0x103aaa7d */
  if (!C.zf) goto L_103aaa7d;
  /* 103aaa71 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aaa7b jle 0x103aaa87 */
  if ((C.zf||C.sf!=C.of)) goto L_103aaa87;
L_103aaa7d:;
  /* 103aaa7d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 103aaa82 jmp 0x103aadf9 */
  goto L_103aadf9;
L_103aaa87:;
  /* 103aaa87 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 103aaa8d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aaa93 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 103aaa96 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aaa9c je 0x103aaaa8 */
  if (C.zf) goto L_103aaaa8;
  /* 103aaa9e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 103aaaa3 jmp 0x103aadf9 */
  goto L_103aadf9;
L_103aaaa8:;
  /* 103aaaa8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 103aaaae add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aaab4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 103aaaba mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 103aaac0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aaac6 jb 0x103aa9bc */
  if (C.cf) goto L_103aa9bc;
  /* 103aaacc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 103aaad2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aaad8 je 0x103aaae4 */
  if (C.zf) goto L_103aaae4;
  /* 103aaada mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 103aaadf jmp 0x103aadf9 */
  goto L_103aadf9;
L_103aaae4:;
  /* 103aaae4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103aaae7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aaaec mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103aaaef jmp 0x103aa961 */
  goto L_103aa961;
L_103aaaf4:;
  /* 103aaaf4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103aaaf7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103aaaf9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aaaff je 0x103aab0b */
  if (C.zf) goto L_103aab0b;
  /* 103aab01 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 103aab06 jmp 0x103aadf9 */
  goto L_103aadf9;
L_103aab0b:;
  /* 103aab0b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103aab0e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 103aab14 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 103aab1b jmp 0x103aab26 */
  goto L_103aab26;
L_103aab1d:;
  /* 103aab1d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103aab20 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aab23 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_103aab26:;
  /* 103aab26 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aab2a jge 0x103aad5d */
  if ((C.sf==C.of)) goto L_103aad5d;
  /* 103aab30 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 103aab3a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 103aab40 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_103aab46:;
  /* 103aab46 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 103aab4c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103aab4f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 103aab55 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 103aab5b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aab61 je 0x103aac8a */
  if (C.zf) goto L_103aac8a;
  /* 103aab67 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103aab6a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 103aab70 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aab77 je 0x103aac8a */
  if (C.zf) goto L_103aac8a;
  /* 103aab7d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 103aab83 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aab89 jb 0x103aab9e */
  if (C.cf) goto L_103aab9e;
  /* 103aab8b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 103aab91 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aab96 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aab9c jb 0x103aaba8 */
  if (C.cf) goto L_103aaba8;
L_103aab9e:;
  /* 103aab9e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 103aaba3 jmp 0x103aadf9 */
  goto L_103aadf9;
L_103aaba8:;
  /* 103aaba8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 103aabae and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 103aabb4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 103aabba mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 103aabc0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aabc3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 103aabc6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103aabc9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aabce mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_103aabd4:;
  /* 103aabd4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103aabd7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aabdd je 0x103aabfe */
  if (C.zf) goto L_103aabfe;
  /* 103aabdf mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103aabe2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aabe8 jne 0x103aabec */
  if (!C.zf) goto L_103aabec;
  /* 103aabea jmp 0x103aabfe */
  goto L_103aabfe;
L_103aabec:;
  /* 103aabec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103aabef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103aabf1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 103aabf4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103aabf7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aabf9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 103aabfc jmp 0x103aabd4 */
  goto L_103aabd4;
L_103aabfe:;
  /* 103aabfe mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103aac01 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aac07 jne 0x103aac13 */
  if (!C.zf) goto L_103aac13;
  /* 103aac09 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 103aac0e jmp 0x103aadf9 */
  goto L_103aadf9;
L_103aac13:;
  /* 103aac13 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 103aac19 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103aac1b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 103aac1e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aac21 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 103aac27 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aac2e jle 0x103aac3a */
  if ((C.zf||C.sf!=C.of)) goto L_103aac3a;
  /* 103aac30 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_103aac3a:;
  /* 103aac3a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 103aac40 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aac43 je 0x103aac4f */
  if (C.zf) goto L_103aac4f;
  /* 103aac45 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 103aac4a jmp 0x103aadf9 */
  goto L_103aadf9;
L_103aac4f:;
  /* 103aac4f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 103aac55 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 103aac58 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aac5e je 0x103aac6a */
  if (C.zf) goto L_103aac6a;
  /* 103aac60 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 103aac65 jmp 0x103aadf9 */
  goto L_103aadf9;
L_103aac6a:;
  /* 103aac6a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 103aac70 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 103aac76 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 103aac7c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aac7f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 103aac85 jmp 0x103aab46 */
  goto L_103aab46;
L_103aac8a:;
  /* 103aac8a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aac91 je 0x103aad01 */
  if (C.zf) goto L_103aad01;
  /* 103aac93 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aac97 jge 0x103aaccb */
  if ((C.sf==C.of)) goto L_103aaccb;
  /* 103aac99 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103aac9e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103aaca1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103aaca3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 103aaca9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103aacab mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 103aacb1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103aacb6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103aacb9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103aacbb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 103aacc1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103aacc3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 103aacc9 jmp 0x103aad01 */
  goto L_103aad01;
L_103aaccb:;
  /* 103aaccb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103aacce sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aacd1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103aacd6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103aacd8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 103aacde or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103aace0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 103aace6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103aace9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aacec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103aacf1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103aacf3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 103aacf9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103aacfb mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_103aad01:;
  /* 103aad01 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 103aad07 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103aad0a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aad10 jne 0x103aad24 */
  if (!C.zf) goto L_103aad24;
  /* 103aad12 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103aad15 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 103aad1b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aad22 je 0x103aad2e */
  if (C.zf) goto L_103aad2e;
L_103aad24:;
  /* 103aad24 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 103aad29 jmp 0x103aadf9 */
  goto L_103aadf9;
L_103aad2e:;
  /* 103aad2e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 103aad34 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 103aad37 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aad3d je 0x103aad49 */
  if (C.zf) goto L_103aad49;
  /* 103aad3f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 103aad44 jmp 0x103aadf9 */
  goto L_103aadf9;
L_103aad49:;
  /* 103aad49 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 103aad4f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aad52 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 103aad58 jmp 0x103aab1d */
  goto L_103aab1d;
L_103aad5d:;
  /* 103aad5d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103aad60 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 103aad66 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 103aad6c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aad70 jne 0x103aad8a */
  if (!C.zf) goto L_103aad8a;
  /* 103aad72 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103aad75 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 103aad7b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 103aad81 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aad88 je 0x103aad91 */
  if (C.zf) goto L_103aad91;
L_103aad8a:;
  /* 103aad8a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 103aad8f jmp 0x103aadf9 */
  goto L_103aadf9;
L_103aad91:;
  /* 103aad91 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 103aad97 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aad9d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 103aada3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103aada6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aadab mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 103aadae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103aadb1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 103aadb3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103aadb6 jmp 0x103aa8ba */
  goto L_103aa8ba;
L_103aadbb:;
  /* 103aadbb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 103aadc1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 103aadc7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aadc9 jne 0x103aaddc */
  if (!C.zf) goto L_103aaddc;
  /* 103aadcb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 103aadd1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 103aadd7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aadda je 0x103aade3 */
  if (C.zf) goto L_103aade3;
L_103aaddc:;
  /* 103aaddc mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 103aade1 jmp 0x103aadf9 */
  goto L_103aadf9;
L_103aade3:;
  /* 103aade3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 103aade9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aadec mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 103aadf2 jmp 0x103aa823 */
  goto L_103aa823;
L_103aadf7:;
  /* 103aadf7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103aadf9:;
  /* 103aadf9 mov esp, ebp */
  ESP = (EBP);
  /* 103aadfb pop ebp */
  EBP = (pop32());
  /* 103aadfc ret  */
  ESPCHK(0x103aa7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae00 @ 0x103aae00 (250 bytes, 92 insns) */
void f_103aae00(void) {
  FTRACE(0x103aae00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103aae00 push ebp */
  push32((uint32_t)(EBP));
  /* 103aae01 mov ebp, esp */
  EBP = (ESP);
  /* 103aae03 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aae06 push ebx */
  push32((uint32_t)(EBX));
  /* 103aae07 push esi */
  push32((uint32_t)(ESI));
  /* 103aae08 push edi */
  push32((uint32_t)(EDI));
  /* 103aae09 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 103aae0c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 103aae0f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 103aae12 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_103aae15:;
  /* 103aae15 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aae19 jne 0x103aae39 */
  if (!C.zf) goto L_103aae39;
  /* 103aae1b push 0x103cc0e8 */
  push32((uint32_t)(0x103cc0e8u));
  /* 103aae20 push 0 */
  push32((uint32_t)(0x0u));
  /* 103aae22 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 103aae24 push 0x103cc0dc */
  push32((uint32_t)(0x103cc0dcu));
  /* 103aae29 push 2 */
  push32((uint32_t)(0x2u));
  /* 103aae2b call 0x103a3fb0 */
  push32(0x103aae30u); f_103a3fb0();
  /* 103aae30 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aae33 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aae36 jne 0x103aae39 */
  if (!C.zf) goto L_103aae39;
  /* 103aae38 int3  */
  x86_unimpl("int3 @ 0x103aae38");
L_103aae39:;
  /* 103aae39 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103aae3b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103aae3d jne 0x103aae15 */
  if (!C.zf) goto L_103aae15;
L_103aae3f:;
  /* 103aae3f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aae43 jne 0x103aae63 */
  if (!C.zf) goto L_103aae63;
  /* 103aae45 push 0x103cc0cc */
  push32((uint32_t)(0x103cc0ccu));
  /* 103aae4a push 0 */
  push32((uint32_t)(0x0u));
  /* 103aae4c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 103aae4e push 0x103cc0dc */
  push32((uint32_t)(0x103cc0dcu));
  /* 103aae53 push 2 */
  push32((uint32_t)(0x2u));
  /* 103aae55 call 0x103a3fb0 */
  push32(0x103aae5au); f_103a3fb0();
  /* 103aae5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aae5d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aae60 jne 0x103aae63 */
  if (!C.zf) goto L_103aae63;
  /* 103aae62 int3  */
  x86_unimpl("int3 @ 0x103aae62");
L_103aae63:;
  /* 103aae63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103aae65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103aae67 jne 0x103aae3f */
  if (!C.zf) goto L_103aae3f;
  /* 103aae69 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103aae6c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 103aae73 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103aae76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aae79 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 103aae7c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103aae7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aae82 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 103aae84 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103aae87 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 103aae8e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103aae91 push ecx */
  push32((uint32_t)(ECX));
  /* 103aae92 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103aae95 push edx */
  push32((uint32_t)(EDX));
  /* 103aae96 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103aae99 push eax */
  push32((uint32_t)(EAX));
  /* 103aae9a call 0x103abe80 */
  push32(0x103aae9fu); f_103abe80();
  /* 103aae9f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aaea2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 103aaea5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103aaea8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103aaeab sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aaeae mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103aaeb1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 103aaeb4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103aaeb7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aaebb jl 0x103aaedf */
  if ((C.sf!=C.of)) goto L_103aaedf;
  /* 103aaebd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103aaec0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103aaec2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 103aaec5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103aaec7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 103aaecd mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 103aaed0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103aaed3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103aaed5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aaed8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103aaedb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103aaedd jmp 0x103aaef0 */
  goto L_103aaef0;
L_103aaedf:;
  /* 103aaedf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103aaee2 push edx */
  push32((uint32_t)(EDX));
  /* 103aaee3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103aaee5 call 0x103abc00 */
  push32(0x103aaeeau); f_103abc00();
  /* 103aaeea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aaeed mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_103aaef0:;
  /* 103aaef0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103aaef3 pop edi */
  EDI = (pop32());
  /* 103aaef4 pop esi */
  ESI = (pop32());
  /* 103aaef5 pop ebx */
  EBX = (pop32());
  /* 103aaef6 mov esp, ebp */
  ESP = (EBP);
  /* 103aaef8 pop ebp */
  EBP = (pop32());
  /* 103aaef9 ret  */
  ESPCHK(0x103aae00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af00 @ 0x103aaf00 (183 bytes, 58 insns) */
void f_103aaf00(void) {
  FTRACE(0x103aaf00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103aaf00 push ebp */
  push32((uint32_t)(EBP));
  /* 103aaf01 mov ebp, esp */
  EBP = (ESP);
  /* 103aaf03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aaf06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aaf09 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aaf0c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aaf11 ja 0x103aaf2a */
  if ((!C.cf&&!C.zf)) goto L_103aaf2a;
  /* 103aaf13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aaf16 mov edx, dword ptr [0x103cec98] */
  EDX = (r32((uint32_t)(0x103cec98)));
  /* 103aaf1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103aaf1e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 103aaf22 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 103aaf25 jmp 0x103aafb3 */
  goto L_103aafb3;
L_103aaf2a:;
  /* 103aaf2a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aaf2d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 103aaf30 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 103aaf36 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 103aaf3c mov edx, dword ptr [0x103cec98] */
  EDX = (r32((uint32_t)(0x103cec98)));
  /* 103aaf42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103aaf44 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 103aaf48 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 103aaf4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103aaf4f je 0x103aaf73 */
  if (C.zf) goto L_103aaf73;
  /* 103aaf51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aaf54 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 103aaf57 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 103aaf5d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 103aaf60 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 103aaf63 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 103aaf66 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 103aaf6a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 103aaf71 jmp 0x103aaf84 */
  goto L_103aaf84;
L_103aaf73:;
  /* 103aaf73 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 103aaf76 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 103aaf79 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 103aaf7d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_103aaf84:;
  /* 103aaf84 push 1 */
  push32((uint32_t)(0x1u));
  /* 103aaf86 push 0 */
  push32((uint32_t)(0x0u));
  /* 103aaf88 push 0 */
  push32((uint32_t)(0x0u));
  /* 103aaf8a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 103aaf8d push ecx */
  push32((uint32_t)(ECX));
  /* 103aaf8e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103aaf91 push edx */
  push32((uint32_t)(EDX));
  /* 103aaf92 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 103aaf95 push eax */
  push32((uint32_t)(EAX));
  /* 103aaf96 push 1 */
  push32((uint32_t)(0x1u));
  /* 103aaf98 call 0x103ad120 */
  push32(0x103aaf9du); f_103ad120();
  /* 103aaf9d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aafa0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103aafa2 jne 0x103aafa8 */
  if (!C.zf) goto L_103aafa8;
  /* 103aafa4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103aafa6 jmp 0x103aafb3 */
  goto L_103aafb3;
L_103aafa8:;
  /* 103aafa8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103aafab and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103aafb0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_103aafb3:;
  /* 103aafb3 mov esp, ebp */
  ESP = (EBP);
  /* 103aafb5 pop ebp */
  EBP = (pop32());
  /* 103aafb6 ret  */
  ESPCHK(0x103aaf00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000afc0 @ 0x103aafc0 (836 bytes, 238 insns) */
void f_103aafc0(void) {
  FTRACE(0x103aafc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103aafc0 push ebp */
  push32((uint32_t)(EBP));
  /* 103aafc1 mov ebp, esp */
  EBP = (ESP);
  /* 103aafc3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aafc6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 103aafc8 call 0x103a88f0 */
  push32(0x103aafcdu); f_103a88f0();
  /* 103aafcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aafd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aafd3 push eax */
  push32((uint32_t)(EAX));
  /* 103aafd4 call 0x103ab310 */
  push32(0x103aafd9u); f_103ab310();
  /* 103aafd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aafdc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103aafdf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aafe2 cmp ecx, dword ptr [0x103d1cc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x103d1cc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aafe8 jne 0x103aaffb */
  if (!C.zf) goto L_103aaffb;
  /* 103aafea push 0x19 */
  push32((uint32_t)(0x19u));
  /* 103aafec call 0x103a8990 */
  push32(0x103aaff1u); f_103a8990();
  /* 103aaff1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aaff4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103aaff6 jmp 0x103ab300 */
  goto L_103ab300;
L_103aaffb:;
  /* 103aaffb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aafff jne 0x103ab01c */
  if (!C.zf) goto L_103ab01c;
  /* 103ab001 call 0x103ab3f0 */
  push32(0x103ab006u); f_103ab3f0();
  /* 103ab006 call 0x103ab470 */
  push32(0x103ab00bu); f_103ab470();
  /* 103ab00b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 103ab00d call 0x103a8990 */
  push32(0x103ab012u); f_103a8990();
  /* 103ab012 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ab015 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ab017 jmp 0x103ab300 */
  goto L_103ab300;
L_103ab01c:;
  /* 103ab01c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103ab023 jmp 0x103ab02e */
  goto L_103ab02e;
L_103ab025:;
  /* 103ab025 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ab028 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ab02b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_103ab02e:;
  /* 103ab02e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab032 jae 0x103ab17f */
  if (!C.cf) goto L_103ab17f;
  /* 103ab038 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ab03b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ab03e mov ecx, dword ptr [eax + 0x103ceeb8] */
  ECX = (r32((uint32_t)(EAX + 0x103ceeb8)));
  /* 103ab044 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab047 jne 0x103ab17a */
  if (!C.zf) goto L_103ab17a;
  /* 103ab04d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 103ab054 jmp 0x103ab05f */
  goto L_103ab05f;
L_103ab056:;
  /* 103ab056 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103ab059 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ab05c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_103ab05f:;
  /* 103ab05f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab066 jae 0x103ab074 */
  if (!C.cf) goto L_103ab074;
  /* 103ab068 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103ab06b mov byte ptr [eax + 0x103d1e60], 0 */
  w8((uint32_t)(EAX + 0x103d1e60), (0x0u));
  /* 103ab072 jmp 0x103ab056 */
  goto L_103ab056;
L_103ab074:;
  /* 103ab074 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 103ab07b jmp 0x103ab086 */
  goto L_103ab086;
L_103ab07d:;
  /* 103ab07d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ab080 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ab083 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_103ab086:;
  /* 103ab086 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab08a jae 0x103ab107 */
  if (!C.cf) goto L_103ab107;
  /* 103ab08c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ab08f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ab092 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ab095 lea ecx, [edx + eax*8 + 0x103ceec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x103ceec8));
  /* 103ab09c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103ab09f jmp 0x103ab0aa */
  goto L_103ab0aa;
L_103ab0a1:;
  /* 103ab0a1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ab0a4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ab0a7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_103ab0aa:;
  /* 103ab0aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ab0ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103ab0af mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103ab0b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ab0b3 je 0x103ab102 */
  if (C.zf) goto L_103ab102;
  /* 103ab0b5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ab0b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ab0ba mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 103ab0bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ab0bf je 0x103ab102 */
  if (C.zf) goto L_103ab102;
  /* 103ab0c1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ab0c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103ab0c6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103ab0c8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 103ab0cb jmp 0x103ab0d6 */
  goto L_103ab0d6;
L_103ab0cd:;
  /* 103ab0cd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103ab0d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ab0d3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_103ab0d6:;
  /* 103ab0d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ab0d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103ab0db mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 103ab0de cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab0e1 ja 0x103ab100 */
  if ((!C.cf&&!C.zf)) goto L_103ab100;
  /* 103ab0e3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103ab0e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ab0e9 mov dl, byte ptr [eax + 0x103d1e61] */
  DL = (r8((uint32_t)(EAX + 0x103d1e61)));
  /* 103ab0ef or dl, byte ptr [ecx + 0x103ceeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x103ceeb0))); DL = (_r); fl_logic(_r,8); }
  /* 103ab0f5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103ab0f8 mov byte ptr [eax + 0x103d1e61], dl */
  w8((uint32_t)(EAX + 0x103d1e61), (DL));
  /* 103ab0fe jmp 0x103ab0cd */
  goto L_103ab0cd;
L_103ab100:;
  /* 103ab100 jmp 0x103ab0a1 */
  goto L_103ab0a1;
L_103ab102:;
  /* 103ab102 jmp 0x103ab07d */
  goto L_103ab07d;
L_103ab107:;
  /* 103ab107 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ab10a mov dword ptr [0x103d1cc4], ecx */
  w32((uint32_t)(0x103d1cc4), (ECX));
  /* 103ab110 mov dword ptr [0x103d1d4c], 1 */
  w32((uint32_t)(0x103d1d4c), (0x1u));
  /* 103ab11a mov edx, dword ptr [0x103d1cc4] */
  EDX = (r32((uint32_t)(0x103d1cc4)));
  /* 103ab120 push edx */
  push32((uint32_t)(EDX));
  /* 103ab121 call 0x103ab370 */
  push32(0x103ab126u); f_103ab370();
  /* 103ab126 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ab129 mov dword ptr [0x103d1f64], eax */
  w32((uint32_t)(0x103d1f64), (EAX));
  /* 103ab12e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 103ab135 jmp 0x103ab140 */
  goto L_103ab140;
L_103ab137:;
  /* 103ab137 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ab13a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ab13d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_103ab140:;
  /* 103ab140 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab144 jae 0x103ab164 */
  if (!C.cf) goto L_103ab164;
  /* 103ab146 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ab149 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ab14c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ab14f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ab152 mov cx, word ptr [ecx + eax*2 + 0x103ceebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x103ceebc)));
  /* 103ab15a mov word ptr [edx*2 + 0x103d1d40], cx */
  w16((uint32_t)(EDX*2 + 0x103d1d40), (CX));
  /* 103ab162 jmp 0x103ab137 */
  goto L_103ab137;
L_103ab164:;
  /* 103ab164 call 0x103ab470 */
  push32(0x103ab169u); f_103ab470();
  /* 103ab169 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 103ab16b call 0x103a8990 */
  push32(0x103ab170u); f_103a8990();
  /* 103ab170 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ab173 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ab175 jmp 0x103ab300 */
  goto L_103ab300;
L_103ab17a:;
  /* 103ab17a jmp 0x103ab025 */
  goto L_103ab025;
L_103ab17f:;
  /* 103ab17f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 103ab182 push edx */
  push32((uint32_t)(EDX));
  /* 103ab183 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ab186 push eax */
  push32((uint32_t)(EAX));
  /* 103ab187 call dword ptr [0x103d3300] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3300))), 0x103ab18du);
  /* 103ab18d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab190 jne 0x103ab2d2 */
  if (!C.zf) goto L_103ab2d2;
  /* 103ab196 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 103ab19d jmp 0x103ab1a8 */
  goto L_103ab1a8;
L_103ab19f:;
  /* 103ab19f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103ab1a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ab1a5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_103ab1a8:;
  /* 103ab1a8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab1af jae 0x103ab1bd */
  if (!C.cf) goto L_103ab1bd;
  /* 103ab1b1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103ab1b4 mov byte ptr [edx + 0x103d1e60], 0 */
  w8((uint32_t)(EDX + 0x103d1e60), (0x0u));
  /* 103ab1bb jmp 0x103ab19f */
  goto L_103ab19f;
L_103ab1bd:;
  /* 103ab1bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ab1c0 mov dword ptr [0x103d1cc4], eax */
  w32((uint32_t)(0x103d1cc4), (EAX));
  /* 103ab1c5 mov dword ptr [0x103d1f64], 0 */
  w32((uint32_t)(0x103d1f64), (0x0u));
  /* 103ab1cf cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab1d3 jbe 0x103ab28e */
  if ((C.cf||C.zf)) goto L_103ab28e;
  /* 103ab1d9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 103ab1dc mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 103ab1df jmp 0x103ab1ea */
  goto L_103ab1ea;
L_103ab1e1:;
  /* 103ab1e1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 103ab1e4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ab1e7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_103ab1ea:;
  /* 103ab1ea mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103ab1ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103ab1ef mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103ab1f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ab1f3 je 0x103ab23c */
  if (C.zf) goto L_103ab23c;
  /* 103ab1f5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 103ab1f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ab1fa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 103ab1fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ab1ff je 0x103ab23c */
  if (C.zf) goto L_103ab23c;
  /* 103ab201 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 103ab204 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103ab206 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103ab208 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 103ab20b jmp 0x103ab216 */
  goto L_103ab216;
L_103ab20d:;
  /* 103ab20d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103ab210 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ab213 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_103ab216:;
  /* 103ab216 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 103ab219 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103ab21b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 103ab21e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab221 ja 0x103ab23a */
  if ((!C.cf&&!C.zf)) goto L_103ab23a;
  /* 103ab223 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103ab226 mov cl, byte ptr [eax + 0x103d1e61] */
  CL = (r8((uint32_t)(EAX + 0x103d1e61)));
  /* 103ab22c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 103ab22f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103ab232 mov byte ptr [edx + 0x103d1e61], cl */
  w8((uint32_t)(EDX + 0x103d1e61), (CL));
  /* 103ab238 jmp 0x103ab20d */
  goto L_103ab20d;
L_103ab23a:;
  /* 103ab23a jmp 0x103ab1e1 */
  goto L_103ab1e1;
L_103ab23c:;
  /* 103ab23c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 103ab243 jmp 0x103ab24e */
  goto L_103ab24e;
L_103ab245:;
  /* 103ab245 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103ab248 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ab24b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_103ab24e:;
  /* 103ab24e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab255 jae 0x103ab26e */
  if (!C.cf) goto L_103ab26e;
  /* 103ab257 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103ab25a mov dl, byte ptr [ecx + 0x103d1e61] */
  DL = (r8((uint32_t)(ECX + 0x103d1e61)));
  /* 103ab260 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 103ab263 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103ab266 mov byte ptr [eax + 0x103d1e61], dl */
  w8((uint32_t)(EAX + 0x103d1e61), (DL));
  /* 103ab26c jmp 0x103ab245 */
  goto L_103ab245;
L_103ab26e:;
  /* 103ab26e mov ecx, dword ptr [0x103d1cc4] */
  ECX = (r32((uint32_t)(0x103d1cc4)));
  /* 103ab274 push ecx */
  push32((uint32_t)(ECX));
  /* 103ab275 call 0x103ab370 */
  push32(0x103ab27au); f_103ab370();
  /* 103ab27a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ab27d mov dword ptr [0x103d1f64], eax */
  w32((uint32_t)(0x103d1f64), (EAX));
  /* 103ab282 mov dword ptr [0x103d1d4c], 1 */
  w32((uint32_t)(0x103d1d4c), (0x1u));
  /* 103ab28c jmp 0x103ab298 */
  goto L_103ab298;
L_103ab28e:;
  /* 103ab28e mov dword ptr [0x103d1d4c], 0 */
  w32((uint32_t)(0x103d1d4c), (0x0u));
L_103ab298:;
  /* 103ab298 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 103ab29f jmp 0x103ab2aa */
  goto L_103ab2aa;
L_103ab2a1:;
  /* 103ab2a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ab2a4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ab2a7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_103ab2aa:;
  /* 103ab2aa cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab2ae jae 0x103ab2bf */
  if (!C.cf) goto L_103ab2bf;
  /* 103ab2b0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ab2b3 mov word ptr [eax*2 + 0x103d1d40], 0 */
  w16((uint32_t)(EAX*2 + 0x103d1d40), (0x0u));
  /* 103ab2bd jmp 0x103ab2a1 */
  goto L_103ab2a1;
L_103ab2bf:;
  /* 103ab2bf call 0x103ab470 */
  push32(0x103ab2c4u); f_103ab470();
  /* 103ab2c4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 103ab2c6 call 0x103a8990 */
  push32(0x103ab2cbu); f_103a8990();
  /* 103ab2cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ab2ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ab2d0 jmp 0x103ab300 */
  goto L_103ab300;
L_103ab2d2:;
  /* 103ab2d2 cmp dword ptr [0x103d07e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d07e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab2d9 je 0x103ab2f3 */
  if (C.zf) goto L_103ab2f3;
  /* 103ab2db call 0x103ab3f0 */
  push32(0x103ab2e0u); f_103ab3f0();
  /* 103ab2e0 call 0x103ab470 */
  push32(0x103ab2e5u); f_103ab470();
  /* 103ab2e5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 103ab2e7 call 0x103a8990 */
  push32(0x103ab2ecu); f_103a8990();
  /* 103ab2ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ab2ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ab2f1 jmp 0x103ab300 */
  goto L_103ab300;
L_103ab2f3:;
  /* 103ab2f3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 103ab2f5 call 0x103a8990 */
  push32(0x103ab2fau); f_103a8990();
  /* 103ab2fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ab2fd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_103ab300:;
  /* 103ab300 mov esp, ebp */
  ESP = (EBP);
  /* 103ab302 pop ebp */
  EBP = (pop32());
  /* 103ab303 ret  */
  ESPCHK(0x103aafc0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x103ab310 (89 bytes, 21 insns) */
void f_103ab310(void) {
  FTRACE(0x103ab310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ab310 push ebp */
  push32((uint32_t)(EBP));
  /* 103ab311 mov ebp, esp */
  EBP = (ESP);
  /* 103ab313 mov dword ptr [0x103d07e0], 0 */
  w32((uint32_t)(0x103d07e0), (0x0u));
  /* 103ab31d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab321 jne 0x103ab335 */
  if (!C.zf) goto L_103ab335;
  /* 103ab323 mov dword ptr [0x103d07e0], 1 */
  w32((uint32_t)(0x103d07e0), (0x1u));
  /* 103ab32d call dword ptr [0x103d32f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32f8))), 0x103ab333u);
  /* 103ab333 jmp 0x103ab367 */
  goto L_103ab367;
L_103ab335:;
  /* 103ab335 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab339 jne 0x103ab34d */
  if (!C.zf) goto L_103ab34d;
  /* 103ab33b mov dword ptr [0x103d07e0], 1 */
  w32((uint32_t)(0x103d07e0), (0x1u));
  /* 103ab345 call dword ptr [0x103d32fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32fc))), 0x103ab34bu);
  /* 103ab34b jmp 0x103ab367 */
  goto L_103ab367;
L_103ab34d:;
  /* 103ab34d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab351 jne 0x103ab364 */
  if (!C.zf) goto L_103ab364;
  /* 103ab353 mov dword ptr [0x103d07e0], 1 */
  w32((uint32_t)(0x103d07e0), (0x1u));
  /* 103ab35d mov eax, dword ptr [0x103d0800] */
  EAX = (r32((uint32_t)(0x103d0800)));
  /* 103ab362 jmp 0x103ab367 */
  goto L_103ab367;
L_103ab364:;
  /* 103ab364 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_103ab367:;
  /* 103ab367 pop ebp */
  EBP = (pop32());
  /* 103ab368 ret  */
  ESPCHK(0x103ab310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b370 @ 0x103ab370 (80 bytes, 26 insns) [1 switch table(s)] */
void f_103ab370(void) {
  FTRACE(0x103ab370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ab370 push ebp */
  push32((uint32_t)(EBP));
  /* 103ab371 mov ebp, esp */
  EBP = (ESP);
  /* 103ab373 push ecx */
  push32((uint32_t)(ECX));
  /* 103ab374 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ab377 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103ab37a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ab37d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ab383 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103ab386 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab38a ja 0x103ab3ba */
  if ((!C.cf&&!C.zf)) goto L_103ab3ba;
  /* 103ab38c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ab38f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103ab391 mov dl, byte ptr [eax + 0x103ab3d4] */
  DL = (r8((uint32_t)(EAX + 0x103ab3d4)));
  /* 103ab397 jmp dword ptr [edx*4 + 0x103ab3c0] */
  switch (EDX) {
    case 0: goto L_103ab39e;
    case 1: goto L_103ab3a5;
    case 2: goto L_103ab3ac;
    case 3: goto L_103ab3b3;
    case 4: goto L_103ab3ba;
    default: x86_unimpl("switch@0x103ab397 out of table"); return;
  }
L_103ab39e:;
  /* 103ab39e mov eax, 0x411 */
  EAX = (0x411u);
  /* 103ab3a3 jmp 0x103ab3bc */
  goto L_103ab3bc;
L_103ab3a5:;
  /* 103ab3a5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 103ab3aa jmp 0x103ab3bc */
  goto L_103ab3bc;
L_103ab3ac:;
  /* 103ab3ac mov eax, 0x412 */
  EAX = (0x412u);
  /* 103ab3b1 jmp 0x103ab3bc */
  goto L_103ab3bc;
L_103ab3b3:;
  /* 103ab3b3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 103ab3b8 jmp 0x103ab3bc */
  goto L_103ab3bc;
L_103ab3ba:;
  /* 103ab3ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103ab3bc:;
  /* 103ab3bc mov esp, ebp */
  ESP = (EBP);
  /* 103ab3be pop ebp */
  EBP = (pop32());
  /* 103ab3bf ret  */
  ESPCHK(0x103ab370u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x103ab3f0 (116 bytes, 29 insns) */
void f_103ab3f0(void) {
  FTRACE(0x103ab3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ab3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 103ab3f1 mov ebp, esp */
  EBP = (ESP);
  /* 103ab3f3 push ecx */
  push32((uint32_t)(ECX));
  /* 103ab3f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103ab3fb jmp 0x103ab406 */
  goto L_103ab406;
L_103ab3fd:;
  /* 103ab3fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ab400 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ab403 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103ab406:;
  /* 103ab406 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab40d jge 0x103ab41b */
  if ((C.sf==C.of)) goto L_103ab41b;
  /* 103ab40f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ab412 mov byte ptr [ecx + 0x103d1e60], 0 */
  w8((uint32_t)(ECX + 0x103d1e60), (0x0u));
  /* 103ab419 jmp 0x103ab3fd */
  goto L_103ab3fd;
L_103ab41b:;
  /* 103ab41b mov dword ptr [0x103d1cc4], 0 */
  w32((uint32_t)(0x103d1cc4), (0x0u));
  /* 103ab425 mov dword ptr [0x103d1d4c], 0 */
  w32((uint32_t)(0x103d1d4c), (0x0u));
  /* 103ab42f mov dword ptr [0x103d1f64], 0 */
  w32((uint32_t)(0x103d1f64), (0x0u));
  /* 103ab439 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103ab440 jmp 0x103ab44b */
  goto L_103ab44b;
L_103ab442:;
  /* 103ab442 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ab445 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ab448 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_103ab44b:;
  /* 103ab44b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab44f jge 0x103ab460 */
  if ((C.sf==C.of)) goto L_103ab460;
  /* 103ab451 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ab454 mov word ptr [eax*2 + 0x103d1d40], 0 */
  w16((uint32_t)(EAX*2 + 0x103d1d40), (0x0u));
  /* 103ab45e jmp 0x103ab442 */
  goto L_103ab442;
L_103ab460:;
  /* 103ab460 mov esp, ebp */
  ESP = (EBP);
  /* 103ab462 pop ebp */
  EBP = (pop32());
  /* 103ab463 ret  */
  ESPCHK(0x103ab3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b470 @ 0x103ab470 (770 bytes, 175 insns) */
void f_103ab470(void) {
  FTRACE(0x103ab470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ab470 push ebp */
  push32((uint32_t)(EBP));
  /* 103ab471 mov ebp, esp */
  EBP = (ESP);
  /* 103ab473 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ab479 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 103ab47f push eax */
  push32((uint32_t)(EAX));
  /* 103ab480 mov ecx, dword ptr [0x103d1cc4] */
  ECX = (r32((uint32_t)(0x103d1cc4)));
  /* 103ab486 push ecx */
  push32((uint32_t)(ECX));
  /* 103ab487 call dword ptr [0x103d3300] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3300))), 0x103ab48du);
  /* 103ab48d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab490 jne 0x103ab6a9 */
  if (!C.zf) goto L_103ab6a9;
  /* 103ab496 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 103ab4a0 jmp 0x103ab4b1 */
  goto L_103ab4b1;
L_103ab4a2:;
  /* 103ab4a2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ab4a8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ab4ab mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_103ab4b1:;
  /* 103ab4b1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab4bb jae 0x103ab4d2 */
  if (!C.cf) goto L_103ab4d2;
  /* 103ab4bd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ab4c3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 103ab4c9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 103ab4d0 jmp 0x103ab4a2 */
  goto L_103ab4a2;
L_103ab4d2:;
  /* 103ab4d2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 103ab4d9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 103ab4df mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103ab4e2 jmp 0x103ab4ed */
  goto L_103ab4ed;
L_103ab4e4:;
  /* 103ab4e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ab4e7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ab4ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103ab4ed:;
  /* 103ab4ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ab4f0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103ab4f2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103ab4f4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ab4f6 je 0x103ab538 */
  if (C.zf) goto L_103ab538;
  /* 103ab4f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ab4fb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103ab4fd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103ab4ff mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 103ab505 jmp 0x103ab516 */
  goto L_103ab516;
L_103ab507:;
  /* 103ab507 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ab50d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ab510 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_103ab516:;
  /* 103ab516 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ab519 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103ab51b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 103ab51e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab524 ja 0x103ab536 */
  if ((!C.cf&&!C.zf)) goto L_103ab536;
  /* 103ab526 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ab52c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 103ab534 jmp 0x103ab507 */
  goto L_103ab507;
L_103ab536:;
  /* 103ab536 jmp 0x103ab4e4 */
  goto L_103ab4e4;
L_103ab538:;
  /* 103ab538 push 0 */
  push32((uint32_t)(0x0u));
  /* 103ab53a mov eax, dword ptr [0x103d1f64] */
  EAX = (r32((uint32_t)(0x103d1f64)));
  /* 103ab53f push eax */
  push32((uint32_t)(EAX));
  /* 103ab540 mov ecx, dword ptr [0x103d1cc4] */
  ECX = (r32((uint32_t)(0x103d1cc4)));
  /* 103ab546 push ecx */
  push32((uint32_t)(ECX));
  /* 103ab547 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 103ab54d push edx */
  push32((uint32_t)(EDX));
  /* 103ab54e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 103ab553 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 103ab559 push eax */
  push32((uint32_t)(EAX));
  /* 103ab55a push 1 */
  push32((uint32_t)(0x1u));
  /* 103ab55c call 0x103ad120 */
  push32(0x103ab561u); f_103ad120();
  /* 103ab561 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ab564 push 0 */
  push32((uint32_t)(0x0u));
  /* 103ab566 mov ecx, dword ptr [0x103d1cc4] */
  ECX = (r32((uint32_t)(0x103d1cc4)));
  /* 103ab56c push ecx */
  push32((uint32_t)(ECX));
  /* 103ab56d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 103ab572 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 103ab578 push edx */
  push32((uint32_t)(EDX));
  /* 103ab579 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 103ab57e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 103ab584 push eax */
  push32((uint32_t)(EAX));
  /* 103ab585 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 103ab58a mov ecx, dword ptr [0x103d1f64] */
  ECX = (r32((uint32_t)(0x103d1f64)));
  /* 103ab590 push ecx */
  push32((uint32_t)(ECX));
  /* 103ab591 call 0x103ad2e0 */
  push32(0x103ab596u); f_103ad2e0();
  /* 103ab596 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ab599 push 0 */
  push32((uint32_t)(0x0u));
  /* 103ab59b mov edx, dword ptr [0x103d1cc4] */
  EDX = (r32((uint32_t)(0x103d1cc4)));
  /* 103ab5a1 push edx */
  push32((uint32_t)(EDX));
  /* 103ab5a2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 103ab5a7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 103ab5ad push eax */
  push32((uint32_t)(EAX));
  /* 103ab5ae push 0x100 */
  push32((uint32_t)(0x100u));
  /* 103ab5b3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 103ab5b9 push ecx */
  push32((uint32_t)(ECX));
  /* 103ab5ba push 0x200 */
  push32((uint32_t)(0x200u));
  /* 103ab5bf mov edx, dword ptr [0x103d1f64] */
  EDX = (r32((uint32_t)(0x103d1f64)));
  /* 103ab5c5 push edx */
  push32((uint32_t)(EDX));
  /* 103ab5c6 call 0x103ad2e0 */
  push32(0x103ab5cbu); f_103ad2e0();
  /* 103ab5cb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ab5ce mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 103ab5d8 jmp 0x103ab5e9 */
  goto L_103ab5e9;
L_103ab5da:;
  /* 103ab5da mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ab5e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ab5e3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_103ab5e9:;
  /* 103ab5e9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab5f3 jae 0x103ab6a4 */
  if (!C.cf) goto L_103ab6a4;
  /* 103ab5f9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ab5ff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103ab601 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 103ab609 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 103ab60c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ab60e je 0x103ab646 */
  if (C.zf) goto L_103ab646;
  /* 103ab610 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ab616 mov cl, byte ptr [eax + 0x103d1e61] */
  CL = (r8((uint32_t)(EAX + 0x103d1e61)));
  /* 103ab61c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 103ab61f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ab625 mov byte ptr [edx + 0x103d1e61], cl */
  w8((uint32_t)(EDX + 0x103d1e61), (CL));
  /* 103ab62b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ab631 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ab637 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 103ab63e mov byte ptr [eax + 0x103d1d60], dl */
  w8((uint32_t)(EAX + 0x103d1d60), (DL));
  /* 103ab644 jmp 0x103ab69f */
  goto L_103ab69f;
L_103ab646:;
  /* 103ab646 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ab64c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103ab64e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 103ab656 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 103ab659 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ab65b je 0x103ab692 */
  if (C.zf) goto L_103ab692;
  /* 103ab65d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ab663 mov al, byte ptr [edx + 0x103d1e61] */
  AL = (r8((uint32_t)(EDX + 0x103d1e61)));
  /* 103ab669 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 103ab66b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ab671 mov byte ptr [ecx + 0x103d1e61], al */
  w8((uint32_t)(ECX + 0x103d1e61), (AL));
  /* 103ab677 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ab67d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ab683 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 103ab68a mov byte ptr [edx + 0x103d1d60], cl */
  w8((uint32_t)(EDX + 0x103d1d60), (CL));
  /* 103ab690 jmp 0x103ab69f */
  goto L_103ab69f;
L_103ab692:;
  /* 103ab692 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ab698 mov byte ptr [edx + 0x103d1d60], 0 */
  w8((uint32_t)(EDX + 0x103d1d60), (0x0u));
L_103ab69f:;
  /* 103ab69f jmp 0x103ab5da */
  goto L_103ab5da;
L_103ab6a4:;
  /* 103ab6a4 jmp 0x103ab76e */
  goto L_103ab76e;
L_103ab6a9:;
  /* 103ab6a9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 103ab6b3 jmp 0x103ab6c4 */
  goto L_103ab6c4;
L_103ab6b5:;
  /* 103ab6b5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ab6bb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ab6be mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_103ab6c4:;
  /* 103ab6c4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab6ce jae 0x103ab76e */
  if (!C.cf) goto L_103ab76e;
  /* 103ab6d4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab6db jb 0x103ab718 */
  if (C.cf) goto L_103ab718;
  /* 103ab6dd cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab6e4 ja 0x103ab718 */
  if ((!C.cf&&!C.zf)) goto L_103ab718;
  /* 103ab6e6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ab6ec mov dl, byte ptr [ecx + 0x103d1e61] */
  DL = (r8((uint32_t)(ECX + 0x103d1e61)));
  /* 103ab6f2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 103ab6f5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ab6fb mov byte ptr [eax + 0x103d1e61], dl */
  w8((uint32_t)(EAX + 0x103d1e61), (DL));
  /* 103ab701 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ab707 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ab70a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ab710 mov byte ptr [edx + 0x103d1d60], cl */
  w8((uint32_t)(EDX + 0x103d1d60), (CL));
  /* 103ab716 jmp 0x103ab769 */
  goto L_103ab769;
L_103ab718:;
  /* 103ab718 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab71f jb 0x103ab75c */
  if (C.cf) goto L_103ab75c;
  /* 103ab721 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab728 ja 0x103ab75c */
  if ((!C.cf&&!C.zf)) goto L_103ab75c;
  /* 103ab72a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ab730 mov cl, byte ptr [eax + 0x103d1e61] */
  CL = (r8((uint32_t)(EAX + 0x103d1e61)));
  /* 103ab736 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 103ab739 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ab73f mov byte ptr [edx + 0x103d1e61], cl */
  w8((uint32_t)(EDX + 0x103d1e61), (CL));
  /* 103ab745 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ab74b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ab74e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ab754 mov byte ptr [ecx + 0x103d1d60], al */
  w8((uint32_t)(ECX + 0x103d1d60), (AL));
  /* 103ab75a jmp 0x103ab769 */
  goto L_103ab769;
L_103ab75c:;
  /* 103ab75c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 103ab762 mov byte ptr [edx + 0x103d1d60], 0 */
  w8((uint32_t)(EDX + 0x103d1d60), (0x0u));
L_103ab769:;
  /* 103ab769 jmp 0x103ab6b5 */
  goto L_103ab6b5;
L_103ab76e:;
  /* 103ab76e mov esp, ebp */
  ESP = (EBP);
  /* 103ab770 pop ebp */
  EBP = (pop32());
  /* 103ab771 ret  */
  ESPCHK(0x103ab470u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b780 @ 0x103ab780 (23 bytes, 9 insns) */
void f_103ab780(void) {
  FTRACE(0x103ab780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ab780 push ebp */
  push32((uint32_t)(EBP));
  /* 103ab781 mov ebp, esp */
  EBP = (ESP);
  /* 103ab783 cmp dword ptr [0x103d1d4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d1d4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab78a je 0x103ab793 */
  if (C.zf) goto L_103ab793;
  /* 103ab78c mov eax, dword ptr [0x103d1cc4] */
  EAX = (r32((uint32_t)(0x103d1cc4)));
  /* 103ab791 jmp 0x103ab795 */
  goto L_103ab795;
L_103ab793:;
  /* 103ab793 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103ab795:;
  /* 103ab795 pop ebp */
  EBP = (pop32());
  /* 103ab796 ret  */
  ESPCHK(0x103ab780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7a0 @ 0x103ab7a0 (34 bytes, 10 insns) */
void f_103ab7a0(void) {
  FTRACE(0x103ab7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ab7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 103ab7a1 mov ebp, esp */
  EBP = (ESP);
  /* 103ab7a3 cmp dword ptr [0x103d2110], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d2110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab7aa jne 0x103ab7c0 */
  if (!C.zf) goto L_103ab7c0;
  /* 103ab7ac push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 103ab7ae call 0x103aafc0 */
  push32(0x103ab7b3u); f_103aafc0();
  /* 103ab7b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ab7b6 mov dword ptr [0x103d2110], 1 */
  w32((uint32_t)(0x103d2110), (0x1u));
L_103ab7c0:;
  /* 103ab7c0 pop ebp */
  EBP = (pop32());
  /* 103ab7c1 ret  */
  ESPCHK(0x103ab7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7d0 @ 0x103ab7d0 (664 bytes, 261 insns) [15 switch table(s)] */
void f_103ab7d0(void) {
  FTRACE(0x103ab7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ab7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 103ab7d1 mov ebp, esp */
  EBP = (ESP);
  /* 103ab7d3 push edi */
  push32((uint32_t)(EDI));
  /* 103ab7d4 push esi */
  push32((uint32_t)(ESI));
  /* 103ab7d5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 103ab7d8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103ab7db mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 103ab7de mov eax, ecx */
  EAX = (ECX);
  /* 103ab7e0 mov edx, ecx */
  EDX = (ECX);
  /* 103ab7e2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ab7e4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab7e6 jbe 0x103ab7f0 */
  if ((C.cf||C.zf)) goto L_103ab7f0;
  /* 103ab7e8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab7ea jb 0x103ab968 */
  if (C.cf) goto L_103ab968;
L_103ab7f0:;
  /* 103ab7f0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 103ab7f6 jne 0x103ab80c */
  if (!C.zf) goto L_103ab80c;
  /* 103ab7f8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103ab7fb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 103ab7fe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab801 jb 0x103ab82c */
  if (C.cf) goto L_103ab82c;
  /* 103ab803 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103ab805 jmp dword ptr [edx*4 + 0x103ab918] */
  switch (EDX) {
    case 0: goto L_103ab928;
    case 1: goto L_103ab930;
    case 2: goto L_103ab93c;
    case 3: goto L_103ab950;
    default: x86_unimpl("switch@0x103ab805 out of table"); return;
  }
L_103ab80c:;
  /* 103ab80c mov eax, edi */
  EAX = (EDI);
  /* 103ab80e mov edx, 3 */
  EDX = (0x3u);
  /* 103ab813 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ab816 jb 0x103ab824 */
  if (C.cf) goto L_103ab824;
  /* 103ab818 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 103ab81b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ab81d jmp dword ptr [eax*4 + 0x103ab830] */
  switch (EAX) {
    case 1: goto L_103ab840;
    case 2: goto L_103ab86c;
    case 3: goto L_103ab890;
    default: x86_unimpl("switch@0x103ab81d out of table"); return;
  }
L_103ab824:;
  /* 103ab824 jmp dword ptr [ecx*4 + 0x103ab928] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x103ab928)))); return;
  /* 103ab82b nop  */
  /* nop */
L_103ab82c:;
  /* 103ab82c jmp dword ptr [ecx*4 + 0x103ab8ac] */
  switch (ECX) {
    case 0: goto L_103ab90f;
    case 1: goto L_103ab8fc;
    case 2: goto L_103ab8f4;
    case 3: goto L_103ab8ec;
    case 4: goto L_103ab8e4;
    case 5: goto L_103ab8dc;
    case 6: goto L_103ab8d4;
    case 7: goto L_103ab8cc;
    default: x86_unimpl("switch@0x103ab82c out of table"); return;
  }
  /* 103ab833 nop  */
  /* nop */
L_103ab840:;
  /* 103ab840 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103ab842 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103ab844 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103ab846 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103ab849 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103ab84c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103ab84f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103ab852 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103ab855 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103ab858 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 103ab85b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab85e jb 0x103ab82c */
  if (C.cf) goto L_103ab82c;
  /* 103ab860 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103ab862 jmp dword ptr [edx*4 + 0x103ab918] */
  switch (EDX) {
    case 0: goto L_103ab928;
    case 1: goto L_103ab930;
    case 2: goto L_103ab93c;
    case 3: goto L_103ab950;
    default: x86_unimpl("switch@0x103ab862 out of table"); return;
  }
  /* 103ab869 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103ab86c:;
  /* 103ab86c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103ab86e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103ab870 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103ab872 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103ab875 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103ab878 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103ab87b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103ab87e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 103ab881 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab884 jb 0x103ab82c */
  if (C.cf) goto L_103ab82c;
  /* 103ab886 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103ab888 jmp dword ptr [edx*4 + 0x103ab918] */
  switch (EDX) {
    case 0: goto L_103ab928;
    case 1: goto L_103ab930;
    case 2: goto L_103ab93c;
    case 3: goto L_103ab950;
    default: x86_unimpl("switch@0x103ab888 out of table"); return;
  }
  /* 103ab88f nop  */
  /* nop */
L_103ab890:;
  /* 103ab890 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103ab892 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103ab894 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103ab896 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 103ab897 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103ab89a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103ab89b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab89e jb 0x103ab82c */
  if (C.cf) goto L_103ab82c;
  /* 103ab8a0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103ab8a2 jmp dword ptr [edx*4 + 0x103ab918] */
  switch (EDX) {
    case 0: goto L_103ab928;
    case 1: goto L_103ab930;
    case 2: goto L_103ab93c;
    case 3: goto L_103ab950;
    default: x86_unimpl("switch@0x103ab8a2 out of table"); return;
  }
  /* 103ab8a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103ab8cc:;
  /* 103ab8cc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 103ab8d0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_103ab8d4:;
  /* 103ab8d4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 103ab8d8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_103ab8dc:;
  /* 103ab8dc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 103ab8e0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_103ab8e4:;
  /* 103ab8e4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 103ab8e8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_103ab8ec:;
  /* 103ab8ec mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 103ab8f0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_103ab8f4:;
  /* 103ab8f4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 103ab8f8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_103ab8fc:;
  /* 103ab8fc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 103ab900 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 103ab904 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 103ab90b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103ab90d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_103ab90f:;
  /* 103ab90f jmp dword ptr [edx*4 + 0x103ab918] */
  switch (EDX) {
    case 0: goto L_103ab928;
    case 1: goto L_103ab930;
    case 2: goto L_103ab93c;
    case 3: goto L_103ab950;
    default: x86_unimpl("switch@0x103ab90f out of table"); return;
  }
  /* 103ab916 mov edi, edi */
  EDI = (EDI);
L_103ab928:;
  /* 103ab928 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ab92b pop esi */
  ESI = (pop32());
  /* 103ab92c pop edi */
  EDI = (pop32());
  /* 103ab92d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103ab92e ret  */
  ESPCHK(0x103ab7d0u, _esp0);
  ESP += 4; return;
  /* 103ab92f nop  */
  /* nop */
L_103ab930:;
  /* 103ab930 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103ab932 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103ab934 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ab937 pop esi */
  ESI = (pop32());
  /* 103ab938 pop edi */
  EDI = (pop32());
  /* 103ab939 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103ab93a ret  */
  ESPCHK(0x103ab7d0u, _esp0);
  ESP += 4; return;
  /* 103ab93b nop  */
  /* nop */
L_103ab93c:;
  /* 103ab93c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103ab93e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103ab940 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103ab943 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103ab946 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ab949 pop esi */
  ESI = (pop32());
  /* 103ab94a pop edi */
  EDI = (pop32());
  /* 103ab94b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103ab94c ret  */
  ESPCHK(0x103ab7d0u, _esp0);
  ESP += 4; return;
  /* 103ab94d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103ab950:;
  /* 103ab950 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103ab952 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103ab954 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103ab957 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103ab95a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103ab95d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103ab960 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ab963 pop esi */
  ESI = (pop32());
  /* 103ab964 pop edi */
  EDI = (pop32());
  /* 103ab965 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103ab966 ret  */
  ESPCHK(0x103ab7d0u, _esp0);
  ESP += 4; return;
  /* 103ab967 nop  */
  /* nop */
L_103ab968:;
  /* 103ab968 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 103ab96c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 103ab970 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 103ab976 jne 0x103ab99c */
  if (!C.zf) goto L_103ab99c;
  /* 103ab978 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103ab97b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 103ab97e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab981 jb 0x103ab990 */
  if (C.cf) goto L_103ab990;
  /* 103ab983 std  */
  C.df=1;
  /* 103ab984 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103ab986 cld  */
  C.df=0;
  /* 103ab987 jmp dword ptr [edx*4 + 0x103abab0] */
  switch (EDX) {
    case 0: goto L_103abac0;
    case 1: goto L_103abac8;
    case 2: goto L_103abad8;
    case 3: goto L_103abaec;
    default: x86_unimpl("switch@0x103ab987 out of table"); return;
  }
  /* 103ab98e mov edi, edi */
  EDI = (EDI);
L_103ab990:;
  /* 103ab990 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 103ab992 jmp dword ptr [ecx*4 + 0x103aba60] */
  switch (ECX) {
    case 0: goto L_103abaa7;
    default: x86_unimpl("switch@0x103ab992 out of table"); return;
  }
  /* 103ab999 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103ab99c:;
  /* 103ab99c mov eax, edi */
  EAX = (EDI);
  /* 103ab99e mov edx, 3 */
  EDX = (0x3u);
  /* 103ab9a3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab9a6 jb 0x103ab9b4 */
  if (C.cf) goto L_103ab9b4;
  /* 103ab9a8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 103ab9ab sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ab9ad jmp dword ptr [eax*4 + 0x103ab9b8] */
  switch (EAX) {
    case 1: goto L_103ab9c8;
    case 2: goto L_103ab9e8;
    case 3: goto L_103aba10;
    default: x86_unimpl("switch@0x103ab9ad out of table"); return;
  }
L_103ab9b4:;
  /* 103ab9b4 jmp dword ptr [ecx*4 + 0x103abab0] */
  switch (ECX) {
    case 0: goto L_103abac0;
    case 1: goto L_103abac8;
    case 2: goto L_103abad8;
    case 3: goto L_103abaec;
    default: x86_unimpl("switch@0x103ab9b4 out of table"); return;
  }
  /* 103ab9bb nop  */
  /* nop */
L_103ab9c8:;
  /* 103ab9c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 103ab9cb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103ab9cd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 103ab9d0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 103ab9d1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103ab9d4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 103ab9d5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ab9d8 jb 0x103ab990 */
  if (C.cf) goto L_103ab990;
  /* 103ab9da std  */
  C.df=1;
  /* 103ab9db rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103ab9dd cld  */
  C.df=0;
  /* 103ab9de jmp dword ptr [edx*4 + 0x103abab0] */
  switch (EDX) {
    case 0: goto L_103abac0;
    case 1: goto L_103abac8;
    case 2: goto L_103abad8;
    case 3: goto L_103abaec;
    default: x86_unimpl("switch@0x103ab9de out of table"); return;
  }
  /* 103ab9e5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103ab9e8:;
  /* 103ab9e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 103ab9eb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103ab9ed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 103ab9f0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103ab9f3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103ab9f6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103ab9f9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ab9fc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ab9ff cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aba02 jb 0x103ab990 */
  if (C.cf) goto L_103ab990;
  /* 103aba04 std  */
  C.df=1;
  /* 103aba05 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103aba07 cld  */
  C.df=0;
L_103aba08:;
  /* 103aba08 jmp dword ptr [edx*4 + 0x103abab0] */
  switch (EDX) {
    case 0: goto L_103abac0;
    case 1: goto L_103abac8;
    case 2: goto L_103abad8;
    case 3: goto L_103abaec;
    default: x86_unimpl("switch@0x103aba08 out of table"); return;
  }
  /* 103aba0f nop  */
  /* nop */
L_103aba10:;
  /* 103aba10 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 103aba13 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103aba15 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 103aba18 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103aba1b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103aba1e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103aba21 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103aba24 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103aba27 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aba2a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aba2d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aba30 jb 0x103ab990 */
  if (C.cf) goto L_103ab990;
  /* 103aba36 std  */
  C.df=1;
  /* 103aba37 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103aba39 cld  */
  C.df=0;
  /* 103aba3a jmp dword ptr [edx*4 + 0x103abab0] */
  switch (EDX) {
    case 0: goto L_103abac0;
    case 1: goto L_103abac8;
    case 2: goto L_103abad8;
    case 3: goto L_103abaec;
    default: x86_unimpl("switch@0x103aba3a out of table"); return;
  }
  /* 103aba41 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 103aba44 mov edx, 0xba6c103a */
  EDX = (0xba6c103au);
  /* 103aba4a cmp dl, byte ptr [eax] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103aba4c je 0x103aba08 */
  if (C.zf) goto L_103aba08;
  /* 103aba4e cmp dl, byte ptr [eax] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103aba50 jl 0x103aba0c */
  if ((C.sf!=C.of)) goto L_103aba0c;
  /* 103aba52 cmp dl, byte ptr [eax] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103aba54 test byte ptr [edx - 0x4573efc6], bh */
  { uint32_t _r=(r8((uint32_t)(EDX + -0x4573efc6)))&(C.b.b.h); fl_logic(_r,8); }
  /* 103aba5a cmp dl, byte ptr [eax] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103aba5c xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 103aba5e cmp dl, byte ptr [eax] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103aba64 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 103aba68 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 103aba6c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 103aba70 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 103aba74 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 103aba78 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 103aba7c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 103aba80 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 103aba84 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 103aba88 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 103aba8c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 103aba90 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 103aba94 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 103aba98 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 103aba9c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 103abaa3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103abaa5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_103abaa7:;
  /* 103abaa7 jmp dword ptr [edx*4 + 0x103abab0] */
  switch (EDX) {
    case 0: goto L_103abac0;
    case 1: goto L_103abac8;
    case 2: goto L_103abad8;
    case 3: goto L_103abaec;
    default: x86_unimpl("switch@0x103abaa7 out of table"); return;
  }
  /* 103abaae mov edi, edi */
  EDI = (EDI);
L_103abac0:;
  /* 103abac0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103abac3 pop esi */
  ESI = (pop32());
  /* 103abac4 pop edi */
  EDI = (pop32());
  /* 103abac5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103abac6 ret  */
  ESPCHK(0x103ab7d0u, _esp0);
  ESP += 4; return;
  /* 103abac7 nop  */
  /* nop */
L_103abac8:;
  /* 103abac8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 103abacb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 103abace mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103abad1 pop esi */
  ESI = (pop32());
  /* 103abad2 pop edi */
  EDI = (pop32());
  /* 103abad3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103abad4 ret  */
  ESPCHK(0x103ab7d0u, _esp0);
  ESP += 4; return;
  /* 103abad5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103abad8:;
  /* 103abad8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 103abadb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 103abade mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103abae1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103abae4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103abae7 pop esi */
  ESI = (pop32());
  /* 103abae8 pop edi */
  EDI = (pop32());
  /* 103abae9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103abaea ret  */
  ESPCHK(0x103ab7d0u, _esp0);
  ESP += 4; return;
  /* 103abaeb nop  */
  /* nop */
L_103abaec:;
  /* 103abaec mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 103abaef mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 103abaf2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103abaf5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103abaf8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103abafb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103abafe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103abb01 pop esi */
  ESI = (pop32());
  /* 103abb02 pop edi */
  EDI = (pop32());
  /* 103abb03 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103abb04 ret  */
  ESPCHK(0x103ab7d0u, _esp0);
  ESP += 4; return;
L_103aba0c: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x103aba0c (unresolved jump table)"); return;
}

/* __aulldiv @ 0x103abb10 (104 bytes, 43 insns) */
void f_103abb10(void) {
  FTRACE(0x103abb10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103abb10 push ebx */
  push32((uint32_t)(EBX));
  /* 103abb11 push esi */
  push32((uint32_t)(ESI));
  /* 103abb12 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 103abb16 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103abb18 jne 0x103abb32 */
  if (!C.zf) goto L_103abb32;
  /* 103abb1a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 103abb1e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 103abb22 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103abb24 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103abb26 mov ebx, eax */
  EBX = (EAX);
  /* 103abb28 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 103abb2c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103abb2e mov edx, ebx */
  EDX = (EBX);
  /* 103abb30 jmp 0x103abb73 */
  goto L_103abb73;
L_103abb32:;
  /* 103abb32 mov ecx, eax */
  ECX = (EAX);
  /* 103abb34 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 103abb38 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 103abb3c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_103abb40:;
  /* 103abb40 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 103abb42 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 103abb44 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 103abb46 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 103abb48 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103abb4a jne 0x103abb40 */
  if (!C.zf) goto L_103abb40;
  /* 103abb4c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103abb4e mov esi, eax */
  ESI = (EAX);
  /* 103abb50 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 103abb54 mov ecx, eax */
  ECX = (EAX);
  /* 103abb56 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 103abb5a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 103abb5c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103abb5e jb 0x103abb6e */
  if (C.cf) goto L_103abb6e;
  /* 103abb60 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103abb64 ja 0x103abb6e */
  if ((!C.cf&&!C.zf)) goto L_103abb6e;
  /* 103abb66 jb 0x103abb6f */
  if (C.cf) goto L_103abb6f;
  /* 103abb68 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103abb6c jbe 0x103abb6f */
  if ((C.cf||C.zf)) goto L_103abb6f;
L_103abb6e:;
  /* 103abb6e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_103abb6f:;
  /* 103abb6f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103abb71 mov eax, esi */
  EAX = (ESI);
L_103abb73:;
  /* 103abb73 pop esi */
  ESI = (pop32());
  /* 103abb74 pop ebx */
  EBX = (pop32());
  /* 103abb75 ret 0x10 */
  ESPCHK(0x103abb10u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x103abb80 (117 bytes, 44 insns) */
void f_103abb80(void) {
  FTRACE(0x103abb80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103abb80 push ebx */
  push32((uint32_t)(EBX));
  /* 103abb81 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 103abb85 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103abb87 jne 0x103abba1 */
  if (!C.zf) goto L_103abba1;
  /* 103abb89 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 103abb8d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 103abb91 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103abb93 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103abb95 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 103abb99 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103abb9b mov eax, edx */
  EAX = (EDX);
  /* 103abb9d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103abb9f jmp 0x103abbf1 */
  goto L_103abbf1;
L_103abba1:;
  /* 103abba1 mov ecx, eax */
  ECX = (EAX);
  /* 103abba3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 103abba7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 103abbab mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_103abbaf:;
  /* 103abbaf shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 103abbb1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 103abbb3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 103abbb5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 103abbb7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103abbb9 jne 0x103abbaf */
  if (!C.zf) goto L_103abbaf;
  /* 103abbbb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103abbbd mov ecx, eax */
  ECX = (EAX);
  /* 103abbbf mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 103abbc3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 103abbc4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 103abbc8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103abbca jb 0x103abbda */
  if (C.cf) goto L_103abbda;
  /* 103abbcc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103abbd0 ja 0x103abbda */
  if ((!C.cf&&!C.zf)) goto L_103abbda;
  /* 103abbd2 jb 0x103abbe2 */
  if (C.cf) goto L_103abbe2;
  /* 103abbd4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103abbd8 jbe 0x103abbe2 */
  if ((C.cf||C.zf)) goto L_103abbe2;
L_103abbda:;
  /* 103abbda sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103abbde sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_103abbe2:;
  /* 103abbe2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103abbe6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103abbea neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 103abbec neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 103abbee sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_103abbf1:;
  /* 103abbf1 pop ebx */
  EBX = (pop32());
  /* 103abbf2 ret 0x10 */
  ESPCHK(0x103abb80u, _esp0);
  ESP += 20; return;
}

/* FUN_1000bc00 @ 0x103abc00 (628 bytes, 214 insns) */
void f_103abc00(void) {
  FTRACE(0x103abc00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103abc00 push ebp */
  push32((uint32_t)(EBP));
  /* 103abc01 mov ebp, esp */
  EBP = (ESP);
  /* 103abc03 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103abc06 push ebx */
  push32((uint32_t)(EBX));
  /* 103abc07 push esi */
  push32((uint32_t)(ESI));
  /* 103abc08 push edi */
  push32((uint32_t)(EDI));
L_103abc09:;
  /* 103abc09 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103abc0d jne 0x103abc2d */
  if (!C.zf) goto L_103abc2d;
  /* 103abc0f push 0x103cc194 */
  push32((uint32_t)(0x103cc194u));
  /* 103abc14 push 0 */
  push32((uint32_t)(0x0u));
  /* 103abc16 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 103abc18 push 0x103cc188 */
  push32((uint32_t)(0x103cc188u));
  /* 103abc1d push 2 */
  push32((uint32_t)(0x2u));
  /* 103abc1f call 0x103a3fb0 */
  push32(0x103abc24u); f_103a3fb0();
  /* 103abc24 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103abc27 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103abc2a jne 0x103abc2d */
  if (!C.zf) goto L_103abc2d;
  /* 103abc2c int3  */
  x86_unimpl("int3 @ 0x103abc2c");
L_103abc2d:;
  /* 103abc2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103abc2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103abc31 jne 0x103abc09 */
  if (!C.zf) goto L_103abc09;
  /* 103abc33 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103abc36 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103abc39 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103abc3c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 103abc3f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 103abc42 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103abc45 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103abc48 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 103abc4e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103abc50 je 0x103abc5f */
  if (C.zf) goto L_103abc5f;
  /* 103abc52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103abc55 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 103abc58 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 103abc5b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103abc5d je 0x103abc75 */
  if (C.zf) goto L_103abc75;
L_103abc5f:;
  /* 103abc5f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103abc62 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 103abc65 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 103abc67 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103abc6a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 103abc6d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103abc70 jmp 0x103abe6d */
  goto L_103abe6d;
L_103abc75:;
  /* 103abc75 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103abc78 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 103abc7b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 103abc7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103abc80 je 0x103abccc */
  if (C.zf) goto L_103abccc;
  /* 103abc82 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103abc85 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 103abc8c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103abc8f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 103abc92 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 103abc95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103abc97 je 0x103abcb5 */
  if (C.zf) goto L_103abcb5;
  /* 103abc99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103abc9c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103abc9f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 103abca2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103abca4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103abca7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103abcaa and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 103abcad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103abcb0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 103abcb3 jmp 0x103abccc */
  goto L_103abccc;
L_103abcb5:;
  /* 103abcb5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103abcb8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103abcbb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 103abcbe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103abcc1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 103abcc4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103abcc7 jmp 0x103abe6d */
  goto L_103abe6d;
L_103abccc:;
  /* 103abccc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103abccf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103abcd2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 103abcd5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103abcd8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 103abcdb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103abcde mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103abce1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 103abce4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103abce7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 103abcea mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103abced mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 103abcf4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103abcfb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103abcfe mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 103abd01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103abd04 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 103abd07 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 103abd0d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103abd0f jne 0x103abd3f */
  if (!C.zf) goto L_103abd3f;
  /* 103abd11 cmp dword ptr [ebp - 8], 0x103cf140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x103cf140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103abd18 je 0x103abd23 */
  if (C.zf) goto L_103abd23;
  /* 103abd1a cmp dword ptr [ebp - 8], 0x103cf160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x103cf160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103abd21 jne 0x103abd33 */
  if (!C.zf) goto L_103abd33;
L_103abd23:;
  /* 103abd23 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103abd26 push edx */
  push32((uint32_t)(EDX));
  /* 103abd27 call 0x103adb70 */
  push32(0x103abd2cu); f_103adb70();
  /* 103abd2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103abd2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103abd31 jne 0x103abd3f */
  if (!C.zf) goto L_103abd3f;
L_103abd33:;
  /* 103abd33 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103abd36 push eax */
  push32((uint32_t)(EAX));
  /* 103abd37 call 0x103adaa0 */
  push32(0x103abd3cu); f_103adaa0();
  /* 103abd3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103abd3f:;
  /* 103abd3f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103abd42 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103abd45 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 103abd4b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103abd4d je 0x103abe2b */
  if (C.zf) goto L_103abe2b;
L_103abd53:;
  /* 103abd53 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103abd56 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103abd59 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 103abd5b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103abd5e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103abd60 jge 0x103abd83 */
  if ((C.sf==C.of)) goto L_103abd83;
  /* 103abd62 push 0x103cc148 */
  push32((uint32_t)(0x103cc148u));
  /* 103abd67 push 0 */
  push32((uint32_t)(0x0u));
  /* 103abd69 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 103abd6e push 0x103cc188 */
  push32((uint32_t)(0x103cc188u));
  /* 103abd73 push 2 */
  push32((uint32_t)(0x2u));
  /* 103abd75 call 0x103a3fb0 */
  push32(0x103abd7au); f_103a3fb0();
  /* 103abd7a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103abd7d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103abd80 jne 0x103abd83 */
  if (!C.zf) goto L_103abd83;
  /* 103abd82 int3  */
  x86_unimpl("int3 @ 0x103abd82");
L_103abd83:;
  /* 103abd83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103abd85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103abd87 jne 0x103abd53 */
  if (!C.zf) goto L_103abd53;
  /* 103abd89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103abd8c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103abd8f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 103abd91 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103abd94 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103abd97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103abd9a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 103abd9d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103abda0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103abda3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103abda5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103abda8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 103abdab sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103abdae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103abdb1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 103abdb4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103abdb8 jle 0x103abdd6 */
  if ((C.zf||C.sf!=C.of)) goto L_103abdd6;
  /* 103abdba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103abdbd push ecx */
  push32((uint32_t)(ECX));
  /* 103abdbe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103abdc1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 103abdc4 push eax */
  push32((uint32_t)(EAX));
  /* 103abdc5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103abdc8 push ecx */
  push32((uint32_t)(ECX));
  /* 103abdc9 call 0x103ad790 */
  push32(0x103abdceu); f_103ad790();
  /* 103abdce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103abdd1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103abdd4 jmp 0x103abe1e */
  goto L_103abe1e;
L_103abdd6:;
  /* 103abdd6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103abdda je 0x103abdf9 */
  if (C.zf) goto L_103abdf9;
  /* 103abddc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103abddf sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 103abde2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103abde5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 103abde8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103abdeb mov ecx, dword ptr [edx*4 + 0x103d1fc0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x103d1fc0)));
  /* 103abdf2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103abdf4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 103abdf7 jmp 0x103abe00 */
  goto L_103abe00;
L_103abdf9:;
  /* 103abdf9 mov dword ptr [ebp - 0x14], 0x103cea60 */
  w32((uint32_t)(EBP + -0x14), (0x103cea60u));
L_103abe00:;
  /* 103abe00 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103abe03 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 103abe07 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 103abe0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103abe0c je 0x103abe1e */
  if (C.zf) goto L_103abe1e;
  /* 103abe0e push 2 */
  push32((uint32_t)(0x2u));
  /* 103abe10 push 0 */
  push32((uint32_t)(0x0u));
  /* 103abe12 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103abe15 push ecx */
  push32((uint32_t)(ECX));
  /* 103abe16 call 0x103ad640 */
  push32(0x103abe1bu); f_103ad640();
  /* 103abe1b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103abe1e:;
  /* 103abe1e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103abe21 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 103abe24 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 103abe27 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 103abe29 jmp 0x103abe49 */
  goto L_103abe49;
L_103abe2b:;
  /* 103abe2b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 103abe32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103abe35 push edx */
  push32((uint32_t)(EDX));
  /* 103abe36 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 103abe39 push eax */
  push32((uint32_t)(EAX));
  /* 103abe3a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103abe3d push ecx */
  push32((uint32_t)(ECX));
  /* 103abe3e call 0x103ad790 */
  push32(0x103abe43u); f_103ad790();
  /* 103abe43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103abe46 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_103abe49:;
  /* 103abe49 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103abe4c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103abe4f je 0x103abe65 */
  if (C.zf) goto L_103abe65;
  /* 103abe51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103abe54 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 103abe57 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 103abe5a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103abe5d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 103abe60 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103abe63 jmp 0x103abe6d */
  goto L_103abe6d;
L_103abe65:;
  /* 103abe65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103abe68 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_103abe6d:;
  /* 103abe6d pop edi */
  EDI = (pop32());
  /* 103abe6e pop esi */
  ESI = (pop32());
  /* 103abe6f pop ebx */
  EBX = (pop32());
  /* 103abe70 mov esp, ebp */
  ESP = (EBP);
  /* 103abe72 pop ebp */
  EBP = (pop32());
  /* 103abe73 ret  */
  ESPCHK(0x103abc00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be80 @ 0x103abe80 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_103abe80(void) {
  FTRACE(0x103abe80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103abe80 push ebp */
  push32((uint32_t)(EBP));
  /* 103abe81 mov ebp, esp */
  EBP = (ESP);
  /* 103abe83 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103abe89 push ebx */
  push32((uint32_t)(EBX));
  /* 103abe8a push esi */
  push32((uint32_t)(ESI));
  /* 103abe8b push edi */
  push32((uint32_t)(EDI));
  /* 103abe8c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 103abe93 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 103abe9d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_103abea4:;
  /* 103abea4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103abea7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103abea9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 103abeac movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 103abeb0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103abeb3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103abeb6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 103abeb9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103abebb je 0x103aca97 */
  if (C.zf) goto L_103aca97;
  /* 103abec1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103abec8 jl 0x103aca97 */
  if ((C.sf!=C.of)) goto L_103aca97;
  /* 103abece movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 103abed2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103abed5 jl 0x103abef6 */
  if ((C.sf!=C.of)) goto L_103abef6;
  /* 103abed7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 103abedb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103abede jg 0x103abef6 */
  if ((!C.zf&&C.sf==C.of)) goto L_103abef6;
  /* 103abee0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 103abee4 movsx ecx, byte ptr [eax + 0x103cc180] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x103cc180))));
  /* 103abeeb and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 103abeee mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 103abef4 jmp 0x103abf00 */
  goto L_103abf00;
L_103abef6:;
  /* 103abef6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_103abf00:;
  /* 103abf00 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 103abf06 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 103abf09 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103abf0c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103abf0f movsx edx, byte ptr [ecx + eax*8 + 0x103cc1a0] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x103cc1a0))));
  /* 103abf17 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 103abf1a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 103abf1d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103abf20 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 103abf26 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103abf2d ja 0x103aca92 */
  if ((!C.cf&&!C.zf)) goto L_103aca92;
  /* 103abf33 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 103abf39 jmp dword ptr [ecx*4 + 0x103acaa4] */
  switch (ECX) {
    case 0: goto L_103abf40;
    case 1: goto L_103abfda;
    case 2: goto L_103ac01c;
    case 3: goto L_103ac08b;
    case 4: goto L_103ac0e3;
    case 5: goto L_103ac0f2;
    case 6: goto L_103ac13e;
    case 7: goto L_103ac1d1;
    case 8: goto L_103ac068;
    case 9: goto L_103ac073;
    case 10: goto L_103ac05e;
    case 11: goto L_103ac053;
    case 12: goto L_103ac07e;
    case 13: goto L_103ac086;
    default: x86_unimpl("switch@0x103abf39 out of table"); return;
  }
L_103abf40:;
  /* 103abf40 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 103abf47 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 103abf4a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 103abf50 mov eax, dword ptr [0x103cec98] */
  EAX = (r32((uint32_t)(0x103cec98)));
  /* 103abf55 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103abf57 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 103abf5b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 103abf61 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103abf63 je 0x103abfbd */
  if (C.zf) goto L_103abfbd;
  /* 103abf65 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 103abf6b push edx */
  push32((uint32_t)(EDX));
  /* 103abf6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103abf6f push eax */
  push32((uint32_t)(EAX));
  /* 103abf70 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 103abf74 push ecx */
  push32((uint32_t)(ECX));
  /* 103abf75 call 0x103acbb0 */
  push32(0x103abf7au); f_103acbb0();
  /* 103abf7a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103abf7d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103abf80 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103abf82 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 103abf85 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103abf88 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103abf8b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_103abf8e:;
  /* 103abf8e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 103abf92 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103abf94 jne 0x103abfb7 */
  if (!C.zf) goto L_103abfb7;
  /* 103abf96 push 0x103cc220 */
  push32((uint32_t)(0x103cc220u));
  /* 103abf9b push 0 */
  push32((uint32_t)(0x0u));
  /* 103abf9d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 103abfa2 push 0x103cc214 */
  push32((uint32_t)(0x103cc214u));
  /* 103abfa7 push 2 */
  push32((uint32_t)(0x2u));
  /* 103abfa9 call 0x103a3fb0 */
  push32(0x103abfaeu); f_103a3fb0();
  /* 103abfae add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103abfb1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103abfb4 jne 0x103abfb7 */
  if (!C.zf) goto L_103abfb7;
  /* 103abfb6 int3  */
  x86_unimpl("int3 @ 0x103abfb6");
L_103abfb7:;
  /* 103abfb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103abfb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103abfbb jne 0x103abf8e */
  if (!C.zf) goto L_103abf8e;
L_103abfbd:;
  /* 103abfbd lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 103abfc3 push ecx */
  push32((uint32_t)(ECX));
  /* 103abfc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103abfc7 push edx */
  push32((uint32_t)(EDX));
  /* 103abfc8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 103abfcc push eax */
  push32((uint32_t)(EAX));
  /* 103abfcd call 0x103acbb0 */
  push32(0x103abfd2u); f_103acbb0();
  /* 103abfd2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103abfd5 jmp 0x103aca92 */
  goto L_103aca92;
L_103abfda:;
  /* 103abfda mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 103abfe1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103abfe4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 103abfea mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 103abff0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 103abff6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 103abffc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 103abfff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103ac006 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 103ac010 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 103ac017 jmp 0x103aca92 */
  goto L_103aca92;
L_103ac01c:;
  /* 103ac01c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 103ac020 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 103ac026 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 103ac02c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ac02f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 103ac035 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ac03c ja 0x103ac086 */
  if ((!C.cf&&!C.zf)) goto L_103ac086;
  /* 103ac03e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 103ac044 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ac046 mov al, byte ptr [ecx + 0x103acadc] */
  AL = (r8((uint32_t)(ECX + 0x103acadc)));
  /* 103ac04c jmp dword ptr [eax*4 + 0x103acac4] */
  switch (EAX) {
    case 0: goto L_103ac068;
    case 1: goto L_103ac073;
    case 2: goto L_103ac05e;
    case 3: goto L_103ac053;
    case 4: goto L_103ac07e;
    case 5: goto L_103ac086;
    default: x86_unimpl("switch@0x103ac04c out of table"); return;
  }
L_103ac053:;
  /* 103ac053 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac056 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 103ac059 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103ac05c jmp 0x103ac086 */
  goto L_103ac086;
L_103ac05e:;
  /* 103ac05e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac061 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 103ac063 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103ac066 jmp 0x103ac086 */
  goto L_103ac086;
L_103ac068:;
  /* 103ac068 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac06b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 103ac06e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103ac071 jmp 0x103ac086 */
  goto L_103ac086;
L_103ac073:;
  /* 103ac073 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac076 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 103ac079 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103ac07c jmp 0x103ac086 */
  goto L_103ac086;
L_103ac07e:;
  /* 103ac07e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac081 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 103ac083 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103ac086:;
  /* 103ac086 jmp 0x103aca92 */
  goto L_103aca92;
L_103ac08b:;
  /* 103ac08b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 103ac08f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ac092 jne 0x103ac0c7 */
  if (!C.zf) goto L_103ac0c7;
  /* 103ac094 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 103ac097 push edx */
  push32((uint32_t)(EDX));
  /* 103ac098 call 0x103accc0 */
  push32(0x103ac09du); f_103accc0();
  /* 103ac09d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ac0a0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 103ac0a6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ac0ad jge 0x103ac0c5 */
  if ((C.sf==C.of)) goto L_103ac0c5;
  /* 103ac0af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac0b2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 103ac0b4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103ac0b7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 103ac0bd neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 103ac0bf mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_103ac0c5:;
  /* 103ac0c5 jmp 0x103ac0de */
  goto L_103ac0de;
L_103ac0c7:;
  /* 103ac0c7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 103ac0cd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ac0d0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 103ac0d4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 103ac0d8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_103ac0de:;
  /* 103ac0de jmp 0x103aca92 */
  goto L_103aca92;
L_103ac0e3:;
  /* 103ac0e3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 103ac0ed jmp 0x103aca92 */
  goto L_103aca92;
L_103ac0f2:;
  /* 103ac0f2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 103ac0f6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ac0f9 jne 0x103ac122 */
  if (!C.zf) goto L_103ac122;
  /* 103ac0fb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 103ac0fe push eax */
  push32((uint32_t)(EAX));
  /* 103ac0ff call 0x103accc0 */
  push32(0x103ac104u); f_103accc0();
  /* 103ac104 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ac107 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 103ac10d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ac114 jge 0x103ac120 */
  if ((C.sf==C.of)) goto L_103ac120;
  /* 103ac116 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_103ac120:;
  /* 103ac120 jmp 0x103ac139 */
  goto L_103ac139;
L_103ac122:;
  /* 103ac122 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 103ac128 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ac12b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 103ac12f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 103ac133 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_103ac139:;
  /* 103ac139 jmp 0x103aca92 */
  goto L_103aca92;
L_103ac13e:;
  /* 103ac13e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 103ac142 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 103ac148 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 103ac14e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ac151 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 103ac157 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ac15e ja 0x103ac1cc */
  if ((!C.cf&&!C.zf)) goto L_103ac1cc;
  /* 103ac160 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 103ac166 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ac168 mov al, byte ptr [ecx + 0x103acb01] */
  AL = (r8((uint32_t)(ECX + 0x103acb01)));
  /* 103ac16e jmp dword ptr [eax*4 + 0x103acaed] */
  switch (EAX) {
    case 0: goto L_103ac180;
    case 1: goto L_103ac1b9;
    case 2: goto L_103ac175;
    case 3: goto L_103ac1c3;
    case 4: goto L_103ac1cc;
    default: x86_unimpl("switch@0x103ac16e out of table"); return;
  }
L_103ac175:;
  /* 103ac175 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac178 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 103ac17b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103ac17e jmp 0x103ac1cc */
  goto L_103ac1cc;
L_103ac180:;
  /* 103ac180 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ac183 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103ac186 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ac189 jne 0x103ac1ab */
  if (!C.zf) goto L_103ac1ab;
  /* 103ac18b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ac18e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 103ac192 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ac195 jne 0x103ac1ab */
  if (!C.zf) goto L_103ac1ab;
  /* 103ac197 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ac19a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ac19d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 103ac1a0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac1a3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 103ac1a6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103ac1a9 jmp 0x103ac1b7 */
  goto L_103ac1b7;
L_103ac1ab:;
  /* 103ac1ab mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 103ac1b2 jmp 0x103abf40 */
  goto L_103abf40;
L_103ac1b7:;
  /* 103ac1b7 jmp 0x103ac1cc */
  goto L_103ac1cc;
L_103ac1b9:;
  /* 103ac1b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac1bc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 103ac1be mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103ac1c1 jmp 0x103ac1cc */
  goto L_103ac1cc;
L_103ac1c3:;
  /* 103ac1c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac1c6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 103ac1c9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103ac1cc:;
  /* 103ac1cc jmp 0x103aca92 */
  goto L_103aca92;
L_103ac1d1:;
  /* 103ac1d1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 103ac1d5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 103ac1db mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 103ac1e1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ac1e4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 103ac1ea cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ac1f1 ja 0x103ac8b7 */
  if ((!C.cf&&!C.zf)) goto L_103ac8b7;
  /* 103ac1f7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 103ac1fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103ac1ff mov cl, byte ptr [edx + 0x103acb6c] */
  CL = (r8((uint32_t)(EDX + 0x103acb6c)));
  /* 103ac205 jmp dword ptr [ecx*4 + 0x103acb30] */
  switch (ECX) {
    case 0: goto L_103ac20c;
    case 1: goto L_103ac4a0;
    case 2: goto L_103ac330;
    case 3: goto L_103ac5d9;
    case 4: goto L_103ac29b;
    case 5: goto L_103ac221;
    case 6: goto L_103ac5ab;
    case 7: goto L_103ac4b0;
    case 8: goto L_103ac455;
    case 9: goto L_103ac625;
    case 10: goto L_103ac5cf;
    case 11: goto L_103ac346;
    case 12: goto L_103ac5c3;
    case 13: goto L_103ac5e5;
    case 14: goto L_103ac8b7;
    default: x86_unimpl("switch@0x103ac205 out of table"); return;
  }
L_103ac20c:;
  /* 103ac20c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac20f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 103ac214 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ac216 jne 0x103ac221 */
  if (!C.zf) goto L_103ac221;
  /* 103ac218 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac21b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 103ac21e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103ac221:;
  /* 103ac221 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac224 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 103ac22a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ac22c je 0x103ac267 */
  if (C.zf) goto L_103ac267;
  /* 103ac22e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 103ac231 push eax */
  push32((uint32_t)(EAX));
  /* 103ac232 call 0x103acd00 */
  push32(0x103ac237u); f_103acd00();
  /* 103ac237 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ac23a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 103ac23e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 103ac242 push ecx */
  push32((uint32_t)(ECX));
  /* 103ac243 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 103ac249 push edx */
  push32((uint32_t)(EDX));
  /* 103ac24a call 0x103adde0 */
  push32(0x103ac24fu); f_103adde0();
  /* 103ac24f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ac252 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 103ac255 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ac259 jge 0x103ac265 */
  if ((C.sf==C.of)) goto L_103ac265;
  /* 103ac25b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_103ac265:;
  /* 103ac265 jmp 0x103ac28d */
  goto L_103ac28d;
L_103ac267:;
  /* 103ac267 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 103ac26a push eax */
  push32((uint32_t)(EAX));
  /* 103ac26b call 0x103accc0 */
  push32(0x103ac270u); f_103accc0();
  /* 103ac270 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ac273 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 103ac27a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 103ac280 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 103ac286 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_103ac28d:;
  /* 103ac28d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 103ac293 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 103ac296 jmp 0x103ac8b7 */
  goto L_103ac8b7;
L_103ac29b:;
  /* 103ac29b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 103ac29e push eax */
  push32((uint32_t)(EAX));
  /* 103ac29f call 0x103accc0 */
  push32(0x103ac2a4u); f_103accc0();
  /* 103ac2a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ac2a7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 103ac2ad cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ac2b4 je 0x103ac2c2 */
  if (C.zf) goto L_103ac2c2;
  /* 103ac2b6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 103ac2bc cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ac2c0 jne 0x103ac2dc */
  if (!C.zf) goto L_103ac2dc;
L_103ac2c2:;
  /* 103ac2c2 mov edx, dword ptr [0x103cefb0] */
  EDX = (r32((uint32_t)(0x103cefb0)));
  /* 103ac2c8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 103ac2cb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ac2ce push eax */
  push32((uint32_t)(EAX));
  /* 103ac2cf call 0x103a7d20 */
  push32(0x103ac2d4u); f_103a7d20();
  /* 103ac2d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ac2d7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 103ac2da jmp 0x103ac32b */
  goto L_103ac32b;
L_103ac2dc:;
  /* 103ac2dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac2df and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 103ac2e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ac2e7 je 0x103ac30c */
  if (C.zf) goto L_103ac30c;
  /* 103ac2e9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 103ac2ef mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 103ac2f2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 103ac2f5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 103ac2fb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 103ac2fe shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 103ac300 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 103ac303 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 103ac30a jmp 0x103ac32b */
  goto L_103ac32b;
L_103ac30c:;
  /* 103ac30c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 103ac313 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 103ac319 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103ac31c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 103ac31f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 103ac325 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 103ac328 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_103ac32b:;
  /* 103ac32b jmp 0x103ac8b7 */
  goto L_103ac8b7;
L_103ac330:;
  /* 103ac330 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac333 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 103ac339 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ac33b jne 0x103ac346 */
  if (!C.zf) goto L_103ac346;
  /* 103ac33d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac340 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 103ac343 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_103ac346:;
  /* 103ac346 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ac34d jne 0x103ac35b */
  if (!C.zf) goto L_103ac35b;
  /* 103ac34f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 103ac359 jmp 0x103ac367 */
  goto L_103ac367;
L_103ac35b:;
  /* 103ac35b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 103ac361 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_103ac367:;
  /* 103ac367 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 103ac36d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 103ac373 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 103ac376 push edx */
  push32((uint32_t)(EDX));
  /* 103ac377 call 0x103accc0 */
  push32(0x103ac37cu); f_103accc0();
  /* 103ac37c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ac37f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 103ac382 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac385 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 103ac38a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ac38c je 0x103ac3f6 */
  if (C.zf) goto L_103ac3f6;
  /* 103ac38e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ac392 jne 0x103ac39d */
  if (!C.zf) goto L_103ac39d;
  /* 103ac394 mov ecx, dword ptr [0x103cefb4] */
  ECX = (r32((uint32_t)(0x103cefb4)));
  /* 103ac39a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_103ac39d:;
  /* 103ac39d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 103ac3a4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ac3a7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_103ac3ad:;
  /* 103ac3ad mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 103ac3b3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 103ac3b9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ac3bc mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 103ac3c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ac3c4 je 0x103ac3e6 */
  if (C.zf) goto L_103ac3e6;
  /* 103ac3c6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 103ac3cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ac3ce mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 103ac3d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ac3d3 je 0x103ac3e6 */
  if (C.zf) goto L_103ac3e6;
  /* 103ac3d5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 103ac3db add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ac3de mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 103ac3e4 jmp 0x103ac3ad */
  goto L_103ac3ad;
L_103ac3e6:;
  /* 103ac3e6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 103ac3ec sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ac3ef sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 103ac3f1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 103ac3f4 jmp 0x103ac450 */
  goto L_103ac450;
L_103ac3f6:;
  /* 103ac3f6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ac3fa jne 0x103ac404 */
  if (!C.zf) goto L_103ac404;
  /* 103ac3fc mov eax, dword ptr [0x103cefb0] */
  EAX = (r32((uint32_t)(0x103cefb0)));
  /* 103ac401 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_103ac404:;
  /* 103ac404 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ac407 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_103ac40d:;
  /* 103ac40d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 103ac413 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 103ac419 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ac41c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 103ac422 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ac424 je 0x103ac444 */
  if (C.zf) goto L_103ac444;
  /* 103ac426 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 103ac42c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103ac42f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ac431 je 0x103ac444 */
  if (C.zf) goto L_103ac444;
  /* 103ac433 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 103ac439 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ac43c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 103ac442 jmp 0x103ac40d */
  goto L_103ac40d;
L_103ac444:;
  /* 103ac444 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 103ac44a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ac44d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_103ac450:;
  /* 103ac450 jmp 0x103ac8b7 */
  goto L_103ac8b7;
L_103ac455:;
  /* 103ac455 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 103ac458 push edx */
  push32((uint32_t)(EDX));
  /* 103ac459 call 0x103accc0 */
  push32(0x103ac45eu); f_103accc0();
  /* 103ac45e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ac461 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 103ac467 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac46a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 103ac46d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ac46f je 0x103ac483 */
  if (C.zf) goto L_103ac483;
  /* 103ac471 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 103ac477 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 103ac47e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 103ac481 jmp 0x103ac491 */
  goto L_103ac491;
L_103ac483:;
  /* 103ac483 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 103ac489 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 103ac48f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_103ac491:;
  /* 103ac491 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 103ac49b jmp 0x103ac8b7 */
  goto L_103ac8b7;
L_103ac4a0:;
  /* 103ac4a0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 103ac4a7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 103ac4aa add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 103ac4ad mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_103ac4b0:;
  /* 103ac4b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac4b3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 103ac4b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103ac4b8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 103ac4be mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 103ac4c1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ac4c8 jge 0x103ac4d6 */
  if ((C.sf==C.of)) goto L_103ac4d6;
  /* 103ac4ca mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 103ac4d4 jmp 0x103ac4f2 */
  goto L_103ac4f2;
L_103ac4d6:;
  /* 103ac4d6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ac4dd jne 0x103ac4f2 */
  if (!C.zf) goto L_103ac4f2;
  /* 103ac4df movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 103ac4e3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ac4e6 jne 0x103ac4f2 */
  if (!C.zf) goto L_103ac4f2;
  /* 103ac4e8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_103ac4f2:;
  /* 103ac4f2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103ac4f5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ac4f8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 103ac4fb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103ac4fe sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ac501 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103ac503 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 103ac506 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 103ac50c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 103ac512 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ac515 push ecx */
  push32((uint32_t)(ECX));
  /* 103ac516 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 103ac51c push edx */
  push32((uint32_t)(EDX));
  /* 103ac51d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 103ac521 push eax */
  push32((uint32_t)(EAX));
  /* 103ac522 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ac525 push ecx */
  push32((uint32_t)(ECX));
  /* 103ac526 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 103ac52c push edx */
  push32((uint32_t)(EDX));
  /* 103ac52d call dword ptr [0x103cf3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103cf3a0))), 0x103ac533u);
  /* 103ac533 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ac536 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac539 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 103ac53e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ac540 je 0x103ac558 */
  if (C.zf) goto L_103ac558;
  /* 103ac542 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ac549 jne 0x103ac558 */
  if (!C.zf) goto L_103ac558;
  /* 103ac54b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ac54e push ecx */
  push32((uint32_t)(ECX));
  /* 103ac54f call dword ptr [0x103cf3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x103cf3ac))), 0x103ac555u);
  /* 103ac555 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103ac558:;
  /* 103ac558 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 103ac55c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ac55f jne 0x103ac57a */
  if (!C.zf) goto L_103ac57a;
  /* 103ac561 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac564 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 103ac569 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ac56b jne 0x103ac57a */
  if (!C.zf) goto L_103ac57a;
  /* 103ac56d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ac570 push ecx */
  push32((uint32_t)(ECX));
  /* 103ac571 call dword ptr [0x103cf3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103cf3a4))), 0x103ac577u);
  /* 103ac577 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103ac57a:;
  /* 103ac57a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ac57d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103ac580 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ac583 jne 0x103ac597 */
  if (!C.zf) goto L_103ac597;
  /* 103ac585 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac588 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 103ac58b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103ac58e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ac591 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ac594 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_103ac597:;
  /* 103ac597 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ac59a push eax */
  push32((uint32_t)(EAX));
  /* 103ac59b call 0x103a7d20 */
  push32(0x103ac5a0u); f_103a7d20();
  /* 103ac5a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ac5a3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 103ac5a6 jmp 0x103ac8b7 */
  goto L_103ac8b7;
L_103ac5ab:;
  /* 103ac5ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac5ae or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 103ac5b1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103ac5b4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 103ac5be jmp 0x103ac645 */
  goto L_103ac645;
L_103ac5c3:;
  /* 103ac5c3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 103ac5cd jmp 0x103ac645 */
  goto L_103ac645;
L_103ac5cf:;
  /* 103ac5cf mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_103ac5d9:;
  /* 103ac5d9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 103ac5e3 jmp 0x103ac5ef */
  goto L_103ac5ef;
L_103ac5e5:;
  /* 103ac5e5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_103ac5ef:;
  /* 103ac5ef mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 103ac5f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac5fc and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 103ac602 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ac604 je 0x103ac623 */
  if (C.zf) goto L_103ac623;
  /* 103ac606 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 103ac60d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 103ac613 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ac616 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 103ac61c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_103ac623:;
  /* 103ac623 jmp 0x103ac645 */
  goto L_103ac645;
L_103ac625:;
  /* 103ac625 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 103ac62f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac632 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 103ac638 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ac63a je 0x103ac645 */
  if (C.zf) goto L_103ac645;
  /* 103ac63c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac63f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 103ac642 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_103ac645:;
  /* 103ac645 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac648 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 103ac64d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ac64f je 0x103ac66e */
  if (C.zf) goto L_103ac66e;
  /* 103ac651 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 103ac654 push ecx */
  push32((uint32_t)(ECX));
  /* 103ac655 call 0x103acce0 */
  push32(0x103ac65au); f_103acce0();
  /* 103ac65a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ac65d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 103ac663 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 103ac669 jmp 0x103ac6ff */
  goto L_103ac6ff;
L_103ac66e:;
  /* 103ac66e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac671 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 103ac674 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ac676 je 0x103ac6c0 */
  if (C.zf) goto L_103ac6c0;
  /* 103ac678 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac67b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 103ac67e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ac680 je 0x103ac6a0 */
  if (C.zf) goto L_103ac6a0;
  /* 103ac682 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 103ac685 push ecx */
  push32((uint32_t)(ECX));
  /* 103ac686 call 0x103accc0 */
  push32(0x103ac68bu); f_103accc0();
  /* 103ac68b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ac68e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 103ac691 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103ac692 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 103ac698 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 103ac69e jmp 0x103ac6be */
  goto L_103ac6be;
L_103ac6a0:;
  /* 103ac6a0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 103ac6a3 push edx */
  push32((uint32_t)(EDX));
  /* 103ac6a4 call 0x103accc0 */
  push32(0x103ac6a9u); f_103accc0();
  /* 103ac6a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ac6ac and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103ac6b1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103ac6b2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 103ac6b8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_103ac6be:;
  /* 103ac6be jmp 0x103ac6ff */
  goto L_103ac6ff;
L_103ac6c0:;
  /* 103ac6c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac6c3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 103ac6c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ac6c8 je 0x103ac6e5 */
  if (C.zf) goto L_103ac6e5;
  /* 103ac6ca lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 103ac6cd push ecx */
  push32((uint32_t)(ECX));
  /* 103ac6ce call 0x103accc0 */
  push32(0x103ac6d3u); f_103accc0();
  /* 103ac6d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ac6d6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103ac6d7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 103ac6dd mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 103ac6e3 jmp 0x103ac6ff */
  goto L_103ac6ff;
L_103ac6e5:;
  /* 103ac6e5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 103ac6e8 push edx */
  push32((uint32_t)(EDX));
  /* 103ac6e9 call 0x103accc0 */
  push32(0x103ac6eeu); f_103accc0();
  /* 103ac6ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ac6f1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103ac6f3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 103ac6f9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_103ac6ff:;
  /* 103ac6ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac702 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 103ac705 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ac707 je 0x103ac747 */
  if (C.zf) goto L_103ac747;
  /* 103ac709 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ac710 jg 0x103ac747 */
  if ((!C.zf&&C.sf==C.of)) goto L_103ac747;
  /* 103ac712 jl 0x103ac71d */
  if ((C.sf!=C.of)) goto L_103ac71d;
  /* 103ac714 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ac71b jae 0x103ac747 */
  if (!C.cf) goto L_103ac747;
L_103ac71d:;
  /* 103ac71d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 103ac723 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 103ac725 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 103ac72b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ac72e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 103ac730 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 103ac736 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 103ac73c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac73f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 103ac742 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103ac745 jmp 0x103ac75f */
  goto L_103ac75f;
L_103ac747:;
  /* 103ac747 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 103ac74d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 103ac753 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 103ac759 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_103ac75f:;
  /* 103ac75f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac762 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 103ac768 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ac76a jne 0x103ac787 */
  if (!C.zf) goto L_103ac787;
  /* 103ac76c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 103ac772 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 103ac778 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 103ac77b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 103ac781 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_103ac787:;
  /* 103ac787 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ac78e jge 0x103ac79c */
  if ((C.sf==C.of)) goto L_103ac79c;
  /* 103ac790 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 103ac79a jmp 0x103ac7a5 */
  goto L_103ac7a5;
L_103ac79c:;
  /* 103ac79c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac79f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 103ac7a2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_103ac7a5:;
  /* 103ac7a5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 103ac7ab or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 103ac7b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ac7b3 jne 0x103ac7bc */
  if (!C.zf) goto L_103ac7bc;
  /* 103ac7b5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_103ac7bc:;
  /* 103ac7bc lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 103ac7bf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_103ac7c2:;
  /* 103ac7c2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 103ac7c8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 103ac7ce sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ac7d1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 103ac7d7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ac7d9 jg 0x103ac7ef */
  if ((!C.zf&&C.sf==C.of)) goto L_103ac7ef;
  /* 103ac7db mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 103ac7e1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 103ac7e7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ac7e9 je 0x103ac870 */
  if (C.zf) goto L_103ac870;
L_103ac7ef:;
  /* 103ac7ef mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 103ac7f5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103ac7f6 push edx */
  push32((uint32_t)(EDX));
  /* 103ac7f7 push eax */
  push32((uint32_t)(EAX));
  /* 103ac7f8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 103ac7fe push edx */
  push32((uint32_t)(EDX));
  /* 103ac7ff mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 103ac805 push eax */
  push32((uint32_t)(EAX));
  /* 103ac806 call 0x103abb80 */
  push32(0x103ac80bu); f_103abb80();
  /* 103ac80b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ac80e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 103ac814 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 103ac81a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103ac81b push edx */
  push32((uint32_t)(EDX));
  /* 103ac81c push eax */
  push32((uint32_t)(EAX));
  /* 103ac81d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 103ac823 push ecx */
  push32((uint32_t)(ECX));
  /* 103ac824 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 103ac82a push edx */
  push32((uint32_t)(EDX));
  /* 103ac82b call 0x103abb10 */
  push32(0x103ac830u); f_103abb10();
  /* 103ac830 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 103ac836 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 103ac83c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ac843 jle 0x103ac857 */
  if ((C.zf||C.sf!=C.of)) goto L_103ac857;
  /* 103ac845 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 103ac84b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ac851 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_103ac857:;
  /* 103ac857 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ac85a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 103ac860 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 103ac862 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ac865 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ac868 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 103ac86b jmp 0x103ac7c2 */
  goto L_103ac7c2;
L_103ac870:;
  /* 103ac870 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 103ac873 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ac876 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 103ac879 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ac87c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ac87f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 103ac882 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac885 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 103ac88a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ac88c je 0x103ac8b7 */
  if (C.zf) goto L_103ac8b7;
  /* 103ac88e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ac891 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103ac894 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ac897 jne 0x103ac89f */
  if (!C.zf) goto L_103ac89f;
  /* 103ac899 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ac89d jne 0x103ac8b7 */
  if (!C.zf) goto L_103ac8b7;
L_103ac89f:;
  /* 103ac89f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ac8a2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ac8a5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 103ac8a8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ac8ab mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 103ac8ae mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103ac8b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ac8b4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_103ac8b7:;
  /* 103ac8b7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ac8be jne 0x103aca92 */
  if (!C.zf) goto L_103aca92;
  /* 103ac8c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac8c7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 103ac8ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ac8cc je 0x103ac91d */
  if (C.zf) goto L_103ac91d;
  /* 103ac8ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac8d1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 103ac8d7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ac8d9 je 0x103ac8eb */
  if (C.zf) goto L_103ac8eb;
  /* 103ac8db mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 103ac8e2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 103ac8e9 jmp 0x103ac91d */
  goto L_103ac91d;
L_103ac8eb:;
  /* 103ac8eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac8ee and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 103ac8f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ac8f3 je 0x103ac905 */
  if (C.zf) goto L_103ac905;
  /* 103ac8f5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 103ac8fc mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 103ac903 jmp 0x103ac91d */
  goto L_103ac91d;
L_103ac905:;
  /* 103ac905 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac908 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 103ac90b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ac90d je 0x103ac91d */
  if (C.zf) goto L_103ac91d;
  /* 103ac90f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 103ac916 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_103ac91d:;
  /* 103ac91d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 103ac923 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ac926 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ac929 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 103ac92f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac932 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 103ac935 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ac937 jne 0x103ac955 */
  if (!C.zf) goto L_103ac955;
  /* 103ac939 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 103ac93f push eax */
  push32((uint32_t)(EAX));
  /* 103ac940 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ac943 push ecx */
  push32((uint32_t)(ECX));
  /* 103ac944 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 103ac94a push edx */
  push32((uint32_t)(EDX));
  /* 103ac94b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 103ac94d call 0x103acc30 */
  push32(0x103ac952u); f_103acc30();
  /* 103ac952 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103ac955:;
  /* 103ac955 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 103ac95b push eax */
  push32((uint32_t)(EAX));
  /* 103ac95c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ac95f push ecx */
  push32((uint32_t)(ECX));
  /* 103ac960 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ac963 push edx */
  push32((uint32_t)(EDX));
  /* 103ac964 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 103ac96a push eax */
  push32((uint32_t)(EAX));
  /* 103ac96b call 0x103acc70 */
  push32(0x103ac970u); f_103acc70();
  /* 103ac970 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ac973 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac976 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 103ac979 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ac97b je 0x103ac9a3 */
  if (C.zf) goto L_103ac9a3;
  /* 103ac97d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ac980 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 103ac983 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ac985 jne 0x103ac9a3 */
  if (!C.zf) goto L_103ac9a3;
  /* 103ac987 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 103ac98d push eax */
  push32((uint32_t)(EAX));
  /* 103ac98e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ac991 push ecx */
  push32((uint32_t)(ECX));
  /* 103ac992 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 103ac998 push edx */
  push32((uint32_t)(EDX));
  /* 103ac999 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 103ac99b call 0x103acc30 */
  push32(0x103ac9a0u); f_103acc30();
  /* 103ac9a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103ac9a3:;
  /* 103ac9a3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ac9a7 je 0x103aca51 */
  if (C.zf) goto L_103aca51;
  /* 103ac9ad cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ac9b1 jle 0x103aca51 */
  if ((C.zf||C.sf!=C.of)) goto L_103aca51;
  /* 103ac9b7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ac9ba mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 103ac9c0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103ac9c3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_103ac9c9:;
  /* 103ac9c9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 103ac9cf mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 103ac9d5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ac9d8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 103ac9de test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ac9e0 je 0x103aca4f */
  if (C.zf) goto L_103aca4f;
  /* 103ac9e2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 103ac9e8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 103ac9eb mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 103ac9f2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 103ac9f9 push eax */
  push32((uint32_t)(EAX));
  /* 103ac9fa lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 103aca00 push ecx */
  push32((uint32_t)(ECX));
  /* 103aca01 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 103aca07 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aca0a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 103aca10 call 0x103adde0 */
  push32(0x103aca15u); f_103adde0();
  /* 103aca15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aca18 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 103aca1e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aca25 jg 0x103aca29 */
  if ((!C.zf&&C.sf==C.of)) goto L_103aca29;
  /* 103aca27 jmp 0x103aca4f */
  goto L_103aca4f;
L_103aca29:;
  /* 103aca29 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 103aca2f push eax */
  push32((uint32_t)(EAX));
  /* 103aca30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aca33 push ecx */
  push32((uint32_t)(ECX));
  /* 103aca34 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 103aca3a push edx */
  push32((uint32_t)(EDX));
  /* 103aca3b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 103aca41 push eax */
  push32((uint32_t)(EAX));
  /* 103aca42 call 0x103acc70 */
  push32(0x103aca47u); f_103acc70();
  /* 103aca47 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aca4a jmp 0x103ac9c9 */
  goto L_103ac9c9;
L_103aca4f:;
  /* 103aca4f jmp 0x103aca6c */
  goto L_103aca6c;
L_103aca51:;
  /* 103aca51 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 103aca57 push ecx */
  push32((uint32_t)(ECX));
  /* 103aca58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aca5b push edx */
  push32((uint32_t)(EDX));
  /* 103aca5c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103aca5f push eax */
  push32((uint32_t)(EAX));
  /* 103aca60 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103aca63 push ecx */
  push32((uint32_t)(ECX));
  /* 103aca64 call 0x103acc70 */
  push32(0x103aca69u); f_103acc70();
  /* 103aca69 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103aca6c:;
  /* 103aca6c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103aca6f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 103aca72 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103aca74 je 0x103aca92 */
  if (C.zf) goto L_103aca92;
  /* 103aca76 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 103aca7c push eax */
  push32((uint32_t)(EAX));
  /* 103aca7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aca80 push ecx */
  push32((uint32_t)(ECX));
  /* 103aca81 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 103aca87 push edx */
  push32((uint32_t)(EDX));
  /* 103aca88 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 103aca8a call 0x103acc30 */
  push32(0x103aca8fu); f_103acc30();
  /* 103aca8f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103aca92:;
  /* 103aca92 jmp 0x103abea4 */
  goto L_103abea4;
L_103aca97:;
  /* 103aca97 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 103aca9d pop edi */
  EDI = (pop32());
  /* 103aca9e pop esi */
  ESI = (pop32());
  /* 103aca9f pop ebx */
  EBX = (pop32());
  /* 103acaa0 mov esp, ebp */
  ESP = (EBP);
  /* 103acaa2 pop ebp */
  EBP = (pop32());
  /* 103acaa3 ret  */
  ESPCHK(0x103abe80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cbb0 @ 0x103acbb0 (119 bytes, 44 insns) */
void f_103acbb0(void) {
  FTRACE(0x103acbb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103acbb0 push ebp */
  push32((uint32_t)(EBP));
  /* 103acbb1 mov ebp, esp */
  EBP = (ESP);
  /* 103acbb3 push ecx */
  push32((uint32_t)(ECX));
  /* 103acbb4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103acbb7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103acbba sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103acbbd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103acbc0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 103acbc3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103acbc6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103acbca jl 0x103acbf2 */
  if ((C.sf!=C.of)) goto L_103acbf2;
  /* 103acbcc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103acbcf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103acbd1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 103acbd4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 103acbd6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 103acbda and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 103acbe0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103acbe3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103acbe6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103acbe8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103acbeb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103acbee mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103acbf0 jmp 0x103acc05 */
  goto L_103acc05;
L_103acbf2:;
  /* 103acbf2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103acbf5 push edx */
  push32((uint32_t)(EDX));
  /* 103acbf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103acbf9 push eax */
  push32((uint32_t)(EAX));
  /* 103acbfa call 0x103abc00 */
  push32(0x103acbffu); f_103abc00();
  /* 103acbff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103acc02 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103acc05:;
  /* 103acc05 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103acc09 jne 0x103acc16 */
  if (!C.zf) goto L_103acc16;
  /* 103acc0b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103acc0e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 103acc14 jmp 0x103acc23 */
  goto L_103acc23;
L_103acc16:;
  /* 103acc16 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103acc19 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103acc1b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103acc1e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103acc21 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_103acc23:;
  /* 103acc23 mov esp, ebp */
  ESP = (EBP);
  /* 103acc25 pop ebp */
  EBP = (pop32());
  /* 103acc26 ret  */
  ESPCHK(0x103acbb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc30 @ 0x103acc30 (53 bytes, 23 insns) */
void f_103acc30(void) {
  FTRACE(0x103acc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103acc30 push ebp */
  push32((uint32_t)(EBP));
  /* 103acc31 mov ebp, esp */
  EBP = (ESP);
L_103acc33:;
  /* 103acc33 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103acc36 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103acc39 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103acc3c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 103acc3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103acc41 jle 0x103acc63 */
  if ((C.zf||C.sf!=C.of)) goto L_103acc63;
  /* 103acc43 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103acc46 push edx */
  push32((uint32_t)(EDX));
  /* 103acc47 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103acc4a push eax */
  push32((uint32_t)(EAX));
  /* 103acc4b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103acc4e push ecx */
  push32((uint32_t)(ECX));
  /* 103acc4f call 0x103acbb0 */
  push32(0x103acc54u); f_103acbb0();
  /* 103acc54 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103acc57 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103acc5a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103acc5d jne 0x103acc61 */
  if (!C.zf) goto L_103acc61;
  /* 103acc5f jmp 0x103acc63 */
  goto L_103acc63;
L_103acc61:;
  /* 103acc61 jmp 0x103acc33 */
  goto L_103acc33;
L_103acc63:;
  /* 103acc63 pop ebp */
  EBP = (pop32());
  /* 103acc64 ret  */
  ESPCHK(0x103acc30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc70 @ 0x103acc70 (74 bytes, 31 insns) */
void f_103acc70(void) {
  FTRACE(0x103acc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103acc70 push ebp */
  push32((uint32_t)(EBP));
  /* 103acc71 mov ebp, esp */
  EBP = (ESP);
  /* 103acc73 push ecx */
  push32((uint32_t)(ECX));
L_103acc74:;
  /* 103acc74 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103acc77 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103acc7a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103acc7d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 103acc80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103acc82 jle 0x103accb6 */
  if ((C.zf||C.sf!=C.of)) goto L_103accb6;
  /* 103acc84 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103acc87 push edx */
  push32((uint32_t)(EDX));
  /* 103acc88 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103acc8b push eax */
  push32((uint32_t)(EAX));
  /* 103acc8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103acc8f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103acc92 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103acc95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103acc98 push eax */
  push32((uint32_t)(EAX));
  /* 103acc99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103acc9c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103acc9f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 103acca2 call 0x103acbb0 */
  push32(0x103acca7u); f_103acbb0();
  /* 103acca7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103accaa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103accad cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103accb0 jne 0x103accb4 */
  if (!C.zf) goto L_103accb4;
  /* 103accb2 jmp 0x103accb6 */
  goto L_103accb6;
L_103accb4:;
  /* 103accb4 jmp 0x103acc74 */
  goto L_103acc74;
L_103accb6:;
  /* 103accb6 mov esp, ebp */
  ESP = (EBP);
  /* 103accb8 pop ebp */
  EBP = (pop32());
  /* 103accb9 ret  */
  ESPCHK(0x103acc70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ccc0 @ 0x103accc0 (26 bytes, 12 insns) */
void f_103accc0(void) {
  FTRACE(0x103accc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103accc0 push ebp */
  push32((uint32_t)(EBP));
  /* 103accc1 mov ebp, esp */
  EBP = (ESP);
  /* 103accc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103accc6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103accc8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103acccb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103accce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 103accd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103accd3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103accd5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 103accd8 pop ebp */
  EBP = (pop32());
  /* 103accd9 ret  */
  ESPCHK(0x103accc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cce0 @ 0x103acce0 (31 bytes, 14 insns) */
void f_103acce0(void) {
  FTRACE(0x103acce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103acce0 push ebp */
  push32((uint32_t)(EBP));
  /* 103acce1 mov ebp, esp */
  EBP = (ESP);
  /* 103acce3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103acce6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103acce8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103acceb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103accee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 103accf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103accf3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103accf5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103accf8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 103accfa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103accfd pop ebp */
  EBP = (pop32());
  /* 103accfe ret  */
  ESPCHK(0x103acce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd00 @ 0x103acd00 (27 bytes, 12 insns) */
void f_103acd00(void) {
  FTRACE(0x103acd00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103acd00 push ebp */
  push32((uint32_t)(EBP));
  /* 103acd01 mov ebp, esp */
  EBP = (ESP);
  /* 103acd03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103acd06 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103acd08 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103acd0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103acd0e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 103acd10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103acd13 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103acd15 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 103acd19 pop ebp */
  EBP = (pop32());
  /* 103acd1a ret  */
  ESPCHK(0x103acd00u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x103acd20 (145 bytes, 42 insns) */
void f_103acd20(void) {
  FTRACE(0x103acd20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103acd20 push ebp */
  push32((uint32_t)(EBP));
  /* 103acd21 mov ebp, esp */
  EBP = (ESP);
  /* 103acd23 push ecx */
  push32((uint32_t)(ECX));
  /* 103acd24 call 0x103acdd0 */
  push32(0x103acd29u); f_103acdd0();
  /* 103acd29 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103acd2c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 103acd2e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103acd35 jmp 0x103acd40 */
  goto L_103acd40;
L_103acd37:;
  /* 103acd37 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103acd3a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103acd3d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_103acd40:;
  /* 103acd40 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103acd44 jae 0x103acd6a */
  if (!C.cf) goto L_103acd6a;
  /* 103acd46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103acd49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103acd4c cmp ecx, dword ptr [eax*8 + 0x103cefb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x103cefb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103acd53 jne 0x103acd68 */
  if (!C.zf) goto L_103acd68;
  /* 103acd55 call 0x103acdc0 */
  push32(0x103acd5au); f_103acdc0();
  /* 103acd5a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103acd5d mov ecx, dword ptr [edx*8 + 0x103cefbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x103cefbc)));
  /* 103acd64 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 103acd66 jmp 0x103acdad */
  goto L_103acdad;
L_103acd68:;
  /* 103acd68 jmp 0x103acd37 */
  goto L_103acd37;
L_103acd6a:;
  /* 103acd6a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103acd6e jb 0x103acd83 */
  if (C.cf) goto L_103acd83;
  /* 103acd70 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103acd74 ja 0x103acd83 */
  if ((!C.cf&&!C.zf)) goto L_103acd83;
  /* 103acd76 call 0x103acdc0 */
  push32(0x103acd7bu); f_103acdc0();
  /* 103acd7b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 103acd81 jmp 0x103acdad */
  goto L_103acdad;
L_103acd83:;
  /* 103acd83 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103acd8a jb 0x103acda2 */
  if (C.cf) goto L_103acda2;
  /* 103acd8c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103acd93 ja 0x103acda2 */
  if ((!C.cf&&!C.zf)) goto L_103acda2;
  /* 103acd95 call 0x103acdc0 */
  push32(0x103acd9au); f_103acdc0();
  /* 103acd9a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 103acda0 jmp 0x103acdad */
  goto L_103acdad;
L_103acda2:;
  /* 103acda2 call 0x103acdc0 */
  push32(0x103acda7u); f_103acdc0();
  /* 103acda7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_103acdad:;
  /* 103acdad mov esp, ebp */
  ESP = (EBP);
  /* 103acdaf pop ebp */
  EBP = (pop32());
  /* 103acdb0 ret  */
  ESPCHK(0x103acd20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cdc0 @ 0x103acdc0 (13 bytes, 6 insns) */
void f_103acdc0(void) {
  FTRACE(0x103acdc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103acdc0 push ebp */
  push32((uint32_t)(EBP));
  /* 103acdc1 mov ebp, esp */
  EBP = (ESP);
  /* 103acdc3 call 0x103a4930 */
  push32(0x103acdc8u); f_103a4930();
  /* 103acdc8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103acdcb pop ebp */
  EBP = (pop32());
  /* 103acdcc ret  */
  ESPCHK(0x103acdc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cdd0 @ 0x103acdd0 (13 bytes, 6 insns) */
void f_103acdd0(void) {
  FTRACE(0x103acdd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103acdd0 push ebp */
  push32((uint32_t)(EBP));
  /* 103acdd1 mov ebp, esp */
  EBP = (ESP);
  /* 103acdd3 call 0x103a4930 */
  push32(0x103acdd8u); f_103a4930();
  /* 103acdd8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103acddb pop ebp */
  EBP = (pop32());
  /* 103acddc ret  */
  ESPCHK(0x103acdd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cde0 @ 0x103acde0 (664 bytes, 263 insns) [15 switch table(s)] */
void f_103acde0(void) {
  FTRACE(0x103acde0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103acde0 push ebp */
  push32((uint32_t)(EBP));
  /* 103acde1 mov ebp, esp */
  EBP = (ESP);
  /* 103acde3 push edi */
  push32((uint32_t)(EDI));
  /* 103acde4 push esi */
  push32((uint32_t)(ESI));
  /* 103acde5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 103acde8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103acdeb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 103acdee mov eax, ecx */
  EAX = (ECX);
  /* 103acdf0 mov edx, ecx */
  EDX = (ECX);
  /* 103acdf2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103acdf4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103acdf6 jbe 0x103ace00 */
  if ((C.cf||C.zf)) goto L_103ace00;
  /* 103acdf8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103acdfa jb 0x103acf78 */
  if (C.cf) goto L_103acf78;
L_103ace00:;
  /* 103ace00 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 103ace06 jne 0x103ace1c */
  if (!C.zf) goto L_103ace1c;
  /* 103ace08 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103ace0b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 103ace0e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ace11 jb 0x103ace3c */
  if (C.cf) goto L_103ace3c;
  /* 103ace13 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103ace15 jmp dword ptr [edx*4 + 0x103acf28] */
  switch (EDX) {
    case 0: goto L_103acf38;
    case 1: goto L_103acf40;
    case 2: goto L_103acf4c;
    case 3: goto L_103acf60;
    default: x86_unimpl("switch@0x103ace15 out of table"); return;
  }
L_103ace1c:;
  /* 103ace1c mov eax, edi */
  EAX = (EDI);
  /* 103ace1e mov edx, 3 */
  EDX = (0x3u);
  /* 103ace23 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ace26 jb 0x103ace34 */
  if (C.cf) goto L_103ace34;
  /* 103ace28 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 103ace2b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ace2d jmp dword ptr [eax*4 + 0x103ace40] */
  switch (EAX) {
    case 1: goto L_103ace50;
    case 2: goto L_103ace7c;
    case 3: goto L_103acea0;
    default: x86_unimpl("switch@0x103ace2d out of table"); return;
  }
L_103ace34:;
  /* 103ace34 jmp dword ptr [ecx*4 + 0x103acf38] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x103acf38)))); return;
  /* 103ace3b nop  */
  /* nop */
L_103ace3c:;
  /* 103ace3c jmp dword ptr [ecx*4 + 0x103acebc] */
  switch (ECX) {
    case 0: goto L_103acf1f;
    case 1: goto L_103acf0c;
    case 2: goto L_103acf04;
    case 3: goto L_103acefc;
    case 4: goto L_103acef4;
    case 5: goto L_103aceec;
    case 6: goto L_103acee4;
    case 7: goto L_103acedc;
    default: x86_unimpl("switch@0x103ace3c out of table"); return;
  }
  /* 103ace43 nop  */
  /* nop */
L_103ace50:;
  /* 103ace50 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103ace52 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103ace54 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103ace56 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103ace59 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103ace5c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103ace5f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103ace62 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103ace65 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103ace68 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 103ace6b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ace6e jb 0x103ace3c */
  if (C.cf) goto L_103ace3c;
  /* 103ace70 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103ace72 jmp dword ptr [edx*4 + 0x103acf28] */
  switch (EDX) {
    case 0: goto L_103acf38;
    case 1: goto L_103acf40;
    case 2: goto L_103acf4c;
    case 3: goto L_103acf60;
    default: x86_unimpl("switch@0x103ace72 out of table"); return;
  }
  /* 103ace79 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103ace7c:;
  /* 103ace7c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103ace7e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103ace80 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103ace82 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103ace85 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103ace88 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103ace8b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103ace8e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 103ace91 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ace94 jb 0x103ace3c */
  if (C.cf) goto L_103ace3c;
  /* 103ace96 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103ace98 jmp dword ptr [edx*4 + 0x103acf28] */
  switch (EDX) {
    case 0: goto L_103acf38;
    case 1: goto L_103acf40;
    case 2: goto L_103acf4c;
    case 3: goto L_103acf60;
    default: x86_unimpl("switch@0x103ace98 out of table"); return;
  }
  /* 103ace9f nop  */
  /* nop */
L_103acea0:;
  /* 103acea0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103acea2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103acea4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103acea6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 103acea7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103aceaa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103aceab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aceae jb 0x103ace3c */
  if (C.cf) goto L_103ace3c;
  /* 103aceb0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103aceb2 jmp dword ptr [edx*4 + 0x103acf28] */
  switch (EDX) {
    case 0: goto L_103acf38;
    case 1: goto L_103acf40;
    case 2: goto L_103acf4c;
    case 3: goto L_103acf60;
    default: x86_unimpl("switch@0x103aceb2 out of table"); return;
  }
  /* 103aceb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103acedc:;
  /* 103acedc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 103acee0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_103acee4:;
  /* 103acee4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 103acee8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_103aceec:;
  /* 103aceec mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 103acef0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_103acef4:;
  /* 103acef4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 103acef8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_103acefc:;
  /* 103acefc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 103acf00 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_103acf04:;
  /* 103acf04 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 103acf08 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_103acf0c:;
  /* 103acf0c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 103acf10 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 103acf14 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 103acf1b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103acf1d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_103acf1f:;
  /* 103acf1f jmp dword ptr [edx*4 + 0x103acf28] */
  switch (EDX) {
    case 0: goto L_103acf38;
    case 1: goto L_103acf40;
    case 2: goto L_103acf4c;
    case 3: goto L_103acf60;
    default: x86_unimpl("switch@0x103acf1f out of table"); return;
  }
  /* 103acf26 mov edi, edi */
  EDI = (EDI);
L_103acf38:;
  /* 103acf38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103acf3b pop esi */
  ESI = (pop32());
  /* 103acf3c pop edi */
  EDI = (pop32());
  /* 103acf3d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103acf3e ret  */
  ESPCHK(0x103acde0u, _esp0);
  ESP += 4; return;
  /* 103acf3f nop  */
  /* nop */
L_103acf40:;
  /* 103acf40 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103acf42 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103acf44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103acf47 pop esi */
  ESI = (pop32());
  /* 103acf48 pop edi */
  EDI = (pop32());
  /* 103acf49 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103acf4a ret  */
  ESPCHK(0x103acde0u, _esp0);
  ESP += 4; return;
  /* 103acf4b nop  */
  /* nop */
L_103acf4c:;
  /* 103acf4c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103acf4e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103acf50 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103acf53 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103acf56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103acf59 pop esi */
  ESI = (pop32());
  /* 103acf5a pop edi */
  EDI = (pop32());
  /* 103acf5b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103acf5c ret  */
  ESPCHK(0x103acde0u, _esp0);
  ESP += 4; return;
  /* 103acf5d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103acf60:;
  /* 103acf60 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103acf62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103acf64 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103acf67 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103acf6a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103acf6d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103acf70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103acf73 pop esi */
  ESI = (pop32());
  /* 103acf74 pop edi */
  EDI = (pop32());
  /* 103acf75 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103acf76 ret  */
  ESPCHK(0x103acde0u, _esp0);
  ESP += 4; return;
  /* 103acf77 nop  */
  /* nop */
L_103acf78:;
  /* 103acf78 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 103acf7c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 103acf80 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 103acf86 jne 0x103acfac */
  if (!C.zf) goto L_103acfac;
  /* 103acf88 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103acf8b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 103acf8e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103acf91 jb 0x103acfa0 */
  if (C.cf) goto L_103acfa0;
  /* 103acf93 std  */
  C.df=1;
  /* 103acf94 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103acf96 cld  */
  C.df=0;
  /* 103acf97 jmp dword ptr [edx*4 + 0x103ad0c0] */
  switch (EDX) {
    case 0: goto L_103ad0d0;
    case 1: goto L_103ad0d8;
    case 2: goto L_103ad0e8;
    case 3: goto L_103ad0fc;
    default: x86_unimpl("switch@0x103acf97 out of table"); return;
  }
  /* 103acf9e mov edi, edi */
  EDI = (EDI);
L_103acfa0:;
  /* 103acfa0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 103acfa2 jmp dword ptr [ecx*4 + 0x103ad070] */
  switch (ECX) {
    case 0: goto L_103ad0b7;
    default: x86_unimpl("switch@0x103acfa2 out of table"); return;
  }
  /* 103acfa9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103acfac:;
  /* 103acfac mov eax, edi */
  EAX = (EDI);
  /* 103acfae mov edx, 3 */
  EDX = (0x3u);
  /* 103acfb3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103acfb6 jb 0x103acfc4 */
  if (C.cf) goto L_103acfc4;
  /* 103acfb8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 103acfbb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103acfbd jmp dword ptr [eax*4 + 0x103acfc8] */
  switch (EAX) {
    case 1: goto L_103acfd8;
    case 2: goto L_103acff8;
    case 3: goto L_103ad020;
    default: x86_unimpl("switch@0x103acfbd out of table"); return;
  }
L_103acfc4:;
  /* 103acfc4 jmp dword ptr [ecx*4 + 0x103ad0c0] */
  switch (ECX) {
    case 0: goto L_103ad0d0;
    case 1: goto L_103ad0d8;
    case 2: goto L_103ad0e8;
    case 3: goto L_103ad0fc;
    default: x86_unimpl("switch@0x103acfc4 out of table"); return;
  }
  /* 103acfcb nop  */
  /* nop */
L_103acfd8:;
  /* 103acfd8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 103acfdb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103acfdd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 103acfe0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 103acfe1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103acfe4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 103acfe5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103acfe8 jb 0x103acfa0 */
  if (C.cf) goto L_103acfa0;
  /* 103acfea std  */
  C.df=1;
  /* 103acfeb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103acfed cld  */
  C.df=0;
  /* 103acfee jmp dword ptr [edx*4 + 0x103ad0c0] */
  switch (EDX) {
    case 0: goto L_103ad0d0;
    case 1: goto L_103ad0d8;
    case 2: goto L_103ad0e8;
    case 3: goto L_103ad0fc;
    default: x86_unimpl("switch@0x103acfee out of table"); return;
  }
  /* 103acff5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103acff8:;
  /* 103acff8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 103acffb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103acffd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 103ad000 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103ad003 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103ad006 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103ad009 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ad00c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ad00f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ad012 jb 0x103acfa0 */
  if (C.cf) goto L_103acfa0;
  /* 103ad014 std  */
  C.df=1;
  /* 103ad015 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103ad017 cld  */
  C.df=0;
  /* 103ad018 jmp dword ptr [edx*4 + 0x103ad0c0] */
  switch (EDX) {
    case 0: goto L_103ad0d0;
    case 1: goto L_103ad0d8;
    case 2: goto L_103ad0e8;
    case 3: goto L_103ad0fc;
    default: x86_unimpl("switch@0x103ad018 out of table"); return;
  }
  /* 103ad01f nop  */
  /* nop */
L_103ad020:;
  /* 103ad020 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 103ad023 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103ad025 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 103ad028 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103ad02b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103ad02e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103ad031 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103ad034 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103ad037 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ad03a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ad03d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ad040 jb 0x103acfa0 */
  if (C.cf) goto L_103acfa0;
  /* 103ad046 std  */
  C.df=1;
  /* 103ad047 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103ad049 cld  */
  C.df=0;
  /* 103ad04a jmp dword ptr [edx*4 + 0x103ad0c0] */
  switch (EDX) {
    case 0: goto L_103ad0d0;
    case 1: goto L_103ad0d8;
    case 2: goto L_103ad0e8;
    case 3: goto L_103ad0fc;
    default: x86_unimpl("switch@0x103ad04a out of table"); return;
  }
  /* 103ad051 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 103ad054 je 0x103ad026 */
  if (C.zf) goto L_103ad026;
  /* 103ad056 cmp dl, byte ptr [eax] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103ad058 jl 0x103ad02a */
  if ((C.sf!=C.of)) goto L_103ad02a;
  /* 103ad05a cmp dl, byte ptr [eax] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103ad05c test al, dl */
  { uint32_t _r=(AL)&(DL); fl_logic(_r,8); }
  /* 103ad05e cmp dl, byte ptr [eax] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103ad060 mov eax, ss */
  EAX = (C.seg_ss);
  /* 103ad062 cmp dl, byte ptr [eax] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103ad064 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 103ad065 sar byte ptr [edx], 1 */
  w8((uint32_t)(EDX), (sh_sar((uint32_t)(r8((uint32_t)(EDX))), (0x1u)&0x1f, 8)));
  /* 103ad067 adc byte ptr [eax + edx*8 - 0x2f5befc6], bl */
  { uint32_t _a=(r8((uint32_t)(EAX + EDX*8 + -0x2f5befc6))),_b=(BL),_r=_a+_b+C.cf; w8((uint32_t)(EAX + EDX*8 + -0x2f5befc6), (_r)); fl_add(_a,_b,_r,8); }
  /* 103ad06e cmp dl, byte ptr [eax] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103ad074 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 103ad078 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 103ad07c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 103ad080 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 103ad084 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 103ad088 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 103ad08c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 103ad090 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 103ad094 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 103ad098 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 103ad09c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 103ad0a0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 103ad0a4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 103ad0a8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 103ad0ac lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 103ad0b3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103ad0b5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_103ad0b7:;
  /* 103ad0b7 jmp dword ptr [edx*4 + 0x103ad0c0] */
  switch (EDX) {
    case 0: goto L_103ad0d0;
    case 1: goto L_103ad0d8;
    case 2: goto L_103ad0e8;
    case 3: goto L_103ad0fc;
    default: x86_unimpl("switch@0x103ad0b7 out of table"); return;
  }
  /* 103ad0be mov edi, edi */
  EDI = (EDI);
L_103ad0d0:;
  /* 103ad0d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ad0d3 pop esi */
  ESI = (pop32());
  /* 103ad0d4 pop edi */
  EDI = (pop32());
  /* 103ad0d5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103ad0d6 ret  */
  ESPCHK(0x103acde0u, _esp0);
  ESP += 4; return;
  /* 103ad0d7 nop  */
  /* nop */
L_103ad0d8:;
  /* 103ad0d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 103ad0db mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 103ad0de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ad0e1 pop esi */
  ESI = (pop32());
  /* 103ad0e2 pop edi */
  EDI = (pop32());
  /* 103ad0e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103ad0e4 ret  */
  ESPCHK(0x103acde0u, _esp0);
  ESP += 4; return;
  /* 103ad0e5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103ad0e8:;
  /* 103ad0e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 103ad0eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 103ad0ee mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103ad0f1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103ad0f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ad0f7 pop esi */
  ESI = (pop32());
  /* 103ad0f8 pop edi */
  EDI = (pop32());
  /* 103ad0f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103ad0fa ret  */
  ESPCHK(0x103acde0u, _esp0);
  ESP += 4; return;
  /* 103ad0fb nop  */
  /* nop */
L_103ad0fc:;
  /* 103ad0fc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 103ad0ff mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 103ad102 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103ad105 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103ad108 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103ad10b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103ad10e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ad111 pop esi */
  ESI = (pop32());
  /* 103ad112 pop edi */
  EDI = (pop32());
  /* 103ad113 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103ad114 ret  */
  ESPCHK(0x103acde0u, _esp0);
  ESP += 4; return;
L_103ad026: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x103ad026 (unresolved jump table)"); return;
L_103ad02a: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x103ad02a (unresolved jump table)"); return;
}

/* FUN_1000d120 @ 0x103ad120 (421 bytes, 148 insns) */
void f_103ad120(void) {
  FTRACE(0x103ad120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ad120 push ebp */
  push32((uint32_t)(EBP));
  /* 103ad121 mov ebp, esp */
  EBP = (ESP);
  /* 103ad123 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 103ad125 push 0x103cc238 */
  push32((uint32_t)(0x103cc238u));
  /* 103ad12a push 0x103adff8 */
  push32((uint32_t)(0x103adff8u));
  /* 103ad12f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 103ad135 push eax */
  push32((uint32_t)(EAX));
  /* 103ad136 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 103ad13d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ad140 push ebx */
  push32((uint32_t)(EBX));
  /* 103ad141 push esi */
  push32((uint32_t)(ESI));
  /* 103ad142 push edi */
  push32((uint32_t)(EDI));
  /* 103ad143 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 103ad146 cmp dword ptr [0x103d07e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d07e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ad14d jne 0x103ad19e */
  if (!C.zf) goto L_103ad19e;
  /* 103ad14f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 103ad152 push eax */
  push32((uint32_t)(EAX));
  /* 103ad153 push 1 */
  push32((uint32_t)(0x1u));
  /* 103ad155 push 0x103cc234 */
  push32((uint32_t)(0x103cc234u));
  /* 103ad15a push 1 */
  push32((uint32_t)(0x1u));
  /* 103ad15c call dword ptr [0x103d32ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32ec))), 0x103ad162u);
  /* 103ad162 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ad164 je 0x103ad172 */
  if (C.zf) goto L_103ad172;
  /* 103ad166 mov dword ptr [0x103d07e4], 1 */
  w32((uint32_t)(0x103d07e4), (0x1u));
  /* 103ad170 jmp 0x103ad19e */
  goto L_103ad19e;
L_103ad172:;
  /* 103ad172 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 103ad175 push ecx */
  push32((uint32_t)(ECX));
  /* 103ad176 push 1 */
  push32((uint32_t)(0x1u));
  /* 103ad178 push 0x103cc230 */
  push32((uint32_t)(0x103cc230u));
  /* 103ad17d push 1 */
  push32((uint32_t)(0x1u));
  /* 103ad17f push 0 */
  push32((uint32_t)(0x0u));
  /* 103ad181 call dword ptr [0x103d32f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32f0))), 0x103ad187u);
  /* 103ad187 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ad189 je 0x103ad197 */
  if (C.zf) goto L_103ad197;
  /* 103ad18b mov dword ptr [0x103d07e4], 2 */
  w32((uint32_t)(0x103d07e4), (0x2u));
  /* 103ad195 jmp 0x103ad19e */
  goto L_103ad19e;
L_103ad197:;
  /* 103ad197 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ad199 jmp 0x103ad2c8 */
  goto L_103ad2c8;
L_103ad19e:;
  /* 103ad19e cmp dword ptr [0x103d07e4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x103d07e4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ad1a5 jne 0x103ad1d5 */
  if (!C.zf) goto L_103ad1d5;
  /* 103ad1a7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ad1ab jne 0x103ad1b6 */
  if (!C.zf) goto L_103ad1b6;
  /* 103ad1ad mov edx, dword ptr [0x103d07f0] */
  EDX = (r32((uint32_t)(0x103d07f0)));
  /* 103ad1b3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_103ad1b6:;
  /* 103ad1b6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103ad1b9 push eax */
  push32((uint32_t)(EAX));
  /* 103ad1ba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103ad1bd push ecx */
  push32((uint32_t)(ECX));
  /* 103ad1be mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ad1c1 push edx */
  push32((uint32_t)(EDX));
  /* 103ad1c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ad1c5 push eax */
  push32((uint32_t)(EAX));
  /* 103ad1c6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 103ad1c9 push ecx */
  push32((uint32_t)(ECX));
  /* 103ad1ca call dword ptr [0x103d32f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32f0))), 0x103ad1d0u);
  /* 103ad1d0 jmp 0x103ad2c8 */
  goto L_103ad2c8;
L_103ad1d5:;
  /* 103ad1d5 cmp dword ptr [0x103d07e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x103d07e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ad1dc jne 0x103ad2c6 */
  if (!C.zf) goto L_103ad2c6;
  /* 103ad1e2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ad1e6 jne 0x103ad1f1 */
  if (!C.zf) goto L_103ad1f1;
  /* 103ad1e8 mov edx, dword ptr [0x103d0800] */
  EDX = (r32((uint32_t)(0x103d0800)));
  /* 103ad1ee mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_103ad1f1:;
  /* 103ad1f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103ad1f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103ad1f5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103ad1f8 push eax */
  push32((uint32_t)(EAX));
  /* 103ad1f9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ad1fc push ecx */
  push32((uint32_t)(ECX));
  /* 103ad1fd mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 103ad200 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 103ad202 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ad204 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 103ad207 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ad20a push edx */
  push32((uint32_t)(EDX));
  /* 103ad20b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103ad20e push eax */
  push32((uint32_t)(EAX));
  /* 103ad20f call dword ptr [0x103d32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32f4))), 0x103ad215u);
  /* 103ad215 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 103ad218 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ad21c jne 0x103ad225 */
  if (!C.zf) goto L_103ad225;
  /* 103ad21e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ad220 jmp 0x103ad2c8 */
  goto L_103ad2c8;
L_103ad225:;
  /* 103ad225 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103ad22c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ad22f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 103ad231 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ad234 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 103ad236 call 0x103a8090 */
  push32(0x103ad23bu); f_103a8090();
  /* 103ad23b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 103ad23e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 103ad241 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103ad244 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 103ad247 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ad24a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 103ad24c push edx */
  push32((uint32_t)(EDX));
  /* 103ad24d push 0 */
  push32((uint32_t)(0x0u));
  /* 103ad24f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103ad252 push eax */
  push32((uint32_t)(EAX));
  /* 103ad253 call 0x103a8c60 */
  push32(0x103ad258u); f_103a8c60();
  /* 103ad258 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ad25b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 103ad262 jmp 0x103ad27b */
  goto L_103ad27b;
  /* 103ad264 mov eax, 1 */
  EAX = (0x1u);
  /* 103ad269 ret  */
  ESPCHK(0x103ad120u, _esp0);
  ESP += 4; return;
  /* 103ad26a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 103ad26d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 103ad274 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_103ad27b:;
  /* 103ad27b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ad27f jne 0x103ad285 */
  if (!C.zf) goto L_103ad285;
  /* 103ad281 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ad283 jmp 0x103ad2c8 */
  goto L_103ad2c8;
L_103ad285:;
  /* 103ad285 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ad288 push ecx */
  push32((uint32_t)(ECX));
  /* 103ad289 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103ad28c push edx */
  push32((uint32_t)(EDX));
  /* 103ad28d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103ad290 push eax */
  push32((uint32_t)(EAX));
  /* 103ad291 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ad294 push ecx */
  push32((uint32_t)(ECX));
  /* 103ad295 push 1 */
  push32((uint32_t)(0x1u));
  /* 103ad297 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103ad29a push edx */
  push32((uint32_t)(EDX));
  /* 103ad29b call dword ptr [0x103d32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32f4))), 0x103ad2a1u);
  /* 103ad2a1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 103ad2a4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ad2a8 jne 0x103ad2ae */
  if (!C.zf) goto L_103ad2ae;
  /* 103ad2aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ad2ac jmp 0x103ad2c8 */
  goto L_103ad2c8;
L_103ad2ae:;
  /* 103ad2ae mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103ad2b1 push eax */
  push32((uint32_t)(EAX));
  /* 103ad2b2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 103ad2b5 push ecx */
  push32((uint32_t)(ECX));
  /* 103ad2b6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103ad2b9 push edx */
  push32((uint32_t)(EDX));
  /* 103ad2ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ad2bd push eax */
  push32((uint32_t)(EAX));
  /* 103ad2be call dword ptr [0x103d32ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32ec))), 0x103ad2c4u);
  /* 103ad2c4 jmp 0x103ad2c8 */
  goto L_103ad2c8;
L_103ad2c6:;
  /* 103ad2c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103ad2c8:;
  /* 103ad2c8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 103ad2cb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ad2ce mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 103ad2d5 pop edi */
  EDI = (pop32());
  /* 103ad2d6 pop esi */
  ESI = (pop32());
  /* 103ad2d7 pop ebx */
  EBX = (pop32());
  /* 103ad2d8 mov esp, ebp */
  ESP = (EBP);
  /* 103ad2da pop ebp */
  EBP = (pop32());
  /* 103ad2db ret  */
  ESPCHK(0x103ad120u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2e0 @ 0x103ad2e0 (727 bytes, 263 insns) */
void f_103ad2e0(void) {
  FTRACE(0x103ad2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ad2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 103ad2e1 mov ebp, esp */
  EBP = (ESP);
  /* 103ad2e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 103ad2e5 push 0x103cc248 */
  push32((uint32_t)(0x103cc248u));
  /* 103ad2ea push 0x103adff8 */
  push32((uint32_t)(0x103adff8u));
  /* 103ad2ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 103ad2f5 push eax */
  push32((uint32_t)(EAX));
  /* 103ad2f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 103ad2fd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ad300 push ebx */
  push32((uint32_t)(EBX));
  /* 103ad301 push esi */
  push32((uint32_t)(ESI));
  /* 103ad302 push edi */
  push32((uint32_t)(EDI));
  /* 103ad303 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 103ad306 cmp dword ptr [0x103d0808], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0808))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ad30d jne 0x103ad366 */
  if (!C.zf) goto L_103ad366;
  /* 103ad30f push 0 */
  push32((uint32_t)(0x0u));
  /* 103ad311 push 0 */
  push32((uint32_t)(0x0u));
  /* 103ad313 push 1 */
  push32((uint32_t)(0x1u));
  /* 103ad315 push 0x103cc234 */
  push32((uint32_t)(0x103cc234u));
  /* 103ad31a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 103ad31f push 0 */
  push32((uint32_t)(0x0u));
  /* 103ad321 call dword ptr [0x103d32e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32e4))), 0x103ad327u);
  /* 103ad327 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ad329 je 0x103ad337 */
  if (C.zf) goto L_103ad337;
  /* 103ad32b mov dword ptr [0x103d0808], 1 */
  w32((uint32_t)(0x103d0808), (0x1u));
  /* 103ad335 jmp 0x103ad366 */
  goto L_103ad366;
L_103ad337:;
  /* 103ad337 push 0 */
  push32((uint32_t)(0x0u));
  /* 103ad339 push 0 */
  push32((uint32_t)(0x0u));
  /* 103ad33b push 1 */
  push32((uint32_t)(0x1u));
  /* 103ad33d push 0x103cc230 */
  push32((uint32_t)(0x103cc230u));
  /* 103ad342 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 103ad347 push 0 */
  push32((uint32_t)(0x0u));
  /* 103ad349 call dword ptr [0x103d32e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32e8))), 0x103ad34fu);
  /* 103ad34f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ad351 je 0x103ad35f */
  if (C.zf) goto L_103ad35f;
  /* 103ad353 mov dword ptr [0x103d0808], 2 */
  w32((uint32_t)(0x103d0808), (0x2u));
  /* 103ad35d jmp 0x103ad366 */
  goto L_103ad366;
L_103ad35f:;
  /* 103ad35f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ad361 jmp 0x103ad5d1 */
  goto L_103ad5d1;
L_103ad366:;
  /* 103ad366 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ad36a jle 0x103ad37f */
  if ((C.zf||C.sf!=C.of)) goto L_103ad37f;
  /* 103ad36c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103ad36f push eax */
  push32((uint32_t)(EAX));
  /* 103ad370 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103ad373 push ecx */
  push32((uint32_t)(ECX));
  /* 103ad374 call 0x103ad5f0 */
  push32(0x103ad379u); f_103ad5f0();
  /* 103ad379 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ad37c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_103ad37f:;
  /* 103ad37f cmp dword ptr [0x103d0808], 2 */
  { uint32_t _a=(r32((uint32_t)(0x103d0808))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ad386 jne 0x103ad3ab */
  if (!C.zf) goto L_103ad3ab;
  /* 103ad388 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 103ad38b push edx */
  push32((uint32_t)(EDX));
  /* 103ad38c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103ad38f push eax */
  push32((uint32_t)(EAX));
  /* 103ad390 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103ad393 push ecx */
  push32((uint32_t)(ECX));
  /* 103ad394 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103ad397 push edx */
  push32((uint32_t)(EDX));
  /* 103ad398 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ad39b push eax */
  push32((uint32_t)(EAX));
  /* 103ad39c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ad39f push ecx */
  push32((uint32_t)(ECX));
  /* 103ad3a0 call dword ptr [0x103d32e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32e8))), 0x103ad3a6u);
  /* 103ad3a6 jmp 0x103ad5d1 */
  goto L_103ad5d1;
L_103ad3ab:;
  /* 103ad3ab cmp dword ptr [0x103d0808], 1 */
  { uint32_t _a=(r32((uint32_t)(0x103d0808))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ad3b2 jne 0x103ad5cf */
  if (!C.zf) goto L_103ad5cf;
  /* 103ad3b8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ad3bc jne 0x103ad3c7 */
  if (!C.zf) goto L_103ad3c7;
  /* 103ad3be mov edx, dword ptr [0x103d0800] */
  EDX = (r32((uint32_t)(0x103d0800)));
  /* 103ad3c4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_103ad3c7:;
  /* 103ad3c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103ad3c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103ad3cb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103ad3ce push eax */
  push32((uint32_t)(EAX));
  /* 103ad3cf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103ad3d2 push ecx */
  push32((uint32_t)(ECX));
  /* 103ad3d3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 103ad3d6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 103ad3d8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ad3da and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 103ad3dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ad3e0 push edx */
  push32((uint32_t)(EDX));
  /* 103ad3e1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 103ad3e4 push eax */
  push32((uint32_t)(EAX));
  /* 103ad3e5 call dword ptr [0x103d32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32f4))), 0x103ad3ebu);
  /* 103ad3eb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 103ad3ee cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ad3f2 jne 0x103ad3fb */
  if (!C.zf) goto L_103ad3fb;
  /* 103ad3f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ad3f6 jmp 0x103ad5d1 */
  goto L_103ad5d1;
L_103ad3fb:;
  /* 103ad3fb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103ad402 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103ad405 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 103ad407 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ad40a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 103ad40c call 0x103a8090 */
  push32(0x103ad411u); f_103a8090();
  /* 103ad411 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 103ad414 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 103ad417 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103ad41a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 103ad41d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 103ad424 jmp 0x103ad43d */
  goto L_103ad43d;
  /* 103ad426 mov eax, 1 */
  EAX = (0x1u);
  /* 103ad42b ret  */
  ESPCHK(0x103ad2e0u, _esp0);
  ESP += 4; return;
  /* 103ad42c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 103ad42f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 103ad436 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_103ad43d:;
  /* 103ad43d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ad441 jne 0x103ad44a */
  if (!C.zf) goto L_103ad44a;
  /* 103ad443 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ad445 jmp 0x103ad5d1 */
  goto L_103ad5d1;
L_103ad44a:;
  /* 103ad44a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103ad44d push edx */
  push32((uint32_t)(EDX));
  /* 103ad44e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103ad451 push eax */
  push32((uint32_t)(EAX));
  /* 103ad452 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103ad455 push ecx */
  push32((uint32_t)(ECX));
  /* 103ad456 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103ad459 push edx */
  push32((uint32_t)(EDX));
  /* 103ad45a push 1 */
  push32((uint32_t)(0x1u));
  /* 103ad45c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 103ad45f push eax */
  push32((uint32_t)(EAX));
  /* 103ad460 call dword ptr [0x103d32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32f4))), 0x103ad466u);
  /* 103ad466 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ad468 jne 0x103ad471 */
  if (!C.zf) goto L_103ad471;
  /* 103ad46a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ad46c jmp 0x103ad5d1 */
  goto L_103ad5d1;
L_103ad471:;
  /* 103ad471 push 0 */
  push32((uint32_t)(0x0u));
  /* 103ad473 push 0 */
  push32((uint32_t)(0x0u));
  /* 103ad475 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103ad478 push ecx */
  push32((uint32_t)(ECX));
  /* 103ad479 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103ad47c push edx */
  push32((uint32_t)(EDX));
  /* 103ad47d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ad480 push eax */
  push32((uint32_t)(EAX));
  /* 103ad481 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ad484 push ecx */
  push32((uint32_t)(ECX));
  /* 103ad485 call dword ptr [0x103d32e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32e4))), 0x103ad48bu);
  /* 103ad48b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 103ad48e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ad492 jne 0x103ad49b */
  if (!C.zf) goto L_103ad49b;
  /* 103ad494 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ad496 jmp 0x103ad5d1 */
  goto L_103ad5d1;
L_103ad49b:;
  /* 103ad49b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ad49e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 103ad4a4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ad4a6 je 0x103ad4eb */
  if (C.zf) goto L_103ad4eb;
  /* 103ad4a8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ad4ac je 0x103ad4e6 */
  if (C.zf) goto L_103ad4e6;
  /* 103ad4ae mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103ad4b1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ad4b4 jle 0x103ad4bd */
  if ((C.zf||C.sf!=C.of)) goto L_103ad4bd;
  /* 103ad4b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ad4b8 jmp 0x103ad5d1 */
  goto L_103ad5d1;
L_103ad4bd:;
  /* 103ad4bd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 103ad4c0 push ecx */
  push32((uint32_t)(ECX));
  /* 103ad4c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103ad4c4 push edx */
  push32((uint32_t)(EDX));
  /* 103ad4c5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103ad4c8 push eax */
  push32((uint32_t)(EAX));
  /* 103ad4c9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103ad4cc push ecx */
  push32((uint32_t)(ECX));
  /* 103ad4cd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ad4d0 push edx */
  push32((uint32_t)(EDX));
  /* 103ad4d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ad4d4 push eax */
  push32((uint32_t)(EAX));
  /* 103ad4d5 call dword ptr [0x103d32e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32e4))), 0x103ad4dbu);
  /* 103ad4db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ad4dd jne 0x103ad4e6 */
  if (!C.zf) goto L_103ad4e6;
  /* 103ad4df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ad4e1 jmp 0x103ad5d1 */
  goto L_103ad5d1;
L_103ad4e6:;
  /* 103ad4e6 jmp 0x103ad5ca */
  goto L_103ad5ca;
L_103ad4eb:;
  /* 103ad4eb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 103ad4ee mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 103ad4f1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 103ad4f8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103ad4fb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 103ad4fd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ad500 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 103ad502 call 0x103a8090 */
  push32(0x103ad507u); f_103a8090();
  /* 103ad507 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 103ad50a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 103ad50d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 103ad510 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 103ad513 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 103ad51a jmp 0x103ad533 */
  goto L_103ad533;
  /* 103ad51c mov eax, 1 */
  EAX = (0x1u);
  /* 103ad521 ret  */
  ESPCHK(0x103ad2e0u, _esp0);
  ESP += 4; return;
  /* 103ad522 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 103ad525 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 103ad52c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_103ad533:;
  /* 103ad533 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ad537 jne 0x103ad540 */
  if (!C.zf) goto L_103ad540;
  /* 103ad539 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ad53b jmp 0x103ad5d1 */
  goto L_103ad5d1;
L_103ad540:;
  /* 103ad540 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103ad543 push eax */
  push32((uint32_t)(EAX));
  /* 103ad544 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ad547 push ecx */
  push32((uint32_t)(ECX));
  /* 103ad548 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103ad54b push edx */
  push32((uint32_t)(EDX));
  /* 103ad54c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103ad54f push eax */
  push32((uint32_t)(EAX));
  /* 103ad550 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ad553 push ecx */
  push32((uint32_t)(ECX));
  /* 103ad554 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ad557 push edx */
  push32((uint32_t)(EDX));
  /* 103ad558 call dword ptr [0x103d32e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32e4))), 0x103ad55eu);
  /* 103ad55e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ad560 jne 0x103ad566 */
  if (!C.zf) goto L_103ad566;
  /* 103ad562 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ad564 jmp 0x103ad5d1 */
  goto L_103ad5d1;
L_103ad566:;
  /* 103ad566 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ad56a jne 0x103ad59a */
  if (!C.zf) goto L_103ad59a;
  /* 103ad56c push 0 */
  push32((uint32_t)(0x0u));
  /* 103ad56e push 0 */
  push32((uint32_t)(0x0u));
  /* 103ad570 push 0 */
  push32((uint32_t)(0x0u));
  /* 103ad572 push 0 */
  push32((uint32_t)(0x0u));
  /* 103ad574 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103ad577 push eax */
  push32((uint32_t)(EAX));
  /* 103ad578 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ad57b push ecx */
  push32((uint32_t)(ECX));
  /* 103ad57c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 103ad581 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 103ad584 push edx */
  push32((uint32_t)(EDX));
  /* 103ad585 call dword ptr [0x103d33a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d33a4))), 0x103ad58bu);
  /* 103ad58b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 103ad58e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ad592 jne 0x103ad598 */
  if (!C.zf) goto L_103ad598;
  /* 103ad594 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ad596 jmp 0x103ad5d1 */
  goto L_103ad5d1;
L_103ad598:;
  /* 103ad598 jmp 0x103ad5ca */
  goto L_103ad5ca;
L_103ad59a:;
  /* 103ad59a push 0 */
  push32((uint32_t)(0x0u));
  /* 103ad59c push 0 */
  push32((uint32_t)(0x0u));
  /* 103ad59e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 103ad5a1 push eax */
  push32((uint32_t)(EAX));
  /* 103ad5a2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103ad5a5 push ecx */
  push32((uint32_t)(ECX));
  /* 103ad5a6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103ad5a9 push edx */
  push32((uint32_t)(EDX));
  /* 103ad5aa mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 103ad5ad push eax */
  push32((uint32_t)(EAX));
  /* 103ad5ae push 0x220 */
  push32((uint32_t)(0x220u));
  /* 103ad5b3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 103ad5b6 push ecx */
  push32((uint32_t)(ECX));
  /* 103ad5b7 call dword ptr [0x103d33a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d33a4))), 0x103ad5bdu);
  /* 103ad5bd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 103ad5c0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ad5c4 jne 0x103ad5ca */
  if (!C.zf) goto L_103ad5ca;
  /* 103ad5c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ad5c8 jmp 0x103ad5d1 */
  goto L_103ad5d1;
L_103ad5ca:;
  /* 103ad5ca mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103ad5cd jmp 0x103ad5d1 */
  goto L_103ad5d1;
L_103ad5cf:;
  /* 103ad5cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103ad5d1:;
  /* 103ad5d1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 103ad5d4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ad5d7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 103ad5de pop edi */
  EDI = (pop32());
  /* 103ad5df pop esi */
  ESI = (pop32());
  /* 103ad5e0 pop ebx */
  EBX = (pop32());
  /* 103ad5e1 mov esp, ebp */
  ESP = (EBP);
  /* 103ad5e3 pop ebp */
  EBP = (pop32());
  /* 103ad5e4 ret  */
  ESPCHK(0x103ad2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d5f0 @ 0x103ad5f0 (80 bytes, 32 insns) */
void f_103ad5f0(void) {
  FTRACE(0x103ad5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ad5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 103ad5f1 mov ebp, esp */
  EBP = (ESP);
  /* 103ad5f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ad5f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ad5f9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103ad5fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ad5ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103ad602:;
  /* 103ad602 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ad605 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ad608 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ad60b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103ad60e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ad610 je 0x103ad627 */
  if (C.zf) goto L_103ad627;
  /* 103ad612 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ad615 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103ad618 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ad61a je 0x103ad627 */
  if (C.zf) goto L_103ad627;
  /* 103ad61c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ad61f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ad622 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103ad625 jmp 0x103ad602 */
  goto L_103ad602;
L_103ad627:;
  /* 103ad627 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ad62a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103ad62d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ad62f jne 0x103ad639 */
  if (!C.zf) goto L_103ad639;
  /* 103ad631 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ad634 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ad637 jmp 0x103ad63c */
  goto L_103ad63c;
L_103ad639:;
  /* 103ad639 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_103ad63c:;
  /* 103ad63c mov esp, ebp */
  ESP = (EBP);
  /* 103ad63e pop ebp */
  EBP = (pop32());
  /* 103ad63f ret  */
  ESPCHK(0x103ad5f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d640 @ 0x103ad640 (130 bytes, 43 insns) */
void f_103ad640(void) {
  FTRACE(0x103ad640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ad640 push ebp */
  push32((uint32_t)(EBP));
  /* 103ad641 mov ebp, esp */
  EBP = (ESP);
  /* 103ad643 push ecx */
  push32((uint32_t)(ECX));
  /* 103ad644 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ad647 cmp eax, dword ptr [0x103d20fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x103d20fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ad64d jae 0x103ad671 */
  if (!C.cf) goto L_103ad671;
  /* 103ad64f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ad652 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 103ad655 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ad658 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 103ad65b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ad65e mov eax, dword ptr [ecx*4 + 0x103d1fc0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x103d1fc0)));
  /* 103ad665 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 103ad66a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 103ad66d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ad66f jne 0x103ad68c */
  if (!C.zf) goto L_103ad68c;
L_103ad671:;
  /* 103ad671 call 0x103acdc0 */
  push32(0x103ad676u); f_103acdc0();
  /* 103ad676 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 103ad67c call 0x103acdd0 */
  push32(0x103ad681u); f_103acdd0();
  /* 103ad681 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 103ad687 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103ad68a jmp 0x103ad6be */
  goto L_103ad6be;
L_103ad68c:;
  /* 103ad68c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ad68f push edx */
  push32((uint32_t)(EDX));
  /* 103ad690 call 0x103ae5e0 */
  push32(0x103ad695u); f_103ae5e0();
  /* 103ad695 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ad698 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103ad69b push eax */
  push32((uint32_t)(EAX));
  /* 103ad69c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ad69f push ecx */
  push32((uint32_t)(ECX));
  /* 103ad6a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ad6a3 push edx */
  push32((uint32_t)(EDX));
  /* 103ad6a4 call 0x103ad6d0 */
  push32(0x103ad6a9u); f_103ad6d0();
  /* 103ad6a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ad6ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103ad6af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ad6b2 push eax */
  push32((uint32_t)(EAX));
  /* 103ad6b3 call 0x103ae670 */
  push32(0x103ad6b8u); f_103ae670();
  /* 103ad6b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ad6bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_103ad6be:;
  /* 103ad6be mov esp, ebp */
  ESP = (EBP);
  /* 103ad6c0 pop ebp */
  EBP = (pop32());
  /* 103ad6c1 ret  */
  ESPCHK(0x103ad640u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d6d0 @ 0x103ad6d0 (178 bytes, 56 insns) */
void f_103ad6d0(void) {
  FTRACE(0x103ad6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ad6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 103ad6d1 mov ebp, esp */
  EBP = (ESP);
  /* 103ad6d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ad6d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ad6d9 push eax */
  push32((uint32_t)(EAX));
  /* 103ad6da call 0x103ae460 */
  push32(0x103ad6dfu); f_103ae460();
  /* 103ad6df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ad6e2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103ad6e5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ad6e9 jne 0x103ad6fe */
  if (!C.zf) goto L_103ad6fe;
  /* 103ad6eb call 0x103acdc0 */
  push32(0x103ad6f0u); f_103acdc0();
  /* 103ad6f0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 103ad6f6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103ad6f9 jmp 0x103ad77e */
  goto L_103ad77e;
L_103ad6fe:;
  /* 103ad6fe mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103ad701 push ecx */
  push32((uint32_t)(ECX));
  /* 103ad702 push 0 */
  push32((uint32_t)(0x0u));
  /* 103ad704 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ad707 push edx */
  push32((uint32_t)(EDX));
  /* 103ad708 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ad70b push eax */
  push32((uint32_t)(EAX));
  /* 103ad70c call dword ptr [0x103d32e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32e0))), 0x103ad712u);
  /* 103ad712 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103ad715 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ad719 jne 0x103ad726 */
  if (!C.zf) goto L_103ad726;
  /* 103ad71b call dword ptr [0x103d3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3378))), 0x103ad721u);
  /* 103ad721 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103ad724 jmp 0x103ad72d */
  goto L_103ad72d;
L_103ad726:;
  /* 103ad726 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_103ad72d:;
  /* 103ad72d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ad731 je 0x103ad744 */
  if (C.zf) goto L_103ad744;
  /* 103ad733 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ad736 push ecx */
  push32((uint32_t)(ECX));
  /* 103ad737 call 0x103acd20 */
  push32(0x103ad73cu); f_103acd20();
  /* 103ad73c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ad73f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103ad742 jmp 0x103ad77e */
  goto L_103ad77e;
L_103ad744:;
  /* 103ad744 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ad747 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 103ad74a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ad74d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 103ad750 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ad753 mov ecx, dword ptr [edx*4 + 0x103d1fc0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x103d1fc0)));
  /* 103ad75a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 103ad75e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 103ad761 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ad764 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 103ad767 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ad76a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 103ad76d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ad770 mov eax, dword ptr [eax*4 + 0x103d1fc0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x103d1fc0)));
  /* 103ad777 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 103ad77b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_103ad77e:;
  /* 103ad77e mov esp, ebp */
  ESP = (EBP);
  /* 103ad780 pop ebp */
  EBP = (pop32());
  /* 103ad781 ret  */
  ESPCHK(0x103ad6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d790 @ 0x103ad790 (130 bytes, 43 insns) */
void f_103ad790(void) {
  FTRACE(0x103ad790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ad790 push ebp */
  push32((uint32_t)(EBP));
  /* 103ad791 mov ebp, esp */
  EBP = (ESP);
  /* 103ad793 push ecx */
  push32((uint32_t)(ECX));
  /* 103ad794 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ad797 cmp eax, dword ptr [0x103d20fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x103d20fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ad79d jae 0x103ad7c1 */
  if (!C.cf) goto L_103ad7c1;
  /* 103ad79f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ad7a2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 103ad7a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ad7a8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 103ad7ab imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ad7ae mov eax, dword ptr [ecx*4 + 0x103d1fc0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x103d1fc0)));
  /* 103ad7b5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 103ad7ba and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 103ad7bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ad7bf jne 0x103ad7dc */
  if (!C.zf) goto L_103ad7dc;
L_103ad7c1:;
  /* 103ad7c1 call 0x103acdc0 */
  push32(0x103ad7c6u); f_103acdc0();
  /* 103ad7c6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 103ad7cc call 0x103acdd0 */
  push32(0x103ad7d1u); f_103acdd0();
  /* 103ad7d1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 103ad7d7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103ad7da jmp 0x103ad80e */
  goto L_103ad80e;
L_103ad7dc:;
  /* 103ad7dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ad7df push edx */
  push32((uint32_t)(EDX));
  /* 103ad7e0 call 0x103ae5e0 */
  push32(0x103ad7e5u); f_103ae5e0();
  /* 103ad7e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ad7e8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103ad7eb push eax */
  push32((uint32_t)(EAX));
  /* 103ad7ec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ad7ef push ecx */
  push32((uint32_t)(ECX));
  /* 103ad7f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ad7f3 push edx */
  push32((uint32_t)(EDX));
  /* 103ad7f4 call 0x103ad820 */
  push32(0x103ad7f9u); f_103ad820();
  /* 103ad7f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ad7fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103ad7ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ad802 push eax */
  push32((uint32_t)(EAX));
  /* 103ad803 call 0x103ae670 */
  push32(0x103ad808u); f_103ae670();
  /* 103ad808 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ad80b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_103ad80e:;
  /* 103ad80e mov esp, ebp */
  ESP = (EBP);
  /* 103ad810 pop ebp */
  EBP = (pop32());
  /* 103ad811 ret  */
  ESPCHK(0x103ad790u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d820 @ 0x103ad820 (627 bytes, 182 insns) */
void f_103ad820(void) {
  FTRACE(0x103ad820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ad820 push ebp */
  push32((uint32_t)(EBP));
  /* 103ad821 mov ebp, esp */
  EBP = (ESP);
  /* 103ad823 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ad829 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 103ad830 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ad833 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 103ad839 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ad83d jne 0x103ad846 */
  if (!C.zf) goto L_103ad846;
  /* 103ad83f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ad841 jmp 0x103ada8f */
  goto L_103ada8f;
L_103ad846:;
  /* 103ad846 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ad849 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 103ad84c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ad84f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 103ad852 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ad855 mov eax, dword ptr [ecx*4 + 0x103d1fc0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x103d1fc0)));
  /* 103ad85c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 103ad861 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 103ad864 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ad866 je 0x103ad878 */
  if (C.zf) goto L_103ad878;
  /* 103ad868 push 2 */
  push32((uint32_t)(0x2u));
  /* 103ad86a push 0 */
  push32((uint32_t)(0x0u));
  /* 103ad86c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ad86f push edx */
  push32((uint32_t)(EDX));
  /* 103ad870 call 0x103ad6d0 */
  push32(0x103ad875u); f_103ad6d0();
  /* 103ad875 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103ad878:;
  /* 103ad878 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ad87b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 103ad87e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ad881 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 103ad884 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ad887 mov edx, dword ptr [eax*4 + 0x103d1fc0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x103d1fc0)));
  /* 103ad88e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 103ad893 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 103ad898 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ad89a je 0x103ad9ac */
  if (C.zf) goto L_103ad9ac;
  /* 103ad8a0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ad8a3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103ad8a6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_103ad8ad:;
  /* 103ad8ad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ad8b0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ad8b3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ad8b6 jae 0x103ad9aa */
  if (!C.cf) goto L_103ad9aa;
  /* 103ad8bc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 103ad8c2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_103ad8c5:;
  /* 103ad8c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ad8c8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 103ad8ce sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ad8d0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ad8d6 jge 0x103ad937 */
  if ((C.sf==C.of)) goto L_103ad937;
  /* 103ad8d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ad8db sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ad8de cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ad8e1 jae 0x103ad937 */
  if (!C.cf) goto L_103ad937;
  /* 103ad8e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ad8e6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103ad8e8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 103ad8ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ad8f1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ad8f4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103ad8f7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 103ad8fe cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ad901 jne 0x103ad921 */
  if (!C.zf) goto L_103ad921;
  /* 103ad903 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 103ad909 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ad90c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 103ad912 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ad915 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 103ad918 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ad91b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ad91e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_103ad921:;
  /* 103ad921 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ad924 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 103ad92a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 103ad92c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ad92f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ad932 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103ad935 jmp 0x103ad8c5 */
  goto L_103ad8c5;
L_103ad937:;
  /* 103ad937 push 0 */
  push32((uint32_t)(0x0u));
  /* 103ad939 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 103ad93f push edx */
  push32((uint32_t)(EDX));
  /* 103ad940 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ad943 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 103ad949 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ad94b push eax */
  push32((uint32_t)(EAX));
  /* 103ad94c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 103ad952 push edx */
  push32((uint32_t)(EDX));
  /* 103ad953 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ad956 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 103ad959 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ad95c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 103ad95f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ad962 mov edx, dword ptr [eax*4 + 0x103d1fc0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x103d1fc0)));
  /* 103ad969 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 103ad96c push eax */
  push32((uint32_t)(EAX));
  /* 103ad96d call dword ptr [0x103d3338] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3338))), 0x103ad973u);
  /* 103ad973 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ad975 je 0x103ad99a */
  if (C.zf) goto L_103ad99a;
  /* 103ad977 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ad97a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ad980 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 103ad983 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ad986 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 103ad98c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ad98e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ad994 jge 0x103ad998 */
  if ((C.sf==C.of)) goto L_103ad998;
  /* 103ad996 jmp 0x103ad9aa */
  goto L_103ad9aa;
L_103ad998:;
  /* 103ad998 jmp 0x103ad9a5 */
  goto L_103ad9a5;
L_103ad99a:;
  /* 103ad99a call dword ptr [0x103d3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3378))), 0x103ad9a0u);
  /* 103ad9a0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103ad9a3 jmp 0x103ad9aa */
  goto L_103ad9aa;
L_103ad9a5:;
  /* 103ad9a5 jmp 0x103ad8ad */
  goto L_103ad8ad;
L_103ad9aa:;
  /* 103ad9aa jmp 0x103ad9fc */
  goto L_103ad9fc;
L_103ad9ac:;
  /* 103ad9ac push 0 */
  push32((uint32_t)(0x0u));
  /* 103ad9ae lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 103ad9b4 push ecx */
  push32((uint32_t)(ECX));
  /* 103ad9b5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103ad9b8 push edx */
  push32((uint32_t)(EDX));
  /* 103ad9b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ad9bc push eax */
  push32((uint32_t)(EAX));
  /* 103ad9bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ad9c0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 103ad9c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ad9c6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 103ad9c9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ad9cc mov eax, dword ptr [ecx*4 + 0x103d1fc0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x103d1fc0)));
  /* 103ad9d3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 103ad9d6 push ecx */
  push32((uint32_t)(ECX));
  /* 103ad9d7 call dword ptr [0x103d3338] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3338))), 0x103ad9ddu);
  /* 103ad9dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ad9df je 0x103ad9f3 */
  if (C.zf) goto L_103ad9f3;
  /* 103ad9e1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 103ad9e8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 103ad9ee mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 103ad9f1 jmp 0x103ad9fc */
  goto L_103ad9fc;
L_103ad9f3:;
  /* 103ad9f3 call dword ptr [0x103d3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3378))), 0x103ad9f9u);
  /* 103ad9f9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_103ad9fc:;
  /* 103ad9fc cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ada00 jne 0x103ada86 */
  if (!C.zf) goto L_103ada86;
  /* 103ada06 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ada0a je 0x103ada3a */
  if (C.zf) goto L_103ada3a;
  /* 103ada0c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ada10 jne 0x103ada29 */
  if (!C.zf) goto L_103ada29;
  /* 103ada12 call 0x103acdc0 */
  push32(0x103ada17u); f_103acdc0();
  /* 103ada17 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 103ada1d call 0x103acdd0 */
  push32(0x103ada22u); f_103acdd0();
  /* 103ada22 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ada25 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 103ada27 jmp 0x103ada35 */
  goto L_103ada35;
L_103ada29:;
  /* 103ada29 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ada2c push edx */
  push32((uint32_t)(EDX));
  /* 103ada2d call 0x103acd20 */
  push32(0x103ada32u); f_103acd20();
  /* 103ada32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103ada35:;
  /* 103ada35 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103ada38 jmp 0x103ada8f */
  goto L_103ada8f;
L_103ada3a:;
  /* 103ada3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ada3d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 103ada40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ada43 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 103ada46 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ada49 mov edx, dword ptr [eax*4 + 0x103d1fc0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x103d1fc0)));
  /* 103ada50 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 103ada55 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 103ada58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ada5a je 0x103ada6b */
  if (C.zf) goto L_103ada6b;
  /* 103ada5c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ada5f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103ada62 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ada65 jne 0x103ada6b */
  if (!C.zf) goto L_103ada6b;
  /* 103ada67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ada69 jmp 0x103ada8f */
  goto L_103ada8f;
L_103ada6b:;
  /* 103ada6b call 0x103acdc0 */
  push32(0x103ada70u); f_103acdc0();
  /* 103ada70 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 103ada76 call 0x103acdd0 */
  push32(0x103ada7bu); f_103acdd0();
  /* 103ada7b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 103ada81 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103ada84 jmp 0x103ada8f */
  goto L_103ada8f;
L_103ada86:;
  /* 103ada86 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103ada89 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_103ada8f:;
  /* 103ada8f mov esp, ebp */
  ESP = (EBP);
  /* 103ada91 pop ebp */
  EBP = (pop32());
  /* 103ada92 ret  */
  ESPCHK(0x103ad820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000daa0 @ 0x103adaa0 (199 bytes, 68 insns) */
void f_103adaa0(void) {
  FTRACE(0x103adaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103adaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 103adaa1 mov ebp, esp */
  EBP = (ESP);
  /* 103adaa3 push ecx */
  push32((uint32_t)(ECX));
  /* 103adaa4 push ebx */
  push32((uint32_t)(EBX));
  /* 103adaa5 push esi */
  push32((uint32_t)(ESI));
  /* 103adaa6 push edi */
  push32((uint32_t)(EDI));
L_103adaa7:;
  /* 103adaa7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103adaab jne 0x103adacb */
  if (!C.zf) goto L_103adacb;
  /* 103adaad push 0x103cc194 */
  push32((uint32_t)(0x103cc194u));
  /* 103adab2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103adab4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 103adab6 push 0x103cc260 */
  push32((uint32_t)(0x103cc260u));
  /* 103adabb push 2 */
  push32((uint32_t)(0x2u));
  /* 103adabd call 0x103a3fb0 */
  push32(0x103adac2u); f_103a3fb0();
  /* 103adac2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103adac5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103adac8 jne 0x103adacb */
  if (!C.zf) goto L_103adacb;
  /* 103adaca int3  */
  x86_unimpl("int3 @ 0x103adaca");
L_103adacb:;
  /* 103adacb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103adacd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103adacf jne 0x103adaa7 */
  if (!C.zf) goto L_103adaa7;
  /* 103adad1 mov ecx, dword ptr [0x103d080c] */
  ECX = (r32((uint32_t)(0x103d080c)));
  /* 103adad7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103adada mov dword ptr [0x103d080c], ecx */
  w32((uint32_t)(0x103d080c), (ECX));
  /* 103adae0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103adae3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103adae6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 103adae8 push 0x103cc260 */
  push32((uint32_t)(0x103cc260u));
  /* 103adaed push 2 */
  push32((uint32_t)(0x2u));
  /* 103adaef push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 103adaf4 call 0x103a4ef0 */
  push32(0x103adaf9u); f_103a4ef0();
  /* 103adaf9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103adafc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103adaff mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 103adb02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103adb05 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103adb09 je 0x103adb26 */
  if (C.zf) goto L_103adb26;
  /* 103adb0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103adb0e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 103adb11 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 103adb14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103adb17 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 103adb1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103adb1d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 103adb24 jmp 0x103adb4b */
  goto L_103adb4b;
L_103adb26:;
  /* 103adb26 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103adb29 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103adb2c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 103adb2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103adb32 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 103adb35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103adb38 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103adb3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103adb3e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 103adb41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103adb44 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_103adb4b:;
  /* 103adb4b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103adb4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103adb51 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 103adb54 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103adb56 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103adb59 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 103adb60 pop edi */
  EDI = (pop32());
  /* 103adb61 pop esi */
  ESI = (pop32());
  /* 103adb62 pop ebx */
  EBX = (pop32());
  /* 103adb63 mov esp, ebp */
  ESP = (EBP);
  /* 103adb65 pop ebp */
  EBP = (pop32());
  /* 103adb66 ret  */
  ESPCHK(0x103adaa0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x103adb70 (50 bytes, 17 insns) */
void f_103adb70(void) {
  FTRACE(0x103adb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103adb70 push ebp */
  push32((uint32_t)(EBP));
  /* 103adb71 mov ebp, esp */
  EBP = (ESP);
  /* 103adb73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103adb76 cmp eax, dword ptr [0x103d20fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x103d20fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103adb7c jb 0x103adb82 */
  if (C.cf) goto L_103adb82;
  /* 103adb7e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103adb80 jmp 0x103adba0 */
  goto L_103adba0;
L_103adb82:;
  /* 103adb82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103adb85 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 103adb88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103adb8b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 103adb8e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103adb91 mov eax, dword ptr [ecx*4 + 0x103d1fc0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x103d1fc0)));
  /* 103adb98 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 103adb9d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_103adba0:;
  /* 103adba0 pop ebp */
  EBP = (pop32());
  /* 103adba1 ret  */
  ESPCHK(0x103adb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dbb0 @ 0x103adbb0 (300 bytes, 80 insns) */
void f_103adbb0(void) {
  FTRACE(0x103adbb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103adbb0 push ebp */
  push32((uint32_t)(EBP));
  /* 103adbb1 mov ebp, esp */
  EBP = (ESP);
  /* 103adbb3 push ecx */
  push32((uint32_t)(ECX));
  /* 103adbb4 cmp dword ptr [0x103d1cc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d1cc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103adbbb jne 0x103adbc9 */
  if (!C.zf) goto L_103adbc9;
  /* 103adbbd mov dword ptr [0x103d1cc0], 0x200 */
  w32((uint32_t)(0x103d1cc0), (0x200u));
  /* 103adbc7 jmp 0x103adbdc */
  goto L_103adbdc;
L_103adbc9:;
  /* 103adbc9 cmp dword ptr [0x103d1cc0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x103d1cc0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103adbd0 jge 0x103adbdc */
  if ((C.sf==C.of)) goto L_103adbdc;
  /* 103adbd2 mov dword ptr [0x103d1cc0], 0x14 */
  w32((uint32_t)(0x103d1cc0), (0x14u));
L_103adbdc:;
  /* 103adbdc push 0x83 */
  push32((uint32_t)(0x83u));
  /* 103adbe1 push 0x103cc26c */
  push32((uint32_t)(0x103cc26cu));
  /* 103adbe6 push 2 */
  push32((uint32_t)(0x2u));
  /* 103adbe8 push 4 */
  push32((uint32_t)(0x4u));
  /* 103adbea mov eax, dword ptr [0x103d1cc0] */
  EAX = (r32((uint32_t)(0x103d1cc0)));
  /* 103adbef push eax */
  push32((uint32_t)(EAX));
  /* 103adbf0 call 0x103a5300 */
  push32(0x103adbf5u); f_103a5300();
  /* 103adbf5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103adbf8 mov dword ptr [0x103d0980], eax */
  w32((uint32_t)(0x103d0980), (EAX));
  /* 103adbfd cmp dword ptr [0x103d0980], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0980))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103adc04 jne 0x103adc45 */
  if (!C.zf) goto L_103adc45;
  /* 103adc06 mov dword ptr [0x103d1cc0], 0x14 */
  w32((uint32_t)(0x103d1cc0), (0x14u));
  /* 103adc10 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 103adc15 push 0x103cc26c */
  push32((uint32_t)(0x103cc26cu));
  /* 103adc1a push 2 */
  push32((uint32_t)(0x2u));
  /* 103adc1c push 4 */
  push32((uint32_t)(0x4u));
  /* 103adc1e mov ecx, dword ptr [0x103d1cc0] */
  ECX = (r32((uint32_t)(0x103d1cc0)));
  /* 103adc24 push ecx */
  push32((uint32_t)(ECX));
  /* 103adc25 call 0x103a5300 */
  push32(0x103adc2au); f_103a5300();
  /* 103adc2a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103adc2d mov dword ptr [0x103d0980], eax */
  w32((uint32_t)(0x103d0980), (EAX));
  /* 103adc32 cmp dword ptr [0x103d0980], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0980))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103adc39 jne 0x103adc45 */
  if (!C.zf) goto L_103adc45;
  /* 103adc3b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 103adc3d call 0x103a3e60 */
  push32(0x103adc42u); f_103a3e60();
  /* 103adc42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103adc45:;
  /* 103adc45 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103adc4c jmp 0x103adc57 */
  goto L_103adc57;
L_103adc4e:;
  /* 103adc4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103adc51 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103adc54 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_103adc57:;
  /* 103adc57 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103adc5b jge 0x103adc76 */
  if ((C.sf==C.of)) goto L_103adc76;
  /* 103adc5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103adc60 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 103adc63 add eax, 0x103cf120 */
  { uint32_t _a=(EAX),_b=(0x103cf120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103adc68 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103adc6b mov edx, dword ptr [0x103d0980] */
  EDX = (r32((uint32_t)(0x103d0980)));
  /* 103adc71 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 103adc74 jmp 0x103adc4e */
  goto L_103adc4e;
L_103adc76:;
  /* 103adc76 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103adc7d jmp 0x103adc88 */
  goto L_103adc88;
L_103adc7f:;
  /* 103adc7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103adc82 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103adc85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103adc88:;
  /* 103adc88 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103adc8c jge 0x103adcd8 */
  if ((C.sf==C.of)) goto L_103adcd8;
  /* 103adc8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103adc91 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 103adc94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103adc97 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 103adc9a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103adc9d mov eax, dword ptr [ecx*4 + 0x103d1fc0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x103d1fc0)));
  /* 103adca4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103adca8 je 0x103adcc6 */
  if (C.zf) goto L_103adcc6;
  /* 103adcaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103adcad sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 103adcb0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103adcb3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 103adcb6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103adcb9 mov eax, dword ptr [ecx*4 + 0x103d1fc0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x103d1fc0)));
  /* 103adcc0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103adcc4 jne 0x103adcd6 */
  if (!C.zf) goto L_103adcd6;
L_103adcc6:;
  /* 103adcc6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103adcc9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 103adccc mov dword ptr [ecx + 0x103cf130], 0xffffffff */
  w32((uint32_t)(ECX + 0x103cf130), (0xffffffffu));
L_103adcd6:;
  /* 103adcd6 jmp 0x103adc7f */
  goto L_103adc7f;
L_103adcd8:;
  /* 103adcd8 mov esp, ebp */
  ESP = (EBP);
  /* 103adcda pop ebp */
  EBP = (pop32());
  /* 103adcdb ret  */
  ESPCHK(0x103adbb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dce0 @ 0x103adce0 (26 bytes, 9 insns) */
void f_103adce0(void) {
  FTRACE(0x103adce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103adce0 push ebp */
  push32((uint32_t)(EBP));
  /* 103adce1 mov ebp, esp */
  EBP = (ESP);
  /* 103adce3 call 0x103ae8e0 */
  push32(0x103adce8u); f_103ae8e0();
  /* 103adce8 movsx eax, byte ptr [0x103d0628] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x103d0628))));
  /* 103adcef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103adcf1 je 0x103adcf8 */
  if (C.zf) goto L_103adcf8;
  /* 103adcf3 call 0x103ae6a0 */
  push32(0x103adcf8u); f_103ae6a0();
L_103adcf8:;
  /* 103adcf8 pop ebp */
  EBP = (pop32());
  /* 103adcf9 ret  */
  ESPCHK(0x103adce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd00 @ 0x103add00 (61 bytes, 20 insns) */
void f_103add00(void) {
  FTRACE(0x103add00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103add00 push ebp */
  push32((uint32_t)(EBP));
  /* 103add01 mov ebp, esp */
  EBP = (ESP);
  /* 103add03 cmp dword ptr [ebp + 8], 0x103cf120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x103cf120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103add0a jb 0x103add2e */
  if (C.cf) goto L_103add2e;
  /* 103add0c cmp dword ptr [ebp + 8], 0x103cf380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x103cf380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103add13 ja 0x103add2e */
  if ((!C.cf&&!C.zf)) goto L_103add2e;
  /* 103add15 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103add18 sub eax, 0x103cf120 */
  { uint32_t _a=(EAX),_b=(0x103cf120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103add1d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 103add20 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103add23 push eax */
  push32((uint32_t)(EAX));
  /* 103add24 call 0x103a88f0 */
  push32(0x103add29u); f_103a88f0();
  /* 103add29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103add2c jmp 0x103add3b */
  goto L_103add3b;
L_103add2e:;
  /* 103add2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103add31 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103add34 push ecx */
  push32((uint32_t)(ECX));
  /* 103add35 call dword ptr [0x103d331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d331c))), 0x103add3bu);
L_103add3b:;
  /* 103add3b pop ebp */
  EBP = (pop32());
  /* 103add3c ret  */
  ESPCHK(0x103add00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd40 @ 0x103add40 (41 bytes, 16 insns) */
void f_103add40(void) {
  FTRACE(0x103add40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103add40 push ebp */
  push32((uint32_t)(EBP));
  /* 103add41 mov ebp, esp */
  EBP = (ESP);
  /* 103add43 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103add47 jge 0x103add5a */
  if ((C.sf==C.of)) goto L_103add5a;
  /* 103add49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103add4c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103add4f push eax */
  push32((uint32_t)(EAX));
  /* 103add50 call 0x103a88f0 */
  push32(0x103add55u); f_103a88f0();
  /* 103add55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103add58 jmp 0x103add67 */
  goto L_103add67;
L_103add5a:;
  /* 103add5a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103add5d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103add60 push ecx */
  push32((uint32_t)(ECX));
  /* 103add61 call dword ptr [0x103d331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d331c))), 0x103add67u);
L_103add67:;
  /* 103add67 pop ebp */
  EBP = (pop32());
  /* 103add68 ret  */
  ESPCHK(0x103add40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd70 @ 0x103add70 (61 bytes, 20 insns) */
void f_103add70(void) {
  FTRACE(0x103add70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103add70 push ebp */
  push32((uint32_t)(EBP));
  /* 103add71 mov ebp, esp */
  EBP = (ESP);
  /* 103add73 cmp dword ptr [ebp + 8], 0x103cf120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x103cf120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103add7a jb 0x103add9e */
  if (C.cf) goto L_103add9e;
  /* 103add7c cmp dword ptr [ebp + 8], 0x103cf380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x103cf380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103add83 ja 0x103add9e */
  if ((!C.cf&&!C.zf)) goto L_103add9e;
  /* 103add85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103add88 sub eax, 0x103cf120 */
  { uint32_t _a=(EAX),_b=(0x103cf120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103add8d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 103add90 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103add93 push eax */
  push32((uint32_t)(EAX));
  /* 103add94 call 0x103a8990 */
  push32(0x103add99u); f_103a8990();
  /* 103add99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103add9c jmp 0x103addab */
  goto L_103addab;
L_103add9e:;
  /* 103add9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103adda1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103adda4 push ecx */
  push32((uint32_t)(ECX));
  /* 103adda5 call dword ptr [0x103d3318] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3318))), 0x103addabu);
L_103addab:;
  /* 103addab pop ebp */
  EBP = (pop32());
  /* 103addac ret  */
  ESPCHK(0x103add70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ddb0 @ 0x103addb0 (41 bytes, 16 insns) */
void f_103addb0(void) {
  FTRACE(0x103addb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103addb0 push ebp */
  push32((uint32_t)(EBP));
  /* 103addb1 mov ebp, esp */
  EBP = (ESP);
  /* 103addb3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103addb7 jge 0x103addca */
  if ((C.sf==C.of)) goto L_103addca;
  /* 103addb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103addbc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103addbf push eax */
  push32((uint32_t)(EAX));
  /* 103addc0 call 0x103a8990 */
  push32(0x103addc5u); f_103a8990();
  /* 103addc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103addc8 jmp 0x103addd7 */
  goto L_103addd7;
L_103addca:;
  /* 103addca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103addcd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103addd0 push ecx */
  push32((uint32_t)(ECX));
  /* 103addd1 call dword ptr [0x103d3318] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3318))), 0x103addd7u);
L_103addd7:;
  /* 103addd7 pop ebp */
  EBP = (pop32());
  /* 103addd8 ret  */
  ESPCHK(0x103addb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dde0 @ 0x103adde0 (119 bytes, 34 insns) */
void f_103adde0(void) {
  FTRACE(0x103adde0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103adde0 push ebp */
  push32((uint32_t)(EBP));
  /* 103adde1 mov ebp, esp */
  EBP = (ESP);
  /* 103adde3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103adde6 push 0x103d097c */
  push32((uint32_t)(0x103d097cu));
  /* 103addeb call dword ptr [0x103d334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d334c))), 0x103addf1u);
  /* 103addf1 cmp dword ptr [0x103d096c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d096c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103addf8 je 0x103ade18 */
  if (C.zf) goto L_103ade18;
  /* 103addfa push 0x103d097c */
  push32((uint32_t)(0x103d097cu));
  /* 103addff call dword ptr [0x103d333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d333c))), 0x103ade05u);
  /* 103ade05 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 103ade07 call 0x103a88f0 */
  push32(0x103ade0cu); f_103a88f0();
  /* 103ade0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ade0f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 103ade16 jmp 0x103ade1f */
  goto L_103ade1f;
L_103ade18:;
  /* 103ade18 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_103ade1f:;
  /* 103ade1f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 103ade23 push eax */
  push32((uint32_t)(EAX));
  /* 103ade24 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ade27 push ecx */
  push32((uint32_t)(ECX));
  /* 103ade28 call 0x103ade60 */
  push32(0x103ade2du); f_103ade60();
  /* 103ade2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ade30 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103ade33 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ade37 je 0x103ade45 */
  if (C.zf) goto L_103ade45;
  /* 103ade39 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 103ade3b call 0x103a8990 */
  push32(0x103ade40u); f_103a8990();
  /* 103ade40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ade43 jmp 0x103ade50 */
  goto L_103ade50;
L_103ade45:;
  /* 103ade45 push 0x103d097c */
  push32((uint32_t)(0x103d097cu));
  /* 103ade4a call dword ptr [0x103d333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d333c))), 0x103ade50u);
L_103ade50:;
  /* 103ade50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ade53 mov esp, ebp */
  ESP = (EBP);
  /* 103ade55 pop ebp */
  EBP = (pop32());
  /* 103ade56 ret  */
  ESPCHK(0x103adde0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de60 @ 0x103ade60 (160 bytes, 50 insns) */
void f_103ade60(void) {
  FTRACE(0x103ade60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ade60 push ebp */
  push32((uint32_t)(EBP));
  /* 103ade61 mov ebp, esp */
  EBP = (ESP);
  /* 103ade63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ade66 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ade6a jne 0x103ade73 */
  if (!C.zf) goto L_103ade73;
  /* 103ade6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ade6e jmp 0x103adefc */
  goto L_103adefc;
L_103ade73:;
  /* 103ade73 cmp dword ptr [0x103d07f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d07f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ade7a jne 0x103adeaa */
  if (!C.zf) goto L_103adeaa;
  /* 103ade7c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ade7f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103ade84 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ade89 jle 0x103ade9b */
  if ((C.zf||C.sf!=C.of)) goto L_103ade9b;
  /* 103ade8b call 0x103acdc0 */
  push32(0x103ade90u); f_103acdc0();
  /* 103ade90 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 103ade96 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103ade99 jmp 0x103adefc */
  goto L_103adefc;
L_103ade9b:;
  /* 103ade9b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ade9e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 103adea1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 103adea3 mov eax, 1 */
  EAX = (0x1u);
  /* 103adea8 jmp 0x103adefc */
  goto L_103adefc;
L_103adeaa:;
  /* 103adeaa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 103adeb1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 103adeb4 push eax */
  push32((uint32_t)(EAX));
  /* 103adeb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103adeb7 mov ecx, dword ptr [0x103ceea4] */
  ECX = (r32((uint32_t)(0x103ceea4)));
  /* 103adebd push ecx */
  push32((uint32_t)(ECX));
  /* 103adebe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103adec1 push edx */
  push32((uint32_t)(EDX));
  /* 103adec2 push 1 */
  push32((uint32_t)(0x1u));
  /* 103adec4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 103adec7 push eax */
  push32((uint32_t)(EAX));
  /* 103adec8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 103adecd mov ecx, dword ptr [0x103d0800] */
  ECX = (r32((uint32_t)(0x103d0800)));
  /* 103aded3 push ecx */
  push32((uint32_t)(ECX));
  /* 103aded4 call dword ptr [0x103d33a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d33a4))), 0x103adedau);
  /* 103adeda mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103adedd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103adee1 je 0x103adee9 */
  if (C.zf) goto L_103adee9;
  /* 103adee3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103adee7 je 0x103adef9 */
  if (C.zf) goto L_103adef9;
L_103adee9:;
  /* 103adee9 call 0x103acdc0 */
  push32(0x103adeeeu); f_103acdc0();
  /* 103adeee mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 103adef4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103adef7 jmp 0x103adefc */
  goto L_103adefc;
L_103adef9:;
  /* 103adef9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_103adefc:;
  /* 103adefc mov esp, ebp */
  ESP = (EBP);
  /* 103adefe pop ebp */
  EBP = (pop32());
  /* 103adeff ret  */
  ESPCHK(0x103ade60u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x103adf00 (32 bytes, 18 insns) */
void f_103adf00(void) {
  FTRACE(0x103adf00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103adf00 push ebp */
  push32((uint32_t)(EBP));
  /* 103adf01 mov ebp, esp */
  EBP = (ESP);
  /* 103adf03 push ebx */
  push32((uint32_t)(EBX));
  /* 103adf04 push esi */
  push32((uint32_t)(ESI));
  /* 103adf05 push edi */
  push32((uint32_t)(EDI));
  /* 103adf06 push ebp */
  push32((uint32_t)(EBP));
  /* 103adf07 push 0 */
  push32((uint32_t)(0x0u));
  /* 103adf09 push 0 */
  push32((uint32_t)(0x0u));
  /* 103adf0b push 0x103adf18 */
  push32((uint32_t)(0x103adf18u));
  /* 103adf10 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 103adf13 call 0x103b564c */
  push32(0x103adf18u); f_103b564c();
  /* 103adf18 pop ebp */
  EBP = (pop32());
  /* 103adf19 pop edi */
  EDI = (pop32());
  /* 103adf1a pop esi */
  ESI = (pop32());
  /* 103adf1b pop ebx */
  EBX = (pop32());
  /* 103adf1c mov esp, ebp */
  ESP = (EBP);
  /* 103adf1e pop ebp */
  EBP = (pop32());
  /* 103adf1f ret  */
  ESPCHK(0x103adf00u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x103adf42 (104 bytes, 33 insns) */
void f_103adf42(void) {
  FTRACE(0x103adf42u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103adf42 push ebx */
  push32((uint32_t)(EBX));
  /* 103adf43 push esi */
  push32((uint32_t)(ESI));
  /* 103adf44 push edi */
  push32((uint32_t)(EDI));
  /* 103adf45 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 103adf49 push eax */
  push32((uint32_t)(EAX));
  /* 103adf4a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 103adf4c push 0x103adf20 */
  push32((uint32_t)(0x103adf20u));
  /* 103adf51 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 103adf58 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_103adf5f:;
  /* 103adf5f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 103adf63 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 103adf66 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 103adf69 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103adf6c je 0x103adf9c */
  if (C.zf) goto L_103adf9c;
  /* 103adf6e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103adf72 je 0x103adf9c */
  if (C.zf) goto L_103adf9c;
  /* 103adf74 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 103adf77 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 103adf7a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 103adf7e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 103adf81 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103adf86 jne 0x103adf9a */
  if (!C.zf) goto L_103adf9a;
  /* 103adf88 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 103adf8d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 103adf91 call 0x103adfd6 */
  push32(0x103adf96u); f_103adfd6();
  /* 103adf96 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x103adf9au);
L_103adf9a:;
  /* 103adf9a jmp 0x103adf5f */
  goto L_103adf5f;
L_103adf9c:;
  /* 103adf9c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 103adfa3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103adfa6 pop edi */
  EDI = (pop32());
  /* 103adfa7 pop esi */
  ESI = (pop32());
  /* 103adfa8 pop ebx */
  EBX = (pop32());
  /* 103adfa9 ret  */
  ESPCHK(0x103adf42u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dfd6 @ 0x103adfd6 (24 bytes, 10 insns) */
void f_103adfd6(void) {
  FTRACE(0x103adfd6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103adfd6 push ebx */
  push32((uint32_t)(EBX));
  /* 103adfd7 push ecx */
  push32((uint32_t)(ECX));
  /* 103adfd8 mov ebx, 0x103cf3b8 */
  EBX = (0x103cf3b8u);
  /* 103adfdd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103adfe0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 103adfe3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 103adfe6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 103adfe9 pop ecx */
  ECX = (pop32());
  /* 103adfea pop ebx */
  EBX = (pop32());
  /* 103adfeb ret 4 */
  ESPCHK(0x103adfd6u, _esp0);
  ESP += 8; return;
}

/* FUN_1000e0b5 @ 0x103ae0b5 (27 bytes, 11 insns) */
void f_103ae0b5(void) {
  FTRACE(0x103ae0b5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ae0b5 push ebp */
  push32((uint32_t)(EBP));
  /* 103ae0b6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 103ae0ba mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 103ae0bc mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 103ae0bf push eax */
  push32((uint32_t)(EAX));
  /* 103ae0c0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 103ae0c3 push eax */
  push32((uint32_t)(EAX));
  /* 103ae0c4 call 0x103adf42 */
  push32(0x103ae0c9u); f_103adf42();
  /* 103ae0c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae0cc pop ebp */
  EBP = (pop32());
  /* 103ae0cd ret 4 */
  ESPCHK(0x103ae0b5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000e0d0 @ 0x103ae0d0 (482 bytes, 138 insns) */
void f_103ae0d0(void) {
  FTRACE(0x103ae0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ae0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 103ae0d1 mov ebp, esp */
  EBP = (ESP);
  /* 103ae0d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ae0d6 push esi */
  push32((uint32_t)(ESI));
  /* 103ae0d7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 103ae0de push 0x12 */
  push32((uint32_t)(0x12u));
  /* 103ae0e0 call 0x103a88f0 */
  push32(0x103ae0e5u); f_103a88f0();
  /* 103ae0e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae0e8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 103ae0ef jmp 0x103ae0fa */
  goto L_103ae0fa;
L_103ae0f1:;
  /* 103ae0f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ae0f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae0f7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_103ae0fa:;
  /* 103ae0fa cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae0fe jge 0x103ae2a0 */
  if ((C.sf==C.of)) goto L_103ae2a0;
  /* 103ae104 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ae107 cmp dword ptr [ecx*4 + 0x103d1fc0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x103d1fc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae10f je 0x103ae206 */
  if (C.zf) goto L_103ae206;
  /* 103ae115 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ae118 mov eax, dword ptr [edx*4 + 0x103d1fc0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x103d1fc0)));
  /* 103ae11f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103ae122 jmp 0x103ae12d */
  goto L_103ae12d;
L_103ae124:;
  /* 103ae124 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ae127 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae12a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103ae12d:;
  /* 103ae12d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ae130 mov eax, dword ptr [edx*4 + 0x103d1fc0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x103d1fc0)));
  /* 103ae137 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae13c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae13f jae 0x103ae1f6 */
  if (!C.cf) goto L_103ae1f6;
  /* 103ae145 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ae148 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 103ae14c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 103ae14f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ae151 jne 0x103ae1f1 */
  if (!C.zf) goto L_103ae1f1;
  /* 103ae157 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ae15a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae15e jne 0x103ae199 */
  if (!C.zf) goto L_103ae199;
  /* 103ae160 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 103ae162 call 0x103a88f0 */
  push32(0x103ae167u); f_103a88f0();
  /* 103ae167 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae16a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ae16d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae171 jne 0x103ae18f */
  if (!C.zf) goto L_103ae18f;
  /* 103ae173 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ae176 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae179 push edx */
  push32((uint32_t)(EDX));
  /* 103ae17a call dword ptr [0x103d3320] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3320))), 0x103ae180u);
  /* 103ae180 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ae183 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 103ae186 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae189 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ae18c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_103ae18f:;
  /* 103ae18f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 103ae191 call 0x103a8990 */
  push32(0x103ae196u); f_103a8990();
  /* 103ae196 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103ae199:;
  /* 103ae199 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ae19c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae19f push eax */
  push32((uint32_t)(EAX));
  /* 103ae1a0 call dword ptr [0x103d331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d331c))), 0x103ae1a6u);
  /* 103ae1a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ae1a9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 103ae1ad and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 103ae1b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ae1b2 je 0x103ae1c6 */
  if (C.zf) goto L_103ae1c6;
  /* 103ae1b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ae1b7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae1ba push eax */
  push32((uint32_t)(EAX));
  /* 103ae1bb call dword ptr [0x103d3318] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3318))), 0x103ae1c1u);
  /* 103ae1c1 jmp 0x103ae124 */
  goto L_103ae124;
L_103ae1c6:;
  /* 103ae1c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ae1c9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 103ae1cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ae1d2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 103ae1d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ae1d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ae1db sub eax, dword ptr [edx*4 + 0x103d1fc0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x103d1fc0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ae1e2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103ae1e3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 103ae1e8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103ae1ea add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae1ec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103ae1ef jmp 0x103ae1f6 */
  goto L_103ae1f6;
L_103ae1f1:;
  /* 103ae1f1 jmp 0x103ae124 */
  goto L_103ae124;
L_103ae1f6:;
  /* 103ae1f6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae1fa je 0x103ae201 */
  if (C.zf) goto L_103ae201;
  /* 103ae1fc jmp 0x103ae2a0 */
  goto L_103ae2a0;
L_103ae201:;
  /* 103ae201 jmp 0x103ae29b */
  goto L_103ae29b;
L_103ae206:;
  /* 103ae206 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 103ae208 push 0x103cc274 */
  push32((uint32_t)(0x103cc274u));
  /* 103ae20d push 2 */
  push32((uint32_t)(0x2u));
  /* 103ae20f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 103ae214 call 0x103a4ef0 */
  push32(0x103ae219u); f_103a4ef0();
  /* 103ae219 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae21c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103ae21f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae223 je 0x103ae299 */
  if (C.zf) goto L_103ae299;
  /* 103ae225 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ae228 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ae22b mov dword ptr [eax*4 + 0x103d1fc0], ecx */
  w32((uint32_t)(EAX*4 + 0x103d1fc0), (ECX));
  /* 103ae232 mov edx, dword ptr [0x103d20fc] */
  EDX = (r32((uint32_t)(0x103d20fc)));
  /* 103ae238 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae23b mov dword ptr [0x103d20fc], edx */
  w32((uint32_t)(0x103d20fc), (EDX));
  /* 103ae241 jmp 0x103ae24c */
  goto L_103ae24c;
L_103ae243:;
  /* 103ae243 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ae246 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae249 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103ae24c:;
  /* 103ae24c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ae24f mov edx, dword ptr [ecx*4 + 0x103d1fc0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x103d1fc0)));
  /* 103ae256 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae25c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae25f jae 0x103ae284 */
  if (!C.cf) goto L_103ae284;
  /* 103ae261 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ae264 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 103ae268 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ae26b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 103ae271 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ae274 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 103ae278 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ae27b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 103ae282 jmp 0x103ae243 */
  goto L_103ae243;
L_103ae284:;
  /* 103ae284 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ae287 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 103ae28a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103ae28d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ae290 push edx */
  push32((uint32_t)(EDX));
  /* 103ae291 call 0x103ae5e0 */
  push32(0x103ae296u); f_103ae5e0();
  /* 103ae296 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103ae299:;
  /* 103ae299 jmp 0x103ae2a0 */
  goto L_103ae2a0;
L_103ae29b:;
  /* 103ae29b jmp 0x103ae0f1 */
  goto L_103ae0f1;
L_103ae2a0:;
  /* 103ae2a0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 103ae2a2 call 0x103a8990 */
  push32(0x103ae2a7u); f_103a8990();
  /* 103ae2a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae2aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ae2ad pop esi */
  ESI = (pop32());
  /* 103ae2ae mov esp, ebp */
  ESP = (EBP);
  /* 103ae2b0 pop ebp */
  EBP = (pop32());
  /* 103ae2b1 ret  */
  ESPCHK(0x103ae0d0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x103ae2c0 (183 bytes, 57 insns) */
void f_103ae2c0(void) {
  FTRACE(0x103ae2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ae2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 103ae2c1 mov ebp, esp */
  EBP = (ESP);
  /* 103ae2c3 push ecx */
  push32((uint32_t)(ECX));
  /* 103ae2c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ae2c7 cmp eax, dword ptr [0x103d20fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x103d20fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae2cd jae 0x103ae35a */
  if (!C.cf) goto L_103ae35a;
  /* 103ae2d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ae2d6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 103ae2d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ae2dc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 103ae2df imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ae2e2 mov eax, dword ptr [ecx*4 + 0x103d1fc0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x103d1fc0)));
  /* 103ae2e9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae2ed jne 0x103ae35a */
  if (!C.zf) goto L_103ae35a;
  /* 103ae2ef cmp dword ptr [0x103d05e8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x103d05e8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae2f6 jne 0x103ae33a */
  if (!C.zf) goto L_103ae33a;
  /* 103ae2f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ae2fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103ae2fe cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae302 je 0x103ae312 */
  if (C.zf) goto L_103ae312;
  /* 103ae304 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae308 je 0x103ae320 */
  if (C.zf) goto L_103ae320;
  /* 103ae30a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae30e je 0x103ae32e */
  if (C.zf) goto L_103ae32e;
  /* 103ae310 jmp 0x103ae33a */
  goto L_103ae33a;
L_103ae312:;
  /* 103ae312 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ae315 push edx */
  push32((uint32_t)(EDX));
  /* 103ae316 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 103ae318 call dword ptr [0x103d32d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32d8))), 0x103ae31eu);
  /* 103ae31e jmp 0x103ae33a */
  goto L_103ae33a;
L_103ae320:;
  /* 103ae320 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ae323 push eax */
  push32((uint32_t)(EAX));
  /* 103ae324 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 103ae326 call dword ptr [0x103d32d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32d8))), 0x103ae32cu);
  /* 103ae32c jmp 0x103ae33a */
  goto L_103ae33a;
L_103ae32e:;
  /* 103ae32e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ae331 push ecx */
  push32((uint32_t)(ECX));
  /* 103ae332 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 103ae334 call dword ptr [0x103d32d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32d8))), 0x103ae33au);
L_103ae33a:;
  /* 103ae33a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ae33d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 103ae340 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ae343 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 103ae346 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ae349 mov ecx, dword ptr [edx*4 + 0x103d1fc0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x103d1fc0)));
  /* 103ae350 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ae353 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 103ae356 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ae358 jmp 0x103ae373 */
  goto L_103ae373;
L_103ae35a:;
  /* 103ae35a call 0x103acdc0 */
  push32(0x103ae35fu); f_103acdc0();
  /* 103ae35f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 103ae365 call 0x103acdd0 */
  push32(0x103ae36au); f_103acdd0();
  /* 103ae36a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 103ae370 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_103ae373:;
  /* 103ae373 mov esp, ebp */
  ESP = (EBP);
  /* 103ae375 pop ebp */
  EBP = (pop32());
  /* 103ae376 ret  */
  ESPCHK(0x103ae2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e380 @ 0x103ae380 (216 bytes, 63 insns) */
void f_103ae380(void) {
  FTRACE(0x103ae380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ae380 push ebp */
  push32((uint32_t)(EBP));
  /* 103ae381 mov ebp, esp */
  EBP = (ESP);
  /* 103ae383 push ecx */
  push32((uint32_t)(ECX));
  /* 103ae384 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ae387 cmp eax, dword ptr [0x103d20fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x103d20fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae38d jae 0x103ae43b */
  if (!C.cf) goto L_103ae43b;
  /* 103ae393 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ae396 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 103ae399 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ae39c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 103ae39f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ae3a2 mov eax, dword ptr [ecx*4 + 0x103d1fc0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x103d1fc0)));
  /* 103ae3a9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 103ae3ae and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 103ae3b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ae3b3 je 0x103ae43b */
  if (C.zf) goto L_103ae43b;
  /* 103ae3b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ae3bc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 103ae3bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ae3c2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 103ae3c5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ae3c8 mov ecx, dword ptr [edx*4 + 0x103d1fc0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x103d1fc0)));
  /* 103ae3cf cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae3d3 je 0x103ae43b */
  if (C.zf) goto L_103ae43b;
  /* 103ae3d5 cmp dword ptr [0x103d05e8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x103d05e8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae3dc jne 0x103ae41a */
  if (!C.zf) goto L_103ae41a;
  /* 103ae3de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ae3e1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103ae3e4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae3e8 je 0x103ae3f8 */
  if (C.zf) goto L_103ae3f8;
  /* 103ae3ea cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae3ee je 0x103ae404 */
  if (C.zf) goto L_103ae404;
  /* 103ae3f0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae3f4 je 0x103ae410 */
  if (C.zf) goto L_103ae410;
  /* 103ae3f6 jmp 0x103ae41a */
  goto L_103ae41a;
L_103ae3f8:;
  /* 103ae3f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 103ae3fa push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 103ae3fc call dword ptr [0x103d32d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32d8))), 0x103ae402u);
  /* 103ae402 jmp 0x103ae41a */
  goto L_103ae41a;
L_103ae404:;
  /* 103ae404 push 0 */
  push32((uint32_t)(0x0u));
  /* 103ae406 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 103ae408 call dword ptr [0x103d32d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32d8))), 0x103ae40eu);
  /* 103ae40e jmp 0x103ae41a */
  goto L_103ae41a;
L_103ae410:;
  /* 103ae410 push 0 */
  push32((uint32_t)(0x0u));
  /* 103ae412 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 103ae414 call dword ptr [0x103d32d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32d8))), 0x103ae41au);
L_103ae41a:;
  /* 103ae41a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ae41d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 103ae420 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ae423 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 103ae426 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ae429 mov edx, dword ptr [eax*4 + 0x103d1fc0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x103d1fc0)));
  /* 103ae430 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 103ae437 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103ae439 jmp 0x103ae454 */
  goto L_103ae454;
L_103ae43b:;
  /* 103ae43b call 0x103acdc0 */
  push32(0x103ae440u); f_103acdc0();
  /* 103ae440 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 103ae446 call 0x103acdd0 */
  push32(0x103ae44bu); f_103acdd0();
  /* 103ae44b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 103ae451 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_103ae454:;
  /* 103ae454 mov esp, ebp */
  ESP = (EBP);
  /* 103ae456 pop ebp */
  EBP = (pop32());
  /* 103ae457 ret  */
  ESPCHK(0x103ae380u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e460 @ 0x103ae460 (102 bytes, 30 insns) */
void f_103ae460(void) {
  FTRACE(0x103ae460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ae460 push ebp */
  push32((uint32_t)(EBP));
  /* 103ae461 mov ebp, esp */
  EBP = (ESP);
  /* 103ae463 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ae466 cmp eax, dword ptr [0x103d20fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x103d20fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae46c jae 0x103ae4ab */
  if (!C.cf) goto L_103ae4ab;
  /* 103ae46e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ae471 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 103ae474 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ae477 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 103ae47a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ae47d mov eax, dword ptr [ecx*4 + 0x103d1fc0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x103d1fc0)));
  /* 103ae484 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 103ae489 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 103ae48c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ae48e je 0x103ae4ab */
  if (C.zf) goto L_103ae4ab;
  /* 103ae490 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ae493 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 103ae496 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ae499 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 103ae49c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ae49f mov ecx, dword ptr [edx*4 + 0x103d1fc0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x103d1fc0)));
  /* 103ae4a6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 103ae4a9 jmp 0x103ae4c4 */
  goto L_103ae4c4;
L_103ae4ab:;
  /* 103ae4ab call 0x103acdc0 */
  push32(0x103ae4b0u); f_103acdc0();
  /* 103ae4b0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 103ae4b6 call 0x103acdd0 */
  push32(0x103ae4bbu); f_103acdd0();
  /* 103ae4bb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 103ae4c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_103ae4c4:;
  /* 103ae4c4 pop ebp */
  EBP = (pop32());
  /* 103ae4c5 ret  */
  ESPCHK(0x103ae460u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e4d0 @ 0x103ae4d0 (260 bytes, 83 insns) */
void f_103ae4d0(void) {
  FTRACE(0x103ae4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ae4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 103ae4d1 mov ebp, esp */
  EBP = (ESP);
  /* 103ae4d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ae4d6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 103ae4da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ae4dd and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 103ae4e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ae4e2 je 0x103ae4ed */
  if (C.zf) goto L_103ae4ed;
  /* 103ae4e4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 103ae4e7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 103ae4ea mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_103ae4ed:;
  /* 103ae4ed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ae4f0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 103ae4f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ae4f8 je 0x103ae502 */
  if (C.zf) goto L_103ae502;
  /* 103ae4fa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 103ae4fd or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 103ae4ff mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_103ae502:;
  /* 103ae502 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103ae505 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 103ae50b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ae50d je 0x103ae518 */
  if (C.zf) goto L_103ae518;
  /* 103ae50f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 103ae512 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 103ae515 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_103ae518:;
  /* 103ae518 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ae51b push eax */
  push32((uint32_t)(EAX));
  /* 103ae51c call dword ptr [0x103d3384] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3384))), 0x103ae522u);
  /* 103ae522 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103ae525 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae529 jne 0x103ae542 */
  if (!C.zf) goto L_103ae542;
  /* 103ae52b call dword ptr [0x103d3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3378))), 0x103ae531u);
  /* 103ae531 push eax */
  push32((uint32_t)(EAX));
  /* 103ae532 call 0x103acd20 */
  push32(0x103ae537u); f_103acd20();
  /* 103ae537 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae53a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103ae53d jmp 0x103ae5d0 */
  goto L_103ae5d0;
L_103ae542:;
  /* 103ae542 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae546 jne 0x103ae553 */
  if (!C.zf) goto L_103ae553;
  /* 103ae548 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 103ae54b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 103ae54e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 103ae551 jmp 0x103ae562 */
  goto L_103ae562;
L_103ae553:;
  /* 103ae553 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae557 jne 0x103ae562 */
  if (!C.zf) goto L_103ae562;
  /* 103ae559 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 103ae55c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 103ae55f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_103ae562:;
  /* 103ae562 call 0x103ae0d0 */
  push32(0x103ae567u); f_103ae0d0();
  /* 103ae567 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103ae56a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae56e jne 0x103ae58b */
  if (!C.zf) goto L_103ae58b;
  /* 103ae570 call 0x103acdc0 */
  push32(0x103ae575u); f_103acdc0();
  /* 103ae575 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 103ae57b call 0x103acdd0 */
  push32(0x103ae580u); f_103acdd0();
  /* 103ae580 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 103ae586 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103ae589 jmp 0x103ae5d0 */
  goto L_103ae5d0;
L_103ae58b:;
  /* 103ae58b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ae58e push eax */
  push32((uint32_t)(EAX));
  /* 103ae58f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ae592 push ecx */
  push32((uint32_t)(ECX));
  /* 103ae593 call 0x103ae2c0 */
  push32(0x103ae598u); f_103ae2c0();
  /* 103ae598 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae59b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 103ae59e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 103ae5a1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 103ae5a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ae5a7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 103ae5aa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ae5ad and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 103ae5b0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ae5b3 mov edx, dword ptr [eax*4 + 0x103d1fc0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x103d1fc0)));
  /* 103ae5ba mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 103ae5bd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 103ae5c1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ae5c4 push ecx */
  push32((uint32_t)(ECX));
  /* 103ae5c5 call 0x103ae670 */
  push32(0x103ae5cau); f_103ae670();
  /* 103ae5ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae5cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_103ae5d0:;
  /* 103ae5d0 mov esp, ebp */
  ESP = (EBP);
  /* 103ae5d2 pop ebp */
  EBP = (pop32());
  /* 103ae5d3 ret  */
  ESPCHK(0x103ae4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5e0 @ 0x103ae5e0 (134 bytes, 44 insns) */
void f_103ae5e0(void) {
  FTRACE(0x103ae5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ae5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 103ae5e1 mov ebp, esp */
  EBP = (ESP);
  /* 103ae5e3 push ecx */
  push32((uint32_t)(ECX));
  /* 103ae5e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ae5e7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 103ae5ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ae5ed and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 103ae5f0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ae5f3 mov edx, dword ptr [eax*4 + 0x103d1fc0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x103d1fc0)));
  /* 103ae5fa add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae5fc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103ae5ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ae602 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae606 jne 0x103ae641 */
  if (!C.zf) goto L_103ae641;
  /* 103ae608 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 103ae60a call 0x103a88f0 */
  push32(0x103ae60fu); f_103a88f0();
  /* 103ae60f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae612 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ae615 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae619 jne 0x103ae637 */
  if (!C.zf) goto L_103ae637;
  /* 103ae61b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ae61e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae621 push edx */
  push32((uint32_t)(EDX));
  /* 103ae622 call dword ptr [0x103d3320] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3320))), 0x103ae628u);
  /* 103ae628 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ae62b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 103ae62e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae631 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ae634 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_103ae637:;
  /* 103ae637 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 103ae639 call 0x103a8990 */
  push32(0x103ae63eu); f_103a8990();
  /* 103ae63e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103ae641:;
  /* 103ae641 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ae644 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 103ae647 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ae64a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 103ae64d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ae650 mov edx, dword ptr [eax*4 + 0x103d1fc0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x103d1fc0)));
  /* 103ae657 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 103ae65b push eax */
  push32((uint32_t)(EAX));
  /* 103ae65c call dword ptr [0x103d331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d331c))), 0x103ae662u);
  /* 103ae662 mov esp, ebp */
  ESP = (EBP);
  /* 103ae664 pop ebp */
  EBP = (pop32());
  /* 103ae665 ret  */
  ESPCHK(0x103ae5e0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x103ae670 (38 bytes, 13 insns) */
void f_103ae670(void) {
  FTRACE(0x103ae670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ae670 push ebp */
  push32((uint32_t)(EBP));
  /* 103ae671 mov ebp, esp */
  EBP = (ESP);
  /* 103ae673 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ae676 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 103ae679 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ae67c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 103ae67f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103ae682 mov edx, dword ptr [eax*4 + 0x103d1fc0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x103d1fc0)));
  /* 103ae689 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 103ae68d push eax */
  push32((uint32_t)(EAX));
  /* 103ae68e call dword ptr [0x103d3318] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3318))), 0x103ae694u);
  /* 103ae694 pop ebp */
  EBP = (pop32());
  /* 103ae695 ret  */
  ESPCHK(0x103ae670u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e6a0 @ 0x103ae6a0 (218 bytes, 63 insns) */
void f_103ae6a0(void) {
  FTRACE(0x103ae6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ae6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 103ae6a1 mov ebp, esp */
  EBP = (ESP);
  /* 103ae6a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ae6a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103ae6ad push 2 */
  push32((uint32_t)(0x2u));
  /* 103ae6af call 0x103a88f0 */
  push32(0x103ae6b4u); f_103a88f0();
  /* 103ae6b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae6b7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 103ae6be jmp 0x103ae6c9 */
  goto L_103ae6c9;
L_103ae6c0:;
  /* 103ae6c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ae6c3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae6c6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_103ae6c9:;
  /* 103ae6c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ae6cc cmp ecx, dword ptr [0x103d1cc0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x103d1cc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae6d2 jge 0x103ae769 */
  if ((C.sf==C.of)) goto L_103ae769;
  /* 103ae6d8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ae6db mov eax, dword ptr [0x103d0980] */
  EAX = (r32((uint32_t)(0x103d0980)));
  /* 103ae6e0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae6e4 je 0x103ae764 */
  if (C.zf) goto L_103ae764;
  /* 103ae6e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ae6e9 mov edx, dword ptr [0x103d0980] */
  EDX = (r32((uint32_t)(0x103d0980)));
  /* 103ae6ef mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 103ae6f2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 103ae6f5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 103ae6fb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ae6fd je 0x103ae721 */
  if (C.zf) goto L_103ae721;
  /* 103ae6ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ae702 mov eax, dword ptr [0x103d0980] */
  EAX = (r32((uint32_t)(0x103d0980)));
  /* 103ae707 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 103ae70a push ecx */
  push32((uint32_t)(ECX));
  /* 103ae70b call 0x103af490 */
  push32(0x103ae710u); f_103af490();
  /* 103ae710 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae713 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae716 je 0x103ae721 */
  if (C.zf) goto L_103ae721;
  /* 103ae718 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ae71b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae71e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_103ae721:;
  /* 103ae721 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae725 jl 0x103ae764 */
  if ((C.sf!=C.of)) goto L_103ae764;
  /* 103ae727 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ae72a mov ecx, dword ptr [0x103d0980] */
  ECX = (r32((uint32_t)(0x103d0980)));
  /* 103ae730 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 103ae733 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae736 push edx */
  push32((uint32_t)(EDX));
  /* 103ae737 call dword ptr [0x103d338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d338c))), 0x103ae73du);
  /* 103ae73d push 2 */
  push32((uint32_t)(0x2u));
  /* 103ae73f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ae742 mov ecx, dword ptr [0x103d0980] */
  ECX = (r32((uint32_t)(0x103d0980)));
  /* 103ae748 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 103ae74b push edx */
  push32((uint32_t)(EDX));
  /* 103ae74c call 0x103a5980 */
  push32(0x103ae751u); f_103a5980();
  /* 103ae751 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae754 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ae757 mov ecx, dword ptr [0x103d0980] */
  ECX = (r32((uint32_t)(0x103d0980)));
  /* 103ae75d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_103ae764:;
  /* 103ae764 jmp 0x103ae6c0 */
  goto L_103ae6c0;
L_103ae769:;
  /* 103ae769 push 2 */
  push32((uint32_t)(0x2u));
  /* 103ae76b call 0x103a8990 */
  push32(0x103ae770u); f_103a8990();
  /* 103ae770 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae773 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ae776 mov esp, ebp */
  ESP = (EBP);
  /* 103ae778 pop ebp */
  EBP = (pop32());
  /* 103ae779 ret  */
  ESPCHK(0x103ae6a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e780 @ 0x103ae780 (68 bytes, 26 insns) */
void f_103ae780(void) {
  FTRACE(0x103ae780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ae780 push ebp */
  push32((uint32_t)(EBP));
  /* 103ae781 mov ebp, esp */
  EBP = (ESP);
  /* 103ae783 push ecx */
  push32((uint32_t)(ECX));
  /* 103ae784 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae788 jne 0x103ae796 */
  if (!C.zf) goto L_103ae796;
  /* 103ae78a push 0 */
  push32((uint32_t)(0x0u));
  /* 103ae78c call 0x103ae8f0 */
  push32(0x103ae791u); f_103ae8f0();
  /* 103ae791 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae794 jmp 0x103ae7c0 */
  goto L_103ae7c0;
L_103ae796:;
  /* 103ae796 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ae799 push eax */
  push32((uint32_t)(EAX));
  /* 103ae79a call 0x103add00 */
  push32(0x103ae79fu); f_103add00();
  /* 103ae79f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae7a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ae7a5 push ecx */
  push32((uint32_t)(ECX));
  /* 103ae7a6 call 0x103ae7d0 */
  push32(0x103ae7abu); f_103ae7d0();
  /* 103ae7ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae7ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103ae7b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ae7b4 push edx */
  push32((uint32_t)(EDX));
  /* 103ae7b5 call 0x103add70 */
  push32(0x103ae7bau); f_103add70();
  /* 103ae7ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae7bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_103ae7c0:;
  /* 103ae7c0 mov esp, ebp */
  ESP = (EBP);
  /* 103ae7c2 pop ebp */
  EBP = (pop32());
  /* 103ae7c3 ret  */
  ESPCHK(0x103ae780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7d0 @ 0x103ae7d0 (65 bytes, 26 insns) */
void f_103ae7d0(void) {
  FTRACE(0x103ae7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ae7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 103ae7d1 mov ebp, esp */
  EBP = (ESP);
  /* 103ae7d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ae7d6 push eax */
  push32((uint32_t)(EAX));
  /* 103ae7d7 call 0x103ae820 */
  push32(0x103ae7dcu); f_103ae820();
  /* 103ae7dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae7df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ae7e1 je 0x103ae7e8 */
  if (C.zf) goto L_103ae7e8;
  /* 103ae7e3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103ae7e6 jmp 0x103ae80f */
  goto L_103ae80f;
L_103ae7e8:;
  /* 103ae7e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ae7eb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103ae7ee and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 103ae7f4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ae7f6 je 0x103ae80d */
  if (C.zf) goto L_103ae80d;
  /* 103ae7f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ae7fb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103ae7fe push ecx */
  push32((uint32_t)(ECX));
  /* 103ae7ff call 0x103af5e0 */
  push32(0x103ae804u); f_103af5e0();
  /* 103ae804 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae807 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 103ae809 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ae80b jmp 0x103ae80f */
  goto L_103ae80f;
L_103ae80d:;
  /* 103ae80d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103ae80f:;
  /* 103ae80f pop ebp */
  EBP = (pop32());
  /* 103ae810 ret  */
  ESPCHK(0x103ae7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e820 @ 0x103ae820 (183 bytes, 62 insns) */
void f_103ae820(void) {
  FTRACE(0x103ae820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ae820 push ebp */
  push32((uint32_t)(EBP));
  /* 103ae821 mov ebp, esp */
  EBP = (ESP);
  /* 103ae823 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ae826 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103ae82d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103ae830 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103ae833 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ae836 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103ae839 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 103ae83c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae83f jne 0x103ae8bb */
  if (!C.zf) goto L_103ae8bb;
  /* 103ae841 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ae844 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 103ae847 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 103ae84d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ae84f je 0x103ae8bb */
  if (C.zf) goto L_103ae8bb;
  /* 103ae851 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ae854 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ae857 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 103ae859 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ae85c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103ae85f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae863 jle 0x103ae8bb */
  if ((C.zf||C.sf!=C.of)) goto L_103ae8bb;
  /* 103ae865 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ae868 push edx */
  push32((uint32_t)(EDX));
  /* 103ae869 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ae86c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 103ae86f push ecx */
  push32((uint32_t)(ECX));
  /* 103ae870 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ae873 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 103ae876 push eax */
  push32((uint32_t)(EAX));
  /* 103ae877 call 0x103ad790 */
  push32(0x103ae87cu); f_103ad790();
  /* 103ae87c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae87f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae882 jne 0x103ae8a5 */
  if (!C.zf) goto L_103ae8a5;
  /* 103ae884 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ae887 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103ae88a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 103ae890 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ae892 je 0x103ae8a3 */
  if (C.zf) goto L_103ae8a3;
  /* 103ae894 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ae897 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 103ae89a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 103ae89d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ae8a0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_103ae8a3:;
  /* 103ae8a3 jmp 0x103ae8bb */
  goto L_103ae8bb;
L_103ae8a5:;
  /* 103ae8a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ae8a8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 103ae8ab or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 103ae8ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ae8b1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 103ae8b4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_103ae8bb:;
  /* 103ae8bb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ae8be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ae8c1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 103ae8c4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103ae8c6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103ae8c9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 103ae8d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ae8d3 mov esp, ebp */
  ESP = (EBP);
  /* 103ae8d5 pop ebp */
  EBP = (pop32());
  /* 103ae8d6 ret  */
  ESPCHK(0x103ae820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e8e0 @ 0x103ae8e0 (15 bytes, 7 insns) */
void f_103ae8e0(void) {
  FTRACE(0x103ae8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ae8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 103ae8e1 mov ebp, esp */
  EBP = (ESP);
  /* 103ae8e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 103ae8e5 call 0x103ae8f0 */
  push32(0x103ae8eau); f_103ae8f0();
  /* 103ae8ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae8ed pop ebp */
  EBP = (pop32());
  /* 103ae8ee ret  */
  ESPCHK(0x103ae8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e8f0 @ 0x103ae8f0 (319 bytes, 94 insns) */
void f_103ae8f0(void) {
  FTRACE(0x103ae8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103ae8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 103ae8f1 mov ebp, esp */
  EBP = (ESP);
  /* 103ae8f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103ae8f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103ae8fd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 103ae904 push 2 */
  push32((uint32_t)(0x2u));
  /* 103ae906 call 0x103a88f0 */
  push32(0x103ae90bu); f_103a88f0();
  /* 103ae90b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae90e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 103ae915 jmp 0x103ae920 */
  goto L_103ae920;
L_103ae917:;
  /* 103ae917 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ae91a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae91d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_103ae920:;
  /* 103ae920 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ae923 cmp ecx, dword ptr [0x103d1cc0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x103d1cc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae929 jge 0x103aea13 */
  if ((C.sf==C.of)) goto L_103aea13;
  /* 103ae92f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ae932 mov eax, dword ptr [0x103d0980] */
  EAX = (r32((uint32_t)(0x103d0980)));
  /* 103ae937 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae93b je 0x103aea0e */
  if (C.zf) goto L_103aea0e;
  /* 103ae941 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ae944 mov edx, dword ptr [0x103d0980] */
  EDX = (r32((uint32_t)(0x103d0980)));
  /* 103ae94a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 103ae94d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 103ae950 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 103ae956 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103ae958 je 0x103aea0e */
  if (C.zf) goto L_103aea0e;
  /* 103ae95e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ae961 mov eax, dword ptr [0x103d0980] */
  EAX = (r32((uint32_t)(0x103d0980)));
  /* 103ae966 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 103ae969 push ecx */
  push32((uint32_t)(ECX));
  /* 103ae96a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ae96d push edx */
  push32((uint32_t)(EDX));
  /* 103ae96e call 0x103add40 */
  push32(0x103ae973u); f_103add40();
  /* 103ae973 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae976 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ae979 mov ecx, dword ptr [0x103d0980] */
  ECX = (r32((uint32_t)(0x103d0980)));
  /* 103ae97f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 103ae982 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 103ae985 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 103ae98a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103ae98c je 0x103ae9f5 */
  if (C.zf) goto L_103ae9f5;
  /* 103ae98e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae992 jne 0x103ae9b9 */
  if (!C.zf) goto L_103ae9b9;
  /* 103ae994 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ae997 mov edx, dword ptr [0x103d0980] */
  EDX = (r32((uint32_t)(0x103d0980)));
  /* 103ae99d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 103ae9a0 push eax */
  push32((uint32_t)(EAX));
  /* 103ae9a1 call 0x103ae7d0 */
  push32(0x103ae9a6u); f_103ae7d0();
  /* 103ae9a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae9a9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae9ac je 0x103ae9b7 */
  if (C.zf) goto L_103ae9b7;
  /* 103ae9ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103ae9b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae9b4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103ae9b7:;
  /* 103ae9b7 jmp 0x103ae9f5 */
  goto L_103ae9f5;
L_103ae9b9:;
  /* 103ae9b9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae9bd jne 0x103ae9f5 */
  if (!C.zf) goto L_103ae9f5;
  /* 103ae9bf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ae9c2 mov eax, dword ptr [0x103d0980] */
  EAX = (r32((uint32_t)(0x103d0980)));
  /* 103ae9c7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 103ae9ca mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103ae9cd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 103ae9d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103ae9d2 je 0x103ae9f5 */
  if (C.zf) goto L_103ae9f5;
  /* 103ae9d4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ae9d7 mov ecx, dword ptr [0x103d0980] */
  ECX = (r32((uint32_t)(0x103d0980)));
  /* 103ae9dd mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 103ae9e0 push edx */
  push32((uint32_t)(EDX));
  /* 103ae9e1 call 0x103ae7d0 */
  push32(0x103ae9e6u); f_103ae7d0();
  /* 103ae9e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103ae9e9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103ae9ec jne 0x103ae9f5 */
  if (!C.zf) goto L_103ae9f5;
  /* 103ae9ee mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_103ae9f5:;
  /* 103ae9f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103ae9f8 mov ecx, dword ptr [0x103d0980] */
  ECX = (r32((uint32_t)(0x103d0980)));
  /* 103ae9fe mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 103aea01 push edx */
  push32((uint32_t)(EDX));
  /* 103aea02 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103aea05 push eax */
  push32((uint32_t)(EAX));
  /* 103aea06 call 0x103addb0 */
  push32(0x103aea0bu); f_103addb0();
  /* 103aea0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103aea0e:;
  /* 103aea0e jmp 0x103ae917 */
  goto L_103ae917;
L_103aea13:;
  /* 103aea13 push 2 */
  push32((uint32_t)(0x2u));
  /* 103aea15 call 0x103a8990 */
  push32(0x103aea1au); f_103a8990();
  /* 103aea1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aea1d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aea21 jne 0x103aea28 */
  if (!C.zf) goto L_103aea28;
  /* 103aea23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103aea26 jmp 0x103aea2b */
  goto L_103aea2b;
L_103aea28:;
  /* 103aea28 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_103aea2b:;
  /* 103aea2b mov esp, ebp */
  ESP = (EBP);
  /* 103aea2d pop ebp */
  EBP = (pop32());
  /* 103aea2e ret  */
  ESPCHK(0x103ae8f0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x103aea30 (15 bytes, 7 insns) */
void f_103aea30(void) {
  FTRACE(0x103aea30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103aea30 push ebp */
  push32((uint32_t)(EBP));
  /* 103aea31 mov ebp, esp */
  EBP = (ESP);
  /* 103aea33 push 2 */
  push32((uint32_t)(0x2u));
  /* 103aea35 call 0x103a3e60 */
  push32(0x103aea3au); f_103a3e60();
  /* 103aea3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aea3d pop ebp */
  EBP = (pop32());
  /* 103aea3e ret  */
  ESPCHK(0x103aea30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea40 @ 0x103aea40 (1007 bytes, 269 insns) */
void f_103aea40(void) {
  FTRACE(0x103aea40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103aea40 push ebp */
  push32((uint32_t)(EBP));
  /* 103aea41 mov ebp, esp */
  EBP = (ESP);
  /* 103aea43 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aea49 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aea4d jl 0x103aea55 */
  if ((C.sf!=C.of)) goto L_103aea55;
  /* 103aea4f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aea53 jle 0x103aea5c */
  if ((C.zf||C.sf!=C.of)) goto L_103aea5c;
L_103aea55:;
  /* 103aea55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103aea57 jmp 0x103aee2b */
  goto L_103aee2b;
L_103aea5c:;
  /* 103aea5c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 103aea5e call 0x103a88f0 */
  push32(0x103aea63u); f_103a88f0();
  /* 103aea63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aea66 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 103aea6d mov eax, dword ptr [0x103d096c] */
  EAX = (r32((uint32_t)(0x103d096c)));
  /* 103aea72 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aea75 mov dword ptr [0x103d096c], eax */
  w32((uint32_t)(0x103d096c), (EAX));
L_103aea7a:;
  /* 103aea7a cmp dword ptr [0x103d097c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d097c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aea81 je 0x103aea8d */
  if (C.zf) goto L_103aea8d;
  /* 103aea83 push 1 */
  push32((uint32_t)(0x1u));
  /* 103aea85 call dword ptr [0x103d32d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32d4))), 0x103aea8bu);
  /* 103aea8b jmp 0x103aea7a */
  goto L_103aea7a;
L_103aea8d:;
  /* 103aea8d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aea91 je 0x103aead1 */
  if (C.zf) goto L_103aead1;
  /* 103aea93 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aea97 je 0x103aeab1 */
  if (C.zf) goto L_103aeab1;
  /* 103aea99 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103aea9c push ecx */
  push32((uint32_t)(ECX));
  /* 103aea9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aeaa0 push edx */
  push32((uint32_t)(EDX));
  /* 103aeaa1 call 0x103aee30 */
  push32(0x103aeaa6u); f_103aee30();
  /* 103aeaa6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aeaa9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 103aeaaf jmp 0x103aeac3 */
  goto L_103aeac3;
L_103aeab1:;
  /* 103aeab1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aeab4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103aeab7 mov ecx, dword ptr [eax + 0x103cf4dc] */
  ECX = (r32((uint32_t)(EAX + 0x103cf4dc)));
  /* 103aeabd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_103aeac3:;
  /* 103aeac3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 103aeac9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103aeacc jmp 0x103aee0b */
  goto L_103aee0b;
L_103aead1:;
  /* 103aead1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 103aead8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 103aeadf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aeae3 je 0x103aee03 */
  if (C.zf) goto L_103aee03;
  /* 103aeae9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103aeaec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103aeaef cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aeaf2 jne 0x103aed14 */
  if (!C.zf) goto L_103aed14;
  /* 103aeaf8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103aeafb movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 103aeaff cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aeb02 jne 0x103aed14 */
  if (!C.zf) goto L_103aed14;
  /* 103aeb08 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103aeb0b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 103aeb0f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aeb12 jne 0x103aed14 */
  if (!C.zf) goto L_103aed14;
  /* 103aeb18 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103aeb1b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_103aeb21:;
  /* 103aeb21 push 0x103cc2c4 */
  push32((uint32_t)(0x103cc2c4u));
  /* 103aeb26 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 103aeb2c push ecx */
  push32((uint32_t)(ECX));
  /* 103aeb2d call 0x103b0c90 */
  push32(0x103aeb32u); f_103b0c90();
  /* 103aeb32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aeb35 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 103aeb3b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aeb42 je 0x103aeb6d */
  if (C.zf) goto L_103aeb6d;
  /* 103aeb44 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 103aeb4a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aeb50 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 103aeb56 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aeb5d je 0x103aeb6d */
  if (C.zf) goto L_103aeb6d;
  /* 103aeb5f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 103aeb65 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103aeb68 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aeb6b jne 0x103aeb93 */
  if (!C.zf) goto L_103aeb93;
L_103aeb6d:;
  /* 103aeb6d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aeb71 je 0x103aeb8c */
  if (C.zf) goto L_103aeb8c;
  /* 103aeb73 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 103aeb75 call 0x103a8990 */
  push32(0x103aeb7au); f_103a8990();
  /* 103aeb7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aeb7d mov edx, dword ptr [0x103d096c] */
  EDX = (r32((uint32_t)(0x103d096c)));
  /* 103aeb83 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aeb86 mov dword ptr [0x103d096c], edx */
  w32((uint32_t)(0x103d096c), (EDX));
L_103aeb8c:;
  /* 103aeb8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103aeb8e jmp 0x103aee2b */
  goto L_103aee2b;
L_103aeb93:;
  /* 103aeb93 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 103aeb9a jmp 0x103aeba5 */
  goto L_103aeba5;
L_103aeb9c:;
  /* 103aeb9c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103aeb9f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aeba2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_103aeba5:;
  /* 103aeba5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aeba9 jg 0x103aebf3 */
  if ((!C.zf&&C.sf==C.of)) goto L_103aebf3;
  /* 103aebab mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 103aebb1 push ecx */
  push32((uint32_t)(ECX));
  /* 103aebb2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 103aebb8 push edx */
  push32((uint32_t)(EDX));
  /* 103aebb9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103aebbc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103aebbf mov ecx, dword ptr [eax + 0x103cf4d8] */
  ECX = (r32((uint32_t)(EAX + 0x103cf4d8)));
  /* 103aebc5 push ecx */
  push32((uint32_t)(ECX));
  /* 103aebc6 call 0x103b0c50 */
  push32(0x103aebcbu); f_103b0c50();
  /* 103aebcb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aebce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103aebd0 jne 0x103aebf1 */
  if (!C.zf) goto L_103aebf1;
  /* 103aebd2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103aebd5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103aebd8 mov eax, dword ptr [edx + 0x103cf4d8] */
  EAX = (r32((uint32_t)(EDX + 0x103cf4d8)));
  /* 103aebde push eax */
  push32((uint32_t)(EAX));
  /* 103aebdf call 0x103a7d20 */
  push32(0x103aebe4u); f_103a7d20();
  /* 103aebe4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aebe7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aebed jne 0x103aebf1 */
  if (!C.zf) goto L_103aebf1;
  /* 103aebef jmp 0x103aebf3 */
  goto L_103aebf3;
L_103aebf1:;
  /* 103aebf1 jmp 0x103aeb9c */
  goto L_103aeb9c;
L_103aebf3:;
  /* 103aebf3 push 0x103cc2c0 */
  push32((uint32_t)(0x103cc2c0u));
  /* 103aebf8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 103aebfe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aec01 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 103aec07 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 103aec0d push edx */
  push32((uint32_t)(EDX));
  /* 103aec0e call 0x103b0c10 */
  push32(0x103aec13u); f_103b0c10();
  /* 103aec13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aec16 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 103aec1c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aec23 jne 0x103aec59 */
  if (!C.zf) goto L_103aec59;
  /* 103aec25 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 103aec2b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103aec2e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aec31 je 0x103aec59 */
  if (C.zf) goto L_103aec59;
  /* 103aec33 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aec37 je 0x103aec52 */
  if (C.zf) goto L_103aec52;
  /* 103aec39 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 103aec3b call 0x103a8990 */
  push32(0x103aec40u); f_103a8990();
  /* 103aec40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aec43 mov edx, dword ptr [0x103d096c] */
  EDX = (r32((uint32_t)(0x103d096c)));
  /* 103aec49 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aec4c mov dword ptr [0x103d096c], edx */
  w32((uint32_t)(0x103d096c), (EDX));
L_103aec52:;
  /* 103aec52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103aec54 jmp 0x103aee2b */
  goto L_103aee2b;
L_103aec59:;
  /* 103aec59 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aec5d jg 0x103aecaa */
  if ((!C.zf&&C.sf==C.of)) goto L_103aecaa;
  /* 103aec5f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 103aec65 push eax */
  push32((uint32_t)(EAX));
  /* 103aec66 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 103aec6c push ecx */
  push32((uint32_t)(ECX));
  /* 103aec6d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 103aec73 push edx */
  push32((uint32_t)(EDX));
  /* 103aec74 call 0x103a8710 */
  push32(0x103aec79u); f_103a8710();
  /* 103aec79 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aec7c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 103aec82 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 103aec8a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 103aec90 push ecx */
  push32((uint32_t)(ECX));
  /* 103aec91 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103aec94 push edx */
  push32((uint32_t)(EDX));
  /* 103aec95 call 0x103aee30 */
  push32(0x103aec9au); f_103aee30();
  /* 103aec9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aec9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103aec9f je 0x103aecaa */
  if (C.zf) goto L_103aecaa;
  /* 103aeca1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103aeca4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aeca7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_103aecaa:;
  /* 103aecaa mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 103aecb0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aecb6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 103aecbc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 103aecc2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103aecc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103aecc7 je 0x103aecd8 */
  if (C.zf) goto L_103aecd8;
  /* 103aecc9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 103aeccf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aecd2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_103aecd8:;
  /* 103aecd8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 103aecde movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103aece1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103aece3 jne 0x103aeb21 */
  if (!C.zf) goto L_103aeb21;
  /* 103aece9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aeced je 0x103aecfc */
  if (C.zf) goto L_103aecfc;
  /* 103aecef call 0x103aefd0 */
  push32(0x103aecf4u); f_103aefd0();
  /* 103aecf4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 103aecfa jmp 0x103aed06 */
  goto L_103aed06;
L_103aecfc:;
  /* 103aecfc mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_103aed06:;
  /* 103aed06 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 103aed0c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103aed0f jmp 0x103aee01 */
  goto L_103aee01;
L_103aed14:;
  /* 103aed14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aed17 push edx */
  push32((uint32_t)(EDX));
  /* 103aed18 push 0 */
  push32((uint32_t)(0x0u));
  /* 103aed1a push 0 */
  push32((uint32_t)(0x0u));
  /* 103aed1c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 103aed22 push eax */
  push32((uint32_t)(EAX));
  /* 103aed23 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103aed26 push ecx */
  push32((uint32_t)(ECX));
  /* 103aed27 call 0x103af0d0 */
  push32(0x103aed2cu); f_103af0d0();
  /* 103aed2c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aed2f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103aed32 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aed36 je 0x103aee01 */
  if (C.zf) goto L_103aee01;
  /* 103aed3c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 103aed43 jmp 0x103aed4e */
  goto L_103aed4e;
L_103aed45:;
  /* 103aed45 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103aed48 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aed4b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_103aed4e:;
  /* 103aed4e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aed52 jg 0x103aedb0 */
  if ((!C.zf&&C.sf==C.of)) goto L_103aedb0;
  /* 103aed54 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aed58 je 0x103aedae */
  if (C.zf) goto L_103aedae;
  /* 103aed5a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103aed5d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103aed60 mov ecx, dword ptr [eax + 0x103cf4dc] */
  ECX = (r32((uint32_t)(EAX + 0x103cf4dc)));
  /* 103aed66 push ecx */
  push32((uint32_t)(ECX));
  /* 103aed67 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 103aed6d push edx */
  push32((uint32_t)(EDX));
  /* 103aed6e call 0x103b0b80 */
  push32(0x103aed73u); f_103b0b80();
  /* 103aed73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aed76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103aed78 je 0x103aeda5 */
  if (C.zf) goto L_103aeda5;
  /* 103aed7a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 103aed80 push eax */
  push32((uint32_t)(EAX));
  /* 103aed81 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103aed84 push ecx */
  push32((uint32_t)(ECX));
  /* 103aed85 call 0x103aee30 */
  push32(0x103aed8au); f_103aee30();
  /* 103aed8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aed8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103aed8f je 0x103aed9c */
  if (C.zf) goto L_103aed9c;
  /* 103aed91 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103aed94 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aed97 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 103aed9a jmp 0x103aeda3 */
  goto L_103aeda3;
L_103aed9c:;
  /* 103aed9c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_103aeda3:;
  /* 103aeda3 jmp 0x103aedae */
  goto L_103aedae;
L_103aeda5:;
  /* 103aeda5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103aeda8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aedab mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_103aedae:;
  /* 103aedae jmp 0x103aed45 */
  goto L_103aed45;
L_103aedb0:;
  /* 103aedb0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aedb4 je 0x103aeddb */
  if (C.zf) goto L_103aeddb;
  /* 103aedb6 call 0x103aefd0 */
  push32(0x103aedbbu); f_103aefd0();
  /* 103aedbb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103aedbe push 2 */
  push32((uint32_t)(0x2u));
  /* 103aedc0 mov ecx, dword ptr [0x103cf4dc] */
  ECX = (r32((uint32_t)(0x103cf4dc)));
  /* 103aedc6 push ecx */
  push32((uint32_t)(ECX));
  /* 103aedc7 call 0x103a5980 */
  push32(0x103aedccu); f_103a5980();
  /* 103aedcc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aedcf mov dword ptr [0x103cf4dc], 0 */
  w32((uint32_t)(0x103cf4dc), (0x0u));
  /* 103aedd9 jmp 0x103aee01 */
  goto L_103aee01;
L_103aeddb:;
  /* 103aeddb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aeddf je 0x103aedee */
  if (C.zf) goto L_103aedee;
  /* 103aede1 call 0x103aefd0 */
  push32(0x103aede6u); f_103aefd0();
  /* 103aede6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 103aedec jmp 0x103aedf8 */
  goto L_103aedf8;
L_103aedee:;
  /* 103aedee mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_103aedf8:;
  /* 103aedf8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 103aedfe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_103aee01:;
  /* 103aee01 jmp 0x103aee0b */
  goto L_103aee0b;
L_103aee03:;
  /* 103aee03 call 0x103aefd0 */
  push32(0x103aee08u); f_103aefd0();
  /* 103aee08 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_103aee0b:;
  /* 103aee0b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aee0f je 0x103aee28 */
  if (C.zf) goto L_103aee28;
  /* 103aee11 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 103aee13 call 0x103a8990 */
  push32(0x103aee18u); f_103a8990();
  /* 103aee18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aee1b mov eax, dword ptr [0x103d096c] */
  EAX = (r32((uint32_t)(0x103d096c)));
  /* 103aee20 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aee23 mov dword ptr [0x103d096c], eax */
  w32((uint32_t)(0x103d096c), (EAX));
L_103aee28:;
  /* 103aee28 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_103aee2b:;
  /* 103aee2b mov esp, ebp */
  ESP = (EBP);
  /* 103aee2d pop ebp */
  EBP = (pop32());
  /* 103aee2e ret  */
  ESPCHK(0x103aea40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee30 @ 0x103aee30 (403 bytes, 117 insns) */
void f_103aee30(void) {
  FTRACE(0x103aee30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103aee30 push ebp */
  push32((uint32_t)(EBP));
  /* 103aee31 mov ebp, esp */
  EBP = (ESP);
  /* 103aee33 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aee39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aee3c push eax */
  push32((uint32_t)(EAX));
  /* 103aee3d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 103aee43 push ecx */
  push32((uint32_t)(ECX));
  /* 103aee44 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 103aee4a push edx */
  push32((uint32_t)(EDX));
  /* 103aee4b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 103aee51 push eax */
  push32((uint32_t)(EAX));
  /* 103aee52 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103aee55 push ecx */
  push32((uint32_t)(ECX));
  /* 103aee56 call 0x103af0d0 */
  push32(0x103aee5bu); f_103af0d0();
  /* 103aee5b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aee5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103aee60 jne 0x103aee69 */
  if (!C.zf) goto L_103aee69;
  /* 103aee62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103aee64 jmp 0x103aefbf */
  goto L_103aefbf;
L_103aee69:;
  /* 103aee69 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 103aee6e push 0x103cc2c8 */
  push32((uint32_t)(0x103cc2c8u));
  /* 103aee73 push 2 */
  push32((uint32_t)(0x2u));
  /* 103aee75 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 103aee7b push edx */
  push32((uint32_t)(EDX));
  /* 103aee7c call 0x103a7d20 */
  push32(0x103aee81u); f_103a7d20();
  /* 103aee81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aee84 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aee87 push eax */
  push32((uint32_t)(EAX));
  /* 103aee88 call 0x103a4ef0 */
  push32(0x103aee8du); f_103a4ef0();
  /* 103aee8d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aee90 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103aee93 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aee97 jne 0x103aeea0 */
  if (!C.zf) goto L_103aeea0;
  /* 103aee99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103aee9b jmp 0x103aefbf */
  goto L_103aefbf;
L_103aeea0:;
  /* 103aeea0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aeea3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103aeea6 mov ecx, dword ptr [eax + 0x103cf4dc] */
  ECX = (r32((uint32_t)(EAX + 0x103cf4dc)));
  /* 103aeeac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103aeeaf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aeeb2 mov eax, dword ptr [edx*4 + 0x103d07e8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x103d07e8)));
  /* 103aeeb9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103aeebc push 6 */
  push32((uint32_t)(0x6u));
  /* 103aeebe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aeec1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103aeec4 add ecx, 0x103d0838 */
  { uint32_t _a=(ECX),_b=(0x103d0838u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aeeca push ecx */
  push32((uint32_t)(ECX));
  /* 103aeecb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 103aeece push edx */
  push32((uint32_t)(EDX));
  /* 103aeecf call 0x103ab7d0 */
  push32(0x103aeed4u); f_103ab7d0();
  /* 103aeed4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aeed7 mov eax, dword ptr [0x103d0800] */
  EAX = (r32((uint32_t)(0x103d0800)));
  /* 103aeedc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 103aeedf lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 103aeee5 push ecx */
  push32((uint32_t)(ECX));
  /* 103aeee6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103aeee9 push edx */
  push32((uint32_t)(EDX));
  /* 103aeeea call 0x103a7ea0 */
  push32(0x103aeeefu); f_103a7ea0();
  /* 103aeeef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aeef2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aeef5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103aeef8 mov dword ptr [ecx + 0x103cf4dc], eax */
  w32((uint32_t)(ECX + 0x103cf4dc), (EAX));
  /* 103aeefe mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 103aef04 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 103aef0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aef0d mov dword ptr [eax*4 + 0x103d07e8], edx */
  w32((uint32_t)(EAX*4 + 0x103d07e8), (EDX));
  /* 103aef14 push 6 */
  push32((uint32_t)(0x6u));
  /* 103aef16 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 103aef1c push ecx */
  push32((uint32_t)(ECX));
  /* 103aef1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aef20 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103aef23 add edx, 0x103d0838 */
  { uint32_t _a=(EDX),_b=(0x103d0838u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103aef29 push edx */
  push32((uint32_t)(EDX));
  /* 103aef2a call 0x103ab7d0 */
  push32(0x103aef2fu); f_103ab7d0();
  /* 103aef2f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aef32 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aef36 jne 0x103aef43 */
  if (!C.zf) goto L_103aef43;
  /* 103aef38 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 103aef3e mov dword ptr [0x103d0800], eax */
  w32((uint32_t)(0x103d0800), (EAX));
L_103aef43:;
  /* 103aef43 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aef47 jne 0x103aef55 */
  if (!C.zf) goto L_103aef55;
  /* 103aef49 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 103aef4f mov dword ptr [0x103d0804], ecx */
  w32((uint32_t)(0x103d0804), (ECX));
L_103aef55:;
  /* 103aef55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aef58 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103aef5b call dword ptr [edx + 0x103cf4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x103cf4e0))), 0x103aef61u);
  /* 103aef61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103aef63 je 0x103aef9c */
  if (C.zf) goto L_103aef9c;
  /* 103aef65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aef68 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103aef6b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103aef6e mov dword ptr [eax + 0x103cf4dc], ecx */
  w32((uint32_t)(EAX + 0x103cf4dc), (ECX));
  /* 103aef74 push 2 */
  push32((uint32_t)(0x2u));
  /* 103aef76 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103aef79 push edx */
  push32((uint32_t)(EDX));
  /* 103aef7a call 0x103a5980 */
  push32(0x103aef7fu); f_103a5980();
  /* 103aef7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aef82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aef85 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103aef88 mov dword ptr [eax*4 + 0x103d07e8], ecx */
  w32((uint32_t)(EAX*4 + 0x103d07e8), (ECX));
  /* 103aef8f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103aef92 mov dword ptr [0x103d0800], edx */
  w32((uint32_t)(0x103d0800), (EDX));
  /* 103aef98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103aef9a jmp 0x103aefbf */
  goto L_103aefbf;
L_103aef9c:;
  /* 103aef9c cmp dword ptr [ebp - 0xc], 0x103cf3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x103cf3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aefa3 je 0x103aefb3 */
  if (C.zf) goto L_103aefb3;
  /* 103aefa5 push 2 */
  push32((uint32_t)(0x2u));
  /* 103aefa7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103aefaa push eax */
  push32((uint32_t)(EAX));
  /* 103aefab call 0x103a5980 */
  push32(0x103aefb0u); f_103a5980();
  /* 103aefb0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103aefb3:;
  /* 103aefb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aefb6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103aefb9 mov eax, dword ptr [ecx + 0x103cf4dc] */
  EAX = (r32((uint32_t)(ECX + 0x103cf4dc)));
L_103aefbf:;
  /* 103aefbf mov esp, ebp */
  ESP = (EBP);
  /* 103aefc1 pop ebp */
  EBP = (pop32());
  /* 103aefc2 ret  */
  ESPCHK(0x103aee30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000efd0 @ 0x103aefd0 (256 bytes, 72 insns) */
void f_103aefd0(void) {
  FTRACE(0x103aefd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103aefd0 push ebp */
  push32((uint32_t)(EBP));
  /* 103aefd1 mov ebp, esp */
  EBP = (ESP);
  /* 103aefd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103aefd6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 103aefdd cmp dword ptr [0x103cf4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103cf4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103aefe4 jne 0x103af004 */
  if (!C.zf) goto L_103af004;
  /* 103aefe6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 103aefeb push 0x103cc2c8 */
  push32((uint32_t)(0x103cc2c8u));
  /* 103aeff0 push 2 */
  push32((uint32_t)(0x2u));
  /* 103aeff2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 103aeff7 call 0x103a4ef0 */
  push32(0x103aeffcu); f_103a4ef0();
  /* 103aeffc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aefff mov dword ptr [0x103cf4dc], eax */
  w32((uint32_t)(0x103cf4dc), (EAX));
L_103af004:;
  /* 103af004 mov eax, dword ptr [0x103cf4dc] */
  EAX = (r32((uint32_t)(0x103cf4dc)));
  /* 103af009 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 103af00c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 103af013 jmp 0x103af01e */
  goto L_103af01e;
L_103af015:;
  /* 103af015 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103af018 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103af01b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103af01e:;
  /* 103af01e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103af021 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103af024 mov eax, dword ptr [edx + 0x103cf4dc] */
  EAX = (r32((uint32_t)(EDX + 0x103cf4dc)));
  /* 103af02a push eax */
  push32((uint32_t)(EAX));
  /* 103af02b push 0x103cc2d4 */
  push32((uint32_t)(0x103cc2d4u));
  /* 103af030 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103af033 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103af036 mov edx, dword ptr [ecx + 0x103cf4d8] */
  EDX = (r32((uint32_t)(ECX + 0x103cf4d8)));
  /* 103af03c push edx */
  push32((uint32_t)(EDX));
  /* 103af03d push 3 */
  push32((uint32_t)(0x3u));
  /* 103af03f mov eax, dword ptr [0x103cf4dc] */
  EAX = (r32((uint32_t)(0x103cf4dc)));
  /* 103af044 push eax */
  push32((uint32_t)(EAX));
  /* 103af045 call 0x103af270 */
  push32(0x103af04au); f_103af270();
  /* 103af04a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af04d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103af051 jge 0x103af099 */
  if ((C.sf==C.of)) goto L_103af099;
  /* 103af053 push 0x103cc2c0 */
  push32((uint32_t)(0x103cc2c0u));
  /* 103af058 mov ecx, dword ptr [0x103cf4dc] */
  ECX = (r32((uint32_t)(0x103cf4dc)));
  /* 103af05e push ecx */
  push32((uint32_t)(ECX));
  /* 103af05f call 0x103a7eb0 */
  push32(0x103af064u); f_103a7eb0();
  /* 103af064 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af067 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103af06a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103af06d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103af070 mov eax, dword ptr [edx + 0x103cf4dc] */
  EAX = (r32((uint32_t)(EDX + 0x103cf4dc)));
  /* 103af076 push eax */
  push32((uint32_t)(EAX));
  /* 103af077 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103af07a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103af07d mov edx, dword ptr [ecx + 0x103cf4dc] */
  EDX = (r32((uint32_t)(ECX + 0x103cf4dc)));
  /* 103af083 push edx */
  push32((uint32_t)(EDX));
  /* 103af084 call 0x103b0b80 */
  push32(0x103af089u); f_103b0b80();
  /* 103af089 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af08c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103af08e je 0x103af097 */
  if (C.zf) goto L_103af097;
  /* 103af090 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_103af097:;
  /* 103af097 jmp 0x103af0c7 */
  goto L_103af0c7;
L_103af099:;
  /* 103af099 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103af09d jne 0x103af0a6 */
  if (!C.zf) goto L_103af0a6;
  /* 103af09f mov eax, dword ptr [0x103cf4dc] */
  EAX = (r32((uint32_t)(0x103cf4dc)));
  /* 103af0a4 jmp 0x103af0cc */
  goto L_103af0cc;
L_103af0a6:;
  /* 103af0a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 103af0a8 mov eax, dword ptr [0x103cf4dc] */
  EAX = (r32((uint32_t)(0x103cf4dc)));
  /* 103af0ad push eax */
  push32((uint32_t)(EAX));
  /* 103af0ae call 0x103a5980 */
  push32(0x103af0b3u); f_103a5980();
  /* 103af0b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af0b6 mov dword ptr [0x103cf4dc], 0 */
  w32((uint32_t)(0x103cf4dc), (0x0u));
  /* 103af0c0 mov eax, dword ptr [0x103cf4f4] */
  EAX = (r32((uint32_t)(0x103cf4f4)));
  /* 103af0c5 jmp 0x103af0cc */
  goto L_103af0cc;
L_103af0c7:;
  /* 103af0c7 jmp 0x103af015 */
  goto L_103af015;
L_103af0cc:;
  /* 103af0cc mov esp, ebp */
  ESP = (EBP);
  /* 103af0ce pop ebp */
  EBP = (pop32());
  /* 103af0cf ret  */
  ESPCHK(0x103aefd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0d0 @ 0x103af0d0 (388 bytes, 115 insns) */
void f_103af0d0(void) {
  FTRACE(0x103af0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103af0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 103af0d1 mov ebp, esp */
  EBP = (ESP);
  /* 103af0d3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103af0d9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103af0dd jne 0x103af0e6 */
  if (!C.zf) goto L_103af0e6;
  /* 103af0df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103af0e1 jmp 0x103af250 */
  goto L_103af250;
L_103af0e6:;
  /* 103af0e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af0e9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103af0ec cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103af0ef jne 0x103af140 */
  if (!C.zf) goto L_103af140;
  /* 103af0f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af0f4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 103af0f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103af0fa jne 0x103af140 */
  if (!C.zf) goto L_103af140;
  /* 103af0fc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103af0ff mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 103af102 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103af105 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 103af109 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103af10d je 0x103af129 */
  if (C.zf) goto L_103af129;
  /* 103af10f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103af112 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 103af117 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103af11a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 103af120 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103af123 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_103af129:;
  /* 103af129 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103af12d je 0x103af138 */
  if (C.zf) goto L_103af138;
  /* 103af12f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103af132 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_103af138:;
  /* 103af138 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103af13b jmp 0x103af250 */
  goto L_103af250;
L_103af140:;
  /* 103af140 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af143 push ecx */
  push32((uint32_t)(ECX));
  /* 103af144 push 0x103cf450 */
  push32((uint32_t)(0x103cf450u));
  /* 103af149 call 0x103b0b80 */
  push32(0x103af14eu); f_103b0b80();
  /* 103af14e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af151 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103af153 je 0x103af208 */
  if (C.zf) goto L_103af208;
  /* 103af159 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af15c push edx */
  push32((uint32_t)(EDX));
  /* 103af15d push 0x103cf3cc */
  push32((uint32_t)(0x103cf3ccu));
  /* 103af162 call 0x103b0b80 */
  push32(0x103af167u); f_103b0b80();
  /* 103af167 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af16a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103af16c je 0x103af208 */
  if (C.zf) goto L_103af208;
  /* 103af172 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af175 push eax */
  push32((uint32_t)(EAX));
  /* 103af176 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 103af17c push ecx */
  push32((uint32_t)(ECX));
  /* 103af17d call 0x103af2c0 */
  push32(0x103af182u); f_103af2c0();
  /* 103af182 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af185 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103af187 je 0x103af190 */
  if (C.zf) goto L_103af190;
  /* 103af189 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103af18b jmp 0x103af250 */
  goto L_103af250;
L_103af190:;
  /* 103af190 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 103af196 push edx */
  push32((uint32_t)(EDX));
  /* 103af197 push 0x103d0810 */
  push32((uint32_t)(0x103d0810u));
  /* 103af19c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 103af1a2 push eax */
  push32((uint32_t)(EAX));
  /* 103af1a3 call 0x103b0cd0 */
  push32(0x103af1a8u); f_103b0cd0();
  /* 103af1a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af1ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103af1ad jne 0x103af1b6 */
  if (!C.zf) goto L_103af1b6;
  /* 103af1af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103af1b1 jmp 0x103af250 */
  goto L_103af250;
L_103af1b6:;
  /* 103af1b6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103af1b8 mov cx, word ptr [0x103d0814] */
  CX = (r16((uint32_t)(0x103d0814)));
  /* 103af1bf mov dword ptr [0x103d0818], ecx */
  w32((uint32_t)(0x103d0818), (ECX));
  /* 103af1c5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 103af1cb push edx */
  push32((uint32_t)(EDX));
  /* 103af1cc push 0x103cf450 */
  push32((uint32_t)(0x103cf450u));
  /* 103af1d1 call 0x103af420 */
  push32(0x103af1d6u); f_103af420();
  /* 103af1d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af1d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af1dc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103af1df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103af1e1 je 0x103af1f6 */
  if (C.zf) goto L_103af1f6;
  /* 103af1e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af1e6 push edx */
  push32((uint32_t)(EDX));
  /* 103af1e7 push 0x103cf3cc */
  push32((uint32_t)(0x103cf3ccu));
  /* 103af1ec call 0x103a7ea0 */
  push32(0x103af1f1u); f_103a7ea0();
  /* 103af1f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af1f4 jmp 0x103af208 */
  goto L_103af208;
L_103af1f6:;
  /* 103af1f6 push 0x103cf450 */
  push32((uint32_t)(0x103cf450u));
  /* 103af1fb push 0x103cf3cc */
  push32((uint32_t)(0x103cf3ccu));
  /* 103af200 call 0x103a7ea0 */
  push32(0x103af205u); f_103a7ea0();
  /* 103af205 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103af208:;
  /* 103af208 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103af20c je 0x103af221 */
  if (C.zf) goto L_103af221;
  /* 103af20e push 6 */
  push32((uint32_t)(0x6u));
  /* 103af210 push 0x103d0810 */
  push32((uint32_t)(0x103d0810u));
  /* 103af215 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103af218 push eax */
  push32((uint32_t)(EAX));
  /* 103af219 call 0x103ab7d0 */
  push32(0x103af21eu); f_103ab7d0();
  /* 103af21e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103af221:;
  /* 103af221 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103af225 je 0x103af23a */
  if (C.zf) goto L_103af23a;
  /* 103af227 push 4 */
  push32((uint32_t)(0x4u));
  /* 103af229 push 0x103d0818 */
  push32((uint32_t)(0x103d0818u));
  /* 103af22e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103af231 push ecx */
  push32((uint32_t)(ECX));
  /* 103af232 call 0x103ab7d0 */
  push32(0x103af237u); f_103ab7d0();
  /* 103af237 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103af23a:;
  /* 103af23a push 0x103cf450 */
  push32((uint32_t)(0x103cf450u));
  /* 103af23f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103af242 push edx */
  push32((uint32_t)(EDX));
  /* 103af243 call 0x103a7ea0 */
  push32(0x103af248u); f_103a7ea0();
  /* 103af248 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af24b mov eax, 0x103cf450 */
  EAX = (0x103cf450u);
L_103af250:;
  /* 103af250 mov esp, ebp */
  ESP = (EBP);
  /* 103af252 pop ebp */
  EBP = (pop32());
  /* 103af253 ret  */
  ESPCHK(0x103af0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f260 @ 0x103af260 (7 bytes, 5 insns) */
void f_103af260(void) {
  FTRACE(0x103af260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103af260 push ebp */
  push32((uint32_t)(EBP));
  /* 103af261 mov ebp, esp */
  EBP = (ESP);
  /* 103af263 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103af265 pop ebp */
  EBP = (pop32());
  /* 103af266 ret  */
  ESPCHK(0x103af260u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x103af270 (79 bytes, 28 insns) */
void f_103af270(void) {
  FTRACE(0x103af270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103af270 push ebp */
  push32((uint32_t)(EBP));
  /* 103af271 mov ebp, esp */
  EBP = (ESP);
  /* 103af273 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103af276 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 103af279 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103af27c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 103af283 jmp 0x103af28e */
  goto L_103af28e;
L_103af285:;
  /* 103af285 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103af288 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103af28b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_103af28e:;
  /* 103af28e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103af291 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103af294 jge 0x103af2b4 */
  if ((C.sf==C.of)) goto L_103af2b4;
  /* 103af296 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103af299 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103af29c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103af29f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103af2a2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 103af2a5 push edx */
  push32((uint32_t)(EDX));
  /* 103af2a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af2a9 push eax */
  push32((uint32_t)(EAX));
  /* 103af2aa call 0x103a7eb0 */
  push32(0x103af2afu); f_103a7eb0();
  /* 103af2af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af2b2 jmp 0x103af285 */
  goto L_103af285;
L_103af2b4:;
  /* 103af2b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103af2bb mov esp, ebp */
  ESP = (EBP);
  /* 103af2bd pop ebp */
  EBP = (pop32());
  /* 103af2be ret  */
  ESPCHK(0x103af270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f2c0 @ 0x103af2c0 (349 bytes, 122 insns) */
void f_103af2c0(void) {
  FTRACE(0x103af2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103af2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 103af2c1 mov ebp, esp */
  EBP = (ESP);
  /* 103af2c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103af2c6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 103af2cb push 0 */
  push32((uint32_t)(0x0u));
  /* 103af2cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af2d0 push eax */
  push32((uint32_t)(EAX));
  /* 103af2d1 call 0x103a8c60 */
  push32(0x103af2d6u); f_103a8c60();
  /* 103af2d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af2d9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103af2dc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103af2df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103af2e1 jne 0x103af2ea */
  if (!C.zf) goto L_103af2ea;
  /* 103af2e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103af2e5 jmp 0x103af419 */
  goto L_103af419;
L_103af2ea:;
  /* 103af2ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103af2ed movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103af2f0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103af2f3 jne 0x103af320 */
  if (!C.zf) goto L_103af320;
  /* 103af2f5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103af2f8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 103af2fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103af2fe je 0x103af320 */
  if (C.zf) goto L_103af320;
  /* 103af300 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103af303 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103af306 push ecx */
  push32((uint32_t)(ECX));
  /* 103af307 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af30a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103af310 push edx */
  push32((uint32_t)(EDX));
  /* 103af311 call 0x103a7ea0 */
  push32(0x103af316u); f_103a7ea0();
  /* 103af316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af319 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103af31b jmp 0x103af419 */
  goto L_103af419;
L_103af320:;
  /* 103af320 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103af327 jmp 0x103af332 */
  goto L_103af332;
L_103af329:;
  /* 103af329 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103af32c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103af32f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103af332:;
  /* 103af332 push 0x103cc2d8 */
  push32((uint32_t)(0x103cc2d8u));
  /* 103af337 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103af33a push ecx */
  push32((uint32_t)(ECX));
  /* 103af33b call 0x103b0c10 */
  push32(0x103af340u); f_103b0c10();
  /* 103af340 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af343 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103af346 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103af34a jne 0x103af354 */
  if (!C.zf) goto L_103af354;
  /* 103af34c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103af34f jmp 0x103af419 */
  goto L_103af419;
L_103af354:;
  /* 103af354 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103af357 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103af35a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103af35c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 103af35f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103af363 jne 0x103af38a */
  if (!C.zf) goto L_103af38a;
  /* 103af365 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103af369 jge 0x103af38a */
  if ((C.sf==C.of)) goto L_103af38a;
  /* 103af36b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 103af36f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103af372 je 0x103af38a */
  if (C.zf) goto L_103af38a;
  /* 103af374 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103af377 push edx */
  push32((uint32_t)(EDX));
  /* 103af378 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103af37b push eax */
  push32((uint32_t)(EAX));
  /* 103af37c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af37f push ecx */
  push32((uint32_t)(ECX));
  /* 103af380 call 0x103a8710 */
  push32(0x103af385u); f_103a8710();
  /* 103af385 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af388 jmp 0x103af3f0 */
  goto L_103af3f0;
L_103af38a:;
  /* 103af38a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103af38e jne 0x103af3b8 */
  if (!C.zf) goto L_103af3b8;
  /* 103af390 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103af394 jge 0x103af3b8 */
  if ((C.sf==C.of)) goto L_103af3b8;
  /* 103af396 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 103af39a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103af39d je 0x103af3b8 */
  if (C.zf) goto L_103af3b8;
  /* 103af39f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103af3a2 push eax */
  push32((uint32_t)(EAX));
  /* 103af3a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103af3a6 push ecx */
  push32((uint32_t)(ECX));
  /* 103af3a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af3aa add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103af3ad push edx */
  push32((uint32_t)(EDX));
  /* 103af3ae call 0x103a8710 */
  push32(0x103af3b3u); f_103a8710();
  /* 103af3b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af3b6 jmp 0x103af3f0 */
  goto L_103af3f0;
L_103af3b8:;
  /* 103af3b8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103af3bc jne 0x103af3eb */
  if (!C.zf) goto L_103af3eb;
  /* 103af3be movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 103af3c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103af3c4 je 0x103af3cf */
  if (C.zf) goto L_103af3cf;
  /* 103af3c6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 103af3ca cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103af3cd jne 0x103af3eb */
  if (!C.zf) goto L_103af3eb;
L_103af3cf:;
  /* 103af3cf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103af3d2 push edx */
  push32((uint32_t)(EDX));
  /* 103af3d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103af3d6 push eax */
  push32((uint32_t)(EAX));
  /* 103af3d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af3da add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103af3e0 push ecx */
  push32((uint32_t)(ECX));
  /* 103af3e1 call 0x103a8710 */
  push32(0x103af3e6u); f_103a8710();
  /* 103af3e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af3e9 jmp 0x103af3f0 */
  goto L_103af3f0;
L_103af3eb:;
  /* 103af3eb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103af3ee jmp 0x103af419 */
  goto L_103af419;
L_103af3f0:;
  /* 103af3f0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 103af3f4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103af3f7 jne 0x103af3fb */
  if (!C.zf) goto L_103af3fb;
  /* 103af3f9 jmp 0x103af417 */
  goto L_103af417;
L_103af3fb:;
  /* 103af3fb movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 103af3ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103af401 jne 0x103af405 */
  if (!C.zf) goto L_103af405;
  /* 103af403 jmp 0x103af417 */
  goto L_103af417;
L_103af405:;
  /* 103af405 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103af408 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103af40b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 103af40f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 103af412 jmp 0x103af329 */
  goto L_103af329;
L_103af417:;
  /* 103af417 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103af419:;
  /* 103af419 mov esp, ebp */
  ESP = (EBP);
  /* 103af41b pop ebp */
  EBP = (pop32());
  /* 103af41c ret  */
  ESPCHK(0x103af2c0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x103af420 (101 bytes, 36 insns) */
void f_103af420(void) {
  FTRACE(0x103af420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103af420 push ebp */
  push32((uint32_t)(EBP));
  /* 103af421 mov ebp, esp */
  EBP = (ESP);
  /* 103af423 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103af426 push eax */
  push32((uint32_t)(EAX));
  /* 103af427 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af42a push ecx */
  push32((uint32_t)(ECX));
  /* 103af42b call 0x103a7ea0 */
  push32(0x103af430u); f_103a7ea0();
  /* 103af430 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af433 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103af436 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 103af43a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103af43c je 0x103af458 */
  if (C.zf) goto L_103af458;
  /* 103af43e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103af441 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103af444 push ecx */
  push32((uint32_t)(ECX));
  /* 103af445 push 0x103cc2e0 */
  push32((uint32_t)(0x103cc2e0u));
  /* 103af44a push 2 */
  push32((uint32_t)(0x2u));
  /* 103af44c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af44f push edx */
  push32((uint32_t)(EDX));
  /* 103af450 call 0x103af270 */
  push32(0x103af455u); f_103af270();
  /* 103af455 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103af458:;
  /* 103af458 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103af45b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 103af462 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103af464 je 0x103af483 */
  if (C.zf) goto L_103af483;
  /* 103af466 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103af469 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103af46f push edx */
  push32((uint32_t)(EDX));
  /* 103af470 push 0x103cc2dc */
  push32((uint32_t)(0x103cc2dcu));
  /* 103af475 push 2 */
  push32((uint32_t)(0x2u));
  /* 103af477 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af47a push eax */
  push32((uint32_t)(EAX));
  /* 103af47b call 0x103af270 */
  push32(0x103af480u); f_103af270();
  /* 103af480 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103af483:;
  /* 103af483 pop ebp */
  EBP = (pop32());
  /* 103af484 ret  */
  ESPCHK(0x103af420u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f490 @ 0x103af490 (130 bytes, 50 insns) */
void f_103af490(void) {
  FTRACE(0x103af490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103af490 push ebp */
  push32((uint32_t)(EBP));
  /* 103af491 mov ebp, esp */
  EBP = (ESP);
  /* 103af493 push ecx */
  push32((uint32_t)(ECX));
  /* 103af494 push ebx */
  push32((uint32_t)(EBX));
  /* 103af495 push esi */
  push32((uint32_t)(ESI));
  /* 103af496 push edi */
  push32((uint32_t)(EDI));
  /* 103af497 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_103af49e:;
  /* 103af49e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103af4a2 jne 0x103af4c2 */
  if (!C.zf) goto L_103af4c2;
  /* 103af4a4 push 0x103cc2f0 */
  push32((uint32_t)(0x103cc2f0u));
  /* 103af4a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103af4ab push 0x3a */
  push32((uint32_t)(0x3au));
  /* 103af4ad push 0x103cc2e4 */
  push32((uint32_t)(0x103cc2e4u));
  /* 103af4b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 103af4b4 call 0x103a3fb0 */
  push32(0x103af4b9u); f_103a3fb0();
  /* 103af4b9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af4bc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103af4bf jne 0x103af4c2 */
  if (!C.zf) goto L_103af4c2;
  /* 103af4c1 int3  */
  x86_unimpl("int3 @ 0x103af4c1");
L_103af4c2:;
  /* 103af4c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103af4c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103af4c6 jne 0x103af49e */
  if (!C.zf) goto L_103af49e;
  /* 103af4c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af4cb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103af4ce and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 103af4d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103af4d3 je 0x103af4e1 */
  if (C.zf) goto L_103af4e1;
  /* 103af4d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af4d8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 103af4df jmp 0x103af508 */
  goto L_103af508;
L_103af4e1:;
  /* 103af4e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af4e4 push ecx */
  push32((uint32_t)(ECX));
  /* 103af4e5 call 0x103add00 */
  push32(0x103af4eau); f_103add00();
  /* 103af4ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af4ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af4f0 push edx */
  push32((uint32_t)(EDX));
  /* 103af4f1 call 0x103af520 */
  push32(0x103af4f6u); f_103af520();
  /* 103af4f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af4f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103af4fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af4ff push eax */
  push32((uint32_t)(EAX));
  /* 103af500 call 0x103add70 */
  push32(0x103af505u); f_103add70();
  /* 103af505 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103af508:;
  /* 103af508 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103af50b pop edi */
  EDI = (pop32());
  /* 103af50c pop esi */
  ESI = (pop32());
  /* 103af50d pop ebx */
  EBX = (pop32());
  /* 103af50e mov esp, ebp */
  ESP = (EBP);
  /* 103af510 pop ebp */
  EBP = (pop32());
  /* 103af511 ret  */
  ESPCHK(0x103af490u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f520 @ 0x103af520 (190 bytes, 67 insns) */
void f_103af520(void) {
  FTRACE(0x103af520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103af520 push ebp */
  push32((uint32_t)(EBP));
  /* 103af521 mov ebp, esp */
  EBP = (ESP);
  /* 103af523 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103af526 push ebx */
  push32((uint32_t)(EBX));
  /* 103af527 push esi */
  push32((uint32_t)(ESI));
  /* 103af528 push edi */
  push32((uint32_t)(EDI));
  /* 103af529 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 103af530 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af533 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_103af536:;
  /* 103af536 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103af53a jne 0x103af55a */
  if (!C.zf) goto L_103af55a;
  /* 103af53c push 0x103cc194 */
  push32((uint32_t)(0x103cc194u));
  /* 103af541 push 0 */
  push32((uint32_t)(0x0u));
  /* 103af543 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 103af545 push 0x103cc2e4 */
  push32((uint32_t)(0x103cc2e4u));
  /* 103af54a push 2 */
  push32((uint32_t)(0x2u));
  /* 103af54c call 0x103a3fb0 */
  push32(0x103af551u); f_103a3fb0();
  /* 103af551 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af554 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103af557 jne 0x103af55a */
  if (!C.zf) goto L_103af55a;
  /* 103af559 int3  */
  x86_unimpl("int3 @ 0x103af559");
L_103af55a:;
  /* 103af55a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103af55c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103af55e jne 0x103af536 */
  if (!C.zf) goto L_103af536;
  /* 103af560 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103af563 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 103af566 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 103af56b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103af56d je 0x103af5ca */
  if (C.zf) goto L_103af5ca;
  /* 103af56f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103af572 push ecx */
  push32((uint32_t)(ECX));
  /* 103af573 call 0x103ae820 */
  push32(0x103af578u); f_103ae820();
  /* 103af578 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af57b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103af57e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103af581 push edx */
  push32((uint32_t)(EDX));
  /* 103af582 call 0x103b1ba0 */
  push32(0x103af587u); f_103b1ba0();
  /* 103af587 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af58a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103af58d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103af590 push ecx */
  push32((uint32_t)(ECX));
  /* 103af591 call 0x103b1a70 */
  push32(0x103af596u); f_103b1a70();
  /* 103af596 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af599 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103af59b jge 0x103af5a6 */
  if ((C.sf==C.of)) goto L_103af5a6;
  /* 103af59d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 103af5a4 jmp 0x103af5ca */
  goto L_103af5ca;
L_103af5a6:;
  /* 103af5a6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103af5a9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103af5ad je 0x103af5ca */
  if (C.zf) goto L_103af5ca;
  /* 103af5af push 2 */
  push32((uint32_t)(0x2u));
  /* 103af5b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103af5b4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 103af5b7 push ecx */
  push32((uint32_t)(ECX));
  /* 103af5b8 call 0x103a5980 */
  push32(0x103af5bdu); f_103a5980();
  /* 103af5bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af5c0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103af5c3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_103af5ca:;
  /* 103af5ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103af5cd mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 103af5d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103af5d7 pop edi */
  EDI = (pop32());
  /* 103af5d8 pop esi */
  ESI = (pop32());
  /* 103af5d9 pop ebx */
  EBX = (pop32());
  /* 103af5da mov esp, ebp */
  ESP = (EBP);
  /* 103af5dc pop ebp */
  EBP = (pop32());
  /* 103af5dd ret  */
  ESPCHK(0x103af520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5e0 @ 0x103af5e0 (210 bytes, 63 insns) */
void f_103af5e0(void) {
  FTRACE(0x103af5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103af5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 103af5e1 mov ebp, esp */
  EBP = (ESP);
  /* 103af5e3 push ecx */
  push32((uint32_t)(ECX));
  /* 103af5e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af5e7 cmp eax, dword ptr [0x103d20fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x103d20fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103af5ed jae 0x103af611 */
  if (!C.cf) goto L_103af611;
  /* 103af5ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af5f2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 103af5f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af5f8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 103af5fb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103af5fe mov eax, dword ptr [ecx*4 + 0x103d1fc0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x103d1fc0)));
  /* 103af605 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 103af60a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 103af60d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103af60f jne 0x103af624 */
  if (!C.zf) goto L_103af624;
L_103af611:;
  /* 103af611 call 0x103acdc0 */
  push32(0x103af616u); f_103acdc0();
  /* 103af616 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 103af61c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103af61f jmp 0x103af6ae */
  goto L_103af6ae;
L_103af624:;
  /* 103af624 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af627 push edx */
  push32((uint32_t)(EDX));
  /* 103af628 call 0x103ae5e0 */
  push32(0x103af62du); f_103ae5e0();
  /* 103af62d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af630 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af633 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 103af636 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af639 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 103af63c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103af63f mov edx, dword ptr [eax*4 + 0x103d1fc0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x103d1fc0)));
  /* 103af646 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 103af64b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 103af64e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103af650 je 0x103af68d */
  if (C.zf) goto L_103af68d;
  /* 103af652 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af655 push ecx */
  push32((uint32_t)(ECX));
  /* 103af656 call 0x103ae460 */
  push32(0x103af65bu); f_103ae460();
  /* 103af65b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af65e push eax */
  push32((uint32_t)(EAX));
  /* 103af65f call dword ptr [0x103d32d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32d0))), 0x103af665u);
  /* 103af665 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103af667 jne 0x103af674 */
  if (!C.zf) goto L_103af674;
  /* 103af669 call dword ptr [0x103d3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3378))), 0x103af66fu);
  /* 103af66f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103af672 jmp 0x103af67b */
  goto L_103af67b;
L_103af674:;
  /* 103af674 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_103af67b:;
  /* 103af67b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103af67f jne 0x103af683 */
  if (!C.zf) goto L_103af683;
  /* 103af681 jmp 0x103af69f */
  goto L_103af69f;
L_103af683:;
  /* 103af683 call 0x103acdd0 */
  push32(0x103af688u); f_103acdd0();
  /* 103af688 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103af68b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_103af68d:;
  /* 103af68d call 0x103acdc0 */
  push32(0x103af692u); f_103acdc0();
  /* 103af692 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 103af698 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_103af69f:;
  /* 103af69f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af6a2 push eax */
  push32((uint32_t)(EAX));
  /* 103af6a3 call 0x103ae670 */
  push32(0x103af6a8u); f_103ae670();
  /* 103af6a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af6ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_103af6ae:;
  /* 103af6ae mov esp, ebp */
  ESP = (EBP);
  /* 103af6b0 pop ebp */
  EBP = (pop32());
  /* 103af6b1 ret  */
  ESPCHK(0x103af5e0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x103af6c0 (219 bytes, 64 insns) */
void f_103af6c0(void) {
  FTRACE(0x103af6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103af6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 103af6c1 mov ebp, esp */
  EBP = (ESP);
  /* 103af6c3 push ecx */
  push32((uint32_t)(ECX));
  /* 103af6c4 cmp dword ptr [0x103d07fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d07fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103af6cb je 0x103af761 */
  if (C.zf) goto L_103af761;
  /* 103af6d1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 103af6d3 push 0x103cc300 */
  push32((uint32_t)(0x103cc300u));
  /* 103af6d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 103af6da push 0xac */
  push32((uint32_t)(0xacu));
  /* 103af6df push 1 */
  push32((uint32_t)(0x1u));
  /* 103af6e1 call 0x103a5300 */
  push32(0x103af6e6u); f_103a5300();
  /* 103af6e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af6e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103af6ec cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103af6f0 jne 0x103af6fc */
  if (!C.zf) goto L_103af6fc;
  /* 103af6f2 mov eax, 1 */
  EAX = (0x1u);
  /* 103af6f7 jmp 0x103af797 */
  goto L_103af797;
L_103af6fc:;
  /* 103af6fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103af6ff push eax */
  push32((uint32_t)(EAX));
  /* 103af700 call 0x103af7a0 */
  push32(0x103af705u); f_103af7a0();
  /* 103af705 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af708 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103af70a je 0x103af72d */
  if (C.zf) goto L_103af72d;
  /* 103af70c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103af70f push ecx */
  push32((uint32_t)(ECX));
  /* 103af710 call 0x103afd30 */
  push32(0x103af715u); f_103afd30();
  /* 103af715 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af718 push 2 */
  push32((uint32_t)(0x2u));
  /* 103af71a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103af71d push edx */
  push32((uint32_t)(EDX));
  /* 103af71e call 0x103a5980 */
  push32(0x103af723u); f_103a5980();
  /* 103af723 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af726 mov eax, 1 */
  EAX = (0x1u);
  /* 103af72b jmp 0x103af797 */
  goto L_103af797;
L_103af72d:;
  /* 103af72d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103af730 mov dword ptr [0x103cfc98], eax */
  w32((uint32_t)(0x103cfc98), (EAX));
  /* 103af735 mov ecx, dword ptr [0x103d081c] */
  ECX = (r32((uint32_t)(0x103d081c)));
  /* 103af73b push ecx */
  push32((uint32_t)(ECX));
  /* 103af73c call 0x103afd30 */
  push32(0x103af741u); f_103afd30();
  /* 103af741 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af744 push 2 */
  push32((uint32_t)(0x2u));
  /* 103af746 mov edx, dword ptr [0x103d081c] */
  EDX = (r32((uint32_t)(0x103d081c)));
  /* 103af74c push edx */
  push32((uint32_t)(EDX));
  /* 103af74d call 0x103a5980 */
  push32(0x103af752u); f_103a5980();
  /* 103af752 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af755 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103af758 mov dword ptr [0x103d081c], eax */
  w32((uint32_t)(0x103d081c), (EAX));
  /* 103af75d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103af75f jmp 0x103af797 */
  goto L_103af797;
L_103af761:;
  /* 103af761 mov dword ptr [0x103cfc98], 0x103cfca0 */
  w32((uint32_t)(0x103cfc98), (0x103cfca0u));
  /* 103af76b mov ecx, dword ptr [0x103d081c] */
  ECX = (r32((uint32_t)(0x103d081c)));
  /* 103af771 push ecx */
  push32((uint32_t)(ECX));
  /* 103af772 call 0x103afd30 */
  push32(0x103af777u); f_103afd30();
  /* 103af777 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af77a push 2 */
  push32((uint32_t)(0x2u));
  /* 103af77c mov edx, dword ptr [0x103d081c] */
  EDX = (r32((uint32_t)(0x103d081c)));
  /* 103af782 push edx */
  push32((uint32_t)(EDX));
  /* 103af783 call 0x103a5980 */
  push32(0x103af788u); f_103a5980();
  /* 103af788 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af78b mov dword ptr [0x103d081c], 0 */
  w32((uint32_t)(0x103d081c), (0x0u));
  /* 103af795 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103af797:;
  /* 103af797 mov esp, ebp */
  ESP = (EBP);
  /* 103af799 pop ebp */
  EBP = (pop32());
  /* 103af79a ret  */
  ESPCHK(0x103af6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7a0 @ 0x103af7a0 (1423 bytes, 533 insns) */
void f_103af7a0(void) {
  FTRACE(0x103af7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103af7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 103af7a1 mov ebp, esp */
  EBP = (ESP);
  /* 103af7a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103af7a6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 103af7ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103af7af mov ax, word ptr [0x103d0856] */
  AX = (r16((uint32_t)(0x103d0856)));
  /* 103af7b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103af7b8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103af7ba mov cx, word ptr [0x103d0858] */
  CX = (r16((uint32_t)(0x103d0858)));
  /* 103af7c1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103af7c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103af7c8 jne 0x103af7d2 */
  if (!C.zf) goto L_103af7d2;
  /* 103af7ca or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103af7cd jmp 0x103afd2b */
  goto L_103afd2b;
L_103af7d2:;
  /* 103af7d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af7d5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103af7d8 push edx */
  push32((uint32_t)(EDX));
  /* 103af7d9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 103af7db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103af7de push eax */
  push32((uint32_t)(EAX));
  /* 103af7df push 1 */
  push32((uint32_t)(0x1u));
  /* 103af7e1 call 0x103b30b0 */
  push32(0x103af7e6u); f_103b30b0();
  /* 103af7e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af7e9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103af7ec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103af7ee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103af7f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af7f4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103af7f7 push edx */
  push32((uint32_t)(EDX));
  /* 103af7f8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 103af7fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103af7fd push eax */
  push32((uint32_t)(EAX));
  /* 103af7fe push 1 */
  push32((uint32_t)(0x1u));
  /* 103af800 call 0x103b30b0 */
  push32(0x103af805u); f_103b30b0();
  /* 103af805 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af808 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103af80b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103af80d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103af810 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af813 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103af816 push edx */
  push32((uint32_t)(EDX));
  /* 103af817 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 103af819 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103af81c push eax */
  push32((uint32_t)(EAX));
  /* 103af81d push 1 */
  push32((uint32_t)(0x1u));
  /* 103af81f call 0x103b30b0 */
  push32(0x103af824u); f_103b30b0();
  /* 103af824 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af827 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103af82a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103af82c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103af82f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af832 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103af835 push edx */
  push32((uint32_t)(EDX));
  /* 103af836 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 103af838 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103af83b push eax */
  push32((uint32_t)(EAX));
  /* 103af83c push 1 */
  push32((uint32_t)(0x1u));
  /* 103af83e call 0x103b30b0 */
  push32(0x103af843u); f_103b30b0();
  /* 103af843 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af846 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103af849 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103af84b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103af84e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af851 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103af854 push edx */
  push32((uint32_t)(EDX));
  /* 103af855 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 103af857 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103af85a push eax */
  push32((uint32_t)(EAX));
  /* 103af85b push 1 */
  push32((uint32_t)(0x1u));
  /* 103af85d call 0x103b30b0 */
  push32(0x103af862u); f_103b30b0();
  /* 103af862 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af865 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103af868 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103af86a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103af86d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af870 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103af873 push edx */
  push32((uint32_t)(EDX));
  /* 103af874 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 103af876 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103af879 push eax */
  push32((uint32_t)(EAX));
  /* 103af87a push 1 */
  push32((uint32_t)(0x1u));
  /* 103af87c call 0x103b30b0 */
  push32(0x103af881u); f_103b30b0();
  /* 103af881 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af884 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103af887 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103af889 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103af88c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af88f push edx */
  push32((uint32_t)(EDX));
  /* 103af890 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 103af892 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103af895 push eax */
  push32((uint32_t)(EAX));
  /* 103af896 push 1 */
  push32((uint32_t)(0x1u));
  /* 103af898 call 0x103b30b0 */
  push32(0x103af89du); f_103b30b0();
  /* 103af89d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af8a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103af8a3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103af8a5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103af8a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af8ab add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103af8ae push edx */
  push32((uint32_t)(EDX));
  /* 103af8af push 0x2a */
  push32((uint32_t)(0x2au));
  /* 103af8b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103af8b4 push eax */
  push32((uint32_t)(EAX));
  /* 103af8b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 103af8b7 call 0x103b30b0 */
  push32(0x103af8bcu); f_103b30b0();
  /* 103af8bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af8bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103af8c2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103af8c4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103af8c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af8ca add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103af8cd push edx */
  push32((uint32_t)(EDX));
  /* 103af8ce push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 103af8d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103af8d3 push eax */
  push32((uint32_t)(EAX));
  /* 103af8d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 103af8d6 call 0x103b30b0 */
  push32(0x103af8dbu); f_103b30b0();
  /* 103af8db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af8de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103af8e1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103af8e3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103af8e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af8e9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103af8ec push edx */
  push32((uint32_t)(EDX));
  /* 103af8ed push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 103af8ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103af8f2 push eax */
  push32((uint32_t)(EAX));
  /* 103af8f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 103af8f5 call 0x103b30b0 */
  push32(0x103af8fau); f_103b30b0();
  /* 103af8fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af8fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103af900 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103af902 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103af905 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af908 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103af90b push edx */
  push32((uint32_t)(EDX));
  /* 103af90c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 103af90e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103af911 push eax */
  push32((uint32_t)(EAX));
  /* 103af912 push 1 */
  push32((uint32_t)(0x1u));
  /* 103af914 call 0x103b30b0 */
  push32(0x103af919u); f_103b30b0();
  /* 103af919 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af91c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103af91f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103af921 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103af924 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af927 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103af92a push edx */
  push32((uint32_t)(EDX));
  /* 103af92b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 103af92d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103af930 push eax */
  push32((uint32_t)(EAX));
  /* 103af931 push 1 */
  push32((uint32_t)(0x1u));
  /* 103af933 call 0x103b30b0 */
  push32(0x103af938u); f_103b30b0();
  /* 103af938 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af93b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103af93e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103af940 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103af943 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af946 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103af949 push edx */
  push32((uint32_t)(EDX));
  /* 103af94a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 103af94c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103af94f push eax */
  push32((uint32_t)(EAX));
  /* 103af950 push 1 */
  push32((uint32_t)(0x1u));
  /* 103af952 call 0x103b30b0 */
  push32(0x103af957u); f_103b30b0();
  /* 103af957 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af95a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103af95d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103af95f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103af962 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af965 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103af968 push edx */
  push32((uint32_t)(EDX));
  /* 103af969 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 103af96b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103af96e push eax */
  push32((uint32_t)(EAX));
  /* 103af96f push 1 */
  push32((uint32_t)(0x1u));
  /* 103af971 call 0x103b30b0 */
  push32(0x103af976u); f_103b30b0();
  /* 103af976 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af979 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103af97c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103af97e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103af981 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af984 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103af987 push edx */
  push32((uint32_t)(EDX));
  /* 103af988 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 103af98a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103af98d push eax */
  push32((uint32_t)(EAX));
  /* 103af98e push 1 */
  push32((uint32_t)(0x1u));
  /* 103af990 call 0x103b30b0 */
  push32(0x103af995u); f_103b30b0();
  /* 103af995 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af998 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103af99b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103af99d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103af9a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af9a3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103af9a6 push edx */
  push32((uint32_t)(EDX));
  /* 103af9a7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 103af9a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103af9ac push eax */
  push32((uint32_t)(EAX));
  /* 103af9ad push 1 */
  push32((uint32_t)(0x1u));
  /* 103af9af call 0x103b30b0 */
  push32(0x103af9b4u); f_103b30b0();
  /* 103af9b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af9b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103af9ba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103af9bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103af9bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af9c2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103af9c5 push edx */
  push32((uint32_t)(EDX));
  /* 103af9c6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 103af9c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103af9cb push eax */
  push32((uint32_t)(EAX));
  /* 103af9cc push 1 */
  push32((uint32_t)(0x1u));
  /* 103af9ce call 0x103b30b0 */
  push32(0x103af9d3u); f_103b30b0();
  /* 103af9d3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af9d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103af9d9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103af9db mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103af9de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103af9e1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103af9e4 push edx */
  push32((uint32_t)(EDX));
  /* 103af9e5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 103af9e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103af9ea push eax */
  push32((uint32_t)(EAX));
  /* 103af9eb push 1 */
  push32((uint32_t)(0x1u));
  /* 103af9ed call 0x103b30b0 */
  push32(0x103af9f2u); f_103b30b0();
  /* 103af9f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103af9f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103af9f8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103af9fa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103af9fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afa00 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103afa03 push edx */
  push32((uint32_t)(EDX));
  /* 103afa04 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 103afa06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103afa09 push eax */
  push32((uint32_t)(EAX));
  /* 103afa0a push 1 */
  push32((uint32_t)(0x1u));
  /* 103afa0c call 0x103b30b0 */
  push32(0x103afa11u); f_103b30b0();
  /* 103afa11 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afa14 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103afa17 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103afa19 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103afa1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afa1f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103afa22 push edx */
  push32((uint32_t)(EDX));
  /* 103afa23 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 103afa25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103afa28 push eax */
  push32((uint32_t)(EAX));
  /* 103afa29 push 1 */
  push32((uint32_t)(0x1u));
  /* 103afa2b call 0x103b30b0 */
  push32(0x103afa30u); f_103b30b0();
  /* 103afa30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afa33 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103afa36 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103afa38 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103afa3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afa3e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103afa41 push edx */
  push32((uint32_t)(EDX));
  /* 103afa42 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 103afa44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103afa47 push eax */
  push32((uint32_t)(EAX));
  /* 103afa48 push 1 */
  push32((uint32_t)(0x1u));
  /* 103afa4a call 0x103b30b0 */
  push32(0x103afa4fu); f_103b30b0();
  /* 103afa4f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afa52 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103afa55 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103afa57 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103afa5a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afa5d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103afa60 push edx */
  push32((uint32_t)(EDX));
  /* 103afa61 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 103afa63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103afa66 push eax */
  push32((uint32_t)(EAX));
  /* 103afa67 push 1 */
  push32((uint32_t)(0x1u));
  /* 103afa69 call 0x103b30b0 */
  push32(0x103afa6eu); f_103b30b0();
  /* 103afa6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afa71 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103afa74 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103afa76 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103afa79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afa7c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103afa7f push edx */
  push32((uint32_t)(EDX));
  /* 103afa80 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 103afa82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103afa85 push eax */
  push32((uint32_t)(EAX));
  /* 103afa86 push 1 */
  push32((uint32_t)(0x1u));
  /* 103afa88 call 0x103b30b0 */
  push32(0x103afa8du); f_103b30b0();
  /* 103afa8d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afa90 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103afa93 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103afa95 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103afa98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afa9b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103afa9e push edx */
  push32((uint32_t)(EDX));
  /* 103afa9f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 103afaa1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103afaa4 push eax */
  push32((uint32_t)(EAX));
  /* 103afaa5 push 1 */
  push32((uint32_t)(0x1u));
  /* 103afaa7 call 0x103b30b0 */
  push32(0x103afaacu); f_103b30b0();
  /* 103afaac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afaaf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103afab2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103afab4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103afab7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afaba add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103afabd push edx */
  push32((uint32_t)(EDX));
  /* 103afabe push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 103afac0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103afac3 push eax */
  push32((uint32_t)(EAX));
  /* 103afac4 push 1 */
  push32((uint32_t)(0x1u));
  /* 103afac6 call 0x103b30b0 */
  push32(0x103afacbu); f_103b30b0();
  /* 103afacb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aface mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103afad1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103afad3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103afad6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afad9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103afadc push edx */
  push32((uint32_t)(EDX));
  /* 103afadd push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 103afadf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103afae2 push eax */
  push32((uint32_t)(EAX));
  /* 103afae3 push 1 */
  push32((uint32_t)(0x1u));
  /* 103afae5 call 0x103b30b0 */
  push32(0x103afaeau); f_103b30b0();
  /* 103afaea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afaed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103afaf0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103afaf2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103afaf5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afaf8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103afafb push edx */
  push32((uint32_t)(EDX));
  /* 103afafc push 0x38 */
  push32((uint32_t)(0x38u));
  /* 103afafe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103afb01 push eax */
  push32((uint32_t)(EAX));
  /* 103afb02 push 1 */
  push32((uint32_t)(0x1u));
  /* 103afb04 call 0x103b30b0 */
  push32(0x103afb09u); f_103b30b0();
  /* 103afb09 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afb0c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103afb0f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103afb11 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103afb14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afb17 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103afb1a push edx */
  push32((uint32_t)(EDX));
  /* 103afb1b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 103afb1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103afb20 push eax */
  push32((uint32_t)(EAX));
  /* 103afb21 push 1 */
  push32((uint32_t)(0x1u));
  /* 103afb23 call 0x103b30b0 */
  push32(0x103afb28u); f_103b30b0();
  /* 103afb28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afb2b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103afb2e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103afb30 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103afb33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afb36 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103afb39 push edx */
  push32((uint32_t)(EDX));
  /* 103afb3a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 103afb3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103afb3f push eax */
  push32((uint32_t)(EAX));
  /* 103afb40 push 1 */
  push32((uint32_t)(0x1u));
  /* 103afb42 call 0x103b30b0 */
  push32(0x103afb47u); f_103b30b0();
  /* 103afb47 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afb4a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103afb4d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103afb4f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103afb52 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afb55 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103afb58 push edx */
  push32((uint32_t)(EDX));
  /* 103afb59 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 103afb5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103afb5e push eax */
  push32((uint32_t)(EAX));
  /* 103afb5f push 1 */
  push32((uint32_t)(0x1u));
  /* 103afb61 call 0x103b30b0 */
  push32(0x103afb66u); f_103b30b0();
  /* 103afb66 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afb69 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103afb6c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103afb6e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103afb71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afb74 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103afb77 push edx */
  push32((uint32_t)(EDX));
  /* 103afb78 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 103afb7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103afb7d push eax */
  push32((uint32_t)(EAX));
  /* 103afb7e push 1 */
  push32((uint32_t)(0x1u));
  /* 103afb80 call 0x103b30b0 */
  push32(0x103afb85u); f_103b30b0();
  /* 103afb85 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afb88 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103afb8b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103afb8d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103afb90 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afb93 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103afb96 push edx */
  push32((uint32_t)(EDX));
  /* 103afb97 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 103afb99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103afb9c push eax */
  push32((uint32_t)(EAX));
  /* 103afb9d push 1 */
  push32((uint32_t)(0x1u));
  /* 103afb9f call 0x103b30b0 */
  push32(0x103afba4u); f_103b30b0();
  /* 103afba4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afba7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103afbaa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103afbac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103afbaf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afbb2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103afbb8 push edx */
  push32((uint32_t)(EDX));
  /* 103afbb9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 103afbbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103afbbe push eax */
  push32((uint32_t)(EAX));
  /* 103afbbf push 1 */
  push32((uint32_t)(0x1u));
  /* 103afbc1 call 0x103b30b0 */
  push32(0x103afbc6u); f_103b30b0();
  /* 103afbc6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afbc9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103afbcc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103afbce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103afbd1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afbd4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103afbda push edx */
  push32((uint32_t)(EDX));
  /* 103afbdb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 103afbdd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103afbe0 push eax */
  push32((uint32_t)(EAX));
  /* 103afbe1 push 1 */
  push32((uint32_t)(0x1u));
  /* 103afbe3 call 0x103b30b0 */
  push32(0x103afbe8u); f_103b30b0();
  /* 103afbe8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afbeb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103afbee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103afbf0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103afbf3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afbf6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103afbfc push edx */
  push32((uint32_t)(EDX));
  /* 103afbfd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 103afbff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103afc02 push eax */
  push32((uint32_t)(EAX));
  /* 103afc03 push 1 */
  push32((uint32_t)(0x1u));
  /* 103afc05 call 0x103b30b0 */
  push32(0x103afc0au); f_103b30b0();
  /* 103afc0a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afc0d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103afc10 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103afc12 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103afc15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afc18 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103afc1e push edx */
  push32((uint32_t)(EDX));
  /* 103afc1f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 103afc21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103afc24 push eax */
  push32((uint32_t)(EAX));
  /* 103afc25 push 1 */
  push32((uint32_t)(0x1u));
  /* 103afc27 call 0x103b30b0 */
  push32(0x103afc2cu); f_103b30b0();
  /* 103afc2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afc2f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103afc32 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103afc34 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103afc37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afc3a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103afc40 push edx */
  push32((uint32_t)(EDX));
  /* 103afc41 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 103afc43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103afc46 push eax */
  push32((uint32_t)(EAX));
  /* 103afc47 push 1 */
  push32((uint32_t)(0x1u));
  /* 103afc49 call 0x103b30b0 */
  push32(0x103afc4eu); f_103b30b0();
  /* 103afc4e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afc51 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103afc54 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103afc56 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103afc59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afc5c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103afc62 push edx */
  push32((uint32_t)(EDX));
  /* 103afc63 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 103afc65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103afc68 push eax */
  push32((uint32_t)(EAX));
  /* 103afc69 push 1 */
  push32((uint32_t)(0x1u));
  /* 103afc6b call 0x103b30b0 */
  push32(0x103afc70u); f_103b30b0();
  /* 103afc70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afc73 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103afc76 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103afc78 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103afc7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afc7e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103afc84 push edx */
  push32((uint32_t)(EDX));
  /* 103afc85 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 103afc87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103afc8a push eax */
  push32((uint32_t)(EAX));
  /* 103afc8b push 1 */
  push32((uint32_t)(0x1u));
  /* 103afc8d call 0x103b30b0 */
  push32(0x103afc92u); f_103b30b0();
  /* 103afc92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afc95 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103afc98 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103afc9a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103afc9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afca0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103afca6 push edx */
  push32((uint32_t)(EDX));
  /* 103afca7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 103afca9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103afcac push eax */
  push32((uint32_t)(EAX));
  /* 103afcad push 1 */
  push32((uint32_t)(0x1u));
  /* 103afcaf call 0x103b30b0 */
  push32(0x103afcb4u); f_103b30b0();
  /* 103afcb4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afcb7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103afcba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103afcbc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103afcbf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afcc2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103afcc8 push edx */
  push32((uint32_t)(EDX));
  /* 103afcc9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 103afccb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103afcce push eax */
  push32((uint32_t)(EAX));
  /* 103afccf push 1 */
  push32((uint32_t)(0x1u));
  /* 103afcd1 call 0x103b30b0 */
  push32(0x103afcd6u); f_103b30b0();
  /* 103afcd6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afcd9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103afcdc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103afcde mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103afce1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afce4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103afcea push edx */
  push32((uint32_t)(EDX));
  /* 103afceb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 103afced mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103afcf0 push eax */
  push32((uint32_t)(EAX));
  /* 103afcf1 push 1 */
  push32((uint32_t)(0x1u));
  /* 103afcf3 call 0x103b30b0 */
  push32(0x103afcf8u); f_103b30b0();
  /* 103afcf8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afcfb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103afcfe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103afd00 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103afd03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afd06 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103afd0c push edx */
  push32((uint32_t)(EDX));
  /* 103afd0d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 103afd12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103afd15 push eax */
  push32((uint32_t)(EAX));
  /* 103afd16 push 1 */
  push32((uint32_t)(0x1u));
  /* 103afd18 call 0x103b30b0 */
  push32(0x103afd1du); f_103b30b0();
  /* 103afd1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afd20 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103afd23 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103afd25 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103afd28 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_103afd2b:;
  /* 103afd2b mov esp, ebp */
  ESP = (EBP);
  /* 103afd2d pop ebp */
  EBP = (pop32());
  /* 103afd2e ret  */
  ESPCHK(0x103af7a0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x103afd30 (779 bytes, 265 insns) */
void f_103afd30(void) {
  FTRACE(0x103afd30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103afd30 push ebp */
  push32((uint32_t)(EBP));
  /* 103afd31 mov ebp, esp */
  EBP = (ESP);
  /* 103afd33 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103afd37 jne 0x103afd3e */
  if (!C.zf) goto L_103afd3e;
  /* 103afd39 jmp 0x103b0039 */
  goto L_103b0039;
L_103afd3e:;
  /* 103afd3e push 2 */
  push32((uint32_t)(0x2u));
  /* 103afd40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afd43 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103afd46 push ecx */
  push32((uint32_t)(ECX));
  /* 103afd47 call 0x103a5980 */
  push32(0x103afd4cu); f_103a5980();
  /* 103afd4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afd4f push 2 */
  push32((uint32_t)(0x2u));
  /* 103afd51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afd54 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 103afd57 push eax */
  push32((uint32_t)(EAX));
  /* 103afd58 call 0x103a5980 */
  push32(0x103afd5du); f_103a5980();
  /* 103afd5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afd60 push 2 */
  push32((uint32_t)(0x2u));
  /* 103afd62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afd65 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103afd68 push edx */
  push32((uint32_t)(EDX));
  /* 103afd69 call 0x103a5980 */
  push32(0x103afd6eu); f_103a5980();
  /* 103afd6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afd71 push 2 */
  push32((uint32_t)(0x2u));
  /* 103afd73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afd76 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103afd79 push ecx */
  push32((uint32_t)(ECX));
  /* 103afd7a call 0x103a5980 */
  push32(0x103afd7fu); f_103a5980();
  /* 103afd7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afd82 push 2 */
  push32((uint32_t)(0x2u));
  /* 103afd84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afd87 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103afd8a push eax */
  push32((uint32_t)(EAX));
  /* 103afd8b call 0x103a5980 */
  push32(0x103afd90u); f_103a5980();
  /* 103afd90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afd93 push 2 */
  push32((uint32_t)(0x2u));
  /* 103afd95 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afd98 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 103afd9b push edx */
  push32((uint32_t)(EDX));
  /* 103afd9c call 0x103a5980 */
  push32(0x103afda1u); f_103a5980();
  /* 103afda1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afda4 push 2 */
  push32((uint32_t)(0x2u));
  /* 103afda6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afda9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103afdab push ecx */
  push32((uint32_t)(ECX));
  /* 103afdac call 0x103a5980 */
  push32(0x103afdb1u); f_103a5980();
  /* 103afdb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afdb4 push 2 */
  push32((uint32_t)(0x2u));
  /* 103afdb6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afdb9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 103afdbc push eax */
  push32((uint32_t)(EAX));
  /* 103afdbd call 0x103a5980 */
  push32(0x103afdc2u); f_103a5980();
  /* 103afdc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afdc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 103afdc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afdca mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 103afdcd push edx */
  push32((uint32_t)(EDX));
  /* 103afdce call 0x103a5980 */
  push32(0x103afdd3u); f_103a5980();
  /* 103afdd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afdd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 103afdd8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afddb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 103afdde push ecx */
  push32((uint32_t)(ECX));
  /* 103afddf call 0x103a5980 */
  push32(0x103afde4u); f_103a5980();
  /* 103afde4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afde7 push 2 */
  push32((uint32_t)(0x2u));
  /* 103afde9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afdec mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 103afdef push eax */
  push32((uint32_t)(EAX));
  /* 103afdf0 call 0x103a5980 */
  push32(0x103afdf5u); f_103a5980();
  /* 103afdf5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afdf8 push 2 */
  push32((uint32_t)(0x2u));
  /* 103afdfa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afdfd mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 103afe00 push edx */
  push32((uint32_t)(EDX));
  /* 103afe01 call 0x103a5980 */
  push32(0x103afe06u); f_103a5980();
  /* 103afe06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afe09 push 2 */
  push32((uint32_t)(0x2u));
  /* 103afe0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afe0e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 103afe11 push ecx */
  push32((uint32_t)(ECX));
  /* 103afe12 call 0x103a5980 */
  push32(0x103afe17u); f_103a5980();
  /* 103afe17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afe1a push 2 */
  push32((uint32_t)(0x2u));
  /* 103afe1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afe1f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 103afe22 push eax */
  push32((uint32_t)(EAX));
  /* 103afe23 call 0x103a5980 */
  push32(0x103afe28u); f_103a5980();
  /* 103afe28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afe2b push 2 */
  push32((uint32_t)(0x2u));
  /* 103afe2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afe30 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 103afe33 push edx */
  push32((uint32_t)(EDX));
  /* 103afe34 call 0x103a5980 */
  push32(0x103afe39u); f_103a5980();
  /* 103afe39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afe3c push 2 */
  push32((uint32_t)(0x2u));
  /* 103afe3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afe41 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 103afe44 push ecx */
  push32((uint32_t)(ECX));
  /* 103afe45 call 0x103a5980 */
  push32(0x103afe4au); f_103a5980();
  /* 103afe4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afe4d push 2 */
  push32((uint32_t)(0x2u));
  /* 103afe4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afe52 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 103afe55 push eax */
  push32((uint32_t)(EAX));
  /* 103afe56 call 0x103a5980 */
  push32(0x103afe5bu); f_103a5980();
  /* 103afe5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afe5e push 2 */
  push32((uint32_t)(0x2u));
  /* 103afe60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afe63 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 103afe66 push edx */
  push32((uint32_t)(EDX));
  /* 103afe67 call 0x103a5980 */
  push32(0x103afe6cu); f_103a5980();
  /* 103afe6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afe6f push 2 */
  push32((uint32_t)(0x2u));
  /* 103afe71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afe74 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 103afe77 push ecx */
  push32((uint32_t)(ECX));
  /* 103afe78 call 0x103a5980 */
  push32(0x103afe7du); f_103a5980();
  /* 103afe7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afe80 push 2 */
  push32((uint32_t)(0x2u));
  /* 103afe82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afe85 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 103afe88 push eax */
  push32((uint32_t)(EAX));
  /* 103afe89 call 0x103a5980 */
  push32(0x103afe8eu); f_103a5980();
  /* 103afe8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afe91 push 2 */
  push32((uint32_t)(0x2u));
  /* 103afe93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afe96 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 103afe99 push edx */
  push32((uint32_t)(EDX));
  /* 103afe9a call 0x103a5980 */
  push32(0x103afe9fu); f_103a5980();
  /* 103afe9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afea2 push 2 */
  push32((uint32_t)(0x2u));
  /* 103afea4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afea7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 103afeaa push ecx */
  push32((uint32_t)(ECX));
  /* 103afeab call 0x103a5980 */
  push32(0x103afeb0u); f_103a5980();
  /* 103afeb0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afeb3 push 2 */
  push32((uint32_t)(0x2u));
  /* 103afeb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afeb8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 103afebb push eax */
  push32((uint32_t)(EAX));
  /* 103afebc call 0x103a5980 */
  push32(0x103afec1u); f_103a5980();
  /* 103afec1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afec4 push 2 */
  push32((uint32_t)(0x2u));
  /* 103afec6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afec9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 103afecc push edx */
  push32((uint32_t)(EDX));
  /* 103afecd call 0x103a5980 */
  push32(0x103afed2u); f_103a5980();
  /* 103afed2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afed5 push 2 */
  push32((uint32_t)(0x2u));
  /* 103afed7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afeda mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 103afedd push ecx */
  push32((uint32_t)(ECX));
  /* 103afede call 0x103a5980 */
  push32(0x103afee3u); f_103a5980();
  /* 103afee3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afee6 push 2 */
  push32((uint32_t)(0x2u));
  /* 103afee8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afeeb mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 103afeee push eax */
  push32((uint32_t)(EAX));
  /* 103afeef call 0x103a5980 */
  push32(0x103afef4u); f_103a5980();
  /* 103afef4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afef7 push 2 */
  push32((uint32_t)(0x2u));
  /* 103afef9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103afefc mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 103afeff push edx */
  push32((uint32_t)(EDX));
  /* 103aff00 call 0x103a5980 */
  push32(0x103aff05u); f_103a5980();
  /* 103aff05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aff08 push 2 */
  push32((uint32_t)(0x2u));
  /* 103aff0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aff0d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 103aff10 push ecx */
  push32((uint32_t)(ECX));
  /* 103aff11 call 0x103a5980 */
  push32(0x103aff16u); f_103a5980();
  /* 103aff16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aff19 push 2 */
  push32((uint32_t)(0x2u));
  /* 103aff1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aff1e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 103aff21 push eax */
  push32((uint32_t)(EAX));
  /* 103aff22 call 0x103a5980 */
  push32(0x103aff27u); f_103a5980();
  /* 103aff27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aff2a push 2 */
  push32((uint32_t)(0x2u));
  /* 103aff2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aff2f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 103aff32 push edx */
  push32((uint32_t)(EDX));
  /* 103aff33 call 0x103a5980 */
  push32(0x103aff38u); f_103a5980();
  /* 103aff38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aff3b push 2 */
  push32((uint32_t)(0x2u));
  /* 103aff3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aff40 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 103aff43 push ecx */
  push32((uint32_t)(ECX));
  /* 103aff44 call 0x103a5980 */
  push32(0x103aff49u); f_103a5980();
  /* 103aff49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aff4c push 2 */
  push32((uint32_t)(0x2u));
  /* 103aff4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aff51 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 103aff54 push eax */
  push32((uint32_t)(EAX));
  /* 103aff55 call 0x103a5980 */
  push32(0x103aff5au); f_103a5980();
  /* 103aff5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aff5d push 2 */
  push32((uint32_t)(0x2u));
  /* 103aff5f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aff62 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 103aff68 push edx */
  push32((uint32_t)(EDX));
  /* 103aff69 call 0x103a5980 */
  push32(0x103aff6eu); f_103a5980();
  /* 103aff6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aff71 push 2 */
  push32((uint32_t)(0x2u));
  /* 103aff73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aff76 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 103aff7c push ecx */
  push32((uint32_t)(ECX));
  /* 103aff7d call 0x103a5980 */
  push32(0x103aff82u); f_103a5980();
  /* 103aff82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aff85 push 2 */
  push32((uint32_t)(0x2u));
  /* 103aff87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aff8a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 103aff90 push eax */
  push32((uint32_t)(EAX));
  /* 103aff91 call 0x103a5980 */
  push32(0x103aff96u); f_103a5980();
  /* 103aff96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103aff99 push 2 */
  push32((uint32_t)(0x2u));
  /* 103aff9b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103aff9e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 103affa4 push edx */
  push32((uint32_t)(EDX));
  /* 103affa5 call 0x103a5980 */
  push32(0x103affaau); f_103a5980();
  /* 103affaa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103affad push 2 */
  push32((uint32_t)(0x2u));
  /* 103affaf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103affb2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 103affb8 push ecx */
  push32((uint32_t)(ECX));
  /* 103affb9 call 0x103a5980 */
  push32(0x103affbeu); f_103a5980();
  /* 103affbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103affc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 103affc3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103affc6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 103affcc push eax */
  push32((uint32_t)(EAX));
  /* 103affcd call 0x103a5980 */
  push32(0x103affd2u); f_103a5980();
  /* 103affd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103affd5 push 2 */
  push32((uint32_t)(0x2u));
  /* 103affd7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103affda mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 103affe0 push edx */
  push32((uint32_t)(EDX));
  /* 103affe1 call 0x103a5980 */
  push32(0x103affe6u); f_103a5980();
  /* 103affe6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103affe9 push 2 */
  push32((uint32_t)(0x2u));
  /* 103affeb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103affee mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 103afff4 push ecx */
  push32((uint32_t)(ECX));
  /* 103afff5 call 0x103a5980 */
  push32(0x103afffau); f_103a5980();
  /* 103afffa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103afffd push 2 */
  push32((uint32_t)(0x2u));
  /* 103affff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b0002 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 103b0008 push eax */
  push32((uint32_t)(EAX));
  /* 103b0009 call 0x103a5980 */
  push32(0x103b000eu); f_103a5980();
  /* 103b000e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0011 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b0013 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b0016 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 103b001c push edx */
  push32((uint32_t)(EDX));
  /* 103b001d call 0x103a5980 */
  push32(0x103b0022u); f_103a5980();
  /* 103b0022 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0025 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b0027 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b002a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 103b0030 push ecx */
  push32((uint32_t)(ECX));
  /* 103b0031 call 0x103a5980 */
  push32(0x103b0036u); f_103a5980();
  /* 103b0036 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103b0039:;
  /* 103b0039 pop ebp */
  EBP = (pop32());
  /* 103b003a ret  */
  ESPCHK(0x103afd30u, _esp0);
  ESP += 4; return;
}

/* FUN_10010040 @ 0x103b0040 (678 bytes, 180 insns) */
void f_103b0040(void) {
  FTRACE(0x103b0040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b0040 push ebp */
  push32((uint32_t)(EBP));
  /* 103b0041 mov ebp, esp */
  EBP = (ESP);
  /* 103b0043 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b0046 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 103b004d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b004f mov ax, word ptr [0x103d0852] */
  AX = (r16((uint32_t)(0x103d0852)));
  /* 103b0055 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103b0058 cmp dword ptr [0x103d07f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d07f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b005f je 0x103b01ba */
  if (C.zf) goto L_103b01ba;
  /* 103b0065 push 0x103d0820 */
  push32((uint32_t)(0x103d0820u));
  /* 103b006a push 0xe */
  push32((uint32_t)(0xeu));
  /* 103b006c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b006f push ecx */
  push32((uint32_t)(ECX));
  /* 103b0070 push 1 */
  push32((uint32_t)(0x1u));
  /* 103b0072 call 0x103b30b0 */
  push32(0x103b0077u); f_103b30b0();
  /* 103b0077 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b007a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b007d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 103b007f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103b0082 push 0x103d0824 */
  push32((uint32_t)(0x103d0824u));
  /* 103b0087 push 0xf */
  push32((uint32_t)(0xfu));
  /* 103b0089 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b008c push eax */
  push32((uint32_t)(EAX));
  /* 103b008d push 1 */
  push32((uint32_t)(0x1u));
  /* 103b008f call 0x103b30b0 */
  push32(0x103b0094u); f_103b30b0();
  /* 103b0094 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0097 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b009a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103b009c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103b009f push 0x103d0828 */
  push32((uint32_t)(0x103d0828u));
  /* 103b00a4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 103b00a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b00a9 push edx */
  push32((uint32_t)(EDX));
  /* 103b00aa push 1 */
  push32((uint32_t)(0x1u));
  /* 103b00ac call 0x103b30b0 */
  push32(0x103b00b1u); f_103b30b0();
  /* 103b00b1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b00b4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b00b7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103b00b9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103b00bc mov edx, dword ptr [0x103d0828] */
  EDX = (r32((uint32_t)(0x103d0828)));
  /* 103b00c2 push edx */
  push32((uint32_t)(EDX));
  /* 103b00c3 call 0x103b02f0 */
  push32(0x103b00c8u); f_103b02f0();
  /* 103b00c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b00cb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b00cf je 0x103b0129 */
  if (C.zf) goto L_103b0129;
  /* 103b00d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b00d3 mov eax, dword ptr [0x103d0820] */
  EAX = (r32((uint32_t)(0x103d0820)));
  /* 103b00d8 push eax */
  push32((uint32_t)(EAX));
  /* 103b00d9 call 0x103a5980 */
  push32(0x103b00deu); f_103a5980();
  /* 103b00de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b00e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b00e3 mov ecx, dword ptr [0x103d0824] */
  ECX = (r32((uint32_t)(0x103d0824)));
  /* 103b00e9 push ecx */
  push32((uint32_t)(ECX));
  /* 103b00ea call 0x103a5980 */
  push32(0x103b00efu); f_103a5980();
  /* 103b00ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b00f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b00f4 mov edx, dword ptr [0x103d0828] */
  EDX = (r32((uint32_t)(0x103d0828)));
  /* 103b00fa push edx */
  push32((uint32_t)(EDX));
  /* 103b00fb call 0x103a5980 */
  push32(0x103b0100u); f_103a5980();
  /* 103b0100 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0103 mov dword ptr [0x103d0820], 0 */
  w32((uint32_t)(0x103d0820), (0x0u));
  /* 103b010d mov dword ptr [0x103d0824], 0 */
  w32((uint32_t)(0x103d0824), (0x0u));
  /* 103b0117 mov dword ptr [0x103d0828], 0 */
  w32((uint32_t)(0x103d0828), (0x0u));
  /* 103b0121 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103b0124 jmp 0x103b02e2 */
  goto L_103b02e2;
L_103b0129:;
  /* 103b0129 mov eax, dword ptr [0x103cfd88] */
  EAX = (r32((uint32_t)(0x103cfd88)));
  /* 103b012e cmp dword ptr [eax], 0x103cfd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x103cfd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b0134 je 0x103b0170 */
  if (C.zf) goto L_103b0170;
  /* 103b0136 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b0138 mov ecx, dword ptr [0x103cfd88] */
  ECX = (r32((uint32_t)(0x103cfd88)));
  /* 103b013e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103b0140 push edx */
  push32((uint32_t)(EDX));
  /* 103b0141 call 0x103a5980 */
  push32(0x103b0146u); f_103a5980();
  /* 103b0146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0149 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b014b mov eax, dword ptr [0x103cfd88] */
  EAX = (r32((uint32_t)(0x103cfd88)));
  /* 103b0150 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103b0153 push ecx */
  push32((uint32_t)(ECX));
  /* 103b0154 call 0x103a5980 */
  push32(0x103b0159u); f_103a5980();
  /* 103b0159 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b015c push 2 */
  push32((uint32_t)(0x2u));
  /* 103b015e mov edx, dword ptr [0x103cfd88] */
  EDX = (r32((uint32_t)(0x103cfd88)));
  /* 103b0164 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 103b0167 push eax */
  push32((uint32_t)(EAX));
  /* 103b0168 call 0x103a5980 */
  push32(0x103b016du); f_103a5980();
  /* 103b016d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103b0170:;
  /* 103b0170 mov ecx, dword ptr [0x103cfd88] */
  ECX = (r32((uint32_t)(0x103cfd88)));
  /* 103b0176 mov edx, dword ptr [0x103d0820] */
  EDX = (r32((uint32_t)(0x103d0820)));
  /* 103b017c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 103b017e mov eax, dword ptr [0x103cfd88] */
  EAX = (r32((uint32_t)(0x103cfd88)));
  /* 103b0183 mov ecx, dword ptr [0x103d0824] */
  ECX = (r32((uint32_t)(0x103d0824)));
  /* 103b0189 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 103b018c mov edx, dword ptr [0x103cfd88] */
  EDX = (r32((uint32_t)(0x103cfd88)));
  /* 103b0192 mov eax, dword ptr [0x103d0828] */
  EAX = (r32((uint32_t)(0x103d0828)));
  /* 103b0197 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 103b019a mov ecx, dword ptr [0x103cfd88] */
  ECX = (r32((uint32_t)(0x103cfd88)));
  /* 103b01a0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103b01a2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103b01a4 mov byte ptr [0x103ceea8], al */
  w8((uint32_t)(0x103ceea8), (AL));
  /* 103b01a9 mov dword ptr [0x103ceeac], 1 */
  w32((uint32_t)(0x103ceeac), (0x1u));
  /* 103b01b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b01b5 jmp 0x103b02e2 */
  goto L_103b02e2;
L_103b01ba:;
  /* 103b01ba push 2 */
  push32((uint32_t)(0x2u));
  /* 103b01bc mov ecx, dword ptr [0x103d0820] */
  ECX = (r32((uint32_t)(0x103d0820)));
  /* 103b01c2 push ecx */
  push32((uint32_t)(ECX));
  /* 103b01c3 call 0x103a5980 */
  push32(0x103b01c8u); f_103a5980();
  /* 103b01c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b01cb push 2 */
  push32((uint32_t)(0x2u));
  /* 103b01cd mov edx, dword ptr [0x103d0824] */
  EDX = (r32((uint32_t)(0x103d0824)));
  /* 103b01d3 push edx */
  push32((uint32_t)(EDX));
  /* 103b01d4 call 0x103a5980 */
  push32(0x103b01d9u); f_103a5980();
  /* 103b01d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b01dc push 2 */
  push32((uint32_t)(0x2u));
  /* 103b01de mov eax, dword ptr [0x103d0828] */
  EAX = (r32((uint32_t)(0x103d0828)));
  /* 103b01e3 push eax */
  push32((uint32_t)(EAX));
  /* 103b01e4 call 0x103a5980 */
  push32(0x103b01e9u); f_103a5980();
  /* 103b01e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b01ec mov dword ptr [0x103d0820], 0 */
  w32((uint32_t)(0x103d0820), (0x0u));
  /* 103b01f6 mov dword ptr [0x103d0824], 0 */
  w32((uint32_t)(0x103d0824), (0x0u));
  /* 103b0200 mov dword ptr [0x103d0828], 0 */
  w32((uint32_t)(0x103d0828), (0x0u));
  /* 103b020a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 103b020f push 0x103cc30c */
  push32((uint32_t)(0x103cc30cu));
  /* 103b0214 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b0216 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b0218 call 0x103a4ef0 */
  push32(0x103b021du); f_103a4ef0();
  /* 103b021d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0220 mov ecx, dword ptr [0x103cfd88] */
  ECX = (r32((uint32_t)(0x103cfd88)));
  /* 103b0226 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103b0228 mov edx, dword ptr [0x103cfd88] */
  EDX = (r32((uint32_t)(0x103cfd88)));
  /* 103b022e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b0231 jne 0x103b023b */
  if (!C.zf) goto L_103b023b;
  /* 103b0233 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103b0236 jmp 0x103b02e2 */
  goto L_103b02e2;
L_103b023b:;
  /* 103b023b push 0x103cc2dc */
  push32((uint32_t)(0x103cc2dcu));
  /* 103b0240 mov eax, dword ptr [0x103cfd88] */
  EAX = (r32((uint32_t)(0x103cfd88)));
  /* 103b0245 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103b0247 push ecx */
  push32((uint32_t)(ECX));
  /* 103b0248 call 0x103a7ea0 */
  push32(0x103b024du); f_103a7ea0();
  /* 103b024d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0250 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 103b0255 push 0x103cc30c */
  push32((uint32_t)(0x103cc30cu));
  /* 103b025a push 2 */
  push32((uint32_t)(0x2u));
  /* 103b025c push 2 */
  push32((uint32_t)(0x2u));
  /* 103b025e call 0x103a4ef0 */
  push32(0x103b0263u); f_103a4ef0();
  /* 103b0263 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0266 mov edx, dword ptr [0x103cfd88] */
  EDX = (r32((uint32_t)(0x103cfd88)));
  /* 103b026c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 103b026f mov eax, dword ptr [0x103cfd88] */
  EAX = (r32((uint32_t)(0x103cfd88)));
  /* 103b0274 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b0278 jne 0x103b027f */
  if (!C.zf) goto L_103b027f;
  /* 103b027a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103b027d jmp 0x103b02e2 */
  goto L_103b02e2;
L_103b027f:;
  /* 103b027f mov ecx, dword ptr [0x103cfd88] */
  ECX = (r32((uint32_t)(0x103cfd88)));
  /* 103b0285 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103b0288 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 103b028b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 103b0290 push 0x103cc30c */
  push32((uint32_t)(0x103cc30cu));
  /* 103b0295 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b0297 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b0299 call 0x103a4ef0 */
  push32(0x103b029eu); f_103a4ef0();
  /* 103b029e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b02a1 mov ecx, dword ptr [0x103cfd88] */
  ECX = (r32((uint32_t)(0x103cfd88)));
  /* 103b02a7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 103b02aa mov edx, dword ptr [0x103cfd88] */
  EDX = (r32((uint32_t)(0x103cfd88)));
  /* 103b02b0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b02b4 jne 0x103b02bb */
  if (!C.zf) goto L_103b02bb;
  /* 103b02b6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103b02b9 jmp 0x103b02e2 */
  goto L_103b02e2;
L_103b02bb:;
  /* 103b02bb mov eax, dword ptr [0x103cfd88] */
  EAX = (r32((uint32_t)(0x103cfd88)));
  /* 103b02c0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 103b02c3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 103b02c6 mov edx, dword ptr [0x103cfd88] */
  EDX = (r32((uint32_t)(0x103cfd88)));
  /* 103b02cc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103b02ce mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103b02d0 mov byte ptr [0x103ceea8], cl */
  w8((uint32_t)(0x103ceea8), (CL));
  /* 103b02d6 mov dword ptr [0x103ceeac], 1 */
  w32((uint32_t)(0x103ceeac), (0x1u));
  /* 103b02e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103b02e2:;
  /* 103b02e2 mov esp, ebp */
  ESP = (EBP);
  /* 103b02e4 pop ebp */
  EBP = (pop32());
  /* 103b02e5 ret  */
  ESPCHK(0x103b0040u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x103b02f0 (125 bytes, 49 insns) */
void f_103b02f0(void) {
  FTRACE(0x103b02f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b02f0 push ebp */
  push32((uint32_t)(EBP));
  /* 103b02f1 mov ebp, esp */
  EBP = (ESP);
  /* 103b02f3 push ecx */
  push32((uint32_t)(ECX));
L_103b02f4:;
  /* 103b02f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b02f7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103b02fa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103b02fc je 0x103b0369 */
  if (C.zf) goto L_103b0369;
  /* 103b02fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b0301 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103b0304 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b0307 jl 0x103b032d */
  if ((C.sf!=C.of)) goto L_103b032d;
  /* 103b0309 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b030c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103b030f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b0312 jg 0x103b032d */
  if ((!C.zf&&C.sf==C.of)) goto L_103b032d;
  /* 103b0314 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b0317 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103b031a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b031d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b0320 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 103b0322 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b0325 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0328 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103b032b jmp 0x103b0367 */
  goto L_103b0367;
L_103b032d:;
  /* 103b032d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b0330 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103b0333 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b0336 jne 0x103b035e */
  if (!C.zf) goto L_103b035e;
  /* 103b0338 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b033b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103b033e:;
  /* 103b033e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b0341 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b0344 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 103b0347 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 103b0349 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b034c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b034f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103b0352 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b0355 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103b0358 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b035a jne 0x103b033e */
  if (!C.zf) goto L_103b033e;
  /* 103b035c jmp 0x103b0367 */
  goto L_103b0367;
L_103b035e:;
  /* 103b035e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b0361 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0364 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_103b0367:;
  /* 103b0367 jmp 0x103b02f4 */
  goto L_103b02f4;
L_103b0369:;
  /* 103b0369 mov esp, ebp */
  ESP = (EBP);
  /* 103b036b pop ebp */
  EBP = (pop32());
  /* 103b036c ret  */
  ESPCHK(0x103b02f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010370 @ 0x103b0370 (304 bytes, 85 insns) */
void f_103b0370(void) {
  FTRACE(0x103b0370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b0370 push ebp */
  push32((uint32_t)(EBP));
  /* 103b0371 mov ebp, esp */
  EBP = (ESP);
  /* 103b0373 push ecx */
  push32((uint32_t)(ECX));
  /* 103b0374 cmp dword ptr [0x103d07f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d07f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b037b je 0x103b043c */
  if (C.zf) goto L_103b043c;
  /* 103b0381 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 103b0383 push 0x103cc318 */
  push32((uint32_t)(0x103cc318u));
  /* 103b0388 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b038a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 103b038c push 1 */
  push32((uint32_t)(0x1u));
  /* 103b038e call 0x103a5300 */
  push32(0x103b0393u); f_103a5300();
  /* 103b0393 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0396 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103b0399 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b039d jne 0x103b03a9 */
  if (!C.zf) goto L_103b03a9;
  /* 103b039f mov eax, 1 */
  EAX = (0x1u);
  /* 103b03a4 jmp 0x103b049c */
  goto L_103b049c;
L_103b03a9:;
  /* 103b03a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b03ac push eax */
  push32((uint32_t)(EAX));
  /* 103b03ad call 0x103b04a0 */
  push32(0x103b03b2u); f_103b04a0();
  /* 103b03b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b03b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b03b7 je 0x103b03dd */
  if (C.zf) goto L_103b03dd;
  /* 103b03b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b03bc push ecx */
  push32((uint32_t)(ECX));
  /* 103b03bd call 0x103b0730 */
  push32(0x103b03c2u); f_103b0730();
  /* 103b03c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b03c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b03c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b03ca push edx */
  push32((uint32_t)(EDX));
  /* 103b03cb call 0x103a5980 */
  push32(0x103b03d0u); f_103a5980();
  /* 103b03d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b03d3 mov eax, 1 */
  EAX = (0x1u);
  /* 103b03d8 jmp 0x103b049c */
  goto L_103b049c;
L_103b03dd:;
  /* 103b03dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b03e0 mov ecx, dword ptr [0x103cfd88] */
  ECX = (r32((uint32_t)(0x103cfd88)));
  /* 103b03e6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103b03e8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103b03ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b03ed mov ecx, dword ptr [0x103cfd88] */
  ECX = (r32((uint32_t)(0x103cfd88)));
  /* 103b03f3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103b03f6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 103b03f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b03fc mov ecx, dword ptr [0x103cfd88] */
  ECX = (r32((uint32_t)(0x103cfd88)));
  /* 103b0402 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 103b0405 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 103b0408 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b040b mov dword ptr [0x103cfd88], eax */
  w32((uint32_t)(0x103cfd88), (EAX));
  /* 103b0410 mov ecx, dword ptr [0x103d082c] */
  ECX = (r32((uint32_t)(0x103d082c)));
  /* 103b0416 push ecx */
  push32((uint32_t)(ECX));
  /* 103b0417 call 0x103b0730 */
  push32(0x103b041cu); f_103b0730();
  /* 103b041c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b041f push 2 */
  push32((uint32_t)(0x2u));
  /* 103b0421 mov edx, dword ptr [0x103d082c] */
  EDX = (r32((uint32_t)(0x103d082c)));
  /* 103b0427 push edx */
  push32((uint32_t)(EDX));
  /* 103b0428 call 0x103a5980 */
  push32(0x103b042du); f_103a5980();
  /* 103b042d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0430 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b0433 mov dword ptr [0x103d082c], eax */
  w32((uint32_t)(0x103d082c), (EAX));
  /* 103b0438 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b043a jmp 0x103b049c */
  goto L_103b049c;
L_103b043c:;
  /* 103b043c mov ecx, dword ptr [0x103cfd88] */
  ECX = (r32((uint32_t)(0x103cfd88)));
  /* 103b0442 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103b0444 mov dword ptr [0x103cfd58], edx */
  w32((uint32_t)(0x103cfd58), (EDX));
  /* 103b044a mov eax, dword ptr [0x103cfd88] */
  EAX = (r32((uint32_t)(0x103cfd88)));
  /* 103b044f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103b0452 mov dword ptr [0x103cfd5c], ecx */
  w32((uint32_t)(0x103cfd5c), (ECX));
  /* 103b0458 mov edx, dword ptr [0x103cfd88] */
  EDX = (r32((uint32_t)(0x103cfd88)));
  /* 103b045e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 103b0461 mov dword ptr [0x103cfd60], eax */
  w32((uint32_t)(0x103cfd60), (EAX));
  /* 103b0466 mov dword ptr [0x103cfd88], 0x103cfd58 */
  w32((uint32_t)(0x103cfd88), (0x103cfd58u));
  /* 103b0470 mov ecx, dword ptr [0x103d082c] */
  ECX = (r32((uint32_t)(0x103d082c)));
  /* 103b0476 push ecx */
  push32((uint32_t)(ECX));
  /* 103b0477 call 0x103b0730 */
  push32(0x103b047cu); f_103b0730();
  /* 103b047c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b047f push 2 */
  push32((uint32_t)(0x2u));
  /* 103b0481 mov edx, dword ptr [0x103d082c] */
  EDX = (r32((uint32_t)(0x103d082c)));
  /* 103b0487 push edx */
  push32((uint32_t)(EDX));
  /* 103b0488 call 0x103a5980 */
  push32(0x103b048du); f_103a5980();
  /* 103b048d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0490 mov dword ptr [0x103d082c], 0 */
  w32((uint32_t)(0x103d082c), (0x0u));
  /* 103b049a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103b049c:;
  /* 103b049c mov esp, ebp */
  ESP = (EBP);
  /* 103b049e pop ebp */
  EBP = (pop32());
  /* 103b049f ret  */
  ESPCHK(0x103b0370u, _esp0);
  ESP += 4; return;
}

/* FUN_100104a0 @ 0x103b04a0 (525 bytes, 200 insns) */
void f_103b04a0(void) {
  FTRACE(0x103b04a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b04a0 push ebp */
  push32((uint32_t)(EBP));
  /* 103b04a1 mov ebp, esp */
  EBP = (ESP);
  /* 103b04a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b04a6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 103b04ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b04af mov ax, word ptr [0x103d084c] */
  AX = (r16((uint32_t)(0x103d084c)));
  /* 103b04b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103b04b8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b04bc jne 0x103b04c6 */
  if (!C.zf) goto L_103b04c6;
  /* 103b04be or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103b04c1 jmp 0x103b06a9 */
  goto L_103b06a9;
L_103b04c6:;
  /* 103b04c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b04c9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b04cc push ecx */
  push32((uint32_t)(ECX));
  /* 103b04cd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 103b04cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b04d2 push edx */
  push32((uint32_t)(EDX));
  /* 103b04d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 103b04d5 call 0x103b30b0 */
  push32(0x103b04dau); f_103b30b0();
  /* 103b04da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b04dd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b04e0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103b04e2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103b04e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b04e8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b04eb push edx */
  push32((uint32_t)(EDX));
  /* 103b04ec push 0x14 */
  push32((uint32_t)(0x14u));
  /* 103b04ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b04f1 push eax */
  push32((uint32_t)(EAX));
  /* 103b04f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 103b04f4 call 0x103b30b0 */
  push32(0x103b04f9u); f_103b30b0();
  /* 103b04f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b04fc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b04ff or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103b0501 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103b0504 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b0507 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b050a push edx */
  push32((uint32_t)(EDX));
  /* 103b050b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 103b050d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b0510 push eax */
  push32((uint32_t)(EAX));
  /* 103b0511 push 1 */
  push32((uint32_t)(0x1u));
  /* 103b0513 call 0x103b30b0 */
  push32(0x103b0518u); f_103b30b0();
  /* 103b0518 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b051b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b051e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103b0520 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103b0523 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b0526 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0529 push edx */
  push32((uint32_t)(EDX));
  /* 103b052a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 103b052c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b052f push eax */
  push32((uint32_t)(EAX));
  /* 103b0530 push 1 */
  push32((uint32_t)(0x1u));
  /* 103b0532 call 0x103b30b0 */
  push32(0x103b0537u); f_103b30b0();
  /* 103b0537 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b053a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b053d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103b053f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103b0542 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b0545 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0548 push edx */
  push32((uint32_t)(EDX));
  /* 103b0549 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 103b054b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b054e push eax */
  push32((uint32_t)(EAX));
  /* 103b054f push 1 */
  push32((uint32_t)(0x1u));
  /* 103b0551 call 0x103b30b0 */
  push32(0x103b0556u); f_103b30b0();
  /* 103b0556 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0559 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b055c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103b055e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103b0561 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b0564 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 103b0567 push eax */
  push32((uint32_t)(EAX));
  /* 103b0568 call 0x103b06b0 */
  push32(0x103b056du); f_103b06b0();
  /* 103b056d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0570 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b0573 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0576 push ecx */
  push32((uint32_t)(ECX));
  /* 103b0577 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 103b0579 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b057c push edx */
  push32((uint32_t)(EDX));
  /* 103b057d push 1 */
  push32((uint32_t)(0x1u));
  /* 103b057f call 0x103b30b0 */
  push32(0x103b0584u); f_103b30b0();
  /* 103b0584 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0587 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b058a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103b058c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103b058f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b0592 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0595 push edx */
  push32((uint32_t)(EDX));
  /* 103b0596 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 103b0598 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b059b push eax */
  push32((uint32_t)(EAX));
  /* 103b059c push 1 */
  push32((uint32_t)(0x1u));
  /* 103b059e call 0x103b30b0 */
  push32(0x103b05a3u); f_103b30b0();
  /* 103b05a3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b05a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b05a9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103b05ab mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103b05ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b05b1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b05b4 push edx */
  push32((uint32_t)(EDX));
  /* 103b05b5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 103b05b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b05ba push eax */
  push32((uint32_t)(EAX));
  /* 103b05bb push 0 */
  push32((uint32_t)(0x0u));
  /* 103b05bd call 0x103b30b0 */
  push32(0x103b05c2u); f_103b30b0();
  /* 103b05c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b05c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b05c8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103b05ca mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103b05cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b05d0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b05d3 push edx */
  push32((uint32_t)(EDX));
  /* 103b05d4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 103b05d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b05d9 push eax */
  push32((uint32_t)(EAX));
  /* 103b05da push 0 */
  push32((uint32_t)(0x0u));
  /* 103b05dc call 0x103b30b0 */
  push32(0x103b05e1u); f_103b30b0();
  /* 103b05e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b05e4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b05e7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103b05e9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103b05ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b05ef add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b05f2 push edx */
  push32((uint32_t)(EDX));
  /* 103b05f3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 103b05f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b05f8 push eax */
  push32((uint32_t)(EAX));
  /* 103b05f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b05fb call 0x103b30b0 */
  push32(0x103b0600u); f_103b30b0();
  /* 103b0600 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0603 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b0606 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103b0608 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103b060b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b060e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0611 push edx */
  push32((uint32_t)(EDX));
  /* 103b0612 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 103b0614 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b0617 push eax */
  push32((uint32_t)(EAX));
  /* 103b0618 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b061a call 0x103b30b0 */
  push32(0x103b061fu); f_103b30b0();
  /* 103b061f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0622 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b0625 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103b0627 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103b062a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b062d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0630 push edx */
  push32((uint32_t)(EDX));
  /* 103b0631 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 103b0633 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b0636 push eax */
  push32((uint32_t)(EAX));
  /* 103b0637 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b0639 call 0x103b30b0 */
  push32(0x103b063eu); f_103b30b0();
  /* 103b063e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0641 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b0644 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103b0646 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103b0649 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b064c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b064f push edx */
  push32((uint32_t)(EDX));
  /* 103b0650 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 103b0652 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b0655 push eax */
  push32((uint32_t)(EAX));
  /* 103b0656 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b0658 call 0x103b30b0 */
  push32(0x103b065du); f_103b30b0();
  /* 103b065d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0660 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b0663 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103b0665 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103b0668 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b066b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b066e push edx */
  push32((uint32_t)(EDX));
  /* 103b066f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 103b0671 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b0674 push eax */
  push32((uint32_t)(EAX));
  /* 103b0675 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b0677 call 0x103b30b0 */
  push32(0x103b067cu); f_103b30b0();
  /* 103b067c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b067f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b0682 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103b0684 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103b0687 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b068a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b068d push edx */
  push32((uint32_t)(EDX));
  /* 103b068e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 103b0690 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b0693 push eax */
  push32((uint32_t)(EAX));
  /* 103b0694 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b0696 call 0x103b30b0 */
  push32(0x103b069bu); f_103b30b0();
  /* 103b069b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b069e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b06a1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103b06a3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103b06a6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_103b06a9:;
  /* 103b06a9 mov esp, ebp */
  ESP = (EBP);
  /* 103b06ab pop ebp */
  EBP = (pop32());
  /* 103b06ac ret  */
  ESPCHK(0x103b04a0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x103b06b0 (125 bytes, 49 insns) */
void f_103b06b0(void) {
  FTRACE(0x103b06b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b06b0 push ebp */
  push32((uint32_t)(EBP));
  /* 103b06b1 mov ebp, esp */
  EBP = (ESP);
  /* 103b06b3 push ecx */
  push32((uint32_t)(ECX));
L_103b06b4:;
  /* 103b06b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b06b7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103b06ba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103b06bc je 0x103b0729 */
  if (C.zf) goto L_103b0729;
  /* 103b06be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b06c1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103b06c4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b06c7 jl 0x103b06ed */
  if ((C.sf!=C.of)) goto L_103b06ed;
  /* 103b06c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b06cc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103b06cf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b06d2 jg 0x103b06ed */
  if ((!C.zf&&C.sf==C.of)) goto L_103b06ed;
  /* 103b06d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b06d7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103b06da sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b06dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b06e0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 103b06e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b06e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b06e8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103b06eb jmp 0x103b0727 */
  goto L_103b0727;
L_103b06ed:;
  /* 103b06ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b06f0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103b06f3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b06f6 jne 0x103b071e */
  if (!C.zf) goto L_103b071e;
  /* 103b06f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b06fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103b06fe:;
  /* 103b06fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b0701 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b0704 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 103b0707 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 103b0709 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b070c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b070f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103b0712 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b0715 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103b0718 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b071a jne 0x103b06fe */
  if (!C.zf) goto L_103b06fe;
  /* 103b071c jmp 0x103b0727 */
  goto L_103b0727;
L_103b071e:;
  /* 103b071e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b0721 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0724 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_103b0727:;
  /* 103b0727 jmp 0x103b06b4 */
  goto L_103b06b4;
L_103b0729:;
  /* 103b0729 mov esp, ebp */
  ESP = (EBP);
  /* 103b072b pop ebp */
  EBP = (pop32());
  /* 103b072c ret  */
  ESPCHK(0x103b06b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010730 @ 0x103b0730 (147 bytes, 52 insns) */
void f_103b0730(void) {
  FTRACE(0x103b0730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b0730 push ebp */
  push32((uint32_t)(EBP));
  /* 103b0731 mov ebp, esp */
  EBP = (ESP);
  /* 103b0733 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b0737 jne 0x103b073e */
  if (!C.zf) goto L_103b073e;
  /* 103b0739 jmp 0x103b07c1 */
  goto L_103b07c1;
L_103b073e:;
  /* 103b073e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b0741 cmp dword ptr [eax + 0xc], 0x103d0888 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x103d0888u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b0748 je 0x103b07c1 */
  if (C.zf) goto L_103b07c1;
  /* 103b074a push 2 */
  push32((uint32_t)(0x2u));
  /* 103b074c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b074f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103b0752 push edx */
  push32((uint32_t)(EDX));
  /* 103b0753 call 0x103a5980 */
  push32(0x103b0758u); f_103a5980();
  /* 103b0758 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b075b push 2 */
  push32((uint32_t)(0x2u));
  /* 103b075d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b0760 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103b0763 push ecx */
  push32((uint32_t)(ECX));
  /* 103b0764 call 0x103a5980 */
  push32(0x103b0769u); f_103a5980();
  /* 103b0769 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b076c push 2 */
  push32((uint32_t)(0x2u));
  /* 103b076e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b0771 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103b0774 push eax */
  push32((uint32_t)(EAX));
  /* 103b0775 call 0x103a5980 */
  push32(0x103b077au); f_103a5980();
  /* 103b077a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b077d push 2 */
  push32((uint32_t)(0x2u));
  /* 103b077f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b0782 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 103b0785 push edx */
  push32((uint32_t)(EDX));
  /* 103b0786 call 0x103a5980 */
  push32(0x103b078bu); f_103a5980();
  /* 103b078b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b078e push 2 */
  push32((uint32_t)(0x2u));
  /* 103b0790 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b0793 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 103b0796 push ecx */
  push32((uint32_t)(ECX));
  /* 103b0797 call 0x103a5980 */
  push32(0x103b079cu); f_103a5980();
  /* 103b079c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b079f push 2 */
  push32((uint32_t)(0x2u));
  /* 103b07a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b07a4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 103b07a7 push eax */
  push32((uint32_t)(EAX));
  /* 103b07a8 call 0x103a5980 */
  push32(0x103b07adu); f_103a5980();
  /* 103b07ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b07b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b07b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b07b5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 103b07b8 push edx */
  push32((uint32_t)(EDX));
  /* 103b07b9 call 0x103a5980 */
  push32(0x103b07beu); f_103a5980();
  /* 103b07be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103b07c1:;
  /* 103b07c1 pop ebp */
  EBP = (pop32());
  /* 103b07c2 ret  */
  ESPCHK(0x103b0730u, _esp0);
  ESP += 4; return;
}

/* FUN_100107d0 @ 0x103b07d0 (928 bytes, 284 insns) */
void f_103b07d0(void) {
  FTRACE(0x103b07d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b07d0 push ebp */
  push32((uint32_t)(EBP));
  /* 103b07d1 mov ebp, esp */
  EBP = (ESP);
  /* 103b07d3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b07d6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 103b07dd mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 103b07e4 cmp dword ptr [0x103d07f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d07f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b07eb je 0x103b0b21 */
  if (C.zf) goto L_103b0b21;
  /* 103b07f1 cmp dword ptr [0x103d0800], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0800))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b07f8 jne 0x103b0820 */
  if (!C.zf) goto L_103b0820;
  /* 103b07fa push 0x103d0800 */
  push32((uint32_t)(0x103d0800u));
  /* 103b07ff push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 103b0804 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b0806 mov ax, word ptr [0x103d0844] */
  AX = (r16((uint32_t)(0x103d0844)));
  /* 103b080c push eax */
  push32((uint32_t)(EAX));
  /* 103b080d push 0 */
  push32((uint32_t)(0x0u));
  /* 103b080f call 0x103b30b0 */
  push32(0x103b0814u); f_103b30b0();
  /* 103b0814 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0817 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b0819 je 0x103b0820 */
  if (C.zf) goto L_103b0820;
  /* 103b081b jmp 0x103b0ae2 */
  goto L_103b0ae2;
L_103b0820:;
  /* 103b0820 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 103b0822 push 0x103cc324 */
  push32((uint32_t)(0x103cc324u));
  /* 103b0827 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b0829 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 103b082e call 0x103a4ef0 */
  push32(0x103b0833u); f_103a4ef0();
  /* 103b0833 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0836 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 103b0839 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 103b083b push 0x103cc324 */
  push32((uint32_t)(0x103cc324u));
  /* 103b0840 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b0842 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 103b0847 call 0x103a4ef0 */
  push32(0x103b084cu); f_103a4ef0();
  /* 103b084c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b084f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 103b0852 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 103b0854 push 0x103cc324 */
  push32((uint32_t)(0x103cc324u));
  /* 103b0859 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b085b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 103b0860 call 0x103a4ef0 */
  push32(0x103b0865u); f_103a4ef0();
  /* 103b0865 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0868 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 103b086b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 103b086d push 0x103cc324 */
  push32((uint32_t)(0x103cc324u));
  /* 103b0872 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b0874 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 103b0879 call 0x103a4ef0 */
  push32(0x103b087eu); f_103a4ef0();
  /* 103b087e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0881 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 103b0884 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b0888 je 0x103b089c */
  if (C.zf) goto L_103b089c;
  /* 103b088a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b088e je 0x103b089c */
  if (C.zf) goto L_103b089c;
  /* 103b0890 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b0894 je 0x103b089c */
  if (C.zf) goto L_103b089c;
  /* 103b0896 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b089a jne 0x103b08a1 */
  if (!C.zf) goto L_103b08a1;
L_103b089c:;
  /* 103b089c jmp 0x103b0ae2 */
  goto L_103b0ae2;
L_103b08a1:;
  /* 103b08a1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103b08a4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 103b08a7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 103b08ae jmp 0x103b08b9 */
  goto L_103b08b9;
L_103b08b0:;
  /* 103b08b0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 103b08b3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b08b6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_103b08b9:;
  /* 103b08b9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b08c0 jge 0x103b08d5 */
  if ((C.sf==C.of)) goto L_103b08d5;
  /* 103b08c2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103b08c5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 103b08c8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 103b08ca mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103b08cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b08d0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 103b08d3 jmp 0x103b08b0 */
  goto L_103b08b0;
L_103b08d5:;
  /* 103b08d5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 103b08d8 push eax */
  push32((uint32_t)(EAX));
  /* 103b08d9 mov ecx, dword ptr [0x103d0800] */
  ECX = (r32((uint32_t)(0x103d0800)));
  /* 103b08df push ecx */
  push32((uint32_t)(ECX));
  /* 103b08e0 call dword ptr [0x103d3300] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3300))), 0x103b08e6u);
  /* 103b08e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b08e8 jne 0x103b08ef */
  if (!C.zf) goto L_103b08ef;
  /* 103b08ea jmp 0x103b0ae2 */
  goto L_103b0ae2;
L_103b08ef:;
  /* 103b08ef cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b08f3 jbe 0x103b08fa */
  if ((C.cf||C.zf)) goto L_103b08fa;
  /* 103b08f5 jmp 0x103b0ae2 */
  goto L_103b0ae2;
L_103b08fa:;
  /* 103b08fa mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b08fd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 103b0903 mov dword ptr [0x103ceea4], edx */
  w32((uint32_t)(0x103ceea4), (EDX));
  /* 103b0909 cmp dword ptr [0x103ceea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x103ceea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b0910 jle 0x103b0969 */
  if ((C.zf||C.sf!=C.of)) goto L_103b0969;
  /* 103b0912 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 103b0915 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 103b0918 jmp 0x103b0923 */
  goto L_103b0923;
L_103b091a:;
  /* 103b091a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103b091d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0920 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_103b0923:;
  /* 103b0923 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103b0926 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b0928 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103b092a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b092c je 0x103b0969 */
  if (C.zf) goto L_103b0969;
  /* 103b092e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103b0931 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103b0933 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 103b0936 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103b0938 je 0x103b0969 */
  if (C.zf) goto L_103b0969;
  /* 103b093a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103b093d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103b093f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103b0941 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 103b0944 jmp 0x103b094f */
  goto L_103b094f;
L_103b0946:;
  /* 103b0946 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 103b0949 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b094c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_103b094f:;
  /* 103b094f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103b0952 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103b0954 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 103b0957 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b095a jg 0x103b0967 */
  if ((!C.zf&&C.sf==C.of)) goto L_103b0967;
  /* 103b095c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103b095f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0962 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 103b0965 jmp 0x103b0946 */
  goto L_103b0946;
L_103b0967:;
  /* 103b0967 jmp 0x103b091a */
  goto L_103b091a;
L_103b0969:;
  /* 103b0969 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b096b push 0 */
  push32((uint32_t)(0x0u));
  /* 103b096d push 0 */
  push32((uint32_t)(0x0u));
  /* 103b096f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103b0972 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0975 push eax */
  push32((uint32_t)(EAX));
  /* 103b0976 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 103b097b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103b097e push ecx */
  push32((uint32_t)(ECX));
  /* 103b097f push 1 */
  push32((uint32_t)(0x1u));
  /* 103b0981 call 0x103ad120 */
  push32(0x103b0986u); f_103ad120();
  /* 103b0986 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0989 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b098b jne 0x103b0992 */
  if (!C.zf) goto L_103b0992;
  /* 103b098d jmp 0x103b0ae2 */
  goto L_103b0ae2;
L_103b0992:;
  /* 103b0992 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103b0995 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 103b099a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103b099d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 103b09a0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 103b09a7 jmp 0x103b09b2 */
  goto L_103b09b2;
L_103b09a9:;
  /* 103b09a9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103b09ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b09af mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_103b09b2:;
  /* 103b09b2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b09b9 jge 0x103b09d0 */
  if ((C.sf==C.of)) goto L_103b09d0;
  /* 103b09bb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103b09be mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 103b09c2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 103b09c5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103b09c8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b09cb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 103b09ce jmp 0x103b09a9 */
  goto L_103b09a9;
L_103b09d0:;
  /* 103b09d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b09d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b09d4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103b09d7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b09da push edx */
  push32((uint32_t)(EDX));
  /* 103b09db push 0x100 */
  push32((uint32_t)(0x100u));
  /* 103b09e0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103b09e3 push eax */
  push32((uint32_t)(EAX));
  /* 103b09e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 103b09e6 call 0x103b3350 */
  push32(0x103b09ebu); f_103b3350();
  /* 103b09eb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b09ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b09f0 jne 0x103b09f7 */
  if (!C.zf) goto L_103b09f7;
  /* 103b09f2 jmp 0x103b0ae2 */
  goto L_103b0ae2;
L_103b09f7:;
  /* 103b09f7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103b09fa mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 103b09ff cmp dword ptr [0x103ceea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x103ceea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b0a06 jle 0x103b0a63 */
  if ((C.zf||C.sf!=C.of)) goto L_103b0a63;
  /* 103b0a08 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 103b0a0b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 103b0a0e jmp 0x103b0a19 */
  goto L_103b0a19;
L_103b0a10:;
  /* 103b0a10 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103b0a13 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0a16 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_103b0a19:;
  /* 103b0a19 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103b0a1c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103b0a1e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103b0a20 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103b0a22 je 0x103b0a63 */
  if (C.zf) goto L_103b0a63;
  /* 103b0a24 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103b0a27 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103b0a29 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 103b0a2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103b0a2e je 0x103b0a63 */
  if (C.zf) goto L_103b0a63;
  /* 103b0a30 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103b0a33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b0a35 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103b0a37 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 103b0a3a jmp 0x103b0a45 */
  goto L_103b0a45;
L_103b0a3c:;
  /* 103b0a3c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103b0a3f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0a42 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_103b0a45:;
  /* 103b0a45 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103b0a48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b0a4a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 103b0a4d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b0a50 jg 0x103b0a61 */
  if ((!C.zf&&C.sf==C.of)) goto L_103b0a61;
  /* 103b0a52 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103b0a55 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103b0a58 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 103b0a5f jmp 0x103b0a3c */
  goto L_103b0a3c;
L_103b0a61:;
  /* 103b0a61 jmp 0x103b0a10 */
  goto L_103b0a10;
L_103b0a63:;
  /* 103b0a63 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103b0a66 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0a69 mov dword ptr [0x103cec98], eax */
  w32((uint32_t)(0x103cec98), (EAX));
  /* 103b0a6e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103b0a71 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0a74 mov dword ptr [0x103cec9c], ecx */
  w32((uint32_t)(0x103cec9c), (ECX));
  /* 103b0a7a cmp dword ptr [0x103d0830], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0830))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b0a81 je 0x103b0a94 */
  if (C.zf) goto L_103b0a94;
  /* 103b0a83 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b0a85 mov edx, dword ptr [0x103d0830] */
  EDX = (r32((uint32_t)(0x103d0830)));
  /* 103b0a8b push edx */
  push32((uint32_t)(EDX));
  /* 103b0a8c call 0x103a5980 */
  push32(0x103b0a91u); f_103a5980();
  /* 103b0a91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103b0a94:;
  /* 103b0a94 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 103b0a97 mov dword ptr [0x103d0830], eax */
  w32((uint32_t)(0x103d0830), (EAX));
  /* 103b0a9c cmp dword ptr [0x103d0834], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0834))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b0aa3 je 0x103b0ab6 */
  if (C.zf) goto L_103b0ab6;
  /* 103b0aa5 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b0aa7 mov ecx, dword ptr [0x103d0834] */
  ECX = (r32((uint32_t)(0x103d0834)));
  /* 103b0aad push ecx */
  push32((uint32_t)(ECX));
  /* 103b0aae call 0x103a5980 */
  push32(0x103b0ab3u); f_103a5980();
  /* 103b0ab3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103b0ab6:;
  /* 103b0ab6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103b0ab9 mov dword ptr [0x103d0834], edx */
  w32((uint32_t)(0x103d0834), (EDX));
  /* 103b0abf push 2 */
  push32((uint32_t)(0x2u));
  /* 103b0ac1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103b0ac4 push eax */
  push32((uint32_t)(EAX));
  /* 103b0ac5 call 0x103a5980 */
  push32(0x103b0acau); f_103a5980();
  /* 103b0aca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0acd push 2 */
  push32((uint32_t)(0x2u));
  /* 103b0acf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 103b0ad2 push ecx */
  push32((uint32_t)(ECX));
  /* 103b0ad3 call 0x103a5980 */
  push32(0x103b0ad8u); f_103a5980();
  /* 103b0ad8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0adb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b0add jmp 0x103b0b6c */
  goto L_103b0b6c;
L_103b0ae2:;
  /* 103b0ae2 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b0ae4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 103b0ae7 push edx */
  push32((uint32_t)(EDX));
  /* 103b0ae8 call 0x103a5980 */
  push32(0x103b0aedu); f_103a5980();
  /* 103b0aed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0af0 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b0af2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103b0af5 push eax */
  push32((uint32_t)(EAX));
  /* 103b0af6 call 0x103a5980 */
  push32(0x103b0afbu); f_103a5980();
  /* 103b0afb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0afe push 2 */
  push32((uint32_t)(0x2u));
  /* 103b0b00 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103b0b03 push ecx */
  push32((uint32_t)(ECX));
  /* 103b0b04 call 0x103a5980 */
  push32(0x103b0b09u); f_103a5980();
  /* 103b0b09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0b0c push 2 */
  push32((uint32_t)(0x2u));
  /* 103b0b0e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 103b0b11 push edx */
  push32((uint32_t)(EDX));
  /* 103b0b12 call 0x103a5980 */
  push32(0x103b0b17u); f_103a5980();
  /* 103b0b17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0b1a mov eax, 1 */
  EAX = (0x1u);
  /* 103b0b1f jmp 0x103b0b6c */
  goto L_103b0b6c;
L_103b0b21:;
  /* 103b0b21 mov dword ptr [0x103cec98], 0x103ceca2 */
  w32((uint32_t)(0x103cec98), (0x103ceca2u));
  /* 103b0b2b mov dword ptr [0x103cec9c], 0x103ceca2 */
  w32((uint32_t)(0x103cec9c), (0x103ceca2u));
  /* 103b0b35 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b0b37 mov eax, dword ptr [0x103d0830] */
  EAX = (r32((uint32_t)(0x103d0830)));
  /* 103b0b3c push eax */
  push32((uint32_t)(EAX));
  /* 103b0b3d call 0x103a5980 */
  push32(0x103b0b42u); f_103a5980();
  /* 103b0b42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0b45 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b0b47 mov ecx, dword ptr [0x103d0834] */
  ECX = (r32((uint32_t)(0x103d0834)));
  /* 103b0b4d push ecx */
  push32((uint32_t)(ECX));
  /* 103b0b4e call 0x103a5980 */
  push32(0x103b0b53u); f_103a5980();
  /* 103b0b53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0b56 mov dword ptr [0x103d0830], 0 */
  w32((uint32_t)(0x103d0830), (0x0u));
  /* 103b0b60 mov dword ptr [0x103d0834], 0 */
  w32((uint32_t)(0x103d0834), (0x0u));
  /* 103b0b6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103b0b6c:;
  /* 103b0b6c mov esp, ebp */
  ESP = (EBP);
  /* 103b0b6e pop ebp */
  EBP = (pop32());
  /* 103b0b6f ret  */
  ESPCHK(0x103b07d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b70 @ 0x103b0b70 (7 bytes, 5 insns) */
void f_103b0b70(void) {
  FTRACE(0x103b0b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b0b70 push ebp */
  push32((uint32_t)(EBP));
  /* 103b0b71 mov ebp, esp */
  EBP = (ESP);
  /* 103b0b73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b0b75 pop ebp */
  EBP = (pop32());
  /* 103b0b76 ret  */
  ESPCHK(0x103b0b70u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x103b0b80 (129 bytes, 56 insns) */
void f_103b0b80(void) {
  FTRACE(0x103b0b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b0b80 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 103b0b84 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 103b0b88 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 103b0b8e jne 0x103b0bcc */
  if (!C.zf) goto L_103b0bcc;
L_103b0b90:;
  /* 103b0b90 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103b0b92 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103b0b94 jne 0x103b0bc4 */
  if (!C.zf) goto L_103b0bc4;
  /* 103b0b96 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 103b0b98 je 0x103b0bc0 */
  if (C.zf) goto L_103b0bc0;
  /* 103b0b9a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103b0b9d jne 0x103b0bc4 */
  if (!C.zf) goto L_103b0bc4;
  /* 103b0b9f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 103b0ba1 je 0x103b0bc0 */
  if (C.zf) goto L_103b0bc0;
  /* 103b0ba3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 103b0ba6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103b0ba9 jne 0x103b0bc4 */
  if (!C.zf) goto L_103b0bc4;
  /* 103b0bab or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 103b0bad je 0x103b0bc0 */
  if (C.zf) goto L_103b0bc0;
  /* 103b0baf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103b0bb2 jne 0x103b0bc4 */
  if (!C.zf) goto L_103b0bc4;
  /* 103b0bb4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0bb7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0bba or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 103b0bbc jne 0x103b0b90 */
  if (!C.zf) goto L_103b0b90;
  /* 103b0bbe mov edi, edi */
  EDI = (EDI);
L_103b0bc0:;
  /* 103b0bc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b0bc2 ret  */
  ESPCHK(0x103b0b80u, _esp0);
  ESP += 4; return;
  /* 103b0bc3 nop  */
  /* nop */
L_103b0bc4:;
  /* 103b0bc4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b0bc6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 103b0bc8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 103b0bc9 ret  */
  ESPCHK(0x103b0b80u, _esp0);
  ESP += 4; return;
  /* 103b0bca mov edi, edi */
  EDI = (EDI);
L_103b0bcc:;
  /* 103b0bcc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 103b0bd2 je 0x103b0be8 */
  if (C.zf) goto L_103b0be8;
  /* 103b0bd4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103b0bd6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 103b0bd7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103b0bd9 jne 0x103b0bc4 */
  if (!C.zf) goto L_103b0bc4;
  /* 103b0bdb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 103b0bdc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 103b0bde je 0x103b0bc0 */
  if (C.zf) goto L_103b0bc0;
  /* 103b0be0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 103b0be6 je 0x103b0b90 */
  if (C.zf) goto L_103b0b90;
L_103b0be8:;
  /* 103b0be8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 103b0beb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0bee cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103b0bf0 jne 0x103b0bc4 */
  if (!C.zf) goto L_103b0bc4;
  /* 103b0bf2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 103b0bf4 je 0x103b0bc0 */
  if (C.zf) goto L_103b0bc0;
  /* 103b0bf6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103b0bf9 jne 0x103b0bc4 */
  if (!C.zf) goto L_103b0bc4;
  /* 103b0bfb or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 103b0bfd je 0x103b0bc0 */
  if (C.zf) goto L_103b0bc0;
  /* 103b0bff add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0c02 jmp 0x103b0b90 */
  goto L_103b0b90;
}

/* FUN_10010c10 @ 0x103b0c10 (62 bytes, 35 insns) */
void f_103b0c10(void) {
  FTRACE(0x103b0c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b0c10 push ebp */
  push32((uint32_t)(EBP));
  /* 103b0c11 mov ebp, esp */
  EBP = (ESP);
  /* 103b0c13 push esi */
  push32((uint32_t)(ESI));
  /* 103b0c14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b0c16 push eax */
  push32((uint32_t)(EAX));
  /* 103b0c17 push eax */
  push32((uint32_t)(EAX));
  /* 103b0c18 push eax */
  push32((uint32_t)(EAX));
  /* 103b0c19 push eax */
  push32((uint32_t)(EAX));
  /* 103b0c1a push eax */
  push32((uint32_t)(EAX));
  /* 103b0c1b push eax */
  push32((uint32_t)(EAX));
  /* 103b0c1c push eax */
  push32((uint32_t)(EAX));
  /* 103b0c1d push eax */
  push32((uint32_t)(EAX));
  /* 103b0c1e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b0c21 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103b0c24:;
  /* 103b0c24 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103b0c26 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 103b0c28 je 0x103b0c31 */
  if (C.zf) goto L_103b0c31;
  /* 103b0c2a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 103b0c2b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x103b0c2b");
  /* 103b0c2f jmp 0x103b0c24 */
  goto L_103b0c24;
L_103b0c31:;
  /* 103b0c31 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 103b0c34 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 103b0c37 nop  */
  /* nop */
L_103b0c38:;
  /* 103b0c38 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 103b0c39 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103b0c3b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 103b0c3d je 0x103b0c46 */
  if (C.zf) goto L_103b0c46;
  /* 103b0c3f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 103b0c40 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x103b0c40");
  /* 103b0c44 jae 0x103b0c38 */
  if (!C.cf) goto L_103b0c38;
L_103b0c46:;
  /* 103b0c46 mov eax, ecx */
  EAX = (ECX);
  /* 103b0c48 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0c4b pop esi */
  ESI = (pop32());
  /* 103b0c4c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103b0c4d ret  */
  ESPCHK(0x103b0c10u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x103b0c50 (56 bytes, 31 insns) */
void f_103b0c50(void) {
  FTRACE(0x103b0c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b0c50 push ebp */
  push32((uint32_t)(EBP));
  /* 103b0c51 mov ebp, esp */
  EBP = (ESP);
  /* 103b0c53 push edi */
  push32((uint32_t)(EDI));
  /* 103b0c54 push esi */
  push32((uint32_t)(ESI));
  /* 103b0c55 push ebx */
  push32((uint32_t)(EBX));
  /* 103b0c56 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b0c59 jecxz 0x103b0c81 */
  x86_unimpl("jecxz @ 0x103b0c59");
  /* 103b0c5b mov ebx, ecx */
  EBX = (ECX);
  /* 103b0c5d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 103b0c60 mov esi, edi */
  ESI = (EDI);
  /* 103b0c62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b0c64 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 103b0c66 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 103b0c68 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0c6a mov edi, esi */
  EDI = (ESI);
  /* 103b0c6c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 103b0c6f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 103b0c71 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 103b0c74 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103b0c76 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103b0c79 ja 0x103b0c7f */
  if ((!C.cf&&!C.zf)) goto L_103b0c7f;
  /* 103b0c7b je 0x103b0c81 */
  if (C.zf) goto L_103b0c81;
  /* 103b0c7d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 103b0c7e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_103b0c7f:;
  /* 103b0c7f not ecx */
  ECX = (~(ECX));
L_103b0c81:;
  /* 103b0c81 mov eax, ecx */
  EAX = (ECX);
  /* 103b0c83 pop ebx */
  EBX = (pop32());
  /* 103b0c84 pop esi */
  ESI = (pop32());
  /* 103b0c85 pop edi */
  EDI = (pop32());
  /* 103b0c86 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103b0c87 ret  */
  ESPCHK(0x103b0c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c90 @ 0x103b0c90 (58 bytes, 32 insns) */
void f_103b0c90(void) {
  FTRACE(0x103b0c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b0c90 push ebp */
  push32((uint32_t)(EBP));
  /* 103b0c91 mov ebp, esp */
  EBP = (ESP);
  /* 103b0c93 push esi */
  push32((uint32_t)(ESI));
  /* 103b0c94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b0c96 push eax */
  push32((uint32_t)(EAX));
  /* 103b0c97 push eax */
  push32((uint32_t)(EAX));
  /* 103b0c98 push eax */
  push32((uint32_t)(EAX));
  /* 103b0c99 push eax */
  push32((uint32_t)(EAX));
  /* 103b0c9a push eax */
  push32((uint32_t)(EAX));
  /* 103b0c9b push eax */
  push32((uint32_t)(EAX));
  /* 103b0c9c push eax */
  push32((uint32_t)(EAX));
  /* 103b0c9d push eax */
  push32((uint32_t)(EAX));
  /* 103b0c9e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b0ca1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103b0ca4:;
  /* 103b0ca4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103b0ca6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 103b0ca8 je 0x103b0cb1 */
  if (C.zf) goto L_103b0cb1;
  /* 103b0caa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 103b0cab bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x103b0cab");
  /* 103b0caf jmp 0x103b0ca4 */
  goto L_103b0ca4;
L_103b0cb1:;
  /* 103b0cb1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_103b0cb4:;
  /* 103b0cb4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103b0cb6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 103b0cb8 je 0x103b0cc4 */
  if (C.zf) goto L_103b0cc4;
  /* 103b0cba inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 103b0cbb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x103b0cbb");
  /* 103b0cbf jae 0x103b0cb4 */
  if (!C.cf) goto L_103b0cb4;
  /* 103b0cc1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_103b0cc4:;
  /* 103b0cc4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0cc7 pop esi */
  ESI = (pop32());
  /* 103b0cc8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103b0cc9 ret  */
  ESPCHK(0x103b0c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10010cd0 @ 0x103b0cd0 (512 bytes, 147 insns) */
void f_103b0cd0(void) {
  FTRACE(0x103b0cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b0cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 103b0cd1 mov ebp, esp */
  EBP = (ESP);
  /* 103b0cd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b0cd6 cmp dword ptr [0x103d087c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d087c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b0cdd jne 0x103b0d02 */
  if (!C.zf) goto L_103b0d02;
  /* 103b0cdf call 0x103b17a0 */
  push32(0x103b0ce4u); f_103b17a0();
  /* 103b0ce4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b0ce6 je 0x103b0cf2 */
  if (C.zf) goto L_103b0cf2;
  /* 103b0ce8 mov eax, dword ptr [0x103d32c4] */
  EAX = (r32((uint32_t)(0x103d32c4)));
  /* 103b0ced mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103b0cf0 jmp 0x103b0cf9 */
  goto L_103b0cf9;
L_103b0cf2:;
  /* 103b0cf2 mov dword ptr [ebp - 8], 0x103b17f0 */
  w32((uint32_t)(EBP + -0x8), (0x103b17f0u));
L_103b0cf9:;
  /* 103b0cf9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b0cfc mov dword ptr [0x103d087c], ecx */
  w32((uint32_t)(0x103d087c), (ECX));
L_103b0d02:;
  /* 103b0d02 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b0d06 jne 0x103b0d12 */
  if (!C.zf) goto L_103b0d12;
  /* 103b0d08 call 0x103b15f0 */
  push32(0x103b0d0du); f_103b15f0();
  /* 103b0d0d jmp 0x103b0dde */
  goto L_103b0dde;
L_103b0d12:;
  /* 103b0d12 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b0d15 mov dword ptr [0x103d086c], edx */
  w32((uint32_t)(0x103d086c), (EDX));
  /* 103b0d1b cmp dword ptr [0x103d086c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d086c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b0d22 je 0x103b0d44 */
  if (C.zf) goto L_103b0d44;
  /* 103b0d24 mov eax, dword ptr [0x103d086c] */
  EAX = (r32((uint32_t)(0x103d086c)));
  /* 103b0d29 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103b0d2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103b0d2e je 0x103b0d44 */
  if (C.zf) goto L_103b0d44;
  /* 103b0d30 push 0x103d086c */
  push32((uint32_t)(0x103d086cu));
  /* 103b0d35 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 103b0d37 push 0x103cfa90 */
  push32((uint32_t)(0x103cfa90u));
  /* 103b0d3c call 0x103b0ed0 */
  push32(0x103b0d41u); f_103b0ed0();
  /* 103b0d41 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103b0d44:;
  /* 103b0d44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b0d47 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0d4a mov dword ptr [0x103d0870], edx */
  w32((uint32_t)(0x103d0870), (EDX));
  /* 103b0d50 cmp dword ptr [0x103d0870], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0870))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b0d57 je 0x103b0d79 */
  if (C.zf) goto L_103b0d79;
  /* 103b0d59 mov eax, dword ptr [0x103d0870] */
  EAX = (r32((uint32_t)(0x103d0870)));
  /* 103b0d5e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103b0d61 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103b0d63 je 0x103b0d79 */
  if (C.zf) goto L_103b0d79;
  /* 103b0d65 push 0x103d0870 */
  push32((uint32_t)(0x103d0870u));
  /* 103b0d6a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 103b0d6c push 0x103cf9d8 */
  push32((uint32_t)(0x103cf9d8u));
  /* 103b0d71 call 0x103b0ed0 */
  push32(0x103b0d76u); f_103b0ed0();
  /* 103b0d76 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103b0d79:;
  /* 103b0d79 mov dword ptr [0x103d0874], 0 */
  w32((uint32_t)(0x103d0874), (0x0u));
  /* 103b0d83 cmp dword ptr [0x103d086c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d086c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b0d8a je 0x103b0dbd */
  if (C.zf) goto L_103b0dbd;
  /* 103b0d8c mov edx, dword ptr [0x103d086c] */
  EDX = (r32((uint32_t)(0x103d086c)));
  /* 103b0d92 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103b0d95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b0d97 je 0x103b0dbd */
  if (C.zf) goto L_103b0dbd;
  /* 103b0d99 cmp dword ptr [0x103d0870], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0870))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b0da0 je 0x103b0db6 */
  if (C.zf) goto L_103b0db6;
  /* 103b0da2 mov ecx, dword ptr [0x103d0870] */
  ECX = (r32((uint32_t)(0x103d0870)));
  /* 103b0da8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103b0dab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103b0dad je 0x103b0db6 */
  if (C.zf) goto L_103b0db6;
  /* 103b0daf call 0x103b0f60 */
  push32(0x103b0db4u); f_103b0f60();
  /* 103b0db4 jmp 0x103b0dbb */
  goto L_103b0dbb;
L_103b0db6:;
  /* 103b0db6 call 0x103b1350 */
  push32(0x103b0dbbu); f_103b1350();
L_103b0dbb:;
  /* 103b0dbb jmp 0x103b0dde */
  goto L_103b0dde;
L_103b0dbd:;
  /* 103b0dbd cmp dword ptr [0x103d0870], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0870))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b0dc4 je 0x103b0dd9 */
  if (C.zf) goto L_103b0dd9;
  /* 103b0dc6 mov eax, dword ptr [0x103d0870] */
  EAX = (r32((uint32_t)(0x103d0870)));
  /* 103b0dcb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103b0dce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103b0dd0 je 0x103b0dd9 */
  if (C.zf) goto L_103b0dd9;
  /* 103b0dd2 call 0x103b14f0 */
  push32(0x103b0dd7u); f_103b14f0();
  /* 103b0dd7 jmp 0x103b0dde */
  goto L_103b0dde;
L_103b0dd9:;
  /* 103b0dd9 call 0x103b15f0 */
  push32(0x103b0ddeu); f_103b15f0();
L_103b0dde:;
  /* 103b0dde cmp dword ptr [0x103d0874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b0de5 jne 0x103b0dee */
  if (!C.zf) goto L_103b0dee;
  /* 103b0de7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b0de9 jmp 0x103b0ecc */
  goto L_103b0ecc;
L_103b0dee:;
  /* 103b0dee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b0df1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0df7 push edx */
  push32((uint32_t)(EDX));
  /* 103b0df8 call 0x103b1620 */
  push32(0x103b0dfdu); f_103b1620();
  /* 103b0dfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0e00 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103b0e03 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b0e07 je 0x103b0e1c */
  if (C.zf) goto L_103b0e1c;
  /* 103b0e09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b0e0c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103b0e11 push eax */
  push32((uint32_t)(EAX));
  /* 103b0e12 call dword ptr [0x103d32c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32c8))), 0x103b0e18u);
  /* 103b0e18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b0e1a jne 0x103b0e23 */
  if (!C.zf) goto L_103b0e23;
L_103b0e1c:;
  /* 103b0e1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b0e1e jmp 0x103b0ecc */
  goto L_103b0ecc;
L_103b0e23:;
  /* 103b0e23 push 1 */
  push32((uint32_t)(0x1u));
  /* 103b0e25 mov ecx, dword ptr [0x103d085c] */
  ECX = (r32((uint32_t)(0x103d085c)));
  /* 103b0e2b push ecx */
  push32((uint32_t)(ECX));
  /* 103b0e2c call dword ptr [0x103d32cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32cc))), 0x103b0e32u);
  /* 103b0e32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b0e34 jne 0x103b0e3d */
  if (!C.zf) goto L_103b0e3d;
  /* 103b0e36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b0e38 jmp 0x103b0ecc */
  goto L_103b0ecc;
L_103b0e3d:;
  /* 103b0e3d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b0e41 je 0x103b0e68 */
  if (C.zf) goto L_103b0e68;
  /* 103b0e43 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b0e46 mov ax, word ptr [0x103d085c] */
  AX = (r16((uint32_t)(0x103d085c)));
  /* 103b0e4c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 103b0e4f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b0e52 mov dx, word ptr [0x103d0878] */
  DX = (r16((uint32_t)(0x103d0878)));
  /* 103b0e59 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 103b0e5d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b0e60 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 103b0e64 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_103b0e68:;
  /* 103b0e68 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b0e6c je 0x103b0ec7 */
  if (C.zf) goto L_103b0ec7;
  /* 103b0e6e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 103b0e70 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b0e73 push edx */
  push32((uint32_t)(EDX));
  /* 103b0e74 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 103b0e79 mov eax, dword ptr [0x103d085c] */
  EAX = (r32((uint32_t)(0x103d085c)));
  /* 103b0e7e push eax */
  push32((uint32_t)(EAX));
  /* 103b0e7f call dword ptr [0x103d087c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d087c))), 0x103b0e85u);
  /* 103b0e85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b0e87 jne 0x103b0e8d */
  if (!C.zf) goto L_103b0e8d;
  /* 103b0e89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b0e8b jmp 0x103b0ecc */
  goto L_103b0ecc;
L_103b0e8d:;
  /* 103b0e8d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 103b0e8f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b0e92 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0e95 push ecx */
  push32((uint32_t)(ECX));
  /* 103b0e96 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 103b0e9b mov edx, dword ptr [0x103d0878] */
  EDX = (r32((uint32_t)(0x103d0878)));
  /* 103b0ea1 push edx */
  push32((uint32_t)(EDX));
  /* 103b0ea2 call dword ptr [0x103d087c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d087c))), 0x103b0ea8u);
  /* 103b0ea8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b0eaa jne 0x103b0eb0 */
  if (!C.zf) goto L_103b0eb0;
  /* 103b0eac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b0eae jmp 0x103b0ecc */
  goto L_103b0ecc;
L_103b0eb0:;
  /* 103b0eb0 push 0xa */
  push32((uint32_t)(0xau));
  /* 103b0eb2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b0eb5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0eba push eax */
  push32((uint32_t)(EAX));
  /* 103b0ebb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b0ebe push ecx */
  push32((uint32_t)(ECX));
  /* 103b0ebf call 0x103a7a30 */
  push32(0x103b0ec4u); f_103a7a30();
  /* 103b0ec4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103b0ec7:;
  /* 103b0ec7 mov eax, 1 */
  EAX = (0x1u);
L_103b0ecc:;
  /* 103b0ecc mov esp, ebp */
  ESP = (EBP);
  /* 103b0ece pop ebp */
  EBP = (pop32());
  /* 103b0ecf ret  */
  ESPCHK(0x103b0cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ed0 @ 0x103b0ed0 (130 bytes, 47 insns) */
void f_103b0ed0(void) {
  FTRACE(0x103b0ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b0ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 103b0ed1 mov ebp, esp */
  EBP = (ESP);
  /* 103b0ed3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b0ed6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 103b0edd mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_103b0ee4:;
  /* 103b0ee4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b0ee7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b0eea jg 0x103b0f4e */
  if ((!C.zf&&C.sf==C.of)) goto L_103b0f4e;
  /* 103b0eec cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b0ef0 je 0x103b0f4e */
  if (C.zf) goto L_103b0f4e;
  /* 103b0ef2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b0ef5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0ef8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103b0ef9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b0efb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 103b0efd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103b0f00 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b0f03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b0f06 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 103b0f09 push eax */
  push32((uint32_t)(EAX));
  /* 103b0f0a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b0f0d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103b0f0f push edx */
  push32((uint32_t)(EDX));
  /* 103b0f10 call 0x103b35c0 */
  push32(0x103b0f15u); f_103b35c0();
  /* 103b0f15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0f18 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103b0f1b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b0f1f jne 0x103b0f32 */
  if (!C.zf) goto L_103b0f32;
  /* 103b0f21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b0f24 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b0f27 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 103b0f2b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b0f2e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103b0f30 jmp 0x103b0f4c */
  goto L_103b0f4c;
L_103b0f32:;
  /* 103b0f32 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b0f36 jge 0x103b0f43 */
  if ((C.sf==C.of)) goto L_103b0f43;
  /* 103b0f38 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b0f3b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b0f3e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 103b0f41 jmp 0x103b0f4c */
  goto L_103b0f4c;
L_103b0f43:;
  /* 103b0f43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b0f46 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0f49 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_103b0f4c:;
  /* 103b0f4c jmp 0x103b0ee4 */
  goto L_103b0ee4;
L_103b0f4e:;
  /* 103b0f4e mov esp, ebp */
  ESP = (EBP);
  /* 103b0f50 pop ebp */
  EBP = (pop32());
  /* 103b0f51 ret  */
  ESPCHK(0x103b0ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f60 @ 0x103b0f60 (186 bytes, 50 insns) */
void f_103b0f60(void) {
  FTRACE(0x103b0f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b0f60 push ebp */
  push32((uint32_t)(EBP));
  /* 103b0f61 mov ebp, esp */
  EBP = (ESP);
  /* 103b0f63 push ecx */
  push32((uint32_t)(ECX));
  /* 103b0f64 mov eax, dword ptr [0x103d086c] */
  EAX = (r32((uint32_t)(0x103d086c)));
  /* 103b0f69 push eax */
  push32((uint32_t)(EAX));
  /* 103b0f6a call 0x103a7d20 */
  push32(0x103b0f6fu); f_103a7d20();
  /* 103b0f6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0f72 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103b0f74 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b0f77 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 103b0f7a mov dword ptr [0x103d0868], ecx */
  w32((uint32_t)(0x103d0868), (ECX));
  /* 103b0f80 mov edx, dword ptr [0x103d0870] */
  EDX = (r32((uint32_t)(0x103d0870)));
  /* 103b0f86 push edx */
  push32((uint32_t)(EDX));
  /* 103b0f87 call 0x103a7d20 */
  push32(0x103b0f8cu); f_103a7d20();
  /* 103b0f8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0f8f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103b0f91 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b0f94 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 103b0f97 mov dword ptr [0x103d0860], ecx */
  w32((uint32_t)(0x103d0860), (ECX));
  /* 103b0f9d mov dword ptr [0x103d085c], 0 */
  w32((uint32_t)(0x103d085c), (0x0u));
  /* 103b0fa7 cmp dword ptr [0x103d0868], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0868))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b0fae je 0x103b0fb9 */
  if (C.zf) goto L_103b0fb9;
  /* 103b0fb0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 103b0fb7 jmp 0x103b0fcb */
  goto L_103b0fcb;
L_103b0fb9:;
  /* 103b0fb9 mov edx, dword ptr [0x103d086c] */
  EDX = (r32((uint32_t)(0x103d086c)));
  /* 103b0fbf push edx */
  push32((uint32_t)(EDX));
  /* 103b0fc0 call 0x103b1a00 */
  push32(0x103b0fc5u); f_103b1a00();
  /* 103b0fc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b0fc8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103b0fcb:;
  /* 103b0fcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b0fce mov dword ptr [0x103d0864], eax */
  w32((uint32_t)(0x103d0864), (EAX));
  /* 103b0fd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 103b0fd5 push 0x103b1020 */
  push32((uint32_t)(0x103b1020u));
  /* 103b0fda call dword ptr [0x103d32c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32c0))), 0x103b0fe0u);
  /* 103b0fe0 mov ecx, dword ptr [0x103d0874] */
  ECX = (r32((uint32_t)(0x103d0874)));
  /* 103b0fe6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 103b0fec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103b0fee je 0x103b100c */
  if (C.zf) goto L_103b100c;
  /* 103b0ff0 mov edx, dword ptr [0x103d0874] */
  EDX = (r32((uint32_t)(0x103d0874)));
  /* 103b0ff6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 103b0ffc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103b0ffe je 0x103b100c */
  if (C.zf) goto L_103b100c;
  /* 103b1000 mov eax, dword ptr [0x103d0874] */
  EAX = (r32((uint32_t)(0x103d0874)));
  /* 103b1005 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 103b1008 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b100a jne 0x103b1016 */
  if (!C.zf) goto L_103b1016;
L_103b100c:;
  /* 103b100c mov dword ptr [0x103d0874], 0 */
  w32((uint32_t)(0x103d0874), (0x0u));
L_103b1016:;
  /* 103b1016 mov esp, ebp */
  ESP = (EBP);
  /* 103b1018 pop ebp */
  EBP = (pop32());
  /* 103b1019 ret  */
  ESPCHK(0x103b0f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10011020 @ 0x103b1020 (804 bytes, 220 insns) */
void f_103b1020(void) {
  FTRACE(0x103b1020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b1020 push ebp */
  push32((uint32_t)(EBP));
  /* 103b1021 mov ebp, esp */
  EBP = (ESP);
  /* 103b1023 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b1026 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b1029 push eax */
  push32((uint32_t)(EAX));
  /* 103b102a call 0x103b1980 */
  push32(0x103b102fu); f_103b1980();
  /* 103b102f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1032 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 103b1035 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 103b1037 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 103b103a push ecx */
  push32((uint32_t)(ECX));
  /* 103b103b mov edx, dword ptr [0x103d0860] */
  EDX = (r32((uint32_t)(0x103d0860)));
  /* 103b1041 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 103b1043 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b1045 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 103b104b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1051 push edx */
  push32((uint32_t)(EDX));
  /* 103b1052 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103b1055 push eax */
  push32((uint32_t)(EAX));
  /* 103b1056 call dword ptr [0x103d087c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d087c))), 0x103b105cu);
  /* 103b105c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b105e jne 0x103b1074 */
  if (!C.zf) goto L_103b1074;
  /* 103b1060 mov dword ptr [0x103d0874], 0 */
  w32((uint32_t)(0x103d0874), (0x0u));
  /* 103b106a mov eax, 1 */
  EAX = (0x1u);
  /* 103b106f jmp 0x103b133e */
  goto L_103b133e;
L_103b1074:;
  /* 103b1074 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 103b1077 push ecx */
  push32((uint32_t)(ECX));
  /* 103b1078 mov edx, dword ptr [0x103d0870] */
  EDX = (r32((uint32_t)(0x103d0870)));
  /* 103b107e push edx */
  push32((uint32_t)(EDX));
  /* 103b107f call 0x103b35c0 */
  push32(0x103b1084u); f_103b35c0();
  /* 103b1084 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1087 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b1089 jne 0x103b11af */
  if (!C.zf) goto L_103b11af;
  /* 103b108f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 103b1091 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 103b1094 push eax */
  push32((uint32_t)(EAX));
  /* 103b1095 mov ecx, dword ptr [0x103d0868] */
  ECX = (r32((uint32_t)(0x103d0868)));
  /* 103b109b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 103b109d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b109f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 103b10a5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b10ab push ecx */
  push32((uint32_t)(ECX));
  /* 103b10ac mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103b10af push edx */
  push32((uint32_t)(EDX));
  /* 103b10b0 call dword ptr [0x103d087c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d087c))), 0x103b10b6u);
  /* 103b10b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b10b8 jne 0x103b10ce */
  if (!C.zf) goto L_103b10ce;
  /* 103b10ba mov dword ptr [0x103d0874], 0 */
  w32((uint32_t)(0x103d0874), (0x0u));
  /* 103b10c4 mov eax, 1 */
  EAX = (0x1u);
  /* 103b10c9 jmp 0x103b133e */
  goto L_103b133e;
L_103b10ce:;
  /* 103b10ce lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 103b10d1 push eax */
  push32((uint32_t)(EAX));
  /* 103b10d2 mov ecx, dword ptr [0x103d086c] */
  ECX = (r32((uint32_t)(0x103d086c)));
  /* 103b10d8 push ecx */
  push32((uint32_t)(ECX));
  /* 103b10d9 call 0x103b35c0 */
  push32(0x103b10deu); f_103b35c0();
  /* 103b10de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b10e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b10e3 jne 0x103b1110 */
  if (!C.zf) goto L_103b1110;
  /* 103b10e5 mov edx, dword ptr [0x103d0874] */
  EDX = (r32((uint32_t)(0x103d0874)));
  /* 103b10eb or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 103b10f1 mov dword ptr [0x103d0874], edx */
  w32((uint32_t)(0x103d0874), (EDX));
  /* 103b10f7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103b10fa mov dword ptr [0x103d0878], eax */
  w32((uint32_t)(0x103d0878), (EAX));
  /* 103b10ff mov ecx, dword ptr [0x103d0878] */
  ECX = (r32((uint32_t)(0x103d0878)));
  /* 103b1105 mov dword ptr [0x103d085c], ecx */
  w32((uint32_t)(0x103d085c), (ECX));
  /* 103b110b jmp 0x103b11af */
  goto L_103b11af;
L_103b1110:;
  /* 103b1110 mov edx, dword ptr [0x103d0874] */
  EDX = (r32((uint32_t)(0x103d0874)));
  /* 103b1116 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 103b1119 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103b111b jne 0x103b11af */
  if (!C.zf) goto L_103b11af;
  /* 103b1121 cmp dword ptr [0x103d0864], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0864))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1128 je 0x103b117d */
  if (C.zf) goto L_103b117d;
  /* 103b112a mov eax, dword ptr [0x103d0864] */
  EAX = (r32((uint32_t)(0x103d0864)));
  /* 103b112f push eax */
  push32((uint32_t)(EAX));
  /* 103b1130 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 103b1133 push ecx */
  push32((uint32_t)(ECX));
  /* 103b1134 mov edx, dword ptr [0x103d086c] */
  EDX = (r32((uint32_t)(0x103d086c)));
  /* 103b113a push edx */
  push32((uint32_t)(EDX));
  /* 103b113b call 0x103b3690 */
  push32(0x103b1140u); f_103b3690();
  /* 103b1140 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1143 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b1145 jne 0x103b117d */
  if (!C.zf) goto L_103b117d;
  /* 103b1147 mov eax, dword ptr [0x103d0874] */
  EAX = (r32((uint32_t)(0x103d0874)));
  /* 103b114c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 103b114e mov dword ptr [0x103d0874], eax */
  w32((uint32_t)(0x103d0874), (EAX));
  /* 103b1153 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103b1156 mov dword ptr [0x103d0878], ecx */
  w32((uint32_t)(0x103d0878), (ECX));
  /* 103b115c mov edx, dword ptr [0x103d086c] */
  EDX = (r32((uint32_t)(0x103d086c)));
  /* 103b1162 push edx */
  push32((uint32_t)(EDX));
  /* 103b1163 call 0x103a7d20 */
  push32(0x103b1168u); f_103a7d20();
  /* 103b1168 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b116b cmp eax, dword ptr [0x103d0864] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x103d0864))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1171 jne 0x103b117b */
  if (!C.zf) goto L_103b117b;
  /* 103b1173 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103b1176 mov dword ptr [0x103d085c], eax */
  w32((uint32_t)(0x103d085c), (EAX));
L_103b117b:;
  /* 103b117b jmp 0x103b11af */
  goto L_103b11af;
L_103b117d:;
  /* 103b117d mov ecx, dword ptr [0x103d0874] */
  ECX = (r32((uint32_t)(0x103d0874)));
  /* 103b1183 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 103b1186 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103b1188 jne 0x103b11af */
  if (!C.zf) goto L_103b11af;
  /* 103b118a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103b118d push edx */
  push32((uint32_t)(EDX));
  /* 103b118e call 0x103b16c0 */
  push32(0x103b1193u); f_103b16c0();
  /* 103b1193 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1196 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b1198 je 0x103b11af */
  if (C.zf) goto L_103b11af;
  /* 103b119a mov eax, dword ptr [0x103d0874] */
  EAX = (r32((uint32_t)(0x103d0874)));
  /* 103b119f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 103b11a1 mov dword ptr [0x103d0874], eax */
  w32((uint32_t)(0x103d0874), (EAX));
  /* 103b11a6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103b11a9 mov dword ptr [0x103d0878], ecx */
  w32((uint32_t)(0x103d0878), (ECX));
L_103b11af:;
  /* 103b11af mov edx, dword ptr [0x103d0874] */
  EDX = (r32((uint32_t)(0x103d0874)));
  /* 103b11b5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 103b11bb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b11c1 je 0x103b1331 */
  if (C.zf) goto L_103b1331;
  /* 103b11c7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 103b11c9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 103b11cc push eax */
  push32((uint32_t)(EAX));
  /* 103b11cd mov ecx, dword ptr [0x103d0868] */
  ECX = (r32((uint32_t)(0x103d0868)));
  /* 103b11d3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 103b11d5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b11d7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 103b11dd add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b11e3 push ecx */
  push32((uint32_t)(ECX));
  /* 103b11e4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103b11e7 push edx */
  push32((uint32_t)(EDX));
  /* 103b11e8 call dword ptr [0x103d087c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d087c))), 0x103b11eeu);
  /* 103b11ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b11f0 jne 0x103b1206 */
  if (!C.zf) goto L_103b1206;
  /* 103b11f2 mov dword ptr [0x103d0874], 0 */
  w32((uint32_t)(0x103d0874), (0x0u));
  /* 103b11fc mov eax, 1 */
  EAX = (0x1u);
  /* 103b1201 jmp 0x103b133e */
  goto L_103b133e;
L_103b1206:;
  /* 103b1206 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 103b1209 push eax */
  push32((uint32_t)(EAX));
  /* 103b120a mov ecx, dword ptr [0x103d086c] */
  ECX = (r32((uint32_t)(0x103d086c)));
  /* 103b1210 push ecx */
  push32((uint32_t)(ECX));
  /* 103b1211 call 0x103b35c0 */
  push32(0x103b1216u); f_103b35c0();
  /* 103b1216 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1219 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b121b jne 0x103b12d0 */
  if (!C.zf) goto L_103b12d0;
  /* 103b1221 mov edx, dword ptr [0x103d0874] */
  EDX = (r32((uint32_t)(0x103d0874)));
  /* 103b1227 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 103b122a mov dword ptr [0x103d0874], edx */
  w32((uint32_t)(0x103d0874), (EDX));
  /* 103b1230 cmp dword ptr [0x103d0868], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0868))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1237 je 0x103b125a */
  if (C.zf) goto L_103b125a;
  /* 103b1239 mov eax, dword ptr [0x103d0874] */
  EAX = (r32((uint32_t)(0x103d0874)));
  /* 103b123e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 103b1241 mov dword ptr [0x103d0874], eax */
  w32((uint32_t)(0x103d0874), (EAX));
  /* 103b1246 cmp dword ptr [0x103d085c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d085c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b124d jne 0x103b1258 */
  if (!C.zf) goto L_103b1258;
  /* 103b124f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103b1252 mov dword ptr [0x103d085c], ecx */
  w32((uint32_t)(0x103d085c), (ECX));
L_103b1258:;
  /* 103b1258 jmp 0x103b12ce */
  goto L_103b12ce;
L_103b125a:;
  /* 103b125a cmp dword ptr [0x103d0864], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0864))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1261 je 0x103b12af */
  if (C.zf) goto L_103b12af;
  /* 103b1263 mov edx, dword ptr [0x103d086c] */
  EDX = (r32((uint32_t)(0x103d086c)));
  /* 103b1269 push edx */
  push32((uint32_t)(EDX));
  /* 103b126a call 0x103a7d20 */
  push32(0x103b126fu); f_103a7d20();
  /* 103b126f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1272 cmp eax, dword ptr [0x103d0864] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x103d0864))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1278 jne 0x103b12af */
  if (!C.zf) goto L_103b12af;
  /* 103b127a push 1 */
  push32((uint32_t)(0x1u));
  /* 103b127c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103b127f push eax */
  push32((uint32_t)(EAX));
  /* 103b1280 call 0x103b1710 */
  push32(0x103b1285u); f_103b1710();
  /* 103b1285 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1288 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b128a je 0x103b12ad */
  if (C.zf) goto L_103b12ad;
  /* 103b128c mov ecx, dword ptr [0x103d0874] */
  ECX = (r32((uint32_t)(0x103d0874)));
  /* 103b1292 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 103b1295 mov dword ptr [0x103d0874], ecx */
  w32((uint32_t)(0x103d0874), (ECX));
  /* 103b129b cmp dword ptr [0x103d085c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d085c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b12a2 jne 0x103b12ad */
  if (!C.zf) goto L_103b12ad;
  /* 103b12a4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103b12a7 mov dword ptr [0x103d085c], edx */
  w32((uint32_t)(0x103d085c), (EDX));
L_103b12ad:;
  /* 103b12ad jmp 0x103b12ce */
  goto L_103b12ce;
L_103b12af:;
  /* 103b12af mov eax, dword ptr [0x103d0874] */
  EAX = (r32((uint32_t)(0x103d0874)));
  /* 103b12b4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 103b12b7 mov dword ptr [0x103d0874], eax */
  w32((uint32_t)(0x103d0874), (EAX));
  /* 103b12bc cmp dword ptr [0x103d085c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d085c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b12c3 jne 0x103b12ce */
  if (!C.zf) goto L_103b12ce;
  /* 103b12c5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103b12c8 mov dword ptr [0x103d085c], ecx */
  w32((uint32_t)(0x103d085c), (ECX));
L_103b12ce:;
  /* 103b12ce jmp 0x103b1331 */
  goto L_103b1331;
L_103b12d0:;
  /* 103b12d0 cmp dword ptr [0x103d0868], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0868))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b12d7 jne 0x103b1331 */
  if (!C.zf) goto L_103b1331;
  /* 103b12d9 cmp dword ptr [0x103d0864], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0864))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b12e0 je 0x103b1331 */
  if (C.zf) goto L_103b1331;
  /* 103b12e2 mov edx, dword ptr [0x103d0864] */
  EDX = (r32((uint32_t)(0x103d0864)));
  /* 103b12e8 push edx */
  push32((uint32_t)(EDX));
  /* 103b12e9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 103b12ec push eax */
  push32((uint32_t)(EAX));
  /* 103b12ed mov ecx, dword ptr [0x103d086c] */
  ECX = (r32((uint32_t)(0x103d086c)));
  /* 103b12f3 push ecx */
  push32((uint32_t)(ECX));
  /* 103b12f4 call 0x103b3690 */
  push32(0x103b12f9u); f_103b3690();
  /* 103b12f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b12fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b12fe jne 0x103b1331 */
  if (!C.zf) goto L_103b1331;
  /* 103b1300 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b1302 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103b1305 push edx */
  push32((uint32_t)(EDX));
  /* 103b1306 call 0x103b1710 */
  push32(0x103b130bu); f_103b1710();
  /* 103b130b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b130e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b1310 je 0x103b1331 */
  if (C.zf) goto L_103b1331;
  /* 103b1312 mov eax, dword ptr [0x103d0874] */
  EAX = (r32((uint32_t)(0x103d0874)));
  /* 103b1317 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 103b131a mov dword ptr [0x103d0874], eax */
  w32((uint32_t)(0x103d0874), (EAX));
  /* 103b131f cmp dword ptr [0x103d085c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d085c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1326 jne 0x103b1331 */
  if (!C.zf) goto L_103b1331;
  /* 103b1328 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103b132b mov dword ptr [0x103d085c], ecx */
  w32((uint32_t)(0x103d085c), (ECX));
L_103b1331:;
  /* 103b1331 mov eax, dword ptr [0x103d0874] */
  EAX = (r32((uint32_t)(0x103d0874)));
  /* 103b1336 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 103b1339 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 103b133b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b133d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_103b133e:;
  /* 103b133e mov esp, ebp */
  ESP = (EBP);
  /* 103b1340 pop ebp */
  EBP = (pop32());
  /* 103b1341 ret 4 */
  ESPCHK(0x103b1020u, _esp0);
  ESP += 8; return;
}

/* FUN_10011350 @ 0x103b1350 (116 bytes, 33 insns) */
void f_103b1350(void) {
  FTRACE(0x103b1350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b1350 push ebp */
  push32((uint32_t)(EBP));
  /* 103b1351 mov ebp, esp */
  EBP = (ESP);
  /* 103b1353 push ecx */
  push32((uint32_t)(ECX));
  /* 103b1354 mov eax, dword ptr [0x103d086c] */
  EAX = (r32((uint32_t)(0x103d086c)));
  /* 103b1359 push eax */
  push32((uint32_t)(EAX));
  /* 103b135a call 0x103a7d20 */
  push32(0x103b135fu); f_103a7d20();
  /* 103b135f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1362 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103b1364 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1367 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 103b136a mov dword ptr [0x103d0868], ecx */
  w32((uint32_t)(0x103d0868), (ECX));
  /* 103b1370 cmp dword ptr [0x103d0868], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0868))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1377 je 0x103b1382 */
  if (C.zf) goto L_103b1382;
  /* 103b1379 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 103b1380 jmp 0x103b1394 */
  goto L_103b1394;
L_103b1382:;
  /* 103b1382 mov edx, dword ptr [0x103d086c] */
  EDX = (r32((uint32_t)(0x103d086c)));
  /* 103b1388 push edx */
  push32((uint32_t)(EDX));
  /* 103b1389 call 0x103b1a00 */
  push32(0x103b138eu); f_103b1a00();
  /* 103b138e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1391 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103b1394:;
  /* 103b1394 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b1397 mov dword ptr [0x103d0864], eax */
  w32((uint32_t)(0x103d0864), (EAX));
  /* 103b139c push 1 */
  push32((uint32_t)(0x1u));
  /* 103b139e push 0x103b13d0 */
  push32((uint32_t)(0x103b13d0u));
  /* 103b13a3 call dword ptr [0x103d32c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32c0))), 0x103b13a9u);
  /* 103b13a9 mov ecx, dword ptr [0x103d0874] */
  ECX = (r32((uint32_t)(0x103d0874)));
  /* 103b13af and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 103b13b2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103b13b4 jne 0x103b13c0 */
  if (!C.zf) goto L_103b13c0;
  /* 103b13b6 mov dword ptr [0x103d0874], 0 */
  w32((uint32_t)(0x103d0874), (0x0u));
L_103b13c0:;
  /* 103b13c0 mov esp, ebp */
  ESP = (EBP);
  /* 103b13c2 pop ebp */
  EBP = (pop32());
  /* 103b13c3 ret  */
  ESPCHK(0x103b1350u, _esp0);
  ESP += 4; return;
}

/* FUN_100113d0 @ 0x103b13d0 (287 bytes, 86 insns) */
void f_103b13d0(void) {
  FTRACE(0x103b13d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b13d0 push ebp */
  push32((uint32_t)(EBP));
  /* 103b13d1 mov ebp, esp */
  EBP = (ESP);
  /* 103b13d3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b13d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b13d9 push eax */
  push32((uint32_t)(EAX));
  /* 103b13da call 0x103b1980 */
  push32(0x103b13dfu); f_103b1980();
  /* 103b13df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b13e2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 103b13e5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 103b13e7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 103b13ea push ecx */
  push32((uint32_t)(ECX));
  /* 103b13eb mov edx, dword ptr [0x103d0868] */
  EDX = (r32((uint32_t)(0x103d0868)));
  /* 103b13f1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 103b13f3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b13f5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 103b13fb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1401 push edx */
  push32((uint32_t)(EDX));
  /* 103b1402 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103b1405 push eax */
  push32((uint32_t)(EAX));
  /* 103b1406 call dword ptr [0x103d087c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d087c))), 0x103b140cu);
  /* 103b140c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b140e jne 0x103b1424 */
  if (!C.zf) goto L_103b1424;
  /* 103b1410 mov dword ptr [0x103d0874], 0 */
  w32((uint32_t)(0x103d0874), (0x0u));
  /* 103b141a mov eax, 1 */
  EAX = (0x1u);
  /* 103b141f jmp 0x103b14e9 */
  goto L_103b14e9;
L_103b1424:;
  /* 103b1424 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 103b1427 push ecx */
  push32((uint32_t)(ECX));
  /* 103b1428 mov edx, dword ptr [0x103d086c] */
  EDX = (r32((uint32_t)(0x103d086c)));
  /* 103b142e push edx */
  push32((uint32_t)(EDX));
  /* 103b142f call 0x103b35c0 */
  push32(0x103b1434u); f_103b35c0();
  /* 103b1434 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1437 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b1439 jne 0x103b1479 */
  if (!C.zf) goto L_103b1479;
  /* 103b143b cmp dword ptr [0x103d0868], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0868))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1442 jne 0x103b1456 */
  if (!C.zf) goto L_103b1456;
  /* 103b1444 push 1 */
  push32((uint32_t)(0x1u));
  /* 103b1446 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103b1449 push eax */
  push32((uint32_t)(EAX));
  /* 103b144a call 0x103b1710 */
  push32(0x103b144fu); f_103b1710();
  /* 103b144f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1452 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b1454 je 0x103b1477 */
  if (C.zf) goto L_103b1477;
L_103b1456:;
  /* 103b1456 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103b1459 mov dword ptr [0x103d0878], ecx */
  w32((uint32_t)(0x103d0878), (ECX));
  /* 103b145f mov edx, dword ptr [0x103d0878] */
  EDX = (r32((uint32_t)(0x103d0878)));
  /* 103b1465 mov dword ptr [0x103d085c], edx */
  w32((uint32_t)(0x103d085c), (EDX));
  /* 103b146b mov eax, dword ptr [0x103d0874] */
  EAX = (r32((uint32_t)(0x103d0874)));
  /* 103b1470 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 103b1472 mov dword ptr [0x103d0874], eax */
  w32((uint32_t)(0x103d0874), (EAX));
L_103b1477:;
  /* 103b1477 jmp 0x103b14dc */
  goto L_103b14dc;
L_103b1479:;
  /* 103b1479 cmp dword ptr [0x103d0868], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0868))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1480 jne 0x103b14dc */
  if (!C.zf) goto L_103b14dc;
  /* 103b1482 cmp dword ptr [0x103d0864], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0864))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1489 je 0x103b14dc */
  if (C.zf) goto L_103b14dc;
  /* 103b148b mov ecx, dword ptr [0x103d0864] */
  ECX = (r32((uint32_t)(0x103d0864)));
  /* 103b1491 push ecx */
  push32((uint32_t)(ECX));
  /* 103b1492 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 103b1495 push edx */
  push32((uint32_t)(EDX));
  /* 103b1496 mov eax, dword ptr [0x103d086c] */
  EAX = (r32((uint32_t)(0x103d086c)));
  /* 103b149b push eax */
  push32((uint32_t)(EAX));
  /* 103b149c call 0x103b3690 */
  push32(0x103b14a1u); f_103b3690();
  /* 103b14a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b14a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b14a6 jne 0x103b14dc */
  if (!C.zf) goto L_103b14dc;
  /* 103b14a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b14aa mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103b14ad push ecx */
  push32((uint32_t)(ECX));
  /* 103b14ae call 0x103b1710 */
  push32(0x103b14b3u); f_103b1710();
  /* 103b14b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b14b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b14b8 je 0x103b14dc */
  if (C.zf) goto L_103b14dc;
  /* 103b14ba mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103b14bd mov dword ptr [0x103d0878], edx */
  w32((uint32_t)(0x103d0878), (EDX));
  /* 103b14c3 mov eax, dword ptr [0x103d0878] */
  EAX = (r32((uint32_t)(0x103d0878)));
  /* 103b14c8 mov dword ptr [0x103d085c], eax */
  w32((uint32_t)(0x103d085c), (EAX));
  /* 103b14cd mov ecx, dword ptr [0x103d0874] */
  ECX = (r32((uint32_t)(0x103d0874)));
  /* 103b14d3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 103b14d6 mov dword ptr [0x103d0874], ecx */
  w32((uint32_t)(0x103d0874), (ECX));
L_103b14dc:;
  /* 103b14dc mov eax, dword ptr [0x103d0874] */
  EAX = (r32((uint32_t)(0x103d0874)));
  /* 103b14e1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 103b14e4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 103b14e6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b14e8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_103b14e9:;
  /* 103b14e9 mov esp, ebp */
  ESP = (EBP);
  /* 103b14eb pop ebp */
  EBP = (pop32());
  /* 103b14ec ret 4 */
  ESPCHK(0x103b13d0u, _esp0);
  ESP += 8; return;
}

/* FUN_100114f0 @ 0x103b14f0 (69 bytes, 20 insns) */
void f_103b14f0(void) {
  FTRACE(0x103b14f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b14f0 push ebp */
  push32((uint32_t)(EBP));
  /* 103b14f1 mov ebp, esp */
  EBP = (ESP);
  /* 103b14f3 mov eax, dword ptr [0x103d0870] */
  EAX = (r32((uint32_t)(0x103d0870)));
  /* 103b14f8 push eax */
  push32((uint32_t)(EAX));
  /* 103b14f9 call 0x103a7d20 */
  push32(0x103b14feu); f_103a7d20();
  /* 103b14fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1501 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103b1503 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1506 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 103b1509 mov dword ptr [0x103d0860], ecx */
  w32((uint32_t)(0x103d0860), (ECX));
  /* 103b150f push 1 */
  push32((uint32_t)(0x1u));
  /* 103b1511 push 0x103b1540 */
  push32((uint32_t)(0x103b1540u));
  /* 103b1516 call dword ptr [0x103d32c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32c0))), 0x103b151cu);
  /* 103b151c mov edx, dword ptr [0x103d0874] */
  EDX = (r32((uint32_t)(0x103d0874)));
  /* 103b1522 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 103b1525 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103b1527 jne 0x103b1533 */
  if (!C.zf) goto L_103b1533;
  /* 103b1529 mov dword ptr [0x103d0874], 0 */
  w32((uint32_t)(0x103d0874), (0x0u));
L_103b1533:;
  /* 103b1533 pop ebp */
  EBP = (pop32());
  /* 103b1534 ret  */
  ESPCHK(0x103b14f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011540 @ 0x103b1540 (172 bytes, 54 insns) */
void f_103b1540(void) {
  FTRACE(0x103b1540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b1540 push ebp */
  push32((uint32_t)(EBP));
  /* 103b1541 mov ebp, esp */
  EBP = (ESP);
  /* 103b1543 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b1546 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b1549 push eax */
  push32((uint32_t)(EAX));
  /* 103b154a call 0x103b1980 */
  push32(0x103b154fu); f_103b1980();
  /* 103b154f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1552 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 103b1555 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 103b1557 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 103b155a push ecx */
  push32((uint32_t)(ECX));
  /* 103b155b mov edx, dword ptr [0x103d0860] */
  EDX = (r32((uint32_t)(0x103d0860)));
  /* 103b1561 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 103b1563 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b1565 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 103b156b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1571 push edx */
  push32((uint32_t)(EDX));
  /* 103b1572 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103b1575 push eax */
  push32((uint32_t)(EAX));
  /* 103b1576 call dword ptr [0x103d087c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d087c))), 0x103b157cu);
  /* 103b157c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b157e jne 0x103b1591 */
  if (!C.zf) goto L_103b1591;
  /* 103b1580 mov dword ptr [0x103d0874], 0 */
  w32((uint32_t)(0x103d0874), (0x0u));
  /* 103b158a mov eax, 1 */
  EAX = (0x1u);
  /* 103b158f jmp 0x103b15e6 */
  goto L_103b15e6;
L_103b1591:;
  /* 103b1591 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 103b1594 push ecx */
  push32((uint32_t)(ECX));
  /* 103b1595 mov edx, dword ptr [0x103d0870] */
  EDX = (r32((uint32_t)(0x103d0870)));
  /* 103b159b push edx */
  push32((uint32_t)(EDX));
  /* 103b159c call 0x103b35c0 */
  push32(0x103b15a1u); f_103b35c0();
  /* 103b15a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b15a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b15a6 jne 0x103b15d9 */
  if (!C.zf) goto L_103b15d9;
  /* 103b15a8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103b15ab push eax */
  push32((uint32_t)(EAX));
  /* 103b15ac call 0x103b16c0 */
  push32(0x103b15b1u); f_103b16c0();
  /* 103b15b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b15b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b15b6 je 0x103b15d9 */
  if (C.zf) goto L_103b15d9;
  /* 103b15b8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 103b15bb mov dword ptr [0x103d0878], ecx */
  w32((uint32_t)(0x103d0878), (ECX));
  /* 103b15c1 mov edx, dword ptr [0x103d0878] */
  EDX = (r32((uint32_t)(0x103d0878)));
  /* 103b15c7 mov dword ptr [0x103d085c], edx */
  w32((uint32_t)(0x103d085c), (EDX));
  /* 103b15cd mov eax, dword ptr [0x103d0874] */
  EAX = (r32((uint32_t)(0x103d0874)));
  /* 103b15d2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 103b15d4 mov dword ptr [0x103d0874], eax */
  w32((uint32_t)(0x103d0874), (EAX));
L_103b15d9:;
  /* 103b15d9 mov eax, dword ptr [0x103d0874] */
  EAX = (r32((uint32_t)(0x103d0874)));
  /* 103b15de and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 103b15e1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 103b15e3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b15e5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_103b15e6:;
  /* 103b15e6 mov esp, ebp */
  ESP = (EBP);
  /* 103b15e8 pop ebp */
  EBP = (pop32());
  /* 103b15e9 ret 4 */
  ESPCHK(0x103b1540u, _esp0);
  ESP += 8; return;
}

/* FUN_100115f0 @ 0x103b15f0 (43 bytes, 11 insns) */
void f_103b15f0(void) {
  FTRACE(0x103b15f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b15f0 push ebp */
  push32((uint32_t)(EBP));
  /* 103b15f1 mov ebp, esp */
  EBP = (ESP);
  /* 103b15f3 mov eax, dword ptr [0x103d0874] */
  EAX = (r32((uint32_t)(0x103d0874)));
  /* 103b15f8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 103b15fd mov dword ptr [0x103d0874], eax */
  w32((uint32_t)(0x103d0874), (EAX));
  /* 103b1602 call dword ptr [0x103d32bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32bc))), 0x103b1608u);
  /* 103b1608 mov dword ptr [0x103d0878], eax */
  w32((uint32_t)(0x103d0878), (EAX));
  /* 103b160d mov ecx, dword ptr [0x103d0878] */
  ECX = (r32((uint32_t)(0x103d0878)));
  /* 103b1613 mov dword ptr [0x103d085c], ecx */
  w32((uint32_t)(0x103d085c), (ECX));
  /* 103b1619 pop ebp */
  EBP = (pop32());
  /* 103b161a ret  */
  ESPCHK(0x103b15f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011620 @ 0x103b1620 (155 bytes, 57 insns) */
void f_103b1620(void) {
  FTRACE(0x103b1620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b1620 push ebp */
  push32((uint32_t)(EBP));
  /* 103b1621 mov ebp, esp */
  EBP = (ESP);
  /* 103b1623 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b1626 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b162a je 0x103b164b */
  if (C.zf) goto L_103b164b;
  /* 103b162c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b162f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103b1632 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103b1634 je 0x103b164b */
  if (C.zf) goto L_103b164b;
  /* 103b1636 push 0x103cc9b4 */
  push32((uint32_t)(0x103cc9b4u));
  /* 103b163b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b163e push edx */
  push32((uint32_t)(EDX));
  /* 103b163f call 0x103b0b80 */
  push32(0x103b1644u); f_103b0b80();
  /* 103b1644 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1647 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b1649 jne 0x103b1673 */
  if (!C.zf) goto L_103b1673;
L_103b164b:;
  /* 103b164b push 8 */
  push32((uint32_t)(0x8u));
  /* 103b164d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 103b1650 push eax */
  push32((uint32_t)(EAX));
  /* 103b1651 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 103b1656 mov ecx, dword ptr [0x103d0878] */
  ECX = (r32((uint32_t)(0x103d0878)));
  /* 103b165c push ecx */
  push32((uint32_t)(ECX));
  /* 103b165d call dword ptr [0x103d087c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d087c))), 0x103b1663u);
  /* 103b1663 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b1665 jne 0x103b166b */
  if (!C.zf) goto L_103b166b;
  /* 103b1667 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b1669 jmp 0x103b16b7 */
  goto L_103b16b7;
L_103b166b:;
  /* 103b166b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 103b166e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 103b1671 jmp 0x103b16ab */
  goto L_103b16ab;
L_103b1673:;
  /* 103b1673 push 0x103cc9b0 */
  push32((uint32_t)(0x103cc9b0u));
  /* 103b1678 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b167b push eax */
  push32((uint32_t)(EAX));
  /* 103b167c call 0x103b0b80 */
  push32(0x103b1681u); f_103b0b80();
  /* 103b1681 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1684 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b1686 jne 0x103b16ab */
  if (!C.zf) goto L_103b16ab;
  /* 103b1688 push 8 */
  push32((uint32_t)(0x8u));
  /* 103b168a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 103b168d push ecx */
  push32((uint32_t)(ECX));
  /* 103b168e push 0xb */
  push32((uint32_t)(0xbu));
  /* 103b1690 mov edx, dword ptr [0x103d0878] */
  EDX = (r32((uint32_t)(0x103d0878)));
  /* 103b1696 push edx */
  push32((uint32_t)(EDX));
  /* 103b1697 call dword ptr [0x103d087c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d087c))), 0x103b169du);
  /* 103b169d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b169f jne 0x103b16a5 */
  if (!C.zf) goto L_103b16a5;
  /* 103b16a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b16a3 jmp 0x103b16b7 */
  goto L_103b16b7;
L_103b16a5:;
  /* 103b16a5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 103b16a8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_103b16ab:;
  /* 103b16ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b16ae push ecx */
  push32((uint32_t)(ECX));
  /* 103b16af call 0x103b37a0 */
  push32(0x103b16b4u); f_103b37a0();
  /* 103b16b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103b16b7:;
  /* 103b16b7 mov esp, ebp */
  ESP = (EBP);
  /* 103b16b9 pop ebp */
  EBP = (pop32());
  /* 103b16ba ret  */
  ESPCHK(0x103b1620u, _esp0);
  ESP += 4; return;
}

/* FUN_100116c0 @ 0x103b16c0 (79 bytes, 26 insns) */
void f_103b16c0(void) {
  FTRACE(0x103b16c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b16c0 push ebp */
  push32((uint32_t)(EBP));
  /* 103b16c1 mov ebp, esp */
  EBP = (ESP);
  /* 103b16c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b16c6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 103b16ca mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 103b16ce mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 103b16d5 jmp 0x103b16e0 */
  goto L_103b16e0;
L_103b16d7:;
  /* 103b16d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b16da add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b16dd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_103b16e0:;
  /* 103b16e0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b16e4 jae 0x103b1706 */
  if (!C.cf) goto L_103b1706;
  /* 103b16e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b16e9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 103b16ef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b16f2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103b16f4 mov cx, word ptr [eax*2 + 0x103cf9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x103cf9c4)));
  /* 103b16fc cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b16fe jne 0x103b1704 */
  if (!C.zf) goto L_103b1704;
  /* 103b1700 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b1702 jmp 0x103b170b */
  goto L_103b170b;
L_103b1704:;
  /* 103b1704 jmp 0x103b16d7 */
  goto L_103b16d7;
L_103b1706:;
  /* 103b1706 mov eax, 1 */
  EAX = (0x1u);
L_103b170b:;
  /* 103b170b mov esp, ebp */
  ESP = (EBP);
  /* 103b170d pop ebp */
  EBP = (pop32());
  /* 103b170e ret  */
  ESPCHK(0x103b16c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011710 @ 0x103b1710 (135 bytes, 48 insns) */
void f_103b1710(void) {
  FTRACE(0x103b1710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b1710 push ebp */
  push32((uint32_t)(EBP));
  /* 103b1711 mov ebp, esp */
  EBP = (ESP);
  /* 103b1713 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b1716 push esi */
  push32((uint32_t)(ESI));
  /* 103b1717 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b171a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103b171f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 103b1724 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103b1729 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 103b172c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103b1731 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103b1734 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 103b1736 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 103b1739 push ecx */
  push32((uint32_t)(ECX));
  /* 103b173a push 1 */
  push32((uint32_t)(0x1u));
  /* 103b173c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b173f push edx */
  push32((uint32_t)(EDX));
  /* 103b1740 call dword ptr [0x103d087c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d087c))), 0x103b1746u);
  /* 103b1746 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b1748 jne 0x103b174e */
  if (!C.zf) goto L_103b174e;
  /* 103b174a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b174c jmp 0x103b1792 */
  goto L_103b1792;
L_103b174e:;
  /* 103b174e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 103b1751 push eax */
  push32((uint32_t)(EAX));
  /* 103b1752 call 0x103b1980 */
  push32(0x103b1757u); f_103b1980();
  /* 103b1757 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b175a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b175d je 0x103b178d */
  if (C.zf) goto L_103b178d;
  /* 103b175f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1763 je 0x103b178d */
  if (C.zf) goto L_103b178d;
  /* 103b1765 mov ecx, dword ptr [0x103d086c] */
  ECX = (r32((uint32_t)(0x103d086c)));
  /* 103b176b push ecx */
  push32((uint32_t)(ECX));
  /* 103b176c call 0x103b1a00 */
  push32(0x103b1771u); f_103b1a00();
  /* 103b1771 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1774 mov esi, eax */
  ESI = (EAX);
  /* 103b1776 mov edx, dword ptr [0x103d086c] */
  EDX = (r32((uint32_t)(0x103d086c)));
  /* 103b177c push edx */
  push32((uint32_t)(EDX));
  /* 103b177d call 0x103a7d20 */
  push32(0x103b1782u); f_103a7d20();
  /* 103b1782 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1785 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1787 jne 0x103b178d */
  if (!C.zf) goto L_103b178d;
  /* 103b1789 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b178b jmp 0x103b1792 */
  goto L_103b1792;
L_103b178d:;
  /* 103b178d mov eax, 1 */
  EAX = (0x1u);
L_103b1792:;
  /* 103b1792 pop esi */
  ESI = (pop32());
  /* 103b1793 mov esp, ebp */
  ESP = (EBP);
  /* 103b1795 pop ebp */
  EBP = (pop32());
  /* 103b1796 ret  */
  ESPCHK(0x103b1710u, _esp0);
  ESP += 4; return;
}

/* FUN_100117a0 @ 0x103b17a0 (77 bytes, 18 insns) */
void f_103b17a0(void) {
  FTRACE(0x103b17a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b17a0 push ebp */
  push32((uint32_t)(EBP));
  /* 103b17a1 mov ebp, esp */
  EBP = (ESP);
  /* 103b17a3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b17a9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 103b17b3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 103b17b9 push eax */
  push32((uint32_t)(EAX));
  /* 103b17ba call dword ptr [0x103d32b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32b8))), 0x103b17c0u);
  /* 103b17c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b17c2 je 0x103b17d9 */
  if (C.zf) goto L_103b17d9;
  /* 103b17c4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b17cb jne 0x103b17d9 */
  if (!C.zf) goto L_103b17d9;
  /* 103b17cd mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 103b17d7 jmp 0x103b17e3 */
  goto L_103b17e3;
L_103b17d9:;
  /* 103b17d9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_103b17e3:;
  /* 103b17e3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 103b17e9 mov esp, ebp */
  ESP = (EBP);
  /* 103b17eb pop ebp */
  EBP = (pop32());
  /* 103b17ec ret  */
  ESPCHK(0x103b17a0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x103b17f0 (388 bytes, 118 insns) */
void f_103b17f0(void) {
  FTRACE(0x103b17f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b17f0 push ebp */
  push32((uint32_t)(EBP));
  /* 103b17f1 mov ebp, esp */
  EBP = (ESP);
  /* 103b17f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b17f6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 103b17fd mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 103b1804 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_103b180b:;
  /* 103b180b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b180e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1811 jg 0x103b1958 */
  if ((!C.zf&&C.sf==C.of)) goto L_103b1958;
  /* 103b1817 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b181a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b181d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103b181e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b1820 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 103b1822 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103b1825 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b1828 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103b182b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b182e cmp edx, dword ptr [ecx + 0x103cf520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x103cf520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1834 jne 0x103b192e */
  if (!C.zf) goto L_103b192e;
  /* 103b183a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b183d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 103b1840 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1844 ja 0x103b1867 */
  if ((!C.cf&&!C.zf)) goto L_103b1867;
  /* 103b1846 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b184a je 0x103b18d9 */
  if (C.zf) goto L_103b18d9;
  /* 103b1850 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1854 je 0x103b1884 */
  if (C.zf) goto L_103b1884;
  /* 103b1856 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b185a je 0x103b18a6 */
  if (C.zf) goto L_103b18a6;
  /* 103b185c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1860 je 0x103b18c8 */
  if (C.zf) goto L_103b18c8;
  /* 103b1862 jmp 0x103b18f8 */
  goto L_103b18f8;
L_103b1867:;
  /* 103b1867 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b186e je 0x103b1895 */
  if (C.zf) goto L_103b1895;
  /* 103b1870 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1877 je 0x103b18b7 */
  if (C.zf) goto L_103b18b7;
  /* 103b1879 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1880 je 0x103b18ea */
  if (C.zf) goto L_103b18ea;
  /* 103b1882 jmp 0x103b18f8 */
  goto L_103b18f8;
L_103b1884:;
  /* 103b1884 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b1887 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103b188a add ecx, 0x103cf524 */
  { uint32_t _a=(ECX),_b=(0x103cf524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1890 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103b1893 jmp 0x103b18f8 */
  goto L_103b18f8;
L_103b1895:;
  /* 103b1895 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b1898 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103b189b mov eax, dword ptr [edx + 0x103cf52c] */
  EAX = (r32((uint32_t)(EDX + 0x103cf52c)));
  /* 103b18a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103b18a4 jmp 0x103b18f8 */
  goto L_103b18f8;
L_103b18a6:;
  /* 103b18a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b18a9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103b18ac add ecx, 0x103cf530 */
  { uint32_t _a=(ECX),_b=(0x103cf530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b18b2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103b18b5 jmp 0x103b18f8 */
  goto L_103b18f8;
L_103b18b7:;
  /* 103b18b7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b18ba imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103b18bd mov eax, dword ptr [edx + 0x103cf534] */
  EAX = (r32((uint32_t)(EDX + 0x103cf534)));
  /* 103b18c3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103b18c6 jmp 0x103b18f8 */
  goto L_103b18f8;
L_103b18c8:;
  /* 103b18c8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b18cb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103b18ce add ecx, 0x103cf538 */
  { uint32_t _a=(ECX),_b=(0x103cf538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b18d4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103b18d7 jmp 0x103b18f8 */
  goto L_103b18f8;
L_103b18d9:;
  /* 103b18d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b18dc imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103b18df add edx, 0x103cf53c */
  { uint32_t _a=(EDX),_b=(0x103cf53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b18e5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103b18e8 jmp 0x103b18f8 */
  goto L_103b18f8;
L_103b18ea:;
  /* 103b18ea mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b18ed imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103b18f0 add eax, 0x103cf544 */
  { uint32_t _a=(EAX),_b=(0x103cf544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b18f5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_103b18f8:;
  /* 103b18f8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b18fc je 0x103b1904 */
  if (C.zf) goto L_103b1904;
  /* 103b18fe cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1902 jge 0x103b1906 */
  if ((C.sf==C.of)) goto L_103b1906;
L_103b1904:;
  /* 103b1904 jmp 0x103b1958 */
  goto L_103b1958;
L_103b1906:;
  /* 103b1906 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b1909 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b190c push ecx */
  push32((uint32_t)(ECX));
  /* 103b190d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b1910 push edx */
  push32((uint32_t)(EDX));
  /* 103b1911 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b1914 push eax */
  push32((uint32_t)(EAX));
  /* 103b1915 call 0x103a8710 */
  push32(0x103b191au); f_103a8710();
  /* 103b191a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b191d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b1920 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1923 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 103b1927 mov eax, 1 */
  EAX = (0x1u);
  /* 103b192c jmp 0x103b196e */
  goto L_103b196e;
L_103b192e:;
  /* 103b192e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b1931 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103b1934 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b1937 cmp eax, dword ptr [edx + 0x103cf520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x103cf520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b193d jae 0x103b194a */
  if (!C.cf) goto L_103b194a;
  /* 103b193f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b1942 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b1945 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103b1948 jmp 0x103b1953 */
  goto L_103b1953;
L_103b194a:;
  /* 103b194a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b194d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1950 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_103b1953:;
  /* 103b1953 jmp 0x103b180b */
  goto L_103b180b;
L_103b1958:;
  /* 103b1958 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b195b push eax */
  push32((uint32_t)(EAX));
  /* 103b195c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b195f push ecx */
  push32((uint32_t)(ECX));
  /* 103b1960 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b1963 push edx */
  push32((uint32_t)(EDX));
  /* 103b1964 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b1967 push eax */
  push32((uint32_t)(EAX));
  /* 103b1968 call dword ptr [0x103d32c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32c4))), 0x103b196eu);
L_103b196e:;
  /* 103b196e mov esp, ebp */
  ESP = (EBP);
  /* 103b1970 pop ebp */
  EBP = (pop32());
  /* 103b1971 ret 0x10 */
  ESPCHK(0x103b17f0u, _esp0);
  ESP += 20; return;
}

/* FUN_10011980 @ 0x103b1980 (118 bytes, 42 insns) */
void f_103b1980(void) {
  FTRACE(0x103b1980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b1980 push ebp */
  push32((uint32_t)(EBP));
  /* 103b1981 mov ebp, esp */
  EBP = (ESP);
  /* 103b1983 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b1986 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_103b198d:;
  /* 103b198d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b1990 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103b1992 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 103b1995 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 103b1999 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b199c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b199f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103b19a2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103b19a4 je 0x103b19ef */
  if (C.zf) goto L_103b19ef;
  /* 103b19a6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 103b19aa cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b19ad jl 0x103b19c2 */
  if ((C.sf!=C.of)) goto L_103b19c2;
  /* 103b19af movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 103b19b3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b19b6 jg 0x103b19c2 */
  if ((!C.zf&&C.sf==C.of)) goto L_103b19c2;
  /* 103b19b8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 103b19bb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 103b19bd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 103b19c0 jmp 0x103b19dc */
  goto L_103b19dc;
L_103b19c2:;
  /* 103b19c2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 103b19c6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b19c9 jl 0x103b19dc */
  if ((C.sf!=C.of)) goto L_103b19dc;
  /* 103b19cb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 103b19cf cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b19d2 jg 0x103b19dc */
  if ((!C.zf&&C.sf==C.of)) goto L_103b19dc;
  /* 103b19d4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 103b19d7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 103b19d9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_103b19dc:;
  /* 103b19dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b19df shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 103b19e2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 103b19e6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 103b19ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103b19ed jmp 0x103b198d */
  goto L_103b198d;
L_103b19ef:;
  /* 103b19ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b19f2 mov esp, ebp */
  ESP = (EBP);
  /* 103b19f4 pop ebp */
  EBP = (pop32());
  /* 103b19f5 ret  */
  ESPCHK(0x103b1980u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x103b1a00 (101 bytes, 36 insns) */
void f_103b1a00(void) {
  FTRACE(0x103b1a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b1a00 push ebp */
  push32((uint32_t)(EBP));
  /* 103b1a01 mov ebp, esp */
  EBP = (ESP);
  /* 103b1a03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b1a06 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 103b1a0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b1a10 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103b1a12 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 103b1a15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b1a18 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1a1b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_103b1a1e:;
  /* 103b1a1e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 103b1a22 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1a25 jl 0x103b1a30 */
  if ((C.sf!=C.of)) goto L_103b1a30;
  /* 103b1a27 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 103b1a2b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1a2e jle 0x103b1a42 */
  if ((C.zf||C.sf!=C.of)) goto L_103b1a42;
L_103b1a30:;
  /* 103b1a30 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 103b1a34 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1a37 jl 0x103b1a5e */
  if ((C.sf!=C.of)) goto L_103b1a5e;
  /* 103b1a39 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 103b1a3d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1a40 jg 0x103b1a5e */
  if ((!C.zf&&C.sf==C.of)) goto L_103b1a5e;
L_103b1a42:;
  /* 103b1a42 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b1a45 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1a48 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103b1a4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b1a4e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103b1a50 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 103b1a53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b1a56 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1a59 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 103b1a5c jmp 0x103b1a1e */
  goto L_103b1a1e;
L_103b1a5e:;
  /* 103b1a5e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b1a61 mov esp, ebp */
  ESP = (EBP);
  /* 103b1a63 pop ebp */
  EBP = (pop32());
  /* 103b1a64 ret  */
  ESPCHK(0x103b1a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a70 @ 0x103b1a70 (122 bytes, 39 insns) */
void f_103b1a70(void) {
  FTRACE(0x103b1a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b1a70 push ebp */
  push32((uint32_t)(EBP));
  /* 103b1a71 mov ebp, esp */
  EBP = (ESP);
  /* 103b1a73 push ecx */
  push32((uint32_t)(ECX));
  /* 103b1a74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b1a77 cmp eax, dword ptr [0x103d20fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x103d20fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1a7d jae 0x103b1aa1 */
  if (!C.cf) goto L_103b1aa1;
  /* 103b1a7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b1a82 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 103b1a85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b1a88 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 103b1a8b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103b1a8e mov eax, dword ptr [ecx*4 + 0x103d1fc0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x103d1fc0)));
  /* 103b1a95 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 103b1a9a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 103b1a9d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103b1a9f jne 0x103b1abc */
  if (!C.zf) goto L_103b1abc;
L_103b1aa1:;
  /* 103b1aa1 call 0x103acdc0 */
  push32(0x103b1aa6u); f_103acdc0();
  /* 103b1aa6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 103b1aac call 0x103acdd0 */
  push32(0x103b1ab1u); f_103acdd0();
  /* 103b1ab1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 103b1ab7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103b1aba jmp 0x103b1ae6 */
  goto L_103b1ae6;
L_103b1abc:;
  /* 103b1abc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b1abf push edx */
  push32((uint32_t)(EDX));
  /* 103b1ac0 call 0x103ae5e0 */
  push32(0x103b1ac5u); f_103ae5e0();
  /* 103b1ac5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1ac8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b1acb push eax */
  push32((uint32_t)(EAX));
  /* 103b1acc call 0x103b1af0 */
  push32(0x103b1ad1u); f_103b1af0();
  /* 103b1ad1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1ad4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103b1ad7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b1ada push ecx */
  push32((uint32_t)(ECX));
  /* 103b1adb call 0x103ae670 */
  push32(0x103b1ae0u); f_103ae670();
  /* 103b1ae0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1ae3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_103b1ae6:;
  /* 103b1ae6 mov esp, ebp */
  ESP = (EBP);
  /* 103b1ae8 pop ebp */
  EBP = (pop32());
  /* 103b1ae9 ret  */
  ESPCHK(0x103b1a70u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x103b1af0 (170 bytes, 59 insns) */
void f_103b1af0(void) {
  FTRACE(0x103b1af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b1af0 push ebp */
  push32((uint32_t)(EBP));
  /* 103b1af1 mov ebp, esp */
  EBP = (ESP);
  /* 103b1af3 push ecx */
  push32((uint32_t)(ECX));
  /* 103b1af4 push esi */
  push32((uint32_t)(ESI));
  /* 103b1af5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b1af8 push eax */
  push32((uint32_t)(EAX));
  /* 103b1af9 call 0x103ae460 */
  push32(0x103b1afeu); f_103ae460();
  /* 103b1afe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1b01 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1b04 je 0x103b1b43 */
  if (C.zf) goto L_103b1b43;
  /* 103b1b06 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1b0a je 0x103b1b12 */
  if (C.zf) goto L_103b1b12;
  /* 103b1b0c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1b10 jne 0x103b1b2c */
  if (!C.zf) goto L_103b1b2c;
L_103b1b12:;
  /* 103b1b12 push 1 */
  push32((uint32_t)(0x1u));
  /* 103b1b14 call 0x103ae460 */
  push32(0x103b1b19u); f_103ae460();
  /* 103b1b19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1b1c mov esi, eax */
  ESI = (EAX);
  /* 103b1b1e push 2 */
  push32((uint32_t)(0x2u));
  /* 103b1b20 call 0x103ae460 */
  push32(0x103b1b25u); f_103ae460();
  /* 103b1b25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1b28 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1b2a je 0x103b1b43 */
  if (C.zf) goto L_103b1b43;
L_103b1b2c:;
  /* 103b1b2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b1b2f push ecx */
  push32((uint32_t)(ECX));
  /* 103b1b30 call 0x103ae460 */
  push32(0x103b1b35u); f_103ae460();
  /* 103b1b35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1b38 push eax */
  push32((uint32_t)(EAX));
  /* 103b1b39 call dword ptr [0x103d32b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32b4))), 0x103b1b3fu);
  /* 103b1b3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b1b41 je 0x103b1b4c */
  if (C.zf) goto L_103b1b4c;
L_103b1b43:;
  /* 103b1b43 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103b1b4a jmp 0x103b1b55 */
  goto L_103b1b55;
L_103b1b4c:;
  /* 103b1b4c call dword ptr [0x103d3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3378))), 0x103b1b52u);
  /* 103b1b52 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103b1b55:;
  /* 103b1b55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b1b58 push edx */
  push32((uint32_t)(EDX));
  /* 103b1b59 call 0x103ae380 */
  push32(0x103b1b5eu); f_103ae380();
  /* 103b1b5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1b61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b1b64 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 103b1b67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b1b6a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 103b1b6d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103b1b70 mov edx, dword ptr [eax*4 + 0x103d1fc0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x103d1fc0)));
  /* 103b1b77 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 103b1b7c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1b80 je 0x103b1b93 */
  if (C.zf) goto L_103b1b93;
  /* 103b1b82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b1b85 push eax */
  push32((uint32_t)(EAX));
  /* 103b1b86 call 0x103acd20 */
  push32(0x103b1b8bu); f_103acd20();
  /* 103b1b8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1b8e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103b1b91 jmp 0x103b1b95 */
  goto L_103b1b95;
L_103b1b93:;
  /* 103b1b93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103b1b95:;
  /* 103b1b95 pop esi */
  ESI = (pop32());
  /* 103b1b96 mov esp, ebp */
  ESP = (EBP);
  /* 103b1b98 pop ebp */
  EBP = (pop32());
  /* 103b1b99 ret  */
  ESPCHK(0x103b1af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ba0 @ 0x103b1ba0 (146 bytes, 52 insns) */
void f_103b1ba0(void) {
  FTRACE(0x103b1ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b1ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 103b1ba1 mov ebp, esp */
  EBP = (ESP);
  /* 103b1ba3 push ebx */
  push32((uint32_t)(EBX));
  /* 103b1ba4 push esi */
  push32((uint32_t)(ESI));
  /* 103b1ba5 push edi */
  push32((uint32_t)(EDI));
L_103b1ba6:;
  /* 103b1ba6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1baa jne 0x103b1bca */
  if (!C.zf) goto L_103b1bca;
  /* 103b1bac push 0x103cc2f0 */
  push32((uint32_t)(0x103cc2f0u));
  /* 103b1bb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b1bb3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 103b1bb5 push 0x103cc9b8 */
  push32((uint32_t)(0x103cc9b8u));
  /* 103b1bba push 2 */
  push32((uint32_t)(0x2u));
  /* 103b1bbc call 0x103a3fb0 */
  push32(0x103b1bc1u); f_103a3fb0();
  /* 103b1bc1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1bc4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1bc7 jne 0x103b1bca */
  if (!C.zf) goto L_103b1bca;
  /* 103b1bc9 int3  */
  x86_unimpl("int3 @ 0x103b1bc9");
L_103b1bca:;
  /* 103b1bca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b1bcc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b1bce jne 0x103b1ba6 */
  if (!C.zf) goto L_103b1ba6;
  /* 103b1bd0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b1bd3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103b1bd6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 103b1bdc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103b1bde je 0x103b1c2d */
  if (C.zf) goto L_103b1c2d;
  /* 103b1be0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b1be3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 103b1be6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 103b1be9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103b1beb je 0x103b1c2d */
  if (C.zf) goto L_103b1c2d;
  /* 103b1bed push 2 */
  push32((uint32_t)(0x2u));
  /* 103b1bef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b1bf2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 103b1bf5 push eax */
  push32((uint32_t)(EAX));
  /* 103b1bf6 call 0x103a5980 */
  push32(0x103b1bfbu); f_103a5980();
  /* 103b1bfb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1bfe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b1c01 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103b1c04 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 103b1c0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b1c0d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 103b1c10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b1c13 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 103b1c19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b1c1c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 103b1c23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b1c26 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_103b1c2d:;
  /* 103b1c2d pop edi */
  EDI = (pop32());
  /* 103b1c2e pop esi */
  ESI = (pop32());
  /* 103b1c2f pop ebx */
  EBX = (pop32());
  /* 103b1c30 pop ebp */
  EBP = (pop32());
  /* 103b1c31 ret  */
  ESPCHK(0x103b1ba0u, _esp0);
  ESP += 4; return;
}

