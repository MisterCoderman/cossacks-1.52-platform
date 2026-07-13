#include "recomp.h"

/* FUN_10009e20 @ 0x10989e20 (490 bytes, 165 insns) */
void f_10989e20(void) {
  FTRACE(0x10989e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10989e20 push ebp */
  push32((uint32_t)(EBP));
  /* 10989e21 mov ebp, esp */
  EBP = (ESP);
  /* 10989e23 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10989e26 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989e2a jne 0x10989e3d */
  if (!C.zf) goto L_10989e3d;
  /* 10989e2c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10989e2f push eax */
  push32((uint32_t)(EAX));
  /* 10989e30 call 0x10989c70 */
  push32(0x10989e35u); f_10989c70();
  /* 10989e35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10989e38 jmp 0x1098a006 */
  goto L_1098a006;
L_10989e3d:;
  /* 10989e3d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989e41 jne 0x10989e56 */
  if (!C.zf) goto L_10989e56;
  /* 10989e43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10989e46 push ecx */
  push32((uint32_t)(ECX));
  /* 10989e47 call 0x1098a010 */
  push32(0x10989e4cu); f_1098a010();
  /* 10989e4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10989e4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10989e51 jmp 0x1098a006 */
  goto L_1098a006;
L_10989e56:;
  /* 10989e56 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10989e5d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989e61 ja 0x10989fd9 */
  if ((!C.cf&&!C.zf)) goto L_10989fd9;
  /* 10989e67 push 9 */
  push32((uint32_t)(0x9u));
  /* 10989e69 call 0x109898a0 */
  push32(0x10989e6eu); f_109898a0();
  /* 10989e6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10989e71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10989e74 push edx */
  push32((uint32_t)(EDX));
  /* 10989e75 call 0x1098a1a0 */
  push32(0x10989e7au); f_1098a1a0();
  /* 10989e7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10989e7d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10989e80 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989e84 je 0x10989f9c */
  if (C.zf) goto L_10989f9c;
  /* 10989e8a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10989e8d cmp eax, dword ptr [0x109afc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109afc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989e93 ja 0x10989f10 */
  if ((!C.cf&&!C.zf)) goto L_10989f10;
  /* 10989e95 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10989e98 push ecx */
  push32((uint32_t)(ECX));
  /* 10989e99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10989e9c push edx */
  push32((uint32_t)(EDX));
  /* 10989e9d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10989ea0 push eax */
  push32((uint32_t)(EAX));
  /* 10989ea1 call 0x1098b070 */
  push32(0x10989ea6u); f_1098b070();
  /* 10989ea6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10989ea9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10989eab je 0x10989eb5 */
  if (C.zf) goto L_10989eb5;
  /* 10989ead mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10989eb0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10989eb3 jmp 0x10989f10 */
  goto L_10989f10;
L_10989eb5:;
  /* 10989eb5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10989eb8 push edx */
  push32((uint32_t)(EDX));
  /* 10989eb9 call 0x1098a830 */
  push32(0x10989ebeu); f_1098a830();
  /* 10989ebe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10989ec1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10989ec4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989ec8 je 0x10989f10 */
  if (C.zf) goto L_10989f10;
  /* 10989eca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10989ecd mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 10989ed0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10989ed3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10989ed6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10989ed9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989edc jae 0x10989ee6 */
  if (!C.cf) goto L_10989ee6;
  /* 10989ede mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10989ee1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10989ee4 jmp 0x10989eec */
  goto L_10989eec;
L_10989ee6:;
  /* 10989ee6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10989ee9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10989eec:;
  /* 10989eec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10989eef push edx */
  push32((uint32_t)(EDX));
  /* 10989ef0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10989ef3 push eax */
  push32((uint32_t)(EAX));
  /* 10989ef4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10989ef7 push ecx */
  push32((uint32_t)(ECX));
  /* 10989ef8 call 0x1098c780 */
  push32(0x10989efdu); f_1098c780();
  /* 10989efd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10989f00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10989f03 push edx */
  push32((uint32_t)(EDX));
  /* 10989f04 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10989f07 push eax */
  push32((uint32_t)(EAX));
  /* 10989f08 call 0x1098a260 */
  push32(0x10989f0du); f_1098a260();
  /* 10989f0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10989f10:;
  /* 10989f10 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989f14 jne 0x10989f90 */
  if (!C.zf) goto L_10989f90;
  /* 10989f16 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989f1a jne 0x10989f23 */
  if (!C.zf) goto L_10989f23;
  /* 10989f1c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10989f23:;
  /* 10989f23 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10989f26 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10989f29 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10989f2c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10989f2f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10989f32 push edx */
  push32((uint32_t)(EDX));
  /* 10989f33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10989f35 mov eax, dword ptr [0x109b2fec] */
  EAX = (r32((uint32_t)(0x109b2fec)));
  /* 10989f3a push eax */
  push32((uint32_t)(EAX));
  /* 10989f3b call dword ptr [0x109b4320] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4320))), 0x10989f41u);
  /* 10989f41 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10989f44 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989f48 je 0x10989f90 */
  if (C.zf) goto L_10989f90;
  /* 10989f4a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10989f4d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10989f50 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10989f53 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10989f56 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10989f59 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989f5c jae 0x10989f66 */
  if (!C.cf) goto L_10989f66;
  /* 10989f5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10989f61 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10989f64 jmp 0x10989f6c */
  goto L_10989f6c;
L_10989f66:;
  /* 10989f66 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10989f69 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10989f6c:;
  /* 10989f6c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10989f6f push eax */
  push32((uint32_t)(EAX));
  /* 10989f70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10989f73 push ecx */
  push32((uint32_t)(ECX));
  /* 10989f74 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10989f77 push edx */
  push32((uint32_t)(EDX));
  /* 10989f78 call 0x1098c780 */
  push32(0x10989f7du); f_1098c780();
  /* 10989f7d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10989f80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10989f83 push eax */
  push32((uint32_t)(EAX));
  /* 10989f84 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10989f87 push ecx */
  push32((uint32_t)(ECX));
  /* 10989f88 call 0x1098a260 */
  push32(0x10989f8du); f_1098a260();
  /* 10989f8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10989f90:;
  /* 10989f90 push 9 */
  push32((uint32_t)(0x9u));
  /* 10989f92 call 0x10989940 */
  push32(0x10989f97u); f_10989940();
  /* 10989f97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10989f9a jmp 0x10989fd9 */
  goto L_10989fd9;
L_10989f9c:;
  /* 10989f9c push 9 */
  push32((uint32_t)(0x9u));
  /* 10989f9e call 0x10989940 */
  push32(0x10989fa3u); f_10989940();
  /* 10989fa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10989fa6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989faa jne 0x10989fb3 */
  if (!C.zf) goto L_10989fb3;
  /* 10989fac mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10989fb3:;
  /* 10989fb3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10989fb6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10989fb9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10989fbc mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10989fbf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10989fc2 push eax */
  push32((uint32_t)(EAX));
  /* 10989fc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10989fc6 push ecx */
  push32((uint32_t)(ECX));
  /* 10989fc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10989fc9 mov edx, dword ptr [0x109b2fec] */
  EDX = (r32((uint32_t)(0x109b2fec)));
  /* 10989fcf push edx */
  push32((uint32_t)(EDX));
  /* 10989fd0 call dword ptr [0x109b431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b431c))), 0x10989fd6u);
  /* 10989fd6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10989fd9:;
  /* 10989fd9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989fdd jne 0x10989fe8 */
  if (!C.zf) goto L_10989fe8;
  /* 10989fdf cmp dword ptr [0x109b1838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b1838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989fe6 jne 0x10989fed */
  if (!C.zf) goto L_10989fed;
L_10989fe8:;
  /* 10989fe8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10989feb jmp 0x1098a006 */
  goto L_1098a006;
L_10989fed:;
  /* 10989fed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10989ff0 push eax */
  push32((uint32_t)(EAX));
  /* 10989ff1 call 0x10989be0 */
  push32(0x10989ff6u); f_10989be0();
  /* 10989ff6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10989ff9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10989ffb jne 0x1098a001 */
  if (!C.zf) goto L_1098a001;
  /* 10989ffd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10989fff jmp 0x1098a006 */
  goto L_1098a006;
L_1098a001:;
  /* 1098a001 jmp 0x10989e56 */
  goto L_10989e56;
L_1098a006:;
  /* 1098a006 mov esp, ebp */
  ESP = (EBP);
  /* 1098a008 pop ebp */
  EBP = (pop32());
  /* 1098a009 ret  */
  ESPCHK(0x10989e20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a010 @ 0x1098a010 (104 bytes, 38 insns) */
void f_1098a010(void) {
  FTRACE(0x1098a010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098a010 push ebp */
  push32((uint32_t)(EBP));
  /* 1098a011 mov ebp, esp */
  EBP = (ESP);
  /* 1098a013 push ecx */
  push32((uint32_t)(ECX));
  /* 1098a014 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098a018 jne 0x1098a01c */
  if (!C.zf) goto L_1098a01c;
  /* 1098a01a jmp 0x1098a074 */
  goto L_1098a074;
L_1098a01c:;
  /* 1098a01c push 9 */
  push32((uint32_t)(0x9u));
  /* 1098a01e call 0x109898a0 */
  push32(0x1098a023u); f_109898a0();
  /* 1098a023 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a026 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098a029 push eax */
  push32((uint32_t)(EAX));
  /* 1098a02a call 0x1098a1a0 */
  push32(0x1098a02fu); f_1098a1a0();
  /* 1098a02f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a032 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1098a035 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098a039 je 0x1098a057 */
  if (C.zf) goto L_1098a057;
  /* 1098a03b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098a03e push ecx */
  push32((uint32_t)(ECX));
  /* 1098a03f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098a042 push edx */
  push32((uint32_t)(EDX));
  /* 1098a043 call 0x1098a260 */
  push32(0x1098a048u); f_1098a260();
  /* 1098a048 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a04b push 9 */
  push32((uint32_t)(0x9u));
  /* 1098a04d call 0x10989940 */
  push32(0x1098a052u); f_10989940();
  /* 1098a052 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a055 jmp 0x1098a074 */
  goto L_1098a074;
L_1098a057:;
  /* 1098a057 push 9 */
  push32((uint32_t)(0x9u));
  /* 1098a059 call 0x10989940 */
  push32(0x1098a05eu); f_10989940();
  /* 1098a05e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a061 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098a064 push eax */
  push32((uint32_t)(EAX));
  /* 1098a065 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098a067 mov ecx, dword ptr [0x109b2fec] */
  ECX = (r32((uint32_t)(0x109b2fec)));
  /* 1098a06d push ecx */
  push32((uint32_t)(ECX));
  /* 1098a06e call dword ptr [0x109b4340] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4340))), 0x1098a074u);
L_1098a074:;
  /* 1098a074 mov esp, ebp */
  ESP = (EBP);
  /* 1098a076 pop ebp */
  EBP = (pop32());
  /* 1098a077 ret  */
  ESPCHK(0x1098a010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a080 @ 0x1098a080 (116 bytes, 34 insns) */
void f_1098a080(void) {
  FTRACE(0x1098a080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098a080 push ebp */
  push32((uint32_t)(EBP));
  /* 1098a081 mov ebp, esp */
  EBP = (ESP);
  /* 1098a083 push ecx */
  push32((uint32_t)(ECX));
  /* 1098a084 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 1098a08b push 9 */
  push32((uint32_t)(0x9u));
  /* 1098a08d call 0x109898a0 */
  push32(0x1098a092u); f_109898a0();
  /* 1098a092 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a095 call 0x1098b790 */
  push32(0x1098a09au); f_1098b790();
  /* 1098a09a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098a09c jge 0x1098a0a5 */
  if ((C.sf==C.of)) goto L_1098a0a5;
  /* 1098a09e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1098a0a5:;
  /* 1098a0a5 push 9 */
  push32((uint32_t)(0x9u));
  /* 1098a0a7 call 0x10989940 */
  push32(0x1098a0acu); f_10989940();
  /* 1098a0ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a0af push 0 */
  push32((uint32_t)(0x0u));
  /* 1098a0b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098a0b3 mov eax, dword ptr [0x109b2fec] */
  EAX = (r32((uint32_t)(0x109b2fec)));
  /* 1098a0b8 push eax */
  push32((uint32_t)(EAX));
  /* 1098a0b9 call dword ptr [0x109b43ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43ac))), 0x1098a0bfu);
  /* 1098a0bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098a0c1 jne 0x1098a0ed */
  if (!C.zf) goto L_1098a0ed;
  /* 1098a0c3 call dword ptr [0x109b439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b439c))), 0x1098a0c9u);
  /* 1098a0c9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098a0cc jne 0x1098a0e6 */
  if (!C.zf) goto L_1098a0e6;
  /* 1098a0ce call 0x1098dd80 */
  push32(0x1098a0d3u); f_1098dd80();
  /* 1098a0d3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 1098a0d9 call 0x1098dd70 */
  push32(0x1098a0deu); f_1098dd70();
  /* 1098a0de mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 1098a0e4 jmp 0x1098a0ed */
  goto L_1098a0ed;
L_1098a0e6:;
  /* 1098a0e6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1098a0ed:;
  /* 1098a0ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098a0f0 mov esp, ebp */
  ESP = (EBP);
  /* 1098a0f2 pop ebp */
  EBP = (pop32());
  /* 1098a0f3 ret  */
  ESPCHK(0x1098a080u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a100 @ 0x1098a100 (10 bytes, 5 insns) */
void f_1098a100(void) {
  FTRACE(0x1098a100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098a100 push ebp */
  push32((uint32_t)(EBP));
  /* 1098a101 mov ebp, esp */
  EBP = (ESP);
  /* 1098a103 call 0x1098a080 */
  push32(0x1098a108u); f_1098a080();
  /* 1098a108 pop ebp */
  EBP = (pop32());
  /* 1098a109 ret  */
  ESPCHK(0x1098a100u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a110 @ 0x1098a110 (10 bytes, 5 insns) */
void f_1098a110(void) {
  FTRACE(0x1098a110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098a110 push ebp */
  push32((uint32_t)(EBP));
  /* 1098a111 mov ebp, esp */
  EBP = (ESP);
  /* 1098a113 mov eax, dword ptr [0x109afc94] */
  EAX = (r32((uint32_t)(0x109afc94)));
  /* 1098a118 pop ebp */
  EBP = (pop32());
  /* 1098a119 ret  */
  ESPCHK(0x1098a110u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a120 @ 0x1098a120 (31 bytes, 11 insns) */
void f_1098a120(void) {
  FTRACE(0x1098a120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098a120 push ebp */
  push32((uint32_t)(EBP));
  /* 1098a121 mov ebp, esp */
  EBP = (ESP);
  /* 1098a123 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098a12a jbe 0x1098a130 */
  if ((C.cf||C.zf)) goto L_1098a130;
  /* 1098a12c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098a12e jmp 0x1098a13d */
  goto L_1098a13d;
L_1098a130:;
  /* 1098a130 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098a133 mov dword ptr [0x109afc94], eax */
  w32((uint32_t)(0x109afc94), (EAX));
  /* 1098a138 mov eax, 1 */
  EAX = (0x1u);
L_1098a13d:;
  /* 1098a13d pop ebp */
  EBP = (pop32());
  /* 1098a13e ret  */
  ESPCHK(0x1098a120u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a140 @ 0x1098a140 (89 bytes, 20 insns) */
void f_1098a140(void) {
  FTRACE(0x1098a140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098a140 push ebp */
  push32((uint32_t)(EBP));
  /* 1098a141 mov ebp, esp */
  EBP = (ESP);
  /* 1098a143 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1098a148 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098a14a mov eax, dword ptr [0x109b2fec] */
  EAX = (r32((uint32_t)(0x109b2fec)));
  /* 1098a14f push eax */
  push32((uint32_t)(EAX));
  /* 1098a150 call dword ptr [0x109b4320] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4320))), 0x1098a156u);
  /* 1098a156 mov dword ptr [0x109b2fe8], eax */
  w32((uint32_t)(0x109b2fe8), (EAX));
  /* 1098a15b cmp dword ptr [0x109b2fe8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b2fe8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098a162 jne 0x1098a168 */
  if (!C.zf) goto L_1098a168;
  /* 1098a164 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098a166 jmp 0x1098a197 */
  goto L_1098a197;
L_1098a168:;
  /* 1098a168 mov ecx, dword ptr [0x109b2fe8] */
  ECX = (r32((uint32_t)(0x109b2fe8)));
  /* 1098a16e mov dword ptr [0x109b2fdc], ecx */
  w32((uint32_t)(0x109b2fdc), (ECX));
  /* 1098a174 mov dword ptr [0x109b2fe0], 0 */
  w32((uint32_t)(0x109b2fe0), (0x0u));
  /* 1098a17e mov dword ptr [0x109b2fe4], 0 */
  w32((uint32_t)(0x109b2fe4), (0x0u));
  /* 1098a188 mov dword ptr [0x109b2fc8], 0x10 */
  w32((uint32_t)(0x109b2fc8), (0x10u));
  /* 1098a192 mov eax, 1 */
  EAX = (0x1u);
L_1098a197:;
  /* 1098a197 pop ebp */
  EBP = (pop32());
  /* 1098a198 ret  */
  ESPCHK(0x1098a140u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1a0 @ 0x1098a1a0 (85 bytes, 29 insns) */
void f_1098a1a0(void) {
  FTRACE(0x1098a1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098a1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1098a1a1 mov ebp, esp */
  EBP = (ESP);
  /* 1098a1a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098a1a6 mov eax, dword ptr [0x109b2fe4] */
  EAX = (r32((uint32_t)(0x109b2fe4)));
  /* 1098a1ab imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098a1ae mov ecx, dword ptr [0x109b2fe8] */
  ECX = (r32((uint32_t)(0x109b2fe8)));
  /* 1098a1b4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a1b6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1098a1b9 mov edx, dword ptr [0x109b2fe8] */
  EDX = (r32((uint32_t)(0x109b2fe8)));
  /* 1098a1bf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1098a1c2:;
  /* 1098a1c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098a1c5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098a1c8 jae 0x1098a1ef */
  if (!C.cf) goto L_1098a1ef;
  /* 1098a1ca mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098a1cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098a1d0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098a1d3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1098a1d6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098a1dd jae 0x1098a1e4 */
  if (!C.cf) goto L_1098a1e4;
  /* 1098a1df mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098a1e2 jmp 0x1098a1f1 */
  goto L_1098a1f1;
L_1098a1e4:;
  /* 1098a1e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098a1e7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a1ea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1098a1ed jmp 0x1098a1c2 */
  goto L_1098a1c2;
L_1098a1ef:;
  /* 1098a1ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1098a1f1:;
  /* 1098a1f1 mov esp, ebp */
  ESP = (EBP);
  /* 1098a1f3 pop ebp */
  EBP = (pop32());
  /* 1098a1f4 ret  */
  ESPCHK(0x1098a1a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a200 @ 0x1098a200 (95 bytes, 33 insns) */
void f_1098a200(void) {
  FTRACE(0x1098a200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098a200 push ebp */
  push32((uint32_t)(EBP));
  /* 1098a201 mov ebp, esp */
  EBP = (ESP);
  /* 1098a203 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098a206 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098a209 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098a20c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098a20f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1098a212 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098a215 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1098a218 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1098a21b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1098a220 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098a223 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1098a225 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098a228 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1098a22b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1098a22d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098a22f jne 0x1098a251 */
  if (!C.zf) goto L_1098a251;
  /* 1098a231 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098a234 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1098a237 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098a239 jne 0x1098a251 */
  if (!C.zf) goto L_1098a251;
  /* 1098a23b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098a23e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 1098a244 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098a246 je 0x1098a251 */
  if (C.zf) goto L_1098a251;
  /* 1098a248 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1098a24f jmp 0x1098a258 */
  goto L_1098a258;
L_1098a251:;
  /* 1098a251 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1098a258:;
  /* 1098a258 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098a25b mov esp, ebp */
  ESP = (EBP);
  /* 1098a25d pop ebp */
  EBP = (pop32());
  /* 1098a25e ret  */
  ESPCHK(0x1098a200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a260 @ 0x1098a260 (1485 bytes, 453 insns) */
void f_1098a260(void) {
  FTRACE(0x1098a260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098a260 push ebp */
  push32((uint32_t)(EBP));
  /* 1098a261 mov ebp, esp */
  EBP = (ESP);
  /* 1098a263 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098a266 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098a269 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1098a26c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1098a26f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098a272 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098a275 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098a278 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1098a27b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098a27e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1098a281 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1098a284 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098a287 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098a28d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1098a290 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 1098a297 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1098a29a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098a29d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098a2a0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1098a2a3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1098a2a6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1098a2a8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098a2ab mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1098a2ae mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1098a2b1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a2b4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 1098a2b7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1098a2ba mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1098a2bc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1098a2bf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1098a2c2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1098a2c5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1098a2c8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098a2cb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1098a2ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098a2d0 jne 0x1098a3f8 */
  if (!C.zf) goto L_1098a3f8;
  /* 1098a2d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098a2d9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1098a2dc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098a2df mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1098a2e2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098a2e6 jbe 0x1098a2ef */
  if ((C.cf||C.zf)) goto L_1098a2ef;
  /* 1098a2e8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1098a2ef:;
  /* 1098a2ef mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1098a2f2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1098a2f5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1098a2f8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098a2fb jne 0x1098a3d1 */
  if (!C.zf) goto L_1098a3d1;
  /* 1098a301 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098a305 jae 0x1098a366 */
  if (!C.cf) goto L_1098a366;
  /* 1098a307 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1098a30c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098a30f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1098a311 not eax */
  EAX = (~(EAX));
  /* 1098a313 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098a316 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1098a319 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1098a31d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1098a31f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098a322 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1098a325 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1098a329 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1098a32c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a32f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1098a332 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1098a335 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1098a338 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a33b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1098a33e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1098a341 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a344 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1098a348 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098a34a jne 0x1098a364 */
  if (!C.zf) goto L_1098a364;
  /* 1098a34c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1098a351 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098a354 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1098a356 not eax */
  EAX = (~(EAX));
  /* 1098a358 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098a35b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1098a35d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1098a35f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098a362 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1098a364:;
  /* 1098a364 jmp 0x1098a3d1 */
  goto L_1098a3d1;
L_1098a366:;
  /* 1098a366 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098a369 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098a36c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1098a371 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1098a373 not edx */
  EDX = (~(EDX));
  /* 1098a375 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098a378 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1098a37b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1098a382 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1098a384 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098a387 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1098a38a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1098a391 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1098a394 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a397 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1098a39a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1098a39d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1098a3a0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a3a3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1098a3a6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1098a3a9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a3ac movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1098a3b0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098a3b2 jne 0x1098a3d1 */
  if (!C.zf) goto L_1098a3d1;
  /* 1098a3b4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098a3b7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098a3ba mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1098a3bf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1098a3c1 not edx */
  EDX = (~(EDX));
  /* 1098a3c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098a3c6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1098a3c9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1098a3cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098a3ce mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1098a3d1:;
  /* 1098a3d1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1098a3d4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1098a3d7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1098a3da mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1098a3dd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1098a3e0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1098a3e3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1098a3e6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1098a3e9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1098a3ec mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1098a3ef mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098a3f2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a3f5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_1098a3f8:;
  /* 1098a3f8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098a3fb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1098a3fe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098a401 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1098a404 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098a408 jbe 0x1098a411 */
  if ((C.cf||C.zf)) goto L_1098a411;
  /* 1098a40a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1098a411:;
  /* 1098a411 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098a414 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1098a417 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098a419 jne 0x1098a575 */
  if (!C.zf) goto L_1098a575;
  /* 1098a41f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1098a422 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098a425 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 1098a428 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098a42b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1098a42e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098a431 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1098a434 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098a438 jbe 0x1098a441 */
  if ((C.cf||C.zf)) goto L_1098a441;
  /* 1098a43a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_1098a441:;
  /* 1098a441 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098a444 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a447 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1098a44a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098a44d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1098a450 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098a453 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1098a456 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098a45a jbe 0x1098a463 */
  if ((C.cf||C.zf)) goto L_1098a463;
  /* 1098a45c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1098a463:;
  /* 1098a463 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098a466 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098a469 je 0x1098a56f */
  if (C.zf) goto L_1098a56f;
  /* 1098a46f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1098a472 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1098a475 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1098a478 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098a47b jne 0x1098a551 */
  if (!C.zf) goto L_1098a551;
  /* 1098a481 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098a485 jae 0x1098a4e6 */
  if (!C.cf) goto L_1098a4e6;
  /* 1098a487 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1098a48c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098a48f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1098a491 not edx */
  EDX = (~(EDX));
  /* 1098a493 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098a496 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1098a499 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1098a49d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1098a49f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098a4a2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1098a4a5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1098a4a9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1098a4ac add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a4af mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1098a4b2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1098a4b5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1098a4b8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a4bb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1098a4be mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1098a4c1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a4c4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1098a4c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098a4ca jne 0x1098a4e4 */
  if (!C.zf) goto L_1098a4e4;
  /* 1098a4cc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1098a4d1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098a4d4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1098a4d6 not edx */
  EDX = (~(EDX));
  /* 1098a4d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098a4db mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1098a4dd and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1098a4df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098a4e2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1098a4e4:;
  /* 1098a4e4 jmp 0x1098a551 */
  goto L_1098a551;
L_1098a4e6:;
  /* 1098a4e6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098a4e9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098a4ec mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1098a4f1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1098a4f3 not eax */
  EAX = (~(EAX));
  /* 1098a4f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098a4f8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1098a4fb mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1098a502 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1098a504 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098a507 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1098a50a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1098a511 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1098a514 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a517 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1098a51a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1098a51d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1098a520 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a523 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1098a526 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1098a529 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a52c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1098a530 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098a532 jne 0x1098a551 */
  if (!C.zf) goto L_1098a551;
  /* 1098a534 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098a537 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098a53a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1098a53f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1098a541 not eax */
  EAX = (~(EAX));
  /* 1098a543 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098a546 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1098a549 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1098a54b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098a54e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1098a551:;
  /* 1098a551 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1098a554 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1098a557 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1098a55a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1098a55d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1098a560 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1098a563 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1098a566 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1098a569 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1098a56c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_1098a56f:;
  /* 1098a56f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1098a572 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_1098a575:;
  /* 1098a575 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098a578 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1098a57b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098a57d jne 0x1098a58b */
  if (!C.zf) goto L_1098a58b;
  /* 1098a57f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098a582 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098a585 je 0x1098a69b */
  if (C.zf) goto L_1098a69b;
L_1098a58b:;
  /* 1098a58b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1098a58e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098a591 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1098a594 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1098a597 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1098a59a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098a59d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1098a5a0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1098a5a3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1098a5a6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098a5a9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1098a5ac mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098a5af mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1098a5b2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1098a5b5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1098a5b8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1098a5bb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1098a5be mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1098a5c1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1098a5c4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1098a5c7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1098a5ca cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098a5cd jne 0x1098a69b */
  if (!C.zf) goto L_1098a69b;
  /* 1098a5d3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098a5d7 jae 0x1098a634 */
  if (!C.cf) goto L_1098a634;
  /* 1098a5d9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1098a5dc add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a5df movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1098a5e3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1098a5e6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a5e9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1098a5ec add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1098a5ef mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1098a5f2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a5f5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1098a5f8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098a5fa jne 0x1098a612 */
  if (!C.zf) goto L_1098a612;
  /* 1098a5fc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1098a601 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1098a604 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1098a606 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098a609 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1098a60b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1098a60d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098a610 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1098a612:;
  /* 1098a612 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1098a617 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1098a61a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1098a61c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098a61f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1098a622 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1098a626 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1098a628 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098a62b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1098a62e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1098a632 jmp 0x1098a69b */
  goto L_1098a69b;
L_1098a634:;
  /* 1098a634 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1098a637 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a63a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1098a63e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1098a641 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a644 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1098a647 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1098a64a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1098a64d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a650 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1098a653 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098a655 jne 0x1098a672 */
  if (!C.zf) goto L_1098a672;
  /* 1098a657 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1098a65a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098a65d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1098a662 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1098a664 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098a667 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1098a66a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1098a66c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098a66f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1098a672:;
  /* 1098a672 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1098a675 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098a678 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1098a67d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1098a67f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098a682 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1098a685 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1098a68c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1098a68e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098a691 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1098a694 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1098a69b:;
  /* 1098a69b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1098a69e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098a6a1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1098a6a3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1098a6a6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a6a9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098a6ac mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1098a6af mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098a6b2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1098a6b4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098a6b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098a6ba mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1098a6bc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098a6bf cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098a6c2 jne 0x1098a829 */
  if (!C.zf) goto L_1098a829;
  /* 1098a6c8 cmp dword ptr [0x109b2fe0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b2fe0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098a6cf je 0x1098a818 */
  if (C.zf) goto L_1098a818;
  /* 1098a6d5 mov eax, dword ptr [0x109b2fd8] */
  EAX = (r32((uint32_t)(0x109b2fd8)));
  /* 1098a6da shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1098a6dd mov ecx, dword ptr [0x109b2fe0] */
  ECX = (r32((uint32_t)(0x109b2fe0)));
  /* 1098a6e3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1098a6e6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a6e8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1098a6eb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1098a6f0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1098a6f5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098a6f8 push eax */
  push32((uint32_t)(EAX));
  /* 1098a6f9 call dword ptr [0x109b433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b433c))), 0x1098a6ffu);
  /* 1098a6ff mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1098a704 mov ecx, dword ptr [0x109b2fd8] */
  ECX = (r32((uint32_t)(0x109b2fd8)));
  /* 1098a70a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1098a70c mov eax, dword ptr [0x109b2fe0] */
  EAX = (r32((uint32_t)(0x109b2fe0)));
  /* 1098a711 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1098a714 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1098a716 mov edx, dword ptr [0x109b2fe0] */
  EDX = (r32((uint32_t)(0x109b2fe0)));
  /* 1098a71c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1098a71f mov eax, dword ptr [0x109b2fe0] */
  EAX = (r32((uint32_t)(0x109b2fe0)));
  /* 1098a724 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1098a727 mov edx, dword ptr [0x109b2fd8] */
  EDX = (r32((uint32_t)(0x109b2fd8)));
  /* 1098a72d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1098a738 mov eax, dword ptr [0x109b2fe0] */
  EAX = (r32((uint32_t)(0x109b2fe0)));
  /* 1098a73d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1098a740 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1098a743 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1098a746 mov eax, dword ptr [0x109b2fe0] */
  EAX = (r32((uint32_t)(0x109b2fe0)));
  /* 1098a74b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1098a74e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1098a751 mov edx, dword ptr [0x109b2fe0] */
  EDX = (r32((uint32_t)(0x109b2fe0)));
  /* 1098a757 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1098a75a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1098a75e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098a760 jne 0x1098a776 */
  if (!C.zf) goto L_1098a776;
  /* 1098a762 mov edx, dword ptr [0x109b2fe0] */
  EDX = (r32((uint32_t)(0x109b2fe0)));
  /* 1098a768 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1098a76b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1098a76d mov ecx, dword ptr [0x109b2fe0] */
  ECX = (r32((uint32_t)(0x109b2fe0)));
  /* 1098a773 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1098a776:;
  /* 1098a776 mov edx, dword ptr [0x109b2fe0] */
  EDX = (r32((uint32_t)(0x109b2fe0)));
  /* 1098a77c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098a780 jne 0x1098a818 */
  if (!C.zf) goto L_1098a818;
  /* 1098a786 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1098a78b push 0 */
  push32((uint32_t)(0x0u));
  /* 1098a78d mov eax, dword ptr [0x109b2fe0] */
  EAX = (r32((uint32_t)(0x109b2fe0)));
  /* 1098a792 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1098a795 push ecx */
  push32((uint32_t)(ECX));
  /* 1098a796 call dword ptr [0x109b433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b433c))), 0x1098a79cu);
  /* 1098a79c mov edx, dword ptr [0x109b2fe0] */
  EDX = (r32((uint32_t)(0x109b2fe0)));
  /* 1098a7a2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1098a7a5 push eax */
  push32((uint32_t)(EAX));
  /* 1098a7a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098a7a8 mov ecx, dword ptr [0x109b2fec] */
  ECX = (r32((uint32_t)(0x109b2fec)));
  /* 1098a7ae push ecx */
  push32((uint32_t)(ECX));
  /* 1098a7af call dword ptr [0x109b4340] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4340))), 0x1098a7b5u);
  /* 1098a7b5 mov edx, dword ptr [0x109b2fe4] */
  EDX = (r32((uint32_t)(0x109b2fe4)));
  /* 1098a7bb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098a7be mov eax, dword ptr [0x109b2fe8] */
  EAX = (r32((uint32_t)(0x109b2fe8)));
  /* 1098a7c3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a7c5 mov ecx, dword ptr [0x109b2fe0] */
  ECX = (r32((uint32_t)(0x109b2fe0)));
  /* 1098a7cb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a7ce sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098a7d0 push eax */
  push32((uint32_t)(EAX));
  /* 1098a7d1 mov edx, dword ptr [0x109b2fe0] */
  EDX = (r32((uint32_t)(0x109b2fe0)));
  /* 1098a7d7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a7da push edx */
  push32((uint32_t)(EDX));
  /* 1098a7db mov eax, dword ptr [0x109b2fe0] */
  EAX = (r32((uint32_t)(0x109b2fe0)));
  /* 1098a7e0 push eax */
  push32((uint32_t)(EAX));
  /* 1098a7e1 call 0x1098dd90 */
  push32(0x1098a7e6u); f_1098dd90();
  /* 1098a7e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a7e9 mov ecx, dword ptr [0x109b2fe4] */
  ECX = (r32((uint32_t)(0x109b2fe4)));
  /* 1098a7ef sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098a7f2 mov dword ptr [0x109b2fe4], ecx */
  w32((uint32_t)(0x109b2fe4), (ECX));
  /* 1098a7f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098a7fb cmp edx, dword ptr [0x109b2fe0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x109b2fe0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098a801 jbe 0x1098a80c */
  if ((C.cf||C.zf)) goto L_1098a80c;
  /* 1098a803 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098a806 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098a809 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1098a80c:;
  /* 1098a80c mov ecx, dword ptr [0x109b2fe8] */
  ECX = (r32((uint32_t)(0x109b2fe8)));
  /* 1098a812 mov dword ptr [0x109b2fdc], ecx */
  w32((uint32_t)(0x109b2fdc), (ECX));
L_1098a818:;
  /* 1098a818 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098a81b mov dword ptr [0x109b2fe0], edx */
  w32((uint32_t)(0x109b2fe0), (EDX));
  /* 1098a821 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098a824 mov dword ptr [0x109b2fd8], eax */
  w32((uint32_t)(0x109b2fd8), (EAX));
L_1098a829:;
  /* 1098a829 mov esp, ebp */
  ESP = (EBP);
  /* 1098a82b pop ebp */
  EBP = (pop32());
  /* 1098a82c ret  */
  ESPCHK(0x1098a260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a830 @ 0x1098a830 (1334 bytes, 427 insns) */
void f_1098a830(void) {
  FTRACE(0x1098a830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098a830 push ebp */
  push32((uint32_t)(EBP));
  /* 1098a831 mov ebp, esp */
  EBP = (ESP);
  /* 1098a833 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098a836 push esi */
  push32((uint32_t)(ESI));
  /* 1098a837 mov eax, dword ptr [0x109b2fe4] */
  EAX = (r32((uint32_t)(0x109b2fe4)));
  /* 1098a83c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098a83f mov ecx, dword ptr [0x109b2fe8] */
  ECX = (r32((uint32_t)(0x109b2fe8)));
  /* 1098a845 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a847 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1098a84a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098a84d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a850 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1098a853 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1098a856 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1098a859 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1098a85c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098a85f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1098a862 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098a866 jge 0x1098a87c */
  if ((C.sf==C.of)) goto L_1098a87c;
  /* 1098a868 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1098a86b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098a86e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1098a870 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1098a873 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1098a87a jmp 0x1098a891 */
  goto L_1098a891;
L_1098a87c:;
  /* 1098a87c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1098a883 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098a886 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098a889 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1098a88c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1098a88e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_1098a891:;
  /* 1098a891 mov ecx, dword ptr [0x109b2fdc] */
  ECX = (r32((uint32_t)(0x109b2fdc)));
  /* 1098a897 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1098a89a:;
  /* 1098a89a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098a89d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098a8a0 jae 0x1098a8c6 */
  if (!C.cf) goto L_1098a8c6;
  /* 1098a8a2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098a8a5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098a8a8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1098a8aa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098a8ad mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1098a8b0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 1098a8b3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1098a8b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098a8b7 je 0x1098a8bb */
  if (C.zf) goto L_1098a8bb;
  /* 1098a8b9 jmp 0x1098a8c6 */
  goto L_1098a8c6;
L_1098a8bb:;
  /* 1098a8bb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098a8be add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a8c1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1098a8c4 jmp 0x1098a89a */
  goto L_1098a89a;
L_1098a8c6:;
  /* 1098a8c6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098a8c9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098a8cc jne 0x1098a9ad */
  if (!C.zf) goto L_1098a9ad;
  /* 1098a8d2 mov eax, dword ptr [0x109b2fe8] */
  EAX = (r32((uint32_t)(0x109b2fe8)));
  /* 1098a8d7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1098a8da:;
  /* 1098a8da mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098a8dd cmp ecx, dword ptr [0x109b2fdc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109b2fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098a8e3 jae 0x1098a909 */
  if (!C.cf) goto L_1098a909;
  /* 1098a8e5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098a8e8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098a8eb and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1098a8ed mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098a8f0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1098a8f3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 1098a8f6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1098a8f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098a8fa je 0x1098a8fe */
  if (C.zf) goto L_1098a8fe;
  /* 1098a8fc jmp 0x1098a909 */
  goto L_1098a909;
L_1098a8fe:;
  /* 1098a8fe mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098a901 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a904 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1098a907 jmp 0x1098a8da */
  goto L_1098a8da;
L_1098a909:;
  /* 1098a909 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098a90c cmp ecx, dword ptr [0x109b2fdc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109b2fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098a912 jne 0x1098a9ad */
  if (!C.zf) goto L_1098a9ad;
L_1098a918:;
  /* 1098a918 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098a91b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098a91e jae 0x1098a936 */
  if (!C.cf) goto L_1098a936;
  /* 1098a920 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098a923 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098a927 je 0x1098a92b */
  if (C.zf) goto L_1098a92b;
  /* 1098a929 jmp 0x1098a936 */
  goto L_1098a936;
L_1098a92b:;
  /* 1098a92b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098a92e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a931 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1098a934 jmp 0x1098a918 */
  goto L_1098a918;
L_1098a936:;
  /* 1098a936 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098a939 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098a93c jne 0x1098a987 */
  if (!C.zf) goto L_1098a987;
  /* 1098a93e mov eax, dword ptr [0x109b2fe8] */
  EAX = (r32((uint32_t)(0x109b2fe8)));
  /* 1098a943 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1098a946:;
  /* 1098a946 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098a949 cmp ecx, dword ptr [0x109b2fdc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109b2fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098a94f jae 0x1098a967 */
  if (!C.cf) goto L_1098a967;
  /* 1098a951 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098a954 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098a958 je 0x1098a95c */
  if (C.zf) goto L_1098a95c;
  /* 1098a95a jmp 0x1098a967 */
  goto L_1098a967;
L_1098a95c:;
  /* 1098a95c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098a95f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a962 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1098a965 jmp 0x1098a946 */
  goto L_1098a946;
L_1098a967:;
  /* 1098a967 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098a96a cmp ecx, dword ptr [0x109b2fdc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109b2fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098a970 jne 0x1098a987 */
  if (!C.zf) goto L_1098a987;
  /* 1098a972 call 0x1098ad70 */
  push32(0x1098a977u); f_1098ad70();
  /* 1098a977 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1098a97a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098a97e jne 0x1098a987 */
  if (!C.zf) goto L_1098a987;
  /* 1098a980 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098a982 jmp 0x1098ad61 */
  goto L_1098ad61;
L_1098a987:;
  /* 1098a987 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098a98a push edx */
  push32((uint32_t)(EDX));
  /* 1098a98b call 0x1098ae80 */
  push32(0x1098a990u); f_1098ae80();
  /* 1098a990 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098a993 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098a996 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1098a999 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1098a99b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098a99e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1098a9a1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098a9a4 jne 0x1098a9ad */
  if (!C.zf) goto L_1098a9ad;
  /* 1098a9a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098a9a8 jmp 0x1098ad61 */
  goto L_1098ad61;
L_1098a9ad:;
  /* 1098a9ad mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098a9b0 mov dword ptr [0x109b2fdc], edx */
  w32((uint32_t)(0x109b2fdc), (EDX));
  /* 1098a9b6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098a9b9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1098a9bc mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1098a9bf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1098a9c2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1098a9c4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1098a9c7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098a9cb je 0x1098a9f0 */
  if (C.zf) goto L_1098a9f0;
  /* 1098a9cd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098a9d0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1098a9d3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098a9d6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1098a9da mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098a9dd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1098a9e0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1098a9e3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1098a9ea or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1098a9ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098a9ee jne 0x1098aa25 */
  if (!C.zf) goto L_1098aa25;
L_1098a9f0:;
  /* 1098a9f0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_1098a9f7:;
  /* 1098a9f7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098a9fa mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1098a9fd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098aa00 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1098aa04 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098aa07 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1098aa0a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1098aa0d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1098aa14 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1098aa16 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098aa18 jne 0x1098aa25 */
  if (!C.zf) goto L_1098aa25;
  /* 1098aa1a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098aa1d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098aa20 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1098aa23 jmp 0x1098a9f7 */
  goto L_1098a9f7;
L_1098aa25:;
  /* 1098aa25 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098aa28 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098aa2e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1098aa31 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1098aa38 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1098aa3b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1098aa42 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098aa45 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1098aa48 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098aa4b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1098aa4f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1098aa52 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098aa56 jne 0x1098aa72 */
  if (!C.zf) goto L_1098aa72;
  /* 1098aa58 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1098aa5f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098aa62 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1098aa65 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1098aa68 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1098aa6f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_1098aa72:;
  /* 1098aa72 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098aa76 jl 0x1098aa8b */
  if ((C.sf!=C.of)) goto L_1098aa8b;
  /* 1098aa78 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1098aa7b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1098aa7d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1098aa80 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098aa83 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098aa86 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1098aa89 jmp 0x1098aa72 */
  goto L_1098aa72;
L_1098aa8b:;
  /* 1098aa8b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098aa8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098aa91 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 1098aa95 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1098aa98 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098aa9b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1098aa9d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098aaa0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1098aaa3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098aaa6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1098aaa9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098aaac mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1098aaaf cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098aab3 jle 0x1098aabc */
  if ((C.zf||C.sf!=C.of)) goto L_1098aabc;
  /* 1098aab5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1098aabc:;
  /* 1098aabc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098aabf cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098aac2 je 0x1098ace0 */
  if (C.zf) goto L_1098ace0;
  /* 1098aac8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098aacb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098aace mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1098aad1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098aad4 jne 0x1098abaa */
  if (!C.zf) goto L_1098abaa;
  /* 1098aada cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098aade jge 0x1098ab3f */
  if ((C.sf==C.of)) goto L_1098ab3f;
  /* 1098aae0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1098aae5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098aae8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1098aaea not eax */
  EAX = (~(EAX));
  /* 1098aaec mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098aaef mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1098aaf2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1098aaf6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1098aaf8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098aafb mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1098aafe mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1098ab02 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1098ab05 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ab08 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1098ab0b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1098ab0e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1098ab11 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ab14 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1098ab17 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1098ab1a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ab1d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1098ab21 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098ab23 jne 0x1098ab3d */
  if (!C.zf) goto L_1098ab3d;
  /* 1098ab25 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1098ab2a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098ab2d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1098ab2f not eax */
  EAX = (~(EAX));
  /* 1098ab31 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098ab34 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1098ab36 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1098ab38 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098ab3b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1098ab3d:;
  /* 1098ab3d jmp 0x1098abaa */
  goto L_1098abaa;
L_1098ab3f:;
  /* 1098ab3f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098ab42 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098ab45 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1098ab4a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1098ab4c not edx */
  EDX = (~(EDX));
  /* 1098ab4e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098ab51 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1098ab54 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1098ab5b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1098ab5d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098ab60 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1098ab63 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1098ab6a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1098ab6d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ab70 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1098ab73 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1098ab76 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1098ab79 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ab7c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1098ab7f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1098ab82 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ab85 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1098ab89 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098ab8b jne 0x1098abaa */
  if (!C.zf) goto L_1098abaa;
  /* 1098ab8d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098ab90 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098ab93 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1098ab98 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1098ab9a not edx */
  EDX = (~(EDX));
  /* 1098ab9c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098ab9f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1098aba2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1098aba4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098aba7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1098abaa:;
  /* 1098abaa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098abad mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1098abb0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098abb3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1098abb6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1098abb9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098abbc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1098abbf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098abc2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1098abc5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1098abc8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098abcc je 0x1098ace0 */
  if (C.zf) goto L_1098ace0;
  /* 1098abd2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098abd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098abd8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1098abdb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1098abde mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098abe1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098abe4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1098abe7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1098abea mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098abed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098abf0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1098abf3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098abf6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098abf9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1098abfc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098abff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1098ac02 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098ac05 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1098ac08 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098ac0b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098ac0e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1098ac11 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ac14 jne 0x1098ace0 */
  if (!C.zf) goto L_1098ace0;
  /* 1098ac1a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ac1e jge 0x1098ac7a */
  if ((C.sf==C.of)) goto L_1098ac7a;
  /* 1098ac20 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1098ac23 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ac26 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1098ac2a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1098ac2d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ac30 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1098ac33 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1098ac35 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1098ac38 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ac3b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1098ac3e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098ac40 jne 0x1098ac58 */
  if (!C.zf) goto L_1098ac58;
  /* 1098ac42 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1098ac47 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098ac4a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1098ac4c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098ac4f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1098ac51 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1098ac53 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098ac56 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1098ac58:;
  /* 1098ac58 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1098ac5d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098ac60 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1098ac62 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098ac65 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1098ac68 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1098ac6c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1098ac6e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098ac71 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1098ac74 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1098ac78 jmp 0x1098ace0 */
  goto L_1098ace0;
L_1098ac7a:;
  /* 1098ac7a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1098ac7d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ac80 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1098ac84 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1098ac87 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ac8a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1098ac8d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1098ac8f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1098ac92 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ac95 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1098ac98 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098ac9a jne 0x1098acb7 */
  if (!C.zf) goto L_1098acb7;
  /* 1098ac9c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098ac9f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098aca2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1098aca7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1098aca9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098acac mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1098acaf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1098acb1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098acb4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1098acb7:;
  /* 1098acb7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098acba sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098acbd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1098acc2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1098acc4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098acc7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1098acca mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1098acd1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1098acd3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098acd6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1098acd9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1098ace0:;
  /* 1098ace0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ace4 je 0x1098acfa */
  if (C.zf) goto L_1098acfa;
  /* 1098ace6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098ace9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098acec mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1098acee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098acf1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098acf4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098acf7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1098acfa:;
  /* 1098acfa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098acfd add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ad00 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1098ad03 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1098ad06 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ad09 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098ad0c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1098ad0e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1098ad11 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ad14 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098ad17 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ad1a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1098ad1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098ad20 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1098ad22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098ad25 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1098ad27 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ad2a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098ad2d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1098ad2f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098ad31 jne 0x1098ad53 */
  if (!C.zf) goto L_1098ad53;
  /* 1098ad33 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098ad36 cmp eax, dword ptr [0x109b2fe0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109b2fe0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ad3c jne 0x1098ad53 */
  if (!C.zf) goto L_1098ad53;
  /* 1098ad3e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098ad41 cmp ecx, dword ptr [0x109b2fd8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109b2fd8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ad47 jne 0x1098ad53 */
  if (!C.zf) goto L_1098ad53;
  /* 1098ad49 mov dword ptr [0x109b2fe0], 0 */
  w32((uint32_t)(0x109b2fe0), (0x0u));
L_1098ad53:;
  /* 1098ad53 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1098ad56 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098ad59 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1098ad5b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098ad5e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1098ad61:;
  /* 1098ad61 pop esi */
  ESI = (pop32());
  /* 1098ad62 mov esp, ebp */
  ESP = (EBP);
  /* 1098ad64 pop ebp */
  EBP = (pop32());
  /* 1098ad65 ret  */
  ESPCHK(0x1098a830u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad70 @ 0x1098ad70 (271 bytes, 78 insns) */
void f_1098ad70(void) {
  FTRACE(0x1098ad70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098ad70 push ebp */
  push32((uint32_t)(EBP));
  /* 1098ad71 mov ebp, esp */
  EBP = (ESP);
  /* 1098ad73 push ecx */
  push32((uint32_t)(ECX));
  /* 1098ad74 mov eax, dword ptr [0x109b2fe4] */
  EAX = (r32((uint32_t)(0x109b2fe4)));
  /* 1098ad79 cmp eax, dword ptr [0x109b2fc8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109b2fc8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ad7f jne 0x1098adcb */
  if (!C.zf) goto L_1098adcb;
  /* 1098ad81 mov ecx, dword ptr [0x109b2fc8] */
  ECX = (r32((uint32_t)(0x109b2fc8)));
  /* 1098ad87 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ad8a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098ad8d push ecx */
  push32((uint32_t)(ECX));
  /* 1098ad8e mov edx, dword ptr [0x109b2fe8] */
  EDX = (r32((uint32_t)(0x109b2fe8)));
  /* 1098ad94 push edx */
  push32((uint32_t)(EDX));
  /* 1098ad95 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098ad97 mov eax, dword ptr [0x109b2fec] */
  EAX = (r32((uint32_t)(0x109b2fec)));
  /* 1098ad9c push eax */
  push32((uint32_t)(EAX));
  /* 1098ad9d call dword ptr [0x109b431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b431c))), 0x1098ada3u);
  /* 1098ada3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1098ada6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098adaa jne 0x1098adb3 */
  if (!C.zf) goto L_1098adb3;
  /* 1098adac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098adae jmp 0x1098ae7b */
  goto L_1098ae7b;
L_1098adb3:;
  /* 1098adb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098adb6 mov dword ptr [0x109b2fe8], ecx */
  w32((uint32_t)(0x109b2fe8), (ECX));
  /* 1098adbc mov edx, dword ptr [0x109b2fc8] */
  EDX = (r32((uint32_t)(0x109b2fc8)));
  /* 1098adc2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098adc5 mov dword ptr [0x109b2fc8], edx */
  w32((uint32_t)(0x109b2fc8), (EDX));
L_1098adcb:;
  /* 1098adcb mov eax, dword ptr [0x109b2fe4] */
  EAX = (r32((uint32_t)(0x109b2fe4)));
  /* 1098add0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098add3 mov ecx, dword ptr [0x109b2fe8] */
  ECX = (r32((uint32_t)(0x109b2fe8)));
  /* 1098add9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098addb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1098adde push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1098ade3 push 8 */
  push32((uint32_t)(0x8u));
  /* 1098ade5 mov edx, dword ptr [0x109b2fec] */
  EDX = (r32((uint32_t)(0x109b2fec)));
  /* 1098adeb push edx */
  push32((uint32_t)(EDX));
  /* 1098adec call dword ptr [0x109b4320] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4320))), 0x1098adf2u);
  /* 1098adf2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098adf5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 1098adf8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098adfb cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098adff jne 0x1098ae05 */
  if (!C.zf) goto L_1098ae05;
  /* 1098ae01 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098ae03 jmp 0x1098ae7b */
  goto L_1098ae7b;
L_1098ae05:;
  /* 1098ae05 push 4 */
  push32((uint32_t)(0x4u));
  /* 1098ae07 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1098ae0c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1098ae11 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098ae13 call dword ptr [0x109b4318] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4318))), 0x1098ae19u);
  /* 1098ae19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098ae1c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1098ae1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098ae22 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ae26 jne 0x1098ae42 */
  if (!C.zf) goto L_1098ae42;
  /* 1098ae28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098ae2b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1098ae2e push ecx */
  push32((uint32_t)(ECX));
  /* 1098ae2f push 0 */
  push32((uint32_t)(0x0u));
  /* 1098ae31 mov edx, dword ptr [0x109b2fec] */
  EDX = (r32((uint32_t)(0x109b2fec)));
  /* 1098ae37 push edx */
  push32((uint32_t)(EDX));
  /* 1098ae38 call dword ptr [0x109b4340] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4340))), 0x1098ae3eu);
  /* 1098ae3e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098ae40 jmp 0x1098ae7b */
  goto L_1098ae7b;
L_1098ae42:;
  /* 1098ae42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098ae45 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1098ae4b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098ae4e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1098ae55 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098ae58 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1098ae5f mov eax, dword ptr [0x109b2fe4] */
  EAX = (r32((uint32_t)(0x109b2fe4)));
  /* 1098ae64 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ae67 mov dword ptr [0x109b2fe4], eax */
  w32((uint32_t)(0x109b2fe4), (EAX));
  /* 1098ae6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098ae6f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1098ae72 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 1098ae78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1098ae7b:;
  /* 1098ae7b mov esp, ebp */
  ESP = (EBP);
  /* 1098ae7d pop ebp */
  EBP = (pop32());
  /* 1098ae7e ret  */
  ESPCHK(0x1098ad70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae80 @ 0x1098ae80 (494 bytes, 149 insns) */
void f_1098ae80(void) {
  FTRACE(0x1098ae80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098ae80 push ebp */
  push32((uint32_t)(EBP));
  /* 1098ae81 mov ebp, esp */
  EBP = (ESP);
  /* 1098ae83 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098ae86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098ae89 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1098ae8c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1098ae8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098ae92 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1098ae95 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1098ae98 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1098ae9f:;
  /* 1098ae9f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098aea3 jl 0x1098aeb8 */
  if ((C.sf!=C.of)) goto L_1098aeb8;
  /* 1098aea5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098aea8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1098aeaa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1098aead mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1098aeb0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098aeb3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1098aeb6 jmp 0x1098ae9f */
  goto L_1098ae9f;
L_1098aeb8:;
  /* 1098aeb8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1098aebb imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098aec1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098aec4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1098aecb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1098aece mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1098aed5 jmp 0x1098aee0 */
  goto L_1098aee0;
L_1098aed7:;
  /* 1098aed7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098aeda add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098aedd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1098aee0:;
  /* 1098aee0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098aee4 jge 0x1098af06 */
  if ((C.sf==C.of)) goto L_1098af06;
  /* 1098aee6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098aee9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098aeec lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1098aeef mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1098aef2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098aef5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098aef8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1098aefb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098aefe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098af01 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1098af04 jmp 0x1098aed7 */
  goto L_1098aed7;
L_1098af06:;
  /* 1098af06 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1098af09 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1098af0c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098af0f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1098af12 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098af14 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1098af17 push 4 */
  push32((uint32_t)(0x4u));
  /* 1098af19 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1098af1e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1098af23 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098af26 push edx */
  push32((uint32_t)(EDX));
  /* 1098af27 call dword ptr [0x109b4318] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4318))), 0x1098af2du);
  /* 1098af2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098af2f jne 0x1098af39 */
  if (!C.zf) goto L_1098af39;
  /* 1098af31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1098af34 jmp 0x1098b06a */
  goto L_1098b06a;
L_1098af39:;
  /* 1098af39 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098af3c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098af41 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1098af44 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098af47 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1098af4a jmp 0x1098af58 */
  goto L_1098af58;
L_1098af4c:;
  /* 1098af4c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098af4f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098af55 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1098af58:;
  /* 1098af58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098af5b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098af5e ja 0x1098afbd */
  if ((!C.cf&&!C.zf)) goto L_1098afbd;
  /* 1098af60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098af63 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1098af6a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098af6d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 1098af77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098af7a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098af7d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1098af80 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098af83 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1098af89 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098af8c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098af92 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098af95 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1098af98 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098af9b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098afa1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098afa4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1098afa7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098afaa add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098afaf mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1098afb2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098afb5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1098afbb jmp 0x1098af4c */
  goto L_1098af4c;
L_1098afbd:;
  /* 1098afbd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098afc0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098afc6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1098afc9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098afcc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098afcf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098afd2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1098afd5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098afd8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1098afdb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1098afde mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098afe1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098afe4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1098afe7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1098afea add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098afed mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098aff0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1098aff3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098aff6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1098aff9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1098affc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098afff mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098b002 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1098b005 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1098b008 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098b00b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 1098b013 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1098b016 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098b019 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 1098b024 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098b027 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1098b02b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098b02e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 1098b031 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1098b034 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098b037 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1098b03a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098b03c jne 0x1098b04d */
  if (!C.zf) goto L_1098b04d;
  /* 1098b03e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098b041 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1098b044 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1098b047 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098b04a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1098b04d:;
  /* 1098b04d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1098b052 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1098b055 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1098b057 not edx */
  EDX = (~(EDX));
  /* 1098b059 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098b05c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1098b05f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1098b061 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098b064 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1098b067 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1098b06a:;
  /* 1098b06a mov esp, ebp */
  ESP = (EBP);
  /* 1098b06c pop ebp */
  EBP = (pop32());
  /* 1098b06d ret  */
  ESPCHK(0x1098ae80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b070 @ 0x1098b070 (1515 bytes, 489 insns) */
void f_1098b070(void) {
  FTRACE(0x1098b070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098b070 push ebp */
  push32((uint32_t)(EBP));
  /* 1098b071 mov ebp, esp */
  EBP = (ESP);
  /* 1098b073 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098b076 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1098b079 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b07c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1098b07e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1098b081 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098b084 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1098b087 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1098b08a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098b08d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098b090 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098b093 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1098b096 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098b099 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1098b09c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1098b09f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098b0a2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098b0a8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b0ab lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1098b0b2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1098b0b5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098b0b8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098b0bb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1098b0be mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098b0c1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1098b0c3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098b0c6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1098b0c9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098b0cc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b0cf mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1098b0d2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098b0d5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1098b0d7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1098b0da mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1098b0dd cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098b0e0 jle 0x1098b396 */
  if ((C.zf||C.sf!=C.of)) goto L_1098b396;
  /* 1098b0e6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098b0e9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1098b0ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098b0ee jne 0x1098b0fb */
  if (!C.zf) goto L_1098b0fb;
  /* 1098b0f0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1098b0f3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b0f6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098b0f9 jle 0x1098b102 */
  if ((C.zf||C.sf!=C.of)) goto L_1098b102;
L_1098b0fb:;
  /* 1098b0fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098b0fd jmp 0x1098b657 */
  goto L_1098b657;
L_1098b102:;
  /* 1098b102 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098b105 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1098b108 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098b10b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1098b10e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098b112 jbe 0x1098b11b */
  if ((C.cf||C.zf)) goto L_1098b11b;
  /* 1098b114 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1098b11b:;
  /* 1098b11b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098b11e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098b121 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1098b124 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098b127 jne 0x1098b1fd */
  if (!C.zf) goto L_1098b1fd;
  /* 1098b12d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098b131 jae 0x1098b192 */
  if (!C.cf) goto L_1098b192;
  /* 1098b133 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1098b138 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098b13b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1098b13d not edx */
  EDX = (~(EDX));
  /* 1098b13f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098b142 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b145 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1098b149 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1098b14b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098b14e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b151 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1098b155 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b158 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b15b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1098b15e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1098b161 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b164 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b167 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1098b16a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b16d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b170 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1098b174 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098b176 jne 0x1098b190 */
  if (!C.zf) goto L_1098b190;
  /* 1098b178 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1098b17d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098b180 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1098b182 not edx */
  EDX = (~(EDX));
  /* 1098b184 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098b187 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1098b189 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1098b18b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098b18e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1098b190:;
  /* 1098b190 jmp 0x1098b1fd */
  goto L_1098b1fd;
L_1098b192:;
  /* 1098b192 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098b195 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098b198 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1098b19d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1098b19f not eax */
  EAX = (~(EAX));
  /* 1098b1a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098b1a4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b1a7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1098b1ae and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1098b1b0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098b1b3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b1b6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1098b1bd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b1c0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b1c3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1098b1c6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1098b1c9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b1cc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b1cf mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1098b1d2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b1d5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b1d8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1098b1dc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098b1de jne 0x1098b1fd */
  if (!C.zf) goto L_1098b1fd;
  /* 1098b1e0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098b1e3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098b1e6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1098b1eb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1098b1ed not eax */
  EAX = (~(EAX));
  /* 1098b1ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098b1f2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1098b1f5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1098b1f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098b1fa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1098b1fd:;
  /* 1098b1fd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098b200 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1098b203 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098b206 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1098b209 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1098b20c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098b20f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1098b212 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098b215 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1098b218 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1098b21b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1098b21e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b221 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098b224 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1098b227 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098b22b jle 0x1098b377 */
  if ((C.zf||C.sf!=C.of)) goto L_1098b377;
  /* 1098b231 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098b234 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b237 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1098b23a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098b23d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1098b240 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098b243 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1098b246 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098b24a jbe 0x1098b253 */
  if ((C.cf||C.zf)) goto L_1098b253;
  /* 1098b24c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1098b253:;
  /* 1098b253 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098b256 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098b259 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1098b25c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1098b25f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098b262 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098b265 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1098b268 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1098b26b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098b26e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098b271 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1098b274 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098b277 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098b27a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1098b27d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098b280 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1098b283 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098b286 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1098b289 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098b28c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098b28f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1098b292 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098b295 jne 0x1098b363 */
  if (!C.zf) goto L_1098b363;
  /* 1098b29b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098b29f jae 0x1098b2fc */
  if (!C.cf) goto L_1098b2fc;
  /* 1098b2a1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b2a4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b2a7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1098b2ab mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b2ae add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b2b1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1098b2b4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1098b2b7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b2ba add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b2bd mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1098b2c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098b2c2 jne 0x1098b2da */
  if (!C.zf) goto L_1098b2da;
  /* 1098b2c4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1098b2c9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098b2cc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1098b2ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098b2d1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1098b2d3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1098b2d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098b2d8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1098b2da:;
  /* 1098b2da mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1098b2df mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098b2e2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1098b2e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098b2e7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b2ea mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1098b2ee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1098b2f0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098b2f3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b2f6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1098b2fa jmp 0x1098b363 */
  goto L_1098b363;
L_1098b2fc:;
  /* 1098b2fc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b2ff add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b302 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1098b306 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b309 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b30c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1098b30f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1098b312 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b315 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b318 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1098b31b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098b31d jne 0x1098b33a */
  if (!C.zf) goto L_1098b33a;
  /* 1098b31f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098b322 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098b325 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1098b32a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1098b32c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098b32f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1098b332 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1098b334 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098b337 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1098b33a:;
  /* 1098b33a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098b33d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098b340 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1098b345 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1098b347 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098b34a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b34d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1098b354 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1098b356 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098b359 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b35c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1098b363:;
  /* 1098b363 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098b366 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098b369 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1098b36b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098b36e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b371 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098b374 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_1098b377:;
  /* 1098b377 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1098b37a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b37d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098b380 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1098b382 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1098b385 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b388 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098b38b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b38e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1098b391 jmp 0x1098b652 */
  goto L_1098b652;
L_1098b396:;
  /* 1098b396 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1098b399 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098b39c jge 0x1098b652 */
  if ((C.sf==C.of)) goto L_1098b652;
  /* 1098b3a2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1098b3a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b3a8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098b3ab mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1098b3ad mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1098b3b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b3b3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098b3b6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b3b9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1098b3bc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098b3bf add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b3c2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1098b3c5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1098b3c8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098b3cb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1098b3ce mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1098b3d1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1098b3d4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098b3d7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1098b3da cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098b3de jbe 0x1098b3e7 */
  if ((C.cf||C.zf)) goto L_1098b3e7;
  /* 1098b3e0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1098b3e7:;
  /* 1098b3e7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098b3ea and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1098b3ed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098b3ef jne 0x1098b530 */
  if (!C.zf) goto L_1098b530;
  /* 1098b3f5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098b3f8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1098b3fb sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098b3fe mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1098b401 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098b405 jbe 0x1098b40e */
  if ((C.cf||C.zf)) goto L_1098b40e;
  /* 1098b407 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1098b40e:;
  /* 1098b40e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098b411 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098b414 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1098b417 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098b41a jne 0x1098b4f0 */
  if (!C.zf) goto L_1098b4f0;
  /* 1098b420 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098b424 jae 0x1098b485 */
  if (!C.cf) goto L_1098b485;
  /* 1098b426 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1098b42b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098b42e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1098b430 not edx */
  EDX = (~(EDX));
  /* 1098b432 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098b435 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b438 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1098b43c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1098b43e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098b441 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b444 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1098b448 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b44b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b44e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1098b451 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1098b454 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b457 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b45a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1098b45d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b460 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b463 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1098b467 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098b469 jne 0x1098b483 */
  if (!C.zf) goto L_1098b483;
  /* 1098b46b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1098b470 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098b473 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1098b475 not edx */
  EDX = (~(EDX));
  /* 1098b477 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098b47a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1098b47c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1098b47e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098b481 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1098b483:;
  /* 1098b483 jmp 0x1098b4f0 */
  goto L_1098b4f0;
L_1098b485:;
  /* 1098b485 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098b488 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098b48b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1098b490 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1098b492 not eax */
  EAX = (~(EAX));
  /* 1098b494 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098b497 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b49a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1098b4a1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1098b4a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098b4a6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b4a9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1098b4b0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b4b3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b4b6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1098b4b9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1098b4bc mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b4bf add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b4c2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1098b4c5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b4c8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b4cb movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1098b4cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098b4d1 jne 0x1098b4f0 */
  if (!C.zf) goto L_1098b4f0;
  /* 1098b4d3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098b4d6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098b4d9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1098b4de shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1098b4e0 not eax */
  EAX = (~(EAX));
  /* 1098b4e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098b4e5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1098b4e8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1098b4ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098b4ed mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1098b4f0:;
  /* 1098b4f0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098b4f3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1098b4f6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098b4f9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1098b4fc mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1098b4ff mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098b502 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1098b505 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098b508 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1098b50b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1098b50e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1098b511 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b514 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1098b517 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1098b51a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1098b51d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098b520 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1098b523 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098b527 jbe 0x1098b530 */
  if ((C.cf||C.zf)) goto L_1098b530;
  /* 1098b529 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1098b530:;
  /* 1098b530 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098b533 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098b536 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1098b539 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1098b53c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098b53f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098b542 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1098b545 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1098b548 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098b54b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098b54e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1098b551 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098b554 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098b557 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1098b55a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098b55d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1098b560 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098b563 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1098b566 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098b569 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098b56c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1098b56f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098b572 jne 0x1098b63e */
  if (!C.zf) goto L_1098b63e;
  /* 1098b578 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098b57c jae 0x1098b5d8 */
  if (!C.cf) goto L_1098b5d8;
  /* 1098b57e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b581 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b584 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1098b588 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b58b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b58e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1098b591 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1098b593 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b596 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b599 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1098b59c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098b59e jne 0x1098b5b6 */
  if (!C.zf) goto L_1098b5b6;
  /* 1098b5a0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1098b5a5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098b5a8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1098b5aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098b5ad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1098b5af or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1098b5b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098b5b4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1098b5b6:;
  /* 1098b5b6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1098b5bb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098b5be shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1098b5c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098b5c3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b5c6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1098b5ca or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1098b5cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098b5cf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b5d2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1098b5d6 jmp 0x1098b63e */
  goto L_1098b63e;
L_1098b5d8:;
  /* 1098b5d8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b5db add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b5de movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1098b5e2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b5e5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b5e8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1098b5eb add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1098b5ed mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b5f0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b5f3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1098b5f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098b5f8 jne 0x1098b615 */
  if (!C.zf) goto L_1098b615;
  /* 1098b5fa mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098b5fd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098b600 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1098b605 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1098b607 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098b60a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1098b60d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1098b60f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098b612 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1098b615:;
  /* 1098b615 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098b618 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098b61b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1098b620 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1098b622 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098b625 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b628 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1098b62f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1098b631 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098b634 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098b637 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1098b63e:;
  /* 1098b63e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098b641 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1098b644 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1098b646 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098b649 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b64c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1098b64f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1098b652:;
  /* 1098b652 mov eax, 1 */
  EAX = (0x1u);
L_1098b657:;
  /* 1098b657 mov esp, ebp */
  ESP = (EBP);
  /* 1098b659 pop ebp */
  EBP = (pop32());
  /* 1098b65a ret  */
  ESPCHK(0x1098b070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b660 @ 0x1098b660 (304 bytes, 79 insns) */
void f_1098b660(void) {
  FTRACE(0x1098b660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098b660 push ebp */
  push32((uint32_t)(EBP));
  /* 1098b661 mov ebp, esp */
  EBP = (ESP);
  /* 1098b663 push ecx */
  push32((uint32_t)(ECX));
  /* 1098b664 cmp dword ptr [0x109b2fe0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b2fe0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098b66b je 0x1098b78c */
  if (C.zf) goto L_1098b78c;
  /* 1098b671 mov eax, dword ptr [0x109b2fd8] */
  EAX = (r32((uint32_t)(0x109b2fd8)));
  /* 1098b676 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1098b679 mov ecx, dword ptr [0x109b2fe0] */
  ECX = (r32((uint32_t)(0x109b2fe0)));
  /* 1098b67f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1098b682 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b684 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1098b687 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1098b68c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1098b691 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098b694 push eax */
  push32((uint32_t)(EAX));
  /* 1098b695 call dword ptr [0x109b433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b433c))), 0x1098b69bu);
  /* 1098b69b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1098b6a0 mov ecx, dword ptr [0x109b2fd8] */
  ECX = (r32((uint32_t)(0x109b2fd8)));
  /* 1098b6a6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1098b6a8 mov eax, dword ptr [0x109b2fe0] */
  EAX = (r32((uint32_t)(0x109b2fe0)));
  /* 1098b6ad mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1098b6b0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1098b6b2 mov edx, dword ptr [0x109b2fe0] */
  EDX = (r32((uint32_t)(0x109b2fe0)));
  /* 1098b6b8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1098b6bb mov eax, dword ptr [0x109b2fe0] */
  EAX = (r32((uint32_t)(0x109b2fe0)));
  /* 1098b6c0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1098b6c3 mov edx, dword ptr [0x109b2fd8] */
  EDX = (r32((uint32_t)(0x109b2fd8)));
  /* 1098b6c9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1098b6d4 mov eax, dword ptr [0x109b2fe0] */
  EAX = (r32((uint32_t)(0x109b2fe0)));
  /* 1098b6d9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1098b6dc mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1098b6df sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1098b6e2 mov eax, dword ptr [0x109b2fe0] */
  EAX = (r32((uint32_t)(0x109b2fe0)));
  /* 1098b6e7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1098b6ea mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1098b6ed mov edx, dword ptr [0x109b2fe0] */
  EDX = (r32((uint32_t)(0x109b2fe0)));
  /* 1098b6f3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1098b6f6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1098b6fa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098b6fc jne 0x1098b712 */
  if (!C.zf) goto L_1098b712;
  /* 1098b6fe mov edx, dword ptr [0x109b2fe0] */
  EDX = (r32((uint32_t)(0x109b2fe0)));
  /* 1098b704 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1098b707 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1098b709 mov ecx, dword ptr [0x109b2fe0] */
  ECX = (r32((uint32_t)(0x109b2fe0)));
  /* 1098b70f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1098b712:;
  /* 1098b712 mov edx, dword ptr [0x109b2fe0] */
  EDX = (r32((uint32_t)(0x109b2fe0)));
  /* 1098b718 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098b71c jne 0x1098b782 */
  if (!C.zf) goto L_1098b782;
  /* 1098b71e cmp dword ptr [0x109b2fe4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109b2fe4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098b725 jle 0x1098b782 */
  if ((C.zf||C.sf!=C.of)) goto L_1098b782;
  /* 1098b727 mov eax, dword ptr [0x109b2fe0] */
  EAX = (r32((uint32_t)(0x109b2fe0)));
  /* 1098b72c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1098b72f push ecx */
  push32((uint32_t)(ECX));
  /* 1098b730 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098b732 mov edx, dword ptr [0x109b2fec] */
  EDX = (r32((uint32_t)(0x109b2fec)));
  /* 1098b738 push edx */
  push32((uint32_t)(EDX));
  /* 1098b739 call dword ptr [0x109b4340] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4340))), 0x1098b73fu);
  /* 1098b73f mov eax, dword ptr [0x109b2fe4] */
  EAX = (r32((uint32_t)(0x109b2fe4)));
  /* 1098b744 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098b747 mov ecx, dword ptr [0x109b2fe8] */
  ECX = (r32((uint32_t)(0x109b2fe8)));
  /* 1098b74d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b74f mov edx, dword ptr [0x109b2fe0] */
  EDX = (r32((uint32_t)(0x109b2fe0)));
  /* 1098b755 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b758 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098b75a push ecx */
  push32((uint32_t)(ECX));
  /* 1098b75b mov eax, dword ptr [0x109b2fe0] */
  EAX = (r32((uint32_t)(0x109b2fe0)));
  /* 1098b760 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b763 push eax */
  push32((uint32_t)(EAX));
  /* 1098b764 mov ecx, dword ptr [0x109b2fe0] */
  ECX = (r32((uint32_t)(0x109b2fe0)));
  /* 1098b76a push ecx */
  push32((uint32_t)(ECX));
  /* 1098b76b call 0x1098dd90 */
  push32(0x1098b770u); f_1098dd90();
  /* 1098b770 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b773 mov edx, dword ptr [0x109b2fe4] */
  EDX = (r32((uint32_t)(0x109b2fe4)));
  /* 1098b779 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098b77c mov dword ptr [0x109b2fe4], edx */
  w32((uint32_t)(0x109b2fe4), (EDX));
L_1098b782:;
  /* 1098b782 mov dword ptr [0x109b2fe0], 0 */
  w32((uint32_t)(0x109b2fe0), (0x0u));
L_1098b78c:;
  /* 1098b78c mov esp, ebp */
  ESP = (EBP);
  /* 1098b78e pop ebp */
  EBP = (pop32());
  /* 1098b78f ret  */
  ESPCHK(0x1098b660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b790 @ 0x1098b790 (1565 bytes, 343 insns) */
void f_1098b790(void) {
  FTRACE(0x1098b790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098b790 push ebp */
  push32((uint32_t)(EBP));
  /* 1098b791 mov ebp, esp */
  EBP = (ESP);
  /* 1098b793 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098b799 mov eax, dword ptr [0x109b2fe4] */
  EAX = (r32((uint32_t)(0x109b2fe4)));
  /* 1098b79e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098b7a1 push eax */
  push32((uint32_t)(EAX));
  /* 1098b7a2 mov ecx, dword ptr [0x109b2fe8] */
  ECX = (r32((uint32_t)(0x109b2fe8)));
  /* 1098b7a8 push ecx */
  push32((uint32_t)(ECX));
  /* 1098b7a9 call dword ptr [0x109b43b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43b4))), 0x1098b7afu);
  /* 1098b7af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098b7b1 je 0x1098b7bb */
  if (C.zf) goto L_1098b7bb;
  /* 1098b7b3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1098b7b6 jmp 0x1098bda9 */
  goto L_1098bda9;
L_1098b7bb:;
  /* 1098b7bb mov edx, dword ptr [0x109b2fe8] */
  EDX = (r32((uint32_t)(0x109b2fe8)));
  /* 1098b7c1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1098b7c7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1098b7d1 jmp 0x1098b7e2 */
  goto L_1098b7e2;
L_1098b7d3:;
  /* 1098b7d3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1098b7d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b7dc mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1098b7e2:;
  /* 1098b7e2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1098b7e8 cmp ecx, dword ptr [0x109b2fe4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109b2fe4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098b7ee jge 0x1098bda7 */
  if ((C.sf==C.of)) goto L_1098bda7;
  /* 1098b7f4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1098b7fa mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1098b7fd mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1098b803 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1098b808 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1098b80e push ecx */
  push32((uint32_t)(ECX));
  /* 1098b80f call dword ptr [0x109b43b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43b4))), 0x1098b815u);
  /* 1098b815 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098b817 je 0x1098b823 */
  if (C.zf) goto L_1098b823;
  /* 1098b819 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1098b81e jmp 0x1098bda9 */
  goto L_1098bda9;
L_1098b823:;
  /* 1098b823 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1098b829 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1098b82c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1098b832 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1098b838 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b83e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1098b841 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1098b847 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1098b84a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1098b84d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1098b857 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1098b861 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1098b868 jmp 0x1098b873 */
  goto L_1098b873;
L_1098b86a:;
  /* 1098b86a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098b86d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b870 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1098b873:;
  /* 1098b873 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098b877 jge 0x1098bd6b */
  if ((C.sf==C.of)) goto L_1098bd6b;
  /* 1098b87d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1098b887 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1098b891 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1098b89b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 1098b8a5 jmp 0x1098b8b6 */
  goto L_1098b8b6;
L_1098b8a7:;
  /* 1098b8a7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1098b8ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b8b0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_1098b8b6:;
  /* 1098b8b6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098b8bd jge 0x1098b8d2 */
  if ((C.sf==C.of)) goto L_1098b8d2;
  /* 1098b8bf mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1098b8c5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 1098b8d0 jmp 0x1098b8a7 */
  goto L_1098b8a7;
L_1098b8d2:;
  /* 1098b8d2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098b8d6 jl 0x1098bd0d */
  if ((C.sf!=C.of)) goto L_1098bd0d;
  /* 1098b8dc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1098b8e1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 1098b8e7 push ecx */
  push32((uint32_t)(ECX));
  /* 1098b8e8 call dword ptr [0x109b43b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43b4))), 0x1098b8eeu);
  /* 1098b8ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098b8f0 je 0x1098b8fc */
  if (C.zf) goto L_1098b8fc;
  /* 1098b8f2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 1098b8f7 jmp 0x1098bda9 */
  goto L_1098bda9;
L_1098b8fc:;
  /* 1098b8fc mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1098b902 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1098b905 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1098b90f jmp 0x1098b920 */
  goto L_1098b920;
L_1098b911:;
  /* 1098b911 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1098b917 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b91a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1098b920:;
  /* 1098b920 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098b927 jge 0x1098baa4 */
  if ((C.sf==C.of)) goto L_1098baa4;
  /* 1098b92d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098b930 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b933 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1098b939 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1098b93f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b945 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1098b94b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1098b951 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098b955 jne 0x1098b962 */
  if (!C.zf) goto L_1098b962;
  /* 1098b957 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1098b95d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098b960 je 0x1098b96c */
  if (C.zf) goto L_1098b96c;
L_1098b962:;
  /* 1098b962 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1098b967 jmp 0x1098bda9 */
  goto L_1098bda9;
L_1098b96c:;
  /* 1098b96c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1098b972 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1098b974 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1098b97a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1098b980 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1098b986 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1098b98c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1098b98f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098b991 je 0x1098b9c9 */
  if (C.zf) goto L_1098b9c9;
  /* 1098b993 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1098b999 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098b99c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1098b9a2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098b9ac jle 0x1098b9b8 */
  if ((C.zf||C.sf!=C.of)) goto L_1098b9b8;
  /* 1098b9ae mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1098b9b3 jmp 0x1098bda9 */
  goto L_1098bda9;
L_1098b9b8:;
  /* 1098b9b8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1098b9be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b9c1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1098b9c7 jmp 0x1098ba0b */
  goto L_1098ba0b;
L_1098b9c9:;
  /* 1098b9c9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1098b9cf sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1098b9d2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098b9d5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1098b9db cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098b9e2 jle 0x1098b9ee */
  if ((C.zf||C.sf!=C.of)) goto L_1098b9ee;
  /* 1098b9e4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1098b9ee:;
  /* 1098b9ee mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1098b9f4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1098b9fb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098b9fe mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1098ba04 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1098ba0b:;
  /* 1098ba0b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ba12 jl 0x1098ba2d */
  if ((C.sf!=C.of)) goto L_1098ba2d;
  /* 1098ba14 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1098ba1a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1098ba1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098ba1f jne 0x1098ba2d */
  if (!C.zf) goto L_1098ba2d;
  /* 1098ba21 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ba2b jle 0x1098ba37 */
  if ((C.zf||C.sf!=C.of)) goto L_1098ba37;
L_1098ba2d:;
  /* 1098ba2d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1098ba32 jmp 0x1098bda9 */
  goto L_1098bda9;
L_1098ba37:;
  /* 1098ba37 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1098ba3d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ba43 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1098ba46 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ba4c je 0x1098ba58 */
  if (C.zf) goto L_1098ba58;
  /* 1098ba4e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1098ba53 jmp 0x1098bda9 */
  goto L_1098bda9;
L_1098ba58:;
  /* 1098ba58 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1098ba5e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ba64 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1098ba6a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1098ba70 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ba76 jb 0x1098b96c */
  if (C.cf) goto L_1098b96c;
  /* 1098ba7c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1098ba82 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ba88 je 0x1098ba94 */
  if (C.zf) goto L_1098ba94;
  /* 1098ba8a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1098ba8f jmp 0x1098bda9 */
  goto L_1098bda9;
L_1098ba94:;
  /* 1098ba94 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098ba97 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ba9c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1098ba9f jmp 0x1098b911 */
  goto L_1098b911;
L_1098baa4:;
  /* 1098baa4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098baa7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1098baa9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098baaf je 0x1098babb */
  if (C.zf) goto L_1098babb;
  /* 1098bab1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1098bab6 jmp 0x1098bda9 */
  goto L_1098bda9;
L_1098babb:;
  /* 1098babb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098babe mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1098bac4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1098bacb jmp 0x1098bad6 */
  goto L_1098bad6;
L_1098bacd:;
  /* 1098bacd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098bad0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098bad3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1098bad6:;
  /* 1098bad6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098bada jge 0x1098bd0d */
  if ((C.sf==C.of)) goto L_1098bd0d;
  /* 1098bae0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1098baea mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1098baf0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1098baf6:;
  /* 1098baf6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1098bafc mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1098baff mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1098bb05 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1098bb0b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098bb11 je 0x1098bc3a */
  if (C.zf) goto L_1098bc3a;
  /* 1098bb17 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098bb1a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1098bb20 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098bb27 je 0x1098bc3a */
  if (C.zf) goto L_1098bc3a;
  /* 1098bb2d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1098bb33 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098bb39 jb 0x1098bb4e */
  if (C.cf) goto L_1098bb4e;
  /* 1098bb3b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1098bb41 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098bb46 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098bb4c jb 0x1098bb58 */
  if (C.cf) goto L_1098bb58;
L_1098bb4e:;
  /* 1098bb4e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1098bb53 jmp 0x1098bda9 */
  goto L_1098bda9;
L_1098bb58:;
  /* 1098bb58 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1098bb5e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1098bb64 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1098bb6a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1098bb70 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098bb73 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1098bb76 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098bb79 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098bb7e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1098bb84:;
  /* 1098bb84 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098bb87 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098bb8d je 0x1098bbae */
  if (C.zf) goto L_1098bbae;
  /* 1098bb8f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098bb92 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098bb98 jne 0x1098bb9c */
  if (!C.zf) goto L_1098bb9c;
  /* 1098bb9a jmp 0x1098bbae */
  goto L_1098bbae;
L_1098bb9c:;
  /* 1098bb9c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098bb9f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1098bba1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1098bba4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098bba7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098bba9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1098bbac jmp 0x1098bb84 */
  goto L_1098bb84;
L_1098bbae:;
  /* 1098bbae mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098bbb1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098bbb7 jne 0x1098bbc3 */
  if (!C.zf) goto L_1098bbc3;
  /* 1098bbb9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1098bbbe jmp 0x1098bda9 */
  goto L_1098bda9;
L_1098bbc3:;
  /* 1098bbc3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1098bbc9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1098bbcb sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1098bbce sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098bbd1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1098bbd7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098bbde jle 0x1098bbea */
  if ((C.zf||C.sf!=C.of)) goto L_1098bbea;
  /* 1098bbe0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1098bbea:;
  /* 1098bbea mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1098bbf0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098bbf3 je 0x1098bbff */
  if (C.zf) goto L_1098bbff;
  /* 1098bbf5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1098bbfa jmp 0x1098bda9 */
  goto L_1098bda9;
L_1098bbff:;
  /* 1098bbff mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1098bc05 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1098bc08 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098bc0e je 0x1098bc1a */
  if (C.zf) goto L_1098bc1a;
  /* 1098bc10 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1098bc15 jmp 0x1098bda9 */
  goto L_1098bda9;
L_1098bc1a:;
  /* 1098bc1a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1098bc20 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1098bc26 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1098bc2c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098bc2f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1098bc35 jmp 0x1098baf6 */
  goto L_1098baf6;
L_1098bc3a:;
  /* 1098bc3a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098bc41 je 0x1098bcb1 */
  if (C.zf) goto L_1098bcb1;
  /* 1098bc43 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098bc47 jge 0x1098bc7b */
  if ((C.sf==C.of)) goto L_1098bc7b;
  /* 1098bc49 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1098bc4e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098bc51 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1098bc53 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1098bc59 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1098bc5b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1098bc61 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1098bc66 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098bc69 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1098bc6b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1098bc71 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1098bc73 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1098bc79 jmp 0x1098bcb1 */
  goto L_1098bcb1;
L_1098bc7b:;
  /* 1098bc7b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098bc7e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098bc81 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1098bc86 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1098bc88 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1098bc8e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1098bc90 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1098bc96 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098bc99 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098bc9c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1098bca1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1098bca3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1098bca9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1098bcab mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1098bcb1:;
  /* 1098bcb1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1098bcb7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1098bcba cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098bcc0 jne 0x1098bcd4 */
  if (!C.zf) goto L_1098bcd4;
  /* 1098bcc2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098bcc5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1098bccb cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098bcd2 je 0x1098bcde */
  if (C.zf) goto L_1098bcde;
L_1098bcd4:;
  /* 1098bcd4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1098bcd9 jmp 0x1098bda9 */
  goto L_1098bda9;
L_1098bcde:;
  /* 1098bcde mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1098bce4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1098bce7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098bced je 0x1098bcf9 */
  if (C.zf) goto L_1098bcf9;
  /* 1098bcef mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1098bcf4 jmp 0x1098bda9 */
  goto L_1098bda9;
L_1098bcf9:;
  /* 1098bcf9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1098bcff add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098bd02 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1098bd08 jmp 0x1098bacd */
  goto L_1098bacd;
L_1098bd0d:;
  /* 1098bd0d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098bd10 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1098bd16 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1098bd1c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098bd20 jne 0x1098bd3a */
  if (!C.zf) goto L_1098bd3a;
  /* 1098bd22 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098bd25 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1098bd2b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1098bd31 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098bd38 je 0x1098bd41 */
  if (C.zf) goto L_1098bd41;
L_1098bd3a:;
  /* 1098bd3a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1098bd3f jmp 0x1098bda9 */
  goto L_1098bda9;
L_1098bd41:;
  /* 1098bd41 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1098bd47 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098bd4d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1098bd53 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098bd56 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098bd5b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1098bd5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098bd61 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1098bd63 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1098bd66 jmp 0x1098b86a */
  goto L_1098b86a;
L_1098bd6b:;
  /* 1098bd6b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1098bd71 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1098bd77 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098bd79 jne 0x1098bd8c */
  if (!C.zf) goto L_1098bd8c;
  /* 1098bd7b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1098bd81 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1098bd87 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098bd8a je 0x1098bd93 */
  if (C.zf) goto L_1098bd93;
L_1098bd8c:;
  /* 1098bd8c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1098bd91 jmp 0x1098bda9 */
  goto L_1098bda9;
L_1098bd93:;
  /* 1098bd93 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1098bd99 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098bd9c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1098bda2 jmp 0x1098b7d3 */
  goto L_1098b7d3;
L_1098bda7:;
  /* 1098bda7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1098bda9:;
  /* 1098bda9 mov esp, ebp */
  ESP = (EBP);
  /* 1098bdab pop ebp */
  EBP = (pop32());
  /* 1098bdac ret  */
  ESPCHK(0x1098b790u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bdb0 @ 0x1098bdb0 (250 bytes, 92 insns) */
void f_1098bdb0(void) {
  FTRACE(0x1098bdb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098bdb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1098bdb1 mov ebp, esp */
  EBP = (ESP);
  /* 1098bdb3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098bdb6 push ebx */
  push32((uint32_t)(EBX));
  /* 1098bdb7 push esi */
  push32((uint32_t)(ESI));
  /* 1098bdb8 push edi */
  push32((uint32_t)(EDI));
  /* 1098bdb9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1098bdbc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1098bdbf lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1098bdc2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1098bdc5:;
  /* 1098bdc5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098bdc9 jne 0x1098bde9 */
  if (!C.zf) goto L_1098bde9;
  /* 1098bdcb push 0x109ad1d0 */
  push32((uint32_t)(0x109ad1d0u));
  /* 1098bdd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098bdd2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1098bdd4 push 0x109ad1c4 */
  push32((uint32_t)(0x109ad1c4u));
  /* 1098bdd9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1098bddb call 0x10984f60 */
  push32(0x1098bde0u); f_10984f60();
  /* 1098bde0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098bde3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098bde6 jne 0x1098bde9 */
  if (!C.zf) goto L_1098bde9;
  /* 1098bde8 int3  */
  x86_unimpl("int3 @ 0x1098bde8");
L_1098bde9:;
  /* 1098bde9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1098bdeb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098bded jne 0x1098bdc5 */
  if (!C.zf) goto L_1098bdc5;
L_1098bdef:;
  /* 1098bdef cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098bdf3 jne 0x1098be13 */
  if (!C.zf) goto L_1098be13;
  /* 1098bdf5 push 0x109ad1b4 */
  push32((uint32_t)(0x109ad1b4u));
  /* 1098bdfa push 0 */
  push32((uint32_t)(0x0u));
  /* 1098bdfc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1098bdfe push 0x109ad1c4 */
  push32((uint32_t)(0x109ad1c4u));
  /* 1098be03 push 2 */
  push32((uint32_t)(0x2u));
  /* 1098be05 call 0x10984f60 */
  push32(0x1098be0au); f_10984f60();
  /* 1098be0a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098be0d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098be10 jne 0x1098be13 */
  if (!C.zf) goto L_1098be13;
  /* 1098be12 int3  */
  x86_unimpl("int3 @ 0x1098be12");
L_1098be13:;
  /* 1098be13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098be15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098be17 jne 0x1098bdef */
  if (!C.zf) goto L_1098bdef;
  /* 1098be19 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098be1c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1098be23 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098be26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098be29 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1098be2c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098be2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098be32 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1098be34 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098be37 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1098be3e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098be41 push ecx */
  push32((uint32_t)(ECX));
  /* 1098be42 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098be45 push edx */
  push32((uint32_t)(EDX));
  /* 1098be46 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098be49 push eax */
  push32((uint32_t)(EAX));
  /* 1098be4a call 0x1098ce30 */
  push32(0x1098be4fu); f_1098ce30();
  /* 1098be4f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098be52 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1098be55 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098be58 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1098be5b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098be5e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098be61 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1098be64 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098be67 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098be6b jl 0x1098be8f */
  if ((C.sf!=C.of)) goto L_1098be8f;
  /* 1098be6d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098be70 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1098be72 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1098be75 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1098be77 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1098be7d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1098be80 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098be83 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1098be85 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098be88 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098be8b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1098be8d jmp 0x1098bea0 */
  goto L_1098bea0;
L_1098be8f:;
  /* 1098be8f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098be92 push edx */
  push32((uint32_t)(EDX));
  /* 1098be93 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098be95 call 0x1098cbb0 */
  push32(0x1098be9au); f_1098cbb0();
  /* 1098be9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098be9d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1098bea0:;
  /* 1098bea0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1098bea3 pop edi */
  EDI = (pop32());
  /* 1098bea4 pop esi */
  ESI = (pop32());
  /* 1098bea5 pop ebx */
  EBX = (pop32());
  /* 1098bea6 mov esp, ebp */
  ESP = (EBP);
  /* 1098bea8 pop ebp */
  EBP = (pop32());
  /* 1098bea9 ret  */
  ESPCHK(0x1098bdb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000beb0 @ 0x1098beb0 (183 bytes, 58 insns) */
void f_1098beb0(void) {
  FTRACE(0x1098beb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098beb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1098beb1 mov ebp, esp */
  EBP = (ESP);
  /* 1098beb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098beb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098beb9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098bebc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098bec1 ja 0x1098beda */
  if ((!C.cf&&!C.zf)) goto L_1098beda;
  /* 1098bec3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098bec6 mov edx, dword ptr [0x109afc98] */
  EDX = (r32((uint32_t)(0x109afc98)));
  /* 1098becc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098bece mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1098bed2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1098bed5 jmp 0x1098bf63 */
  goto L_1098bf63;
L_1098beda:;
  /* 1098beda mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098bedd sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1098bee0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1098bee6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1098beec mov edx, dword ptr [0x109afc98] */
  EDX = (r32((uint32_t)(0x109afc98)));
  /* 1098bef2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098bef4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1098bef8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1098befd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098beff je 0x1098bf23 */
  if (C.zf) goto L_1098bf23;
  /* 1098bf01 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098bf04 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1098bf07 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1098bf0d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1098bf10 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1098bf13 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1098bf16 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1098bf1a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1098bf21 jmp 0x1098bf34 */
  goto L_1098bf34;
L_1098bf23:;
  /* 1098bf23 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1098bf26 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1098bf29 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1098bf2d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1098bf34:;
  /* 1098bf34 push 1 */
  push32((uint32_t)(0x1u));
  /* 1098bf36 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098bf38 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098bf3a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1098bf3d push ecx */
  push32((uint32_t)(ECX));
  /* 1098bf3e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098bf41 push edx */
  push32((uint32_t)(EDX));
  /* 1098bf42 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1098bf45 push eax */
  push32((uint32_t)(EAX));
  /* 1098bf46 push 1 */
  push32((uint32_t)(0x1u));
  /* 1098bf48 call 0x1098e0d0 */
  push32(0x1098bf4du); f_1098e0d0();
  /* 1098bf4d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098bf50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098bf52 jne 0x1098bf58 */
  if (!C.zf) goto L_1098bf58;
  /* 1098bf54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098bf56 jmp 0x1098bf63 */
  goto L_1098bf63;
L_1098bf58:;
  /* 1098bf58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098bf5b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1098bf60 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1098bf63:;
  /* 1098bf63 mov esp, ebp */
  ESP = (EBP);
  /* 1098bf65 pop ebp */
  EBP = (pop32());
  /* 1098bf66 ret  */
  ESPCHK(0x1098beb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf70 @ 0x1098bf70 (836 bytes, 238 insns) */
void f_1098bf70(void) {
  FTRACE(0x1098bf70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098bf70 push ebp */
  push32((uint32_t)(EBP));
  /* 1098bf71 mov ebp, esp */
  EBP = (ESP);
  /* 1098bf73 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098bf76 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1098bf78 call 0x109898a0 */
  push32(0x1098bf7du); f_109898a0();
  /* 1098bf7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098bf80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098bf83 push eax */
  push32((uint32_t)(EAX));
  /* 1098bf84 call 0x1098c2c0 */
  push32(0x1098bf89u); f_1098c2c0();
  /* 1098bf89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098bf8c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1098bf8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098bf92 cmp ecx, dword ptr [0x109b2d24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109b2d24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098bf98 jne 0x1098bfab */
  if (!C.zf) goto L_1098bfab;
  /* 1098bf9a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1098bf9c call 0x10989940 */
  push32(0x1098bfa1u); f_10989940();
  /* 1098bfa1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098bfa4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098bfa6 jmp 0x1098c2b0 */
  goto L_1098c2b0;
L_1098bfab:;
  /* 1098bfab cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098bfaf jne 0x1098bfcc */
  if (!C.zf) goto L_1098bfcc;
  /* 1098bfb1 call 0x1098c3a0 */
  push32(0x1098bfb6u); f_1098c3a0();
  /* 1098bfb6 call 0x1098c420 */
  push32(0x1098bfbbu); f_1098c420();
  /* 1098bfbb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1098bfbd call 0x10989940 */
  push32(0x1098bfc2u); f_10989940();
  /* 1098bfc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098bfc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098bfc7 jmp 0x1098c2b0 */
  goto L_1098c2b0;
L_1098bfcc:;
  /* 1098bfcc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1098bfd3 jmp 0x1098bfde */
  goto L_1098bfde;
L_1098bfd5:;
  /* 1098bfd5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098bfd8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098bfdb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1098bfde:;
  /* 1098bfde cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098bfe2 jae 0x1098c12f */
  if (!C.cf) goto L_1098c12f;
  /* 1098bfe8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098bfeb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098bfee mov ecx, dword ptr [eax + 0x109afeb8] */
  ECX = (r32((uint32_t)(EAX + 0x109afeb8)));
  /* 1098bff4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098bff7 jne 0x1098c12a */
  if (!C.zf) goto L_1098c12a;
  /* 1098bffd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1098c004 jmp 0x1098c00f */
  goto L_1098c00f;
L_1098c006:;
  /* 1098c006 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098c009 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098c00c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1098c00f:;
  /* 1098c00f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c016 jae 0x1098c024 */
  if (!C.cf) goto L_1098c024;
  /* 1098c018 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098c01b mov byte ptr [eax + 0x109b2ec0], 0 */
  w8((uint32_t)(EAX + 0x109b2ec0), (0x0u));
  /* 1098c022 jmp 0x1098c006 */
  goto L_1098c006;
L_1098c024:;
  /* 1098c024 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1098c02b jmp 0x1098c036 */
  goto L_1098c036;
L_1098c02d:;
  /* 1098c02d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098c030 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098c033 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1098c036:;
  /* 1098c036 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c03a jae 0x1098c0b7 */
  if (!C.cf) goto L_1098c0b7;
  /* 1098c03c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098c03f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098c042 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098c045 lea ecx, [edx + eax*8 + 0x109afec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x109afec8));
  /* 1098c04c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1098c04f jmp 0x1098c05a */
  goto L_1098c05a;
L_1098c051:;
  /* 1098c051 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098c054 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098c057 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1098c05a:;
  /* 1098c05a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098c05d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1098c05f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1098c061 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098c063 je 0x1098c0b2 */
  if (C.zf) goto L_1098c0b2;
  /* 1098c065 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098c068 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098c06a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1098c06d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098c06f je 0x1098c0b2 */
  if (C.zf) goto L_1098c0b2;
  /* 1098c071 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098c074 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1098c076 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1098c078 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1098c07b jmp 0x1098c086 */
  goto L_1098c086;
L_1098c07d:;
  /* 1098c07d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098c080 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098c083 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1098c086:;
  /* 1098c086 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098c089 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1098c08b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1098c08e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c091 ja 0x1098c0b0 */
  if ((!C.cf&&!C.zf)) goto L_1098c0b0;
  /* 1098c093 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098c096 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098c099 mov dl, byte ptr [eax + 0x109b2ec1] */
  DL = (r8((uint32_t)(EAX + 0x109b2ec1)));
  /* 1098c09f or dl, byte ptr [ecx + 0x109afeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x109afeb0))); DL = (_r); fl_logic(_r,8); }
  /* 1098c0a5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098c0a8 mov byte ptr [eax + 0x109b2ec1], dl */
  w8((uint32_t)(EAX + 0x109b2ec1), (DL));
  /* 1098c0ae jmp 0x1098c07d */
  goto L_1098c07d;
L_1098c0b0:;
  /* 1098c0b0 jmp 0x1098c051 */
  goto L_1098c051;
L_1098c0b2:;
  /* 1098c0b2 jmp 0x1098c02d */
  goto L_1098c02d;
L_1098c0b7:;
  /* 1098c0b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098c0ba mov dword ptr [0x109b2d24], ecx */
  w32((uint32_t)(0x109b2d24), (ECX));
  /* 1098c0c0 mov dword ptr [0x109b2dac], 1 */
  w32((uint32_t)(0x109b2dac), (0x1u));
  /* 1098c0ca mov edx, dword ptr [0x109b2d24] */
  EDX = (r32((uint32_t)(0x109b2d24)));
  /* 1098c0d0 push edx */
  push32((uint32_t)(EDX));
  /* 1098c0d1 call 0x1098c320 */
  push32(0x1098c0d6u); f_1098c320();
  /* 1098c0d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098c0d9 mov dword ptr [0x109b2fc4], eax */
  w32((uint32_t)(0x109b2fc4), (EAX));
  /* 1098c0de mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1098c0e5 jmp 0x1098c0f0 */
  goto L_1098c0f0;
L_1098c0e7:;
  /* 1098c0e7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098c0ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098c0ed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1098c0f0:;
  /* 1098c0f0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c0f4 jae 0x1098c114 */
  if (!C.cf) goto L_1098c114;
  /* 1098c0f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098c0f9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098c0fc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098c0ff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098c102 mov cx, word ptr [ecx + eax*2 + 0x109afebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x109afebc)));
  /* 1098c10a mov word ptr [edx*2 + 0x109b2da0], cx */
  w16((uint32_t)(EDX*2 + 0x109b2da0), (CX));
  /* 1098c112 jmp 0x1098c0e7 */
  goto L_1098c0e7;
L_1098c114:;
  /* 1098c114 call 0x1098c420 */
  push32(0x1098c119u); f_1098c420();
  /* 1098c119 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1098c11b call 0x10989940 */
  push32(0x1098c120u); f_10989940();
  /* 1098c120 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098c123 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098c125 jmp 0x1098c2b0 */
  goto L_1098c2b0;
L_1098c12a:;
  /* 1098c12a jmp 0x1098bfd5 */
  goto L_1098bfd5;
L_1098c12f:;
  /* 1098c12f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1098c132 push edx */
  push32((uint32_t)(EDX));
  /* 1098c133 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098c136 push eax */
  push32((uint32_t)(EAX));
  /* 1098c137 call dword ptr [0x109b4314] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4314))), 0x1098c13du);
  /* 1098c13d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c140 jne 0x1098c282 */
  if (!C.zf) goto L_1098c282;
  /* 1098c146 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1098c14d jmp 0x1098c158 */
  goto L_1098c158;
L_1098c14f:;
  /* 1098c14f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098c152 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098c155 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1098c158:;
  /* 1098c158 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c15f jae 0x1098c16d */
  if (!C.cf) goto L_1098c16d;
  /* 1098c161 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098c164 mov byte ptr [edx + 0x109b2ec0], 0 */
  w8((uint32_t)(EDX + 0x109b2ec0), (0x0u));
  /* 1098c16b jmp 0x1098c14f */
  goto L_1098c14f;
L_1098c16d:;
  /* 1098c16d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098c170 mov dword ptr [0x109b2d24], eax */
  w32((uint32_t)(0x109b2d24), (EAX));
  /* 1098c175 mov dword ptr [0x109b2fc4], 0 */
  w32((uint32_t)(0x109b2fc4), (0x0u));
  /* 1098c17f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c183 jbe 0x1098c23e */
  if ((C.cf||C.zf)) goto L_1098c23e;
  /* 1098c189 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1098c18c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1098c18f jmp 0x1098c19a */
  goto L_1098c19a;
L_1098c191:;
  /* 1098c191 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1098c194 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098c197 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1098c19a:;
  /* 1098c19a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1098c19d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1098c19f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1098c1a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098c1a3 je 0x1098c1ec */
  if (C.zf) goto L_1098c1ec;
  /* 1098c1a5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1098c1a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098c1aa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1098c1ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098c1af je 0x1098c1ec */
  if (C.zf) goto L_1098c1ec;
  /* 1098c1b1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1098c1b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1098c1b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1098c1b8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1098c1bb jmp 0x1098c1c6 */
  goto L_1098c1c6;
L_1098c1bd:;
  /* 1098c1bd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098c1c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098c1c3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1098c1c6:;
  /* 1098c1c6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1098c1c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1098c1cb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1098c1ce cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c1d1 ja 0x1098c1ea */
  if ((!C.cf&&!C.zf)) goto L_1098c1ea;
  /* 1098c1d3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098c1d6 mov cl, byte ptr [eax + 0x109b2ec1] */
  CL = (r8((uint32_t)(EAX + 0x109b2ec1)));
  /* 1098c1dc or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1098c1df mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098c1e2 mov byte ptr [edx + 0x109b2ec1], cl */
  w8((uint32_t)(EDX + 0x109b2ec1), (CL));
  /* 1098c1e8 jmp 0x1098c1bd */
  goto L_1098c1bd;
L_1098c1ea:;
  /* 1098c1ea jmp 0x1098c191 */
  goto L_1098c191;
L_1098c1ec:;
  /* 1098c1ec mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1098c1f3 jmp 0x1098c1fe */
  goto L_1098c1fe;
L_1098c1f5:;
  /* 1098c1f5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098c1f8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098c1fb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1098c1fe:;
  /* 1098c1fe cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c205 jae 0x1098c21e */
  if (!C.cf) goto L_1098c21e;
  /* 1098c207 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098c20a mov dl, byte ptr [ecx + 0x109b2ec1] */
  DL = (r8((uint32_t)(ECX + 0x109b2ec1)));
  /* 1098c210 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1098c213 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098c216 mov byte ptr [eax + 0x109b2ec1], dl */
  w8((uint32_t)(EAX + 0x109b2ec1), (DL));
  /* 1098c21c jmp 0x1098c1f5 */
  goto L_1098c1f5;
L_1098c21e:;
  /* 1098c21e mov ecx, dword ptr [0x109b2d24] */
  ECX = (r32((uint32_t)(0x109b2d24)));
  /* 1098c224 push ecx */
  push32((uint32_t)(ECX));
  /* 1098c225 call 0x1098c320 */
  push32(0x1098c22au); f_1098c320();
  /* 1098c22a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098c22d mov dword ptr [0x109b2fc4], eax */
  w32((uint32_t)(0x109b2fc4), (EAX));
  /* 1098c232 mov dword ptr [0x109b2dac], 1 */
  w32((uint32_t)(0x109b2dac), (0x1u));
  /* 1098c23c jmp 0x1098c248 */
  goto L_1098c248;
L_1098c23e:;
  /* 1098c23e mov dword ptr [0x109b2dac], 0 */
  w32((uint32_t)(0x109b2dac), (0x0u));
L_1098c248:;
  /* 1098c248 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1098c24f jmp 0x1098c25a */
  goto L_1098c25a;
L_1098c251:;
  /* 1098c251 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098c254 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098c257 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1098c25a:;
  /* 1098c25a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c25e jae 0x1098c26f */
  if (!C.cf) goto L_1098c26f;
  /* 1098c260 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098c263 mov word ptr [eax*2 + 0x109b2da0], 0 */
  w16((uint32_t)(EAX*2 + 0x109b2da0), (0x0u));
  /* 1098c26d jmp 0x1098c251 */
  goto L_1098c251;
L_1098c26f:;
  /* 1098c26f call 0x1098c420 */
  push32(0x1098c274u); f_1098c420();
  /* 1098c274 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1098c276 call 0x10989940 */
  push32(0x1098c27bu); f_10989940();
  /* 1098c27b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098c27e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098c280 jmp 0x1098c2b0 */
  goto L_1098c2b0;
L_1098c282:;
  /* 1098c282 cmp dword ptr [0x109b1840], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b1840))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c289 je 0x1098c2a3 */
  if (C.zf) goto L_1098c2a3;
  /* 1098c28b call 0x1098c3a0 */
  push32(0x1098c290u); f_1098c3a0();
  /* 1098c290 call 0x1098c420 */
  push32(0x1098c295u); f_1098c420();
  /* 1098c295 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1098c297 call 0x10989940 */
  push32(0x1098c29cu); f_10989940();
  /* 1098c29c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098c29f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098c2a1 jmp 0x1098c2b0 */
  goto L_1098c2b0;
L_1098c2a3:;
  /* 1098c2a3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1098c2a5 call 0x10989940 */
  push32(0x1098c2aau); f_10989940();
  /* 1098c2aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098c2ad or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1098c2b0:;
  /* 1098c2b0 mov esp, ebp */
  ESP = (EBP);
  /* 1098c2b2 pop ebp */
  EBP = (pop32());
  /* 1098c2b3 ret  */
  ESPCHK(0x1098bf70u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1098c2c0 (89 bytes, 21 insns) */
void f_1098c2c0(void) {
  FTRACE(0x1098c2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098c2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1098c2c1 mov ebp, esp */
  EBP = (ESP);
  /* 1098c2c3 mov dword ptr [0x109b1840], 0 */
  w32((uint32_t)(0x109b1840), (0x0u));
  /* 1098c2cd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c2d1 jne 0x1098c2e5 */
  if (!C.zf) goto L_1098c2e5;
  /* 1098c2d3 mov dword ptr [0x109b1840], 1 */
  w32((uint32_t)(0x109b1840), (0x1u));
  /* 1098c2dd call dword ptr [0x109b430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b430c))), 0x1098c2e3u);
  /* 1098c2e3 jmp 0x1098c317 */
  goto L_1098c317;
L_1098c2e5:;
  /* 1098c2e5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c2e9 jne 0x1098c2fd */
  if (!C.zf) goto L_1098c2fd;
  /* 1098c2eb mov dword ptr [0x109b1840], 1 */
  w32((uint32_t)(0x109b1840), (0x1u));
  /* 1098c2f5 call dword ptr [0x109b4310] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4310))), 0x1098c2fbu);
  /* 1098c2fb jmp 0x1098c317 */
  goto L_1098c317;
L_1098c2fd:;
  /* 1098c2fd cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c301 jne 0x1098c314 */
  if (!C.zf) goto L_1098c314;
  /* 1098c303 mov dword ptr [0x109b1840], 1 */
  w32((uint32_t)(0x109b1840), (0x1u));
  /* 1098c30d mov eax, dword ptr [0x109b1860] */
  EAX = (r32((uint32_t)(0x109b1860)));
  /* 1098c312 jmp 0x1098c317 */
  goto L_1098c317;
L_1098c314:;
  /* 1098c314 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1098c317:;
  /* 1098c317 pop ebp */
  EBP = (pop32());
  /* 1098c318 ret  */
  ESPCHK(0x1098c2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c320 @ 0x1098c320 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1098c320(void) {
  FTRACE(0x1098c320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098c320 push ebp */
  push32((uint32_t)(EBP));
  /* 1098c321 mov ebp, esp */
  EBP = (ESP);
  /* 1098c323 push ecx */
  push32((uint32_t)(ECX));
  /* 1098c324 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098c327 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1098c32a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098c32d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098c333 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1098c336 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c33a ja 0x1098c36a */
  if ((!C.cf&&!C.zf)) goto L_1098c36a;
  /* 1098c33c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098c33f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1098c341 mov dl, byte ptr [eax + 0x1098c384] */
  DL = (r8((uint32_t)(EAX + 0x1098c384)));
  /* 1098c347 jmp dword ptr [edx*4 + 0x1098c370] */
  switch (EDX) {
    case 0: goto L_1098c34e;
    case 1: goto L_1098c355;
    case 2: goto L_1098c35c;
    case 3: goto L_1098c363;
    case 4: goto L_1098c36a;
    default: x86_unimpl("switch@0x1098c347 out of table"); return;
  }
L_1098c34e:;
  /* 1098c34e mov eax, 0x411 */
  EAX = (0x411u);
  /* 1098c353 jmp 0x1098c36c */
  goto L_1098c36c;
L_1098c355:;
  /* 1098c355 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1098c35a jmp 0x1098c36c */
  goto L_1098c36c;
L_1098c35c:;
  /* 1098c35c mov eax, 0x412 */
  EAX = (0x412u);
  /* 1098c361 jmp 0x1098c36c */
  goto L_1098c36c;
L_1098c363:;
  /* 1098c363 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1098c368 jmp 0x1098c36c */
  goto L_1098c36c;
L_1098c36a:;
  /* 1098c36a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1098c36c:;
  /* 1098c36c mov esp, ebp */
  ESP = (EBP);
  /* 1098c36e pop ebp */
  EBP = (pop32());
  /* 1098c36f ret  */
  ESPCHK(0x1098c320u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1098c3a0 (116 bytes, 29 insns) */
void f_1098c3a0(void) {
  FTRACE(0x1098c3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098c3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1098c3a1 mov ebp, esp */
  EBP = (ESP);
  /* 1098c3a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1098c3a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1098c3ab jmp 0x1098c3b6 */
  goto L_1098c3b6;
L_1098c3ad:;
  /* 1098c3ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098c3b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098c3b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1098c3b6:;
  /* 1098c3b6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c3bd jge 0x1098c3cb */
  if ((C.sf==C.of)) goto L_1098c3cb;
  /* 1098c3bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098c3c2 mov byte ptr [ecx + 0x109b2ec0], 0 */
  w8((uint32_t)(ECX + 0x109b2ec0), (0x0u));
  /* 1098c3c9 jmp 0x1098c3ad */
  goto L_1098c3ad;
L_1098c3cb:;
  /* 1098c3cb mov dword ptr [0x109b2d24], 0 */
  w32((uint32_t)(0x109b2d24), (0x0u));
  /* 1098c3d5 mov dword ptr [0x109b2dac], 0 */
  w32((uint32_t)(0x109b2dac), (0x0u));
  /* 1098c3df mov dword ptr [0x109b2fc4], 0 */
  w32((uint32_t)(0x109b2fc4), (0x0u));
  /* 1098c3e9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1098c3f0 jmp 0x1098c3fb */
  goto L_1098c3fb;
L_1098c3f2:;
  /* 1098c3f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098c3f5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098c3f8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1098c3fb:;
  /* 1098c3fb cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c3ff jge 0x1098c410 */
  if ((C.sf==C.of)) goto L_1098c410;
  /* 1098c401 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098c404 mov word ptr [eax*2 + 0x109b2da0], 0 */
  w16((uint32_t)(EAX*2 + 0x109b2da0), (0x0u));
  /* 1098c40e jmp 0x1098c3f2 */
  goto L_1098c3f2;
L_1098c410:;
  /* 1098c410 mov esp, ebp */
  ESP = (EBP);
  /* 1098c412 pop ebp */
  EBP = (pop32());
  /* 1098c413 ret  */
  ESPCHK(0x1098c3a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c420 @ 0x1098c420 (770 bytes, 175 insns) */
void f_1098c420(void) {
  FTRACE(0x1098c420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098c420 push ebp */
  push32((uint32_t)(EBP));
  /* 1098c421 mov ebp, esp */
  EBP = (ESP);
  /* 1098c423 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098c429 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1098c42f push eax */
  push32((uint32_t)(EAX));
  /* 1098c430 mov ecx, dword ptr [0x109b2d24] */
  ECX = (r32((uint32_t)(0x109b2d24)));
  /* 1098c436 push ecx */
  push32((uint32_t)(ECX));
  /* 1098c437 call dword ptr [0x109b4314] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4314))), 0x1098c43du);
  /* 1098c43d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c440 jne 0x1098c659 */
  if (!C.zf) goto L_1098c659;
  /* 1098c446 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1098c450 jmp 0x1098c461 */
  goto L_1098c461;
L_1098c452:;
  /* 1098c452 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1098c458 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098c45b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1098c461:;
  /* 1098c461 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c46b jae 0x1098c482 */
  if (!C.cf) goto L_1098c482;
  /* 1098c46d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1098c473 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1098c479 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1098c480 jmp 0x1098c452 */
  goto L_1098c452;
L_1098c482:;
  /* 1098c482 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1098c489 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1098c48f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1098c492 jmp 0x1098c49d */
  goto L_1098c49d;
L_1098c494:;
  /* 1098c494 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098c497 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098c49a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1098c49d:;
  /* 1098c49d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098c4a0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1098c4a2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1098c4a4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098c4a6 je 0x1098c4e8 */
  if (C.zf) goto L_1098c4e8;
  /* 1098c4a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098c4ab xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1098c4ad mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1098c4af mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1098c4b5 jmp 0x1098c4c6 */
  goto L_1098c4c6;
L_1098c4b7:;
  /* 1098c4b7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1098c4bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098c4c0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1098c4c6:;
  /* 1098c4c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098c4c9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1098c4cb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1098c4ce cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c4d4 ja 0x1098c4e6 */
  if ((!C.cf&&!C.zf)) goto L_1098c4e6;
  /* 1098c4d6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1098c4dc mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1098c4e4 jmp 0x1098c4b7 */
  goto L_1098c4b7;
L_1098c4e6:;
  /* 1098c4e6 jmp 0x1098c494 */
  goto L_1098c494;
L_1098c4e8:;
  /* 1098c4e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098c4ea mov eax, dword ptr [0x109b2fc4] */
  EAX = (r32((uint32_t)(0x109b2fc4)));
  /* 1098c4ef push eax */
  push32((uint32_t)(EAX));
  /* 1098c4f0 mov ecx, dword ptr [0x109b2d24] */
  ECX = (r32((uint32_t)(0x109b2d24)));
  /* 1098c4f6 push ecx */
  push32((uint32_t)(ECX));
  /* 1098c4f7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1098c4fd push edx */
  push32((uint32_t)(EDX));
  /* 1098c4fe push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1098c503 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1098c509 push eax */
  push32((uint32_t)(EAX));
  /* 1098c50a push 1 */
  push32((uint32_t)(0x1u));
  /* 1098c50c call 0x1098e0d0 */
  push32(0x1098c511u); f_1098e0d0();
  /* 1098c511 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098c514 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098c516 mov ecx, dword ptr [0x109b2d24] */
  ECX = (r32((uint32_t)(0x109b2d24)));
  /* 1098c51c push ecx */
  push32((uint32_t)(ECX));
  /* 1098c51d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1098c522 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1098c528 push edx */
  push32((uint32_t)(EDX));
  /* 1098c529 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1098c52e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1098c534 push eax */
  push32((uint32_t)(EAX));
  /* 1098c535 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1098c53a mov ecx, dword ptr [0x109b2fc4] */
  ECX = (r32((uint32_t)(0x109b2fc4)));
  /* 1098c540 push ecx */
  push32((uint32_t)(ECX));
  /* 1098c541 call 0x1098e290 */
  push32(0x1098c546u); f_1098e290();
  /* 1098c546 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098c549 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098c54b mov edx, dword ptr [0x109b2d24] */
  EDX = (r32((uint32_t)(0x109b2d24)));
  /* 1098c551 push edx */
  push32((uint32_t)(EDX));
  /* 1098c552 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1098c557 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1098c55d push eax */
  push32((uint32_t)(EAX));
  /* 1098c55e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1098c563 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1098c569 push ecx */
  push32((uint32_t)(ECX));
  /* 1098c56a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1098c56f mov edx, dword ptr [0x109b2fc4] */
  EDX = (r32((uint32_t)(0x109b2fc4)));
  /* 1098c575 push edx */
  push32((uint32_t)(EDX));
  /* 1098c576 call 0x1098e290 */
  push32(0x1098c57bu); f_1098e290();
  /* 1098c57b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098c57e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1098c588 jmp 0x1098c599 */
  goto L_1098c599;
L_1098c58a:;
  /* 1098c58a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1098c590 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098c593 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1098c599:;
  /* 1098c599 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c5a3 jae 0x1098c654 */
  if (!C.cf) goto L_1098c654;
  /* 1098c5a9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1098c5af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1098c5b1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1098c5b9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1098c5bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098c5be je 0x1098c5f6 */
  if (C.zf) goto L_1098c5f6;
  /* 1098c5c0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1098c5c6 mov cl, byte ptr [eax + 0x109b2ec1] */
  CL = (r8((uint32_t)(EAX + 0x109b2ec1)));
  /* 1098c5cc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1098c5cf mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1098c5d5 mov byte ptr [edx + 0x109b2ec1], cl */
  w8((uint32_t)(EDX + 0x109b2ec1), (CL));
  /* 1098c5db mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1098c5e1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1098c5e7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1098c5ee mov byte ptr [eax + 0x109b2dc0], dl */
  w8((uint32_t)(EAX + 0x109b2dc0), (DL));
  /* 1098c5f4 jmp 0x1098c64f */
  goto L_1098c64f;
L_1098c5f6:;
  /* 1098c5f6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1098c5fc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1098c5fe mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1098c606 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1098c609 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098c60b je 0x1098c642 */
  if (C.zf) goto L_1098c642;
  /* 1098c60d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1098c613 mov al, byte ptr [edx + 0x109b2ec1] */
  AL = (r8((uint32_t)(EDX + 0x109b2ec1)));
  /* 1098c619 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1098c61b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1098c621 mov byte ptr [ecx + 0x109b2ec1], al */
  w8((uint32_t)(ECX + 0x109b2ec1), (AL));
  /* 1098c627 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1098c62d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1098c633 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1098c63a mov byte ptr [edx + 0x109b2dc0], cl */
  w8((uint32_t)(EDX + 0x109b2dc0), (CL));
  /* 1098c640 jmp 0x1098c64f */
  goto L_1098c64f;
L_1098c642:;
  /* 1098c642 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1098c648 mov byte ptr [edx + 0x109b2dc0], 0 */
  w8((uint32_t)(EDX + 0x109b2dc0), (0x0u));
L_1098c64f:;
  /* 1098c64f jmp 0x1098c58a */
  goto L_1098c58a;
L_1098c654:;
  /* 1098c654 jmp 0x1098c71e */
  goto L_1098c71e;
L_1098c659:;
  /* 1098c659 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1098c663 jmp 0x1098c674 */
  goto L_1098c674;
L_1098c665:;
  /* 1098c665 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1098c66b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098c66e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1098c674:;
  /* 1098c674 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c67e jae 0x1098c71e */
  if (!C.cf) goto L_1098c71e;
  /* 1098c684 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c68b jb 0x1098c6c8 */
  if (C.cf) goto L_1098c6c8;
  /* 1098c68d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c694 ja 0x1098c6c8 */
  if ((!C.cf&&!C.zf)) goto L_1098c6c8;
  /* 1098c696 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1098c69c mov dl, byte ptr [ecx + 0x109b2ec1] */
  DL = (r8((uint32_t)(ECX + 0x109b2ec1)));
  /* 1098c6a2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1098c6a5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1098c6ab mov byte ptr [eax + 0x109b2ec1], dl */
  w8((uint32_t)(EAX + 0x109b2ec1), (DL));
  /* 1098c6b1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1098c6b7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098c6ba mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1098c6c0 mov byte ptr [edx + 0x109b2dc0], cl */
  w8((uint32_t)(EDX + 0x109b2dc0), (CL));
  /* 1098c6c6 jmp 0x1098c719 */
  goto L_1098c719;
L_1098c6c8:;
  /* 1098c6c8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c6cf jb 0x1098c70c */
  if (C.cf) goto L_1098c70c;
  /* 1098c6d1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c6d8 ja 0x1098c70c */
  if ((!C.cf&&!C.zf)) goto L_1098c70c;
  /* 1098c6da mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1098c6e0 mov cl, byte ptr [eax + 0x109b2ec1] */
  CL = (r8((uint32_t)(EAX + 0x109b2ec1)));
  /* 1098c6e6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1098c6e9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1098c6ef mov byte ptr [edx + 0x109b2ec1], cl */
  w8((uint32_t)(EDX + 0x109b2ec1), (CL));
  /* 1098c6f5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1098c6fb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098c6fe mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1098c704 mov byte ptr [ecx + 0x109b2dc0], al */
  w8((uint32_t)(ECX + 0x109b2dc0), (AL));
  /* 1098c70a jmp 0x1098c719 */
  goto L_1098c719;
L_1098c70c:;
  /* 1098c70c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1098c712 mov byte ptr [edx + 0x109b2dc0], 0 */
  w8((uint32_t)(EDX + 0x109b2dc0), (0x0u));
L_1098c719:;
  /* 1098c719 jmp 0x1098c665 */
  goto L_1098c665;
L_1098c71e:;
  /* 1098c71e mov esp, ebp */
  ESP = (EBP);
  /* 1098c720 pop ebp */
  EBP = (pop32());
  /* 1098c721 ret  */
  ESPCHK(0x1098c420u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c730 @ 0x1098c730 (23 bytes, 9 insns) */
void f_1098c730(void) {
  FTRACE(0x1098c730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098c730 push ebp */
  push32((uint32_t)(EBP));
  /* 1098c731 mov ebp, esp */
  EBP = (ESP);
  /* 1098c733 cmp dword ptr [0x109b2dac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b2dac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c73a je 0x1098c743 */
  if (C.zf) goto L_1098c743;
  /* 1098c73c mov eax, dword ptr [0x109b2d24] */
  EAX = (r32((uint32_t)(0x109b2d24)));
  /* 1098c741 jmp 0x1098c745 */
  goto L_1098c745;
L_1098c743:;
  /* 1098c743 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1098c745:;
  /* 1098c745 pop ebp */
  EBP = (pop32());
  /* 1098c746 ret  */
  ESPCHK(0x1098c730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c750 @ 0x1098c750 (34 bytes, 10 insns) */
void f_1098c750(void) {
  FTRACE(0x1098c750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098c750 push ebp */
  push32((uint32_t)(EBP));
  /* 1098c751 mov ebp, esp */
  EBP = (ESP);
  /* 1098c753 cmp dword ptr [0x109b3170], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b3170))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c75a jne 0x1098c770 */
  if (!C.zf) goto L_1098c770;
  /* 1098c75c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1098c75e call 0x1098bf70 */
  push32(0x1098c763u); f_1098bf70();
  /* 1098c763 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098c766 mov dword ptr [0x109b3170], 1 */
  w32((uint32_t)(0x109b3170), (0x1u));
L_1098c770:;
  /* 1098c770 pop ebp */
  EBP = (pop32());
  /* 1098c771 ret  */
  ESPCHK(0x1098c750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c780 @ 0x1098c780 (664 bytes, 264 insns) [15 switch table(s)] */
void f_1098c780(void) {
  FTRACE(0x1098c780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098c780 push ebp */
  push32((uint32_t)(EBP));
  /* 1098c781 mov ebp, esp */
  EBP = (ESP);
  /* 1098c783 push edi */
  push32((uint32_t)(EDI));
  /* 1098c784 push esi */
  push32((uint32_t)(ESI));
  /* 1098c785 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1098c788 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1098c78b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1098c78e mov eax, ecx */
  EAX = (ECX);
  /* 1098c790 mov edx, ecx */
  EDX = (ECX);
  /* 1098c792 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098c794 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c796 jbe 0x1098c7a0 */
  if ((C.cf||C.zf)) goto L_1098c7a0;
  /* 1098c798 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c79a jb 0x1098c918 */
  if (C.cf) goto L_1098c918;
L_1098c7a0:;
  /* 1098c7a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1098c7a6 jne 0x1098c7bc */
  if (!C.zf) goto L_1098c7bc;
  /* 1098c7a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1098c7ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1098c7ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c7b1 jb 0x1098c7dc */
  if (C.cf) goto L_1098c7dc;
  /* 1098c7b3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1098c7b5 jmp dword ptr [edx*4 + 0x1098c8c8] */
  switch (EDX) {
    case 0: goto L_1098c8d8;
    case 1: goto L_1098c8e0;
    case 2: goto L_1098c8ec;
    case 3: goto L_1098c900;
    default: x86_unimpl("switch@0x1098c7b5 out of table"); return;
  }
L_1098c7bc:;
  /* 1098c7bc mov eax, edi */
  EAX = (EDI);
  /* 1098c7be mov edx, 3 */
  EDX = (0x3u);
  /* 1098c7c3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098c7c6 jb 0x1098c7d4 */
  if (C.cf) goto L_1098c7d4;
  /* 1098c7c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1098c7cb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098c7cd jmp dword ptr [eax*4 + 0x1098c7e0] */
  switch (EAX) {
    case 1: goto L_1098c7f0;
    case 2: goto L_1098c81c;
    case 3: goto L_1098c840;
    default: x86_unimpl("switch@0x1098c7cd out of table"); return;
  }
L_1098c7d4:;
  /* 1098c7d4 jmp dword ptr [ecx*4 + 0x1098c8d8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1098c8d8)))); return;
  /* 1098c7db nop  */
  /* nop */
L_1098c7dc:;
  /* 1098c7dc jmp dword ptr [ecx*4 + 0x1098c85c] */
  switch (ECX) {
    case 0: goto L_1098c8bf;
    case 1: goto L_1098c8ac;
    case 2: goto L_1098c8a4;
    case 3: goto L_1098c89c;
    case 4: goto L_1098c894;
    case 5: goto L_1098c88c;
    case 6: goto L_1098c884;
    case 7: goto L_1098c87c;
    default: x86_unimpl("switch@0x1098c7dc out of table"); return;
  }
  /* 1098c7e3 nop  */
  /* nop */
L_1098c7f0:;
  /* 1098c7f0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1098c7f2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1098c7f4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1098c7f6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1098c7f9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1098c7fc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1098c7ff shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1098c802 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1098c805 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1098c808 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1098c80b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c80e jb 0x1098c7dc */
  if (C.cf) goto L_1098c7dc;
  /* 1098c810 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1098c812 jmp dword ptr [edx*4 + 0x1098c8c8] */
  switch (EDX) {
    case 0: goto L_1098c8d8;
    case 1: goto L_1098c8e0;
    case 2: goto L_1098c8ec;
    case 3: goto L_1098c900;
    default: x86_unimpl("switch@0x1098c812 out of table"); return;
  }
  /* 1098c819 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1098c81c:;
  /* 1098c81c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1098c81e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1098c820 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1098c822 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1098c825 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1098c828 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1098c82b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1098c82e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1098c831 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c834 jb 0x1098c7dc */
  if (C.cf) goto L_1098c7dc;
  /* 1098c836 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1098c838 jmp dword ptr [edx*4 + 0x1098c8c8] */
  switch (EDX) {
    case 0: goto L_1098c8d8;
    case 1: goto L_1098c8e0;
    case 2: goto L_1098c8ec;
    case 3: goto L_1098c900;
    default: x86_unimpl("switch@0x1098c838 out of table"); return;
  }
  /* 1098c83f nop  */
  /* nop */
L_1098c840:;
  /* 1098c840 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1098c842 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1098c844 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1098c846 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1098c847 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1098c84a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1098c84b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c84e jb 0x1098c7dc */
  if (C.cf) goto L_1098c7dc;
  /* 1098c850 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1098c852 jmp dword ptr [edx*4 + 0x1098c8c8] */
  switch (EDX) {
    case 0: goto L_1098c8d8;
    case 1: goto L_1098c8e0;
    case 2: goto L_1098c8ec;
    case 3: goto L_1098c900;
    default: x86_unimpl("switch@0x1098c852 out of table"); return;
  }
  /* 1098c859 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1098c87c:;
  /* 1098c87c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1098c880 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1098c884:;
  /* 1098c884 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1098c888 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1098c88c:;
  /* 1098c88c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1098c890 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1098c894:;
  /* 1098c894 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1098c898 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1098c89c:;
  /* 1098c89c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1098c8a0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1098c8a4:;
  /* 1098c8a4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1098c8a8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1098c8ac:;
  /* 1098c8ac mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1098c8b0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1098c8b4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1098c8bb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1098c8bd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1098c8bf:;
  /* 1098c8bf jmp dword ptr [edx*4 + 0x1098c8c8] */
  switch (EDX) {
    case 0: goto L_1098c8d8;
    case 1: goto L_1098c8e0;
    case 2: goto L_1098c8ec;
    case 3: goto L_1098c900;
    default: x86_unimpl("switch@0x1098c8bf out of table"); return;
  }
  /* 1098c8c6 mov edi, edi */
  EDI = (EDI);
L_1098c8d8:;
  /* 1098c8d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098c8db pop esi */
  ESI = (pop32());
  /* 1098c8dc pop edi */
  EDI = (pop32());
  /* 1098c8dd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1098c8de ret  */
  ESPCHK(0x1098c780u, _esp0);
  ESP += 4; return;
  /* 1098c8df nop  */
  /* nop */
L_1098c8e0:;
  /* 1098c8e0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1098c8e2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1098c8e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098c8e7 pop esi */
  ESI = (pop32());
  /* 1098c8e8 pop edi */
  EDI = (pop32());
  /* 1098c8e9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1098c8ea ret  */
  ESPCHK(0x1098c780u, _esp0);
  ESP += 4; return;
  /* 1098c8eb nop  */
  /* nop */
L_1098c8ec:;
  /* 1098c8ec mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1098c8ee mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1098c8f0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1098c8f3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1098c8f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098c8f9 pop esi */
  ESI = (pop32());
  /* 1098c8fa pop edi */
  EDI = (pop32());
  /* 1098c8fb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1098c8fc ret  */
  ESPCHK(0x1098c780u, _esp0);
  ESP += 4; return;
  /* 1098c8fd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1098c900:;
  /* 1098c900 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1098c902 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1098c904 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1098c907 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1098c90a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1098c90d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1098c910 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098c913 pop esi */
  ESI = (pop32());
  /* 1098c914 pop edi */
  EDI = (pop32());
  /* 1098c915 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1098c916 ret  */
  ESPCHK(0x1098c780u, _esp0);
  ESP += 4; return;
  /* 1098c917 nop  */
  /* nop */
L_1098c918:;
  /* 1098c918 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1098c91c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1098c920 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1098c926 jne 0x1098c94c */
  if (!C.zf) goto L_1098c94c;
  /* 1098c928 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1098c92b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1098c92e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c931 jb 0x1098c940 */
  if (C.cf) goto L_1098c940;
  /* 1098c933 std  */
  C.df=1;
  /* 1098c934 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1098c936 cld  */
  C.df=0;
  /* 1098c937 jmp dword ptr [edx*4 + 0x1098ca60] */
  switch (EDX) {
    case 0: goto L_1098ca70;
    case 1: goto L_1098ca78;
    case 2: goto L_1098ca88;
    case 3: goto L_1098ca9c;
    default: x86_unimpl("switch@0x1098c937 out of table"); return;
  }
  /* 1098c93e mov edi, edi */
  EDI = (EDI);
L_1098c940:;
  /* 1098c940 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1098c942 jmp dword ptr [ecx*4 + 0x1098ca10] */
  switch (ECX) {
    case 0: goto L_1098ca57;
    default: x86_unimpl("switch@0x1098c942 out of table"); return;
  }
  /* 1098c949 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1098c94c:;
  /* 1098c94c mov eax, edi */
  EAX = (EDI);
  /* 1098c94e mov edx, 3 */
  EDX = (0x3u);
  /* 1098c953 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c956 jb 0x1098c964 */
  if (C.cf) goto L_1098c964;
  /* 1098c958 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1098c95b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098c95d jmp dword ptr [eax*4 + 0x1098c968] */
  switch (EAX) {
    case 1: goto L_1098c978;
    case 2: goto L_1098c998;
    case 3: goto L_1098c9c0;
    default: x86_unimpl("switch@0x1098c95d out of table"); return;
  }
L_1098c964:;
  /* 1098c964 jmp dword ptr [ecx*4 + 0x1098ca60] */
  switch (ECX) {
    case 0: goto L_1098ca70;
    case 1: goto L_1098ca78;
    case 2: goto L_1098ca88;
    case 3: goto L_1098ca9c;
    default: x86_unimpl("switch@0x1098c964 out of table"); return;
  }
  /* 1098c96b nop  */
  /* nop */
L_1098c978:;
  /* 1098c978 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1098c97b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1098c97d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1098c980 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1098c981 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1098c984 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1098c985 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c988 jb 0x1098c940 */
  if (C.cf) goto L_1098c940;
  /* 1098c98a std  */
  C.df=1;
  /* 1098c98b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1098c98d cld  */
  C.df=0;
  /* 1098c98e jmp dword ptr [edx*4 + 0x1098ca60] */
  switch (EDX) {
    case 0: goto L_1098ca70;
    case 1: goto L_1098ca78;
    case 2: goto L_1098ca88;
    case 3: goto L_1098ca9c;
    default: x86_unimpl("switch@0x1098c98e out of table"); return;
  }
  /* 1098c995 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1098c998:;
  /* 1098c998 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1098c99b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1098c99d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1098c9a0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1098c9a3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1098c9a6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1098c9a9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098c9ac sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098c9af cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c9b2 jb 0x1098c940 */
  if (C.cf) goto L_1098c940;
  /* 1098c9b4 std  */
  C.df=1;
  /* 1098c9b5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1098c9b7 cld  */
  C.df=0;
  /* 1098c9b8 jmp dword ptr [edx*4 + 0x1098ca60] */
  switch (EDX) {
    case 0: goto L_1098ca70;
    case 1: goto L_1098ca78;
    case 2: goto L_1098ca88;
    case 3: goto L_1098ca9c;
    default: x86_unimpl("switch@0x1098c9b8 out of table"); return;
  }
  /* 1098c9bf nop  */
  /* nop */
L_1098c9c0:;
  /* 1098c9c0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1098c9c3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1098c9c5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1098c9c8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1098c9cb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1098c9ce mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1098c9d1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1098c9d4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1098c9d7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098c9da sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098c9dd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098c9e0 jb 0x1098c940 */
  if (C.cf) goto L_1098c940;
  /* 1098c9e6 std  */
  C.df=1;
  /* 1098c9e7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1098c9e9 cld  */
  C.df=0;
  /* 1098c9ea jmp dword ptr [edx*4 + 0x1098ca60] */
  switch (EDX) {
    case 0: goto L_1098ca70;
    case 1: goto L_1098ca78;
    case 2: goto L_1098ca88;
    case 3: goto L_1098ca9c;
    default: x86_unimpl("switch@0x1098c9ea out of table"); return;
  }
  /* 1098c9f1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1098c9f4 adc al, 0xca */
  { uint32_t _a=(AL),_b=(0xcau),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1098c9f6 cwde  */
  EAX = (uint32_t)(int32_t)(int16_t)AX;
  /* 1098c9f7 adc byte ptr [edx + ecx*8], bl */
  { uint32_t _a=(r8((uint32_t)(EDX + ECX*8))),_b=(BL),_r=_a+_b+C.cf; w8((uint32_t)(EDX + ECX*8), (_r)); fl_add(_a,_b,_r,8); }
  /* 1098c9fa cwde  */
  EAX = (uint32_t)(int32_t)(int16_t)AX;
  /* 1098c9fb adc byte ptr [edx + ecx*8], ah */
  { uint32_t _a=(r8((uint32_t)(EDX + ECX*8))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(EDX + ECX*8), (_r)); fl_add(_a,_b,_r,8); }
  /* 1098c9fe cwde  */
  EAX = (uint32_t)(int32_t)(int16_t)AX;
  /* 1098c9ff adc byte ptr [edx + ecx*8], ch */
  { uint32_t _a=(r8((uint32_t)(EDX + ECX*8))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDX + ECX*8), (_r)); fl_add(_a,_b,_r,8); }
  /* 1098ca02 cwde  */
  EAX = (uint32_t)(int32_t)(int16_t)AX;
  /* 1098ca03 adc byte ptr [edx + ecx*8], dh */
  { uint32_t _a=(r8((uint32_t)(EDX + ECX*8))),_b=(C.d.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDX + ECX*8), (_r)); fl_add(_a,_b,_r,8); }
  /* 1098ca06 cwde  */
  EAX = (uint32_t)(int32_t)(int16_t)AX;
  /* 1098ca07 adc byte ptr [edx + ecx*8], bh */
  { uint32_t _a=(r8((uint32_t)(EDX + ECX*8))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDX + ECX*8), (_r)); fl_add(_a,_b,_r,8); }
  /* 1098ca0a cwde  */
  EAX = (uint32_t)(int32_t)(int16_t)AX;
  /* 1098ca0b adc byte ptr [edx + ecx*8 - 0x68], al */
  { uint32_t _a=(r8((uint32_t)(EDX + ECX*8 + -0x68))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(EDX + ECX*8 + -0x68), (_r)); fl_add(_a,_b,_r,8); }
  /* 1098ca14 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1098ca18 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1098ca1c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1098ca20 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1098ca24 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1098ca28 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1098ca2c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1098ca30 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1098ca34 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1098ca38 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1098ca3c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1098ca40 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1098ca44 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1098ca48 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1098ca4c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1098ca53 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ca55 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1098ca57:;
  /* 1098ca57 jmp dword ptr [edx*4 + 0x1098ca60] */
  switch (EDX) {
    case 0: goto L_1098ca70;
    case 1: goto L_1098ca78;
    case 2: goto L_1098ca88;
    case 3: goto L_1098ca9c;
    default: x86_unimpl("switch@0x1098ca57 out of table"); return;
  }
  /* 1098ca5e mov edi, edi */
  EDI = (EDI);
L_1098ca70:;
  /* 1098ca70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098ca73 pop esi */
  ESI = (pop32());
  /* 1098ca74 pop edi */
  EDI = (pop32());
  /* 1098ca75 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1098ca76 ret  */
  ESPCHK(0x1098c780u, _esp0);
  ESP += 4; return;
  /* 1098ca77 nop  */
  /* nop */
L_1098ca78:;
  /* 1098ca78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1098ca7b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1098ca7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098ca81 pop esi */
  ESI = (pop32());
  /* 1098ca82 pop edi */
  EDI = (pop32());
  /* 1098ca83 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1098ca84 ret  */
  ESPCHK(0x1098c780u, _esp0);
  ESP += 4; return;
  /* 1098ca85 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1098ca88:;
  /* 1098ca88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1098ca8b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1098ca8e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1098ca91 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1098ca94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098ca97 pop esi */
  ESI = (pop32());
  /* 1098ca98 pop edi */
  EDI = (pop32());
  /* 1098ca99 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1098ca9a ret  */
  ESPCHK(0x1098c780u, _esp0);
  ESP += 4; return;
  /* 1098ca9b nop  */
  /* nop */
L_1098ca9c:;
  /* 1098ca9c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1098ca9f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1098caa2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1098caa5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1098caa8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1098caab mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1098caae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098cab1 pop esi */
  ESI = (pop32());
  /* 1098cab2 pop edi */
  EDI = (pop32());
  /* 1098cab3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1098cab4 ret  */
  ESPCHK(0x1098c780u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1098cac0 (104 bytes, 43 insns) */
void f_1098cac0(void) {
  FTRACE(0x1098cac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098cac0 push ebx */
  push32((uint32_t)(EBX));
  /* 1098cac1 push esi */
  push32((uint32_t)(ESI));
  /* 1098cac2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1098cac6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098cac8 jne 0x1098cae2 */
  if (!C.zf) goto L_1098cae2;
  /* 1098caca mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1098cace mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1098cad2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1098cad4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1098cad6 mov ebx, eax */
  EBX = (EAX);
  /* 1098cad8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1098cadc div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1098cade mov edx, ebx */
  EDX = (EBX);
  /* 1098cae0 jmp 0x1098cb23 */
  goto L_1098cb23;
L_1098cae2:;
  /* 1098cae2 mov ecx, eax */
  ECX = (EAX);
  /* 1098cae4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1098cae8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1098caec mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1098caf0:;
  /* 1098caf0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1098caf2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1098caf4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1098caf6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1098caf8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1098cafa jne 0x1098caf0 */
  if (!C.zf) goto L_1098caf0;
  /* 1098cafc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1098cafe mov esi, eax */
  ESI = (EAX);
  /* 1098cb00 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1098cb04 mov ecx, eax */
  ECX = (EAX);
  /* 1098cb06 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1098cb0a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1098cb0c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098cb0e jb 0x1098cb1e */
  if (C.cf) goto L_1098cb1e;
  /* 1098cb10 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098cb14 ja 0x1098cb1e */
  if ((!C.cf&&!C.zf)) goto L_1098cb1e;
  /* 1098cb16 jb 0x1098cb1f */
  if (C.cf) goto L_1098cb1f;
  /* 1098cb18 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098cb1c jbe 0x1098cb1f */
  if ((C.cf||C.zf)) goto L_1098cb1f;
L_1098cb1e:;
  /* 1098cb1e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1098cb1f:;
  /* 1098cb1f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1098cb21 mov eax, esi */
  EAX = (ESI);
L_1098cb23:;
  /* 1098cb23 pop esi */
  ESI = (pop32());
  /* 1098cb24 pop ebx */
  EBX = (pop32());
  /* 1098cb25 ret 0x10 */
  ESPCHK(0x1098cac0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1098cb30 (117 bytes, 44 insns) */
void f_1098cb30(void) {
  FTRACE(0x1098cb30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098cb30 push ebx */
  push32((uint32_t)(EBX));
  /* 1098cb31 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1098cb35 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098cb37 jne 0x1098cb51 */
  if (!C.zf) goto L_1098cb51;
  /* 1098cb39 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1098cb3d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1098cb41 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1098cb43 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1098cb45 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1098cb49 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1098cb4b mov eax, edx */
  EAX = (EDX);
  /* 1098cb4d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1098cb4f jmp 0x1098cba1 */
  goto L_1098cba1;
L_1098cb51:;
  /* 1098cb51 mov ecx, eax */
  ECX = (EAX);
  /* 1098cb53 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1098cb57 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1098cb5b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1098cb5f:;
  /* 1098cb5f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1098cb61 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1098cb63 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1098cb65 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1098cb67 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1098cb69 jne 0x1098cb5f */
  if (!C.zf) goto L_1098cb5f;
  /* 1098cb6b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1098cb6d mov ecx, eax */
  ECX = (EAX);
  /* 1098cb6f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1098cb73 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1098cb74 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1098cb78 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098cb7a jb 0x1098cb8a */
  if (C.cf) goto L_1098cb8a;
  /* 1098cb7c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098cb80 ja 0x1098cb8a */
  if ((!C.cf&&!C.zf)) goto L_1098cb8a;
  /* 1098cb82 jb 0x1098cb92 */
  if (C.cf) goto L_1098cb92;
  /* 1098cb84 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098cb88 jbe 0x1098cb92 */
  if ((C.cf||C.zf)) goto L_1098cb92;
L_1098cb8a:;
  /* 1098cb8a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098cb8e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1098cb92:;
  /* 1098cb92 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098cb96 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098cb9a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1098cb9c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1098cb9e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1098cba1:;
  /* 1098cba1 pop ebx */
  EBX = (pop32());
  /* 1098cba2 ret 0x10 */
  ESPCHK(0x1098cb30u, _esp0);
  ESP += 20; return;
}

/* FUN_1000cbb0 @ 0x1098cbb0 (628 bytes, 214 insns) */
void f_1098cbb0(void) {
  FTRACE(0x1098cbb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098cbb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1098cbb1 mov ebp, esp */
  EBP = (ESP);
  /* 1098cbb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098cbb6 push ebx */
  push32((uint32_t)(EBX));
  /* 1098cbb7 push esi */
  push32((uint32_t)(ESI));
  /* 1098cbb8 push edi */
  push32((uint32_t)(EDI));
L_1098cbb9:;
  /* 1098cbb9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098cbbd jne 0x1098cbdd */
  if (!C.zf) goto L_1098cbdd;
  /* 1098cbbf push 0x109ad27c */
  push32((uint32_t)(0x109ad27cu));
  /* 1098cbc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098cbc6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1098cbc8 push 0x109ad270 */
  push32((uint32_t)(0x109ad270u));
  /* 1098cbcd push 2 */
  push32((uint32_t)(0x2u));
  /* 1098cbcf call 0x10984f60 */
  push32(0x1098cbd4u); f_10984f60();
  /* 1098cbd4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098cbd7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098cbda jne 0x1098cbdd */
  if (!C.zf) goto L_1098cbdd;
  /* 1098cbdc int3  */
  x86_unimpl("int3 @ 0x1098cbdc");
L_1098cbdd:;
  /* 1098cbdd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098cbdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098cbe1 jne 0x1098cbb9 */
  if (!C.zf) goto L_1098cbb9;
  /* 1098cbe3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098cbe6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1098cbe9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098cbec mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1098cbef mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1098cbf2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098cbf5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1098cbf8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1098cbfe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098cc00 je 0x1098cc0f */
  if (C.zf) goto L_1098cc0f;
  /* 1098cc02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098cc05 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1098cc08 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1098cc0b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098cc0d je 0x1098cc25 */
  if (C.zf) goto L_1098cc25;
L_1098cc0f:;
  /* 1098cc0f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098cc12 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1098cc15 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1098cc17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098cc1a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1098cc1d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1098cc20 jmp 0x1098ce1d */
  goto L_1098ce1d;
L_1098cc25:;
  /* 1098cc25 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098cc28 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1098cc2b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1098cc2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098cc30 je 0x1098cc7c */
  if (C.zf) goto L_1098cc7c;
  /* 1098cc32 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098cc35 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1098cc3c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098cc3f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1098cc42 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1098cc45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098cc47 je 0x1098cc65 */
  if (C.zf) goto L_1098cc65;
  /* 1098cc49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098cc4c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098cc4f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1098cc52 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1098cc54 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098cc57 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1098cc5a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1098cc5d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098cc60 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1098cc63 jmp 0x1098cc7c */
  goto L_1098cc7c;
L_1098cc65:;
  /* 1098cc65 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098cc68 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1098cc6b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1098cc6e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098cc71 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1098cc74 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1098cc77 jmp 0x1098ce1d */
  goto L_1098ce1d;
L_1098cc7c:;
  /* 1098cc7c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098cc7f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1098cc82 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1098cc85 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098cc88 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1098cc8b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098cc8e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1098cc91 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1098cc94 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098cc97 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1098cc9a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098cc9d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1098cca4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1098ccab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098ccae mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1098ccb1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098ccb4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1098ccb7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1098ccbd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098ccbf jne 0x1098ccef */
  if (!C.zf) goto L_1098ccef;
  /* 1098ccc1 cmp dword ptr [ebp - 8], 0x109b0140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x109b0140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ccc8 je 0x1098ccd3 */
  if (C.zf) goto L_1098ccd3;
  /* 1098ccca cmp dword ptr [ebp - 8], 0x109b0160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x109b0160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ccd1 jne 0x1098cce3 */
  if (!C.zf) goto L_1098cce3;
L_1098ccd3:;
  /* 1098ccd3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098ccd6 push edx */
  push32((uint32_t)(EDX));
  /* 1098ccd7 call 0x1098eb20 */
  push32(0x1098ccdcu); f_1098eb20();
  /* 1098ccdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ccdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098cce1 jne 0x1098ccef */
  if (!C.zf) goto L_1098ccef;
L_1098cce3:;
  /* 1098cce3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098cce6 push eax */
  push32((uint32_t)(EAX));
  /* 1098cce7 call 0x1098ea50 */
  push32(0x1098ccecu); f_1098ea50();
  /* 1098ccec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1098ccef:;
  /* 1098ccef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098ccf2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1098ccf5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1098ccfb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098ccfd je 0x1098cddb */
  if (C.zf) goto L_1098cddb;
L_1098cd03:;
  /* 1098cd03 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098cd06 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098cd09 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1098cd0b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098cd0e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098cd10 jge 0x1098cd33 */
  if ((C.sf==C.of)) goto L_1098cd33;
  /* 1098cd12 push 0x109ad230 */
  push32((uint32_t)(0x109ad230u));
  /* 1098cd17 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098cd19 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1098cd1e push 0x109ad270 */
  push32((uint32_t)(0x109ad270u));
  /* 1098cd23 push 2 */
  push32((uint32_t)(0x2u));
  /* 1098cd25 call 0x10984f60 */
  push32(0x1098cd2au); f_10984f60();
  /* 1098cd2a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098cd2d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098cd30 jne 0x1098cd33 */
  if (!C.zf) goto L_1098cd33;
  /* 1098cd32 int3  */
  x86_unimpl("int3 @ 0x1098cd32");
L_1098cd33:;
  /* 1098cd33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098cd35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098cd37 jne 0x1098cd03 */
  if (!C.zf) goto L_1098cd03;
  /* 1098cd39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098cd3c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098cd3f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1098cd41 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098cd44 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1098cd47 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098cd4a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1098cd4d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098cd50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098cd53 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1098cd55 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098cd58 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1098cd5b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098cd5e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098cd61 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1098cd64 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098cd68 jle 0x1098cd86 */
  if ((C.zf||C.sf!=C.of)) goto L_1098cd86;
  /* 1098cd6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098cd6d push ecx */
  push32((uint32_t)(ECX));
  /* 1098cd6e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098cd71 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1098cd74 push eax */
  push32((uint32_t)(EAX));
  /* 1098cd75 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098cd78 push ecx */
  push32((uint32_t)(ECX));
  /* 1098cd79 call 0x1098e740 */
  push32(0x1098cd7eu); f_1098e740();
  /* 1098cd7e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098cd81 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1098cd84 jmp 0x1098cdce */
  goto L_1098cdce;
L_1098cd86:;
  /* 1098cd86 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098cd8a je 0x1098cda9 */
  if (C.zf) goto L_1098cda9;
  /* 1098cd8c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098cd8f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1098cd92 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098cd95 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1098cd98 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098cd9b mov ecx, dword ptr [edx*4 + 0x109b3020] */
  ECX = (r32((uint32_t)(EDX*4 + 0x109b3020)));
  /* 1098cda2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098cda4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1098cda7 jmp 0x1098cdb0 */
  goto L_1098cdb0;
L_1098cda9:;
  /* 1098cda9 mov dword ptr [ebp - 0x14], 0x109afa60 */
  w32((uint32_t)(EBP + -0x14), (0x109afa60u));
L_1098cdb0:;
  /* 1098cdb0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098cdb3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1098cdb7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1098cdba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098cdbc je 0x1098cdce */
  if (C.zf) goto L_1098cdce;
  /* 1098cdbe push 2 */
  push32((uint32_t)(0x2u));
  /* 1098cdc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098cdc2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098cdc5 push ecx */
  push32((uint32_t)(ECX));
  /* 1098cdc6 call 0x1098e5f0 */
  push32(0x1098cdcbu); f_1098e5f0();
  /* 1098cdcb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1098cdce:;
  /* 1098cdce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098cdd1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1098cdd4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1098cdd7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1098cdd9 jmp 0x1098cdf9 */
  goto L_1098cdf9;
L_1098cddb:;
  /* 1098cddb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1098cde2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098cde5 push edx */
  push32((uint32_t)(EDX));
  /* 1098cde6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1098cde9 push eax */
  push32((uint32_t)(EAX));
  /* 1098cdea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098cded push ecx */
  push32((uint32_t)(ECX));
  /* 1098cdee call 0x1098e740 */
  push32(0x1098cdf3u); f_1098e740();
  /* 1098cdf3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098cdf6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1098cdf9:;
  /* 1098cdf9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098cdfc cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098cdff je 0x1098ce15 */
  if (C.zf) goto L_1098ce15;
  /* 1098ce01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098ce04 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1098ce07 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1098ce0a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098ce0d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1098ce10 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1098ce13 jmp 0x1098ce1d */
  goto L_1098ce1d;
L_1098ce15:;
  /* 1098ce15 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098ce18 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1098ce1d:;
  /* 1098ce1d pop edi */
  EDI = (pop32());
  /* 1098ce1e pop esi */
  ESI = (pop32());
  /* 1098ce1f pop ebx */
  EBX = (pop32());
  /* 1098ce20 mov esp, ebp */
  ESP = (EBP);
  /* 1098ce22 pop ebp */
  EBP = (pop32());
  /* 1098ce23 ret  */
  ESPCHK(0x1098cbb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce30 @ 0x1098ce30 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1098ce30(void) {
  FTRACE(0x1098ce30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098ce30 push ebp */
  push32((uint32_t)(EBP));
  /* 1098ce31 mov ebp, esp */
  EBP = (ESP);
  /* 1098ce33 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098ce39 push ebx */
  push32((uint32_t)(EBX));
  /* 1098ce3a push esi */
  push32((uint32_t)(ESI));
  /* 1098ce3b push edi */
  push32((uint32_t)(EDI));
  /* 1098ce3c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1098ce43 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1098ce4d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1098ce54:;
  /* 1098ce54 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098ce57 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1098ce59 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1098ce5c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1098ce60 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098ce63 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ce66 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1098ce69 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098ce6b je 0x1098da47 */
  if (C.zf) goto L_1098da47;
  /* 1098ce71 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ce78 jl 0x1098da47 */
  if ((C.sf!=C.of)) goto L_1098da47;
  /* 1098ce7e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1098ce82 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ce85 jl 0x1098cea6 */
  if ((C.sf!=C.of)) goto L_1098cea6;
  /* 1098ce87 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1098ce8b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ce8e jg 0x1098cea6 */
  if ((!C.zf&&C.sf==C.of)) goto L_1098cea6;
  /* 1098ce90 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1098ce94 movsx ecx, byte ptr [eax + 0x109ad268] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x109ad268))));
  /* 1098ce9b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1098ce9e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1098cea4 jmp 0x1098ceb0 */
  goto L_1098ceb0;
L_1098cea6:;
  /* 1098cea6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1098ceb0:;
  /* 1098ceb0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1098ceb6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1098ceb9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098cebc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098cebf movsx edx, byte ptr [ecx + eax*8 + 0x109ad288] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x109ad288))));
  /* 1098cec7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1098ceca mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1098cecd mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098ced0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1098ced6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098cedd ja 0x1098da42 */
  if ((!C.cf&&!C.zf)) goto L_1098da42;
  /* 1098cee3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1098cee9 jmp dword ptr [ecx*4 + 0x1098da54] */
  switch (ECX) {
    case 0: goto L_1098cef0;
    case 1: goto L_1098cf8a;
    case 2: goto L_1098cfcc;
    case 3: goto L_1098d03b;
    case 4: goto L_1098d093;
    case 5: goto L_1098d0a2;
    case 6: goto L_1098d0ee;
    case 7: goto L_1098d181;
    case 8: goto L_1098d018;
    case 9: goto L_1098d023;
    case 10: goto L_1098d00e;
    case 11: goto L_1098d003;
    case 12: goto L_1098d02e;
    case 13: goto L_1098d036;
    default: x86_unimpl("switch@0x1098cee9 out of table"); return;
  }
L_1098cef0:;
  /* 1098cef0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1098cef7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1098cefa and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1098cf00 mov eax, dword ptr [0x109afc98] */
  EAX = (r32((uint32_t)(0x109afc98)));
  /* 1098cf05 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1098cf07 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1098cf0b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1098cf11 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098cf13 je 0x1098cf6d */
  if (C.zf) goto L_1098cf6d;
  /* 1098cf15 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1098cf1b push edx */
  push32((uint32_t)(EDX));
  /* 1098cf1c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098cf1f push eax */
  push32((uint32_t)(EAX));
  /* 1098cf20 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1098cf24 push ecx */
  push32((uint32_t)(ECX));
  /* 1098cf25 call 0x1098db60 */
  push32(0x1098cf2au); f_1098db60();
  /* 1098cf2a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098cf2d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098cf30 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1098cf32 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1098cf35 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098cf38 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098cf3b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1098cf3e:;
  /* 1098cf3e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1098cf42 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098cf44 jne 0x1098cf67 */
  if (!C.zf) goto L_1098cf67;
  /* 1098cf46 push 0x109ad308 */
  push32((uint32_t)(0x109ad308u));
  /* 1098cf4b push 0 */
  push32((uint32_t)(0x0u));
  /* 1098cf4d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1098cf52 push 0x109ad2fc */
  push32((uint32_t)(0x109ad2fcu));
  /* 1098cf57 push 2 */
  push32((uint32_t)(0x2u));
  /* 1098cf59 call 0x10984f60 */
  push32(0x1098cf5eu); f_10984f60();
  /* 1098cf5e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098cf61 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098cf64 jne 0x1098cf67 */
  if (!C.zf) goto L_1098cf67;
  /* 1098cf66 int3  */
  x86_unimpl("int3 @ 0x1098cf66");
L_1098cf67:;
  /* 1098cf67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098cf69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098cf6b jne 0x1098cf3e */
  if (!C.zf) goto L_1098cf3e;
L_1098cf6d:;
  /* 1098cf6d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1098cf73 push ecx */
  push32((uint32_t)(ECX));
  /* 1098cf74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098cf77 push edx */
  push32((uint32_t)(EDX));
  /* 1098cf78 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1098cf7c push eax */
  push32((uint32_t)(EAX));
  /* 1098cf7d call 0x1098db60 */
  push32(0x1098cf82u); f_1098db60();
  /* 1098cf82 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098cf85 jmp 0x1098da42 */
  goto L_1098da42;
L_1098cf8a:;
  /* 1098cf8a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1098cf91 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098cf94 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1098cf9a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1098cfa0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1098cfa6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1098cfac mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1098cfaf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1098cfb6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1098cfc0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1098cfc7 jmp 0x1098da42 */
  goto L_1098da42;
L_1098cfcc:;
  /* 1098cfcc movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1098cfd0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1098cfd6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1098cfdc sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098cfdf mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1098cfe5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098cfec ja 0x1098d036 */
  if ((!C.cf&&!C.zf)) goto L_1098d036;
  /* 1098cfee mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1098cff4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098cff6 mov al, byte ptr [ecx + 0x1098da8c] */
  AL = (r8((uint32_t)(ECX + 0x1098da8c)));
  /* 1098cffc jmp dword ptr [eax*4 + 0x1098da74] */
  switch (EAX) {
    case 0: goto L_1098d018;
    case 1: goto L_1098d023;
    case 2: goto L_1098d00e;
    case 3: goto L_1098d003;
    case 4: goto L_1098d02e;
    case 5: goto L_1098d036;
    default: x86_unimpl("switch@0x1098cffc out of table"); return;
  }
L_1098d003:;
  /* 1098d003 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d006 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1098d009 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1098d00c jmp 0x1098d036 */
  goto L_1098d036;
L_1098d00e:;
  /* 1098d00e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d011 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1098d013 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1098d016 jmp 0x1098d036 */
  goto L_1098d036;
L_1098d018:;
  /* 1098d018 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d01b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1098d01e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1098d021 jmp 0x1098d036 */
  goto L_1098d036;
L_1098d023:;
  /* 1098d023 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d026 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1098d029 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1098d02c jmp 0x1098d036 */
  goto L_1098d036;
L_1098d02e:;
  /* 1098d02e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d031 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1098d033 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1098d036:;
  /* 1098d036 jmp 0x1098da42 */
  goto L_1098da42;
L_1098d03b:;
  /* 1098d03b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1098d03f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098d042 jne 0x1098d077 */
  if (!C.zf) goto L_1098d077;
  /* 1098d044 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1098d047 push edx */
  push32((uint32_t)(EDX));
  /* 1098d048 call 0x1098dc70 */
  push32(0x1098d04du); f_1098dc70();
  /* 1098d04d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098d050 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1098d056 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098d05d jge 0x1098d075 */
  if ((C.sf==C.of)) goto L_1098d075;
  /* 1098d05f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d062 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1098d064 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1098d067 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1098d06d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1098d06f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1098d075:;
  /* 1098d075 jmp 0x1098d08e */
  goto L_1098d08e;
L_1098d077:;
  /* 1098d077 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1098d07d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098d080 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1098d084 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1098d088 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1098d08e:;
  /* 1098d08e jmp 0x1098da42 */
  goto L_1098da42;
L_1098d093:;
  /* 1098d093 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1098d09d jmp 0x1098da42 */
  goto L_1098da42;
L_1098d0a2:;
  /* 1098d0a2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1098d0a6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098d0a9 jne 0x1098d0d2 */
  if (!C.zf) goto L_1098d0d2;
  /* 1098d0ab lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1098d0ae push eax */
  push32((uint32_t)(EAX));
  /* 1098d0af call 0x1098dc70 */
  push32(0x1098d0b4u); f_1098dc70();
  /* 1098d0b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098d0b7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1098d0bd cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098d0c4 jge 0x1098d0d0 */
  if ((C.sf==C.of)) goto L_1098d0d0;
  /* 1098d0c6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1098d0d0:;
  /* 1098d0d0 jmp 0x1098d0e9 */
  goto L_1098d0e9;
L_1098d0d2:;
  /* 1098d0d2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1098d0d8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098d0db movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1098d0df lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1098d0e3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1098d0e9:;
  /* 1098d0e9 jmp 0x1098da42 */
  goto L_1098da42;
L_1098d0ee:;
  /* 1098d0ee movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1098d0f2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1098d0f8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1098d0fe sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098d101 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1098d107 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098d10e ja 0x1098d17c */
  if ((!C.cf&&!C.zf)) goto L_1098d17c;
  /* 1098d110 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1098d116 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098d118 mov al, byte ptr [ecx + 0x1098dab1] */
  AL = (r8((uint32_t)(ECX + 0x1098dab1)));
  /* 1098d11e jmp dword ptr [eax*4 + 0x1098da9d] */
  switch (EAX) {
    case 0: goto L_1098d130;
    case 1: goto L_1098d169;
    case 2: goto L_1098d125;
    case 3: goto L_1098d173;
    case 4: goto L_1098d17c;
    default: x86_unimpl("switch@0x1098d11e out of table"); return;
  }
L_1098d125:;
  /* 1098d125 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d128 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1098d12b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1098d12e jmp 0x1098d17c */
  goto L_1098d17c;
L_1098d130:;
  /* 1098d130 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098d133 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1098d136 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098d139 jne 0x1098d15b */
  if (!C.zf) goto L_1098d15b;
  /* 1098d13b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098d13e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1098d142 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098d145 jne 0x1098d15b */
  if (!C.zf) goto L_1098d15b;
  /* 1098d147 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098d14a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098d14d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1098d150 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d153 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1098d156 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1098d159 jmp 0x1098d167 */
  goto L_1098d167;
L_1098d15b:;
  /* 1098d15b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1098d162 jmp 0x1098cef0 */
  goto L_1098cef0;
L_1098d167:;
  /* 1098d167 jmp 0x1098d17c */
  goto L_1098d17c;
L_1098d169:;
  /* 1098d169 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d16c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1098d16e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1098d171 jmp 0x1098d17c */
  goto L_1098d17c;
L_1098d173:;
  /* 1098d173 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d176 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1098d179 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1098d17c:;
  /* 1098d17c jmp 0x1098da42 */
  goto L_1098da42;
L_1098d181:;
  /* 1098d181 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1098d185 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1098d18b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1098d191 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098d194 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1098d19a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098d1a1 ja 0x1098d867 */
  if ((!C.cf&&!C.zf)) goto L_1098d867;
  /* 1098d1a7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1098d1ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1098d1af mov cl, byte ptr [edx + 0x1098db1c] */
  CL = (r8((uint32_t)(EDX + 0x1098db1c)));
  /* 1098d1b5 jmp dword ptr [ecx*4 + 0x1098dae0] */
  switch (ECX) {
    case 0: goto L_1098d1bc;
    case 1: goto L_1098d450;
    case 2: goto L_1098d2e0;
    case 3: goto L_1098d589;
    case 4: goto L_1098d24b;
    case 5: goto L_1098d1d1;
    case 6: goto L_1098d55b;
    case 7: goto L_1098d460;
    case 8: goto L_1098d405;
    case 9: goto L_1098d5d5;
    case 10: goto L_1098d57f;
    case 11: goto L_1098d2f6;
    case 12: goto L_1098d573;
    case 13: goto L_1098d595;
    case 14: goto L_1098d867;
    default: x86_unimpl("switch@0x1098d1b5 out of table"); return;
  }
L_1098d1bc:;
  /* 1098d1bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d1bf and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1098d1c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098d1c6 jne 0x1098d1d1 */
  if (!C.zf) goto L_1098d1d1;
  /* 1098d1c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d1cb or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1098d1ce mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1098d1d1:;
  /* 1098d1d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d1d4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1098d1da test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098d1dc je 0x1098d217 */
  if (C.zf) goto L_1098d217;
  /* 1098d1de lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1098d1e1 push eax */
  push32((uint32_t)(EAX));
  /* 1098d1e2 call 0x1098dcb0 */
  push32(0x1098d1e7u); f_1098dcb0();
  /* 1098d1e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098d1ea mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1098d1ee mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1098d1f2 push ecx */
  push32((uint32_t)(ECX));
  /* 1098d1f3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1098d1f9 push edx */
  push32((uint32_t)(EDX));
  /* 1098d1fa call 0x1098ed90 */
  push32(0x1098d1ffu); f_1098ed90();
  /* 1098d1ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098d202 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1098d205 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098d209 jge 0x1098d215 */
  if ((C.sf==C.of)) goto L_1098d215;
  /* 1098d20b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1098d215:;
  /* 1098d215 jmp 0x1098d23d */
  goto L_1098d23d;
L_1098d217:;
  /* 1098d217 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1098d21a push eax */
  push32((uint32_t)(EAX));
  /* 1098d21b call 0x1098dc70 */
  push32(0x1098d220u); f_1098dc70();
  /* 1098d220 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098d223 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1098d22a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1098d230 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1098d236 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1098d23d:;
  /* 1098d23d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1098d243 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1098d246 jmp 0x1098d867 */
  goto L_1098d867;
L_1098d24b:;
  /* 1098d24b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1098d24e push eax */
  push32((uint32_t)(EAX));
  /* 1098d24f call 0x1098dc70 */
  push32(0x1098d254u); f_1098dc70();
  /* 1098d254 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098d257 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1098d25d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098d264 je 0x1098d272 */
  if (C.zf) goto L_1098d272;
  /* 1098d266 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1098d26c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098d270 jne 0x1098d28c */
  if (!C.zf) goto L_1098d28c;
L_1098d272:;
  /* 1098d272 mov edx, dword ptr [0x109affb0] */
  EDX = (r32((uint32_t)(0x109affb0)));
  /* 1098d278 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1098d27b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098d27e push eax */
  push32((uint32_t)(EAX));
  /* 1098d27f call 0x10988cd0 */
  push32(0x1098d284u); f_10988cd0();
  /* 1098d284 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098d287 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1098d28a jmp 0x1098d2db */
  goto L_1098d2db;
L_1098d28c:;
  /* 1098d28c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d28f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1098d295 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098d297 je 0x1098d2bc */
  if (C.zf) goto L_1098d2bc;
  /* 1098d299 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1098d29f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1098d2a2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1098d2a5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1098d2ab movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1098d2ae shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1098d2b0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1098d2b3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1098d2ba jmp 0x1098d2db */
  goto L_1098d2db;
L_1098d2bc:;
  /* 1098d2bc mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1098d2c3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1098d2c9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1098d2cc mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1098d2cf mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1098d2d5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1098d2d8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1098d2db:;
  /* 1098d2db jmp 0x1098d867 */
  goto L_1098d867;
L_1098d2e0:;
  /* 1098d2e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d2e3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1098d2e9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098d2eb jne 0x1098d2f6 */
  if (!C.zf) goto L_1098d2f6;
  /* 1098d2ed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d2f0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1098d2f3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1098d2f6:;
  /* 1098d2f6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098d2fd jne 0x1098d30b */
  if (!C.zf) goto L_1098d30b;
  /* 1098d2ff mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1098d309 jmp 0x1098d317 */
  goto L_1098d317;
L_1098d30b:;
  /* 1098d30b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1098d311 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1098d317:;
  /* 1098d317 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1098d31d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1098d323 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1098d326 push edx */
  push32((uint32_t)(EDX));
  /* 1098d327 call 0x1098dc70 */
  push32(0x1098d32cu); f_1098dc70();
  /* 1098d32c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098d32f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1098d332 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d335 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1098d33a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098d33c je 0x1098d3a6 */
  if (C.zf) goto L_1098d3a6;
  /* 1098d33e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098d342 jne 0x1098d34d */
  if (!C.zf) goto L_1098d34d;
  /* 1098d344 mov ecx, dword ptr [0x109affb4] */
  ECX = (r32((uint32_t)(0x109affb4)));
  /* 1098d34a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1098d34d:;
  /* 1098d34d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1098d354 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098d357 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1098d35d:;
  /* 1098d35d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1098d363 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1098d369 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098d36c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1098d372 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098d374 je 0x1098d396 */
  if (C.zf) goto L_1098d396;
  /* 1098d376 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1098d37c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098d37e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1098d381 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098d383 je 0x1098d396 */
  if (C.zf) goto L_1098d396;
  /* 1098d385 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1098d38b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098d38e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1098d394 jmp 0x1098d35d */
  goto L_1098d35d;
L_1098d396:;
  /* 1098d396 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1098d39c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098d39f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1098d3a1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1098d3a4 jmp 0x1098d400 */
  goto L_1098d400;
L_1098d3a6:;
  /* 1098d3a6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098d3aa jne 0x1098d3b4 */
  if (!C.zf) goto L_1098d3b4;
  /* 1098d3ac mov eax, dword ptr [0x109affb0] */
  EAX = (r32((uint32_t)(0x109affb0)));
  /* 1098d3b1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1098d3b4:;
  /* 1098d3b4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098d3b7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1098d3bd:;
  /* 1098d3bd mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1098d3c3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1098d3c9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098d3cc mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1098d3d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098d3d4 je 0x1098d3f4 */
  if (C.zf) goto L_1098d3f4;
  /* 1098d3d6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1098d3dc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1098d3df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098d3e1 je 0x1098d3f4 */
  if (C.zf) goto L_1098d3f4;
  /* 1098d3e3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1098d3e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098d3ec mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1098d3f2 jmp 0x1098d3bd */
  goto L_1098d3bd;
L_1098d3f4:;
  /* 1098d3f4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1098d3fa sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098d3fd mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1098d400:;
  /* 1098d400 jmp 0x1098d867 */
  goto L_1098d867;
L_1098d405:;
  /* 1098d405 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1098d408 push edx */
  push32((uint32_t)(EDX));
  /* 1098d409 call 0x1098dc70 */
  push32(0x1098d40eu); f_1098dc70();
  /* 1098d40e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098d411 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1098d417 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d41a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1098d41d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098d41f je 0x1098d433 */
  if (C.zf) goto L_1098d433;
  /* 1098d421 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1098d427 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1098d42e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1098d431 jmp 0x1098d441 */
  goto L_1098d441;
L_1098d433:;
  /* 1098d433 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1098d439 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1098d43f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1098d441:;
  /* 1098d441 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1098d44b jmp 0x1098d867 */
  goto L_1098d867;
L_1098d450:;
  /* 1098d450 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1098d457 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1098d45a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1098d45d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1098d460:;
  /* 1098d460 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d463 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1098d465 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1098d468 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1098d46e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1098d471 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098d478 jge 0x1098d486 */
  if ((C.sf==C.of)) goto L_1098d486;
  /* 1098d47a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1098d484 jmp 0x1098d4a2 */
  goto L_1098d4a2;
L_1098d486:;
  /* 1098d486 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098d48d jne 0x1098d4a2 */
  if (!C.zf) goto L_1098d4a2;
  /* 1098d48f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1098d493 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098d496 jne 0x1098d4a2 */
  if (!C.zf) goto L_1098d4a2;
  /* 1098d498 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1098d4a2:;
  /* 1098d4a2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1098d4a5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098d4a8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1098d4ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1098d4ae sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098d4b1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1098d4b3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1098d4b6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1098d4bc mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1098d4c2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098d4c5 push ecx */
  push32((uint32_t)(ECX));
  /* 1098d4c6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1098d4cc push edx */
  push32((uint32_t)(EDX));
  /* 1098d4cd movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1098d4d1 push eax */
  push32((uint32_t)(EAX));
  /* 1098d4d2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098d4d5 push ecx */
  push32((uint32_t)(ECX));
  /* 1098d4d6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1098d4dc push edx */
  push32((uint32_t)(EDX));
  /* 1098d4dd call dword ptr [0x109b03a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b03a0))), 0x1098d4e3u);
  /* 1098d4e3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098d4e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d4e9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1098d4ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098d4f0 je 0x1098d508 */
  if (C.zf) goto L_1098d508;
  /* 1098d4f2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098d4f9 jne 0x1098d508 */
  if (!C.zf) goto L_1098d508;
  /* 1098d4fb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098d4fe push ecx */
  push32((uint32_t)(ECX));
  /* 1098d4ff call dword ptr [0x109b03ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b03ac))), 0x1098d505u);
  /* 1098d505 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1098d508:;
  /* 1098d508 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1098d50c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098d50f jne 0x1098d52a */
  if (!C.zf) goto L_1098d52a;
  /* 1098d511 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d514 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1098d519 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098d51b jne 0x1098d52a */
  if (!C.zf) goto L_1098d52a;
  /* 1098d51d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098d520 push ecx */
  push32((uint32_t)(ECX));
  /* 1098d521 call dword ptr [0x109b03a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b03a4))), 0x1098d527u);
  /* 1098d527 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1098d52a:;
  /* 1098d52a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098d52d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1098d530 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098d533 jne 0x1098d547 */
  if (!C.zf) goto L_1098d547;
  /* 1098d535 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d538 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1098d53b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1098d53e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098d541 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098d544 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1098d547:;
  /* 1098d547 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098d54a push eax */
  push32((uint32_t)(EAX));
  /* 1098d54b call 0x10988cd0 */
  push32(0x1098d550u); f_10988cd0();
  /* 1098d550 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098d553 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1098d556 jmp 0x1098d867 */
  goto L_1098d867;
L_1098d55b:;
  /* 1098d55b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d55e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1098d561 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1098d564 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1098d56e jmp 0x1098d5f5 */
  goto L_1098d5f5;
L_1098d573:;
  /* 1098d573 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1098d57d jmp 0x1098d5f5 */
  goto L_1098d5f5;
L_1098d57f:;
  /* 1098d57f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1098d589:;
  /* 1098d589 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1098d593 jmp 0x1098d59f */
  goto L_1098d59f;
L_1098d595:;
  /* 1098d595 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1098d59f:;
  /* 1098d59f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1098d5a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d5ac and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1098d5b2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098d5b4 je 0x1098d5d3 */
  if (C.zf) goto L_1098d5d3;
  /* 1098d5b6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1098d5bd mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1098d5c3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098d5c6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1098d5cc mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1098d5d3:;
  /* 1098d5d3 jmp 0x1098d5f5 */
  goto L_1098d5f5;
L_1098d5d5:;
  /* 1098d5d5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1098d5df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d5e2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1098d5e8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098d5ea je 0x1098d5f5 */
  if (C.zf) goto L_1098d5f5;
  /* 1098d5ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d5ef or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1098d5f2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1098d5f5:;
  /* 1098d5f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d5f8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1098d5fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098d5ff je 0x1098d61e */
  if (C.zf) goto L_1098d61e;
  /* 1098d601 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1098d604 push ecx */
  push32((uint32_t)(ECX));
  /* 1098d605 call 0x1098dc90 */
  push32(0x1098d60au); f_1098dc90();
  /* 1098d60a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098d60d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1098d613 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1098d619 jmp 0x1098d6af */
  goto L_1098d6af;
L_1098d61e:;
  /* 1098d61e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d621 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1098d624 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098d626 je 0x1098d670 */
  if (C.zf) goto L_1098d670;
  /* 1098d628 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d62b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1098d62e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098d630 je 0x1098d650 */
  if (C.zf) goto L_1098d650;
  /* 1098d632 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1098d635 push ecx */
  push32((uint32_t)(ECX));
  /* 1098d636 call 0x1098dc70 */
  push32(0x1098d63bu); f_1098dc70();
  /* 1098d63b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098d63e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1098d641 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1098d642 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1098d648 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1098d64e jmp 0x1098d66e */
  goto L_1098d66e;
L_1098d650:;
  /* 1098d650 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1098d653 push edx */
  push32((uint32_t)(EDX));
  /* 1098d654 call 0x1098dc70 */
  push32(0x1098d659u); f_1098dc70();
  /* 1098d659 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098d65c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1098d661 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1098d662 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1098d668 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1098d66e:;
  /* 1098d66e jmp 0x1098d6af */
  goto L_1098d6af;
L_1098d670:;
  /* 1098d670 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d673 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1098d676 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098d678 je 0x1098d695 */
  if (C.zf) goto L_1098d695;
  /* 1098d67a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1098d67d push ecx */
  push32((uint32_t)(ECX));
  /* 1098d67e call 0x1098dc70 */
  push32(0x1098d683u); f_1098dc70();
  /* 1098d683 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098d686 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1098d687 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1098d68d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1098d693 jmp 0x1098d6af */
  goto L_1098d6af;
L_1098d695:;
  /* 1098d695 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1098d698 push edx */
  push32((uint32_t)(EDX));
  /* 1098d699 call 0x1098dc70 */
  push32(0x1098d69eu); f_1098dc70();
  /* 1098d69e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098d6a1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1098d6a3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1098d6a9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1098d6af:;
  /* 1098d6af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d6b2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1098d6b5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098d6b7 je 0x1098d6f7 */
  if (C.zf) goto L_1098d6f7;
  /* 1098d6b9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098d6c0 jg 0x1098d6f7 */
  if ((!C.zf&&C.sf==C.of)) goto L_1098d6f7;
  /* 1098d6c2 jl 0x1098d6cd */
  if ((C.sf!=C.of)) goto L_1098d6cd;
  /* 1098d6c4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098d6cb jae 0x1098d6f7 */
  if (!C.cf) goto L_1098d6f7;
L_1098d6cd:;
  /* 1098d6cd mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1098d6d3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1098d6d5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1098d6db adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098d6de neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1098d6e0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1098d6e6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1098d6ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d6ef or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1098d6f2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1098d6f5 jmp 0x1098d70f */
  goto L_1098d70f;
L_1098d6f7:;
  /* 1098d6f7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1098d6fd mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1098d703 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1098d709 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1098d70f:;
  /* 1098d70f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d712 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1098d718 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098d71a jne 0x1098d737 */
  if (!C.zf) goto L_1098d737;
  /* 1098d71c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1098d722 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1098d728 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1098d72b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1098d731 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1098d737:;
  /* 1098d737 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098d73e jge 0x1098d74c */
  if ((C.sf==C.of)) goto L_1098d74c;
  /* 1098d740 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1098d74a jmp 0x1098d755 */
  goto L_1098d755;
L_1098d74c:;
  /* 1098d74c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d74f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1098d752 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1098d755:;
  /* 1098d755 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1098d75b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1098d761 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098d763 jne 0x1098d76c */
  if (!C.zf) goto L_1098d76c;
  /* 1098d765 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1098d76c:;
  /* 1098d76c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1098d76f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1098d772:;
  /* 1098d772 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1098d778 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1098d77e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098d781 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1098d787 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098d789 jg 0x1098d79f */
  if ((!C.zf&&C.sf==C.of)) goto L_1098d79f;
  /* 1098d78b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1098d791 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1098d797 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098d799 je 0x1098d820 */
  if (C.zf) goto L_1098d820;
L_1098d79f:;
  /* 1098d79f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1098d7a5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1098d7a6 push edx */
  push32((uint32_t)(EDX));
  /* 1098d7a7 push eax */
  push32((uint32_t)(EAX));
  /* 1098d7a8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1098d7ae push edx */
  push32((uint32_t)(EDX));
  /* 1098d7af mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1098d7b5 push eax */
  push32((uint32_t)(EAX));
  /* 1098d7b6 call 0x1098cb30 */
  push32(0x1098d7bbu); f_1098cb30();
  /* 1098d7bb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098d7be mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1098d7c4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1098d7ca cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1098d7cb push edx */
  push32((uint32_t)(EDX));
  /* 1098d7cc push eax */
  push32((uint32_t)(EAX));
  /* 1098d7cd mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1098d7d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1098d7d4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1098d7da push edx */
  push32((uint32_t)(EDX));
  /* 1098d7db call 0x1098cac0 */
  push32(0x1098d7e0u); f_1098cac0();
  /* 1098d7e0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1098d7e6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1098d7ec cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098d7f3 jle 0x1098d807 */
  if ((C.zf||C.sf!=C.of)) goto L_1098d807;
  /* 1098d7f5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1098d7fb add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098d801 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1098d807:;
  /* 1098d807 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098d80a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1098d810 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1098d812 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098d815 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098d818 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1098d81b jmp 0x1098d772 */
  goto L_1098d772;
L_1098d820:;
  /* 1098d820 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1098d823 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098d826 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1098d829 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098d82c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098d82f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1098d832 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d835 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1098d83a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098d83c je 0x1098d867 */
  if (C.zf) goto L_1098d867;
  /* 1098d83e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098d841 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1098d844 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098d847 jne 0x1098d84f */
  if (!C.zf) goto L_1098d84f;
  /* 1098d849 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098d84d jne 0x1098d867 */
  if (!C.zf) goto L_1098d867;
L_1098d84f:;
  /* 1098d84f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098d852 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098d855 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1098d858 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098d85b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1098d85e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098d861 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098d864 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1098d867:;
  /* 1098d867 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098d86e jne 0x1098da42 */
  if (!C.zf) goto L_1098da42;
  /* 1098d874 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d877 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1098d87a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098d87c je 0x1098d8cd */
  if (C.zf) goto L_1098d8cd;
  /* 1098d87e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d881 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1098d887 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098d889 je 0x1098d89b */
  if (C.zf) goto L_1098d89b;
  /* 1098d88b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1098d892 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1098d899 jmp 0x1098d8cd */
  goto L_1098d8cd;
L_1098d89b:;
  /* 1098d89b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d89e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1098d8a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098d8a3 je 0x1098d8b5 */
  if (C.zf) goto L_1098d8b5;
  /* 1098d8a5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1098d8ac mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1098d8b3 jmp 0x1098d8cd */
  goto L_1098d8cd;
L_1098d8b5:;
  /* 1098d8b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d8b8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1098d8bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098d8bd je 0x1098d8cd */
  if (C.zf) goto L_1098d8cd;
  /* 1098d8bf mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1098d8c6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1098d8cd:;
  /* 1098d8cd mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1098d8d3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098d8d6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098d8d9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1098d8df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d8e2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1098d8e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098d8e7 jne 0x1098d905 */
  if (!C.zf) goto L_1098d905;
  /* 1098d8e9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1098d8ef push eax */
  push32((uint32_t)(EAX));
  /* 1098d8f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098d8f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1098d8f4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1098d8fa push edx */
  push32((uint32_t)(EDX));
  /* 1098d8fb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1098d8fd call 0x1098dbe0 */
  push32(0x1098d902u); f_1098dbe0();
  /* 1098d902 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1098d905:;
  /* 1098d905 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1098d90b push eax */
  push32((uint32_t)(EAX));
  /* 1098d90c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098d90f push ecx */
  push32((uint32_t)(ECX));
  /* 1098d910 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098d913 push edx */
  push32((uint32_t)(EDX));
  /* 1098d914 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1098d91a push eax */
  push32((uint32_t)(EAX));
  /* 1098d91b call 0x1098dc20 */
  push32(0x1098d920u); f_1098dc20();
  /* 1098d920 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098d923 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d926 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1098d929 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098d92b je 0x1098d953 */
  if (C.zf) goto L_1098d953;
  /* 1098d92d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098d930 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1098d933 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098d935 jne 0x1098d953 */
  if (!C.zf) goto L_1098d953;
  /* 1098d937 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1098d93d push eax */
  push32((uint32_t)(EAX));
  /* 1098d93e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098d941 push ecx */
  push32((uint32_t)(ECX));
  /* 1098d942 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1098d948 push edx */
  push32((uint32_t)(EDX));
  /* 1098d949 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1098d94b call 0x1098dbe0 */
  push32(0x1098d950u); f_1098dbe0();
  /* 1098d950 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1098d953:;
  /* 1098d953 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098d957 je 0x1098da01 */
  if (C.zf) goto L_1098da01;
  /* 1098d95d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098d961 jle 0x1098da01 */
  if ((C.zf||C.sf!=C.of)) goto L_1098da01;
  /* 1098d967 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098d96a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1098d970 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098d973 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1098d979:;
  /* 1098d979 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1098d97f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1098d985 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098d988 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1098d98e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098d990 je 0x1098d9ff */
  if (C.zf) goto L_1098d9ff;
  /* 1098d992 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1098d998 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1098d99b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1098d9a2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1098d9a9 push eax */
  push32((uint32_t)(EAX));
  /* 1098d9aa lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1098d9b0 push ecx */
  push32((uint32_t)(ECX));
  /* 1098d9b1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1098d9b7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098d9ba mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1098d9c0 call 0x1098ed90 */
  push32(0x1098d9c5u); f_1098ed90();
  /* 1098d9c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098d9c8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1098d9ce cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098d9d5 jg 0x1098d9d9 */
  if ((!C.zf&&C.sf==C.of)) goto L_1098d9d9;
  /* 1098d9d7 jmp 0x1098d9ff */
  goto L_1098d9ff;
L_1098d9d9:;
  /* 1098d9d9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1098d9df push eax */
  push32((uint32_t)(EAX));
  /* 1098d9e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098d9e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1098d9e4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1098d9ea push edx */
  push32((uint32_t)(EDX));
  /* 1098d9eb lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1098d9f1 push eax */
  push32((uint32_t)(EAX));
  /* 1098d9f2 call 0x1098dc20 */
  push32(0x1098d9f7u); f_1098dc20();
  /* 1098d9f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098d9fa jmp 0x1098d979 */
  goto L_1098d979;
L_1098d9ff:;
  /* 1098d9ff jmp 0x1098da1c */
  goto L_1098da1c;
L_1098da01:;
  /* 1098da01 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1098da07 push ecx */
  push32((uint32_t)(ECX));
  /* 1098da08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098da0b push edx */
  push32((uint32_t)(EDX));
  /* 1098da0c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098da0f push eax */
  push32((uint32_t)(EAX));
  /* 1098da10 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098da13 push ecx */
  push32((uint32_t)(ECX));
  /* 1098da14 call 0x1098dc20 */
  push32(0x1098da19u); f_1098dc20();
  /* 1098da19 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1098da1c:;
  /* 1098da1c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098da1f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1098da22 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098da24 je 0x1098da42 */
  if (C.zf) goto L_1098da42;
  /* 1098da26 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1098da2c push eax */
  push32((uint32_t)(EAX));
  /* 1098da2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098da30 push ecx */
  push32((uint32_t)(ECX));
  /* 1098da31 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1098da37 push edx */
  push32((uint32_t)(EDX));
  /* 1098da38 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1098da3a call 0x1098dbe0 */
  push32(0x1098da3fu); f_1098dbe0();
  /* 1098da3f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1098da42:;
  /* 1098da42 jmp 0x1098ce54 */
  goto L_1098ce54;
L_1098da47:;
  /* 1098da47 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1098da4d pop edi */
  EDI = (pop32());
  /* 1098da4e pop esi */
  ESI = (pop32());
  /* 1098da4f pop ebx */
  EBX = (pop32());
  /* 1098da50 mov esp, ebp */
  ESP = (EBP);
  /* 1098da52 pop ebp */
  EBP = (pop32());
  /* 1098da53 ret  */
  ESPCHK(0x1098ce30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db60 @ 0x1098db60 (119 bytes, 44 insns) */
void f_1098db60(void) {
  FTRACE(0x1098db60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098db60 push ebp */
  push32((uint32_t)(EBP));
  /* 1098db61 mov ebp, esp */
  EBP = (ESP);
  /* 1098db63 push ecx */
  push32((uint32_t)(ECX));
  /* 1098db64 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098db67 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1098db6a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098db6d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098db70 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1098db73 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098db76 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098db7a jl 0x1098dba2 */
  if ((C.sf!=C.of)) goto L_1098dba2;
  /* 1098db7c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098db7f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1098db81 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1098db84 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1098db86 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1098db8a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1098db90 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1098db93 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098db96 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1098db98 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098db9b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098db9e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1098dba0 jmp 0x1098dbb5 */
  goto L_1098dbb5;
L_1098dba2:;
  /* 1098dba2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098dba5 push edx */
  push32((uint32_t)(EDX));
  /* 1098dba6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098dba9 push eax */
  push32((uint32_t)(EAX));
  /* 1098dbaa call 0x1098cbb0 */
  push32(0x1098dbafu); f_1098cbb0();
  /* 1098dbaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098dbb2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1098dbb5:;
  /* 1098dbb5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098dbb9 jne 0x1098dbc6 */
  if (!C.zf) goto L_1098dbc6;
  /* 1098dbbb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1098dbbe mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1098dbc4 jmp 0x1098dbd3 */
  goto L_1098dbd3;
L_1098dbc6:;
  /* 1098dbc6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1098dbc9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1098dbcb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098dbce mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1098dbd1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1098dbd3:;
  /* 1098dbd3 mov esp, ebp */
  ESP = (EBP);
  /* 1098dbd5 pop ebp */
  EBP = (pop32());
  /* 1098dbd6 ret  */
  ESPCHK(0x1098db60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dbe0 @ 0x1098dbe0 (53 bytes, 23 insns) */
void f_1098dbe0(void) {
  FTRACE(0x1098dbe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098dbe0 push ebp */
  push32((uint32_t)(EBP));
  /* 1098dbe1 mov ebp, esp */
  EBP = (ESP);
L_1098dbe3:;
  /* 1098dbe3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098dbe6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098dbe9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098dbec mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1098dbef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098dbf1 jle 0x1098dc13 */
  if ((C.zf||C.sf!=C.of)) goto L_1098dc13;
  /* 1098dbf3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1098dbf6 push edx */
  push32((uint32_t)(EDX));
  /* 1098dbf7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1098dbfa push eax */
  push32((uint32_t)(EAX));
  /* 1098dbfb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098dbfe push ecx */
  push32((uint32_t)(ECX));
  /* 1098dbff call 0x1098db60 */
  push32(0x1098dc04u); f_1098db60();
  /* 1098dc04 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098dc07 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1098dc0a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098dc0d jne 0x1098dc11 */
  if (!C.zf) goto L_1098dc11;
  /* 1098dc0f jmp 0x1098dc13 */
  goto L_1098dc13;
L_1098dc11:;
  /* 1098dc11 jmp 0x1098dbe3 */
  goto L_1098dbe3;
L_1098dc13:;
  /* 1098dc13 pop ebp */
  EBP = (pop32());
  /* 1098dc14 ret  */
  ESPCHK(0x1098dbe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc20 @ 0x1098dc20 (74 bytes, 31 insns) */
void f_1098dc20(void) {
  FTRACE(0x1098dc20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098dc20 push ebp */
  push32((uint32_t)(EBP));
  /* 1098dc21 mov ebp, esp */
  EBP = (ESP);
  /* 1098dc23 push ecx */
  push32((uint32_t)(ECX));
L_1098dc24:;
  /* 1098dc24 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098dc27 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098dc2a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098dc2d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1098dc30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098dc32 jle 0x1098dc66 */
  if ((C.zf||C.sf!=C.of)) goto L_1098dc66;
  /* 1098dc34 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1098dc37 push edx */
  push32((uint32_t)(EDX));
  /* 1098dc38 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1098dc3b push eax */
  push32((uint32_t)(EAX));
  /* 1098dc3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098dc3f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1098dc42 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1098dc45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098dc48 push eax */
  push32((uint32_t)(EAX));
  /* 1098dc49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098dc4c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098dc4f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1098dc52 call 0x1098db60 */
  push32(0x1098dc57u); f_1098db60();
  /* 1098dc57 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098dc5a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1098dc5d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098dc60 jne 0x1098dc64 */
  if (!C.zf) goto L_1098dc64;
  /* 1098dc62 jmp 0x1098dc66 */
  goto L_1098dc66;
L_1098dc64:;
  /* 1098dc64 jmp 0x1098dc24 */
  goto L_1098dc24;
L_1098dc66:;
  /* 1098dc66 mov esp, ebp */
  ESP = (EBP);
  /* 1098dc68 pop ebp */
  EBP = (pop32());
  /* 1098dc69 ret  */
  ESPCHK(0x1098dc20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc70 @ 0x1098dc70 (26 bytes, 12 insns) */
void f_1098dc70(void) {
  FTRACE(0x1098dc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098dc70 push ebp */
  push32((uint32_t)(EBP));
  /* 1098dc71 mov ebp, esp */
  EBP = (ESP);
  /* 1098dc73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098dc76 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1098dc78 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098dc7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098dc7e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1098dc80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098dc83 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1098dc85 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1098dc88 pop ebp */
  EBP = (pop32());
  /* 1098dc89 ret  */
  ESPCHK(0x1098dc70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc90 @ 0x1098dc90 (31 bytes, 14 insns) */
void f_1098dc90(void) {
  FTRACE(0x1098dc90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098dc90 push ebp */
  push32((uint32_t)(EBP));
  /* 1098dc91 mov ebp, esp */
  EBP = (ESP);
  /* 1098dc93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098dc96 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1098dc98 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098dc9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098dc9e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1098dca0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098dca3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1098dca5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098dca8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1098dcaa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1098dcad pop ebp */
  EBP = (pop32());
  /* 1098dcae ret  */
  ESPCHK(0x1098dc90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dcb0 @ 0x1098dcb0 (27 bytes, 12 insns) */
void f_1098dcb0(void) {
  FTRACE(0x1098dcb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098dcb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1098dcb1 mov ebp, esp */
  EBP = (ESP);
  /* 1098dcb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098dcb6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1098dcb8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098dcbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098dcbe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1098dcc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098dcc3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1098dcc5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1098dcc9 pop ebp */
  EBP = (pop32());
  /* 1098dcca ret  */
  ESPCHK(0x1098dcb0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1098dcd0 (145 bytes, 42 insns) */
void f_1098dcd0(void) {
  FTRACE(0x1098dcd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098dcd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1098dcd1 mov ebp, esp */
  EBP = (ESP);
  /* 1098dcd3 push ecx */
  push32((uint32_t)(ECX));
  /* 1098dcd4 call 0x1098dd80 */
  push32(0x1098dcd9u); f_1098dd80();
  /* 1098dcd9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098dcdc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1098dcde mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1098dce5 jmp 0x1098dcf0 */
  goto L_1098dcf0;
L_1098dce7:;
  /* 1098dce7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098dcea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098dced mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1098dcf0:;
  /* 1098dcf0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098dcf4 jae 0x1098dd1a */
  if (!C.cf) goto L_1098dd1a;
  /* 1098dcf6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098dcf9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098dcfc cmp ecx, dword ptr [eax*8 + 0x109affb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x109affb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098dd03 jne 0x1098dd18 */
  if (!C.zf) goto L_1098dd18;
  /* 1098dd05 call 0x1098dd70 */
  push32(0x1098dd0au); f_1098dd70();
  /* 1098dd0a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098dd0d mov ecx, dword ptr [edx*8 + 0x109affbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x109affbc)));
  /* 1098dd14 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1098dd16 jmp 0x1098dd5d */
  goto L_1098dd5d;
L_1098dd18:;
  /* 1098dd18 jmp 0x1098dce7 */
  goto L_1098dce7;
L_1098dd1a:;
  /* 1098dd1a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098dd1e jb 0x1098dd33 */
  if (C.cf) goto L_1098dd33;
  /* 1098dd20 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098dd24 ja 0x1098dd33 */
  if ((!C.cf&&!C.zf)) goto L_1098dd33;
  /* 1098dd26 call 0x1098dd70 */
  push32(0x1098dd2bu); f_1098dd70();
  /* 1098dd2b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1098dd31 jmp 0x1098dd5d */
  goto L_1098dd5d;
L_1098dd33:;
  /* 1098dd33 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098dd3a jb 0x1098dd52 */
  if (C.cf) goto L_1098dd52;
  /* 1098dd3c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098dd43 ja 0x1098dd52 */
  if ((!C.cf&&!C.zf)) goto L_1098dd52;
  /* 1098dd45 call 0x1098dd70 */
  push32(0x1098dd4au); f_1098dd70();
  /* 1098dd4a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1098dd50 jmp 0x1098dd5d */
  goto L_1098dd5d;
L_1098dd52:;
  /* 1098dd52 call 0x1098dd70 */
  push32(0x1098dd57u); f_1098dd70();
  /* 1098dd57 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1098dd5d:;
  /* 1098dd5d mov esp, ebp */
  ESP = (EBP);
  /* 1098dd5f pop ebp */
  EBP = (pop32());
  /* 1098dd60 ret  */
  ESPCHK(0x1098dcd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd70 @ 0x1098dd70 (13 bytes, 6 insns) */
void f_1098dd70(void) {
  FTRACE(0x1098dd70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098dd70 push ebp */
  push32((uint32_t)(EBP));
  /* 1098dd71 mov ebp, esp */
  EBP = (ESP);
  /* 1098dd73 call 0x109858e0 */
  push32(0x1098dd78u); f_109858e0();
  /* 1098dd78 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098dd7b pop ebp */
  EBP = (pop32());
  /* 1098dd7c ret  */
  ESPCHK(0x1098dd70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd80 @ 0x1098dd80 (13 bytes, 6 insns) */
void f_1098dd80(void) {
  FTRACE(0x1098dd80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098dd80 push ebp */
  push32((uint32_t)(EBP));
  /* 1098dd81 mov ebp, esp */
  EBP = (ESP);
  /* 1098dd83 call 0x109858e0 */
  push32(0x1098dd88u); f_109858e0();
  /* 1098dd88 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098dd8b pop ebp */
  EBP = (pop32());
  /* 1098dd8c ret  */
  ESPCHK(0x1098dd80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd90 @ 0x1098dd90 (664 bytes, 262 insns) [15 switch table(s)] */
void f_1098dd90(void) {
  FTRACE(0x1098dd90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098dd90 push ebp */
  push32((uint32_t)(EBP));
  /* 1098dd91 mov ebp, esp */
  EBP = (ESP);
  /* 1098dd93 push edi */
  push32((uint32_t)(EDI));
  /* 1098dd94 push esi */
  push32((uint32_t)(ESI));
  /* 1098dd95 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1098dd98 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1098dd9b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1098dd9e mov eax, ecx */
  EAX = (ECX);
  /* 1098dda0 mov edx, ecx */
  EDX = (ECX);
  /* 1098dda2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098dda4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098dda6 jbe 0x1098ddb0 */
  if ((C.cf||C.zf)) goto L_1098ddb0;
  /* 1098dda8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ddaa jb 0x1098df28 */
  if (C.cf) goto L_1098df28;
L_1098ddb0:;
  /* 1098ddb0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1098ddb6 jne 0x1098ddcc */
  if (!C.zf) goto L_1098ddcc;
  /* 1098ddb8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1098ddbb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1098ddbe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ddc1 jb 0x1098ddec */
  if (C.cf) goto L_1098ddec;
  /* 1098ddc3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1098ddc5 jmp dword ptr [edx*4 + 0x1098ded8] */
  switch (EDX) {
    case 0: goto L_1098dee8;
    case 1: goto L_1098def0;
    case 2: goto L_1098defc;
    case 3: goto L_1098df10;
    default: x86_unimpl("switch@0x1098ddc5 out of table"); return;
  }
L_1098ddcc:;
  /* 1098ddcc mov eax, edi */
  EAX = (EDI);
  /* 1098ddce mov edx, 3 */
  EDX = (0x3u);
  /* 1098ddd3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098ddd6 jb 0x1098dde4 */
  if (C.cf) goto L_1098dde4;
  /* 1098ddd8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1098dddb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098dddd jmp dword ptr [eax*4 + 0x1098ddf0] */
  switch (EAX) {
    case 1: goto L_1098de00;
    case 2: goto L_1098de2c;
    case 3: goto L_1098de50;
    default: x86_unimpl("switch@0x1098dddd out of table"); return;
  }
L_1098dde4:;
  /* 1098dde4 jmp dword ptr [ecx*4 + 0x1098dee8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1098dee8)))); return;
  /* 1098ddeb nop  */
  /* nop */
L_1098ddec:;
  /* 1098ddec jmp dword ptr [ecx*4 + 0x1098de6c] */
  switch (ECX) {
    case 0: goto L_1098decf;
    case 1: goto L_1098debc;
    case 2: goto L_1098deb4;
    case 3: goto L_1098deac;
    case 4: goto L_1098dea4;
    case 5: goto L_1098de9c;
    case 6: goto L_1098de94;
    case 7: goto L_1098de8c;
    default: x86_unimpl("switch@0x1098ddec out of table"); return;
  }
  /* 1098ddf3 nop  */
  /* nop */
L_1098de00:;
  /* 1098de00 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1098de02 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1098de04 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1098de06 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1098de09 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1098de0c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1098de0f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1098de12 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1098de15 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1098de18 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1098de1b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098de1e jb 0x1098ddec */
  if (C.cf) goto L_1098ddec;
  /* 1098de20 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1098de22 jmp dword ptr [edx*4 + 0x1098ded8] */
  switch (EDX) {
    case 0: goto L_1098dee8;
    case 1: goto L_1098def0;
    case 2: goto L_1098defc;
    case 3: goto L_1098df10;
    default: x86_unimpl("switch@0x1098de22 out of table"); return;
  }
  /* 1098de29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1098de2c:;
  /* 1098de2c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1098de2e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1098de30 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1098de32 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1098de35 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1098de38 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1098de3b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1098de3e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1098de41 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098de44 jb 0x1098ddec */
  if (C.cf) goto L_1098ddec;
  /* 1098de46 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1098de48 jmp dword ptr [edx*4 + 0x1098ded8] */
  switch (EDX) {
    case 0: goto L_1098dee8;
    case 1: goto L_1098def0;
    case 2: goto L_1098defc;
    case 3: goto L_1098df10;
    default: x86_unimpl("switch@0x1098de48 out of table"); return;
  }
  /* 1098de4f nop  */
  /* nop */
L_1098de50:;
  /* 1098de50 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1098de52 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1098de54 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1098de56 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1098de57 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1098de5a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1098de5b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098de5e jb 0x1098ddec */
  if (C.cf) goto L_1098ddec;
  /* 1098de60 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1098de62 jmp dword ptr [edx*4 + 0x1098ded8] */
  switch (EDX) {
    case 0: goto L_1098dee8;
    case 1: goto L_1098def0;
    case 2: goto L_1098defc;
    case 3: goto L_1098df10;
    default: x86_unimpl("switch@0x1098de62 out of table"); return;
  }
  /* 1098de69 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1098de8c:;
  /* 1098de8c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1098de90 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1098de94:;
  /* 1098de94 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1098de98 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1098de9c:;
  /* 1098de9c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1098dea0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1098dea4:;
  /* 1098dea4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1098dea8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1098deac:;
  /* 1098deac mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1098deb0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1098deb4:;
  /* 1098deb4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1098deb8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1098debc:;
  /* 1098debc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1098dec0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1098dec4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1098decb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1098decd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1098decf:;
  /* 1098decf jmp dword ptr [edx*4 + 0x1098ded8] */
  switch (EDX) {
    case 0: goto L_1098dee8;
    case 1: goto L_1098def0;
    case 2: goto L_1098defc;
    case 3: goto L_1098df10;
    default: x86_unimpl("switch@0x1098decf out of table"); return;
  }
  /* 1098ded6 mov edi, edi */
  EDI = (EDI);
L_1098dee8:;
  /* 1098dee8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098deeb pop esi */
  ESI = (pop32());
  /* 1098deec pop edi */
  EDI = (pop32());
  /* 1098deed leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1098deee ret  */
  ESPCHK(0x1098dd90u, _esp0);
  ESP += 4; return;
  /* 1098deef nop  */
  /* nop */
L_1098def0:;
  /* 1098def0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1098def2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1098def4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098def7 pop esi */
  ESI = (pop32());
  /* 1098def8 pop edi */
  EDI = (pop32());
  /* 1098def9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1098defa ret  */
  ESPCHK(0x1098dd90u, _esp0);
  ESP += 4; return;
  /* 1098defb nop  */
  /* nop */
L_1098defc:;
  /* 1098defc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1098defe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1098df00 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1098df03 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1098df06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098df09 pop esi */
  ESI = (pop32());
  /* 1098df0a pop edi */
  EDI = (pop32());
  /* 1098df0b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1098df0c ret  */
  ESPCHK(0x1098dd90u, _esp0);
  ESP += 4; return;
  /* 1098df0d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1098df10:;
  /* 1098df10 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1098df12 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1098df14 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1098df17 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1098df1a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1098df1d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1098df20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098df23 pop esi */
  ESI = (pop32());
  /* 1098df24 pop edi */
  EDI = (pop32());
  /* 1098df25 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1098df26 ret  */
  ESPCHK(0x1098dd90u, _esp0);
  ESP += 4; return;
  /* 1098df27 nop  */
  /* nop */
L_1098df28:;
  /* 1098df28 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1098df2c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1098df30 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1098df36 jne 0x1098df5c */
  if (!C.zf) goto L_1098df5c;
  /* 1098df38 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1098df3b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1098df3e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098df41 jb 0x1098df50 */
  if (C.cf) goto L_1098df50;
  /* 1098df43 std  */
  C.df=1;
  /* 1098df44 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1098df46 cld  */
  C.df=0;
  /* 1098df47 jmp dword ptr [edx*4 + 0x1098e070] */
  switch (EDX) {
    case 0: goto L_1098e080;
    case 1: goto L_1098e088;
    case 2: goto L_1098e098;
    case 3: goto L_1098e0ac;
    default: x86_unimpl("switch@0x1098df47 out of table"); return;
  }
  /* 1098df4e mov edi, edi */
  EDI = (EDI);
L_1098df50:;
  /* 1098df50 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1098df52 jmp dword ptr [ecx*4 + 0x1098e020] */
  switch (ECX) {
    case 0: goto L_1098e067;
    default: x86_unimpl("switch@0x1098df52 out of table"); return;
  }
  /* 1098df59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1098df5c:;
  /* 1098df5c mov eax, edi */
  EAX = (EDI);
  /* 1098df5e mov edx, 3 */
  EDX = (0x3u);
  /* 1098df63 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098df66 jb 0x1098df74 */
  if (C.cf) goto L_1098df74;
  /* 1098df68 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1098df6b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098df6d jmp dword ptr [eax*4 + 0x1098df78] */
  switch (EAX) {
    case 1: goto L_1098df88;
    case 2: goto L_1098dfa8;
    case 3: goto L_1098dfd0;
    default: x86_unimpl("switch@0x1098df6d out of table"); return;
  }
L_1098df74:;
  /* 1098df74 jmp dword ptr [ecx*4 + 0x1098e070] */
  switch (ECX) {
    case 0: goto L_1098e080;
    case 1: goto L_1098e088;
    case 2: goto L_1098e098;
    case 3: goto L_1098e0ac;
    default: x86_unimpl("switch@0x1098df74 out of table"); return;
  }
  /* 1098df7b nop  */
  /* nop */
L_1098df88:;
  /* 1098df88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1098df8b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1098df8d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1098df90 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1098df91 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1098df94 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1098df95 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098df98 jb 0x1098df50 */
  if (C.cf) goto L_1098df50;
  /* 1098df9a std  */
  C.df=1;
  /* 1098df9b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1098df9d cld  */
  C.df=0;
  /* 1098df9e jmp dword ptr [edx*4 + 0x1098e070] */
  switch (EDX) {
    case 0: goto L_1098e080;
    case 1: goto L_1098e088;
    case 2: goto L_1098e098;
    case 3: goto L_1098e0ac;
    default: x86_unimpl("switch@0x1098df9e out of table"); return;
  }
  /* 1098dfa5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1098dfa8:;
  /* 1098dfa8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1098dfab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1098dfad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1098dfb0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1098dfb3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1098dfb6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1098dfb9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098dfbc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098dfbf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098dfc2 jb 0x1098df50 */
  if (C.cf) goto L_1098df50;
  /* 1098dfc4 std  */
  C.df=1;
  /* 1098dfc5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1098dfc7 cld  */
  C.df=0;
  /* 1098dfc8 jmp dword ptr [edx*4 + 0x1098e070] */
  switch (EDX) {
    case 0: goto L_1098e080;
    case 1: goto L_1098e088;
    case 2: goto L_1098e098;
    case 3: goto L_1098e0ac;
    default: x86_unimpl("switch@0x1098dfc8 out of table"); return;
  }
  /* 1098dfcf nop  */
  /* nop */
L_1098dfd0:;
  /* 1098dfd0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1098dfd3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1098dfd5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1098dfd8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1098dfdb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1098dfde mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1098dfe1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1098dfe4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1098dfe7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098dfea sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098dfed cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098dff0 jb 0x1098df50 */
  if (C.cf) goto L_1098df50;
  /* 1098dff6 std  */
  C.df=1;
  /* 1098dff7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1098dff9 cld  */
  C.df=0;
  /* 1098dffa jmp dword ptr [edx*4 + 0x1098e070] */
  switch (EDX) {
    case 0: goto L_1098e080;
    case 1: goto L_1098e088;
    case 2: goto L_1098e098;
    case 3: goto L_1098e0ac;
    default: x86_unimpl("switch@0x1098dffa out of table"); return;
  }
  /* 1098e001 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1098e004 and al, 0xe0 */
  { uint32_t _r=(AL)&(0xe0u); AL = (_r); fl_logic(_r,8); }
  /* 1098e006 cwde  */
  EAX = (uint32_t)(int32_t)(int16_t)AX;
  /* 1098e007 adc byte ptr [eax], ch */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1098e00a cwde  */
  EAX = (uint32_t)(int32_t)(int16_t)AX;
  /* 1098e00b adc byte ptr [eax], dh */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(C.d.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1098e00e cwde  */
  EAX = (uint32_t)(int32_t)(int16_t)AX;
  /* 1098e00f adc byte ptr [eax], bh */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1098e012 cwde  */
  EAX = (uint32_t)(int32_t)(int16_t)AX;
  /* 1098e013 adc byte ptr [eax - 0x68], al */
  { uint32_t _a=(r8((uint32_t)(EAX + -0x68))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(EAX + -0x68), (_r)); fl_add(_a,_b,_r,8); }
  /* 1098e017 adc byte ptr [eax - 0x68], cl */
  { uint32_t _a=(r8((uint32_t)(EAX + -0x68))),_b=(CL),_r=_a+_b+C.cf; w8((uint32_t)(EAX + -0x68), (_r)); fl_add(_a,_b,_r,8); }
  /* 1098e01b adc byte ptr [eax - 0x68], dl */
  { uint32_t _a=(r8((uint32_t)(EAX + -0x68))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(EAX + -0x68), (_r)); fl_add(_a,_b,_r,8); }
  /* 1098e024 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1098e028 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1098e02c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1098e030 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1098e034 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1098e038 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1098e03c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1098e040 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1098e044 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1098e048 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1098e04c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1098e050 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1098e054 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1098e058 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1098e05c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1098e063 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1098e065 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1098e067:;
  /* 1098e067 jmp dword ptr [edx*4 + 0x1098e070] */
  switch (EDX) {
    case 0: goto L_1098e080;
    case 1: goto L_1098e088;
    case 2: goto L_1098e098;
    case 3: goto L_1098e0ac;
    default: x86_unimpl("switch@0x1098e067 out of table"); return;
  }
  /* 1098e06e mov edi, edi */
  EDI = (EDI);
L_1098e080:;
  /* 1098e080 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e083 pop esi */
  ESI = (pop32());
  /* 1098e084 pop edi */
  EDI = (pop32());
  /* 1098e085 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1098e086 ret  */
  ESPCHK(0x1098dd90u, _esp0);
  ESP += 4; return;
  /* 1098e087 nop  */
  /* nop */
L_1098e088:;
  /* 1098e088 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1098e08b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1098e08e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e091 pop esi */
  ESI = (pop32());
  /* 1098e092 pop edi */
  EDI = (pop32());
  /* 1098e093 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1098e094 ret  */
  ESPCHK(0x1098dd90u, _esp0);
  ESP += 4; return;
  /* 1098e095 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1098e098:;
  /* 1098e098 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1098e09b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1098e09e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1098e0a1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1098e0a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e0a7 pop esi */
  ESI = (pop32());
  /* 1098e0a8 pop edi */
  EDI = (pop32());
  /* 1098e0a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1098e0aa ret  */
  ESPCHK(0x1098dd90u, _esp0);
  ESP += 4; return;
  /* 1098e0ab nop  */
  /* nop */
L_1098e0ac:;
  /* 1098e0ac mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1098e0af mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1098e0b2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1098e0b5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1098e0b8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1098e0bb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1098e0be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e0c1 pop esi */
  ESI = (pop32());
  /* 1098e0c2 pop edi */
  EDI = (pop32());
  /* 1098e0c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1098e0c4 ret  */
  ESPCHK(0x1098dd90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0d0 @ 0x1098e0d0 (421 bytes, 148 insns) */
void f_1098e0d0(void) {
  FTRACE(0x1098e0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098e0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1098e0d1 mov ebp, esp */
  EBP = (ESP);
  /* 1098e0d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1098e0d5 push 0x109ad320 */
  push32((uint32_t)(0x109ad320u));
  /* 1098e0da push 0x1098efa8 */
  push32((uint32_t)(0x1098efa8u));
  /* 1098e0df mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1098e0e5 push eax */
  push32((uint32_t)(EAX));
  /* 1098e0e6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1098e0ed add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098e0f0 push ebx */
  push32((uint32_t)(EBX));
  /* 1098e0f1 push esi */
  push32((uint32_t)(ESI));
  /* 1098e0f2 push edi */
  push32((uint32_t)(EDI));
  /* 1098e0f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1098e0f6 cmp dword ptr [0x109b1844], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b1844))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098e0fd jne 0x1098e14e */
  if (!C.zf) goto L_1098e14e;
  /* 1098e0ff lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1098e102 push eax */
  push32((uint32_t)(EAX));
  /* 1098e103 push 1 */
  push32((uint32_t)(0x1u));
  /* 1098e105 push 0x109ad31c */
  push32((uint32_t)(0x109ad31cu));
  /* 1098e10a push 1 */
  push32((uint32_t)(0x1u));
  /* 1098e10c call dword ptr [0x109b4300] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4300))), 0x1098e112u);
  /* 1098e112 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098e114 je 0x1098e122 */
  if (C.zf) goto L_1098e122;
  /* 1098e116 mov dword ptr [0x109b1844], 1 */
  w32((uint32_t)(0x109b1844), (0x1u));
  /* 1098e120 jmp 0x1098e14e */
  goto L_1098e14e;
L_1098e122:;
  /* 1098e122 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1098e125 push ecx */
  push32((uint32_t)(ECX));
  /* 1098e126 push 1 */
  push32((uint32_t)(0x1u));
  /* 1098e128 push 0x109ad318 */
  push32((uint32_t)(0x109ad318u));
  /* 1098e12d push 1 */
  push32((uint32_t)(0x1u));
  /* 1098e12f push 0 */
  push32((uint32_t)(0x0u));
  /* 1098e131 call dword ptr [0x109b4304] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4304))), 0x1098e137u);
  /* 1098e137 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098e139 je 0x1098e147 */
  if (C.zf) goto L_1098e147;
  /* 1098e13b mov dword ptr [0x109b1844], 2 */
  w32((uint32_t)(0x109b1844), (0x2u));
  /* 1098e145 jmp 0x1098e14e */
  goto L_1098e14e;
L_1098e147:;
  /* 1098e147 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098e149 jmp 0x1098e278 */
  goto L_1098e278;
L_1098e14e:;
  /* 1098e14e cmp dword ptr [0x109b1844], 2 */
  { uint32_t _a=(r32((uint32_t)(0x109b1844))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098e155 jne 0x1098e185 */
  if (!C.zf) goto L_1098e185;
  /* 1098e157 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098e15b jne 0x1098e166 */
  if (!C.zf) goto L_1098e166;
  /* 1098e15d mov edx, dword ptr [0x109b1850] */
  EDX = (r32((uint32_t)(0x109b1850)));
  /* 1098e163 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1098e166:;
  /* 1098e166 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1098e169 push eax */
  push32((uint32_t)(EAX));
  /* 1098e16a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1098e16d push ecx */
  push32((uint32_t)(ECX));
  /* 1098e16e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098e171 push edx */
  push32((uint32_t)(EDX));
  /* 1098e172 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e175 push eax */
  push32((uint32_t)(EAX));
  /* 1098e176 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1098e179 push ecx */
  push32((uint32_t)(ECX));
  /* 1098e17a call dword ptr [0x109b4304] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4304))), 0x1098e180u);
  /* 1098e180 jmp 0x1098e278 */
  goto L_1098e278;
L_1098e185:;
  /* 1098e185 cmp dword ptr [0x109b1844], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109b1844))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098e18c jne 0x1098e276 */
  if (!C.zf) goto L_1098e276;
  /* 1098e192 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098e196 jne 0x1098e1a1 */
  if (!C.zf) goto L_1098e1a1;
  /* 1098e198 mov edx, dword ptr [0x109b1860] */
  EDX = (r32((uint32_t)(0x109b1860)));
  /* 1098e19e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1098e1a1:;
  /* 1098e1a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098e1a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098e1a5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1098e1a8 push eax */
  push32((uint32_t)(EAX));
  /* 1098e1a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098e1ac push ecx */
  push32((uint32_t)(ECX));
  /* 1098e1ad mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1098e1b0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1098e1b2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098e1b4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1098e1b7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098e1ba push edx */
  push32((uint32_t)(EDX));
  /* 1098e1bb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1098e1be push eax */
  push32((uint32_t)(EAX));
  /* 1098e1bf call dword ptr [0x109b4308] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4308))), 0x1098e1c5u);
  /* 1098e1c5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1098e1c8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098e1cc jne 0x1098e1d5 */
  if (!C.zf) goto L_1098e1d5;
  /* 1098e1ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098e1d0 jmp 0x1098e278 */
  goto L_1098e278;
L_1098e1d5:;
  /* 1098e1d5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1098e1dc mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098e1df shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1098e1e1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098e1e4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1098e1e6 call 0x10989040 */
  push32(0x1098e1ebu); f_10989040();
  /* 1098e1eb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1098e1ee mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1098e1f1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098e1f4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1098e1f7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098e1fa shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1098e1fc push edx */
  push32((uint32_t)(EDX));
  /* 1098e1fd push 0 */
  push32((uint32_t)(0x0u));
  /* 1098e1ff mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098e202 push eax */
  push32((uint32_t)(EAX));
  /* 1098e203 call 0x10989c10 */
  push32(0x1098e208u); f_10989c10();
  /* 1098e208 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098e20b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1098e212 jmp 0x1098e22b */
  goto L_1098e22b;
  /* 1098e214 mov eax, 1 */
  EAX = (0x1u);
  /* 1098e219 ret  */
  ESPCHK(0x1098e0d0u, _esp0);
  ESP += 4; return;
  /* 1098e21a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1098e21d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1098e224 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1098e22b:;
  /* 1098e22b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098e22f jne 0x1098e235 */
  if (!C.zf) goto L_1098e235;
  /* 1098e231 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098e233 jmp 0x1098e278 */
  goto L_1098e278;
L_1098e235:;
  /* 1098e235 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098e238 push ecx */
  push32((uint32_t)(ECX));
  /* 1098e239 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098e23c push edx */
  push32((uint32_t)(EDX));
  /* 1098e23d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1098e240 push eax */
  push32((uint32_t)(EAX));
  /* 1098e241 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098e244 push ecx */
  push32((uint32_t)(ECX));
  /* 1098e245 push 1 */
  push32((uint32_t)(0x1u));
  /* 1098e247 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1098e24a push edx */
  push32((uint32_t)(EDX));
  /* 1098e24b call dword ptr [0x109b4308] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4308))), 0x1098e251u);
  /* 1098e251 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1098e254 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098e258 jne 0x1098e25e */
  if (!C.zf) goto L_1098e25e;
  /* 1098e25a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098e25c jmp 0x1098e278 */
  goto L_1098e278;
L_1098e25e:;
  /* 1098e25e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1098e261 push eax */
  push32((uint32_t)(EAX));
  /* 1098e262 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1098e265 push ecx */
  push32((uint32_t)(ECX));
  /* 1098e266 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098e269 push edx */
  push32((uint32_t)(EDX));
  /* 1098e26a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e26d push eax */
  push32((uint32_t)(EAX));
  /* 1098e26e call dword ptr [0x109b4300] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4300))), 0x1098e274u);
  /* 1098e274 jmp 0x1098e278 */
  goto L_1098e278;
L_1098e276:;
  /* 1098e276 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1098e278:;
  /* 1098e278 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1098e27b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098e27e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1098e285 pop edi */
  EDI = (pop32());
  /* 1098e286 pop esi */
  ESI = (pop32());
  /* 1098e287 pop ebx */
  EBX = (pop32());
  /* 1098e288 mov esp, ebp */
  ESP = (EBP);
  /* 1098e28a pop ebp */
  EBP = (pop32());
  /* 1098e28b ret  */
  ESPCHK(0x1098e0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e290 @ 0x1098e290 (727 bytes, 263 insns) */
void f_1098e290(void) {
  FTRACE(0x1098e290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098e290 push ebp */
  push32((uint32_t)(EBP));
  /* 1098e291 mov ebp, esp */
  EBP = (ESP);
  /* 1098e293 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1098e295 push 0x109ad330 */
  push32((uint32_t)(0x109ad330u));
  /* 1098e29a push 0x1098efa8 */
  push32((uint32_t)(0x1098efa8u));
  /* 1098e29f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1098e2a5 push eax */
  push32((uint32_t)(EAX));
  /* 1098e2a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1098e2ad add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098e2b0 push ebx */
  push32((uint32_t)(EBX));
  /* 1098e2b1 push esi */
  push32((uint32_t)(ESI));
  /* 1098e2b2 push edi */
  push32((uint32_t)(EDI));
  /* 1098e2b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1098e2b6 cmp dword ptr [0x109b1868], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b1868))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098e2bd jne 0x1098e316 */
  if (!C.zf) goto L_1098e316;
  /* 1098e2bf push 0 */
  push32((uint32_t)(0x0u));
  /* 1098e2c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098e2c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1098e2c5 push 0x109ad31c */
  push32((uint32_t)(0x109ad31cu));
  /* 1098e2ca push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1098e2cf push 0 */
  push32((uint32_t)(0x0u));
  /* 1098e2d1 call dword ptr [0x109b42f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42f8))), 0x1098e2d7u);
  /* 1098e2d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098e2d9 je 0x1098e2e7 */
  if (C.zf) goto L_1098e2e7;
  /* 1098e2db mov dword ptr [0x109b1868], 1 */
  w32((uint32_t)(0x109b1868), (0x1u));
  /* 1098e2e5 jmp 0x1098e316 */
  goto L_1098e316;
L_1098e2e7:;
  /* 1098e2e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098e2e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098e2eb push 1 */
  push32((uint32_t)(0x1u));
  /* 1098e2ed push 0x109ad318 */
  push32((uint32_t)(0x109ad318u));
  /* 1098e2f2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1098e2f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098e2f9 call dword ptr [0x109b42fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42fc))), 0x1098e2ffu);
  /* 1098e2ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098e301 je 0x1098e30f */
  if (C.zf) goto L_1098e30f;
  /* 1098e303 mov dword ptr [0x109b1868], 2 */
  w32((uint32_t)(0x109b1868), (0x2u));
  /* 1098e30d jmp 0x1098e316 */
  goto L_1098e316;
L_1098e30f:;
  /* 1098e30f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098e311 jmp 0x1098e581 */
  goto L_1098e581;
L_1098e316:;
  /* 1098e316 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098e31a jle 0x1098e32f */
  if ((C.zf||C.sf!=C.of)) goto L_1098e32f;
  /* 1098e31c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1098e31f push eax */
  push32((uint32_t)(EAX));
  /* 1098e320 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1098e323 push ecx */
  push32((uint32_t)(ECX));
  /* 1098e324 call 0x1098e5a0 */
  push32(0x1098e329u); f_1098e5a0();
  /* 1098e329 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098e32c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1098e32f:;
  /* 1098e32f cmp dword ptr [0x109b1868], 2 */
  { uint32_t _a=(r32((uint32_t)(0x109b1868))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098e336 jne 0x1098e35b */
  if (!C.zf) goto L_1098e35b;
  /* 1098e338 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1098e33b push edx */
  push32((uint32_t)(EDX));
  /* 1098e33c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1098e33f push eax */
  push32((uint32_t)(EAX));
  /* 1098e340 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1098e343 push ecx */
  push32((uint32_t)(ECX));
  /* 1098e344 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1098e347 push edx */
  push32((uint32_t)(EDX));
  /* 1098e348 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098e34b push eax */
  push32((uint32_t)(EAX));
  /* 1098e34c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e34f push ecx */
  push32((uint32_t)(ECX));
  /* 1098e350 call dword ptr [0x109b42fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42fc))), 0x1098e356u);
  /* 1098e356 jmp 0x1098e581 */
  goto L_1098e581;
L_1098e35b:;
  /* 1098e35b cmp dword ptr [0x109b1868], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109b1868))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098e362 jne 0x1098e57f */
  if (!C.zf) goto L_1098e57f;
  /* 1098e368 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098e36c jne 0x1098e377 */
  if (!C.zf) goto L_1098e377;
  /* 1098e36e mov edx, dword ptr [0x109b1860] */
  EDX = (r32((uint32_t)(0x109b1860)));
  /* 1098e374 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1098e377:;
  /* 1098e377 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098e379 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098e37b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1098e37e push eax */
  push32((uint32_t)(EAX));
  /* 1098e37f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1098e382 push ecx */
  push32((uint32_t)(ECX));
  /* 1098e383 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1098e386 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1098e388 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098e38a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1098e38d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098e390 push edx */
  push32((uint32_t)(EDX));
  /* 1098e391 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1098e394 push eax */
  push32((uint32_t)(EAX));
  /* 1098e395 call dword ptr [0x109b4308] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4308))), 0x1098e39bu);
  /* 1098e39b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1098e39e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098e3a2 jne 0x1098e3ab */
  if (!C.zf) goto L_1098e3ab;
  /* 1098e3a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098e3a6 jmp 0x1098e581 */
  goto L_1098e581;
L_1098e3ab:;
  /* 1098e3ab mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1098e3b2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1098e3b5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1098e3b7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098e3ba and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1098e3bc call 0x10989040 */
  push32(0x1098e3c1u); f_10989040();
  /* 1098e3c1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1098e3c4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1098e3c7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1098e3ca mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1098e3cd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1098e3d4 jmp 0x1098e3ed */
  goto L_1098e3ed;
  /* 1098e3d6 mov eax, 1 */
  EAX = (0x1u);
  /* 1098e3db ret  */
  ESPCHK(0x1098e290u, _esp0);
  ESP += 4; return;
  /* 1098e3dc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1098e3df mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1098e3e6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1098e3ed:;
  /* 1098e3ed cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098e3f1 jne 0x1098e3fa */
  if (!C.zf) goto L_1098e3fa;
  /* 1098e3f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098e3f5 jmp 0x1098e581 */
  goto L_1098e581;
L_1098e3fa:;
  /* 1098e3fa mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1098e3fd push edx */
  push32((uint32_t)(EDX));
  /* 1098e3fe mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098e401 push eax */
  push32((uint32_t)(EAX));
  /* 1098e402 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1098e405 push ecx */
  push32((uint32_t)(ECX));
  /* 1098e406 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1098e409 push edx */
  push32((uint32_t)(EDX));
  /* 1098e40a push 1 */
  push32((uint32_t)(0x1u));
  /* 1098e40c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1098e40f push eax */
  push32((uint32_t)(EAX));
  /* 1098e410 call dword ptr [0x109b4308] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4308))), 0x1098e416u);
  /* 1098e416 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098e418 jne 0x1098e421 */
  if (!C.zf) goto L_1098e421;
  /* 1098e41a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098e41c jmp 0x1098e581 */
  goto L_1098e581;
L_1098e421:;
  /* 1098e421 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098e423 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098e425 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1098e428 push ecx */
  push32((uint32_t)(ECX));
  /* 1098e429 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098e42c push edx */
  push32((uint32_t)(EDX));
  /* 1098e42d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098e430 push eax */
  push32((uint32_t)(EAX));
  /* 1098e431 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e434 push ecx */
  push32((uint32_t)(ECX));
  /* 1098e435 call dword ptr [0x109b42f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42f8))), 0x1098e43bu);
  /* 1098e43b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1098e43e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098e442 jne 0x1098e44b */
  if (!C.zf) goto L_1098e44b;
  /* 1098e444 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098e446 jmp 0x1098e581 */
  goto L_1098e581;
L_1098e44b:;
  /* 1098e44b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098e44e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1098e454 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098e456 je 0x1098e49b */
  if (C.zf) goto L_1098e49b;
  /* 1098e458 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098e45c je 0x1098e496 */
  if (C.zf) goto L_1098e496;
  /* 1098e45e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1098e461 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098e464 jle 0x1098e46d */
  if ((C.zf||C.sf!=C.of)) goto L_1098e46d;
  /* 1098e466 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098e468 jmp 0x1098e581 */
  goto L_1098e581;
L_1098e46d:;
  /* 1098e46d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1098e470 push ecx */
  push32((uint32_t)(ECX));
  /* 1098e471 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1098e474 push edx */
  push32((uint32_t)(EDX));
  /* 1098e475 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1098e478 push eax */
  push32((uint32_t)(EAX));
  /* 1098e479 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098e47c push ecx */
  push32((uint32_t)(ECX));
  /* 1098e47d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098e480 push edx */
  push32((uint32_t)(EDX));
  /* 1098e481 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e484 push eax */
  push32((uint32_t)(EAX));
  /* 1098e485 call dword ptr [0x109b42f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42f8))), 0x1098e48bu);
  /* 1098e48b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098e48d jne 0x1098e496 */
  if (!C.zf) goto L_1098e496;
  /* 1098e48f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098e491 jmp 0x1098e581 */
  goto L_1098e581;
L_1098e496:;
  /* 1098e496 jmp 0x1098e57a */
  goto L_1098e57a;
L_1098e49b:;
  /* 1098e49b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1098e49e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1098e4a1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1098e4a8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098e4ab shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1098e4ad add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098e4b0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1098e4b2 call 0x10989040 */
  push32(0x1098e4b7u); f_10989040();
  /* 1098e4b7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1098e4ba mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1098e4bd mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1098e4c0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1098e4c3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1098e4ca jmp 0x1098e4e3 */
  goto L_1098e4e3;
  /* 1098e4cc mov eax, 1 */
  EAX = (0x1u);
  /* 1098e4d1 ret  */
  ESPCHK(0x1098e290u, _esp0);
  ESP += 4; return;
  /* 1098e4d2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1098e4d5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1098e4dc mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1098e4e3:;
  /* 1098e4e3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098e4e7 jne 0x1098e4f0 */
  if (!C.zf) goto L_1098e4f0;
  /* 1098e4e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098e4eb jmp 0x1098e581 */
  goto L_1098e581;
L_1098e4f0:;
  /* 1098e4f0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098e4f3 push eax */
  push32((uint32_t)(EAX));
  /* 1098e4f4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098e4f7 push ecx */
  push32((uint32_t)(ECX));
  /* 1098e4f8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1098e4fb push edx */
  push32((uint32_t)(EDX));
  /* 1098e4fc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098e4ff push eax */
  push32((uint32_t)(EAX));
  /* 1098e500 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098e503 push ecx */
  push32((uint32_t)(ECX));
  /* 1098e504 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e507 push edx */
  push32((uint32_t)(EDX));
  /* 1098e508 call dword ptr [0x109b42f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42f8))), 0x1098e50eu);
  /* 1098e50e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098e510 jne 0x1098e516 */
  if (!C.zf) goto L_1098e516;
  /* 1098e512 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098e514 jmp 0x1098e581 */
  goto L_1098e581;
L_1098e516:;
  /* 1098e516 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098e51a jne 0x1098e54a */
  if (!C.zf) goto L_1098e54a;
  /* 1098e51c push 0 */
  push32((uint32_t)(0x0u));
  /* 1098e51e push 0 */
  push32((uint32_t)(0x0u));
  /* 1098e520 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098e522 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098e524 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098e527 push eax */
  push32((uint32_t)(EAX));
  /* 1098e528 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098e52b push ecx */
  push32((uint32_t)(ECX));
  /* 1098e52c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1098e531 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1098e534 push edx */
  push32((uint32_t)(EDX));
  /* 1098e535 call dword ptr [0x109b43c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43c4))), 0x1098e53bu);
  /* 1098e53b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1098e53e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098e542 jne 0x1098e548 */
  if (!C.zf) goto L_1098e548;
  /* 1098e544 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098e546 jmp 0x1098e581 */
  goto L_1098e581;
L_1098e548:;
  /* 1098e548 jmp 0x1098e57a */
  goto L_1098e57a;
L_1098e54a:;
  /* 1098e54a push 0 */
  push32((uint32_t)(0x0u));
  /* 1098e54c push 0 */
  push32((uint32_t)(0x0u));
  /* 1098e54e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1098e551 push eax */
  push32((uint32_t)(EAX));
  /* 1098e552 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1098e555 push ecx */
  push32((uint32_t)(ECX));
  /* 1098e556 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1098e559 push edx */
  push32((uint32_t)(EDX));
  /* 1098e55a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1098e55d push eax */
  push32((uint32_t)(EAX));
  /* 1098e55e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1098e563 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1098e566 push ecx */
  push32((uint32_t)(ECX));
  /* 1098e567 call dword ptr [0x109b43c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43c4))), 0x1098e56du);
  /* 1098e56d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1098e570 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098e574 jne 0x1098e57a */
  if (!C.zf) goto L_1098e57a;
  /* 1098e576 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098e578 jmp 0x1098e581 */
  goto L_1098e581;
L_1098e57a:;
  /* 1098e57a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1098e57d jmp 0x1098e581 */
  goto L_1098e581;
L_1098e57f:;
  /* 1098e57f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1098e581:;
  /* 1098e581 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1098e584 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098e587 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1098e58e pop edi */
  EDI = (pop32());
  /* 1098e58f pop esi */
  ESI = (pop32());
  /* 1098e590 pop ebx */
  EBX = (pop32());
  /* 1098e591 mov esp, ebp */
  ESP = (EBP);
  /* 1098e593 pop ebp */
  EBP = (pop32());
  /* 1098e594 ret  */
  ESPCHK(0x1098e290u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5a0 @ 0x1098e5a0 (80 bytes, 32 insns) */
void f_1098e5a0(void) {
  FTRACE(0x1098e5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098e5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1098e5a1 mov ebp, esp */
  EBP = (ESP);
  /* 1098e5a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098e5a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098e5a9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1098e5ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e5af mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1098e5b2:;
  /* 1098e5b2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098e5b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098e5b8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098e5bb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1098e5be test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098e5c0 je 0x1098e5d7 */
  if (C.zf) goto L_1098e5d7;
  /* 1098e5c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098e5c5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1098e5c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098e5ca je 0x1098e5d7 */
  if (C.zf) goto L_1098e5d7;
  /* 1098e5cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098e5cf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098e5d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1098e5d5 jmp 0x1098e5b2 */
  goto L_1098e5b2;
L_1098e5d7:;
  /* 1098e5d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098e5da movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1098e5dd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098e5df jne 0x1098e5e9 */
  if (!C.zf) goto L_1098e5e9;
  /* 1098e5e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098e5e4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098e5e7 jmp 0x1098e5ec */
  goto L_1098e5ec;
L_1098e5e9:;
  /* 1098e5e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1098e5ec:;
  /* 1098e5ec mov esp, ebp */
  ESP = (EBP);
  /* 1098e5ee pop ebp */
  EBP = (pop32());
  /* 1098e5ef ret  */
  ESPCHK(0x1098e5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5f0 @ 0x1098e5f0 (130 bytes, 43 insns) */
void f_1098e5f0(void) {
  FTRACE(0x1098e5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098e5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1098e5f1 mov ebp, esp */
  EBP = (ESP);
  /* 1098e5f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1098e5f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e5f7 cmp eax, dword ptr [0x109b315c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109b315c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098e5fd jae 0x1098e621 */
  if (!C.cf) goto L_1098e621;
  /* 1098e5ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e602 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1098e605 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e608 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1098e60b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098e60e mov eax, dword ptr [ecx*4 + 0x109b3020] */
  EAX = (r32((uint32_t)(ECX*4 + 0x109b3020)));
  /* 1098e615 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1098e61a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1098e61d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098e61f jne 0x1098e63c */
  if (!C.zf) goto L_1098e63c;
L_1098e621:;
  /* 1098e621 call 0x1098dd70 */
  push32(0x1098e626u); f_1098dd70();
  /* 1098e626 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1098e62c call 0x1098dd80 */
  push32(0x1098e631u); f_1098dd80();
  /* 1098e631 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1098e637 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1098e63a jmp 0x1098e66e */
  goto L_1098e66e;
L_1098e63c:;
  /* 1098e63c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e63f push edx */
  push32((uint32_t)(EDX));
  /* 1098e640 call 0x1098f590 */
  push32(0x1098e645u); f_1098f590();
  /* 1098e645 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098e648 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1098e64b push eax */
  push32((uint32_t)(EAX));
  /* 1098e64c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098e64f push ecx */
  push32((uint32_t)(ECX));
  /* 1098e650 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e653 push edx */
  push32((uint32_t)(EDX));
  /* 1098e654 call 0x1098e680 */
  push32(0x1098e659u); f_1098e680();
  /* 1098e659 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098e65c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1098e65f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e662 push eax */
  push32((uint32_t)(EAX));
  /* 1098e663 call 0x1098f620 */
  push32(0x1098e668u); f_1098f620();
  /* 1098e668 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098e66b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1098e66e:;
  /* 1098e66e mov esp, ebp */
  ESP = (EBP);
  /* 1098e670 pop ebp */
  EBP = (pop32());
  /* 1098e671 ret  */
  ESPCHK(0x1098e5f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e680 @ 0x1098e680 (178 bytes, 56 insns) */
void f_1098e680(void) {
  FTRACE(0x1098e680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098e680 push ebp */
  push32((uint32_t)(EBP));
  /* 1098e681 mov ebp, esp */
  EBP = (ESP);
  /* 1098e683 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098e686 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e689 push eax */
  push32((uint32_t)(EAX));
  /* 1098e68a call 0x1098f410 */
  push32(0x1098e68fu); f_1098f410();
  /* 1098e68f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098e692 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1098e695 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098e699 jne 0x1098e6ae */
  if (!C.zf) goto L_1098e6ae;
  /* 1098e69b call 0x1098dd70 */
  push32(0x1098e6a0u); f_1098dd70();
  /* 1098e6a0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1098e6a6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1098e6a9 jmp 0x1098e72e */
  goto L_1098e72e;
L_1098e6ae:;
  /* 1098e6ae mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1098e6b1 push ecx */
  push32((uint32_t)(ECX));
  /* 1098e6b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098e6b4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098e6b7 push edx */
  push32((uint32_t)(EDX));
  /* 1098e6b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098e6bb push eax */
  push32((uint32_t)(EAX));
  /* 1098e6bc call dword ptr [0x109b42f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42f4))), 0x1098e6c2u);
  /* 1098e6c2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1098e6c5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098e6c9 jne 0x1098e6d6 */
  if (!C.zf) goto L_1098e6d6;
  /* 1098e6cb call dword ptr [0x109b439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b439c))), 0x1098e6d1u);
  /* 1098e6d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1098e6d4 jmp 0x1098e6dd */
  goto L_1098e6dd;
L_1098e6d6:;
  /* 1098e6d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1098e6dd:;
  /* 1098e6dd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098e6e1 je 0x1098e6f4 */
  if (C.zf) goto L_1098e6f4;
  /* 1098e6e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098e6e6 push ecx */
  push32((uint32_t)(ECX));
  /* 1098e6e7 call 0x1098dcd0 */
  push32(0x1098e6ecu); f_1098dcd0();
  /* 1098e6ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098e6ef or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1098e6f2 jmp 0x1098e72e */
  goto L_1098e72e;
L_1098e6f4:;
  /* 1098e6f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e6f7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1098e6fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e6fd and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1098e700 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098e703 mov ecx, dword ptr [edx*4 + 0x109b3020] */
  ECX = (r32((uint32_t)(EDX*4 + 0x109b3020)));
  /* 1098e70a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1098e70e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1098e711 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e714 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1098e717 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e71a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1098e71d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098e720 mov eax, dword ptr [eax*4 + 0x109b3020] */
  EAX = (r32((uint32_t)(EAX*4 + 0x109b3020)));
  /* 1098e727 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1098e72b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1098e72e:;
  /* 1098e72e mov esp, ebp */
  ESP = (EBP);
  /* 1098e730 pop ebp */
  EBP = (pop32());
  /* 1098e731 ret  */
  ESPCHK(0x1098e680u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e740 @ 0x1098e740 (130 bytes, 43 insns) */
void f_1098e740(void) {
  FTRACE(0x1098e740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098e740 push ebp */
  push32((uint32_t)(EBP));
  /* 1098e741 mov ebp, esp */
  EBP = (ESP);
  /* 1098e743 push ecx */
  push32((uint32_t)(ECX));
  /* 1098e744 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e747 cmp eax, dword ptr [0x109b315c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109b315c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098e74d jae 0x1098e771 */
  if (!C.cf) goto L_1098e771;
  /* 1098e74f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e752 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1098e755 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e758 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1098e75b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098e75e mov eax, dword ptr [ecx*4 + 0x109b3020] */
  EAX = (r32((uint32_t)(ECX*4 + 0x109b3020)));
  /* 1098e765 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1098e76a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1098e76d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098e76f jne 0x1098e78c */
  if (!C.zf) goto L_1098e78c;
L_1098e771:;
  /* 1098e771 call 0x1098dd70 */
  push32(0x1098e776u); f_1098dd70();
  /* 1098e776 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1098e77c call 0x1098dd80 */
  push32(0x1098e781u); f_1098dd80();
  /* 1098e781 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1098e787 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1098e78a jmp 0x1098e7be */
  goto L_1098e7be;
L_1098e78c:;
  /* 1098e78c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e78f push edx */
  push32((uint32_t)(EDX));
  /* 1098e790 call 0x1098f590 */
  push32(0x1098e795u); f_1098f590();
  /* 1098e795 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098e798 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1098e79b push eax */
  push32((uint32_t)(EAX));
  /* 1098e79c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098e79f push ecx */
  push32((uint32_t)(ECX));
  /* 1098e7a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e7a3 push edx */
  push32((uint32_t)(EDX));
  /* 1098e7a4 call 0x1098e7d0 */
  push32(0x1098e7a9u); f_1098e7d0();
  /* 1098e7a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098e7ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1098e7af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e7b2 push eax */
  push32((uint32_t)(EAX));
  /* 1098e7b3 call 0x1098f620 */
  push32(0x1098e7b8u); f_1098f620();
  /* 1098e7b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098e7bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1098e7be:;
  /* 1098e7be mov esp, ebp */
  ESP = (EBP);
  /* 1098e7c0 pop ebp */
  EBP = (pop32());
  /* 1098e7c1 ret  */
  ESPCHK(0x1098e740u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7d0 @ 0x1098e7d0 (627 bytes, 182 insns) */
void f_1098e7d0(void) {
  FTRACE(0x1098e7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098e7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1098e7d1 mov ebp, esp */
  EBP = (ESP);
  /* 1098e7d3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098e7d9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1098e7e0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098e7e3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1098e7e9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098e7ed jne 0x1098e7f6 */
  if (!C.zf) goto L_1098e7f6;
  /* 1098e7ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098e7f1 jmp 0x1098ea3f */
  goto L_1098ea3f;
L_1098e7f6:;
  /* 1098e7f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e7f9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1098e7fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e7ff and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1098e802 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098e805 mov eax, dword ptr [ecx*4 + 0x109b3020] */
  EAX = (r32((uint32_t)(ECX*4 + 0x109b3020)));
  /* 1098e80c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1098e811 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1098e814 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098e816 je 0x1098e828 */
  if (C.zf) goto L_1098e828;
  /* 1098e818 push 2 */
  push32((uint32_t)(0x2u));
  /* 1098e81a push 0 */
  push32((uint32_t)(0x0u));
  /* 1098e81c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e81f push edx */
  push32((uint32_t)(EDX));
  /* 1098e820 call 0x1098e680 */
  push32(0x1098e825u); f_1098e680();
  /* 1098e825 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1098e828:;
  /* 1098e828 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e82b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1098e82e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e831 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1098e834 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098e837 mov edx, dword ptr [eax*4 + 0x109b3020] */
  EDX = (r32((uint32_t)(EAX*4 + 0x109b3020)));
  /* 1098e83e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1098e843 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1098e848 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098e84a je 0x1098e95c */
  if (C.zf) goto L_1098e95c;
  /* 1098e850 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098e853 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1098e856 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1098e85d:;
  /* 1098e85d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098e860 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098e863 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098e866 jae 0x1098e95a */
  if (!C.cf) goto L_1098e95a;
  /* 1098e86c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1098e872 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1098e875:;
  /* 1098e875 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098e878 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1098e87e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098e880 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098e886 jge 0x1098e8e7 */
  if ((C.sf==C.of)) goto L_1098e8e7;
  /* 1098e888 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098e88b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098e88e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098e891 jae 0x1098e8e7 */
  if (!C.cf) goto L_1098e8e7;
  /* 1098e893 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098e896 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1098e898 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1098e89e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098e8a1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098e8a4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1098e8a7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1098e8ae cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098e8b1 jne 0x1098e8d1 */
  if (!C.zf) goto L_1098e8d1;
  /* 1098e8b3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1098e8b9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098e8bc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1098e8c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098e8c5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1098e8c8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098e8cb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098e8ce mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1098e8d1:;
  /* 1098e8d1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098e8d4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1098e8da mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1098e8dc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098e8df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098e8e2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1098e8e5 jmp 0x1098e875 */
  goto L_1098e875;
L_1098e8e7:;
  /* 1098e8e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098e8e9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1098e8ef push edx */
  push32((uint32_t)(EDX));
  /* 1098e8f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098e8f3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1098e8f9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098e8fb push eax */
  push32((uint32_t)(EAX));
  /* 1098e8fc lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1098e902 push edx */
  push32((uint32_t)(EDX));
  /* 1098e903 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e906 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1098e909 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e90c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1098e90f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098e912 mov edx, dword ptr [eax*4 + 0x109b3020] */
  EDX = (r32((uint32_t)(EAX*4 + 0x109b3020)));
  /* 1098e919 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1098e91c push eax */
  push32((uint32_t)(EAX));
  /* 1098e91d call dword ptr [0x109b435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b435c))), 0x1098e923u);
  /* 1098e923 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098e925 je 0x1098e94a */
  if (C.zf) goto L_1098e94a;
  /* 1098e927 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098e92a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098e930 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1098e933 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098e936 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1098e93c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098e93e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098e944 jge 0x1098e948 */
  if ((C.sf==C.of)) goto L_1098e948;
  /* 1098e946 jmp 0x1098e95a */
  goto L_1098e95a;
L_1098e948:;
  /* 1098e948 jmp 0x1098e955 */
  goto L_1098e955;
L_1098e94a:;
  /* 1098e94a call dword ptr [0x109b439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b439c))), 0x1098e950u);
  /* 1098e950 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1098e953 jmp 0x1098e95a */
  goto L_1098e95a;
L_1098e955:;
  /* 1098e955 jmp 0x1098e85d */
  goto L_1098e85d;
L_1098e95a:;
  /* 1098e95a jmp 0x1098e9ac */
  goto L_1098e9ac;
L_1098e95c:;
  /* 1098e95c push 0 */
  push32((uint32_t)(0x0u));
  /* 1098e95e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1098e964 push ecx */
  push32((uint32_t)(ECX));
  /* 1098e965 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1098e968 push edx */
  push32((uint32_t)(EDX));
  /* 1098e969 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098e96c push eax */
  push32((uint32_t)(EAX));
  /* 1098e96d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e970 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1098e973 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e976 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1098e979 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098e97c mov eax, dword ptr [ecx*4 + 0x109b3020] */
  EAX = (r32((uint32_t)(ECX*4 + 0x109b3020)));
  /* 1098e983 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1098e986 push ecx */
  push32((uint32_t)(ECX));
  /* 1098e987 call dword ptr [0x109b435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b435c))), 0x1098e98du);
  /* 1098e98d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098e98f je 0x1098e9a3 */
  if (C.zf) goto L_1098e9a3;
  /* 1098e991 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1098e998 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1098e99e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1098e9a1 jmp 0x1098e9ac */
  goto L_1098e9ac;
L_1098e9a3:;
  /* 1098e9a3 call dword ptr [0x109b439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b439c))), 0x1098e9a9u);
  /* 1098e9a9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1098e9ac:;
  /* 1098e9ac cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098e9b0 jne 0x1098ea36 */
  if (!C.zf) goto L_1098ea36;
  /* 1098e9b6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098e9ba je 0x1098e9ea */
  if (C.zf) goto L_1098e9ea;
  /* 1098e9bc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098e9c0 jne 0x1098e9d9 */
  if (!C.zf) goto L_1098e9d9;
  /* 1098e9c2 call 0x1098dd70 */
  push32(0x1098e9c7u); f_1098dd70();
  /* 1098e9c7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1098e9cd call 0x1098dd80 */
  push32(0x1098e9d2u); f_1098dd80();
  /* 1098e9d2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098e9d5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1098e9d7 jmp 0x1098e9e5 */
  goto L_1098e9e5;
L_1098e9d9:;
  /* 1098e9d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098e9dc push edx */
  push32((uint32_t)(EDX));
  /* 1098e9dd call 0x1098dcd0 */
  push32(0x1098e9e2u); f_1098dcd0();
  /* 1098e9e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1098e9e5:;
  /* 1098e9e5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1098e9e8 jmp 0x1098ea3f */
  goto L_1098ea3f;
L_1098e9ea:;
  /* 1098e9ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e9ed sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1098e9f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098e9f3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1098e9f6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098e9f9 mov edx, dword ptr [eax*4 + 0x109b3020] */
  EDX = (r32((uint32_t)(EAX*4 + 0x109b3020)));
  /* 1098ea00 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1098ea05 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1098ea08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098ea0a je 0x1098ea1b */
  if (C.zf) goto L_1098ea1b;
  /* 1098ea0c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098ea0f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1098ea12 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ea15 jne 0x1098ea1b */
  if (!C.zf) goto L_1098ea1b;
  /* 1098ea17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098ea19 jmp 0x1098ea3f */
  goto L_1098ea3f;
L_1098ea1b:;
  /* 1098ea1b call 0x1098dd70 */
  push32(0x1098ea20u); f_1098dd70();
  /* 1098ea20 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1098ea26 call 0x1098dd80 */
  push32(0x1098ea2bu); f_1098dd80();
  /* 1098ea2b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1098ea31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1098ea34 jmp 0x1098ea3f */
  goto L_1098ea3f;
L_1098ea36:;
  /* 1098ea36 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098ea39 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1098ea3f:;
  /* 1098ea3f mov esp, ebp */
  ESP = (EBP);
  /* 1098ea41 pop ebp */
  EBP = (pop32());
  /* 1098ea42 ret  */
  ESPCHK(0x1098e7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea50 @ 0x1098ea50 (199 bytes, 68 insns) */
void f_1098ea50(void) {
  FTRACE(0x1098ea50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098ea50 push ebp */
  push32((uint32_t)(EBP));
  /* 1098ea51 mov ebp, esp */
  EBP = (ESP);
  /* 1098ea53 push ecx */
  push32((uint32_t)(ECX));
  /* 1098ea54 push ebx */
  push32((uint32_t)(EBX));
  /* 1098ea55 push esi */
  push32((uint32_t)(ESI));
  /* 1098ea56 push edi */
  push32((uint32_t)(EDI));
L_1098ea57:;
  /* 1098ea57 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ea5b jne 0x1098ea7b */
  if (!C.zf) goto L_1098ea7b;
  /* 1098ea5d push 0x109ad27c */
  push32((uint32_t)(0x109ad27cu));
  /* 1098ea62 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098ea64 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1098ea66 push 0x109ad348 */
  push32((uint32_t)(0x109ad348u));
  /* 1098ea6b push 2 */
  push32((uint32_t)(0x2u));
  /* 1098ea6d call 0x10984f60 */
  push32(0x1098ea72u); f_10984f60();
  /* 1098ea72 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ea75 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ea78 jne 0x1098ea7b */
  if (!C.zf) goto L_1098ea7b;
  /* 1098ea7a int3  */
  x86_unimpl("int3 @ 0x1098ea7a");
L_1098ea7b:;
  /* 1098ea7b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098ea7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098ea7f jne 0x1098ea57 */
  if (!C.zf) goto L_1098ea57;
  /* 1098ea81 mov ecx, dword ptr [0x109b186c] */
  ECX = (r32((uint32_t)(0x109b186c)));
  /* 1098ea87 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ea8a mov dword ptr [0x109b186c], ecx */
  w32((uint32_t)(0x109b186c), (ECX));
  /* 1098ea90 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098ea93 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1098ea96 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1098ea98 push 0x109ad348 */
  push32((uint32_t)(0x109ad348u));
  /* 1098ea9d push 2 */
  push32((uint32_t)(0x2u));
  /* 1098ea9f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1098eaa4 call 0x10985ea0 */
  push32(0x1098eaa9u); f_10985ea0();
  /* 1098eaa9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098eaac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098eaaf mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1098eab2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098eab5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098eab9 je 0x1098ead6 */
  if (C.zf) goto L_1098ead6;
  /* 1098eabb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098eabe mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1098eac1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1098eac4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098eac7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1098eaca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098eacd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1098ead4 jmp 0x1098eafb */
  goto L_1098eafb;
L_1098ead6:;
  /* 1098ead6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098ead9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1098eadc or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1098eadf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098eae2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1098eae5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098eae8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098eaeb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098eaee mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1098eaf1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098eaf4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1098eafb:;
  /* 1098eafb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098eafe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098eb01 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1098eb04 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1098eb06 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098eb09 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1098eb10 pop edi */
  EDI = (pop32());
  /* 1098eb11 pop esi */
  ESI = (pop32());
  /* 1098eb12 pop ebx */
  EBX = (pop32());
  /* 1098eb13 mov esp, ebp */
  ESP = (EBP);
  /* 1098eb15 pop ebp */
  EBP = (pop32());
  /* 1098eb16 ret  */
  ESPCHK(0x1098ea50u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1098eb20 (50 bytes, 17 insns) */
void f_1098eb20(void) {
  FTRACE(0x1098eb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098eb20 push ebp */
  push32((uint32_t)(EBP));
  /* 1098eb21 mov ebp, esp */
  EBP = (ESP);
  /* 1098eb23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098eb26 cmp eax, dword ptr [0x109b315c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109b315c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098eb2c jb 0x1098eb32 */
  if (C.cf) goto L_1098eb32;
  /* 1098eb2e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098eb30 jmp 0x1098eb50 */
  goto L_1098eb50;
L_1098eb32:;
  /* 1098eb32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098eb35 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1098eb38 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098eb3b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1098eb3e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098eb41 mov eax, dword ptr [ecx*4 + 0x109b3020] */
  EAX = (r32((uint32_t)(ECX*4 + 0x109b3020)));
  /* 1098eb48 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1098eb4d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1098eb50:;
  /* 1098eb50 pop ebp */
  EBP = (pop32());
  /* 1098eb51 ret  */
  ESPCHK(0x1098eb20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb60 @ 0x1098eb60 (300 bytes, 80 insns) */
void f_1098eb60(void) {
  FTRACE(0x1098eb60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098eb60 push ebp */
  push32((uint32_t)(EBP));
  /* 1098eb61 mov ebp, esp */
  EBP = (ESP);
  /* 1098eb63 push ecx */
  push32((uint32_t)(ECX));
  /* 1098eb64 cmp dword ptr [0x109b2d20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b2d20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098eb6b jne 0x1098eb79 */
  if (!C.zf) goto L_1098eb79;
  /* 1098eb6d mov dword ptr [0x109b2d20], 0x200 */
  w32((uint32_t)(0x109b2d20), (0x200u));
  /* 1098eb77 jmp 0x1098eb8c */
  goto L_1098eb8c;
L_1098eb79:;
  /* 1098eb79 cmp dword ptr [0x109b2d20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x109b2d20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098eb80 jge 0x1098eb8c */
  if ((C.sf==C.of)) goto L_1098eb8c;
  /* 1098eb82 mov dword ptr [0x109b2d20], 0x14 */
  w32((uint32_t)(0x109b2d20), (0x14u));
L_1098eb8c:;
  /* 1098eb8c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1098eb91 push 0x109ad354 */
  push32((uint32_t)(0x109ad354u));
  /* 1098eb96 push 2 */
  push32((uint32_t)(0x2u));
  /* 1098eb98 push 4 */
  push32((uint32_t)(0x4u));
  /* 1098eb9a mov eax, dword ptr [0x109b2d20] */
  EAX = (r32((uint32_t)(0x109b2d20)));
  /* 1098eb9f push eax */
  push32((uint32_t)(EAX));
  /* 1098eba0 call 0x109862b0 */
  push32(0x1098eba5u); f_109862b0();
  /* 1098eba5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098eba8 mov dword ptr [0x109b19e0], eax */
  w32((uint32_t)(0x109b19e0), (EAX));
  /* 1098ebad cmp dword ptr [0x109b19e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b19e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ebb4 jne 0x1098ebf5 */
  if (!C.zf) goto L_1098ebf5;
  /* 1098ebb6 mov dword ptr [0x109b2d20], 0x14 */
  w32((uint32_t)(0x109b2d20), (0x14u));
  /* 1098ebc0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1098ebc5 push 0x109ad354 */
  push32((uint32_t)(0x109ad354u));
  /* 1098ebca push 2 */
  push32((uint32_t)(0x2u));
  /* 1098ebcc push 4 */
  push32((uint32_t)(0x4u));
  /* 1098ebce mov ecx, dword ptr [0x109b2d20] */
  ECX = (r32((uint32_t)(0x109b2d20)));
  /* 1098ebd4 push ecx */
  push32((uint32_t)(ECX));
  /* 1098ebd5 call 0x109862b0 */
  push32(0x1098ebdau); f_109862b0();
  /* 1098ebda add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ebdd mov dword ptr [0x109b19e0], eax */
  w32((uint32_t)(0x109b19e0), (EAX));
  /* 1098ebe2 cmp dword ptr [0x109b19e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b19e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ebe9 jne 0x1098ebf5 */
  if (!C.zf) goto L_1098ebf5;
  /* 1098ebeb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1098ebed call 0x10984e10 */
  push32(0x1098ebf2u); f_10984e10();
  /* 1098ebf2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1098ebf5:;
  /* 1098ebf5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1098ebfc jmp 0x1098ec07 */
  goto L_1098ec07;
L_1098ebfe:;
  /* 1098ebfe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098ec01 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ec04 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1098ec07:;
  /* 1098ec07 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ec0b jge 0x1098ec26 */
  if ((C.sf==C.of)) goto L_1098ec26;
  /* 1098ec0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098ec10 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1098ec13 add eax, 0x109b0120 */
  { uint32_t _a=(EAX),_b=(0x109b0120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ec18 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098ec1b mov edx, dword ptr [0x109b19e0] */
  EDX = (r32((uint32_t)(0x109b19e0)));
  /* 1098ec21 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1098ec24 jmp 0x1098ebfe */
  goto L_1098ebfe;
L_1098ec26:;
  /* 1098ec26 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1098ec2d jmp 0x1098ec38 */
  goto L_1098ec38;
L_1098ec2f:;
  /* 1098ec2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098ec32 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ec35 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1098ec38:;
  /* 1098ec38 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ec3c jge 0x1098ec88 */
  if ((C.sf==C.of)) goto L_1098ec88;
  /* 1098ec3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098ec41 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1098ec44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098ec47 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1098ec4a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098ec4d mov eax, dword ptr [ecx*4 + 0x109b3020] */
  EAX = (r32((uint32_t)(ECX*4 + 0x109b3020)));
  /* 1098ec54 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ec58 je 0x1098ec76 */
  if (C.zf) goto L_1098ec76;
  /* 1098ec5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098ec5d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1098ec60 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098ec63 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1098ec66 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098ec69 mov eax, dword ptr [ecx*4 + 0x109b3020] */
  EAX = (r32((uint32_t)(ECX*4 + 0x109b3020)));
  /* 1098ec70 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ec74 jne 0x1098ec86 */
  if (!C.zf) goto L_1098ec86;
L_1098ec76:;
  /* 1098ec76 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098ec79 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1098ec7c mov dword ptr [ecx + 0x109b0130], 0xffffffff */
  w32((uint32_t)(ECX + 0x109b0130), (0xffffffffu));
L_1098ec86:;
  /* 1098ec86 jmp 0x1098ec2f */
  goto L_1098ec2f;
L_1098ec88:;
  /* 1098ec88 mov esp, ebp */
  ESP = (EBP);
  /* 1098ec8a pop ebp */
  EBP = (pop32());
  /* 1098ec8b ret  */
  ESPCHK(0x1098eb60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec90 @ 0x1098ec90 (26 bytes, 9 insns) */
void f_1098ec90(void) {
  FTRACE(0x1098ec90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098ec90 push ebp */
  push32((uint32_t)(EBP));
  /* 1098ec91 mov ebp, esp */
  EBP = (ESP);
  /* 1098ec93 call 0x1098f890 */
  push32(0x1098ec98u); f_1098f890();
  /* 1098ec98 movsx eax, byte ptr [0x109b1688] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x109b1688))));
  /* 1098ec9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098eca1 je 0x1098eca8 */
  if (C.zf) goto L_1098eca8;
  /* 1098eca3 call 0x1098f650 */
  push32(0x1098eca8u); f_1098f650();
L_1098eca8:;
  /* 1098eca8 pop ebp */
  EBP = (pop32());
  /* 1098eca9 ret  */
  ESPCHK(0x1098ec90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ecb0 @ 0x1098ecb0 (61 bytes, 20 insns) */
void f_1098ecb0(void) {
  FTRACE(0x1098ecb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098ecb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1098ecb1 mov ebp, esp */
  EBP = (ESP);
  /* 1098ecb3 cmp dword ptr [ebp + 8], 0x109b0120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x109b0120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ecba jb 0x1098ecde */
  if (C.cf) goto L_1098ecde;
  /* 1098ecbc cmp dword ptr [ebp + 8], 0x109b0380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x109b0380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ecc3 ja 0x1098ecde */
  if ((!C.cf&&!C.zf)) goto L_1098ecde;
  /* 1098ecc5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098ecc8 sub eax, 0x109b0120 */
  { uint32_t _a=(EAX),_b=(0x109b0120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098eccd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1098ecd0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ecd3 push eax */
  push32((uint32_t)(EAX));
  /* 1098ecd4 call 0x109898a0 */
  push32(0x1098ecd9u); f_109898a0();
  /* 1098ecd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ecdc jmp 0x1098eceb */
  goto L_1098eceb;
L_1098ecde:;
  /* 1098ecde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098ece1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ece4 push ecx */
  push32((uint32_t)(ECX));
  /* 1098ece5 call dword ptr [0x109b4330] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4330))), 0x1098ecebu);
L_1098eceb:;
  /* 1098eceb pop ebp */
  EBP = (pop32());
  /* 1098ecec ret  */
  ESPCHK(0x1098ecb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ecf0 @ 0x1098ecf0 (41 bytes, 16 insns) */
void f_1098ecf0(void) {
  FTRACE(0x1098ecf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098ecf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1098ecf1 mov ebp, esp */
  EBP = (ESP);
  /* 1098ecf3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ecf7 jge 0x1098ed0a */
  if ((C.sf==C.of)) goto L_1098ed0a;
  /* 1098ecf9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098ecfc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ecff push eax */
  push32((uint32_t)(EAX));
  /* 1098ed00 call 0x109898a0 */
  push32(0x1098ed05u); f_109898a0();
  /* 1098ed05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ed08 jmp 0x1098ed17 */
  goto L_1098ed17;
L_1098ed0a:;
  /* 1098ed0a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098ed0d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ed10 push ecx */
  push32((uint32_t)(ECX));
  /* 1098ed11 call dword ptr [0x109b4330] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4330))), 0x1098ed17u);
L_1098ed17:;
  /* 1098ed17 pop ebp */
  EBP = (pop32());
  /* 1098ed18 ret  */
  ESPCHK(0x1098ecf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed20 @ 0x1098ed20 (61 bytes, 20 insns) */
void f_1098ed20(void) {
  FTRACE(0x1098ed20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098ed20 push ebp */
  push32((uint32_t)(EBP));
  /* 1098ed21 mov ebp, esp */
  EBP = (ESP);
  /* 1098ed23 cmp dword ptr [ebp + 8], 0x109b0120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x109b0120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ed2a jb 0x1098ed4e */
  if (C.cf) goto L_1098ed4e;
  /* 1098ed2c cmp dword ptr [ebp + 8], 0x109b0380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x109b0380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ed33 ja 0x1098ed4e */
  if ((!C.cf&&!C.zf)) goto L_1098ed4e;
  /* 1098ed35 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098ed38 sub eax, 0x109b0120 */
  { uint32_t _a=(EAX),_b=(0x109b0120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098ed3d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1098ed40 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ed43 push eax */
  push32((uint32_t)(EAX));
  /* 1098ed44 call 0x10989940 */
  push32(0x1098ed49u); f_10989940();
  /* 1098ed49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ed4c jmp 0x1098ed5b */
  goto L_1098ed5b;
L_1098ed4e:;
  /* 1098ed4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098ed51 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ed54 push ecx */
  push32((uint32_t)(ECX));
  /* 1098ed55 call dword ptr [0x109b432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b432c))), 0x1098ed5bu);
L_1098ed5b:;
  /* 1098ed5b pop ebp */
  EBP = (pop32());
  /* 1098ed5c ret  */
  ESPCHK(0x1098ed20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed60 @ 0x1098ed60 (41 bytes, 16 insns) */
void f_1098ed60(void) {
  FTRACE(0x1098ed60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098ed60 push ebp */
  push32((uint32_t)(EBP));
  /* 1098ed61 mov ebp, esp */
  EBP = (ESP);
  /* 1098ed63 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ed67 jge 0x1098ed7a */
  if ((C.sf==C.of)) goto L_1098ed7a;
  /* 1098ed69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098ed6c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ed6f push eax */
  push32((uint32_t)(EAX));
  /* 1098ed70 call 0x10989940 */
  push32(0x1098ed75u); f_10989940();
  /* 1098ed75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ed78 jmp 0x1098ed87 */
  goto L_1098ed87;
L_1098ed7a:;
  /* 1098ed7a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098ed7d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ed80 push ecx */
  push32((uint32_t)(ECX));
  /* 1098ed81 call dword ptr [0x109b432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b432c))), 0x1098ed87u);
L_1098ed87:;
  /* 1098ed87 pop ebp */
  EBP = (pop32());
  /* 1098ed88 ret  */
  ESPCHK(0x1098ed60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed90 @ 0x1098ed90 (119 bytes, 34 insns) */
void f_1098ed90(void) {
  FTRACE(0x1098ed90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098ed90 push ebp */
  push32((uint32_t)(EBP));
  /* 1098ed91 mov ebp, esp */
  EBP = (ESP);
  /* 1098ed93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098ed96 push 0x109b19dc */
  push32((uint32_t)(0x109b19dcu));
  /* 1098ed9b call dword ptr [0x109b4370] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4370))), 0x1098eda1u);
  /* 1098eda1 cmp dword ptr [0x109b19cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b19cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098eda8 je 0x1098edc8 */
  if (C.zf) goto L_1098edc8;
  /* 1098edaa push 0x109b19dc */
  push32((uint32_t)(0x109b19dcu));
  /* 1098edaf call dword ptr [0x109b4360] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4360))), 0x1098edb5u);
  /* 1098edb5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1098edb7 call 0x109898a0 */
  push32(0x1098edbcu); f_109898a0();
  /* 1098edbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098edbf mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1098edc6 jmp 0x1098edcf */
  goto L_1098edcf;
L_1098edc8:;
  /* 1098edc8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1098edcf:;
  /* 1098edcf mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1098edd3 push eax */
  push32((uint32_t)(EAX));
  /* 1098edd4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098edd7 push ecx */
  push32((uint32_t)(ECX));
  /* 1098edd8 call 0x1098ee10 */
  push32(0x1098edddu); f_1098ee10();
  /* 1098eddd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ede0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1098ede3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ede7 je 0x1098edf5 */
  if (C.zf) goto L_1098edf5;
  /* 1098ede9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1098edeb call 0x10989940 */
  push32(0x1098edf0u); f_10989940();
  /* 1098edf0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098edf3 jmp 0x1098ee00 */
  goto L_1098ee00;
L_1098edf5:;
  /* 1098edf5 push 0x109b19dc */
  push32((uint32_t)(0x109b19dcu));
  /* 1098edfa call dword ptr [0x109b4360] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4360))), 0x1098ee00u);
L_1098ee00:;
  /* 1098ee00 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098ee03 mov esp, ebp */
  ESP = (EBP);
  /* 1098ee05 pop ebp */
  EBP = (pop32());
  /* 1098ee06 ret  */
  ESPCHK(0x1098ed90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee10 @ 0x1098ee10 (160 bytes, 50 insns) */
void f_1098ee10(void) {
  FTRACE(0x1098ee10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098ee10 push ebp */
  push32((uint32_t)(EBP));
  /* 1098ee11 mov ebp, esp */
  EBP = (ESP);
  /* 1098ee13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098ee16 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ee1a jne 0x1098ee23 */
  if (!C.zf) goto L_1098ee23;
  /* 1098ee1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098ee1e jmp 0x1098eeac */
  goto L_1098eeac;
L_1098ee23:;
  /* 1098ee23 cmp dword ptr [0x109b1850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b1850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ee2a jne 0x1098ee5a */
  if (!C.zf) goto L_1098ee5a;
  /* 1098ee2c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098ee2f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1098ee34 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ee39 jle 0x1098ee4b */
  if ((C.zf||C.sf!=C.of)) goto L_1098ee4b;
  /* 1098ee3b call 0x1098dd70 */
  push32(0x1098ee40u); f_1098dd70();
  /* 1098ee40 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1098ee46 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1098ee49 jmp 0x1098eeac */
  goto L_1098eeac;
L_1098ee4b:;
  /* 1098ee4b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098ee4e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1098ee51 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1098ee53 mov eax, 1 */
  EAX = (0x1u);
  /* 1098ee58 jmp 0x1098eeac */
  goto L_1098eeac;
L_1098ee5a:;
  /* 1098ee5a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1098ee61 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1098ee64 push eax */
  push32((uint32_t)(EAX));
  /* 1098ee65 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098ee67 mov ecx, dword ptr [0x109afea4] */
  ECX = (r32((uint32_t)(0x109afea4)));
  /* 1098ee6d push ecx */
  push32((uint32_t)(ECX));
  /* 1098ee6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098ee71 push edx */
  push32((uint32_t)(EDX));
  /* 1098ee72 push 1 */
  push32((uint32_t)(0x1u));
  /* 1098ee74 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1098ee77 push eax */
  push32((uint32_t)(EAX));
  /* 1098ee78 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1098ee7d mov ecx, dword ptr [0x109b1860] */
  ECX = (r32((uint32_t)(0x109b1860)));
  /* 1098ee83 push ecx */
  push32((uint32_t)(ECX));
  /* 1098ee84 call dword ptr [0x109b43c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43c4))), 0x1098ee8au);
  /* 1098ee8a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1098ee8d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ee91 je 0x1098ee99 */
  if (C.zf) goto L_1098ee99;
  /* 1098ee93 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ee97 je 0x1098eea9 */
  if (C.zf) goto L_1098eea9;
L_1098ee99:;
  /* 1098ee99 call 0x1098dd70 */
  push32(0x1098ee9eu); f_1098dd70();
  /* 1098ee9e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1098eea4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1098eea7 jmp 0x1098eeac */
  goto L_1098eeac;
L_1098eea9:;
  /* 1098eea9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1098eeac:;
  /* 1098eeac mov esp, ebp */
  ESP = (EBP);
  /* 1098eeae pop ebp */
  EBP = (pop32());
  /* 1098eeaf ret  */
  ESPCHK(0x1098ee10u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1098eeb0 (32 bytes, 18 insns) */
void f_1098eeb0(void) {
  FTRACE(0x1098eeb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098eeb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1098eeb1 mov ebp, esp */
  EBP = (ESP);
  /* 1098eeb3 push ebx */
  push32((uint32_t)(EBX));
  /* 1098eeb4 push esi */
  push32((uint32_t)(ESI));
  /* 1098eeb5 push edi */
  push32((uint32_t)(EDI));
  /* 1098eeb6 push ebp */
  push32((uint32_t)(EBP));
  /* 1098eeb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098eeb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098eebb push 0x1098eec8 */
  push32((uint32_t)(0x1098eec8u));
  /* 1098eec0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1098eec3 call 0x109965fc */
  push32(0x1098eec8u); f_109965fc();
  /* 1098eec8 pop ebp */
  EBP = (pop32());
  /* 1098eec9 pop edi */
  EDI = (pop32());
  /* 1098eeca pop esi */
  ESI = (pop32());
  /* 1098eecb pop ebx */
  EBX = (pop32());
  /* 1098eecc mov esp, ebp */
  ESP = (EBP);
  /* 1098eece pop ebp */
  EBP = (pop32());
  /* 1098eecf ret  */
  ESPCHK(0x1098eeb0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1098eef2 (104 bytes, 33 insns) */
void f_1098eef2(void) {
  FTRACE(0x1098eef2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098eef2 push ebx */
  push32((uint32_t)(EBX));
  /* 1098eef3 push esi */
  push32((uint32_t)(ESI));
  /* 1098eef4 push edi */
  push32((uint32_t)(EDI));
  /* 1098eef5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1098eef9 push eax */
  push32((uint32_t)(EAX));
  /* 1098eefa push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1098eefc push 0x1098eed0 */
  push32((uint32_t)(0x1098eed0u));
  /* 1098ef01 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1098ef08 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1098ef0f:;
  /* 1098ef0f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1098ef13 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1098ef16 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1098ef19 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ef1c je 0x1098ef4c */
  if (C.zf) goto L_1098ef4c;
  /* 1098ef1e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ef22 je 0x1098ef4c */
  if (C.zf) goto L_1098ef4c;
  /* 1098ef24 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1098ef27 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1098ef2a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1098ef2e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1098ef31 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ef36 jne 0x1098ef4a */
  if (!C.zf) goto L_1098ef4a;
  /* 1098ef38 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1098ef3d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1098ef41 call 0x1098ef86 */
  push32(0x1098ef46u); f_1098ef86();
  /* 1098ef46 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1098ef4au);
L_1098ef4a:;
  /* 1098ef4a jmp 0x1098ef0f */
  goto L_1098ef0f;
L_1098ef4c:;
  /* 1098ef4c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1098ef53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ef56 pop edi */
  EDI = (pop32());
  /* 1098ef57 pop esi */
  ESI = (pop32());
  /* 1098ef58 pop ebx */
  EBX = (pop32());
  /* 1098ef59 ret  */
  ESPCHK(0x1098eef2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef86 @ 0x1098ef86 (24 bytes, 10 insns) */
void f_1098ef86(void) {
  FTRACE(0x1098ef86u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098ef86 push ebx */
  push32((uint32_t)(EBX));
  /* 1098ef87 push ecx */
  push32((uint32_t)(ECX));
  /* 1098ef88 mov ebx, 0x109b03b8 */
  EBX = (0x109b03b8u);
  /* 1098ef8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098ef90 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1098ef93 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1098ef96 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1098ef99 pop ecx */
  ECX = (pop32());
  /* 1098ef9a pop ebx */
  EBX = (pop32());
  /* 1098ef9b ret 4 */
  ESPCHK(0x1098ef86u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f065 @ 0x1098f065 (27 bytes, 11 insns) */
void f_1098f065(void) {
  FTRACE(0x1098f065u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098f065 push ebp */
  push32((uint32_t)(EBP));
  /* 1098f066 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1098f06a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1098f06c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1098f06f push eax */
  push32((uint32_t)(EAX));
  /* 1098f070 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1098f073 push eax */
  push32((uint32_t)(EAX));
  /* 1098f074 call 0x1098eef2 */
  push32(0x1098f079u); f_1098eef2();
  /* 1098f079 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f07c pop ebp */
  EBP = (pop32());
  /* 1098f07d ret 4 */
  ESPCHK(0x1098f065u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f080 @ 0x1098f080 (482 bytes, 138 insns) */
void f_1098f080(void) {
  FTRACE(0x1098f080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098f080 push ebp */
  push32((uint32_t)(EBP));
  /* 1098f081 mov ebp, esp */
  EBP = (ESP);
  /* 1098f083 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098f086 push esi */
  push32((uint32_t)(ESI));
  /* 1098f087 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1098f08e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1098f090 call 0x109898a0 */
  push32(0x1098f095u); f_109898a0();
  /* 1098f095 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f098 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1098f09f jmp 0x1098f0aa */
  goto L_1098f0aa;
L_1098f0a1:;
  /* 1098f0a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098f0a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f0a7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1098f0aa:;
  /* 1098f0aa cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f0ae jge 0x1098f250 */
  if ((C.sf==C.of)) goto L_1098f250;
  /* 1098f0b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098f0b7 cmp dword ptr [ecx*4 + 0x109b3020], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x109b3020))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f0bf je 0x1098f1b6 */
  if (C.zf) goto L_1098f1b6;
  /* 1098f0c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098f0c8 mov eax, dword ptr [edx*4 + 0x109b3020] */
  EAX = (r32((uint32_t)(EDX*4 + 0x109b3020)));
  /* 1098f0cf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1098f0d2 jmp 0x1098f0dd */
  goto L_1098f0dd;
L_1098f0d4:;
  /* 1098f0d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098f0d7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f0da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1098f0dd:;
  /* 1098f0dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098f0e0 mov eax, dword ptr [edx*4 + 0x109b3020] */
  EAX = (r32((uint32_t)(EDX*4 + 0x109b3020)));
  /* 1098f0e7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f0ec cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f0ef jae 0x1098f1a6 */
  if (!C.cf) goto L_1098f1a6;
  /* 1098f0f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098f0f8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1098f0fc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1098f0ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098f101 jne 0x1098f1a1 */
  if (!C.zf) goto L_1098f1a1;
  /* 1098f107 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098f10a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f10e jne 0x1098f149 */
  if (!C.zf) goto L_1098f149;
  /* 1098f110 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1098f112 call 0x109898a0 */
  push32(0x1098f117u); f_109898a0();
  /* 1098f117 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f11a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098f11d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f121 jne 0x1098f13f */
  if (!C.zf) goto L_1098f13f;
  /* 1098f123 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098f126 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f129 push edx */
  push32((uint32_t)(EDX));
  /* 1098f12a call dword ptr [0x109b4334] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4334))), 0x1098f130u);
  /* 1098f130 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098f133 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1098f136 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f139 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098f13c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1098f13f:;
  /* 1098f13f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1098f141 call 0x10989940 */
  push32(0x1098f146u); f_10989940();
  /* 1098f146 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1098f149:;
  /* 1098f149 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098f14c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f14f push eax */
  push32((uint32_t)(EAX));
  /* 1098f150 call dword ptr [0x109b4330] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4330))), 0x1098f156u);
  /* 1098f156 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098f159 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1098f15d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1098f160 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098f162 je 0x1098f176 */
  if (C.zf) goto L_1098f176;
  /* 1098f164 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098f167 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f16a push eax */
  push32((uint32_t)(EAX));
  /* 1098f16b call dword ptr [0x109b432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b432c))), 0x1098f171u);
  /* 1098f171 jmp 0x1098f0d4 */
  goto L_1098f0d4;
L_1098f176:;
  /* 1098f176 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098f179 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1098f17f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098f182 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1098f185 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098f188 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098f18b sub eax, dword ptr [edx*4 + 0x109b3020] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x109b3020))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098f192 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1098f193 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1098f198 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1098f19a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f19c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1098f19f jmp 0x1098f1a6 */
  goto L_1098f1a6;
L_1098f1a1:;
  /* 1098f1a1 jmp 0x1098f0d4 */
  goto L_1098f0d4;
L_1098f1a6:;
  /* 1098f1a6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f1aa je 0x1098f1b1 */
  if (C.zf) goto L_1098f1b1;
  /* 1098f1ac jmp 0x1098f250 */
  goto L_1098f250;
L_1098f1b1:;
  /* 1098f1b1 jmp 0x1098f24b */
  goto L_1098f24b;
L_1098f1b6:;
  /* 1098f1b6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1098f1b8 push 0x109ad35c */
  push32((uint32_t)(0x109ad35cu));
  /* 1098f1bd push 2 */
  push32((uint32_t)(0x2u));
  /* 1098f1bf push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1098f1c4 call 0x10985ea0 */
  push32(0x1098f1c9u); f_10985ea0();
  /* 1098f1c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f1cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1098f1cf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f1d3 je 0x1098f249 */
  if (C.zf) goto L_1098f249;
  /* 1098f1d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098f1d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098f1db mov dword ptr [eax*4 + 0x109b3020], ecx */
  w32((uint32_t)(EAX*4 + 0x109b3020), (ECX));
  /* 1098f1e2 mov edx, dword ptr [0x109b315c] */
  EDX = (r32((uint32_t)(0x109b315c)));
  /* 1098f1e8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f1eb mov dword ptr [0x109b315c], edx */
  w32((uint32_t)(0x109b315c), (EDX));
  /* 1098f1f1 jmp 0x1098f1fc */
  goto L_1098f1fc;
L_1098f1f3:;
  /* 1098f1f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098f1f6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f1f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1098f1fc:;
  /* 1098f1fc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098f1ff mov edx, dword ptr [ecx*4 + 0x109b3020] */
  EDX = (r32((uint32_t)(ECX*4 + 0x109b3020)));
  /* 1098f206 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f20c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f20f jae 0x1098f234 */
  if (!C.cf) goto L_1098f234;
  /* 1098f211 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098f214 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1098f218 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098f21b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1098f221 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098f224 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1098f228 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098f22b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1098f232 jmp 0x1098f1f3 */
  goto L_1098f1f3;
L_1098f234:;
  /* 1098f234 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098f237 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1098f23a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1098f23d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098f240 push edx */
  push32((uint32_t)(EDX));
  /* 1098f241 call 0x1098f590 */
  push32(0x1098f246u); f_1098f590();
  /* 1098f246 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1098f249:;
  /* 1098f249 jmp 0x1098f250 */
  goto L_1098f250;
L_1098f24b:;
  /* 1098f24b jmp 0x1098f0a1 */
  goto L_1098f0a1;
L_1098f250:;
  /* 1098f250 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1098f252 call 0x10989940 */
  push32(0x1098f257u); f_10989940();
  /* 1098f257 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f25a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098f25d pop esi */
  ESI = (pop32());
  /* 1098f25e mov esp, ebp */
  ESP = (EBP);
  /* 1098f260 pop ebp */
  EBP = (pop32());
  /* 1098f261 ret  */
  ESPCHK(0x1098f080u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1098f270 (183 bytes, 57 insns) */
void f_1098f270(void) {
  FTRACE(0x1098f270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098f270 push ebp */
  push32((uint32_t)(EBP));
  /* 1098f271 mov ebp, esp */
  EBP = (ESP);
  /* 1098f273 push ecx */
  push32((uint32_t)(ECX));
  /* 1098f274 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098f277 cmp eax, dword ptr [0x109b315c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109b315c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f27d jae 0x1098f30a */
  if (!C.cf) goto L_1098f30a;
  /* 1098f283 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098f286 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1098f289 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098f28c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1098f28f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098f292 mov eax, dword ptr [ecx*4 + 0x109b3020] */
  EAX = (r32((uint32_t)(ECX*4 + 0x109b3020)));
  /* 1098f299 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f29d jne 0x1098f30a */
  if (!C.zf) goto L_1098f30a;
  /* 1098f29f cmp dword ptr [0x109b1648], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109b1648))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f2a6 jne 0x1098f2ea */
  if (!C.zf) goto L_1098f2ea;
  /* 1098f2a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098f2ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1098f2ae cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f2b2 je 0x1098f2c2 */
  if (C.zf) goto L_1098f2c2;
  /* 1098f2b4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f2b8 je 0x1098f2d0 */
  if (C.zf) goto L_1098f2d0;
  /* 1098f2ba cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f2be je 0x1098f2de */
  if (C.zf) goto L_1098f2de;
  /* 1098f2c0 jmp 0x1098f2ea */
  goto L_1098f2ea;
L_1098f2c2:;
  /* 1098f2c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098f2c5 push edx */
  push32((uint32_t)(EDX));
  /* 1098f2c6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1098f2c8 call dword ptr [0x109b42ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42ec))), 0x1098f2ceu);
  /* 1098f2ce jmp 0x1098f2ea */
  goto L_1098f2ea;
L_1098f2d0:;
  /* 1098f2d0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098f2d3 push eax */
  push32((uint32_t)(EAX));
  /* 1098f2d4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1098f2d6 call dword ptr [0x109b42ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42ec))), 0x1098f2dcu);
  /* 1098f2dc jmp 0x1098f2ea */
  goto L_1098f2ea;
L_1098f2de:;
  /* 1098f2de mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098f2e1 push ecx */
  push32((uint32_t)(ECX));
  /* 1098f2e2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1098f2e4 call dword ptr [0x109b42ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42ec))), 0x1098f2eau);
L_1098f2ea:;
  /* 1098f2ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098f2ed sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1098f2f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098f2f3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1098f2f6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098f2f9 mov ecx, dword ptr [edx*4 + 0x109b3020] */
  ECX = (r32((uint32_t)(EDX*4 + 0x109b3020)));
  /* 1098f300 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098f303 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1098f306 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098f308 jmp 0x1098f323 */
  goto L_1098f323;
L_1098f30a:;
  /* 1098f30a call 0x1098dd70 */
  push32(0x1098f30fu); f_1098dd70();
  /* 1098f30f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1098f315 call 0x1098dd80 */
  push32(0x1098f31au); f_1098dd80();
  /* 1098f31a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1098f320 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1098f323:;
  /* 1098f323 mov esp, ebp */
  ESP = (EBP);
  /* 1098f325 pop ebp */
  EBP = (pop32());
  /* 1098f326 ret  */
  ESPCHK(0x1098f270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f330 @ 0x1098f330 (216 bytes, 63 insns) */
void f_1098f330(void) {
  FTRACE(0x1098f330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098f330 push ebp */
  push32((uint32_t)(EBP));
  /* 1098f331 mov ebp, esp */
  EBP = (ESP);
  /* 1098f333 push ecx */
  push32((uint32_t)(ECX));
  /* 1098f334 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098f337 cmp eax, dword ptr [0x109b315c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109b315c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f33d jae 0x1098f3eb */
  if (!C.cf) goto L_1098f3eb;
  /* 1098f343 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098f346 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1098f349 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098f34c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1098f34f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098f352 mov eax, dword ptr [ecx*4 + 0x109b3020] */
  EAX = (r32((uint32_t)(ECX*4 + 0x109b3020)));
  /* 1098f359 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1098f35e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1098f361 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098f363 je 0x1098f3eb */
  if (C.zf) goto L_1098f3eb;
  /* 1098f369 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098f36c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1098f36f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098f372 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1098f375 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098f378 mov ecx, dword ptr [edx*4 + 0x109b3020] */
  ECX = (r32((uint32_t)(EDX*4 + 0x109b3020)));
  /* 1098f37f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f383 je 0x1098f3eb */
  if (C.zf) goto L_1098f3eb;
  /* 1098f385 cmp dword ptr [0x109b1648], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109b1648))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f38c jne 0x1098f3ca */
  if (!C.zf) goto L_1098f3ca;
  /* 1098f38e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098f391 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1098f394 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f398 je 0x1098f3a8 */
  if (C.zf) goto L_1098f3a8;
  /* 1098f39a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f39e je 0x1098f3b4 */
  if (C.zf) goto L_1098f3b4;
  /* 1098f3a0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f3a4 je 0x1098f3c0 */
  if (C.zf) goto L_1098f3c0;
  /* 1098f3a6 jmp 0x1098f3ca */
  goto L_1098f3ca;
L_1098f3a8:;
  /* 1098f3a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098f3aa push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1098f3ac call dword ptr [0x109b42ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42ec))), 0x1098f3b2u);
  /* 1098f3b2 jmp 0x1098f3ca */
  goto L_1098f3ca;
L_1098f3b4:;
  /* 1098f3b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098f3b6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1098f3b8 call dword ptr [0x109b42ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42ec))), 0x1098f3beu);
  /* 1098f3be jmp 0x1098f3ca */
  goto L_1098f3ca;
L_1098f3c0:;
  /* 1098f3c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098f3c2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1098f3c4 call dword ptr [0x109b42ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42ec))), 0x1098f3cau);
L_1098f3ca:;
  /* 1098f3ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098f3cd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1098f3d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098f3d3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1098f3d6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098f3d9 mov edx, dword ptr [eax*4 + 0x109b3020] */
  EDX = (r32((uint32_t)(EAX*4 + 0x109b3020)));
  /* 1098f3e0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1098f3e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098f3e9 jmp 0x1098f404 */
  goto L_1098f404;
L_1098f3eb:;
  /* 1098f3eb call 0x1098dd70 */
  push32(0x1098f3f0u); f_1098dd70();
  /* 1098f3f0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1098f3f6 call 0x1098dd80 */
  push32(0x1098f3fbu); f_1098dd80();
  /* 1098f3fb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1098f401 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1098f404:;
  /* 1098f404 mov esp, ebp */
  ESP = (EBP);
  /* 1098f406 pop ebp */
  EBP = (pop32());
  /* 1098f407 ret  */
  ESPCHK(0x1098f330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f410 @ 0x1098f410 (102 bytes, 30 insns) */
void f_1098f410(void) {
  FTRACE(0x1098f410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098f410 push ebp */
  push32((uint32_t)(EBP));
  /* 1098f411 mov ebp, esp */
  EBP = (ESP);
  /* 1098f413 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098f416 cmp eax, dword ptr [0x109b315c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109b315c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f41c jae 0x1098f45b */
  if (!C.cf) goto L_1098f45b;
  /* 1098f41e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098f421 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1098f424 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098f427 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1098f42a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098f42d mov eax, dword ptr [ecx*4 + 0x109b3020] */
  EAX = (r32((uint32_t)(ECX*4 + 0x109b3020)));
  /* 1098f434 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1098f439 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1098f43c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098f43e je 0x1098f45b */
  if (C.zf) goto L_1098f45b;
  /* 1098f440 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098f443 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1098f446 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098f449 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1098f44c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098f44f mov ecx, dword ptr [edx*4 + 0x109b3020] */
  ECX = (r32((uint32_t)(EDX*4 + 0x109b3020)));
  /* 1098f456 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1098f459 jmp 0x1098f474 */
  goto L_1098f474;
L_1098f45b:;
  /* 1098f45b call 0x1098dd70 */
  push32(0x1098f460u); f_1098dd70();
  /* 1098f460 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1098f466 call 0x1098dd80 */
  push32(0x1098f46bu); f_1098dd80();
  /* 1098f46b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1098f471 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1098f474:;
  /* 1098f474 pop ebp */
  EBP = (pop32());
  /* 1098f475 ret  */
  ESPCHK(0x1098f410u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f480 @ 0x1098f480 (260 bytes, 83 insns) */
void f_1098f480(void) {
  FTRACE(0x1098f480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098f480 push ebp */
  push32((uint32_t)(EBP));
  /* 1098f481 mov ebp, esp */
  EBP = (ESP);
  /* 1098f483 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098f486 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1098f48a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098f48d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1098f490 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098f492 je 0x1098f49d */
  if (C.zf) goto L_1098f49d;
  /* 1098f494 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1098f497 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1098f49a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1098f49d:;
  /* 1098f49d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098f4a0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1098f4a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098f4a8 je 0x1098f4b2 */
  if (C.zf) goto L_1098f4b2;
  /* 1098f4aa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1098f4ad or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1098f4af mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1098f4b2:;
  /* 1098f4b2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098f4b5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1098f4bb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098f4bd je 0x1098f4c8 */
  if (C.zf) goto L_1098f4c8;
  /* 1098f4bf mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1098f4c2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1098f4c5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1098f4c8:;
  /* 1098f4c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098f4cb push eax */
  push32((uint32_t)(EAX));
  /* 1098f4cc call dword ptr [0x109b43a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43a8))), 0x1098f4d2u);
  /* 1098f4d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1098f4d5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f4d9 jne 0x1098f4f2 */
  if (!C.zf) goto L_1098f4f2;
  /* 1098f4db call dword ptr [0x109b439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b439c))), 0x1098f4e1u);
  /* 1098f4e1 push eax */
  push32((uint32_t)(EAX));
  /* 1098f4e2 call 0x1098dcd0 */
  push32(0x1098f4e7u); f_1098dcd0();
  /* 1098f4e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f4ea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1098f4ed jmp 0x1098f580 */
  goto L_1098f580;
L_1098f4f2:;
  /* 1098f4f2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f4f6 jne 0x1098f503 */
  if (!C.zf) goto L_1098f503;
  /* 1098f4f8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1098f4fb or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1098f4fe mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1098f501 jmp 0x1098f512 */
  goto L_1098f512;
L_1098f503:;
  /* 1098f503 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f507 jne 0x1098f512 */
  if (!C.zf) goto L_1098f512;
  /* 1098f509 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1098f50c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1098f50f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1098f512:;
  /* 1098f512 call 0x1098f080 */
  push32(0x1098f517u); f_1098f080();
  /* 1098f517 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1098f51a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f51e jne 0x1098f53b */
  if (!C.zf) goto L_1098f53b;
  /* 1098f520 call 0x1098dd70 */
  push32(0x1098f525u); f_1098dd70();
  /* 1098f525 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1098f52b call 0x1098dd80 */
  push32(0x1098f530u); f_1098dd80();
  /* 1098f530 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1098f536 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1098f539 jmp 0x1098f580 */
  goto L_1098f580;
L_1098f53b:;
  /* 1098f53b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098f53e push eax */
  push32((uint32_t)(EAX));
  /* 1098f53f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098f542 push ecx */
  push32((uint32_t)(ECX));
  /* 1098f543 call 0x1098f270 */
  push32(0x1098f548u); f_1098f270();
  /* 1098f548 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f54b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1098f54e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1098f551 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1098f554 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098f557 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1098f55a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098f55d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1098f560 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098f563 mov edx, dword ptr [eax*4 + 0x109b3020] */
  EDX = (r32((uint32_t)(EAX*4 + 0x109b3020)));
  /* 1098f56a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1098f56d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1098f571 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098f574 push ecx */
  push32((uint32_t)(ECX));
  /* 1098f575 call 0x1098f620 */
  push32(0x1098f57au); f_1098f620();
  /* 1098f57a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f57d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1098f580:;
  /* 1098f580 mov esp, ebp */
  ESP = (EBP);
  /* 1098f582 pop ebp */
  EBP = (pop32());
  /* 1098f583 ret  */
  ESPCHK(0x1098f480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f590 @ 0x1098f590 (134 bytes, 44 insns) */
void f_1098f590(void) {
  FTRACE(0x1098f590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098f590 push ebp */
  push32((uint32_t)(EBP));
  /* 1098f591 mov ebp, esp */
  EBP = (ESP);
  /* 1098f593 push ecx */
  push32((uint32_t)(ECX));
  /* 1098f594 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098f597 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1098f59a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098f59d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1098f5a0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098f5a3 mov edx, dword ptr [eax*4 + 0x109b3020] */
  EDX = (r32((uint32_t)(EAX*4 + 0x109b3020)));
  /* 1098f5aa add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f5ac mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1098f5af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098f5b2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f5b6 jne 0x1098f5f1 */
  if (!C.zf) goto L_1098f5f1;
  /* 1098f5b8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1098f5ba call 0x109898a0 */
  push32(0x1098f5bfu); f_109898a0();
  /* 1098f5bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f5c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098f5c5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f5c9 jne 0x1098f5e7 */
  if (!C.zf) goto L_1098f5e7;
  /* 1098f5cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098f5ce add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f5d1 push edx */
  push32((uint32_t)(EDX));
  /* 1098f5d2 call dword ptr [0x109b4334] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4334))), 0x1098f5d8u);
  /* 1098f5d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098f5db mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1098f5de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f5e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098f5e4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1098f5e7:;
  /* 1098f5e7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1098f5e9 call 0x10989940 */
  push32(0x1098f5eeu); f_10989940();
  /* 1098f5ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1098f5f1:;
  /* 1098f5f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098f5f4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1098f5f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098f5fa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1098f5fd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098f600 mov edx, dword ptr [eax*4 + 0x109b3020] */
  EDX = (r32((uint32_t)(EAX*4 + 0x109b3020)));
  /* 1098f607 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1098f60b push eax */
  push32((uint32_t)(EAX));
  /* 1098f60c call dword ptr [0x109b4330] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4330))), 0x1098f612u);
  /* 1098f612 mov esp, ebp */
  ESP = (EBP);
  /* 1098f614 pop ebp */
  EBP = (pop32());
  /* 1098f615 ret  */
  ESPCHK(0x1098f590u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1098f620 (38 bytes, 13 insns) */
void f_1098f620(void) {
  FTRACE(0x1098f620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098f620 push ebp */
  push32((uint32_t)(EBP));
  /* 1098f621 mov ebp, esp */
  EBP = (ESP);
  /* 1098f623 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098f626 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1098f629 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098f62c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1098f62f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098f632 mov edx, dword ptr [eax*4 + 0x109b3020] */
  EDX = (r32((uint32_t)(EAX*4 + 0x109b3020)));
  /* 1098f639 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1098f63d push eax */
  push32((uint32_t)(EAX));
  /* 1098f63e call dword ptr [0x109b432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b432c))), 0x1098f644u);
  /* 1098f644 pop ebp */
  EBP = (pop32());
  /* 1098f645 ret  */
  ESPCHK(0x1098f620u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f650 @ 0x1098f650 (218 bytes, 63 insns) */
void f_1098f650(void) {
  FTRACE(0x1098f650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098f650 push ebp */
  push32((uint32_t)(EBP));
  /* 1098f651 mov ebp, esp */
  EBP = (ESP);
  /* 1098f653 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098f656 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1098f65d push 2 */
  push32((uint32_t)(0x2u));
  /* 1098f65f call 0x109898a0 */
  push32(0x1098f664u); f_109898a0();
  /* 1098f664 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f667 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1098f66e jmp 0x1098f679 */
  goto L_1098f679;
L_1098f670:;
  /* 1098f670 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098f673 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f676 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1098f679:;
  /* 1098f679 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098f67c cmp ecx, dword ptr [0x109b2d20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109b2d20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f682 jge 0x1098f719 */
  if ((C.sf==C.of)) goto L_1098f719;
  /* 1098f688 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098f68b mov eax, dword ptr [0x109b19e0] */
  EAX = (r32((uint32_t)(0x109b19e0)));
  /* 1098f690 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f694 je 0x1098f714 */
  if (C.zf) goto L_1098f714;
  /* 1098f696 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098f699 mov edx, dword ptr [0x109b19e0] */
  EDX = (r32((uint32_t)(0x109b19e0)));
  /* 1098f69f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1098f6a2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1098f6a5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1098f6ab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098f6ad je 0x1098f6d1 */
  if (C.zf) goto L_1098f6d1;
  /* 1098f6af mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098f6b2 mov eax, dword ptr [0x109b19e0] */
  EAX = (r32((uint32_t)(0x109b19e0)));
  /* 1098f6b7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1098f6ba push ecx */
  push32((uint32_t)(ECX));
  /* 1098f6bb call 0x10990440 */
  push32(0x1098f6c0u); f_10990440();
  /* 1098f6c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f6c3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f6c6 je 0x1098f6d1 */
  if (C.zf) goto L_1098f6d1;
  /* 1098f6c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098f6cb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f6ce mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1098f6d1:;
  /* 1098f6d1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f6d5 jl 0x1098f714 */
  if ((C.sf!=C.of)) goto L_1098f714;
  /* 1098f6d7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098f6da mov ecx, dword ptr [0x109b19e0] */
  ECX = (r32((uint32_t)(0x109b19e0)));
  /* 1098f6e0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1098f6e3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f6e6 push edx */
  push32((uint32_t)(EDX));
  /* 1098f6e7 call dword ptr [0x109b43b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43b0))), 0x1098f6edu);
  /* 1098f6ed push 2 */
  push32((uint32_t)(0x2u));
  /* 1098f6ef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098f6f2 mov ecx, dword ptr [0x109b19e0] */
  ECX = (r32((uint32_t)(0x109b19e0)));
  /* 1098f6f8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1098f6fb push edx */
  push32((uint32_t)(EDX));
  /* 1098f6fc call 0x10986930 */
  push32(0x1098f701u); f_10986930();
  /* 1098f701 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f704 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098f707 mov ecx, dword ptr [0x109b19e0] */
  ECX = (r32((uint32_t)(0x109b19e0)));
  /* 1098f70d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1098f714:;
  /* 1098f714 jmp 0x1098f670 */
  goto L_1098f670;
L_1098f719:;
  /* 1098f719 push 2 */
  push32((uint32_t)(0x2u));
  /* 1098f71b call 0x10989940 */
  push32(0x1098f720u); f_10989940();
  /* 1098f720 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f723 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098f726 mov esp, ebp */
  ESP = (EBP);
  /* 1098f728 pop ebp */
  EBP = (pop32());
  /* 1098f729 ret  */
  ESPCHK(0x1098f650u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f730 @ 0x1098f730 (68 bytes, 26 insns) */
void f_1098f730(void) {
  FTRACE(0x1098f730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098f730 push ebp */
  push32((uint32_t)(EBP));
  /* 1098f731 mov ebp, esp */
  EBP = (ESP);
  /* 1098f733 push ecx */
  push32((uint32_t)(ECX));
  /* 1098f734 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f738 jne 0x1098f746 */
  if (!C.zf) goto L_1098f746;
  /* 1098f73a push 0 */
  push32((uint32_t)(0x0u));
  /* 1098f73c call 0x1098f8a0 */
  push32(0x1098f741u); f_1098f8a0();
  /* 1098f741 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f744 jmp 0x1098f770 */
  goto L_1098f770;
L_1098f746:;
  /* 1098f746 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098f749 push eax */
  push32((uint32_t)(EAX));
  /* 1098f74a call 0x1098ecb0 */
  push32(0x1098f74fu); f_1098ecb0();
  /* 1098f74f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f752 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098f755 push ecx */
  push32((uint32_t)(ECX));
  /* 1098f756 call 0x1098f780 */
  push32(0x1098f75bu); f_1098f780();
  /* 1098f75b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f75e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1098f761 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098f764 push edx */
  push32((uint32_t)(EDX));
  /* 1098f765 call 0x1098ed20 */
  push32(0x1098f76au); f_1098ed20();
  /* 1098f76a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f76d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1098f770:;
  /* 1098f770 mov esp, ebp */
  ESP = (EBP);
  /* 1098f772 pop ebp */
  EBP = (pop32());
  /* 1098f773 ret  */
  ESPCHK(0x1098f730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f780 @ 0x1098f780 (65 bytes, 26 insns) */
void f_1098f780(void) {
  FTRACE(0x1098f780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098f780 push ebp */
  push32((uint32_t)(EBP));
  /* 1098f781 mov ebp, esp */
  EBP = (ESP);
  /* 1098f783 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098f786 push eax */
  push32((uint32_t)(EAX));
  /* 1098f787 call 0x1098f7d0 */
  push32(0x1098f78cu); f_1098f7d0();
  /* 1098f78c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f78f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098f791 je 0x1098f798 */
  if (C.zf) goto L_1098f798;
  /* 1098f793 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1098f796 jmp 0x1098f7bf */
  goto L_1098f7bf;
L_1098f798:;
  /* 1098f798 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098f79b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1098f79e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1098f7a4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098f7a6 je 0x1098f7bd */
  if (C.zf) goto L_1098f7bd;
  /* 1098f7a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098f7ab mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1098f7ae push ecx */
  push32((uint32_t)(ECX));
  /* 1098f7af call 0x10990590 */
  push32(0x1098f7b4u); f_10990590();
  /* 1098f7b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f7b7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1098f7b9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098f7bb jmp 0x1098f7bf */
  goto L_1098f7bf;
L_1098f7bd:;
  /* 1098f7bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1098f7bf:;
  /* 1098f7bf pop ebp */
  EBP = (pop32());
  /* 1098f7c0 ret  */
  ESPCHK(0x1098f780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7d0 @ 0x1098f7d0 (183 bytes, 62 insns) */
void f_1098f7d0(void) {
  FTRACE(0x1098f7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098f7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1098f7d1 mov ebp, esp */
  EBP = (ESP);
  /* 1098f7d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098f7d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1098f7dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098f7e0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1098f7e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098f7e6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1098f7e9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1098f7ec cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f7ef jne 0x1098f86b */
  if (!C.zf) goto L_1098f86b;
  /* 1098f7f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098f7f4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1098f7f7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1098f7fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098f7ff je 0x1098f86b */
  if (C.zf) goto L_1098f86b;
  /* 1098f801 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098f804 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098f807 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1098f809 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098f80c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1098f80f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f813 jle 0x1098f86b */
  if ((C.zf||C.sf!=C.of)) goto L_1098f86b;
  /* 1098f815 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098f818 push edx */
  push32((uint32_t)(EDX));
  /* 1098f819 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098f81c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1098f81f push ecx */
  push32((uint32_t)(ECX));
  /* 1098f820 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098f823 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1098f826 push eax */
  push32((uint32_t)(EAX));
  /* 1098f827 call 0x1098e740 */
  push32(0x1098f82cu); f_1098e740();
  /* 1098f82c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f82f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f832 jne 0x1098f855 */
  if (!C.zf) goto L_1098f855;
  /* 1098f834 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098f837 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1098f83a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1098f840 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098f842 je 0x1098f853 */
  if (C.zf) goto L_1098f853;
  /* 1098f844 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098f847 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1098f84a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1098f84d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098f850 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1098f853:;
  /* 1098f853 jmp 0x1098f86b */
  goto L_1098f86b;
L_1098f855:;
  /* 1098f855 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098f858 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1098f85b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1098f85e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098f861 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1098f864 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1098f86b:;
  /* 1098f86b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098f86e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098f871 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1098f874 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1098f876 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098f879 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1098f880 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098f883 mov esp, ebp */
  ESP = (EBP);
  /* 1098f885 pop ebp */
  EBP = (pop32());
  /* 1098f886 ret  */
  ESPCHK(0x1098f7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f890 @ 0x1098f890 (15 bytes, 7 insns) */
void f_1098f890(void) {
  FTRACE(0x1098f890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098f890 push ebp */
  push32((uint32_t)(EBP));
  /* 1098f891 mov ebp, esp */
  EBP = (ESP);
  /* 1098f893 push 1 */
  push32((uint32_t)(0x1u));
  /* 1098f895 call 0x1098f8a0 */
  push32(0x1098f89au); f_1098f8a0();
  /* 1098f89a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f89d pop ebp */
  EBP = (pop32());
  /* 1098f89e ret  */
  ESPCHK(0x1098f890u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f8a0 @ 0x1098f8a0 (319 bytes, 94 insns) */
void f_1098f8a0(void) {
  FTRACE(0x1098f8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098f8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1098f8a1 mov ebp, esp */
  EBP = (ESP);
  /* 1098f8a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098f8a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1098f8ad mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1098f8b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1098f8b6 call 0x109898a0 */
  push32(0x1098f8bbu); f_109898a0();
  /* 1098f8bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f8be mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1098f8c5 jmp 0x1098f8d0 */
  goto L_1098f8d0;
L_1098f8c7:;
  /* 1098f8c7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098f8ca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f8cd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1098f8d0:;
  /* 1098f8d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098f8d3 cmp ecx, dword ptr [0x109b2d20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109b2d20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f8d9 jge 0x1098f9c3 */
  if ((C.sf==C.of)) goto L_1098f9c3;
  /* 1098f8df mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098f8e2 mov eax, dword ptr [0x109b19e0] */
  EAX = (r32((uint32_t)(0x109b19e0)));
  /* 1098f8e7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f8eb je 0x1098f9be */
  if (C.zf) goto L_1098f9be;
  /* 1098f8f1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098f8f4 mov edx, dword ptr [0x109b19e0] */
  EDX = (r32((uint32_t)(0x109b19e0)));
  /* 1098f8fa mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1098f8fd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1098f900 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1098f906 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098f908 je 0x1098f9be */
  if (C.zf) goto L_1098f9be;
  /* 1098f90e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098f911 mov eax, dword ptr [0x109b19e0] */
  EAX = (r32((uint32_t)(0x109b19e0)));
  /* 1098f916 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1098f919 push ecx */
  push32((uint32_t)(ECX));
  /* 1098f91a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098f91d push edx */
  push32((uint32_t)(EDX));
  /* 1098f91e call 0x1098ecf0 */
  push32(0x1098f923u); f_1098ecf0();
  /* 1098f923 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f926 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098f929 mov ecx, dword ptr [0x109b19e0] */
  ECX = (r32((uint32_t)(0x109b19e0)));
  /* 1098f92f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1098f932 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1098f935 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1098f93a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098f93c je 0x1098f9a5 */
  if (C.zf) goto L_1098f9a5;
  /* 1098f93e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f942 jne 0x1098f969 */
  if (!C.zf) goto L_1098f969;
  /* 1098f944 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098f947 mov edx, dword ptr [0x109b19e0] */
  EDX = (r32((uint32_t)(0x109b19e0)));
  /* 1098f94d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1098f950 push eax */
  push32((uint32_t)(EAX));
  /* 1098f951 call 0x1098f780 */
  push32(0x1098f956u); f_1098f780();
  /* 1098f956 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f959 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f95c je 0x1098f967 */
  if (C.zf) goto L_1098f967;
  /* 1098f95e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098f961 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f964 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1098f967:;
  /* 1098f967 jmp 0x1098f9a5 */
  goto L_1098f9a5;
L_1098f969:;
  /* 1098f969 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f96d jne 0x1098f9a5 */
  if (!C.zf) goto L_1098f9a5;
  /* 1098f96f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098f972 mov eax, dword ptr [0x109b19e0] */
  EAX = (r32((uint32_t)(0x109b19e0)));
  /* 1098f977 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1098f97a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1098f97d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1098f980 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098f982 je 0x1098f9a5 */
  if (C.zf) goto L_1098f9a5;
  /* 1098f984 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098f987 mov ecx, dword ptr [0x109b19e0] */
  ECX = (r32((uint32_t)(0x109b19e0)));
  /* 1098f98d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1098f990 push edx */
  push32((uint32_t)(EDX));
  /* 1098f991 call 0x1098f780 */
  push32(0x1098f996u); f_1098f780();
  /* 1098f996 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f999 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f99c jne 0x1098f9a5 */
  if (!C.zf) goto L_1098f9a5;
  /* 1098f99e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1098f9a5:;
  /* 1098f9a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098f9a8 mov ecx, dword ptr [0x109b19e0] */
  ECX = (r32((uint32_t)(0x109b19e0)));
  /* 1098f9ae mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1098f9b1 push edx */
  push32((uint32_t)(EDX));
  /* 1098f9b2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098f9b5 push eax */
  push32((uint32_t)(EAX));
  /* 1098f9b6 call 0x1098ed60 */
  push32(0x1098f9bbu); f_1098ed60();
  /* 1098f9bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1098f9be:;
  /* 1098f9be jmp 0x1098f8c7 */
  goto L_1098f8c7;
L_1098f9c3:;
  /* 1098f9c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1098f9c5 call 0x10989940 */
  push32(0x1098f9cau); f_10989940();
  /* 1098f9ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f9cd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f9d1 jne 0x1098f9d8 */
  if (!C.zf) goto L_1098f9d8;
  /* 1098f9d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098f9d6 jmp 0x1098f9db */
  goto L_1098f9db;
L_1098f9d8:;
  /* 1098f9d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1098f9db:;
  /* 1098f9db mov esp, ebp */
  ESP = (EBP);
  /* 1098f9dd pop ebp */
  EBP = (pop32());
  /* 1098f9de ret  */
  ESPCHK(0x1098f8a0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1098f9e0 (15 bytes, 7 insns) */
void f_1098f9e0(void) {
  FTRACE(0x1098f9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098f9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1098f9e1 mov ebp, esp */
  EBP = (ESP);
  /* 1098f9e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1098f9e5 call 0x10984e10 */
  push32(0x1098f9eau); f_10984e10();
  /* 1098f9ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098f9ed pop ebp */
  EBP = (pop32());
  /* 1098f9ee ret  */
  ESPCHK(0x1098f9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9f0 @ 0x1098f9f0 (1007 bytes, 269 insns) */
void f_1098f9f0(void) {
  FTRACE(0x1098f9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098f9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1098f9f1 mov ebp, esp */
  EBP = (ESP);
  /* 1098f9f3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098f9f9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098f9fd jl 0x1098fa05 */
  if ((C.sf!=C.of)) goto L_1098fa05;
  /* 1098f9ff cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098fa03 jle 0x1098fa0c */
  if ((C.zf||C.sf!=C.of)) goto L_1098fa0c;
L_1098fa05:;
  /* 1098fa05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098fa07 jmp 0x1098fddb */
  goto L_1098fddb;
L_1098fa0c:;
  /* 1098fa0c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1098fa0e call 0x109898a0 */
  push32(0x1098fa13u); f_109898a0();
  /* 1098fa13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098fa16 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1098fa1d mov eax, dword ptr [0x109b19cc] */
  EAX = (r32((uint32_t)(0x109b19cc)));
  /* 1098fa22 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098fa25 mov dword ptr [0x109b19cc], eax */
  w32((uint32_t)(0x109b19cc), (EAX));
L_1098fa2a:;
  /* 1098fa2a cmp dword ptr [0x109b19dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b19dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098fa31 je 0x1098fa3d */
  if (C.zf) goto L_1098fa3d;
  /* 1098fa33 push 1 */
  push32((uint32_t)(0x1u));
  /* 1098fa35 call dword ptr [0x109b42e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42e8))), 0x1098fa3bu);
  /* 1098fa3b jmp 0x1098fa2a */
  goto L_1098fa2a;
L_1098fa3d:;
  /* 1098fa3d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098fa41 je 0x1098fa81 */
  if (C.zf) goto L_1098fa81;
  /* 1098fa43 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098fa47 je 0x1098fa61 */
  if (C.zf) goto L_1098fa61;
  /* 1098fa49 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098fa4c push ecx */
  push32((uint32_t)(ECX));
  /* 1098fa4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098fa50 push edx */
  push32((uint32_t)(EDX));
  /* 1098fa51 call 0x1098fde0 */
  push32(0x1098fa56u); f_1098fde0();
  /* 1098fa56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098fa59 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1098fa5f jmp 0x1098fa73 */
  goto L_1098fa73;
L_1098fa61:;
  /* 1098fa61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098fa64 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098fa67 mov ecx, dword ptr [eax + 0x109b04dc] */
  ECX = (r32((uint32_t)(EAX + 0x109b04dc)));
  /* 1098fa6d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1098fa73:;
  /* 1098fa73 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1098fa79 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1098fa7c jmp 0x1098fdbb */
  goto L_1098fdbb;
L_1098fa81:;
  /* 1098fa81 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1098fa88 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1098fa8f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098fa93 je 0x1098fdb3 */
  if (C.zf) goto L_1098fdb3;
  /* 1098fa99 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098fa9c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1098fa9f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098faa2 jne 0x1098fcc4 */
  if (!C.zf) goto L_1098fcc4;
  /* 1098faa8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098faab movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1098faaf cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098fab2 jne 0x1098fcc4 */
  if (!C.zf) goto L_1098fcc4;
  /* 1098fab8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098fabb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1098fabf cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098fac2 jne 0x1098fcc4 */
  if (!C.zf) goto L_1098fcc4;
  /* 1098fac8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098facb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1098fad1:;
  /* 1098fad1 push 0x109ad3ac */
  push32((uint32_t)(0x109ad3acu));
  /* 1098fad6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1098fadc push ecx */
  push32((uint32_t)(ECX));
  /* 1098fadd call 0x10991c40 */
  push32(0x1098fae2u); f_10991c40();
  /* 1098fae2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098fae5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1098faeb cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098faf2 je 0x1098fb1d */
  if (C.zf) goto L_1098fb1d;
  /* 1098faf4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1098fafa sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098fb00 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1098fb06 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098fb0d je 0x1098fb1d */
  if (C.zf) goto L_1098fb1d;
  /* 1098fb0f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1098fb15 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1098fb18 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098fb1b jne 0x1098fb43 */
  if (!C.zf) goto L_1098fb43;
L_1098fb1d:;
  /* 1098fb1d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098fb21 je 0x1098fb3c */
  if (C.zf) goto L_1098fb3c;
  /* 1098fb23 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1098fb25 call 0x10989940 */
  push32(0x1098fb2au); f_10989940();
  /* 1098fb2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098fb2d mov edx, dword ptr [0x109b19cc] */
  EDX = (r32((uint32_t)(0x109b19cc)));
  /* 1098fb33 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098fb36 mov dword ptr [0x109b19cc], edx */
  w32((uint32_t)(0x109b19cc), (EDX));
L_1098fb3c:;
  /* 1098fb3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098fb3e jmp 0x1098fddb */
  goto L_1098fddb;
L_1098fb43:;
  /* 1098fb43 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1098fb4a jmp 0x1098fb55 */
  goto L_1098fb55;
L_1098fb4c:;
  /* 1098fb4c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098fb4f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098fb52 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1098fb55:;
  /* 1098fb55 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098fb59 jg 0x1098fba3 */
  if ((!C.zf&&C.sf==C.of)) goto L_1098fba3;
  /* 1098fb5b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1098fb61 push ecx */
  push32((uint32_t)(ECX));
  /* 1098fb62 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1098fb68 push edx */
  push32((uint32_t)(EDX));
  /* 1098fb69 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098fb6c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098fb6f mov ecx, dword ptr [eax + 0x109b04d8] */
  ECX = (r32((uint32_t)(EAX + 0x109b04d8)));
  /* 1098fb75 push ecx */
  push32((uint32_t)(ECX));
  /* 1098fb76 call 0x10991c00 */
  push32(0x1098fb7bu); f_10991c00();
  /* 1098fb7b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098fb7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098fb80 jne 0x1098fba1 */
  if (!C.zf) goto L_1098fba1;
  /* 1098fb82 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098fb85 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098fb88 mov eax, dword ptr [edx + 0x109b04d8] */
  EAX = (r32((uint32_t)(EDX + 0x109b04d8)));
  /* 1098fb8e push eax */
  push32((uint32_t)(EAX));
  /* 1098fb8f call 0x10988cd0 */
  push32(0x1098fb94u); f_10988cd0();
  /* 1098fb94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098fb97 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098fb9d jne 0x1098fba1 */
  if (!C.zf) goto L_1098fba1;
  /* 1098fb9f jmp 0x1098fba3 */
  goto L_1098fba3;
L_1098fba1:;
  /* 1098fba1 jmp 0x1098fb4c */
  goto L_1098fb4c;
L_1098fba3:;
  /* 1098fba3 push 0x109ad3a8 */
  push32((uint32_t)(0x109ad3a8u));
  /* 1098fba8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1098fbae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098fbb1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1098fbb7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1098fbbd push edx */
  push32((uint32_t)(EDX));
  /* 1098fbbe call 0x10991bc0 */
  push32(0x1098fbc3u); f_10991bc0();
  /* 1098fbc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098fbc6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1098fbcc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098fbd3 jne 0x1098fc09 */
  if (!C.zf) goto L_1098fc09;
  /* 1098fbd5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1098fbdb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1098fbde cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098fbe1 je 0x1098fc09 */
  if (C.zf) goto L_1098fc09;
  /* 1098fbe3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098fbe7 je 0x1098fc02 */
  if (C.zf) goto L_1098fc02;
  /* 1098fbe9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1098fbeb call 0x10989940 */
  push32(0x1098fbf0u); f_10989940();
  /* 1098fbf0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098fbf3 mov edx, dword ptr [0x109b19cc] */
  EDX = (r32((uint32_t)(0x109b19cc)));
  /* 1098fbf9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098fbfc mov dword ptr [0x109b19cc], edx */
  w32((uint32_t)(0x109b19cc), (EDX));
L_1098fc02:;
  /* 1098fc02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098fc04 jmp 0x1098fddb */
  goto L_1098fddb;
L_1098fc09:;
  /* 1098fc09 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098fc0d jg 0x1098fc5a */
  if ((!C.zf&&C.sf==C.of)) goto L_1098fc5a;
  /* 1098fc0f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1098fc15 push eax */
  push32((uint32_t)(EAX));
  /* 1098fc16 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1098fc1c push ecx */
  push32((uint32_t)(ECX));
  /* 1098fc1d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1098fc23 push edx */
  push32((uint32_t)(EDX));
  /* 1098fc24 call 0x109896c0 */
  push32(0x1098fc29u); f_109896c0();
  /* 1098fc29 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098fc2c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1098fc32 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1098fc3a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1098fc40 push ecx */
  push32((uint32_t)(ECX));
  /* 1098fc41 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098fc44 push edx */
  push32((uint32_t)(EDX));
  /* 1098fc45 call 0x1098fde0 */
  push32(0x1098fc4au); f_1098fde0();
  /* 1098fc4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098fc4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098fc4f je 0x1098fc5a */
  if (C.zf) goto L_1098fc5a;
  /* 1098fc51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098fc54 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098fc57 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1098fc5a:;
  /* 1098fc5a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1098fc60 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098fc66 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1098fc6c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1098fc72 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1098fc75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098fc77 je 0x1098fc88 */
  if (C.zf) goto L_1098fc88;
  /* 1098fc79 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1098fc7f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098fc82 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1098fc88:;
  /* 1098fc88 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1098fc8e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1098fc91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098fc93 jne 0x1098fad1 */
  if (!C.zf) goto L_1098fad1;
  /* 1098fc99 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098fc9d je 0x1098fcac */
  if (C.zf) goto L_1098fcac;
  /* 1098fc9f call 0x1098ff80 */
  push32(0x1098fca4u); f_1098ff80();
  /* 1098fca4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1098fcaa jmp 0x1098fcb6 */
  goto L_1098fcb6;
L_1098fcac:;
  /* 1098fcac mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1098fcb6:;
  /* 1098fcb6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1098fcbc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1098fcbf jmp 0x1098fdb1 */
  goto L_1098fdb1;
L_1098fcc4:;
  /* 1098fcc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098fcc7 push edx */
  push32((uint32_t)(EDX));
  /* 1098fcc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098fcca push 0 */
  push32((uint32_t)(0x0u));
  /* 1098fccc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1098fcd2 push eax */
  push32((uint32_t)(EAX));
  /* 1098fcd3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098fcd6 push ecx */
  push32((uint32_t)(ECX));
  /* 1098fcd7 call 0x10990080 */
  push32(0x1098fcdcu); f_10990080();
  /* 1098fcdc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098fcdf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1098fce2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098fce6 je 0x1098fdb1 */
  if (C.zf) goto L_1098fdb1;
  /* 1098fcec mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1098fcf3 jmp 0x1098fcfe */
  goto L_1098fcfe;
L_1098fcf5:;
  /* 1098fcf5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098fcf8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098fcfb mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1098fcfe:;
  /* 1098fcfe cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098fd02 jg 0x1098fd60 */
  if ((!C.zf&&C.sf==C.of)) goto L_1098fd60;
  /* 1098fd04 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098fd08 je 0x1098fd5e */
  if (C.zf) goto L_1098fd5e;
  /* 1098fd0a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098fd0d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098fd10 mov ecx, dword ptr [eax + 0x109b04dc] */
  ECX = (r32((uint32_t)(EAX + 0x109b04dc)));
  /* 1098fd16 push ecx */
  push32((uint32_t)(ECX));
  /* 1098fd17 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1098fd1d push edx */
  push32((uint32_t)(EDX));
  /* 1098fd1e call 0x10991b30 */
  push32(0x1098fd23u); f_10991b30();
  /* 1098fd23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098fd26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098fd28 je 0x1098fd55 */
  if (C.zf) goto L_1098fd55;
  /* 1098fd2a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1098fd30 push eax */
  push32((uint32_t)(EAX));
  /* 1098fd31 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098fd34 push ecx */
  push32((uint32_t)(ECX));
  /* 1098fd35 call 0x1098fde0 */
  push32(0x1098fd3au); f_1098fde0();
  /* 1098fd3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098fd3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098fd3f je 0x1098fd4c */
  if (C.zf) goto L_1098fd4c;
  /* 1098fd41 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098fd44 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098fd47 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1098fd4a jmp 0x1098fd53 */
  goto L_1098fd53;
L_1098fd4c:;
  /* 1098fd4c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1098fd53:;
  /* 1098fd53 jmp 0x1098fd5e */
  goto L_1098fd5e;
L_1098fd55:;
  /* 1098fd55 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098fd58 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098fd5b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1098fd5e:;
  /* 1098fd5e jmp 0x1098fcf5 */
  goto L_1098fcf5;
L_1098fd60:;
  /* 1098fd60 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098fd64 je 0x1098fd8b */
  if (C.zf) goto L_1098fd8b;
  /* 1098fd66 call 0x1098ff80 */
  push32(0x1098fd6bu); f_1098ff80();
  /* 1098fd6b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1098fd6e push 2 */
  push32((uint32_t)(0x2u));
  /* 1098fd70 mov ecx, dword ptr [0x109b04dc] */
  ECX = (r32((uint32_t)(0x109b04dc)));
  /* 1098fd76 push ecx */
  push32((uint32_t)(ECX));
  /* 1098fd77 call 0x10986930 */
  push32(0x1098fd7cu); f_10986930();
  /* 1098fd7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098fd7f mov dword ptr [0x109b04dc], 0 */
  w32((uint32_t)(0x109b04dc), (0x0u));
  /* 1098fd89 jmp 0x1098fdb1 */
  goto L_1098fdb1;
L_1098fd8b:;
  /* 1098fd8b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098fd8f je 0x1098fd9e */
  if (C.zf) goto L_1098fd9e;
  /* 1098fd91 call 0x1098ff80 */
  push32(0x1098fd96u); f_1098ff80();
  /* 1098fd96 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1098fd9c jmp 0x1098fda8 */
  goto L_1098fda8;
L_1098fd9e:;
  /* 1098fd9e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_1098fda8:;
  /* 1098fda8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1098fdae mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1098fdb1:;
  /* 1098fdb1 jmp 0x1098fdbb */
  goto L_1098fdbb;
L_1098fdb3:;
  /* 1098fdb3 call 0x1098ff80 */
  push32(0x1098fdb8u); f_1098ff80();
  /* 1098fdb8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1098fdbb:;
  /* 1098fdbb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098fdbf je 0x1098fdd8 */
  if (C.zf) goto L_1098fdd8;
  /* 1098fdc1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1098fdc3 call 0x10989940 */
  push32(0x1098fdc8u); f_10989940();
  /* 1098fdc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098fdcb mov eax, dword ptr [0x109b19cc] */
  EAX = (r32((uint32_t)(0x109b19cc)));
  /* 1098fdd0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098fdd3 mov dword ptr [0x109b19cc], eax */
  w32((uint32_t)(0x109b19cc), (EAX));
L_1098fdd8:;
  /* 1098fdd8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1098fddb:;
  /* 1098fddb mov esp, ebp */
  ESP = (EBP);
  /* 1098fddd pop ebp */
  EBP = (pop32());
  /* 1098fdde ret  */
  ESPCHK(0x1098f9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fde0 @ 0x1098fde0 (403 bytes, 117 insns) */
void f_1098fde0(void) {
  FTRACE(0x1098fde0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098fde0 push ebp */
  push32((uint32_t)(EBP));
  /* 1098fde1 mov ebp, esp */
  EBP = (ESP);
  /* 1098fde3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098fde9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098fdec push eax */
  push32((uint32_t)(EAX));
  /* 1098fded lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 1098fdf3 push ecx */
  push32((uint32_t)(ECX));
  /* 1098fdf4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1098fdfa push edx */
  push32((uint32_t)(EDX));
  /* 1098fdfb lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 1098fe01 push eax */
  push32((uint32_t)(EAX));
  /* 1098fe02 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098fe05 push ecx */
  push32((uint32_t)(ECX));
  /* 1098fe06 call 0x10990080 */
  push32(0x1098fe0bu); f_10990080();
  /* 1098fe0b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098fe0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098fe10 jne 0x1098fe19 */
  if (!C.zf) goto L_1098fe19;
  /* 1098fe12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098fe14 jmp 0x1098ff6f */
  goto L_1098ff6f;
L_1098fe19:;
  /* 1098fe19 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1098fe1e push 0x109ad3b0 */
  push32((uint32_t)(0x109ad3b0u));
  /* 1098fe23 push 2 */
  push32((uint32_t)(0x2u));
  /* 1098fe25 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1098fe2b push edx */
  push32((uint32_t)(EDX));
  /* 1098fe2c call 0x10988cd0 */
  push32(0x1098fe31u); f_10988cd0();
  /* 1098fe31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098fe34 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098fe37 push eax */
  push32((uint32_t)(EAX));
  /* 1098fe38 call 0x10985ea0 */
  push32(0x1098fe3du); f_10985ea0();
  /* 1098fe3d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098fe40 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1098fe43 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098fe47 jne 0x1098fe50 */
  if (!C.zf) goto L_1098fe50;
  /* 1098fe49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098fe4b jmp 0x1098ff6f */
  goto L_1098ff6f;
L_1098fe50:;
  /* 1098fe50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098fe53 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098fe56 mov ecx, dword ptr [eax + 0x109b04dc] */
  ECX = (r32((uint32_t)(EAX + 0x109b04dc)));
  /* 1098fe5c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1098fe5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098fe62 mov eax, dword ptr [edx*4 + 0x109b1848] */
  EAX = (r32((uint32_t)(EDX*4 + 0x109b1848)));
  /* 1098fe69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1098fe6c push 6 */
  push32((uint32_t)(0x6u));
  /* 1098fe6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098fe71 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098fe74 add ecx, 0x109b1898 */
  { uint32_t _a=(ECX),_b=(0x109b1898u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098fe7a push ecx */
  push32((uint32_t)(ECX));
  /* 1098fe7b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1098fe7e push edx */
  push32((uint32_t)(EDX));
  /* 1098fe7f call 0x1098c780 */
  push32(0x1098fe84u); f_1098c780();
  /* 1098fe84 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098fe87 mov eax, dword ptr [0x109b1860] */
  EAX = (r32((uint32_t)(0x109b1860)));
  /* 1098fe8c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1098fe8f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 1098fe95 push ecx */
  push32((uint32_t)(ECX));
  /* 1098fe96 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098fe99 push edx */
  push32((uint32_t)(EDX));
  /* 1098fe9a call 0x10988e50 */
  push32(0x1098fe9fu); f_10988e50();
  /* 1098fe9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098fea2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098fea5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098fea8 mov dword ptr [ecx + 0x109b04dc], eax */
  w32((uint32_t)(ECX + 0x109b04dc), (EAX));
  /* 1098feae mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1098feb4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1098feba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098febd mov dword ptr [eax*4 + 0x109b1848], edx */
  w32((uint32_t)(EAX*4 + 0x109b1848), (EDX));
  /* 1098fec4 push 6 */
  push32((uint32_t)(0x6u));
  /* 1098fec6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1098fecc push ecx */
  push32((uint32_t)(ECX));
  /* 1098fecd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098fed0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098fed3 add edx, 0x109b1898 */
  { uint32_t _a=(EDX),_b=(0x109b1898u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098fed9 push edx */
  push32((uint32_t)(EDX));
  /* 1098feda call 0x1098c780 */
  push32(0x1098fedfu); f_1098c780();
  /* 1098fedf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098fee2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098fee6 jne 0x1098fef3 */
  if (!C.zf) goto L_1098fef3;
  /* 1098fee8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1098feee mov dword ptr [0x109b1860], eax */
  w32((uint32_t)(0x109b1860), (EAX));
L_1098fef3:;
  /* 1098fef3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098fef7 jne 0x1098ff05 */
  if (!C.zf) goto L_1098ff05;
  /* 1098fef9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1098feff mov dword ptr [0x109b1864], ecx */
  w32((uint32_t)(0x109b1864), (ECX));
L_1098ff05:;
  /* 1098ff05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098ff08 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098ff0b call dword ptr [edx + 0x109b04e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x109b04e0))), 0x1098ff11u);
  /* 1098ff11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098ff13 je 0x1098ff4c */
  if (C.zf) goto L_1098ff4c;
  /* 1098ff15 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098ff18 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098ff1b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098ff1e mov dword ptr [eax + 0x109b04dc], ecx */
  w32((uint32_t)(EAX + 0x109b04dc), (ECX));
  /* 1098ff24 push 2 */
  push32((uint32_t)(0x2u));
  /* 1098ff26 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098ff29 push edx */
  push32((uint32_t)(EDX));
  /* 1098ff2a call 0x10986930 */
  push32(0x1098ff2fu); f_10986930();
  /* 1098ff2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ff32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098ff35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098ff38 mov dword ptr [eax*4 + 0x109b1848], ecx */
  w32((uint32_t)(EAX*4 + 0x109b1848), (ECX));
  /* 1098ff3f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098ff42 mov dword ptr [0x109b1860], edx */
  w32((uint32_t)(0x109b1860), (EDX));
  /* 1098ff48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098ff4a jmp 0x1098ff6f */
  goto L_1098ff6f;
L_1098ff4c:;
  /* 1098ff4c cmp dword ptr [ebp - 0xc], 0x109b03c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x109b03c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ff53 je 0x1098ff63 */
  if (C.zf) goto L_1098ff63;
  /* 1098ff55 push 2 */
  push32((uint32_t)(0x2u));
  /* 1098ff57 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098ff5a push eax */
  push32((uint32_t)(EAX));
  /* 1098ff5b call 0x10986930 */
  push32(0x1098ff60u); f_10986930();
  /* 1098ff60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1098ff63:;
  /* 1098ff63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098ff66 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098ff69 mov eax, dword ptr [ecx + 0x109b04dc] */
  EAX = (r32((uint32_t)(ECX + 0x109b04dc)));
L_1098ff6f:;
  /* 1098ff6f mov esp, ebp */
  ESP = (EBP);
  /* 1098ff71 pop ebp */
  EBP = (pop32());
  /* 1098ff72 ret  */
  ESPCHK(0x1098fde0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff80 @ 0x1098ff80 (256 bytes, 72 insns) */
void f_1098ff80(void) {
  FTRACE(0x1098ff80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098ff80 push ebp */
  push32((uint32_t)(EBP));
  /* 1098ff81 mov ebp, esp */
  EBP = (ESP);
  /* 1098ff83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098ff86 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1098ff8d cmp dword ptr [0x109b04dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b04dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098ff94 jne 0x1098ffb4 */
  if (!C.zf) goto L_1098ffb4;
  /* 1098ff96 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1098ff9b push 0x109ad3b0 */
  push32((uint32_t)(0x109ad3b0u));
  /* 1098ffa0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1098ffa2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 1098ffa7 call 0x10985ea0 */
  push32(0x1098ffacu); f_10985ea0();
  /* 1098ffac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ffaf mov dword ptr [0x109b04dc], eax */
  w32((uint32_t)(0x109b04dc), (EAX));
L_1098ffb4:;
  /* 1098ffb4 mov eax, dword ptr [0x109b04dc] */
  EAX = (r32((uint32_t)(0x109b04dc)));
  /* 1098ffb9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1098ffbc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1098ffc3 jmp 0x1098ffce */
  goto L_1098ffce;
L_1098ffc5:;
  /* 1098ffc5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098ffc8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098ffcb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1098ffce:;
  /* 1098ffce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098ffd1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098ffd4 mov eax, dword ptr [edx + 0x109b04dc] */
  EAX = (r32((uint32_t)(EDX + 0x109b04dc)));
  /* 1098ffda push eax */
  push32((uint32_t)(EAX));
  /* 1098ffdb push 0x109ad3bc */
  push32((uint32_t)(0x109ad3bcu));
  /* 1098ffe0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098ffe3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1098ffe6 mov edx, dword ptr [ecx + 0x109b04d8] */
  EDX = (r32((uint32_t)(ECX + 0x109b04d8)));
  /* 1098ffec push edx */
  push32((uint32_t)(EDX));
  /* 1098ffed push 3 */
  push32((uint32_t)(0x3u));
  /* 1098ffef mov eax, dword ptr [0x109b04dc] */
  EAX = (r32((uint32_t)(0x109b04dc)));
  /* 1098fff4 push eax */
  push32((uint32_t)(EAX));
  /* 1098fff5 call 0x10990220 */
  push32(0x1098fffau); f_10990220();
  /* 1098fffa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098fffd cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10990001 jge 0x10990049 */
  if ((C.sf==C.of)) goto L_10990049;
  /* 10990003 push 0x109ad3a8 */
  push32((uint32_t)(0x109ad3a8u));
  /* 10990008 mov ecx, dword ptr [0x109b04dc] */
  ECX = (r32((uint32_t)(0x109b04dc)));
  /* 1099000e push ecx */
  push32((uint32_t)(ECX));
  /* 1099000f call 0x10988e60 */
  push32(0x10990014u); f_10988e60();
  /* 10990014 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990017 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1099001a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099001d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10990020 mov eax, dword ptr [edx + 0x109b04dc] */
  EAX = (r32((uint32_t)(EDX + 0x109b04dc)));
  /* 10990026 push eax */
  push32((uint32_t)(EAX));
  /* 10990027 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1099002a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1099002d mov edx, dword ptr [ecx + 0x109b04dc] */
  EDX = (r32((uint32_t)(ECX + 0x109b04dc)));
  /* 10990033 push edx */
  push32((uint32_t)(EDX));
  /* 10990034 call 0x10991b30 */
  push32(0x10990039u); f_10991b30();
  /* 10990039 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099003c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1099003e je 0x10990047 */
  if (C.zf) goto L_10990047;
  /* 10990040 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10990047:;
  /* 10990047 jmp 0x10990077 */
  goto L_10990077;
L_10990049:;
  /* 10990049 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099004d jne 0x10990056 */
  if (!C.zf) goto L_10990056;
  /* 1099004f mov eax, dword ptr [0x109b04dc] */
  EAX = (r32((uint32_t)(0x109b04dc)));
  /* 10990054 jmp 0x1099007c */
  goto L_1099007c;
L_10990056:;
  /* 10990056 push 2 */
  push32((uint32_t)(0x2u));
  /* 10990058 mov eax, dword ptr [0x109b04dc] */
  EAX = (r32((uint32_t)(0x109b04dc)));
  /* 1099005d push eax */
  push32((uint32_t)(EAX));
  /* 1099005e call 0x10986930 */
  push32(0x10990063u); f_10986930();
  /* 10990063 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990066 mov dword ptr [0x109b04dc], 0 */
  w32((uint32_t)(0x109b04dc), (0x0u));
  /* 10990070 mov eax, dword ptr [0x109b04f4] */
  EAX = (r32((uint32_t)(0x109b04f4)));
  /* 10990075 jmp 0x1099007c */
  goto L_1099007c;
L_10990077:;
  /* 10990077 jmp 0x1098ffc5 */
  goto L_1098ffc5;
L_1099007c:;
  /* 1099007c mov esp, ebp */
  ESP = (EBP);
  /* 1099007e pop ebp */
  EBP = (pop32());
  /* 1099007f ret  */
  ESPCHK(0x1098ff80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010080 @ 0x10990080 (388 bytes, 115 insns) */
void f_10990080(void) {
  FTRACE(0x10990080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10990080 push ebp */
  push32((uint32_t)(EBP));
  /* 10990081 mov ebp, esp */
  EBP = (ESP);
  /* 10990083 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10990089 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099008d jne 0x10990096 */
  if (!C.zf) goto L_10990096;
  /* 1099008f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10990091 jmp 0x10990200 */
  goto L_10990200;
L_10990096:;
  /* 10990096 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990099 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1099009c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099009f jne 0x109900f0 */
  if (!C.zf) goto L_109900f0;
  /* 109900a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109900a4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 109900a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109900aa jne 0x109900f0 */
  if (!C.zf) goto L_109900f0;
  /* 109900ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109900af mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 109900b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109900b5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 109900b9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109900bd je 0x109900d9 */
  if (C.zf) goto L_109900d9;
  /* 109900bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109900c2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 109900c7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109900ca mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 109900d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109900d3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_109900d9:;
  /* 109900d9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109900dd je 0x109900e8 */
  if (C.zf) goto L_109900e8;
  /* 109900df mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109900e2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_109900e8:;
  /* 109900e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109900eb jmp 0x10990200 */
  goto L_10990200;
L_109900f0:;
  /* 109900f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109900f3 push ecx */
  push32((uint32_t)(ECX));
  /* 109900f4 push 0x109b0450 */
  push32((uint32_t)(0x109b0450u));
  /* 109900f9 call 0x10991b30 */
  push32(0x109900feu); f_10991b30();
  /* 109900fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990101 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10990103 je 0x109901b8 */
  if (C.zf) goto L_109901b8;
  /* 10990109 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1099010c push edx */
  push32((uint32_t)(EDX));
  /* 1099010d push 0x109b03cc */
  push32((uint32_t)(0x109b03ccu));
  /* 10990112 call 0x10991b30 */
  push32(0x10990117u); f_10991b30();
  /* 10990117 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099011a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1099011c je 0x109901b8 */
  if (C.zf) goto L_109901b8;
  /* 10990122 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990125 push eax */
  push32((uint32_t)(EAX));
  /* 10990126 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1099012c push ecx */
  push32((uint32_t)(ECX));
  /* 1099012d call 0x10990270 */
  push32(0x10990132u); f_10990270();
  /* 10990132 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990135 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10990137 je 0x10990140 */
  if (C.zf) goto L_10990140;
  /* 10990139 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1099013b jmp 0x10990200 */
  goto L_10990200;
L_10990140:;
  /* 10990140 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10990146 push edx */
  push32((uint32_t)(EDX));
  /* 10990147 push 0x109b1870 */
  push32((uint32_t)(0x109b1870u));
  /* 1099014c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 10990152 push eax */
  push32((uint32_t)(EAX));
  /* 10990153 call 0x10991c80 */
  push32(0x10990158u); f_10991c80();
  /* 10990158 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099015b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1099015d jne 0x10990166 */
  if (!C.zf) goto L_10990166;
  /* 1099015f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10990161 jmp 0x10990200 */
  goto L_10990200;
L_10990166:;
  /* 10990166 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10990168 mov cx, word ptr [0x109b1874] */
  CX = (r16((uint32_t)(0x109b1874)));
  /* 1099016f mov dword ptr [0x109b1878], ecx */
  w32((uint32_t)(0x109b1878), (ECX));
  /* 10990175 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1099017b push edx */
  push32((uint32_t)(EDX));
  /* 1099017c push 0x109b0450 */
  push32((uint32_t)(0x109b0450u));
  /* 10990181 call 0x109903d0 */
  push32(0x10990186u); f_109903d0();
  /* 10990186 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990189 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1099018c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1099018f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10990191 je 0x109901a6 */
  if (C.zf) goto L_109901a6;
  /* 10990193 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990196 push edx */
  push32((uint32_t)(EDX));
  /* 10990197 push 0x109b03cc */
  push32((uint32_t)(0x109b03ccu));
  /* 1099019c call 0x10988e50 */
  push32(0x109901a1u); f_10988e50();
  /* 109901a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109901a4 jmp 0x109901b8 */
  goto L_109901b8;
L_109901a6:;
  /* 109901a6 push 0x109b0450 */
  push32((uint32_t)(0x109b0450u));
  /* 109901ab push 0x109b03cc */
  push32((uint32_t)(0x109b03ccu));
  /* 109901b0 call 0x10988e50 */
  push32(0x109901b5u); f_10988e50();
  /* 109901b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109901b8:;
  /* 109901b8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109901bc je 0x109901d1 */
  if (C.zf) goto L_109901d1;
  /* 109901be push 6 */
  push32((uint32_t)(0x6u));
  /* 109901c0 push 0x109b1870 */
  push32((uint32_t)(0x109b1870u));
  /* 109901c5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109901c8 push eax */
  push32((uint32_t)(EAX));
  /* 109901c9 call 0x1098c780 */
  push32(0x109901ceu); f_1098c780();
  /* 109901ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109901d1:;
  /* 109901d1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109901d5 je 0x109901ea */
  if (C.zf) goto L_109901ea;
  /* 109901d7 push 4 */
  push32((uint32_t)(0x4u));
  /* 109901d9 push 0x109b1878 */
  push32((uint32_t)(0x109b1878u));
  /* 109901de mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109901e1 push ecx */
  push32((uint32_t)(ECX));
  /* 109901e2 call 0x1098c780 */
  push32(0x109901e7u); f_1098c780();
  /* 109901e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109901ea:;
  /* 109901ea push 0x109b0450 */
  push32((uint32_t)(0x109b0450u));
  /* 109901ef mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109901f2 push edx */
  push32((uint32_t)(EDX));
  /* 109901f3 call 0x10988e50 */
  push32(0x109901f8u); f_10988e50();
  /* 109901f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109901fb mov eax, 0x109b0450 */
  EAX = (0x109b0450u);
L_10990200:;
  /* 10990200 mov esp, ebp */
  ESP = (EBP);
  /* 10990202 pop ebp */
  EBP = (pop32());
  /* 10990203 ret  */
  ESPCHK(0x10990080u, _esp0);
  ESP += 4; return;
}

/* FUN_10010210 @ 0x10990210 (7 bytes, 5 insns) */
void f_10990210(void) {
  FTRACE(0x10990210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10990210 push ebp */
  push32((uint32_t)(EBP));
  /* 10990211 mov ebp, esp */
  EBP = (ESP);
  /* 10990213 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10990215 pop ebp */
  EBP = (pop32());
  /* 10990216 ret  */
  ESPCHK(0x10990210u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x10990220 (79 bytes, 28 insns) */
void f_10990220(void) {
  FTRACE(0x10990220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10990220 push ebp */
  push32((uint32_t)(EBP));
  /* 10990221 mov ebp, esp */
  EBP = (ESP);
  /* 10990223 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10990226 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10990229 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1099022c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10990233 jmp 0x1099023e */
  goto L_1099023e;
L_10990235:;
  /* 10990235 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10990238 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099023b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1099023e:;
  /* 1099023e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10990241 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10990244 jge 0x10990264 */
  if ((C.sf==C.of)) goto L_10990264;
  /* 10990246 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10990249 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099024c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1099024f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10990252 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10990255 push edx */
  push32((uint32_t)(EDX));
  /* 10990256 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990259 push eax */
  push32((uint32_t)(EAX));
  /* 1099025a call 0x10988e60 */
  push32(0x1099025fu); f_10988e60();
  /* 1099025f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990262 jmp 0x10990235 */
  goto L_10990235;
L_10990264:;
  /* 10990264 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1099026b mov esp, ebp */
  ESP = (EBP);
  /* 1099026d pop ebp */
  EBP = (pop32());
  /* 1099026e ret  */
  ESPCHK(0x10990220u, _esp0);
  ESP += 4; return;
}

/* FUN_10010270 @ 0x10990270 (349 bytes, 122 insns) */
void f_10990270(void) {
  FTRACE(0x10990270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10990270 push ebp */
  push32((uint32_t)(EBP));
  /* 10990271 mov ebp, esp */
  EBP = (ESP);
  /* 10990273 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10990276 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1099027b push 0 */
  push32((uint32_t)(0x0u));
  /* 1099027d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990280 push eax */
  push32((uint32_t)(EAX));
  /* 10990281 call 0x10989c10 */
  push32(0x10990286u); f_10989c10();
  /* 10990286 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990289 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1099028c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1099028f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10990291 jne 0x1099029a */
  if (!C.zf) goto L_1099029a;
  /* 10990293 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10990295 jmp 0x109903c9 */
  goto L_109903c9;
L_1099029a:;
  /* 1099029a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1099029d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109902a0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109902a3 jne 0x109902d0 */
  if (!C.zf) goto L_109902d0;
  /* 109902a5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109902a8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 109902ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109902ae je 0x109902d0 */
  if (C.zf) goto L_109902d0;
  /* 109902b0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109902b3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109902b6 push ecx */
  push32((uint32_t)(ECX));
  /* 109902b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109902ba add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109902c0 push edx */
  push32((uint32_t)(EDX));
  /* 109902c1 call 0x10988e50 */
  push32(0x109902c6u); f_10988e50();
  /* 109902c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109902c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109902cb jmp 0x109903c9 */
  goto L_109903c9;
L_109902d0:;
  /* 109902d0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109902d7 jmp 0x109902e2 */
  goto L_109902e2;
L_109902d9:;
  /* 109902d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109902dc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109902df mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109902e2:;
  /* 109902e2 push 0x109ad3c0 */
  push32((uint32_t)(0x109ad3c0u));
  /* 109902e7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109902ea push ecx */
  push32((uint32_t)(ECX));
  /* 109902eb call 0x10991bc0 */
  push32(0x109902f0u); f_10991bc0();
  /* 109902f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109902f3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109902f6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109902fa jne 0x10990304 */
  if (!C.zf) goto L_10990304;
  /* 109902fc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109902ff jmp 0x109903c9 */
  goto L_109903c9;
L_10990304:;
  /* 10990304 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10990307 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099030a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1099030c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1099030f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10990313 jne 0x1099033a */
  if (!C.zf) goto L_1099033a;
  /* 10990315 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10990319 jge 0x1099033a */
  if ((C.sf==C.of)) goto L_1099033a;
  /* 1099031b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1099031f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10990322 je 0x1099033a */
  if (C.zf) goto L_1099033a;
  /* 10990324 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10990327 push edx */
  push32((uint32_t)(EDX));
  /* 10990328 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1099032b push eax */
  push32((uint32_t)(EAX));
  /* 1099032c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1099032f push ecx */
  push32((uint32_t)(ECX));
  /* 10990330 call 0x109896c0 */
  push32(0x10990335u); f_109896c0();
  /* 10990335 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990338 jmp 0x109903a0 */
  goto L_109903a0;
L_1099033a:;
  /* 1099033a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099033e jne 0x10990368 */
  if (!C.zf) goto L_10990368;
  /* 10990340 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10990344 jge 0x10990368 */
  if ((C.sf==C.of)) goto L_10990368;
  /* 10990346 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1099034a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099034d je 0x10990368 */
  if (C.zf) goto L_10990368;
  /* 1099034f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10990352 push eax */
  push32((uint32_t)(EAX));
  /* 10990353 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10990356 push ecx */
  push32((uint32_t)(ECX));
  /* 10990357 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1099035a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099035d push edx */
  push32((uint32_t)(EDX));
  /* 1099035e call 0x109896c0 */
  push32(0x10990363u); f_109896c0();
  /* 10990363 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990366 jmp 0x109903a0 */
  goto L_109903a0;
L_10990368:;
  /* 10990368 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099036c jne 0x1099039b */
  if (!C.zf) goto L_1099039b;
  /* 1099036e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10990372 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10990374 je 0x1099037f */
  if (C.zf) goto L_1099037f;
  /* 10990376 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1099037a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099037d jne 0x1099039b */
  if (!C.zf) goto L_1099039b;
L_1099037f:;
  /* 1099037f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10990382 push edx */
  push32((uint32_t)(EDX));
  /* 10990383 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10990386 push eax */
  push32((uint32_t)(EAX));
  /* 10990387 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1099038a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10990390 push ecx */
  push32((uint32_t)(ECX));
  /* 10990391 call 0x109896c0 */
  push32(0x10990396u); f_109896c0();
  /* 10990396 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990399 jmp 0x109903a0 */
  goto L_109903a0;
L_1099039b:;
  /* 1099039b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1099039e jmp 0x109903c9 */
  goto L_109903c9;
L_109903a0:;
  /* 109903a0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 109903a4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109903a7 jne 0x109903ab */
  if (!C.zf) goto L_109903ab;
  /* 109903a9 jmp 0x109903c7 */
  goto L_109903c7;
L_109903ab:;
  /* 109903ab movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 109903af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109903b1 jne 0x109903b5 */
  if (!C.zf) goto L_109903b5;
  /* 109903b3 jmp 0x109903c7 */
  goto L_109903c7;
L_109903b5:;
  /* 109903b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109903b8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109903bb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 109903bf mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 109903c2 jmp 0x109902d9 */
  goto L_109902d9;
L_109903c7:;
  /* 109903c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109903c9:;
  /* 109903c9 mov esp, ebp */
  ESP = (EBP);
  /* 109903cb pop ebp */
  EBP = (pop32());
  /* 109903cc ret  */
  ESPCHK(0x10990270u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x109903d0 (101 bytes, 36 insns) */
void f_109903d0(void) {
  FTRACE(0x109903d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109903d0 push ebp */
  push32((uint32_t)(EBP));
  /* 109903d1 mov ebp, esp */
  EBP = (ESP);
  /* 109903d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109903d6 push eax */
  push32((uint32_t)(EAX));
  /* 109903d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109903da push ecx */
  push32((uint32_t)(ECX));
  /* 109903db call 0x10988e50 */
  push32(0x109903e0u); f_10988e50();
  /* 109903e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109903e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109903e6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 109903ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109903ec je 0x10990408 */
  if (C.zf) goto L_10990408;
  /* 109903ee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109903f1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109903f4 push ecx */
  push32((uint32_t)(ECX));
  /* 109903f5 push 0x109ad3c8 */
  push32((uint32_t)(0x109ad3c8u));
  /* 109903fa push 2 */
  push32((uint32_t)(0x2u));
  /* 109903fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109903ff push edx */
  push32((uint32_t)(EDX));
  /* 10990400 call 0x10990220 */
  push32(0x10990405u); f_10990220();
  /* 10990405 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10990408:;
  /* 10990408 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1099040b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 10990412 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10990414 je 0x10990433 */
  if (C.zf) goto L_10990433;
  /* 10990416 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10990419 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099041f push edx */
  push32((uint32_t)(EDX));
  /* 10990420 push 0x109ad3c4 */
  push32((uint32_t)(0x109ad3c4u));
  /* 10990425 push 2 */
  push32((uint32_t)(0x2u));
  /* 10990427 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1099042a push eax */
  push32((uint32_t)(EAX));
  /* 1099042b call 0x10990220 */
  push32(0x10990430u); f_10990220();
  /* 10990430 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10990433:;
  /* 10990433 pop ebp */
  EBP = (pop32());
  /* 10990434 ret  */
  ESPCHK(0x109903d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010440 @ 0x10990440 (130 bytes, 50 insns) */
void f_10990440(void) {
  FTRACE(0x10990440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10990440 push ebp */
  push32((uint32_t)(EBP));
  /* 10990441 mov ebp, esp */
  EBP = (ESP);
  /* 10990443 push ecx */
  push32((uint32_t)(ECX));
  /* 10990444 push ebx */
  push32((uint32_t)(EBX));
  /* 10990445 push esi */
  push32((uint32_t)(ESI));
  /* 10990446 push edi */
  push32((uint32_t)(EDI));
  /* 10990447 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1099044e:;
  /* 1099044e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10990452 jne 0x10990472 */
  if (!C.zf) goto L_10990472;
  /* 10990454 push 0x109ad3d8 */
  push32((uint32_t)(0x109ad3d8u));
  /* 10990459 push 0 */
  push32((uint32_t)(0x0u));
  /* 1099045b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1099045d push 0x109ad3cc */
  push32((uint32_t)(0x109ad3ccu));
  /* 10990462 push 2 */
  push32((uint32_t)(0x2u));
  /* 10990464 call 0x10984f60 */
  push32(0x10990469u); f_10984f60();
  /* 10990469 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099046c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099046f jne 0x10990472 */
  if (!C.zf) goto L_10990472;
  /* 10990471 int3  */
  x86_unimpl("int3 @ 0x10990471");
L_10990472:;
  /* 10990472 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10990474 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10990476 jne 0x1099044e */
  if (!C.zf) goto L_1099044e;
  /* 10990478 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1099047b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1099047e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10990481 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10990483 je 0x10990491 */
  if (C.zf) goto L_10990491;
  /* 10990485 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990488 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1099048f jmp 0x109904b8 */
  goto L_109904b8;
L_10990491:;
  /* 10990491 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990494 push ecx */
  push32((uint32_t)(ECX));
  /* 10990495 call 0x1098ecb0 */
  push32(0x1099049au); f_1098ecb0();
  /* 1099049a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099049d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109904a0 push edx */
  push32((uint32_t)(EDX));
  /* 109904a1 call 0x109904d0 */
  push32(0x109904a6u); f_109904d0();
  /* 109904a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109904a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109904ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109904af push eax */
  push32((uint32_t)(EAX));
  /* 109904b0 call 0x1098ed20 */
  push32(0x109904b5u); f_1098ed20();
  /* 109904b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109904b8:;
  /* 109904b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109904bb pop edi */
  EDI = (pop32());
  /* 109904bc pop esi */
  ESI = (pop32());
  /* 109904bd pop ebx */
  EBX = (pop32());
  /* 109904be mov esp, ebp */
  ESP = (EBP);
  /* 109904c0 pop ebp */
  EBP = (pop32());
  /* 109904c1 ret  */
  ESPCHK(0x10990440u, _esp0);
  ESP += 4; return;
}

/* FUN_100104d0 @ 0x109904d0 (190 bytes, 67 insns) */
void f_109904d0(void) {
  FTRACE(0x109904d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109904d0 push ebp */
  push32((uint32_t)(EBP));
  /* 109904d1 mov ebp, esp */
  EBP = (ESP);
  /* 109904d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109904d6 push ebx */
  push32((uint32_t)(EBX));
  /* 109904d7 push esi */
  push32((uint32_t)(ESI));
  /* 109904d8 push edi */
  push32((uint32_t)(EDI));
  /* 109904d9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 109904e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109904e3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_109904e6:;
  /* 109904e6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109904ea jne 0x1099050a */
  if (!C.zf) goto L_1099050a;
  /* 109904ec push 0x109ad27c */
  push32((uint32_t)(0x109ad27cu));
  /* 109904f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109904f3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 109904f5 push 0x109ad3cc */
  push32((uint32_t)(0x109ad3ccu));
  /* 109904fa push 2 */
  push32((uint32_t)(0x2u));
  /* 109904fc call 0x10984f60 */
  push32(0x10990501u); f_10984f60();
  /* 10990501 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990504 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10990507 jne 0x1099050a */
  if (!C.zf) goto L_1099050a;
  /* 10990509 int3  */
  x86_unimpl("int3 @ 0x10990509");
L_1099050a:;
  /* 1099050a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1099050c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1099050e jne 0x109904e6 */
  if (!C.zf) goto L_109904e6;
  /* 10990510 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10990513 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10990516 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1099051b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1099051d je 0x1099057a */
  if (C.zf) goto L_1099057a;
  /* 1099051f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10990522 push ecx */
  push32((uint32_t)(ECX));
  /* 10990523 call 0x1098f7d0 */
  push32(0x10990528u); f_1098f7d0();
  /* 10990528 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099052b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1099052e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10990531 push edx */
  push32((uint32_t)(EDX));
  /* 10990532 call 0x10992b50 */
  push32(0x10990537u); f_10992b50();
  /* 10990537 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099053a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1099053d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10990540 push ecx */
  push32((uint32_t)(ECX));
  /* 10990541 call 0x10992a20 */
  push32(0x10990546u); f_10992a20();
  /* 10990546 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990549 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1099054b jge 0x10990556 */
  if ((C.sf==C.of)) goto L_10990556;
  /* 1099054d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10990554 jmp 0x1099057a */
  goto L_1099057a;
L_10990556:;
  /* 10990556 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10990559 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099055d je 0x1099057a */
  if (C.zf) goto L_1099057a;
  /* 1099055f push 2 */
  push32((uint32_t)(0x2u));
  /* 10990561 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10990564 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10990567 push ecx */
  push32((uint32_t)(ECX));
  /* 10990568 call 0x10986930 */
  push32(0x1099056du); f_10986930();
  /* 1099056d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990570 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10990573 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1099057a:;
  /* 1099057a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1099057d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10990584 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10990587 pop edi */
  EDI = (pop32());
  /* 10990588 pop esi */
  ESI = (pop32());
  /* 10990589 pop ebx */
  EBX = (pop32());
  /* 1099058a mov esp, ebp */
  ESP = (EBP);
  /* 1099058c pop ebp */
  EBP = (pop32());
  /* 1099058d ret  */
  ESPCHK(0x109904d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010590 @ 0x10990590 (210 bytes, 63 insns) */
void f_10990590(void) {
  FTRACE(0x10990590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10990590 push ebp */
  push32((uint32_t)(EBP));
  /* 10990591 mov ebp, esp */
  EBP = (ESP);
  /* 10990593 push ecx */
  push32((uint32_t)(ECX));
  /* 10990594 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990597 cmp eax, dword ptr [0x109b315c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109b315c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099059d jae 0x109905c1 */
  if (!C.cf) goto L_109905c1;
  /* 1099059f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109905a2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 109905a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109905a8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 109905ab imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109905ae mov eax, dword ptr [ecx*4 + 0x109b3020] */
  EAX = (r32((uint32_t)(ECX*4 + 0x109b3020)));
  /* 109905b5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 109905ba and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 109905bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109905bf jne 0x109905d4 */
  if (!C.zf) goto L_109905d4;
L_109905c1:;
  /* 109905c1 call 0x1098dd70 */
  push32(0x109905c6u); f_1098dd70();
  /* 109905c6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 109905cc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109905cf jmp 0x1099065e */
  goto L_1099065e;
L_109905d4:;
  /* 109905d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109905d7 push edx */
  push32((uint32_t)(EDX));
  /* 109905d8 call 0x1098f590 */
  push32(0x109905ddu); f_1098f590();
  /* 109905dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109905e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109905e3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 109905e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109905e9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 109905ec imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109905ef mov edx, dword ptr [eax*4 + 0x109b3020] */
  EDX = (r32((uint32_t)(EAX*4 + 0x109b3020)));
  /* 109905f6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 109905fb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 109905fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10990600 je 0x1099063d */
  if (C.zf) goto L_1099063d;
  /* 10990602 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990605 push ecx */
  push32((uint32_t)(ECX));
  /* 10990606 call 0x1098f410 */
  push32(0x1099060bu); f_1098f410();
  /* 1099060b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099060e push eax */
  push32((uint32_t)(EAX));
  /* 1099060f call dword ptr [0x109b42e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42e4))), 0x10990615u);
  /* 10990615 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10990617 jne 0x10990624 */
  if (!C.zf) goto L_10990624;
  /* 10990619 call dword ptr [0x109b439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b439c))), 0x1099061fu);
  /* 1099061f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10990622 jmp 0x1099062b */
  goto L_1099062b;
L_10990624:;
  /* 10990624 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1099062b:;
  /* 1099062b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099062f jne 0x10990633 */
  if (!C.zf) goto L_10990633;
  /* 10990631 jmp 0x1099064f */
  goto L_1099064f;
L_10990633:;
  /* 10990633 call 0x1098dd80 */
  push32(0x10990638u); f_1098dd80();
  /* 10990638 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1099063b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1099063d:;
  /* 1099063d call 0x1098dd70 */
  push32(0x10990642u); f_1098dd70();
  /* 10990642 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10990648 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1099064f:;
  /* 1099064f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990652 push eax */
  push32((uint32_t)(EAX));
  /* 10990653 call 0x1098f620 */
  push32(0x10990658u); f_1098f620();
  /* 10990658 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099065b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1099065e:;
  /* 1099065e mov esp, ebp */
  ESP = (EBP);
  /* 10990660 pop ebp */
  EBP = (pop32());
  /* 10990661 ret  */
  ESPCHK(0x10990590u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x10990670 (219 bytes, 64 insns) */
void f_10990670(void) {
  FTRACE(0x10990670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10990670 push ebp */
  push32((uint32_t)(EBP));
  /* 10990671 mov ebp, esp */
  EBP = (ESP);
  /* 10990673 push ecx */
  push32((uint32_t)(ECX));
  /* 10990674 cmp dword ptr [0x109b185c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b185c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099067b je 0x10990711 */
  if (C.zf) goto L_10990711;
  /* 10990681 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10990683 push 0x109ad3e8 */
  push32((uint32_t)(0x109ad3e8u));
  /* 10990688 push 2 */
  push32((uint32_t)(0x2u));
  /* 1099068a push 0xac */
  push32((uint32_t)(0xacu));
  /* 1099068f push 1 */
  push32((uint32_t)(0x1u));
  /* 10990691 call 0x109862b0 */
  push32(0x10990696u); f_109862b0();
  /* 10990696 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990699 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1099069c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109906a0 jne 0x109906ac */
  if (!C.zf) goto L_109906ac;
  /* 109906a2 mov eax, 1 */
  EAX = (0x1u);
  /* 109906a7 jmp 0x10990747 */
  goto L_10990747;
L_109906ac:;
  /* 109906ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109906af push eax */
  push32((uint32_t)(EAX));
  /* 109906b0 call 0x10990750 */
  push32(0x109906b5u); f_10990750();
  /* 109906b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109906b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109906ba je 0x109906dd */
  if (C.zf) goto L_109906dd;
  /* 109906bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109906bf push ecx */
  push32((uint32_t)(ECX));
  /* 109906c0 call 0x10990ce0 */
  push32(0x109906c5u); f_10990ce0();
  /* 109906c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109906c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 109906ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109906cd push edx */
  push32((uint32_t)(EDX));
  /* 109906ce call 0x10986930 */
  push32(0x109906d3u); f_10986930();
  /* 109906d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109906d6 mov eax, 1 */
  EAX = (0x1u);
  /* 109906db jmp 0x10990747 */
  goto L_10990747;
L_109906dd:;
  /* 109906dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109906e0 mov dword ptr [0x109b0c98], eax */
  w32((uint32_t)(0x109b0c98), (EAX));
  /* 109906e5 mov ecx, dword ptr [0x109b187c] */
  ECX = (r32((uint32_t)(0x109b187c)));
  /* 109906eb push ecx */
  push32((uint32_t)(ECX));
  /* 109906ec call 0x10990ce0 */
  push32(0x109906f1u); f_10990ce0();
  /* 109906f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109906f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 109906f6 mov edx, dword ptr [0x109b187c] */
  EDX = (r32((uint32_t)(0x109b187c)));
  /* 109906fc push edx */
  push32((uint32_t)(EDX));
  /* 109906fd call 0x10986930 */
  push32(0x10990702u); f_10986930();
  /* 10990702 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990705 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10990708 mov dword ptr [0x109b187c], eax */
  w32((uint32_t)(0x109b187c), (EAX));
  /* 1099070d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1099070f jmp 0x10990747 */
  goto L_10990747;
L_10990711:;
  /* 10990711 mov dword ptr [0x109b0c98], 0x109b0ca0 */
  w32((uint32_t)(0x109b0c98), (0x109b0ca0u));
  /* 1099071b mov ecx, dword ptr [0x109b187c] */
  ECX = (r32((uint32_t)(0x109b187c)));
  /* 10990721 push ecx */
  push32((uint32_t)(ECX));
  /* 10990722 call 0x10990ce0 */
  push32(0x10990727u); f_10990ce0();
  /* 10990727 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099072a push 2 */
  push32((uint32_t)(0x2u));
  /* 1099072c mov edx, dword ptr [0x109b187c] */
  EDX = (r32((uint32_t)(0x109b187c)));
  /* 10990732 push edx */
  push32((uint32_t)(EDX));
  /* 10990733 call 0x10986930 */
  push32(0x10990738u); f_10986930();
  /* 10990738 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099073b mov dword ptr [0x109b187c], 0 */
  w32((uint32_t)(0x109b187c), (0x0u));
  /* 10990745 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10990747:;
  /* 10990747 mov esp, ebp */
  ESP = (EBP);
  /* 10990749 pop ebp */
  EBP = (pop32());
  /* 1099074a ret  */
  ESPCHK(0x10990670u, _esp0);
  ESP += 4; return;
}

/* FUN_10010750 @ 0x10990750 (1423 bytes, 533 insns) */
void f_10990750(void) {
  FTRACE(0x10990750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10990750 push ebp */
  push32((uint32_t)(EBP));
  /* 10990751 mov ebp, esp */
  EBP = (ESP);
  /* 10990753 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10990756 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1099075d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1099075f mov ax, word ptr [0x109b18b6] */
  AX = (r16((uint32_t)(0x109b18b6)));
  /* 10990765 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10990768 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1099076a mov cx, word ptr [0x109b18b8] */
  CX = (r16((uint32_t)(0x109b18b8)));
  /* 10990771 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10990774 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10990778 jne 0x10990782 */
  if (!C.zf) goto L_10990782;
  /* 1099077a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1099077d jmp 0x10990cdb */
  goto L_10990cdb;
L_10990782:;
  /* 10990782 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990785 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10990788 push edx */
  push32((uint32_t)(EDX));
  /* 10990789 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1099078b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1099078e push eax */
  push32((uint32_t)(EAX));
  /* 1099078f push 1 */
  push32((uint32_t)(0x1u));
  /* 10990791 call 0x10994060 */
  push32(0x10990796u); f_10994060();
  /* 10990796 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990799 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1099079c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1099079e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109907a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109907a4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109907a7 push edx */
  push32((uint32_t)(EDX));
  /* 109907a8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 109907aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109907ad push eax */
  push32((uint32_t)(EAX));
  /* 109907ae push 1 */
  push32((uint32_t)(0x1u));
  /* 109907b0 call 0x10994060 */
  push32(0x109907b5u); f_10994060();
  /* 109907b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109907b8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109907bb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109907bd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109907c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109907c3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109907c6 push edx */
  push32((uint32_t)(EDX));
  /* 109907c7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 109907c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109907cc push eax */
  push32((uint32_t)(EAX));
  /* 109907cd push 1 */
  push32((uint32_t)(0x1u));
  /* 109907cf call 0x10994060 */
  push32(0x109907d4u); f_10994060();
  /* 109907d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109907d7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109907da or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109907dc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109907df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109907e2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109907e5 push edx */
  push32((uint32_t)(EDX));
  /* 109907e6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 109907e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109907eb push eax */
  push32((uint32_t)(EAX));
  /* 109907ec push 1 */
  push32((uint32_t)(0x1u));
  /* 109907ee call 0x10994060 */
  push32(0x109907f3u); f_10994060();
  /* 109907f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109907f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109907f9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109907fb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109907fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990801 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10990804 push edx */
  push32((uint32_t)(EDX));
  /* 10990805 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10990807 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1099080a push eax */
  push32((uint32_t)(EAX));
  /* 1099080b push 1 */
  push32((uint32_t)(0x1u));
  /* 1099080d call 0x10994060 */
  push32(0x10990812u); f_10994060();
  /* 10990812 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990815 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10990818 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1099081a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1099081d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990820 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10990823 push edx */
  push32((uint32_t)(EDX));
  /* 10990824 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10990826 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10990829 push eax */
  push32((uint32_t)(EAX));
  /* 1099082a push 1 */
  push32((uint32_t)(0x1u));
  /* 1099082c call 0x10994060 */
  push32(0x10990831u); f_10994060();
  /* 10990831 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990834 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10990837 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10990839 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1099083c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1099083f push edx */
  push32((uint32_t)(EDX));
  /* 10990840 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 10990842 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10990845 push eax */
  push32((uint32_t)(EAX));
  /* 10990846 push 1 */
  push32((uint32_t)(0x1u));
  /* 10990848 call 0x10994060 */
  push32(0x1099084du); f_10994060();
  /* 1099084d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990850 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10990853 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10990855 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10990858 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1099085b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099085e push edx */
  push32((uint32_t)(EDX));
  /* 1099085f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10990861 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10990864 push eax */
  push32((uint32_t)(EAX));
  /* 10990865 push 1 */
  push32((uint32_t)(0x1u));
  /* 10990867 call 0x10994060 */
  push32(0x1099086cu); f_10994060();
  /* 1099086c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099086f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10990872 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10990874 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10990877 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1099087a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099087d push edx */
  push32((uint32_t)(EDX));
  /* 1099087e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10990880 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10990883 push eax */
  push32((uint32_t)(EAX));
  /* 10990884 push 1 */
  push32((uint32_t)(0x1u));
  /* 10990886 call 0x10994060 */
  push32(0x1099088bu); f_10994060();
  /* 1099088b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099088e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10990891 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10990893 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10990896 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990899 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099089c push edx */
  push32((uint32_t)(EDX));
  /* 1099089d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1099089f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109908a2 push eax */
  push32((uint32_t)(EAX));
  /* 109908a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 109908a5 call 0x10994060 */
  push32(0x109908aau); f_10994060();
  /* 109908aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109908ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109908b0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109908b2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109908b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109908b8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109908bb push edx */
  push32((uint32_t)(EDX));
  /* 109908bc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 109908be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109908c1 push eax */
  push32((uint32_t)(EAX));
  /* 109908c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 109908c4 call 0x10994060 */
  push32(0x109908c9u); f_10994060();
  /* 109908c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109908cc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109908cf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109908d1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109908d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109908d7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109908da push edx */
  push32((uint32_t)(EDX));
  /* 109908db push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 109908dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109908e0 push eax */
  push32((uint32_t)(EAX));
  /* 109908e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 109908e3 call 0x10994060 */
  push32(0x109908e8u); f_10994060();
  /* 109908e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109908eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109908ee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109908f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109908f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109908f6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109908f9 push edx */
  push32((uint32_t)(EDX));
  /* 109908fa push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 109908fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109908ff push eax */
  push32((uint32_t)(EAX));
  /* 10990900 push 1 */
  push32((uint32_t)(0x1u));
  /* 10990902 call 0x10994060 */
  push32(0x10990907u); f_10994060();
  /* 10990907 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099090a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1099090d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1099090f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10990912 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990915 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10990918 push edx */
  push32((uint32_t)(EDX));
  /* 10990919 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1099091b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1099091e push eax */
  push32((uint32_t)(EAX));
  /* 1099091f push 1 */
  push32((uint32_t)(0x1u));
  /* 10990921 call 0x10994060 */
  push32(0x10990926u); f_10994060();
  /* 10990926 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990929 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1099092c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1099092e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10990931 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990934 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10990937 push edx */
  push32((uint32_t)(EDX));
  /* 10990938 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1099093a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1099093d push eax */
  push32((uint32_t)(EAX));
  /* 1099093e push 1 */
  push32((uint32_t)(0x1u));
  /* 10990940 call 0x10994060 */
  push32(0x10990945u); f_10994060();
  /* 10990945 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990948 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1099094b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1099094d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10990950 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990953 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10990956 push edx */
  push32((uint32_t)(EDX));
  /* 10990957 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10990959 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1099095c push eax */
  push32((uint32_t)(EAX));
  /* 1099095d push 1 */
  push32((uint32_t)(0x1u));
  /* 1099095f call 0x10994060 */
  push32(0x10990964u); f_10994060();
  /* 10990964 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990967 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1099096a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1099096c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1099096f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990972 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10990975 push edx */
  push32((uint32_t)(EDX));
  /* 10990976 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10990978 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1099097b push eax */
  push32((uint32_t)(EAX));
  /* 1099097c push 1 */
  push32((uint32_t)(0x1u));
  /* 1099097e call 0x10994060 */
  push32(0x10990983u); f_10994060();
  /* 10990983 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990986 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10990989 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1099098b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1099098e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990991 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10990994 push edx */
  push32((uint32_t)(EDX));
  /* 10990995 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10990997 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1099099a push eax */
  push32((uint32_t)(EAX));
  /* 1099099b push 1 */
  push32((uint32_t)(0x1u));
  /* 1099099d call 0x10994060 */
  push32(0x109909a2u); f_10994060();
  /* 109909a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109909a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109909a8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109909aa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109909ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109909b0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109909b3 push edx */
  push32((uint32_t)(EDX));
  /* 109909b4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 109909b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109909b9 push eax */
  push32((uint32_t)(EAX));
  /* 109909ba push 1 */
  push32((uint32_t)(0x1u));
  /* 109909bc call 0x10994060 */
  push32(0x109909c1u); f_10994060();
  /* 109909c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109909c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109909c7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109909c9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109909cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109909cf add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109909d2 push edx */
  push32((uint32_t)(EDX));
  /* 109909d3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 109909d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109909d8 push eax */
  push32((uint32_t)(EAX));
  /* 109909d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 109909db call 0x10994060 */
  push32(0x109909e0u); f_10994060();
  /* 109909e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109909e3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109909e6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109909e8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109909eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109909ee add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109909f1 push edx */
  push32((uint32_t)(EDX));
  /* 109909f2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 109909f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109909f7 push eax */
  push32((uint32_t)(EAX));
  /* 109909f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 109909fa call 0x10994060 */
  push32(0x109909ffu); f_10994060();
  /* 109909ff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990a02 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10990a05 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10990a07 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10990a0a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990a0d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10990a10 push edx */
  push32((uint32_t)(EDX));
  /* 10990a11 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10990a13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10990a16 push eax */
  push32((uint32_t)(EAX));
  /* 10990a17 push 1 */
  push32((uint32_t)(0x1u));
  /* 10990a19 call 0x10994060 */
  push32(0x10990a1eu); f_10994060();
  /* 10990a1e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990a21 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10990a24 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10990a26 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10990a29 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990a2c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10990a2f push edx */
  push32((uint32_t)(EDX));
  /* 10990a30 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 10990a32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10990a35 push eax */
  push32((uint32_t)(EAX));
  /* 10990a36 push 1 */
  push32((uint32_t)(0x1u));
  /* 10990a38 call 0x10994060 */
  push32(0x10990a3du); f_10994060();
  /* 10990a3d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990a40 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10990a43 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10990a45 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10990a48 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990a4b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10990a4e push edx */
  push32((uint32_t)(EDX));
  /* 10990a4f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 10990a51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10990a54 push eax */
  push32((uint32_t)(EAX));
  /* 10990a55 push 1 */
  push32((uint32_t)(0x1u));
  /* 10990a57 call 0x10994060 */
  push32(0x10990a5cu); f_10994060();
  /* 10990a5c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990a5f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10990a62 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10990a64 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10990a67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990a6a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10990a6d push edx */
  push32((uint32_t)(EDX));
  /* 10990a6e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 10990a70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10990a73 push eax */
  push32((uint32_t)(EAX));
  /* 10990a74 push 1 */
  push32((uint32_t)(0x1u));
  /* 10990a76 call 0x10994060 */
  push32(0x10990a7bu); f_10994060();
  /* 10990a7b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990a7e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10990a81 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10990a83 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10990a86 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990a89 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10990a8c push edx */
  push32((uint32_t)(EDX));
  /* 10990a8d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 10990a8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10990a92 push eax */
  push32((uint32_t)(EAX));
  /* 10990a93 push 1 */
  push32((uint32_t)(0x1u));
  /* 10990a95 call 0x10994060 */
  push32(0x10990a9au); f_10994060();
  /* 10990a9a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990a9d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10990aa0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10990aa2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10990aa5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990aa8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10990aab push edx */
  push32((uint32_t)(EDX));
  /* 10990aac push 0x38 */
  push32((uint32_t)(0x38u));
  /* 10990aae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10990ab1 push eax */
  push32((uint32_t)(EAX));
  /* 10990ab2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10990ab4 call 0x10994060 */
  push32(0x10990ab9u); f_10994060();
  /* 10990ab9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990abc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10990abf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10990ac1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10990ac4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990ac7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10990aca push edx */
  push32((uint32_t)(EDX));
  /* 10990acb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 10990acd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10990ad0 push eax */
  push32((uint32_t)(EAX));
  /* 10990ad1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10990ad3 call 0x10994060 */
  push32(0x10990ad8u); f_10994060();
  /* 10990ad8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990adb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10990ade or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10990ae0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10990ae3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990ae6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10990ae9 push edx */
  push32((uint32_t)(EDX));
  /* 10990aea push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10990aec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10990aef push eax */
  push32((uint32_t)(EAX));
  /* 10990af0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10990af2 call 0x10994060 */
  push32(0x10990af7u); f_10994060();
  /* 10990af7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990afa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10990afd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10990aff mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10990b02 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990b05 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10990b08 push edx */
  push32((uint32_t)(EDX));
  /* 10990b09 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10990b0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10990b0e push eax */
  push32((uint32_t)(EAX));
  /* 10990b0f push 1 */
  push32((uint32_t)(0x1u));
  /* 10990b11 call 0x10994060 */
  push32(0x10990b16u); f_10994060();
  /* 10990b16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990b19 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10990b1c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10990b1e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10990b21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990b24 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10990b27 push edx */
  push32((uint32_t)(EDX));
  /* 10990b28 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10990b2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10990b2d push eax */
  push32((uint32_t)(EAX));
  /* 10990b2e push 1 */
  push32((uint32_t)(0x1u));
  /* 10990b30 call 0x10994060 */
  push32(0x10990b35u); f_10994060();
  /* 10990b35 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990b38 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10990b3b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10990b3d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10990b40 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990b43 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10990b46 push edx */
  push32((uint32_t)(EDX));
  /* 10990b47 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10990b49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10990b4c push eax */
  push32((uint32_t)(EAX));
  /* 10990b4d push 1 */
  push32((uint32_t)(0x1u));
  /* 10990b4f call 0x10994060 */
  push32(0x10990b54u); f_10994060();
  /* 10990b54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990b57 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10990b5a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10990b5c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10990b5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990b62 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10990b68 push edx */
  push32((uint32_t)(EDX));
  /* 10990b69 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 10990b6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10990b6e push eax */
  push32((uint32_t)(EAX));
  /* 10990b6f push 1 */
  push32((uint32_t)(0x1u));
  /* 10990b71 call 0x10994060 */
  push32(0x10990b76u); f_10994060();
  /* 10990b76 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990b79 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10990b7c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10990b7e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10990b81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990b84 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10990b8a push edx */
  push32((uint32_t)(EDX));
  /* 10990b8b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10990b8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10990b90 push eax */
  push32((uint32_t)(EAX));
  /* 10990b91 push 1 */
  push32((uint32_t)(0x1u));
  /* 10990b93 call 0x10994060 */
  push32(0x10990b98u); f_10994060();
  /* 10990b98 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990b9b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10990b9e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10990ba0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10990ba3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990ba6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10990bac push edx */
  push32((uint32_t)(EDX));
  /* 10990bad push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10990baf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10990bb2 push eax */
  push32((uint32_t)(EAX));
  /* 10990bb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10990bb5 call 0x10994060 */
  push32(0x10990bbau); f_10994060();
  /* 10990bba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990bbd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10990bc0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10990bc2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10990bc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990bc8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10990bce push edx */
  push32((uint32_t)(EDX));
  /* 10990bcf push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10990bd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10990bd4 push eax */
  push32((uint32_t)(EAX));
  /* 10990bd5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10990bd7 call 0x10994060 */
  push32(0x10990bdcu); f_10994060();
  /* 10990bdc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990bdf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10990be2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10990be4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10990be7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990bea add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10990bf0 push edx */
  push32((uint32_t)(EDX));
  /* 10990bf1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10990bf3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10990bf6 push eax */
  push32((uint32_t)(EAX));
  /* 10990bf7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10990bf9 call 0x10994060 */
  push32(0x10990bfeu); f_10994060();
  /* 10990bfe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990c01 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10990c04 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10990c06 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10990c09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990c0c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10990c12 push edx */
  push32((uint32_t)(EDX));
  /* 10990c13 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10990c15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10990c18 push eax */
  push32((uint32_t)(EAX));
  /* 10990c19 push 1 */
  push32((uint32_t)(0x1u));
  /* 10990c1b call 0x10994060 */
  push32(0x10990c20u); f_10994060();
  /* 10990c20 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990c23 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10990c26 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10990c28 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10990c2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990c2e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10990c34 push edx */
  push32((uint32_t)(EDX));
  /* 10990c35 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10990c37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10990c3a push eax */
  push32((uint32_t)(EAX));
  /* 10990c3b push 1 */
  push32((uint32_t)(0x1u));
  /* 10990c3d call 0x10994060 */
  push32(0x10990c42u); f_10994060();
  /* 10990c42 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990c45 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10990c48 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10990c4a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10990c4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990c50 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10990c56 push edx */
  push32((uint32_t)(EDX));
  /* 10990c57 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10990c59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10990c5c push eax */
  push32((uint32_t)(EAX));
  /* 10990c5d push 1 */
  push32((uint32_t)(0x1u));
  /* 10990c5f call 0x10994060 */
  push32(0x10990c64u); f_10994060();
  /* 10990c64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990c67 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10990c6a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10990c6c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10990c6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990c72 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10990c78 push edx */
  push32((uint32_t)(EDX));
  /* 10990c79 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10990c7b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10990c7e push eax */
  push32((uint32_t)(EAX));
  /* 10990c7f push 1 */
  push32((uint32_t)(0x1u));
  /* 10990c81 call 0x10994060 */
  push32(0x10990c86u); f_10994060();
  /* 10990c86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990c89 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10990c8c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10990c8e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10990c91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990c94 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10990c9a push edx */
  push32((uint32_t)(EDX));
  /* 10990c9b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10990c9d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10990ca0 push eax */
  push32((uint32_t)(EAX));
  /* 10990ca1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10990ca3 call 0x10994060 */
  push32(0x10990ca8u); f_10994060();
  /* 10990ca8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990cab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10990cae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10990cb0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10990cb3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990cb6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10990cbc push edx */
  push32((uint32_t)(EDX));
  /* 10990cbd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 10990cc2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10990cc5 push eax */
  push32((uint32_t)(EAX));
  /* 10990cc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10990cc8 call 0x10994060 */
  push32(0x10990ccdu); f_10994060();
  /* 10990ccd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990cd0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10990cd3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10990cd5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10990cd8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_10990cdb:;
  /* 10990cdb mov esp, ebp */
  ESP = (EBP);
  /* 10990cdd pop ebp */
  EBP = (pop32());
  /* 10990cde ret  */
  ESPCHK(0x10990750u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x10990ce0 (779 bytes, 265 insns) */
void f_10990ce0(void) {
  FTRACE(0x10990ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10990ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 10990ce1 mov ebp, esp */
  EBP = (ESP);
  /* 10990ce3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10990ce7 jne 0x10990cee */
  if (!C.zf) goto L_10990cee;
  /* 10990ce9 jmp 0x10990fe9 */
  goto L_10990fe9;
L_10990cee:;
  /* 10990cee push 2 */
  push32((uint32_t)(0x2u));
  /* 10990cf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990cf3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10990cf6 push ecx */
  push32((uint32_t)(ECX));
  /* 10990cf7 call 0x10986930 */
  push32(0x10990cfcu); f_10986930();
  /* 10990cfc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990cff push 2 */
  push32((uint32_t)(0x2u));
  /* 10990d01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990d04 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10990d07 push eax */
  push32((uint32_t)(EAX));
  /* 10990d08 call 0x10986930 */
  push32(0x10990d0du); f_10986930();
  /* 10990d0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990d10 push 2 */
  push32((uint32_t)(0x2u));
  /* 10990d12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990d15 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10990d18 push edx */
  push32((uint32_t)(EDX));
  /* 10990d19 call 0x10986930 */
  push32(0x10990d1eu); f_10986930();
  /* 10990d1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990d21 push 2 */
  push32((uint32_t)(0x2u));
  /* 10990d23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990d26 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10990d29 push ecx */
  push32((uint32_t)(ECX));
  /* 10990d2a call 0x10986930 */
  push32(0x10990d2fu); f_10986930();
  /* 10990d2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990d32 push 2 */
  push32((uint32_t)(0x2u));
  /* 10990d34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990d37 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10990d3a push eax */
  push32((uint32_t)(EAX));
  /* 10990d3b call 0x10986930 */
  push32(0x10990d40u); f_10986930();
  /* 10990d40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990d43 push 2 */
  push32((uint32_t)(0x2u));
  /* 10990d45 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990d48 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10990d4b push edx */
  push32((uint32_t)(EDX));
  /* 10990d4c call 0x10986930 */
  push32(0x10990d51u); f_10986930();
  /* 10990d51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990d54 push 2 */
  push32((uint32_t)(0x2u));
  /* 10990d56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990d59 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10990d5b push ecx */
  push32((uint32_t)(ECX));
  /* 10990d5c call 0x10986930 */
  push32(0x10990d61u); f_10986930();
  /* 10990d61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990d64 push 2 */
  push32((uint32_t)(0x2u));
  /* 10990d66 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990d69 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10990d6c push eax */
  push32((uint32_t)(EAX));
  /* 10990d6d call 0x10986930 */
  push32(0x10990d72u); f_10986930();
  /* 10990d72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990d75 push 2 */
  push32((uint32_t)(0x2u));
  /* 10990d77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990d7a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10990d7d push edx */
  push32((uint32_t)(EDX));
  /* 10990d7e call 0x10986930 */
  push32(0x10990d83u); f_10986930();
  /* 10990d83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990d86 push 2 */
  push32((uint32_t)(0x2u));
  /* 10990d88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990d8b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 10990d8e push ecx */
  push32((uint32_t)(ECX));
  /* 10990d8f call 0x10986930 */
  push32(0x10990d94u); f_10986930();
  /* 10990d94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990d97 push 2 */
  push32((uint32_t)(0x2u));
  /* 10990d99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990d9c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 10990d9f push eax */
  push32((uint32_t)(EAX));
  /* 10990da0 call 0x10986930 */
  push32(0x10990da5u); f_10986930();
  /* 10990da5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990da8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10990daa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990dad mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10990db0 push edx */
  push32((uint32_t)(EDX));
  /* 10990db1 call 0x10986930 */
  push32(0x10990db6u); f_10986930();
  /* 10990db6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990db9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10990dbb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990dbe mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 10990dc1 push ecx */
  push32((uint32_t)(ECX));
  /* 10990dc2 call 0x10986930 */
  push32(0x10990dc7u); f_10986930();
  /* 10990dc7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990dca push 2 */
  push32((uint32_t)(0x2u));
  /* 10990dcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990dcf mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10990dd2 push eax */
  push32((uint32_t)(EAX));
  /* 10990dd3 call 0x10986930 */
  push32(0x10990dd8u); f_10986930();
  /* 10990dd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990ddb push 2 */
  push32((uint32_t)(0x2u));
  /* 10990ddd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990de0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 10990de3 push edx */
  push32((uint32_t)(EDX));
  /* 10990de4 call 0x10986930 */
  push32(0x10990de9u); f_10986930();
  /* 10990de9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990dec push 2 */
  push32((uint32_t)(0x2u));
  /* 10990dee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990df1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 10990df4 push ecx */
  push32((uint32_t)(ECX));
  /* 10990df5 call 0x10986930 */
  push32(0x10990dfau); f_10986930();
  /* 10990dfa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990dfd push 2 */
  push32((uint32_t)(0x2u));
  /* 10990dff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990e02 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10990e05 push eax */
  push32((uint32_t)(EAX));
  /* 10990e06 call 0x10986930 */
  push32(0x10990e0bu); f_10986930();
  /* 10990e0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990e0e push 2 */
  push32((uint32_t)(0x2u));
  /* 10990e10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990e13 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 10990e16 push edx */
  push32((uint32_t)(EDX));
  /* 10990e17 call 0x10986930 */
  push32(0x10990e1cu); f_10986930();
  /* 10990e1c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990e1f push 2 */
  push32((uint32_t)(0x2u));
  /* 10990e21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990e24 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 10990e27 push ecx */
  push32((uint32_t)(ECX));
  /* 10990e28 call 0x10986930 */
  push32(0x10990e2du); f_10986930();
  /* 10990e2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990e30 push 2 */
  push32((uint32_t)(0x2u));
  /* 10990e32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990e35 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 10990e38 push eax */
  push32((uint32_t)(EAX));
  /* 10990e39 call 0x10986930 */
  push32(0x10990e3eu); f_10986930();
  /* 10990e3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990e41 push 2 */
  push32((uint32_t)(0x2u));
  /* 10990e43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990e46 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10990e49 push edx */
  push32((uint32_t)(EDX));
  /* 10990e4a call 0x10986930 */
  push32(0x10990e4fu); f_10986930();
  /* 10990e4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990e52 push 2 */
  push32((uint32_t)(0x2u));
  /* 10990e54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990e57 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10990e5a push ecx */
  push32((uint32_t)(ECX));
  /* 10990e5b call 0x10986930 */
  push32(0x10990e60u); f_10986930();
  /* 10990e60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990e63 push 2 */
  push32((uint32_t)(0x2u));
  /* 10990e65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990e68 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 10990e6b push eax */
  push32((uint32_t)(EAX));
  /* 10990e6c call 0x10986930 */
  push32(0x10990e71u); f_10986930();
  /* 10990e71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990e74 push 2 */
  push32((uint32_t)(0x2u));
  /* 10990e76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990e79 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 10990e7c push edx */
  push32((uint32_t)(EDX));
  /* 10990e7d call 0x10986930 */
  push32(0x10990e82u); f_10986930();
  /* 10990e82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990e85 push 2 */
  push32((uint32_t)(0x2u));
  /* 10990e87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990e8a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 10990e8d push ecx */
  push32((uint32_t)(ECX));
  /* 10990e8e call 0x10986930 */
  push32(0x10990e93u); f_10986930();
  /* 10990e93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990e96 push 2 */
  push32((uint32_t)(0x2u));
  /* 10990e98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990e9b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 10990e9e push eax */
  push32((uint32_t)(EAX));
  /* 10990e9f call 0x10986930 */
  push32(0x10990ea4u); f_10986930();
  /* 10990ea4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990ea7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10990ea9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990eac mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 10990eaf push edx */
  push32((uint32_t)(EDX));
  /* 10990eb0 call 0x10986930 */
  push32(0x10990eb5u); f_10986930();
  /* 10990eb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990eb8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10990eba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990ebd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 10990ec0 push ecx */
  push32((uint32_t)(ECX));
  /* 10990ec1 call 0x10986930 */
  push32(0x10990ec6u); f_10986930();
  /* 10990ec6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990ec9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10990ecb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990ece mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 10990ed1 push eax */
  push32((uint32_t)(EAX));
  /* 10990ed2 call 0x10986930 */
  push32(0x10990ed7u); f_10986930();
  /* 10990ed7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990eda push 2 */
  push32((uint32_t)(0x2u));
  /* 10990edc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990edf mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 10990ee2 push edx */
  push32((uint32_t)(EDX));
  /* 10990ee3 call 0x10986930 */
  push32(0x10990ee8u); f_10986930();
  /* 10990ee8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990eeb push 2 */
  push32((uint32_t)(0x2u));
  /* 10990eed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990ef0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 10990ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 10990ef4 call 0x10986930 */
  push32(0x10990ef9u); f_10986930();
  /* 10990ef9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990efc push 2 */
  push32((uint32_t)(0x2u));
  /* 10990efe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990f01 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 10990f04 push eax */
  push32((uint32_t)(EAX));
  /* 10990f05 call 0x10986930 */
  push32(0x10990f0au); f_10986930();
  /* 10990f0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990f0d push 2 */
  push32((uint32_t)(0x2u));
  /* 10990f0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990f12 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 10990f18 push edx */
  push32((uint32_t)(EDX));
  /* 10990f19 call 0x10986930 */
  push32(0x10990f1eu); f_10986930();
  /* 10990f1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990f21 push 2 */
  push32((uint32_t)(0x2u));
  /* 10990f23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990f26 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 10990f2c push ecx */
  push32((uint32_t)(ECX));
  /* 10990f2d call 0x10986930 */
  push32(0x10990f32u); f_10986930();
  /* 10990f32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990f35 push 2 */
  push32((uint32_t)(0x2u));
  /* 10990f37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990f3a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 10990f40 push eax */
  push32((uint32_t)(EAX));
  /* 10990f41 call 0x10986930 */
  push32(0x10990f46u); f_10986930();
  /* 10990f46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990f49 push 2 */
  push32((uint32_t)(0x2u));
  /* 10990f4b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990f4e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 10990f54 push edx */
  push32((uint32_t)(EDX));
  /* 10990f55 call 0x10986930 */
  push32(0x10990f5au); f_10986930();
  /* 10990f5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990f5d push 2 */
  push32((uint32_t)(0x2u));
  /* 10990f5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990f62 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 10990f68 push ecx */
  push32((uint32_t)(ECX));
  /* 10990f69 call 0x10986930 */
  push32(0x10990f6eu); f_10986930();
  /* 10990f6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990f71 push 2 */
  push32((uint32_t)(0x2u));
  /* 10990f73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990f76 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 10990f7c push eax */
  push32((uint32_t)(EAX));
  /* 10990f7d call 0x10986930 */
  push32(0x10990f82u); f_10986930();
  /* 10990f82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990f85 push 2 */
  push32((uint32_t)(0x2u));
  /* 10990f87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990f8a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 10990f90 push edx */
  push32((uint32_t)(EDX));
  /* 10990f91 call 0x10986930 */
  push32(0x10990f96u); f_10986930();
  /* 10990f96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990f99 push 2 */
  push32((uint32_t)(0x2u));
  /* 10990f9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990f9e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10990fa4 push ecx */
  push32((uint32_t)(ECX));
  /* 10990fa5 call 0x10986930 */
  push32(0x10990faau); f_10986930();
  /* 10990faa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990fad push 2 */
  push32((uint32_t)(0x2u));
  /* 10990faf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990fb2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10990fb8 push eax */
  push32((uint32_t)(EAX));
  /* 10990fb9 call 0x10986930 */
  push32(0x10990fbeu); f_10986930();
  /* 10990fbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990fc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10990fc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990fc6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10990fcc push edx */
  push32((uint32_t)(EDX));
  /* 10990fcd call 0x10986930 */
  push32(0x10990fd2u); f_10986930();
  /* 10990fd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10990fd5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10990fd7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10990fda mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 10990fe0 push ecx */
  push32((uint32_t)(ECX));
  /* 10990fe1 call 0x10986930 */
  push32(0x10990fe6u); f_10986930();
  /* 10990fe6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10990fe9:;
  /* 10990fe9 pop ebp */
  EBP = (pop32());
  /* 10990fea ret  */
  ESPCHK(0x10990ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ff0 @ 0x10990ff0 (678 bytes, 180 insns) */
void f_10990ff0(void) {
  FTRACE(0x10990ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10990ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 10990ff1 mov ebp, esp */
  EBP = (ESP);
  /* 10990ff3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10990ff6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10990ffd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10990fff mov ax, word ptr [0x109b18b2] */
  AX = (r16((uint32_t)(0x109b18b2)));
  /* 10991005 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10991008 cmp dword ptr [0x109b1858], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b1858))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099100f je 0x1099116a */
  if (C.zf) goto L_1099116a;
  /* 10991015 push 0x109b1880 */
  push32((uint32_t)(0x109b1880u));
  /* 1099101a push 0xe */
  push32((uint32_t)(0xeu));
  /* 1099101c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1099101f push ecx */
  push32((uint32_t)(ECX));
  /* 10991020 push 1 */
  push32((uint32_t)(0x1u));
  /* 10991022 call 0x10994060 */
  push32(0x10991027u); f_10994060();
  /* 10991027 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099102a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1099102d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1099102f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10991032 push 0x109b1884 */
  push32((uint32_t)(0x109b1884u));
  /* 10991037 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10991039 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1099103c push eax */
  push32((uint32_t)(EAX));
  /* 1099103d push 1 */
  push32((uint32_t)(0x1u));
  /* 1099103f call 0x10994060 */
  push32(0x10991044u); f_10994060();
  /* 10991044 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991047 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1099104a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1099104c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1099104f push 0x109b1888 */
  push32((uint32_t)(0x109b1888u));
  /* 10991054 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10991056 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10991059 push edx */
  push32((uint32_t)(EDX));
  /* 1099105a push 1 */
  push32((uint32_t)(0x1u));
  /* 1099105c call 0x10994060 */
  push32(0x10991061u); f_10994060();
  /* 10991061 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991064 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10991067 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10991069 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1099106c mov edx, dword ptr [0x109b1888] */
  EDX = (r32((uint32_t)(0x109b1888)));
  /* 10991072 push edx */
  push32((uint32_t)(EDX));
  /* 10991073 call 0x109912a0 */
  push32(0x10991078u); f_109912a0();
  /* 10991078 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099107b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099107f je 0x109910d9 */
  if (C.zf) goto L_109910d9;
  /* 10991081 push 2 */
  push32((uint32_t)(0x2u));
  /* 10991083 mov eax, dword ptr [0x109b1880] */
  EAX = (r32((uint32_t)(0x109b1880)));
  /* 10991088 push eax */
  push32((uint32_t)(EAX));
  /* 10991089 call 0x10986930 */
  push32(0x1099108eu); f_10986930();
  /* 1099108e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991091 push 2 */
  push32((uint32_t)(0x2u));
  /* 10991093 mov ecx, dword ptr [0x109b1884] */
  ECX = (r32((uint32_t)(0x109b1884)));
  /* 10991099 push ecx */
  push32((uint32_t)(ECX));
  /* 1099109a call 0x10986930 */
  push32(0x1099109fu); f_10986930();
  /* 1099109f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109910a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 109910a4 mov edx, dword ptr [0x109b1888] */
  EDX = (r32((uint32_t)(0x109b1888)));
  /* 109910aa push edx */
  push32((uint32_t)(EDX));
  /* 109910ab call 0x10986930 */
  push32(0x109910b0u); f_10986930();
  /* 109910b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109910b3 mov dword ptr [0x109b1880], 0 */
  w32((uint32_t)(0x109b1880), (0x0u));
  /* 109910bd mov dword ptr [0x109b1884], 0 */
  w32((uint32_t)(0x109b1884), (0x0u));
  /* 109910c7 mov dword ptr [0x109b1888], 0 */
  w32((uint32_t)(0x109b1888), (0x0u));
  /* 109910d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109910d4 jmp 0x10991292 */
  goto L_10991292;
L_109910d9:;
  /* 109910d9 mov eax, dword ptr [0x109b0d88] */
  EAX = (r32((uint32_t)(0x109b0d88)));
  /* 109910de cmp dword ptr [eax], 0x109b0d50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x109b0d50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109910e4 je 0x10991120 */
  if (C.zf) goto L_10991120;
  /* 109910e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 109910e8 mov ecx, dword ptr [0x109b0d88] */
  ECX = (r32((uint32_t)(0x109b0d88)));
  /* 109910ee mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109910f0 push edx */
  push32((uint32_t)(EDX));
  /* 109910f1 call 0x10986930 */
  push32(0x109910f6u); f_10986930();
  /* 109910f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109910f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 109910fb mov eax, dword ptr [0x109b0d88] */
  EAX = (r32((uint32_t)(0x109b0d88)));
  /* 10991100 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10991103 push ecx */
  push32((uint32_t)(ECX));
  /* 10991104 call 0x10986930 */
  push32(0x10991109u); f_10986930();
  /* 10991109 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099110c push 2 */
  push32((uint32_t)(0x2u));
  /* 1099110e mov edx, dword ptr [0x109b0d88] */
  EDX = (r32((uint32_t)(0x109b0d88)));
  /* 10991114 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10991117 push eax */
  push32((uint32_t)(EAX));
  /* 10991118 call 0x10986930 */
  push32(0x1099111du); f_10986930();
  /* 1099111d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10991120:;
  /* 10991120 mov ecx, dword ptr [0x109b0d88] */
  ECX = (r32((uint32_t)(0x109b0d88)));
  /* 10991126 mov edx, dword ptr [0x109b1880] */
  EDX = (r32((uint32_t)(0x109b1880)));
  /* 1099112c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1099112e mov eax, dword ptr [0x109b0d88] */
  EAX = (r32((uint32_t)(0x109b0d88)));
  /* 10991133 mov ecx, dword ptr [0x109b1884] */
  ECX = (r32((uint32_t)(0x109b1884)));
  /* 10991139 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1099113c mov edx, dword ptr [0x109b0d88] */
  EDX = (r32((uint32_t)(0x109b0d88)));
  /* 10991142 mov eax, dword ptr [0x109b1888] */
  EAX = (r32((uint32_t)(0x109b1888)));
  /* 10991147 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1099114a mov ecx, dword ptr [0x109b0d88] */
  ECX = (r32((uint32_t)(0x109b0d88)));
  /* 10991150 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10991152 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10991154 mov byte ptr [0x109afea8], al */
  w8((uint32_t)(0x109afea8), (AL));
  /* 10991159 mov dword ptr [0x109afeac], 1 */
  w32((uint32_t)(0x109afeac), (0x1u));
  /* 10991163 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10991165 jmp 0x10991292 */
  goto L_10991292;
L_1099116a:;
  /* 1099116a push 2 */
  push32((uint32_t)(0x2u));
  /* 1099116c mov ecx, dword ptr [0x109b1880] */
  ECX = (r32((uint32_t)(0x109b1880)));
  /* 10991172 push ecx */
  push32((uint32_t)(ECX));
  /* 10991173 call 0x10986930 */
  push32(0x10991178u); f_10986930();
  /* 10991178 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099117b push 2 */
  push32((uint32_t)(0x2u));
  /* 1099117d mov edx, dword ptr [0x109b1884] */
  EDX = (r32((uint32_t)(0x109b1884)));
  /* 10991183 push edx */
  push32((uint32_t)(EDX));
  /* 10991184 call 0x10986930 */
  push32(0x10991189u); f_10986930();
  /* 10991189 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099118c push 2 */
  push32((uint32_t)(0x2u));
  /* 1099118e mov eax, dword ptr [0x109b1888] */
  EAX = (r32((uint32_t)(0x109b1888)));
  /* 10991193 push eax */
  push32((uint32_t)(EAX));
  /* 10991194 call 0x10986930 */
  push32(0x10991199u); f_10986930();
  /* 10991199 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099119c mov dword ptr [0x109b1880], 0 */
  w32((uint32_t)(0x109b1880), (0x0u));
  /* 109911a6 mov dword ptr [0x109b1884], 0 */
  w32((uint32_t)(0x109b1884), (0x0u));
  /* 109911b0 mov dword ptr [0x109b1888], 0 */
  w32((uint32_t)(0x109b1888), (0x0u));
  /* 109911ba push 0x88 */
  push32((uint32_t)(0x88u));
  /* 109911bf push 0x109ad3f4 */
  push32((uint32_t)(0x109ad3f4u));
  /* 109911c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 109911c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 109911c8 call 0x10985ea0 */
  push32(0x109911cdu); f_10985ea0();
  /* 109911cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109911d0 mov ecx, dword ptr [0x109b0d88] */
  ECX = (r32((uint32_t)(0x109b0d88)));
  /* 109911d6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 109911d8 mov edx, dword ptr [0x109b0d88] */
  EDX = (r32((uint32_t)(0x109b0d88)));
  /* 109911de cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109911e1 jne 0x109911eb */
  if (!C.zf) goto L_109911eb;
  /* 109911e3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109911e6 jmp 0x10991292 */
  goto L_10991292;
L_109911eb:;
  /* 109911eb push 0x109ad3c4 */
  push32((uint32_t)(0x109ad3c4u));
  /* 109911f0 mov eax, dword ptr [0x109b0d88] */
  EAX = (r32((uint32_t)(0x109b0d88)));
  /* 109911f5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109911f7 push ecx */
  push32((uint32_t)(ECX));
  /* 109911f8 call 0x10988e50 */
  push32(0x109911fdu); f_10988e50();
  /* 109911fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991200 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 10991205 push 0x109ad3f4 */
  push32((uint32_t)(0x109ad3f4u));
  /* 1099120a push 2 */
  push32((uint32_t)(0x2u));
  /* 1099120c push 2 */
  push32((uint32_t)(0x2u));
  /* 1099120e call 0x10985ea0 */
  push32(0x10991213u); f_10985ea0();
  /* 10991213 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991216 mov edx, dword ptr [0x109b0d88] */
  EDX = (r32((uint32_t)(0x109b0d88)));
  /* 1099121c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1099121f mov eax, dword ptr [0x109b0d88] */
  EAX = (r32((uint32_t)(0x109b0d88)));
  /* 10991224 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10991228 jne 0x1099122f */
  if (!C.zf) goto L_1099122f;
  /* 1099122a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1099122d jmp 0x10991292 */
  goto L_10991292;
L_1099122f:;
  /* 1099122f mov ecx, dword ptr [0x109b0d88] */
  ECX = (r32((uint32_t)(0x109b0d88)));
  /* 10991235 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10991238 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1099123b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 10991240 push 0x109ad3f4 */
  push32((uint32_t)(0x109ad3f4u));
  /* 10991245 push 2 */
  push32((uint32_t)(0x2u));
  /* 10991247 push 2 */
  push32((uint32_t)(0x2u));
  /* 10991249 call 0x10985ea0 */
  push32(0x1099124eu); f_10985ea0();
  /* 1099124e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991251 mov ecx, dword ptr [0x109b0d88] */
  ECX = (r32((uint32_t)(0x109b0d88)));
  /* 10991257 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1099125a mov edx, dword ptr [0x109b0d88] */
  EDX = (r32((uint32_t)(0x109b0d88)));
  /* 10991260 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10991264 jne 0x1099126b */
  if (!C.zf) goto L_1099126b;
  /* 10991266 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10991269 jmp 0x10991292 */
  goto L_10991292;
L_1099126b:;
  /* 1099126b mov eax, dword ptr [0x109b0d88] */
  EAX = (r32((uint32_t)(0x109b0d88)));
  /* 10991270 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10991273 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10991276 mov edx, dword ptr [0x109b0d88] */
  EDX = (r32((uint32_t)(0x109b0d88)));
  /* 1099127c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1099127e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10991280 mov byte ptr [0x109afea8], cl */
  w8((uint32_t)(0x109afea8), (CL));
  /* 10991286 mov dword ptr [0x109afeac], 1 */
  w32((uint32_t)(0x109afeac), (0x1u));
  /* 10991290 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10991292:;
  /* 10991292 mov esp, ebp */
  ESP = (EBP);
  /* 10991294 pop ebp */
  EBP = (pop32());
  /* 10991295 ret  */
  ESPCHK(0x10990ff0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x109912a0 (125 bytes, 49 insns) */
void f_109912a0(void) {
  FTRACE(0x109912a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109912a0 push ebp */
  push32((uint32_t)(EBP));
  /* 109912a1 mov ebp, esp */
  EBP = (ESP);
  /* 109912a3 push ecx */
  push32((uint32_t)(ECX));
L_109912a4:;
  /* 109912a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109912a7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109912aa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109912ac je 0x10991319 */
  if (C.zf) goto L_10991319;
  /* 109912ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109912b1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 109912b4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109912b7 jl 0x109912dd */
  if ((C.sf!=C.of)) goto L_109912dd;
  /* 109912b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109912bc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 109912bf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109912c2 jg 0x109912dd */
  if ((!C.zf&&C.sf==C.of)) goto L_109912dd;
  /* 109912c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109912c7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109912ca sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109912cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109912d0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 109912d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109912d5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109912d8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 109912db jmp 0x10991317 */
  goto L_10991317;
L_109912dd:;
  /* 109912dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109912e0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 109912e3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109912e6 jne 0x1099130e */
  if (!C.zf) goto L_1099130e;
  /* 109912e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109912eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109912ee:;
  /* 109912ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109912f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109912f4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 109912f7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 109912f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109912fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109912ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10991302 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10991305 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10991308 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1099130a jne 0x109912ee */
  if (!C.zf) goto L_109912ee;
  /* 1099130c jmp 0x10991317 */
  goto L_10991317;
L_1099130e:;
  /* 1099130e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10991311 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10991314 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10991317:;
  /* 10991317 jmp 0x109912a4 */
  goto L_109912a4;
L_10991319:;
  /* 10991319 mov esp, ebp */
  ESP = (EBP);
  /* 1099131b pop ebp */
  EBP = (pop32());
  /* 1099131c ret  */
  ESPCHK(0x109912a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011320 @ 0x10991320 (304 bytes, 85 insns) */
void f_10991320(void) {
  FTRACE(0x10991320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10991320 push ebp */
  push32((uint32_t)(EBP));
  /* 10991321 mov ebp, esp */
  EBP = (ESP);
  /* 10991323 push ecx */
  push32((uint32_t)(ECX));
  /* 10991324 cmp dword ptr [0x109b1854], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b1854))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099132b je 0x109913ec */
  if (C.zf) goto L_109913ec;
  /* 10991331 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10991333 push 0x109ad400 */
  push32((uint32_t)(0x109ad400u));
  /* 10991338 push 2 */
  push32((uint32_t)(0x2u));
  /* 1099133a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1099133c push 1 */
  push32((uint32_t)(0x1u));
  /* 1099133e call 0x109862b0 */
  push32(0x10991343u); f_109862b0();
  /* 10991343 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991346 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10991349 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099134d jne 0x10991359 */
  if (!C.zf) goto L_10991359;
  /* 1099134f mov eax, 1 */
  EAX = (0x1u);
  /* 10991354 jmp 0x1099144c */
  goto L_1099144c;
L_10991359:;
  /* 10991359 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1099135c push eax */
  push32((uint32_t)(EAX));
  /* 1099135d call 0x10991450 */
  push32(0x10991362u); f_10991450();
  /* 10991362 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991365 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10991367 je 0x1099138d */
  if (C.zf) goto L_1099138d;
  /* 10991369 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1099136c push ecx */
  push32((uint32_t)(ECX));
  /* 1099136d call 0x109916e0 */
  push32(0x10991372u); f_109916e0();
  /* 10991372 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991375 push 2 */
  push32((uint32_t)(0x2u));
  /* 10991377 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1099137a push edx */
  push32((uint32_t)(EDX));
  /* 1099137b call 0x10986930 */
  push32(0x10991380u); f_10986930();
  /* 10991380 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991383 mov eax, 1 */
  EAX = (0x1u);
  /* 10991388 jmp 0x1099144c */
  goto L_1099144c;
L_1099138d:;
  /* 1099138d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10991390 mov ecx, dword ptr [0x109b0d88] */
  ECX = (r32((uint32_t)(0x109b0d88)));
  /* 10991396 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10991398 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1099139a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1099139d mov ecx, dword ptr [0x109b0d88] */
  ECX = (r32((uint32_t)(0x109b0d88)));
  /* 109913a3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 109913a6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 109913a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109913ac mov ecx, dword ptr [0x109b0d88] */
  ECX = (r32((uint32_t)(0x109b0d88)));
  /* 109913b2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 109913b5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 109913b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109913bb mov dword ptr [0x109b0d88], eax */
  w32((uint32_t)(0x109b0d88), (EAX));
  /* 109913c0 mov ecx, dword ptr [0x109b188c] */
  ECX = (r32((uint32_t)(0x109b188c)));
  /* 109913c6 push ecx */
  push32((uint32_t)(ECX));
  /* 109913c7 call 0x109916e0 */
  push32(0x109913ccu); f_109916e0();
  /* 109913cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109913cf push 2 */
  push32((uint32_t)(0x2u));
  /* 109913d1 mov edx, dword ptr [0x109b188c] */
  EDX = (r32((uint32_t)(0x109b188c)));
  /* 109913d7 push edx */
  push32((uint32_t)(EDX));
  /* 109913d8 call 0x10986930 */
  push32(0x109913ddu); f_10986930();
  /* 109913dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109913e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109913e3 mov dword ptr [0x109b188c], eax */
  w32((uint32_t)(0x109b188c), (EAX));
  /* 109913e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109913ea jmp 0x1099144c */
  goto L_1099144c;
L_109913ec:;
  /* 109913ec mov ecx, dword ptr [0x109b0d88] */
  ECX = (r32((uint32_t)(0x109b0d88)));
  /* 109913f2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109913f4 mov dword ptr [0x109b0d58], edx */
  w32((uint32_t)(0x109b0d58), (EDX));
  /* 109913fa mov eax, dword ptr [0x109b0d88] */
  EAX = (r32((uint32_t)(0x109b0d88)));
  /* 109913ff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10991402 mov dword ptr [0x109b0d5c], ecx */
  w32((uint32_t)(0x109b0d5c), (ECX));
  /* 10991408 mov edx, dword ptr [0x109b0d88] */
  EDX = (r32((uint32_t)(0x109b0d88)));
  /* 1099140e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10991411 mov dword ptr [0x109b0d60], eax */
  w32((uint32_t)(0x109b0d60), (EAX));
  /* 10991416 mov dword ptr [0x109b0d88], 0x109b0d58 */
  w32((uint32_t)(0x109b0d88), (0x109b0d58u));
  /* 10991420 mov ecx, dword ptr [0x109b188c] */
  ECX = (r32((uint32_t)(0x109b188c)));
  /* 10991426 push ecx */
  push32((uint32_t)(ECX));
  /* 10991427 call 0x109916e0 */
  push32(0x1099142cu); f_109916e0();
  /* 1099142c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099142f push 2 */
  push32((uint32_t)(0x2u));
  /* 10991431 mov edx, dword ptr [0x109b188c] */
  EDX = (r32((uint32_t)(0x109b188c)));
  /* 10991437 push edx */
  push32((uint32_t)(EDX));
  /* 10991438 call 0x10986930 */
  push32(0x1099143du); f_10986930();
  /* 1099143d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991440 mov dword ptr [0x109b188c], 0 */
  w32((uint32_t)(0x109b188c), (0x0u));
  /* 1099144a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1099144c:;
  /* 1099144c mov esp, ebp */
  ESP = (EBP);
  /* 1099144e pop ebp */
  EBP = (pop32());
  /* 1099144f ret  */
  ESPCHK(0x10991320u, _esp0);
  ESP += 4; return;
}

/* FUN_10011450 @ 0x10991450 (525 bytes, 200 insns) */
void f_10991450(void) {
  FTRACE(0x10991450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10991450 push ebp */
  push32((uint32_t)(EBP));
  /* 10991451 mov ebp, esp */
  EBP = (ESP);
  /* 10991453 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10991456 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1099145d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1099145f mov ax, word ptr [0x109b18ac] */
  AX = (r16((uint32_t)(0x109b18ac)));
  /* 10991465 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10991468 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099146c jne 0x10991476 */
  if (!C.zf) goto L_10991476;
  /* 1099146e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10991471 jmp 0x10991659 */
  goto L_10991659;
L_10991476:;
  /* 10991476 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10991479 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099147c push ecx */
  push32((uint32_t)(ECX));
  /* 1099147d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1099147f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10991482 push edx */
  push32((uint32_t)(EDX));
  /* 10991483 push 1 */
  push32((uint32_t)(0x1u));
  /* 10991485 call 0x10994060 */
  push32(0x1099148au); f_10994060();
  /* 1099148a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099148d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10991490 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10991492 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10991495 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10991498 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099149b push edx */
  push32((uint32_t)(EDX));
  /* 1099149c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1099149e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109914a1 push eax */
  push32((uint32_t)(EAX));
  /* 109914a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 109914a4 call 0x10994060 */
  push32(0x109914a9u); f_10994060();
  /* 109914a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109914ac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109914af or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109914b1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109914b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109914b7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109914ba push edx */
  push32((uint32_t)(EDX));
  /* 109914bb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 109914bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109914c0 push eax */
  push32((uint32_t)(EAX));
  /* 109914c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 109914c3 call 0x10994060 */
  push32(0x109914c8u); f_10994060();
  /* 109914c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109914cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109914ce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109914d0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109914d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109914d6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109914d9 push edx */
  push32((uint32_t)(EDX));
  /* 109914da push 0x17 */
  push32((uint32_t)(0x17u));
  /* 109914dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109914df push eax */
  push32((uint32_t)(EAX));
  /* 109914e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 109914e2 call 0x10994060 */
  push32(0x109914e7u); f_10994060();
  /* 109914e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109914ea mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109914ed or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109914ef mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109914f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109914f5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109914f8 push edx */
  push32((uint32_t)(EDX));
  /* 109914f9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 109914fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109914fe push eax */
  push32((uint32_t)(EAX));
  /* 109914ff push 1 */
  push32((uint32_t)(0x1u));
  /* 10991501 call 0x10994060 */
  push32(0x10991506u); f_10994060();
  /* 10991506 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991509 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1099150c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1099150e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10991511 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10991514 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10991517 push eax */
  push32((uint32_t)(EAX));
  /* 10991518 call 0x10991660 */
  push32(0x1099151du); f_10991660();
  /* 1099151d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991520 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10991523 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10991526 push ecx */
  push32((uint32_t)(ECX));
  /* 10991527 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10991529 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1099152c push edx */
  push32((uint32_t)(EDX));
  /* 1099152d push 1 */
  push32((uint32_t)(0x1u));
  /* 1099152f call 0x10994060 */
  push32(0x10991534u); f_10994060();
  /* 10991534 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991537 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1099153a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1099153c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1099153f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10991542 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10991545 push edx */
  push32((uint32_t)(EDX));
  /* 10991546 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 10991548 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1099154b push eax */
  push32((uint32_t)(EAX));
  /* 1099154c push 1 */
  push32((uint32_t)(0x1u));
  /* 1099154e call 0x10994060 */
  push32(0x10991553u); f_10994060();
  /* 10991553 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991556 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10991559 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1099155b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1099155e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10991561 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10991564 push edx */
  push32((uint32_t)(EDX));
  /* 10991565 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10991567 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1099156a push eax */
  push32((uint32_t)(EAX));
  /* 1099156b push 0 */
  push32((uint32_t)(0x0u));
  /* 1099156d call 0x10994060 */
  push32(0x10991572u); f_10994060();
  /* 10991572 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991575 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10991578 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1099157a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1099157d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10991580 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10991583 push edx */
  push32((uint32_t)(EDX));
  /* 10991584 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10991586 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10991589 push eax */
  push32((uint32_t)(EAX));
  /* 1099158a push 0 */
  push32((uint32_t)(0x0u));
  /* 1099158c call 0x10994060 */
  push32(0x10991591u); f_10994060();
  /* 10991591 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991594 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10991597 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10991599 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1099159c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1099159f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109915a2 push edx */
  push32((uint32_t)(EDX));
  /* 109915a3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 109915a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109915a8 push eax */
  push32((uint32_t)(EAX));
  /* 109915a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109915ab call 0x10994060 */
  push32(0x109915b0u); f_10994060();
  /* 109915b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109915b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109915b6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109915b8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109915bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109915be add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109915c1 push edx */
  push32((uint32_t)(EDX));
  /* 109915c2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 109915c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109915c7 push eax */
  push32((uint32_t)(EAX));
  /* 109915c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109915ca call 0x10994060 */
  push32(0x109915cfu); f_10994060();
  /* 109915cf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109915d2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109915d5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109915d7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109915da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109915dd add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109915e0 push edx */
  push32((uint32_t)(EDX));
  /* 109915e1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 109915e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109915e6 push eax */
  push32((uint32_t)(EAX));
  /* 109915e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109915e9 call 0x10994060 */
  push32(0x109915eeu); f_10994060();
  /* 109915ee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109915f1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109915f4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109915f6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109915f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109915fc add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109915ff push edx */
  push32((uint32_t)(EDX));
  /* 10991600 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 10991602 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10991605 push eax */
  push32((uint32_t)(EAX));
  /* 10991606 push 0 */
  push32((uint32_t)(0x0u));
  /* 10991608 call 0x10994060 */
  push32(0x1099160du); f_10994060();
  /* 1099160d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991610 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10991613 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10991615 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10991618 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1099161b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099161e push edx */
  push32((uint32_t)(EDX));
  /* 1099161f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 10991621 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10991624 push eax */
  push32((uint32_t)(EAX));
  /* 10991625 push 0 */
  push32((uint32_t)(0x0u));
  /* 10991627 call 0x10994060 */
  push32(0x1099162cu); f_10994060();
  /* 1099162c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099162f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10991632 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10991634 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10991637 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1099163a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099163d push edx */
  push32((uint32_t)(EDX));
  /* 1099163e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 10991640 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10991643 push eax */
  push32((uint32_t)(EAX));
  /* 10991644 push 0 */
  push32((uint32_t)(0x0u));
  /* 10991646 call 0x10994060 */
  push32(0x1099164bu); f_10994060();
  /* 1099164b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099164e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10991651 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10991653 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10991656 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10991659:;
  /* 10991659 mov esp, ebp */
  ESP = (EBP);
  /* 1099165b pop ebp */
  EBP = (pop32());
  /* 1099165c ret  */
  ESPCHK(0x10991450u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10991660 (125 bytes, 49 insns) */
void f_10991660(void) {
  FTRACE(0x10991660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10991660 push ebp */
  push32((uint32_t)(EBP));
  /* 10991661 mov ebp, esp */
  EBP = (ESP);
  /* 10991663 push ecx */
  push32((uint32_t)(ECX));
L_10991664:;
  /* 10991664 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10991667 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1099166a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1099166c je 0x109916d9 */
  if (C.zf) goto L_109916d9;
  /* 1099166e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10991671 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10991674 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10991677 jl 0x1099169d */
  if ((C.sf!=C.of)) goto L_1099169d;
  /* 10991679 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1099167c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1099167f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10991682 jg 0x1099169d */
  if ((!C.zf&&C.sf==C.of)) goto L_1099169d;
  /* 10991684 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10991687 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1099168a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1099168d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10991690 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10991692 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10991695 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10991698 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1099169b jmp 0x109916d7 */
  goto L_109916d7;
L_1099169d:;
  /* 1099169d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109916a0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 109916a3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109916a6 jne 0x109916ce */
  if (!C.zf) goto L_109916ce;
  /* 109916a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109916ab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109916ae:;
  /* 109916ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109916b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109916b4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 109916b7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 109916b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109916bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109916bf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109916c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109916c5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 109916c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109916ca jne 0x109916ae */
  if (!C.zf) goto L_109916ae;
  /* 109916cc jmp 0x109916d7 */
  goto L_109916d7;
L_109916ce:;
  /* 109916ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109916d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109916d4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_109916d7:;
  /* 109916d7 jmp 0x10991664 */
  goto L_10991664;
L_109916d9:;
  /* 109916d9 mov esp, ebp */
  ESP = (EBP);
  /* 109916db pop ebp */
  EBP = (pop32());
  /* 109916dc ret  */
  ESPCHK(0x10991660u, _esp0);
  ESP += 4; return;
}

/* FUN_100116e0 @ 0x109916e0 (147 bytes, 52 insns) */
void f_109916e0(void) {
  FTRACE(0x109916e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109916e0 push ebp */
  push32((uint32_t)(EBP));
  /* 109916e1 mov ebp, esp */
  EBP = (ESP);
  /* 109916e3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109916e7 jne 0x109916ee */
  if (!C.zf) goto L_109916ee;
  /* 109916e9 jmp 0x10991771 */
  goto L_10991771;
L_109916ee:;
  /* 109916ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109916f1 cmp dword ptr [eax + 0xc], 0x109b18e8 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x109b18e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109916f8 je 0x10991771 */
  if (C.zf) goto L_10991771;
  /* 109916fa push 2 */
  push32((uint32_t)(0x2u));
  /* 109916fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109916ff mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10991702 push edx */
  push32((uint32_t)(EDX));
  /* 10991703 call 0x10986930 */
  push32(0x10991708u); f_10986930();
  /* 10991708 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099170b push 2 */
  push32((uint32_t)(0x2u));
  /* 1099170d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10991710 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10991713 push ecx */
  push32((uint32_t)(ECX));
  /* 10991714 call 0x10986930 */
  push32(0x10991719u); f_10986930();
  /* 10991719 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099171c push 2 */
  push32((uint32_t)(0x2u));
  /* 1099171e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10991721 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10991724 push eax */
  push32((uint32_t)(EAX));
  /* 10991725 call 0x10986930 */
  push32(0x1099172au); f_10986930();
  /* 1099172a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099172d push 2 */
  push32((uint32_t)(0x2u));
  /* 1099172f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10991732 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10991735 push edx */
  push32((uint32_t)(EDX));
  /* 10991736 call 0x10986930 */
  push32(0x1099173bu); f_10986930();
  /* 1099173b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099173e push 2 */
  push32((uint32_t)(0x2u));
  /* 10991740 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10991743 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10991746 push ecx */
  push32((uint32_t)(ECX));
  /* 10991747 call 0x10986930 */
  push32(0x1099174cu); f_10986930();
  /* 1099174c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099174f push 2 */
  push32((uint32_t)(0x2u));
  /* 10991751 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10991754 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10991757 push eax */
  push32((uint32_t)(EAX));
  /* 10991758 call 0x10986930 */
  push32(0x1099175du); f_10986930();
  /* 1099175d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991760 push 2 */
  push32((uint32_t)(0x2u));
  /* 10991762 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10991765 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10991768 push edx */
  push32((uint32_t)(EDX));
  /* 10991769 call 0x10986930 */
  push32(0x1099176eu); f_10986930();
  /* 1099176e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10991771:;
  /* 10991771 pop ebp */
  EBP = (pop32());
  /* 10991772 ret  */
  ESPCHK(0x109916e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011780 @ 0x10991780 (928 bytes, 284 insns) */
void f_10991780(void) {
  FTRACE(0x10991780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10991780 push ebp */
  push32((uint32_t)(EBP));
  /* 10991781 mov ebp, esp */
  EBP = (ESP);
  /* 10991783 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10991786 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1099178d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10991794 cmp dword ptr [0x109b1850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b1850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099179b je 0x10991ad1 */
  if (C.zf) goto L_10991ad1;
  /* 109917a1 cmp dword ptr [0x109b1860], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b1860))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109917a8 jne 0x109917d0 */
  if (!C.zf) goto L_109917d0;
  /* 109917aa push 0x109b1860 */
  push32((uint32_t)(0x109b1860u));
  /* 109917af push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 109917b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109917b6 mov ax, word ptr [0x109b18a4] */
  AX = (r16((uint32_t)(0x109b18a4)));
  /* 109917bc push eax */
  push32((uint32_t)(EAX));
  /* 109917bd push 0 */
  push32((uint32_t)(0x0u));
  /* 109917bf call 0x10994060 */
  push32(0x109917c4u); f_10994060();
  /* 109917c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109917c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109917c9 je 0x109917d0 */
  if (C.zf) goto L_109917d0;
  /* 109917cb jmp 0x10991a92 */
  goto L_10991a92;
L_109917d0:;
  /* 109917d0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 109917d2 push 0x109ad40c */
  push32((uint32_t)(0x109ad40cu));
  /* 109917d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 109917d9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 109917de call 0x10985ea0 */
  push32(0x109917e3u); f_10985ea0();
  /* 109917e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109917e6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 109917e9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 109917eb push 0x109ad40c */
  push32((uint32_t)(0x109ad40cu));
  /* 109917f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 109917f2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 109917f7 call 0x10985ea0 */
  push32(0x109917fcu); f_10985ea0();
  /* 109917fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109917ff mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10991802 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10991804 push 0x109ad40c */
  push32((uint32_t)(0x109ad40cu));
  /* 10991809 push 2 */
  push32((uint32_t)(0x2u));
  /* 1099180b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10991810 call 0x10985ea0 */
  push32(0x10991815u); f_10985ea0();
  /* 10991815 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991818 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1099181b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1099181d push 0x109ad40c */
  push32((uint32_t)(0x109ad40cu));
  /* 10991822 push 2 */
  push32((uint32_t)(0x2u));
  /* 10991824 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10991829 call 0x10985ea0 */
  push32(0x1099182eu); f_10985ea0();
  /* 1099182e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991831 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10991834 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10991838 je 0x1099184c */
  if (C.zf) goto L_1099184c;
  /* 1099183a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099183e je 0x1099184c */
  if (C.zf) goto L_1099184c;
  /* 10991840 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10991844 je 0x1099184c */
  if (C.zf) goto L_1099184c;
  /* 10991846 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099184a jne 0x10991851 */
  if (!C.zf) goto L_10991851;
L_1099184c:;
  /* 1099184c jmp 0x10991a92 */
  goto L_10991a92;
L_10991851:;
  /* 10991851 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10991854 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10991857 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1099185e jmp 0x10991869 */
  goto L_10991869;
L_10991860:;
  /* 10991860 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10991863 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10991866 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10991869:;
  /* 10991869 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10991870 jge 0x10991885 */
  if ((C.sf==C.of)) goto L_10991885;
  /* 10991872 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10991875 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 10991878 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1099187a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1099187d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10991880 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10991883 jmp 0x10991860 */
  goto L_10991860;
L_10991885:;
  /* 10991885 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10991888 push eax */
  push32((uint32_t)(EAX));
  /* 10991889 mov ecx, dword ptr [0x109b1860] */
  ECX = (r32((uint32_t)(0x109b1860)));
  /* 1099188f push ecx */
  push32((uint32_t)(ECX));
  /* 10991890 call dword ptr [0x109b4314] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4314))), 0x10991896u);
  /* 10991896 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10991898 jne 0x1099189f */
  if (!C.zf) goto L_1099189f;
  /* 1099189a jmp 0x10991a92 */
  goto L_10991a92;
L_1099189f:;
  /* 1099189f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109918a3 jbe 0x109918aa */
  if ((C.cf||C.zf)) goto L_109918aa;
  /* 109918a5 jmp 0x10991a92 */
  goto L_10991a92;
L_109918aa:;
  /* 109918aa mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109918ad and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 109918b3 mov dword ptr [0x109afea4], edx */
  w32((uint32_t)(0x109afea4), (EDX));
  /* 109918b9 cmp dword ptr [0x109afea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109afea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109918c0 jle 0x10991919 */
  if ((C.zf||C.sf!=C.of)) goto L_10991919;
  /* 109918c2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 109918c5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 109918c8 jmp 0x109918d3 */
  goto L_109918d3;
L_109918ca:;
  /* 109918ca mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109918cd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109918d0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_109918d3:;
  /* 109918d3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 109918d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109918d8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109918da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109918dc je 0x10991919 */
  if (C.zf) goto L_10991919;
  /* 109918de mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109918e1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109918e3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 109918e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109918e8 je 0x10991919 */
  if (C.zf) goto L_10991919;
  /* 109918ea mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109918ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109918ef mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 109918f1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 109918f4 jmp 0x109918ff */
  goto L_109918ff;
L_109918f6:;
  /* 109918f6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 109918f9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109918fc mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_109918ff:;
  /* 109918ff mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10991902 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10991904 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10991907 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099190a jg 0x10991917 */
  if ((!C.zf&&C.sf==C.of)) goto L_10991917;
  /* 1099190c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1099190f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10991912 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10991915 jmp 0x109918f6 */
  goto L_109918f6;
L_10991917:;
  /* 10991917 jmp 0x109918ca */
  goto L_109918ca;
L_10991919:;
  /* 10991919 push 0 */
  push32((uint32_t)(0x0u));
  /* 1099191b push 0 */
  push32((uint32_t)(0x0u));
  /* 1099191d push 0 */
  push32((uint32_t)(0x0u));
  /* 1099191f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10991922 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10991925 push eax */
  push32((uint32_t)(EAX));
  /* 10991926 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1099192b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1099192e push ecx */
  push32((uint32_t)(ECX));
  /* 1099192f push 1 */
  push32((uint32_t)(0x1u));
  /* 10991931 call 0x1098e0d0 */
  push32(0x10991936u); f_1098e0d0();
  /* 10991936 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991939 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1099193b jne 0x10991942 */
  if (!C.zf) goto L_10991942;
  /* 1099193d jmp 0x10991a92 */
  goto L_10991a92;
L_10991942:;
  /* 10991942 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10991945 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 1099194a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1099194d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10991950 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10991957 jmp 0x10991962 */
  goto L_10991962;
L_10991959:;
  /* 10991959 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1099195c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099195f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10991962:;
  /* 10991962 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10991969 jge 0x10991980 */
  if ((C.sf==C.of)) goto L_10991980;
  /* 1099196b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1099196e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 10991972 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10991975 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10991978 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099197b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1099197e jmp 0x10991959 */
  goto L_10991959;
L_10991980:;
  /* 10991980 push 0 */
  push32((uint32_t)(0x0u));
  /* 10991982 push 0 */
  push32((uint32_t)(0x0u));
  /* 10991984 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10991987 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099198a push edx */
  push32((uint32_t)(EDX));
  /* 1099198b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10991990 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10991993 push eax */
  push32((uint32_t)(EAX));
  /* 10991994 push 1 */
  push32((uint32_t)(0x1u));
  /* 10991996 call 0x10994300 */
  push32(0x1099199bu); f_10994300();
  /* 1099199b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099199e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109919a0 jne 0x109919a7 */
  if (!C.zf) goto L_109919a7;
  /* 109919a2 jmp 0x10991a92 */
  goto L_10991a92;
L_109919a7:;
  /* 109919a7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109919aa mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 109919af cmp dword ptr [0x109afea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109afea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109919b6 jle 0x10991a13 */
  if ((C.zf||C.sf!=C.of)) goto L_10991a13;
  /* 109919b8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 109919bb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 109919be jmp 0x109919c9 */
  goto L_109919c9;
L_109919c0:;
  /* 109919c0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109919c3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109919c6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_109919c9:;
  /* 109919c9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109919cc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109919ce mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 109919d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109919d2 je 0x10991a13 */
  if (C.zf) goto L_10991a13;
  /* 109919d4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109919d7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109919d9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 109919dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109919de je 0x10991a13 */
  if (C.zf) goto L_10991a13;
  /* 109919e0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 109919e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109919e5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109919e7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 109919ea jmp 0x109919f5 */
  goto L_109919f5;
L_109919ec:;
  /* 109919ec mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109919ef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109919f2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_109919f5:;
  /* 109919f5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 109919f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109919fa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 109919fd cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10991a00 jg 0x10991a11 */
  if ((!C.zf&&C.sf==C.of)) goto L_10991a11;
  /* 10991a02 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10991a05 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10991a08 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 10991a0f jmp 0x109919ec */
  goto L_109919ec;
L_10991a11:;
  /* 10991a11 jmp 0x109919c0 */
  goto L_109919c0;
L_10991a13:;
  /* 10991a13 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10991a16 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10991a19 mov dword ptr [0x109afc98], eax */
  w32((uint32_t)(0x109afc98), (EAX));
  /* 10991a1e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10991a21 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10991a24 mov dword ptr [0x109afc9c], ecx */
  w32((uint32_t)(0x109afc9c), (ECX));
  /* 10991a2a cmp dword ptr [0x109b1890], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b1890))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10991a31 je 0x10991a44 */
  if (C.zf) goto L_10991a44;
  /* 10991a33 push 2 */
  push32((uint32_t)(0x2u));
  /* 10991a35 mov edx, dword ptr [0x109b1890] */
  EDX = (r32((uint32_t)(0x109b1890)));
  /* 10991a3b push edx */
  push32((uint32_t)(EDX));
  /* 10991a3c call 0x10986930 */
  push32(0x10991a41u); f_10986930();
  /* 10991a41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10991a44:;
  /* 10991a44 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10991a47 mov dword ptr [0x109b1890], eax */
  w32((uint32_t)(0x109b1890), (EAX));
  /* 10991a4c cmp dword ptr [0x109b1894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b1894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10991a53 je 0x10991a66 */
  if (C.zf) goto L_10991a66;
  /* 10991a55 push 2 */
  push32((uint32_t)(0x2u));
  /* 10991a57 mov ecx, dword ptr [0x109b1894] */
  ECX = (r32((uint32_t)(0x109b1894)));
  /* 10991a5d push ecx */
  push32((uint32_t)(ECX));
  /* 10991a5e call 0x10986930 */
  push32(0x10991a63u); f_10986930();
  /* 10991a63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10991a66:;
  /* 10991a66 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10991a69 mov dword ptr [0x109b1894], edx */
  w32((uint32_t)(0x109b1894), (EDX));
  /* 10991a6f push 2 */
  push32((uint32_t)(0x2u));
  /* 10991a71 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10991a74 push eax */
  push32((uint32_t)(EAX));
  /* 10991a75 call 0x10986930 */
  push32(0x10991a7au); f_10986930();
  /* 10991a7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991a7d push 2 */
  push32((uint32_t)(0x2u));
  /* 10991a7f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10991a82 push ecx */
  push32((uint32_t)(ECX));
  /* 10991a83 call 0x10986930 */
  push32(0x10991a88u); f_10986930();
  /* 10991a88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991a8b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10991a8d jmp 0x10991b1c */
  goto L_10991b1c;
L_10991a92:;
  /* 10991a92 push 2 */
  push32((uint32_t)(0x2u));
  /* 10991a94 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10991a97 push edx */
  push32((uint32_t)(EDX));
  /* 10991a98 call 0x10986930 */
  push32(0x10991a9du); f_10986930();
  /* 10991a9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991aa0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10991aa2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10991aa5 push eax */
  push32((uint32_t)(EAX));
  /* 10991aa6 call 0x10986930 */
  push32(0x10991aabu); f_10986930();
  /* 10991aab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991aae push 2 */
  push32((uint32_t)(0x2u));
  /* 10991ab0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10991ab3 push ecx */
  push32((uint32_t)(ECX));
  /* 10991ab4 call 0x10986930 */
  push32(0x10991ab9u); f_10986930();
  /* 10991ab9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991abc push 2 */
  push32((uint32_t)(0x2u));
  /* 10991abe mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10991ac1 push edx */
  push32((uint32_t)(EDX));
  /* 10991ac2 call 0x10986930 */
  push32(0x10991ac7u); f_10986930();
  /* 10991ac7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991aca mov eax, 1 */
  EAX = (0x1u);
  /* 10991acf jmp 0x10991b1c */
  goto L_10991b1c;
L_10991ad1:;
  /* 10991ad1 mov dword ptr [0x109afc98], 0x109afca2 */
  w32((uint32_t)(0x109afc98), (0x109afca2u));
  /* 10991adb mov dword ptr [0x109afc9c], 0x109afca2 */
  w32((uint32_t)(0x109afc9c), (0x109afca2u));
  /* 10991ae5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10991ae7 mov eax, dword ptr [0x109b1890] */
  EAX = (r32((uint32_t)(0x109b1890)));
  /* 10991aec push eax */
  push32((uint32_t)(EAX));
  /* 10991aed call 0x10986930 */
  push32(0x10991af2u); f_10986930();
  /* 10991af2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991af5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10991af7 mov ecx, dword ptr [0x109b1894] */
  ECX = (r32((uint32_t)(0x109b1894)));
  /* 10991afd push ecx */
  push32((uint32_t)(ECX));
  /* 10991afe call 0x10986930 */
  push32(0x10991b03u); f_10986930();
  /* 10991b03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991b06 mov dword ptr [0x109b1890], 0 */
  w32((uint32_t)(0x109b1890), (0x0u));
  /* 10991b10 mov dword ptr [0x109b1894], 0 */
  w32((uint32_t)(0x109b1894), (0x0u));
  /* 10991b1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10991b1c:;
  /* 10991b1c mov esp, ebp */
  ESP = (EBP);
  /* 10991b1e pop ebp */
  EBP = (pop32());
  /* 10991b1f ret  */
  ESPCHK(0x10991780u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b20 @ 0x10991b20 (7 bytes, 5 insns) */
void f_10991b20(void) {
  FTRACE(0x10991b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10991b20 push ebp */
  push32((uint32_t)(EBP));
  /* 10991b21 mov ebp, esp */
  EBP = (ESP);
  /* 10991b23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10991b25 pop ebp */
  EBP = (pop32());
  /* 10991b26 ret  */
  ESPCHK(0x10991b20u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x10991b30 (129 bytes, 56 insns) */
void f_10991b30(void) {
  FTRACE(0x10991b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10991b30 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10991b34 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10991b38 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10991b3e jne 0x10991b7c */
  if (!C.zf) goto L_10991b7c;
L_10991b40:;
  /* 10991b40 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10991b42 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10991b44 jne 0x10991b74 */
  if (!C.zf) goto L_10991b74;
  /* 10991b46 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10991b48 je 0x10991b70 */
  if (C.zf) goto L_10991b70;
  /* 10991b4a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10991b4d jne 0x10991b74 */
  if (!C.zf) goto L_10991b74;
  /* 10991b4f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10991b51 je 0x10991b70 */
  if (C.zf) goto L_10991b70;
  /* 10991b53 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10991b56 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10991b59 jne 0x10991b74 */
  if (!C.zf) goto L_10991b74;
  /* 10991b5b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10991b5d je 0x10991b70 */
  if (C.zf) goto L_10991b70;
  /* 10991b5f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10991b62 jne 0x10991b74 */
  if (!C.zf) goto L_10991b74;
  /* 10991b64 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10991b67 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10991b6a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10991b6c jne 0x10991b40 */
  if (!C.zf) goto L_10991b40;
  /* 10991b6e mov edi, edi */
  EDI = (EDI);
L_10991b70:;
  /* 10991b70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10991b72 ret  */
  ESPCHK(0x10991b30u, _esp0);
  ESP += 4; return;
  /* 10991b73 nop  */
  /* nop */
L_10991b74:;
  /* 10991b74 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10991b76 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10991b78 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10991b79 ret  */
  ESPCHK(0x10991b30u, _esp0);
  ESP += 4; return;
  /* 10991b7a mov edi, edi */
  EDI = (EDI);
L_10991b7c:;
  /* 10991b7c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 10991b82 je 0x10991b98 */
  if (C.zf) goto L_10991b98;
  /* 10991b84 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10991b86 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10991b87 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10991b89 jne 0x10991b74 */
  if (!C.zf) goto L_10991b74;
  /* 10991b8b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10991b8c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10991b8e je 0x10991b70 */
  if (C.zf) goto L_10991b70;
  /* 10991b90 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 10991b96 je 0x10991b40 */
  if (C.zf) goto L_10991b40;
L_10991b98:;
  /* 10991b98 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10991b9b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10991b9e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10991ba0 jne 0x10991b74 */
  if (!C.zf) goto L_10991b74;
  /* 10991ba2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10991ba4 je 0x10991b70 */
  if (C.zf) goto L_10991b70;
  /* 10991ba6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10991ba9 jne 0x10991b74 */
  if (!C.zf) goto L_10991b74;
  /* 10991bab or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10991bad je 0x10991b70 */
  if (C.zf) goto L_10991b70;
  /* 10991baf add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10991bb2 jmp 0x10991b40 */
  goto L_10991b40;
}

/* FUN_10011bc0 @ 0x10991bc0 (62 bytes, 35 insns) */
void f_10991bc0(void) {
  FTRACE(0x10991bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10991bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10991bc1 mov ebp, esp */
  EBP = (ESP);
  /* 10991bc3 push esi */
  push32((uint32_t)(ESI));
  /* 10991bc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10991bc6 push eax */
  push32((uint32_t)(EAX));
  /* 10991bc7 push eax */
  push32((uint32_t)(EAX));
  /* 10991bc8 push eax */
  push32((uint32_t)(EAX));
  /* 10991bc9 push eax */
  push32((uint32_t)(EAX));
  /* 10991bca push eax */
  push32((uint32_t)(EAX));
  /* 10991bcb push eax */
  push32((uint32_t)(EAX));
  /* 10991bcc push eax */
  push32((uint32_t)(EAX));
  /* 10991bcd push eax */
  push32((uint32_t)(EAX));
  /* 10991bce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10991bd1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10991bd4:;
  /* 10991bd4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10991bd6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10991bd8 je 0x10991be1 */
  if (C.zf) goto L_10991be1;
  /* 10991bda inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10991bdb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10991bdb");
  /* 10991bdf jmp 0x10991bd4 */
  goto L_10991bd4;
L_10991be1:;
  /* 10991be1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10991be4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10991be7 nop  */
  /* nop */
L_10991be8:;
  /* 10991be8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10991be9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10991beb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10991bed je 0x10991bf6 */
  if (C.zf) goto L_10991bf6;
  /* 10991bef inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10991bf0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10991bf0");
  /* 10991bf4 jae 0x10991be8 */
  if (!C.cf) goto L_10991be8;
L_10991bf6:;
  /* 10991bf6 mov eax, ecx */
  EAX = (ECX);
  /* 10991bf8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991bfb pop esi */
  ESI = (pop32());
  /* 10991bfc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10991bfd ret  */
  ESPCHK(0x10991bc0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x10991c00 (56 bytes, 31 insns) */
void f_10991c00(void) {
  FTRACE(0x10991c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10991c00 push ebp */
  push32((uint32_t)(EBP));
  /* 10991c01 mov ebp, esp */
  EBP = (ESP);
  /* 10991c03 push edi */
  push32((uint32_t)(EDI));
  /* 10991c04 push esi */
  push32((uint32_t)(ESI));
  /* 10991c05 push ebx */
  push32((uint32_t)(EBX));
  /* 10991c06 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10991c09 jecxz 0x10991c31 */
  x86_unimpl("jecxz @ 0x10991c09");
  /* 10991c0b mov ebx, ecx */
  EBX = (ECX);
  /* 10991c0d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10991c10 mov esi, edi */
  ESI = (EDI);
  /* 10991c12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10991c14 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10991c16 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10991c18 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10991c1a mov edi, esi */
  EDI = (ESI);
  /* 10991c1c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10991c1f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 10991c21 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 10991c24 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10991c26 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10991c29 ja 0x10991c2f */
  if ((!C.cf&&!C.zf)) goto L_10991c2f;
  /* 10991c2b je 0x10991c31 */
  if (C.zf) goto L_10991c31;
  /* 10991c2d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10991c2e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_10991c2f:;
  /* 10991c2f not ecx */
  ECX = (~(ECX));
L_10991c31:;
  /* 10991c31 mov eax, ecx */
  EAX = (ECX);
  /* 10991c33 pop ebx */
  EBX = (pop32());
  /* 10991c34 pop esi */
  ESI = (pop32());
  /* 10991c35 pop edi */
  EDI = (pop32());
  /* 10991c36 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10991c37 ret  */
  ESPCHK(0x10991c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c40 @ 0x10991c40 (58 bytes, 32 insns) */
void f_10991c40(void) {
  FTRACE(0x10991c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10991c40 push ebp */
  push32((uint32_t)(EBP));
  /* 10991c41 mov ebp, esp */
  EBP = (ESP);
  /* 10991c43 push esi */
  push32((uint32_t)(ESI));
  /* 10991c44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10991c46 push eax */
  push32((uint32_t)(EAX));
  /* 10991c47 push eax */
  push32((uint32_t)(EAX));
  /* 10991c48 push eax */
  push32((uint32_t)(EAX));
  /* 10991c49 push eax */
  push32((uint32_t)(EAX));
  /* 10991c4a push eax */
  push32((uint32_t)(EAX));
  /* 10991c4b push eax */
  push32((uint32_t)(EAX));
  /* 10991c4c push eax */
  push32((uint32_t)(EAX));
  /* 10991c4d push eax */
  push32((uint32_t)(EAX));
  /* 10991c4e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10991c51 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10991c54:;
  /* 10991c54 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10991c56 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10991c58 je 0x10991c61 */
  if (C.zf) goto L_10991c61;
  /* 10991c5a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10991c5b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10991c5b");
  /* 10991c5f jmp 0x10991c54 */
  goto L_10991c54;
L_10991c61:;
  /* 10991c61 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_10991c64:;
  /* 10991c64 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10991c66 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10991c68 je 0x10991c74 */
  if (C.zf) goto L_10991c74;
  /* 10991c6a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10991c6b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10991c6b");
  /* 10991c6f jae 0x10991c64 */
  if (!C.cf) goto L_10991c64;
  /* 10991c71 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_10991c74:;
  /* 10991c74 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991c77 pop esi */
  ESI = (pop32());
  /* 10991c78 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10991c79 ret  */
  ESPCHK(0x10991c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c80 @ 0x10991c80 (512 bytes, 147 insns) */
void f_10991c80(void) {
  FTRACE(0x10991c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10991c80 push ebp */
  push32((uint32_t)(EBP));
  /* 10991c81 mov ebp, esp */
  EBP = (ESP);
  /* 10991c83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10991c86 cmp dword ptr [0x109b18dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b18dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10991c8d jne 0x10991cb2 */
  if (!C.zf) goto L_10991cb2;
  /* 10991c8f call 0x10992750 */
  push32(0x10991c94u); f_10992750();
  /* 10991c94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10991c96 je 0x10991ca2 */
  if (C.zf) goto L_10991ca2;
  /* 10991c98 mov eax, dword ptr [0x109b42d8] */
  EAX = (r32((uint32_t)(0x109b42d8)));
  /* 10991c9d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10991ca0 jmp 0x10991ca9 */
  goto L_10991ca9;
L_10991ca2:;
  /* 10991ca2 mov dword ptr [ebp - 8], 0x109927a0 */
  w32((uint32_t)(EBP + -0x8), (0x109927a0u));
L_10991ca9:;
  /* 10991ca9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10991cac mov dword ptr [0x109b18dc], ecx */
  w32((uint32_t)(0x109b18dc), (ECX));
L_10991cb2:;
  /* 10991cb2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10991cb6 jne 0x10991cc2 */
  if (!C.zf) goto L_10991cc2;
  /* 10991cb8 call 0x109925a0 */
  push32(0x10991cbdu); f_109925a0();
  /* 10991cbd jmp 0x10991d8e */
  goto L_10991d8e;
L_10991cc2:;
  /* 10991cc2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10991cc5 mov dword ptr [0x109b18cc], edx */
  w32((uint32_t)(0x109b18cc), (EDX));
  /* 10991ccb cmp dword ptr [0x109b18cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b18cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10991cd2 je 0x10991cf4 */
  if (C.zf) goto L_10991cf4;
  /* 10991cd4 mov eax, dword ptr [0x109b18cc] */
  EAX = (r32((uint32_t)(0x109b18cc)));
  /* 10991cd9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10991cdc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10991cde je 0x10991cf4 */
  if (C.zf) goto L_10991cf4;
  /* 10991ce0 push 0x109b18cc */
  push32((uint32_t)(0x109b18ccu));
  /* 10991ce5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10991ce7 push 0x109b0a90 */
  push32((uint32_t)(0x109b0a90u));
  /* 10991cec call 0x10991e80 */
  push32(0x10991cf1u); f_10991e80();
  /* 10991cf1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10991cf4:;
  /* 10991cf4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10991cf7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10991cfa mov dword ptr [0x109b18d0], edx */
  w32((uint32_t)(0x109b18d0), (EDX));
  /* 10991d00 cmp dword ptr [0x109b18d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b18d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10991d07 je 0x10991d29 */
  if (C.zf) goto L_10991d29;
  /* 10991d09 mov eax, dword ptr [0x109b18d0] */
  EAX = (r32((uint32_t)(0x109b18d0)));
  /* 10991d0e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10991d11 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10991d13 je 0x10991d29 */
  if (C.zf) goto L_10991d29;
  /* 10991d15 push 0x109b18d0 */
  push32((uint32_t)(0x109b18d0u));
  /* 10991d1a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10991d1c push 0x109b09d8 */
  push32((uint32_t)(0x109b09d8u));
  /* 10991d21 call 0x10991e80 */
  push32(0x10991d26u); f_10991e80();
  /* 10991d26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10991d29:;
  /* 10991d29 mov dword ptr [0x109b18d4], 0 */
  w32((uint32_t)(0x109b18d4), (0x0u));
  /* 10991d33 cmp dword ptr [0x109b18cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b18cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10991d3a je 0x10991d6d */
  if (C.zf) goto L_10991d6d;
  /* 10991d3c mov edx, dword ptr [0x109b18cc] */
  EDX = (r32((uint32_t)(0x109b18cc)));
  /* 10991d42 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10991d45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10991d47 je 0x10991d6d */
  if (C.zf) goto L_10991d6d;
  /* 10991d49 cmp dword ptr [0x109b18d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b18d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10991d50 je 0x10991d66 */
  if (C.zf) goto L_10991d66;
  /* 10991d52 mov ecx, dword ptr [0x109b18d0] */
  ECX = (r32((uint32_t)(0x109b18d0)));
  /* 10991d58 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10991d5b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10991d5d je 0x10991d66 */
  if (C.zf) goto L_10991d66;
  /* 10991d5f call 0x10991f10 */
  push32(0x10991d64u); f_10991f10();
  /* 10991d64 jmp 0x10991d6b */
  goto L_10991d6b;
L_10991d66:;
  /* 10991d66 call 0x10992300 */
  push32(0x10991d6bu); f_10992300();
L_10991d6b:;
  /* 10991d6b jmp 0x10991d8e */
  goto L_10991d8e;
L_10991d6d:;
  /* 10991d6d cmp dword ptr [0x109b18d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b18d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10991d74 je 0x10991d89 */
  if (C.zf) goto L_10991d89;
  /* 10991d76 mov eax, dword ptr [0x109b18d0] */
  EAX = (r32((uint32_t)(0x109b18d0)));
  /* 10991d7b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10991d7e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10991d80 je 0x10991d89 */
  if (C.zf) goto L_10991d89;
  /* 10991d82 call 0x109924a0 */
  push32(0x10991d87u); f_109924a0();
  /* 10991d87 jmp 0x10991d8e */
  goto L_10991d8e;
L_10991d89:;
  /* 10991d89 call 0x109925a0 */
  push32(0x10991d8eu); f_109925a0();
L_10991d8e:;
  /* 10991d8e cmp dword ptr [0x109b18d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b18d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10991d95 jne 0x10991d9e */
  if (!C.zf) goto L_10991d9e;
  /* 10991d97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10991d99 jmp 0x10991e7c */
  goto L_10991e7c;
L_10991d9e:;
  /* 10991d9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10991da1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10991da7 push edx */
  push32((uint32_t)(EDX));
  /* 10991da8 call 0x109925d0 */
  push32(0x10991dadu); f_109925d0();
  /* 10991dad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991db0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10991db3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10991db7 je 0x10991dcc */
  if (C.zf) goto L_10991dcc;
  /* 10991db9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10991dbc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10991dc1 push eax */
  push32((uint32_t)(EAX));
  /* 10991dc2 call dword ptr [0x109b42dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42dc))), 0x10991dc8u);
  /* 10991dc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10991dca jne 0x10991dd3 */
  if (!C.zf) goto L_10991dd3;
L_10991dcc:;
  /* 10991dcc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10991dce jmp 0x10991e7c */
  goto L_10991e7c;
L_10991dd3:;
  /* 10991dd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10991dd5 mov ecx, dword ptr [0x109b18bc] */
  ECX = (r32((uint32_t)(0x109b18bc)));
  /* 10991ddb push ecx */
  push32((uint32_t)(ECX));
  /* 10991ddc call dword ptr [0x109b42e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42e0))), 0x10991de2u);
  /* 10991de2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10991de4 jne 0x10991ded */
  if (!C.zf) goto L_10991ded;
  /* 10991de6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10991de8 jmp 0x10991e7c */
  goto L_10991e7c;
L_10991ded:;
  /* 10991ded cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10991df1 je 0x10991e18 */
  if (C.zf) goto L_10991e18;
  /* 10991df3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10991df6 mov ax, word ptr [0x109b18bc] */
  AX = (r16((uint32_t)(0x109b18bc)));
  /* 10991dfc mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10991dff mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10991e02 mov dx, word ptr [0x109b18d8] */
  DX = (r16((uint32_t)(0x109b18d8)));
  /* 10991e09 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 10991e0d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10991e10 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 10991e14 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_10991e18:;
  /* 10991e18 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10991e1c je 0x10991e77 */
  if (C.zf) goto L_10991e77;
  /* 10991e1e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10991e20 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10991e23 push edx */
  push32((uint32_t)(EDX));
  /* 10991e24 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 10991e29 mov eax, dword ptr [0x109b18bc] */
  EAX = (r32((uint32_t)(0x109b18bc)));
  /* 10991e2e push eax */
  push32((uint32_t)(EAX));
  /* 10991e2f call dword ptr [0x109b18dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b18dc))), 0x10991e35u);
  /* 10991e35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10991e37 jne 0x10991e3d */
  if (!C.zf) goto L_10991e3d;
  /* 10991e39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10991e3b jmp 0x10991e7c */
  goto L_10991e7c;
L_10991e3d:;
  /* 10991e3d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10991e3f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10991e42 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10991e45 push ecx */
  push32((uint32_t)(ECX));
  /* 10991e46 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 10991e4b mov edx, dword ptr [0x109b18d8] */
  EDX = (r32((uint32_t)(0x109b18d8)));
  /* 10991e51 push edx */
  push32((uint32_t)(EDX));
  /* 10991e52 call dword ptr [0x109b18dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b18dc))), 0x10991e58u);
  /* 10991e58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10991e5a jne 0x10991e60 */
  if (!C.zf) goto L_10991e60;
  /* 10991e5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10991e5e jmp 0x10991e7c */
  goto L_10991e7c;
L_10991e60:;
  /* 10991e60 push 0xa */
  push32((uint32_t)(0xau));
  /* 10991e62 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10991e65 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10991e6a push eax */
  push32((uint32_t)(EAX));
  /* 10991e6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10991e6e push ecx */
  push32((uint32_t)(ECX));
  /* 10991e6f call 0x109889e0 */
  push32(0x10991e74u); f_109889e0();
  /* 10991e74 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10991e77:;
  /* 10991e77 mov eax, 1 */
  EAX = (0x1u);
L_10991e7c:;
  /* 10991e7c mov esp, ebp */
  ESP = (EBP);
  /* 10991e7e pop ebp */
  EBP = (pop32());
  /* 10991e7f ret  */
  ESPCHK(0x10991c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e80 @ 0x10991e80 (130 bytes, 47 insns) */
void f_10991e80(void) {
  FTRACE(0x10991e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10991e80 push ebp */
  push32((uint32_t)(EBP));
  /* 10991e81 mov ebp, esp */
  EBP = (ESP);
  /* 10991e83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10991e86 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10991e8d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10991e94:;
  /* 10991e94 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10991e97 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10991e9a jg 0x10991efe */
  if ((!C.zf&&C.sf==C.of)) goto L_10991efe;
  /* 10991e9c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10991ea0 je 0x10991efe */
  if (C.zf) goto L_10991efe;
  /* 10991ea2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10991ea5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10991ea8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10991ea9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10991eab sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10991ead mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10991eb0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10991eb3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10991eb6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 10991eb9 push eax */
  push32((uint32_t)(EAX));
  /* 10991eba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10991ebd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10991ebf push edx */
  push32((uint32_t)(EDX));
  /* 10991ec0 call 0x10994570 */
  push32(0x10991ec5u); f_10994570();
  /* 10991ec5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991ec8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10991ecb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10991ecf jne 0x10991ee2 */
  if (!C.zf) goto L_10991ee2;
  /* 10991ed1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10991ed4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10991ed7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 10991edb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10991ede mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10991ee0 jmp 0x10991efc */
  goto L_10991efc;
L_10991ee2:;
  /* 10991ee2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10991ee6 jge 0x10991ef3 */
  if ((C.sf==C.of)) goto L_10991ef3;
  /* 10991ee8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10991eeb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10991eee mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10991ef1 jmp 0x10991efc */
  goto L_10991efc;
L_10991ef3:;
  /* 10991ef3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10991ef6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10991ef9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10991efc:;
  /* 10991efc jmp 0x10991e94 */
  goto L_10991e94;
L_10991efe:;
  /* 10991efe mov esp, ebp */
  ESP = (EBP);
  /* 10991f00 pop ebp */
  EBP = (pop32());
  /* 10991f01 ret  */
  ESPCHK(0x10991e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f10 @ 0x10991f10 (186 bytes, 50 insns) */
void f_10991f10(void) {
  FTRACE(0x10991f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10991f10 push ebp */
  push32((uint32_t)(EBP));
  /* 10991f11 mov ebp, esp */
  EBP = (ESP);
  /* 10991f13 push ecx */
  push32((uint32_t)(ECX));
  /* 10991f14 mov eax, dword ptr [0x109b18cc] */
  EAX = (r32((uint32_t)(0x109b18cc)));
  /* 10991f19 push eax */
  push32((uint32_t)(EAX));
  /* 10991f1a call 0x10988cd0 */
  push32(0x10991f1fu); f_10988cd0();
  /* 10991f1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991f22 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10991f24 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10991f27 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10991f2a mov dword ptr [0x109b18c8], ecx */
  w32((uint32_t)(0x109b18c8), (ECX));
  /* 10991f30 mov edx, dword ptr [0x109b18d0] */
  EDX = (r32((uint32_t)(0x109b18d0)));
  /* 10991f36 push edx */
  push32((uint32_t)(EDX));
  /* 10991f37 call 0x10988cd0 */
  push32(0x10991f3cu); f_10988cd0();
  /* 10991f3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991f3f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10991f41 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10991f44 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10991f47 mov dword ptr [0x109b18c0], ecx */
  w32((uint32_t)(0x109b18c0), (ECX));
  /* 10991f4d mov dword ptr [0x109b18bc], 0 */
  w32((uint32_t)(0x109b18bc), (0x0u));
  /* 10991f57 cmp dword ptr [0x109b18c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b18c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10991f5e je 0x10991f69 */
  if (C.zf) goto L_10991f69;
  /* 10991f60 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10991f67 jmp 0x10991f7b */
  goto L_10991f7b;
L_10991f69:;
  /* 10991f69 mov edx, dword ptr [0x109b18cc] */
  EDX = (r32((uint32_t)(0x109b18cc)));
  /* 10991f6f push edx */
  push32((uint32_t)(EDX));
  /* 10991f70 call 0x109929b0 */
  push32(0x10991f75u); f_109929b0();
  /* 10991f75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991f78 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10991f7b:;
  /* 10991f7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10991f7e mov dword ptr [0x109b18c4], eax */
  w32((uint32_t)(0x109b18c4), (EAX));
  /* 10991f83 push 1 */
  push32((uint32_t)(0x1u));
  /* 10991f85 push 0x10991fd0 */
  push32((uint32_t)(0x10991fd0u));
  /* 10991f8a call dword ptr [0x109b42d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42d4))), 0x10991f90u);
  /* 10991f90 mov ecx, dword ptr [0x109b18d4] */
  ECX = (r32((uint32_t)(0x109b18d4)));
  /* 10991f96 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10991f9c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10991f9e je 0x10991fbc */
  if (C.zf) goto L_10991fbc;
  /* 10991fa0 mov edx, dword ptr [0x109b18d4] */
  EDX = (r32((uint32_t)(0x109b18d4)));
  /* 10991fa6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 10991fac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10991fae je 0x10991fbc */
  if (C.zf) goto L_10991fbc;
  /* 10991fb0 mov eax, dword ptr [0x109b18d4] */
  EAX = (r32((uint32_t)(0x109b18d4)));
  /* 10991fb5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 10991fb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10991fba jne 0x10991fc6 */
  if (!C.zf) goto L_10991fc6;
L_10991fbc:;
  /* 10991fbc mov dword ptr [0x109b18d4], 0 */
  w32((uint32_t)(0x109b18d4), (0x0u));
L_10991fc6:;
  /* 10991fc6 mov esp, ebp */
  ESP = (EBP);
  /* 10991fc8 pop ebp */
  EBP = (pop32());
  /* 10991fc9 ret  */
  ESPCHK(0x10991f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10011fd0 @ 0x10991fd0 (804 bytes, 220 insns) */
void f_10991fd0(void) {
  FTRACE(0x10991fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10991fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10991fd1 mov ebp, esp */
  EBP = (ESP);
  /* 10991fd3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10991fd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10991fd9 push eax */
  push32((uint32_t)(EAX));
  /* 10991fda call 0x10992930 */
  push32(0x10991fdfu); f_10992930();
  /* 10991fdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10991fe2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10991fe5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10991fe7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10991fea push ecx */
  push32((uint32_t)(ECX));
  /* 10991feb mov edx, dword ptr [0x109b18c0] */
  EDX = (r32((uint32_t)(0x109b18c0)));
  /* 10991ff1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10991ff3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10991ff5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10991ffb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10992001 push edx */
  push32((uint32_t)(EDX));
  /* 10992002 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10992005 push eax */
  push32((uint32_t)(EAX));
  /* 10992006 call dword ptr [0x109b18dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b18dc))), 0x1099200cu);
  /* 1099200c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1099200e jne 0x10992024 */
  if (!C.zf) goto L_10992024;
  /* 10992010 mov dword ptr [0x109b18d4], 0 */
  w32((uint32_t)(0x109b18d4), (0x0u));
  /* 1099201a mov eax, 1 */
  EAX = (0x1u);
  /* 1099201f jmp 0x109922ee */
  goto L_109922ee;
L_10992024:;
  /* 10992024 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10992027 push ecx */
  push32((uint32_t)(ECX));
  /* 10992028 mov edx, dword ptr [0x109b18d0] */
  EDX = (r32((uint32_t)(0x109b18d0)));
  /* 1099202e push edx */
  push32((uint32_t)(EDX));
  /* 1099202f call 0x10994570 */
  push32(0x10992034u); f_10994570();
  /* 10992034 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992037 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10992039 jne 0x1099215f */
  if (!C.zf) goto L_1099215f;
  /* 1099203f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10992041 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10992044 push eax */
  push32((uint32_t)(EAX));
  /* 10992045 mov ecx, dword ptr [0x109b18c8] */
  ECX = (r32((uint32_t)(0x109b18c8)));
  /* 1099204b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1099204d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1099204f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10992055 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099205b push ecx */
  push32((uint32_t)(ECX));
  /* 1099205c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1099205f push edx */
  push32((uint32_t)(EDX));
  /* 10992060 call dword ptr [0x109b18dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b18dc))), 0x10992066u);
  /* 10992066 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10992068 jne 0x1099207e */
  if (!C.zf) goto L_1099207e;
  /* 1099206a mov dword ptr [0x109b18d4], 0 */
  w32((uint32_t)(0x109b18d4), (0x0u));
  /* 10992074 mov eax, 1 */
  EAX = (0x1u);
  /* 10992079 jmp 0x109922ee */
  goto L_109922ee;
L_1099207e:;
  /* 1099207e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10992081 push eax */
  push32((uint32_t)(EAX));
  /* 10992082 mov ecx, dword ptr [0x109b18cc] */
  ECX = (r32((uint32_t)(0x109b18cc)));
  /* 10992088 push ecx */
  push32((uint32_t)(ECX));
  /* 10992089 call 0x10994570 */
  push32(0x1099208eu); f_10994570();
  /* 1099208e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992091 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10992093 jne 0x109920c0 */
  if (!C.zf) goto L_109920c0;
  /* 10992095 mov edx, dword ptr [0x109b18d4] */
  EDX = (r32((uint32_t)(0x109b18d4)));
  /* 1099209b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 109920a1 mov dword ptr [0x109b18d4], edx */
  w32((uint32_t)(0x109b18d4), (EDX));
  /* 109920a7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 109920aa mov dword ptr [0x109b18d8], eax */
  w32((uint32_t)(0x109b18d8), (EAX));
  /* 109920af mov ecx, dword ptr [0x109b18d8] */
  ECX = (r32((uint32_t)(0x109b18d8)));
  /* 109920b5 mov dword ptr [0x109b18bc], ecx */
  w32((uint32_t)(0x109b18bc), (ECX));
  /* 109920bb jmp 0x1099215f */
  goto L_1099215f;
L_109920c0:;
  /* 109920c0 mov edx, dword ptr [0x109b18d4] */
  EDX = (r32((uint32_t)(0x109b18d4)));
  /* 109920c6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 109920c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109920cb jne 0x1099215f */
  if (!C.zf) goto L_1099215f;
  /* 109920d1 cmp dword ptr [0x109b18c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b18c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109920d8 je 0x1099212d */
  if (C.zf) goto L_1099212d;
  /* 109920da mov eax, dword ptr [0x109b18c4] */
  EAX = (r32((uint32_t)(0x109b18c4)));
  /* 109920df push eax */
  push32((uint32_t)(EAX));
  /* 109920e0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 109920e3 push ecx */
  push32((uint32_t)(ECX));
  /* 109920e4 mov edx, dword ptr [0x109b18cc] */
  EDX = (r32((uint32_t)(0x109b18cc)));
  /* 109920ea push edx */
  push32((uint32_t)(EDX));
  /* 109920eb call 0x10994640 */
  push32(0x109920f0u); f_10994640();
  /* 109920f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109920f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109920f5 jne 0x1099212d */
  if (!C.zf) goto L_1099212d;
  /* 109920f7 mov eax, dword ptr [0x109b18d4] */
  EAX = (r32((uint32_t)(0x109b18d4)));
  /* 109920fc or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 109920fe mov dword ptr [0x109b18d4], eax */
  w32((uint32_t)(0x109b18d4), (EAX));
  /* 10992103 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10992106 mov dword ptr [0x109b18d8], ecx */
  w32((uint32_t)(0x109b18d8), (ECX));
  /* 1099210c mov edx, dword ptr [0x109b18cc] */
  EDX = (r32((uint32_t)(0x109b18cc)));
  /* 10992112 push edx */
  push32((uint32_t)(EDX));
  /* 10992113 call 0x10988cd0 */
  push32(0x10992118u); f_10988cd0();
  /* 10992118 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099211b cmp eax, dword ptr [0x109b18c4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109b18c4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992121 jne 0x1099212b */
  if (!C.zf) goto L_1099212b;
  /* 10992123 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10992126 mov dword ptr [0x109b18bc], eax */
  w32((uint32_t)(0x109b18bc), (EAX));
L_1099212b:;
  /* 1099212b jmp 0x1099215f */
  goto L_1099215f;
L_1099212d:;
  /* 1099212d mov ecx, dword ptr [0x109b18d4] */
  ECX = (r32((uint32_t)(0x109b18d4)));
  /* 10992133 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10992136 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10992138 jne 0x1099215f */
  if (!C.zf) goto L_1099215f;
  /* 1099213a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1099213d push edx */
  push32((uint32_t)(EDX));
  /* 1099213e call 0x10992670 */
  push32(0x10992143u); f_10992670();
  /* 10992143 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992146 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10992148 je 0x1099215f */
  if (C.zf) goto L_1099215f;
  /* 1099214a mov eax, dword ptr [0x109b18d4] */
  EAX = (r32((uint32_t)(0x109b18d4)));
  /* 1099214f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10992151 mov dword ptr [0x109b18d4], eax */
  w32((uint32_t)(0x109b18d4), (EAX));
  /* 10992156 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10992159 mov dword ptr [0x109b18d8], ecx */
  w32((uint32_t)(0x109b18d8), (ECX));
L_1099215f:;
  /* 1099215f mov edx, dword ptr [0x109b18d4] */
  EDX = (r32((uint32_t)(0x109b18d4)));
  /* 10992165 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 1099216b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992171 je 0x109922e1 */
  if (C.zf) goto L_109922e1;
  /* 10992177 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10992179 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1099217c push eax */
  push32((uint32_t)(EAX));
  /* 1099217d mov ecx, dword ptr [0x109b18c8] */
  ECX = (r32((uint32_t)(0x109b18c8)));
  /* 10992183 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10992185 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10992187 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1099218d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10992193 push ecx */
  push32((uint32_t)(ECX));
  /* 10992194 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10992197 push edx */
  push32((uint32_t)(EDX));
  /* 10992198 call dword ptr [0x109b18dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b18dc))), 0x1099219eu);
  /* 1099219e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109921a0 jne 0x109921b6 */
  if (!C.zf) goto L_109921b6;
  /* 109921a2 mov dword ptr [0x109b18d4], 0 */
  w32((uint32_t)(0x109b18d4), (0x0u));
  /* 109921ac mov eax, 1 */
  EAX = (0x1u);
  /* 109921b1 jmp 0x109922ee */
  goto L_109922ee;
L_109921b6:;
  /* 109921b6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 109921b9 push eax */
  push32((uint32_t)(EAX));
  /* 109921ba mov ecx, dword ptr [0x109b18cc] */
  ECX = (r32((uint32_t)(0x109b18cc)));
  /* 109921c0 push ecx */
  push32((uint32_t)(ECX));
  /* 109921c1 call 0x10994570 */
  push32(0x109921c6u); f_10994570();
  /* 109921c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109921c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109921cb jne 0x10992280 */
  if (!C.zf) goto L_10992280;
  /* 109921d1 mov edx, dword ptr [0x109b18d4] */
  EDX = (r32((uint32_t)(0x109b18d4)));
  /* 109921d7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 109921da mov dword ptr [0x109b18d4], edx */
  w32((uint32_t)(0x109b18d4), (EDX));
  /* 109921e0 cmp dword ptr [0x109b18c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b18c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109921e7 je 0x1099220a */
  if (C.zf) goto L_1099220a;
  /* 109921e9 mov eax, dword ptr [0x109b18d4] */
  EAX = (r32((uint32_t)(0x109b18d4)));
  /* 109921ee or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 109921f1 mov dword ptr [0x109b18d4], eax */
  w32((uint32_t)(0x109b18d4), (EAX));
  /* 109921f6 cmp dword ptr [0x109b18bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b18bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109921fd jne 0x10992208 */
  if (!C.zf) goto L_10992208;
  /* 109921ff mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10992202 mov dword ptr [0x109b18bc], ecx */
  w32((uint32_t)(0x109b18bc), (ECX));
L_10992208:;
  /* 10992208 jmp 0x1099227e */
  goto L_1099227e;
L_1099220a:;
  /* 1099220a cmp dword ptr [0x109b18c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b18c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992211 je 0x1099225f */
  if (C.zf) goto L_1099225f;
  /* 10992213 mov edx, dword ptr [0x109b18cc] */
  EDX = (r32((uint32_t)(0x109b18cc)));
  /* 10992219 push edx */
  push32((uint32_t)(EDX));
  /* 1099221a call 0x10988cd0 */
  push32(0x1099221fu); f_10988cd0();
  /* 1099221f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992222 cmp eax, dword ptr [0x109b18c4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109b18c4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992228 jne 0x1099225f */
  if (!C.zf) goto L_1099225f;
  /* 1099222a push 1 */
  push32((uint32_t)(0x1u));
  /* 1099222c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1099222f push eax */
  push32((uint32_t)(EAX));
  /* 10992230 call 0x109926c0 */
  push32(0x10992235u); f_109926c0();
  /* 10992235 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992238 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1099223a je 0x1099225d */
  if (C.zf) goto L_1099225d;
  /* 1099223c mov ecx, dword ptr [0x109b18d4] */
  ECX = (r32((uint32_t)(0x109b18d4)));
  /* 10992242 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10992245 mov dword ptr [0x109b18d4], ecx */
  w32((uint32_t)(0x109b18d4), (ECX));
  /* 1099224b cmp dword ptr [0x109b18bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b18bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992252 jne 0x1099225d */
  if (!C.zf) goto L_1099225d;
  /* 10992254 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10992257 mov dword ptr [0x109b18bc], edx */
  w32((uint32_t)(0x109b18bc), (EDX));
L_1099225d:;
  /* 1099225d jmp 0x1099227e */
  goto L_1099227e;
L_1099225f:;
  /* 1099225f mov eax, dword ptr [0x109b18d4] */
  EAX = (r32((uint32_t)(0x109b18d4)));
  /* 10992264 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10992267 mov dword ptr [0x109b18d4], eax */
  w32((uint32_t)(0x109b18d4), (EAX));
  /* 1099226c cmp dword ptr [0x109b18bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b18bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992273 jne 0x1099227e */
  if (!C.zf) goto L_1099227e;
  /* 10992275 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10992278 mov dword ptr [0x109b18bc], ecx */
  w32((uint32_t)(0x109b18bc), (ECX));
L_1099227e:;
  /* 1099227e jmp 0x109922e1 */
  goto L_109922e1;
L_10992280:;
  /* 10992280 cmp dword ptr [0x109b18c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b18c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992287 jne 0x109922e1 */
  if (!C.zf) goto L_109922e1;
  /* 10992289 cmp dword ptr [0x109b18c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b18c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992290 je 0x109922e1 */
  if (C.zf) goto L_109922e1;
  /* 10992292 mov edx, dword ptr [0x109b18c4] */
  EDX = (r32((uint32_t)(0x109b18c4)));
  /* 10992298 push edx */
  push32((uint32_t)(EDX));
  /* 10992299 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1099229c push eax */
  push32((uint32_t)(EAX));
  /* 1099229d mov ecx, dword ptr [0x109b18cc] */
  ECX = (r32((uint32_t)(0x109b18cc)));
  /* 109922a3 push ecx */
  push32((uint32_t)(ECX));
  /* 109922a4 call 0x10994640 */
  push32(0x109922a9u); f_10994640();
  /* 109922a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109922ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109922ae jne 0x109922e1 */
  if (!C.zf) goto L_109922e1;
  /* 109922b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109922b2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 109922b5 push edx */
  push32((uint32_t)(EDX));
  /* 109922b6 call 0x109926c0 */
  push32(0x109922bbu); f_109926c0();
  /* 109922bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109922be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109922c0 je 0x109922e1 */
  if (C.zf) goto L_109922e1;
  /* 109922c2 mov eax, dword ptr [0x109b18d4] */
  EAX = (r32((uint32_t)(0x109b18d4)));
  /* 109922c7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 109922ca mov dword ptr [0x109b18d4], eax */
  w32((uint32_t)(0x109b18d4), (EAX));
  /* 109922cf cmp dword ptr [0x109b18bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b18bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109922d6 jne 0x109922e1 */
  if (!C.zf) goto L_109922e1;
  /* 109922d8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 109922db mov dword ptr [0x109b18bc], ecx */
  w32((uint32_t)(0x109b18bc), (ECX));
L_109922e1:;
  /* 109922e1 mov eax, dword ptr [0x109b18d4] */
  EAX = (r32((uint32_t)(0x109b18d4)));
  /* 109922e6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 109922e9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 109922eb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109922ed inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_109922ee:;
  /* 109922ee mov esp, ebp */
  ESP = (EBP);
  /* 109922f0 pop ebp */
  EBP = (pop32());
  /* 109922f1 ret 4 */
  ESPCHK(0x10991fd0u, _esp0);
  ESP += 8; return;
}

/* FUN_10012300 @ 0x10992300 (116 bytes, 33 insns) */
void f_10992300(void) {
  FTRACE(0x10992300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10992300 push ebp */
  push32((uint32_t)(EBP));
  /* 10992301 mov ebp, esp */
  EBP = (ESP);
  /* 10992303 push ecx */
  push32((uint32_t)(ECX));
  /* 10992304 mov eax, dword ptr [0x109b18cc] */
  EAX = (r32((uint32_t)(0x109b18cc)));
  /* 10992309 push eax */
  push32((uint32_t)(EAX));
  /* 1099230a call 0x10988cd0 */
  push32(0x1099230fu); f_10988cd0();
  /* 1099230f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992312 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10992314 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992317 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1099231a mov dword ptr [0x109b18c8], ecx */
  w32((uint32_t)(0x109b18c8), (ECX));
  /* 10992320 cmp dword ptr [0x109b18c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b18c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992327 je 0x10992332 */
  if (C.zf) goto L_10992332;
  /* 10992329 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10992330 jmp 0x10992344 */
  goto L_10992344;
L_10992332:;
  /* 10992332 mov edx, dword ptr [0x109b18cc] */
  EDX = (r32((uint32_t)(0x109b18cc)));
  /* 10992338 push edx */
  push32((uint32_t)(EDX));
  /* 10992339 call 0x109929b0 */
  push32(0x1099233eu); f_109929b0();
  /* 1099233e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992341 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10992344:;
  /* 10992344 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10992347 mov dword ptr [0x109b18c4], eax */
  w32((uint32_t)(0x109b18c4), (EAX));
  /* 1099234c push 1 */
  push32((uint32_t)(0x1u));
  /* 1099234e push 0x10992380 */
  push32((uint32_t)(0x10992380u));
  /* 10992353 call dword ptr [0x109b42d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42d4))), 0x10992359u);
  /* 10992359 mov ecx, dword ptr [0x109b18d4] */
  ECX = (r32((uint32_t)(0x109b18d4)));
  /* 1099235f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10992362 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10992364 jne 0x10992370 */
  if (!C.zf) goto L_10992370;
  /* 10992366 mov dword ptr [0x109b18d4], 0 */
  w32((uint32_t)(0x109b18d4), (0x0u));
L_10992370:;
  /* 10992370 mov esp, ebp */
  ESP = (EBP);
  /* 10992372 pop ebp */
  EBP = (pop32());
  /* 10992373 ret  */
  ESPCHK(0x10992300u, _esp0);
  ESP += 4; return;
}

/* FUN_10012380 @ 0x10992380 (287 bytes, 86 insns) */
void f_10992380(void) {
  FTRACE(0x10992380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10992380 push ebp */
  push32((uint32_t)(EBP));
  /* 10992381 mov ebp, esp */
  EBP = (ESP);
  /* 10992383 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10992386 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10992389 push eax */
  push32((uint32_t)(EAX));
  /* 1099238a call 0x10992930 */
  push32(0x1099238fu); f_10992930();
  /* 1099238f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992392 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10992395 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10992397 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1099239a push ecx */
  push32((uint32_t)(ECX));
  /* 1099239b mov edx, dword ptr [0x109b18c8] */
  EDX = (r32((uint32_t)(0x109b18c8)));
  /* 109923a1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 109923a3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109923a5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 109923ab add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109923b1 push edx */
  push32((uint32_t)(EDX));
  /* 109923b2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 109923b5 push eax */
  push32((uint32_t)(EAX));
  /* 109923b6 call dword ptr [0x109b18dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b18dc))), 0x109923bcu);
  /* 109923bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109923be jne 0x109923d4 */
  if (!C.zf) goto L_109923d4;
  /* 109923c0 mov dword ptr [0x109b18d4], 0 */
  w32((uint32_t)(0x109b18d4), (0x0u));
  /* 109923ca mov eax, 1 */
  EAX = (0x1u);
  /* 109923cf jmp 0x10992499 */
  goto L_10992499;
L_109923d4:;
  /* 109923d4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 109923d7 push ecx */
  push32((uint32_t)(ECX));
  /* 109923d8 mov edx, dword ptr [0x109b18cc] */
  EDX = (r32((uint32_t)(0x109b18cc)));
  /* 109923de push edx */
  push32((uint32_t)(EDX));
  /* 109923df call 0x10994570 */
  push32(0x109923e4u); f_10994570();
  /* 109923e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109923e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109923e9 jne 0x10992429 */
  if (!C.zf) goto L_10992429;
  /* 109923eb cmp dword ptr [0x109b18c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b18c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109923f2 jne 0x10992406 */
  if (!C.zf) goto L_10992406;
  /* 109923f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 109923f6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 109923f9 push eax */
  push32((uint32_t)(EAX));
  /* 109923fa call 0x109926c0 */
  push32(0x109923ffu); f_109926c0();
  /* 109923ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992402 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10992404 je 0x10992427 */
  if (C.zf) goto L_10992427;
L_10992406:;
  /* 10992406 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10992409 mov dword ptr [0x109b18d8], ecx */
  w32((uint32_t)(0x109b18d8), (ECX));
  /* 1099240f mov edx, dword ptr [0x109b18d8] */
  EDX = (r32((uint32_t)(0x109b18d8)));
  /* 10992415 mov dword ptr [0x109b18bc], edx */
  w32((uint32_t)(0x109b18bc), (EDX));
  /* 1099241b mov eax, dword ptr [0x109b18d4] */
  EAX = (r32((uint32_t)(0x109b18d4)));
  /* 10992420 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10992422 mov dword ptr [0x109b18d4], eax */
  w32((uint32_t)(0x109b18d4), (EAX));
L_10992427:;
  /* 10992427 jmp 0x1099248c */
  goto L_1099248c;
L_10992429:;
  /* 10992429 cmp dword ptr [0x109b18c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b18c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992430 jne 0x1099248c */
  if (!C.zf) goto L_1099248c;
  /* 10992432 cmp dword ptr [0x109b18c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b18c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992439 je 0x1099248c */
  if (C.zf) goto L_1099248c;
  /* 1099243b mov ecx, dword ptr [0x109b18c4] */
  ECX = (r32((uint32_t)(0x109b18c4)));
  /* 10992441 push ecx */
  push32((uint32_t)(ECX));
  /* 10992442 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 10992445 push edx */
  push32((uint32_t)(EDX));
  /* 10992446 mov eax, dword ptr [0x109b18cc] */
  EAX = (r32((uint32_t)(0x109b18cc)));
  /* 1099244b push eax */
  push32((uint32_t)(EAX));
  /* 1099244c call 0x10994640 */
  push32(0x10992451u); f_10994640();
  /* 10992451 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992454 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10992456 jne 0x1099248c */
  if (!C.zf) goto L_1099248c;
  /* 10992458 push 0 */
  push32((uint32_t)(0x0u));
  /* 1099245a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1099245d push ecx */
  push32((uint32_t)(ECX));
  /* 1099245e call 0x109926c0 */
  push32(0x10992463u); f_109926c0();
  /* 10992463 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992466 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10992468 je 0x1099248c */
  if (C.zf) goto L_1099248c;
  /* 1099246a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1099246d mov dword ptr [0x109b18d8], edx */
  w32((uint32_t)(0x109b18d8), (EDX));
  /* 10992473 mov eax, dword ptr [0x109b18d8] */
  EAX = (r32((uint32_t)(0x109b18d8)));
  /* 10992478 mov dword ptr [0x109b18bc], eax */
  w32((uint32_t)(0x109b18bc), (EAX));
  /* 1099247d mov ecx, dword ptr [0x109b18d4] */
  ECX = (r32((uint32_t)(0x109b18d4)));
  /* 10992483 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10992486 mov dword ptr [0x109b18d4], ecx */
  w32((uint32_t)(0x109b18d4), (ECX));
L_1099248c:;
  /* 1099248c mov eax, dword ptr [0x109b18d4] */
  EAX = (r32((uint32_t)(0x109b18d4)));
  /* 10992491 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10992494 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10992496 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10992498 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10992499:;
  /* 10992499 mov esp, ebp */
  ESP = (EBP);
  /* 1099249b pop ebp */
  EBP = (pop32());
  /* 1099249c ret 4 */
  ESPCHK(0x10992380u, _esp0);
  ESP += 8; return;
}

/* FUN_100124a0 @ 0x109924a0 (69 bytes, 20 insns) */
void f_109924a0(void) {
  FTRACE(0x109924a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109924a0 push ebp */
  push32((uint32_t)(EBP));
  /* 109924a1 mov ebp, esp */
  EBP = (ESP);
  /* 109924a3 mov eax, dword ptr [0x109b18d0] */
  EAX = (r32((uint32_t)(0x109b18d0)));
  /* 109924a8 push eax */
  push32((uint32_t)(EAX));
  /* 109924a9 call 0x10988cd0 */
  push32(0x109924aeu); f_10988cd0();
  /* 109924ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109924b1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109924b3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109924b6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 109924b9 mov dword ptr [0x109b18c0], ecx */
  w32((uint32_t)(0x109b18c0), (ECX));
  /* 109924bf push 1 */
  push32((uint32_t)(0x1u));
  /* 109924c1 push 0x109924f0 */
  push32((uint32_t)(0x109924f0u));
  /* 109924c6 call dword ptr [0x109b42d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42d4))), 0x109924ccu);
  /* 109924cc mov edx, dword ptr [0x109b18d4] */
  EDX = (r32((uint32_t)(0x109b18d4)));
  /* 109924d2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 109924d5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109924d7 jne 0x109924e3 */
  if (!C.zf) goto L_109924e3;
  /* 109924d9 mov dword ptr [0x109b18d4], 0 */
  w32((uint32_t)(0x109b18d4), (0x0u));
L_109924e3:;
  /* 109924e3 pop ebp */
  EBP = (pop32());
  /* 109924e4 ret  */
  ESPCHK(0x109924a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100124f0 @ 0x109924f0 (172 bytes, 54 insns) */
void f_109924f0(void) {
  FTRACE(0x109924f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109924f0 push ebp */
  push32((uint32_t)(EBP));
  /* 109924f1 mov ebp, esp */
  EBP = (ESP);
  /* 109924f3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109924f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109924f9 push eax */
  push32((uint32_t)(EAX));
  /* 109924fa call 0x10992930 */
  push32(0x109924ffu); f_10992930();
  /* 109924ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992502 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10992505 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10992507 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1099250a push ecx */
  push32((uint32_t)(ECX));
  /* 1099250b mov edx, dword ptr [0x109b18c0] */
  EDX = (r32((uint32_t)(0x109b18c0)));
  /* 10992511 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10992513 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10992515 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1099251b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10992521 push edx */
  push32((uint32_t)(EDX));
  /* 10992522 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10992525 push eax */
  push32((uint32_t)(EAX));
  /* 10992526 call dword ptr [0x109b18dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b18dc))), 0x1099252cu);
  /* 1099252c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1099252e jne 0x10992541 */
  if (!C.zf) goto L_10992541;
  /* 10992530 mov dword ptr [0x109b18d4], 0 */
  w32((uint32_t)(0x109b18d4), (0x0u));
  /* 1099253a mov eax, 1 */
  EAX = (0x1u);
  /* 1099253f jmp 0x10992596 */
  goto L_10992596;
L_10992541:;
  /* 10992541 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10992544 push ecx */
  push32((uint32_t)(ECX));
  /* 10992545 mov edx, dword ptr [0x109b18d0] */
  EDX = (r32((uint32_t)(0x109b18d0)));
  /* 1099254b push edx */
  push32((uint32_t)(EDX));
  /* 1099254c call 0x10994570 */
  push32(0x10992551u); f_10994570();
  /* 10992551 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992554 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10992556 jne 0x10992589 */
  if (!C.zf) goto L_10992589;
  /* 10992558 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1099255b push eax */
  push32((uint32_t)(EAX));
  /* 1099255c call 0x10992670 */
  push32(0x10992561u); f_10992670();
  /* 10992561 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992564 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10992566 je 0x10992589 */
  if (C.zf) goto L_10992589;
  /* 10992568 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1099256b mov dword ptr [0x109b18d8], ecx */
  w32((uint32_t)(0x109b18d8), (ECX));
  /* 10992571 mov edx, dword ptr [0x109b18d8] */
  EDX = (r32((uint32_t)(0x109b18d8)));
  /* 10992577 mov dword ptr [0x109b18bc], edx */
  w32((uint32_t)(0x109b18bc), (EDX));
  /* 1099257d mov eax, dword ptr [0x109b18d4] */
  EAX = (r32((uint32_t)(0x109b18d4)));
  /* 10992582 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10992584 mov dword ptr [0x109b18d4], eax */
  w32((uint32_t)(0x109b18d4), (EAX));
L_10992589:;
  /* 10992589 mov eax, dword ptr [0x109b18d4] */
  EAX = (r32((uint32_t)(0x109b18d4)));
  /* 1099258e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10992591 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10992593 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10992595 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10992596:;
  /* 10992596 mov esp, ebp */
  ESP = (EBP);
  /* 10992598 pop ebp */
  EBP = (pop32());
  /* 10992599 ret 4 */
  ESPCHK(0x109924f0u, _esp0);
  ESP += 8; return;
}

/* FUN_100125a0 @ 0x109925a0 (43 bytes, 11 insns) */
void f_109925a0(void) {
  FTRACE(0x109925a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109925a0 push ebp */
  push32((uint32_t)(EBP));
  /* 109925a1 mov ebp, esp */
  EBP = (ESP);
  /* 109925a3 mov eax, dword ptr [0x109b18d4] */
  EAX = (r32((uint32_t)(0x109b18d4)));
  /* 109925a8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 109925ad mov dword ptr [0x109b18d4], eax */
  w32((uint32_t)(0x109b18d4), (EAX));
  /* 109925b2 call dword ptr [0x109b42d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42d0))), 0x109925b8u);
  /* 109925b8 mov dword ptr [0x109b18d8], eax */
  w32((uint32_t)(0x109b18d8), (EAX));
  /* 109925bd mov ecx, dword ptr [0x109b18d8] */
  ECX = (r32((uint32_t)(0x109b18d8)));
  /* 109925c3 mov dword ptr [0x109b18bc], ecx */
  w32((uint32_t)(0x109b18bc), (ECX));
  /* 109925c9 pop ebp */
  EBP = (pop32());
  /* 109925ca ret  */
  ESPCHK(0x109925a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100125d0 @ 0x109925d0 (155 bytes, 57 insns) */
void f_109925d0(void) {
  FTRACE(0x109925d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109925d0 push ebp */
  push32((uint32_t)(EBP));
  /* 109925d1 mov ebp, esp */
  EBP = (ESP);
  /* 109925d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109925d6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109925da je 0x109925fb */
  if (C.zf) goto L_109925fb;
  /* 109925dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109925df movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109925e2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109925e4 je 0x109925fb */
  if (C.zf) goto L_109925fb;
  /* 109925e6 push 0x109ada9c */
  push32((uint32_t)(0x109ada9cu));
  /* 109925eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109925ee push edx */
  push32((uint32_t)(EDX));
  /* 109925ef call 0x10991b30 */
  push32(0x109925f4u); f_10991b30();
  /* 109925f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109925f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109925f9 jne 0x10992623 */
  if (!C.zf) goto L_10992623;
L_109925fb:;
  /* 109925fb push 8 */
  push32((uint32_t)(0x8u));
  /* 109925fd lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10992600 push eax */
  push32((uint32_t)(EAX));
  /* 10992601 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10992606 mov ecx, dword ptr [0x109b18d8] */
  ECX = (r32((uint32_t)(0x109b18d8)));
  /* 1099260c push ecx */
  push32((uint32_t)(ECX));
  /* 1099260d call dword ptr [0x109b18dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b18dc))), 0x10992613u);
  /* 10992613 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10992615 jne 0x1099261b */
  if (!C.zf) goto L_1099261b;
  /* 10992617 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10992619 jmp 0x10992667 */
  goto L_10992667;
L_1099261b:;
  /* 1099261b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 1099261e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10992621 jmp 0x1099265b */
  goto L_1099265b;
L_10992623:;
  /* 10992623 push 0x109ada98 */
  push32((uint32_t)(0x109ada98u));
  /* 10992628 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1099262b push eax */
  push32((uint32_t)(EAX));
  /* 1099262c call 0x10991b30 */
  push32(0x10992631u); f_10991b30();
  /* 10992631 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992634 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10992636 jne 0x1099265b */
  if (!C.zf) goto L_1099265b;
  /* 10992638 push 8 */
  push32((uint32_t)(0x8u));
  /* 1099263a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1099263d push ecx */
  push32((uint32_t)(ECX));
  /* 1099263e push 0xb */
  push32((uint32_t)(0xbu));
  /* 10992640 mov edx, dword ptr [0x109b18d8] */
  EDX = (r32((uint32_t)(0x109b18d8)));
  /* 10992646 push edx */
  push32((uint32_t)(EDX));
  /* 10992647 call dword ptr [0x109b18dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b18dc))), 0x1099264du);
  /* 1099264d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1099264f jne 0x10992655 */
  if (!C.zf) goto L_10992655;
  /* 10992651 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10992653 jmp 0x10992667 */
  goto L_10992667;
L_10992655:;
  /* 10992655 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10992658 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1099265b:;
  /* 1099265b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1099265e push ecx */
  push32((uint32_t)(ECX));
  /* 1099265f call 0x10994750 */
  push32(0x10992664u); f_10994750();
  /* 10992664 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10992667:;
  /* 10992667 mov esp, ebp */
  ESP = (EBP);
  /* 10992669 pop ebp */
  EBP = (pop32());
  /* 1099266a ret  */
  ESPCHK(0x109925d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012670 @ 0x10992670 (79 bytes, 26 insns) */
void f_10992670(void) {
  FTRACE(0x10992670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10992670 push ebp */
  push32((uint32_t)(EBP));
  /* 10992671 mov ebp, esp */
  EBP = (ESP);
  /* 10992673 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10992676 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 1099267a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1099267e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10992685 jmp 0x10992690 */
  goto L_10992690;
L_10992687:;
  /* 10992687 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1099268a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099268d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10992690:;
  /* 10992690 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992694 jae 0x109926b6 */
  if (!C.cf) goto L_109926b6;
  /* 10992696 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10992699 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1099269f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109926a2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109926a4 mov cx, word ptr [eax*2 + 0x109b09c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x109b09c4)));
  /* 109926ac cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109926ae jne 0x109926b4 */
  if (!C.zf) goto L_109926b4;
  /* 109926b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109926b2 jmp 0x109926bb */
  goto L_109926bb;
L_109926b4:;
  /* 109926b4 jmp 0x10992687 */
  goto L_10992687;
L_109926b6:;
  /* 109926b6 mov eax, 1 */
  EAX = (0x1u);
L_109926bb:;
  /* 109926bb mov esp, ebp */
  ESP = (EBP);
  /* 109926bd pop ebp */
  EBP = (pop32());
  /* 109926be ret  */
  ESPCHK(0x10992670u, _esp0);
  ESP += 4; return;
}

/* FUN_100126c0 @ 0x109926c0 (135 bytes, 48 insns) */
void f_109926c0(void) {
  FTRACE(0x109926c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109926c0 push ebp */
  push32((uint32_t)(EBP));
  /* 109926c1 mov ebp, esp */
  EBP = (ESP);
  /* 109926c3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109926c6 push esi */
  push32((uint32_t)(ESI));
  /* 109926c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109926ca and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109926cf and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 109926d4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109926d9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 109926dc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109926e1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109926e4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 109926e6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 109926e9 push ecx */
  push32((uint32_t)(ECX));
  /* 109926ea push 1 */
  push32((uint32_t)(0x1u));
  /* 109926ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109926ef push edx */
  push32((uint32_t)(EDX));
  /* 109926f0 call dword ptr [0x109b18dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b18dc))), 0x109926f6u);
  /* 109926f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109926f8 jne 0x109926fe */
  if (!C.zf) goto L_109926fe;
  /* 109926fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109926fc jmp 0x10992742 */
  goto L_10992742;
L_109926fe:;
  /* 109926fe lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 10992701 push eax */
  push32((uint32_t)(EAX));
  /* 10992702 call 0x10992930 */
  push32(0x10992707u); f_10992930();
  /* 10992707 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1099270a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099270d je 0x1099273d */
  if (C.zf) goto L_1099273d;
  /* 1099270f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992713 je 0x1099273d */
  if (C.zf) goto L_1099273d;
  /* 10992715 mov ecx, dword ptr [0x109b18cc] */
  ECX = (r32((uint32_t)(0x109b18cc)));
  /* 1099271b push ecx */
  push32((uint32_t)(ECX));
  /* 1099271c call 0x109929b0 */
  push32(0x10992721u); f_109929b0();
  /* 10992721 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992724 mov esi, eax */
  ESI = (EAX);
  /* 10992726 mov edx, dword ptr [0x109b18cc] */
  EDX = (r32((uint32_t)(0x109b18cc)));
  /* 1099272c push edx */
  push32((uint32_t)(EDX));
  /* 1099272d call 0x10988cd0 */
  push32(0x10992732u); f_10988cd0();
  /* 10992732 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992735 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992737 jne 0x1099273d */
  if (!C.zf) goto L_1099273d;
  /* 10992739 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1099273b jmp 0x10992742 */
  goto L_10992742;
L_1099273d:;
  /* 1099273d mov eax, 1 */
  EAX = (0x1u);
L_10992742:;
  /* 10992742 pop esi */
  ESI = (pop32());
  /* 10992743 mov esp, ebp */
  ESP = (EBP);
  /* 10992745 pop ebp */
  EBP = (pop32());
  /* 10992746 ret  */
  ESPCHK(0x109926c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012750 @ 0x10992750 (77 bytes, 18 insns) */
void f_10992750(void) {
  FTRACE(0x10992750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10992750 push ebp */
  push32((uint32_t)(EBP));
  /* 10992751 mov ebp, esp */
  EBP = (ESP);
  /* 10992753 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10992759 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 10992763 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 10992769 push eax */
  push32((uint32_t)(EAX));
  /* 1099276a call dword ptr [0x109b42cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42cc))), 0x10992770u);
  /* 10992770 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10992772 je 0x10992789 */
  if (C.zf) goto L_10992789;
  /* 10992774 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099277b jne 0x10992789 */
  if (!C.zf) goto L_10992789;
  /* 1099277d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 10992787 jmp 0x10992793 */
  goto L_10992793;
L_10992789:;
  /* 10992789 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_10992793:;
  /* 10992793 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10992799 mov esp, ebp */
  ESP = (EBP);
  /* 1099279b pop ebp */
  EBP = (pop32());
  /* 1099279c ret  */
  ESPCHK(0x10992750u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x109927a0 (388 bytes, 118 insns) */
void f_109927a0(void) {
  FTRACE(0x109927a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109927a0 push ebp */
  push32((uint32_t)(EBP));
  /* 109927a1 mov ebp, esp */
  EBP = (ESP);
  /* 109927a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109927a6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 109927ad mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 109927b4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_109927bb:;
  /* 109927bb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109927be cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109927c1 jg 0x10992908 */
  if ((!C.zf&&C.sf==C.of)) goto L_10992908;
  /* 109927c7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109927ca add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109927cd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 109927ce sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109927d0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 109927d2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109927d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109927d8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109927db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109927de cmp edx, dword ptr [ecx + 0x109b0520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x109b0520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109927e4 jne 0x109928de */
  if (!C.zf) goto L_109928de;
  /* 109927ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109927ed mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 109927f0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109927f4 ja 0x10992817 */
  if ((!C.cf&&!C.zf)) goto L_10992817;
  /* 109927f6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109927fa je 0x10992889 */
  if (C.zf) goto L_10992889;
  /* 10992800 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992804 je 0x10992834 */
  if (C.zf) goto L_10992834;
  /* 10992806 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099280a je 0x10992856 */
  if (C.zf) goto L_10992856;
  /* 1099280c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992810 je 0x10992878 */
  if (C.zf) goto L_10992878;
  /* 10992812 jmp 0x109928a8 */
  goto L_109928a8;
L_10992817:;
  /* 10992817 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099281e je 0x10992845 */
  if (C.zf) goto L_10992845;
  /* 10992820 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992827 je 0x10992867 */
  if (C.zf) goto L_10992867;
  /* 10992829 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992830 je 0x1099289a */
  if (C.zf) goto L_1099289a;
  /* 10992832 jmp 0x109928a8 */
  goto L_109928a8;
L_10992834:;
  /* 10992834 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10992837 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1099283a add ecx, 0x109b0524 */
  { uint32_t _a=(ECX),_b=(0x109b0524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10992840 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10992843 jmp 0x109928a8 */
  goto L_109928a8;
L_10992845:;
  /* 10992845 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10992848 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1099284b mov eax, dword ptr [edx + 0x109b052c] */
  EAX = (r32((uint32_t)(EDX + 0x109b052c)));
  /* 10992851 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10992854 jmp 0x109928a8 */
  goto L_109928a8;
L_10992856:;
  /* 10992856 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10992859 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1099285c add ecx, 0x109b0530 */
  { uint32_t _a=(ECX),_b=(0x109b0530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10992862 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10992865 jmp 0x109928a8 */
  goto L_109928a8;
L_10992867:;
  /* 10992867 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1099286a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1099286d mov eax, dword ptr [edx + 0x109b0534] */
  EAX = (r32((uint32_t)(EDX + 0x109b0534)));
  /* 10992873 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10992876 jmp 0x109928a8 */
  goto L_109928a8;
L_10992878:;
  /* 10992878 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1099287b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1099287e add ecx, 0x109b0538 */
  { uint32_t _a=(ECX),_b=(0x109b0538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10992884 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10992887 jmp 0x109928a8 */
  goto L_109928a8;
L_10992889:;
  /* 10992889 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1099288c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1099288f add edx, 0x109b053c */
  { uint32_t _a=(EDX),_b=(0x109b053cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10992895 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10992898 jmp 0x109928a8 */
  goto L_109928a8;
L_1099289a:;
  /* 1099289a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1099289d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109928a0 add eax, 0x109b0544 */
  { uint32_t _a=(EAX),_b=(0x109b0544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109928a5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_109928a8:;
  /* 109928a8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109928ac je 0x109928b4 */
  if (C.zf) goto L_109928b4;
  /* 109928ae cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109928b2 jge 0x109928b6 */
  if ((C.sf==C.of)) goto L_109928b6;
L_109928b4:;
  /* 109928b4 jmp 0x10992908 */
  goto L_10992908;
L_109928b6:;
  /* 109928b6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109928b9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109928bc push ecx */
  push32((uint32_t)(ECX));
  /* 109928bd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109928c0 push edx */
  push32((uint32_t)(EDX));
  /* 109928c1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109928c4 push eax */
  push32((uint32_t)(EAX));
  /* 109928c5 call 0x109896c0 */
  push32(0x109928cau); f_109896c0();
  /* 109928ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109928cd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109928d0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109928d3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 109928d7 mov eax, 1 */
  EAX = (0x1u);
  /* 109928dc jmp 0x1099291e */
  goto L_1099291e;
L_109928de:;
  /* 109928de mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109928e1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109928e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109928e7 cmp eax, dword ptr [edx + 0x109b0520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x109b0520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109928ed jae 0x109928fa */
  if (!C.cf) goto L_109928fa;
  /* 109928ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109928f2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109928f5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109928f8 jmp 0x10992903 */
  goto L_10992903;
L_109928fa:;
  /* 109928fa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109928fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10992900 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10992903:;
  /* 10992903 jmp 0x109927bb */
  goto L_109927bb;
L_10992908:;
  /* 10992908 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1099290b push eax */
  push32((uint32_t)(EAX));
  /* 1099290c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1099290f push ecx */
  push32((uint32_t)(ECX));
  /* 10992910 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10992913 push edx */
  push32((uint32_t)(EDX));
  /* 10992914 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10992917 push eax */
  push32((uint32_t)(EAX));
  /* 10992918 call dword ptr [0x109b42d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42d8))), 0x1099291eu);
L_1099291e:;
  /* 1099291e mov esp, ebp */
  ESP = (EBP);
  /* 10992920 pop ebp */
  EBP = (pop32());
  /* 10992921 ret 0x10 */
  ESPCHK(0x109927a0u, _esp0);
  ESP += 20; return;
}

/* FUN_10012930 @ 0x10992930 (118 bytes, 42 insns) */
void f_10992930(void) {
  FTRACE(0x10992930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10992930 push ebp */
  push32((uint32_t)(EBP));
  /* 10992931 mov ebp, esp */
  EBP = (ESP);
  /* 10992933 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10992936 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1099293d:;
  /* 1099293d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10992940 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10992942 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10992945 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10992949 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1099294c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1099294f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10992952 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10992954 je 0x1099299f */
  if (C.zf) goto L_1099299f;
  /* 10992956 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1099295a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1099295d jl 0x10992972 */
  if ((C.sf!=C.of)) goto L_10992972;
  /* 1099295f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10992963 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992966 jg 0x10992972 */
  if ((!C.zf&&C.sf==C.of)) goto L_10992972;
  /* 10992968 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1099296b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1099296d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10992970 jmp 0x1099298c */
  goto L_1099298c;
L_10992972:;
  /* 10992972 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10992976 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992979 jl 0x1099298c */
  if ((C.sf!=C.of)) goto L_1099298c;
  /* 1099297b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1099297f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992982 jg 0x1099298c */
  if ((!C.zf&&C.sf==C.of)) goto L_1099298c;
  /* 10992984 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10992987 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10992989 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_1099298c:;
  /* 1099298c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1099298f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10992992 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10992996 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1099299a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1099299d jmp 0x1099293d */
  goto L_1099293d;
L_1099299f:;
  /* 1099299f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109929a2 mov esp, ebp */
  ESP = (EBP);
  /* 109929a4 pop ebp */
  EBP = (pop32());
  /* 109929a5 ret  */
  ESPCHK(0x10992930u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x109929b0 (101 bytes, 36 insns) */
void f_109929b0(void) {
  FTRACE(0x109929b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109929b0 push ebp */
  push32((uint32_t)(EBP));
  /* 109929b1 mov ebp, esp */
  EBP = (ESP);
  /* 109929b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109929b6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 109929bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109929c0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 109929c2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 109929c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109929c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109929cb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_109929ce:;
  /* 109929ce movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 109929d2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109929d5 jl 0x109929e0 */
  if ((C.sf!=C.of)) goto L_109929e0;
  /* 109929d7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 109929db cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109929de jle 0x109929f2 */
  if ((C.zf||C.sf!=C.of)) goto L_109929f2;
L_109929e0:;
  /* 109929e0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 109929e4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109929e7 jl 0x10992a0e */
  if ((C.sf!=C.of)) goto L_10992a0e;
  /* 109929e9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 109929ed cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109929f0 jg 0x10992a0e */
  if ((!C.zf&&C.sf==C.of)) goto L_10992a0e;
L_109929f2:;
  /* 109929f2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109929f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109929f8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109929fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109929fe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10992a00 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10992a03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10992a06 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10992a09 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10992a0c jmp 0x109929ce */
  goto L_109929ce;
L_10992a0e:;
  /* 10992a0e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10992a11 mov esp, ebp */
  ESP = (EBP);
  /* 10992a13 pop ebp */
  EBP = (pop32());
  /* 10992a14 ret  */
  ESPCHK(0x109929b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a20 @ 0x10992a20 (122 bytes, 39 insns) */
void f_10992a20(void) {
  FTRACE(0x10992a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10992a20 push ebp */
  push32((uint32_t)(EBP));
  /* 10992a21 mov ebp, esp */
  EBP = (ESP);
  /* 10992a23 push ecx */
  push32((uint32_t)(ECX));
  /* 10992a24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10992a27 cmp eax, dword ptr [0x109b315c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109b315c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992a2d jae 0x10992a51 */
  if (!C.cf) goto L_10992a51;
  /* 10992a2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10992a32 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10992a35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10992a38 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10992a3b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10992a3e mov eax, dword ptr [ecx*4 + 0x109b3020] */
  EAX = (r32((uint32_t)(ECX*4 + 0x109b3020)));
  /* 10992a45 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10992a4a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10992a4d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10992a4f jne 0x10992a6c */
  if (!C.zf) goto L_10992a6c;
L_10992a51:;
  /* 10992a51 call 0x1098dd70 */
  push32(0x10992a56u); f_1098dd70();
  /* 10992a56 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10992a5c call 0x1098dd80 */
  push32(0x10992a61u); f_1098dd80();
  /* 10992a61 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10992a67 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10992a6a jmp 0x10992a96 */
  goto L_10992a96;
L_10992a6c:;
  /* 10992a6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10992a6f push edx */
  push32((uint32_t)(EDX));
  /* 10992a70 call 0x1098f590 */
  push32(0x10992a75u); f_1098f590();
  /* 10992a75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992a78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10992a7b push eax */
  push32((uint32_t)(EAX));
  /* 10992a7c call 0x10992aa0 */
  push32(0x10992a81u); f_10992aa0();
  /* 10992a81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992a84 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10992a87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10992a8a push ecx */
  push32((uint32_t)(ECX));
  /* 10992a8b call 0x1098f620 */
  push32(0x10992a90u); f_1098f620();
  /* 10992a90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992a93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10992a96:;
  /* 10992a96 mov esp, ebp */
  ESP = (EBP);
  /* 10992a98 pop ebp */
  EBP = (pop32());
  /* 10992a99 ret  */
  ESPCHK(0x10992a20u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x10992aa0 (170 bytes, 59 insns) */
void f_10992aa0(void) {
  FTRACE(0x10992aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10992aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10992aa1 mov ebp, esp */
  EBP = (ESP);
  /* 10992aa3 push ecx */
  push32((uint32_t)(ECX));
  /* 10992aa4 push esi */
  push32((uint32_t)(ESI));
  /* 10992aa5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10992aa8 push eax */
  push32((uint32_t)(EAX));
  /* 10992aa9 call 0x1098f410 */
  push32(0x10992aaeu); f_1098f410();
  /* 10992aae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992ab1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992ab4 je 0x10992af3 */
  if (C.zf) goto L_10992af3;
  /* 10992ab6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992aba je 0x10992ac2 */
  if (C.zf) goto L_10992ac2;
  /* 10992abc cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992ac0 jne 0x10992adc */
  if (!C.zf) goto L_10992adc;
L_10992ac2:;
  /* 10992ac2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10992ac4 call 0x1098f410 */
  push32(0x10992ac9u); f_1098f410();
  /* 10992ac9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992acc mov esi, eax */
  ESI = (EAX);
  /* 10992ace push 2 */
  push32((uint32_t)(0x2u));
  /* 10992ad0 call 0x1098f410 */
  push32(0x10992ad5u); f_1098f410();
  /* 10992ad5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992ad8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992ada je 0x10992af3 */
  if (C.zf) goto L_10992af3;
L_10992adc:;
  /* 10992adc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10992adf push ecx */
  push32((uint32_t)(ECX));
  /* 10992ae0 call 0x1098f410 */
  push32(0x10992ae5u); f_1098f410();
  /* 10992ae5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992ae8 push eax */
  push32((uint32_t)(EAX));
  /* 10992ae9 call dword ptr [0x109b42c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42c8))), 0x10992aefu);
  /* 10992aef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10992af1 je 0x10992afc */
  if (C.zf) goto L_10992afc;
L_10992af3:;
  /* 10992af3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10992afa jmp 0x10992b05 */
  goto L_10992b05;
L_10992afc:;
  /* 10992afc call dword ptr [0x109b439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b439c))), 0x10992b02u);
  /* 10992b02 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10992b05:;
  /* 10992b05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10992b08 push edx */
  push32((uint32_t)(EDX));
  /* 10992b09 call 0x1098f330 */
  push32(0x10992b0eu); f_1098f330();
  /* 10992b0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992b11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10992b14 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10992b17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10992b1a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10992b1d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10992b20 mov edx, dword ptr [eax*4 + 0x109b3020] */
  EDX = (r32((uint32_t)(EAX*4 + 0x109b3020)));
  /* 10992b27 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 10992b2c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992b30 je 0x10992b43 */
  if (C.zf) goto L_10992b43;
  /* 10992b32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10992b35 push eax */
  push32((uint32_t)(EAX));
  /* 10992b36 call 0x1098dcd0 */
  push32(0x10992b3bu); f_1098dcd0();
  /* 10992b3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992b3e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10992b41 jmp 0x10992b45 */
  goto L_10992b45;
L_10992b43:;
  /* 10992b43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10992b45:;
  /* 10992b45 pop esi */
  ESI = (pop32());
  /* 10992b46 mov esp, ebp */
  ESP = (EBP);
  /* 10992b48 pop ebp */
  EBP = (pop32());
  /* 10992b49 ret  */
  ESPCHK(0x10992aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b50 @ 0x10992b50 (146 bytes, 52 insns) */
void f_10992b50(void) {
  FTRACE(0x10992b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10992b50 push ebp */
  push32((uint32_t)(EBP));
  /* 10992b51 mov ebp, esp */
  EBP = (ESP);
  /* 10992b53 push ebx */
  push32((uint32_t)(EBX));
  /* 10992b54 push esi */
  push32((uint32_t)(ESI));
  /* 10992b55 push edi */
  push32((uint32_t)(EDI));
L_10992b56:;
  /* 10992b56 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992b5a jne 0x10992b7a */
  if (!C.zf) goto L_10992b7a;
  /* 10992b5c push 0x109ad3d8 */
  push32((uint32_t)(0x109ad3d8u));
  /* 10992b61 push 0 */
  push32((uint32_t)(0x0u));
  /* 10992b63 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10992b65 push 0x109adaa0 */
  push32((uint32_t)(0x109adaa0u));
  /* 10992b6a push 2 */
  push32((uint32_t)(0x2u));
  /* 10992b6c call 0x10984f60 */
  push32(0x10992b71u); f_10984f60();
  /* 10992b71 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992b74 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10992b77 jne 0x10992b7a */
  if (!C.zf) goto L_10992b7a;
  /* 10992b79 int3  */
  x86_unimpl("int3 @ 0x10992b79");
L_10992b7a:;
  /* 10992b7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10992b7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10992b7e jne 0x10992b56 */
  if (!C.zf) goto L_10992b56;
  /* 10992b80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10992b83 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10992b86 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 10992b8c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10992b8e je 0x10992bdd */
  if (C.zf) goto L_10992bdd;
  /* 10992b90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10992b93 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10992b96 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10992b99 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10992b9b je 0x10992bdd */
  if (C.zf) goto L_10992bdd;
  /* 10992b9d push 2 */
  push32((uint32_t)(0x2u));
  /* 10992b9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10992ba2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10992ba5 push eax */
  push32((uint32_t)(EAX));
  /* 10992ba6 call 0x10986930 */
  push32(0x10992babu); f_10986930();
  /* 10992bab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10992bae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10992bb1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10992bb4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 10992bba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10992bbd mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10992bc0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10992bc3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10992bc9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10992bcc mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10992bd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10992bd6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_10992bdd:;
  /* 10992bdd pop edi */
  EDI = (pop32());
  /* 10992bde pop esi */
  ESI = (pop32());
  /* 10992bdf pop ebx */
  EBX = (pop32());
  /* 10992be0 pop ebp */
  EBP = (pop32());
  /* 10992be1 ret  */
  ESPCHK(0x10992b50u, _esp0);
  ESP += 4; return;
}

