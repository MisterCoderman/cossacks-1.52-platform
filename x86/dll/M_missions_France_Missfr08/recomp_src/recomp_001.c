#include "recomp.h"

/* FUN_10007f30 @ 0x107a7f30 (490 bytes, 165 insns) */
void f_107a7f30(void) {
  FTRACE(0x107a7f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a7f30 push ebp */
  push32((uint32_t)(EBP));
  /* 107a7f31 mov ebp, esp */
  EBP = (ESP);
  /* 107a7f33 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a7f36 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7f3a jne 0x107a7f4d */
  if (!C.zf) goto L_107a7f4d;
  /* 107a7f3c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a7f3f push eax */
  push32((uint32_t)(EAX));
  /* 107a7f40 call 0x107a7d80 */
  push32(0x107a7f45u); f_107a7d80();
  /* 107a7f45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7f48 jmp 0x107a8116 */
  goto L_107a8116;
L_107a7f4d:;
  /* 107a7f4d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7f51 jne 0x107a7f66 */
  if (!C.zf) goto L_107a7f66;
  /* 107a7f53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a7f56 push ecx */
  push32((uint32_t)(ECX));
  /* 107a7f57 call 0x107a8120 */
  push32(0x107a7f5cu); f_107a8120();
  /* 107a7f5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7f5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a7f61 jmp 0x107a8116 */
  goto L_107a8116;
L_107a7f66:;
  /* 107a7f66 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107a7f6d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7f71 ja 0x107a80e9 */
  if ((!C.cf&&!C.zf)) goto L_107a80e9;
  /* 107a7f77 push 9 */
  push32((uint32_t)(0x9u));
  /* 107a7f79 call 0x107a79b0 */
  push32(0x107a7f7eu); f_107a79b0();
  /* 107a7f7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7f81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a7f84 push edx */
  push32((uint32_t)(EDX));
  /* 107a7f85 call 0x107a82b0 */
  push32(0x107a7f8au); f_107a82b0();
  /* 107a7f8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7f8d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107a7f90 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7f94 je 0x107a80ac */
  if (C.zf) goto L_107a80ac;
  /* 107a7f9a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a7f9d cmp eax, dword ptr [0x107cdc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x107cdc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7fa3 ja 0x107a8020 */
  if ((!C.cf&&!C.zf)) goto L_107a8020;
  /* 107a7fa5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a7fa8 push ecx */
  push32((uint32_t)(ECX));
  /* 107a7fa9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a7fac push edx */
  push32((uint32_t)(EDX));
  /* 107a7fad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a7fb0 push eax */
  push32((uint32_t)(EAX));
  /* 107a7fb1 call 0x107a9180 */
  push32(0x107a7fb6u); f_107a9180();
  /* 107a7fb6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7fb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a7fbb je 0x107a7fc5 */
  if (C.zf) goto L_107a7fc5;
  /* 107a7fbd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a7fc0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107a7fc3 jmp 0x107a8020 */
  goto L_107a8020;
L_107a7fc5:;
  /* 107a7fc5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a7fc8 push edx */
  push32((uint32_t)(EDX));
  /* 107a7fc9 call 0x107a8940 */
  push32(0x107a7fceu); f_107a8940();
  /* 107a7fce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7fd1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107a7fd4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7fd8 je 0x107a8020 */
  if (C.zf) goto L_107a8020;
  /* 107a7fda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a7fdd mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 107a7fe0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a7fe3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107a7fe6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a7fe9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7fec jae 0x107a7ff6 */
  if (!C.cf) goto L_107a7ff6;
  /* 107a7fee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a7ff1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 107a7ff4 jmp 0x107a7ffc */
  goto L_107a7ffc;
L_107a7ff6:;
  /* 107a7ff6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a7ff9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_107a7ffc:;
  /* 107a7ffc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a7fff push edx */
  push32((uint32_t)(EDX));
  /* 107a8000 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a8003 push eax */
  push32((uint32_t)(EAX));
  /* 107a8004 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a8007 push ecx */
  push32((uint32_t)(ECX));
  /* 107a8008 call 0x107aa890 */
  push32(0x107a800du); f_107aa890();
  /* 107a800d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8010 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a8013 push edx */
  push32((uint32_t)(EDX));
  /* 107a8014 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a8017 push eax */
  push32((uint32_t)(EAX));
  /* 107a8018 call 0x107a8370 */
  push32(0x107a801du); f_107a8370();
  /* 107a801d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a8020:;
  /* 107a8020 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8024 jne 0x107a80a0 */
  if (!C.zf) goto L_107a80a0;
  /* 107a8026 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a802a jne 0x107a8033 */
  if (!C.zf) goto L_107a8033;
  /* 107a802c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_107a8033:;
  /* 107a8033 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a8036 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8039 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 107a803c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 107a803f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a8042 push edx */
  push32((uint32_t)(EDX));
  /* 107a8043 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a8045 mov eax, dword ptr [0x107d0ecc] */
  EAX = (r32((uint32_t)(0x107d0ecc)));
  /* 107a804a push eax */
  push32((uint32_t)(EAX));
  /* 107a804b call dword ptr [0x107d238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d238c))), 0x107a8051u);
  /* 107a8051 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107a8054 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8058 je 0x107a80a0 */
  if (C.zf) goto L_107a80a0;
  /* 107a805a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a805d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 107a8060 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a8063 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107a8066 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a8069 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a806c jae 0x107a8076 */
  if (!C.cf) goto L_107a8076;
  /* 107a806e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a8071 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 107a8074 jmp 0x107a807c */
  goto L_107a807c;
L_107a8076:;
  /* 107a8076 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a8079 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_107a807c:;
  /* 107a807c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a807f push eax */
  push32((uint32_t)(EAX));
  /* 107a8080 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a8083 push ecx */
  push32((uint32_t)(ECX));
  /* 107a8084 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a8087 push edx */
  push32((uint32_t)(EDX));
  /* 107a8088 call 0x107aa890 */
  push32(0x107a808du); f_107aa890();
  /* 107a808d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8090 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a8093 push eax */
  push32((uint32_t)(EAX));
  /* 107a8094 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a8097 push ecx */
  push32((uint32_t)(ECX));
  /* 107a8098 call 0x107a8370 */
  push32(0x107a809du); f_107a8370();
  /* 107a809d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a80a0:;
  /* 107a80a0 push 9 */
  push32((uint32_t)(0x9u));
  /* 107a80a2 call 0x107a7a50 */
  push32(0x107a80a7u); f_107a7a50();
  /* 107a80a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a80aa jmp 0x107a80e9 */
  goto L_107a80e9;
L_107a80ac:;
  /* 107a80ac push 9 */
  push32((uint32_t)(0x9u));
  /* 107a80ae call 0x107a7a50 */
  push32(0x107a80b3u); f_107a7a50();
  /* 107a80b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a80b6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a80ba jne 0x107a80c3 */
  if (!C.zf) goto L_107a80c3;
  /* 107a80bc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_107a80c3:;
  /* 107a80c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a80c6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a80c9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 107a80cc mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 107a80cf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a80d2 push eax */
  push32((uint32_t)(EAX));
  /* 107a80d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a80d6 push ecx */
  push32((uint32_t)(ECX));
  /* 107a80d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a80d9 mov edx, dword ptr [0x107d0ecc] */
  EDX = (r32((uint32_t)(0x107d0ecc)));
  /* 107a80df push edx */
  push32((uint32_t)(EDX));
  /* 107a80e0 call dword ptr [0x107d2334] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2334))), 0x107a80e6u);
  /* 107a80e6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_107a80e9:;
  /* 107a80e9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a80ed jne 0x107a80f8 */
  if (!C.zf) goto L_107a80f8;
  /* 107a80ef cmp dword ptr [0x107cf718], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf718))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a80f6 jne 0x107a80fd */
  if (!C.zf) goto L_107a80fd;
L_107a80f8:;
  /* 107a80f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a80fb jmp 0x107a8116 */
  goto L_107a8116;
L_107a80fd:;
  /* 107a80fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a8100 push eax */
  push32((uint32_t)(EAX));
  /* 107a8101 call 0x107a7cf0 */
  push32(0x107a8106u); f_107a7cf0();
  /* 107a8106 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8109 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a810b jne 0x107a8111 */
  if (!C.zf) goto L_107a8111;
  /* 107a810d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a810f jmp 0x107a8116 */
  goto L_107a8116;
L_107a8111:;
  /* 107a8111 jmp 0x107a7f66 */
  goto L_107a7f66;
L_107a8116:;
  /* 107a8116 mov esp, ebp */
  ESP = (EBP);
  /* 107a8118 pop ebp */
  EBP = (pop32());
  /* 107a8119 ret  */
  ESPCHK(0x107a7f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10008120 @ 0x107a8120 (104 bytes, 38 insns) */
void f_107a8120(void) {
  FTRACE(0x107a8120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a8120 push ebp */
  push32((uint32_t)(EBP));
  /* 107a8121 mov ebp, esp */
  EBP = (ESP);
  /* 107a8123 push ecx */
  push32((uint32_t)(ECX));
  /* 107a8124 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8128 jne 0x107a812c */
  if (!C.zf) goto L_107a812c;
  /* 107a812a jmp 0x107a8184 */
  goto L_107a8184;
L_107a812c:;
  /* 107a812c push 9 */
  push32((uint32_t)(0x9u));
  /* 107a812e call 0x107a79b0 */
  push32(0x107a8133u); f_107a79b0();
  /* 107a8133 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8136 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a8139 push eax */
  push32((uint32_t)(EAX));
  /* 107a813a call 0x107a82b0 */
  push32(0x107a813fu); f_107a82b0();
  /* 107a813f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8142 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a8145 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8149 je 0x107a8167 */
  if (C.zf) goto L_107a8167;
  /* 107a814b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a814e push ecx */
  push32((uint32_t)(ECX));
  /* 107a814f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a8152 push edx */
  push32((uint32_t)(EDX));
  /* 107a8153 call 0x107a8370 */
  push32(0x107a8158u); f_107a8370();
  /* 107a8158 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a815b push 9 */
  push32((uint32_t)(0x9u));
  /* 107a815d call 0x107a7a50 */
  push32(0x107a8162u); f_107a7a50();
  /* 107a8162 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8165 jmp 0x107a8184 */
  goto L_107a8184;
L_107a8167:;
  /* 107a8167 push 9 */
  push32((uint32_t)(0x9u));
  /* 107a8169 call 0x107a7a50 */
  push32(0x107a816eu); f_107a7a50();
  /* 107a816e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8171 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a8174 push eax */
  push32((uint32_t)(EAX));
  /* 107a8175 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a8177 mov ecx, dword ptr [0x107d0ecc] */
  ECX = (r32((uint32_t)(0x107d0ecc)));
  /* 107a817d push ecx */
  push32((uint32_t)(ECX));
  /* 107a817e call dword ptr [0x107d2370] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2370))), 0x107a8184u);
L_107a8184:;
  /* 107a8184 mov esp, ebp */
  ESP = (EBP);
  /* 107a8186 pop ebp */
  EBP = (pop32());
  /* 107a8187 ret  */
  ESPCHK(0x107a8120u, _esp0);
  ESP += 4; return;
}

/* FUN_10008190 @ 0x107a8190 (116 bytes, 34 insns) */
void f_107a8190(void) {
  FTRACE(0x107a8190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a8190 push ebp */
  push32((uint32_t)(EBP));
  /* 107a8191 mov ebp, esp */
  EBP = (ESP);
  /* 107a8193 push ecx */
  push32((uint32_t)(ECX));
  /* 107a8194 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 107a819b push 9 */
  push32((uint32_t)(0x9u));
  /* 107a819d call 0x107a79b0 */
  push32(0x107a81a2u); f_107a79b0();
  /* 107a81a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a81a5 call 0x107a98a0 */
  push32(0x107a81aau); f_107a98a0();
  /* 107a81aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a81ac jge 0x107a81b5 */
  if ((C.sf==C.of)) goto L_107a81b5;
  /* 107a81ae mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_107a81b5:;
  /* 107a81b5 push 9 */
  push32((uint32_t)(0x9u));
  /* 107a81b7 call 0x107a7a50 */
  push32(0x107a81bcu); f_107a7a50();
  /* 107a81bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a81bf push 0 */
  push32((uint32_t)(0x0u));
  /* 107a81c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a81c3 mov eax, dword ptr [0x107d0ecc] */
  EAX = (r32((uint32_t)(0x107d0ecc)));
  /* 107a81c8 push eax */
  push32((uint32_t)(EAX));
  /* 107a81c9 call dword ptr [0x107d2350] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2350))), 0x107a81cfu);
  /* 107a81cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a81d1 jne 0x107a81fd */
  if (!C.zf) goto L_107a81fd;
  /* 107a81d3 call dword ptr [0x107d2330] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2330))), 0x107a81d9u);
  /* 107a81d9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a81dc jne 0x107a81f6 */
  if (!C.zf) goto L_107a81f6;
  /* 107a81de call 0x107abe90 */
  push32(0x107a81e3u); f_107abe90();
  /* 107a81e3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 107a81e9 call 0x107abe80 */
  push32(0x107a81eeu); f_107abe80();
  /* 107a81ee mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 107a81f4 jmp 0x107a81fd */
  goto L_107a81fd;
L_107a81f6:;
  /* 107a81f6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_107a81fd:;
  /* 107a81fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a8200 mov esp, ebp */
  ESP = (EBP);
  /* 107a8202 pop ebp */
  EBP = (pop32());
  /* 107a8203 ret  */
  ESPCHK(0x107a8190u, _esp0);
  ESP += 4; return;
}

/* FUN_10008210 @ 0x107a8210 (10 bytes, 5 insns) */
void f_107a8210(void) {
  FTRACE(0x107a8210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a8210 push ebp */
  push32((uint32_t)(EBP));
  /* 107a8211 mov ebp, esp */
  EBP = (ESP);
  /* 107a8213 call 0x107a8190 */
  push32(0x107a8218u); f_107a8190();
  /* 107a8218 pop ebp */
  EBP = (pop32());
  /* 107a8219 ret  */
  ESPCHK(0x107a8210u, _esp0);
  ESP += 4; return;
}

/* FUN_10008220 @ 0x107a8220 (10 bytes, 5 insns) */
void f_107a8220(void) {
  FTRACE(0x107a8220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a8220 push ebp */
  push32((uint32_t)(EBP));
  /* 107a8221 mov ebp, esp */
  EBP = (ESP);
  /* 107a8223 mov eax, dword ptr [0x107cdc94] */
  EAX = (r32((uint32_t)(0x107cdc94)));
  /* 107a8228 pop ebp */
  EBP = (pop32());
  /* 107a8229 ret  */
  ESPCHK(0x107a8220u, _esp0);
  ESP += 4; return;
}

/* FUN_10008230 @ 0x107a8230 (31 bytes, 11 insns) */
void f_107a8230(void) {
  FTRACE(0x107a8230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a8230 push ebp */
  push32((uint32_t)(EBP));
  /* 107a8231 mov ebp, esp */
  EBP = (ESP);
  /* 107a8233 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a823a jbe 0x107a8240 */
  if ((C.cf||C.zf)) goto L_107a8240;
  /* 107a823c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a823e jmp 0x107a824d */
  goto L_107a824d;
L_107a8240:;
  /* 107a8240 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a8243 mov dword ptr [0x107cdc94], eax */
  w32((uint32_t)(0x107cdc94), (EAX));
  /* 107a8248 mov eax, 1 */
  EAX = (0x1u);
L_107a824d:;
  /* 107a824d pop ebp */
  EBP = (pop32());
  /* 107a824e ret  */
  ESPCHK(0x107a8230u, _esp0);
  ESP += 4; return;
}

/* FUN_10008250 @ 0x107a8250 (89 bytes, 20 insns) */
void f_107a8250(void) {
  FTRACE(0x107a8250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a8250 push ebp */
  push32((uint32_t)(EBP));
  /* 107a8251 mov ebp, esp */
  EBP = (ESP);
  /* 107a8253 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 107a8258 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a825a mov eax, dword ptr [0x107d0ecc] */
  EAX = (r32((uint32_t)(0x107d0ecc)));
  /* 107a825f push eax */
  push32((uint32_t)(EAX));
  /* 107a8260 call dword ptr [0x107d238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d238c))), 0x107a8266u);
  /* 107a8266 mov dword ptr [0x107d0ec8], eax */
  w32((uint32_t)(0x107d0ec8), (EAX));
  /* 107a826b cmp dword ptr [0x107d0ec8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107d0ec8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8272 jne 0x107a8278 */
  if (!C.zf) goto L_107a8278;
  /* 107a8274 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a8276 jmp 0x107a82a7 */
  goto L_107a82a7;
L_107a8278:;
  /* 107a8278 mov ecx, dword ptr [0x107d0ec8] */
  ECX = (r32((uint32_t)(0x107d0ec8)));
  /* 107a827e mov dword ptr [0x107d0ebc], ecx */
  w32((uint32_t)(0x107d0ebc), (ECX));
  /* 107a8284 mov dword ptr [0x107d0ec0], 0 */
  w32((uint32_t)(0x107d0ec0), (0x0u));
  /* 107a828e mov dword ptr [0x107d0ec4], 0 */
  w32((uint32_t)(0x107d0ec4), (0x0u));
  /* 107a8298 mov dword ptr [0x107d0ea8], 0x10 */
  w32((uint32_t)(0x107d0ea8), (0x10u));
  /* 107a82a2 mov eax, 1 */
  EAX = (0x1u);
L_107a82a7:;
  /* 107a82a7 pop ebp */
  EBP = (pop32());
  /* 107a82a8 ret  */
  ESPCHK(0x107a8250u, _esp0);
  ESP += 4; return;
}

/* FUN_100082b0 @ 0x107a82b0 (85 bytes, 29 insns) */
void f_107a82b0(void) {
  FTRACE(0x107a82b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a82b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a82b1 mov ebp, esp */
  EBP = (ESP);
  /* 107a82b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a82b6 mov eax, dword ptr [0x107d0ec4] */
  EAX = (r32((uint32_t)(0x107d0ec4)));
  /* 107a82bb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107a82be mov ecx, dword ptr [0x107d0ec8] */
  ECX = (r32((uint32_t)(0x107d0ec8)));
  /* 107a82c4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a82c6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107a82c9 mov edx, dword ptr [0x107d0ec8] */
  EDX = (r32((uint32_t)(0x107d0ec8)));
  /* 107a82cf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_107a82d2:;
  /* 107a82d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a82d5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a82d8 jae 0x107a82ff */
  if (!C.cf) goto L_107a82ff;
  /* 107a82da mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a82dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a82e0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a82e3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107a82e6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a82ed jae 0x107a82f4 */
  if (!C.cf) goto L_107a82f4;
  /* 107a82ef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a82f2 jmp 0x107a8301 */
  goto L_107a8301;
L_107a82f4:;
  /* 107a82f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a82f7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a82fa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107a82fd jmp 0x107a82d2 */
  goto L_107a82d2;
L_107a82ff:;
  /* 107a82ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107a8301:;
  /* 107a8301 mov esp, ebp */
  ESP = (EBP);
  /* 107a8303 pop ebp */
  EBP = (pop32());
  /* 107a8304 ret  */
  ESPCHK(0x107a82b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008310 @ 0x107a8310 (95 bytes, 33 insns) */
void f_107a8310(void) {
  FTRACE(0x107a8310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a8310 push ebp */
  push32((uint32_t)(EBP));
  /* 107a8311 mov ebp, esp */
  EBP = (ESP);
  /* 107a8313 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a8316 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a8319 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a831c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a831f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107a8322 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a8325 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 107a8328 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107a832b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107a8330 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a8333 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107a8335 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a8338 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 107a833b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 107a833d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a833f jne 0x107a8361 */
  if (!C.zf) goto L_107a8361;
  /* 107a8341 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a8344 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 107a8347 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a8349 jne 0x107a8361 */
  if (!C.zf) goto L_107a8361;
  /* 107a834b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a834e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 107a8354 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a8356 je 0x107a8361 */
  if (C.zf) goto L_107a8361;
  /* 107a8358 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 107a835f jmp 0x107a8368 */
  goto L_107a8368;
L_107a8361:;
  /* 107a8361 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_107a8368:;
  /* 107a8368 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a836b mov esp, ebp */
  ESP = (EBP);
  /* 107a836d pop ebp */
  EBP = (pop32());
  /* 107a836e ret  */
  ESPCHK(0x107a8310u, _esp0);
  ESP += 4; return;
}

/* FUN_10008370 @ 0x107a8370 (1485 bytes, 453 insns) */
void f_107a8370(void) {
  FTRACE(0x107a8370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a8370 push ebp */
  push32((uint32_t)(EBP));
  /* 107a8371 mov ebp, esp */
  EBP = (ESP);
  /* 107a8373 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a8376 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a8379 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107a837c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 107a837f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a8382 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a8385 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a8388 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 107a838b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a838e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 107a8391 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107a8394 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a8397 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107a839d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107a83a0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 107a83a7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107a83aa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a83ad sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a83b0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 107a83b3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107a83b6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107a83b8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a83bb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 107a83be mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107a83c1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a83c4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 107a83c7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 107a83ca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107a83cc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 107a83cf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107a83d2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 107a83d5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107a83d8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a83db and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 107a83de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a83e0 jne 0x107a8508 */
  if (!C.zf) goto L_107a8508;
  /* 107a83e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a83e9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 107a83ec sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a83ef mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 107a83f2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a83f6 jbe 0x107a83ff */
  if ((C.cf||C.zf)) goto L_107a83ff;
  /* 107a83f8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_107a83ff:;
  /* 107a83ff mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 107a8402 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 107a8405 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 107a8408 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a840b jne 0x107a84e1 */
  if (!C.zf) goto L_107a84e1;
  /* 107a8411 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8415 jae 0x107a8476 */
  if (!C.cf) goto L_107a8476;
  /* 107a8417 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107a841c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a841f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107a8421 not eax */
  EAX = (~(EAX));
  /* 107a8423 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a8426 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107a8429 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 107a842d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107a842f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a8432 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107a8435 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 107a8439 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107a843c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a843f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 107a8442 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107a8445 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107a8448 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a844b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 107a844e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107a8451 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8454 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 107a8458 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a845a jne 0x107a8474 */
  if (!C.zf) goto L_107a8474;
  /* 107a845c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107a8461 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a8464 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107a8466 not eax */
  EAX = (~(EAX));
  /* 107a8468 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a846b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107a846d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 107a846f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a8472 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_107a8474:;
  /* 107a8474 jmp 0x107a84e1 */
  goto L_107a84e1;
L_107a8476:;
  /* 107a8476 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a8479 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a847c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107a8481 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107a8483 not edx */
  EDX = (~(EDX));
  /* 107a8485 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a8488 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107a848b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 107a8492 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107a8494 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a8497 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107a849a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 107a84a1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107a84a4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a84a7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 107a84aa sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107a84ad mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107a84b0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a84b3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 107a84b6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107a84b9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a84bc movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 107a84c0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a84c2 jne 0x107a84e1 */
  if (!C.zf) goto L_107a84e1;
  /* 107a84c4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a84c7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a84ca mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107a84cf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107a84d1 not edx */
  EDX = (~(EDX));
  /* 107a84d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a84d6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107a84d9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 107a84db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a84de mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_107a84e1:;
  /* 107a84e1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 107a84e4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 107a84e7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 107a84ea mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 107a84ed mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 107a84f0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 107a84f3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107a84f6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 107a84f9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 107a84fc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 107a84ff mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a8502 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8505 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_107a8508:;
  /* 107a8508 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a850b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 107a850e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a8511 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 107a8514 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8518 jbe 0x107a8521 */
  if ((C.cf||C.zf)) goto L_107a8521;
  /* 107a851a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_107a8521:;
  /* 107a8521 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a8524 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 107a8527 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a8529 jne 0x107a8685 */
  if (!C.zf) goto L_107a8685;
  /* 107a852f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107a8532 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a8535 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 107a8538 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a853b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 107a853e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a8541 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 107a8544 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8548 jbe 0x107a8551 */
  if ((C.cf||C.zf)) goto L_107a8551;
  /* 107a854a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_107a8551:;
  /* 107a8551 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a8554 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8557 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 107a855a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a855d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 107a8560 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a8563 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 107a8566 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a856a jbe 0x107a8573 */
  if ((C.cf||C.zf)) goto L_107a8573;
  /* 107a856c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_107a8573:;
  /* 107a8573 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107a8576 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8579 je 0x107a867f */
  if (C.zf) goto L_107a867f;
  /* 107a857f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 107a8582 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 107a8585 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 107a8588 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a858b jne 0x107a8661 */
  if (!C.zf) goto L_107a8661;
  /* 107a8591 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8595 jae 0x107a85f6 */
  if (!C.cf) goto L_107a85f6;
  /* 107a8597 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107a859c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107a859f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107a85a1 not edx */
  EDX = (~(EDX));
  /* 107a85a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a85a6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107a85a9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 107a85ad and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107a85af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a85b2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107a85b5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 107a85b9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107a85bc add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a85bf mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 107a85c2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107a85c5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107a85c8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a85cb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 107a85ce mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107a85d1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a85d4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 107a85d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a85da jne 0x107a85f4 */
  if (!C.zf) goto L_107a85f4;
  /* 107a85dc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107a85e1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107a85e4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107a85e6 not edx */
  EDX = (~(EDX));
  /* 107a85e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a85eb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107a85ed and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 107a85ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a85f2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_107a85f4:;
  /* 107a85f4 jmp 0x107a8661 */
  goto L_107a8661;
L_107a85f6:;
  /* 107a85f6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107a85f9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a85fc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107a8601 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107a8603 not eax */
  EAX = (~(EAX));
  /* 107a8605 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a8608 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107a860b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 107a8612 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107a8614 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a8617 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107a861a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 107a8621 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107a8624 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8627 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 107a862a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107a862d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107a8630 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8633 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 107a8636 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107a8639 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a863c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 107a8640 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a8642 jne 0x107a8661 */
  if (!C.zf) goto L_107a8661;
  /* 107a8644 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107a8647 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a864a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107a864f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107a8651 not eax */
  EAX = (~(EAX));
  /* 107a8653 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a8656 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107a8659 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 107a865b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a865e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_107a8661:;
  /* 107a8661 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 107a8664 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 107a8667 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 107a866a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107a866d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 107a8670 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 107a8673 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 107a8676 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 107a8679 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 107a867c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_107a867f:;
  /* 107a867f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 107a8682 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_107a8685:;
  /* 107a8685 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a8688 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 107a868b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a868d jne 0x107a869b */
  if (!C.zf) goto L_107a869b;
  /* 107a868f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107a8692 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8695 je 0x107a87ab */
  if (C.zf) goto L_107a87ab;
L_107a869b:;
  /* 107a869b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107a869e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a86a1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 107a86a4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 107a86a7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107a86aa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107a86ad mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107a86b0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 107a86b3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107a86b6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107a86b9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 107a86bc mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 107a86bf mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107a86c2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 107a86c5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107a86c8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107a86cb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107a86ce mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 107a86d1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107a86d4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107a86d7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 107a86da cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a86dd jne 0x107a87ab */
  if (!C.zf) goto L_107a87ab;
  /* 107a86e3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a86e7 jae 0x107a8744 */
  if (!C.cf) goto L_107a8744;
  /* 107a86e9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107a86ec add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a86ef movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 107a86f3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107a86f6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a86f9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 107a86fc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 107a86ff mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107a8702 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8705 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 107a8708 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a870a jne 0x107a8722 */
  if (!C.zf) goto L_107a8722;
  /* 107a870c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107a8711 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107a8714 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107a8716 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a8719 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107a871b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 107a871d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a8720 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_107a8722:;
  /* 107a8722 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107a8727 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107a872a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107a872c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a872f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107a8732 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 107a8736 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107a8738 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a873b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107a873e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 107a8742 jmp 0x107a87ab */
  goto L_107a87ab;
L_107a8744:;
  /* 107a8744 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107a8747 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a874a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 107a874e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107a8751 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8754 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 107a8757 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 107a875a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107a875d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8760 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 107a8763 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a8765 jne 0x107a8782 */
  if (!C.zf) goto L_107a8782;
  /* 107a8767 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107a876a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a876d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107a8772 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107a8774 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a8777 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107a877a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 107a877c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a877f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_107a8782:;
  /* 107a8782 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107a8785 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a8788 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107a878d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107a878f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a8792 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107a8795 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 107a879c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107a879e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a87a1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107a87a4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_107a87ab:;
  /* 107a87ab mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107a87ae mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a87b1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 107a87b3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107a87b6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a87b9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a87bc mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 107a87bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a87c2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107a87c4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a87c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a87ca mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107a87cc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a87cf cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a87d2 jne 0x107a8939 */
  if (!C.zf) goto L_107a8939;
  /* 107a87d8 cmp dword ptr [0x107d0ec0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107d0ec0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a87df je 0x107a8928 */
  if (C.zf) goto L_107a8928;
  /* 107a87e5 mov eax, dword ptr [0x107d0eb8] */
  EAX = (r32((uint32_t)(0x107d0eb8)));
  /* 107a87ea shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 107a87ed mov ecx, dword ptr [0x107d0ec0] */
  ECX = (r32((uint32_t)(0x107d0ec0)));
  /* 107a87f3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107a87f6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a87f8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 107a87fb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 107a8800 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 107a8805 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a8808 push eax */
  push32((uint32_t)(EAX));
  /* 107a8809 call dword ptr [0x107d2374] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2374))), 0x107a880fu);
  /* 107a880f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107a8814 mov ecx, dword ptr [0x107d0eb8] */
  ECX = (r32((uint32_t)(0x107d0eb8)));
  /* 107a881a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107a881c mov eax, dword ptr [0x107d0ec0] */
  EAX = (r32((uint32_t)(0x107d0ec0)));
  /* 107a8821 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 107a8824 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 107a8826 mov edx, dword ptr [0x107d0ec0] */
  EDX = (r32((uint32_t)(0x107d0ec0)));
  /* 107a882c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 107a882f mov eax, dword ptr [0x107d0ec0] */
  EAX = (r32((uint32_t)(0x107d0ec0)));
  /* 107a8834 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107a8837 mov edx, dword ptr [0x107d0eb8] */
  EDX = (r32((uint32_t)(0x107d0eb8)));
  /* 107a883d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 107a8848 mov eax, dword ptr [0x107d0ec0] */
  EAX = (r32((uint32_t)(0x107d0ec0)));
  /* 107a884d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107a8850 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 107a8853 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107a8856 mov eax, dword ptr [0x107d0ec0] */
  EAX = (r32((uint32_t)(0x107d0ec0)));
  /* 107a885b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107a885e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 107a8861 mov edx, dword ptr [0x107d0ec0] */
  EDX = (r32((uint32_t)(0x107d0ec0)));
  /* 107a8867 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 107a886a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 107a886e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a8870 jne 0x107a8886 */
  if (!C.zf) goto L_107a8886;
  /* 107a8872 mov edx, dword ptr [0x107d0ec0] */
  EDX = (r32((uint32_t)(0x107d0ec0)));
  /* 107a8878 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 107a887b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 107a887d mov ecx, dword ptr [0x107d0ec0] */
  ECX = (r32((uint32_t)(0x107d0ec0)));
  /* 107a8883 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_107a8886:;
  /* 107a8886 mov edx, dword ptr [0x107d0ec0] */
  EDX = (r32((uint32_t)(0x107d0ec0)));
  /* 107a888c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8890 jne 0x107a8928 */
  if (!C.zf) goto L_107a8928;
  /* 107a8896 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 107a889b push 0 */
  push32((uint32_t)(0x0u));
  /* 107a889d mov eax, dword ptr [0x107d0ec0] */
  EAX = (r32((uint32_t)(0x107d0ec0)));
  /* 107a88a2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 107a88a5 push ecx */
  push32((uint32_t)(ECX));
  /* 107a88a6 call dword ptr [0x107d2374] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2374))), 0x107a88acu);
  /* 107a88ac mov edx, dword ptr [0x107d0ec0] */
  EDX = (r32((uint32_t)(0x107d0ec0)));
  /* 107a88b2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 107a88b5 push eax */
  push32((uint32_t)(EAX));
  /* 107a88b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a88b8 mov ecx, dword ptr [0x107d0ecc] */
  ECX = (r32((uint32_t)(0x107d0ecc)));
  /* 107a88be push ecx */
  push32((uint32_t)(ECX));
  /* 107a88bf call dword ptr [0x107d2370] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2370))), 0x107a88c5u);
  /* 107a88c5 mov edx, dword ptr [0x107d0ec4] */
  EDX = (r32((uint32_t)(0x107d0ec4)));
  /* 107a88cb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107a88ce mov eax, dword ptr [0x107d0ec8] */
  EAX = (r32((uint32_t)(0x107d0ec8)));
  /* 107a88d3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a88d5 mov ecx, dword ptr [0x107d0ec0] */
  ECX = (r32((uint32_t)(0x107d0ec0)));
  /* 107a88db add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a88de sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a88e0 push eax */
  push32((uint32_t)(EAX));
  /* 107a88e1 mov edx, dword ptr [0x107d0ec0] */
  EDX = (r32((uint32_t)(0x107d0ec0)));
  /* 107a88e7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a88ea push edx */
  push32((uint32_t)(EDX));
  /* 107a88eb mov eax, dword ptr [0x107d0ec0] */
  EAX = (r32((uint32_t)(0x107d0ec0)));
  /* 107a88f0 push eax */
  push32((uint32_t)(EAX));
  /* 107a88f1 call 0x107abea0 */
  push32(0x107a88f6u); f_107abea0();
  /* 107a88f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a88f9 mov ecx, dword ptr [0x107d0ec4] */
  ECX = (r32((uint32_t)(0x107d0ec4)));
  /* 107a88ff sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a8902 mov dword ptr [0x107d0ec4], ecx */
  w32((uint32_t)(0x107d0ec4), (ECX));
  /* 107a8908 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a890b cmp edx, dword ptr [0x107d0ec0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x107d0ec0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8911 jbe 0x107a891c */
  if ((C.cf||C.zf)) goto L_107a891c;
  /* 107a8913 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a8916 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a8919 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_107a891c:;
  /* 107a891c mov ecx, dword ptr [0x107d0ec8] */
  ECX = (r32((uint32_t)(0x107d0ec8)));
  /* 107a8922 mov dword ptr [0x107d0ebc], ecx */
  w32((uint32_t)(0x107d0ebc), (ECX));
L_107a8928:;
  /* 107a8928 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a892b mov dword ptr [0x107d0ec0], edx */
  w32((uint32_t)(0x107d0ec0), (EDX));
  /* 107a8931 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a8934 mov dword ptr [0x107d0eb8], eax */
  w32((uint32_t)(0x107d0eb8), (EAX));
L_107a8939:;
  /* 107a8939 mov esp, ebp */
  ESP = (EBP);
  /* 107a893b pop ebp */
  EBP = (pop32());
  /* 107a893c ret  */
  ESPCHK(0x107a8370u, _esp0);
  ESP += 4; return;
}

/* FUN_10008940 @ 0x107a8940 (1334 bytes, 427 insns) */
void f_107a8940(void) {
  FTRACE(0x107a8940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a8940 push ebp */
  push32((uint32_t)(EBP));
  /* 107a8941 mov ebp, esp */
  EBP = (ESP);
  /* 107a8943 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a8946 push esi */
  push32((uint32_t)(ESI));
  /* 107a8947 mov eax, dword ptr [0x107d0ec4] */
  EAX = (r32((uint32_t)(0x107d0ec4)));
  /* 107a894c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107a894f mov ecx, dword ptr [0x107d0ec8] */
  ECX = (r32((uint32_t)(0x107d0ec8)));
  /* 107a8955 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8957 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 107a895a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a895d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8960 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 107a8963 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 107a8966 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107a8969 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 107a896c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a896f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 107a8972 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8976 jge 0x107a898c */
  if ((C.sf==C.of)) goto L_107a898c;
  /* 107a8978 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107a897b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107a897e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107a8980 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 107a8983 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 107a898a jmp 0x107a89a1 */
  goto L_107a89a1;
L_107a898c:;
  /* 107a898c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 107a8993 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107a8996 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a8999 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a899c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107a899e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_107a89a1:;
  /* 107a89a1 mov ecx, dword ptr [0x107d0ebc] */
  ECX = (r32((uint32_t)(0x107d0ebc)));
  /* 107a89a7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_107a89aa:;
  /* 107a89aa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a89ad cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a89b0 jae 0x107a89d6 */
  if (!C.cf) goto L_107a89d6;
  /* 107a89b2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a89b5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a89b8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 107a89ba mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a89bd mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 107a89c0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 107a89c3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107a89c5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a89c7 je 0x107a89cb */
  if (C.zf) goto L_107a89cb;
  /* 107a89c9 jmp 0x107a89d6 */
  goto L_107a89d6;
L_107a89cb:;
  /* 107a89cb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a89ce add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a89d1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 107a89d4 jmp 0x107a89aa */
  goto L_107a89aa;
L_107a89d6:;
  /* 107a89d6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a89d9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a89dc jne 0x107a8abd */
  if (!C.zf) goto L_107a8abd;
  /* 107a89e2 mov eax, dword ptr [0x107d0ec8] */
  EAX = (r32((uint32_t)(0x107d0ec8)));
  /* 107a89e7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_107a89ea:;
  /* 107a89ea mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a89ed cmp ecx, dword ptr [0x107d0ebc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x107d0ebc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a89f3 jae 0x107a8a19 */
  if (!C.cf) goto L_107a8a19;
  /* 107a89f5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a89f8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a89fb and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 107a89fd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a8a00 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 107a8a03 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 107a8a06 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107a8a08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a8a0a je 0x107a8a0e */
  if (C.zf) goto L_107a8a0e;
  /* 107a8a0c jmp 0x107a8a19 */
  goto L_107a8a19;
L_107a8a0e:;
  /* 107a8a0e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a8a11 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8a14 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107a8a17 jmp 0x107a89ea */
  goto L_107a89ea;
L_107a8a19:;
  /* 107a8a19 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a8a1c cmp ecx, dword ptr [0x107d0ebc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x107d0ebc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8a22 jne 0x107a8abd */
  if (!C.zf) goto L_107a8abd;
L_107a8a28:;
  /* 107a8a28 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a8a2b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8a2e jae 0x107a8a46 */
  if (!C.cf) goto L_107a8a46;
  /* 107a8a30 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a8a33 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8a37 je 0x107a8a3b */
  if (C.zf) goto L_107a8a3b;
  /* 107a8a39 jmp 0x107a8a46 */
  goto L_107a8a46;
L_107a8a3b:;
  /* 107a8a3b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a8a3e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8a41 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 107a8a44 jmp 0x107a8a28 */
  goto L_107a8a28;
L_107a8a46:;
  /* 107a8a46 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a8a49 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8a4c jne 0x107a8a97 */
  if (!C.zf) goto L_107a8a97;
  /* 107a8a4e mov eax, dword ptr [0x107d0ec8] */
  EAX = (r32((uint32_t)(0x107d0ec8)));
  /* 107a8a53 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_107a8a56:;
  /* 107a8a56 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a8a59 cmp ecx, dword ptr [0x107d0ebc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x107d0ebc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8a5f jae 0x107a8a77 */
  if (!C.cf) goto L_107a8a77;
  /* 107a8a61 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a8a64 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8a68 je 0x107a8a6c */
  if (C.zf) goto L_107a8a6c;
  /* 107a8a6a jmp 0x107a8a77 */
  goto L_107a8a77;
L_107a8a6c:;
  /* 107a8a6c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a8a6f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8a72 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107a8a75 jmp 0x107a8a56 */
  goto L_107a8a56;
L_107a8a77:;
  /* 107a8a77 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a8a7a cmp ecx, dword ptr [0x107d0ebc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x107d0ebc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8a80 jne 0x107a8a97 */
  if (!C.zf) goto L_107a8a97;
  /* 107a8a82 call 0x107a8e80 */
  push32(0x107a8a87u); f_107a8e80();
  /* 107a8a87 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107a8a8a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8a8e jne 0x107a8a97 */
  if (!C.zf) goto L_107a8a97;
  /* 107a8a90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a8a92 jmp 0x107a8e71 */
  goto L_107a8e71;
L_107a8a97:;
  /* 107a8a97 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a8a9a push edx */
  push32((uint32_t)(EDX));
  /* 107a8a9b call 0x107a8f90 */
  push32(0x107a8aa0u); f_107a8f90();
  /* 107a8aa0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8aa3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a8aa6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 107a8aa9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 107a8aab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a8aae mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107a8ab1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8ab4 jne 0x107a8abd */
  if (!C.zf) goto L_107a8abd;
  /* 107a8ab6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a8ab8 jmp 0x107a8e71 */
  goto L_107a8e71;
L_107a8abd:;
  /* 107a8abd mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a8ac0 mov dword ptr [0x107d0ebc], edx */
  w32((uint32_t)(0x107d0ebc), (EDX));
  /* 107a8ac6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a8ac9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107a8acc mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 107a8acf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 107a8ad2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107a8ad4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 107a8ad7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8adb je 0x107a8b00 */
  if (C.zf) goto L_107a8b00;
  /* 107a8add mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a8ae0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 107a8ae3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a8ae6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 107a8aea mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a8aed mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 107a8af0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 107a8af3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 107a8afa or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 107a8afc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a8afe jne 0x107a8b35 */
  if (!C.zf) goto L_107a8b35;
L_107a8b00:;
  /* 107a8b00 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_107a8b07:;
  /* 107a8b07 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a8b0a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 107a8b0d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a8b10 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 107a8b14 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a8b17 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 107a8b1a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 107a8b1d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 107a8b24 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 107a8b26 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a8b28 jne 0x107a8b35 */
  if (!C.zf) goto L_107a8b35;
  /* 107a8b2a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a8b2d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8b30 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 107a8b33 jmp 0x107a8b07 */
  goto L_107a8b07;
L_107a8b35:;
  /* 107a8b35 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a8b38 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107a8b3e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 107a8b41 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 107a8b48 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107a8b4b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 107a8b52 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a8b55 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 107a8b58 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a8b5b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 107a8b5f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 107a8b62 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8b66 jne 0x107a8b82 */
  if (!C.zf) goto L_107a8b82;
  /* 107a8b68 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 107a8b6f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a8b72 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 107a8b75 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 107a8b78 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 107a8b7f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_107a8b82:;
  /* 107a8b82 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8b86 jl 0x107a8b9b */
  if ((C.sf!=C.of)) goto L_107a8b9b;
  /* 107a8b88 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107a8b8b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 107a8b8d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 107a8b90 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107a8b93 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8b96 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 107a8b99 jmp 0x107a8b82 */
  goto L_107a8b82;
L_107a8b9b:;
  /* 107a8b9b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 107a8b9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a8ba1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 107a8ba5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 107a8ba8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a8bab mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107a8bad sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a8bb0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107a8bb3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a8bb6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 107a8bb9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a8bbc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 107a8bbf cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8bc3 jle 0x107a8bcc */
  if ((C.zf||C.sf!=C.of)) goto L_107a8bcc;
  /* 107a8bc5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_107a8bcc:;
  /* 107a8bcc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a8bcf cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8bd2 je 0x107a8df0 */
  if (C.zf) goto L_107a8df0;
  /* 107a8bd8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a8bdb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a8bde mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 107a8be1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8be4 jne 0x107a8cba */
  if (!C.zf) goto L_107a8cba;
  /* 107a8bea cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8bee jge 0x107a8c4f */
  if ((C.sf==C.of)) goto L_107a8c4f;
  /* 107a8bf0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107a8bf5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107a8bf8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107a8bfa not eax */
  EAX = (~(EAX));
  /* 107a8bfc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a8bff mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 107a8c02 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 107a8c06 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107a8c08 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a8c0b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 107a8c0e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 107a8c12 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 107a8c15 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8c18 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 107a8c1b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107a8c1e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 107a8c21 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8c24 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 107a8c27 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 107a8c2a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8c2d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 107a8c31 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a8c33 jne 0x107a8c4d */
  if (!C.zf) goto L_107a8c4d;
  /* 107a8c35 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107a8c3a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107a8c3d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107a8c3f not eax */
  EAX = (~(EAX));
  /* 107a8c41 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a8c44 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107a8c46 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 107a8c48 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a8c4b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_107a8c4d:;
  /* 107a8c4d jmp 0x107a8cba */
  goto L_107a8cba;
L_107a8c4f:;
  /* 107a8c4f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107a8c52 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a8c55 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107a8c5a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107a8c5c not edx */
  EDX = (~(EDX));
  /* 107a8c5e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a8c61 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 107a8c64 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 107a8c6b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107a8c6d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a8c70 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 107a8c73 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 107a8c7a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 107a8c7d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8c80 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 107a8c83 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107a8c86 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 107a8c89 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8c8c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 107a8c8f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 107a8c92 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8c95 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 107a8c99 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a8c9b jne 0x107a8cba */
  if (!C.zf) goto L_107a8cba;
  /* 107a8c9d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107a8ca0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a8ca3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107a8ca8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107a8caa not edx */
  EDX = (~(EDX));
  /* 107a8cac mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a8caf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107a8cb2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 107a8cb4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a8cb7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_107a8cba:;
  /* 107a8cba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a8cbd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 107a8cc0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a8cc3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 107a8cc6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 107a8cc9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a8ccc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107a8ccf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a8cd2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 107a8cd5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 107a8cd8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8cdc je 0x107a8df0 */
  if (C.zf) goto L_107a8df0;
  /* 107a8ce2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a8ce5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a8ce8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 107a8ceb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107a8cee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a8cf1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a8cf4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107a8cf7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 107a8cfa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a8cfd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a8d00 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 107a8d03 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a8d06 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a8d09 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 107a8d0c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a8d0f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107a8d12 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a8d15 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 107a8d18 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a8d1b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a8d1e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 107a8d21 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8d24 jne 0x107a8df0 */
  if (!C.zf) goto L_107a8df0;
  /* 107a8d2a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8d2e jge 0x107a8d8a */
  if ((C.sf==C.of)) goto L_107a8d8a;
  /* 107a8d30 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 107a8d33 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8d36 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 107a8d3a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 107a8d3d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8d40 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 107a8d43 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 107a8d45 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 107a8d48 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8d4b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 107a8d4e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a8d50 jne 0x107a8d68 */
  if (!C.zf) goto L_107a8d68;
  /* 107a8d52 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107a8d57 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a8d5a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107a8d5c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a8d5f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107a8d61 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 107a8d63 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a8d66 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_107a8d68:;
  /* 107a8d68 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107a8d6d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a8d70 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107a8d72 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a8d75 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 107a8d78 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 107a8d7c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107a8d7e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a8d81 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 107a8d84 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 107a8d88 jmp 0x107a8df0 */
  goto L_107a8df0;
L_107a8d8a:;
  /* 107a8d8a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 107a8d8d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8d90 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 107a8d94 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 107a8d97 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8d9a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 107a8d9d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 107a8d9f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 107a8da2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8da5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 107a8da8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a8daa jne 0x107a8dc7 */
  if (!C.zf) goto L_107a8dc7;
  /* 107a8dac mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a8daf sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a8db2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107a8db7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107a8db9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a8dbc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107a8dbf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 107a8dc1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a8dc4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_107a8dc7:;
  /* 107a8dc7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a8dca sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a8dcd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107a8dd2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107a8dd4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a8dd7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 107a8dda mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 107a8de1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107a8de3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a8de6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 107a8de9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_107a8df0:;
  /* 107a8df0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8df4 je 0x107a8e0a */
  if (C.zf) goto L_107a8e0a;
  /* 107a8df6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a8df9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a8dfc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 107a8dfe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a8e01 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8e04 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a8e07 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_107a8e0a:;
  /* 107a8e0a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a8e0d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8e10 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 107a8e13 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 107a8e16 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8e19 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a8e1c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107a8e1e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107a8e21 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8e24 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a8e27 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8e2a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 107a8e2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a8e30 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107a8e32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a8e35 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107a8e37 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8e3a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a8e3d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 107a8e3f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a8e41 jne 0x107a8e63 */
  if (!C.zf) goto L_107a8e63;
  /* 107a8e43 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a8e46 cmp eax, dword ptr [0x107d0ec0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x107d0ec0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8e4c jne 0x107a8e63 */
  if (!C.zf) goto L_107a8e63;
  /* 107a8e4e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a8e51 cmp ecx, dword ptr [0x107d0eb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x107d0eb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8e57 jne 0x107a8e63 */
  if (!C.zf) goto L_107a8e63;
  /* 107a8e59 mov dword ptr [0x107d0ec0], 0 */
  w32((uint32_t)(0x107d0ec0), (0x0u));
L_107a8e63:;
  /* 107a8e63 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 107a8e66 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a8e69 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 107a8e6b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a8e6e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_107a8e71:;
  /* 107a8e71 pop esi */
  ESI = (pop32());
  /* 107a8e72 mov esp, ebp */
  ESP = (EBP);
  /* 107a8e74 pop ebp */
  EBP = (pop32());
  /* 107a8e75 ret  */
  ESPCHK(0x107a8940u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e80 @ 0x107a8e80 (271 bytes, 78 insns) */
void f_107a8e80(void) {
  FTRACE(0x107a8e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a8e80 push ebp */
  push32((uint32_t)(EBP));
  /* 107a8e81 mov ebp, esp */
  EBP = (ESP);
  /* 107a8e83 push ecx */
  push32((uint32_t)(ECX));
  /* 107a8e84 mov eax, dword ptr [0x107d0ec4] */
  EAX = (r32((uint32_t)(0x107d0ec4)));
  /* 107a8e89 cmp eax, dword ptr [0x107d0ea8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x107d0ea8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8e8f jne 0x107a8edb */
  if (!C.zf) goto L_107a8edb;
  /* 107a8e91 mov ecx, dword ptr [0x107d0ea8] */
  ECX = (r32((uint32_t)(0x107d0ea8)));
  /* 107a8e97 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8e9a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107a8e9d push ecx */
  push32((uint32_t)(ECX));
  /* 107a8e9e mov edx, dword ptr [0x107d0ec8] */
  EDX = (r32((uint32_t)(0x107d0ec8)));
  /* 107a8ea4 push edx */
  push32((uint32_t)(EDX));
  /* 107a8ea5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a8ea7 mov eax, dword ptr [0x107d0ecc] */
  EAX = (r32((uint32_t)(0x107d0ecc)));
  /* 107a8eac push eax */
  push32((uint32_t)(EAX));
  /* 107a8ead call dword ptr [0x107d2334] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2334))), 0x107a8eb3u);
  /* 107a8eb3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a8eb6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8eba jne 0x107a8ec3 */
  if (!C.zf) goto L_107a8ec3;
  /* 107a8ebc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a8ebe jmp 0x107a8f8b */
  goto L_107a8f8b;
L_107a8ec3:;
  /* 107a8ec3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a8ec6 mov dword ptr [0x107d0ec8], ecx */
  w32((uint32_t)(0x107d0ec8), (ECX));
  /* 107a8ecc mov edx, dword ptr [0x107d0ea8] */
  EDX = (r32((uint32_t)(0x107d0ea8)));
  /* 107a8ed2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8ed5 mov dword ptr [0x107d0ea8], edx */
  w32((uint32_t)(0x107d0ea8), (EDX));
L_107a8edb:;
  /* 107a8edb mov eax, dword ptr [0x107d0ec4] */
  EAX = (r32((uint32_t)(0x107d0ec4)));
  /* 107a8ee0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107a8ee3 mov ecx, dword ptr [0x107d0ec8] */
  ECX = (r32((uint32_t)(0x107d0ec8)));
  /* 107a8ee9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8eeb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107a8eee push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 107a8ef3 push 8 */
  push32((uint32_t)(0x8u));
  /* 107a8ef5 mov edx, dword ptr [0x107d0ecc] */
  EDX = (r32((uint32_t)(0x107d0ecc)));
  /* 107a8efb push edx */
  push32((uint32_t)(EDX));
  /* 107a8efc call dword ptr [0x107d238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d238c))), 0x107a8f02u);
  /* 107a8f02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a8f05 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 107a8f08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a8f0b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8f0f jne 0x107a8f15 */
  if (!C.zf) goto L_107a8f15;
  /* 107a8f11 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a8f13 jmp 0x107a8f8b */
  goto L_107a8f8b;
L_107a8f15:;
  /* 107a8f15 push 4 */
  push32((uint32_t)(0x4u));
  /* 107a8f17 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 107a8f1c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 107a8f21 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a8f23 call dword ptr [0x107d22dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22dc))), 0x107a8f29u);
  /* 107a8f29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a8f2c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 107a8f2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a8f32 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8f36 jne 0x107a8f52 */
  if (!C.zf) goto L_107a8f52;
  /* 107a8f38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a8f3b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107a8f3e push ecx */
  push32((uint32_t)(ECX));
  /* 107a8f3f push 0 */
  push32((uint32_t)(0x0u));
  /* 107a8f41 mov edx, dword ptr [0x107d0ecc] */
  EDX = (r32((uint32_t)(0x107d0ecc)));
  /* 107a8f47 push edx */
  push32((uint32_t)(EDX));
  /* 107a8f48 call dword ptr [0x107d2370] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2370))), 0x107a8f4eu);
  /* 107a8f4e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a8f50 jmp 0x107a8f8b */
  goto L_107a8f8b;
L_107a8f52:;
  /* 107a8f52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a8f55 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 107a8f5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a8f5e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 107a8f65 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a8f68 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 107a8f6f mov eax, dword ptr [0x107d0ec4] */
  EAX = (r32((uint32_t)(0x107d0ec4)));
  /* 107a8f74 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8f77 mov dword ptr [0x107d0ec4], eax */
  w32((uint32_t)(0x107d0ec4), (EAX));
  /* 107a8f7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a8f7f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 107a8f82 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 107a8f88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_107a8f8b:;
  /* 107a8f8b mov esp, ebp */
  ESP = (EBP);
  /* 107a8f8d pop ebp */
  EBP = (pop32());
  /* 107a8f8e ret  */
  ESPCHK(0x107a8e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f90 @ 0x107a8f90 (494 bytes, 149 insns) */
void f_107a8f90(void) {
  FTRACE(0x107a8f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a8f90 push ebp */
  push32((uint32_t)(EBP));
  /* 107a8f91 mov ebp, esp */
  EBP = (ESP);
  /* 107a8f93 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a8f96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a8f99 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107a8f9c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 107a8f9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a8fa2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 107a8fa5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107a8fa8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_107a8faf:;
  /* 107a8faf cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8fb3 jl 0x107a8fc8 */
  if ((C.sf!=C.of)) goto L_107a8fc8;
  /* 107a8fb5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a8fb8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 107a8fba mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107a8fbd mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 107a8fc0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8fc3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 107a8fc6 jmp 0x107a8faf */
  goto L_107a8faf;
L_107a8fc8:;
  /* 107a8fc8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107a8fcb imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107a8fd1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107a8fd4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 107a8fdb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 107a8fde mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 107a8fe5 jmp 0x107a8ff0 */
  goto L_107a8ff0;
L_107a8fe7:;
  /* 107a8fe7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 107a8fea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a8fed mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_107a8ff0:;
  /* 107a8ff0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a8ff4 jge 0x107a9016 */
  if ((C.sf==C.of)) goto L_107a9016;
  /* 107a8ff6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107a8ff9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a8ffc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 107a8fff mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107a9002 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a9005 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a9008 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 107a900b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a900e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a9011 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 107a9014 jmp 0x107a8fe7 */
  goto L_107a8fe7;
L_107a9016:;
  /* 107a9016 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 107a9019 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 107a901c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a901f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 107a9022 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9024 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 107a9027 push 4 */
  push32((uint32_t)(0x4u));
  /* 107a9029 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 107a902e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 107a9033 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a9036 push edx */
  push32((uint32_t)(EDX));
  /* 107a9037 call dword ptr [0x107d22dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22dc))), 0x107a903du);
  /* 107a903d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a903f jne 0x107a9049 */
  if (!C.zf) goto L_107a9049;
  /* 107a9041 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a9044 jmp 0x107a917a */
  goto L_107a917a;
L_107a9049:;
  /* 107a9049 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a904c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9051 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 107a9054 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a9057 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107a905a jmp 0x107a9068 */
  goto L_107a9068;
L_107a905c:;
  /* 107a905c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a905f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9065 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_107a9068:;
  /* 107a9068 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a906b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a906e ja 0x107a90cd */
  if ((!C.cf&&!C.zf)) goto L_107a90cd;
  /* 107a9070 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a9073 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 107a907a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a907d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 107a9087 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a908a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a908d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107a9090 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a9093 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 107a9099 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a909c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a90a2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a90a5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 107a90a8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a90ab sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a90b1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a90b4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 107a90b7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a90ba add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a90bf mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 107a90c2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a90c5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 107a90cb jmp 0x107a905c */
  goto L_107a905c;
L_107a90cd:;
  /* 107a90cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a90d0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a90d6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 107a90d9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a90dc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a90df mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a90e2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 107a90e5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a90e8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 107a90eb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107a90ee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a90f1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a90f4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 107a90f7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107a90fa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a90fd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a9100 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 107a9103 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a9106 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 107a9109 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107a910c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a910f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a9112 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 107a9115 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107a9118 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107a911b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 107a9123 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 107a9126 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107a9129 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 107a9134 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107a9137 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 107a913b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107a913e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 107a9141 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 107a9144 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107a9147 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 107a914a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a914c jne 0x107a915d */
  if (!C.zf) goto L_107a915d;
  /* 107a914e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a9151 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107a9154 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 107a9157 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a915a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_107a915d:;
  /* 107a915d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107a9162 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107a9165 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107a9167 not edx */
  EDX = (~(EDX));
  /* 107a9169 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a916c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 107a916f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 107a9171 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a9174 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 107a9177 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_107a917a:;
  /* 107a917a mov esp, ebp */
  ESP = (EBP);
  /* 107a917c pop ebp */
  EBP = (pop32());
  /* 107a917d ret  */
  ESPCHK(0x107a8f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10009180 @ 0x107a9180 (1515 bytes, 489 insns) */
void f_107a9180(void) {
  FTRACE(0x107a9180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a9180 push ebp */
  push32((uint32_t)(EBP));
  /* 107a9181 mov ebp, esp */
  EBP = (ESP);
  /* 107a9183 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a9186 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a9189 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a918c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 107a918e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 107a9191 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a9194 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 107a9197 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 107a919a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a919d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a91a0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a91a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107a91a6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a91a9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 107a91ac mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107a91af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a91b2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107a91b8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a91bb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 107a91c2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107a91c5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a91c8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a91cb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 107a91ce mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a91d1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107a91d3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a91d6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 107a91d9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a91dc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a91df mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 107a91e2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107a91e5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107a91e7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 107a91ea mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107a91ed cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a91f0 jle 0x107a94a6 */
  if ((C.zf||C.sf!=C.of)) goto L_107a94a6;
  /* 107a91f6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a91f9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 107a91fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a91fe jne 0x107a920b */
  if (!C.zf) goto L_107a920b;
  /* 107a9200 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 107a9203 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9206 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9209 jle 0x107a9212 */
  if ((C.zf||C.sf!=C.of)) goto L_107a9212;
L_107a920b:;
  /* 107a920b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a920d jmp 0x107a9767 */
  goto L_107a9767;
L_107a9212:;
  /* 107a9212 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a9215 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 107a9218 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a921b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 107a921e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9222 jbe 0x107a922b */
  if ((C.cf||C.zf)) goto L_107a922b;
  /* 107a9224 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_107a922b:;
  /* 107a922b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107a922e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107a9231 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 107a9234 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9237 jne 0x107a930d */
  if (!C.zf) goto L_107a930d;
  /* 107a923d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9241 jae 0x107a92a2 */
  if (!C.cf) goto L_107a92a2;
  /* 107a9243 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107a9248 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107a924b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107a924d not edx */
  EDX = (~(EDX));
  /* 107a924f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a9252 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a9255 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 107a9259 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107a925b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a925e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a9261 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 107a9265 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a9268 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a926b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 107a926e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107a9271 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a9274 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9277 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 107a927a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a927d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9280 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 107a9284 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a9286 jne 0x107a92a0 */
  if (!C.zf) goto L_107a92a0;
  /* 107a9288 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107a928d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107a9290 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107a9292 not edx */
  EDX = (~(EDX));
  /* 107a9294 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a9297 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107a9299 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 107a929b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a929e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_107a92a0:;
  /* 107a92a0 jmp 0x107a930d */
  goto L_107a930d;
L_107a92a2:;
  /* 107a92a2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107a92a5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a92a8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107a92ad shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107a92af not eax */
  EAX = (~(EAX));
  /* 107a92b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a92b4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a92b7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 107a92be and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107a92c0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a92c3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a92c6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 107a92cd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a92d0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a92d3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 107a92d6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107a92d9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a92dc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a92df mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 107a92e2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a92e5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a92e8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 107a92ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a92ee jne 0x107a930d */
  if (!C.zf) goto L_107a930d;
  /* 107a92f0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107a92f3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a92f6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107a92fb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107a92fd not eax */
  EAX = (~(EAX));
  /* 107a92ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a9302 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107a9305 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 107a9307 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a930a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_107a930d:;
  /* 107a930d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107a9310 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 107a9313 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107a9316 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107a9319 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 107a931c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107a931f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 107a9322 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107a9325 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 107a9328 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 107a932b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107a932e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9331 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a9334 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 107a9337 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a933b jle 0x107a9487 */
  if ((C.zf||C.sf!=C.of)) goto L_107a9487;
  /* 107a9341 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a9344 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9347 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 107a934a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a934d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 107a9350 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a9353 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 107a9356 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a935a jbe 0x107a9363 */
  if ((C.cf||C.zf)) goto L_107a9363;
  /* 107a935c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_107a9363:;
  /* 107a9363 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 107a9366 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a9369 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 107a936c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 107a936f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107a9372 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a9375 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107a9378 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 107a937b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107a937e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a9381 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 107a9384 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a9387 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107a938a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 107a938d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107a9390 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107a9393 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107a9396 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 107a9399 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107a939c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107a939f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 107a93a2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a93a5 jne 0x107a9473 */
  if (!C.zf) goto L_107a9473;
  /* 107a93ab cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a93af jae 0x107a940c */
  if (!C.cf) goto L_107a940c;
  /* 107a93b1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a93b4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a93b7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 107a93bb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a93be add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a93c1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 107a93c4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 107a93c7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a93ca add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a93cd mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 107a93d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a93d2 jne 0x107a93ea */
  if (!C.zf) goto L_107a93ea;
  /* 107a93d4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107a93d9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107a93dc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107a93de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a93e1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107a93e3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 107a93e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a93e8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_107a93ea:;
  /* 107a93ea mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107a93ef mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107a93f2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107a93f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a93f7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a93fa mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 107a93fe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107a9400 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a9403 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a9406 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 107a940a jmp 0x107a9473 */
  goto L_107a9473;
L_107a940c:;
  /* 107a940c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a940f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9412 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 107a9416 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a9419 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a941c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 107a941f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 107a9422 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a9425 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9428 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 107a942b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a942d jne 0x107a944a */
  if (!C.zf) goto L_107a944a;
  /* 107a942f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107a9432 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a9435 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107a943a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107a943c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a943f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107a9442 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 107a9444 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a9447 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_107a944a:;
  /* 107a944a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107a944d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a9450 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107a9455 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107a9457 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a945a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a945d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 107a9464 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107a9466 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a9469 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a946c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_107a9473:;
  /* 107a9473 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107a9476 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a9479 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 107a947b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107a947e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9481 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a9484 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_107a9487:;
  /* 107a9487 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107a948a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a948d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a9490 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107a9492 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107a9495 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9498 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a949b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a949e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 107a94a1 jmp 0x107a9762 */
  goto L_107a9762;
L_107a94a6:;
  /* 107a94a6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107a94a9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a94ac jge 0x107a9762 */
  if ((C.sf==C.of)) goto L_107a9762;
  /* 107a94b2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107a94b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a94b8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a94bb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 107a94bd mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107a94c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a94c3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a94c6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a94c9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 107a94cc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a94cf add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a94d2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 107a94d5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107a94d8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a94db mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 107a94de mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107a94e1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 107a94e4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a94e7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 107a94ea cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a94ee jbe 0x107a94f7 */
  if ((C.cf||C.zf)) goto L_107a94f7;
  /* 107a94f0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_107a94f7:;
  /* 107a94f7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a94fa and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 107a94fd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a94ff jne 0x107a9640 */
  if (!C.zf) goto L_107a9640;
  /* 107a9505 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a9508 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 107a950b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a950e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 107a9511 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9515 jbe 0x107a951e */
  if ((C.cf||C.zf)) goto L_107a951e;
  /* 107a9517 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_107a951e:;
  /* 107a951e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107a9521 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107a9524 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 107a9527 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a952a jne 0x107a9600 */
  if (!C.zf) goto L_107a9600;
  /* 107a9530 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9534 jae 0x107a9595 */
  if (!C.cf) goto L_107a9595;
  /* 107a9536 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107a953b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107a953e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107a9540 not edx */
  EDX = (~(EDX));
  /* 107a9542 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a9545 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a9548 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 107a954c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107a954e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a9551 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a9554 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 107a9558 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a955b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a955e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 107a9561 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107a9564 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a9567 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a956a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 107a956d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a9570 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9573 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 107a9577 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a9579 jne 0x107a9593 */
  if (!C.zf) goto L_107a9593;
  /* 107a957b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107a9580 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107a9583 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107a9585 not edx */
  EDX = (~(EDX));
  /* 107a9587 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a958a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107a958c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 107a958e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a9591 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_107a9593:;
  /* 107a9593 jmp 0x107a9600 */
  goto L_107a9600;
L_107a9595:;
  /* 107a9595 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107a9598 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a959b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107a95a0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107a95a2 not eax */
  EAX = (~(EAX));
  /* 107a95a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a95a7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a95aa mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 107a95b1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107a95b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a95b6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a95b9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 107a95c0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a95c3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a95c6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 107a95c9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107a95cc mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a95cf add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a95d2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 107a95d5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a95d8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a95db movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 107a95df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a95e1 jne 0x107a9600 */
  if (!C.zf) goto L_107a9600;
  /* 107a95e3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107a95e6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a95e9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107a95ee shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107a95f0 not eax */
  EAX = (~(EAX));
  /* 107a95f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a95f5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107a95f8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 107a95fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a95fd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_107a9600:;
  /* 107a9600 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107a9603 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 107a9606 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107a9609 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107a960c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 107a960f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107a9612 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 107a9615 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107a9618 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 107a961b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 107a961e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107a9621 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9624 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 107a9627 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107a962a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 107a962d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a9630 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 107a9633 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9637 jbe 0x107a9640 */
  if ((C.cf||C.zf)) goto L_107a9640;
  /* 107a9639 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_107a9640:;
  /* 107a9640 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a9643 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a9646 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 107a9649 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 107a964c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a964f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a9652 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107a9655 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 107a9658 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a965b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a965e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 107a9661 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a9664 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a9667 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 107a966a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a966d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107a9670 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a9673 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 107a9676 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a9679 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a967c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 107a967f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9682 jne 0x107a974e */
  if (!C.zf) goto L_107a974e;
  /* 107a9688 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a968c jae 0x107a96e8 */
  if (!C.cf) goto L_107a96e8;
  /* 107a968e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a9691 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9694 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 107a9698 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a969b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a969e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 107a96a1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 107a96a3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a96a6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a96a9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 107a96ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a96ae jne 0x107a96c6 */
  if (!C.zf) goto L_107a96c6;
  /* 107a96b0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107a96b5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a96b8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107a96ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a96bd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107a96bf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 107a96c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a96c4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_107a96c6:;
  /* 107a96c6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107a96cb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a96ce shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107a96d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a96d3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a96d6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 107a96da or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107a96dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a96df mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a96e2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 107a96e6 jmp 0x107a974e */
  goto L_107a974e;
L_107a96e8:;
  /* 107a96e8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a96eb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a96ee movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 107a96f2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a96f5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a96f8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 107a96fb add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 107a96fd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a9700 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9703 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 107a9706 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a9708 jne 0x107a9725 */
  if (!C.zf) goto L_107a9725;
  /* 107a970a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a970d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a9710 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107a9715 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107a9717 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a971a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107a971d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 107a971f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a9722 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_107a9725:;
  /* 107a9725 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a9728 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a972b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107a9730 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107a9732 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a9735 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a9738 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 107a973f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107a9741 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a9744 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107a9747 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_107a974e:;
  /* 107a974e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a9751 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107a9754 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 107a9756 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a9759 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a975c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107a975f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_107a9762:;
  /* 107a9762 mov eax, 1 */
  EAX = (0x1u);
L_107a9767:;
  /* 107a9767 mov esp, ebp */
  ESP = (EBP);
  /* 107a9769 pop ebp */
  EBP = (pop32());
  /* 107a976a ret  */
  ESPCHK(0x107a9180u, _esp0);
  ESP += 4; return;
}

/* FUN_10009770 @ 0x107a9770 (304 bytes, 79 insns) */
void f_107a9770(void) {
  FTRACE(0x107a9770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a9770 push ebp */
  push32((uint32_t)(EBP));
  /* 107a9771 mov ebp, esp */
  EBP = (ESP);
  /* 107a9773 push ecx */
  push32((uint32_t)(ECX));
  /* 107a9774 cmp dword ptr [0x107d0ec0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107d0ec0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a977b je 0x107a989c */
  if (C.zf) goto L_107a989c;
  /* 107a9781 mov eax, dword ptr [0x107d0eb8] */
  EAX = (r32((uint32_t)(0x107d0eb8)));
  /* 107a9786 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 107a9789 mov ecx, dword ptr [0x107d0ec0] */
  ECX = (r32((uint32_t)(0x107d0ec0)));
  /* 107a978f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107a9792 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9794 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107a9797 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 107a979c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 107a97a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a97a4 push eax */
  push32((uint32_t)(EAX));
  /* 107a97a5 call dword ptr [0x107d2374] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2374))), 0x107a97abu);
  /* 107a97ab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107a97b0 mov ecx, dword ptr [0x107d0eb8] */
  ECX = (r32((uint32_t)(0x107d0eb8)));
  /* 107a97b6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107a97b8 mov eax, dword ptr [0x107d0ec0] */
  EAX = (r32((uint32_t)(0x107d0ec0)));
  /* 107a97bd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 107a97c0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 107a97c2 mov edx, dword ptr [0x107d0ec0] */
  EDX = (r32((uint32_t)(0x107d0ec0)));
  /* 107a97c8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 107a97cb mov eax, dword ptr [0x107d0ec0] */
  EAX = (r32((uint32_t)(0x107d0ec0)));
  /* 107a97d0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107a97d3 mov edx, dword ptr [0x107d0eb8] */
  EDX = (r32((uint32_t)(0x107d0eb8)));
  /* 107a97d9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 107a97e4 mov eax, dword ptr [0x107d0ec0] */
  EAX = (r32((uint32_t)(0x107d0ec0)));
  /* 107a97e9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107a97ec mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 107a97ef sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107a97f2 mov eax, dword ptr [0x107d0ec0] */
  EAX = (r32((uint32_t)(0x107d0ec0)));
  /* 107a97f7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107a97fa mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 107a97fd mov edx, dword ptr [0x107d0ec0] */
  EDX = (r32((uint32_t)(0x107d0ec0)));
  /* 107a9803 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 107a9806 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 107a980a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a980c jne 0x107a9822 */
  if (!C.zf) goto L_107a9822;
  /* 107a980e mov edx, dword ptr [0x107d0ec0] */
  EDX = (r32((uint32_t)(0x107d0ec0)));
  /* 107a9814 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 107a9817 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 107a9819 mov ecx, dword ptr [0x107d0ec0] */
  ECX = (r32((uint32_t)(0x107d0ec0)));
  /* 107a981f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_107a9822:;
  /* 107a9822 mov edx, dword ptr [0x107d0ec0] */
  EDX = (r32((uint32_t)(0x107d0ec0)));
  /* 107a9828 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a982c jne 0x107a9892 */
  if (!C.zf) goto L_107a9892;
  /* 107a982e cmp dword ptr [0x107d0ec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x107d0ec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9835 jle 0x107a9892 */
  if ((C.zf||C.sf!=C.of)) goto L_107a9892;
  /* 107a9837 mov eax, dword ptr [0x107d0ec0] */
  EAX = (r32((uint32_t)(0x107d0ec0)));
  /* 107a983c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107a983f push ecx */
  push32((uint32_t)(ECX));
  /* 107a9840 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a9842 mov edx, dword ptr [0x107d0ecc] */
  EDX = (r32((uint32_t)(0x107d0ecc)));
  /* 107a9848 push edx */
  push32((uint32_t)(EDX));
  /* 107a9849 call dword ptr [0x107d2370] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2370))), 0x107a984fu);
  /* 107a984f mov eax, dword ptr [0x107d0ec4] */
  EAX = (r32((uint32_t)(0x107d0ec4)));
  /* 107a9854 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107a9857 mov ecx, dword ptr [0x107d0ec8] */
  ECX = (r32((uint32_t)(0x107d0ec8)));
  /* 107a985d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a985f mov edx, dword ptr [0x107d0ec0] */
  EDX = (r32((uint32_t)(0x107d0ec0)));
  /* 107a9865 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9868 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a986a push ecx */
  push32((uint32_t)(ECX));
  /* 107a986b mov eax, dword ptr [0x107d0ec0] */
  EAX = (r32((uint32_t)(0x107d0ec0)));
  /* 107a9870 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9873 push eax */
  push32((uint32_t)(EAX));
  /* 107a9874 mov ecx, dword ptr [0x107d0ec0] */
  ECX = (r32((uint32_t)(0x107d0ec0)));
  /* 107a987a push ecx */
  push32((uint32_t)(ECX));
  /* 107a987b call 0x107abea0 */
  push32(0x107a9880u); f_107abea0();
  /* 107a9880 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9883 mov edx, dword ptr [0x107d0ec4] */
  EDX = (r32((uint32_t)(0x107d0ec4)));
  /* 107a9889 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a988c mov dword ptr [0x107d0ec4], edx */
  w32((uint32_t)(0x107d0ec4), (EDX));
L_107a9892:;
  /* 107a9892 mov dword ptr [0x107d0ec0], 0 */
  w32((uint32_t)(0x107d0ec0), (0x0u));
L_107a989c:;
  /* 107a989c mov esp, ebp */
  ESP = (EBP);
  /* 107a989e pop ebp */
  EBP = (pop32());
  /* 107a989f ret  */
  ESPCHK(0x107a9770u, _esp0);
  ESP += 4; return;
}

/* FUN_100098a0 @ 0x107a98a0 (1565 bytes, 343 insns) */
void f_107a98a0(void) {
  FTRACE(0x107a98a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a98a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a98a1 mov ebp, esp */
  EBP = (ESP);
  /* 107a98a3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a98a9 mov eax, dword ptr [0x107d0ec4] */
  EAX = (r32((uint32_t)(0x107d0ec4)));
  /* 107a98ae imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107a98b1 push eax */
  push32((uint32_t)(EAX));
  /* 107a98b2 mov ecx, dword ptr [0x107d0ec8] */
  ECX = (r32((uint32_t)(0x107d0ec8)));
  /* 107a98b8 push ecx */
  push32((uint32_t)(ECX));
  /* 107a98b9 call dword ptr [0x107d2348] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2348))), 0x107a98bfu);
  /* 107a98bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a98c1 je 0x107a98cb */
  if (C.zf) goto L_107a98cb;
  /* 107a98c3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a98c6 jmp 0x107a9eb9 */
  goto L_107a9eb9;
L_107a98cb:;
  /* 107a98cb mov edx, dword ptr [0x107d0ec8] */
  EDX = (r32((uint32_t)(0x107d0ec8)));
  /* 107a98d1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 107a98d7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 107a98e1 jmp 0x107a98f2 */
  goto L_107a98f2;
L_107a98e3:;
  /* 107a98e3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 107a98e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a98ec mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_107a98f2:;
  /* 107a98f2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 107a98f8 cmp ecx, dword ptr [0x107d0ec4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x107d0ec4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a98fe jge 0x107a9eb7 */
  if ((C.sf==C.of)) goto L_107a9eb7;
  /* 107a9904 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 107a990a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 107a990d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 107a9913 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 107a9918 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 107a991e push ecx */
  push32((uint32_t)(ECX));
  /* 107a991f call dword ptr [0x107d2348] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2348))), 0x107a9925u);
  /* 107a9925 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a9927 je 0x107a9933 */
  if (C.zf) goto L_107a9933;
  /* 107a9929 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 107a992e jmp 0x107a9eb9 */
  goto L_107a9eb9;
L_107a9933:;
  /* 107a9933 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 107a9939 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 107a993c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 107a9942 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 107a9948 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a994e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 107a9951 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 107a9957 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 107a995a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a995d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 107a9967 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 107a9971 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 107a9978 jmp 0x107a9983 */
  goto L_107a9983;
L_107a997a:;
  /* 107a997a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a997d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9980 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_107a9983:;
  /* 107a9983 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9987 jge 0x107a9e7b */
  if ((C.sf==C.of)) goto L_107a9e7b;
  /* 107a998d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 107a9997 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 107a99a1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 107a99ab mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 107a99b5 jmp 0x107a99c6 */
  goto L_107a99c6;
L_107a99b7:;
  /* 107a99b7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 107a99bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a99c0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_107a99c6:;
  /* 107a99c6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a99cd jge 0x107a99e2 */
  if ((C.sf==C.of)) goto L_107a99e2;
  /* 107a99cf mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 107a99d5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 107a99e0 jmp 0x107a99b7 */
  goto L_107a99b7;
L_107a99e2:;
  /* 107a99e2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a99e6 jl 0x107a9e1d */
  if ((C.sf!=C.of)) goto L_107a9e1d;
  /* 107a99ec push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 107a99f1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 107a99f7 push ecx */
  push32((uint32_t)(ECX));
  /* 107a99f8 call dword ptr [0x107d2348] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2348))), 0x107a99feu);
  /* 107a99fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a9a00 je 0x107a9a0c */
  if (C.zf) goto L_107a9a0c;
  /* 107a9a02 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 107a9a07 jmp 0x107a9eb9 */
  goto L_107a9eb9;
L_107a9a0c:;
  /* 107a9a0c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 107a9a12 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107a9a15 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 107a9a1f jmp 0x107a9a30 */
  goto L_107a9a30;
L_107a9a21:;
  /* 107a9a21 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 107a9a27 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9a2a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_107a9a30:;
  /* 107a9a30 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9a37 jge 0x107a9bb4 */
  if ((C.sf==C.of)) goto L_107a9bb4;
  /* 107a9a3d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a9a40 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9a43 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 107a9a49 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 107a9a4f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9a55 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 107a9a5b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 107a9a61 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9a65 jne 0x107a9a72 */
  if (!C.zf) goto L_107a9a72;
  /* 107a9a67 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 107a9a6d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9a70 je 0x107a9a7c */
  if (C.zf) goto L_107a9a7c;
L_107a9a72:;
  /* 107a9a72 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 107a9a77 jmp 0x107a9eb9 */
  goto L_107a9eb9;
L_107a9a7c:;
  /* 107a9a7c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 107a9a82 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107a9a84 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 107a9a8a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 107a9a90 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 107a9a96 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 107a9a9c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 107a9a9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a9aa1 je 0x107a9ad9 */
  if (C.zf) goto L_107a9ad9;
  /* 107a9aa3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 107a9aa9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a9aac mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 107a9ab2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9abc jle 0x107a9ac8 */
  if ((C.zf||C.sf!=C.of)) goto L_107a9ac8;
  /* 107a9abe mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 107a9ac3 jmp 0x107a9eb9 */
  goto L_107a9eb9;
L_107a9ac8:;
  /* 107a9ac8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 107a9ace add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9ad1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 107a9ad7 jmp 0x107a9b1b */
  goto L_107a9b1b;
L_107a9ad9:;
  /* 107a9ad9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 107a9adf sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 107a9ae2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a9ae5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 107a9aeb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9af2 jle 0x107a9afe */
  if ((C.zf||C.sf!=C.of)) goto L_107a9afe;
  /* 107a9af4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_107a9afe:;
  /* 107a9afe mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 107a9b04 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 107a9b0b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9b0e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 107a9b14 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_107a9b1b:;
  /* 107a9b1b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9b22 jl 0x107a9b3d */
  if ((C.sf!=C.of)) goto L_107a9b3d;
  /* 107a9b24 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 107a9b2a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 107a9b2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a9b2f jne 0x107a9b3d */
  if (!C.zf) goto L_107a9b3d;
  /* 107a9b31 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9b3b jle 0x107a9b47 */
  if ((C.zf||C.sf!=C.of)) goto L_107a9b47;
L_107a9b3d:;
  /* 107a9b3d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 107a9b42 jmp 0x107a9eb9 */
  goto L_107a9eb9;
L_107a9b47:;
  /* 107a9b47 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 107a9b4d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9b53 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 107a9b56 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9b5c je 0x107a9b68 */
  if (C.zf) goto L_107a9b68;
  /* 107a9b5e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 107a9b63 jmp 0x107a9eb9 */
  goto L_107a9eb9;
L_107a9b68:;
  /* 107a9b68 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 107a9b6e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9b74 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 107a9b7a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 107a9b80 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9b86 jb 0x107a9a7c */
  if (C.cf) goto L_107a9a7c;
  /* 107a9b8c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 107a9b92 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9b98 je 0x107a9ba4 */
  if (C.zf) goto L_107a9ba4;
  /* 107a9b9a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 107a9b9f jmp 0x107a9eb9 */
  goto L_107a9eb9;
L_107a9ba4:;
  /* 107a9ba4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a9ba7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9bac mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107a9baf jmp 0x107a9a21 */
  goto L_107a9a21;
L_107a9bb4:;
  /* 107a9bb4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a9bb7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107a9bb9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9bbf je 0x107a9bcb */
  if (C.zf) goto L_107a9bcb;
  /* 107a9bc1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 107a9bc6 jmp 0x107a9eb9 */
  goto L_107a9eb9;
L_107a9bcb:;
  /* 107a9bcb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a9bce mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 107a9bd4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 107a9bdb jmp 0x107a9be6 */
  goto L_107a9be6;
L_107a9bdd:;
  /* 107a9bdd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a9be0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9be3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_107a9be6:;
  /* 107a9be6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9bea jge 0x107a9e1d */
  if ((C.sf==C.of)) goto L_107a9e1d;
  /* 107a9bf0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 107a9bfa mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 107a9c00 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_107a9c06:;
  /* 107a9c06 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 107a9c0c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107a9c0f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 107a9c15 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 107a9c1b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9c21 je 0x107a9d4a */
  if (C.zf) goto L_107a9d4a;
  /* 107a9c27 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a9c2a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 107a9c30 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9c37 je 0x107a9d4a */
  if (C.zf) goto L_107a9d4a;
  /* 107a9c3d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 107a9c43 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9c49 jb 0x107a9c5e */
  if (C.cf) goto L_107a9c5e;
  /* 107a9c4b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 107a9c51 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9c56 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9c5c jb 0x107a9c68 */
  if (C.cf) goto L_107a9c68;
L_107a9c5e:;
  /* 107a9c5e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 107a9c63 jmp 0x107a9eb9 */
  goto L_107a9eb9;
L_107a9c68:;
  /* 107a9c68 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 107a9c6e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 107a9c74 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 107a9c7a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 107a9c80 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9c83 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 107a9c86 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a9c89 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9c8e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_107a9c94:;
  /* 107a9c94 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a9c97 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9c9d je 0x107a9cbe */
  if (C.zf) goto L_107a9cbe;
  /* 107a9c9f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a9ca2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9ca8 jne 0x107a9cac */
  if (!C.zf) goto L_107a9cac;
  /* 107a9caa jmp 0x107a9cbe */
  goto L_107a9cbe;
L_107a9cac:;
  /* 107a9cac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a9caf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107a9cb1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 107a9cb4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a9cb7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9cb9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 107a9cbc jmp 0x107a9c94 */
  goto L_107a9c94;
L_107a9cbe:;
  /* 107a9cbe mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a9cc1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9cc7 jne 0x107a9cd3 */
  if (!C.zf) goto L_107a9cd3;
  /* 107a9cc9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 107a9cce jmp 0x107a9eb9 */
  goto L_107a9eb9;
L_107a9cd3:;
  /* 107a9cd3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 107a9cd9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107a9cdb sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 107a9cde sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a9ce1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 107a9ce7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9cee jle 0x107a9cfa */
  if ((C.zf||C.sf!=C.of)) goto L_107a9cfa;
  /* 107a9cf0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_107a9cfa:;
  /* 107a9cfa mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 107a9d00 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9d03 je 0x107a9d0f */
  if (C.zf) goto L_107a9d0f;
  /* 107a9d05 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 107a9d0a jmp 0x107a9eb9 */
  goto L_107a9eb9;
L_107a9d0f:;
  /* 107a9d0f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 107a9d15 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 107a9d18 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9d1e je 0x107a9d2a */
  if (C.zf) goto L_107a9d2a;
  /* 107a9d20 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 107a9d25 jmp 0x107a9eb9 */
  goto L_107a9eb9;
L_107a9d2a:;
  /* 107a9d2a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 107a9d30 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 107a9d36 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 107a9d3c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9d3f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 107a9d45 jmp 0x107a9c06 */
  goto L_107a9c06;
L_107a9d4a:;
  /* 107a9d4a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9d51 je 0x107a9dc1 */
  if (C.zf) goto L_107a9dc1;
  /* 107a9d53 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9d57 jge 0x107a9d8b */
  if ((C.sf==C.of)) goto L_107a9d8b;
  /* 107a9d59 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107a9d5e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a9d61 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107a9d63 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 107a9d69 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107a9d6b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 107a9d71 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107a9d76 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a9d79 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107a9d7b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 107a9d81 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107a9d83 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 107a9d89 jmp 0x107a9dc1 */
  goto L_107a9dc1;
L_107a9d8b:;
  /* 107a9d8b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a9d8e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a9d91 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107a9d96 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107a9d98 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 107a9d9e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107a9da0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 107a9da6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a9da9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a9dac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107a9db1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107a9db3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 107a9db9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107a9dbb mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_107a9dc1:;
  /* 107a9dc1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 107a9dc7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107a9dca cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9dd0 jne 0x107a9de4 */
  if (!C.zf) goto L_107a9de4;
  /* 107a9dd2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a9dd5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 107a9ddb cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9de2 je 0x107a9dee */
  if (C.zf) goto L_107a9dee;
L_107a9de4:;
  /* 107a9de4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 107a9de9 jmp 0x107a9eb9 */
  goto L_107a9eb9;
L_107a9dee:;
  /* 107a9dee mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 107a9df4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 107a9df7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9dfd je 0x107a9e09 */
  if (C.zf) goto L_107a9e09;
  /* 107a9dff mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 107a9e04 jmp 0x107a9eb9 */
  goto L_107a9eb9;
L_107a9e09:;
  /* 107a9e09 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 107a9e0f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9e12 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 107a9e18 jmp 0x107a9bdd */
  goto L_107a9bdd;
L_107a9e1d:;
  /* 107a9e1d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a9e20 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 107a9e26 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 107a9e2c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9e30 jne 0x107a9e4a */
  if (!C.zf) goto L_107a9e4a;
  /* 107a9e32 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a9e35 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 107a9e3b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 107a9e41 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9e48 je 0x107a9e51 */
  if (C.zf) goto L_107a9e51;
L_107a9e4a:;
  /* 107a9e4a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 107a9e4f jmp 0x107a9eb9 */
  goto L_107a9eb9;
L_107a9e51:;
  /* 107a9e51 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 107a9e57 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9e5d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 107a9e63 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a9e66 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9e6b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107a9e6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a9e71 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 107a9e73 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107a9e76 jmp 0x107a997a */
  goto L_107a997a;
L_107a9e7b:;
  /* 107a9e7b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 107a9e81 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 107a9e87 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9e89 jne 0x107a9e9c */
  if (!C.zf) goto L_107a9e9c;
  /* 107a9e8b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 107a9e91 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 107a9e97 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9e9a je 0x107a9ea3 */
  if (C.zf) goto L_107a9ea3;
L_107a9e9c:;
  /* 107a9e9c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 107a9ea1 jmp 0x107a9eb9 */
  goto L_107a9eb9;
L_107a9ea3:;
  /* 107a9ea3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 107a9ea9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9eac mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 107a9eb2 jmp 0x107a98e3 */
  goto L_107a98e3;
L_107a9eb7:;
  /* 107a9eb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107a9eb9:;
  /* 107a9eb9 mov esp, ebp */
  ESP = (EBP);
  /* 107a9ebb pop ebp */
  EBP = (pop32());
  /* 107a9ebc ret  */
  ESPCHK(0x107a98a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ec0 @ 0x107a9ec0 (250 bytes, 92 insns) */
void f_107a9ec0(void) {
  FTRACE(0x107a9ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a9ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a9ec1 mov ebp, esp */
  EBP = (ESP);
  /* 107a9ec3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a9ec6 push ebx */
  push32((uint32_t)(EBX));
  /* 107a9ec7 push esi */
  push32((uint32_t)(ESI));
  /* 107a9ec8 push edi */
  push32((uint32_t)(EDI));
  /* 107a9ec9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 107a9ecc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 107a9ecf lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 107a9ed2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_107a9ed5:;
  /* 107a9ed5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9ed9 jne 0x107a9ef9 */
  if (!C.zf) goto L_107a9ef9;
  /* 107a9edb push 0x107caf10 */
  push32((uint32_t)(0x107caf10u));
  /* 107a9ee0 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a9ee2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 107a9ee4 push 0x107caf04 */
  push32((uint32_t)(0x107caf04u));
  /* 107a9ee9 push 2 */
  push32((uint32_t)(0x2u));
  /* 107a9eeb call 0x107a3070 */
  push32(0x107a9ef0u); f_107a3070();
  /* 107a9ef0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9ef3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9ef6 jne 0x107a9ef9 */
  if (!C.zf) goto L_107a9ef9;
  /* 107a9ef8 int3  */
  x86_unimpl("int3 @ 0x107a9ef8");
L_107a9ef9:;
  /* 107a9ef9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a9efb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a9efd jne 0x107a9ed5 */
  if (!C.zf) goto L_107a9ed5;
L_107a9eff:;
  /* 107a9eff cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9f03 jne 0x107a9f23 */
  if (!C.zf) goto L_107a9f23;
  /* 107a9f05 push 0x107caef4 */
  push32((uint32_t)(0x107caef4u));
  /* 107a9f0a push 0 */
  push32((uint32_t)(0x0u));
  /* 107a9f0c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 107a9f0e push 0x107caf04 */
  push32((uint32_t)(0x107caf04u));
  /* 107a9f13 push 2 */
  push32((uint32_t)(0x2u));
  /* 107a9f15 call 0x107a3070 */
  push32(0x107a9f1au); f_107a3070();
  /* 107a9f1a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9f1d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9f20 jne 0x107a9f23 */
  if (!C.zf) goto L_107a9f23;
  /* 107a9f22 int3  */
  x86_unimpl("int3 @ 0x107a9f22");
L_107a9f23:;
  /* 107a9f23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a9f25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a9f27 jne 0x107a9eff */
  if (!C.zf) goto L_107a9eff;
  /* 107a9f29 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a9f2c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 107a9f33 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a9f36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a9f39 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 107a9f3c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a9f3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a9f42 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 107a9f44 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a9f47 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 107a9f4e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107a9f51 push ecx */
  push32((uint32_t)(ECX));
  /* 107a9f52 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a9f55 push edx */
  push32((uint32_t)(EDX));
  /* 107a9f56 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a9f59 push eax */
  push32((uint32_t)(EAX));
  /* 107a9f5a call 0x107aaf40 */
  push32(0x107a9f5fu); f_107aaf40();
  /* 107a9f5f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9f62 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 107a9f65 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a9f68 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107a9f6b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a9f6e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a9f71 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 107a9f74 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a9f77 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9f7b jl 0x107a9f9f */
  if ((C.sf!=C.of)) goto L_107a9f9f;
  /* 107a9f7d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a9f80 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107a9f82 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 107a9f85 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107a9f87 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 107a9f8d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 107a9f90 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a9f93 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107a9f95 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9f98 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a9f9b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107a9f9d jmp 0x107a9fb0 */
  goto L_107a9fb0;
L_107a9f9f:;
  /* 107a9f9f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a9fa2 push edx */
  push32((uint32_t)(EDX));
  /* 107a9fa3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a9fa5 call 0x107aacc0 */
  push32(0x107a9faau); f_107aacc0();
  /* 107a9faa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9fad mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_107a9fb0:;
  /* 107a9fb0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107a9fb3 pop edi */
  EDI = (pop32());
  /* 107a9fb4 pop esi */
  ESI = (pop32());
  /* 107a9fb5 pop ebx */
  EBX = (pop32());
  /* 107a9fb6 mov esp, ebp */
  ESP = (EBP);
  /* 107a9fb8 pop ebp */
  EBP = (pop32());
  /* 107a9fb9 ret  */
  ESPCHK(0x107a9ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009fc0 @ 0x107a9fc0 (183 bytes, 58 insns) */
void f_107a9fc0(void) {
  FTRACE(0x107a9fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a9fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a9fc1 mov ebp, esp */
  EBP = (ESP);
  /* 107a9fc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a9fc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a9fc9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a9fcc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a9fd1 ja 0x107a9fea */
  if ((!C.cf&&!C.zf)) goto L_107a9fea;
  /* 107a9fd3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a9fd6 mov edx, dword ptr [0x107cdc98] */
  EDX = (r32((uint32_t)(0x107cdc98)));
  /* 107a9fdc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a9fde mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 107a9fe2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 107a9fe5 jmp 0x107aa073 */
  goto L_107aa073;
L_107a9fea:;
  /* 107a9fea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a9fed sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 107a9ff0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 107a9ff6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 107a9ffc mov edx, dword ptr [0x107cdc98] */
  EDX = (r32((uint32_t)(0x107cdc98)));
  /* 107aa002 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107aa004 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 107aa008 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 107aa00d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107aa00f je 0x107aa033 */
  if (C.zf) goto L_107aa033;
  /* 107aa011 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aa014 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 107aa017 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 107aa01d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 107aa020 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 107aa023 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 107aa026 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 107aa02a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 107aa031 jmp 0x107aa044 */
  goto L_107aa044;
L_107aa033:;
  /* 107aa033 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 107aa036 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 107aa039 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 107aa03d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_107aa044:;
  /* 107aa044 push 1 */
  push32((uint32_t)(0x1u));
  /* 107aa046 push 0 */
  push32((uint32_t)(0x0u));
  /* 107aa048 push 0 */
  push32((uint32_t)(0x0u));
  /* 107aa04a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 107aa04d push ecx */
  push32((uint32_t)(ECX));
  /* 107aa04e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aa051 push edx */
  push32((uint32_t)(EDX));
  /* 107aa052 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 107aa055 push eax */
  push32((uint32_t)(EAX));
  /* 107aa056 push 1 */
  push32((uint32_t)(0x1u));
  /* 107aa058 call 0x107ac1e0 */
  push32(0x107aa05du); f_107ac1e0();
  /* 107aa05d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa060 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107aa062 jne 0x107aa068 */
  if (!C.zf) goto L_107aa068;
  /* 107aa064 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107aa066 jmp 0x107aa073 */
  goto L_107aa073;
L_107aa068:;
  /* 107aa068 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aa06b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107aa070 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_107aa073:;
  /* 107aa073 mov esp, ebp */
  ESP = (EBP);
  /* 107aa075 pop ebp */
  EBP = (pop32());
  /* 107aa076 ret  */
  ESPCHK(0x107a9fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a080 @ 0x107aa080 (836 bytes, 238 insns) */
void f_107aa080(void) {
  FTRACE(0x107aa080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107aa080 push ebp */
  push32((uint32_t)(EBP));
  /* 107aa081 mov ebp, esp */
  EBP = (ESP);
  /* 107aa083 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107aa086 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 107aa088 call 0x107a79b0 */
  push32(0x107aa08du); f_107a79b0();
  /* 107aa08d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa090 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aa093 push eax */
  push32((uint32_t)(EAX));
  /* 107aa094 call 0x107aa3d0 */
  push32(0x107aa099u); f_107aa3d0();
  /* 107aa099 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa09c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107aa09f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aa0a2 cmp ecx, dword ptr [0x107d0c04] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x107d0c04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa0a8 jne 0x107aa0bb */
  if (!C.zf) goto L_107aa0bb;
  /* 107aa0aa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 107aa0ac call 0x107a7a50 */
  push32(0x107aa0b1u); f_107a7a50();
  /* 107aa0b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa0b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107aa0b6 jmp 0x107aa3c0 */
  goto L_107aa3c0;
L_107aa0bb:;
  /* 107aa0bb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa0bf jne 0x107aa0dc */
  if (!C.zf) goto L_107aa0dc;
  /* 107aa0c1 call 0x107aa4b0 */
  push32(0x107aa0c6u); f_107aa4b0();
  /* 107aa0c6 call 0x107aa530 */
  push32(0x107aa0cbu); f_107aa530();
  /* 107aa0cb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 107aa0cd call 0x107a7a50 */
  push32(0x107aa0d2u); f_107a7a50();
  /* 107aa0d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa0d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107aa0d7 jmp 0x107aa3c0 */
  goto L_107aa3c0;
L_107aa0dc:;
  /* 107aa0dc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107aa0e3 jmp 0x107aa0ee */
  goto L_107aa0ee;
L_107aa0e5:;
  /* 107aa0e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aa0e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa0eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_107aa0ee:;
  /* 107aa0ee cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa0f2 jae 0x107aa23f */
  if (!C.cf) goto L_107aa23f;
  /* 107aa0f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aa0fb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107aa0fe mov ecx, dword ptr [eax + 0x107cdeb8] */
  ECX = (r32((uint32_t)(EAX + 0x107cdeb8)));
  /* 107aa104 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa107 jne 0x107aa23a */
  if (!C.zf) goto L_107aa23a;
  /* 107aa10d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 107aa114 jmp 0x107aa11f */
  goto L_107aa11f;
L_107aa116:;
  /* 107aa116 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107aa119 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa11c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_107aa11f:;
  /* 107aa11f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa126 jae 0x107aa134 */
  if (!C.cf) goto L_107aa134;
  /* 107aa128 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107aa12b mov byte ptr [eax + 0x107d0da0], 0 */
  w8((uint32_t)(EAX + 0x107d0da0), (0x0u));
  /* 107aa132 jmp 0x107aa116 */
  goto L_107aa116;
L_107aa134:;
  /* 107aa134 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 107aa13b jmp 0x107aa146 */
  goto L_107aa146;
L_107aa13d:;
  /* 107aa13d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aa140 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa143 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_107aa146:;
  /* 107aa146 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa14a jae 0x107aa1c7 */
  if (!C.cf) goto L_107aa1c7;
  /* 107aa14c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aa14f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107aa152 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aa155 lea ecx, [edx + eax*8 + 0x107cdec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x107cdec8));
  /* 107aa15c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107aa15f jmp 0x107aa16a */
  goto L_107aa16a;
L_107aa161:;
  /* 107aa161 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aa164 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa167 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_107aa16a:;
  /* 107aa16a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aa16d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107aa16f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107aa171 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107aa173 je 0x107aa1c2 */
  if (C.zf) goto L_107aa1c2;
  /* 107aa175 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aa178 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107aa17a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 107aa17d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107aa17f je 0x107aa1c2 */
  if (C.zf) goto L_107aa1c2;
  /* 107aa181 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aa184 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107aa186 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107aa188 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 107aa18b jmp 0x107aa196 */
  goto L_107aa196;
L_107aa18d:;
  /* 107aa18d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107aa190 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa193 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_107aa196:;
  /* 107aa196 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aa199 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107aa19b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 107aa19e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa1a1 ja 0x107aa1c0 */
  if ((!C.cf&&!C.zf)) goto L_107aa1c0;
  /* 107aa1a3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107aa1a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aa1a9 mov dl, byte ptr [eax + 0x107d0da1] */
  DL = (r8((uint32_t)(EAX + 0x107d0da1)));
  /* 107aa1af or dl, byte ptr [ecx + 0x107cdeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x107cdeb0))); DL = (_r); fl_logic(_r,8); }
  /* 107aa1b5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107aa1b8 mov byte ptr [eax + 0x107d0da1], dl */
  w8((uint32_t)(EAX + 0x107d0da1), (DL));
  /* 107aa1be jmp 0x107aa18d */
  goto L_107aa18d;
L_107aa1c0:;
  /* 107aa1c0 jmp 0x107aa161 */
  goto L_107aa161;
L_107aa1c2:;
  /* 107aa1c2 jmp 0x107aa13d */
  goto L_107aa13d;
L_107aa1c7:;
  /* 107aa1c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aa1ca mov dword ptr [0x107d0c04], ecx */
  w32((uint32_t)(0x107d0c04), (ECX));
  /* 107aa1d0 mov dword ptr [0x107d0c8c], 1 */
  w32((uint32_t)(0x107d0c8c), (0x1u));
  /* 107aa1da mov edx, dword ptr [0x107d0c04] */
  EDX = (r32((uint32_t)(0x107d0c04)));
  /* 107aa1e0 push edx */
  push32((uint32_t)(EDX));
  /* 107aa1e1 call 0x107aa430 */
  push32(0x107aa1e6u); f_107aa430();
  /* 107aa1e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa1e9 mov dword ptr [0x107d0ea4], eax */
  w32((uint32_t)(0x107d0ea4), (EAX));
  /* 107aa1ee mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 107aa1f5 jmp 0x107aa200 */
  goto L_107aa200;
L_107aa1f7:;
  /* 107aa1f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aa1fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa1fd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_107aa200:;
  /* 107aa200 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa204 jae 0x107aa224 */
  if (!C.cf) goto L_107aa224;
  /* 107aa206 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aa209 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107aa20c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aa20f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aa212 mov cx, word ptr [ecx + eax*2 + 0x107cdebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x107cdebc)));
  /* 107aa21a mov word ptr [edx*2 + 0x107d0c80], cx */
  w16((uint32_t)(EDX*2 + 0x107d0c80), (CX));
  /* 107aa222 jmp 0x107aa1f7 */
  goto L_107aa1f7;
L_107aa224:;
  /* 107aa224 call 0x107aa530 */
  push32(0x107aa229u); f_107aa530();
  /* 107aa229 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 107aa22b call 0x107a7a50 */
  push32(0x107aa230u); f_107a7a50();
  /* 107aa230 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa233 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107aa235 jmp 0x107aa3c0 */
  goto L_107aa3c0;
L_107aa23a:;
  /* 107aa23a jmp 0x107aa0e5 */
  goto L_107aa0e5;
L_107aa23f:;
  /* 107aa23f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 107aa242 push edx */
  push32((uint32_t)(EDX));
  /* 107aa243 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aa246 push eax */
  push32((uint32_t)(EAX));
  /* 107aa247 call dword ptr [0x107d22d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22d8))), 0x107aa24du);
  /* 107aa24d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa250 jne 0x107aa392 */
  if (!C.zf) goto L_107aa392;
  /* 107aa256 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 107aa25d jmp 0x107aa268 */
  goto L_107aa268;
L_107aa25f:;
  /* 107aa25f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107aa262 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa265 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_107aa268:;
  /* 107aa268 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa26f jae 0x107aa27d */
  if (!C.cf) goto L_107aa27d;
  /* 107aa271 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107aa274 mov byte ptr [edx + 0x107d0da0], 0 */
  w8((uint32_t)(EDX + 0x107d0da0), (0x0u));
  /* 107aa27b jmp 0x107aa25f */
  goto L_107aa25f;
L_107aa27d:;
  /* 107aa27d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aa280 mov dword ptr [0x107d0c04], eax */
  w32((uint32_t)(0x107d0c04), (EAX));
  /* 107aa285 mov dword ptr [0x107d0ea4], 0 */
  w32((uint32_t)(0x107d0ea4), (0x0u));
  /* 107aa28f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa293 jbe 0x107aa34e */
  if ((C.cf||C.zf)) goto L_107aa34e;
  /* 107aa299 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 107aa29c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 107aa29f jmp 0x107aa2aa */
  goto L_107aa2aa;
L_107aa2a1:;
  /* 107aa2a1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 107aa2a4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa2a7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_107aa2aa:;
  /* 107aa2aa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107aa2ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107aa2af mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107aa2b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107aa2b3 je 0x107aa2fc */
  if (C.zf) goto L_107aa2fc;
  /* 107aa2b5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 107aa2b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107aa2ba mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 107aa2bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107aa2bf je 0x107aa2fc */
  if (C.zf) goto L_107aa2fc;
  /* 107aa2c1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107aa2c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107aa2c6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107aa2c8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 107aa2cb jmp 0x107aa2d6 */
  goto L_107aa2d6;
L_107aa2cd:;
  /* 107aa2cd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107aa2d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa2d3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_107aa2d6:;
  /* 107aa2d6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107aa2d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107aa2db mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 107aa2de cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa2e1 ja 0x107aa2fa */
  if ((!C.cf&&!C.zf)) goto L_107aa2fa;
  /* 107aa2e3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107aa2e6 mov cl, byte ptr [eax + 0x107d0da1] */
  CL = (r8((uint32_t)(EAX + 0x107d0da1)));
  /* 107aa2ec or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 107aa2ef mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107aa2f2 mov byte ptr [edx + 0x107d0da1], cl */
  w8((uint32_t)(EDX + 0x107d0da1), (CL));
  /* 107aa2f8 jmp 0x107aa2cd */
  goto L_107aa2cd;
L_107aa2fa:;
  /* 107aa2fa jmp 0x107aa2a1 */
  goto L_107aa2a1;
L_107aa2fc:;
  /* 107aa2fc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 107aa303 jmp 0x107aa30e */
  goto L_107aa30e;
L_107aa305:;
  /* 107aa305 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107aa308 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa30b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_107aa30e:;
  /* 107aa30e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa315 jae 0x107aa32e */
  if (!C.cf) goto L_107aa32e;
  /* 107aa317 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107aa31a mov dl, byte ptr [ecx + 0x107d0da1] */
  DL = (r8((uint32_t)(ECX + 0x107d0da1)));
  /* 107aa320 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 107aa323 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107aa326 mov byte ptr [eax + 0x107d0da1], dl */
  w8((uint32_t)(EAX + 0x107d0da1), (DL));
  /* 107aa32c jmp 0x107aa305 */
  goto L_107aa305;
L_107aa32e:;
  /* 107aa32e mov ecx, dword ptr [0x107d0c04] */
  ECX = (r32((uint32_t)(0x107d0c04)));
  /* 107aa334 push ecx */
  push32((uint32_t)(ECX));
  /* 107aa335 call 0x107aa430 */
  push32(0x107aa33au); f_107aa430();
  /* 107aa33a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa33d mov dword ptr [0x107d0ea4], eax */
  w32((uint32_t)(0x107d0ea4), (EAX));
  /* 107aa342 mov dword ptr [0x107d0c8c], 1 */
  w32((uint32_t)(0x107d0c8c), (0x1u));
  /* 107aa34c jmp 0x107aa358 */
  goto L_107aa358;
L_107aa34e:;
  /* 107aa34e mov dword ptr [0x107d0c8c], 0 */
  w32((uint32_t)(0x107d0c8c), (0x0u));
L_107aa358:;
  /* 107aa358 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 107aa35f jmp 0x107aa36a */
  goto L_107aa36a;
L_107aa361:;
  /* 107aa361 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aa364 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa367 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_107aa36a:;
  /* 107aa36a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa36e jae 0x107aa37f */
  if (!C.cf) goto L_107aa37f;
  /* 107aa370 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aa373 mov word ptr [eax*2 + 0x107d0c80], 0 */
  w16((uint32_t)(EAX*2 + 0x107d0c80), (0x0u));
  /* 107aa37d jmp 0x107aa361 */
  goto L_107aa361;
L_107aa37f:;
  /* 107aa37f call 0x107aa530 */
  push32(0x107aa384u); f_107aa530();
  /* 107aa384 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 107aa386 call 0x107a7a50 */
  push32(0x107aa38bu); f_107a7a50();
  /* 107aa38b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa38e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107aa390 jmp 0x107aa3c0 */
  goto L_107aa3c0;
L_107aa392:;
  /* 107aa392 cmp dword ptr [0x107cf720], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf720))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa399 je 0x107aa3b3 */
  if (C.zf) goto L_107aa3b3;
  /* 107aa39b call 0x107aa4b0 */
  push32(0x107aa3a0u); f_107aa4b0();
  /* 107aa3a0 call 0x107aa530 */
  push32(0x107aa3a5u); f_107aa530();
  /* 107aa3a5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 107aa3a7 call 0x107a7a50 */
  push32(0x107aa3acu); f_107a7a50();
  /* 107aa3ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa3af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107aa3b1 jmp 0x107aa3c0 */
  goto L_107aa3c0;
L_107aa3b3:;
  /* 107aa3b3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 107aa3b5 call 0x107a7a50 */
  push32(0x107aa3bau); f_107a7a50();
  /* 107aa3ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa3bd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_107aa3c0:;
  /* 107aa3c0 mov esp, ebp */
  ESP = (EBP);
  /* 107aa3c2 pop ebp */
  EBP = (pop32());
  /* 107aa3c3 ret  */
  ESPCHK(0x107aa080u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x107aa3d0 (89 bytes, 21 insns) */
void f_107aa3d0(void) {
  FTRACE(0x107aa3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107aa3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 107aa3d1 mov ebp, esp */
  EBP = (ESP);
  /* 107aa3d3 mov dword ptr [0x107cf720], 0 */
  w32((uint32_t)(0x107cf720), (0x0u));
  /* 107aa3dd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa3e1 jne 0x107aa3f5 */
  if (!C.zf) goto L_107aa3f5;
  /* 107aa3e3 mov dword ptr [0x107cf720], 1 */
  w32((uint32_t)(0x107cf720), (0x1u));
  /* 107aa3ed call dword ptr [0x107d22d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22d0))), 0x107aa3f3u);
  /* 107aa3f3 jmp 0x107aa427 */
  goto L_107aa427;
L_107aa3f5:;
  /* 107aa3f5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa3f9 jne 0x107aa40d */
  if (!C.zf) goto L_107aa40d;
  /* 107aa3fb mov dword ptr [0x107cf720], 1 */
  w32((uint32_t)(0x107cf720), (0x1u));
  /* 107aa405 call dword ptr [0x107d22d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22d4))), 0x107aa40bu);
  /* 107aa40b jmp 0x107aa427 */
  goto L_107aa427;
L_107aa40d:;
  /* 107aa40d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa411 jne 0x107aa424 */
  if (!C.zf) goto L_107aa424;
  /* 107aa413 mov dword ptr [0x107cf720], 1 */
  w32((uint32_t)(0x107cf720), (0x1u));
  /* 107aa41d mov eax, dword ptr [0x107cf740] */
  EAX = (r32((uint32_t)(0x107cf740)));
  /* 107aa422 jmp 0x107aa427 */
  goto L_107aa427;
L_107aa424:;
  /* 107aa424 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_107aa427:;
  /* 107aa427 pop ebp */
  EBP = (pop32());
  /* 107aa428 ret  */
  ESPCHK(0x107aa3d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a430 @ 0x107aa430 (80 bytes, 26 insns) [1 switch table(s)] */
void f_107aa430(void) {
  FTRACE(0x107aa430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107aa430 push ebp */
  push32((uint32_t)(EBP));
  /* 107aa431 mov ebp, esp */
  EBP = (ESP);
  /* 107aa433 push ecx */
  push32((uint32_t)(ECX));
  /* 107aa434 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aa437 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107aa43a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aa43d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107aa443 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107aa446 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa44a ja 0x107aa47a */
  if ((!C.cf&&!C.zf)) goto L_107aa47a;
  /* 107aa44c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aa44f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107aa451 mov dl, byte ptr [eax + 0x107aa494] */
  DL = (r8((uint32_t)(EAX + 0x107aa494)));
  /* 107aa457 jmp dword ptr [edx*4 + 0x107aa480] */
  switch (EDX) {
    case 0: goto L_107aa45e;
    case 1: goto L_107aa465;
    case 2: goto L_107aa46c;
    case 3: goto L_107aa473;
    case 4: goto L_107aa47a;
    default: x86_unimpl("switch@0x107aa457 out of table"); return;
  }
L_107aa45e:;
  /* 107aa45e mov eax, 0x411 */
  EAX = (0x411u);
  /* 107aa463 jmp 0x107aa47c */
  goto L_107aa47c;
L_107aa465:;
  /* 107aa465 mov eax, 0x804 */
  EAX = (0x804u);
  /* 107aa46a jmp 0x107aa47c */
  goto L_107aa47c;
L_107aa46c:;
  /* 107aa46c mov eax, 0x412 */
  EAX = (0x412u);
  /* 107aa471 jmp 0x107aa47c */
  goto L_107aa47c;
L_107aa473:;
  /* 107aa473 mov eax, 0x404 */
  EAX = (0x404u);
  /* 107aa478 jmp 0x107aa47c */
  goto L_107aa47c;
L_107aa47a:;
  /* 107aa47a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107aa47c:;
  /* 107aa47c mov esp, ebp */
  ESP = (EBP);
  /* 107aa47e pop ebp */
  EBP = (pop32());
  /* 107aa47f ret  */
  ESPCHK(0x107aa430u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x107aa4b0 (116 bytes, 29 insns) */
void f_107aa4b0(void) {
  FTRACE(0x107aa4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107aa4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107aa4b1 mov ebp, esp */
  EBP = (ESP);
  /* 107aa4b3 push ecx */
  push32((uint32_t)(ECX));
  /* 107aa4b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107aa4bb jmp 0x107aa4c6 */
  goto L_107aa4c6;
L_107aa4bd:;
  /* 107aa4bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aa4c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa4c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107aa4c6:;
  /* 107aa4c6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa4cd jge 0x107aa4db */
  if ((C.sf==C.of)) goto L_107aa4db;
  /* 107aa4cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aa4d2 mov byte ptr [ecx + 0x107d0da0], 0 */
  w8((uint32_t)(ECX + 0x107d0da0), (0x0u));
  /* 107aa4d9 jmp 0x107aa4bd */
  goto L_107aa4bd;
L_107aa4db:;
  /* 107aa4db mov dword ptr [0x107d0c04], 0 */
  w32((uint32_t)(0x107d0c04), (0x0u));
  /* 107aa4e5 mov dword ptr [0x107d0c8c], 0 */
  w32((uint32_t)(0x107d0c8c), (0x0u));
  /* 107aa4ef mov dword ptr [0x107d0ea4], 0 */
  w32((uint32_t)(0x107d0ea4), (0x0u));
  /* 107aa4f9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107aa500 jmp 0x107aa50b */
  goto L_107aa50b;
L_107aa502:;
  /* 107aa502 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aa505 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa508 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_107aa50b:;
  /* 107aa50b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa50f jge 0x107aa520 */
  if ((C.sf==C.of)) goto L_107aa520;
  /* 107aa511 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aa514 mov word ptr [eax*2 + 0x107d0c80], 0 */
  w16((uint32_t)(EAX*2 + 0x107d0c80), (0x0u));
  /* 107aa51e jmp 0x107aa502 */
  goto L_107aa502;
L_107aa520:;
  /* 107aa520 mov esp, ebp */
  ESP = (EBP);
  /* 107aa522 pop ebp */
  EBP = (pop32());
  /* 107aa523 ret  */
  ESPCHK(0x107aa4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a530 @ 0x107aa530 (770 bytes, 175 insns) */
void f_107aa530(void) {
  FTRACE(0x107aa530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107aa530 push ebp */
  push32((uint32_t)(EBP));
  /* 107aa531 mov ebp, esp */
  EBP = (ESP);
  /* 107aa533 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107aa539 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 107aa53f push eax */
  push32((uint32_t)(EAX));
  /* 107aa540 mov ecx, dword ptr [0x107d0c04] */
  ECX = (r32((uint32_t)(0x107d0c04)));
  /* 107aa546 push ecx */
  push32((uint32_t)(ECX));
  /* 107aa547 call dword ptr [0x107d22d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22d8))), 0x107aa54du);
  /* 107aa54d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa550 jne 0x107aa769 */
  if (!C.zf) goto L_107aa769;
  /* 107aa556 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 107aa560 jmp 0x107aa571 */
  goto L_107aa571;
L_107aa562:;
  /* 107aa562 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107aa568 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa56b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_107aa571:;
  /* 107aa571 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa57b jae 0x107aa592 */
  if (!C.cf) goto L_107aa592;
  /* 107aa57d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107aa583 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 107aa589 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 107aa590 jmp 0x107aa562 */
  goto L_107aa562;
L_107aa592:;
  /* 107aa592 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 107aa599 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 107aa59f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107aa5a2 jmp 0x107aa5ad */
  goto L_107aa5ad;
L_107aa5a4:;
  /* 107aa5a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aa5a7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa5aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107aa5ad:;
  /* 107aa5ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aa5b0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107aa5b2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107aa5b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107aa5b6 je 0x107aa5f8 */
  if (C.zf) goto L_107aa5f8;
  /* 107aa5b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aa5bb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107aa5bd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107aa5bf mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 107aa5c5 jmp 0x107aa5d6 */
  goto L_107aa5d6;
L_107aa5c7:;
  /* 107aa5c7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107aa5cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa5d0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_107aa5d6:;
  /* 107aa5d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aa5d9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107aa5db mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 107aa5de cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa5e4 ja 0x107aa5f6 */
  if ((!C.cf&&!C.zf)) goto L_107aa5f6;
  /* 107aa5e6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107aa5ec mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 107aa5f4 jmp 0x107aa5c7 */
  goto L_107aa5c7;
L_107aa5f6:;
  /* 107aa5f6 jmp 0x107aa5a4 */
  goto L_107aa5a4;
L_107aa5f8:;
  /* 107aa5f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 107aa5fa mov eax, dword ptr [0x107d0ea4] */
  EAX = (r32((uint32_t)(0x107d0ea4)));
  /* 107aa5ff push eax */
  push32((uint32_t)(EAX));
  /* 107aa600 mov ecx, dword ptr [0x107d0c04] */
  ECX = (r32((uint32_t)(0x107d0c04)));
  /* 107aa606 push ecx */
  push32((uint32_t)(ECX));
  /* 107aa607 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 107aa60d push edx */
  push32((uint32_t)(EDX));
  /* 107aa60e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 107aa613 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 107aa619 push eax */
  push32((uint32_t)(EAX));
  /* 107aa61a push 1 */
  push32((uint32_t)(0x1u));
  /* 107aa61c call 0x107ac1e0 */
  push32(0x107aa621u); f_107ac1e0();
  /* 107aa621 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa624 push 0 */
  push32((uint32_t)(0x0u));
  /* 107aa626 mov ecx, dword ptr [0x107d0c04] */
  ECX = (r32((uint32_t)(0x107d0c04)));
  /* 107aa62c push ecx */
  push32((uint32_t)(ECX));
  /* 107aa62d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 107aa632 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 107aa638 push edx */
  push32((uint32_t)(EDX));
  /* 107aa639 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 107aa63e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 107aa644 push eax */
  push32((uint32_t)(EAX));
  /* 107aa645 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 107aa64a mov ecx, dword ptr [0x107d0ea4] */
  ECX = (r32((uint32_t)(0x107d0ea4)));
  /* 107aa650 push ecx */
  push32((uint32_t)(ECX));
  /* 107aa651 call 0x107ac3a0 */
  push32(0x107aa656u); f_107ac3a0();
  /* 107aa656 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa659 push 0 */
  push32((uint32_t)(0x0u));
  /* 107aa65b mov edx, dword ptr [0x107d0c04] */
  EDX = (r32((uint32_t)(0x107d0c04)));
  /* 107aa661 push edx */
  push32((uint32_t)(EDX));
  /* 107aa662 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 107aa667 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 107aa66d push eax */
  push32((uint32_t)(EAX));
  /* 107aa66e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 107aa673 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 107aa679 push ecx */
  push32((uint32_t)(ECX));
  /* 107aa67a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 107aa67f mov edx, dword ptr [0x107d0ea4] */
  EDX = (r32((uint32_t)(0x107d0ea4)));
  /* 107aa685 push edx */
  push32((uint32_t)(EDX));
  /* 107aa686 call 0x107ac3a0 */
  push32(0x107aa68bu); f_107ac3a0();
  /* 107aa68b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa68e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 107aa698 jmp 0x107aa6a9 */
  goto L_107aa6a9;
L_107aa69a:;
  /* 107aa69a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107aa6a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa6a3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_107aa6a9:;
  /* 107aa6a9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa6b3 jae 0x107aa764 */
  if (!C.cf) goto L_107aa764;
  /* 107aa6b9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107aa6bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107aa6c1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 107aa6c9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 107aa6cc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107aa6ce je 0x107aa706 */
  if (C.zf) goto L_107aa706;
  /* 107aa6d0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107aa6d6 mov cl, byte ptr [eax + 0x107d0da1] */
  CL = (r8((uint32_t)(EAX + 0x107d0da1)));
  /* 107aa6dc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 107aa6df mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107aa6e5 mov byte ptr [edx + 0x107d0da1], cl */
  w8((uint32_t)(EDX + 0x107d0da1), (CL));
  /* 107aa6eb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107aa6f1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107aa6f7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 107aa6fe mov byte ptr [eax + 0x107d0ca0], dl */
  w8((uint32_t)(EAX + 0x107d0ca0), (DL));
  /* 107aa704 jmp 0x107aa75f */
  goto L_107aa75f;
L_107aa706:;
  /* 107aa706 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107aa70c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107aa70e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 107aa716 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 107aa719 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107aa71b je 0x107aa752 */
  if (C.zf) goto L_107aa752;
  /* 107aa71d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107aa723 mov al, byte ptr [edx + 0x107d0da1] */
  AL = (r8((uint32_t)(EDX + 0x107d0da1)));
  /* 107aa729 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 107aa72b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107aa731 mov byte ptr [ecx + 0x107d0da1], al */
  w8((uint32_t)(ECX + 0x107d0da1), (AL));
  /* 107aa737 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107aa73d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107aa743 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 107aa74a mov byte ptr [edx + 0x107d0ca0], cl */
  w8((uint32_t)(EDX + 0x107d0ca0), (CL));
  /* 107aa750 jmp 0x107aa75f */
  goto L_107aa75f;
L_107aa752:;
  /* 107aa752 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107aa758 mov byte ptr [edx + 0x107d0ca0], 0 */
  w8((uint32_t)(EDX + 0x107d0ca0), (0x0u));
L_107aa75f:;
  /* 107aa75f jmp 0x107aa69a */
  goto L_107aa69a;
L_107aa764:;
  /* 107aa764 jmp 0x107aa82e */
  goto L_107aa82e;
L_107aa769:;
  /* 107aa769 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 107aa773 jmp 0x107aa784 */
  goto L_107aa784;
L_107aa775:;
  /* 107aa775 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107aa77b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa77e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_107aa784:;
  /* 107aa784 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa78e jae 0x107aa82e */
  if (!C.cf) goto L_107aa82e;
  /* 107aa794 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa79b jb 0x107aa7d8 */
  if (C.cf) goto L_107aa7d8;
  /* 107aa79d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa7a4 ja 0x107aa7d8 */
  if ((!C.cf&&!C.zf)) goto L_107aa7d8;
  /* 107aa7a6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107aa7ac mov dl, byte ptr [ecx + 0x107d0da1] */
  DL = (r8((uint32_t)(ECX + 0x107d0da1)));
  /* 107aa7b2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 107aa7b5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107aa7bb mov byte ptr [eax + 0x107d0da1], dl */
  w8((uint32_t)(EAX + 0x107d0da1), (DL));
  /* 107aa7c1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107aa7c7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa7ca mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107aa7d0 mov byte ptr [edx + 0x107d0ca0], cl */
  w8((uint32_t)(EDX + 0x107d0ca0), (CL));
  /* 107aa7d6 jmp 0x107aa829 */
  goto L_107aa829;
L_107aa7d8:;
  /* 107aa7d8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa7df jb 0x107aa81c */
  if (C.cf) goto L_107aa81c;
  /* 107aa7e1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa7e8 ja 0x107aa81c */
  if ((!C.cf&&!C.zf)) goto L_107aa81c;
  /* 107aa7ea mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107aa7f0 mov cl, byte ptr [eax + 0x107d0da1] */
  CL = (r8((uint32_t)(EAX + 0x107d0da1)));
  /* 107aa7f6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 107aa7f9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107aa7ff mov byte ptr [edx + 0x107d0da1], cl */
  w8((uint32_t)(EDX + 0x107d0da1), (CL));
  /* 107aa805 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107aa80b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107aa80e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107aa814 mov byte ptr [ecx + 0x107d0ca0], al */
  w8((uint32_t)(ECX + 0x107d0ca0), (AL));
  /* 107aa81a jmp 0x107aa829 */
  goto L_107aa829;
L_107aa81c:;
  /* 107aa81c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107aa822 mov byte ptr [edx + 0x107d0ca0], 0 */
  w8((uint32_t)(EDX + 0x107d0ca0), (0x0u));
L_107aa829:;
  /* 107aa829 jmp 0x107aa775 */
  goto L_107aa775;
L_107aa82e:;
  /* 107aa82e mov esp, ebp */
  ESP = (EBP);
  /* 107aa830 pop ebp */
  EBP = (pop32());
  /* 107aa831 ret  */
  ESPCHK(0x107aa530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a840 @ 0x107aa840 (23 bytes, 9 insns) */
void f_107aa840(void) {
  FTRACE(0x107aa840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107aa840 push ebp */
  push32((uint32_t)(EBP));
  /* 107aa841 mov ebp, esp */
  EBP = (ESP);
  /* 107aa843 cmp dword ptr [0x107d0c8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107d0c8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa84a je 0x107aa853 */
  if (C.zf) goto L_107aa853;
  /* 107aa84c mov eax, dword ptr [0x107d0c04] */
  EAX = (r32((uint32_t)(0x107d0c04)));
  /* 107aa851 jmp 0x107aa855 */
  goto L_107aa855;
L_107aa853:;
  /* 107aa853 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107aa855:;
  /* 107aa855 pop ebp */
  EBP = (pop32());
  /* 107aa856 ret  */
  ESPCHK(0x107aa840u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a860 @ 0x107aa860 (34 bytes, 10 insns) */
void f_107aa860(void) {
  FTRACE(0x107aa860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107aa860 push ebp */
  push32((uint32_t)(EBP));
  /* 107aa861 mov ebp, esp */
  EBP = (ESP);
  /* 107aa863 cmp dword ptr [0x107d1050], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107d1050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa86a jne 0x107aa880 */
  if (!C.zf) goto L_107aa880;
  /* 107aa86c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 107aa86e call 0x107aa080 */
  push32(0x107aa873u); f_107aa080();
  /* 107aa873 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa876 mov dword ptr [0x107d1050], 1 */
  w32((uint32_t)(0x107d1050), (0x1u));
L_107aa880:;
  /* 107aa880 pop ebp */
  EBP = (pop32());
  /* 107aa881 ret  */
  ESPCHK(0x107aa860u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a890 @ 0x107aa890 (664 bytes, 268 insns) [15 switch table(s)] */
void f_107aa890(void) {
  FTRACE(0x107aa890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107aa890 push ebp */
  push32((uint32_t)(EBP));
  /* 107aa891 mov ebp, esp */
  EBP = (ESP);
  /* 107aa893 push edi */
  push32((uint32_t)(EDI));
  /* 107aa894 push esi */
  push32((uint32_t)(ESI));
  /* 107aa895 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 107aa898 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107aa89b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 107aa89e mov eax, ecx */
  EAX = (ECX);
  /* 107aa8a0 mov edx, ecx */
  EDX = (ECX);
  /* 107aa8a2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa8a4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa8a6 jbe 0x107aa8b0 */
  if ((C.cf||C.zf)) goto L_107aa8b0;
  /* 107aa8a8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa8aa jb 0x107aaa28 */
  if (C.cf) goto L_107aaa28;
L_107aa8b0:;
  /* 107aa8b0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 107aa8b6 jne 0x107aa8cc */
  if (!C.zf) goto L_107aa8cc;
  /* 107aa8b8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107aa8bb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 107aa8be cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa8c1 jb 0x107aa8ec */
  if (C.cf) goto L_107aa8ec;
  /* 107aa8c3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 107aa8c5 jmp dword ptr [edx*4 + 0x107aa9d8] */
  switch (EDX) {
    case 0: goto L_107aa9e8;
    case 1: goto L_107aa9f0;
    case 2: goto L_107aa9fc;
    case 3: goto L_107aaa10;
    default: x86_unimpl("switch@0x107aa8c5 out of table"); return;
  }
L_107aa8cc:;
  /* 107aa8cc mov eax, edi */
  EAX = (EDI);
  /* 107aa8ce mov edx, 3 */
  EDX = (0x3u);
  /* 107aa8d3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107aa8d6 jb 0x107aa8e4 */
  if (C.cf) goto L_107aa8e4;
  /* 107aa8d8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 107aa8db add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa8dd jmp dword ptr [eax*4 + 0x107aa8f0] */
  switch (EAX) {
    case 1: goto L_107aa900;
    case 2: goto L_107aa92c;
    case 3: goto L_107aa950;
    default: x86_unimpl("switch@0x107aa8dd out of table"); return;
  }
L_107aa8e4:;
  /* 107aa8e4 jmp dword ptr [ecx*4 + 0x107aa9e8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x107aa9e8)))); return;
  /* 107aa8eb nop  */
  /* nop */
L_107aa8ec:;
  /* 107aa8ec jmp dword ptr [ecx*4 + 0x107aa96c] */
  switch (ECX) {
    case 0: goto L_107aa9cf;
    case 1: goto L_107aa9bc;
    case 2: goto L_107aa9b4;
    case 3: goto L_107aa9ac;
    case 4: goto L_107aa9a4;
    case 5: goto L_107aa99c;
    case 6: goto L_107aa994;
    case 7: goto L_107aa98c;
    default: x86_unimpl("switch@0x107aa8ec out of table"); return;
  }
  /* 107aa8f3 nop  */
  /* nop */
L_107aa900:;
  /* 107aa900 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 107aa902 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107aa904 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107aa906 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 107aa909 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 107aa90c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 107aa90f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107aa912 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 107aa915 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa918 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa91b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa91e jb 0x107aa8ec */
  if (C.cf) goto L_107aa8ec;
  /* 107aa920 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 107aa922 jmp dword ptr [edx*4 + 0x107aa9d8] */
  switch (EDX) {
    case 0: goto L_107aa9e8;
    case 1: goto L_107aa9f0;
    case 2: goto L_107aa9fc;
    case 3: goto L_107aaa10;
    default: x86_unimpl("switch@0x107aa922 out of table"); return;
  }
  /* 107aa929 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_107aa92c:;
  /* 107aa92c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 107aa92e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107aa930 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107aa932 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 107aa935 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107aa938 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 107aa93b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa93e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa941 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa944 jb 0x107aa8ec */
  if (C.cf) goto L_107aa8ec;
  /* 107aa946 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 107aa948 jmp dword ptr [edx*4 + 0x107aa9d8] */
  switch (EDX) {
    case 0: goto L_107aa9e8;
    case 1: goto L_107aa9f0;
    case 2: goto L_107aa9fc;
    case 3: goto L_107aaa10;
    default: x86_unimpl("switch@0x107aa948 out of table"); return;
  }
  /* 107aa94f nop  */
  /* nop */
L_107aa950:;
  /* 107aa950 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 107aa952 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107aa954 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107aa956 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 107aa957 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107aa95a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 107aa95b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aa95e jb 0x107aa8ec */
  if (C.cf) goto L_107aa8ec;
  /* 107aa960 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 107aa962 jmp dword ptr [edx*4 + 0x107aa9d8] */
  switch (EDX) {
    case 0: goto L_107aa9e8;
    case 1: goto L_107aa9f0;
    case 2: goto L_107aa9fc;
    case 3: goto L_107aaa10;
    default: x86_unimpl("switch@0x107aa962 out of table"); return;
  }
  /* 107aa969 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_107aa98c:;
  /* 107aa98c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 107aa990 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_107aa994:;
  /* 107aa994 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 107aa998 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_107aa99c:;
  /* 107aa99c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 107aa9a0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_107aa9a4:;
  /* 107aa9a4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 107aa9a8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_107aa9ac:;
  /* 107aa9ac mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 107aa9b0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_107aa9b4:;
  /* 107aa9b4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 107aa9b8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_107aa9bc:;
  /* 107aa9bc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 107aa9c0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 107aa9c4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 107aa9cb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 107aa9cd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_107aa9cf:;
  /* 107aa9cf jmp dword ptr [edx*4 + 0x107aa9d8] */
  switch (EDX) {
    case 0: goto L_107aa9e8;
    case 1: goto L_107aa9f0;
    case 2: goto L_107aa9fc;
    case 3: goto L_107aaa10;
    default: x86_unimpl("switch@0x107aa9cf out of table"); return;
  }
  /* 107aa9d6 mov edi, edi */
  EDI = (EDI);
L_107aa9e8:;
  /* 107aa9e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aa9eb pop esi */
  ESI = (pop32());
  /* 107aa9ec pop edi */
  EDI = (pop32());
  /* 107aa9ed leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107aa9ee ret  */
  ESPCHK(0x107aa890u, _esp0);
  ESP += 4; return;
  /* 107aa9ef nop  */
  /* nop */
L_107aa9f0:;
  /* 107aa9f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107aa9f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107aa9f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aa9f7 pop esi */
  ESI = (pop32());
  /* 107aa9f8 pop edi */
  EDI = (pop32());
  /* 107aa9f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107aa9fa ret  */
  ESPCHK(0x107aa890u, _esp0);
  ESP += 4; return;
  /* 107aa9fb nop  */
  /* nop */
L_107aa9fc:;
  /* 107aa9fc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107aa9fe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107aaa00 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 107aaa03 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 107aaa06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aaa09 pop esi */
  ESI = (pop32());
  /* 107aaa0a pop edi */
  EDI = (pop32());
  /* 107aaa0b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107aaa0c ret  */
  ESPCHK(0x107aa890u, _esp0);
  ESP += 4; return;
  /* 107aaa0d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_107aaa10:;
  /* 107aaa10 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107aaa12 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107aaa14 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 107aaa17 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 107aaa1a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 107aaa1d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 107aaa20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aaa23 pop esi */
  ESI = (pop32());
  /* 107aaa24 pop edi */
  EDI = (pop32());
  /* 107aaa25 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107aaa26 ret  */
  ESPCHK(0x107aa890u, _esp0);
  ESP += 4; return;
  /* 107aaa27 nop  */
  /* nop */
L_107aaa28:;
  /* 107aaa28 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 107aaa2c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 107aaa30 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 107aaa36 jne 0x107aaa5c */
  if (!C.zf) goto L_107aaa5c;
  /* 107aaa38 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107aaa3b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 107aaa3e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aaa41 jb 0x107aaa50 */
  if (C.cf) goto L_107aaa50;
  /* 107aaa43 std  */
  C.df=1;
  /* 107aaa44 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 107aaa46 cld  */
  C.df=0;
  /* 107aaa47 jmp dword ptr [edx*4 + 0x107aab70] */
  switch (EDX) {
    case 0: goto L_107aab80;
    case 1: goto L_107aab88;
    case 2: goto L_107aab98;
    case 3: goto L_107aabac;
    default: x86_unimpl("switch@0x107aaa47 out of table"); return;
  }
  /* 107aaa4e mov edi, edi */
  EDI = (EDI);
L_107aaa50:;
  /* 107aaa50 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 107aaa52 jmp dword ptr [ecx*4 + 0x107aab20] */
  switch (ECX) {
    case 0: goto L_107aab67;
    default: x86_unimpl("switch@0x107aaa52 out of table"); return;
  }
  /* 107aaa59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_107aaa5c:;
  /* 107aaa5c mov eax, edi */
  EAX = (EDI);
  /* 107aaa5e mov edx, 3 */
  EDX = (0x3u);
  /* 107aaa63 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aaa66 jb 0x107aaa74 */
  if (C.cf) goto L_107aaa74;
  /* 107aaa68 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 107aaa6b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107aaa6d jmp dword ptr [eax*4 + 0x107aaa78] */
  switch (EAX) {
    case 1: goto L_107aaa88;
    case 2: goto L_107aaaa8;
    case 3: goto L_107aaad0;
    default: x86_unimpl("switch@0x107aaa6d out of table"); return;
  }
L_107aaa74:;
  /* 107aaa74 jmp dword ptr [ecx*4 + 0x107aab70] */
  switch (ECX) {
    case 0: goto L_107aab80;
    case 1: goto L_107aab88;
    case 2: goto L_107aab98;
    case 3: goto L_107aabac;
    default: x86_unimpl("switch@0x107aaa74 out of table"); return;
  }
  /* 107aaa7b nop  */
  /* nop */
L_107aaa88:;
  /* 107aaa88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 107aaa8b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 107aaa8d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 107aaa90 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 107aaa91 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107aaa94 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 107aaa95 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aaa98 jb 0x107aaa50 */
  if (C.cf) goto L_107aaa50;
  /* 107aaa9a std  */
  C.df=1;
  /* 107aaa9b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 107aaa9d cld  */
  C.df=0;
  /* 107aaa9e jmp dword ptr [edx*4 + 0x107aab70] */
  switch (EDX) {
    case 0: goto L_107aab80;
    case 1: goto L_107aab88;
    case 2: goto L_107aab98;
    case 3: goto L_107aabac;
    default: x86_unimpl("switch@0x107aaa9e out of table"); return;
  }
  /* 107aaaa5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_107aaaa8:;
  /* 107aaaa8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 107aaaab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 107aaaad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 107aaab0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 107aaab3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107aaab6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 107aaab9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 107aaabc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 107aaabf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aaac2 jb 0x107aaa50 */
  if (C.cf) goto L_107aaa50;
  /* 107aaac4 std  */
  C.df=1;
  /* 107aaac5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 107aaac7 cld  */
  C.df=0;
  /* 107aaac8 jmp dword ptr [edx*4 + 0x107aab70] */
  switch (EDX) {
    case 0: goto L_107aab80;
    case 1: goto L_107aab88;
    case 2: goto L_107aab98;
    case 3: goto L_107aabac;
    default: x86_unimpl("switch@0x107aaac8 out of table"); return;
  }
  /* 107aaacf nop  */
  /* nop */
L_107aaad0:;
  /* 107aaad0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 107aaad3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 107aaad5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 107aaad8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 107aaadb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 107aaade mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 107aaae1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107aaae4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 107aaae7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 107aaaea sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 107aaaed cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aaaf0 jb 0x107aaa50 */
  if (C.cf) goto L_107aaa50;
  /* 107aaaf6 std  */
  C.df=1;
  /* 107aaaf7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 107aaaf9 cld  */
  C.df=0;
  /* 107aaafa jmp dword ptr [edx*4 + 0x107aab70] */
  switch (EDX) {
    case 0: goto L_107aab80;
    case 1: goto L_107aab88;
    case 2: goto L_107aab98;
    case 3: goto L_107aabac;
    default: x86_unimpl("switch@0x107aaafa out of table"); return;
  }
  /* 107aab01 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 107aab04 and al, 0xab */
  { uint32_t _r=(AL)&(0xabu); AL = (_r); fl_logic(_r,8); }
  /* 107aab06 jp 0x107aab18 */
  if (C.pf) goto L_107aab18;
  /* 107aab08 sub al, 0xab */
  { uint32_t _a=(AL),_b=(0xabu),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107aab0a jp 0x107aab1c */
  if (C.pf) goto L_107aab1c;
  /* 107aab0c xor al, 0xab */
  { uint32_t _r=(AL)^(0xabu); AL = (_r); fl_logic(_r,8); }
  /* 107aab0e jp 0x107aab20 */
  if (C.pf) goto L_107aab20;
  /* 107aab10 cmp al, 0xab */
  { uint32_t _a=(AL),_b=(0xabu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107aab12 jp 0x107aab24 */
  if (C.pf) goto L_107aab24;
  /* 107aab14 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 107aab15 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 107aab16 jp 0x107aab28 */
  if (C.pf) goto L_107aab28;
L_107aab18:;
  /* 107aab18 dec esp */
  { uint32_t _r=(ESP)-1; ESP = (_r); fl_dec(_r,32); }
  /* 107aab19 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 107aab1a jp 0x107aab2c */
  if (C.pf) goto L_107aab2c;
L_107aab1c:;
  /* 107aab1c push esp */
  push32((uint32_t)(ESP));
  /* 107aab1d stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 107aab1e jp 0x107aab30 */
  if (C.pf) goto L_107aab30;
L_107aab24:;
  /* 107aab24 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
L_107aab28:;
  /* 107aab28 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
L_107aab2c:;
  /* 107aab2c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
L_107aab30:;
  /* 107aab30 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 107aab34 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 107aab38 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 107aab3c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 107aab40 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 107aab44 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 107aab48 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 107aab4c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 107aab50 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 107aab54 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 107aab58 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 107aab5c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 107aab63 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 107aab65 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_107aab67:;
  /* 107aab67 jmp dword ptr [edx*4 + 0x107aab70] */
  switch (EDX) {
    case 0: goto L_107aab80;
    case 1: goto L_107aab88;
    case 2: goto L_107aab98;
    case 3: goto L_107aabac;
    default: x86_unimpl("switch@0x107aab67 out of table"); return;
  }
  /* 107aab6e mov edi, edi */
  EDI = (EDI);
L_107aab80:;
  /* 107aab80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aab83 pop esi */
  ESI = (pop32());
  /* 107aab84 pop edi */
  EDI = (pop32());
  /* 107aab85 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107aab86 ret  */
  ESPCHK(0x107aa890u, _esp0);
  ESP += 4; return;
  /* 107aab87 nop  */
  /* nop */
L_107aab88:;
  /* 107aab88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 107aab8b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 107aab8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aab91 pop esi */
  ESI = (pop32());
  /* 107aab92 pop edi */
  EDI = (pop32());
  /* 107aab93 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107aab94 ret  */
  ESPCHK(0x107aa890u, _esp0);
  ESP += 4; return;
  /* 107aab95 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_107aab98:;
  /* 107aab98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 107aab9b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 107aab9e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 107aaba1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 107aaba4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aaba7 pop esi */
  ESI = (pop32());
  /* 107aaba8 pop edi */
  EDI = (pop32());
  /* 107aaba9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107aabaa ret  */
  ESPCHK(0x107aa890u, _esp0);
  ESP += 4; return;
  /* 107aabab nop  */
  /* nop */
L_107aabac:;
  /* 107aabac mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 107aabaf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 107aabb2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 107aabb5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 107aabb8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 107aabbb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 107aabbe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aabc1 pop esi */
  ESI = (pop32());
  /* 107aabc2 pop edi */
  EDI = (pop32());
  /* 107aabc3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107aabc4 ret  */
  ESPCHK(0x107aa890u, _esp0);
  ESP += 4; return;
L_107aab20: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x107aab20 (unresolved jump table)"); return;
}

/* __aulldiv @ 0x107aabd0 (104 bytes, 43 insns) */
void f_107aabd0(void) {
  FTRACE(0x107aabd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107aabd0 push ebx */
  push32((uint32_t)(EBX));
  /* 107aabd1 push esi */
  push32((uint32_t)(ESI));
  /* 107aabd2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 107aabd6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107aabd8 jne 0x107aabf2 */
  if (!C.zf) goto L_107aabf2;
  /* 107aabda mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 107aabde mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 107aabe2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107aabe4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107aabe6 mov ebx, eax */
  EBX = (EAX);
  /* 107aabe8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 107aabec div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107aabee mov edx, ebx */
  EDX = (EBX);
  /* 107aabf0 jmp 0x107aac33 */
  goto L_107aac33;
L_107aabf2:;
  /* 107aabf2 mov ecx, eax */
  ECX = (EAX);
  /* 107aabf4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 107aabf8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 107aabfc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_107aac00:;
  /* 107aac00 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 107aac02 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 107aac04 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 107aac06 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 107aac08 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107aac0a jne 0x107aac00 */
  if (!C.zf) goto L_107aac00;
  /* 107aac0c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107aac0e mov esi, eax */
  ESI = (EAX);
  /* 107aac10 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 107aac14 mov ecx, eax */
  ECX = (EAX);
  /* 107aac16 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 107aac1a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 107aac1c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aac1e jb 0x107aac2e */
  if (C.cf) goto L_107aac2e;
  /* 107aac20 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aac24 ja 0x107aac2e */
  if ((!C.cf&&!C.zf)) goto L_107aac2e;
  /* 107aac26 jb 0x107aac2f */
  if (C.cf) goto L_107aac2f;
  /* 107aac28 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aac2c jbe 0x107aac2f */
  if ((C.cf||C.zf)) goto L_107aac2f;
L_107aac2e:;
  /* 107aac2e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_107aac2f:;
  /* 107aac2f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107aac31 mov eax, esi */
  EAX = (ESI);
L_107aac33:;
  /* 107aac33 pop esi */
  ESI = (pop32());
  /* 107aac34 pop ebx */
  EBX = (pop32());
  /* 107aac35 ret 0x10 */
  ESPCHK(0x107aabd0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x107aac40 (117 bytes, 44 insns) */
void f_107aac40(void) {
  FTRACE(0x107aac40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107aac40 push ebx */
  push32((uint32_t)(EBX));
  /* 107aac41 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 107aac45 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107aac47 jne 0x107aac61 */
  if (!C.zf) goto L_107aac61;
  /* 107aac49 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 107aac4d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 107aac51 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107aac53 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107aac55 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 107aac59 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107aac5b mov eax, edx */
  EAX = (EDX);
  /* 107aac5d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107aac5f jmp 0x107aacb1 */
  goto L_107aacb1;
L_107aac61:;
  /* 107aac61 mov ecx, eax */
  ECX = (EAX);
  /* 107aac63 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 107aac67 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 107aac6b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_107aac6f:;
  /* 107aac6f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 107aac71 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 107aac73 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 107aac75 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 107aac77 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107aac79 jne 0x107aac6f */
  if (!C.zf) goto L_107aac6f;
  /* 107aac7b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107aac7d mov ecx, eax */
  ECX = (EAX);
  /* 107aac7f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 107aac83 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 107aac84 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 107aac88 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aac8a jb 0x107aac9a */
  if (C.cf) goto L_107aac9a;
  /* 107aac8c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aac90 ja 0x107aac9a */
  if ((!C.cf&&!C.zf)) goto L_107aac9a;
  /* 107aac92 jb 0x107aaca2 */
  if (C.cf) goto L_107aaca2;
  /* 107aac94 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aac98 jbe 0x107aaca2 */
  if ((C.cf||C.zf)) goto L_107aaca2;
L_107aac9a:;
  /* 107aac9a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107aac9e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_107aaca2:;
  /* 107aaca2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107aaca6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107aacaa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 107aacac neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 107aacae sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_107aacb1:;
  /* 107aacb1 pop ebx */
  EBX = (pop32());
  /* 107aacb2 ret 0x10 */
  ESPCHK(0x107aac40u, _esp0);
  ESP += 20; return;
}

/* FUN_1000acc0 @ 0x107aacc0 (628 bytes, 214 insns) */
void f_107aacc0(void) {
  FTRACE(0x107aacc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107aacc0 push ebp */
  push32((uint32_t)(EBP));
  /* 107aacc1 mov ebp, esp */
  EBP = (ESP);
  /* 107aacc3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107aacc6 push ebx */
  push32((uint32_t)(EBX));
  /* 107aacc7 push esi */
  push32((uint32_t)(ESI));
  /* 107aacc8 push edi */
  push32((uint32_t)(EDI));
L_107aacc9:;
  /* 107aacc9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aaccd jne 0x107aaced */
  if (!C.zf) goto L_107aaced;
  /* 107aaccf push 0x107cafbc */
  push32((uint32_t)(0x107cafbcu));
  /* 107aacd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 107aacd6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 107aacd8 push 0x107cafb0 */
  push32((uint32_t)(0x107cafb0u));
  /* 107aacdd push 2 */
  push32((uint32_t)(0x2u));
  /* 107aacdf call 0x107a3070 */
  push32(0x107aace4u); f_107a3070();
  /* 107aace4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aace7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aacea jne 0x107aaced */
  if (!C.zf) goto L_107aaced;
  /* 107aacec int3  */
  x86_unimpl("int3 @ 0x107aacec");
L_107aaced:;
  /* 107aaced xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107aacef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107aacf1 jne 0x107aacc9 */
  if (!C.zf) goto L_107aacc9;
  /* 107aacf3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107aacf6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107aacf9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aacfc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 107aacff mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 107aad02 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aad05 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107aad08 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 107aad0e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107aad10 je 0x107aad1f */
  if (C.zf) goto L_107aad1f;
  /* 107aad12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aad15 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 107aad18 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 107aad1b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107aad1d je 0x107aad35 */
  if (C.zf) goto L_107aad35;
L_107aad1f:;
  /* 107aad1f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aad22 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 107aad25 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 107aad27 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aad2a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 107aad2d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107aad30 jmp 0x107aaf2d */
  goto L_107aaf2d;
L_107aad35:;
  /* 107aad35 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aad38 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 107aad3b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 107aad3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107aad40 je 0x107aad8c */
  if (C.zf) goto L_107aad8c;
  /* 107aad42 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aad45 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 107aad4c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aad4f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 107aad52 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 107aad55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107aad57 je 0x107aad75 */
  if (C.zf) goto L_107aad75;
  /* 107aad59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aad5c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aad5f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 107aad62 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107aad64 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aad67 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107aad6a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 107aad6d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aad70 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 107aad73 jmp 0x107aad8c */
  goto L_107aad8c;
L_107aad75:;
  /* 107aad75 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aad78 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107aad7b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 107aad7e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aad81 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 107aad84 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107aad87 jmp 0x107aaf2d */
  goto L_107aaf2d;
L_107aad8c:;
  /* 107aad8c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aad8f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107aad92 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 107aad95 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aad98 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 107aad9b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aad9e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107aada1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 107aada4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aada7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 107aadaa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aadad mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 107aadb4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107aadbb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aadbe mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 107aadc1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aadc4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 107aadc7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 107aadcd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107aadcf jne 0x107aadff */
  if (!C.zf) goto L_107aadff;
  /* 107aadd1 cmp dword ptr [ebp - 8], 0x107ce140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x107ce140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aadd8 je 0x107aade3 */
  if (C.zf) goto L_107aade3;
  /* 107aadda cmp dword ptr [ebp - 8], 0x107ce160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x107ce160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aade1 jne 0x107aadf3 */
  if (!C.zf) goto L_107aadf3;
L_107aade3:;
  /* 107aade3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107aade6 push edx */
  push32((uint32_t)(EDX));
  /* 107aade7 call 0x107acc30 */
  push32(0x107aadecu); f_107acc30();
  /* 107aadec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aadef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107aadf1 jne 0x107aadff */
  if (!C.zf) goto L_107aadff;
L_107aadf3:;
  /* 107aadf3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aadf6 push eax */
  push32((uint32_t)(EAX));
  /* 107aadf7 call 0x107acb60 */
  push32(0x107aadfcu); f_107acb60();
  /* 107aadfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107aadff:;
  /* 107aadff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aae02 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107aae05 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 107aae0b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107aae0d je 0x107aaeeb */
  if (C.zf) goto L_107aaeeb;
L_107aae13:;
  /* 107aae13 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aae16 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aae19 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 107aae1b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107aae1e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107aae20 jge 0x107aae43 */
  if ((C.sf==C.of)) goto L_107aae43;
  /* 107aae22 push 0x107caf70 */
  push32((uint32_t)(0x107caf70u));
  /* 107aae27 push 0 */
  push32((uint32_t)(0x0u));
  /* 107aae29 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 107aae2e push 0x107cafb0 */
  push32((uint32_t)(0x107cafb0u));
  /* 107aae33 push 2 */
  push32((uint32_t)(0x2u));
  /* 107aae35 call 0x107a3070 */
  push32(0x107aae3au); f_107a3070();
  /* 107aae3a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aae3d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aae40 jne 0x107aae43 */
  if (!C.zf) goto L_107aae43;
  /* 107aae42 int3  */
  x86_unimpl("int3 @ 0x107aae42");
L_107aae43:;
  /* 107aae43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107aae45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107aae47 jne 0x107aae13 */
  if (!C.zf) goto L_107aae13;
  /* 107aae49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aae4c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aae4f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 107aae51 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107aae54 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107aae57 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aae5a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 107aae5d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aae60 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aae63 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107aae65 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aae68 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 107aae6b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107aae6e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aae71 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 107aae74 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aae78 jle 0x107aae96 */
  if ((C.zf||C.sf!=C.of)) goto L_107aae96;
  /* 107aae7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aae7d push ecx */
  push32((uint32_t)(ECX));
  /* 107aae7e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aae81 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 107aae84 push eax */
  push32((uint32_t)(EAX));
  /* 107aae85 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107aae88 push ecx */
  push32((uint32_t)(ECX));
  /* 107aae89 call 0x107ac850 */
  push32(0x107aae8eu); f_107ac850();
  /* 107aae8e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aae91 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107aae94 jmp 0x107aaede */
  goto L_107aaede;
L_107aae96:;
  /* 107aae96 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aae9a je 0x107aaeb9 */
  if (C.zf) goto L_107aaeb9;
  /* 107aae9c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107aae9f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 107aaea2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107aaea5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 107aaea8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107aaeab mov ecx, dword ptr [edx*4 + 0x107d0f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x107d0f00)));
  /* 107aaeb2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aaeb4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 107aaeb7 jmp 0x107aaec0 */
  goto L_107aaec0;
L_107aaeb9:;
  /* 107aaeb9 mov dword ptr [ebp - 0x14], 0x107cda60 */
  w32((uint32_t)(EBP + -0x14), (0x107cda60u));
L_107aaec0:;
  /* 107aaec0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107aaec3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 107aaec7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 107aaeca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107aaecc je 0x107aaede */
  if (C.zf) goto L_107aaede;
  /* 107aaece push 2 */
  push32((uint32_t)(0x2u));
  /* 107aaed0 push 0 */
  push32((uint32_t)(0x0u));
  /* 107aaed2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107aaed5 push ecx */
  push32((uint32_t)(ECX));
  /* 107aaed6 call 0x107ac700 */
  push32(0x107aaedbu); f_107ac700();
  /* 107aaedb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107aaede:;
  /* 107aaede mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aaee1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 107aaee4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 107aaee7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 107aaee9 jmp 0x107aaf09 */
  goto L_107aaf09;
L_107aaeeb:;
  /* 107aaeeb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 107aaef2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aaef5 push edx */
  push32((uint32_t)(EDX));
  /* 107aaef6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 107aaef9 push eax */
  push32((uint32_t)(EAX));
  /* 107aaefa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107aaefd push ecx */
  push32((uint32_t)(ECX));
  /* 107aaefe call 0x107ac850 */
  push32(0x107aaf03u); f_107ac850();
  /* 107aaf03 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aaf06 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_107aaf09:;
  /* 107aaf09 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aaf0c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aaf0f je 0x107aaf25 */
  if (C.zf) goto L_107aaf25;
  /* 107aaf11 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aaf14 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 107aaf17 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 107aaf1a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aaf1d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 107aaf20 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107aaf23 jmp 0x107aaf2d */
  goto L_107aaf2d;
L_107aaf25:;
  /* 107aaf25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aaf28 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_107aaf2d:;
  /* 107aaf2d pop edi */
  EDI = (pop32());
  /* 107aaf2e pop esi */
  ESI = (pop32());
  /* 107aaf2f pop ebx */
  EBX = (pop32());
  /* 107aaf30 mov esp, ebp */
  ESP = (EBP);
  /* 107aaf32 pop ebp */
  EBP = (pop32());
  /* 107aaf33 ret  */
  ESPCHK(0x107aacc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af40 @ 0x107aaf40 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_107aaf40(void) {
  FTRACE(0x107aaf40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107aaf40 push ebp */
  push32((uint32_t)(EBP));
  /* 107aaf41 mov ebp, esp */
  EBP = (ESP);
  /* 107aaf43 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107aaf49 push ebx */
  push32((uint32_t)(EBX));
  /* 107aaf4a push esi */
  push32((uint32_t)(ESI));
  /* 107aaf4b push edi */
  push32((uint32_t)(EDI));
  /* 107aaf4c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 107aaf53 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 107aaf5d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_107aaf64:;
  /* 107aaf64 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107aaf67 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107aaf69 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 107aaf6c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 107aaf70 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107aaf73 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aaf76 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 107aaf79 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107aaf7b je 0x107abb57 */
  if (C.zf) goto L_107abb57;
  /* 107aaf81 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aaf88 jl 0x107abb57 */
  if ((C.sf!=C.of)) goto L_107abb57;
  /* 107aaf8e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 107aaf92 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aaf95 jl 0x107aafb6 */
  if ((C.sf!=C.of)) goto L_107aafb6;
  /* 107aaf97 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 107aaf9b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aaf9e jg 0x107aafb6 */
  if ((!C.zf&&C.sf==C.of)) goto L_107aafb6;
  /* 107aafa0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 107aafa4 movsx ecx, byte ptr [eax + 0x107cafa8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x107cafa8))));
  /* 107aafab and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 107aafae mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 107aafb4 jmp 0x107aafc0 */
  goto L_107aafc0;
L_107aafb6:;
  /* 107aafb6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_107aafc0:;
  /* 107aafc0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 107aafc6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 107aafc9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aafcc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107aafcf movsx edx, byte ptr [ecx + eax*8 + 0x107cafc8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x107cafc8))));
  /* 107aafd7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 107aafda mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 107aafdd mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107aafe0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 107aafe6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aafed ja 0x107abb52 */
  if ((!C.cf&&!C.zf)) goto L_107abb52;
  /* 107aaff3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 107aaff9 jmp dword ptr [ecx*4 + 0x107abb64] */
  switch (ECX) {
    case 0: goto L_107ab000;
    case 1: goto L_107ab09a;
    case 2: goto L_107ab0dc;
    case 3: goto L_107ab14b;
    case 4: goto L_107ab1a3;
    case 5: goto L_107ab1b2;
    case 6: goto L_107ab1fe;
    case 7: goto L_107ab291;
    case 8: goto L_107ab128;
    case 9: goto L_107ab133;
    case 10: goto L_107ab11e;
    case 11: goto L_107ab113;
    case 12: goto L_107ab13e;
    case 13: goto L_107ab146;
    default: x86_unimpl("switch@0x107aaff9 out of table"); return;
  }
L_107ab000:;
  /* 107ab000 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 107ab007 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 107ab00a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 107ab010 mov eax, dword ptr [0x107cdc98] */
  EAX = (r32((uint32_t)(0x107cdc98)));
  /* 107ab015 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107ab017 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 107ab01b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 107ab021 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ab023 je 0x107ab07d */
  if (C.zf) goto L_107ab07d;
  /* 107ab025 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 107ab02b push edx */
  push32((uint32_t)(EDX));
  /* 107ab02c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ab02f push eax */
  push32((uint32_t)(EAX));
  /* 107ab030 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 107ab034 push ecx */
  push32((uint32_t)(ECX));
  /* 107ab035 call 0x107abc70 */
  push32(0x107ab03au); f_107abc70();
  /* 107ab03a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ab03d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ab040 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107ab042 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 107ab045 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ab048 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ab04b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_107ab04e:;
  /* 107ab04e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 107ab052 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ab054 jne 0x107ab077 */
  if (!C.zf) goto L_107ab077;
  /* 107ab056 push 0x107cb048 */
  push32((uint32_t)(0x107cb048u));
  /* 107ab05b push 0 */
  push32((uint32_t)(0x0u));
  /* 107ab05d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 107ab062 push 0x107cb03c */
  push32((uint32_t)(0x107cb03cu));
  /* 107ab067 push 2 */
  push32((uint32_t)(0x2u));
  /* 107ab069 call 0x107a3070 */
  push32(0x107ab06eu); f_107a3070();
  /* 107ab06e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ab071 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ab074 jne 0x107ab077 */
  if (!C.zf) goto L_107ab077;
  /* 107ab076 int3  */
  x86_unimpl("int3 @ 0x107ab076");
L_107ab077:;
  /* 107ab077 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ab079 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ab07b jne 0x107ab04e */
  if (!C.zf) goto L_107ab04e;
L_107ab07d:;
  /* 107ab07d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 107ab083 push ecx */
  push32((uint32_t)(ECX));
  /* 107ab084 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ab087 push edx */
  push32((uint32_t)(EDX));
  /* 107ab088 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 107ab08c push eax */
  push32((uint32_t)(EAX));
  /* 107ab08d call 0x107abc70 */
  push32(0x107ab092u); f_107abc70();
  /* 107ab092 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ab095 jmp 0x107abb52 */
  goto L_107abb52;
L_107ab09a:;
  /* 107ab09a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107ab0a1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ab0a4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 107ab0aa mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 107ab0b0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 107ab0b6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 107ab0bc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 107ab0bf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107ab0c6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 107ab0d0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 107ab0d7 jmp 0x107abb52 */
  goto L_107abb52;
L_107ab0dc:;
  /* 107ab0dc movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 107ab0e0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 107ab0e6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 107ab0ec sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ab0ef mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 107ab0f5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ab0fc ja 0x107ab146 */
  if ((!C.cf&&!C.zf)) goto L_107ab146;
  /* 107ab0fe mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 107ab104 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ab106 mov al, byte ptr [ecx + 0x107abb9c] */
  AL = (r8((uint32_t)(ECX + 0x107abb9c)));
  /* 107ab10c jmp dword ptr [eax*4 + 0x107abb84] */
  switch (EAX) {
    case 0: goto L_107ab128;
    case 1: goto L_107ab133;
    case 2: goto L_107ab11e;
    case 3: goto L_107ab113;
    case 4: goto L_107ab13e;
    case 5: goto L_107ab146;
    default: x86_unimpl("switch@0x107ab10c out of table"); return;
  }
L_107ab113:;
  /* 107ab113 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab116 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 107ab119 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107ab11c jmp 0x107ab146 */
  goto L_107ab146;
L_107ab11e:;
  /* 107ab11e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab121 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 107ab123 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ab126 jmp 0x107ab146 */
  goto L_107ab146;
L_107ab128:;
  /* 107ab128 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab12b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 107ab12e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107ab131 jmp 0x107ab146 */
  goto L_107ab146;
L_107ab133:;
  /* 107ab133 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab136 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 107ab139 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107ab13c jmp 0x107ab146 */
  goto L_107ab146;
L_107ab13e:;
  /* 107ab13e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab141 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 107ab143 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107ab146:;
  /* 107ab146 jmp 0x107abb52 */
  goto L_107abb52;
L_107ab14b:;
  /* 107ab14b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 107ab14f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ab152 jne 0x107ab187 */
  if (!C.zf) goto L_107ab187;
  /* 107ab154 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 107ab157 push edx */
  push32((uint32_t)(EDX));
  /* 107ab158 call 0x107abd80 */
  push32(0x107ab15du); f_107abd80();
  /* 107ab15d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ab160 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 107ab166 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ab16d jge 0x107ab185 */
  if ((C.sf==C.of)) goto L_107ab185;
  /* 107ab16f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab172 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 107ab174 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ab177 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 107ab17d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 107ab17f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_107ab185:;
  /* 107ab185 jmp 0x107ab19e */
  goto L_107ab19e;
L_107ab187:;
  /* 107ab187 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 107ab18d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ab190 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 107ab194 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 107ab198 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_107ab19e:;
  /* 107ab19e jmp 0x107abb52 */
  goto L_107abb52;
L_107ab1a3:;
  /* 107ab1a3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 107ab1ad jmp 0x107abb52 */
  goto L_107abb52;
L_107ab1b2:;
  /* 107ab1b2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 107ab1b6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ab1b9 jne 0x107ab1e2 */
  if (!C.zf) goto L_107ab1e2;
  /* 107ab1bb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 107ab1be push eax */
  push32((uint32_t)(EAX));
  /* 107ab1bf call 0x107abd80 */
  push32(0x107ab1c4u); f_107abd80();
  /* 107ab1c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ab1c7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 107ab1cd cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ab1d4 jge 0x107ab1e0 */
  if ((C.sf==C.of)) goto L_107ab1e0;
  /* 107ab1d6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_107ab1e0:;
  /* 107ab1e0 jmp 0x107ab1f9 */
  goto L_107ab1f9;
L_107ab1e2:;
  /* 107ab1e2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 107ab1e8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ab1eb movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 107ab1ef lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 107ab1f3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_107ab1f9:;
  /* 107ab1f9 jmp 0x107abb52 */
  goto L_107abb52;
L_107ab1fe:;
  /* 107ab1fe movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 107ab202 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 107ab208 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 107ab20e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ab211 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 107ab217 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ab21e ja 0x107ab28c */
  if ((!C.cf&&!C.zf)) goto L_107ab28c;
  /* 107ab220 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 107ab226 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ab228 mov al, byte ptr [ecx + 0x107abbc1] */
  AL = (r8((uint32_t)(ECX + 0x107abbc1)));
  /* 107ab22e jmp dword ptr [eax*4 + 0x107abbad] */
  switch (EAX) {
    case 0: goto L_107ab240;
    case 1: goto L_107ab279;
    case 2: goto L_107ab235;
    case 3: goto L_107ab283;
    case 4: goto L_107ab28c;
    default: x86_unimpl("switch@0x107ab22e out of table"); return;
  }
L_107ab235:;
  /* 107ab235 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab238 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 107ab23b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107ab23e jmp 0x107ab28c */
  goto L_107ab28c;
L_107ab240:;
  /* 107ab240 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ab243 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107ab246 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ab249 jne 0x107ab26b */
  if (!C.zf) goto L_107ab26b;
  /* 107ab24b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ab24e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 107ab252 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ab255 jne 0x107ab26b */
  if (!C.zf) goto L_107ab26b;
  /* 107ab257 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ab25a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ab25d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 107ab260 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab263 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 107ab266 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107ab269 jmp 0x107ab277 */
  goto L_107ab277;
L_107ab26b:;
  /* 107ab26b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 107ab272 jmp 0x107ab000 */
  goto L_107ab000;
L_107ab277:;
  /* 107ab277 jmp 0x107ab28c */
  goto L_107ab28c;
L_107ab279:;
  /* 107ab279 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab27c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 107ab27e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ab281 jmp 0x107ab28c */
  goto L_107ab28c;
L_107ab283:;
  /* 107ab283 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab286 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 107ab289 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107ab28c:;
  /* 107ab28c jmp 0x107abb52 */
  goto L_107abb52;
L_107ab291:;
  /* 107ab291 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 107ab295 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 107ab29b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 107ab2a1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ab2a4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 107ab2aa cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ab2b1 ja 0x107ab977 */
  if ((!C.cf&&!C.zf)) goto L_107ab977;
  /* 107ab2b7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 107ab2bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107ab2bf mov cl, byte ptr [edx + 0x107abc2c] */
  CL = (r8((uint32_t)(EDX + 0x107abc2c)));
  /* 107ab2c5 jmp dword ptr [ecx*4 + 0x107abbf0] */
  switch (ECX) {
    case 0: goto L_107ab2cc;
    case 1: goto L_107ab560;
    case 2: goto L_107ab3f0;
    case 3: goto L_107ab699;
    case 4: goto L_107ab35b;
    case 5: goto L_107ab2e1;
    case 6: goto L_107ab66b;
    case 7: goto L_107ab570;
    case 8: goto L_107ab515;
    case 9: goto L_107ab6e5;
    case 10: goto L_107ab68f;
    case 11: goto L_107ab406;
    case 12: goto L_107ab683;
    case 13: goto L_107ab6a5;
    case 14: goto L_107ab977;
    default: x86_unimpl("switch@0x107ab2c5 out of table"); return;
  }
L_107ab2cc:;
  /* 107ab2cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab2cf and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 107ab2d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ab2d6 jne 0x107ab2e1 */
  if (!C.zf) goto L_107ab2e1;
  /* 107ab2d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab2db or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 107ab2de mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107ab2e1:;
  /* 107ab2e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab2e4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 107ab2ea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ab2ec je 0x107ab327 */
  if (C.zf) goto L_107ab327;
  /* 107ab2ee lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 107ab2f1 push eax */
  push32((uint32_t)(EAX));
  /* 107ab2f2 call 0x107abdc0 */
  push32(0x107ab2f7u); f_107abdc0();
  /* 107ab2f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ab2fa mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 107ab2fe mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 107ab302 push ecx */
  push32((uint32_t)(ECX));
  /* 107ab303 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 107ab309 push edx */
  push32((uint32_t)(EDX));
  /* 107ab30a call 0x107acea0 */
  push32(0x107ab30fu); f_107acea0();
  /* 107ab30f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ab312 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 107ab315 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ab319 jge 0x107ab325 */
  if ((C.sf==C.of)) goto L_107ab325;
  /* 107ab31b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_107ab325:;
  /* 107ab325 jmp 0x107ab34d */
  goto L_107ab34d;
L_107ab327:;
  /* 107ab327 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 107ab32a push eax */
  push32((uint32_t)(EAX));
  /* 107ab32b call 0x107abd80 */
  push32(0x107ab330u); f_107abd80();
  /* 107ab330 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ab333 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 107ab33a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 107ab340 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 107ab346 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_107ab34d:;
  /* 107ab34d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 107ab353 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 107ab356 jmp 0x107ab977 */
  goto L_107ab977;
L_107ab35b:;
  /* 107ab35b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 107ab35e push eax */
  push32((uint32_t)(EAX));
  /* 107ab35f call 0x107abd80 */
  push32(0x107ab364u); f_107abd80();
  /* 107ab364 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ab367 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 107ab36d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ab374 je 0x107ab382 */
  if (C.zf) goto L_107ab382;
  /* 107ab376 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 107ab37c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ab380 jne 0x107ab39c */
  if (!C.zf) goto L_107ab39c;
L_107ab382:;
  /* 107ab382 mov edx, dword ptr [0x107cdfb0] */
  EDX = (r32((uint32_t)(0x107cdfb0)));
  /* 107ab388 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 107ab38b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ab38e push eax */
  push32((uint32_t)(EAX));
  /* 107ab38f call 0x107a6de0 */
  push32(0x107ab394u); f_107a6de0();
  /* 107ab394 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ab397 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 107ab39a jmp 0x107ab3eb */
  goto L_107ab3eb;
L_107ab39c:;
  /* 107ab39c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab39f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 107ab3a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ab3a7 je 0x107ab3cc */
  if (C.zf) goto L_107ab3cc;
  /* 107ab3a9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 107ab3af mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 107ab3b2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 107ab3b5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 107ab3bb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 107ab3be shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 107ab3c0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 107ab3c3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 107ab3ca jmp 0x107ab3eb */
  goto L_107ab3eb;
L_107ab3cc:;
  /* 107ab3cc mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 107ab3d3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 107ab3d9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107ab3dc mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 107ab3df mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 107ab3e5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 107ab3e8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_107ab3eb:;
  /* 107ab3eb jmp 0x107ab977 */
  goto L_107ab977;
L_107ab3f0:;
  /* 107ab3f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab3f3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 107ab3f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ab3fb jne 0x107ab406 */
  if (!C.zf) goto L_107ab406;
  /* 107ab3fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab400 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 107ab403 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_107ab406:;
  /* 107ab406 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ab40d jne 0x107ab41b */
  if (!C.zf) goto L_107ab41b;
  /* 107ab40f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 107ab419 jmp 0x107ab427 */
  goto L_107ab427;
L_107ab41b:;
  /* 107ab41b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 107ab421 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_107ab427:;
  /* 107ab427 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 107ab42d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 107ab433 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 107ab436 push edx */
  push32((uint32_t)(EDX));
  /* 107ab437 call 0x107abd80 */
  push32(0x107ab43cu); f_107abd80();
  /* 107ab43c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ab43f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 107ab442 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab445 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 107ab44a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ab44c je 0x107ab4b6 */
  if (C.zf) goto L_107ab4b6;
  /* 107ab44e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ab452 jne 0x107ab45d */
  if (!C.zf) goto L_107ab45d;
  /* 107ab454 mov ecx, dword ptr [0x107cdfb4] */
  ECX = (r32((uint32_t)(0x107cdfb4)));
  /* 107ab45a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_107ab45d:;
  /* 107ab45d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 107ab464 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ab467 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_107ab46d:;
  /* 107ab46d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 107ab473 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 107ab479 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ab47c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 107ab482 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ab484 je 0x107ab4a6 */
  if (C.zf) goto L_107ab4a6;
  /* 107ab486 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 107ab48c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ab48e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 107ab491 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ab493 je 0x107ab4a6 */
  if (C.zf) goto L_107ab4a6;
  /* 107ab495 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 107ab49b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ab49e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 107ab4a4 jmp 0x107ab46d */
  goto L_107ab46d;
L_107ab4a6:;
  /* 107ab4a6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 107ab4ac sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ab4af sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 107ab4b1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 107ab4b4 jmp 0x107ab510 */
  goto L_107ab510;
L_107ab4b6:;
  /* 107ab4b6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ab4ba jne 0x107ab4c4 */
  if (!C.zf) goto L_107ab4c4;
  /* 107ab4bc mov eax, dword ptr [0x107cdfb0] */
  EAX = (r32((uint32_t)(0x107cdfb0)));
  /* 107ab4c1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_107ab4c4:;
  /* 107ab4c4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ab4c7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_107ab4cd:;
  /* 107ab4cd mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 107ab4d3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 107ab4d9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ab4dc mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 107ab4e2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ab4e4 je 0x107ab504 */
  if (C.zf) goto L_107ab504;
  /* 107ab4e6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 107ab4ec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107ab4ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ab4f1 je 0x107ab504 */
  if (C.zf) goto L_107ab504;
  /* 107ab4f3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 107ab4f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ab4fc mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 107ab502 jmp 0x107ab4cd */
  goto L_107ab4cd;
L_107ab504:;
  /* 107ab504 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 107ab50a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ab50d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_107ab510:;
  /* 107ab510 jmp 0x107ab977 */
  goto L_107ab977;
L_107ab515:;
  /* 107ab515 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 107ab518 push edx */
  push32((uint32_t)(EDX));
  /* 107ab519 call 0x107abd80 */
  push32(0x107ab51eu); f_107abd80();
  /* 107ab51e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ab521 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 107ab527 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab52a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 107ab52d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ab52f je 0x107ab543 */
  if (C.zf) goto L_107ab543;
  /* 107ab531 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 107ab537 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 107ab53e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 107ab541 jmp 0x107ab551 */
  goto L_107ab551;
L_107ab543:;
  /* 107ab543 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 107ab549 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 107ab54f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_107ab551:;
  /* 107ab551 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 107ab55b jmp 0x107ab977 */
  goto L_107ab977;
L_107ab560:;
  /* 107ab560 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 107ab567 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 107ab56a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 107ab56d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_107ab570:;
  /* 107ab570 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab573 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 107ab575 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ab578 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 107ab57e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 107ab581 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ab588 jge 0x107ab596 */
  if ((C.sf==C.of)) goto L_107ab596;
  /* 107ab58a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 107ab594 jmp 0x107ab5b2 */
  goto L_107ab5b2;
L_107ab596:;
  /* 107ab596 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ab59d jne 0x107ab5b2 */
  if (!C.zf) goto L_107ab5b2;
  /* 107ab59f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 107ab5a3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ab5a6 jne 0x107ab5b2 */
  if (!C.zf) goto L_107ab5b2;
  /* 107ab5a8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_107ab5b2:;
  /* 107ab5b2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ab5b5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ab5b8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 107ab5bb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ab5be sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ab5c1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107ab5c3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 107ab5c6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 107ab5cc mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 107ab5d2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ab5d5 push ecx */
  push32((uint32_t)(ECX));
  /* 107ab5d6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 107ab5dc push edx */
  push32((uint32_t)(EDX));
  /* 107ab5dd movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 107ab5e1 push eax */
  push32((uint32_t)(EAX));
  /* 107ab5e2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ab5e5 push ecx */
  push32((uint32_t)(ECX));
  /* 107ab5e6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 107ab5ec push edx */
  push32((uint32_t)(EDX));
  /* 107ab5ed call dword ptr [0x107ce3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107ce3a0))), 0x107ab5f3u);
  /* 107ab5f3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ab5f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab5f9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 107ab5fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ab600 je 0x107ab618 */
  if (C.zf) goto L_107ab618;
  /* 107ab602 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ab609 jne 0x107ab618 */
  if (!C.zf) goto L_107ab618;
  /* 107ab60b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ab60e push ecx */
  push32((uint32_t)(ECX));
  /* 107ab60f call dword ptr [0x107ce3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x107ce3ac))), 0x107ab615u);
  /* 107ab615 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107ab618:;
  /* 107ab618 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 107ab61c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ab61f jne 0x107ab63a */
  if (!C.zf) goto L_107ab63a;
  /* 107ab621 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab624 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 107ab629 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ab62b jne 0x107ab63a */
  if (!C.zf) goto L_107ab63a;
  /* 107ab62d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ab630 push ecx */
  push32((uint32_t)(ECX));
  /* 107ab631 call dword ptr [0x107ce3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107ce3a4))), 0x107ab637u);
  /* 107ab637 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107ab63a:;
  /* 107ab63a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ab63d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107ab640 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ab643 jne 0x107ab657 */
  if (!C.zf) goto L_107ab657;
  /* 107ab645 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab648 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 107ab64b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107ab64e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ab651 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ab654 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_107ab657:;
  /* 107ab657 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ab65a push eax */
  push32((uint32_t)(EAX));
  /* 107ab65b call 0x107a6de0 */
  push32(0x107ab660u); f_107a6de0();
  /* 107ab660 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ab663 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 107ab666 jmp 0x107ab977 */
  goto L_107ab977;
L_107ab66b:;
  /* 107ab66b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab66e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 107ab671 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107ab674 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 107ab67e jmp 0x107ab705 */
  goto L_107ab705;
L_107ab683:;
  /* 107ab683 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 107ab68d jmp 0x107ab705 */
  goto L_107ab705;
L_107ab68f:;
  /* 107ab68f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_107ab699:;
  /* 107ab699 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 107ab6a3 jmp 0x107ab6af */
  goto L_107ab6af;
L_107ab6a5:;
  /* 107ab6a5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_107ab6af:;
  /* 107ab6af mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 107ab6b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab6bc and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 107ab6c2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ab6c4 je 0x107ab6e3 */
  if (C.zf) goto L_107ab6e3;
  /* 107ab6c6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 107ab6cd mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 107ab6d3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ab6d6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 107ab6dc mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_107ab6e3:;
  /* 107ab6e3 jmp 0x107ab705 */
  goto L_107ab705;
L_107ab6e5:;
  /* 107ab6e5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 107ab6ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab6f2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 107ab6f8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ab6fa je 0x107ab705 */
  if (C.zf) goto L_107ab705;
  /* 107ab6fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab6ff or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 107ab702 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_107ab705:;
  /* 107ab705 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab708 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 107ab70d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ab70f je 0x107ab72e */
  if (C.zf) goto L_107ab72e;
  /* 107ab711 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 107ab714 push ecx */
  push32((uint32_t)(ECX));
  /* 107ab715 call 0x107abda0 */
  push32(0x107ab71au); f_107abda0();
  /* 107ab71a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ab71d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 107ab723 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 107ab729 jmp 0x107ab7bf */
  goto L_107ab7bf;
L_107ab72e:;
  /* 107ab72e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab731 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 107ab734 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ab736 je 0x107ab780 */
  if (C.zf) goto L_107ab780;
  /* 107ab738 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab73b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 107ab73e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ab740 je 0x107ab760 */
  if (C.zf) goto L_107ab760;
  /* 107ab742 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 107ab745 push ecx */
  push32((uint32_t)(ECX));
  /* 107ab746 call 0x107abd80 */
  push32(0x107ab74bu); f_107abd80();
  /* 107ab74b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ab74e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 107ab751 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107ab752 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 107ab758 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 107ab75e jmp 0x107ab77e */
  goto L_107ab77e;
L_107ab760:;
  /* 107ab760 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 107ab763 push edx */
  push32((uint32_t)(EDX));
  /* 107ab764 call 0x107abd80 */
  push32(0x107ab769u); f_107abd80();
  /* 107ab769 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ab76c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107ab771 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107ab772 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 107ab778 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_107ab77e:;
  /* 107ab77e jmp 0x107ab7bf */
  goto L_107ab7bf;
L_107ab780:;
  /* 107ab780 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab783 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 107ab786 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ab788 je 0x107ab7a5 */
  if (C.zf) goto L_107ab7a5;
  /* 107ab78a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 107ab78d push ecx */
  push32((uint32_t)(ECX));
  /* 107ab78e call 0x107abd80 */
  push32(0x107ab793u); f_107abd80();
  /* 107ab793 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ab796 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107ab797 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 107ab79d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 107ab7a3 jmp 0x107ab7bf */
  goto L_107ab7bf;
L_107ab7a5:;
  /* 107ab7a5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 107ab7a8 push edx */
  push32((uint32_t)(EDX));
  /* 107ab7a9 call 0x107abd80 */
  push32(0x107ab7aeu); f_107abd80();
  /* 107ab7ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ab7b1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107ab7b3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 107ab7b9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_107ab7bf:;
  /* 107ab7bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab7c2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 107ab7c5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ab7c7 je 0x107ab807 */
  if (C.zf) goto L_107ab807;
  /* 107ab7c9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ab7d0 jg 0x107ab807 */
  if ((!C.zf&&C.sf==C.of)) goto L_107ab807;
  /* 107ab7d2 jl 0x107ab7dd */
  if ((C.sf!=C.of)) goto L_107ab7dd;
  /* 107ab7d4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ab7db jae 0x107ab807 */
  if (!C.cf) goto L_107ab807;
L_107ab7dd:;
  /* 107ab7dd mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 107ab7e3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 107ab7e5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 107ab7eb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ab7ee neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 107ab7f0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 107ab7f6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 107ab7fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab7ff or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 107ab802 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107ab805 jmp 0x107ab81f */
  goto L_107ab81f;
L_107ab807:;
  /* 107ab807 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 107ab80d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 107ab813 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 107ab819 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_107ab81f:;
  /* 107ab81f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab822 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 107ab828 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ab82a jne 0x107ab847 */
  if (!C.zf) goto L_107ab847;
  /* 107ab82c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 107ab832 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 107ab838 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 107ab83b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 107ab841 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_107ab847:;
  /* 107ab847 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ab84e jge 0x107ab85c */
  if ((C.sf==C.of)) goto L_107ab85c;
  /* 107ab850 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 107ab85a jmp 0x107ab865 */
  goto L_107ab865;
L_107ab85c:;
  /* 107ab85c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab85f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 107ab862 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_107ab865:;
  /* 107ab865 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 107ab86b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 107ab871 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ab873 jne 0x107ab87c */
  if (!C.zf) goto L_107ab87c;
  /* 107ab875 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_107ab87c:;
  /* 107ab87c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 107ab87f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_107ab882:;
  /* 107ab882 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 107ab888 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 107ab88e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ab891 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 107ab897 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ab899 jg 0x107ab8af */
  if ((!C.zf&&C.sf==C.of)) goto L_107ab8af;
  /* 107ab89b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 107ab8a1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 107ab8a7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ab8a9 je 0x107ab930 */
  if (C.zf) goto L_107ab930;
L_107ab8af:;
  /* 107ab8af mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 107ab8b5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107ab8b6 push edx */
  push32((uint32_t)(EDX));
  /* 107ab8b7 push eax */
  push32((uint32_t)(EAX));
  /* 107ab8b8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 107ab8be push edx */
  push32((uint32_t)(EDX));
  /* 107ab8bf mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 107ab8c5 push eax */
  push32((uint32_t)(EAX));
  /* 107ab8c6 call 0x107aac40 */
  push32(0x107ab8cbu); f_107aac40();
  /* 107ab8cb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ab8ce mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 107ab8d4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 107ab8da cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107ab8db push edx */
  push32((uint32_t)(EDX));
  /* 107ab8dc push eax */
  push32((uint32_t)(EAX));
  /* 107ab8dd mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 107ab8e3 push ecx */
  push32((uint32_t)(ECX));
  /* 107ab8e4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 107ab8ea push edx */
  push32((uint32_t)(EDX));
  /* 107ab8eb call 0x107aabd0 */
  push32(0x107ab8f0u); f_107aabd0();
  /* 107ab8f0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 107ab8f6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 107ab8fc cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ab903 jle 0x107ab917 */
  if ((C.zf||C.sf!=C.of)) goto L_107ab917;
  /* 107ab905 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 107ab90b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ab911 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_107ab917:;
  /* 107ab917 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ab91a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 107ab920 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 107ab922 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ab925 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ab928 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 107ab92b jmp 0x107ab882 */
  goto L_107ab882;
L_107ab930:;
  /* 107ab930 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 107ab933 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ab936 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 107ab939 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ab93c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ab93f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 107ab942 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab945 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 107ab94a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ab94c je 0x107ab977 */
  if (C.zf) goto L_107ab977;
  /* 107ab94e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ab951 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107ab954 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ab957 jne 0x107ab95f */
  if (!C.zf) goto L_107ab95f;
  /* 107ab959 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ab95d jne 0x107ab977 */
  if (!C.zf) goto L_107ab977;
L_107ab95f:;
  /* 107ab95f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ab962 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ab965 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 107ab968 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ab96b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 107ab96e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107ab971 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ab974 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_107ab977:;
  /* 107ab977 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ab97e jne 0x107abb52 */
  if (!C.zf) goto L_107abb52;
  /* 107ab984 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab987 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 107ab98a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ab98c je 0x107ab9dd */
  if (C.zf) goto L_107ab9dd;
  /* 107ab98e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab991 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 107ab997 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ab999 je 0x107ab9ab */
  if (C.zf) goto L_107ab9ab;
  /* 107ab99b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 107ab9a2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 107ab9a9 jmp 0x107ab9dd */
  goto L_107ab9dd;
L_107ab9ab:;
  /* 107ab9ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab9ae and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 107ab9b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ab9b3 je 0x107ab9c5 */
  if (C.zf) goto L_107ab9c5;
  /* 107ab9b5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 107ab9bc mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 107ab9c3 jmp 0x107ab9dd */
  goto L_107ab9dd;
L_107ab9c5:;
  /* 107ab9c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab9c8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 107ab9cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ab9cd je 0x107ab9dd */
  if (C.zf) goto L_107ab9dd;
  /* 107ab9cf mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 107ab9d6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_107ab9dd:;
  /* 107ab9dd mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 107ab9e3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ab9e6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ab9e9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 107ab9ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ab9f2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 107ab9f5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ab9f7 jne 0x107aba15 */
  if (!C.zf) goto L_107aba15;
  /* 107ab9f9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 107ab9ff push eax */
  push32((uint32_t)(EAX));
  /* 107aba00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aba03 push ecx */
  push32((uint32_t)(ECX));
  /* 107aba04 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 107aba0a push edx */
  push32((uint32_t)(EDX));
  /* 107aba0b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 107aba0d call 0x107abcf0 */
  push32(0x107aba12u); f_107abcf0();
  /* 107aba12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107aba15:;
  /* 107aba15 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 107aba1b push eax */
  push32((uint32_t)(EAX));
  /* 107aba1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aba1f push ecx */
  push32((uint32_t)(ECX));
  /* 107aba20 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107aba23 push edx */
  push32((uint32_t)(EDX));
  /* 107aba24 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 107aba2a push eax */
  push32((uint32_t)(EAX));
  /* 107aba2b call 0x107abd30 */
  push32(0x107aba30u); f_107abd30();
  /* 107aba30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aba33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aba36 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 107aba39 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107aba3b je 0x107aba63 */
  if (C.zf) goto L_107aba63;
  /* 107aba3d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aba40 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 107aba43 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107aba45 jne 0x107aba63 */
  if (!C.zf) goto L_107aba63;
  /* 107aba47 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 107aba4d push eax */
  push32((uint32_t)(EAX));
  /* 107aba4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aba51 push ecx */
  push32((uint32_t)(ECX));
  /* 107aba52 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 107aba58 push edx */
  push32((uint32_t)(EDX));
  /* 107aba59 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 107aba5b call 0x107abcf0 */
  push32(0x107aba60u); f_107abcf0();
  /* 107aba60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107aba63:;
  /* 107aba63 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aba67 je 0x107abb11 */
  if (C.zf) goto L_107abb11;
  /* 107aba6d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aba71 jle 0x107abb11 */
  if ((C.zf||C.sf!=C.of)) goto L_107abb11;
  /* 107aba77 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 107aba7a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 107aba80 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107aba83 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_107aba89:;
  /* 107aba89 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 107aba8f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 107aba95 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107aba98 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 107aba9e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107abaa0 je 0x107abb0f */
  if (C.zf) goto L_107abb0f;
  /* 107abaa2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 107abaa8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 107abaab mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 107abab2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 107abab9 push eax */
  push32((uint32_t)(EAX));
  /* 107ababa lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 107abac0 push ecx */
  push32((uint32_t)(ECX));
  /* 107abac1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 107abac7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107abaca mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 107abad0 call 0x107acea0 */
  push32(0x107abad5u); f_107acea0();
  /* 107abad5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107abad8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 107abade cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107abae5 jg 0x107abae9 */
  if ((!C.zf&&C.sf==C.of)) goto L_107abae9;
  /* 107abae7 jmp 0x107abb0f */
  goto L_107abb0f;
L_107abae9:;
  /* 107abae9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 107abaef push eax */
  push32((uint32_t)(EAX));
  /* 107abaf0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107abaf3 push ecx */
  push32((uint32_t)(ECX));
  /* 107abaf4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 107abafa push edx */
  push32((uint32_t)(EDX));
  /* 107abafb lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 107abb01 push eax */
  push32((uint32_t)(EAX));
  /* 107abb02 call 0x107abd30 */
  push32(0x107abb07u); f_107abd30();
  /* 107abb07 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107abb0a jmp 0x107aba89 */
  goto L_107aba89;
L_107abb0f:;
  /* 107abb0f jmp 0x107abb2c */
  goto L_107abb2c;
L_107abb11:;
  /* 107abb11 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 107abb17 push ecx */
  push32((uint32_t)(ECX));
  /* 107abb18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107abb1b push edx */
  push32((uint32_t)(EDX));
  /* 107abb1c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107abb1f push eax */
  push32((uint32_t)(EAX));
  /* 107abb20 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107abb23 push ecx */
  push32((uint32_t)(ECX));
  /* 107abb24 call 0x107abd30 */
  push32(0x107abb29u); f_107abd30();
  /* 107abb29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107abb2c:;
  /* 107abb2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107abb2f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 107abb32 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107abb34 je 0x107abb52 */
  if (C.zf) goto L_107abb52;
  /* 107abb36 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 107abb3c push eax */
  push32((uint32_t)(EAX));
  /* 107abb3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107abb40 push ecx */
  push32((uint32_t)(ECX));
  /* 107abb41 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 107abb47 push edx */
  push32((uint32_t)(EDX));
  /* 107abb48 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 107abb4a call 0x107abcf0 */
  push32(0x107abb4fu); f_107abcf0();
  /* 107abb4f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107abb52:;
  /* 107abb52 jmp 0x107aaf64 */
  goto L_107aaf64;
L_107abb57:;
  /* 107abb57 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 107abb5d pop edi */
  EDI = (pop32());
  /* 107abb5e pop esi */
  ESI = (pop32());
  /* 107abb5f pop ebx */
  EBX = (pop32());
  /* 107abb60 mov esp, ebp */
  ESP = (EBP);
  /* 107abb62 pop ebp */
  EBP = (pop32());
  /* 107abb63 ret  */
  ESPCHK(0x107aaf40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc70 @ 0x107abc70 (119 bytes, 44 insns) */
void f_107abc70(void) {
  FTRACE(0x107abc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107abc70 push ebp */
  push32((uint32_t)(EBP));
  /* 107abc71 mov ebp, esp */
  EBP = (ESP);
  /* 107abc73 push ecx */
  push32((uint32_t)(ECX));
  /* 107abc74 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107abc77 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107abc7a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107abc7d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107abc80 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 107abc83 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107abc86 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107abc8a jl 0x107abcb2 */
  if ((C.sf!=C.of)) goto L_107abcb2;
  /* 107abc8c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107abc8f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107abc91 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 107abc94 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 107abc96 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 107abc9a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 107abca0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107abca3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107abca6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107abca8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107abcab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107abcae mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107abcb0 jmp 0x107abcc5 */
  goto L_107abcc5;
L_107abcb2:;
  /* 107abcb2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107abcb5 push edx */
  push32((uint32_t)(EDX));
  /* 107abcb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107abcb9 push eax */
  push32((uint32_t)(EAX));
  /* 107abcba call 0x107aacc0 */
  push32(0x107abcbfu); f_107aacc0();
  /* 107abcbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107abcc2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107abcc5:;
  /* 107abcc5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107abcc9 jne 0x107abcd6 */
  if (!C.zf) goto L_107abcd6;
  /* 107abccb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107abcce mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 107abcd4 jmp 0x107abce3 */
  goto L_107abce3;
L_107abcd6:;
  /* 107abcd6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107abcd9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107abcdb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107abcde mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107abce1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_107abce3:;
  /* 107abce3 mov esp, ebp */
  ESP = (EBP);
  /* 107abce5 pop ebp */
  EBP = (pop32());
  /* 107abce6 ret  */
  ESPCHK(0x107abc70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bcf0 @ 0x107abcf0 (53 bytes, 23 insns) */
void f_107abcf0(void) {
  FTRACE(0x107abcf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107abcf0 push ebp */
  push32((uint32_t)(EBP));
  /* 107abcf1 mov ebp, esp */
  EBP = (ESP);
L_107abcf3:;
  /* 107abcf3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107abcf6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107abcf9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107abcfc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 107abcff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107abd01 jle 0x107abd23 */
  if ((C.zf||C.sf!=C.of)) goto L_107abd23;
  /* 107abd03 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107abd06 push edx */
  push32((uint32_t)(EDX));
  /* 107abd07 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107abd0a push eax */
  push32((uint32_t)(EAX));
  /* 107abd0b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107abd0e push ecx */
  push32((uint32_t)(ECX));
  /* 107abd0f call 0x107abc70 */
  push32(0x107abd14u); f_107abc70();
  /* 107abd14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107abd17 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107abd1a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107abd1d jne 0x107abd21 */
  if (!C.zf) goto L_107abd21;
  /* 107abd1f jmp 0x107abd23 */
  goto L_107abd23;
L_107abd21:;
  /* 107abd21 jmp 0x107abcf3 */
  goto L_107abcf3;
L_107abd23:;
  /* 107abd23 pop ebp */
  EBP = (pop32());
  /* 107abd24 ret  */
  ESPCHK(0x107abcf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd30 @ 0x107abd30 (74 bytes, 31 insns) */
void f_107abd30(void) {
  FTRACE(0x107abd30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107abd30 push ebp */
  push32((uint32_t)(EBP));
  /* 107abd31 mov ebp, esp */
  EBP = (ESP);
  /* 107abd33 push ecx */
  push32((uint32_t)(ECX));
L_107abd34:;
  /* 107abd34 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107abd37 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107abd3a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107abd3d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 107abd40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107abd42 jle 0x107abd76 */
  if ((C.zf||C.sf!=C.of)) goto L_107abd76;
  /* 107abd44 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107abd47 push edx */
  push32((uint32_t)(EDX));
  /* 107abd48 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107abd4b push eax */
  push32((uint32_t)(EAX));
  /* 107abd4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107abd4f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107abd52 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107abd55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107abd58 push eax */
  push32((uint32_t)(EAX));
  /* 107abd59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107abd5c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107abd5f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 107abd62 call 0x107abc70 */
  push32(0x107abd67u); f_107abc70();
  /* 107abd67 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107abd6a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107abd6d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107abd70 jne 0x107abd74 */
  if (!C.zf) goto L_107abd74;
  /* 107abd72 jmp 0x107abd76 */
  goto L_107abd76;
L_107abd74:;
  /* 107abd74 jmp 0x107abd34 */
  goto L_107abd34;
L_107abd76:;
  /* 107abd76 mov esp, ebp */
  ESP = (EBP);
  /* 107abd78 pop ebp */
  EBP = (pop32());
  /* 107abd79 ret  */
  ESPCHK(0x107abd30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd80 @ 0x107abd80 (26 bytes, 12 insns) */
void f_107abd80(void) {
  FTRACE(0x107abd80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107abd80 push ebp */
  push32((uint32_t)(EBP));
  /* 107abd81 mov ebp, esp */
  EBP = (ESP);
  /* 107abd83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107abd86 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107abd88 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107abd8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107abd8e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 107abd90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107abd93 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107abd95 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 107abd98 pop ebp */
  EBP = (pop32());
  /* 107abd99 ret  */
  ESPCHK(0x107abd80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bda0 @ 0x107abda0 (31 bytes, 14 insns) */
void f_107abda0(void) {
  FTRACE(0x107abda0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107abda0 push ebp */
  push32((uint32_t)(EBP));
  /* 107abda1 mov ebp, esp */
  EBP = (ESP);
  /* 107abda3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107abda6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107abda8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107abdab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107abdae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 107abdb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107abdb3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107abdb5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107abdb8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 107abdba mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107abdbd pop ebp */
  EBP = (pop32());
  /* 107abdbe ret  */
  ESPCHK(0x107abda0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bdc0 @ 0x107abdc0 (27 bytes, 12 insns) */
void f_107abdc0(void) {
  FTRACE(0x107abdc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107abdc0 push ebp */
  push32((uint32_t)(EBP));
  /* 107abdc1 mov ebp, esp */
  EBP = (ESP);
  /* 107abdc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107abdc6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107abdc8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107abdcb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107abdce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 107abdd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107abdd3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107abdd5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 107abdd9 pop ebp */
  EBP = (pop32());
  /* 107abdda ret  */
  ESPCHK(0x107abdc0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x107abde0 (145 bytes, 42 insns) */
void f_107abde0(void) {
  FTRACE(0x107abde0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107abde0 push ebp */
  push32((uint32_t)(EBP));
  /* 107abde1 mov ebp, esp */
  EBP = (ESP);
  /* 107abde3 push ecx */
  push32((uint32_t)(ECX));
  /* 107abde4 call 0x107abe90 */
  push32(0x107abde9u); f_107abe90();
  /* 107abde9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107abdec mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 107abdee mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107abdf5 jmp 0x107abe00 */
  goto L_107abe00;
L_107abdf7:;
  /* 107abdf7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107abdfa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107abdfd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_107abe00:;
  /* 107abe00 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107abe04 jae 0x107abe2a */
  if (!C.cf) goto L_107abe2a;
  /* 107abe06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107abe09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107abe0c cmp ecx, dword ptr [eax*8 + 0x107cdfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x107cdfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107abe13 jne 0x107abe28 */
  if (!C.zf) goto L_107abe28;
  /* 107abe15 call 0x107abe80 */
  push32(0x107abe1au); f_107abe80();
  /* 107abe1a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107abe1d mov ecx, dword ptr [edx*8 + 0x107cdfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x107cdfbc)));
  /* 107abe24 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 107abe26 jmp 0x107abe6d */
  goto L_107abe6d;
L_107abe28:;
  /* 107abe28 jmp 0x107abdf7 */
  goto L_107abdf7;
L_107abe2a:;
  /* 107abe2a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107abe2e jb 0x107abe43 */
  if (C.cf) goto L_107abe43;
  /* 107abe30 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107abe34 ja 0x107abe43 */
  if ((!C.cf&&!C.zf)) goto L_107abe43;
  /* 107abe36 call 0x107abe80 */
  push32(0x107abe3bu); f_107abe80();
  /* 107abe3b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 107abe41 jmp 0x107abe6d */
  goto L_107abe6d;
L_107abe43:;
  /* 107abe43 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107abe4a jb 0x107abe62 */
  if (C.cf) goto L_107abe62;
  /* 107abe4c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107abe53 ja 0x107abe62 */
  if ((!C.cf&&!C.zf)) goto L_107abe62;
  /* 107abe55 call 0x107abe80 */
  push32(0x107abe5au); f_107abe80();
  /* 107abe5a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 107abe60 jmp 0x107abe6d */
  goto L_107abe6d;
L_107abe62:;
  /* 107abe62 call 0x107abe80 */
  push32(0x107abe67u); f_107abe80();
  /* 107abe67 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_107abe6d:;
  /* 107abe6d mov esp, ebp */
  ESP = (EBP);
  /* 107abe6f pop ebp */
  EBP = (pop32());
  /* 107abe70 ret  */
  ESPCHK(0x107abde0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be80 @ 0x107abe80 (13 bytes, 6 insns) */
void f_107abe80(void) {
  FTRACE(0x107abe80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107abe80 push ebp */
  push32((uint32_t)(EBP));
  /* 107abe81 mov ebp, esp */
  EBP = (ESP);
  /* 107abe83 call 0x107a39f0 */
  push32(0x107abe88u); f_107a39f0();
  /* 107abe88 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107abe8b pop ebp */
  EBP = (pop32());
  /* 107abe8c ret  */
  ESPCHK(0x107abe80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be90 @ 0x107abe90 (13 bytes, 6 insns) */
void f_107abe90(void) {
  FTRACE(0x107abe90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107abe90 push ebp */
  push32((uint32_t)(EBP));
  /* 107abe91 mov ebp, esp */
  EBP = (ESP);
  /* 107abe93 call 0x107a39f0 */
  push32(0x107abe98u); f_107a39f0();
  /* 107abe98 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107abe9b pop ebp */
  EBP = (pop32());
  /* 107abe9c ret  */
  ESPCHK(0x107abe90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bea0 @ 0x107abea0 (664 bytes, 261 insns) [15 switch table(s)] */
void f_107abea0(void) {
  FTRACE(0x107abea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107abea0 push ebp */
  push32((uint32_t)(EBP));
  /* 107abea1 mov ebp, esp */
  EBP = (ESP);
  /* 107abea3 push edi */
  push32((uint32_t)(EDI));
  /* 107abea4 push esi */
  push32((uint32_t)(ESI));
  /* 107abea5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 107abea8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107abeab mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 107abeae mov eax, ecx */
  EAX = (ECX);
  /* 107abeb0 mov edx, ecx */
  EDX = (ECX);
  /* 107abeb2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107abeb4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107abeb6 jbe 0x107abec0 */
  if ((C.cf||C.zf)) goto L_107abec0;
  /* 107abeb8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107abeba jb 0x107ac038 */
  if (C.cf) goto L_107ac038;
L_107abec0:;
  /* 107abec0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 107abec6 jne 0x107abedc */
  if (!C.zf) goto L_107abedc;
  /* 107abec8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107abecb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 107abece cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107abed1 jb 0x107abefc */
  if (C.cf) goto L_107abefc;
  /* 107abed3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 107abed5 jmp dword ptr [edx*4 + 0x107abfe8] */
  switch (EDX) {
    case 0: goto L_107abff8;
    case 1: goto L_107ac000;
    case 2: goto L_107ac00c;
    case 3: goto L_107ac020;
    default: x86_unimpl("switch@0x107abed5 out of table"); return;
  }
L_107abedc:;
  /* 107abedc mov eax, edi */
  EAX = (EDI);
  /* 107abede mov edx, 3 */
  EDX = (0x3u);
  /* 107abee3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107abee6 jb 0x107abef4 */
  if (C.cf) goto L_107abef4;
  /* 107abee8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 107abeeb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107abeed jmp dword ptr [eax*4 + 0x107abf00] */
  switch (EAX) {
    case 1: goto L_107abf10;
    case 2: goto L_107abf3c;
    case 3: goto L_107abf60;
    default: x86_unimpl("switch@0x107abeed out of table"); return;
  }
L_107abef4:;
  /* 107abef4 jmp dword ptr [ecx*4 + 0x107abff8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x107abff8)))); return;
  /* 107abefb nop  */
  /* nop */
L_107abefc:;
  /* 107abefc jmp dword ptr [ecx*4 + 0x107abf7c] */
  switch (ECX) {
    case 0: goto L_107abfdf;
    case 1: goto L_107abfcc;
    case 2: goto L_107abfc4;
    case 3: goto L_107abfbc;
    case 4: goto L_107abfb4;
    case 5: goto L_107abfac;
    case 6: goto L_107abfa4;
    case 7: goto L_107abf9c;
    default: x86_unimpl("switch@0x107abefc out of table"); return;
  }
  /* 107abf03 nop  */
  /* nop */
L_107abf10:;
  /* 107abf10 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 107abf12 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107abf14 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107abf16 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 107abf19 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 107abf1c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 107abf1f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107abf22 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 107abf25 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 107abf28 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 107abf2b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107abf2e jb 0x107abefc */
  if (C.cf) goto L_107abefc;
  /* 107abf30 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 107abf32 jmp dword ptr [edx*4 + 0x107abfe8] */
  switch (EDX) {
    case 0: goto L_107abff8;
    case 1: goto L_107ac000;
    case 2: goto L_107ac00c;
    case 3: goto L_107ac020;
    default: x86_unimpl("switch@0x107abf32 out of table"); return;
  }
  /* 107abf39 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_107abf3c:;
  /* 107abf3c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 107abf3e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107abf40 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107abf42 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 107abf45 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107abf48 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 107abf4b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 107abf4e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 107abf51 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107abf54 jb 0x107abefc */
  if (C.cf) goto L_107abefc;
  /* 107abf56 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 107abf58 jmp dword ptr [edx*4 + 0x107abfe8] */
  switch (EDX) {
    case 0: goto L_107abff8;
    case 1: goto L_107ac000;
    case 2: goto L_107ac00c;
    case 3: goto L_107ac020;
    default: x86_unimpl("switch@0x107abf58 out of table"); return;
  }
  /* 107abf5f nop  */
  /* nop */
L_107abf60:;
  /* 107abf60 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 107abf62 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107abf64 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107abf66 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 107abf67 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107abf6a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 107abf6b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107abf6e jb 0x107abefc */
  if (C.cf) goto L_107abefc;
  /* 107abf70 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 107abf72 jmp dword ptr [edx*4 + 0x107abfe8] */
  switch (EDX) {
    case 0: goto L_107abff8;
    case 1: goto L_107ac000;
    case 2: goto L_107ac00c;
    case 3: goto L_107ac020;
    default: x86_unimpl("switch@0x107abf72 out of table"); return;
  }
  /* 107abf79 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_107abf9c:;
  /* 107abf9c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 107abfa0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_107abfa4:;
  /* 107abfa4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 107abfa8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_107abfac:;
  /* 107abfac mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 107abfb0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_107abfb4:;
  /* 107abfb4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 107abfb8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_107abfbc:;
  /* 107abfbc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 107abfc0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_107abfc4:;
  /* 107abfc4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 107abfc8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_107abfcc:;
  /* 107abfcc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 107abfd0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 107abfd4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 107abfdb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 107abfdd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_107abfdf:;
  /* 107abfdf jmp dword ptr [edx*4 + 0x107abfe8] */
  switch (EDX) {
    case 0: goto L_107abff8;
    case 1: goto L_107ac000;
    case 2: goto L_107ac00c;
    case 3: goto L_107ac020;
    default: x86_unimpl("switch@0x107abfdf out of table"); return;
  }
  /* 107abfe6 mov edi, edi */
  EDI = (EDI);
L_107abff8:;
  /* 107abff8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107abffb pop esi */
  ESI = (pop32());
  /* 107abffc pop edi */
  EDI = (pop32());
  /* 107abffd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107abffe ret  */
  ESPCHK(0x107abea0u, _esp0);
  ESP += 4; return;
  /* 107abfff nop  */
  /* nop */
L_107ac000:;
  /* 107ac000 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107ac002 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107ac004 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ac007 pop esi */
  ESI = (pop32());
  /* 107ac008 pop edi */
  EDI = (pop32());
  /* 107ac009 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107ac00a ret  */
  ESPCHK(0x107abea0u, _esp0);
  ESP += 4; return;
  /* 107ac00b nop  */
  /* nop */
L_107ac00c:;
  /* 107ac00c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107ac00e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107ac010 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 107ac013 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 107ac016 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ac019 pop esi */
  ESI = (pop32());
  /* 107ac01a pop edi */
  EDI = (pop32());
  /* 107ac01b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107ac01c ret  */
  ESPCHK(0x107abea0u, _esp0);
  ESP += 4; return;
  /* 107ac01d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_107ac020:;
  /* 107ac020 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107ac022 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107ac024 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 107ac027 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 107ac02a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 107ac02d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 107ac030 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ac033 pop esi */
  ESI = (pop32());
  /* 107ac034 pop edi */
  EDI = (pop32());
  /* 107ac035 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107ac036 ret  */
  ESPCHK(0x107abea0u, _esp0);
  ESP += 4; return;
  /* 107ac037 nop  */
  /* nop */
L_107ac038:;
  /* 107ac038 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 107ac03c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 107ac040 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 107ac046 jne 0x107ac06c */
  if (!C.zf) goto L_107ac06c;
  /* 107ac048 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107ac04b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 107ac04e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ac051 jb 0x107ac060 */
  if (C.cf) goto L_107ac060;
  /* 107ac053 std  */
  C.df=1;
  /* 107ac054 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 107ac056 cld  */
  C.df=0;
  /* 107ac057 jmp dword ptr [edx*4 + 0x107ac180] */
  switch (EDX) {
    case 0: goto L_107ac190;
    case 1: goto L_107ac198;
    case 2: goto L_107ac1a8;
    case 3: goto L_107ac1bc;
    default: x86_unimpl("switch@0x107ac057 out of table"); return;
  }
  /* 107ac05e mov edi, edi */
  EDI = (EDI);
L_107ac060:;
  /* 107ac060 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 107ac062 jmp dword ptr [ecx*4 + 0x107ac130] */
  switch (ECX) {
    case 0: goto L_107ac177;
    default: x86_unimpl("switch@0x107ac062 out of table"); return;
  }
  /* 107ac069 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_107ac06c:;
  /* 107ac06c mov eax, edi */
  EAX = (EDI);
  /* 107ac06e mov edx, 3 */
  EDX = (0x3u);
  /* 107ac073 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ac076 jb 0x107ac084 */
  if (C.cf) goto L_107ac084;
  /* 107ac078 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 107ac07b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ac07d jmp dword ptr [eax*4 + 0x107ac088] */
  switch (EAX) {
    case 1: goto L_107ac098;
    case 2: goto L_107ac0b8;
    case 3: goto L_107ac0e0;
    default: x86_unimpl("switch@0x107ac07d out of table"); return;
  }
L_107ac084:;
  /* 107ac084 jmp dword ptr [ecx*4 + 0x107ac180] */
  switch (ECX) {
    case 0: goto L_107ac190;
    case 1: goto L_107ac198;
    case 2: goto L_107ac1a8;
    case 3: goto L_107ac1bc;
    default: x86_unimpl("switch@0x107ac084 out of table"); return;
  }
  /* 107ac08b nop  */
  /* nop */
L_107ac098:;
  /* 107ac098 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 107ac09b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 107ac09d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 107ac0a0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 107ac0a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107ac0a4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 107ac0a5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ac0a8 jb 0x107ac060 */
  if (C.cf) goto L_107ac060;
  /* 107ac0aa std  */
  C.df=1;
  /* 107ac0ab rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 107ac0ad cld  */
  C.df=0;
  /* 107ac0ae jmp dword ptr [edx*4 + 0x107ac180] */
  switch (EDX) {
    case 0: goto L_107ac190;
    case 1: goto L_107ac198;
    case 2: goto L_107ac1a8;
    case 3: goto L_107ac1bc;
    default: x86_unimpl("switch@0x107ac0ae out of table"); return;
  }
  /* 107ac0b5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_107ac0b8:;
  /* 107ac0b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 107ac0bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 107ac0bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 107ac0c0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 107ac0c3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107ac0c6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 107ac0c9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ac0cc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ac0cf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ac0d2 jb 0x107ac060 */
  if (C.cf) goto L_107ac060;
  /* 107ac0d4 std  */
  C.df=1;
  /* 107ac0d5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 107ac0d7 cld  */
  C.df=0;
  /* 107ac0d8 jmp dword ptr [edx*4 + 0x107ac180] */
  switch (EDX) {
    case 0: goto L_107ac190;
    case 1: goto L_107ac198;
    case 2: goto L_107ac1a8;
    case 3: goto L_107ac1bc;
    default: x86_unimpl("switch@0x107ac0d8 out of table"); return;
  }
  /* 107ac0df nop  */
  /* nop */
L_107ac0e0:;
  /* 107ac0e0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 107ac0e3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 107ac0e5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 107ac0e8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 107ac0eb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 107ac0ee mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 107ac0f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107ac0f4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 107ac0f7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ac0fa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ac0fd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ac100 jb 0x107ac060 */
  if (C.cf) goto L_107ac060;
  /* 107ac106 std  */
  C.df=1;
  /* 107ac107 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 107ac109 cld  */
  C.df=0;
  /* 107ac10a jmp dword ptr [edx*4 + 0x107ac180] */
  switch (EDX) {
    case 0: goto L_107ac190;
    case 1: goto L_107ac198;
    case 2: goto L_107ac1a8;
    case 3: goto L_107ac1bc;
    default: x86_unimpl("switch@0x107ac10a out of table"); return;
  }
  /* 107ac111 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 107ac114 xor al, 0xc1 */
  { uint32_t _r=(AL)^(0xc1u); AL = (_r); fl_logic(_r,8); }
  /* 107ac116 jp 0x107ac128 */
  if (C.pf) goto L_107ac128;
  /* 107ac118 cmp al, 0xc1 */
  { uint32_t _a=(AL),_b=(0xc1u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107ac11a jp 0x107ac12c */
  if (C.pf) goto L_107ac12c;
  /* 107ac11c inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 107ac11d sar dword ptr [edx + 0x10], 0x4c */
  w32((uint32_t)(EDX + 0x10), (sh_sar((uint32_t)(r32((uint32_t)(EDX + 0x10))), (0x4cu)&0x1f, 32)));
  /* 107ac121 sar dword ptr [edx + 0x10], 0x54 */
  w32((uint32_t)(EDX + 0x10), (sh_sar((uint32_t)(r32((uint32_t)(EDX + 0x10))), (0x54u)&0x1f, 32)));
  /* 107ac125 sar dword ptr [edx + 0x10], 0x5c */
  w32((uint32_t)(EDX + 0x10), (sh_sar((uint32_t)(r32((uint32_t)(EDX + 0x10))), (0x5cu)&0x1f, 32)));
  /* 107ac129 sar dword ptr [edx + 0x10], 0x64 */
  w32((uint32_t)(EDX + 0x10), (sh_sar((uint32_t)(r32((uint32_t)(EDX + 0x10))), (0x64u)&0x1f, 32)));
  /* 107ac12e jp 0x107ac140 */
  if (C.pf) goto L_107ac140;
  /* 107ac134 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 107ac138 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 107ac13c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
L_107ac140:;
  /* 107ac140 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 107ac144 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 107ac148 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 107ac14c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 107ac150 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 107ac154 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 107ac158 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 107ac15c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 107ac160 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 107ac164 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 107ac168 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 107ac16c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 107ac173 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 107ac175 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_107ac177:;
  /* 107ac177 jmp dword ptr [edx*4 + 0x107ac180] */
  switch (EDX) {
    case 0: goto L_107ac190;
    case 1: goto L_107ac198;
    case 2: goto L_107ac1a8;
    case 3: goto L_107ac1bc;
    default: x86_unimpl("switch@0x107ac177 out of table"); return;
  }
  /* 107ac17e mov edi, edi */
  EDI = (EDI);
L_107ac190:;
  /* 107ac190 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ac193 pop esi */
  ESI = (pop32());
  /* 107ac194 pop edi */
  EDI = (pop32());
  /* 107ac195 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107ac196 ret  */
  ESPCHK(0x107abea0u, _esp0);
  ESP += 4; return;
  /* 107ac197 nop  */
  /* nop */
L_107ac198:;
  /* 107ac198 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 107ac19b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 107ac19e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ac1a1 pop esi */
  ESI = (pop32());
  /* 107ac1a2 pop edi */
  EDI = (pop32());
  /* 107ac1a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107ac1a4 ret  */
  ESPCHK(0x107abea0u, _esp0);
  ESP += 4; return;
  /* 107ac1a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_107ac1a8:;
  /* 107ac1a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 107ac1ab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 107ac1ae mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 107ac1b1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 107ac1b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ac1b7 pop esi */
  ESI = (pop32());
  /* 107ac1b8 pop edi */
  EDI = (pop32());
  /* 107ac1b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107ac1ba ret  */
  ESPCHK(0x107abea0u, _esp0);
  ESP += 4; return;
  /* 107ac1bb nop  */
  /* nop */
L_107ac1bc:;
  /* 107ac1bc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 107ac1bf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 107ac1c2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 107ac1c5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 107ac1c8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 107ac1cb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 107ac1ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ac1d1 pop esi */
  ESI = (pop32());
  /* 107ac1d2 pop edi */
  EDI = (pop32());
  /* 107ac1d3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107ac1d4 ret  */
  ESPCHK(0x107abea0u, _esp0);
  ESP += 4; return;
L_107ac128: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x107ac128 (unresolved jump table)"); return;
L_107ac12c: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x107ac12c (unresolved jump table)"); return;
}

/* FUN_1000c1e0 @ 0x107ac1e0 (421 bytes, 148 insns) */
void f_107ac1e0(void) {
  FTRACE(0x107ac1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ac1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107ac1e1 mov ebp, esp */
  EBP = (ESP);
  /* 107ac1e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107ac1e5 push 0x107cb060 */
  push32((uint32_t)(0x107cb060u));
  /* 107ac1ea push 0x107ad0b8 */
  push32((uint32_t)(0x107ad0b8u));
  /* 107ac1ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 107ac1f5 push eax */
  push32((uint32_t)(EAX));
  /* 107ac1f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 107ac1fd add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ac200 push ebx */
  push32((uint32_t)(EBX));
  /* 107ac201 push esi */
  push32((uint32_t)(ESI));
  /* 107ac202 push edi */
  push32((uint32_t)(EDI));
  /* 107ac203 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 107ac206 cmp dword ptr [0x107cf724], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf724))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ac20d jne 0x107ac25e */
  if (!C.zf) goto L_107ac25e;
  /* 107ac20f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 107ac212 push eax */
  push32((uint32_t)(EAX));
  /* 107ac213 push 1 */
  push32((uint32_t)(0x1u));
  /* 107ac215 push 0x107cb05c */
  push32((uint32_t)(0x107cb05cu));
  /* 107ac21a push 1 */
  push32((uint32_t)(0x1u));
  /* 107ac21c call dword ptr [0x107d22c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22c4))), 0x107ac222u);
  /* 107ac222 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ac224 je 0x107ac232 */
  if (C.zf) goto L_107ac232;
  /* 107ac226 mov dword ptr [0x107cf724], 1 */
  w32((uint32_t)(0x107cf724), (0x1u));
  /* 107ac230 jmp 0x107ac25e */
  goto L_107ac25e;
L_107ac232:;
  /* 107ac232 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 107ac235 push ecx */
  push32((uint32_t)(ECX));
  /* 107ac236 push 1 */
  push32((uint32_t)(0x1u));
  /* 107ac238 push 0x107cb058 */
  push32((uint32_t)(0x107cb058u));
  /* 107ac23d push 1 */
  push32((uint32_t)(0x1u));
  /* 107ac23f push 0 */
  push32((uint32_t)(0x0u));
  /* 107ac241 call dword ptr [0x107d22c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22c8))), 0x107ac247u);
  /* 107ac247 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ac249 je 0x107ac257 */
  if (C.zf) goto L_107ac257;
  /* 107ac24b mov dword ptr [0x107cf724], 2 */
  w32((uint32_t)(0x107cf724), (0x2u));
  /* 107ac255 jmp 0x107ac25e */
  goto L_107ac25e;
L_107ac257:;
  /* 107ac257 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ac259 jmp 0x107ac388 */
  goto L_107ac388;
L_107ac25e:;
  /* 107ac25e cmp dword ptr [0x107cf724], 2 */
  { uint32_t _a=(r32((uint32_t)(0x107cf724))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ac265 jne 0x107ac295 */
  if (!C.zf) goto L_107ac295;
  /* 107ac267 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ac26b jne 0x107ac276 */
  if (!C.zf) goto L_107ac276;
  /* 107ac26d mov edx, dword ptr [0x107cf730] */
  EDX = (r32((uint32_t)(0x107cf730)));
  /* 107ac273 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_107ac276:;
  /* 107ac276 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107ac279 push eax */
  push32((uint32_t)(EAX));
  /* 107ac27a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ac27d push ecx */
  push32((uint32_t)(ECX));
  /* 107ac27e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ac281 push edx */
  push32((uint32_t)(EDX));
  /* 107ac282 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ac285 push eax */
  push32((uint32_t)(EAX));
  /* 107ac286 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 107ac289 push ecx */
  push32((uint32_t)(ECX));
  /* 107ac28a call dword ptr [0x107d22c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22c8))), 0x107ac290u);
  /* 107ac290 jmp 0x107ac388 */
  goto L_107ac388;
L_107ac295:;
  /* 107ac295 cmp dword ptr [0x107cf724], 1 */
  { uint32_t _a=(r32((uint32_t)(0x107cf724))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ac29c jne 0x107ac386 */
  if (!C.zf) goto L_107ac386;
  /* 107ac2a2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ac2a6 jne 0x107ac2b1 */
  if (!C.zf) goto L_107ac2b1;
  /* 107ac2a8 mov edx, dword ptr [0x107cf740] */
  EDX = (r32((uint32_t)(0x107cf740)));
  /* 107ac2ae mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_107ac2b1:;
  /* 107ac2b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ac2b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ac2b5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ac2b8 push eax */
  push32((uint32_t)(EAX));
  /* 107ac2b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ac2bc push ecx */
  push32((uint32_t)(ECX));
  /* 107ac2bd mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 107ac2c0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 107ac2c2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ac2c4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 107ac2c7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ac2ca push edx */
  push32((uint32_t)(EDX));
  /* 107ac2cb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107ac2ce push eax */
  push32((uint32_t)(EAX));
  /* 107ac2cf call dword ptr [0x107d22cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22cc))), 0x107ac2d5u);
  /* 107ac2d5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 107ac2d8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ac2dc jne 0x107ac2e5 */
  if (!C.zf) goto L_107ac2e5;
  /* 107ac2de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ac2e0 jmp 0x107ac388 */
  goto L_107ac388;
L_107ac2e5:;
  /* 107ac2e5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107ac2ec mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ac2ef shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 107ac2f1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ac2f4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 107ac2f6 call 0x107a7150 */
  push32(0x107ac2fbu); f_107a7150();
  /* 107ac2fb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 107ac2fe mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 107ac301 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ac304 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 107ac307 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ac30a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 107ac30c push edx */
  push32((uint32_t)(EDX));
  /* 107ac30d push 0 */
  push32((uint32_t)(0x0u));
  /* 107ac30f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107ac312 push eax */
  push32((uint32_t)(EAX));
  /* 107ac313 call 0x107a7d20 */
  push32(0x107ac318u); f_107a7d20();
  /* 107ac318 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ac31b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 107ac322 jmp 0x107ac33b */
  goto L_107ac33b;
  /* 107ac324 mov eax, 1 */
  EAX = (0x1u);
  /* 107ac329 ret  */
  ESPCHK(0x107ac1e0u, _esp0);
  ESP += 4; return;
  /* 107ac32a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 107ac32d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 107ac334 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_107ac33b:;
  /* 107ac33b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ac33f jne 0x107ac345 */
  if (!C.zf) goto L_107ac345;
  /* 107ac341 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ac343 jmp 0x107ac388 */
  goto L_107ac388;
L_107ac345:;
  /* 107ac345 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ac348 push ecx */
  push32((uint32_t)(ECX));
  /* 107ac349 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107ac34c push edx */
  push32((uint32_t)(EDX));
  /* 107ac34d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ac350 push eax */
  push32((uint32_t)(EAX));
  /* 107ac351 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ac354 push ecx */
  push32((uint32_t)(ECX));
  /* 107ac355 push 1 */
  push32((uint32_t)(0x1u));
  /* 107ac357 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107ac35a push edx */
  push32((uint32_t)(EDX));
  /* 107ac35b call dword ptr [0x107d22cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22cc))), 0x107ac361u);
  /* 107ac361 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 107ac364 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ac368 jne 0x107ac36e */
  if (!C.zf) goto L_107ac36e;
  /* 107ac36a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ac36c jmp 0x107ac388 */
  goto L_107ac388;
L_107ac36e:;
  /* 107ac36e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107ac371 push eax */
  push32((uint32_t)(EAX));
  /* 107ac372 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107ac375 push ecx */
  push32((uint32_t)(ECX));
  /* 107ac376 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107ac379 push edx */
  push32((uint32_t)(EDX));
  /* 107ac37a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ac37d push eax */
  push32((uint32_t)(EAX));
  /* 107ac37e call dword ptr [0x107d22c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22c4))), 0x107ac384u);
  /* 107ac384 jmp 0x107ac388 */
  goto L_107ac388;
L_107ac386:;
  /* 107ac386 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107ac388:;
  /* 107ac388 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 107ac38b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107ac38e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 107ac395 pop edi */
  EDI = (pop32());
  /* 107ac396 pop esi */
  ESI = (pop32());
  /* 107ac397 pop ebx */
  EBX = (pop32());
  /* 107ac398 mov esp, ebp */
  ESP = (EBP);
  /* 107ac39a pop ebp */
  EBP = (pop32());
  /* 107ac39b ret  */
  ESPCHK(0x107ac1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3a0 @ 0x107ac3a0 (727 bytes, 263 insns) */
void f_107ac3a0(void) {
  FTRACE(0x107ac3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ac3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107ac3a1 mov ebp, esp */
  EBP = (ESP);
  /* 107ac3a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107ac3a5 push 0x107cb070 */
  push32((uint32_t)(0x107cb070u));
  /* 107ac3aa push 0x107ad0b8 */
  push32((uint32_t)(0x107ad0b8u));
  /* 107ac3af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 107ac3b5 push eax */
  push32((uint32_t)(EAX));
  /* 107ac3b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 107ac3bd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ac3c0 push ebx */
  push32((uint32_t)(EBX));
  /* 107ac3c1 push esi */
  push32((uint32_t)(ESI));
  /* 107ac3c2 push edi */
  push32((uint32_t)(EDI));
  /* 107ac3c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 107ac3c6 cmp dword ptr [0x107cf748], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf748))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ac3cd jne 0x107ac426 */
  if (!C.zf) goto L_107ac426;
  /* 107ac3cf push 0 */
  push32((uint32_t)(0x0u));
  /* 107ac3d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ac3d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 107ac3d5 push 0x107cb05c */
  push32((uint32_t)(0x107cb05cu));
  /* 107ac3da push 0x100 */
  push32((uint32_t)(0x100u));
  /* 107ac3df push 0 */
  push32((uint32_t)(0x0u));
  /* 107ac3e1 call dword ptr [0x107d22bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22bc))), 0x107ac3e7u);
  /* 107ac3e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ac3e9 je 0x107ac3f7 */
  if (C.zf) goto L_107ac3f7;
  /* 107ac3eb mov dword ptr [0x107cf748], 1 */
  w32((uint32_t)(0x107cf748), (0x1u));
  /* 107ac3f5 jmp 0x107ac426 */
  goto L_107ac426;
L_107ac3f7:;
  /* 107ac3f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ac3f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ac3fb push 1 */
  push32((uint32_t)(0x1u));
  /* 107ac3fd push 0x107cb058 */
  push32((uint32_t)(0x107cb058u));
  /* 107ac402 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 107ac407 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ac409 call dword ptr [0x107d22c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22c0))), 0x107ac40fu);
  /* 107ac40f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ac411 je 0x107ac41f */
  if (C.zf) goto L_107ac41f;
  /* 107ac413 mov dword ptr [0x107cf748], 2 */
  w32((uint32_t)(0x107cf748), (0x2u));
  /* 107ac41d jmp 0x107ac426 */
  goto L_107ac426;
L_107ac41f:;
  /* 107ac41f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ac421 jmp 0x107ac691 */
  goto L_107ac691;
L_107ac426:;
  /* 107ac426 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ac42a jle 0x107ac43f */
  if ((C.zf||C.sf!=C.of)) goto L_107ac43f;
  /* 107ac42c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107ac42f push eax */
  push32((uint32_t)(EAX));
  /* 107ac430 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ac433 push ecx */
  push32((uint32_t)(ECX));
  /* 107ac434 call 0x107ac6b0 */
  push32(0x107ac439u); f_107ac6b0();
  /* 107ac439 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ac43c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_107ac43f:;
  /* 107ac43f cmp dword ptr [0x107cf748], 2 */
  { uint32_t _a=(r32((uint32_t)(0x107cf748))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ac446 jne 0x107ac46b */
  if (!C.zf) goto L_107ac46b;
  /* 107ac448 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 107ac44b push edx */
  push32((uint32_t)(EDX));
  /* 107ac44c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107ac44f push eax */
  push32((uint32_t)(EAX));
  /* 107ac450 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107ac453 push ecx */
  push32((uint32_t)(ECX));
  /* 107ac454 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ac457 push edx */
  push32((uint32_t)(EDX));
  /* 107ac458 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ac45b push eax */
  push32((uint32_t)(EAX));
  /* 107ac45c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ac45f push ecx */
  push32((uint32_t)(ECX));
  /* 107ac460 call dword ptr [0x107d22c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22c0))), 0x107ac466u);
  /* 107ac466 jmp 0x107ac691 */
  goto L_107ac691;
L_107ac46b:;
  /* 107ac46b cmp dword ptr [0x107cf748], 1 */
  { uint32_t _a=(r32((uint32_t)(0x107cf748))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ac472 jne 0x107ac68f */
  if (!C.zf) goto L_107ac68f;
  /* 107ac478 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ac47c jne 0x107ac487 */
  if (!C.zf) goto L_107ac487;
  /* 107ac47e mov edx, dword ptr [0x107cf740] */
  EDX = (r32((uint32_t)(0x107cf740)));
  /* 107ac484 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_107ac487:;
  /* 107ac487 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ac489 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ac48b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107ac48e push eax */
  push32((uint32_t)(EAX));
  /* 107ac48f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ac492 push ecx */
  push32((uint32_t)(ECX));
  /* 107ac493 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 107ac496 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 107ac498 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ac49a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 107ac49d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ac4a0 push edx */
  push32((uint32_t)(EDX));
  /* 107ac4a1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 107ac4a4 push eax */
  push32((uint32_t)(EAX));
  /* 107ac4a5 call dword ptr [0x107d22cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22cc))), 0x107ac4abu);
  /* 107ac4ab mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 107ac4ae cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ac4b2 jne 0x107ac4bb */
  if (!C.zf) goto L_107ac4bb;
  /* 107ac4b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ac4b6 jmp 0x107ac691 */
  goto L_107ac691;
L_107ac4bb:;
  /* 107ac4bb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107ac4c2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107ac4c5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 107ac4c7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ac4ca and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 107ac4cc call 0x107a7150 */
  push32(0x107ac4d1u); f_107a7150();
  /* 107ac4d1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 107ac4d4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 107ac4d7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ac4da mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 107ac4dd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 107ac4e4 jmp 0x107ac4fd */
  goto L_107ac4fd;
  /* 107ac4e6 mov eax, 1 */
  EAX = (0x1u);
  /* 107ac4eb ret  */
  ESPCHK(0x107ac3a0u, _esp0);
  ESP += 4; return;
  /* 107ac4ec mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 107ac4ef mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 107ac4f6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_107ac4fd:;
  /* 107ac4fd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ac501 jne 0x107ac50a */
  if (!C.zf) goto L_107ac50a;
  /* 107ac503 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ac505 jmp 0x107ac691 */
  goto L_107ac691;
L_107ac50a:;
  /* 107ac50a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107ac50d push edx */
  push32((uint32_t)(EDX));
  /* 107ac50e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107ac511 push eax */
  push32((uint32_t)(EAX));
  /* 107ac512 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107ac515 push ecx */
  push32((uint32_t)(ECX));
  /* 107ac516 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ac519 push edx */
  push32((uint32_t)(EDX));
  /* 107ac51a push 1 */
  push32((uint32_t)(0x1u));
  /* 107ac51c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 107ac51f push eax */
  push32((uint32_t)(EAX));
  /* 107ac520 call dword ptr [0x107d22cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22cc))), 0x107ac526u);
  /* 107ac526 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ac528 jne 0x107ac531 */
  if (!C.zf) goto L_107ac531;
  /* 107ac52a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ac52c jmp 0x107ac691 */
  goto L_107ac691;
L_107ac531:;
  /* 107ac531 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ac533 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ac535 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107ac538 push ecx */
  push32((uint32_t)(ECX));
  /* 107ac539 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107ac53c push edx */
  push32((uint32_t)(EDX));
  /* 107ac53d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ac540 push eax */
  push32((uint32_t)(EAX));
  /* 107ac541 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ac544 push ecx */
  push32((uint32_t)(ECX));
  /* 107ac545 call dword ptr [0x107d22bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22bc))), 0x107ac54bu);
  /* 107ac54b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 107ac54e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ac552 jne 0x107ac55b */
  if (!C.zf) goto L_107ac55b;
  /* 107ac554 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ac556 jmp 0x107ac691 */
  goto L_107ac691;
L_107ac55b:;
  /* 107ac55b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ac55e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 107ac564 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ac566 je 0x107ac5ab */
  if (C.zf) goto L_107ac5ab;
  /* 107ac568 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ac56c je 0x107ac5a6 */
  if (C.zf) goto L_107ac5a6;
  /* 107ac56e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107ac571 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ac574 jle 0x107ac57d */
  if ((C.zf||C.sf!=C.of)) goto L_107ac57d;
  /* 107ac576 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ac578 jmp 0x107ac691 */
  goto L_107ac691;
L_107ac57d:;
  /* 107ac57d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 107ac580 push ecx */
  push32((uint32_t)(ECX));
  /* 107ac581 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107ac584 push edx */
  push32((uint32_t)(EDX));
  /* 107ac585 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107ac588 push eax */
  push32((uint32_t)(EAX));
  /* 107ac589 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107ac58c push ecx */
  push32((uint32_t)(ECX));
  /* 107ac58d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ac590 push edx */
  push32((uint32_t)(EDX));
  /* 107ac591 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ac594 push eax */
  push32((uint32_t)(EAX));
  /* 107ac595 call dword ptr [0x107d22bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22bc))), 0x107ac59bu);
  /* 107ac59b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ac59d jne 0x107ac5a6 */
  if (!C.zf) goto L_107ac5a6;
  /* 107ac59f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ac5a1 jmp 0x107ac691 */
  goto L_107ac691;
L_107ac5a6:;
  /* 107ac5a6 jmp 0x107ac68a */
  goto L_107ac68a;
L_107ac5ab:;
  /* 107ac5ab mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107ac5ae mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 107ac5b1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 107ac5b8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ac5bb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 107ac5bd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ac5c0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 107ac5c2 call 0x107a7150 */
  push32(0x107ac5c7u); f_107a7150();
  /* 107ac5c7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 107ac5ca mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 107ac5cd mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 107ac5d0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 107ac5d3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 107ac5da jmp 0x107ac5f3 */
  goto L_107ac5f3;
  /* 107ac5dc mov eax, 1 */
  EAX = (0x1u);
  /* 107ac5e1 ret  */
  ESPCHK(0x107ac3a0u, _esp0);
  ESP += 4; return;
  /* 107ac5e2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 107ac5e5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 107ac5ec mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_107ac5f3:;
  /* 107ac5f3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ac5f7 jne 0x107ac600 */
  if (!C.zf) goto L_107ac600;
  /* 107ac5f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ac5fb jmp 0x107ac691 */
  goto L_107ac691;
L_107ac600:;
  /* 107ac600 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ac603 push eax */
  push32((uint32_t)(EAX));
  /* 107ac604 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ac607 push ecx */
  push32((uint32_t)(ECX));
  /* 107ac608 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107ac60b push edx */
  push32((uint32_t)(EDX));
  /* 107ac60c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107ac60f push eax */
  push32((uint32_t)(EAX));
  /* 107ac610 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ac613 push ecx */
  push32((uint32_t)(ECX));
  /* 107ac614 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ac617 push edx */
  push32((uint32_t)(EDX));
  /* 107ac618 call dword ptr [0x107d22bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22bc))), 0x107ac61eu);
  /* 107ac61e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ac620 jne 0x107ac626 */
  if (!C.zf) goto L_107ac626;
  /* 107ac622 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ac624 jmp 0x107ac691 */
  goto L_107ac691;
L_107ac626:;
  /* 107ac626 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ac62a jne 0x107ac65a */
  if (!C.zf) goto L_107ac65a;
  /* 107ac62c push 0 */
  push32((uint32_t)(0x0u));
  /* 107ac62e push 0 */
  push32((uint32_t)(0x0u));
  /* 107ac630 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ac632 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ac634 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ac637 push eax */
  push32((uint32_t)(EAX));
  /* 107ac638 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ac63b push ecx */
  push32((uint32_t)(ECX));
  /* 107ac63c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 107ac641 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 107ac644 push edx */
  push32((uint32_t)(EDX));
  /* 107ac645 call dword ptr [0x107d235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d235c))), 0x107ac64bu);
  /* 107ac64b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 107ac64e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ac652 jne 0x107ac658 */
  if (!C.zf) goto L_107ac658;
  /* 107ac654 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ac656 jmp 0x107ac691 */
  goto L_107ac691;
L_107ac658:;
  /* 107ac658 jmp 0x107ac68a */
  goto L_107ac68a;
L_107ac65a:;
  /* 107ac65a push 0 */
  push32((uint32_t)(0x0u));
  /* 107ac65c push 0 */
  push32((uint32_t)(0x0u));
  /* 107ac65e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 107ac661 push eax */
  push32((uint32_t)(EAX));
  /* 107ac662 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107ac665 push ecx */
  push32((uint32_t)(ECX));
  /* 107ac666 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ac669 push edx */
  push32((uint32_t)(EDX));
  /* 107ac66a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ac66d push eax */
  push32((uint32_t)(EAX));
  /* 107ac66e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 107ac673 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 107ac676 push ecx */
  push32((uint32_t)(ECX));
  /* 107ac677 call dword ptr [0x107d235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d235c))), 0x107ac67du);
  /* 107ac67d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 107ac680 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ac684 jne 0x107ac68a */
  if (!C.zf) goto L_107ac68a;
  /* 107ac686 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ac688 jmp 0x107ac691 */
  goto L_107ac691;
L_107ac68a:;
  /* 107ac68a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107ac68d jmp 0x107ac691 */
  goto L_107ac691;
L_107ac68f:;
  /* 107ac68f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107ac691:;
  /* 107ac691 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 107ac694 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107ac697 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 107ac69e pop edi */
  EDI = (pop32());
  /* 107ac69f pop esi */
  ESI = (pop32());
  /* 107ac6a0 pop ebx */
  EBX = (pop32());
  /* 107ac6a1 mov esp, ebp */
  ESP = (EBP);
  /* 107ac6a3 pop ebp */
  EBP = (pop32());
  /* 107ac6a4 ret  */
  ESPCHK(0x107ac3a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6b0 @ 0x107ac6b0 (80 bytes, 32 insns) */
void f_107ac6b0(void) {
  FTRACE(0x107ac6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ac6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107ac6b1 mov ebp, esp */
  EBP = (ESP);
  /* 107ac6b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ac6b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ac6b9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107ac6bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ac6bf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107ac6c2:;
  /* 107ac6c2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ac6c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ac6c8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ac6cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107ac6ce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ac6d0 je 0x107ac6e7 */
  if (C.zf) goto L_107ac6e7;
  /* 107ac6d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ac6d5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107ac6d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ac6da je 0x107ac6e7 */
  if (C.zf) goto L_107ac6e7;
  /* 107ac6dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ac6df add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ac6e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ac6e5 jmp 0x107ac6c2 */
  goto L_107ac6c2;
L_107ac6e7:;
  /* 107ac6e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ac6ea movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107ac6ed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ac6ef jne 0x107ac6f9 */
  if (!C.zf) goto L_107ac6f9;
  /* 107ac6f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ac6f4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ac6f7 jmp 0x107ac6fc */
  goto L_107ac6fc;
L_107ac6f9:;
  /* 107ac6f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_107ac6fc:;
  /* 107ac6fc mov esp, ebp */
  ESP = (EBP);
  /* 107ac6fe pop ebp */
  EBP = (pop32());
  /* 107ac6ff ret  */
  ESPCHK(0x107ac6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c700 @ 0x107ac700 (130 bytes, 43 insns) */
void f_107ac700(void) {
  FTRACE(0x107ac700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ac700 push ebp */
  push32((uint32_t)(EBP));
  /* 107ac701 mov ebp, esp */
  EBP = (ESP);
  /* 107ac703 push ecx */
  push32((uint32_t)(ECX));
  /* 107ac704 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ac707 cmp eax, dword ptr [0x107d103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x107d103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ac70d jae 0x107ac731 */
  if (!C.cf) goto L_107ac731;
  /* 107ac70f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ac712 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 107ac715 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ac718 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 107ac71b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ac71e mov eax, dword ptr [ecx*4 + 0x107d0f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x107d0f00)));
  /* 107ac725 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 107ac72a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 107ac72d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ac72f jne 0x107ac74c */
  if (!C.zf) goto L_107ac74c;
L_107ac731:;
  /* 107ac731 call 0x107abe80 */
  push32(0x107ac736u); f_107abe80();
  /* 107ac736 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 107ac73c call 0x107abe90 */
  push32(0x107ac741u); f_107abe90();
  /* 107ac741 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 107ac747 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107ac74a jmp 0x107ac77e */
  goto L_107ac77e;
L_107ac74c:;
  /* 107ac74c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ac74f push edx */
  push32((uint32_t)(EDX));
  /* 107ac750 call 0x107ad6a0 */
  push32(0x107ac755u); f_107ad6a0();
  /* 107ac755 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ac758 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ac75b push eax */
  push32((uint32_t)(EAX));
  /* 107ac75c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ac75f push ecx */
  push32((uint32_t)(ECX));
  /* 107ac760 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ac763 push edx */
  push32((uint32_t)(EDX));
  /* 107ac764 call 0x107ac790 */
  push32(0x107ac769u); f_107ac790();
  /* 107ac769 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ac76c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ac76f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ac772 push eax */
  push32((uint32_t)(EAX));
  /* 107ac773 call 0x107ad730 */
  push32(0x107ac778u); f_107ad730();
  /* 107ac778 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ac77b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_107ac77e:;
  /* 107ac77e mov esp, ebp */
  ESP = (EBP);
  /* 107ac780 pop ebp */
  EBP = (pop32());
  /* 107ac781 ret  */
  ESPCHK(0x107ac700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c790 @ 0x107ac790 (178 bytes, 56 insns) */
void f_107ac790(void) {
  FTRACE(0x107ac790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ac790 push ebp */
  push32((uint32_t)(EBP));
  /* 107ac791 mov ebp, esp */
  EBP = (ESP);
  /* 107ac793 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ac796 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ac799 push eax */
  push32((uint32_t)(EAX));
  /* 107ac79a call 0x107ad520 */
  push32(0x107ac79fu); f_107ad520();
  /* 107ac79f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ac7a2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107ac7a5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ac7a9 jne 0x107ac7be */
  if (!C.zf) goto L_107ac7be;
  /* 107ac7ab call 0x107abe80 */
  push32(0x107ac7b0u); f_107abe80();
  /* 107ac7b0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 107ac7b6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107ac7b9 jmp 0x107ac83e */
  goto L_107ac83e;
L_107ac7be:;
  /* 107ac7be mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ac7c1 push ecx */
  push32((uint32_t)(ECX));
  /* 107ac7c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ac7c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ac7c7 push edx */
  push32((uint32_t)(EDX));
  /* 107ac7c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ac7cb push eax */
  push32((uint32_t)(EAX));
  /* 107ac7cc call dword ptr [0x107d22b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22b8))), 0x107ac7d2u);
  /* 107ac7d2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107ac7d5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ac7d9 jne 0x107ac7e6 */
  if (!C.zf) goto L_107ac7e6;
  /* 107ac7db call dword ptr [0x107d2330] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2330))), 0x107ac7e1u);
  /* 107ac7e1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ac7e4 jmp 0x107ac7ed */
  goto L_107ac7ed;
L_107ac7e6:;
  /* 107ac7e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_107ac7ed:;
  /* 107ac7ed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ac7f1 je 0x107ac804 */
  if (C.zf) goto L_107ac804;
  /* 107ac7f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ac7f6 push ecx */
  push32((uint32_t)(ECX));
  /* 107ac7f7 call 0x107abde0 */
  push32(0x107ac7fcu); f_107abde0();
  /* 107ac7fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ac7ff or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107ac802 jmp 0x107ac83e */
  goto L_107ac83e;
L_107ac804:;
  /* 107ac804 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ac807 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 107ac80a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ac80d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 107ac810 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ac813 mov ecx, dword ptr [edx*4 + 0x107d0f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x107d0f00)));
  /* 107ac81a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 107ac81e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 107ac821 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ac824 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 107ac827 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ac82a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 107ac82d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ac830 mov eax, dword ptr [eax*4 + 0x107d0f00] */
  EAX = (r32((uint32_t)(EAX*4 + 0x107d0f00)));
  /* 107ac837 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 107ac83b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_107ac83e:;
  /* 107ac83e mov esp, ebp */
  ESP = (EBP);
  /* 107ac840 pop ebp */
  EBP = (pop32());
  /* 107ac841 ret  */
  ESPCHK(0x107ac790u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c850 @ 0x107ac850 (130 bytes, 43 insns) */
void f_107ac850(void) {
  FTRACE(0x107ac850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ac850 push ebp */
  push32((uint32_t)(EBP));
  /* 107ac851 mov ebp, esp */
  EBP = (ESP);
  /* 107ac853 push ecx */
  push32((uint32_t)(ECX));
  /* 107ac854 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ac857 cmp eax, dword ptr [0x107d103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x107d103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ac85d jae 0x107ac881 */
  if (!C.cf) goto L_107ac881;
  /* 107ac85f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ac862 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 107ac865 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ac868 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 107ac86b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ac86e mov eax, dword ptr [ecx*4 + 0x107d0f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x107d0f00)));
  /* 107ac875 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 107ac87a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 107ac87d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ac87f jne 0x107ac89c */
  if (!C.zf) goto L_107ac89c;
L_107ac881:;
  /* 107ac881 call 0x107abe80 */
  push32(0x107ac886u); f_107abe80();
  /* 107ac886 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 107ac88c call 0x107abe90 */
  push32(0x107ac891u); f_107abe90();
  /* 107ac891 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 107ac897 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107ac89a jmp 0x107ac8ce */
  goto L_107ac8ce;
L_107ac89c:;
  /* 107ac89c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ac89f push edx */
  push32((uint32_t)(EDX));
  /* 107ac8a0 call 0x107ad6a0 */
  push32(0x107ac8a5u); f_107ad6a0();
  /* 107ac8a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ac8a8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ac8ab push eax */
  push32((uint32_t)(EAX));
  /* 107ac8ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ac8af push ecx */
  push32((uint32_t)(ECX));
  /* 107ac8b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ac8b3 push edx */
  push32((uint32_t)(EDX));
  /* 107ac8b4 call 0x107ac8e0 */
  push32(0x107ac8b9u); f_107ac8e0();
  /* 107ac8b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ac8bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ac8bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ac8c2 push eax */
  push32((uint32_t)(EAX));
  /* 107ac8c3 call 0x107ad730 */
  push32(0x107ac8c8u); f_107ad730();
  /* 107ac8c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ac8cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_107ac8ce:;
  /* 107ac8ce mov esp, ebp */
  ESP = (EBP);
  /* 107ac8d0 pop ebp */
  EBP = (pop32());
  /* 107ac8d1 ret  */
  ESPCHK(0x107ac850u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8e0 @ 0x107ac8e0 (627 bytes, 182 insns) */
void f_107ac8e0(void) {
  FTRACE(0x107ac8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ac8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107ac8e1 mov ebp, esp */
  EBP = (ESP);
  /* 107ac8e3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ac8e9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 107ac8f0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107ac8f3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 107ac8f9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ac8fd jne 0x107ac906 */
  if (!C.zf) goto L_107ac906;
  /* 107ac8ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ac901 jmp 0x107acb4f */
  goto L_107acb4f;
L_107ac906:;
  /* 107ac906 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ac909 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 107ac90c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ac90f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 107ac912 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ac915 mov eax, dword ptr [ecx*4 + 0x107d0f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x107d0f00)));
  /* 107ac91c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 107ac921 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 107ac924 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ac926 je 0x107ac938 */
  if (C.zf) goto L_107ac938;
  /* 107ac928 push 2 */
  push32((uint32_t)(0x2u));
  /* 107ac92a push 0 */
  push32((uint32_t)(0x0u));
  /* 107ac92c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ac92f push edx */
  push32((uint32_t)(EDX));
  /* 107ac930 call 0x107ac790 */
  push32(0x107ac935u); f_107ac790();
  /* 107ac935 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107ac938:;
  /* 107ac938 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ac93b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 107ac93e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ac941 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 107ac944 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ac947 mov edx, dword ptr [eax*4 + 0x107d0f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x107d0f00)));
  /* 107ac94e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 107ac953 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 107ac958 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ac95a je 0x107aca6c */
  if (C.zf) goto L_107aca6c;
  /* 107ac960 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ac963 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107ac966 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_107ac96d:;
  /* 107ac96d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ac970 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ac973 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ac976 jae 0x107aca6a */
  if (!C.cf) goto L_107aca6a;
  /* 107ac97c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 107ac982 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_107ac985:;
  /* 107ac985 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ac988 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 107ac98e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ac990 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ac996 jge 0x107ac9f7 */
  if ((C.sf==C.of)) goto L_107ac9f7;
  /* 107ac998 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ac99b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ac99e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ac9a1 jae 0x107ac9f7 */
  if (!C.cf) goto L_107ac9f7;
  /* 107ac9a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ac9a6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107ac9a8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 107ac9ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ac9b1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ac9b4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ac9b7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 107ac9be cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ac9c1 jne 0x107ac9e1 */
  if (!C.zf) goto L_107ac9e1;
  /* 107ac9c3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 107ac9c9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ac9cc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 107ac9d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ac9d5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 107ac9d8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ac9db add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ac9de mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_107ac9e1:;
  /* 107ac9e1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ac9e4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 107ac9ea mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 107ac9ec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ac9ef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ac9f2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107ac9f5 jmp 0x107ac985 */
  goto L_107ac985;
L_107ac9f7:;
  /* 107ac9f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ac9f9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 107ac9ff push edx */
  push32((uint32_t)(EDX));
  /* 107aca00 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aca03 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 107aca09 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107aca0b push eax */
  push32((uint32_t)(EAX));
  /* 107aca0c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 107aca12 push edx */
  push32((uint32_t)(EDX));
  /* 107aca13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aca16 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 107aca19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aca1c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 107aca1f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107aca22 mov edx, dword ptr [eax*4 + 0x107d0f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x107d0f00)));
  /* 107aca29 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 107aca2c push eax */
  push32((uint32_t)(EAX));
  /* 107aca2d call dword ptr [0x107d22f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22f0))), 0x107aca33u);
  /* 107aca33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107aca35 je 0x107aca5a */
  if (C.zf) goto L_107aca5a;
  /* 107aca37 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107aca3a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aca40 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 107aca43 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aca46 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 107aca4c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107aca4e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aca54 jge 0x107aca58 */
  if ((C.sf==C.of)) goto L_107aca58;
  /* 107aca56 jmp 0x107aca6a */
  goto L_107aca6a;
L_107aca58:;
  /* 107aca58 jmp 0x107aca65 */
  goto L_107aca65;
L_107aca5a:;
  /* 107aca5a call dword ptr [0x107d2330] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2330))), 0x107aca60u);
  /* 107aca60 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107aca63 jmp 0x107aca6a */
  goto L_107aca6a;
L_107aca65:;
  /* 107aca65 jmp 0x107ac96d */
  goto L_107ac96d;
L_107aca6a:;
  /* 107aca6a jmp 0x107acabc */
  goto L_107acabc;
L_107aca6c:;
  /* 107aca6c push 0 */
  push32((uint32_t)(0x0u));
  /* 107aca6e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 107aca74 push ecx */
  push32((uint32_t)(ECX));
  /* 107aca75 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107aca78 push edx */
  push32((uint32_t)(EDX));
  /* 107aca79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107aca7c push eax */
  push32((uint32_t)(EAX));
  /* 107aca7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aca80 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 107aca83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aca86 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 107aca89 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107aca8c mov eax, dword ptr [ecx*4 + 0x107d0f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x107d0f00)));
  /* 107aca93 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 107aca96 push ecx */
  push32((uint32_t)(ECX));
  /* 107aca97 call dword ptr [0x107d22f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22f0))), 0x107aca9du);
  /* 107aca9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107aca9f je 0x107acab3 */
  if (C.zf) goto L_107acab3;
  /* 107acaa1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 107acaa8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 107acaae mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 107acab1 jmp 0x107acabc */
  goto L_107acabc;
L_107acab3:;
  /* 107acab3 call dword ptr [0x107d2330] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2330))), 0x107acab9u);
  /* 107acab9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_107acabc:;
  /* 107acabc cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107acac0 jne 0x107acb46 */
  if (!C.zf) goto L_107acb46;
  /* 107acac6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107acaca je 0x107acafa */
  if (C.zf) goto L_107acafa;
  /* 107acacc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107acad0 jne 0x107acae9 */
  if (!C.zf) goto L_107acae9;
  /* 107acad2 call 0x107abe80 */
  push32(0x107acad7u); f_107abe80();
  /* 107acad7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 107acadd call 0x107abe90 */
  push32(0x107acae2u); f_107abe90();
  /* 107acae2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107acae5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 107acae7 jmp 0x107acaf5 */
  goto L_107acaf5;
L_107acae9:;
  /* 107acae9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107acaec push edx */
  push32((uint32_t)(EDX));
  /* 107acaed call 0x107abde0 */
  push32(0x107acaf2u); f_107abde0();
  /* 107acaf2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107acaf5:;
  /* 107acaf5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107acaf8 jmp 0x107acb4f */
  goto L_107acb4f;
L_107acafa:;
  /* 107acafa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107acafd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 107acb00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107acb03 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 107acb06 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107acb09 mov edx, dword ptr [eax*4 + 0x107d0f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x107d0f00)));
  /* 107acb10 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 107acb15 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 107acb18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107acb1a je 0x107acb2b */
  if (C.zf) goto L_107acb2b;
  /* 107acb1c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107acb1f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107acb22 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107acb25 jne 0x107acb2b */
  if (!C.zf) goto L_107acb2b;
  /* 107acb27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107acb29 jmp 0x107acb4f */
  goto L_107acb4f;
L_107acb2b:;
  /* 107acb2b call 0x107abe80 */
  push32(0x107acb30u); f_107abe80();
  /* 107acb30 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 107acb36 call 0x107abe90 */
  push32(0x107acb3bu); f_107abe90();
  /* 107acb3b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 107acb41 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107acb44 jmp 0x107acb4f */
  goto L_107acb4f;
L_107acb46:;
  /* 107acb46 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107acb49 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_107acb4f:;
  /* 107acb4f mov esp, ebp */
  ESP = (EBP);
  /* 107acb51 pop ebp */
  EBP = (pop32());
  /* 107acb52 ret  */
  ESPCHK(0x107ac8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb60 @ 0x107acb60 (199 bytes, 68 insns) */
void f_107acb60(void) {
  FTRACE(0x107acb60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107acb60 push ebp */
  push32((uint32_t)(EBP));
  /* 107acb61 mov ebp, esp */
  EBP = (ESP);
  /* 107acb63 push ecx */
  push32((uint32_t)(ECX));
  /* 107acb64 push ebx */
  push32((uint32_t)(EBX));
  /* 107acb65 push esi */
  push32((uint32_t)(ESI));
  /* 107acb66 push edi */
  push32((uint32_t)(EDI));
L_107acb67:;
  /* 107acb67 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107acb6b jne 0x107acb8b */
  if (!C.zf) goto L_107acb8b;
  /* 107acb6d push 0x107cafbc */
  push32((uint32_t)(0x107cafbcu));
  /* 107acb72 push 0 */
  push32((uint32_t)(0x0u));
  /* 107acb74 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 107acb76 push 0x107cb088 */
  push32((uint32_t)(0x107cb088u));
  /* 107acb7b push 2 */
  push32((uint32_t)(0x2u));
  /* 107acb7d call 0x107a3070 */
  push32(0x107acb82u); f_107a3070();
  /* 107acb82 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107acb85 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107acb88 jne 0x107acb8b */
  if (!C.zf) goto L_107acb8b;
  /* 107acb8a int3  */
  x86_unimpl("int3 @ 0x107acb8a");
L_107acb8b:;
  /* 107acb8b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107acb8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107acb8f jne 0x107acb67 */
  if (!C.zf) goto L_107acb67;
  /* 107acb91 mov ecx, dword ptr [0x107cf74c] */
  ECX = (r32((uint32_t)(0x107cf74c)));
  /* 107acb97 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107acb9a mov dword ptr [0x107cf74c], ecx */
  w32((uint32_t)(0x107cf74c), (ECX));
  /* 107acba0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107acba3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107acba6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 107acba8 push 0x107cb088 */
  push32((uint32_t)(0x107cb088u));
  /* 107acbad push 2 */
  push32((uint32_t)(0x2u));
  /* 107acbaf push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 107acbb4 call 0x107a3fb0 */
  push32(0x107acbb9u); f_107a3fb0();
  /* 107acbb9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107acbbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107acbbf mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 107acbc2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107acbc5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107acbc9 je 0x107acbe6 */
  if (C.zf) goto L_107acbe6;
  /* 107acbcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107acbce mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 107acbd1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 107acbd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107acbd7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 107acbda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107acbdd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 107acbe4 jmp 0x107acc0b */
  goto L_107acc0b;
L_107acbe6:;
  /* 107acbe6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107acbe9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107acbec or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 107acbef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107acbf2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 107acbf5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107acbf8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107acbfb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107acbfe mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 107acc01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107acc04 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_107acc0b:;
  /* 107acc0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107acc0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107acc11 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 107acc14 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107acc16 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107acc19 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 107acc20 pop edi */
  EDI = (pop32());
  /* 107acc21 pop esi */
  ESI = (pop32());
  /* 107acc22 pop ebx */
  EBX = (pop32());
  /* 107acc23 mov esp, ebp */
  ESP = (EBP);
  /* 107acc25 pop ebp */
  EBP = (pop32());
  /* 107acc26 ret  */
  ESPCHK(0x107acb60u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x107acc30 (50 bytes, 17 insns) */
void f_107acc30(void) {
  FTRACE(0x107acc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107acc30 push ebp */
  push32((uint32_t)(EBP));
  /* 107acc31 mov ebp, esp */
  EBP = (ESP);
  /* 107acc33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107acc36 cmp eax, dword ptr [0x107d103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x107d103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107acc3c jb 0x107acc42 */
  if (C.cf) goto L_107acc42;
  /* 107acc3e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107acc40 jmp 0x107acc60 */
  goto L_107acc60;
L_107acc42:;
  /* 107acc42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107acc45 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 107acc48 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107acc4b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 107acc4e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107acc51 mov eax, dword ptr [ecx*4 + 0x107d0f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x107d0f00)));
  /* 107acc58 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 107acc5d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_107acc60:;
  /* 107acc60 pop ebp */
  EBP = (pop32());
  /* 107acc61 ret  */
  ESPCHK(0x107acc30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc70 @ 0x107acc70 (300 bytes, 80 insns) */
void f_107acc70(void) {
  FTRACE(0x107acc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107acc70 push ebp */
  push32((uint32_t)(EBP));
  /* 107acc71 mov ebp, esp */
  EBP = (ESP);
  /* 107acc73 push ecx */
  push32((uint32_t)(ECX));
  /* 107acc74 cmp dword ptr [0x107d0c00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107d0c00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107acc7b jne 0x107acc89 */
  if (!C.zf) goto L_107acc89;
  /* 107acc7d mov dword ptr [0x107d0c00], 0x200 */
  w32((uint32_t)(0x107d0c00), (0x200u));
  /* 107acc87 jmp 0x107acc9c */
  goto L_107acc9c;
L_107acc89:;
  /* 107acc89 cmp dword ptr [0x107d0c00], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x107d0c00))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107acc90 jge 0x107acc9c */
  if ((C.sf==C.of)) goto L_107acc9c;
  /* 107acc92 mov dword ptr [0x107d0c00], 0x14 */
  w32((uint32_t)(0x107d0c00), (0x14u));
L_107acc9c:;
  /* 107acc9c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 107acca1 push 0x107cb094 */
  push32((uint32_t)(0x107cb094u));
  /* 107acca6 push 2 */
  push32((uint32_t)(0x2u));
  /* 107acca8 push 4 */
  push32((uint32_t)(0x4u));
  /* 107accaa mov eax, dword ptr [0x107d0c00] */
  EAX = (r32((uint32_t)(0x107d0c00)));
  /* 107accaf push eax */
  push32((uint32_t)(EAX));
  /* 107accb0 call 0x107a43c0 */
  push32(0x107accb5u); f_107a43c0();
  /* 107accb5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107accb8 mov dword ptr [0x107cf8c0], eax */
  w32((uint32_t)(0x107cf8c0), (EAX));
  /* 107accbd cmp dword ptr [0x107cf8c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf8c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107accc4 jne 0x107acd05 */
  if (!C.zf) goto L_107acd05;
  /* 107accc6 mov dword ptr [0x107d0c00], 0x14 */
  w32((uint32_t)(0x107d0c00), (0x14u));
  /* 107accd0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 107accd5 push 0x107cb094 */
  push32((uint32_t)(0x107cb094u));
  /* 107accda push 2 */
  push32((uint32_t)(0x2u));
  /* 107accdc push 4 */
  push32((uint32_t)(0x4u));
  /* 107accde mov ecx, dword ptr [0x107d0c00] */
  ECX = (r32((uint32_t)(0x107d0c00)));
  /* 107acce4 push ecx */
  push32((uint32_t)(ECX));
  /* 107acce5 call 0x107a43c0 */
  push32(0x107acceau); f_107a43c0();
  /* 107accea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107acced mov dword ptr [0x107cf8c0], eax */
  w32((uint32_t)(0x107cf8c0), (EAX));
  /* 107accf2 cmp dword ptr [0x107cf8c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf8c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107accf9 jne 0x107acd05 */
  if (!C.zf) goto L_107acd05;
  /* 107accfb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 107accfd call 0x107a2f20 */
  push32(0x107acd02u); f_107a2f20();
  /* 107acd02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107acd05:;
  /* 107acd05 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107acd0c jmp 0x107acd17 */
  goto L_107acd17;
L_107acd0e:;
  /* 107acd0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107acd11 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107acd14 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_107acd17:;
  /* 107acd17 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107acd1b jge 0x107acd36 */
  if ((C.sf==C.of)) goto L_107acd36;
  /* 107acd1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107acd20 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 107acd23 add eax, 0x107ce120 */
  { uint32_t _a=(EAX),_b=(0x107ce120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107acd28 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107acd2b mov edx, dword ptr [0x107cf8c0] */
  EDX = (r32((uint32_t)(0x107cf8c0)));
  /* 107acd31 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 107acd34 jmp 0x107acd0e */
  goto L_107acd0e;
L_107acd36:;
  /* 107acd36 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107acd3d jmp 0x107acd48 */
  goto L_107acd48;
L_107acd3f:;
  /* 107acd3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107acd42 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107acd45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107acd48:;
  /* 107acd48 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107acd4c jge 0x107acd98 */
  if ((C.sf==C.of)) goto L_107acd98;
  /* 107acd4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107acd51 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 107acd54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107acd57 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 107acd5a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107acd5d mov eax, dword ptr [ecx*4 + 0x107d0f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x107d0f00)));
  /* 107acd64 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107acd68 je 0x107acd86 */
  if (C.zf) goto L_107acd86;
  /* 107acd6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107acd6d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 107acd70 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107acd73 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 107acd76 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107acd79 mov eax, dword ptr [ecx*4 + 0x107d0f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x107d0f00)));
  /* 107acd80 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107acd84 jne 0x107acd96 */
  if (!C.zf) goto L_107acd96;
L_107acd86:;
  /* 107acd86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107acd89 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 107acd8c mov dword ptr [ecx + 0x107ce130], 0xffffffff */
  w32((uint32_t)(ECX + 0x107ce130), (0xffffffffu));
L_107acd96:;
  /* 107acd96 jmp 0x107acd3f */
  goto L_107acd3f;
L_107acd98:;
  /* 107acd98 mov esp, ebp */
  ESP = (EBP);
  /* 107acd9a pop ebp */
  EBP = (pop32());
  /* 107acd9b ret  */
  ESPCHK(0x107acc70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cda0 @ 0x107acda0 (26 bytes, 9 insns) */
void f_107acda0(void) {
  FTRACE(0x107acda0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107acda0 push ebp */
  push32((uint32_t)(EBP));
  /* 107acda1 mov ebp, esp */
  EBP = (ESP);
  /* 107acda3 call 0x107ad9a0 */
  push32(0x107acda8u); f_107ad9a0();
  /* 107acda8 movsx eax, byte ptr [0x107cf568] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x107cf568))));
  /* 107acdaf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107acdb1 je 0x107acdb8 */
  if (C.zf) goto L_107acdb8;
  /* 107acdb3 call 0x107ad760 */
  push32(0x107acdb8u); f_107ad760();
L_107acdb8:;
  /* 107acdb8 pop ebp */
  EBP = (pop32());
  /* 107acdb9 ret  */
  ESPCHK(0x107acda0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cdc0 @ 0x107acdc0 (61 bytes, 20 insns) */
void f_107acdc0(void) {
  FTRACE(0x107acdc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107acdc0 push ebp */
  push32((uint32_t)(EBP));
  /* 107acdc1 mov ebp, esp */
  EBP = (ESP);
  /* 107acdc3 cmp dword ptr [ebp + 8], 0x107ce120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x107ce120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107acdca jb 0x107acdee */
  if (C.cf) goto L_107acdee;
  /* 107acdcc cmp dword ptr [ebp + 8], 0x107ce380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x107ce380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107acdd3 ja 0x107acdee */
  if ((!C.cf&&!C.zf)) goto L_107acdee;
  /* 107acdd5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107acdd8 sub eax, 0x107ce120 */
  { uint32_t _a=(EAX),_b=(0x107ce120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107acddd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 107acde0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107acde3 push eax */
  push32((uint32_t)(EAX));
  /* 107acde4 call 0x107a79b0 */
  push32(0x107acde9u); f_107a79b0();
  /* 107acde9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107acdec jmp 0x107acdfb */
  goto L_107acdfb;
L_107acdee:;
  /* 107acdee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107acdf1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107acdf4 push ecx */
  push32((uint32_t)(ECX));
  /* 107acdf5 call dword ptr [0x107d237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d237c))), 0x107acdfbu);
L_107acdfb:;
  /* 107acdfb pop ebp */
  EBP = (pop32());
  /* 107acdfc ret  */
  ESPCHK(0x107acdc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce00 @ 0x107ace00 (41 bytes, 16 insns) */
void f_107ace00(void) {
  FTRACE(0x107ace00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ace00 push ebp */
  push32((uint32_t)(EBP));
  /* 107ace01 mov ebp, esp */
  EBP = (ESP);
  /* 107ace03 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ace07 jge 0x107ace1a */
  if ((C.sf==C.of)) goto L_107ace1a;
  /* 107ace09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ace0c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ace0f push eax */
  push32((uint32_t)(EAX));
  /* 107ace10 call 0x107a79b0 */
  push32(0x107ace15u); f_107a79b0();
  /* 107ace15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ace18 jmp 0x107ace27 */
  goto L_107ace27;
L_107ace1a:;
  /* 107ace1a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ace1d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ace20 push ecx */
  push32((uint32_t)(ECX));
  /* 107ace21 call dword ptr [0x107d237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d237c))), 0x107ace27u);
L_107ace27:;
  /* 107ace27 pop ebp */
  EBP = (pop32());
  /* 107ace28 ret  */
  ESPCHK(0x107ace00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce30 @ 0x107ace30 (61 bytes, 20 insns) */
void f_107ace30(void) {
  FTRACE(0x107ace30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ace30 push ebp */
  push32((uint32_t)(EBP));
  /* 107ace31 mov ebp, esp */
  EBP = (ESP);
  /* 107ace33 cmp dword ptr [ebp + 8], 0x107ce120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x107ce120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ace3a jb 0x107ace5e */
  if (C.cf) goto L_107ace5e;
  /* 107ace3c cmp dword ptr [ebp + 8], 0x107ce380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x107ce380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ace43 ja 0x107ace5e */
  if ((!C.cf&&!C.zf)) goto L_107ace5e;
  /* 107ace45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ace48 sub eax, 0x107ce120 */
  { uint32_t _a=(EAX),_b=(0x107ce120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ace4d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 107ace50 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ace53 push eax */
  push32((uint32_t)(EAX));
  /* 107ace54 call 0x107a7a50 */
  push32(0x107ace59u); f_107a7a50();
  /* 107ace59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ace5c jmp 0x107ace6b */
  goto L_107ace6b;
L_107ace5e:;
  /* 107ace5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ace61 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ace64 push ecx */
  push32((uint32_t)(ECX));
  /* 107ace65 call dword ptr [0x107d2380] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2380))), 0x107ace6bu);
L_107ace6b:;
  /* 107ace6b pop ebp */
  EBP = (pop32());
  /* 107ace6c ret  */
  ESPCHK(0x107ace30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce70 @ 0x107ace70 (41 bytes, 16 insns) */
void f_107ace70(void) {
  FTRACE(0x107ace70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ace70 push ebp */
  push32((uint32_t)(EBP));
  /* 107ace71 mov ebp, esp */
  EBP = (ESP);
  /* 107ace73 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ace77 jge 0x107ace8a */
  if ((C.sf==C.of)) goto L_107ace8a;
  /* 107ace79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ace7c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ace7f push eax */
  push32((uint32_t)(EAX));
  /* 107ace80 call 0x107a7a50 */
  push32(0x107ace85u); f_107a7a50();
  /* 107ace85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ace88 jmp 0x107ace97 */
  goto L_107ace97;
L_107ace8a:;
  /* 107ace8a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ace8d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ace90 push ecx */
  push32((uint32_t)(ECX));
  /* 107ace91 call dword ptr [0x107d2380] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2380))), 0x107ace97u);
L_107ace97:;
  /* 107ace97 pop ebp */
  EBP = (pop32());
  /* 107ace98 ret  */
  ESPCHK(0x107ace70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cea0 @ 0x107acea0 (119 bytes, 34 insns) */
void f_107acea0(void) {
  FTRACE(0x107acea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107acea0 push ebp */
  push32((uint32_t)(EBP));
  /* 107acea1 mov ebp, esp */
  EBP = (ESP);
  /* 107acea3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107acea6 push 0x107cf8bc */
  push32((uint32_t)(0x107cf8bcu));
  /* 107aceab call dword ptr [0x107d2304] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2304))), 0x107aceb1u);
  /* 107aceb1 cmp dword ptr [0x107cf8ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf8ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aceb8 je 0x107aced8 */
  if (C.zf) goto L_107aced8;
  /* 107aceba push 0x107cf8bc */
  push32((uint32_t)(0x107cf8bcu));
  /* 107acebf call dword ptr [0x107d22f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22f4))), 0x107acec5u);
  /* 107acec5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 107acec7 call 0x107a79b0 */
  push32(0x107aceccu); f_107a79b0();
  /* 107acecc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107acecf mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 107aced6 jmp 0x107acedf */
  goto L_107acedf;
L_107aced8:;
  /* 107aced8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_107acedf:;
  /* 107acedf mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 107acee3 push eax */
  push32((uint32_t)(EAX));
  /* 107acee4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107acee7 push ecx */
  push32((uint32_t)(ECX));
  /* 107acee8 call 0x107acf20 */
  push32(0x107aceedu); f_107acf20();
  /* 107aceed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107acef0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107acef3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107acef7 je 0x107acf05 */
  if (C.zf) goto L_107acf05;
  /* 107acef9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 107acefb call 0x107a7a50 */
  push32(0x107acf00u); f_107a7a50();
  /* 107acf00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107acf03 jmp 0x107acf10 */
  goto L_107acf10;
L_107acf05:;
  /* 107acf05 push 0x107cf8bc */
  push32((uint32_t)(0x107cf8bcu));
  /* 107acf0a call dword ptr [0x107d22f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22f4))), 0x107acf10u);
L_107acf10:;
  /* 107acf10 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107acf13 mov esp, ebp */
  ESP = (EBP);
  /* 107acf15 pop ebp */
  EBP = (pop32());
  /* 107acf16 ret  */
  ESPCHK(0x107acea0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf20 @ 0x107acf20 (160 bytes, 50 insns) */
void f_107acf20(void) {
  FTRACE(0x107acf20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107acf20 push ebp */
  push32((uint32_t)(EBP));
  /* 107acf21 mov ebp, esp */
  EBP = (ESP);
  /* 107acf23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107acf26 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107acf2a jne 0x107acf33 */
  if (!C.zf) goto L_107acf33;
  /* 107acf2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107acf2e jmp 0x107acfbc */
  goto L_107acfbc;
L_107acf33:;
  /* 107acf33 cmp dword ptr [0x107cf730], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf730))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107acf3a jne 0x107acf6a */
  if (!C.zf) goto L_107acf6a;
  /* 107acf3c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107acf3f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107acf44 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107acf49 jle 0x107acf5b */
  if ((C.zf||C.sf!=C.of)) goto L_107acf5b;
  /* 107acf4b call 0x107abe80 */
  push32(0x107acf50u); f_107abe80();
  /* 107acf50 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 107acf56 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107acf59 jmp 0x107acfbc */
  goto L_107acfbc;
L_107acf5b:;
  /* 107acf5b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107acf5e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 107acf61 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 107acf63 mov eax, 1 */
  EAX = (0x1u);
  /* 107acf68 jmp 0x107acfbc */
  goto L_107acfbc;
L_107acf6a:;
  /* 107acf6a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107acf71 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 107acf74 push eax */
  push32((uint32_t)(EAX));
  /* 107acf75 push 0 */
  push32((uint32_t)(0x0u));
  /* 107acf77 mov ecx, dword ptr [0x107cdea4] */
  ECX = (r32((uint32_t)(0x107cdea4)));
  /* 107acf7d push ecx */
  push32((uint32_t)(ECX));
  /* 107acf7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107acf81 push edx */
  push32((uint32_t)(EDX));
  /* 107acf82 push 1 */
  push32((uint32_t)(0x1u));
  /* 107acf84 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 107acf87 push eax */
  push32((uint32_t)(EAX));
  /* 107acf88 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 107acf8d mov ecx, dword ptr [0x107cf740] */
  ECX = (r32((uint32_t)(0x107cf740)));
  /* 107acf93 push ecx */
  push32((uint32_t)(ECX));
  /* 107acf94 call dword ptr [0x107d235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d235c))), 0x107acf9au);
  /* 107acf9a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107acf9d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107acfa1 je 0x107acfa9 */
  if (C.zf) goto L_107acfa9;
  /* 107acfa3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107acfa7 je 0x107acfb9 */
  if (C.zf) goto L_107acfb9;
L_107acfa9:;
  /* 107acfa9 call 0x107abe80 */
  push32(0x107acfaeu); f_107abe80();
  /* 107acfae mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 107acfb4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107acfb7 jmp 0x107acfbc */
  goto L_107acfbc;
L_107acfb9:;
  /* 107acfb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_107acfbc:;
  /* 107acfbc mov esp, ebp */
  ESP = (EBP);
  /* 107acfbe pop ebp */
  EBP = (pop32());
  /* 107acfbf ret  */
  ESPCHK(0x107acf20u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x107acfc0 (32 bytes, 18 insns) */
void f_107acfc0(void) {
  FTRACE(0x107acfc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107acfc0 push ebp */
  push32((uint32_t)(EBP));
  /* 107acfc1 mov ebp, esp */
  EBP = (ESP);
  /* 107acfc3 push ebx */
  push32((uint32_t)(EBX));
  /* 107acfc4 push esi */
  push32((uint32_t)(ESI));
  /* 107acfc5 push edi */
  push32((uint32_t)(EDI));
  /* 107acfc6 push ebp */
  push32((uint32_t)(EBP));
  /* 107acfc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107acfc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 107acfcb push 0x107acfd8 */
  push32((uint32_t)(0x107acfd8u));
  /* 107acfd0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 107acfd3 call 0x107b470c */
  push32(0x107acfd8u); f_107b470c();
  /* 107acfd8 pop ebp */
  EBP = (pop32());
  /* 107acfd9 pop edi */
  EDI = (pop32());
  /* 107acfda pop esi */
  ESI = (pop32());
  /* 107acfdb pop ebx */
  EBX = (pop32());
  /* 107acfdc mov esp, ebp */
  ESP = (EBP);
  /* 107acfde pop ebp */
  EBP = (pop32());
  /* 107acfdf ret  */
  ESPCHK(0x107acfc0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x107ad002 (104 bytes, 33 insns) */
void f_107ad002(void) {
  FTRACE(0x107ad002u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ad002 push ebx */
  push32((uint32_t)(EBX));
  /* 107ad003 push esi */
  push32((uint32_t)(ESI));
  /* 107ad004 push edi */
  push32((uint32_t)(EDI));
  /* 107ad005 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 107ad009 push eax */
  push32((uint32_t)(EAX));
  /* 107ad00a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 107ad00c push 0x107acfe0 */
  push32((uint32_t)(0x107acfe0u));
  /* 107ad011 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 107ad018 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_107ad01f:;
  /* 107ad01f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 107ad023 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 107ad026 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 107ad029 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad02c je 0x107ad05c */
  if (C.zf) goto L_107ad05c;
  /* 107ad02e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad032 je 0x107ad05c */
  if (C.zf) goto L_107ad05c;
  /* 107ad034 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 107ad037 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 107ad03a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 107ad03e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 107ad041 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad046 jne 0x107ad05a */
  if (!C.zf) goto L_107ad05a;
  /* 107ad048 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 107ad04d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 107ad051 call 0x107ad096 */
  push32(0x107ad056u); f_107ad096();
  /* 107ad056 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x107ad05au);
L_107ad05a:;
  /* 107ad05a jmp 0x107ad01f */
  goto L_107ad01f;
L_107ad05c:;
  /* 107ad05c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 107ad063 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad066 pop edi */
  EDI = (pop32());
  /* 107ad067 pop esi */
  ESI = (pop32());
  /* 107ad068 pop ebx */
  EBX = (pop32());
  /* 107ad069 ret  */
  ESPCHK(0x107ad002u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d096 @ 0x107ad096 (24 bytes, 10 insns) */
void f_107ad096(void) {
  FTRACE(0x107ad096u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ad096 push ebx */
  push32((uint32_t)(EBX));
  /* 107ad097 push ecx */
  push32((uint32_t)(ECX));
  /* 107ad098 mov ebx, 0x107ce3b8 */
  EBX = (0x107ce3b8u);
  /* 107ad09d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ad0a0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 107ad0a3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 107ad0a6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 107ad0a9 pop ecx */
  ECX = (pop32());
  /* 107ad0aa pop ebx */
  EBX = (pop32());
  /* 107ad0ab ret 4 */
  ESPCHK(0x107ad096u, _esp0);
  ESP += 8; return;
}

/* FUN_1000d175 @ 0x107ad175 (27 bytes, 11 insns) */
void f_107ad175(void) {
  FTRACE(0x107ad175u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ad175 push ebp */
  push32((uint32_t)(EBP));
  /* 107ad176 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 107ad17a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 107ad17c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 107ad17f push eax */
  push32((uint32_t)(EAX));
  /* 107ad180 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 107ad183 push eax */
  push32((uint32_t)(EAX));
  /* 107ad184 call 0x107ad002 */
  push32(0x107ad189u); f_107ad002();
  /* 107ad189 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad18c pop ebp */
  EBP = (pop32());
  /* 107ad18d ret 4 */
  ESPCHK(0x107ad175u, _esp0);
  ESP += 8; return;
}

/* FUN_1000d190 @ 0x107ad190 (482 bytes, 138 insns) */
void f_107ad190(void) {
  FTRACE(0x107ad190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ad190 push ebp */
  push32((uint32_t)(EBP));
  /* 107ad191 mov ebp, esp */
  EBP = (ESP);
  /* 107ad193 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ad196 push esi */
  push32((uint32_t)(ESI));
  /* 107ad197 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 107ad19e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 107ad1a0 call 0x107a79b0 */
  push32(0x107ad1a5u); f_107a79b0();
  /* 107ad1a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad1a8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 107ad1af jmp 0x107ad1ba */
  goto L_107ad1ba;
L_107ad1b1:;
  /* 107ad1b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ad1b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad1b7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_107ad1ba:;
  /* 107ad1ba cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad1be jge 0x107ad360 */
  if ((C.sf==C.of)) goto L_107ad360;
  /* 107ad1c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ad1c7 cmp dword ptr [ecx*4 + 0x107d0f00], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x107d0f00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad1cf je 0x107ad2c6 */
  if (C.zf) goto L_107ad2c6;
  /* 107ad1d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ad1d8 mov eax, dword ptr [edx*4 + 0x107d0f00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x107d0f00)));
  /* 107ad1df mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ad1e2 jmp 0x107ad1ed */
  goto L_107ad1ed;
L_107ad1e4:;
  /* 107ad1e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ad1e7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad1ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107ad1ed:;
  /* 107ad1ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ad1f0 mov eax, dword ptr [edx*4 + 0x107d0f00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x107d0f00)));
  /* 107ad1f7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad1fc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad1ff jae 0x107ad2b6 */
  if (!C.cf) goto L_107ad2b6;
  /* 107ad205 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ad208 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 107ad20c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 107ad20f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ad211 jne 0x107ad2b1 */
  if (!C.zf) goto L_107ad2b1;
  /* 107ad217 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ad21a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad21e jne 0x107ad259 */
  if (!C.zf) goto L_107ad259;
  /* 107ad220 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 107ad222 call 0x107a79b0 */
  push32(0x107ad227u); f_107a79b0();
  /* 107ad227 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad22a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ad22d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad231 jne 0x107ad24f */
  if (!C.zf) goto L_107ad24f;
  /* 107ad233 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ad236 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad239 push edx */
  push32((uint32_t)(EDX));
  /* 107ad23a call dword ptr [0x107d2364] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2364))), 0x107ad240u);
  /* 107ad240 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ad243 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 107ad246 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad249 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ad24c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_107ad24f:;
  /* 107ad24f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 107ad251 call 0x107a7a50 */
  push32(0x107ad256u); f_107a7a50();
  /* 107ad256 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107ad259:;
  /* 107ad259 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ad25c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad25f push eax */
  push32((uint32_t)(EAX));
  /* 107ad260 call dword ptr [0x107d237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d237c))), 0x107ad266u);
  /* 107ad266 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ad269 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 107ad26d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 107ad270 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ad272 je 0x107ad286 */
  if (C.zf) goto L_107ad286;
  /* 107ad274 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ad277 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad27a push eax */
  push32((uint32_t)(EAX));
  /* 107ad27b call dword ptr [0x107d2380] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2380))), 0x107ad281u);
  /* 107ad281 jmp 0x107ad1e4 */
  goto L_107ad1e4;
L_107ad286:;
  /* 107ad286 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ad289 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 107ad28f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ad292 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 107ad295 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ad298 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ad29b sub eax, dword ptr [edx*4 + 0x107d0f00] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x107d0f00))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ad2a2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107ad2a3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 107ad2a8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107ad2aa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad2ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107ad2af jmp 0x107ad2b6 */
  goto L_107ad2b6;
L_107ad2b1:;
  /* 107ad2b1 jmp 0x107ad1e4 */
  goto L_107ad1e4;
L_107ad2b6:;
  /* 107ad2b6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad2ba je 0x107ad2c1 */
  if (C.zf) goto L_107ad2c1;
  /* 107ad2bc jmp 0x107ad360 */
  goto L_107ad360;
L_107ad2c1:;
  /* 107ad2c1 jmp 0x107ad35b */
  goto L_107ad35b;
L_107ad2c6:;
  /* 107ad2c6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 107ad2c8 push 0x107cb09c */
  push32((uint32_t)(0x107cb09cu));
  /* 107ad2cd push 2 */
  push32((uint32_t)(0x2u));
  /* 107ad2cf push 0x480 */
  push32((uint32_t)(0x480u));
  /* 107ad2d4 call 0x107a3fb0 */
  push32(0x107ad2d9u); f_107a3fb0();
  /* 107ad2d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad2dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ad2df cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad2e3 je 0x107ad359 */
  if (C.zf) goto L_107ad359;
  /* 107ad2e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ad2e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ad2eb mov dword ptr [eax*4 + 0x107d0f00], ecx */
  w32((uint32_t)(EAX*4 + 0x107d0f00), (ECX));
  /* 107ad2f2 mov edx, dword ptr [0x107d103c] */
  EDX = (r32((uint32_t)(0x107d103c)));
  /* 107ad2f8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad2fb mov dword ptr [0x107d103c], edx */
  w32((uint32_t)(0x107d103c), (EDX));
  /* 107ad301 jmp 0x107ad30c */
  goto L_107ad30c;
L_107ad303:;
  /* 107ad303 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ad306 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad309 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107ad30c:;
  /* 107ad30c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ad30f mov edx, dword ptr [ecx*4 + 0x107d0f00] */
  EDX = (r32((uint32_t)(ECX*4 + 0x107d0f00)));
  /* 107ad316 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad31c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad31f jae 0x107ad344 */
  if (!C.cf) goto L_107ad344;
  /* 107ad321 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ad324 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 107ad328 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ad32b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 107ad331 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ad334 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 107ad338 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ad33b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 107ad342 jmp 0x107ad303 */
  goto L_107ad303;
L_107ad344:;
  /* 107ad344 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ad347 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 107ad34a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107ad34d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ad350 push edx */
  push32((uint32_t)(EDX));
  /* 107ad351 call 0x107ad6a0 */
  push32(0x107ad356u); f_107ad6a0();
  /* 107ad356 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107ad359:;
  /* 107ad359 jmp 0x107ad360 */
  goto L_107ad360;
L_107ad35b:;
  /* 107ad35b jmp 0x107ad1b1 */
  goto L_107ad1b1;
L_107ad360:;
  /* 107ad360 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 107ad362 call 0x107a7a50 */
  push32(0x107ad367u); f_107a7a50();
  /* 107ad367 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad36a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ad36d pop esi */
  ESI = (pop32());
  /* 107ad36e mov esp, ebp */
  ESP = (EBP);
  /* 107ad370 pop ebp */
  EBP = (pop32());
  /* 107ad371 ret  */
  ESPCHK(0x107ad190u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x107ad380 (183 bytes, 57 insns) */
void f_107ad380(void) {
  FTRACE(0x107ad380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ad380 push ebp */
  push32((uint32_t)(EBP));
  /* 107ad381 mov ebp, esp */
  EBP = (ESP);
  /* 107ad383 push ecx */
  push32((uint32_t)(ECX));
  /* 107ad384 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ad387 cmp eax, dword ptr [0x107d103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x107d103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad38d jae 0x107ad41a */
  if (!C.cf) goto L_107ad41a;
  /* 107ad393 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ad396 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 107ad399 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ad39c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 107ad39f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ad3a2 mov eax, dword ptr [ecx*4 + 0x107d0f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x107d0f00)));
  /* 107ad3a9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad3ad jne 0x107ad41a */
  if (!C.zf) goto L_107ad41a;
  /* 107ad3af cmp dword ptr [0x107cf528], 1 */
  { uint32_t _a=(r32((uint32_t)(0x107cf528))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad3b6 jne 0x107ad3fa */
  if (!C.zf) goto L_107ad3fa;
  /* 107ad3b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ad3bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107ad3be cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad3c2 je 0x107ad3d2 */
  if (C.zf) goto L_107ad3d2;
  /* 107ad3c4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad3c8 je 0x107ad3e0 */
  if (C.zf) goto L_107ad3e0;
  /* 107ad3ca cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad3ce je 0x107ad3ee */
  if (C.zf) goto L_107ad3ee;
  /* 107ad3d0 jmp 0x107ad3fa */
  goto L_107ad3fa;
L_107ad3d2:;
  /* 107ad3d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ad3d5 push edx */
  push32((uint32_t)(EDX));
  /* 107ad3d6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 107ad3d8 call dword ptr [0x107d22b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22b0))), 0x107ad3deu);
  /* 107ad3de jmp 0x107ad3fa */
  goto L_107ad3fa;
L_107ad3e0:;
  /* 107ad3e0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ad3e3 push eax */
  push32((uint32_t)(EAX));
  /* 107ad3e4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 107ad3e6 call dword ptr [0x107d22b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22b0))), 0x107ad3ecu);
  /* 107ad3ec jmp 0x107ad3fa */
  goto L_107ad3fa;
L_107ad3ee:;
  /* 107ad3ee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ad3f1 push ecx */
  push32((uint32_t)(ECX));
  /* 107ad3f2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 107ad3f4 call dword ptr [0x107d22b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22b0))), 0x107ad3fau);
L_107ad3fa:;
  /* 107ad3fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ad3fd sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 107ad400 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ad403 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 107ad406 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ad409 mov ecx, dword ptr [edx*4 + 0x107d0f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x107d0f00)));
  /* 107ad410 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ad413 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 107ad416 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ad418 jmp 0x107ad433 */
  goto L_107ad433;
L_107ad41a:;
  /* 107ad41a call 0x107abe80 */
  push32(0x107ad41fu); f_107abe80();
  /* 107ad41f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 107ad425 call 0x107abe90 */
  push32(0x107ad42au); f_107abe90();
  /* 107ad42a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 107ad430 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_107ad433:;
  /* 107ad433 mov esp, ebp */
  ESP = (EBP);
  /* 107ad435 pop ebp */
  EBP = (pop32());
  /* 107ad436 ret  */
  ESPCHK(0x107ad380u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d440 @ 0x107ad440 (216 bytes, 63 insns) */
void f_107ad440(void) {
  FTRACE(0x107ad440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ad440 push ebp */
  push32((uint32_t)(EBP));
  /* 107ad441 mov ebp, esp */
  EBP = (ESP);
  /* 107ad443 push ecx */
  push32((uint32_t)(ECX));
  /* 107ad444 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ad447 cmp eax, dword ptr [0x107d103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x107d103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad44d jae 0x107ad4fb */
  if (!C.cf) goto L_107ad4fb;
  /* 107ad453 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ad456 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 107ad459 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ad45c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 107ad45f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ad462 mov eax, dword ptr [ecx*4 + 0x107d0f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x107d0f00)));
  /* 107ad469 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 107ad46e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 107ad471 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ad473 je 0x107ad4fb */
  if (C.zf) goto L_107ad4fb;
  /* 107ad479 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ad47c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 107ad47f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ad482 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 107ad485 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ad488 mov ecx, dword ptr [edx*4 + 0x107d0f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x107d0f00)));
  /* 107ad48f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad493 je 0x107ad4fb */
  if (C.zf) goto L_107ad4fb;
  /* 107ad495 cmp dword ptr [0x107cf528], 1 */
  { uint32_t _a=(r32((uint32_t)(0x107cf528))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad49c jne 0x107ad4da */
  if (!C.zf) goto L_107ad4da;
  /* 107ad49e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ad4a1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107ad4a4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad4a8 je 0x107ad4b8 */
  if (C.zf) goto L_107ad4b8;
  /* 107ad4aa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad4ae je 0x107ad4c4 */
  if (C.zf) goto L_107ad4c4;
  /* 107ad4b0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad4b4 je 0x107ad4d0 */
  if (C.zf) goto L_107ad4d0;
  /* 107ad4b6 jmp 0x107ad4da */
  goto L_107ad4da;
L_107ad4b8:;
  /* 107ad4b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ad4ba push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 107ad4bc call dword ptr [0x107d22b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22b0))), 0x107ad4c2u);
  /* 107ad4c2 jmp 0x107ad4da */
  goto L_107ad4da;
L_107ad4c4:;
  /* 107ad4c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ad4c6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 107ad4c8 call dword ptr [0x107d22b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22b0))), 0x107ad4ceu);
  /* 107ad4ce jmp 0x107ad4da */
  goto L_107ad4da;
L_107ad4d0:;
  /* 107ad4d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ad4d2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 107ad4d4 call dword ptr [0x107d22b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22b0))), 0x107ad4dau);
L_107ad4da:;
  /* 107ad4da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ad4dd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 107ad4e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ad4e3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 107ad4e6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ad4e9 mov edx, dword ptr [eax*4 + 0x107d0f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x107d0f00)));
  /* 107ad4f0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 107ad4f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ad4f9 jmp 0x107ad514 */
  goto L_107ad514;
L_107ad4fb:;
  /* 107ad4fb call 0x107abe80 */
  push32(0x107ad500u); f_107abe80();
  /* 107ad500 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 107ad506 call 0x107abe90 */
  push32(0x107ad50bu); f_107abe90();
  /* 107ad50b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 107ad511 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_107ad514:;
  /* 107ad514 mov esp, ebp */
  ESP = (EBP);
  /* 107ad516 pop ebp */
  EBP = (pop32());
  /* 107ad517 ret  */
  ESPCHK(0x107ad440u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d520 @ 0x107ad520 (102 bytes, 30 insns) */
void f_107ad520(void) {
  FTRACE(0x107ad520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ad520 push ebp */
  push32((uint32_t)(EBP));
  /* 107ad521 mov ebp, esp */
  EBP = (ESP);
  /* 107ad523 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ad526 cmp eax, dword ptr [0x107d103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x107d103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad52c jae 0x107ad56b */
  if (!C.cf) goto L_107ad56b;
  /* 107ad52e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ad531 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 107ad534 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ad537 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 107ad53a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ad53d mov eax, dword ptr [ecx*4 + 0x107d0f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x107d0f00)));
  /* 107ad544 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 107ad549 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 107ad54c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ad54e je 0x107ad56b */
  if (C.zf) goto L_107ad56b;
  /* 107ad550 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ad553 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 107ad556 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ad559 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 107ad55c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ad55f mov ecx, dword ptr [edx*4 + 0x107d0f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x107d0f00)));
  /* 107ad566 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 107ad569 jmp 0x107ad584 */
  goto L_107ad584;
L_107ad56b:;
  /* 107ad56b call 0x107abe80 */
  push32(0x107ad570u); f_107abe80();
  /* 107ad570 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 107ad576 call 0x107abe90 */
  push32(0x107ad57bu); f_107abe90();
  /* 107ad57b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 107ad581 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_107ad584:;
  /* 107ad584 pop ebp */
  EBP = (pop32());
  /* 107ad585 ret  */
  ESPCHK(0x107ad520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d590 @ 0x107ad590 (260 bytes, 83 insns) */
void f_107ad590(void) {
  FTRACE(0x107ad590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ad590 push ebp */
  push32((uint32_t)(EBP));
  /* 107ad591 mov ebp, esp */
  EBP = (ESP);
  /* 107ad593 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ad596 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 107ad59a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ad59d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 107ad5a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ad5a2 je 0x107ad5ad */
  if (C.zf) goto L_107ad5ad;
  /* 107ad5a4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 107ad5a7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 107ad5aa mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_107ad5ad:;
  /* 107ad5ad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ad5b0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 107ad5b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ad5b8 je 0x107ad5c2 */
  if (C.zf) goto L_107ad5c2;
  /* 107ad5ba mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 107ad5bd or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 107ad5bf mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_107ad5c2:;
  /* 107ad5c2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ad5c5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 107ad5cb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ad5cd je 0x107ad5d8 */
  if (C.zf) goto L_107ad5d8;
  /* 107ad5cf mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 107ad5d2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 107ad5d5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_107ad5d8:;
  /* 107ad5d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ad5db push eax */
  push32((uint32_t)(EAX));
  /* 107ad5dc call dword ptr [0x107d233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d233c))), 0x107ad5e2u);
  /* 107ad5e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ad5e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad5e9 jne 0x107ad602 */
  if (!C.zf) goto L_107ad602;
  /* 107ad5eb call dword ptr [0x107d2330] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2330))), 0x107ad5f1u);
  /* 107ad5f1 push eax */
  push32((uint32_t)(EAX));
  /* 107ad5f2 call 0x107abde0 */
  push32(0x107ad5f7u); f_107abde0();
  /* 107ad5f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad5fa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107ad5fd jmp 0x107ad690 */
  goto L_107ad690;
L_107ad602:;
  /* 107ad602 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad606 jne 0x107ad613 */
  if (!C.zf) goto L_107ad613;
  /* 107ad608 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 107ad60b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 107ad60e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 107ad611 jmp 0x107ad622 */
  goto L_107ad622;
L_107ad613:;
  /* 107ad613 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad617 jne 0x107ad622 */
  if (!C.zf) goto L_107ad622;
  /* 107ad619 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 107ad61c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 107ad61f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_107ad622:;
  /* 107ad622 call 0x107ad190 */
  push32(0x107ad627u); f_107ad190();
  /* 107ad627 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107ad62a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad62e jne 0x107ad64b */
  if (!C.zf) goto L_107ad64b;
  /* 107ad630 call 0x107abe80 */
  push32(0x107ad635u); f_107abe80();
  /* 107ad635 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 107ad63b call 0x107abe90 */
  push32(0x107ad640u); f_107abe90();
  /* 107ad640 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 107ad646 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107ad649 jmp 0x107ad690 */
  goto L_107ad690;
L_107ad64b:;
  /* 107ad64b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ad64e push eax */
  push32((uint32_t)(EAX));
  /* 107ad64f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ad652 push ecx */
  push32((uint32_t)(ECX));
  /* 107ad653 call 0x107ad380 */
  push32(0x107ad658u); f_107ad380();
  /* 107ad658 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad65b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 107ad65e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 107ad661 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 107ad664 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ad667 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 107ad66a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ad66d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 107ad670 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ad673 mov edx, dword ptr [eax*4 + 0x107d0f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x107d0f00)));
  /* 107ad67a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 107ad67d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 107ad681 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ad684 push ecx */
  push32((uint32_t)(ECX));
  /* 107ad685 call 0x107ad730 */
  push32(0x107ad68au); f_107ad730();
  /* 107ad68a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad68d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_107ad690:;
  /* 107ad690 mov esp, ebp */
  ESP = (EBP);
  /* 107ad692 pop ebp */
  EBP = (pop32());
  /* 107ad693 ret  */
  ESPCHK(0x107ad590u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d6a0 @ 0x107ad6a0 (134 bytes, 44 insns) */
void f_107ad6a0(void) {
  FTRACE(0x107ad6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ad6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107ad6a1 mov ebp, esp */
  EBP = (ESP);
  /* 107ad6a3 push ecx */
  push32((uint32_t)(ECX));
  /* 107ad6a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ad6a7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 107ad6aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ad6ad and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 107ad6b0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ad6b3 mov edx, dword ptr [eax*4 + 0x107d0f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x107d0f00)));
  /* 107ad6ba add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad6bc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107ad6bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ad6c2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad6c6 jne 0x107ad701 */
  if (!C.zf) goto L_107ad701;
  /* 107ad6c8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 107ad6ca call 0x107a79b0 */
  push32(0x107ad6cfu); f_107a79b0();
  /* 107ad6cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad6d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ad6d5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad6d9 jne 0x107ad6f7 */
  if (!C.zf) goto L_107ad6f7;
  /* 107ad6db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ad6de add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad6e1 push edx */
  push32((uint32_t)(EDX));
  /* 107ad6e2 call dword ptr [0x107d2364] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2364))), 0x107ad6e8u);
  /* 107ad6e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ad6eb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 107ad6ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad6f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ad6f4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_107ad6f7:;
  /* 107ad6f7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 107ad6f9 call 0x107a7a50 */
  push32(0x107ad6feu); f_107a7a50();
  /* 107ad6fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107ad701:;
  /* 107ad701 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ad704 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 107ad707 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ad70a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 107ad70d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ad710 mov edx, dword ptr [eax*4 + 0x107d0f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x107d0f00)));
  /* 107ad717 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 107ad71b push eax */
  push32((uint32_t)(EAX));
  /* 107ad71c call dword ptr [0x107d237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d237c))), 0x107ad722u);
  /* 107ad722 mov esp, ebp */
  ESP = (EBP);
  /* 107ad724 pop ebp */
  EBP = (pop32());
  /* 107ad725 ret  */
  ESPCHK(0x107ad6a0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x107ad730 (38 bytes, 13 insns) */
void f_107ad730(void) {
  FTRACE(0x107ad730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ad730 push ebp */
  push32((uint32_t)(EBP));
  /* 107ad731 mov ebp, esp */
  EBP = (ESP);
  /* 107ad733 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ad736 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 107ad739 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ad73c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 107ad73f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ad742 mov edx, dword ptr [eax*4 + 0x107d0f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x107d0f00)));
  /* 107ad749 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 107ad74d push eax */
  push32((uint32_t)(EAX));
  /* 107ad74e call dword ptr [0x107d2380] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2380))), 0x107ad754u);
  /* 107ad754 pop ebp */
  EBP = (pop32());
  /* 107ad755 ret  */
  ESPCHK(0x107ad730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d760 @ 0x107ad760 (218 bytes, 63 insns) */
void f_107ad760(void) {
  FTRACE(0x107ad760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ad760 push ebp */
  push32((uint32_t)(EBP));
  /* 107ad761 mov ebp, esp */
  EBP = (ESP);
  /* 107ad763 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ad766 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107ad76d push 2 */
  push32((uint32_t)(0x2u));
  /* 107ad76f call 0x107a79b0 */
  push32(0x107ad774u); f_107a79b0();
  /* 107ad774 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad777 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 107ad77e jmp 0x107ad789 */
  goto L_107ad789;
L_107ad780:;
  /* 107ad780 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ad783 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad786 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_107ad789:;
  /* 107ad789 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ad78c cmp ecx, dword ptr [0x107d0c00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x107d0c00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad792 jge 0x107ad829 */
  if ((C.sf==C.of)) goto L_107ad829;
  /* 107ad798 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ad79b mov eax, dword ptr [0x107cf8c0] */
  EAX = (r32((uint32_t)(0x107cf8c0)));
  /* 107ad7a0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad7a4 je 0x107ad824 */
  if (C.zf) goto L_107ad824;
  /* 107ad7a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ad7a9 mov edx, dword ptr [0x107cf8c0] */
  EDX = (r32((uint32_t)(0x107cf8c0)));
  /* 107ad7af mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 107ad7b2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 107ad7b5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 107ad7bb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ad7bd je 0x107ad7e1 */
  if (C.zf) goto L_107ad7e1;
  /* 107ad7bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ad7c2 mov eax, dword ptr [0x107cf8c0] */
  EAX = (r32((uint32_t)(0x107cf8c0)));
  /* 107ad7c7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 107ad7ca push ecx */
  push32((uint32_t)(ECX));
  /* 107ad7cb call 0x107ae550 */
  push32(0x107ad7d0u); f_107ae550();
  /* 107ad7d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad7d3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad7d6 je 0x107ad7e1 */
  if (C.zf) goto L_107ad7e1;
  /* 107ad7d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ad7db add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad7de mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_107ad7e1:;
  /* 107ad7e1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad7e5 jl 0x107ad824 */
  if ((C.sf!=C.of)) goto L_107ad824;
  /* 107ad7e7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ad7ea mov ecx, dword ptr [0x107cf8c0] */
  ECX = (r32((uint32_t)(0x107cf8c0)));
  /* 107ad7f0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 107ad7f3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad7f6 push edx */
  push32((uint32_t)(EDX));
  /* 107ad7f7 call dword ptr [0x107d2344] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2344))), 0x107ad7fdu);
  /* 107ad7fd push 2 */
  push32((uint32_t)(0x2u));
  /* 107ad7ff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ad802 mov ecx, dword ptr [0x107cf8c0] */
  ECX = (r32((uint32_t)(0x107cf8c0)));
  /* 107ad808 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 107ad80b push edx */
  push32((uint32_t)(EDX));
  /* 107ad80c call 0x107a4a40 */
  push32(0x107ad811u); f_107a4a40();
  /* 107ad811 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad814 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ad817 mov ecx, dword ptr [0x107cf8c0] */
  ECX = (r32((uint32_t)(0x107cf8c0)));
  /* 107ad81d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_107ad824:;
  /* 107ad824 jmp 0x107ad780 */
  goto L_107ad780;
L_107ad829:;
  /* 107ad829 push 2 */
  push32((uint32_t)(0x2u));
  /* 107ad82b call 0x107a7a50 */
  push32(0x107ad830u); f_107a7a50();
  /* 107ad830 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad833 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ad836 mov esp, ebp */
  ESP = (EBP);
  /* 107ad838 pop ebp */
  EBP = (pop32());
  /* 107ad839 ret  */
  ESPCHK(0x107ad760u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d840 @ 0x107ad840 (68 bytes, 26 insns) */
void f_107ad840(void) {
  FTRACE(0x107ad840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ad840 push ebp */
  push32((uint32_t)(EBP));
  /* 107ad841 mov ebp, esp */
  EBP = (ESP);
  /* 107ad843 push ecx */
  push32((uint32_t)(ECX));
  /* 107ad844 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad848 jne 0x107ad856 */
  if (!C.zf) goto L_107ad856;
  /* 107ad84a push 0 */
  push32((uint32_t)(0x0u));
  /* 107ad84c call 0x107ad9b0 */
  push32(0x107ad851u); f_107ad9b0();
  /* 107ad851 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad854 jmp 0x107ad880 */
  goto L_107ad880;
L_107ad856:;
  /* 107ad856 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ad859 push eax */
  push32((uint32_t)(EAX));
  /* 107ad85a call 0x107acdc0 */
  push32(0x107ad85fu); f_107acdc0();
  /* 107ad85f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad862 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ad865 push ecx */
  push32((uint32_t)(ECX));
  /* 107ad866 call 0x107ad890 */
  push32(0x107ad86bu); f_107ad890();
  /* 107ad86b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad86e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ad871 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ad874 push edx */
  push32((uint32_t)(EDX));
  /* 107ad875 call 0x107ace30 */
  push32(0x107ad87au); f_107ace30();
  /* 107ad87a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad87d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_107ad880:;
  /* 107ad880 mov esp, ebp */
  ESP = (EBP);
  /* 107ad882 pop ebp */
  EBP = (pop32());
  /* 107ad883 ret  */
  ESPCHK(0x107ad840u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d890 @ 0x107ad890 (65 bytes, 26 insns) */
void f_107ad890(void) {
  FTRACE(0x107ad890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ad890 push ebp */
  push32((uint32_t)(EBP));
  /* 107ad891 mov ebp, esp */
  EBP = (ESP);
  /* 107ad893 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ad896 push eax */
  push32((uint32_t)(EAX));
  /* 107ad897 call 0x107ad8e0 */
  push32(0x107ad89cu); f_107ad8e0();
  /* 107ad89c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad89f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ad8a1 je 0x107ad8a8 */
  if (C.zf) goto L_107ad8a8;
  /* 107ad8a3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107ad8a6 jmp 0x107ad8cf */
  goto L_107ad8cf;
L_107ad8a8:;
  /* 107ad8a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ad8ab mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107ad8ae and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 107ad8b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ad8b6 je 0x107ad8cd */
  if (C.zf) goto L_107ad8cd;
  /* 107ad8b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ad8bb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107ad8be push ecx */
  push32((uint32_t)(ECX));
  /* 107ad8bf call 0x107ae6a0 */
  push32(0x107ad8c4u); f_107ae6a0();
  /* 107ad8c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad8c7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 107ad8c9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ad8cb jmp 0x107ad8cf */
  goto L_107ad8cf;
L_107ad8cd:;
  /* 107ad8cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107ad8cf:;
  /* 107ad8cf pop ebp */
  EBP = (pop32());
  /* 107ad8d0 ret  */
  ESPCHK(0x107ad890u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8e0 @ 0x107ad8e0 (183 bytes, 62 insns) */
void f_107ad8e0(void) {
  FTRACE(0x107ad8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ad8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107ad8e1 mov ebp, esp */
  EBP = (ESP);
  /* 107ad8e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ad8e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107ad8ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ad8f0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107ad8f3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ad8f6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107ad8f9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 107ad8fc cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad8ff jne 0x107ad97b */
  if (!C.zf) goto L_107ad97b;
  /* 107ad901 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ad904 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 107ad907 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 107ad90d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ad90f je 0x107ad97b */
  if (C.zf) goto L_107ad97b;
  /* 107ad911 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ad914 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ad917 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 107ad919 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ad91c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107ad91f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad923 jle 0x107ad97b */
  if ((C.zf||C.sf!=C.of)) goto L_107ad97b;
  /* 107ad925 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ad928 push edx */
  push32((uint32_t)(EDX));
  /* 107ad929 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ad92c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 107ad92f push ecx */
  push32((uint32_t)(ECX));
  /* 107ad930 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ad933 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 107ad936 push eax */
  push32((uint32_t)(EAX));
  /* 107ad937 call 0x107ac850 */
  push32(0x107ad93cu); f_107ac850();
  /* 107ad93c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad93f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad942 jne 0x107ad965 */
  if (!C.zf) goto L_107ad965;
  /* 107ad944 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ad947 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107ad94a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 107ad950 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ad952 je 0x107ad963 */
  if (C.zf) goto L_107ad963;
  /* 107ad954 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ad957 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 107ad95a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 107ad95d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ad960 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_107ad963:;
  /* 107ad963 jmp 0x107ad97b */
  goto L_107ad97b;
L_107ad965:;
  /* 107ad965 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ad968 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 107ad96b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 107ad96e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ad971 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 107ad974 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_107ad97b:;
  /* 107ad97b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ad97e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ad981 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 107ad984 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107ad986 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ad989 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 107ad990 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ad993 mov esp, ebp */
  ESP = (EBP);
  /* 107ad995 pop ebp */
  EBP = (pop32());
  /* 107ad996 ret  */
  ESPCHK(0x107ad8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9a0 @ 0x107ad9a0 (15 bytes, 7 insns) */
void f_107ad9a0(void) {
  FTRACE(0x107ad9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ad9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107ad9a1 mov ebp, esp */
  EBP = (ESP);
  /* 107ad9a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 107ad9a5 call 0x107ad9b0 */
  push32(0x107ad9aau); f_107ad9b0();
  /* 107ad9aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad9ad pop ebp */
  EBP = (pop32());
  /* 107ad9ae ret  */
  ESPCHK(0x107ad9a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9b0 @ 0x107ad9b0 (319 bytes, 94 insns) */
void f_107ad9b0(void) {
  FTRACE(0x107ad9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ad9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107ad9b1 mov ebp, esp */
  EBP = (ESP);
  /* 107ad9b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ad9b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107ad9bd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107ad9c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 107ad9c6 call 0x107a79b0 */
  push32(0x107ad9cbu); f_107a79b0();
  /* 107ad9cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad9ce mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 107ad9d5 jmp 0x107ad9e0 */
  goto L_107ad9e0;
L_107ad9d7:;
  /* 107ad9d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ad9da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ad9dd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_107ad9e0:;
  /* 107ad9e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ad9e3 cmp ecx, dword ptr [0x107d0c00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x107d0c00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad9e9 jge 0x107adad3 */
  if ((C.sf==C.of)) goto L_107adad3;
  /* 107ad9ef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ad9f2 mov eax, dword ptr [0x107cf8c0] */
  EAX = (r32((uint32_t)(0x107cf8c0)));
  /* 107ad9f7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ad9fb je 0x107adace */
  if (C.zf) goto L_107adace;
  /* 107ada01 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ada04 mov edx, dword ptr [0x107cf8c0] */
  EDX = (r32((uint32_t)(0x107cf8c0)));
  /* 107ada0a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 107ada0d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 107ada10 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 107ada16 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ada18 je 0x107adace */
  if (C.zf) goto L_107adace;
  /* 107ada1e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ada21 mov eax, dword ptr [0x107cf8c0] */
  EAX = (r32((uint32_t)(0x107cf8c0)));
  /* 107ada26 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 107ada29 push ecx */
  push32((uint32_t)(ECX));
  /* 107ada2a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ada2d push edx */
  push32((uint32_t)(EDX));
  /* 107ada2e call 0x107ace00 */
  push32(0x107ada33u); f_107ace00();
  /* 107ada33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ada36 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ada39 mov ecx, dword ptr [0x107cf8c0] */
  ECX = (r32((uint32_t)(0x107cf8c0)));
  /* 107ada3f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 107ada42 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 107ada45 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 107ada4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ada4c je 0x107adab5 */
  if (C.zf) goto L_107adab5;
  /* 107ada4e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ada52 jne 0x107ada79 */
  if (!C.zf) goto L_107ada79;
  /* 107ada54 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ada57 mov edx, dword ptr [0x107cf8c0] */
  EDX = (r32((uint32_t)(0x107cf8c0)));
  /* 107ada5d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 107ada60 push eax */
  push32((uint32_t)(EAX));
  /* 107ada61 call 0x107ad890 */
  push32(0x107ada66u); f_107ad890();
  /* 107ada66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ada69 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ada6c je 0x107ada77 */
  if (C.zf) goto L_107ada77;
  /* 107ada6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ada71 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ada74 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107ada77:;
  /* 107ada77 jmp 0x107adab5 */
  goto L_107adab5;
L_107ada79:;
  /* 107ada79 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ada7d jne 0x107adab5 */
  if (!C.zf) goto L_107adab5;
  /* 107ada7f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ada82 mov eax, dword ptr [0x107cf8c0] */
  EAX = (r32((uint32_t)(0x107cf8c0)));
  /* 107ada87 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 107ada8a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107ada8d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 107ada90 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ada92 je 0x107adab5 */
  if (C.zf) goto L_107adab5;
  /* 107ada94 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ada97 mov ecx, dword ptr [0x107cf8c0] */
  ECX = (r32((uint32_t)(0x107cf8c0)));
  /* 107ada9d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 107adaa0 push edx */
  push32((uint32_t)(EDX));
  /* 107adaa1 call 0x107ad890 */
  push32(0x107adaa6u); f_107ad890();
  /* 107adaa6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107adaa9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107adaac jne 0x107adab5 */
  if (!C.zf) goto L_107adab5;
  /* 107adaae mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_107adab5:;
  /* 107adab5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107adab8 mov ecx, dword ptr [0x107cf8c0] */
  ECX = (r32((uint32_t)(0x107cf8c0)));
  /* 107adabe mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 107adac1 push edx */
  push32((uint32_t)(EDX));
  /* 107adac2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107adac5 push eax */
  push32((uint32_t)(EAX));
  /* 107adac6 call 0x107ace70 */
  push32(0x107adacbu); f_107ace70();
  /* 107adacb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107adace:;
  /* 107adace jmp 0x107ad9d7 */
  goto L_107ad9d7;
L_107adad3:;
  /* 107adad3 push 2 */
  push32((uint32_t)(0x2u));
  /* 107adad5 call 0x107a7a50 */
  push32(0x107adadau); f_107a7a50();
  /* 107adada add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107adadd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107adae1 jne 0x107adae8 */
  if (!C.zf) goto L_107adae8;
  /* 107adae3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107adae6 jmp 0x107adaeb */
  goto L_107adaeb;
L_107adae8:;
  /* 107adae8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_107adaeb:;
  /* 107adaeb mov esp, ebp */
  ESP = (EBP);
  /* 107adaed pop ebp */
  EBP = (pop32());
  /* 107adaee ret  */
  ESPCHK(0x107ad9b0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x107adaf0 (15 bytes, 7 insns) */
void f_107adaf0(void) {
  FTRACE(0x107adaf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107adaf0 push ebp */
  push32((uint32_t)(EBP));
  /* 107adaf1 mov ebp, esp */
  EBP = (ESP);
  /* 107adaf3 push 2 */
  push32((uint32_t)(0x2u));
  /* 107adaf5 call 0x107a2f20 */
  push32(0x107adafau); f_107a2f20();
  /* 107adafa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107adafd pop ebp */
  EBP = (pop32());
  /* 107adafe ret  */
  ESPCHK(0x107adaf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db00 @ 0x107adb00 (1007 bytes, 269 insns) */
void f_107adb00(void) {
  FTRACE(0x107adb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107adb00 push ebp */
  push32((uint32_t)(EBP));
  /* 107adb01 mov ebp, esp */
  EBP = (ESP);
  /* 107adb03 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107adb09 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107adb0d jl 0x107adb15 */
  if ((C.sf!=C.of)) goto L_107adb15;
  /* 107adb0f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107adb13 jle 0x107adb1c */
  if ((C.zf||C.sf!=C.of)) goto L_107adb1c;
L_107adb15:;
  /* 107adb15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107adb17 jmp 0x107adeeb */
  goto L_107adeeb;
L_107adb1c:;
  /* 107adb1c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 107adb1e call 0x107a79b0 */
  push32(0x107adb23u); f_107a79b0();
  /* 107adb23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107adb26 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 107adb2d mov eax, dword ptr [0x107cf8ac] */
  EAX = (r32((uint32_t)(0x107cf8ac)));
  /* 107adb32 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107adb35 mov dword ptr [0x107cf8ac], eax */
  w32((uint32_t)(0x107cf8ac), (EAX));
L_107adb3a:;
  /* 107adb3a cmp dword ptr [0x107cf8bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf8bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107adb41 je 0x107adb4d */
  if (C.zf) goto L_107adb4d;
  /* 107adb43 push 1 */
  push32((uint32_t)(0x1u));
  /* 107adb45 call dword ptr [0x107d22ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22ac))), 0x107adb4bu);
  /* 107adb4b jmp 0x107adb3a */
  goto L_107adb3a;
L_107adb4d:;
  /* 107adb4d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107adb51 je 0x107adb91 */
  if (C.zf) goto L_107adb91;
  /* 107adb53 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107adb57 je 0x107adb71 */
  if (C.zf) goto L_107adb71;
  /* 107adb59 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107adb5c push ecx */
  push32((uint32_t)(ECX));
  /* 107adb5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107adb60 push edx */
  push32((uint32_t)(EDX));
  /* 107adb61 call 0x107adef0 */
  push32(0x107adb66u); f_107adef0();
  /* 107adb66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107adb69 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 107adb6f jmp 0x107adb83 */
  goto L_107adb83;
L_107adb71:;
  /* 107adb71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107adb74 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107adb77 mov ecx, dword ptr [eax + 0x107ce4dc] */
  ECX = (r32((uint32_t)(EAX + 0x107ce4dc)));
  /* 107adb7d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_107adb83:;
  /* 107adb83 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 107adb89 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107adb8c jmp 0x107adecb */
  goto L_107adecb;
L_107adb91:;
  /* 107adb91 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 107adb98 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 107adb9f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107adba3 je 0x107adec3 */
  if (C.zf) goto L_107adec3;
  /* 107adba9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107adbac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107adbaf cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107adbb2 jne 0x107addd4 */
  if (!C.zf) goto L_107addd4;
  /* 107adbb8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107adbbb movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 107adbbf cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107adbc2 jne 0x107addd4 */
  if (!C.zf) goto L_107addd4;
  /* 107adbc8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107adbcb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 107adbcf cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107adbd2 jne 0x107addd4 */
  if (!C.zf) goto L_107addd4;
  /* 107adbd8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107adbdb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_107adbe1:;
  /* 107adbe1 push 0x107cb0ec */
  push32((uint32_t)(0x107cb0ecu));
  /* 107adbe6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 107adbec push ecx */
  push32((uint32_t)(ECX));
  /* 107adbed call 0x107afd50 */
  push32(0x107adbf2u); f_107afd50();
  /* 107adbf2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107adbf5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 107adbfb cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107adc02 je 0x107adc2d */
  if (C.zf) goto L_107adc2d;
  /* 107adc04 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 107adc0a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107adc10 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 107adc16 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107adc1d je 0x107adc2d */
  if (C.zf) goto L_107adc2d;
  /* 107adc1f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 107adc25 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107adc28 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107adc2b jne 0x107adc53 */
  if (!C.zf) goto L_107adc53;
L_107adc2d:;
  /* 107adc2d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107adc31 je 0x107adc4c */
  if (C.zf) goto L_107adc4c;
  /* 107adc33 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 107adc35 call 0x107a7a50 */
  push32(0x107adc3au); f_107a7a50();
  /* 107adc3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107adc3d mov edx, dword ptr [0x107cf8ac] */
  EDX = (r32((uint32_t)(0x107cf8ac)));
  /* 107adc43 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107adc46 mov dword ptr [0x107cf8ac], edx */
  w32((uint32_t)(0x107cf8ac), (EDX));
L_107adc4c:;
  /* 107adc4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107adc4e jmp 0x107adeeb */
  goto L_107adeeb;
L_107adc53:;
  /* 107adc53 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 107adc5a jmp 0x107adc65 */
  goto L_107adc65;
L_107adc5c:;
  /* 107adc5c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107adc5f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107adc62 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_107adc65:;
  /* 107adc65 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107adc69 jg 0x107adcb3 */
  if ((!C.zf&&C.sf==C.of)) goto L_107adcb3;
  /* 107adc6b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 107adc71 push ecx */
  push32((uint32_t)(ECX));
  /* 107adc72 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 107adc78 push edx */
  push32((uint32_t)(EDX));
  /* 107adc79 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107adc7c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107adc7f mov ecx, dword ptr [eax + 0x107ce4d8] */
  ECX = (r32((uint32_t)(EAX + 0x107ce4d8)));
  /* 107adc85 push ecx */
  push32((uint32_t)(ECX));
  /* 107adc86 call 0x107afd10 */
  push32(0x107adc8bu); f_107afd10();
  /* 107adc8b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107adc8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107adc90 jne 0x107adcb1 */
  if (!C.zf) goto L_107adcb1;
  /* 107adc92 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107adc95 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107adc98 mov eax, dword ptr [edx + 0x107ce4d8] */
  EAX = (r32((uint32_t)(EDX + 0x107ce4d8)));
  /* 107adc9e push eax */
  push32((uint32_t)(EAX));
  /* 107adc9f call 0x107a6de0 */
  push32(0x107adca4u); f_107a6de0();
  /* 107adca4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107adca7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107adcad jne 0x107adcb1 */
  if (!C.zf) goto L_107adcb1;
  /* 107adcaf jmp 0x107adcb3 */
  goto L_107adcb3;
L_107adcb1:;
  /* 107adcb1 jmp 0x107adc5c */
  goto L_107adc5c;
L_107adcb3:;
  /* 107adcb3 push 0x107cb0e8 */
  push32((uint32_t)(0x107cb0e8u));
  /* 107adcb8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 107adcbe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107adcc1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 107adcc7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 107adccd push edx */
  push32((uint32_t)(EDX));
  /* 107adcce call 0x107afcd0 */
  push32(0x107adcd3u); f_107afcd0();
  /* 107adcd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107adcd6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 107adcdc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107adce3 jne 0x107add19 */
  if (!C.zf) goto L_107add19;
  /* 107adce5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 107adceb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107adcee cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107adcf1 je 0x107add19 */
  if (C.zf) goto L_107add19;
  /* 107adcf3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107adcf7 je 0x107add12 */
  if (C.zf) goto L_107add12;
  /* 107adcf9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 107adcfb call 0x107a7a50 */
  push32(0x107add00u); f_107a7a50();
  /* 107add00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107add03 mov edx, dword ptr [0x107cf8ac] */
  EDX = (r32((uint32_t)(0x107cf8ac)));
  /* 107add09 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107add0c mov dword ptr [0x107cf8ac], edx */
  w32((uint32_t)(0x107cf8ac), (EDX));
L_107add12:;
  /* 107add12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107add14 jmp 0x107adeeb */
  goto L_107adeeb;
L_107add19:;
  /* 107add19 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107add1d jg 0x107add6a */
  if ((!C.zf&&C.sf==C.of)) goto L_107add6a;
  /* 107add1f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 107add25 push eax */
  push32((uint32_t)(EAX));
  /* 107add26 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 107add2c push ecx */
  push32((uint32_t)(ECX));
  /* 107add2d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 107add33 push edx */
  push32((uint32_t)(EDX));
  /* 107add34 call 0x107a77d0 */
  push32(0x107add39u); f_107a77d0();
  /* 107add39 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107add3c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 107add42 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 107add4a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 107add50 push ecx */
  push32((uint32_t)(ECX));
  /* 107add51 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107add54 push edx */
  push32((uint32_t)(EDX));
  /* 107add55 call 0x107adef0 */
  push32(0x107add5au); f_107adef0();
  /* 107add5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107add5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107add5f je 0x107add6a */
  if (C.zf) goto L_107add6a;
  /* 107add61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107add64 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107add67 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_107add6a:;
  /* 107add6a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 107add70 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107add76 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 107add7c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 107add82 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107add85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107add87 je 0x107add98 */
  if (C.zf) goto L_107add98;
  /* 107add89 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 107add8f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107add92 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_107add98:;
  /* 107add98 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 107add9e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107adda1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107adda3 jne 0x107adbe1 */
  if (!C.zf) goto L_107adbe1;
  /* 107adda9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107addad je 0x107addbc */
  if (C.zf) goto L_107addbc;
  /* 107addaf call 0x107ae090 */
  push32(0x107addb4u); f_107ae090();
  /* 107addb4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 107addba jmp 0x107addc6 */
  goto L_107addc6;
L_107addbc:;
  /* 107addbc mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_107addc6:;
  /* 107addc6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 107addcc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107addcf jmp 0x107adec1 */
  goto L_107adec1;
L_107addd4:;
  /* 107addd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107addd7 push edx */
  push32((uint32_t)(EDX));
  /* 107addd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 107addda push 0 */
  push32((uint32_t)(0x0u));
  /* 107adddc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 107adde2 push eax */
  push32((uint32_t)(EAX));
  /* 107adde3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107adde6 push ecx */
  push32((uint32_t)(ECX));
  /* 107adde7 call 0x107ae190 */
  push32(0x107addecu); f_107ae190();
  /* 107addec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107addef mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107addf2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107addf6 je 0x107adec1 */
  if (C.zf) goto L_107adec1;
  /* 107addfc mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 107ade03 jmp 0x107ade0e */
  goto L_107ade0e;
L_107ade05:;
  /* 107ade05 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107ade08 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ade0b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_107ade0e:;
  /* 107ade0e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ade12 jg 0x107ade70 */
  if ((!C.zf&&C.sf==C.of)) goto L_107ade70;
  /* 107ade14 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ade18 je 0x107ade6e */
  if (C.zf) goto L_107ade6e;
  /* 107ade1a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107ade1d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ade20 mov ecx, dword ptr [eax + 0x107ce4dc] */
  ECX = (r32((uint32_t)(EAX + 0x107ce4dc)));
  /* 107ade26 push ecx */
  push32((uint32_t)(ECX));
  /* 107ade27 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 107ade2d push edx */
  push32((uint32_t)(EDX));
  /* 107ade2e call 0x107afc40 */
  push32(0x107ade33u); f_107afc40();
  /* 107ade33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ade36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ade38 je 0x107ade65 */
  if (C.zf) goto L_107ade65;
  /* 107ade3a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 107ade40 push eax */
  push32((uint32_t)(EAX));
  /* 107ade41 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107ade44 push ecx */
  push32((uint32_t)(ECX));
  /* 107ade45 call 0x107adef0 */
  push32(0x107ade4au); f_107adef0();
  /* 107ade4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ade4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ade4f je 0x107ade5c */
  if (C.zf) goto L_107ade5c;
  /* 107ade51 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ade54 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ade57 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 107ade5a jmp 0x107ade63 */
  goto L_107ade63;
L_107ade5c:;
  /* 107ade5c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_107ade63:;
  /* 107ade63 jmp 0x107ade6e */
  goto L_107ade6e;
L_107ade65:;
  /* 107ade65 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ade68 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ade6b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_107ade6e:;
  /* 107ade6e jmp 0x107ade05 */
  goto L_107ade05;
L_107ade70:;
  /* 107ade70 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ade74 je 0x107ade9b */
  if (C.zf) goto L_107ade9b;
  /* 107ade76 call 0x107ae090 */
  push32(0x107ade7bu); f_107ae090();
  /* 107ade7b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107ade7e push 2 */
  push32((uint32_t)(0x2u));
  /* 107ade80 mov ecx, dword ptr [0x107ce4dc] */
  ECX = (r32((uint32_t)(0x107ce4dc)));
  /* 107ade86 push ecx */
  push32((uint32_t)(ECX));
  /* 107ade87 call 0x107a4a40 */
  push32(0x107ade8cu); f_107a4a40();
  /* 107ade8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ade8f mov dword ptr [0x107ce4dc], 0 */
  w32((uint32_t)(0x107ce4dc), (0x0u));
  /* 107ade99 jmp 0x107adec1 */
  goto L_107adec1;
L_107ade9b:;
  /* 107ade9b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ade9f je 0x107adeae */
  if (C.zf) goto L_107adeae;
  /* 107adea1 call 0x107ae090 */
  push32(0x107adea6u); f_107ae090();
  /* 107adea6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 107adeac jmp 0x107adeb8 */
  goto L_107adeb8;
L_107adeae:;
  /* 107adeae mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_107adeb8:;
  /* 107adeb8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 107adebe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_107adec1:;
  /* 107adec1 jmp 0x107adecb */
  goto L_107adecb;
L_107adec3:;
  /* 107adec3 call 0x107ae090 */
  push32(0x107adec8u); f_107ae090();
  /* 107adec8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_107adecb:;
  /* 107adecb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107adecf je 0x107adee8 */
  if (C.zf) goto L_107adee8;
  /* 107aded1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 107aded3 call 0x107a7a50 */
  push32(0x107aded8u); f_107a7a50();
  /* 107aded8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107adedb mov eax, dword ptr [0x107cf8ac] */
  EAX = (r32((uint32_t)(0x107cf8ac)));
  /* 107adee0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107adee3 mov dword ptr [0x107cf8ac], eax */
  w32((uint32_t)(0x107cf8ac), (EAX));
L_107adee8:;
  /* 107adee8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_107adeeb:;
  /* 107adeeb mov esp, ebp */
  ESP = (EBP);
  /* 107adeed pop ebp */
  EBP = (pop32());
  /* 107adeee ret  */
  ESPCHK(0x107adb00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000def0 @ 0x107adef0 (403 bytes, 117 insns) */
void f_107adef0(void) {
  FTRACE(0x107adef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107adef0 push ebp */
  push32((uint32_t)(EBP));
  /* 107adef1 mov ebp, esp */
  EBP = (ESP);
  /* 107adef3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107adef9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107adefc push eax */
  push32((uint32_t)(EAX));
  /* 107adefd lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 107adf03 push ecx */
  push32((uint32_t)(ECX));
  /* 107adf04 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 107adf0a push edx */
  push32((uint32_t)(EDX));
  /* 107adf0b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 107adf11 push eax */
  push32((uint32_t)(EAX));
  /* 107adf12 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107adf15 push ecx */
  push32((uint32_t)(ECX));
  /* 107adf16 call 0x107ae190 */
  push32(0x107adf1bu); f_107ae190();
  /* 107adf1b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107adf1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107adf20 jne 0x107adf29 */
  if (!C.zf) goto L_107adf29;
  /* 107adf22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107adf24 jmp 0x107ae07f */
  goto L_107ae07f;
L_107adf29:;
  /* 107adf29 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 107adf2e push 0x107cb0f0 */
  push32((uint32_t)(0x107cb0f0u));
  /* 107adf33 push 2 */
  push32((uint32_t)(0x2u));
  /* 107adf35 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 107adf3b push edx */
  push32((uint32_t)(EDX));
  /* 107adf3c call 0x107a6de0 */
  push32(0x107adf41u); f_107a6de0();
  /* 107adf41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107adf44 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107adf47 push eax */
  push32((uint32_t)(EAX));
  /* 107adf48 call 0x107a3fb0 */
  push32(0x107adf4du); f_107a3fb0();
  /* 107adf4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107adf50 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107adf53 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107adf57 jne 0x107adf60 */
  if (!C.zf) goto L_107adf60;
  /* 107adf59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107adf5b jmp 0x107ae07f */
  goto L_107ae07f;
L_107adf60:;
  /* 107adf60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107adf63 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107adf66 mov ecx, dword ptr [eax + 0x107ce4dc] */
  ECX = (r32((uint32_t)(EAX + 0x107ce4dc)));
  /* 107adf6c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107adf6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107adf72 mov eax, dword ptr [edx*4 + 0x107cf728] */
  EAX = (r32((uint32_t)(EDX*4 + 0x107cf728)));
  /* 107adf79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107adf7c push 6 */
  push32((uint32_t)(0x6u));
  /* 107adf7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107adf81 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107adf84 add ecx, 0x107cf778 */
  { uint32_t _a=(ECX),_b=(0x107cf778u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107adf8a push ecx */
  push32((uint32_t)(ECX));
  /* 107adf8b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 107adf8e push edx */
  push32((uint32_t)(EDX));
  /* 107adf8f call 0x107aa890 */
  push32(0x107adf94u); f_107aa890();
  /* 107adf94 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107adf97 mov eax, dword ptr [0x107cf740] */
  EAX = (r32((uint32_t)(0x107cf740)));
  /* 107adf9c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107adf9f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 107adfa5 push ecx */
  push32((uint32_t)(ECX));
  /* 107adfa6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107adfa9 push edx */
  push32((uint32_t)(EDX));
  /* 107adfaa call 0x107a6f60 */
  push32(0x107adfafu); f_107a6f60();
  /* 107adfaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107adfb2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107adfb5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107adfb8 mov dword ptr [ecx + 0x107ce4dc], eax */
  w32((uint32_t)(ECX + 0x107ce4dc), (EAX));
  /* 107adfbe mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 107adfc4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107adfca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107adfcd mov dword ptr [eax*4 + 0x107cf728], edx */
  w32((uint32_t)(EAX*4 + 0x107cf728), (EDX));
  /* 107adfd4 push 6 */
  push32((uint32_t)(0x6u));
  /* 107adfd6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 107adfdc push ecx */
  push32((uint32_t)(ECX));
  /* 107adfdd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107adfe0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107adfe3 add edx, 0x107cf778 */
  { uint32_t _a=(EDX),_b=(0x107cf778u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107adfe9 push edx */
  push32((uint32_t)(EDX));
  /* 107adfea call 0x107aa890 */
  push32(0x107adfefu); f_107aa890();
  /* 107adfef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107adff2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107adff6 jne 0x107ae003 */
  if (!C.zf) goto L_107ae003;
  /* 107adff8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 107adffe mov dword ptr [0x107cf740], eax */
  w32((uint32_t)(0x107cf740), (EAX));
L_107ae003:;
  /* 107ae003 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ae007 jne 0x107ae015 */
  if (!C.zf) goto L_107ae015;
  /* 107ae009 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 107ae00f mov dword ptr [0x107cf744], ecx */
  w32((uint32_t)(0x107cf744), (ECX));
L_107ae015:;
  /* 107ae015 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae018 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ae01b call dword ptr [edx + 0x107ce4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x107ce4e0))), 0x107ae021u);
  /* 107ae021 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ae023 je 0x107ae05c */
  if (C.zf) goto L_107ae05c;
  /* 107ae025 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae028 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ae02b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ae02e mov dword ptr [eax + 0x107ce4dc], ecx */
  w32((uint32_t)(EAX + 0x107ce4dc), (ECX));
  /* 107ae034 push 2 */
  push32((uint32_t)(0x2u));
  /* 107ae036 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ae039 push edx */
  push32((uint32_t)(EDX));
  /* 107ae03a call 0x107a4a40 */
  push32(0x107ae03fu); f_107a4a40();
  /* 107ae03f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae042 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae045 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ae048 mov dword ptr [eax*4 + 0x107cf728], ecx */
  w32((uint32_t)(EAX*4 + 0x107cf728), (ECX));
  /* 107ae04f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107ae052 mov dword ptr [0x107cf740], edx */
  w32((uint32_t)(0x107cf740), (EDX));
  /* 107ae058 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ae05a jmp 0x107ae07f */
  goto L_107ae07f;
L_107ae05c:;
  /* 107ae05c cmp dword ptr [ebp - 0xc], 0x107ce3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x107ce3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ae063 je 0x107ae073 */
  if (C.zf) goto L_107ae073;
  /* 107ae065 push 2 */
  push32((uint32_t)(0x2u));
  /* 107ae067 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ae06a push eax */
  push32((uint32_t)(EAX));
  /* 107ae06b call 0x107a4a40 */
  push32(0x107ae070u); f_107a4a40();
  /* 107ae070 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107ae073:;
  /* 107ae073 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae076 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ae079 mov eax, dword ptr [ecx + 0x107ce4dc] */
  EAX = (r32((uint32_t)(ECX + 0x107ce4dc)));
L_107ae07f:;
  /* 107ae07f mov esp, ebp */
  ESP = (EBP);
  /* 107ae081 pop ebp */
  EBP = (pop32());
  /* 107ae082 ret  */
  ESPCHK(0x107adef0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e090 @ 0x107ae090 (256 bytes, 72 insns) */
void f_107ae090(void) {
  FTRACE(0x107ae090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ae090 push ebp */
  push32((uint32_t)(EBP));
  /* 107ae091 mov ebp, esp */
  EBP = (ESP);
  /* 107ae093 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ae096 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 107ae09d cmp dword ptr [0x107ce4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107ce4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ae0a4 jne 0x107ae0c4 */
  if (!C.zf) goto L_107ae0c4;
  /* 107ae0a6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 107ae0ab push 0x107cb0f0 */
  push32((uint32_t)(0x107cb0f0u));
  /* 107ae0b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 107ae0b2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 107ae0b7 call 0x107a3fb0 */
  push32(0x107ae0bcu); f_107a3fb0();
  /* 107ae0bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae0bf mov dword ptr [0x107ce4dc], eax */
  w32((uint32_t)(0x107ce4dc), (EAX));
L_107ae0c4:;
  /* 107ae0c4 mov eax, dword ptr [0x107ce4dc] */
  EAX = (r32((uint32_t)(0x107ce4dc)));
  /* 107ae0c9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 107ae0cc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 107ae0d3 jmp 0x107ae0de */
  goto L_107ae0de;
L_107ae0d5:;
  /* 107ae0d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ae0d8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae0db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107ae0de:;
  /* 107ae0de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ae0e1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ae0e4 mov eax, dword ptr [edx + 0x107ce4dc] */
  EAX = (r32((uint32_t)(EDX + 0x107ce4dc)));
  /* 107ae0ea push eax */
  push32((uint32_t)(EAX));
  /* 107ae0eb push 0x107cb0fc */
  push32((uint32_t)(0x107cb0fcu));
  /* 107ae0f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ae0f3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ae0f6 mov edx, dword ptr [ecx + 0x107ce4d8] */
  EDX = (r32((uint32_t)(ECX + 0x107ce4d8)));
  /* 107ae0fc push edx */
  push32((uint32_t)(EDX));
  /* 107ae0fd push 3 */
  push32((uint32_t)(0x3u));
  /* 107ae0ff mov eax, dword ptr [0x107ce4dc] */
  EAX = (r32((uint32_t)(0x107ce4dc)));
  /* 107ae104 push eax */
  push32((uint32_t)(EAX));
  /* 107ae105 call 0x107ae330 */
  push32(0x107ae10au); f_107ae330();
  /* 107ae10a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae10d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ae111 jge 0x107ae159 */
  if ((C.sf==C.of)) goto L_107ae159;
  /* 107ae113 push 0x107cb0e8 */
  push32((uint32_t)(0x107cb0e8u));
  /* 107ae118 mov ecx, dword ptr [0x107ce4dc] */
  ECX = (r32((uint32_t)(0x107ce4dc)));
  /* 107ae11e push ecx */
  push32((uint32_t)(ECX));
  /* 107ae11f call 0x107a6f70 */
  push32(0x107ae124u); f_107a6f70();
  /* 107ae124 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae127 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ae12a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae12d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ae130 mov eax, dword ptr [edx + 0x107ce4dc] */
  EAX = (r32((uint32_t)(EDX + 0x107ce4dc)));
  /* 107ae136 push eax */
  push32((uint32_t)(EAX));
  /* 107ae137 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ae13a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ae13d mov edx, dword ptr [ecx + 0x107ce4dc] */
  EDX = (r32((uint32_t)(ECX + 0x107ce4dc)));
  /* 107ae143 push edx */
  push32((uint32_t)(EDX));
  /* 107ae144 call 0x107afc40 */
  push32(0x107ae149u); f_107afc40();
  /* 107ae149 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae14c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ae14e je 0x107ae157 */
  if (C.zf) goto L_107ae157;
  /* 107ae150 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_107ae157:;
  /* 107ae157 jmp 0x107ae187 */
  goto L_107ae187;
L_107ae159:;
  /* 107ae159 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ae15d jne 0x107ae166 */
  if (!C.zf) goto L_107ae166;
  /* 107ae15f mov eax, dword ptr [0x107ce4dc] */
  EAX = (r32((uint32_t)(0x107ce4dc)));
  /* 107ae164 jmp 0x107ae18c */
  goto L_107ae18c;
L_107ae166:;
  /* 107ae166 push 2 */
  push32((uint32_t)(0x2u));
  /* 107ae168 mov eax, dword ptr [0x107ce4dc] */
  EAX = (r32((uint32_t)(0x107ce4dc)));
  /* 107ae16d push eax */
  push32((uint32_t)(EAX));
  /* 107ae16e call 0x107a4a40 */
  push32(0x107ae173u); f_107a4a40();
  /* 107ae173 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae176 mov dword ptr [0x107ce4dc], 0 */
  w32((uint32_t)(0x107ce4dc), (0x0u));
  /* 107ae180 mov eax, dword ptr [0x107ce4f4] */
  EAX = (r32((uint32_t)(0x107ce4f4)));
  /* 107ae185 jmp 0x107ae18c */
  goto L_107ae18c;
L_107ae187:;
  /* 107ae187 jmp 0x107ae0d5 */
  goto L_107ae0d5;
L_107ae18c:;
  /* 107ae18c mov esp, ebp */
  ESP = (EBP);
  /* 107ae18e pop ebp */
  EBP = (pop32());
  /* 107ae18f ret  */
  ESPCHK(0x107ae090u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e190 @ 0x107ae190 (388 bytes, 115 insns) */
void f_107ae190(void) {
  FTRACE(0x107ae190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ae190 push ebp */
  push32((uint32_t)(EBP));
  /* 107ae191 mov ebp, esp */
  EBP = (ESP);
  /* 107ae193 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ae199 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ae19d jne 0x107ae1a6 */
  if (!C.zf) goto L_107ae1a6;
  /* 107ae19f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ae1a1 jmp 0x107ae310 */
  goto L_107ae310;
L_107ae1a6:;
  /* 107ae1a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae1a9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107ae1ac cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ae1af jne 0x107ae200 */
  if (!C.zf) goto L_107ae200;
  /* 107ae1b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae1b4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 107ae1b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ae1ba jne 0x107ae200 */
  if (!C.zf) goto L_107ae200;
  /* 107ae1bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ae1bf mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 107ae1c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ae1c5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 107ae1c9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ae1cd je 0x107ae1e9 */
  if (C.zf) goto L_107ae1e9;
  /* 107ae1cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ae1d2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 107ae1d7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ae1da mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 107ae1e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ae1e3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_107ae1e9:;
  /* 107ae1e9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ae1ed je 0x107ae1f8 */
  if (C.zf) goto L_107ae1f8;
  /* 107ae1ef mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107ae1f2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_107ae1f8:;
  /* 107ae1f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ae1fb jmp 0x107ae310 */
  goto L_107ae310;
L_107ae200:;
  /* 107ae200 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae203 push ecx */
  push32((uint32_t)(ECX));
  /* 107ae204 push 0x107ce450 */
  push32((uint32_t)(0x107ce450u));
  /* 107ae209 call 0x107afc40 */
  push32(0x107ae20eu); f_107afc40();
  /* 107ae20e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae211 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ae213 je 0x107ae2c8 */
  if (C.zf) goto L_107ae2c8;
  /* 107ae219 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae21c push edx */
  push32((uint32_t)(EDX));
  /* 107ae21d push 0x107ce3cc */
  push32((uint32_t)(0x107ce3ccu));
  /* 107ae222 call 0x107afc40 */
  push32(0x107ae227u); f_107afc40();
  /* 107ae227 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae22a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ae22c je 0x107ae2c8 */
  if (C.zf) goto L_107ae2c8;
  /* 107ae232 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae235 push eax */
  push32((uint32_t)(EAX));
  /* 107ae236 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 107ae23c push ecx */
  push32((uint32_t)(ECX));
  /* 107ae23d call 0x107ae380 */
  push32(0x107ae242u); f_107ae380();
  /* 107ae242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae245 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ae247 je 0x107ae250 */
  if (C.zf) goto L_107ae250;
  /* 107ae249 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ae24b jmp 0x107ae310 */
  goto L_107ae310;
L_107ae250:;
  /* 107ae250 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 107ae256 push edx */
  push32((uint32_t)(EDX));
  /* 107ae257 push 0x107cf750 */
  push32((uint32_t)(0x107cf750u));
  /* 107ae25c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 107ae262 push eax */
  push32((uint32_t)(EAX));
  /* 107ae263 call 0x107afd90 */
  push32(0x107ae268u); f_107afd90();
  /* 107ae268 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae26b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ae26d jne 0x107ae276 */
  if (!C.zf) goto L_107ae276;
  /* 107ae26f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ae271 jmp 0x107ae310 */
  goto L_107ae310;
L_107ae276:;
  /* 107ae276 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107ae278 mov cx, word ptr [0x107cf754] */
  CX = (r16((uint32_t)(0x107cf754)));
  /* 107ae27f mov dword ptr [0x107cf758], ecx */
  w32((uint32_t)(0x107cf758), (ECX));
  /* 107ae285 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 107ae28b push edx */
  push32((uint32_t)(EDX));
  /* 107ae28c push 0x107ce450 */
  push32((uint32_t)(0x107ce450u));
  /* 107ae291 call 0x107ae4e0 */
  push32(0x107ae296u); f_107ae4e0();
  /* 107ae296 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae299 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae29c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107ae29f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ae2a1 je 0x107ae2b6 */
  if (C.zf) goto L_107ae2b6;
  /* 107ae2a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae2a6 push edx */
  push32((uint32_t)(EDX));
  /* 107ae2a7 push 0x107ce3cc */
  push32((uint32_t)(0x107ce3ccu));
  /* 107ae2ac call 0x107a6f60 */
  push32(0x107ae2b1u); f_107a6f60();
  /* 107ae2b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae2b4 jmp 0x107ae2c8 */
  goto L_107ae2c8;
L_107ae2b6:;
  /* 107ae2b6 push 0x107ce450 */
  push32((uint32_t)(0x107ce450u));
  /* 107ae2bb push 0x107ce3cc */
  push32((uint32_t)(0x107ce3ccu));
  /* 107ae2c0 call 0x107a6f60 */
  push32(0x107ae2c5u); f_107a6f60();
  /* 107ae2c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107ae2c8:;
  /* 107ae2c8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ae2cc je 0x107ae2e1 */
  if (C.zf) goto L_107ae2e1;
  /* 107ae2ce push 6 */
  push32((uint32_t)(0x6u));
  /* 107ae2d0 push 0x107cf750 */
  push32((uint32_t)(0x107cf750u));
  /* 107ae2d5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ae2d8 push eax */
  push32((uint32_t)(EAX));
  /* 107ae2d9 call 0x107aa890 */
  push32(0x107ae2deu); f_107aa890();
  /* 107ae2de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107ae2e1:;
  /* 107ae2e1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ae2e5 je 0x107ae2fa */
  if (C.zf) goto L_107ae2fa;
  /* 107ae2e7 push 4 */
  push32((uint32_t)(0x4u));
  /* 107ae2e9 push 0x107cf758 */
  push32((uint32_t)(0x107cf758u));
  /* 107ae2ee mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107ae2f1 push ecx */
  push32((uint32_t)(ECX));
  /* 107ae2f2 call 0x107aa890 */
  push32(0x107ae2f7u); f_107aa890();
  /* 107ae2f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107ae2fa:;
  /* 107ae2fa push 0x107ce450 */
  push32((uint32_t)(0x107ce450u));
  /* 107ae2ff mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ae302 push edx */
  push32((uint32_t)(EDX));
  /* 107ae303 call 0x107a6f60 */
  push32(0x107ae308u); f_107a6f60();
  /* 107ae308 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae30b mov eax, 0x107ce450 */
  EAX = (0x107ce450u);
L_107ae310:;
  /* 107ae310 mov esp, ebp */
  ESP = (EBP);
  /* 107ae312 pop ebp */
  EBP = (pop32());
  /* 107ae313 ret  */
  ESPCHK(0x107ae190u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e320 @ 0x107ae320 (7 bytes, 5 insns) */
void f_107ae320(void) {
  FTRACE(0x107ae320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ae320 push ebp */
  push32((uint32_t)(EBP));
  /* 107ae321 mov ebp, esp */
  EBP = (ESP);
  /* 107ae323 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ae325 pop ebp */
  EBP = (pop32());
  /* 107ae326 ret  */
  ESPCHK(0x107ae320u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x107ae330 (79 bytes, 28 insns) */
void f_107ae330(void) {
  FTRACE(0x107ae330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ae330 push ebp */
  push32((uint32_t)(EBP));
  /* 107ae331 mov ebp, esp */
  EBP = (ESP);
  /* 107ae333 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ae336 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 107ae339 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ae33c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107ae343 jmp 0x107ae34e */
  goto L_107ae34e;
L_107ae345:;
  /* 107ae345 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ae348 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae34b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_107ae34e:;
  /* 107ae34e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ae351 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ae354 jge 0x107ae374 */
  if ((C.sf==C.of)) goto L_107ae374;
  /* 107ae356 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ae359 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae35c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ae35f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ae362 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 107ae365 push edx */
  push32((uint32_t)(EDX));
  /* 107ae366 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae369 push eax */
  push32((uint32_t)(EAX));
  /* 107ae36a call 0x107a6f70 */
  push32(0x107ae36fu); f_107a6f70();
  /* 107ae36f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae372 jmp 0x107ae345 */
  goto L_107ae345;
L_107ae374:;
  /* 107ae374 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107ae37b mov esp, ebp */
  ESP = (EBP);
  /* 107ae37d pop ebp */
  EBP = (pop32());
  /* 107ae37e ret  */
  ESPCHK(0x107ae330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e380 @ 0x107ae380 (349 bytes, 122 insns) */
void f_107ae380(void) {
  FTRACE(0x107ae380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ae380 push ebp */
  push32((uint32_t)(EBP));
  /* 107ae381 mov ebp, esp */
  EBP = (ESP);
  /* 107ae383 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ae386 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 107ae38b push 0 */
  push32((uint32_t)(0x0u));
  /* 107ae38d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae390 push eax */
  push32((uint32_t)(EAX));
  /* 107ae391 call 0x107a7d20 */
  push32(0x107ae396u); f_107a7d20();
  /* 107ae396 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae399 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ae39c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107ae39f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ae3a1 jne 0x107ae3aa */
  if (!C.zf) goto L_107ae3aa;
  /* 107ae3a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ae3a5 jmp 0x107ae4d9 */
  goto L_107ae4d9;
L_107ae3aa:;
  /* 107ae3aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ae3ad movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107ae3b0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ae3b3 jne 0x107ae3e0 */
  if (!C.zf) goto L_107ae3e0;
  /* 107ae3b5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ae3b8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 107ae3bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ae3be je 0x107ae3e0 */
  if (C.zf) goto L_107ae3e0;
  /* 107ae3c0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ae3c3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae3c6 push ecx */
  push32((uint32_t)(ECX));
  /* 107ae3c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae3ca add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae3d0 push edx */
  push32((uint32_t)(EDX));
  /* 107ae3d1 call 0x107a6f60 */
  push32(0x107ae3d6u); f_107a6f60();
  /* 107ae3d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae3d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ae3db jmp 0x107ae4d9 */
  goto L_107ae4d9;
L_107ae3e0:;
  /* 107ae3e0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107ae3e7 jmp 0x107ae3f2 */
  goto L_107ae3f2;
L_107ae3e9:;
  /* 107ae3e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ae3ec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae3ef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107ae3f2:;
  /* 107ae3f2 push 0x107cb100 */
  push32((uint32_t)(0x107cb100u));
  /* 107ae3f7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ae3fa push ecx */
  push32((uint32_t)(ECX));
  /* 107ae3fb call 0x107afcd0 */
  push32(0x107ae400u); f_107afcd0();
  /* 107ae400 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae403 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107ae406 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ae40a jne 0x107ae414 */
  if (!C.zf) goto L_107ae414;
  /* 107ae40c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107ae40f jmp 0x107ae4d9 */
  goto L_107ae4d9;
L_107ae414:;
  /* 107ae414 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ae417 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae41a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107ae41c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 107ae41f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ae423 jne 0x107ae44a */
  if (!C.zf) goto L_107ae44a;
  /* 107ae425 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ae429 jge 0x107ae44a */
  if ((C.sf==C.of)) goto L_107ae44a;
  /* 107ae42b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 107ae42f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ae432 je 0x107ae44a */
  if (C.zf) goto L_107ae44a;
  /* 107ae434 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ae437 push edx */
  push32((uint32_t)(EDX));
  /* 107ae438 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ae43b push eax */
  push32((uint32_t)(EAX));
  /* 107ae43c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae43f push ecx */
  push32((uint32_t)(ECX));
  /* 107ae440 call 0x107a77d0 */
  push32(0x107ae445u); f_107a77d0();
  /* 107ae445 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae448 jmp 0x107ae4b0 */
  goto L_107ae4b0;
L_107ae44a:;
  /* 107ae44a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ae44e jne 0x107ae478 */
  if (!C.zf) goto L_107ae478;
  /* 107ae450 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ae454 jge 0x107ae478 */
  if ((C.sf==C.of)) goto L_107ae478;
  /* 107ae456 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 107ae45a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ae45d je 0x107ae478 */
  if (C.zf) goto L_107ae478;
  /* 107ae45f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ae462 push eax */
  push32((uint32_t)(EAX));
  /* 107ae463 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ae466 push ecx */
  push32((uint32_t)(ECX));
  /* 107ae467 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae46a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae46d push edx */
  push32((uint32_t)(EDX));
  /* 107ae46e call 0x107a77d0 */
  push32(0x107ae473u); f_107a77d0();
  /* 107ae473 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae476 jmp 0x107ae4b0 */
  goto L_107ae4b0;
L_107ae478:;
  /* 107ae478 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ae47c jne 0x107ae4ab */
  if (!C.zf) goto L_107ae4ab;
  /* 107ae47e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 107ae482 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ae484 je 0x107ae48f */
  if (C.zf) goto L_107ae48f;
  /* 107ae486 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 107ae48a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ae48d jne 0x107ae4ab */
  if (!C.zf) goto L_107ae4ab;
L_107ae48f:;
  /* 107ae48f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ae492 push edx */
  push32((uint32_t)(EDX));
  /* 107ae493 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ae496 push eax */
  push32((uint32_t)(EAX));
  /* 107ae497 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae49a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae4a0 push ecx */
  push32((uint32_t)(ECX));
  /* 107ae4a1 call 0x107a77d0 */
  push32(0x107ae4a6u); f_107a77d0();
  /* 107ae4a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae4a9 jmp 0x107ae4b0 */
  goto L_107ae4b0;
L_107ae4ab:;
  /* 107ae4ab or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107ae4ae jmp 0x107ae4d9 */
  goto L_107ae4d9;
L_107ae4b0:;
  /* 107ae4b0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 107ae4b4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ae4b7 jne 0x107ae4bb */
  if (!C.zf) goto L_107ae4bb;
  /* 107ae4b9 jmp 0x107ae4d7 */
  goto L_107ae4d7;
L_107ae4bb:;
  /* 107ae4bb movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 107ae4bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ae4c1 jne 0x107ae4c5 */
  if (!C.zf) goto L_107ae4c5;
  /* 107ae4c3 jmp 0x107ae4d7 */
  goto L_107ae4d7;
L_107ae4c5:;
  /* 107ae4c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ae4c8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ae4cb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 107ae4cf mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 107ae4d2 jmp 0x107ae3e9 */
  goto L_107ae3e9;
L_107ae4d7:;
  /* 107ae4d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107ae4d9:;
  /* 107ae4d9 mov esp, ebp */
  ESP = (EBP);
  /* 107ae4db pop ebp */
  EBP = (pop32());
  /* 107ae4dc ret  */
  ESPCHK(0x107ae380u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x107ae4e0 (101 bytes, 36 insns) */
void f_107ae4e0(void) {
  FTRACE(0x107ae4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ae4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107ae4e1 mov ebp, esp */
  EBP = (ESP);
  /* 107ae4e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ae4e6 push eax */
  push32((uint32_t)(EAX));
  /* 107ae4e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae4ea push ecx */
  push32((uint32_t)(ECX));
  /* 107ae4eb call 0x107a6f60 */
  push32(0x107ae4f0u); f_107a6f60();
  /* 107ae4f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae4f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ae4f6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 107ae4fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ae4fc je 0x107ae518 */
  if (C.zf) goto L_107ae518;
  /* 107ae4fe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ae501 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae504 push ecx */
  push32((uint32_t)(ECX));
  /* 107ae505 push 0x107cb108 */
  push32((uint32_t)(0x107cb108u));
  /* 107ae50a push 2 */
  push32((uint32_t)(0x2u));
  /* 107ae50c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae50f push edx */
  push32((uint32_t)(EDX));
  /* 107ae510 call 0x107ae330 */
  push32(0x107ae515u); f_107ae330();
  /* 107ae515 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107ae518:;
  /* 107ae518 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ae51b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 107ae522 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ae524 je 0x107ae543 */
  if (C.zf) goto L_107ae543;
  /* 107ae526 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ae529 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae52f push edx */
  push32((uint32_t)(EDX));
  /* 107ae530 push 0x107cb104 */
  push32((uint32_t)(0x107cb104u));
  /* 107ae535 push 2 */
  push32((uint32_t)(0x2u));
  /* 107ae537 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae53a push eax */
  push32((uint32_t)(EAX));
  /* 107ae53b call 0x107ae330 */
  push32(0x107ae540u); f_107ae330();
  /* 107ae540 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107ae543:;
  /* 107ae543 pop ebp */
  EBP = (pop32());
  /* 107ae544 ret  */
  ESPCHK(0x107ae4e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e550 @ 0x107ae550 (130 bytes, 50 insns) */
void f_107ae550(void) {
  FTRACE(0x107ae550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ae550 push ebp */
  push32((uint32_t)(EBP));
  /* 107ae551 mov ebp, esp */
  EBP = (ESP);
  /* 107ae553 push ecx */
  push32((uint32_t)(ECX));
  /* 107ae554 push ebx */
  push32((uint32_t)(EBX));
  /* 107ae555 push esi */
  push32((uint32_t)(ESI));
  /* 107ae556 push edi */
  push32((uint32_t)(EDI));
  /* 107ae557 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_107ae55e:;
  /* 107ae55e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ae562 jne 0x107ae582 */
  if (!C.zf) goto L_107ae582;
  /* 107ae564 push 0x107cb118 */
  push32((uint32_t)(0x107cb118u));
  /* 107ae569 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ae56b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 107ae56d push 0x107cb10c */
  push32((uint32_t)(0x107cb10cu));
  /* 107ae572 push 2 */
  push32((uint32_t)(0x2u));
  /* 107ae574 call 0x107a3070 */
  push32(0x107ae579u); f_107a3070();
  /* 107ae579 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae57c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ae57f jne 0x107ae582 */
  if (!C.zf) goto L_107ae582;
  /* 107ae581 int3  */
  x86_unimpl("int3 @ 0x107ae581");
L_107ae582:;
  /* 107ae582 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ae584 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ae586 jne 0x107ae55e */
  if (!C.zf) goto L_107ae55e;
  /* 107ae588 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae58b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107ae58e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 107ae591 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ae593 je 0x107ae5a1 */
  if (C.zf) goto L_107ae5a1;
  /* 107ae595 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae598 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 107ae59f jmp 0x107ae5c8 */
  goto L_107ae5c8;
L_107ae5a1:;
  /* 107ae5a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae5a4 push ecx */
  push32((uint32_t)(ECX));
  /* 107ae5a5 call 0x107acdc0 */
  push32(0x107ae5aau); f_107acdc0();
  /* 107ae5aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae5ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae5b0 push edx */
  push32((uint32_t)(EDX));
  /* 107ae5b1 call 0x107ae5e0 */
  push32(0x107ae5b6u); f_107ae5e0();
  /* 107ae5b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae5b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ae5bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae5bf push eax */
  push32((uint32_t)(EAX));
  /* 107ae5c0 call 0x107ace30 */
  push32(0x107ae5c5u); f_107ace30();
  /* 107ae5c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107ae5c8:;
  /* 107ae5c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ae5cb pop edi */
  EDI = (pop32());
  /* 107ae5cc pop esi */
  ESI = (pop32());
  /* 107ae5cd pop ebx */
  EBX = (pop32());
  /* 107ae5ce mov esp, ebp */
  ESP = (EBP);
  /* 107ae5d0 pop ebp */
  EBP = (pop32());
  /* 107ae5d1 ret  */
  ESPCHK(0x107ae550u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5e0 @ 0x107ae5e0 (190 bytes, 67 insns) */
void f_107ae5e0(void) {
  FTRACE(0x107ae5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ae5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107ae5e1 mov ebp, esp */
  EBP = (ESP);
  /* 107ae5e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ae5e6 push ebx */
  push32((uint32_t)(EBX));
  /* 107ae5e7 push esi */
  push32((uint32_t)(ESI));
  /* 107ae5e8 push edi */
  push32((uint32_t)(EDI));
  /* 107ae5e9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 107ae5f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae5f3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_107ae5f6:;
  /* 107ae5f6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ae5fa jne 0x107ae61a */
  if (!C.zf) goto L_107ae61a;
  /* 107ae5fc push 0x107cafbc */
  push32((uint32_t)(0x107cafbcu));
  /* 107ae601 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ae603 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 107ae605 push 0x107cb10c */
  push32((uint32_t)(0x107cb10cu));
  /* 107ae60a push 2 */
  push32((uint32_t)(0x2u));
  /* 107ae60c call 0x107a3070 */
  push32(0x107ae611u); f_107a3070();
  /* 107ae611 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae614 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ae617 jne 0x107ae61a */
  if (!C.zf) goto L_107ae61a;
  /* 107ae619 int3  */
  x86_unimpl("int3 @ 0x107ae619");
L_107ae61a:;
  /* 107ae61a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107ae61c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ae61e jne 0x107ae5f6 */
  if (!C.zf) goto L_107ae5f6;
  /* 107ae620 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ae623 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 107ae626 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 107ae62b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ae62d je 0x107ae68a */
  if (C.zf) goto L_107ae68a;
  /* 107ae62f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ae632 push ecx */
  push32((uint32_t)(ECX));
  /* 107ae633 call 0x107ad8e0 */
  push32(0x107ae638u); f_107ad8e0();
  /* 107ae638 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae63b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ae63e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ae641 push edx */
  push32((uint32_t)(EDX));
  /* 107ae642 call 0x107b0c60 */
  push32(0x107ae647u); f_107b0c60();
  /* 107ae647 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae64a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ae64d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107ae650 push ecx */
  push32((uint32_t)(ECX));
  /* 107ae651 call 0x107b0b30 */
  push32(0x107ae656u); f_107b0b30();
  /* 107ae656 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae659 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ae65b jge 0x107ae666 */
  if ((C.sf==C.of)) goto L_107ae666;
  /* 107ae65d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 107ae664 jmp 0x107ae68a */
  goto L_107ae68a;
L_107ae666:;
  /* 107ae666 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ae669 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ae66d je 0x107ae68a */
  if (C.zf) goto L_107ae68a;
  /* 107ae66f push 2 */
  push32((uint32_t)(0x2u));
  /* 107ae671 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ae674 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 107ae677 push ecx */
  push32((uint32_t)(ECX));
  /* 107ae678 call 0x107a4a40 */
  push32(0x107ae67du); f_107a4a40();
  /* 107ae67d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae680 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ae683 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_107ae68a:;
  /* 107ae68a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ae68d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 107ae694 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ae697 pop edi */
  EDI = (pop32());
  /* 107ae698 pop esi */
  ESI = (pop32());
  /* 107ae699 pop ebx */
  EBX = (pop32());
  /* 107ae69a mov esp, ebp */
  ESP = (EBP);
  /* 107ae69c pop ebp */
  EBP = (pop32());
  /* 107ae69d ret  */
  ESPCHK(0x107ae5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e6a0 @ 0x107ae6a0 (210 bytes, 63 insns) */
void f_107ae6a0(void) {
  FTRACE(0x107ae6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ae6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107ae6a1 mov ebp, esp */
  EBP = (ESP);
  /* 107ae6a3 push ecx */
  push32((uint32_t)(ECX));
  /* 107ae6a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae6a7 cmp eax, dword ptr [0x107d103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x107d103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ae6ad jae 0x107ae6d1 */
  if (!C.cf) goto L_107ae6d1;
  /* 107ae6af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae6b2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 107ae6b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae6b8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 107ae6bb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ae6be mov eax, dword ptr [ecx*4 + 0x107d0f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x107d0f00)));
  /* 107ae6c5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 107ae6ca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 107ae6cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ae6cf jne 0x107ae6e4 */
  if (!C.zf) goto L_107ae6e4;
L_107ae6d1:;
  /* 107ae6d1 call 0x107abe80 */
  push32(0x107ae6d6u); f_107abe80();
  /* 107ae6d6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 107ae6dc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107ae6df jmp 0x107ae76e */
  goto L_107ae76e;
L_107ae6e4:;
  /* 107ae6e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae6e7 push edx */
  push32((uint32_t)(EDX));
  /* 107ae6e8 call 0x107ad6a0 */
  push32(0x107ae6edu); f_107ad6a0();
  /* 107ae6ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae6f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae6f3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 107ae6f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae6f9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 107ae6fc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ae6ff mov edx, dword ptr [eax*4 + 0x107d0f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x107d0f00)));
  /* 107ae706 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 107ae70b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 107ae70e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ae710 je 0x107ae74d */
  if (C.zf) goto L_107ae74d;
  /* 107ae712 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae715 push ecx */
  push32((uint32_t)(ECX));
  /* 107ae716 call 0x107ad520 */
  push32(0x107ae71bu); f_107ad520();
  /* 107ae71b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae71e push eax */
  push32((uint32_t)(EAX));
  /* 107ae71f call dword ptr [0x107d22a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22a8))), 0x107ae725u);
  /* 107ae725 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ae727 jne 0x107ae734 */
  if (!C.zf) goto L_107ae734;
  /* 107ae729 call dword ptr [0x107d2330] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2330))), 0x107ae72fu);
  /* 107ae72f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ae732 jmp 0x107ae73b */
  goto L_107ae73b;
L_107ae734:;
  /* 107ae734 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_107ae73b:;
  /* 107ae73b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ae73f jne 0x107ae743 */
  if (!C.zf) goto L_107ae743;
  /* 107ae741 jmp 0x107ae75f */
  goto L_107ae75f;
L_107ae743:;
  /* 107ae743 call 0x107abe90 */
  push32(0x107ae748u); f_107abe90();
  /* 107ae748 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ae74b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_107ae74d:;
  /* 107ae74d call 0x107abe80 */
  push32(0x107ae752u); f_107abe80();
  /* 107ae752 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 107ae758 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_107ae75f:;
  /* 107ae75f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae762 push eax */
  push32((uint32_t)(EAX));
  /* 107ae763 call 0x107ad730 */
  push32(0x107ae768u); f_107ad730();
  /* 107ae768 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae76b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_107ae76e:;
  /* 107ae76e mov esp, ebp */
  ESP = (EBP);
  /* 107ae770 pop ebp */
  EBP = (pop32());
  /* 107ae771 ret  */
  ESPCHK(0x107ae6a0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x107ae780 (219 bytes, 64 insns) */
void f_107ae780(void) {
  FTRACE(0x107ae780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ae780 push ebp */
  push32((uint32_t)(EBP));
  /* 107ae781 mov ebp, esp */
  EBP = (ESP);
  /* 107ae783 push ecx */
  push32((uint32_t)(ECX));
  /* 107ae784 cmp dword ptr [0x107cf73c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf73c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ae78b je 0x107ae821 */
  if (C.zf) goto L_107ae821;
  /* 107ae791 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 107ae793 push 0x107cb128 */
  push32((uint32_t)(0x107cb128u));
  /* 107ae798 push 2 */
  push32((uint32_t)(0x2u));
  /* 107ae79a push 0xac */
  push32((uint32_t)(0xacu));
  /* 107ae79f push 1 */
  push32((uint32_t)(0x1u));
  /* 107ae7a1 call 0x107a43c0 */
  push32(0x107ae7a6u); f_107a43c0();
  /* 107ae7a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae7a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ae7ac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ae7b0 jne 0x107ae7bc */
  if (!C.zf) goto L_107ae7bc;
  /* 107ae7b2 mov eax, 1 */
  EAX = (0x1u);
  /* 107ae7b7 jmp 0x107ae857 */
  goto L_107ae857;
L_107ae7bc:;
  /* 107ae7bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ae7bf push eax */
  push32((uint32_t)(EAX));
  /* 107ae7c0 call 0x107ae860 */
  push32(0x107ae7c5u); f_107ae860();
  /* 107ae7c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae7c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ae7ca je 0x107ae7ed */
  if (C.zf) goto L_107ae7ed;
  /* 107ae7cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ae7cf push ecx */
  push32((uint32_t)(ECX));
  /* 107ae7d0 call 0x107aedf0 */
  push32(0x107ae7d5u); f_107aedf0();
  /* 107ae7d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae7d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 107ae7da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ae7dd push edx */
  push32((uint32_t)(EDX));
  /* 107ae7de call 0x107a4a40 */
  push32(0x107ae7e3u); f_107a4a40();
  /* 107ae7e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae7e6 mov eax, 1 */
  EAX = (0x1u);
  /* 107ae7eb jmp 0x107ae857 */
  goto L_107ae857;
L_107ae7ed:;
  /* 107ae7ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ae7f0 mov dword ptr [0x107cec98], eax */
  w32((uint32_t)(0x107cec98), (EAX));
  /* 107ae7f5 mov ecx, dword ptr [0x107cf75c] */
  ECX = (r32((uint32_t)(0x107cf75c)));
  /* 107ae7fb push ecx */
  push32((uint32_t)(ECX));
  /* 107ae7fc call 0x107aedf0 */
  push32(0x107ae801u); f_107aedf0();
  /* 107ae801 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae804 push 2 */
  push32((uint32_t)(0x2u));
  /* 107ae806 mov edx, dword ptr [0x107cf75c] */
  EDX = (r32((uint32_t)(0x107cf75c)));
  /* 107ae80c push edx */
  push32((uint32_t)(EDX));
  /* 107ae80d call 0x107a4a40 */
  push32(0x107ae812u); f_107a4a40();
  /* 107ae812 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae815 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ae818 mov dword ptr [0x107cf75c], eax */
  w32((uint32_t)(0x107cf75c), (EAX));
  /* 107ae81d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ae81f jmp 0x107ae857 */
  goto L_107ae857;
L_107ae821:;
  /* 107ae821 mov dword ptr [0x107cec98], 0x107ceca0 */
  w32((uint32_t)(0x107cec98), (0x107ceca0u));
  /* 107ae82b mov ecx, dword ptr [0x107cf75c] */
  ECX = (r32((uint32_t)(0x107cf75c)));
  /* 107ae831 push ecx */
  push32((uint32_t)(ECX));
  /* 107ae832 call 0x107aedf0 */
  push32(0x107ae837u); f_107aedf0();
  /* 107ae837 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae83a push 2 */
  push32((uint32_t)(0x2u));
  /* 107ae83c mov edx, dword ptr [0x107cf75c] */
  EDX = (r32((uint32_t)(0x107cf75c)));
  /* 107ae842 push edx */
  push32((uint32_t)(EDX));
  /* 107ae843 call 0x107a4a40 */
  push32(0x107ae848u); f_107a4a40();
  /* 107ae848 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae84b mov dword ptr [0x107cf75c], 0 */
  w32((uint32_t)(0x107cf75c), (0x0u));
  /* 107ae855 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107ae857:;
  /* 107ae857 mov esp, ebp */
  ESP = (EBP);
  /* 107ae859 pop ebp */
  EBP = (pop32());
  /* 107ae85a ret  */
  ESPCHK(0x107ae780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e860 @ 0x107ae860 (1423 bytes, 533 insns) */
void f_107ae860(void) {
  FTRACE(0x107ae860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ae860 push ebp */
  push32((uint32_t)(EBP));
  /* 107ae861 mov ebp, esp */
  EBP = (ESP);
  /* 107ae863 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ae866 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 107ae86d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ae86f mov ax, word ptr [0x107cf796] */
  AX = (r16((uint32_t)(0x107cf796)));
  /* 107ae875 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ae878 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107ae87a mov cx, word ptr [0x107cf798] */
  CX = (r16((uint32_t)(0x107cf798)));
  /* 107ae881 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107ae884 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ae888 jne 0x107ae892 */
  if (!C.zf) goto L_107ae892;
  /* 107ae88a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107ae88d jmp 0x107aedeb */
  goto L_107aedeb;
L_107ae892:;
  /* 107ae892 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae895 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae898 push edx */
  push32((uint32_t)(EDX));
  /* 107ae899 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 107ae89b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ae89e push eax */
  push32((uint32_t)(EAX));
  /* 107ae89f push 1 */
  push32((uint32_t)(0x1u));
  /* 107ae8a1 call 0x107b2170 */
  push32(0x107ae8a6u); f_107b2170();
  /* 107ae8a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae8a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ae8ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107ae8ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107ae8b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae8b4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae8b7 push edx */
  push32((uint32_t)(EDX));
  /* 107ae8b8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 107ae8ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ae8bd push eax */
  push32((uint32_t)(EAX));
  /* 107ae8be push 1 */
  push32((uint32_t)(0x1u));
  /* 107ae8c0 call 0x107b2170 */
  push32(0x107ae8c5u); f_107b2170();
  /* 107ae8c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae8c8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ae8cb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107ae8cd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107ae8d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae8d3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae8d6 push edx */
  push32((uint32_t)(EDX));
  /* 107ae8d7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 107ae8d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ae8dc push eax */
  push32((uint32_t)(EAX));
  /* 107ae8dd push 1 */
  push32((uint32_t)(0x1u));
  /* 107ae8df call 0x107b2170 */
  push32(0x107ae8e4u); f_107b2170();
  /* 107ae8e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae8e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ae8ea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107ae8ec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107ae8ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae8f2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae8f5 push edx */
  push32((uint32_t)(EDX));
  /* 107ae8f6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 107ae8f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ae8fb push eax */
  push32((uint32_t)(EAX));
  /* 107ae8fc push 1 */
  push32((uint32_t)(0x1u));
  /* 107ae8fe call 0x107b2170 */
  push32(0x107ae903u); f_107b2170();
  /* 107ae903 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae906 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ae909 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107ae90b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107ae90e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae911 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae914 push edx */
  push32((uint32_t)(EDX));
  /* 107ae915 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 107ae917 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ae91a push eax */
  push32((uint32_t)(EAX));
  /* 107ae91b push 1 */
  push32((uint32_t)(0x1u));
  /* 107ae91d call 0x107b2170 */
  push32(0x107ae922u); f_107b2170();
  /* 107ae922 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae925 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ae928 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107ae92a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107ae92d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae930 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae933 push edx */
  push32((uint32_t)(EDX));
  /* 107ae934 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 107ae936 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ae939 push eax */
  push32((uint32_t)(EAX));
  /* 107ae93a push 1 */
  push32((uint32_t)(0x1u));
  /* 107ae93c call 0x107b2170 */
  push32(0x107ae941u); f_107b2170();
  /* 107ae941 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae944 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ae947 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107ae949 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107ae94c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae94f push edx */
  push32((uint32_t)(EDX));
  /* 107ae950 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 107ae952 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ae955 push eax */
  push32((uint32_t)(EAX));
  /* 107ae956 push 1 */
  push32((uint32_t)(0x1u));
  /* 107ae958 call 0x107b2170 */
  push32(0x107ae95du); f_107b2170();
  /* 107ae95d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae960 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ae963 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107ae965 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107ae968 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae96b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae96e push edx */
  push32((uint32_t)(EDX));
  /* 107ae96f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 107ae971 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ae974 push eax */
  push32((uint32_t)(EAX));
  /* 107ae975 push 1 */
  push32((uint32_t)(0x1u));
  /* 107ae977 call 0x107b2170 */
  push32(0x107ae97cu); f_107b2170();
  /* 107ae97c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae97f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ae982 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107ae984 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107ae987 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae98a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae98d push edx */
  push32((uint32_t)(EDX));
  /* 107ae98e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 107ae990 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ae993 push eax */
  push32((uint32_t)(EAX));
  /* 107ae994 push 1 */
  push32((uint32_t)(0x1u));
  /* 107ae996 call 0x107b2170 */
  push32(0x107ae99bu); f_107b2170();
  /* 107ae99b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae99e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ae9a1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107ae9a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107ae9a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae9a9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae9ac push edx */
  push32((uint32_t)(EDX));
  /* 107ae9ad push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 107ae9af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ae9b2 push eax */
  push32((uint32_t)(EAX));
  /* 107ae9b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 107ae9b5 call 0x107b2170 */
  push32(0x107ae9bau); f_107b2170();
  /* 107ae9ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae9bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ae9c0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107ae9c2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107ae9c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae9c8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae9cb push edx */
  push32((uint32_t)(EDX));
  /* 107ae9cc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 107ae9ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ae9d1 push eax */
  push32((uint32_t)(EAX));
  /* 107ae9d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 107ae9d4 call 0x107b2170 */
  push32(0x107ae9d9u); f_107b2170();
  /* 107ae9d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae9dc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ae9df or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107ae9e1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107ae9e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ae9e7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae9ea push edx */
  push32((uint32_t)(EDX));
  /* 107ae9eb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 107ae9ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ae9f0 push eax */
  push32((uint32_t)(EAX));
  /* 107ae9f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 107ae9f3 call 0x107b2170 */
  push32(0x107ae9f8u); f_107b2170();
  /* 107ae9f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ae9fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ae9fe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107aea00 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107aea03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aea06 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aea09 push edx */
  push32((uint32_t)(EDX));
  /* 107aea0a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 107aea0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aea0f push eax */
  push32((uint32_t)(EAX));
  /* 107aea10 push 1 */
  push32((uint32_t)(0x1u));
  /* 107aea12 call 0x107b2170 */
  push32(0x107aea17u); f_107b2170();
  /* 107aea17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aea1a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aea1d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107aea1f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107aea22 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aea25 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aea28 push edx */
  push32((uint32_t)(EDX));
  /* 107aea29 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 107aea2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aea2e push eax */
  push32((uint32_t)(EAX));
  /* 107aea2f push 1 */
  push32((uint32_t)(0x1u));
  /* 107aea31 call 0x107b2170 */
  push32(0x107aea36u); f_107b2170();
  /* 107aea36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aea39 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aea3c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107aea3e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107aea41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aea44 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aea47 push edx */
  push32((uint32_t)(EDX));
  /* 107aea48 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 107aea4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aea4d push eax */
  push32((uint32_t)(EAX));
  /* 107aea4e push 1 */
  push32((uint32_t)(0x1u));
  /* 107aea50 call 0x107b2170 */
  push32(0x107aea55u); f_107b2170();
  /* 107aea55 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aea58 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aea5b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107aea5d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107aea60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aea63 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aea66 push edx */
  push32((uint32_t)(EDX));
  /* 107aea67 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 107aea69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aea6c push eax */
  push32((uint32_t)(EAX));
  /* 107aea6d push 1 */
  push32((uint32_t)(0x1u));
  /* 107aea6f call 0x107b2170 */
  push32(0x107aea74u); f_107b2170();
  /* 107aea74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aea77 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aea7a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107aea7c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107aea7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aea82 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aea85 push edx */
  push32((uint32_t)(EDX));
  /* 107aea86 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 107aea88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aea8b push eax */
  push32((uint32_t)(EAX));
  /* 107aea8c push 1 */
  push32((uint32_t)(0x1u));
  /* 107aea8e call 0x107b2170 */
  push32(0x107aea93u); f_107b2170();
  /* 107aea93 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aea96 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aea99 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107aea9b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107aea9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aeaa1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aeaa4 push edx */
  push32((uint32_t)(EDX));
  /* 107aeaa5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 107aeaa7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aeaaa push eax */
  push32((uint32_t)(EAX));
  /* 107aeaab push 1 */
  push32((uint32_t)(0x1u));
  /* 107aeaad call 0x107b2170 */
  push32(0x107aeab2u); f_107b2170();
  /* 107aeab2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aeab5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aeab8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107aeaba mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107aeabd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aeac0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aeac3 push edx */
  push32((uint32_t)(EDX));
  /* 107aeac4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 107aeac6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aeac9 push eax */
  push32((uint32_t)(EAX));
  /* 107aeaca push 1 */
  push32((uint32_t)(0x1u));
  /* 107aeacc call 0x107b2170 */
  push32(0x107aead1u); f_107b2170();
  /* 107aead1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aead4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aead7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107aead9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107aeadc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aeadf add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aeae2 push edx */
  push32((uint32_t)(EDX));
  /* 107aeae3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 107aeae5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aeae8 push eax */
  push32((uint32_t)(EAX));
  /* 107aeae9 push 1 */
  push32((uint32_t)(0x1u));
  /* 107aeaeb call 0x107b2170 */
  push32(0x107aeaf0u); f_107b2170();
  /* 107aeaf0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aeaf3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aeaf6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107aeaf8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107aeafb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aeafe add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aeb01 push edx */
  push32((uint32_t)(EDX));
  /* 107aeb02 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 107aeb04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aeb07 push eax */
  push32((uint32_t)(EAX));
  /* 107aeb08 push 1 */
  push32((uint32_t)(0x1u));
  /* 107aeb0a call 0x107b2170 */
  push32(0x107aeb0fu); f_107b2170();
  /* 107aeb0f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aeb12 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aeb15 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107aeb17 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107aeb1a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aeb1d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aeb20 push edx */
  push32((uint32_t)(EDX));
  /* 107aeb21 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 107aeb23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aeb26 push eax */
  push32((uint32_t)(EAX));
  /* 107aeb27 push 1 */
  push32((uint32_t)(0x1u));
  /* 107aeb29 call 0x107b2170 */
  push32(0x107aeb2eu); f_107b2170();
  /* 107aeb2e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aeb31 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aeb34 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107aeb36 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107aeb39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aeb3c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aeb3f push edx */
  push32((uint32_t)(EDX));
  /* 107aeb40 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 107aeb42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aeb45 push eax */
  push32((uint32_t)(EAX));
  /* 107aeb46 push 1 */
  push32((uint32_t)(0x1u));
  /* 107aeb48 call 0x107b2170 */
  push32(0x107aeb4du); f_107b2170();
  /* 107aeb4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aeb50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aeb53 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107aeb55 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107aeb58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aeb5b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aeb5e push edx */
  push32((uint32_t)(EDX));
  /* 107aeb5f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 107aeb61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aeb64 push eax */
  push32((uint32_t)(EAX));
  /* 107aeb65 push 1 */
  push32((uint32_t)(0x1u));
  /* 107aeb67 call 0x107b2170 */
  push32(0x107aeb6cu); f_107b2170();
  /* 107aeb6c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aeb6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aeb72 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107aeb74 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107aeb77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aeb7a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aeb7d push edx */
  push32((uint32_t)(EDX));
  /* 107aeb7e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 107aeb80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aeb83 push eax */
  push32((uint32_t)(EAX));
  /* 107aeb84 push 1 */
  push32((uint32_t)(0x1u));
  /* 107aeb86 call 0x107b2170 */
  push32(0x107aeb8bu); f_107b2170();
  /* 107aeb8b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aeb8e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aeb91 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107aeb93 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107aeb96 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aeb99 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aeb9c push edx */
  push32((uint32_t)(EDX));
  /* 107aeb9d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 107aeb9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aeba2 push eax */
  push32((uint32_t)(EAX));
  /* 107aeba3 push 1 */
  push32((uint32_t)(0x1u));
  /* 107aeba5 call 0x107b2170 */
  push32(0x107aebaau); f_107b2170();
  /* 107aebaa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aebad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aebb0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107aebb2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107aebb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aebb8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aebbb push edx */
  push32((uint32_t)(EDX));
  /* 107aebbc push 0x38 */
  push32((uint32_t)(0x38u));
  /* 107aebbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aebc1 push eax */
  push32((uint32_t)(EAX));
  /* 107aebc2 push 1 */
  push32((uint32_t)(0x1u));
  /* 107aebc4 call 0x107b2170 */
  push32(0x107aebc9u); f_107b2170();
  /* 107aebc9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aebcc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aebcf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107aebd1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107aebd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aebd7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aebda push edx */
  push32((uint32_t)(EDX));
  /* 107aebdb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 107aebdd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aebe0 push eax */
  push32((uint32_t)(EAX));
  /* 107aebe1 push 1 */
  push32((uint32_t)(0x1u));
  /* 107aebe3 call 0x107b2170 */
  push32(0x107aebe8u); f_107b2170();
  /* 107aebe8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aebeb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aebee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107aebf0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107aebf3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aebf6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aebf9 push edx */
  push32((uint32_t)(EDX));
  /* 107aebfa push 0x3a */
  push32((uint32_t)(0x3au));
  /* 107aebfc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aebff push eax */
  push32((uint32_t)(EAX));
  /* 107aec00 push 1 */
  push32((uint32_t)(0x1u));
  /* 107aec02 call 0x107b2170 */
  push32(0x107aec07u); f_107b2170();
  /* 107aec07 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aec0a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aec0d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107aec0f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107aec12 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aec15 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aec18 push edx */
  push32((uint32_t)(EDX));
  /* 107aec19 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 107aec1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aec1e push eax */
  push32((uint32_t)(EAX));
  /* 107aec1f push 1 */
  push32((uint32_t)(0x1u));
  /* 107aec21 call 0x107b2170 */
  push32(0x107aec26u); f_107b2170();
  /* 107aec26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aec29 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aec2c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107aec2e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107aec31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aec34 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aec37 push edx */
  push32((uint32_t)(EDX));
  /* 107aec38 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 107aec3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aec3d push eax */
  push32((uint32_t)(EAX));
  /* 107aec3e push 1 */
  push32((uint32_t)(0x1u));
  /* 107aec40 call 0x107b2170 */
  push32(0x107aec45u); f_107b2170();
  /* 107aec45 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aec48 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aec4b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107aec4d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107aec50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aec53 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aec56 push edx */
  push32((uint32_t)(EDX));
  /* 107aec57 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 107aec59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aec5c push eax */
  push32((uint32_t)(EAX));
  /* 107aec5d push 1 */
  push32((uint32_t)(0x1u));
  /* 107aec5f call 0x107b2170 */
  push32(0x107aec64u); f_107b2170();
  /* 107aec64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aec67 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aec6a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107aec6c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107aec6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aec72 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aec78 push edx */
  push32((uint32_t)(EDX));
  /* 107aec79 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 107aec7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aec7e push eax */
  push32((uint32_t)(EAX));
  /* 107aec7f push 1 */
  push32((uint32_t)(0x1u));
  /* 107aec81 call 0x107b2170 */
  push32(0x107aec86u); f_107b2170();
  /* 107aec86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aec89 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aec8c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107aec8e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107aec91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aec94 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aec9a push edx */
  push32((uint32_t)(EDX));
  /* 107aec9b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 107aec9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aeca0 push eax */
  push32((uint32_t)(EAX));
  /* 107aeca1 push 1 */
  push32((uint32_t)(0x1u));
  /* 107aeca3 call 0x107b2170 */
  push32(0x107aeca8u); f_107b2170();
  /* 107aeca8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aecab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aecae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107aecb0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107aecb3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aecb6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aecbc push edx */
  push32((uint32_t)(EDX));
  /* 107aecbd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 107aecbf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aecc2 push eax */
  push32((uint32_t)(EAX));
  /* 107aecc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 107aecc5 call 0x107b2170 */
  push32(0x107aeccau); f_107b2170();
  /* 107aecca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aeccd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aecd0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107aecd2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107aecd5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aecd8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aecde push edx */
  push32((uint32_t)(EDX));
  /* 107aecdf push 0x41 */
  push32((uint32_t)(0x41u));
  /* 107aece1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aece4 push eax */
  push32((uint32_t)(EAX));
  /* 107aece5 push 1 */
  push32((uint32_t)(0x1u));
  /* 107aece7 call 0x107b2170 */
  push32(0x107aececu); f_107b2170();
  /* 107aecec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aecef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aecf2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107aecf4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107aecf7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aecfa add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aed00 push edx */
  push32((uint32_t)(EDX));
  /* 107aed01 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 107aed03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aed06 push eax */
  push32((uint32_t)(EAX));
  /* 107aed07 push 1 */
  push32((uint32_t)(0x1u));
  /* 107aed09 call 0x107b2170 */
  push32(0x107aed0eu); f_107b2170();
  /* 107aed0e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aed11 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aed14 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107aed16 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107aed19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aed1c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aed22 push edx */
  push32((uint32_t)(EDX));
  /* 107aed23 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 107aed25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aed28 push eax */
  push32((uint32_t)(EAX));
  /* 107aed29 push 1 */
  push32((uint32_t)(0x1u));
  /* 107aed2b call 0x107b2170 */
  push32(0x107aed30u); f_107b2170();
  /* 107aed30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aed33 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aed36 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107aed38 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107aed3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aed3e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aed44 push edx */
  push32((uint32_t)(EDX));
  /* 107aed45 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 107aed47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aed4a push eax */
  push32((uint32_t)(EAX));
  /* 107aed4b push 1 */
  push32((uint32_t)(0x1u));
  /* 107aed4d call 0x107b2170 */
  push32(0x107aed52u); f_107b2170();
  /* 107aed52 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aed55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aed58 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107aed5a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107aed5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aed60 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aed66 push edx */
  push32((uint32_t)(EDX));
  /* 107aed67 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 107aed69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aed6c push eax */
  push32((uint32_t)(EAX));
  /* 107aed6d push 1 */
  push32((uint32_t)(0x1u));
  /* 107aed6f call 0x107b2170 */
  push32(0x107aed74u); f_107b2170();
  /* 107aed74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aed77 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aed7a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107aed7c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107aed7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aed82 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aed88 push edx */
  push32((uint32_t)(EDX));
  /* 107aed89 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 107aed8b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aed8e push eax */
  push32((uint32_t)(EAX));
  /* 107aed8f push 1 */
  push32((uint32_t)(0x1u));
  /* 107aed91 call 0x107b2170 */
  push32(0x107aed96u); f_107b2170();
  /* 107aed96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aed99 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aed9c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107aed9e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107aeda1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aeda4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aedaa push edx */
  push32((uint32_t)(EDX));
  /* 107aedab push 0x20 */
  push32((uint32_t)(0x20u));
  /* 107aedad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aedb0 push eax */
  push32((uint32_t)(EAX));
  /* 107aedb1 push 1 */
  push32((uint32_t)(0x1u));
  /* 107aedb3 call 0x107b2170 */
  push32(0x107aedb8u); f_107b2170();
  /* 107aedb8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aedbb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aedbe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107aedc0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107aedc3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aedc6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aedcc push edx */
  push32((uint32_t)(EDX));
  /* 107aedcd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 107aedd2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107aedd5 push eax */
  push32((uint32_t)(EAX));
  /* 107aedd6 push 1 */
  push32((uint32_t)(0x1u));
  /* 107aedd8 call 0x107b2170 */
  push32(0x107aedddu); f_107b2170();
  /* 107aeddd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aede0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107aede3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107aede5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107aede8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_107aedeb:;
  /* 107aedeb mov esp, ebp */
  ESP = (EBP);
  /* 107aeded pop ebp */
  EBP = (pop32());
  /* 107aedee ret  */
  ESPCHK(0x107ae860u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x107aedf0 (779 bytes, 265 insns) */
void f_107aedf0(void) {
  FTRACE(0x107aedf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107aedf0 push ebp */
  push32((uint32_t)(EBP));
  /* 107aedf1 mov ebp, esp */
  EBP = (ESP);
  /* 107aedf3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aedf7 jne 0x107aedfe */
  if (!C.zf) goto L_107aedfe;
  /* 107aedf9 jmp 0x107af0f9 */
  goto L_107af0f9;
L_107aedfe:;
  /* 107aedfe push 2 */
  push32((uint32_t)(0x2u));
  /* 107aee00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aee03 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107aee06 push ecx */
  push32((uint32_t)(ECX));
  /* 107aee07 call 0x107a4a40 */
  push32(0x107aee0cu); f_107a4a40();
  /* 107aee0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aee0f push 2 */
  push32((uint32_t)(0x2u));
  /* 107aee11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aee14 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 107aee17 push eax */
  push32((uint32_t)(EAX));
  /* 107aee18 call 0x107a4a40 */
  push32(0x107aee1du); f_107a4a40();
  /* 107aee1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aee20 push 2 */
  push32((uint32_t)(0x2u));
  /* 107aee22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aee25 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107aee28 push edx */
  push32((uint32_t)(EDX));
  /* 107aee29 call 0x107a4a40 */
  push32(0x107aee2eu); f_107a4a40();
  /* 107aee2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aee31 push 2 */
  push32((uint32_t)(0x2u));
  /* 107aee33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aee36 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107aee39 push ecx */
  push32((uint32_t)(ECX));
  /* 107aee3a call 0x107a4a40 */
  push32(0x107aee3fu); f_107a4a40();
  /* 107aee3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aee42 push 2 */
  push32((uint32_t)(0x2u));
  /* 107aee44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aee47 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107aee4a push eax */
  push32((uint32_t)(EAX));
  /* 107aee4b call 0x107a4a40 */
  push32(0x107aee50u); f_107a4a40();
  /* 107aee50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aee53 push 2 */
  push32((uint32_t)(0x2u));
  /* 107aee55 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aee58 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 107aee5b push edx */
  push32((uint32_t)(EDX));
  /* 107aee5c call 0x107a4a40 */
  push32(0x107aee61u); f_107a4a40();
  /* 107aee61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aee64 push 2 */
  push32((uint32_t)(0x2u));
  /* 107aee66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aee69 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107aee6b push ecx */
  push32((uint32_t)(ECX));
  /* 107aee6c call 0x107a4a40 */
  push32(0x107aee71u); f_107a4a40();
  /* 107aee71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aee74 push 2 */
  push32((uint32_t)(0x2u));
  /* 107aee76 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aee79 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 107aee7c push eax */
  push32((uint32_t)(EAX));
  /* 107aee7d call 0x107a4a40 */
  push32(0x107aee82u); f_107a4a40();
  /* 107aee82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aee85 push 2 */
  push32((uint32_t)(0x2u));
  /* 107aee87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aee8a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 107aee8d push edx */
  push32((uint32_t)(EDX));
  /* 107aee8e call 0x107a4a40 */
  push32(0x107aee93u); f_107a4a40();
  /* 107aee93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aee96 push 2 */
  push32((uint32_t)(0x2u));
  /* 107aee98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aee9b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 107aee9e push ecx */
  push32((uint32_t)(ECX));
  /* 107aee9f call 0x107a4a40 */
  push32(0x107aeea4u); f_107a4a40();
  /* 107aeea4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aeea7 push 2 */
  push32((uint32_t)(0x2u));
  /* 107aeea9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aeeac mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 107aeeaf push eax */
  push32((uint32_t)(EAX));
  /* 107aeeb0 call 0x107a4a40 */
  push32(0x107aeeb5u); f_107a4a40();
  /* 107aeeb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aeeb8 push 2 */
  push32((uint32_t)(0x2u));
  /* 107aeeba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aeebd mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 107aeec0 push edx */
  push32((uint32_t)(EDX));
  /* 107aeec1 call 0x107a4a40 */
  push32(0x107aeec6u); f_107a4a40();
  /* 107aeec6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aeec9 push 2 */
  push32((uint32_t)(0x2u));
  /* 107aeecb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aeece mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 107aeed1 push ecx */
  push32((uint32_t)(ECX));
  /* 107aeed2 call 0x107a4a40 */
  push32(0x107aeed7u); f_107a4a40();
  /* 107aeed7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aeeda push 2 */
  push32((uint32_t)(0x2u));
  /* 107aeedc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aeedf mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 107aeee2 push eax */
  push32((uint32_t)(EAX));
  /* 107aeee3 call 0x107a4a40 */
  push32(0x107aeee8u); f_107a4a40();
  /* 107aeee8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aeeeb push 2 */
  push32((uint32_t)(0x2u));
  /* 107aeeed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aeef0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 107aeef3 push edx */
  push32((uint32_t)(EDX));
  /* 107aeef4 call 0x107a4a40 */
  push32(0x107aeef9u); f_107a4a40();
  /* 107aeef9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aeefc push 2 */
  push32((uint32_t)(0x2u));
  /* 107aeefe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aef01 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 107aef04 push ecx */
  push32((uint32_t)(ECX));
  /* 107aef05 call 0x107a4a40 */
  push32(0x107aef0au); f_107a4a40();
  /* 107aef0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aef0d push 2 */
  push32((uint32_t)(0x2u));
  /* 107aef0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aef12 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 107aef15 push eax */
  push32((uint32_t)(EAX));
  /* 107aef16 call 0x107a4a40 */
  push32(0x107aef1bu); f_107a4a40();
  /* 107aef1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aef1e push 2 */
  push32((uint32_t)(0x2u));
  /* 107aef20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aef23 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 107aef26 push edx */
  push32((uint32_t)(EDX));
  /* 107aef27 call 0x107a4a40 */
  push32(0x107aef2cu); f_107a4a40();
  /* 107aef2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aef2f push 2 */
  push32((uint32_t)(0x2u));
  /* 107aef31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aef34 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 107aef37 push ecx */
  push32((uint32_t)(ECX));
  /* 107aef38 call 0x107a4a40 */
  push32(0x107aef3du); f_107a4a40();
  /* 107aef3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aef40 push 2 */
  push32((uint32_t)(0x2u));
  /* 107aef42 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aef45 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 107aef48 push eax */
  push32((uint32_t)(EAX));
  /* 107aef49 call 0x107a4a40 */
  push32(0x107aef4eu); f_107a4a40();
  /* 107aef4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aef51 push 2 */
  push32((uint32_t)(0x2u));
  /* 107aef53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aef56 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 107aef59 push edx */
  push32((uint32_t)(EDX));
  /* 107aef5a call 0x107a4a40 */
  push32(0x107aef5fu); f_107a4a40();
  /* 107aef5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aef62 push 2 */
  push32((uint32_t)(0x2u));
  /* 107aef64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aef67 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 107aef6a push ecx */
  push32((uint32_t)(ECX));
  /* 107aef6b call 0x107a4a40 */
  push32(0x107aef70u); f_107a4a40();
  /* 107aef70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aef73 push 2 */
  push32((uint32_t)(0x2u));
  /* 107aef75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aef78 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 107aef7b push eax */
  push32((uint32_t)(EAX));
  /* 107aef7c call 0x107a4a40 */
  push32(0x107aef81u); f_107a4a40();
  /* 107aef81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aef84 push 2 */
  push32((uint32_t)(0x2u));
  /* 107aef86 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aef89 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 107aef8c push edx */
  push32((uint32_t)(EDX));
  /* 107aef8d call 0x107a4a40 */
  push32(0x107aef92u); f_107a4a40();
  /* 107aef92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aef95 push 2 */
  push32((uint32_t)(0x2u));
  /* 107aef97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aef9a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 107aef9d push ecx */
  push32((uint32_t)(ECX));
  /* 107aef9e call 0x107a4a40 */
  push32(0x107aefa3u); f_107a4a40();
  /* 107aefa3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aefa6 push 2 */
  push32((uint32_t)(0x2u));
  /* 107aefa8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aefab mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 107aefae push eax */
  push32((uint32_t)(EAX));
  /* 107aefaf call 0x107a4a40 */
  push32(0x107aefb4u); f_107a4a40();
  /* 107aefb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aefb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 107aefb9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aefbc mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 107aefbf push edx */
  push32((uint32_t)(EDX));
  /* 107aefc0 call 0x107a4a40 */
  push32(0x107aefc5u); f_107a4a40();
  /* 107aefc5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aefc8 push 2 */
  push32((uint32_t)(0x2u));
  /* 107aefca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aefcd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 107aefd0 push ecx */
  push32((uint32_t)(ECX));
  /* 107aefd1 call 0x107a4a40 */
  push32(0x107aefd6u); f_107a4a40();
  /* 107aefd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aefd9 push 2 */
  push32((uint32_t)(0x2u));
  /* 107aefdb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aefde mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 107aefe1 push eax */
  push32((uint32_t)(EAX));
  /* 107aefe2 call 0x107a4a40 */
  push32(0x107aefe7u); f_107a4a40();
  /* 107aefe7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aefea push 2 */
  push32((uint32_t)(0x2u));
  /* 107aefec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107aefef mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 107aeff2 push edx */
  push32((uint32_t)(EDX));
  /* 107aeff3 call 0x107a4a40 */
  push32(0x107aeff8u); f_107a4a40();
  /* 107aeff8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107aeffb push 2 */
  push32((uint32_t)(0x2u));
  /* 107aeffd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af000 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 107af003 push ecx */
  push32((uint32_t)(ECX));
  /* 107af004 call 0x107a4a40 */
  push32(0x107af009u); f_107a4a40();
  /* 107af009 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af00c push 2 */
  push32((uint32_t)(0x2u));
  /* 107af00e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af011 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 107af014 push eax */
  push32((uint32_t)(EAX));
  /* 107af015 call 0x107a4a40 */
  push32(0x107af01au); f_107a4a40();
  /* 107af01a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af01d push 2 */
  push32((uint32_t)(0x2u));
  /* 107af01f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af022 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 107af028 push edx */
  push32((uint32_t)(EDX));
  /* 107af029 call 0x107a4a40 */
  push32(0x107af02eu); f_107a4a40();
  /* 107af02e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af031 push 2 */
  push32((uint32_t)(0x2u));
  /* 107af033 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af036 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 107af03c push ecx */
  push32((uint32_t)(ECX));
  /* 107af03d call 0x107a4a40 */
  push32(0x107af042u); f_107a4a40();
  /* 107af042 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af045 push 2 */
  push32((uint32_t)(0x2u));
  /* 107af047 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af04a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 107af050 push eax */
  push32((uint32_t)(EAX));
  /* 107af051 call 0x107a4a40 */
  push32(0x107af056u); f_107a4a40();
  /* 107af056 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af059 push 2 */
  push32((uint32_t)(0x2u));
  /* 107af05b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af05e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 107af064 push edx */
  push32((uint32_t)(EDX));
  /* 107af065 call 0x107a4a40 */
  push32(0x107af06au); f_107a4a40();
  /* 107af06a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af06d push 2 */
  push32((uint32_t)(0x2u));
  /* 107af06f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af072 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 107af078 push ecx */
  push32((uint32_t)(ECX));
  /* 107af079 call 0x107a4a40 */
  push32(0x107af07eu); f_107a4a40();
  /* 107af07e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af081 push 2 */
  push32((uint32_t)(0x2u));
  /* 107af083 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af086 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 107af08c push eax */
  push32((uint32_t)(EAX));
  /* 107af08d call 0x107a4a40 */
  push32(0x107af092u); f_107a4a40();
  /* 107af092 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af095 push 2 */
  push32((uint32_t)(0x2u));
  /* 107af097 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af09a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 107af0a0 push edx */
  push32((uint32_t)(EDX));
  /* 107af0a1 call 0x107a4a40 */
  push32(0x107af0a6u); f_107a4a40();
  /* 107af0a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af0a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 107af0ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af0ae mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 107af0b4 push ecx */
  push32((uint32_t)(ECX));
  /* 107af0b5 call 0x107a4a40 */
  push32(0x107af0bau); f_107a4a40();
  /* 107af0ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af0bd push 2 */
  push32((uint32_t)(0x2u));
  /* 107af0bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af0c2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 107af0c8 push eax */
  push32((uint32_t)(EAX));
  /* 107af0c9 call 0x107a4a40 */
  push32(0x107af0ceu); f_107a4a40();
  /* 107af0ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af0d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 107af0d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af0d6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 107af0dc push edx */
  push32((uint32_t)(EDX));
  /* 107af0dd call 0x107a4a40 */
  push32(0x107af0e2u); f_107a4a40();
  /* 107af0e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af0e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 107af0e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af0ea mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 107af0f0 push ecx */
  push32((uint32_t)(ECX));
  /* 107af0f1 call 0x107a4a40 */
  push32(0x107af0f6u); f_107a4a40();
  /* 107af0f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107af0f9:;
  /* 107af0f9 pop ebp */
  EBP = (pop32());
  /* 107af0fa ret  */
  ESPCHK(0x107aedf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f100 @ 0x107af100 (678 bytes, 180 insns) */
void f_107af100(void) {
  FTRACE(0x107af100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107af100 push ebp */
  push32((uint32_t)(EBP));
  /* 107af101 mov ebp, esp */
  EBP = (ESP);
  /* 107af103 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107af106 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107af10d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107af10f mov ax, word ptr [0x107cf792] */
  AX = (r16((uint32_t)(0x107cf792)));
  /* 107af115 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107af118 cmp dword ptr [0x107cf738], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf738))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107af11f je 0x107af27a */
  if (C.zf) goto L_107af27a;
  /* 107af125 push 0x107cf760 */
  push32((uint32_t)(0x107cf760u));
  /* 107af12a push 0xe */
  push32((uint32_t)(0xeu));
  /* 107af12c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107af12f push ecx */
  push32((uint32_t)(ECX));
  /* 107af130 push 1 */
  push32((uint32_t)(0x1u));
  /* 107af132 call 0x107b2170 */
  push32(0x107af137u); f_107b2170();
  /* 107af137 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af13a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107af13d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 107af13f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107af142 push 0x107cf764 */
  push32((uint32_t)(0x107cf764u));
  /* 107af147 push 0xf */
  push32((uint32_t)(0xfu));
  /* 107af149 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107af14c push eax */
  push32((uint32_t)(EAX));
  /* 107af14d push 1 */
  push32((uint32_t)(0x1u));
  /* 107af14f call 0x107b2170 */
  push32(0x107af154u); f_107b2170();
  /* 107af154 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af157 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107af15a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107af15c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107af15f push 0x107cf768 */
  push32((uint32_t)(0x107cf768u));
  /* 107af164 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 107af166 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107af169 push edx */
  push32((uint32_t)(EDX));
  /* 107af16a push 1 */
  push32((uint32_t)(0x1u));
  /* 107af16c call 0x107b2170 */
  push32(0x107af171u); f_107b2170();
  /* 107af171 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af174 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107af177 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107af179 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107af17c mov edx, dword ptr [0x107cf768] */
  EDX = (r32((uint32_t)(0x107cf768)));
  /* 107af182 push edx */
  push32((uint32_t)(EDX));
  /* 107af183 call 0x107af3b0 */
  push32(0x107af188u); f_107af3b0();
  /* 107af188 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af18b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107af18f je 0x107af1e9 */
  if (C.zf) goto L_107af1e9;
  /* 107af191 push 2 */
  push32((uint32_t)(0x2u));
  /* 107af193 mov eax, dword ptr [0x107cf760] */
  EAX = (r32((uint32_t)(0x107cf760)));
  /* 107af198 push eax */
  push32((uint32_t)(EAX));
  /* 107af199 call 0x107a4a40 */
  push32(0x107af19eu); f_107a4a40();
  /* 107af19e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af1a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 107af1a3 mov ecx, dword ptr [0x107cf764] */
  ECX = (r32((uint32_t)(0x107cf764)));
  /* 107af1a9 push ecx */
  push32((uint32_t)(ECX));
  /* 107af1aa call 0x107a4a40 */
  push32(0x107af1afu); f_107a4a40();
  /* 107af1af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af1b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 107af1b4 mov edx, dword ptr [0x107cf768] */
  EDX = (r32((uint32_t)(0x107cf768)));
  /* 107af1ba push edx */
  push32((uint32_t)(EDX));
  /* 107af1bb call 0x107a4a40 */
  push32(0x107af1c0u); f_107a4a40();
  /* 107af1c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af1c3 mov dword ptr [0x107cf760], 0 */
  w32((uint32_t)(0x107cf760), (0x0u));
  /* 107af1cd mov dword ptr [0x107cf764], 0 */
  w32((uint32_t)(0x107cf764), (0x0u));
  /* 107af1d7 mov dword ptr [0x107cf768], 0 */
  w32((uint32_t)(0x107cf768), (0x0u));
  /* 107af1e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107af1e4 jmp 0x107af3a2 */
  goto L_107af3a2;
L_107af1e9:;
  /* 107af1e9 mov eax, dword ptr [0x107ced88] */
  EAX = (r32((uint32_t)(0x107ced88)));
  /* 107af1ee cmp dword ptr [eax], 0x107ced50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x107ced50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107af1f4 je 0x107af230 */
  if (C.zf) goto L_107af230;
  /* 107af1f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 107af1f8 mov ecx, dword ptr [0x107ced88] */
  ECX = (r32((uint32_t)(0x107ced88)));
  /* 107af1fe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107af200 push edx */
  push32((uint32_t)(EDX));
  /* 107af201 call 0x107a4a40 */
  push32(0x107af206u); f_107a4a40();
  /* 107af206 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af209 push 2 */
  push32((uint32_t)(0x2u));
  /* 107af20b mov eax, dword ptr [0x107ced88] */
  EAX = (r32((uint32_t)(0x107ced88)));
  /* 107af210 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107af213 push ecx */
  push32((uint32_t)(ECX));
  /* 107af214 call 0x107a4a40 */
  push32(0x107af219u); f_107a4a40();
  /* 107af219 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af21c push 2 */
  push32((uint32_t)(0x2u));
  /* 107af21e mov edx, dword ptr [0x107ced88] */
  EDX = (r32((uint32_t)(0x107ced88)));
  /* 107af224 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 107af227 push eax */
  push32((uint32_t)(EAX));
  /* 107af228 call 0x107a4a40 */
  push32(0x107af22du); f_107a4a40();
  /* 107af22d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107af230:;
  /* 107af230 mov ecx, dword ptr [0x107ced88] */
  ECX = (r32((uint32_t)(0x107ced88)));
  /* 107af236 mov edx, dword ptr [0x107cf760] */
  EDX = (r32((uint32_t)(0x107cf760)));
  /* 107af23c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 107af23e mov eax, dword ptr [0x107ced88] */
  EAX = (r32((uint32_t)(0x107ced88)));
  /* 107af243 mov ecx, dword ptr [0x107cf764] */
  ECX = (r32((uint32_t)(0x107cf764)));
  /* 107af249 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 107af24c mov edx, dword ptr [0x107ced88] */
  EDX = (r32((uint32_t)(0x107ced88)));
  /* 107af252 mov eax, dword ptr [0x107cf768] */
  EAX = (r32((uint32_t)(0x107cf768)));
  /* 107af257 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 107af25a mov ecx, dword ptr [0x107ced88] */
  ECX = (r32((uint32_t)(0x107ced88)));
  /* 107af260 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107af262 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107af264 mov byte ptr [0x107cdea8], al */
  w8((uint32_t)(0x107cdea8), (AL));
  /* 107af269 mov dword ptr [0x107cdeac], 1 */
  w32((uint32_t)(0x107cdeac), (0x1u));
  /* 107af273 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107af275 jmp 0x107af3a2 */
  goto L_107af3a2;
L_107af27a:;
  /* 107af27a push 2 */
  push32((uint32_t)(0x2u));
  /* 107af27c mov ecx, dword ptr [0x107cf760] */
  ECX = (r32((uint32_t)(0x107cf760)));
  /* 107af282 push ecx */
  push32((uint32_t)(ECX));
  /* 107af283 call 0x107a4a40 */
  push32(0x107af288u); f_107a4a40();
  /* 107af288 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af28b push 2 */
  push32((uint32_t)(0x2u));
  /* 107af28d mov edx, dword ptr [0x107cf764] */
  EDX = (r32((uint32_t)(0x107cf764)));
  /* 107af293 push edx */
  push32((uint32_t)(EDX));
  /* 107af294 call 0x107a4a40 */
  push32(0x107af299u); f_107a4a40();
  /* 107af299 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af29c push 2 */
  push32((uint32_t)(0x2u));
  /* 107af29e mov eax, dword ptr [0x107cf768] */
  EAX = (r32((uint32_t)(0x107cf768)));
  /* 107af2a3 push eax */
  push32((uint32_t)(EAX));
  /* 107af2a4 call 0x107a4a40 */
  push32(0x107af2a9u); f_107a4a40();
  /* 107af2a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af2ac mov dword ptr [0x107cf760], 0 */
  w32((uint32_t)(0x107cf760), (0x0u));
  /* 107af2b6 mov dword ptr [0x107cf764], 0 */
  w32((uint32_t)(0x107cf764), (0x0u));
  /* 107af2c0 mov dword ptr [0x107cf768], 0 */
  w32((uint32_t)(0x107cf768), (0x0u));
  /* 107af2ca push 0x88 */
  push32((uint32_t)(0x88u));
  /* 107af2cf push 0x107cb134 */
  push32((uint32_t)(0x107cb134u));
  /* 107af2d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 107af2d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 107af2d8 call 0x107a3fb0 */
  push32(0x107af2ddu); f_107a3fb0();
  /* 107af2dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af2e0 mov ecx, dword ptr [0x107ced88] */
  ECX = (r32((uint32_t)(0x107ced88)));
  /* 107af2e6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107af2e8 mov edx, dword ptr [0x107ced88] */
  EDX = (r32((uint32_t)(0x107ced88)));
  /* 107af2ee cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107af2f1 jne 0x107af2fb */
  if (!C.zf) goto L_107af2fb;
  /* 107af2f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107af2f6 jmp 0x107af3a2 */
  goto L_107af3a2;
L_107af2fb:;
  /* 107af2fb push 0x107cb104 */
  push32((uint32_t)(0x107cb104u));
  /* 107af300 mov eax, dword ptr [0x107ced88] */
  EAX = (r32((uint32_t)(0x107ced88)));
  /* 107af305 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107af307 push ecx */
  push32((uint32_t)(ECX));
  /* 107af308 call 0x107a6f60 */
  push32(0x107af30du); f_107a6f60();
  /* 107af30d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af310 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 107af315 push 0x107cb134 */
  push32((uint32_t)(0x107cb134u));
  /* 107af31a push 2 */
  push32((uint32_t)(0x2u));
  /* 107af31c push 2 */
  push32((uint32_t)(0x2u));
  /* 107af31e call 0x107a3fb0 */
  push32(0x107af323u); f_107a3fb0();
  /* 107af323 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af326 mov edx, dword ptr [0x107ced88] */
  EDX = (r32((uint32_t)(0x107ced88)));
  /* 107af32c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 107af32f mov eax, dword ptr [0x107ced88] */
  EAX = (r32((uint32_t)(0x107ced88)));
  /* 107af334 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107af338 jne 0x107af33f */
  if (!C.zf) goto L_107af33f;
  /* 107af33a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107af33d jmp 0x107af3a2 */
  goto L_107af3a2;
L_107af33f:;
  /* 107af33f mov ecx, dword ptr [0x107ced88] */
  ECX = (r32((uint32_t)(0x107ced88)));
  /* 107af345 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107af348 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 107af34b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 107af350 push 0x107cb134 */
  push32((uint32_t)(0x107cb134u));
  /* 107af355 push 2 */
  push32((uint32_t)(0x2u));
  /* 107af357 push 2 */
  push32((uint32_t)(0x2u));
  /* 107af359 call 0x107a3fb0 */
  push32(0x107af35eu); f_107a3fb0();
  /* 107af35e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af361 mov ecx, dword ptr [0x107ced88] */
  ECX = (r32((uint32_t)(0x107ced88)));
  /* 107af367 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 107af36a mov edx, dword ptr [0x107ced88] */
  EDX = (r32((uint32_t)(0x107ced88)));
  /* 107af370 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107af374 jne 0x107af37b */
  if (!C.zf) goto L_107af37b;
  /* 107af376 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107af379 jmp 0x107af3a2 */
  goto L_107af3a2;
L_107af37b:;
  /* 107af37b mov eax, dword ptr [0x107ced88] */
  EAX = (r32((uint32_t)(0x107ced88)));
  /* 107af380 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 107af383 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 107af386 mov edx, dword ptr [0x107ced88] */
  EDX = (r32((uint32_t)(0x107ced88)));
  /* 107af38c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107af38e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107af390 mov byte ptr [0x107cdea8], cl */
  w8((uint32_t)(0x107cdea8), (CL));
  /* 107af396 mov dword ptr [0x107cdeac], 1 */
  w32((uint32_t)(0x107cdeac), (0x1u));
  /* 107af3a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107af3a2:;
  /* 107af3a2 mov esp, ebp */
  ESP = (EBP);
  /* 107af3a4 pop ebp */
  EBP = (pop32());
  /* 107af3a5 ret  */
  ESPCHK(0x107af100u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x107af3b0 (125 bytes, 49 insns) */
void f_107af3b0(void) {
  FTRACE(0x107af3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107af3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107af3b1 mov ebp, esp */
  EBP = (ESP);
  /* 107af3b3 push ecx */
  push32((uint32_t)(ECX));
L_107af3b4:;
  /* 107af3b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af3b7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107af3ba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107af3bc je 0x107af429 */
  if (C.zf) goto L_107af429;
  /* 107af3be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af3c1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107af3c4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107af3c7 jl 0x107af3ed */
  if ((C.sf!=C.of)) goto L_107af3ed;
  /* 107af3c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af3cc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107af3cf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107af3d2 jg 0x107af3ed */
  if ((!C.zf&&C.sf==C.of)) goto L_107af3ed;
  /* 107af3d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af3d7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107af3da sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107af3dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af3e0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 107af3e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af3e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107af3e8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107af3eb jmp 0x107af427 */
  goto L_107af427;
L_107af3ed:;
  /* 107af3ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af3f0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107af3f3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107af3f6 jne 0x107af41e */
  if (!C.zf) goto L_107af41e;
  /* 107af3f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af3fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107af3fe:;
  /* 107af3fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107af401 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107af404 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 107af407 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 107af409 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107af40c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107af40f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107af412 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107af415 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107af418 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107af41a jne 0x107af3fe */
  if (!C.zf) goto L_107af3fe;
  /* 107af41c jmp 0x107af427 */
  goto L_107af427;
L_107af41e:;
  /* 107af41e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af421 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107af424 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_107af427:;
  /* 107af427 jmp 0x107af3b4 */
  goto L_107af3b4;
L_107af429:;
  /* 107af429 mov esp, ebp */
  ESP = (EBP);
  /* 107af42b pop ebp */
  EBP = (pop32());
  /* 107af42c ret  */
  ESPCHK(0x107af3b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f430 @ 0x107af430 (304 bytes, 85 insns) */
void f_107af430(void) {
  FTRACE(0x107af430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107af430 push ebp */
  push32((uint32_t)(EBP));
  /* 107af431 mov ebp, esp */
  EBP = (ESP);
  /* 107af433 push ecx */
  push32((uint32_t)(ECX));
  /* 107af434 cmp dword ptr [0x107cf734], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf734))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107af43b je 0x107af4fc */
  if (C.zf) goto L_107af4fc;
  /* 107af441 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 107af443 push 0x107cb140 */
  push32((uint32_t)(0x107cb140u));
  /* 107af448 push 2 */
  push32((uint32_t)(0x2u));
  /* 107af44a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 107af44c push 1 */
  push32((uint32_t)(0x1u));
  /* 107af44e call 0x107a43c0 */
  push32(0x107af453u); f_107a43c0();
  /* 107af453 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af456 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107af459 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107af45d jne 0x107af469 */
  if (!C.zf) goto L_107af469;
  /* 107af45f mov eax, 1 */
  EAX = (0x1u);
  /* 107af464 jmp 0x107af55c */
  goto L_107af55c;
L_107af469:;
  /* 107af469 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107af46c push eax */
  push32((uint32_t)(EAX));
  /* 107af46d call 0x107af560 */
  push32(0x107af472u); f_107af560();
  /* 107af472 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af475 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107af477 je 0x107af49d */
  if (C.zf) goto L_107af49d;
  /* 107af479 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107af47c push ecx */
  push32((uint32_t)(ECX));
  /* 107af47d call 0x107af7f0 */
  push32(0x107af482u); f_107af7f0();
  /* 107af482 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af485 push 2 */
  push32((uint32_t)(0x2u));
  /* 107af487 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107af48a push edx */
  push32((uint32_t)(EDX));
  /* 107af48b call 0x107a4a40 */
  push32(0x107af490u); f_107a4a40();
  /* 107af490 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af493 mov eax, 1 */
  EAX = (0x1u);
  /* 107af498 jmp 0x107af55c */
  goto L_107af55c;
L_107af49d:;
  /* 107af49d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107af4a0 mov ecx, dword ptr [0x107ced88] */
  ECX = (r32((uint32_t)(0x107ced88)));
  /* 107af4a6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107af4a8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107af4aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107af4ad mov ecx, dword ptr [0x107ced88] */
  ECX = (r32((uint32_t)(0x107ced88)));
  /* 107af4b3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107af4b6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 107af4b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107af4bc mov ecx, dword ptr [0x107ced88] */
  ECX = (r32((uint32_t)(0x107ced88)));
  /* 107af4c2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 107af4c5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 107af4c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107af4cb mov dword ptr [0x107ced88], eax */
  w32((uint32_t)(0x107ced88), (EAX));
  /* 107af4d0 mov ecx, dword ptr [0x107cf76c] */
  ECX = (r32((uint32_t)(0x107cf76c)));
  /* 107af4d6 push ecx */
  push32((uint32_t)(ECX));
  /* 107af4d7 call 0x107af7f0 */
  push32(0x107af4dcu); f_107af7f0();
  /* 107af4dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af4df push 2 */
  push32((uint32_t)(0x2u));
  /* 107af4e1 mov edx, dword ptr [0x107cf76c] */
  EDX = (r32((uint32_t)(0x107cf76c)));
  /* 107af4e7 push edx */
  push32((uint32_t)(EDX));
  /* 107af4e8 call 0x107a4a40 */
  push32(0x107af4edu); f_107a4a40();
  /* 107af4ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af4f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107af4f3 mov dword ptr [0x107cf76c], eax */
  w32((uint32_t)(0x107cf76c), (EAX));
  /* 107af4f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107af4fa jmp 0x107af55c */
  goto L_107af55c;
L_107af4fc:;
  /* 107af4fc mov ecx, dword ptr [0x107ced88] */
  ECX = (r32((uint32_t)(0x107ced88)));
  /* 107af502 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107af504 mov dword ptr [0x107ced58], edx */
  w32((uint32_t)(0x107ced58), (EDX));
  /* 107af50a mov eax, dword ptr [0x107ced88] */
  EAX = (r32((uint32_t)(0x107ced88)));
  /* 107af50f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107af512 mov dword ptr [0x107ced5c], ecx */
  w32((uint32_t)(0x107ced5c), (ECX));
  /* 107af518 mov edx, dword ptr [0x107ced88] */
  EDX = (r32((uint32_t)(0x107ced88)));
  /* 107af51e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 107af521 mov dword ptr [0x107ced60], eax */
  w32((uint32_t)(0x107ced60), (EAX));
  /* 107af526 mov dword ptr [0x107ced88], 0x107ced58 */
  w32((uint32_t)(0x107ced88), (0x107ced58u));
  /* 107af530 mov ecx, dword ptr [0x107cf76c] */
  ECX = (r32((uint32_t)(0x107cf76c)));
  /* 107af536 push ecx */
  push32((uint32_t)(ECX));
  /* 107af537 call 0x107af7f0 */
  push32(0x107af53cu); f_107af7f0();
  /* 107af53c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af53f push 2 */
  push32((uint32_t)(0x2u));
  /* 107af541 mov edx, dword ptr [0x107cf76c] */
  EDX = (r32((uint32_t)(0x107cf76c)));
  /* 107af547 push edx */
  push32((uint32_t)(EDX));
  /* 107af548 call 0x107a4a40 */
  push32(0x107af54du); f_107a4a40();
  /* 107af54d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af550 mov dword ptr [0x107cf76c], 0 */
  w32((uint32_t)(0x107cf76c), (0x0u));
  /* 107af55a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107af55c:;
  /* 107af55c mov esp, ebp */
  ESP = (EBP);
  /* 107af55e pop ebp */
  EBP = (pop32());
  /* 107af55f ret  */
  ESPCHK(0x107af430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f560 @ 0x107af560 (525 bytes, 200 insns) */
void f_107af560(void) {
  FTRACE(0x107af560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107af560 push ebp */
  push32((uint32_t)(EBP));
  /* 107af561 mov ebp, esp */
  EBP = (ESP);
  /* 107af563 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107af566 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107af56d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107af56f mov ax, word ptr [0x107cf78c] */
  AX = (r16((uint32_t)(0x107cf78c)));
  /* 107af575 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107af578 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107af57c jne 0x107af586 */
  if (!C.zf) goto L_107af586;
  /* 107af57e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107af581 jmp 0x107af769 */
  goto L_107af769;
L_107af586:;
  /* 107af586 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af589 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107af58c push ecx */
  push32((uint32_t)(ECX));
  /* 107af58d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 107af58f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107af592 push edx */
  push32((uint32_t)(EDX));
  /* 107af593 push 1 */
  push32((uint32_t)(0x1u));
  /* 107af595 call 0x107b2170 */
  push32(0x107af59au); f_107b2170();
  /* 107af59a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af59d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107af5a0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107af5a2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107af5a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af5a8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107af5ab push edx */
  push32((uint32_t)(EDX));
  /* 107af5ac push 0x14 */
  push32((uint32_t)(0x14u));
  /* 107af5ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107af5b1 push eax */
  push32((uint32_t)(EAX));
  /* 107af5b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 107af5b4 call 0x107b2170 */
  push32(0x107af5b9u); f_107b2170();
  /* 107af5b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af5bc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107af5bf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107af5c1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107af5c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af5c7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107af5ca push edx */
  push32((uint32_t)(EDX));
  /* 107af5cb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 107af5cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107af5d0 push eax */
  push32((uint32_t)(EAX));
  /* 107af5d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 107af5d3 call 0x107b2170 */
  push32(0x107af5d8u); f_107b2170();
  /* 107af5d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af5db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107af5de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107af5e0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107af5e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af5e6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107af5e9 push edx */
  push32((uint32_t)(EDX));
  /* 107af5ea push 0x17 */
  push32((uint32_t)(0x17u));
  /* 107af5ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107af5ef push eax */
  push32((uint32_t)(EAX));
  /* 107af5f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 107af5f2 call 0x107b2170 */
  push32(0x107af5f7u); f_107b2170();
  /* 107af5f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af5fa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107af5fd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107af5ff mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107af602 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af605 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107af608 push edx */
  push32((uint32_t)(EDX));
  /* 107af609 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 107af60b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107af60e push eax */
  push32((uint32_t)(EAX));
  /* 107af60f push 1 */
  push32((uint32_t)(0x1u));
  /* 107af611 call 0x107b2170 */
  push32(0x107af616u); f_107b2170();
  /* 107af616 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af619 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107af61c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107af61e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107af621 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af624 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 107af627 push eax */
  push32((uint32_t)(EAX));
  /* 107af628 call 0x107af770 */
  push32(0x107af62du); f_107af770();
  /* 107af62d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af630 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af633 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107af636 push ecx */
  push32((uint32_t)(ECX));
  /* 107af637 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 107af639 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107af63c push edx */
  push32((uint32_t)(EDX));
  /* 107af63d push 1 */
  push32((uint32_t)(0x1u));
  /* 107af63f call 0x107b2170 */
  push32(0x107af644u); f_107b2170();
  /* 107af644 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af647 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107af64a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107af64c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107af64f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af652 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107af655 push edx */
  push32((uint32_t)(EDX));
  /* 107af656 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 107af658 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107af65b push eax */
  push32((uint32_t)(EAX));
  /* 107af65c push 1 */
  push32((uint32_t)(0x1u));
  /* 107af65e call 0x107b2170 */
  push32(0x107af663u); f_107b2170();
  /* 107af663 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af666 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107af669 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107af66b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107af66e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af671 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107af674 push edx */
  push32((uint32_t)(EDX));
  /* 107af675 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 107af677 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107af67a push eax */
  push32((uint32_t)(EAX));
  /* 107af67b push 0 */
  push32((uint32_t)(0x0u));
  /* 107af67d call 0x107b2170 */
  push32(0x107af682u); f_107b2170();
  /* 107af682 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af685 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107af688 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107af68a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107af68d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af690 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107af693 push edx */
  push32((uint32_t)(EDX));
  /* 107af694 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 107af696 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107af699 push eax */
  push32((uint32_t)(EAX));
  /* 107af69a push 0 */
  push32((uint32_t)(0x0u));
  /* 107af69c call 0x107b2170 */
  push32(0x107af6a1u); f_107b2170();
  /* 107af6a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af6a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107af6a7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107af6a9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107af6ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af6af add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107af6b2 push edx */
  push32((uint32_t)(EDX));
  /* 107af6b3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 107af6b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107af6b8 push eax */
  push32((uint32_t)(EAX));
  /* 107af6b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 107af6bb call 0x107b2170 */
  push32(0x107af6c0u); f_107b2170();
  /* 107af6c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af6c3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107af6c6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107af6c8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107af6cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af6ce add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107af6d1 push edx */
  push32((uint32_t)(EDX));
  /* 107af6d2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 107af6d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107af6d7 push eax */
  push32((uint32_t)(EAX));
  /* 107af6d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 107af6da call 0x107b2170 */
  push32(0x107af6dfu); f_107b2170();
  /* 107af6df add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af6e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107af6e5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107af6e7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107af6ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af6ed add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107af6f0 push edx */
  push32((uint32_t)(EDX));
  /* 107af6f1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 107af6f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107af6f6 push eax */
  push32((uint32_t)(EAX));
  /* 107af6f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107af6f9 call 0x107b2170 */
  push32(0x107af6feu); f_107b2170();
  /* 107af6fe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af701 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107af704 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107af706 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107af709 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af70c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107af70f push edx */
  push32((uint32_t)(EDX));
  /* 107af710 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 107af712 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107af715 push eax */
  push32((uint32_t)(EAX));
  /* 107af716 push 0 */
  push32((uint32_t)(0x0u));
  /* 107af718 call 0x107b2170 */
  push32(0x107af71du); f_107b2170();
  /* 107af71d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af720 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107af723 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107af725 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107af728 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af72b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107af72e push edx */
  push32((uint32_t)(EDX));
  /* 107af72f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 107af731 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107af734 push eax */
  push32((uint32_t)(EAX));
  /* 107af735 push 0 */
  push32((uint32_t)(0x0u));
  /* 107af737 call 0x107b2170 */
  push32(0x107af73cu); f_107b2170();
  /* 107af73c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af73f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107af742 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107af744 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107af747 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af74a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107af74d push edx */
  push32((uint32_t)(EDX));
  /* 107af74e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 107af750 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107af753 push eax */
  push32((uint32_t)(EAX));
  /* 107af754 push 0 */
  push32((uint32_t)(0x0u));
  /* 107af756 call 0x107b2170 */
  push32(0x107af75bu); f_107b2170();
  /* 107af75b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af75e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107af761 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107af763 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107af766 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_107af769:;
  /* 107af769 mov esp, ebp */
  ESP = (EBP);
  /* 107af76b pop ebp */
  EBP = (pop32());
  /* 107af76c ret  */
  ESPCHK(0x107af560u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x107af770 (125 bytes, 49 insns) */
void f_107af770(void) {
  FTRACE(0x107af770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107af770 push ebp */
  push32((uint32_t)(EBP));
  /* 107af771 mov ebp, esp */
  EBP = (ESP);
  /* 107af773 push ecx */
  push32((uint32_t)(ECX));
L_107af774:;
  /* 107af774 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af777 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107af77a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107af77c je 0x107af7e9 */
  if (C.zf) goto L_107af7e9;
  /* 107af77e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af781 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107af784 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107af787 jl 0x107af7ad */
  if ((C.sf!=C.of)) goto L_107af7ad;
  /* 107af789 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af78c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107af78f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107af792 jg 0x107af7ad */
  if ((!C.zf&&C.sf==C.of)) goto L_107af7ad;
  /* 107af794 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af797 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107af79a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107af79d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af7a0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 107af7a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af7a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107af7a8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107af7ab jmp 0x107af7e7 */
  goto L_107af7e7;
L_107af7ad:;
  /* 107af7ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af7b0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107af7b3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107af7b6 jne 0x107af7de */
  if (!C.zf) goto L_107af7de;
  /* 107af7b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af7bb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107af7be:;
  /* 107af7be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107af7c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107af7c4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 107af7c7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 107af7c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107af7cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107af7cf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107af7d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107af7d5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107af7d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107af7da jne 0x107af7be */
  if (!C.zf) goto L_107af7be;
  /* 107af7dc jmp 0x107af7e7 */
  goto L_107af7e7;
L_107af7de:;
  /* 107af7de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af7e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107af7e4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_107af7e7:;
  /* 107af7e7 jmp 0x107af774 */
  goto L_107af774;
L_107af7e9:;
  /* 107af7e9 mov esp, ebp */
  ESP = (EBP);
  /* 107af7eb pop ebp */
  EBP = (pop32());
  /* 107af7ec ret  */
  ESPCHK(0x107af770u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7f0 @ 0x107af7f0 (147 bytes, 52 insns) */
void f_107af7f0(void) {
  FTRACE(0x107af7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107af7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107af7f1 mov ebp, esp */
  EBP = (ESP);
  /* 107af7f3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107af7f7 jne 0x107af7fe */
  if (!C.zf) goto L_107af7fe;
  /* 107af7f9 jmp 0x107af881 */
  goto L_107af881;
L_107af7fe:;
  /* 107af7fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af801 cmp dword ptr [eax + 0xc], 0x107cf7c8 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x107cf7c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107af808 je 0x107af881 */
  if (C.zf) goto L_107af881;
  /* 107af80a push 2 */
  push32((uint32_t)(0x2u));
  /* 107af80c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af80f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107af812 push edx */
  push32((uint32_t)(EDX));
  /* 107af813 call 0x107a4a40 */
  push32(0x107af818u); f_107a4a40();
  /* 107af818 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af81b push 2 */
  push32((uint32_t)(0x2u));
  /* 107af81d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af820 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107af823 push ecx */
  push32((uint32_t)(ECX));
  /* 107af824 call 0x107a4a40 */
  push32(0x107af829u); f_107a4a40();
  /* 107af829 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af82c push 2 */
  push32((uint32_t)(0x2u));
  /* 107af82e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af831 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107af834 push eax */
  push32((uint32_t)(EAX));
  /* 107af835 call 0x107a4a40 */
  push32(0x107af83au); f_107a4a40();
  /* 107af83a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af83d push 2 */
  push32((uint32_t)(0x2u));
  /* 107af83f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af842 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 107af845 push edx */
  push32((uint32_t)(EDX));
  /* 107af846 call 0x107a4a40 */
  push32(0x107af84bu); f_107a4a40();
  /* 107af84b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af84e push 2 */
  push32((uint32_t)(0x2u));
  /* 107af850 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af853 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 107af856 push ecx */
  push32((uint32_t)(ECX));
  /* 107af857 call 0x107a4a40 */
  push32(0x107af85cu); f_107a4a40();
  /* 107af85c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af85f push 2 */
  push32((uint32_t)(0x2u));
  /* 107af861 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af864 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 107af867 push eax */
  push32((uint32_t)(EAX));
  /* 107af868 call 0x107a4a40 */
  push32(0x107af86du); f_107a4a40();
  /* 107af86d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af870 push 2 */
  push32((uint32_t)(0x2u));
  /* 107af872 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107af875 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 107af878 push edx */
  push32((uint32_t)(EDX));
  /* 107af879 call 0x107a4a40 */
  push32(0x107af87eu); f_107a4a40();
  /* 107af87e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107af881:;
  /* 107af881 pop ebp */
  EBP = (pop32());
  /* 107af882 ret  */
  ESPCHK(0x107af7f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f890 @ 0x107af890 (928 bytes, 284 insns) */
void f_107af890(void) {
  FTRACE(0x107af890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107af890 push ebp */
  push32((uint32_t)(EBP));
  /* 107af891 mov ebp, esp */
  EBP = (ESP);
  /* 107af893 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107af896 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 107af89d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 107af8a4 cmp dword ptr [0x107cf730], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf730))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107af8ab je 0x107afbe1 */
  if (C.zf) goto L_107afbe1;
  /* 107af8b1 cmp dword ptr [0x107cf740], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf740))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107af8b8 jne 0x107af8e0 */
  if (!C.zf) goto L_107af8e0;
  /* 107af8ba push 0x107cf740 */
  push32((uint32_t)(0x107cf740u));
  /* 107af8bf push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 107af8c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107af8c6 mov ax, word ptr [0x107cf784] */
  AX = (r16((uint32_t)(0x107cf784)));
  /* 107af8cc push eax */
  push32((uint32_t)(EAX));
  /* 107af8cd push 0 */
  push32((uint32_t)(0x0u));
  /* 107af8cf call 0x107b2170 */
  push32(0x107af8d4u); f_107b2170();
  /* 107af8d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af8d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107af8d9 je 0x107af8e0 */
  if (C.zf) goto L_107af8e0;
  /* 107af8db jmp 0x107afba2 */
  goto L_107afba2;
L_107af8e0:;
  /* 107af8e0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 107af8e2 push 0x107cb14c */
  push32((uint32_t)(0x107cb14cu));
  /* 107af8e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 107af8e9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 107af8ee call 0x107a3fb0 */
  push32(0x107af8f3u); f_107a3fb0();
  /* 107af8f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af8f6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 107af8f9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 107af8fb push 0x107cb14c */
  push32((uint32_t)(0x107cb14cu));
  /* 107af900 push 2 */
  push32((uint32_t)(0x2u));
  /* 107af902 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 107af907 call 0x107a3fb0 */
  push32(0x107af90cu); f_107a3fb0();
  /* 107af90c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af90f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 107af912 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 107af914 push 0x107cb14c */
  push32((uint32_t)(0x107cb14cu));
  /* 107af919 push 2 */
  push32((uint32_t)(0x2u));
  /* 107af91b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 107af920 call 0x107a3fb0 */
  push32(0x107af925u); f_107a3fb0();
  /* 107af925 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af928 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 107af92b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 107af92d push 0x107cb14c */
  push32((uint32_t)(0x107cb14cu));
  /* 107af932 push 2 */
  push32((uint32_t)(0x2u));
  /* 107af934 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 107af939 call 0x107a3fb0 */
  push32(0x107af93eu); f_107a3fb0();
  /* 107af93e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107af941 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 107af944 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107af948 je 0x107af95c */
  if (C.zf) goto L_107af95c;
  /* 107af94a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107af94e je 0x107af95c */
  if (C.zf) goto L_107af95c;
  /* 107af950 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107af954 je 0x107af95c */
  if (C.zf) goto L_107af95c;
  /* 107af956 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107af95a jne 0x107af961 */
  if (!C.zf) goto L_107af961;
L_107af95c:;
  /* 107af95c jmp 0x107afba2 */
  goto L_107afba2;
L_107af961:;
  /* 107af961 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107af964 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 107af967 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 107af96e jmp 0x107af979 */
  goto L_107af979;
L_107af970:;
  /* 107af970 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 107af973 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107af976 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_107af979:;
  /* 107af979 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107af980 jge 0x107af995 */
  if ((C.sf==C.of)) goto L_107af995;
  /* 107af982 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107af985 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 107af988 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 107af98a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107af98d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107af990 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 107af993 jmp 0x107af970 */
  goto L_107af970;
L_107af995:;
  /* 107af995 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 107af998 push eax */
  push32((uint32_t)(EAX));
  /* 107af999 mov ecx, dword ptr [0x107cf740] */
  ECX = (r32((uint32_t)(0x107cf740)));
  /* 107af99f push ecx */
  push32((uint32_t)(ECX));
  /* 107af9a0 call dword ptr [0x107d22d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22d8))), 0x107af9a6u);
  /* 107af9a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107af9a8 jne 0x107af9af */
  if (!C.zf) goto L_107af9af;
  /* 107af9aa jmp 0x107afba2 */
  goto L_107afba2;
L_107af9af:;
  /* 107af9af cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107af9b3 jbe 0x107af9ba */
  if ((C.cf||C.zf)) goto L_107af9ba;
  /* 107af9b5 jmp 0x107afba2 */
  goto L_107afba2;
L_107af9ba:;
  /* 107af9ba mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107af9bd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107af9c3 mov dword ptr [0x107cdea4], edx */
  w32((uint32_t)(0x107cdea4), (EDX));
  /* 107af9c9 cmp dword ptr [0x107cdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x107cdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107af9d0 jle 0x107afa29 */
  if ((C.zf||C.sf!=C.of)) goto L_107afa29;
  /* 107af9d2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 107af9d5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107af9d8 jmp 0x107af9e3 */
  goto L_107af9e3;
L_107af9da:;
  /* 107af9da mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107af9dd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107af9e0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_107af9e3:;
  /* 107af9e3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107af9e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107af9e8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107af9ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107af9ec je 0x107afa29 */
  if (C.zf) goto L_107afa29;
  /* 107af9ee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107af9f1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107af9f3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 107af9f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107af9f8 je 0x107afa29 */
  if (C.zf) goto L_107afa29;
  /* 107af9fa mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107af9fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107af9ff mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107afa01 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 107afa04 jmp 0x107afa0f */
  goto L_107afa0f;
L_107afa06:;
  /* 107afa06 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 107afa09 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107afa0c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_107afa0f:;
  /* 107afa0f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107afa12 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107afa14 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 107afa17 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107afa1a jg 0x107afa27 */
  if ((!C.zf&&C.sf==C.of)) goto L_107afa27;
  /* 107afa1c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107afa1f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107afa22 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 107afa25 jmp 0x107afa06 */
  goto L_107afa06;
L_107afa27:;
  /* 107afa27 jmp 0x107af9da */
  goto L_107af9da;
L_107afa29:;
  /* 107afa29 push 0 */
  push32((uint32_t)(0x0u));
  /* 107afa2b push 0 */
  push32((uint32_t)(0x0u));
  /* 107afa2d push 0 */
  push32((uint32_t)(0x0u));
  /* 107afa2f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107afa32 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107afa35 push eax */
  push32((uint32_t)(EAX));
  /* 107afa36 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 107afa3b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107afa3e push ecx */
  push32((uint32_t)(ECX));
  /* 107afa3f push 1 */
  push32((uint32_t)(0x1u));
  /* 107afa41 call 0x107ac1e0 */
  push32(0x107afa46u); f_107ac1e0();
  /* 107afa46 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107afa49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107afa4b jne 0x107afa52 */
  if (!C.zf) goto L_107afa52;
  /* 107afa4d jmp 0x107afba2 */
  goto L_107afba2;
L_107afa52:;
  /* 107afa52 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107afa55 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 107afa5a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107afa5d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 107afa60 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 107afa67 jmp 0x107afa72 */
  goto L_107afa72;
L_107afa69:;
  /* 107afa69 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107afa6c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107afa6f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_107afa72:;
  /* 107afa72 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107afa79 jge 0x107afa90 */
  if ((C.sf==C.of)) goto L_107afa90;
  /* 107afa7b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107afa7e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 107afa82 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 107afa85 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107afa88 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107afa8b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 107afa8e jmp 0x107afa69 */
  goto L_107afa69;
L_107afa90:;
  /* 107afa90 push 0 */
  push32((uint32_t)(0x0u));
  /* 107afa92 push 0 */
  push32((uint32_t)(0x0u));
  /* 107afa94 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107afa97 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107afa9a push edx */
  push32((uint32_t)(EDX));
  /* 107afa9b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 107afaa0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107afaa3 push eax */
  push32((uint32_t)(EAX));
  /* 107afaa4 push 1 */
  push32((uint32_t)(0x1u));
  /* 107afaa6 call 0x107b2410 */
  push32(0x107afaabu); f_107b2410();
  /* 107afaab add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107afaae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107afab0 jne 0x107afab7 */
  if (!C.zf) goto L_107afab7;
  /* 107afab2 jmp 0x107afba2 */
  goto L_107afba2;
L_107afab7:;
  /* 107afab7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107afaba mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 107afabf cmp dword ptr [0x107cdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x107cdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107afac6 jle 0x107afb23 */
  if ((C.zf||C.sf!=C.of)) goto L_107afb23;
  /* 107afac8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 107afacb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 107aface jmp 0x107afad9 */
  goto L_107afad9;
L_107afad0:;
  /* 107afad0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107afad3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107afad6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_107afad9:;
  /* 107afad9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107afadc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107afade mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107afae0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107afae2 je 0x107afb23 */
  if (C.zf) goto L_107afb23;
  /* 107afae4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107afae7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107afae9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 107afaec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107afaee je 0x107afb23 */
  if (C.zf) goto L_107afb23;
  /* 107afaf0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107afaf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107afaf5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107afaf7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 107afafa jmp 0x107afb05 */
  goto L_107afb05;
L_107afafc:;
  /* 107afafc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107afaff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107afb02 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_107afb05:;
  /* 107afb05 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107afb08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107afb0a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 107afb0d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107afb10 jg 0x107afb21 */
  if ((!C.zf&&C.sf==C.of)) goto L_107afb21;
  /* 107afb12 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107afb15 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107afb18 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 107afb1f jmp 0x107afafc */
  goto L_107afafc;
L_107afb21:;
  /* 107afb21 jmp 0x107afad0 */
  goto L_107afad0;
L_107afb23:;
  /* 107afb23 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107afb26 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107afb29 mov dword ptr [0x107cdc98], eax */
  w32((uint32_t)(0x107cdc98), (EAX));
  /* 107afb2e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107afb31 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107afb34 mov dword ptr [0x107cdc9c], ecx */
  w32((uint32_t)(0x107cdc9c), (ECX));
  /* 107afb3a cmp dword ptr [0x107cf770], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf770))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107afb41 je 0x107afb54 */
  if (C.zf) goto L_107afb54;
  /* 107afb43 push 2 */
  push32((uint32_t)(0x2u));
  /* 107afb45 mov edx, dword ptr [0x107cf770] */
  EDX = (r32((uint32_t)(0x107cf770)));
  /* 107afb4b push edx */
  push32((uint32_t)(EDX));
  /* 107afb4c call 0x107a4a40 */
  push32(0x107afb51u); f_107a4a40();
  /* 107afb51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107afb54:;
  /* 107afb54 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107afb57 mov dword ptr [0x107cf770], eax */
  w32((uint32_t)(0x107cf770), (EAX));
  /* 107afb5c cmp dword ptr [0x107cf774], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf774))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107afb63 je 0x107afb76 */
  if (C.zf) goto L_107afb76;
  /* 107afb65 push 2 */
  push32((uint32_t)(0x2u));
  /* 107afb67 mov ecx, dword ptr [0x107cf774] */
  ECX = (r32((uint32_t)(0x107cf774)));
  /* 107afb6d push ecx */
  push32((uint32_t)(ECX));
  /* 107afb6e call 0x107a4a40 */
  push32(0x107afb73u); f_107a4a40();
  /* 107afb73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107afb76:;
  /* 107afb76 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107afb79 mov dword ptr [0x107cf774], edx */
  w32((uint32_t)(0x107cf774), (EDX));
  /* 107afb7f push 2 */
  push32((uint32_t)(0x2u));
  /* 107afb81 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107afb84 push eax */
  push32((uint32_t)(EAX));
  /* 107afb85 call 0x107a4a40 */
  push32(0x107afb8au); f_107a4a40();
  /* 107afb8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107afb8d push 2 */
  push32((uint32_t)(0x2u));
  /* 107afb8f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107afb92 push ecx */
  push32((uint32_t)(ECX));
  /* 107afb93 call 0x107a4a40 */
  push32(0x107afb98u); f_107a4a40();
  /* 107afb98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107afb9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107afb9d jmp 0x107afc2c */
  goto L_107afc2c;
L_107afba2:;
  /* 107afba2 push 2 */
  push32((uint32_t)(0x2u));
  /* 107afba4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107afba7 push edx */
  push32((uint32_t)(EDX));
  /* 107afba8 call 0x107a4a40 */
  push32(0x107afbadu); f_107a4a40();
  /* 107afbad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107afbb0 push 2 */
  push32((uint32_t)(0x2u));
  /* 107afbb2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107afbb5 push eax */
  push32((uint32_t)(EAX));
  /* 107afbb6 call 0x107a4a40 */
  push32(0x107afbbbu); f_107a4a40();
  /* 107afbbb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107afbbe push 2 */
  push32((uint32_t)(0x2u));
  /* 107afbc0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107afbc3 push ecx */
  push32((uint32_t)(ECX));
  /* 107afbc4 call 0x107a4a40 */
  push32(0x107afbc9u); f_107a4a40();
  /* 107afbc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107afbcc push 2 */
  push32((uint32_t)(0x2u));
  /* 107afbce mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 107afbd1 push edx */
  push32((uint32_t)(EDX));
  /* 107afbd2 call 0x107a4a40 */
  push32(0x107afbd7u); f_107a4a40();
  /* 107afbd7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107afbda mov eax, 1 */
  EAX = (0x1u);
  /* 107afbdf jmp 0x107afc2c */
  goto L_107afc2c;
L_107afbe1:;
  /* 107afbe1 mov dword ptr [0x107cdc98], 0x107cdca2 */
  w32((uint32_t)(0x107cdc98), (0x107cdca2u));
  /* 107afbeb mov dword ptr [0x107cdc9c], 0x107cdca2 */
  w32((uint32_t)(0x107cdc9c), (0x107cdca2u));
  /* 107afbf5 push 2 */
  push32((uint32_t)(0x2u));
  /* 107afbf7 mov eax, dword ptr [0x107cf770] */
  EAX = (r32((uint32_t)(0x107cf770)));
  /* 107afbfc push eax */
  push32((uint32_t)(EAX));
  /* 107afbfd call 0x107a4a40 */
  push32(0x107afc02u); f_107a4a40();
  /* 107afc02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107afc05 push 2 */
  push32((uint32_t)(0x2u));
  /* 107afc07 mov ecx, dword ptr [0x107cf774] */
  ECX = (r32((uint32_t)(0x107cf774)));
  /* 107afc0d push ecx */
  push32((uint32_t)(ECX));
  /* 107afc0e call 0x107a4a40 */
  push32(0x107afc13u); f_107a4a40();
  /* 107afc13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107afc16 mov dword ptr [0x107cf770], 0 */
  w32((uint32_t)(0x107cf770), (0x0u));
  /* 107afc20 mov dword ptr [0x107cf774], 0 */
  w32((uint32_t)(0x107cf774), (0x0u));
  /* 107afc2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107afc2c:;
  /* 107afc2c mov esp, ebp */
  ESP = (EBP);
  /* 107afc2e pop ebp */
  EBP = (pop32());
  /* 107afc2f ret  */
  ESPCHK(0x107af890u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc30 @ 0x107afc30 (7 bytes, 5 insns) */
void f_107afc30(void) {
  FTRACE(0x107afc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107afc30 push ebp */
  push32((uint32_t)(EBP));
  /* 107afc31 mov ebp, esp */
  EBP = (ESP);
  /* 107afc33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107afc35 pop ebp */
  EBP = (pop32());
  /* 107afc36 ret  */
  ESPCHK(0x107afc30u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x107afc40 (129 bytes, 56 insns) */
void f_107afc40(void) {
  FTRACE(0x107afc40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107afc40 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 107afc44 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 107afc48 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 107afc4e jne 0x107afc8c */
  if (!C.zf) goto L_107afc8c;
L_107afc50:;
  /* 107afc50 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107afc52 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107afc54 jne 0x107afc84 */
  if (!C.zf) goto L_107afc84;
  /* 107afc56 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 107afc58 je 0x107afc80 */
  if (C.zf) goto L_107afc80;
  /* 107afc5a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107afc5d jne 0x107afc84 */
  if (!C.zf) goto L_107afc84;
  /* 107afc5f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 107afc61 je 0x107afc80 */
  if (C.zf) goto L_107afc80;
  /* 107afc63 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 107afc66 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107afc69 jne 0x107afc84 */
  if (!C.zf) goto L_107afc84;
  /* 107afc6b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 107afc6d je 0x107afc80 */
  if (C.zf) goto L_107afc80;
  /* 107afc6f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107afc72 jne 0x107afc84 */
  if (!C.zf) goto L_107afc84;
  /* 107afc74 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107afc77 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107afc7a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 107afc7c jne 0x107afc50 */
  if (!C.zf) goto L_107afc50;
  /* 107afc7e mov edi, edi */
  EDI = (EDI);
L_107afc80:;
  /* 107afc80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107afc82 ret  */
  ESPCHK(0x107afc40u, _esp0);
  ESP += 4; return;
  /* 107afc83 nop  */
  /* nop */
L_107afc84:;
  /* 107afc84 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107afc86 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 107afc88 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 107afc89 ret  */
  ESPCHK(0x107afc40u, _esp0);
  ESP += 4; return;
  /* 107afc8a mov edi, edi */
  EDI = (EDI);
L_107afc8c:;
  /* 107afc8c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 107afc92 je 0x107afca8 */
  if (C.zf) goto L_107afca8;
  /* 107afc94 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107afc96 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 107afc97 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107afc99 jne 0x107afc84 */
  if (!C.zf) goto L_107afc84;
  /* 107afc9b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 107afc9c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 107afc9e je 0x107afc80 */
  if (C.zf) goto L_107afc80;
  /* 107afca0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 107afca6 je 0x107afc50 */
  if (C.zf) goto L_107afc50;
L_107afca8:;
  /* 107afca8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 107afcab add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107afcae cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107afcb0 jne 0x107afc84 */
  if (!C.zf) goto L_107afc84;
  /* 107afcb2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 107afcb4 je 0x107afc80 */
  if (C.zf) goto L_107afc80;
  /* 107afcb6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107afcb9 jne 0x107afc84 */
  if (!C.zf) goto L_107afc84;
  /* 107afcbb or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 107afcbd je 0x107afc80 */
  if (C.zf) goto L_107afc80;
  /* 107afcbf add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107afcc2 jmp 0x107afc50 */
  goto L_107afc50;
}

/* FUN_1000fcd0 @ 0x107afcd0 (62 bytes, 35 insns) */
void f_107afcd0(void) {
  FTRACE(0x107afcd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107afcd0 push ebp */
  push32((uint32_t)(EBP));
  /* 107afcd1 mov ebp, esp */
  EBP = (ESP);
  /* 107afcd3 push esi */
  push32((uint32_t)(ESI));
  /* 107afcd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107afcd6 push eax */
  push32((uint32_t)(EAX));
  /* 107afcd7 push eax */
  push32((uint32_t)(EAX));
  /* 107afcd8 push eax */
  push32((uint32_t)(EAX));
  /* 107afcd9 push eax */
  push32((uint32_t)(EAX));
  /* 107afcda push eax */
  push32((uint32_t)(EAX));
  /* 107afcdb push eax */
  push32((uint32_t)(EAX));
  /* 107afcdc push eax */
  push32((uint32_t)(EAX));
  /* 107afcdd push eax */
  push32((uint32_t)(EAX));
  /* 107afcde mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107afce1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_107afce4:;
  /* 107afce4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107afce6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 107afce8 je 0x107afcf1 */
  if (C.zf) goto L_107afcf1;
  /* 107afcea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 107afceb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x107afceb");
  /* 107afcef jmp 0x107afce4 */
  goto L_107afce4;
L_107afcf1:;
  /* 107afcf1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 107afcf4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 107afcf7 nop  */
  /* nop */
L_107afcf8:;
  /* 107afcf8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 107afcf9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107afcfb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 107afcfd je 0x107afd06 */
  if (C.zf) goto L_107afd06;
  /* 107afcff inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 107afd00 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x107afd00");
  /* 107afd04 jae 0x107afcf8 */
  if (!C.cf) goto L_107afcf8;
L_107afd06:;
  /* 107afd06 mov eax, ecx */
  EAX = (ECX);
  /* 107afd08 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107afd0b pop esi */
  ESI = (pop32());
  /* 107afd0c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107afd0d ret  */
  ESPCHK(0x107afcd0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x107afd10 (56 bytes, 31 insns) */
void f_107afd10(void) {
  FTRACE(0x107afd10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107afd10 push ebp */
  push32((uint32_t)(EBP));
  /* 107afd11 mov ebp, esp */
  EBP = (ESP);
  /* 107afd13 push edi */
  push32((uint32_t)(EDI));
  /* 107afd14 push esi */
  push32((uint32_t)(ESI));
  /* 107afd15 push ebx */
  push32((uint32_t)(EBX));
  /* 107afd16 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107afd19 jecxz 0x107afd41 */
  x86_unimpl("jecxz @ 0x107afd19");
  /* 107afd1b mov ebx, ecx */
  EBX = (ECX);
  /* 107afd1d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 107afd20 mov esi, edi */
  ESI = (EDI);
  /* 107afd22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107afd24 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 107afd26 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 107afd28 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107afd2a mov edi, esi */
  EDI = (ESI);
  /* 107afd2c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 107afd2f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 107afd31 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 107afd34 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107afd36 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107afd39 ja 0x107afd3f */
  if ((!C.cf&&!C.zf)) goto L_107afd3f;
  /* 107afd3b je 0x107afd41 */
  if (C.zf) goto L_107afd41;
  /* 107afd3d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 107afd3e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_107afd3f:;
  /* 107afd3f not ecx */
  ECX = (~(ECX));
L_107afd41:;
  /* 107afd41 mov eax, ecx */
  EAX = (ECX);
  /* 107afd43 pop ebx */
  EBX = (pop32());
  /* 107afd44 pop esi */
  ESI = (pop32());
  /* 107afd45 pop edi */
  EDI = (pop32());
  /* 107afd46 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107afd47 ret  */
  ESPCHK(0x107afd10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd50 @ 0x107afd50 (58 bytes, 32 insns) */
void f_107afd50(void) {
  FTRACE(0x107afd50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107afd50 push ebp */
  push32((uint32_t)(EBP));
  /* 107afd51 mov ebp, esp */
  EBP = (ESP);
  /* 107afd53 push esi */
  push32((uint32_t)(ESI));
  /* 107afd54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107afd56 push eax */
  push32((uint32_t)(EAX));
  /* 107afd57 push eax */
  push32((uint32_t)(EAX));
  /* 107afd58 push eax */
  push32((uint32_t)(EAX));
  /* 107afd59 push eax */
  push32((uint32_t)(EAX));
  /* 107afd5a push eax */
  push32((uint32_t)(EAX));
  /* 107afd5b push eax */
  push32((uint32_t)(EAX));
  /* 107afd5c push eax */
  push32((uint32_t)(EAX));
  /* 107afd5d push eax */
  push32((uint32_t)(EAX));
  /* 107afd5e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107afd61 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_107afd64:;
  /* 107afd64 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107afd66 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 107afd68 je 0x107afd71 */
  if (C.zf) goto L_107afd71;
  /* 107afd6a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 107afd6b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x107afd6b");
  /* 107afd6f jmp 0x107afd64 */
  goto L_107afd64;
L_107afd71:;
  /* 107afd71 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_107afd74:;
  /* 107afd74 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107afd76 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 107afd78 je 0x107afd84 */
  if (C.zf) goto L_107afd84;
  /* 107afd7a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 107afd7b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x107afd7b");
  /* 107afd7f jae 0x107afd74 */
  if (!C.cf) goto L_107afd74;
  /* 107afd81 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_107afd84:;
  /* 107afd84 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107afd87 pop esi */
  ESI = (pop32());
  /* 107afd88 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107afd89 ret  */
  ESPCHK(0x107afd50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd90 @ 0x107afd90 (512 bytes, 147 insns) */
void f_107afd90(void) {
  FTRACE(0x107afd90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107afd90 push ebp */
  push32((uint32_t)(EBP));
  /* 107afd91 mov ebp, esp */
  EBP = (ESP);
  /* 107afd93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107afd96 cmp dword ptr [0x107cf7bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf7bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107afd9d jne 0x107afdc2 */
  if (!C.zf) goto L_107afdc2;
  /* 107afd9f call 0x107b0860 */
  push32(0x107afda4u); f_107b0860();
  /* 107afda4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107afda6 je 0x107afdb2 */
  if (C.zf) goto L_107afdb2;
  /* 107afda8 mov eax, dword ptr [0x107d229c] */
  EAX = (r32((uint32_t)(0x107d229c)));
  /* 107afdad mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107afdb0 jmp 0x107afdb9 */
  goto L_107afdb9;
L_107afdb2:;
  /* 107afdb2 mov dword ptr [ebp - 8], 0x107b08b0 */
  w32((uint32_t)(EBP + -0x8), (0x107b08b0u));
L_107afdb9:;
  /* 107afdb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107afdbc mov dword ptr [0x107cf7bc], ecx */
  w32((uint32_t)(0x107cf7bc), (ECX));
L_107afdc2:;
  /* 107afdc2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107afdc6 jne 0x107afdd2 */
  if (!C.zf) goto L_107afdd2;
  /* 107afdc8 call 0x107b06b0 */
  push32(0x107afdcdu); f_107b06b0();
  /* 107afdcd jmp 0x107afe9e */
  goto L_107afe9e;
L_107afdd2:;
  /* 107afdd2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107afdd5 mov dword ptr [0x107cf7ac], edx */
  w32((uint32_t)(0x107cf7ac), (EDX));
  /* 107afddb cmp dword ptr [0x107cf7ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf7ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107afde2 je 0x107afe04 */
  if (C.zf) goto L_107afe04;
  /* 107afde4 mov eax, dword ptr [0x107cf7ac] */
  EAX = (r32((uint32_t)(0x107cf7ac)));
  /* 107afde9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107afdec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107afdee je 0x107afe04 */
  if (C.zf) goto L_107afe04;
  /* 107afdf0 push 0x107cf7ac */
  push32((uint32_t)(0x107cf7acu));
  /* 107afdf5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 107afdf7 push 0x107cea90 */
  push32((uint32_t)(0x107cea90u));
  /* 107afdfc call 0x107aff90 */
  push32(0x107afe01u); f_107aff90();
  /* 107afe01 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107afe04:;
  /* 107afe04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107afe07 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107afe0a mov dword ptr [0x107cf7b0], edx */
  w32((uint32_t)(0x107cf7b0), (EDX));
  /* 107afe10 cmp dword ptr [0x107cf7b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf7b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107afe17 je 0x107afe39 */
  if (C.zf) goto L_107afe39;
  /* 107afe19 mov eax, dword ptr [0x107cf7b0] */
  EAX = (r32((uint32_t)(0x107cf7b0)));
  /* 107afe1e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107afe21 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107afe23 je 0x107afe39 */
  if (C.zf) goto L_107afe39;
  /* 107afe25 push 0x107cf7b0 */
  push32((uint32_t)(0x107cf7b0u));
  /* 107afe2a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 107afe2c push 0x107ce9d8 */
  push32((uint32_t)(0x107ce9d8u));
  /* 107afe31 call 0x107aff90 */
  push32(0x107afe36u); f_107aff90();
  /* 107afe36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107afe39:;
  /* 107afe39 mov dword ptr [0x107cf7b4], 0 */
  w32((uint32_t)(0x107cf7b4), (0x0u));
  /* 107afe43 cmp dword ptr [0x107cf7ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf7ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107afe4a je 0x107afe7d */
  if (C.zf) goto L_107afe7d;
  /* 107afe4c mov edx, dword ptr [0x107cf7ac] */
  EDX = (r32((uint32_t)(0x107cf7ac)));
  /* 107afe52 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107afe55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107afe57 je 0x107afe7d */
  if (C.zf) goto L_107afe7d;
  /* 107afe59 cmp dword ptr [0x107cf7b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf7b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107afe60 je 0x107afe76 */
  if (C.zf) goto L_107afe76;
  /* 107afe62 mov ecx, dword ptr [0x107cf7b0] */
  ECX = (r32((uint32_t)(0x107cf7b0)));
  /* 107afe68 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107afe6b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107afe6d je 0x107afe76 */
  if (C.zf) goto L_107afe76;
  /* 107afe6f call 0x107b0020 */
  push32(0x107afe74u); f_107b0020();
  /* 107afe74 jmp 0x107afe7b */
  goto L_107afe7b;
L_107afe76:;
  /* 107afe76 call 0x107b0410 */
  push32(0x107afe7bu); f_107b0410();
L_107afe7b:;
  /* 107afe7b jmp 0x107afe9e */
  goto L_107afe9e;
L_107afe7d:;
  /* 107afe7d cmp dword ptr [0x107cf7b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf7b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107afe84 je 0x107afe99 */
  if (C.zf) goto L_107afe99;
  /* 107afe86 mov eax, dword ptr [0x107cf7b0] */
  EAX = (r32((uint32_t)(0x107cf7b0)));
  /* 107afe8b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107afe8e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107afe90 je 0x107afe99 */
  if (C.zf) goto L_107afe99;
  /* 107afe92 call 0x107b05b0 */
  push32(0x107afe97u); f_107b05b0();
  /* 107afe97 jmp 0x107afe9e */
  goto L_107afe9e;
L_107afe99:;
  /* 107afe99 call 0x107b06b0 */
  push32(0x107afe9eu); f_107b06b0();
L_107afe9e:;
  /* 107afe9e cmp dword ptr [0x107cf7b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf7b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107afea5 jne 0x107afeae */
  if (!C.zf) goto L_107afeae;
  /* 107afea7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107afea9 jmp 0x107aff8c */
  goto L_107aff8c;
L_107afeae:;
  /* 107afeae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107afeb1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107afeb7 push edx */
  push32((uint32_t)(EDX));
  /* 107afeb8 call 0x107b06e0 */
  push32(0x107afebdu); f_107b06e0();
  /* 107afebd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107afec0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107afec3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107afec7 je 0x107afedc */
  if (C.zf) goto L_107afedc;
  /* 107afec9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107afecc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107afed1 push eax */
  push32((uint32_t)(EAX));
  /* 107afed2 call dword ptr [0x107d22a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22a0))), 0x107afed8u);
  /* 107afed8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107afeda jne 0x107afee3 */
  if (!C.zf) goto L_107afee3;
L_107afedc:;
  /* 107afedc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107afede jmp 0x107aff8c */
  goto L_107aff8c;
L_107afee3:;
  /* 107afee3 push 1 */
  push32((uint32_t)(0x1u));
  /* 107afee5 mov ecx, dword ptr [0x107cf79c] */
  ECX = (r32((uint32_t)(0x107cf79c)));
  /* 107afeeb push ecx */
  push32((uint32_t)(ECX));
  /* 107afeec call dword ptr [0x107d22a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22a4))), 0x107afef2u);
  /* 107afef2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107afef4 jne 0x107afefd */
  if (!C.zf) goto L_107afefd;
  /* 107afef6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107afef8 jmp 0x107aff8c */
  goto L_107aff8c;
L_107afefd:;
  /* 107afefd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aff01 je 0x107aff28 */
  if (C.zf) goto L_107aff28;
  /* 107aff03 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107aff06 mov ax, word ptr [0x107cf79c] */
  AX = (r16((uint32_t)(0x107cf79c)));
  /* 107aff0c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 107aff0f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107aff12 mov dx, word ptr [0x107cf7b8] */
  DX = (r16((uint32_t)(0x107cf7b8)));
  /* 107aff19 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 107aff1d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107aff20 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 107aff24 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_107aff28:;
  /* 107aff28 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107aff2c je 0x107aff87 */
  if (C.zf) goto L_107aff87;
  /* 107aff2e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 107aff30 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107aff33 push edx */
  push32((uint32_t)(EDX));
  /* 107aff34 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 107aff39 mov eax, dword ptr [0x107cf79c] */
  EAX = (r32((uint32_t)(0x107cf79c)));
  /* 107aff3e push eax */
  push32((uint32_t)(EAX));
  /* 107aff3f call dword ptr [0x107cf7bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107cf7bc))), 0x107aff45u);
  /* 107aff45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107aff47 jne 0x107aff4d */
  if (!C.zf) goto L_107aff4d;
  /* 107aff49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107aff4b jmp 0x107aff8c */
  goto L_107aff8c;
L_107aff4d:;
  /* 107aff4d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 107aff4f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107aff52 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aff55 push ecx */
  push32((uint32_t)(ECX));
  /* 107aff56 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 107aff5b mov edx, dword ptr [0x107cf7b8] */
  EDX = (r32((uint32_t)(0x107cf7b8)));
  /* 107aff61 push edx */
  push32((uint32_t)(EDX));
  /* 107aff62 call dword ptr [0x107cf7bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107cf7bc))), 0x107aff68u);
  /* 107aff68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107aff6a jne 0x107aff70 */
  if (!C.zf) goto L_107aff70;
  /* 107aff6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107aff6e jmp 0x107aff8c */
  goto L_107aff8c;
L_107aff70:;
  /* 107aff70 push 0xa */
  push32((uint32_t)(0xau));
  /* 107aff72 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107aff75 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107aff7a push eax */
  push32((uint32_t)(EAX));
  /* 107aff7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107aff7e push ecx */
  push32((uint32_t)(ECX));
  /* 107aff7f call 0x107a6af0 */
  push32(0x107aff84u); f_107a6af0();
  /* 107aff84 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107aff87:;
  /* 107aff87 mov eax, 1 */
  EAX = (0x1u);
L_107aff8c:;
  /* 107aff8c mov esp, ebp */
  ESP = (EBP);
  /* 107aff8e pop ebp */
  EBP = (pop32());
  /* 107aff8f ret  */
  ESPCHK(0x107afd90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff90 @ 0x107aff90 (130 bytes, 47 insns) */
void f_107aff90(void) {
  FTRACE(0x107aff90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107aff90 push ebp */
  push32((uint32_t)(EBP));
  /* 107aff91 mov ebp, esp */
  EBP = (ESP);
  /* 107aff93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107aff96 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 107aff9d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_107affa4:;
  /* 107affa4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107affa7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107affaa jg 0x107b000e */
  if ((!C.zf&&C.sf==C.of)) goto L_107b000e;
  /* 107affac cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107affb0 je 0x107b000e */
  if (C.zf) goto L_107b000e;
  /* 107affb2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107affb5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107affb8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107affb9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107affbb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 107affbd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107affc0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107affc3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107affc6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 107affc9 push eax */
  push32((uint32_t)(EAX));
  /* 107affca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107affcd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107affcf push edx */
  push32((uint32_t)(EDX));
  /* 107affd0 call 0x107b2680 */
  push32(0x107affd5u); f_107b2680();
  /* 107affd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107affd8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107affdb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107affdf jne 0x107afff2 */
  if (!C.zf) goto L_107afff2;
  /* 107affe1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107affe4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107affe7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 107affeb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107affee mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107afff0 jmp 0x107b000c */
  goto L_107b000c;
L_107afff2:;
  /* 107afff2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107afff6 jge 0x107b0003 */
  if ((C.sf==C.of)) goto L_107b0003;
  /* 107afff8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107afffb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107afffe mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 107b0001 jmp 0x107b000c */
  goto L_107b000c;
L_107b0003:;
  /* 107b0003 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b0006 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0009 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_107b000c:;
  /* 107b000c jmp 0x107affa4 */
  goto L_107affa4;
L_107b000e:;
  /* 107b000e mov esp, ebp */
  ESP = (EBP);
  /* 107b0010 pop ebp */
  EBP = (pop32());
  /* 107b0011 ret  */
  ESPCHK(0x107aff90u, _esp0);
  ESP += 4; return;
}

/* FUN_10010020 @ 0x107b0020 (186 bytes, 50 insns) */
void f_107b0020(void) {
  FTRACE(0x107b0020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b0020 push ebp */
  push32((uint32_t)(EBP));
  /* 107b0021 mov ebp, esp */
  EBP = (ESP);
  /* 107b0023 push ecx */
  push32((uint32_t)(ECX));
  /* 107b0024 mov eax, dword ptr [0x107cf7ac] */
  EAX = (r32((uint32_t)(0x107cf7ac)));
  /* 107b0029 push eax */
  push32((uint32_t)(EAX));
  /* 107b002a call 0x107a6de0 */
  push32(0x107b002fu); f_107a6de0();
  /* 107b002f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0032 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107b0034 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0037 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 107b003a mov dword ptr [0x107cf7a8], ecx */
  w32((uint32_t)(0x107cf7a8), (ECX));
  /* 107b0040 mov edx, dword ptr [0x107cf7b0] */
  EDX = (r32((uint32_t)(0x107cf7b0)));
  /* 107b0046 push edx */
  push32((uint32_t)(EDX));
  /* 107b0047 call 0x107a6de0 */
  push32(0x107b004cu); f_107a6de0();
  /* 107b004c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b004f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107b0051 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0054 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 107b0057 mov dword ptr [0x107cf7a0], ecx */
  w32((uint32_t)(0x107cf7a0), (ECX));
  /* 107b005d mov dword ptr [0x107cf79c], 0 */
  w32((uint32_t)(0x107cf79c), (0x0u));
  /* 107b0067 cmp dword ptr [0x107cf7a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf7a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b006e je 0x107b0079 */
  if (C.zf) goto L_107b0079;
  /* 107b0070 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 107b0077 jmp 0x107b008b */
  goto L_107b008b;
L_107b0079:;
  /* 107b0079 mov edx, dword ptr [0x107cf7ac] */
  EDX = (r32((uint32_t)(0x107cf7ac)));
  /* 107b007f push edx */
  push32((uint32_t)(EDX));
  /* 107b0080 call 0x107b0ac0 */
  push32(0x107b0085u); f_107b0ac0();
  /* 107b0085 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0088 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107b008b:;
  /* 107b008b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b008e mov dword ptr [0x107cf7a4], eax */
  w32((uint32_t)(0x107cf7a4), (EAX));
  /* 107b0093 push 1 */
  push32((uint32_t)(0x1u));
  /* 107b0095 push 0x107b00e0 */
  push32((uint32_t)(0x107b00e0u));
  /* 107b009a call dword ptr [0x107d2298] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2298))), 0x107b00a0u);
  /* 107b00a0 mov ecx, dword ptr [0x107cf7b4] */
  ECX = (r32((uint32_t)(0x107cf7b4)));
  /* 107b00a6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 107b00ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107b00ae je 0x107b00cc */
  if (C.zf) goto L_107b00cc;
  /* 107b00b0 mov edx, dword ptr [0x107cf7b4] */
  EDX = (r32((uint32_t)(0x107cf7b4)));
  /* 107b00b6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 107b00bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107b00be je 0x107b00cc */
  if (C.zf) goto L_107b00cc;
  /* 107b00c0 mov eax, dword ptr [0x107cf7b4] */
  EAX = (r32((uint32_t)(0x107cf7b4)));
  /* 107b00c5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 107b00c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b00ca jne 0x107b00d6 */
  if (!C.zf) goto L_107b00d6;
L_107b00cc:;
  /* 107b00cc mov dword ptr [0x107cf7b4], 0 */
  w32((uint32_t)(0x107cf7b4), (0x0u));
L_107b00d6:;
  /* 107b00d6 mov esp, ebp */
  ESP = (EBP);
  /* 107b00d8 pop ebp */
  EBP = (pop32());
  /* 107b00d9 ret  */
  ESPCHK(0x107b0020u, _esp0);
  ESP += 4; return;
}

/* FUN_100100e0 @ 0x107b00e0 (804 bytes, 220 insns) */
void f_107b00e0(void) {
  FTRACE(0x107b00e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b00e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107b00e1 mov ebp, esp */
  EBP = (ESP);
  /* 107b00e3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b00e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b00e9 push eax */
  push32((uint32_t)(EAX));
  /* 107b00ea call 0x107b0a40 */
  push32(0x107b00efu); f_107b0a40();
  /* 107b00ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b00f2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 107b00f5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 107b00f7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 107b00fa push ecx */
  push32((uint32_t)(ECX));
  /* 107b00fb mov edx, dword ptr [0x107cf7a0] */
  EDX = (r32((uint32_t)(0x107cf7a0)));
  /* 107b0101 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 107b0103 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b0105 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 107b010b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0111 push edx */
  push32((uint32_t)(EDX));
  /* 107b0112 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107b0115 push eax */
  push32((uint32_t)(EAX));
  /* 107b0116 call dword ptr [0x107cf7bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107cf7bc))), 0x107b011cu);
  /* 107b011c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b011e jne 0x107b0134 */
  if (!C.zf) goto L_107b0134;
  /* 107b0120 mov dword ptr [0x107cf7b4], 0 */
  w32((uint32_t)(0x107cf7b4), (0x0u));
  /* 107b012a mov eax, 1 */
  EAX = (0x1u);
  /* 107b012f jmp 0x107b03fe */
  goto L_107b03fe;
L_107b0134:;
  /* 107b0134 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 107b0137 push ecx */
  push32((uint32_t)(ECX));
  /* 107b0138 mov edx, dword ptr [0x107cf7b0] */
  EDX = (r32((uint32_t)(0x107cf7b0)));
  /* 107b013e push edx */
  push32((uint32_t)(EDX));
  /* 107b013f call 0x107b2680 */
  push32(0x107b0144u); f_107b2680();
  /* 107b0144 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0147 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b0149 jne 0x107b026f */
  if (!C.zf) goto L_107b026f;
  /* 107b014f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 107b0151 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 107b0154 push eax */
  push32((uint32_t)(EAX));
  /* 107b0155 mov ecx, dword ptr [0x107cf7a8] */
  ECX = (r32((uint32_t)(0x107cf7a8)));
  /* 107b015b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 107b015d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b015f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 107b0165 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b016b push ecx */
  push32((uint32_t)(ECX));
  /* 107b016c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107b016f push edx */
  push32((uint32_t)(EDX));
  /* 107b0170 call dword ptr [0x107cf7bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107cf7bc))), 0x107b0176u);
  /* 107b0176 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b0178 jne 0x107b018e */
  if (!C.zf) goto L_107b018e;
  /* 107b017a mov dword ptr [0x107cf7b4], 0 */
  w32((uint32_t)(0x107cf7b4), (0x0u));
  /* 107b0184 mov eax, 1 */
  EAX = (0x1u);
  /* 107b0189 jmp 0x107b03fe */
  goto L_107b03fe;
L_107b018e:;
  /* 107b018e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 107b0191 push eax */
  push32((uint32_t)(EAX));
  /* 107b0192 mov ecx, dword ptr [0x107cf7ac] */
  ECX = (r32((uint32_t)(0x107cf7ac)));
  /* 107b0198 push ecx */
  push32((uint32_t)(ECX));
  /* 107b0199 call 0x107b2680 */
  push32(0x107b019eu); f_107b2680();
  /* 107b019e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b01a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b01a3 jne 0x107b01d0 */
  if (!C.zf) goto L_107b01d0;
  /* 107b01a5 mov edx, dword ptr [0x107cf7b4] */
  EDX = (r32((uint32_t)(0x107cf7b4)));
  /* 107b01ab or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 107b01b1 mov dword ptr [0x107cf7b4], edx */
  w32((uint32_t)(0x107cf7b4), (EDX));
  /* 107b01b7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107b01ba mov dword ptr [0x107cf7b8], eax */
  w32((uint32_t)(0x107cf7b8), (EAX));
  /* 107b01bf mov ecx, dword ptr [0x107cf7b8] */
  ECX = (r32((uint32_t)(0x107cf7b8)));
  /* 107b01c5 mov dword ptr [0x107cf79c], ecx */
  w32((uint32_t)(0x107cf79c), (ECX));
  /* 107b01cb jmp 0x107b026f */
  goto L_107b026f;
L_107b01d0:;
  /* 107b01d0 mov edx, dword ptr [0x107cf7b4] */
  EDX = (r32((uint32_t)(0x107cf7b4)));
  /* 107b01d6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 107b01d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107b01db jne 0x107b026f */
  if (!C.zf) goto L_107b026f;
  /* 107b01e1 cmp dword ptr [0x107cf7a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf7a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b01e8 je 0x107b023d */
  if (C.zf) goto L_107b023d;
  /* 107b01ea mov eax, dword ptr [0x107cf7a4] */
  EAX = (r32((uint32_t)(0x107cf7a4)));
  /* 107b01ef push eax */
  push32((uint32_t)(EAX));
  /* 107b01f0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 107b01f3 push ecx */
  push32((uint32_t)(ECX));
  /* 107b01f4 mov edx, dword ptr [0x107cf7ac] */
  EDX = (r32((uint32_t)(0x107cf7ac)));
  /* 107b01fa push edx */
  push32((uint32_t)(EDX));
  /* 107b01fb call 0x107b2750 */
  push32(0x107b0200u); f_107b2750();
  /* 107b0200 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0203 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b0205 jne 0x107b023d */
  if (!C.zf) goto L_107b023d;
  /* 107b0207 mov eax, dword ptr [0x107cf7b4] */
  EAX = (r32((uint32_t)(0x107cf7b4)));
  /* 107b020c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 107b020e mov dword ptr [0x107cf7b4], eax */
  w32((uint32_t)(0x107cf7b4), (EAX));
  /* 107b0213 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107b0216 mov dword ptr [0x107cf7b8], ecx */
  w32((uint32_t)(0x107cf7b8), (ECX));
  /* 107b021c mov edx, dword ptr [0x107cf7ac] */
  EDX = (r32((uint32_t)(0x107cf7ac)));
  /* 107b0222 push edx */
  push32((uint32_t)(EDX));
  /* 107b0223 call 0x107a6de0 */
  push32(0x107b0228u); f_107a6de0();
  /* 107b0228 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b022b cmp eax, dword ptr [0x107cf7a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x107cf7a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0231 jne 0x107b023b */
  if (!C.zf) goto L_107b023b;
  /* 107b0233 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107b0236 mov dword ptr [0x107cf79c], eax */
  w32((uint32_t)(0x107cf79c), (EAX));
L_107b023b:;
  /* 107b023b jmp 0x107b026f */
  goto L_107b026f;
L_107b023d:;
  /* 107b023d mov ecx, dword ptr [0x107cf7b4] */
  ECX = (r32((uint32_t)(0x107cf7b4)));
  /* 107b0243 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 107b0246 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107b0248 jne 0x107b026f */
  if (!C.zf) goto L_107b026f;
  /* 107b024a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107b024d push edx */
  push32((uint32_t)(EDX));
  /* 107b024e call 0x107b0780 */
  push32(0x107b0253u); f_107b0780();
  /* 107b0253 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0256 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b0258 je 0x107b026f */
  if (C.zf) goto L_107b026f;
  /* 107b025a mov eax, dword ptr [0x107cf7b4] */
  EAX = (r32((uint32_t)(0x107cf7b4)));
  /* 107b025f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 107b0261 mov dword ptr [0x107cf7b4], eax */
  w32((uint32_t)(0x107cf7b4), (EAX));
  /* 107b0266 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107b0269 mov dword ptr [0x107cf7b8], ecx */
  w32((uint32_t)(0x107cf7b8), (ECX));
L_107b026f:;
  /* 107b026f mov edx, dword ptr [0x107cf7b4] */
  EDX = (r32((uint32_t)(0x107cf7b4)));
  /* 107b0275 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 107b027b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0281 je 0x107b03f1 */
  if (C.zf) goto L_107b03f1;
  /* 107b0287 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 107b0289 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 107b028c push eax */
  push32((uint32_t)(EAX));
  /* 107b028d mov ecx, dword ptr [0x107cf7a8] */
  ECX = (r32((uint32_t)(0x107cf7a8)));
  /* 107b0293 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 107b0295 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b0297 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 107b029d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b02a3 push ecx */
  push32((uint32_t)(ECX));
  /* 107b02a4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107b02a7 push edx */
  push32((uint32_t)(EDX));
  /* 107b02a8 call dword ptr [0x107cf7bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107cf7bc))), 0x107b02aeu);
  /* 107b02ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b02b0 jne 0x107b02c6 */
  if (!C.zf) goto L_107b02c6;
  /* 107b02b2 mov dword ptr [0x107cf7b4], 0 */
  w32((uint32_t)(0x107cf7b4), (0x0u));
  /* 107b02bc mov eax, 1 */
  EAX = (0x1u);
  /* 107b02c1 jmp 0x107b03fe */
  goto L_107b03fe;
L_107b02c6:;
  /* 107b02c6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 107b02c9 push eax */
  push32((uint32_t)(EAX));
  /* 107b02ca mov ecx, dword ptr [0x107cf7ac] */
  ECX = (r32((uint32_t)(0x107cf7ac)));
  /* 107b02d0 push ecx */
  push32((uint32_t)(ECX));
  /* 107b02d1 call 0x107b2680 */
  push32(0x107b02d6u); f_107b2680();
  /* 107b02d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b02d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b02db jne 0x107b0390 */
  if (!C.zf) goto L_107b0390;
  /* 107b02e1 mov edx, dword ptr [0x107cf7b4] */
  EDX = (r32((uint32_t)(0x107cf7b4)));
  /* 107b02e7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 107b02ea mov dword ptr [0x107cf7b4], edx */
  w32((uint32_t)(0x107cf7b4), (EDX));
  /* 107b02f0 cmp dword ptr [0x107cf7a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf7a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b02f7 je 0x107b031a */
  if (C.zf) goto L_107b031a;
  /* 107b02f9 mov eax, dword ptr [0x107cf7b4] */
  EAX = (r32((uint32_t)(0x107cf7b4)));
  /* 107b02fe or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 107b0301 mov dword ptr [0x107cf7b4], eax */
  w32((uint32_t)(0x107cf7b4), (EAX));
  /* 107b0306 cmp dword ptr [0x107cf79c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf79c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b030d jne 0x107b0318 */
  if (!C.zf) goto L_107b0318;
  /* 107b030f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107b0312 mov dword ptr [0x107cf79c], ecx */
  w32((uint32_t)(0x107cf79c), (ECX));
L_107b0318:;
  /* 107b0318 jmp 0x107b038e */
  goto L_107b038e;
L_107b031a:;
  /* 107b031a cmp dword ptr [0x107cf7a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf7a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0321 je 0x107b036f */
  if (C.zf) goto L_107b036f;
  /* 107b0323 mov edx, dword ptr [0x107cf7ac] */
  EDX = (r32((uint32_t)(0x107cf7ac)));
  /* 107b0329 push edx */
  push32((uint32_t)(EDX));
  /* 107b032a call 0x107a6de0 */
  push32(0x107b032fu); f_107a6de0();
  /* 107b032f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0332 cmp eax, dword ptr [0x107cf7a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x107cf7a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0338 jne 0x107b036f */
  if (!C.zf) goto L_107b036f;
  /* 107b033a push 1 */
  push32((uint32_t)(0x1u));
  /* 107b033c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107b033f push eax */
  push32((uint32_t)(EAX));
  /* 107b0340 call 0x107b07d0 */
  push32(0x107b0345u); f_107b07d0();
  /* 107b0345 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0348 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b034a je 0x107b036d */
  if (C.zf) goto L_107b036d;
  /* 107b034c mov ecx, dword ptr [0x107cf7b4] */
  ECX = (r32((uint32_t)(0x107cf7b4)));
  /* 107b0352 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 107b0355 mov dword ptr [0x107cf7b4], ecx */
  w32((uint32_t)(0x107cf7b4), (ECX));
  /* 107b035b cmp dword ptr [0x107cf79c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf79c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0362 jne 0x107b036d */
  if (!C.zf) goto L_107b036d;
  /* 107b0364 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107b0367 mov dword ptr [0x107cf79c], edx */
  w32((uint32_t)(0x107cf79c), (EDX));
L_107b036d:;
  /* 107b036d jmp 0x107b038e */
  goto L_107b038e;
L_107b036f:;
  /* 107b036f mov eax, dword ptr [0x107cf7b4] */
  EAX = (r32((uint32_t)(0x107cf7b4)));
  /* 107b0374 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 107b0377 mov dword ptr [0x107cf7b4], eax */
  w32((uint32_t)(0x107cf7b4), (EAX));
  /* 107b037c cmp dword ptr [0x107cf79c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf79c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0383 jne 0x107b038e */
  if (!C.zf) goto L_107b038e;
  /* 107b0385 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107b0388 mov dword ptr [0x107cf79c], ecx */
  w32((uint32_t)(0x107cf79c), (ECX));
L_107b038e:;
  /* 107b038e jmp 0x107b03f1 */
  goto L_107b03f1;
L_107b0390:;
  /* 107b0390 cmp dword ptr [0x107cf7a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf7a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0397 jne 0x107b03f1 */
  if (!C.zf) goto L_107b03f1;
  /* 107b0399 cmp dword ptr [0x107cf7a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf7a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b03a0 je 0x107b03f1 */
  if (C.zf) goto L_107b03f1;
  /* 107b03a2 mov edx, dword ptr [0x107cf7a4] */
  EDX = (r32((uint32_t)(0x107cf7a4)));
  /* 107b03a8 push edx */
  push32((uint32_t)(EDX));
  /* 107b03a9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 107b03ac push eax */
  push32((uint32_t)(EAX));
  /* 107b03ad mov ecx, dword ptr [0x107cf7ac] */
  ECX = (r32((uint32_t)(0x107cf7ac)));
  /* 107b03b3 push ecx */
  push32((uint32_t)(ECX));
  /* 107b03b4 call 0x107b2750 */
  push32(0x107b03b9u); f_107b2750();
  /* 107b03b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b03bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b03be jne 0x107b03f1 */
  if (!C.zf) goto L_107b03f1;
  /* 107b03c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b03c2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107b03c5 push edx */
  push32((uint32_t)(EDX));
  /* 107b03c6 call 0x107b07d0 */
  push32(0x107b03cbu); f_107b07d0();
  /* 107b03cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b03ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b03d0 je 0x107b03f1 */
  if (C.zf) goto L_107b03f1;
  /* 107b03d2 mov eax, dword ptr [0x107cf7b4] */
  EAX = (r32((uint32_t)(0x107cf7b4)));
  /* 107b03d7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 107b03da mov dword ptr [0x107cf7b4], eax */
  w32((uint32_t)(0x107cf7b4), (EAX));
  /* 107b03df cmp dword ptr [0x107cf79c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf79c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b03e6 jne 0x107b03f1 */
  if (!C.zf) goto L_107b03f1;
  /* 107b03e8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107b03eb mov dword ptr [0x107cf79c], ecx */
  w32((uint32_t)(0x107cf79c), (ECX));
L_107b03f1:;
  /* 107b03f1 mov eax, dword ptr [0x107cf7b4] */
  EAX = (r32((uint32_t)(0x107cf7b4)));
  /* 107b03f6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 107b03f9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 107b03fb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b03fd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_107b03fe:;
  /* 107b03fe mov esp, ebp */
  ESP = (EBP);
  /* 107b0400 pop ebp */
  EBP = (pop32());
  /* 107b0401 ret 4 */
  ESPCHK(0x107b00e0u, _esp0);
  ESP += 8; return;
}

/* FUN_10010410 @ 0x107b0410 (116 bytes, 33 insns) */
void f_107b0410(void) {
  FTRACE(0x107b0410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b0410 push ebp */
  push32((uint32_t)(EBP));
  /* 107b0411 mov ebp, esp */
  EBP = (ESP);
  /* 107b0413 push ecx */
  push32((uint32_t)(ECX));
  /* 107b0414 mov eax, dword ptr [0x107cf7ac] */
  EAX = (r32((uint32_t)(0x107cf7ac)));
  /* 107b0419 push eax */
  push32((uint32_t)(EAX));
  /* 107b041a call 0x107a6de0 */
  push32(0x107b041fu); f_107a6de0();
  /* 107b041f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0422 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107b0424 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0427 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 107b042a mov dword ptr [0x107cf7a8], ecx */
  w32((uint32_t)(0x107cf7a8), (ECX));
  /* 107b0430 cmp dword ptr [0x107cf7a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf7a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0437 je 0x107b0442 */
  if (C.zf) goto L_107b0442;
  /* 107b0439 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 107b0440 jmp 0x107b0454 */
  goto L_107b0454;
L_107b0442:;
  /* 107b0442 mov edx, dword ptr [0x107cf7ac] */
  EDX = (r32((uint32_t)(0x107cf7ac)));
  /* 107b0448 push edx */
  push32((uint32_t)(EDX));
  /* 107b0449 call 0x107b0ac0 */
  push32(0x107b044eu); f_107b0ac0();
  /* 107b044e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0451 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107b0454:;
  /* 107b0454 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b0457 mov dword ptr [0x107cf7a4], eax */
  w32((uint32_t)(0x107cf7a4), (EAX));
  /* 107b045c push 1 */
  push32((uint32_t)(0x1u));
  /* 107b045e push 0x107b0490 */
  push32((uint32_t)(0x107b0490u));
  /* 107b0463 call dword ptr [0x107d2298] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2298))), 0x107b0469u);
  /* 107b0469 mov ecx, dword ptr [0x107cf7b4] */
  ECX = (r32((uint32_t)(0x107cf7b4)));
  /* 107b046f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 107b0472 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107b0474 jne 0x107b0480 */
  if (!C.zf) goto L_107b0480;
  /* 107b0476 mov dword ptr [0x107cf7b4], 0 */
  w32((uint32_t)(0x107cf7b4), (0x0u));
L_107b0480:;
  /* 107b0480 mov esp, ebp */
  ESP = (EBP);
  /* 107b0482 pop ebp */
  EBP = (pop32());
  /* 107b0483 ret  */
  ESPCHK(0x107b0410u, _esp0);
  ESP += 4; return;
}

/* FUN_10010490 @ 0x107b0490 (287 bytes, 86 insns) */
void f_107b0490(void) {
  FTRACE(0x107b0490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b0490 push ebp */
  push32((uint32_t)(EBP));
  /* 107b0491 mov ebp, esp */
  EBP = (ESP);
  /* 107b0493 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b0496 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b0499 push eax */
  push32((uint32_t)(EAX));
  /* 107b049a call 0x107b0a40 */
  push32(0x107b049fu); f_107b0a40();
  /* 107b049f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b04a2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 107b04a5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 107b04a7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 107b04aa push ecx */
  push32((uint32_t)(ECX));
  /* 107b04ab mov edx, dword ptr [0x107cf7a8] */
  EDX = (r32((uint32_t)(0x107cf7a8)));
  /* 107b04b1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 107b04b3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b04b5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 107b04bb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b04c1 push edx */
  push32((uint32_t)(EDX));
  /* 107b04c2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107b04c5 push eax */
  push32((uint32_t)(EAX));
  /* 107b04c6 call dword ptr [0x107cf7bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107cf7bc))), 0x107b04ccu);
  /* 107b04cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b04ce jne 0x107b04e4 */
  if (!C.zf) goto L_107b04e4;
  /* 107b04d0 mov dword ptr [0x107cf7b4], 0 */
  w32((uint32_t)(0x107cf7b4), (0x0u));
  /* 107b04da mov eax, 1 */
  EAX = (0x1u);
  /* 107b04df jmp 0x107b05a9 */
  goto L_107b05a9;
L_107b04e4:;
  /* 107b04e4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 107b04e7 push ecx */
  push32((uint32_t)(ECX));
  /* 107b04e8 mov edx, dword ptr [0x107cf7ac] */
  EDX = (r32((uint32_t)(0x107cf7ac)));
  /* 107b04ee push edx */
  push32((uint32_t)(EDX));
  /* 107b04ef call 0x107b2680 */
  push32(0x107b04f4u); f_107b2680();
  /* 107b04f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b04f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b04f9 jne 0x107b0539 */
  if (!C.zf) goto L_107b0539;
  /* 107b04fb cmp dword ptr [0x107cf7a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf7a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0502 jne 0x107b0516 */
  if (!C.zf) goto L_107b0516;
  /* 107b0504 push 1 */
  push32((uint32_t)(0x1u));
  /* 107b0506 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107b0509 push eax */
  push32((uint32_t)(EAX));
  /* 107b050a call 0x107b07d0 */
  push32(0x107b050fu); f_107b07d0();
  /* 107b050f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0512 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b0514 je 0x107b0537 */
  if (C.zf) goto L_107b0537;
L_107b0516:;
  /* 107b0516 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107b0519 mov dword ptr [0x107cf7b8], ecx */
  w32((uint32_t)(0x107cf7b8), (ECX));
  /* 107b051f mov edx, dword ptr [0x107cf7b8] */
  EDX = (r32((uint32_t)(0x107cf7b8)));
  /* 107b0525 mov dword ptr [0x107cf79c], edx */
  w32((uint32_t)(0x107cf79c), (EDX));
  /* 107b052b mov eax, dword ptr [0x107cf7b4] */
  EAX = (r32((uint32_t)(0x107cf7b4)));
  /* 107b0530 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 107b0532 mov dword ptr [0x107cf7b4], eax */
  w32((uint32_t)(0x107cf7b4), (EAX));
L_107b0537:;
  /* 107b0537 jmp 0x107b059c */
  goto L_107b059c;
L_107b0539:;
  /* 107b0539 cmp dword ptr [0x107cf7a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf7a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0540 jne 0x107b059c */
  if (!C.zf) goto L_107b059c;
  /* 107b0542 cmp dword ptr [0x107cf7a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf7a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0549 je 0x107b059c */
  if (C.zf) goto L_107b059c;
  /* 107b054b mov ecx, dword ptr [0x107cf7a4] */
  ECX = (r32((uint32_t)(0x107cf7a4)));
  /* 107b0551 push ecx */
  push32((uint32_t)(ECX));
  /* 107b0552 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 107b0555 push edx */
  push32((uint32_t)(EDX));
  /* 107b0556 mov eax, dword ptr [0x107cf7ac] */
  EAX = (r32((uint32_t)(0x107cf7ac)));
  /* 107b055b push eax */
  push32((uint32_t)(EAX));
  /* 107b055c call 0x107b2750 */
  push32(0x107b0561u); f_107b2750();
  /* 107b0561 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0564 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b0566 jne 0x107b059c */
  if (!C.zf) goto L_107b059c;
  /* 107b0568 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b056a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107b056d push ecx */
  push32((uint32_t)(ECX));
  /* 107b056e call 0x107b07d0 */
  push32(0x107b0573u); f_107b07d0();
  /* 107b0573 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0576 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b0578 je 0x107b059c */
  if (C.zf) goto L_107b059c;
  /* 107b057a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107b057d mov dword ptr [0x107cf7b8], edx */
  w32((uint32_t)(0x107cf7b8), (EDX));
  /* 107b0583 mov eax, dword ptr [0x107cf7b8] */
  EAX = (r32((uint32_t)(0x107cf7b8)));
  /* 107b0588 mov dword ptr [0x107cf79c], eax */
  w32((uint32_t)(0x107cf79c), (EAX));
  /* 107b058d mov ecx, dword ptr [0x107cf7b4] */
  ECX = (r32((uint32_t)(0x107cf7b4)));
  /* 107b0593 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 107b0596 mov dword ptr [0x107cf7b4], ecx */
  w32((uint32_t)(0x107cf7b4), (ECX));
L_107b059c:;
  /* 107b059c mov eax, dword ptr [0x107cf7b4] */
  EAX = (r32((uint32_t)(0x107cf7b4)));
  /* 107b05a1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 107b05a4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 107b05a6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b05a8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_107b05a9:;
  /* 107b05a9 mov esp, ebp */
  ESP = (EBP);
  /* 107b05ab pop ebp */
  EBP = (pop32());
  /* 107b05ac ret 4 */
  ESPCHK(0x107b0490u, _esp0);
  ESP += 8; return;
}

/* FUN_100105b0 @ 0x107b05b0 (69 bytes, 20 insns) */
void f_107b05b0(void) {
  FTRACE(0x107b05b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b05b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107b05b1 mov ebp, esp */
  EBP = (ESP);
  /* 107b05b3 mov eax, dword ptr [0x107cf7b0] */
  EAX = (r32((uint32_t)(0x107cf7b0)));
  /* 107b05b8 push eax */
  push32((uint32_t)(EAX));
  /* 107b05b9 call 0x107a6de0 */
  push32(0x107b05beu); f_107a6de0();
  /* 107b05be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b05c1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107b05c3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b05c6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 107b05c9 mov dword ptr [0x107cf7a0], ecx */
  w32((uint32_t)(0x107cf7a0), (ECX));
  /* 107b05cf push 1 */
  push32((uint32_t)(0x1u));
  /* 107b05d1 push 0x107b0600 */
  push32((uint32_t)(0x107b0600u));
  /* 107b05d6 call dword ptr [0x107d2298] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2298))), 0x107b05dcu);
  /* 107b05dc mov edx, dword ptr [0x107cf7b4] */
  EDX = (r32((uint32_t)(0x107cf7b4)));
  /* 107b05e2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 107b05e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107b05e7 jne 0x107b05f3 */
  if (!C.zf) goto L_107b05f3;
  /* 107b05e9 mov dword ptr [0x107cf7b4], 0 */
  w32((uint32_t)(0x107cf7b4), (0x0u));
L_107b05f3:;
  /* 107b05f3 pop ebp */
  EBP = (pop32());
  /* 107b05f4 ret  */
  ESPCHK(0x107b05b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010600 @ 0x107b0600 (172 bytes, 54 insns) */
void f_107b0600(void) {
  FTRACE(0x107b0600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b0600 push ebp */
  push32((uint32_t)(EBP));
  /* 107b0601 mov ebp, esp */
  EBP = (ESP);
  /* 107b0603 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b0606 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b0609 push eax */
  push32((uint32_t)(EAX));
  /* 107b060a call 0x107b0a40 */
  push32(0x107b060fu); f_107b0a40();
  /* 107b060f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0612 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 107b0615 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 107b0617 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 107b061a push ecx */
  push32((uint32_t)(ECX));
  /* 107b061b mov edx, dword ptr [0x107cf7a0] */
  EDX = (r32((uint32_t)(0x107cf7a0)));
  /* 107b0621 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 107b0623 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b0625 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 107b062b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0631 push edx */
  push32((uint32_t)(EDX));
  /* 107b0632 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107b0635 push eax */
  push32((uint32_t)(EAX));
  /* 107b0636 call dword ptr [0x107cf7bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107cf7bc))), 0x107b063cu);
  /* 107b063c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b063e jne 0x107b0651 */
  if (!C.zf) goto L_107b0651;
  /* 107b0640 mov dword ptr [0x107cf7b4], 0 */
  w32((uint32_t)(0x107cf7b4), (0x0u));
  /* 107b064a mov eax, 1 */
  EAX = (0x1u);
  /* 107b064f jmp 0x107b06a6 */
  goto L_107b06a6;
L_107b0651:;
  /* 107b0651 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 107b0654 push ecx */
  push32((uint32_t)(ECX));
  /* 107b0655 mov edx, dword ptr [0x107cf7b0] */
  EDX = (r32((uint32_t)(0x107cf7b0)));
  /* 107b065b push edx */
  push32((uint32_t)(EDX));
  /* 107b065c call 0x107b2680 */
  push32(0x107b0661u); f_107b2680();
  /* 107b0661 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0664 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b0666 jne 0x107b0699 */
  if (!C.zf) goto L_107b0699;
  /* 107b0668 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107b066b push eax */
  push32((uint32_t)(EAX));
  /* 107b066c call 0x107b0780 */
  push32(0x107b0671u); f_107b0780();
  /* 107b0671 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0674 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b0676 je 0x107b0699 */
  if (C.zf) goto L_107b0699;
  /* 107b0678 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107b067b mov dword ptr [0x107cf7b8], ecx */
  w32((uint32_t)(0x107cf7b8), (ECX));
  /* 107b0681 mov edx, dword ptr [0x107cf7b8] */
  EDX = (r32((uint32_t)(0x107cf7b8)));
  /* 107b0687 mov dword ptr [0x107cf79c], edx */
  w32((uint32_t)(0x107cf79c), (EDX));
  /* 107b068d mov eax, dword ptr [0x107cf7b4] */
  EAX = (r32((uint32_t)(0x107cf7b4)));
  /* 107b0692 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 107b0694 mov dword ptr [0x107cf7b4], eax */
  w32((uint32_t)(0x107cf7b4), (EAX));
L_107b0699:;
  /* 107b0699 mov eax, dword ptr [0x107cf7b4] */
  EAX = (r32((uint32_t)(0x107cf7b4)));
  /* 107b069e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 107b06a1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 107b06a3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b06a5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_107b06a6:;
  /* 107b06a6 mov esp, ebp */
  ESP = (EBP);
  /* 107b06a8 pop ebp */
  EBP = (pop32());
  /* 107b06a9 ret 4 */
  ESPCHK(0x107b0600u, _esp0);
  ESP += 8; return;
}

/* FUN_100106b0 @ 0x107b06b0 (43 bytes, 11 insns) */
void f_107b06b0(void) {
  FTRACE(0x107b06b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b06b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107b06b1 mov ebp, esp */
  EBP = (ESP);
  /* 107b06b3 mov eax, dword ptr [0x107cf7b4] */
  EAX = (r32((uint32_t)(0x107cf7b4)));
  /* 107b06b8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 107b06bd mov dword ptr [0x107cf7b4], eax */
  w32((uint32_t)(0x107cf7b4), (EAX));
  /* 107b06c2 call dword ptr [0x107d2294] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2294))), 0x107b06c8u);
  /* 107b06c8 mov dword ptr [0x107cf7b8], eax */
  w32((uint32_t)(0x107cf7b8), (EAX));
  /* 107b06cd mov ecx, dword ptr [0x107cf7b8] */
  ECX = (r32((uint32_t)(0x107cf7b8)));
  /* 107b06d3 mov dword ptr [0x107cf79c], ecx */
  w32((uint32_t)(0x107cf79c), (ECX));
  /* 107b06d9 pop ebp */
  EBP = (pop32());
  /* 107b06da ret  */
  ESPCHK(0x107b06b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100106e0 @ 0x107b06e0 (155 bytes, 57 insns) */
void f_107b06e0(void) {
  FTRACE(0x107b06e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b06e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107b06e1 mov ebp, esp */
  EBP = (ESP);
  /* 107b06e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b06e6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b06ea je 0x107b070b */
  if (C.zf) goto L_107b070b;
  /* 107b06ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b06ef movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107b06f2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107b06f4 je 0x107b070b */
  if (C.zf) goto L_107b070b;
  /* 107b06f6 push 0x107cb7dc */
  push32((uint32_t)(0x107cb7dcu));
  /* 107b06fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b06fe push edx */
  push32((uint32_t)(EDX));
  /* 107b06ff call 0x107afc40 */
  push32(0x107b0704u); f_107afc40();
  /* 107b0704 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0707 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b0709 jne 0x107b0733 */
  if (!C.zf) goto L_107b0733;
L_107b070b:;
  /* 107b070b push 8 */
  push32((uint32_t)(0x8u));
  /* 107b070d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 107b0710 push eax */
  push32((uint32_t)(EAX));
  /* 107b0711 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 107b0716 mov ecx, dword ptr [0x107cf7b8] */
  ECX = (r32((uint32_t)(0x107cf7b8)));
  /* 107b071c push ecx */
  push32((uint32_t)(ECX));
  /* 107b071d call dword ptr [0x107cf7bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107cf7bc))), 0x107b0723u);
  /* 107b0723 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b0725 jne 0x107b072b */
  if (!C.zf) goto L_107b072b;
  /* 107b0727 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b0729 jmp 0x107b0777 */
  goto L_107b0777;
L_107b072b:;
  /* 107b072b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 107b072e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 107b0731 jmp 0x107b076b */
  goto L_107b076b;
L_107b0733:;
  /* 107b0733 push 0x107cb7d8 */
  push32((uint32_t)(0x107cb7d8u));
  /* 107b0738 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b073b push eax */
  push32((uint32_t)(EAX));
  /* 107b073c call 0x107afc40 */
  push32(0x107b0741u); f_107afc40();
  /* 107b0741 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0744 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b0746 jne 0x107b076b */
  if (!C.zf) goto L_107b076b;
  /* 107b0748 push 8 */
  push32((uint32_t)(0x8u));
  /* 107b074a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 107b074d push ecx */
  push32((uint32_t)(ECX));
  /* 107b074e push 0xb */
  push32((uint32_t)(0xbu));
  /* 107b0750 mov edx, dword ptr [0x107cf7b8] */
  EDX = (r32((uint32_t)(0x107cf7b8)));
  /* 107b0756 push edx */
  push32((uint32_t)(EDX));
  /* 107b0757 call dword ptr [0x107cf7bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107cf7bc))), 0x107b075du);
  /* 107b075d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b075f jne 0x107b0765 */
  if (!C.zf) goto L_107b0765;
  /* 107b0761 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b0763 jmp 0x107b0777 */
  goto L_107b0777;
L_107b0765:;
  /* 107b0765 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 107b0768 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_107b076b:;
  /* 107b076b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b076e push ecx */
  push32((uint32_t)(ECX));
  /* 107b076f call 0x107b2860 */
  push32(0x107b0774u); f_107b2860();
  /* 107b0774 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107b0777:;
  /* 107b0777 mov esp, ebp */
  ESP = (EBP);
  /* 107b0779 pop ebp */
  EBP = (pop32());
  /* 107b077a ret  */
  ESPCHK(0x107b06e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010780 @ 0x107b0780 (79 bytes, 26 insns) */
void f_107b0780(void) {
  FTRACE(0x107b0780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b0780 push ebp */
  push32((uint32_t)(EBP));
  /* 107b0781 mov ebp, esp */
  EBP = (ESP);
  /* 107b0783 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b0786 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 107b078a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 107b078e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107b0795 jmp 0x107b07a0 */
  goto L_107b07a0;
L_107b0797:;
  /* 107b0797 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b079a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b079d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_107b07a0:;
  /* 107b07a0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b07a4 jae 0x107b07c6 */
  if (!C.cf) goto L_107b07c6;
  /* 107b07a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b07a9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107b07af mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b07b2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107b07b4 mov cx, word ptr [eax*2 + 0x107ce9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x107ce9c4)));
  /* 107b07bc cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b07be jne 0x107b07c4 */
  if (!C.zf) goto L_107b07c4;
  /* 107b07c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b07c2 jmp 0x107b07cb */
  goto L_107b07cb;
L_107b07c4:;
  /* 107b07c4 jmp 0x107b0797 */
  goto L_107b0797;
L_107b07c6:;
  /* 107b07c6 mov eax, 1 */
  EAX = (0x1u);
L_107b07cb:;
  /* 107b07cb mov esp, ebp */
  ESP = (EBP);
  /* 107b07cd pop ebp */
  EBP = (pop32());
  /* 107b07ce ret  */
  ESPCHK(0x107b0780u, _esp0);
  ESP += 4; return;
}

/* FUN_100107d0 @ 0x107b07d0 (135 bytes, 48 insns) */
void f_107b07d0(void) {
  FTRACE(0x107b07d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b07d0 push ebp */
  push32((uint32_t)(EBP));
  /* 107b07d1 mov ebp, esp */
  EBP = (ESP);
  /* 107b07d3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b07d6 push esi */
  push32((uint32_t)(ESI));
  /* 107b07d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b07da and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107b07df and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 107b07e4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107b07e9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 107b07ec and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107b07f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107b07f4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 107b07f6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 107b07f9 push ecx */
  push32((uint32_t)(ECX));
  /* 107b07fa push 1 */
  push32((uint32_t)(0x1u));
  /* 107b07fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b07ff push edx */
  push32((uint32_t)(EDX));
  /* 107b0800 call dword ptr [0x107cf7bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107cf7bc))), 0x107b0806u);
  /* 107b0806 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b0808 jne 0x107b080e */
  if (!C.zf) goto L_107b080e;
  /* 107b080a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b080c jmp 0x107b0852 */
  goto L_107b0852;
L_107b080e:;
  /* 107b080e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 107b0811 push eax */
  push32((uint32_t)(EAX));
  /* 107b0812 call 0x107b0a40 */
  push32(0x107b0817u); f_107b0a40();
  /* 107b0817 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b081a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b081d je 0x107b084d */
  if (C.zf) goto L_107b084d;
  /* 107b081f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0823 je 0x107b084d */
  if (C.zf) goto L_107b084d;
  /* 107b0825 mov ecx, dword ptr [0x107cf7ac] */
  ECX = (r32((uint32_t)(0x107cf7ac)));
  /* 107b082b push ecx */
  push32((uint32_t)(ECX));
  /* 107b082c call 0x107b0ac0 */
  push32(0x107b0831u); f_107b0ac0();
  /* 107b0831 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0834 mov esi, eax */
  ESI = (EAX);
  /* 107b0836 mov edx, dword ptr [0x107cf7ac] */
  EDX = (r32((uint32_t)(0x107cf7ac)));
  /* 107b083c push edx */
  push32((uint32_t)(EDX));
  /* 107b083d call 0x107a6de0 */
  push32(0x107b0842u); f_107a6de0();
  /* 107b0842 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0845 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0847 jne 0x107b084d */
  if (!C.zf) goto L_107b084d;
  /* 107b0849 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b084b jmp 0x107b0852 */
  goto L_107b0852;
L_107b084d:;
  /* 107b084d mov eax, 1 */
  EAX = (0x1u);
L_107b0852:;
  /* 107b0852 pop esi */
  ESI = (pop32());
  /* 107b0853 mov esp, ebp */
  ESP = (EBP);
  /* 107b0855 pop ebp */
  EBP = (pop32());
  /* 107b0856 ret  */
  ESPCHK(0x107b07d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010860 @ 0x107b0860 (77 bytes, 18 insns) */
void f_107b0860(void) {
  FTRACE(0x107b0860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b0860 push ebp */
  push32((uint32_t)(EBP));
  /* 107b0861 mov ebp, esp */
  EBP = (ESP);
  /* 107b0863 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b0869 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 107b0873 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 107b0879 push eax */
  push32((uint32_t)(EAX));
  /* 107b087a call dword ptr [0x107d2290] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2290))), 0x107b0880u);
  /* 107b0880 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b0882 je 0x107b0899 */
  if (C.zf) goto L_107b0899;
  /* 107b0884 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b088b jne 0x107b0899 */
  if (!C.zf) goto L_107b0899;
  /* 107b088d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 107b0897 jmp 0x107b08a3 */
  goto L_107b08a3;
L_107b0899:;
  /* 107b0899 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_107b08a3:;
  /* 107b08a3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 107b08a9 mov esp, ebp */
  ESP = (EBP);
  /* 107b08ab pop ebp */
  EBP = (pop32());
  /* 107b08ac ret  */
  ESPCHK(0x107b0860u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x107b08b0 (388 bytes, 118 insns) */
void f_107b08b0(void) {
  FTRACE(0x107b08b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b08b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107b08b1 mov ebp, esp */
  EBP = (ESP);
  /* 107b08b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b08b6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 107b08bd mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 107b08c4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_107b08cb:;
  /* 107b08cb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b08ce cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b08d1 jg 0x107b0a18 */
  if ((!C.zf&&C.sf==C.of)) goto L_107b0a18;
  /* 107b08d7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b08da add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b08dd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107b08de sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b08e0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 107b08e2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107b08e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b08e8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107b08eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b08ee cmp edx, dword ptr [ecx + 0x107ce520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x107ce520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b08f4 jne 0x107b09ee */
  if (!C.zf) goto L_107b09ee;
  /* 107b08fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b08fd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 107b0900 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0904 ja 0x107b0927 */
  if ((!C.cf&&!C.zf)) goto L_107b0927;
  /* 107b0906 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b090a je 0x107b0999 */
  if (C.zf) goto L_107b0999;
  /* 107b0910 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0914 je 0x107b0944 */
  if (C.zf) goto L_107b0944;
  /* 107b0916 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b091a je 0x107b0966 */
  if (C.zf) goto L_107b0966;
  /* 107b091c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0920 je 0x107b0988 */
  if (C.zf) goto L_107b0988;
  /* 107b0922 jmp 0x107b09b8 */
  goto L_107b09b8;
L_107b0927:;
  /* 107b0927 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b092e je 0x107b0955 */
  if (C.zf) goto L_107b0955;
  /* 107b0930 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0937 je 0x107b0977 */
  if (C.zf) goto L_107b0977;
  /* 107b0939 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0940 je 0x107b09aa */
  if (C.zf) goto L_107b09aa;
  /* 107b0942 jmp 0x107b09b8 */
  goto L_107b09b8;
L_107b0944:;
  /* 107b0944 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b0947 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107b094a add ecx, 0x107ce524 */
  { uint32_t _a=(ECX),_b=(0x107ce524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0950 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107b0953 jmp 0x107b09b8 */
  goto L_107b09b8;
L_107b0955:;
  /* 107b0955 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b0958 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107b095b mov eax, dword ptr [edx + 0x107ce52c] */
  EAX = (r32((uint32_t)(EDX + 0x107ce52c)));
  /* 107b0961 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107b0964 jmp 0x107b09b8 */
  goto L_107b09b8;
L_107b0966:;
  /* 107b0966 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b0969 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107b096c add ecx, 0x107ce530 */
  { uint32_t _a=(ECX),_b=(0x107ce530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0972 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107b0975 jmp 0x107b09b8 */
  goto L_107b09b8;
L_107b0977:;
  /* 107b0977 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b097a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107b097d mov eax, dword ptr [edx + 0x107ce534] */
  EAX = (r32((uint32_t)(EDX + 0x107ce534)));
  /* 107b0983 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107b0986 jmp 0x107b09b8 */
  goto L_107b09b8;
L_107b0988:;
  /* 107b0988 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b098b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107b098e add ecx, 0x107ce538 */
  { uint32_t _a=(ECX),_b=(0x107ce538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0994 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107b0997 jmp 0x107b09b8 */
  goto L_107b09b8;
L_107b0999:;
  /* 107b0999 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b099c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107b099f add edx, 0x107ce53c */
  { uint32_t _a=(EDX),_b=(0x107ce53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b09a5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107b09a8 jmp 0x107b09b8 */
  goto L_107b09b8;
L_107b09aa:;
  /* 107b09aa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b09ad imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107b09b0 add eax, 0x107ce544 */
  { uint32_t _a=(EAX),_b=(0x107ce544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b09b5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_107b09b8:;
  /* 107b09b8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b09bc je 0x107b09c4 */
  if (C.zf) goto L_107b09c4;
  /* 107b09be cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b09c2 jge 0x107b09c6 */
  if ((C.sf==C.of)) goto L_107b09c6;
L_107b09c4:;
  /* 107b09c4 jmp 0x107b0a18 */
  goto L_107b0a18;
L_107b09c6:;
  /* 107b09c6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b09c9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b09cc push ecx */
  push32((uint32_t)(ECX));
  /* 107b09cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b09d0 push edx */
  push32((uint32_t)(EDX));
  /* 107b09d1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b09d4 push eax */
  push32((uint32_t)(EAX));
  /* 107b09d5 call 0x107a77d0 */
  push32(0x107b09dau); f_107a77d0();
  /* 107b09da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b09dd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b09e0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b09e3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 107b09e7 mov eax, 1 */
  EAX = (0x1u);
  /* 107b09ec jmp 0x107b0a2e */
  goto L_107b0a2e;
L_107b09ee:;
  /* 107b09ee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b09f1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107b09f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b09f7 cmp eax, dword ptr [edx + 0x107ce520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x107ce520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b09fd jae 0x107b0a0a */
  if (!C.cf) goto L_107b0a0a;
  /* 107b09ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b0a02 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b0a05 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107b0a08 jmp 0x107b0a13 */
  goto L_107b0a13;
L_107b0a0a:;
  /* 107b0a0a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b0a0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0a10 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_107b0a13:;
  /* 107b0a13 jmp 0x107b08cb */
  goto L_107b08cb;
L_107b0a18:;
  /* 107b0a18 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b0a1b push eax */
  push32((uint32_t)(EAX));
  /* 107b0a1c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b0a1f push ecx */
  push32((uint32_t)(ECX));
  /* 107b0a20 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b0a23 push edx */
  push32((uint32_t)(EDX));
  /* 107b0a24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b0a27 push eax */
  push32((uint32_t)(EAX));
  /* 107b0a28 call dword ptr [0x107d229c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d229c))), 0x107b0a2eu);
L_107b0a2e:;
  /* 107b0a2e mov esp, ebp */
  ESP = (EBP);
  /* 107b0a30 pop ebp */
  EBP = (pop32());
  /* 107b0a31 ret 0x10 */
  ESPCHK(0x107b08b0u, _esp0);
  ESP += 20; return;
}

/* FUN_10010a40 @ 0x107b0a40 (118 bytes, 42 insns) */
void f_107b0a40(void) {
  FTRACE(0x107b0a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b0a40 push ebp */
  push32((uint32_t)(EBP));
  /* 107b0a41 mov ebp, esp */
  EBP = (ESP);
  /* 107b0a43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b0a46 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_107b0a4d:;
  /* 107b0a4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b0a50 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107b0a52 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 107b0a55 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 107b0a59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b0a5c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0a5f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107b0a62 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107b0a64 je 0x107b0aaf */
  if (C.zf) goto L_107b0aaf;
  /* 107b0a66 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 107b0a6a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0a6d jl 0x107b0a82 */
  if ((C.sf!=C.of)) goto L_107b0a82;
  /* 107b0a6f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 107b0a73 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0a76 jg 0x107b0a82 */
  if ((!C.zf&&C.sf==C.of)) goto L_107b0a82;
  /* 107b0a78 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 107b0a7b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 107b0a7d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 107b0a80 jmp 0x107b0a9c */
  goto L_107b0a9c;
L_107b0a82:;
  /* 107b0a82 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 107b0a86 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0a89 jl 0x107b0a9c */
  if ((C.sf!=C.of)) goto L_107b0a9c;
  /* 107b0a8b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 107b0a8f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0a92 jg 0x107b0a9c */
  if ((!C.zf&&C.sf==C.of)) goto L_107b0a9c;
  /* 107b0a94 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 107b0a97 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 107b0a99 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_107b0a9c:;
  /* 107b0a9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b0a9f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 107b0aa2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 107b0aa6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 107b0aaa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107b0aad jmp 0x107b0a4d */
  goto L_107b0a4d;
L_107b0aaf:;
  /* 107b0aaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b0ab2 mov esp, ebp */
  ESP = (EBP);
  /* 107b0ab4 pop ebp */
  EBP = (pop32());
  /* 107b0ab5 ret  */
  ESPCHK(0x107b0a40u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x107b0ac0 (101 bytes, 36 insns) */
void f_107b0ac0(void) {
  FTRACE(0x107b0ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b0ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 107b0ac1 mov ebp, esp */
  EBP = (ESP);
  /* 107b0ac3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b0ac6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107b0acd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b0ad0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107b0ad2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 107b0ad5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b0ad8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0adb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_107b0ade:;
  /* 107b0ade movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 107b0ae2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0ae5 jl 0x107b0af0 */
  if ((C.sf!=C.of)) goto L_107b0af0;
  /* 107b0ae7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 107b0aeb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0aee jle 0x107b0b02 */
  if ((C.zf||C.sf!=C.of)) goto L_107b0b02;
L_107b0af0:;
  /* 107b0af0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 107b0af4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0af7 jl 0x107b0b1e */
  if ((C.sf!=C.of)) goto L_107b0b1e;
  /* 107b0af9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 107b0afd cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0b00 jg 0x107b0b1e */
  if ((!C.zf&&C.sf==C.of)) goto L_107b0b1e;
L_107b0b02:;
  /* 107b0b02 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b0b05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0b08 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107b0b0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b0b0e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107b0b10 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 107b0b13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b0b16 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0b19 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 107b0b1c jmp 0x107b0ade */
  goto L_107b0ade;
L_107b0b1e:;
  /* 107b0b1e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b0b21 mov esp, ebp */
  ESP = (EBP);
  /* 107b0b23 pop ebp */
  EBP = (pop32());
  /* 107b0b24 ret  */
  ESPCHK(0x107b0ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b30 @ 0x107b0b30 (122 bytes, 39 insns) */
void f_107b0b30(void) {
  FTRACE(0x107b0b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b0b30 push ebp */
  push32((uint32_t)(EBP));
  /* 107b0b31 mov ebp, esp */
  EBP = (ESP);
  /* 107b0b33 push ecx */
  push32((uint32_t)(ECX));
  /* 107b0b34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b0b37 cmp eax, dword ptr [0x107d103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x107d103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0b3d jae 0x107b0b61 */
  if (!C.cf) goto L_107b0b61;
  /* 107b0b3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b0b42 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 107b0b45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b0b48 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 107b0b4b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107b0b4e mov eax, dword ptr [ecx*4 + 0x107d0f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x107d0f00)));
  /* 107b0b55 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 107b0b5a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 107b0b5d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107b0b5f jne 0x107b0b7c */
  if (!C.zf) goto L_107b0b7c;
L_107b0b61:;
  /* 107b0b61 call 0x107abe80 */
  push32(0x107b0b66u); f_107abe80();
  /* 107b0b66 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 107b0b6c call 0x107abe90 */
  push32(0x107b0b71u); f_107abe90();
  /* 107b0b71 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 107b0b77 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107b0b7a jmp 0x107b0ba6 */
  goto L_107b0ba6;
L_107b0b7c:;
  /* 107b0b7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b0b7f push edx */
  push32((uint32_t)(EDX));
  /* 107b0b80 call 0x107ad6a0 */
  push32(0x107b0b85u); f_107ad6a0();
  /* 107b0b85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0b88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b0b8b push eax */
  push32((uint32_t)(EAX));
  /* 107b0b8c call 0x107b0bb0 */
  push32(0x107b0b91u); f_107b0bb0();
  /* 107b0b91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0b94 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107b0b97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b0b9a push ecx */
  push32((uint32_t)(ECX));
  /* 107b0b9b call 0x107ad730 */
  push32(0x107b0ba0u); f_107ad730();
  /* 107b0ba0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0ba3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_107b0ba6:;
  /* 107b0ba6 mov esp, ebp */
  ESP = (EBP);
  /* 107b0ba8 pop ebp */
  EBP = (pop32());
  /* 107b0ba9 ret  */
  ESPCHK(0x107b0b30u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x107b0bb0 (170 bytes, 59 insns) */
void f_107b0bb0(void) {
  FTRACE(0x107b0bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b0bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 107b0bb1 mov ebp, esp */
  EBP = (ESP);
  /* 107b0bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 107b0bb4 push esi */
  push32((uint32_t)(ESI));
  /* 107b0bb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b0bb8 push eax */
  push32((uint32_t)(EAX));
  /* 107b0bb9 call 0x107ad520 */
  push32(0x107b0bbeu); f_107ad520();
  /* 107b0bbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0bc1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0bc4 je 0x107b0c03 */
  if (C.zf) goto L_107b0c03;
  /* 107b0bc6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0bca je 0x107b0bd2 */
  if (C.zf) goto L_107b0bd2;
  /* 107b0bcc cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0bd0 jne 0x107b0bec */
  if (!C.zf) goto L_107b0bec;
L_107b0bd2:;
  /* 107b0bd2 push 1 */
  push32((uint32_t)(0x1u));
  /* 107b0bd4 call 0x107ad520 */
  push32(0x107b0bd9u); f_107ad520();
  /* 107b0bd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0bdc mov esi, eax */
  ESI = (EAX);
  /* 107b0bde push 2 */
  push32((uint32_t)(0x2u));
  /* 107b0be0 call 0x107ad520 */
  push32(0x107b0be5u); f_107ad520();
  /* 107b0be5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0be8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0bea je 0x107b0c03 */
  if (C.zf) goto L_107b0c03;
L_107b0bec:;
  /* 107b0bec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b0bef push ecx */
  push32((uint32_t)(ECX));
  /* 107b0bf0 call 0x107ad520 */
  push32(0x107b0bf5u); f_107ad520();
  /* 107b0bf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0bf8 push eax */
  push32((uint32_t)(EAX));
  /* 107b0bf9 call dword ptr [0x107d228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d228c))), 0x107b0bffu);
  /* 107b0bff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b0c01 je 0x107b0c0c */
  if (C.zf) goto L_107b0c0c;
L_107b0c03:;
  /* 107b0c03 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107b0c0a jmp 0x107b0c15 */
  goto L_107b0c15;
L_107b0c0c:;
  /* 107b0c0c call dword ptr [0x107d2330] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2330))), 0x107b0c12u);
  /* 107b0c12 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107b0c15:;
  /* 107b0c15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b0c18 push edx */
  push32((uint32_t)(EDX));
  /* 107b0c19 call 0x107ad440 */
  push32(0x107b0c1eu); f_107ad440();
  /* 107b0c1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0c21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b0c24 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 107b0c27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b0c2a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 107b0c2d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107b0c30 mov edx, dword ptr [eax*4 + 0x107d0f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x107d0f00)));
  /* 107b0c37 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 107b0c3c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0c40 je 0x107b0c53 */
  if (C.zf) goto L_107b0c53;
  /* 107b0c42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b0c45 push eax */
  push32((uint32_t)(EAX));
  /* 107b0c46 call 0x107abde0 */
  push32(0x107b0c4bu); f_107abde0();
  /* 107b0c4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0c4e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107b0c51 jmp 0x107b0c55 */
  goto L_107b0c55;
L_107b0c53:;
  /* 107b0c53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107b0c55:;
  /* 107b0c55 pop esi */
  ESI = (pop32());
  /* 107b0c56 mov esp, ebp */
  ESP = (EBP);
  /* 107b0c58 pop ebp */
  EBP = (pop32());
  /* 107b0c59 ret  */
  ESPCHK(0x107b0bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c60 @ 0x107b0c60 (146 bytes, 52 insns) */
void f_107b0c60(void) {
  FTRACE(0x107b0c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b0c60 push ebp */
  push32((uint32_t)(EBP));
  /* 107b0c61 mov ebp, esp */
  EBP = (ESP);
  /* 107b0c63 push ebx */
  push32((uint32_t)(EBX));
  /* 107b0c64 push esi */
  push32((uint32_t)(ESI));
  /* 107b0c65 push edi */
  push32((uint32_t)(EDI));
L_107b0c66:;
  /* 107b0c66 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0c6a jne 0x107b0c8a */
  if (!C.zf) goto L_107b0c8a;
  /* 107b0c6c push 0x107cb118 */
  push32((uint32_t)(0x107cb118u));
  /* 107b0c71 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b0c73 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 107b0c75 push 0x107cb7e0 */
  push32((uint32_t)(0x107cb7e0u));
  /* 107b0c7a push 2 */
  push32((uint32_t)(0x2u));
  /* 107b0c7c call 0x107a3070 */
  push32(0x107b0c81u); f_107a3070();
  /* 107b0c81 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0c84 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0c87 jne 0x107b0c8a */
  if (!C.zf) goto L_107b0c8a;
  /* 107b0c89 int3  */
  x86_unimpl("int3 @ 0x107b0c89");
L_107b0c8a:;
  /* 107b0c8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b0c8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b0c8e jne 0x107b0c66 */
  if (!C.zf) goto L_107b0c66;
  /* 107b0c90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b0c93 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107b0c96 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 107b0c9c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107b0c9e je 0x107b0ced */
  if (C.zf) goto L_107b0ced;
  /* 107b0ca0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b0ca3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 107b0ca6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 107b0ca9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107b0cab je 0x107b0ced */
  if (C.zf) goto L_107b0ced;
  /* 107b0cad push 2 */
  push32((uint32_t)(0x2u));
  /* 107b0caf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b0cb2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 107b0cb5 push eax */
  push32((uint32_t)(EAX));
  /* 107b0cb6 call 0x107a4a40 */
  push32(0x107b0cbbu); f_107a4a40();
  /* 107b0cbb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0cbe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b0cc1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107b0cc4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 107b0cca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b0ccd mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 107b0cd0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b0cd3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 107b0cd9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b0cdc mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 107b0ce3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b0ce6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_107b0ced:;
  /* 107b0ced pop edi */
  EDI = (pop32());
  /* 107b0cee pop esi */
  ESI = (pop32());
  /* 107b0cef pop ebx */
  EBX = (pop32());
  /* 107b0cf0 pop ebp */
  EBP = (pop32());
  /* 107b0cf1 ret  */
  ESPCHK(0x107b0c60u, _esp0);
  ESP += 4; return;
}

