#include "recomp.h"

/* FUN_10007c00 @ 0x12317c00 (134 bytes, 50 insns) */
void f_12317c00(void) {
  FTRACE(0x12317c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12317c00 push ebp */
  push32((uint32_t)(EBP));
  /* 12317c01 mov ebp, esp */
  EBP = (ESP);
  /* 12317c03 push ecx */
  push32((uint32_t)(ECX));
  /* 12317c04 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12317c08 jne 0x12317c0e */
  if (!C.zf) goto L_12317c0e;
  /* 12317c0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12317c0c jmp 0x12317c82 */
  goto L_12317c82;
L_12317c0e:;
  /* 12317c0e push 1 */
  push32((uint32_t)(0x1u));
  /* 12317c10 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12317c12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12317c15 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12317c18 push eax */
  push32((uint32_t)(EAX));
  /* 12317c19 call 0x12317bb0 */
  push32(0x12317c1eu); f_12317bb0();
  /* 12317c1e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12317c21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12317c23 jne 0x12317c29 */
  if (!C.zf) goto L_12317c29;
  /* 12317c25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12317c27 jmp 0x12317c82 */
  goto L_12317c82;
L_12317c29:;
  /* 12317c29 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12317c2c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12317c2f push ecx */
  push32((uint32_t)(ECX));
  /* 12317c30 call 0x1231b2b0 */
  push32(0x12317c35u); f_1231b2b0();
  /* 12317c35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12317c38 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12317c3b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12317c3f je 0x12317c56 */
  if (C.zf) goto L_12317c56;
  /* 12317c41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12317c44 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12317c47 push edx */
  push32((uint32_t)(EDX));
  /* 12317c48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12317c4b push eax */
  push32((uint32_t)(EAX));
  /* 12317c4c call 0x1231b310 */
  push32(0x12317c51u); f_1231b310();
  /* 12317c51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12317c54 jmp 0x12317c82 */
  goto L_12317c82;
L_12317c56:;
  /* 12317c56 mov ecx, dword ptr [0x12341738] */
  ECX = (r32((uint32_t)(0x12341738)));
  /* 12317c5c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12317c62 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12317c64 je 0x12317c6d */
  if (C.zf) goto L_12317c6d;
  /* 12317c66 mov eax, 1 */
  EAX = (0x1u);
  /* 12317c6b jmp 0x12317c82 */
  goto L_12317c82;
L_12317c6d:;
  /* 12317c6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12317c70 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12317c73 push edx */
  push32((uint32_t)(EDX));
  /* 12317c74 push 0 */
  push32((uint32_t)(0x0u));
  /* 12317c76 mov eax, dword ptr [0x123430e4] */
  EAX = (r32((uint32_t)(0x123430e4)));
  /* 12317c7b push eax */
  push32((uint32_t)(EAX));
  /* 12317c7c call dword ptr [0x12344270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344270))), 0x12317c82u);
L_12317c82:;
  /* 12317c82 mov esp, ebp */
  ESP = (EBP);
  /* 12317c84 pop ebp */
  EBP = (pop32());
  /* 12317c85 ret  */
  ESPCHK(0x12317c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c90 @ 0x12317c90 (227 bytes, 80 insns) */
void f_12317c90(void) {
  FTRACE(0x12317c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12317c90 push ebp */
  push32((uint32_t)(EBP));
  /* 12317c91 mov ebp, esp */
  EBP = (ESP);
  /* 12317c93 push ecx */
  push32((uint32_t)(ECX));
  /* 12317c94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12317c97 push eax */
  push32((uint32_t)(EAX));
  /* 12317c98 call 0x12317c00 */
  push32(0x12317c9du); f_12317c00();
  /* 12317c9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12317ca0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12317ca2 jne 0x12317cab */
  if (!C.zf) goto L_12317cab;
  /* 12317ca4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12317ca6 jmp 0x12317d6f */
  goto L_12317d6f;
L_12317cab:;
  /* 12317cab push 9 */
  push32((uint32_t)(0x9u));
  /* 12317cad call 0x1231a9b0 */
  push32(0x12317cb2u); f_1231a9b0();
  /* 12317cb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12317cb5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12317cb8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12317cbb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12317cbe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12317cc1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12317cc4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12317cc9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12317ccc je 0x12317cf0 */
  if (C.zf) goto L_12317cf0;
  /* 12317cce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12317cd1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12317cd5 je 0x12317cf0 */
  if (C.zf) goto L_12317cf0;
  /* 12317cd7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12317cda mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12317cdd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12317ce2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12317ce5 je 0x12317cf0 */
  if (C.zf) goto L_12317cf0;
  /* 12317ce7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12317cea cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12317cee jne 0x12317d63 */
  if (!C.zf) goto L_12317d63;
L_12317cf0:;
  /* 12317cf0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12317cf2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12317cf5 push edx */
  push32((uint32_t)(EDX));
  /* 12317cf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12317cf9 push eax */
  push32((uint32_t)(EAX));
  /* 12317cfa call 0x12317bb0 */
  push32(0x12317cffu); f_12317bb0();
  /* 12317cff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12317d02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12317d04 je 0x12317d63 */
  if (C.zf) goto L_12317d63;
  /* 12317d06 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12317d09 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12317d0c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12317d0f jne 0x12317d63 */
  if (!C.zf) goto L_12317d63;
  /* 12317d11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12317d14 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12317d17 cmp ecx, dword ptr [0x1233fa90] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1233fa90))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12317d1d jg 0x12317d63 */
  if ((!C.zf&&C.sf==C.of)) goto L_12317d63;
  /* 12317d1f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12317d23 je 0x12317d30 */
  if (C.zf) goto L_12317d30;
  /* 12317d25 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12317d28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12317d2b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12317d2e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12317d30:;
  /* 12317d30 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12317d34 je 0x12317d41 */
  if (C.zf) goto L_12317d41;
  /* 12317d36 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12317d39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12317d3c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12317d3f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12317d41:;
  /* 12317d41 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12317d45 je 0x12317d52 */
  if (C.zf) goto L_12317d52;
  /* 12317d47 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12317d4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12317d4d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12317d50 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12317d52:;
  /* 12317d52 push 9 */
  push32((uint32_t)(0x9u));
  /* 12317d54 call 0x1231aa50 */
  push32(0x12317d59u); f_1231aa50();
  /* 12317d59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12317d5c mov eax, 1 */
  EAX = (0x1u);
  /* 12317d61 jmp 0x12317d6f */
  goto L_12317d6f;
L_12317d63:;
  /* 12317d63 push 9 */
  push32((uint32_t)(0x9u));
  /* 12317d65 call 0x1231aa50 */
  push32(0x12317d6au); f_1231aa50();
  /* 12317d6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12317d6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12317d6f:;
  /* 12317d6f mov esp, ebp */
  ESP = (EBP);
  /* 12317d71 pop ebp */
  EBP = (pop32());
  /* 12317d72 ret  */
  ESPCHK(0x12317c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d80 @ 0x12317d80 (28 bytes, 11 insns) */
void f_12317d80(void) {
  FTRACE(0x12317d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12317d80 push ebp */
  push32((uint32_t)(EBP));
  /* 12317d81 mov ebp, esp */
  EBP = (ESP);
  /* 12317d83 push ecx */
  push32((uint32_t)(ECX));
  /* 12317d84 mov eax, dword ptr [0x123430f0] */
  EAX = (r32((uint32_t)(0x123430f0)));
  /* 12317d89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12317d8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12317d8f mov dword ptr [0x123430f0], ecx */
  w32((uint32_t)(0x123430f0), (ECX));
  /* 12317d95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12317d98 mov esp, ebp */
  ESP = (EBP);
  /* 12317d9a pop ebp */
  EBP = (pop32());
  /* 12317d9b ret  */
  ESPCHK(0x12317d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007da0 @ 0x12317da0 (362 bytes, 116 insns) */
void f_12317da0(void) {
  FTRACE(0x12317da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12317da0 push ebp */
  push32((uint32_t)(EBP));
  /* 12317da1 mov ebp, esp */
  EBP = (ESP);
  /* 12317da3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12317da6 push ebx */
  push32((uint32_t)(EBX));
  /* 12317da7 push esi */
  push32((uint32_t)(ESI));
  /* 12317da8 push edi */
  push32((uint32_t)(EDI));
  /* 12317da9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12317dad jne 0x12317dda */
  if (!C.zf) goto L_12317dda;
L_12317daf:;
  /* 12317daf push 0x1233d3c8 */
  push32((uint32_t)(0x1233d3c8u));
  /* 12317db4 push 0x1233cee0 */
  push32((uint32_t)(0x1233cee0u));
  /* 12317db9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12317dbb push 0 */
  push32((uint32_t)(0x0u));
  /* 12317dbd push 0 */
  push32((uint32_t)(0x0u));
  /* 12317dbf push 0 */
  push32((uint32_t)(0x0u));
  /* 12317dc1 call 0x123145a0 */
  push32(0x12317dc6u); f_123145a0();
  /* 12317dc6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12317dc9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12317dcc jne 0x12317dcf */
  if (!C.zf) goto L_12317dcf;
  /* 12317dce int3  */
  x86_unimpl("int3 @ 0x12317dce");
L_12317dcf:;
  /* 12317dcf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12317dd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12317dd3 jne 0x12317daf */
  if (!C.zf) goto L_12317daf;
  /* 12317dd5 jmp 0x12317f03 */
  goto L_12317f03;
L_12317dda:;
  /* 12317dda push 9 */
  push32((uint32_t)(0x9u));
  /* 12317ddc call 0x1231a9b0 */
  push32(0x12317de1u); f_1231a9b0();
  /* 12317de1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12317de4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12317de7 mov edx, dword ptr [0x12341784] */
  EDX = (r32((uint32_t)(0x12341784)));
  /* 12317ded mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12317def mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12317df6 jmp 0x12317e01 */
  goto L_12317e01;
L_12317df8:;
  /* 12317df8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12317dfb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12317dfe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12317e01:;
  /* 12317e01 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12317e05 jge 0x12317e25 */
  if ((C.sf==C.of)) goto L_12317e25;
  /* 12317e07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12317e0a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12317e0d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 12317e15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12317e18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12317e1b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 12317e23 jmp 0x12317df8 */
  goto L_12317df8;
L_12317e25:;
  /* 12317e25 mov edx, dword ptr [0x12341784] */
  EDX = (r32((uint32_t)(0x12341784)));
  /* 12317e2b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12317e2e jmp 0x12317e38 */
  goto L_12317e38;
L_12317e30:;
  /* 12317e30 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12317e33 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12317e35 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12317e38:;
  /* 12317e38 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12317e3c je 0x12317ee1 */
  if (C.zf) goto L_12317ee1;
  /* 12317e42 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12317e45 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12317e48 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12317e4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12317e4f jl 0x12317eb7 */
  if ((C.sf!=C.of)) goto L_12317eb7;
  /* 12317e51 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12317e54 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12317e57 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12317e5d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12317e60 jge 0x12317eb7 */
  if ((C.sf==C.of)) goto L_12317eb7;
  /* 12317e62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12317e65 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12317e68 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12317e6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12317e71 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 12317e75 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12317e78 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12317e7b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12317e7e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12317e84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12317e87 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 12317e8b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12317e8e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12317e91 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12317e96 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12317e99 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12317e9d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12317ea0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12317ea3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12317ea6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12317ea9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12317eae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12317eb1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12317eb5 jmp 0x12317edc */
  goto L_12317edc;
L_12317eb7:;
  /* 12317eb7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12317eba push edx */
  push32((uint32_t)(EDX));
  /* 12317ebb push 0x1233d3a4 */
  push32((uint32_t)(0x1233d3a4u));
  /* 12317ec0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12317ec2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12317ec4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12317ec6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12317ec8 call 0x123145a0 */
  push32(0x12317ecdu); f_123145a0();
  /* 12317ecd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12317ed0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12317ed3 jne 0x12317ed6 */
  if (!C.zf) goto L_12317ed6;
  /* 12317ed5 int3  */
  x86_unimpl("int3 @ 0x12317ed5");
L_12317ed6:;
  /* 12317ed6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12317ed8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12317eda jne 0x12317eb7 */
  if (!C.zf) goto L_12317eb7;
L_12317edc:;
  /* 12317edc jmp 0x12317e30 */
  goto L_12317e30;
L_12317ee1:;
  /* 12317ee1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12317ee4 mov edx, dword ptr [0x1234178c] */
  EDX = (r32((uint32_t)(0x1234178c)));
  /* 12317eea mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 12317eed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12317ef0 mov ecx, dword ptr [0x12341780] */
  ECX = (r32((uint32_t)(0x12341780)));
  /* 12317ef6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 12317ef9 push 9 */
  push32((uint32_t)(0x9u));
  /* 12317efb call 0x1231aa50 */
  push32(0x12317f00u); f_1231aa50();
  /* 12317f00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12317f03:;
  /* 12317f03 pop edi */
  EDI = (pop32());
  /* 12317f04 pop esi */
  ESI = (pop32());
  /* 12317f05 pop ebx */
  EBX = (pop32());
  /* 12317f06 mov esp, ebp */
  ESP = (EBP);
  /* 12317f08 pop ebp */
  EBP = (pop32());
  /* 12317f09 ret  */
  ESPCHK(0x12317da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f10 @ 0x12317f10 (291 bytes, 95 insns) */
void f_12317f10(void) {
  FTRACE(0x12317f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12317f10 push ebp */
  push32((uint32_t)(EBP));
  /* 12317f11 mov ebp, esp */
  EBP = (ESP);
  /* 12317f13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12317f16 push ebx */
  push32((uint32_t)(EBX));
  /* 12317f17 push esi */
  push32((uint32_t)(ESI));
  /* 12317f18 push edi */
  push32((uint32_t)(EDI));
  /* 12317f19 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12317f20 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12317f24 je 0x12317f32 */
  if (C.zf) goto L_12317f32;
  /* 12317f26 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12317f2a je 0x12317f32 */
  if (C.zf) goto L_12317f32;
  /* 12317f2c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12317f30 jne 0x12317f60 */
  if (!C.zf) goto L_12317f60;
L_12317f32:;
  /* 12317f32 push 0x1233d3f0 */
  push32((uint32_t)(0x1233d3f0u));
  /* 12317f37 push 0x1233cee0 */
  push32((uint32_t)(0x1233cee0u));
  /* 12317f3c push 0 */
  push32((uint32_t)(0x0u));
  /* 12317f3e push 0 */
  push32((uint32_t)(0x0u));
  /* 12317f40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12317f42 push 0 */
  push32((uint32_t)(0x0u));
  /* 12317f44 call 0x123145a0 */
  push32(0x12317f49u); f_123145a0();
  /* 12317f49 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12317f4c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12317f4f jne 0x12317f52 */
  if (!C.zf) goto L_12317f52;
  /* 12317f51 int3  */
  x86_unimpl("int3 @ 0x12317f51");
L_12317f52:;
  /* 12317f52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12317f54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12317f56 jne 0x12317f32 */
  if (!C.zf) goto L_12317f32;
  /* 12317f58 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12317f5b jmp 0x1231802c */
  goto L_1231802c;
L_12317f60:;
  /* 12317f60 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12317f67 jmp 0x12317f72 */
  goto L_12317f72;
L_12317f69:;
  /* 12317f69 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12317f6c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12317f6f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12317f72:;
  /* 12317f72 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12317f76 jge 0x12317ffc */
  if ((C.sf==C.of)) goto L_12317ffc;
  /* 12317f7c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12317f7f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12317f82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12317f85 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12317f88 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 12317f8c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12317f90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12317f93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12317f96 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12317f9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12317f9d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12317fa0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12317fa3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12317fa6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 12317faa sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12317fae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12317fb1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12317fb4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 12317fb8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12317fbb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12317fbe cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12317fc3 jne 0x12317fd2 */
  if (!C.zf) goto L_12317fd2;
  /* 12317fc5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12317fc8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12317fcb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12317fd0 je 0x12317ff7 */
  if (C.zf) goto L_12317ff7;
L_12317fd2:;
  /* 12317fd2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12317fd6 je 0x12317ff7 */
  if (C.zf) goto L_12317ff7;
  /* 12317fd8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12317fdc jne 0x12317ff0 */
  if (!C.zf) goto L_12317ff0;
  /* 12317fde cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12317fe2 jne 0x12317ff7 */
  if (!C.zf) goto L_12317ff7;
  /* 12317fe4 mov eax, dword ptr [0x1233fa8c] */
  EAX = (r32((uint32_t)(0x1233fa8c)));
  /* 12317fe9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12317fec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12317fee je 0x12317ff7 */
  if (C.zf) goto L_12317ff7;
L_12317ff0:;
  /* 12317ff0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12317ff7:;
  /* 12317ff7 jmp 0x12317f69 */
  goto L_12317f69;
L_12317ffc:;
  /* 12317ffc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12317fff mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12318002 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12318005 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12318008 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231800b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 1231800e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12318011 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12318014 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 12318017 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231801a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231801d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 12318020 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12318023 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12318029 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1231802c:;
  /* 1231802c pop edi */
  EDI = (pop32());
  /* 1231802d pop esi */
  ESI = (pop32());
  /* 1231802e pop ebx */
  EBX = (pop32());
  /* 1231802f mov esp, ebp */
  ESP = (EBP);
  /* 12318031 pop ebp */
  EBP = (pop32());
  /* 12318032 ret  */
  ESPCHK(0x12317f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008040 @ 0x12318040 (697 bytes, 253 insns) */
void f_12318040(void) {
  FTRACE(0x12318040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12318040 push ebp */
  push32((uint32_t)(EBP));
  /* 12318041 mov ebp, esp */
  EBP = (ESP);
  /* 12318043 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12318046 push ebx */
  push32((uint32_t)(EBX));
  /* 12318047 push esi */
  push32((uint32_t)(ESI));
  /* 12318048 push edi */
  push32((uint32_t)(EDI));
  /* 12318049 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12318050 push 9 */
  push32((uint32_t)(0x9u));
  /* 12318052 call 0x1231a9b0 */
  push32(0x12318057u); f_1231a9b0();
  /* 12318057 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1231805a:;
  /* 1231805a push 0x1233d4e8 */
  push32((uint32_t)(0x1233d4e8u));
  /* 1231805f push 0x1233cee0 */
  push32((uint32_t)(0x1233cee0u));
  /* 12318064 push 0 */
  push32((uint32_t)(0x0u));
  /* 12318066 push 0 */
  push32((uint32_t)(0x0u));
  /* 12318068 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231806a push 0 */
  push32((uint32_t)(0x0u));
  /* 1231806c call 0x123145a0 */
  push32(0x12318071u); f_123145a0();
  /* 12318071 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12318074 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318077 jne 0x1231807a */
  if (!C.zf) goto L_1231807a;
  /* 12318079 int3  */
  x86_unimpl("int3 @ 0x12318079");
L_1231807a:;
  /* 1231807a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231807c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231807e jne 0x1231805a */
  if (!C.zf) goto L_1231805a;
  /* 12318080 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318084 je 0x1231808e */
  if (C.zf) goto L_1231808e;
  /* 12318086 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12318089 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1231808b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1231808e:;
  /* 1231808e mov eax, dword ptr [0x12341784] */
  EAX = (r32((uint32_t)(0x12341784)));
  /* 12318093 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12318096 jmp 0x123180a0 */
  goto L_123180a0;
L_12318098:;
  /* 12318098 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231809b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1231809d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_123180a0:;
  /* 123180a0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123180a4 je 0x123182c2 */
  if (C.zf) goto L_123182c2;
  /* 123180aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123180ad cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123180b0 je 0x123182c2 */
  if (C.zf) goto L_123182c2;
  /* 123180b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123180b9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 123180bc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 123180c2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123180c5 je 0x123180f4 */
  if (C.zf) goto L_123180f4;
  /* 123180c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123180ca mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 123180cd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 123180d3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123180d5 je 0x123180f4 */
  if (C.zf) goto L_123180f4;
  /* 123180d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123180da mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 123180dd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123180e2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123180e5 jne 0x123180f9 */
  if (!C.zf) goto L_123180f9;
  /* 123180e7 mov ecx, dword ptr [0x1233fa8c] */
  ECX = (r32((uint32_t)(0x1233fa8c)));
  /* 123180ed and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 123180f0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123180f2 jne 0x123180f9 */
  if (!C.zf) goto L_123180f9;
L_123180f4:;
  /* 123180f4 jmp 0x123182bd */
  goto L_123182bd;
L_123180f9:;
  /* 123180f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123180fc cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318100 je 0x12318172 */
  if (C.zf) goto L_12318172;
  /* 12318102 push 0 */
  push32((uint32_t)(0x0u));
  /* 12318104 push 1 */
  push32((uint32_t)(0x1u));
  /* 12318106 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318109 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1231810c push ecx */
  push32((uint32_t)(ECX));
  /* 1231810d call 0x12317bb0 */
  push32(0x12318112u); f_12317bb0();
  /* 12318112 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12318115 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12318117 jne 0x12318143 */
  if (!C.zf) goto L_12318143;
L_12318119:;
  /* 12318119 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231811c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1231811f push eax */
  push32((uint32_t)(EAX));
  /* 12318120 push 0x1233d4d4 */
  push32((uint32_t)(0x1233d4d4u));
  /* 12318125 push 0 */
  push32((uint32_t)(0x0u));
  /* 12318127 push 0 */
  push32((uint32_t)(0x0u));
  /* 12318129 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231812b push 0 */
  push32((uint32_t)(0x0u));
  /* 1231812d call 0x123145a0 */
  push32(0x12318132u); f_123145a0();
  /* 12318132 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12318135 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318138 jne 0x1231813b */
  if (!C.zf) goto L_1231813b;
  /* 1231813a int3  */
  x86_unimpl("int3 @ 0x1231813a");
L_1231813b:;
  /* 1231813b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1231813d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1231813f jne 0x12318119 */
  if (!C.zf) goto L_12318119;
  /* 12318141 jmp 0x12318172 */
  goto L_12318172;
L_12318143:;
  /* 12318143 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318146 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12318149 push eax */
  push32((uint32_t)(EAX));
  /* 1231814a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231814d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12318150 push edx */
  push32((uint32_t)(EDX));
  /* 12318151 push 0x1233d4c8 */
  push32((uint32_t)(0x1233d4c8u));
  /* 12318156 push 0 */
  push32((uint32_t)(0x0u));
  /* 12318158 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231815a push 0 */
  push32((uint32_t)(0x0u));
  /* 1231815c push 0 */
  push32((uint32_t)(0x0u));
  /* 1231815e call 0x123145a0 */
  push32(0x12318163u); f_123145a0();
  /* 12318163 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12318166 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318169 jne 0x1231816c */
  if (!C.zf) goto L_1231816c;
  /* 1231816b int3  */
  x86_unimpl("int3 @ 0x1231816b");
L_1231816c:;
  /* 1231816c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231816e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12318170 jne 0x12318143 */
  if (!C.zf) goto L_12318143;
L_12318172:;
  /* 12318172 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318175 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12318178 push edx */
  push32((uint32_t)(EDX));
  /* 12318179 push 0x1233d4c0 */
  push32((uint32_t)(0x1233d4c0u));
  /* 1231817e push 0 */
  push32((uint32_t)(0x0u));
  /* 12318180 push 0 */
  push32((uint32_t)(0x0u));
  /* 12318182 push 0 */
  push32((uint32_t)(0x0u));
  /* 12318184 push 0 */
  push32((uint32_t)(0x0u));
  /* 12318186 call 0x123145a0 */
  push32(0x1231818bu); f_123145a0();
  /* 1231818b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231818e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318191 jne 0x12318194 */
  if (!C.zf) goto L_12318194;
  /* 12318193 int3  */
  x86_unimpl("int3 @ 0x12318193");
L_12318194:;
  /* 12318194 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12318196 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12318198 jne 0x12318172 */
  if (!C.zf) goto L_12318172;
  /* 1231819a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231819d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 123181a0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 123181a6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123181a9 jne 0x1231821c */
  if (!C.zf) goto L_1231821c;
L_123181ab:;
  /* 123181ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123181ae mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 123181b1 push ecx */
  push32((uint32_t)(ECX));
  /* 123181b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123181b5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 123181b8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 123181bb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123181c0 push eax */
  push32((uint32_t)(EAX));
  /* 123181c1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123181c4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123181c7 push ecx */
  push32((uint32_t)(ECX));
  /* 123181c8 push 0x1233d48c */
  push32((uint32_t)(0x1233d48cu));
  /* 123181cd push 0 */
  push32((uint32_t)(0x0u));
  /* 123181cf push 0 */
  push32((uint32_t)(0x0u));
  /* 123181d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 123181d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123181d5 call 0x123145a0 */
  push32(0x123181dau); f_123145a0();
  /* 123181da add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123181dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123181e0 jne 0x123181e3 */
  if (!C.zf) goto L_123181e3;
  /* 123181e2 int3  */
  x86_unimpl("int3 @ 0x123181e2");
L_123181e3:;
  /* 123181e3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123181e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123181e7 jne 0x123181ab */
  if (!C.zf) goto L_123181ab;
  /* 123181e9 cmp dword ptr [0x123430f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123430f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123181f0 je 0x1231820b */
  if (C.zf) goto L_1231820b;
  /* 123181f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123181f5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 123181f8 push ecx */
  push32((uint32_t)(ECX));
  /* 123181f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123181fc add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123181ff push edx */
  push32((uint32_t)(EDX));
  /* 12318200 call dword ptr [0x123430f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123430f0))), 0x12318206u);
  /* 12318206 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12318209 jmp 0x12318217 */
  goto L_12318217;
L_1231820b:;
  /* 1231820b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231820e push eax */
  push32((uint32_t)(EAX));
  /* 1231820f call 0x12318300 */
  push32(0x12318214u); f_12318300();
  /* 12318214 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12318217:;
  /* 12318217 jmp 0x123182bd */
  goto L_123182bd;
L_1231821c:;
  /* 1231821c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231821f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318223 jne 0x12318262 */
  if (!C.zf) goto L_12318262;
L_12318225:;
  /* 12318225 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318228 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1231822b push eax */
  push32((uint32_t)(EAX));
  /* 1231822c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231822f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12318232 push ecx */
  push32((uint32_t)(ECX));
  /* 12318233 push 0x1233d464 */
  push32((uint32_t)(0x1233d464u));
  /* 12318238 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231823a push 0 */
  push32((uint32_t)(0x0u));
  /* 1231823c push 0 */
  push32((uint32_t)(0x0u));
  /* 1231823e push 0 */
  push32((uint32_t)(0x0u));
  /* 12318240 call 0x123145a0 */
  push32(0x12318245u); f_123145a0();
  /* 12318245 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12318248 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231824b jne 0x1231824e */
  if (!C.zf) goto L_1231824e;
  /* 1231824d int3  */
  x86_unimpl("int3 @ 0x1231824d");
L_1231824e:;
  /* 1231824e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12318250 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12318252 jne 0x12318225 */
  if (!C.zf) goto L_12318225;
  /* 12318254 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318257 push eax */
  push32((uint32_t)(EAX));
  /* 12318258 call 0x12318300 */
  push32(0x1231825du); f_12318300();
  /* 1231825d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12318260 jmp 0x123182bd */
  goto L_123182bd;
L_12318262:;
  /* 12318262 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318265 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12318268 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1231826e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318271 jne 0x123182bd */
  if (!C.zf) goto L_123182bd;
L_12318273:;
  /* 12318273 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318276 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12318279 push ecx */
  push32((uint32_t)(ECX));
  /* 1231827a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231827d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12318280 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12318283 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12318288 push eax */
  push32((uint32_t)(EAX));
  /* 12318289 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231828c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231828f push ecx */
  push32((uint32_t)(ECX));
  /* 12318290 push 0x1233d430 */
  push32((uint32_t)(0x1233d430u));
  /* 12318295 push 0 */
  push32((uint32_t)(0x0u));
  /* 12318297 push 0 */
  push32((uint32_t)(0x0u));
  /* 12318299 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231829b push 0 */
  push32((uint32_t)(0x0u));
  /* 1231829d call 0x123145a0 */
  push32(0x123182a2u); f_123145a0();
  /* 123182a2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123182a5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123182a8 jne 0x123182ab */
  if (!C.zf) goto L_123182ab;
  /* 123182aa int3  */
  x86_unimpl("int3 @ 0x123182aa");
L_123182ab:;
  /* 123182ab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123182ad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123182af jne 0x12318273 */
  if (!C.zf) goto L_12318273;
  /* 123182b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123182b4 push eax */
  push32((uint32_t)(EAX));
  /* 123182b5 call 0x12318300 */
  push32(0x123182bau); f_12318300();
  /* 123182ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123182bd:;
  /* 123182bd jmp 0x12318098 */
  goto L_12318098;
L_123182c2:;
  /* 123182c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 123182c4 call 0x1231aa50 */
  push32(0x123182c9u); f_1231aa50();
  /* 123182c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123182cc:;
  /* 123182cc push 0x1233d418 */
  push32((uint32_t)(0x1233d418u));
  /* 123182d1 push 0x1233cee0 */
  push32((uint32_t)(0x1233cee0u));
  /* 123182d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 123182d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 123182da push 0 */
  push32((uint32_t)(0x0u));
  /* 123182dc push 0 */
  push32((uint32_t)(0x0u));
  /* 123182de call 0x123145a0 */
  push32(0x123182e3u); f_123145a0();
  /* 123182e3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123182e6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123182e9 jne 0x123182ec */
  if (!C.zf) goto L_123182ec;
  /* 123182eb int3  */
  x86_unimpl("int3 @ 0x123182eb");
L_123182ec:;
  /* 123182ec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123182ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123182f0 jne 0x123182cc */
  if (!C.zf) goto L_123182cc;
  /* 123182f2 pop edi */
  EDI = (pop32());
  /* 123182f3 pop esi */
  ESI = (pop32());
  /* 123182f4 pop ebx */
  EBX = (pop32());
  /* 123182f5 mov esp, ebp */
  ESP = (EBP);
  /* 123182f7 pop ebp */
  EBP = (pop32());
  /* 123182f8 ret  */
  ESPCHK(0x12318040u, _esp0);
  ESP += 4; return;
}

/* FUN_10008300 @ 0x12318300 (276 bytes, 89 insns) */
void f_12318300(void) {
  FTRACE(0x12318300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12318300 push ebp */
  push32((uint32_t)(EBP));
  /* 12318301 mov ebp, esp */
  EBP = (ESP);
  /* 12318303 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12318306 push ebx */
  push32((uint32_t)(EBX));
  /* 12318307 push esi */
  push32((uint32_t)(ESI));
  /* 12318308 push edi */
  push32((uint32_t)(EDI));
  /* 12318309 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 12318310 jmp 0x1231831b */
  goto L_1231831b;
L_12318312:;
  /* 12318312 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12318315 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12318318 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_1231831b:;
  /* 1231831b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231831e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318322 jge 0x1231832f */
  if ((C.sf==C.of)) goto L_1231832f;
  /* 12318324 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12318327 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1231832a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 1231832d jmp 0x12318336 */
  goto L_12318336;
L_1231832f:;
  /* 1231832f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_12318336:;
  /* 12318336 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12318339 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231833c jge 0x123183dc */
  if ((C.sf==C.of)) goto L_123183dc;
  /* 12318342 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12318345 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12318348 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 1231834b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 1231834e cmp dword ptr [0x12340158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12340158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318355 jle 0x12318373 */
  if ((C.zf||C.sf!=C.of)) goto L_12318373;
  /* 12318357 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 1231835c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1231835f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12318365 push ecx */
  push32((uint32_t)(ECX));
  /* 12318366 call 0x1231cec0 */
  push32(0x1231836bu); f_1231cec0();
  /* 1231836b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231836e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 12318371 jmp 0x12318390 */
  goto L_12318390;
L_12318373:;
  /* 12318373 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12318376 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1231837c mov eax, dword ptr [0x1233fde8] */
  EAX = (r32((uint32_t)(0x1233fde8)));
  /* 12318381 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12318383 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12318387 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 1231838d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_12318390:;
  /* 12318390 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318394 je 0x123183a4 */
  if (C.zf) goto L_123183a4;
  /* 12318396 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12318399 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1231839f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 123183a2 jmp 0x123183ab */
  goto L_123183ab;
L_123183a4:;
  /* 123183a4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_123183ab:;
  /* 123183ab mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 123183ae mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 123183b1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 123183b5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 123183b8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 123183be push edx */
  push32((uint32_t)(EDX));
  /* 123183bf push 0x1233d50c */
  push32((uint32_t)(0x1233d50cu));
  /* 123183c4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 123183c7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123183ca lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 123183ce push ecx */
  push32((uint32_t)(ECX));
  /* 123183cf call 0x12314110 */
  push32(0x123183d4u); f_12314110();
  /* 123183d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123183d7 jmp 0x12318312 */
  goto L_12318312;
L_123183dc:;
  /* 123183dc mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 123183df mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_123183e4:;
  /* 123183e4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 123183e7 push eax */
  push32((uint32_t)(EAX));
  /* 123183e8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 123183eb push ecx */
  push32((uint32_t)(ECX));
  /* 123183ec push 0x1233d4fc */
  push32((uint32_t)(0x1233d4fcu));
  /* 123183f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 123183f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123183f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123183f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123183f9 call 0x123145a0 */
  push32(0x123183feu); f_123145a0();
  /* 123183fe add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12318401 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318404 jne 0x12318407 */
  if (!C.zf) goto L_12318407;
  /* 12318406 int3  */
  x86_unimpl("int3 @ 0x12318406");
L_12318407:;
  /* 12318407 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12318409 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1231840b jne 0x123183e4 */
  if (!C.zf) goto L_123183e4;
  /* 1231840d pop edi */
  EDI = (pop32());
  /* 1231840e pop esi */
  ESI = (pop32());
  /* 1231840f pop ebx */
  EBX = (pop32());
  /* 12318410 mov esp, ebp */
  ESP = (EBP);
  /* 12318412 pop ebp */
  EBP = (pop32());
  /* 12318413 ret  */
  ESPCHK(0x12318300u, _esp0);
  ESP += 4; return;
}

/* FUN_10008420 @ 0x12318420 (116 bytes, 46 insns) */
void f_12318420(void) {
  FTRACE(0x12318420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12318420 push ebp */
  push32((uint32_t)(EBP));
  /* 12318421 mov ebp, esp */
  EBP = (ESP);
  /* 12318423 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12318426 push ebx */
  push32((uint32_t)(EBX));
  /* 12318427 push esi */
  push32((uint32_t)(ESI));
  /* 12318428 push edi */
  push32((uint32_t)(EDI));
  /* 12318429 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 1231842c push eax */
  push32((uint32_t)(EAX));
  /* 1231842d call 0x12317da0 */
  push32(0x12318432u); f_12317da0();
  /* 12318432 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12318435 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318439 jne 0x12318454 */
  if (!C.zf) goto L_12318454;
  /* 1231843b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231843f jne 0x12318454 */
  if (!C.zf) goto L_12318454;
  /* 12318441 mov ecx, dword ptr [0x1233fa8c] */
  ECX = (r32((uint32_t)(0x1233fa8c)));
  /* 12318447 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1231844a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1231844c je 0x1231848b */
  if (C.zf) goto L_1231848b;
  /* 1231844e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318452 je 0x1231848b */
  if (C.zf) goto L_1231848b;
L_12318454:;
  /* 12318454 push 0x1233d514 */
  push32((uint32_t)(0x1233d514u));
  /* 12318459 push 0x1233cee0 */
  push32((uint32_t)(0x1233cee0u));
  /* 1231845e push 0 */
  push32((uint32_t)(0x0u));
  /* 12318460 push 0 */
  push32((uint32_t)(0x0u));
  /* 12318462 push 0 */
  push32((uint32_t)(0x0u));
  /* 12318464 push 0 */
  push32((uint32_t)(0x0u));
  /* 12318466 call 0x123145a0 */
  push32(0x1231846bu); f_123145a0();
  /* 1231846b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231846e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318471 jne 0x12318474 */
  if (!C.zf) goto L_12318474;
  /* 12318473 int3  */
  x86_unimpl("int3 @ 0x12318473");
L_12318474:;
  /* 12318474 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12318476 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12318478 jne 0x12318454 */
  if (!C.zf) goto L_12318454;
  /* 1231847a push 0 */
  push32((uint32_t)(0x0u));
  /* 1231847c call 0x12318040 */
  push32(0x12318481u); f_12318040();
  /* 12318481 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12318484 mov eax, 1 */
  EAX = (0x1u);
  /* 12318489 jmp 0x1231848d */
  goto L_1231848d;
L_1231848b:;
  /* 1231848b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1231848d:;
  /* 1231848d pop edi */
  EDI = (pop32());
  /* 1231848e pop esi */
  ESI = (pop32());
  /* 1231848f pop ebx */
  EBX = (pop32());
  /* 12318490 mov esp, ebp */
  ESP = (EBP);
  /* 12318492 pop ebp */
  EBP = (pop32());
  /* 12318493 ret  */
  ESPCHK(0x12318420u, _esp0);
  ESP += 4; return;
}

/* FUN_100084a0 @ 0x123184a0 (197 bytes, 79 insns) */
void f_123184a0(void) {
  FTRACE(0x123184a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123184a0 push ebp */
  push32((uint32_t)(EBP));
  /* 123184a1 mov ebp, esp */
  EBP = (ESP);
  /* 123184a3 push ecx */
  push32((uint32_t)(ECX));
  /* 123184a4 push ebx */
  push32((uint32_t)(EBX));
  /* 123184a5 push esi */
  push32((uint32_t)(ESI));
  /* 123184a6 push edi */
  push32((uint32_t)(EDI));
  /* 123184a7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123184ab jne 0x123184b2 */
  if (!C.zf) goto L_123184b2;
  /* 123184ad jmp 0x1231855e */
  goto L_1231855e;
L_123184b2:;
  /* 123184b2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123184b9 jmp 0x123184c4 */
  goto L_123184c4;
L_123184bb:;
  /* 123184bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123184be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123184c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123184c4:;
  /* 123184c4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123184c8 jge 0x1231850e */
  if ((C.sf==C.of)) goto L_1231850e;
L_123184ca:;
  /* 123184ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123184cd mov edx, dword ptr [ecx*4 + 0x1233fa9c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1233fa9c)));
  /* 123184d4 push edx */
  push32((uint32_t)(EDX));
  /* 123184d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123184d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123184db mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 123184df push edx */
  push32((uint32_t)(EDX));
  /* 123184e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123184e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123184e6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 123184ea push edx */
  push32((uint32_t)(EDX));
  /* 123184eb push 0x1233d570 */
  push32((uint32_t)(0x1233d570u));
  /* 123184f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 123184f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123184f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 123184f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 123184f8 call 0x123145a0 */
  push32(0x123184fdu); f_123145a0();
  /* 123184fd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12318500 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318503 jne 0x12318506 */
  if (!C.zf) goto L_12318506;
  /* 12318505 int3  */
  x86_unimpl("int3 @ 0x12318505");
L_12318506:;
  /* 12318506 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12318508 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231850a jne 0x123184ca */
  if (!C.zf) goto L_123184ca;
  /* 1231850c jmp 0x123184bb */
  goto L_123184bb;
L_1231850e:;
  /* 1231850e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12318511 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12318514 push edx */
  push32((uint32_t)(EDX));
  /* 12318515 push 0x1233d54c */
  push32((uint32_t)(0x1233d54cu));
  /* 1231851a push 0 */
  push32((uint32_t)(0x0u));
  /* 1231851c push 0 */
  push32((uint32_t)(0x0u));
  /* 1231851e push 0 */
  push32((uint32_t)(0x0u));
  /* 12318520 push 0 */
  push32((uint32_t)(0x0u));
  /* 12318522 call 0x123145a0 */
  push32(0x12318527u); f_123145a0();
  /* 12318527 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231852a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231852d jne 0x12318530 */
  if (!C.zf) goto L_12318530;
  /* 1231852f int3  */
  x86_unimpl("int3 @ 0x1231852f");
L_12318530:;
  /* 12318530 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12318532 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12318534 jne 0x1231850e */
  if (!C.zf) goto L_1231850e;
L_12318536:;
  /* 12318536 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12318539 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1231853c push edx */
  push32((uint32_t)(EDX));
  /* 1231853d push 0x1233d52c */
  push32((uint32_t)(0x1233d52cu));
  /* 12318542 push 0 */
  push32((uint32_t)(0x0u));
  /* 12318544 push 0 */
  push32((uint32_t)(0x0u));
  /* 12318546 push 0 */
  push32((uint32_t)(0x0u));
  /* 12318548 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231854a call 0x123145a0 */
  push32(0x1231854fu); f_123145a0();
  /* 1231854f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12318552 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318555 jne 0x12318558 */
  if (!C.zf) goto L_12318558;
  /* 12318557 int3  */
  x86_unimpl("int3 @ 0x12318557");
L_12318558:;
  /* 12318558 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231855a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231855c jne 0x12318536 */
  if (!C.zf) goto L_12318536;
L_1231855e:;
  /* 1231855e pop edi */
  EDI = (pop32());
  /* 1231855f pop esi */
  ESI = (pop32());
  /* 12318560 pop ebx */
  EBX = (pop32());
  /* 12318561 mov esp, ebp */
  ESP = (EBP);
  /* 12318563 pop ebp */
  EBP = (pop32());
  /* 12318564 ret  */
  ESPCHK(0x123184a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008570 @ 0x12318570 (329 bytes, 102 insns) */
void f_12318570(void) {
  FTRACE(0x12318570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12318570 push ebp */
  push32((uint32_t)(EBP));
  /* 12318571 mov ebp, esp */
  EBP = (ESP);
  /* 12318573 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12318576 cmp dword ptr [0x12343250], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12343250))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231857d jne 0x12318584 */
  if (!C.zf) goto L_12318584;
  /* 1231857f call 0x1231d760 */
  push32(0x12318584u); f_1231d760();
L_12318584:;
  /* 12318584 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1231858b mov eax, dword ptr [0x12341720] */
  EAX = (r32((uint32_t)(0x12341720)));
  /* 12318590 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12318593:;
  /* 12318593 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318596 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12318599 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1231859b je 0x123185c9 */
  if (C.zf) goto L_123185c9;
  /* 1231859d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123185a0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123185a3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123185a6 je 0x123185b1 */
  if (C.zf) goto L_123185b1;
  /* 123185a8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123185ab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123185ae mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_123185b1:;
  /* 123185b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123185b4 push eax */
  push32((uint32_t)(EAX));
  /* 123185b5 call 0x12319430 */
  push32(0x123185bau); f_12319430();
  /* 123185ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123185bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123185c0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 123185c4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123185c7 jmp 0x12318593 */
  goto L_12318593;
L_123185c9:;
  /* 123185c9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 123185cb push 0x1233d590 */
  push32((uint32_t)(0x1233d590u));
  /* 123185d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 123185d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123185d5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 123185dc push ecx */
  push32((uint32_t)(ECX));
  /* 123185dd call 0x12316600 */
  push32(0x123185e2u); f_12316600();
  /* 123185e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123185e5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123185e8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123185eb mov dword ptr [0x12341754], edx */
  w32((uint32_t)(0x12341754), (EDX));
  /* 123185f1 cmp dword ptr [0x12341754], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341754))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123185f8 jne 0x12318604 */
  if (!C.zf) goto L_12318604;
  /* 123185fa push 9 */
  push32((uint32_t)(0x9u));
  /* 123185fc call 0x12314450 */
  push32(0x12318601u); f_12314450();
  /* 12318601 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12318604:;
  /* 12318604 mov eax, dword ptr [0x12341720] */
  EAX = (r32((uint32_t)(0x12341720)));
  /* 12318609 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1231860c jmp 0x12318617 */
  goto L_12318617;
L_1231860e:;
  /* 1231860e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318611 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12318614 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12318617:;
  /* 12318617 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231861a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1231861d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231861f je 0x12318687 */
  if (C.zf) goto L_12318687;
  /* 12318621 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318624 push ecx */
  push32((uint32_t)(ECX));
  /* 12318625 call 0x12319430 */
  push32(0x1231862au); f_12319430();
  /* 1231862a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231862d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12318630 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12318633 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318636 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12318639 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231863c je 0x12318685 */
  if (C.zf) goto L_12318685;
  /* 1231863e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12318640 push 0x1233d590 */
  push32((uint32_t)(0x1233d590u));
  /* 12318645 push 2 */
  push32((uint32_t)(0x2u));
  /* 12318647 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231864a push ecx */
  push32((uint32_t)(ECX));
  /* 1231864b call 0x12316600 */
  push32(0x12318650u); f_12316600();
  /* 12318650 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12318653 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12318656 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12318658 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231865b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231865e jne 0x1231866a */
  if (!C.zf) goto L_1231866a;
  /* 12318660 push 9 */
  push32((uint32_t)(0x9u));
  /* 12318662 call 0x12314450 */
  push32(0x12318667u); f_12314450();
  /* 12318667 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1231866a:;
  /* 1231866a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231866d push ecx */
  push32((uint32_t)(ECX));
  /* 1231866e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12318671 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12318673 push eax */
  push32((uint32_t)(EAX));
  /* 12318674 call 0x123195b0 */
  push32(0x12318679u); f_123195b0();
  /* 12318679 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231867c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231867f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12318682 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12318685:;
  /* 12318685 jmp 0x1231860e */
  goto L_1231860e;
L_12318687:;
  /* 12318687 push 2 */
  push32((uint32_t)(0x2u));
  /* 12318689 mov edx, dword ptr [0x12341720] */
  EDX = (r32((uint32_t)(0x12341720)));
  /* 1231868f push edx */
  push32((uint32_t)(EDX));
  /* 12318690 call 0x12317090 */
  push32(0x12318695u); f_12317090();
  /* 12318695 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12318698 mov dword ptr [0x12341720], 0 */
  w32((uint32_t)(0x12341720), (0x0u));
  /* 123186a2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123186a5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 123186ab mov dword ptr [0x12343240], 1 */
  w32((uint32_t)(0x12343240), (0x1u));
  /* 123186b5 mov esp, ebp */
  ESP = (EBP);
  /* 123186b7 pop ebp */
  EBP = (pop32());
  /* 123186b8 ret  */
  ESPCHK(0x12318570u, _esp0);
  ESP += 4; return;
}

/* FUN_100086c0 @ 0x123186c0 (216 bytes, 69 insns) */
void f_123186c0(void) {
  FTRACE(0x123186c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123186c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123186c1 mov ebp, esp */
  EBP = (ESP);
  /* 123186c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123186c6 cmp dword ptr [0x12343250], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12343250))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123186cd jne 0x123186d4 */
  if (!C.zf) goto L_123186d4;
  /* 123186cf call 0x1231d760 */
  push32(0x123186d4u); f_1231d760();
L_123186d4:;
  /* 123186d4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 123186d9 push 0x12341790 */
  push32((uint32_t)(0x12341790u));
  /* 123186de push 0 */
  push32((uint32_t)(0x0u));
  /* 123186e0 call dword ptr [0x12344228] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344228))), 0x123186e6u);
  /* 123186e6 mov dword ptr [0x12341764], 0x12341790 */
  w32((uint32_t)(0x12341764), (0x12341790u));
  /* 123186f0 mov eax, dword ptr [0x1234326c] */
  EAX = (r32((uint32_t)(0x1234326c)));
  /* 123186f5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123186f8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123186fa jne 0x12318707 */
  if (!C.zf) goto L_12318707;
  /* 123186fc mov edx, dword ptr [0x12341764] */
  EDX = (r32((uint32_t)(0x12341764)));
  /* 12318702 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12318705 jmp 0x1231870f */
  goto L_1231870f;
L_12318707:;
  /* 12318707 mov eax, dword ptr [0x1234326c] */
  EAX = (r32((uint32_t)(0x1234326c)));
  /* 1231870c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_1231870f:;
  /* 1231870f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12318712 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12318715 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12318718 push edx */
  push32((uint32_t)(EDX));
  /* 12318719 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1231871c push eax */
  push32((uint32_t)(EAX));
  /* 1231871d push 0 */
  push32((uint32_t)(0x0u));
  /* 1231871f push 0 */
  push32((uint32_t)(0x0u));
  /* 12318721 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12318724 push ecx */
  push32((uint32_t)(ECX));
  /* 12318725 call 0x123187a0 */
  push32(0x1231872au); f_123187a0();
  /* 1231872a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231872d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 12318732 push 0x1233d59c */
  push32((uint32_t)(0x1233d59cu));
  /* 12318737 push 2 */
  push32((uint32_t)(0x2u));
  /* 12318739 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231873c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231873f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 12318742 push ecx */
  push32((uint32_t)(ECX));
  /* 12318743 call 0x12316600 */
  push32(0x12318748u); f_12316600();
  /* 12318748 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231874b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1231874e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318752 jne 0x1231875e */
  if (!C.zf) goto L_1231875e;
  /* 12318754 push 8 */
  push32((uint32_t)(0x8u));
  /* 12318756 call 0x12314450 */
  push32(0x1231875bu); f_12314450();
  /* 1231875b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1231875e:;
  /* 1231875e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12318761 push edx */
  push32((uint32_t)(EDX));
  /* 12318762 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12318765 push eax */
  push32((uint32_t)(EAX));
  /* 12318766 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12318769 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231876c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 1231876f push eax */
  push32((uint32_t)(EAX));
  /* 12318770 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12318773 push ecx */
  push32((uint32_t)(ECX));
  /* 12318774 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12318777 push edx */
  push32((uint32_t)(EDX));
  /* 12318778 call 0x123187a0 */
  push32(0x1231877du); f_123187a0();
  /* 1231877d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12318780 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12318783 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12318786 mov dword ptr [0x12341748], eax */
  w32((uint32_t)(0x12341748), (EAX));
  /* 1231878b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231878e mov dword ptr [0x1234174c], ecx */
  w32((uint32_t)(0x1234174c), (ECX));
  /* 12318794 mov esp, ebp */
  ESP = (EBP);
  /* 12318796 pop ebp */
  EBP = (pop32());
  /* 12318797 ret  */
  ESPCHK(0x123186c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100087a0 @ 0x123187a0 (1060 bytes, 360 insns) */
void f_123187a0(void) {
  FTRACE(0x123187a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123187a0 push ebp */
  push32((uint32_t)(EBP));
  /* 123187a1 mov ebp, esp */
  EBP = (ESP);
  /* 123187a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123187a6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123187a9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 123187af mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123187b2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 123187b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123187bb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123187be cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123187c2 je 0x123187d5 */
  if (C.zf) goto L_123187d5;
  /* 123187c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123187c7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123187ca mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 123187cc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123187cf add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123187d2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_123187d5:;
  /* 123187d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123187d8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123187db cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123187de jne 0x123188ad */
  if (!C.zf) goto L_123188ad;
L_123187e4:;
  /* 123187e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123187e7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123187ea mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123187ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123187f0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123187f3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123187f6 je 0x12318872 */
  if (C.zf) goto L_12318872;
  /* 123187f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123187fb movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123187fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12318800 je 0x12318872 */
  if (C.zf) goto L_12318872;
  /* 12318802 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318805 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12318807 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12318809 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231880b mov al, byte ptr [edx + 0x12341c61] */
  AL = (r8((uint32_t)(EDX + 0x12341c61)));
  /* 12318811 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12318814 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12318816 je 0x12318847 */
  if (C.zf) goto L_12318847;
  /* 12318818 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1231881b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1231881d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12318820 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12318823 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12318825 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318829 je 0x12318847 */
  if (C.zf) goto L_12318847;
  /* 1231882b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1231882e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318831 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12318833 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12318835 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12318838 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231883b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1231883e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318841 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12318844 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12318847:;
  /* 12318847 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1231884a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1231884c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231884f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12318852 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12318854 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318858 je 0x1231886d */
  if (C.zf) goto L_1231886d;
  /* 1231885a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1231885d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318860 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12318862 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12318864 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12318867 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231886a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1231886d:;
  /* 1231886d jmp 0x123187e4 */
  goto L_123187e4;
L_12318872:;
  /* 12318872 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12318875 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12318877 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231887a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1231887d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1231887f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318883 je 0x12318894 */
  if (C.zf) goto L_12318894;
  /* 12318885 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12318888 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1231888b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1231888e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12318891 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12318894:;
  /* 12318894 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318897 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1231889a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231889d jne 0x123188a8 */
  if (!C.zf) goto L_123188a8;
  /* 1231889f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123188a2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123188a5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_123188a8:;
  /* 123188a8 jmp 0x1231897c */
  goto L_1231897c;
L_123188ad:;
  /* 123188ad mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123188b0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123188b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123188b5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123188b8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 123188ba cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123188be je 0x123188d3 */
  if (C.zf) goto L_123188d3;
  /* 123188c0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123188c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123188c6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123188c8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 123188ca mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123188cd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123188d0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_123188d3:;
  /* 123188d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123188d6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123188d8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 123188db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123188de add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123188e1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123188e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123188e7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 123188ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123188ef mov dl, byte ptr [ecx + 0x12341c61] */
  DL = (r8((uint32_t)(ECX + 0x12341c61)));
  /* 123188f5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 123188f8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123188fa je 0x1231892b */
  if (C.zf) goto L_1231892b;
  /* 123188fc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123188ff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12318901 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12318904 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12318907 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12318909 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231890d je 0x12318922 */
  if (C.zf) goto L_12318922;
  /* 1231890f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12318912 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318915 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12318917 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12318919 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1231891c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231891f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12318922:;
  /* 12318922 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318925 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12318928 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1231892b:;
  /* 1231892b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231892e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12318934 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318937 je 0x12318957 */
  if (C.zf) goto L_12318957;
  /* 12318939 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231893c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12318941 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12318943 je 0x12318957 */
  if (C.zf) goto L_12318957;
  /* 12318945 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12318948 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1231894e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318951 jne 0x123188ad */
  if (!C.zf) goto L_123188ad;
L_12318957:;
  /* 12318957 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231895a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12318960 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12318962 jne 0x1231896f */
  if (!C.zf) goto L_1231896f;
  /* 12318964 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318967 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231896a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1231896d jmp 0x1231897c */
  goto L_1231897c;
L_1231896f:;
  /* 1231896f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318973 je 0x1231897c */
  if (C.zf) goto L_1231897c;
  /* 12318975 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12318978 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_1231897c:;
  /* 1231897c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12318983:;
  /* 12318983 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318986 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12318989 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231898b je 0x123189ae */
  if (C.zf) goto L_123189ae;
L_1231898d:;
  /* 1231898d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318990 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12318993 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318996 je 0x123189a3 */
  if (C.zf) goto L_123189a3;
  /* 12318998 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231899b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1231899e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123189a1 jne 0x123189ae */
  if (!C.zf) goto L_123189ae;
L_123189a3:;
  /* 123189a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123189a6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123189a9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123189ac jmp 0x1231898d */
  goto L_1231898d;
L_123189ae:;
  /* 123189ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123189b1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123189b4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123189b6 jne 0x123189bd */
  if (!C.zf) goto L_123189bd;
  /* 123189b8 jmp 0x12318b9b */
  goto L_12318b9b;
L_123189bd:;
  /* 123189bd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123189c1 je 0x123189d4 */
  if (C.zf) goto L_123189d4;
  /* 123189c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123189c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123189c9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 123189cb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123189ce add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123189d1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_123189d4:;
  /* 123189d4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123189d7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123189d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123189dc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123189df mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_123189e1:;
  /* 123189e1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 123189e8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_123189ef:;
  /* 123189ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123189f2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123189f5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123189f8 jne 0x12318a0e */
  if (!C.zf) goto L_12318a0e;
  /* 123189fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123189fd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12318a00 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12318a03 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12318a06 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12318a09 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12318a0c jmp 0x123189ef */
  goto L_123189ef;
L_12318a0e:;
  /* 12318a0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318a11 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12318a14 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318a17 jne 0x12318a6a */
  if (!C.zf) goto L_12318a6a;
  /* 12318a19 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12318a1c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12318a1e mov ecx, 2 */
  ECX = (0x2u);
  /* 12318a23 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12318a25 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12318a27 jne 0x12318a62 */
  if (!C.zf) goto L_12318a62;
  /* 12318a29 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318a2d je 0x12318a4f */
  if (C.zf) goto L_12318a4f;
  /* 12318a2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318a32 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12318a36 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318a39 jne 0x12318a46 */
  if (!C.zf) goto L_12318a46;
  /* 12318a3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318a3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12318a41 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12318a44 jmp 0x12318a4d */
  goto L_12318a4d;
L_12318a46:;
  /* 12318a46 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12318a4d:;
  /* 12318a4d jmp 0x12318a56 */
  goto L_12318a56;
L_12318a4f:;
  /* 12318a4f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12318a56:;
  /* 12318a56 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12318a58 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318a5c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 12318a5f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12318a62:;
  /* 12318a62 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12318a65 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12318a67 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12318a6a:;
  /* 12318a6a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12318a6d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12318a70 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12318a73 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12318a76 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12318a78 je 0x12318a9e */
  if (C.zf) goto L_12318a9e;
  /* 12318a7a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318a7e je 0x12318a8f */
  if (C.zf) goto L_12318a8f;
  /* 12318a80 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12318a83 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 12318a86 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12318a89 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12318a8c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_12318a8f:;
  /* 12318a8f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12318a92 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12318a94 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12318a97 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12318a9a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12318a9c jmp 0x12318a6a */
  goto L_12318a6a;
L_12318a9e:;
  /* 12318a9e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318aa1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12318aa4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12318aa6 je 0x12318ac4 */
  if (C.zf) goto L_12318ac4;
  /* 12318aa8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318aac jne 0x12318ac9 */
  if (!C.zf) goto L_12318ac9;
  /* 12318aae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318ab1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12318ab4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318ab7 je 0x12318ac4 */
  if (C.zf) goto L_12318ac4;
  /* 12318ab9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318abc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12318abf cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318ac2 jne 0x12318ac9 */
  if (!C.zf) goto L_12318ac9;
L_12318ac4:;
  /* 12318ac4 jmp 0x12318b74 */
  goto L_12318b74;
L_12318ac9:;
  /* 12318ac9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318acd je 0x12318b66 */
  if (C.zf) goto L_12318b66;
  /* 12318ad3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318ad7 je 0x12318b2d */
  if (C.zf) goto L_12318b2d;
  /* 12318ad9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318adc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12318ade mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12318ae0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12318ae2 mov cl, byte ptr [eax + 0x12341c61] */
  CL = (r8((uint32_t)(EAX + 0x12341c61)));
  /* 12318ae8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12318aeb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12318aed je 0x12318b18 */
  if (C.zf) goto L_12318b18;
  /* 12318aef mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12318af2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318af5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12318af7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12318af9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12318afc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12318aff mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 12318b02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318b05 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12318b08 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12318b0b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12318b0e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12318b10 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12318b13 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12318b16 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12318b18:;
  /* 12318b18 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12318b1b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318b1e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12318b20 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12318b22 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12318b25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12318b28 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12318b2b jmp 0x12318b59 */
  goto L_12318b59;
L_12318b2d:;
  /* 12318b2d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318b30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12318b32 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12318b34 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12318b36 mov cl, byte ptr [eax + 0x12341c61] */
  CL = (r8((uint32_t)(EAX + 0x12341c61)));
  /* 12318b3c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12318b3f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12318b41 je 0x12318b59 */
  if (C.zf) goto L_12318b59;
  /* 12318b43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318b46 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12318b49 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12318b4c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12318b4f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12318b51 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12318b54 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12318b57 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12318b59:;
  /* 12318b59 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12318b5c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12318b5e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12318b61 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12318b64 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12318b66:;
  /* 12318b66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318b69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12318b6c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12318b6f jmp 0x123189e1 */
  goto L_123189e1;
L_12318b74:;
  /* 12318b74 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318b78 je 0x12318b89 */
  if (C.zf) goto L_12318b89;
  /* 12318b7a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12318b7d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12318b80 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12318b83 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12318b86 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12318b89:;
  /* 12318b89 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12318b8c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12318b8e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12318b91 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12318b94 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12318b96 jmp 0x12318983 */
  goto L_12318983;
L_12318b9b:;
  /* 12318b9b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318b9f je 0x12318bb3 */
  if (C.zf) goto L_12318bb3;
  /* 12318ba1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12318ba4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12318baa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12318bad add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12318bb0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12318bb3:;
  /* 12318bb3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12318bb6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12318bb8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12318bbb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12318bbe mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12318bc0 mov esp, ebp */
  ESP = (EBP);
  /* 12318bc2 pop ebp */
  EBP = (pop32());
  /* 12318bc3 ret  */
  ESPCHK(0x123187a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008bd0 @ 0x12318bd0 (537 bytes, 173 insns) */
void f_12318bd0(void) {
  FTRACE(0x12318bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12318bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12318bd1 mov ebp, esp */
  EBP = (ESP);
  /* 12318bd3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12318bd6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12318bdd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12318be4 cmp dword ptr [0x12341894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318beb jne 0x12318c2a */
  if (!C.zf) goto L_12318c2a;
  /* 12318bed call dword ptr [0x12344284] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344284))), 0x12318bf3u);
  /* 12318bf3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12318bf6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318bfa je 0x12318c08 */
  if (C.zf) goto L_12318c08;
  /* 12318bfc mov dword ptr [0x12341894], 1 */
  w32((uint32_t)(0x12341894), (0x1u));
  /* 12318c06 jmp 0x12318c2a */
  goto L_12318c2a;
L_12318c08:;
  /* 12318c08 call dword ptr [0x12344280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344280))), 0x12318c0eu);
  /* 12318c0e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12318c11 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318c15 je 0x12318c23 */
  if (C.zf) goto L_12318c23;
  /* 12318c17 mov dword ptr [0x12341894], 2 */
  w32((uint32_t)(0x12341894), (0x2u));
  /* 12318c21 jmp 0x12318c2a */
  goto L_12318c2a;
L_12318c23:;
  /* 12318c23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12318c25 jmp 0x12318de5 */
  goto L_12318de5;
L_12318c2a:;
  /* 12318c2a cmp dword ptr [0x12341894], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12341894))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318c31 jne 0x12318d2e */
  if (!C.zf) goto L_12318d2e;
  /* 12318c37 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318c3b jne 0x12318c53 */
  if (!C.zf) goto L_12318c53;
  /* 12318c3d call dword ptr [0x12344284] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344284))), 0x12318c43u);
  /* 12318c43 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12318c46 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318c4a jne 0x12318c53 */
  if (!C.zf) goto L_12318c53;
  /* 12318c4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12318c4e jmp 0x12318de5 */
  goto L_12318de5;
L_12318c53:;
  /* 12318c53 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12318c56 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12318c59:;
  /* 12318c59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12318c5c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12318c5e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12318c61 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12318c63 je 0x12318c85 */
  if (C.zf) goto L_12318c85;
  /* 12318c65 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12318c68 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12318c6b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12318c6e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12318c71 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12318c73 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12318c76 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12318c78 jne 0x12318c83 */
  if (!C.zf) goto L_12318c83;
  /* 12318c7a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12318c7d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12318c80 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12318c83:;
  /* 12318c83 jmp 0x12318c59 */
  goto L_12318c59;
L_12318c85:;
  /* 12318c85 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12318c88 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12318c8b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12318c8d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12318c90 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12318c93 push 0 */
  push32((uint32_t)(0x0u));
  /* 12318c95 push 0 */
  push32((uint32_t)(0x0u));
  /* 12318c97 push 0 */
  push32((uint32_t)(0x0u));
  /* 12318c99 push 0 */
  push32((uint32_t)(0x0u));
  /* 12318c9b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318c9e push edx */
  push32((uint32_t)(EDX));
  /* 12318c9f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12318ca2 push eax */
  push32((uint32_t)(EAX));
  /* 12318ca3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12318ca5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12318ca7 call dword ptr [0x1234427c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1234427c))), 0x12318cadu);
  /* 12318cad mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12318cb0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318cb4 je 0x12318cd4 */
  if (C.zf) goto L_12318cd4;
  /* 12318cb6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12318cb8 push 0x1233d5a8 */
  push32((uint32_t)(0x1233d5a8u));
  /* 12318cbd push 2 */
  push32((uint32_t)(0x2u));
  /* 12318cbf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12318cc2 push ecx */
  push32((uint32_t)(ECX));
  /* 12318cc3 call 0x12316600 */
  push32(0x12318cc8u); f_12316600();
  /* 12318cc8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12318ccb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12318cce cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318cd2 jne 0x12318ce5 */
  if (!C.zf) goto L_12318ce5;
L_12318cd4:;
  /* 12318cd4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12318cd7 push edx */
  push32((uint32_t)(EDX));
  /* 12318cd8 call dword ptr [0x12344278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344278))), 0x12318cdeu);
  /* 12318cde xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12318ce0 jmp 0x12318de5 */
  goto L_12318de5;
L_12318ce5:;
  /* 12318ce5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12318ce7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12318ce9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12318cec push eax */
  push32((uint32_t)(EAX));
  /* 12318ced mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12318cf0 push ecx */
  push32((uint32_t)(ECX));
  /* 12318cf1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318cf4 push edx */
  push32((uint32_t)(EDX));
  /* 12318cf5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12318cf8 push eax */
  push32((uint32_t)(EAX));
  /* 12318cf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12318cfb push 0 */
  push32((uint32_t)(0x0u));
  /* 12318cfd call dword ptr [0x1234427c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1234427c))), 0x12318d03u);
  /* 12318d03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12318d05 jne 0x12318d1c */
  if (!C.zf) goto L_12318d1c;
  /* 12318d07 push 2 */
  push32((uint32_t)(0x2u));
  /* 12318d09 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12318d0c push ecx */
  push32((uint32_t)(ECX));
  /* 12318d0d call 0x12317090 */
  push32(0x12318d12u); f_12317090();
  /* 12318d12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12318d15 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12318d1c:;
  /* 12318d1c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12318d1f push edx */
  push32((uint32_t)(EDX));
  /* 12318d20 call dword ptr [0x12344278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344278))), 0x12318d26u);
  /* 12318d26 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12318d29 jmp 0x12318de5 */
  goto L_12318de5;
L_12318d2e:;
  /* 12318d2e cmp dword ptr [0x12341894], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12341894))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318d35 jne 0x12318de3 */
  if (!C.zf) goto L_12318de3;
  /* 12318d3b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318d3f jne 0x12318d57 */
  if (!C.zf) goto L_12318d57;
  /* 12318d41 call dword ptr [0x12344280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344280))), 0x12318d47u);
  /* 12318d47 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12318d4a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318d4e jne 0x12318d57 */
  if (!C.zf) goto L_12318d57;
  /* 12318d50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12318d52 jmp 0x12318de5 */
  goto L_12318de5;
L_12318d57:;
  /* 12318d57 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12318d5a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12318d5d:;
  /* 12318d5d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12318d60 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12318d63 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12318d65 je 0x12318d85 */
  if (C.zf) goto L_12318d85;
  /* 12318d67 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12318d6a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12318d6d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12318d70 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12318d73 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12318d76 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12318d78 jne 0x12318d83 */
  if (!C.zf) goto L_12318d83;
  /* 12318d7a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12318d7d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12318d80 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12318d83:;
  /* 12318d83 jmp 0x12318d5d */
  goto L_12318d5d;
L_12318d85:;
  /* 12318d85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12318d88 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12318d8b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12318d8e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12318d91 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 12318d96 push 0x1233d5a8 */
  push32((uint32_t)(0x1233d5a8u));
  /* 12318d9b push 2 */
  push32((uint32_t)(0x2u));
  /* 12318d9d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12318da0 push edx */
  push32((uint32_t)(EDX));
  /* 12318da1 call 0x12316600 */
  push32(0x12318da6u); f_12316600();
  /* 12318da6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12318da9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12318dac cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318db0 jne 0x12318dc0 */
  if (!C.zf) goto L_12318dc0;
  /* 12318db2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12318db5 push eax */
  push32((uint32_t)(EAX));
  /* 12318db6 call dword ptr [0x12344274] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344274))), 0x12318dbcu);
  /* 12318dbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12318dbe jmp 0x12318de5 */
  goto L_12318de5;
L_12318dc0:;
  /* 12318dc0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12318dc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12318dc4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12318dc7 push edx */
  push32((uint32_t)(EDX));
  /* 12318dc8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12318dcb push eax */
  push32((uint32_t)(EAX));
  /* 12318dcc call 0x1231d790 */
  push32(0x12318dd1u); f_1231d790();
  /* 12318dd1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12318dd4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12318dd7 push ecx */
  push32((uint32_t)(ECX));
  /* 12318dd8 call dword ptr [0x12344274] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344274))), 0x12318ddeu);
  /* 12318dde mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12318de1 jmp 0x12318de5 */
  goto L_12318de5;
L_12318de3:;
  /* 12318de3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12318de5:;
  /* 12318de5 mov esp, ebp */
  ESP = (EBP);
  /* 12318de7 pop ebp */
  EBP = (pop32());
  /* 12318de8 ret  */
  ESPCHK(0x12318bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008df0 @ 0x12318df0 (77 bytes, 25 insns) */
void f_12318df0(void) {
  FTRACE(0x12318df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12318df0 push ebp */
  push32((uint32_t)(EBP));
  /* 12318df1 mov ebp, esp */
  EBP = (ESP);
  /* 12318df3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12318df5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12318dfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12318dfc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318e00 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 12318e03 push eax */
  push32((uint32_t)(EAX));
  /* 12318e04 call dword ptr [0x123441fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123441fc))), 0x12318e0au);
  /* 12318e0a mov dword ptr [0x123430e4], eax */
  w32((uint32_t)(0x123430e4), (EAX));
  /* 12318e0f cmp dword ptr [0x123430e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123430e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318e16 jne 0x12318e1c */
  if (!C.zf) goto L_12318e1c;
  /* 12318e18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12318e1a jmp 0x12318e3b */
  goto L_12318e3b;
L_12318e1c:;
  /* 12318e1c call 0x1231b250 */
  push32(0x12318e21u); f_1231b250();
  /* 12318e21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12318e23 jne 0x12318e36 */
  if (!C.zf) goto L_12318e36;
  /* 12318e25 mov ecx, dword ptr [0x123430e4] */
  ECX = (r32((uint32_t)(0x123430e4)));
  /* 12318e2b push ecx */
  push32((uint32_t)(ECX));
  /* 12318e2c call dword ptr [0x123441f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123441f4))), 0x12318e32u);
  /* 12318e32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12318e34 jmp 0x12318e3b */
  goto L_12318e3b;
L_12318e36:;
  /* 12318e36 mov eax, 1 */
  EAX = (0x1u);
L_12318e3b:;
  /* 12318e3b pop ebp */
  EBP = (pop32());
  /* 12318e3c ret  */
  ESPCHK(0x12318df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e40 @ 0x12318e40 (156 bytes, 48 insns) */
void f_12318e40(void) {
  FTRACE(0x12318e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12318e40 push ebp */
  push32((uint32_t)(EBP));
  /* 12318e41 mov ebp, esp */
  EBP = (ESP);
  /* 12318e43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12318e46 mov eax, dword ptr [0x12341d88] */
  EAX = (r32((uint32_t)(0x12341d88)));
  /* 12318e4b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12318e4e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12318e55 jmp 0x12318e60 */
  goto L_12318e60;
L_12318e57:;
  /* 12318e57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318e5a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12318e5d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12318e60:;
  /* 12318e60 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12318e63 cmp edx, dword ptr [0x12341d84] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12341d84))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318e69 jge 0x12318eb6 */
  if ((C.sf==C.of)) goto L_12318eb6;
  /* 12318e6b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12318e70 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12318e75 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12318e78 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12318e7b push ecx */
  push32((uint32_t)(ECX));
  /* 12318e7c call dword ptr [0x12344294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344294))), 0x12318e82u);
  /* 12318e82 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12318e87 push 0 */
  push32((uint32_t)(0x0u));
  /* 12318e89 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12318e8c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12318e8f push eax */
  push32((uint32_t)(EAX));
  /* 12318e90 call dword ptr [0x12344294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344294))), 0x12318e96u);
  /* 12318e96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12318e99 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12318e9c push edx */
  push32((uint32_t)(EDX));
  /* 12318e9d push 0 */
  push32((uint32_t)(0x0u));
  /* 12318e9f mov eax, dword ptr [0x123430e4] */
  EAX = (r32((uint32_t)(0x123430e4)));
  /* 12318ea4 push eax */
  push32((uint32_t)(EAX));
  /* 12318ea5 call dword ptr [0x12344200] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344200))), 0x12318eabu);
  /* 12318eab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12318eae add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12318eb1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12318eb4 jmp 0x12318e57 */
  goto L_12318e57;
L_12318eb6:;
  /* 12318eb6 mov edx, dword ptr [0x12341d88] */
  EDX = (r32((uint32_t)(0x12341d88)));
  /* 12318ebc push edx */
  push32((uint32_t)(EDX));
  /* 12318ebd push 0 */
  push32((uint32_t)(0x0u));
  /* 12318ebf mov eax, dword ptr [0x123430e4] */
  EAX = (r32((uint32_t)(0x123430e4)));
  /* 12318ec4 push eax */
  push32((uint32_t)(EAX));
  /* 12318ec5 call dword ptr [0x12344200] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344200))), 0x12318ecbu);
  /* 12318ecb mov ecx, dword ptr [0x123430e4] */
  ECX = (r32((uint32_t)(0x123430e4)));
  /* 12318ed1 push ecx */
  push32((uint32_t)(ECX));
  /* 12318ed2 call dword ptr [0x123441f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123441f4))), 0x12318ed8u);
  /* 12318ed8 mov esp, ebp */
  ESP = (EBP);
  /* 12318eda pop ebp */
  EBP = (pop32());
  /* 12318edb ret  */
  ESPCHK(0x12318e40u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x12318ee0 (73 bytes, 19 insns) */
void f_12318ee0(void) {
  FTRACE(0x12318ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12318ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 12318ee1 mov ebp, esp */
  EBP = (ESP);
  /* 12318ee3 cmp dword ptr [0x12341728], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12341728))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318eea je 0x12318efe */
  if (C.zf) goto L_12318efe;
  /* 12318eec cmp dword ptr [0x12341728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318ef3 jne 0x12318f27 */
  if (!C.zf) goto L_12318f27;
  /* 12318ef5 cmp dword ptr [0x1234172c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1234172c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318efc jne 0x12318f27 */
  if (!C.zf) goto L_12318f27;
L_12318efe:;
  /* 12318efe push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 12318f03 call 0x12318f30 */
  push32(0x12318f08u); f_12318f30();
  /* 12318f08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12318f0b cmp dword ptr [0x12341898], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341898))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318f12 je 0x12318f1a */
  if (C.zf) goto L_12318f1a;
  /* 12318f14 call dword ptr [0x12341898] */
  call_ind((uint32_t)(r32((uint32_t)(0x12341898))), 0x12318f1au);
L_12318f1a:;
  /* 12318f1a push 0xff */
  push32((uint32_t)(0xffu));
  /* 12318f1f call 0x12318f30 */
  push32(0x12318f24u); f_12318f30();
  /* 12318f24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12318f27:;
  /* 12318f27 pop ebp */
  EBP = (pop32());
  /* 12318f28 ret  */
  ESPCHK(0x12318ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f30 @ 0x12318f30 (447 bytes, 131 insns) */
void f_12318f30(void) {
  FTRACE(0x12318f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12318f30 push ebp */
  push32((uint32_t)(EBP));
  /* 12318f31 mov ebp, esp */
  EBP = (ESP);
  /* 12318f33 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12318f39 push ebx */
  push32((uint32_t)(EBX));
  /* 12318f3a push esi */
  push32((uint32_t)(ESI));
  /* 12318f3b push edi */
  push32((uint32_t)(EDI));
  /* 12318f3c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12318f43 jmp 0x12318f4e */
  goto L_12318f4e;
L_12318f45:;
  /* 12318f45 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12318f48 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12318f4b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12318f4e:;
  /* 12318f4e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318f52 jae 0x12318f67 */
  if (!C.cf) goto L_12318f67;
  /* 12318f54 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12318f57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12318f5a cmp edx, dword ptr [ecx*8 + 0x1233fab8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1233fab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318f61 jne 0x12318f65 */
  if (!C.zf) goto L_12318f65;
  /* 12318f63 jmp 0x12318f67 */
  goto L_12318f67;
L_12318f65:;
  /* 12318f65 jmp 0x12318f45 */
  goto L_12318f45;
L_12318f67:;
  /* 12318f67 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12318f6a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12318f6d cmp ecx, dword ptr [eax*8 + 0x1233fab8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1233fab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318f74 jne 0x123190e8 */
  if (!C.zf) goto L_123190e8;
  /* 12318f7a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318f81 je 0x12318fa4 */
  if (C.zf) goto L_12318fa4;
  /* 12318f83 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12318f86 mov eax, dword ptr [edx*8 + 0x1233fabc] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1233fabc)));
  /* 12318f8d push eax */
  push32((uint32_t)(EAX));
  /* 12318f8e push 0 */
  push32((uint32_t)(0x0u));
  /* 12318f90 push 0 */
  push32((uint32_t)(0x0u));
  /* 12318f92 push 0 */
  push32((uint32_t)(0x0u));
  /* 12318f94 push 1 */
  push32((uint32_t)(0x1u));
  /* 12318f96 call 0x123145a0 */
  push32(0x12318f9bu); f_123145a0();
  /* 12318f9b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12318f9e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318fa1 jne 0x12318fa4 */
  if (!C.zf) goto L_12318fa4;
  /* 12318fa3 int3  */
  x86_unimpl("int3 @ 0x12318fa3");
L_12318fa4:;
  /* 12318fa4 cmp dword ptr [0x12341728], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12341728))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318fab je 0x12318fbf */
  if (C.zf) goto L_12318fbf;
  /* 12318fad cmp dword ptr [0x12341728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318fb4 jne 0x12318ff8 */
  if (!C.zf) goto L_12318ff8;
  /* 12318fb6 cmp dword ptr [0x1234172c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1234172c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318fbd jne 0x12318ff8 */
  if (!C.zf) goto L_12318ff8;
L_12318fbf:;
  /* 12318fbf push 0 */
  push32((uint32_t)(0x0u));
  /* 12318fc1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12318fc4 push ecx */
  push32((uint32_t)(ECX));
  /* 12318fc5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12318fc8 mov eax, dword ptr [edx*8 + 0x1233fabc] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1233fabc)));
  /* 12318fcf push eax */
  push32((uint32_t)(EAX));
  /* 12318fd0 call 0x12319430 */
  push32(0x12318fd5u); f_12319430();
  /* 12318fd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12318fd8 push eax */
  push32((uint32_t)(EAX));
  /* 12318fd9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12318fdc mov edx, dword ptr [ecx*8 + 0x1233fabc] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1233fabc)));
  /* 12318fe3 push edx */
  push32((uint32_t)(EDX));
  /* 12318fe4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12318fe6 call dword ptr [0x12344210] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344210))), 0x12318fecu);
  /* 12318fec push eax */
  push32((uint32_t)(EAX));
  /* 12318fed call dword ptr [0x12344214] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344214))), 0x12318ff3u);
  /* 12318ff3 jmp 0x123190e8 */
  goto L_123190e8;
L_12318ff8:;
  /* 12318ff8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12318fff je 0x123190e8 */
  if (C.zf) goto L_123190e8;
  /* 12319005 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1231900a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 12319010 push eax */
  push32((uint32_t)(EAX));
  /* 12319011 push 0 */
  push32((uint32_t)(0x0u));
  /* 12319013 call dword ptr [0x12344228] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344228))), 0x12319019u);
  /* 12319019 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231901b jne 0x12319031 */
  if (!C.zf) goto L_12319031;
  /* 1231901d push 0x1233cd28 */
  push32((uint32_t)(0x1233cd28u));
  /* 12319022 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12319028 push ecx */
  push32((uint32_t)(ECX));
  /* 12319029 call 0x123195b0 */
  push32(0x1231902eu); f_123195b0();
  /* 1231902e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12319031:;
  /* 12319031 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 12319037 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1231903a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231903d push eax */
  push32((uint32_t)(EAX));
  /* 1231903e call 0x12319430 */
  push32(0x12319043u); f_12319430();
  /* 12319043 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12319046 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12319049 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231904c jbe 0x1231907a */
  if ((C.cf||C.zf)) goto L_1231907a;
  /* 1231904e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12319054 push ecx */
  push32((uint32_t)(ECX));
  /* 12319055 call 0x12319430 */
  push32(0x1231905au); f_12319430();
  /* 1231905a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231905d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12319060 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 12319064 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12319067 push 3 */
  push32((uint32_t)(0x3u));
  /* 12319069 push 0x1233cd24 */
  push32((uint32_t)(0x1233cd24u));
  /* 1231906e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12319071 push ecx */
  push32((uint32_t)(ECX));
  /* 12319072 call 0x12319e20 */
  push32(0x12319077u); f_12319e20();
  /* 12319077 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1231907a:;
  /* 1231907a push 0x1233d864 */
  push32((uint32_t)(0x1233d864u));
  /* 1231907f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12319085 push edx */
  push32((uint32_t)(EDX));
  /* 12319086 call 0x123195b0 */
  push32(0x1231908bu); f_123195b0();
  /* 1231908b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231908e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12319091 push eax */
  push32((uint32_t)(EAX));
  /* 12319092 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 12319098 push ecx */
  push32((uint32_t)(ECX));
  /* 12319099 call 0x123195c0 */
  push32(0x1231909eu); f_123195c0();
  /* 1231909e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123190a1 push 0x1233cc9c */
  push32((uint32_t)(0x1233cc9cu));
  /* 123190a6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 123190ac push edx */
  push32((uint32_t)(EDX));
  /* 123190ad call 0x123195c0 */
  push32(0x123190b2u); f_123195c0();
  /* 123190b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123190b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123190b8 mov ecx, dword ptr [eax*8 + 0x1233fabc] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1233fabc)));
  /* 123190bf push ecx */
  push32((uint32_t)(ECX));
  /* 123190c0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 123190c6 push edx */
  push32((uint32_t)(EDX));
  /* 123190c7 call 0x123195c0 */
  push32(0x123190ccu); f_123195c0();
  /* 123190cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123190cf push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 123190d4 push 0x1233d83c */
  push32((uint32_t)(0x1233d83cu));
  /* 123190d9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 123190df push eax */
  push32((uint32_t)(EAX));
  /* 123190e0 call 0x12319d60 */
  push32(0x123190e5u); f_12319d60();
  /* 123190e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123190e8:;
  /* 123190e8 pop edi */
  EDI = (pop32());
  /* 123190e9 pop esi */
  ESI = (pop32());
  /* 123190ea pop ebx */
  EBX = (pop32());
  /* 123190eb mov esp, ebp */
  ESP = (EBP);
  /* 123190ed pop ebp */
  EBP = (pop32());
  /* 123190ee ret  */
  ESPCHK(0x12318f30u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x123190f0 (80 bytes, 27 insns) */
void f_123190f0(void) {
  FTRACE(0x123190f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123190f0 push ebp */
  push32((uint32_t)(EBP));
  /* 123190f1 mov ebp, esp */
  EBP = (ESP);
  /* 123190f3 push ecx */
  push32((uint32_t)(ECX));
  /* 123190f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123190fb jmp 0x12319106 */
  goto L_12319106;
L_123190fd:;
  /* 123190fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12319100 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12319103 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12319106:;
  /* 12319106 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231910a jae 0x1231911f */
  if (!C.cf) goto L_1231911f;
  /* 1231910c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231910f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12319112 cmp edx, dword ptr [ecx*8 + 0x1233fab8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1233fab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319119 jne 0x1231911d */
  if (!C.zf) goto L_1231911d;
  /* 1231911b jmp 0x1231911f */
  goto L_1231911f;
L_1231911d:;
  /* 1231911d jmp 0x123190fd */
  goto L_123190fd;
L_1231911f:;
  /* 1231911f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12319122 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12319125 cmp ecx, dword ptr [eax*8 + 0x1233fab8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1233fab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231912c jne 0x1231913a */
  if (!C.zf) goto L_1231913a;
  /* 1231912e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12319131 mov eax, dword ptr [edx*8 + 0x1233fabc] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1233fabc)));
  /* 12319138 jmp 0x1231913c */
  goto L_1231913c;
L_1231913a:;
  /* 1231913a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1231913c:;
  /* 1231913c mov esp, ebp */
  ESP = (EBP);
  /* 1231913e pop ebp */
  EBP = (pop32());
  /* 1231913f ret  */
  ESPCHK(0x123190f0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x12319140 (66 bytes, 28 insns) */
void f_12319140(void) {
  FTRACE(0x12319140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12319140 push ebp */
  push32((uint32_t)(EBP));
  /* 12319141 mov ebp, esp */
  EBP = (ESP);
  /* 12319143 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319147 jne 0x12319167 */
  if (!C.zf) goto L_12319167;
  /* 12319149 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231914d jge 0x12319167 */
  if ((C.sf==C.of)) goto L_12319167;
  /* 1231914f push 1 */
  push32((uint32_t)(0x1u));
  /* 12319151 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12319154 push eax */
  push32((uint32_t)(EAX));
  /* 12319155 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12319158 push ecx */
  push32((uint32_t)(ECX));
  /* 12319159 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231915c push edx */
  push32((uint32_t)(EDX));
  /* 1231915d call 0x12319190 */
  push32(0x12319162u); f_12319190();
  /* 12319162 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12319165 jmp 0x1231917d */
  goto L_1231917d;
L_12319167:;
  /* 12319167 push 0 */
  push32((uint32_t)(0x0u));
  /* 12319169 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1231916c push eax */
  push32((uint32_t)(EAX));
  /* 1231916d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12319170 push ecx */
  push32((uint32_t)(ECX));
  /* 12319171 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12319174 push edx */
  push32((uint32_t)(EDX));
  /* 12319175 call 0x12319190 */
  push32(0x1231917au); f_12319190();
  /* 1231917a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1231917d:;
  /* 1231917d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12319180 pop ebp */
  EBP = (pop32());
  /* 12319181 ret  */
  ESPCHK(0x12319140u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x12319190 (194 bytes, 71 insns) */
void f_12319190(void) {
  FTRACE(0x12319190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12319190 push ebp */
  push32((uint32_t)(EBP));
  /* 12319191 mov ebp, esp */
  EBP = (ESP);
  /* 12319193 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12319196 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12319199 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1231919c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123191a0 je 0x123191b9 */
  if (C.zf) goto L_123191b9;
  /* 123191a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123191a5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 123191a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123191ab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123191ae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123191b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123191b4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 123191b6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_123191b9:;
  /* 123191b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123191bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_123191bf:;
  /* 123191bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123191c2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123191c4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 123191c7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 123191ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123191cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123191cf div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 123191d2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123191d5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123191d9 jbe 0x123191f1 */
  if ((C.cf||C.zf)) goto L_123191f1;
  /* 123191db mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123191de add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123191e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123191e4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 123191e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123191e9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123191ec mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123191ef jmp 0x12319205 */
  goto L_12319205;
L_123191f1:;
  /* 123191f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123191f4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123191f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123191fa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 123191fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123191ff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12319202 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12319205:;
  /* 12319205 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319209 ja 0x123191bf */
  if ((!C.cf&&!C.zf)) goto L_123191bf;
  /* 1231920b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231920e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12319211 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12319214 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12319217 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1231921a:;
  /* 1231921a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231921d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1231921f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12319222 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12319225 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12319228 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1231922a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1231922c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231922f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12319232 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12319234 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12319237 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231923a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1231923d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12319240 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12319243 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12319246 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12319249 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231924c jb 0x1231921a */
  if (C.cf) goto L_1231921a;
  /* 1231924e mov esp, ebp */
  ESP = (EBP);
  /* 12319250 pop ebp */
  EBP = (pop32());
  /* 12319251 ret  */
  ESPCHK(0x12319190u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x12319260 (63 bytes, 24 insns) */
void f_12319260(void) {
  FTRACE(0x12319260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12319260 push ebp */
  push32((uint32_t)(EBP));
  /* 12319261 mov ebp, esp */
  EBP = (ESP);
  /* 12319263 push ecx */
  push32((uint32_t)(ECX));
  /* 12319264 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319268 jne 0x12319279 */
  if (!C.zf) goto L_12319279;
  /* 1231926a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231926e jge 0x12319279 */
  if ((C.sf==C.of)) goto L_12319279;
  /* 12319270 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12319277 jmp 0x12319280 */
  goto L_12319280;
L_12319279:;
  /* 12319279 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12319280:;
  /* 12319280 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12319283 push eax */
  push32((uint32_t)(EAX));
  /* 12319284 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12319287 push ecx */
  push32((uint32_t)(ECX));
  /* 12319288 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231928b push edx */
  push32((uint32_t)(EDX));
  /* 1231928c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231928f push eax */
  push32((uint32_t)(EAX));
  /* 12319290 call 0x12319190 */
  push32(0x12319295u); f_12319190();
  /* 12319295 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12319298 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231929b mov esp, ebp */
  ESP = (EBP);
  /* 1231929d pop ebp */
  EBP = (pop32());
  /* 1231929e ret  */
  ESPCHK(0x12319260u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x123192a0 (30 bytes, 14 insns) */
void f_123192a0(void) {
  FTRACE(0x123192a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123192a0 push ebp */
  push32((uint32_t)(EBP));
  /* 123192a1 mov ebp, esp */
  EBP = (ESP);
  /* 123192a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123192a5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123192a8 push eax */
  push32((uint32_t)(EAX));
  /* 123192a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123192ac push ecx */
  push32((uint32_t)(ECX));
  /* 123192ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123192b0 push edx */
  push32((uint32_t)(EDX));
  /* 123192b1 call 0x12319190 */
  push32(0x123192b6u); f_12319190();
  /* 123192b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123192b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123192bc pop ebp */
  EBP = (pop32());
  /* 123192bd ret  */
  ESPCHK(0x123192a0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x123192c0 (72 bytes, 28 insns) */
void f_123192c0(void) {
  FTRACE(0x123192c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123192c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123192c1 mov ebp, esp */
  EBP = (ESP);
  /* 123192c3 push ecx */
  push32((uint32_t)(ECX));
  /* 123192c4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123192c8 jne 0x123192e1 */
  if (!C.zf) goto L_123192e1;
  /* 123192ca cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123192ce jg 0x123192e1 */
  if ((!C.zf&&C.sf==C.of)) goto L_123192e1;
  /* 123192d0 jl 0x123192d8 */
  if ((C.sf!=C.of)) goto L_123192d8;
  /* 123192d2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123192d6 jae 0x123192e1 */
  if (!C.cf) goto L_123192e1;
L_123192d8:;
  /* 123192d8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 123192df jmp 0x123192e8 */
  goto L_123192e8;
L_123192e1:;
  /* 123192e1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_123192e8:;
  /* 123192e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123192eb push eax */
  push32((uint32_t)(EAX));
  /* 123192ec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123192ef push ecx */
  push32((uint32_t)(ECX));
  /* 123192f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123192f3 push edx */
  push32((uint32_t)(EDX));
  /* 123192f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123192f7 push eax */
  push32((uint32_t)(EAX));
  /* 123192f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123192fb push ecx */
  push32((uint32_t)(ECX));
  /* 123192fc call 0x12319310 */
  push32(0x12319301u); f_12319310();
  /* 12319301 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12319304 mov esp, ebp */
  ESP = (EBP);
  /* 12319306 pop ebp */
  EBP = (pop32());
  /* 12319307 ret  */
  ESPCHK(0x123192c0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x12319310 (242 bytes, 91 insns) */
void f_12319310(void) {
  FTRACE(0x12319310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12319310 push ebp */
  push32((uint32_t)(EBP));
  /* 12319311 mov ebp, esp */
  EBP = (ESP);
  /* 12319313 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12319316 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12319319 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1231931c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319320 je 0x12319344 */
  if (C.zf) goto L_12319344;
  /* 12319322 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12319325 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12319328 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231932b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231932e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12319331 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12319334 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12319336 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12319339 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231933c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1231933e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12319341 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12319344:;
  /* 12319344 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12319347 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1231934a:;
  /* 1231934a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1231934d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1231934f push ecx */
  push32((uint32_t)(ECX));
  /* 12319350 push eax */
  push32((uint32_t)(EAX));
  /* 12319351 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12319354 push edx */
  push32((uint32_t)(EDX));
  /* 12319355 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12319358 push eax */
  push32((uint32_t)(EAX));
  /* 12319359 call 0x1231a850 */
  push32(0x1231935eu); f_1231a850();
  /* 1231935e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12319361 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12319364 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12319366 push edx */
  push32((uint32_t)(EDX));
  /* 12319367 push ecx */
  push32((uint32_t)(ECX));
  /* 12319368 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231936b push eax */
  push32((uint32_t)(EAX));
  /* 1231936c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231936f push ecx */
  push32((uint32_t)(ECX));
  /* 12319370 call 0x1231a7e0 */
  push32(0x12319375u); f_1231a7e0();
  /* 12319375 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12319378 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1231937b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231937f jbe 0x12319397 */
  if ((C.cf||C.zf)) goto L_12319397;
  /* 12319381 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12319384 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12319387 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231938a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1231938c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231938f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12319392 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12319395 jmp 0x123193ab */
  goto L_123193ab;
L_12319397:;
  /* 12319397 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231939a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231939d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123193a0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 123193a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123193a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123193a8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_123193ab:;
  /* 123193ab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123193af ja 0x1231934a */
  if ((!C.cf&&!C.zf)) goto L_1231934a;
  /* 123193b1 jb 0x123193b9 */
  if (C.cf) goto L_123193b9;
  /* 123193b3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123193b7 ja 0x1231934a */
  if ((!C.cf&&!C.zf)) goto L_1231934a;
L_123193b9:;
  /* 123193b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123193bc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 123193bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123193c2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123193c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123193c8:;
  /* 123193c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123193cb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123193cd mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 123193d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123193d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123193d6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123193d8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 123193da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123193dd mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 123193e0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 123193e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123193e5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123193e8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123193eb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123193ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123193f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123193f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123193f7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123193fa jb 0x123193c8 */
  if (C.cf) goto L_123193c8;
  /* 123193fc mov esp, ebp */
  ESP = (EBP);
  /* 123193fe pop ebp */
  EBP = (pop32());
  /* 123193ff ret 0x14 */
  ESPCHK(0x12319310u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x12319410 (31 bytes, 15 insns) */
void f_12319410(void) {
  FTRACE(0x12319410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12319410 push ebp */
  push32((uint32_t)(EBP));
  /* 12319411 mov ebp, esp */
  EBP = (ESP);
  /* 12319413 push 0 */
  push32((uint32_t)(0x0u));
  /* 12319415 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12319418 push eax */
  push32((uint32_t)(EAX));
  /* 12319419 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1231941c push ecx */
  push32((uint32_t)(ECX));
  /* 1231941d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12319420 push edx */
  push32((uint32_t)(EDX));
  /* 12319421 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12319424 push eax */
  push32((uint32_t)(EAX));
  /* 12319425 call 0x12319310 */
  push32(0x1231942au); f_12319310();
  /* 1231942a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1231942d pop ebp */
  EBP = (pop32());
  /* 1231942e ret  */
  ESPCHK(0x12319410u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x12319430 (123 bytes, 44 insns) */
void f_12319430(void) {
  FTRACE(0x12319430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12319430 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12319434 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1231943a je 0x12319450 */
  if (C.zf) goto L_12319450;
L_1231943c:;
  /* 1231943c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1231943e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1231943f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12319441 je 0x12319483 */
  if (C.zf) goto L_12319483;
  /* 12319443 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12319449 jne 0x1231943c */
  if (!C.zf) goto L_1231943c;
  /* 1231944b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12319450:;
  /* 12319450 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12319452 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12319457 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12319459 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1231945c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1231945e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12319461 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12319466 je 0x12319450 */
  if (C.zf) goto L_12319450;
  /* 12319468 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1231946b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1231946d je 0x123194a1 */
  if (C.zf) goto L_123194a1;
  /* 1231946f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12319471 je 0x12319497 */
  if (C.zf) goto L_12319497;
  /* 12319473 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12319478 je 0x1231948d */
  if (C.zf) goto L_1231948d;
  /* 1231947a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1231947f je 0x12319483 */
  if (C.zf) goto L_12319483;
  /* 12319481 jmp 0x12319450 */
  goto L_12319450;
L_12319483:;
  /* 12319483 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 12319486 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1231948a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231948c ret  */
  ESPCHK(0x12319430u, _esp0);
  ESP += 4; return;
L_1231948d:;
  /* 1231948d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 12319490 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12319494 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12319496 ret  */
  ESPCHK(0x12319430u, _esp0);
  ESP += 4; return;
L_12319497:;
  /* 12319497 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1231949a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1231949e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123194a0 ret  */
  ESPCHK(0x12319430u, _esp0);
  ESP += 4; return;
L_123194a1:;
  /* 123194a1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 123194a4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 123194a8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123194aa ret  */
  ESPCHK(0x12319430u, _esp0);
  ESP += 4; return;
}

/* FUN_100094b0 @ 0x123194b0 (249 bytes, 93 insns) */
void f_123194b0(void) {
  FTRACE(0x123194b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123194b0 push ebp */
  push32((uint32_t)(EBP));
  /* 123194b1 mov ebp, esp */
  EBP = (ESP);
  /* 123194b3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123194b6 push ebx */
  push32((uint32_t)(EBX));
  /* 123194b7 push esi */
  push32((uint32_t)(ESI));
  /* 123194b8 push edi */
  push32((uint32_t)(EDI));
  /* 123194b9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 123194bc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 123194bf lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 123194c2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_123194c5:;
  /* 123194c5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123194c9 jne 0x123194e9 */
  if (!C.zf) goto L_123194e9;
  /* 123194cb push 0x1233cb20 */
  push32((uint32_t)(0x1233cb20u));
  /* 123194d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 123194d2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 123194d4 push 0x1233cb14 */
  push32((uint32_t)(0x1233cb14u));
  /* 123194d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 123194db call 0x123145a0 */
  push32(0x123194e0u); f_123145a0();
  /* 123194e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123194e3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123194e6 jne 0x123194e9 */
  if (!C.zf) goto L_123194e9;
  /* 123194e8 int3  */
  x86_unimpl("int3 @ 0x123194e8");
L_123194e9:;
  /* 123194e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123194eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123194ed jne 0x123194c5 */
  if (!C.zf) goto L_123194c5;
L_123194ef:;
  /* 123194ef cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123194f3 jne 0x12319513 */
  if (!C.zf) goto L_12319513;
  /* 123194f5 push 0x1233cb04 */
  push32((uint32_t)(0x1233cb04u));
  /* 123194fa push 0 */
  push32((uint32_t)(0x0u));
  /* 123194fc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 123194fe push 0x1233cb14 */
  push32((uint32_t)(0x1233cb14u));
  /* 12319503 push 2 */
  push32((uint32_t)(0x2u));
  /* 12319505 call 0x123145a0 */
  push32(0x1231950au); f_123145a0();
  /* 1231950a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231950d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319510 jne 0x12319513 */
  if (!C.zf) goto L_12319513;
  /* 12319512 int3  */
  x86_unimpl("int3 @ 0x12319512");
L_12319513:;
  /* 12319513 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12319515 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12319517 jne 0x123194ef */
  if (!C.zf) goto L_123194ef;
  /* 12319519 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231951c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12319523 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12319526 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12319529 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1231952c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231952f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12319532 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12319534 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12319537 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231953a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1231953d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12319540 push edx */
  push32((uint32_t)(EDX));
  /* 12319541 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12319544 push eax */
  push32((uint32_t)(EAX));
  /* 12319545 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12319548 push ecx */
  push32((uint32_t)(ECX));
  /* 12319549 call 0x12314ec0 */
  push32(0x1231954eu); f_12314ec0();
  /* 1231954e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12319551 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12319554 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12319557 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1231955a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231955d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12319560 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12319563 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12319566 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231956a jl 0x1231958e */
  if ((C.sf!=C.of)) goto L_1231958e;
  /* 1231956c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231956f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12319571 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12319574 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12319576 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1231957c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1231957f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12319582 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12319584 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12319587 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231958a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1231958c jmp 0x1231959f */
  goto L_1231959f;
L_1231958e:;
  /* 1231958e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12319591 push eax */
  push32((uint32_t)(EAX));
  /* 12319592 push 0 */
  push32((uint32_t)(0x0u));
  /* 12319594 call 0x12314c40 */
  push32(0x12319599u); f_12314c40();
  /* 12319599 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231959c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1231959f:;
  /* 1231959f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 123195a2 pop edi */
  EDI = (pop32());
  /* 123195a3 pop esi */
  ESI = (pop32());
  /* 123195a4 pop ebx */
  EBX = (pop32());
  /* 123195a5 mov esp, ebp */
  ESP = (EBP);
  /* 123195a7 pop ebp */
  EBP = (pop32());
  /* 123195a8 ret  */
  ESPCHK(0x123194b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100095b0 @ 0x123195b0 (7 bytes, 3 insns) */
void f_123195b0(void) {
  FTRACE(0x123195b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123195b0 push edi */
  push32((uint32_t)(EDI));
  /* 123195b1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 123195b5 jmp 0x12319621 */
  jmp_ind(0x12319621u); return;
}

/* FUN_100095c0 @ 0x123195c0 (224 bytes, 84 insns) */
void f_123195c0(void) {
  FTRACE(0x123195c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123195c0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 123195c4 push edi */
  push32((uint32_t)(EDI));
  /* 123195c5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 123195cb je 0x123195dc */
  if (C.zf) goto L_123195dc;
L_123195cd:;
  /* 123195cd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 123195cf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 123195d0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 123195d2 je 0x1231960f */
  if (C.zf) goto L_1231960f;
  /* 123195d4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 123195da jne 0x123195cd */
  if (!C.zf) goto L_123195cd;
L_123195dc:;
  /* 123195dc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 123195de mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 123195e3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123195e5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123195e8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 123195ea add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123195ed test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 123195f2 je 0x123195dc */
  if (C.zf) goto L_123195dc;
  /* 123195f4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 123195f7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 123195f9 je 0x1231961e */
  if (C.zf) goto L_1231961e;
  /* 123195fb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 123195fd je 0x12319619 */
  if (C.zf) goto L_12319619;
  /* 123195ff test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12319604 je 0x12319614 */
  if (C.zf) goto L_12319614;
  /* 12319606 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1231960b je 0x1231960f */
  if (C.zf) goto L_1231960f;
  /* 1231960d jmp 0x123195dc */
  goto L_123195dc;
L_1231960f:;
  /* 1231960f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 12319612 jmp 0x12319621 */
  goto L_12319621;
L_12319614:;
  /* 12319614 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 12319617 jmp 0x12319621 */
  goto L_12319621;
L_12319619:;
  /* 12319619 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 1231961c jmp 0x12319621 */
  goto L_12319621;
L_1231961e:;
  /* 1231961e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_12319621:;
  /* 12319621 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12319625 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1231962b je 0x12319646 */
  if (C.zf) goto L_12319646;
L_1231962d:;
  /* 1231962d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1231962f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12319630 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12319632 je 0x12319698 */
  if (C.zf) goto L_12319698;
  /* 12319634 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12319636 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12319637 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1231963d jne 0x1231962d */
  if (!C.zf) goto L_1231962d;
  /* 1231963f jmp 0x12319646 */
  goto L_12319646;
L_12319641:;
  /* 12319641 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12319643 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12319646:;
  /* 12319646 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1231964b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1231964d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231964f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12319652 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12319654 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12319656 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12319659 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1231965e je 0x12319641 */
  if (C.zf) goto L_12319641;
  /* 12319660 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12319662 je 0x12319698 */
  if (C.zf) goto L_12319698;
  /* 12319664 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12319666 je 0x1231968f */
  if (C.zf) goto L_1231968f;
  /* 12319668 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1231966e je 0x12319682 */
  if (C.zf) goto L_12319682;
  /* 12319670 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12319676 je 0x1231967a */
  if (C.zf) goto L_1231967a;
  /* 12319678 jmp 0x12319641 */
  goto L_12319641;
L_1231967a:;
  /* 1231967a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1231967c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12319680 pop edi */
  EDI = (pop32());
  /* 12319681 ret  */
  ESPCHK(0x123195c0u, _esp0);
  ESP += 4; return;
L_12319682:;
  /* 12319682 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12319685 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12319689 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1231968d pop edi */
  EDI = (pop32());
  /* 1231968e ret  */
  ESPCHK(0x123195c0u, _esp0);
  ESP += 4; return;
L_1231968f:;
  /* 1231968f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12319692 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12319696 pop edi */
  EDI = (pop32());
  /* 12319697 ret  */
  ESPCHK(0x123195c0u, _esp0);
  ESP += 4; return;
L_12319698:;
  /* 12319698 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1231969a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1231969e pop edi */
  EDI = (pop32());
  /* 1231969f ret  */
  ESPCHK(0x123195c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100096a0 @ 0x123196a0 (243 bytes, 91 insns) */
void f_123196a0(void) {
  FTRACE(0x123196a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123196a0 push ebp */
  push32((uint32_t)(EBP));
  /* 123196a1 mov ebp, esp */
  EBP = (ESP);
  /* 123196a3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123196a6 push ebx */
  push32((uint32_t)(EBX));
  /* 123196a7 push esi */
  push32((uint32_t)(ESI));
  /* 123196a8 push edi */
  push32((uint32_t)(EDI));
  /* 123196a9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 123196ac mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_123196af:;
  /* 123196af cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123196b3 jne 0x123196d3 */
  if (!C.zf) goto L_123196d3;
  /* 123196b5 push 0x1233cb20 */
  push32((uint32_t)(0x1233cb20u));
  /* 123196ba push 0 */
  push32((uint32_t)(0x0u));
  /* 123196bc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 123196be push 0x1233d880 */
  push32((uint32_t)(0x1233d880u));
  /* 123196c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 123196c5 call 0x123145a0 */
  push32(0x123196cau); f_123145a0();
  /* 123196ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123196cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123196d0 jne 0x123196d3 */
  if (!C.zf) goto L_123196d3;
  /* 123196d2 int3  */
  x86_unimpl("int3 @ 0x123196d2");
L_123196d3:;
  /* 123196d3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123196d5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123196d7 jne 0x123196af */
  if (!C.zf) goto L_123196af;
L_123196d9:;
  /* 123196d9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123196dd jne 0x123196fd */
  if (!C.zf) goto L_123196fd;
  /* 123196df push 0x1233cb04 */
  push32((uint32_t)(0x1233cb04u));
  /* 123196e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 123196e6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 123196e8 push 0x1233d880 */
  push32((uint32_t)(0x1233d880u));
  /* 123196ed push 2 */
  push32((uint32_t)(0x2u));
  /* 123196ef call 0x123145a0 */
  push32(0x123196f4u); f_123145a0();
  /* 123196f4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123196f7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123196fa jne 0x123196fd */
  if (!C.zf) goto L_123196fd;
  /* 123196fc int3  */
  x86_unimpl("int3 @ 0x123196fc");
L_123196fd:;
  /* 123196fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123196ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12319701 jne 0x123196d9 */
  if (!C.zf) goto L_123196d9;
  /* 12319703 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12319706 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 1231970d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12319710 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12319713 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12319716 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12319719 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231971c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1231971e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12319721 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12319724 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12319727 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1231972a push ecx */
  push32((uint32_t)(ECX));
  /* 1231972b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1231972e push edx */
  push32((uint32_t)(EDX));
  /* 1231972f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12319732 push eax */
  push32((uint32_t)(EAX));
  /* 12319733 call 0x12314ec0 */
  push32(0x12319738u); f_12314ec0();
  /* 12319738 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231973b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1231973e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12319741 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12319744 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12319747 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231974a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1231974d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12319750 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319754 jl 0x12319778 */
  if ((C.sf!=C.of)) goto L_12319778;
  /* 12319756 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12319759 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1231975b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1231975e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12319760 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12319766 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12319769 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231976c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1231976e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12319771 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12319774 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12319776 jmp 0x12319789 */
  goto L_12319789;
L_12319778:;
  /* 12319778 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231977b push edx */
  push32((uint32_t)(EDX));
  /* 1231977c push 0 */
  push32((uint32_t)(0x0u));
  /* 1231977e call 0x12314c40 */
  push32(0x12319783u); f_12314c40();
  /* 12319783 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12319786 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_12319789:;
  /* 12319789 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1231978c pop edi */
  EDI = (pop32());
  /* 1231978d pop esi */
  ESI = (pop32());
  /* 1231978e pop ebx */
  EBX = (pop32());
  /* 1231978f mov esp, ebp */
  ESP = (EBP);
  /* 12319791 pop ebp */
  EBP = (pop32());
  /* 12319792 ret  */
  ESPCHK(0x123196a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100097a0 @ 0x123197a0 (47 bytes, 17 insns) */
void f_123197a0(void) {
  FTRACE(0x123197a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123197a0 push ecx */
  push32((uint32_t)(ECX));
  /* 123197a1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123197a6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 123197aa jb 0x123197c0 */
  if (C.cf) goto L_123197c0;
L_123197ac:;
  /* 123197ac sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123197b2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123197b7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 123197b9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123197be jae 0x123197ac */
  if (!C.cf) goto L_123197ac;
L_123197c0:;
  /* 123197c0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123197c2 mov eax, esp */
  EAX = (ESP);
  /* 123197c4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 123197c6 mov esp, ecx */
  ESP = (ECX);
  /* 123197c8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123197ca mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 123197cd push eax */
  push32((uint32_t)(EAX));
  /* 123197ce ret  */
  ESPCHK(0x123197a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100097d0 @ 0x123197d0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_123197d0(void) {
  FTRACE(0x123197d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123197d0 push ebp */
  push32((uint32_t)(EBP));
  /* 123197d1 mov ebp, esp */
  EBP = (ESP);
  /* 123197d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123197d6 push esi */
  push32((uint32_t)(ESI));
  /* 123197d7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123197db je 0x123197e3 */
  if (C.zf) goto L_123197e3;
  /* 123197dd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123197e1 jne 0x123197e8 */
  if (!C.zf) goto L_123197e8;
L_123197e3:;
  /* 123197e3 jmp 0x123199b8 */
  goto L_123199b8;
L_123197e8:;
  /* 123197e8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123197ec je 0x12319804 */
  if (C.zf) goto L_12319804;
  /* 123197ee cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123197f2 je 0x12319804 */
  if (C.zf) goto L_12319804;
  /* 123197f4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123197f8 je 0x12319804 */
  if (C.zf) goto L_12319804;
  /* 123197fa cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123197fe jne 0x123198e1 */
  if (!C.zf) goto L_123198e1;
L_12319804:;
  /* 12319804 push 1 */
  push32((uint32_t)(0x1u));
  /* 12319806 call 0x1231a9b0 */
  push32(0x1231980bu); f_1231a9b0();
  /* 1231980b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231980e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319812 je 0x1231981a */
  if (C.zf) goto L_1231981a;
  /* 12319814 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319818 jne 0x1231985f */
  if (!C.zf) goto L_1231985f;
L_1231981a:;
  /* 1231981a cmp dword ptr [0x123418ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123418ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319821 jne 0x1231985f */
  if (!C.zf) goto L_1231985f;
  /* 12319823 push 1 */
  push32((uint32_t)(0x1u));
  /* 12319825 push 0x12319a00 */
  push32((uint32_t)(0x12319a00u));
  /* 1231982a call dword ptr [0x12344298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344298))), 0x12319830u);
  /* 12319830 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319833 jne 0x12319841 */
  if (!C.zf) goto L_12319841;
  /* 12319835 mov dword ptr [0x123418ac], 1 */
  w32((uint32_t)(0x123418ac), (0x1u));
  /* 1231983f jmp 0x1231985f */
  goto L_1231985f;
L_12319841:;
  /* 12319841 call dword ptr [0x12344250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344250))), 0x12319847u);
  /* 12319847 mov esi, eax */
  ESI = (EAX);
  /* 12319849 call 0x1231db80 */
  push32(0x1231984eu); f_1231db80();
  /* 1231984e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 12319850 push 1 */
  push32((uint32_t)(0x1u));
  /* 12319852 call 0x1231aa50 */
  push32(0x12319857u); f_1231aa50();
  /* 12319857 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231985a jmp 0x123199b8 */
  goto L_123199b8;
L_1231985f:;
  /* 1231985f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12319862 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12319865 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12319868 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231986b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1231986e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319872 ja 0x123198d2 */
  if ((!C.cf&&!C.zf)) goto L_123198d2;
  /* 12319874 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12319877 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12319879 mov dl, byte ptr [eax + 0x123199df] */
  DL = (r8((uint32_t)(EAX + 0x123199df)));
  /* 1231987f jmp dword ptr [edx*4 + 0x123199cb] */
  switch (EDX) {
    case 0: goto L_12319886;
    case 1: goto L_123198c0;
    case 2: goto L_1231989a;
    case 3: goto L_123198ad;
    case 4: goto L_123198d2;
    default: x86_unimpl("switch@0x1231987f out of table"); return;
  }
L_12319886:;
  /* 12319886 mov ecx, dword ptr [0x1234189c] */
  ECX = (r32((uint32_t)(0x1234189c)));
  /* 1231988c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231988f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12319892 mov dword ptr [0x1234189c], edx */
  w32((uint32_t)(0x1234189c), (EDX));
  /* 12319898 jmp 0x123198d2 */
  goto L_123198d2;
L_1231989a:;
  /* 1231989a mov eax, dword ptr [0x123418a0] */
  EAX = (r32((uint32_t)(0x123418a0)));
  /* 1231989f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123198a2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123198a5 mov dword ptr [0x123418a0], ecx */
  w32((uint32_t)(0x123418a0), (ECX));
  /* 123198ab jmp 0x123198d2 */
  goto L_123198d2;
L_123198ad:;
  /* 123198ad mov edx, dword ptr [0x123418a4] */
  EDX = (r32((uint32_t)(0x123418a4)));
  /* 123198b3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 123198b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123198b9 mov dword ptr [0x123418a4], eax */
  w32((uint32_t)(0x123418a4), (EAX));
  /* 123198be jmp 0x123198d2 */
  goto L_123198d2;
L_123198c0:;
  /* 123198c0 mov ecx, dword ptr [0x123418a8] */
  ECX = (r32((uint32_t)(0x123418a8)));
  /* 123198c6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123198c9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123198cc mov dword ptr [0x123418a8], edx */
  w32((uint32_t)(0x123418a8), (EDX));
L_123198d2:;
  /* 123198d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 123198d4 call 0x1231aa50 */
  push32(0x123198d9u); f_1231aa50();
  /* 123198d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123198dc jmp 0x123199b3 */
  goto L_123199b3;
L_123198e1:;
  /* 123198e1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123198e5 je 0x123198f8 */
  if (C.zf) goto L_123198f8;
  /* 123198e7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123198eb je 0x123198f8 */
  if (C.zf) goto L_123198f8;
  /* 123198ed cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123198f1 je 0x123198f8 */
  if (C.zf) goto L_123198f8;
  /* 123198f3 jmp 0x123199b8 */
  goto L_123199b8;
L_123198f8:;
  /* 123198f8 call 0x12316040 */
  push32(0x123198fdu); f_12316040();
  /* 123198fd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12319900 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12319903 cmp dword ptr [eax + 0x50], 0x123400c0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x123400c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231990a jne 0x12319955 */
  if (!C.zf) goto L_12319955;
  /* 1231990c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 12319911 push 0x1233d88c */
  push32((uint32_t)(0x1233d88cu));
  /* 12319916 push 2 */
  push32((uint32_t)(0x2u));
  /* 12319918 mov ecx, dword ptr [0x12340140] */
  ECX = (r32((uint32_t)(0x12340140)));
  /* 1231991e push ecx */
  push32((uint32_t)(ECX));
  /* 1231991f call 0x12316600 */
  push32(0x12319924u); f_12316600();
  /* 12319924 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12319927 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231992a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 1231992d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12319930 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319934 je 0x12319953 */
  if (C.zf) goto L_12319953;
  /* 12319936 mov ecx, dword ptr [0x12340140] */
  ECX = (r32((uint32_t)(0x12340140)));
  /* 1231993c push ecx */
  push32((uint32_t)(ECX));
  /* 1231993d push 0x123400c0 */
  push32((uint32_t)(0x123400c0u));
  /* 12319942 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12319945 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12319948 push eax */
  push32((uint32_t)(EAX));
  /* 12319949 call 0x1231d790 */
  push32(0x1231994eu); f_1231d790();
  /* 1231994e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12319951 jmp 0x12319955 */
  goto L_12319955;
L_12319953:;
  /* 12319953 jmp 0x123199b8 */
  goto L_123199b8;
L_12319955:;
  /* 12319955 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12319958 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1231995b push edx */
  push32((uint32_t)(EDX));
  /* 1231995c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231995f push eax */
  push32((uint32_t)(EAX));
  /* 12319960 call 0x12319ce0 */
  push32(0x12319965u); f_12319ce0();
  /* 12319965 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12319968 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1231996b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231996f jne 0x12319973 */
  if (!C.zf) goto L_12319973;
  /* 12319971 jmp 0x123199b8 */
  goto L_123199b8;
L_12319973:;
  /* 12319973 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12319976 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12319979 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1231997c:;
  /* 1231997c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231997f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12319982 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319985 jne 0x123199b3 */
  if (!C.zf) goto L_123199b3;
  /* 12319987 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231998a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231998d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12319990 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12319993 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12319996 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12319999 mov edx, dword ptr [0x12340144] */
  EDX = (r32((uint32_t)(0x12340144)));
  /* 1231999f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123199a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123199a5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 123199a8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123199aa cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123199ad jb 0x123199b1 */
  if (C.cf) goto L_123199b1;
  /* 123199af jmp 0x123199b3 */
  goto L_123199b3;
L_123199b1:;
  /* 123199b1 jmp 0x1231997c */
  goto L_1231997c;
L_123199b3:;
  /* 123199b3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123199b6 jmp 0x123199c6 */
  goto L_123199c6;
L_123199b8:;
  /* 123199b8 call 0x1231db70 */
  push32(0x123199bdu); f_1231db70();
  /* 123199bd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 123199c3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_123199c6:;
  /* 123199c6 pop esi */
  ESI = (pop32());
  /* 123199c7 mov esp, ebp */
  ESP = (EBP);
  /* 123199c9 pop ebp */
  EBP = (pop32());
  /* 123199ca ret  */
  ESPCHK(0x123197d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a00 @ 0x12319a00 (146 bytes, 45 insns) */
void f_12319a00(void) {
  FTRACE(0x12319a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12319a00 push ebp */
  push32((uint32_t)(EBP));
  /* 12319a01 mov ebp, esp */
  EBP = (ESP);
  /* 12319a03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12319a06 push 1 */
  push32((uint32_t)(0x1u));
  /* 12319a08 call 0x1231a9b0 */
  push32(0x12319a0du); f_1231a9b0();
  /* 12319a0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12319a10 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319a14 jne 0x12319a2e */
  if (!C.zf) goto L_12319a2e;
  /* 12319a16 mov dword ptr [ebp - 8], 0x1234189c */
  w32((uint32_t)(EBP + -0x8), (0x1234189cu));
  /* 12319a1d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12319a20 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12319a22 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12319a25 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12319a2c jmp 0x12319a44 */
  goto L_12319a44;
L_12319a2e:;
  /* 12319a2e mov dword ptr [ebp - 8], 0x123418a0 */
  w32((uint32_t)(EBP + -0x8), (0x123418a0u));
  /* 12319a35 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12319a38 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12319a3a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12319a3d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_12319a44:;
  /* 12319a44 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319a48 jne 0x12319a58 */
  if (!C.zf) goto L_12319a58;
  /* 12319a4a push 1 */
  push32((uint32_t)(0x1u));
  /* 12319a4c call 0x1231aa50 */
  push32(0x12319a51u); f_1231aa50();
  /* 12319a51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12319a54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12319a56 jmp 0x12319a8c */
  goto L_12319a8c;
L_12319a58:;
  /* 12319a58 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319a5c je 0x12319a7d */
  if (C.zf) goto L_12319a7d;
  /* 12319a5e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12319a61 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12319a67 push 1 */
  push32((uint32_t)(0x1u));
  /* 12319a69 call 0x1231aa50 */
  push32(0x12319a6eu); f_1231aa50();
  /* 12319a6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12319a71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12319a74 push edx */
  push32((uint32_t)(EDX));
  /* 12319a75 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x12319a78u);
  /* 12319a78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12319a7b jmp 0x12319a87 */
  goto L_12319a87;
L_12319a7d:;
  /* 12319a7d push 1 */
  push32((uint32_t)(0x1u));
  /* 12319a7f call 0x1231aa50 */
  push32(0x12319a84u); f_1231aa50();
  /* 12319a84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12319a87:;
  /* 12319a87 mov eax, 1 */
  EAX = (0x1u);
L_12319a8c:;
  /* 12319a8c mov esp, ebp */
  ESP = (EBP);
  /* 12319a8e pop ebp */
  EBP = (pop32());
  /* 12319a8f ret 4 */
  ESPCHK(0x12319a00u, _esp0);
  ESP += 8; return;
}

/* FUN_10009aa0 @ 0x12319aa0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_12319aa0(void) {
  FTRACE(0x12319aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12319aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12319aa1 mov ebp, esp */
  EBP = (ESP);
  /* 12319aa3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12319aa6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12319aad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12319ab0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12319ab3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12319ab6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12319ab9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12319abc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319ac0 ja 0x12319b6e */
  if ((!C.cf&&!C.zf)) goto L_12319b6e;
  /* 12319ac6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12319ac9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12319acb mov dl, byte ptr [eax + 0x12319cc2] */
  DL = (r8((uint32_t)(EAX + 0x12319cc2)));
  /* 12319ad1 jmp dword ptr [edx*4 + 0x12319caa] */
  switch (EDX) {
    case 0: goto L_12319ad8;
    case 1: goto L_12319b43;
    case 2: goto L_12319b29;
    case 3: goto L_12319af5;
    case 4: goto L_12319b0f;
    case 5: goto L_12319b6e;
    default: x86_unimpl("switch@0x12319ad1 out of table"); return;
  }
L_12319ad8:;
  /* 12319ad8 mov dword ptr [ebp - 0x18], 0x1234189c */
  w32((uint32_t)(EBP + -0x18), (0x1234189cu));
  /* 12319adf mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12319ae2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12319ae4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12319ae7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12319aea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12319aed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12319af0 jmp 0x12319b76 */
  goto L_12319b76;
L_12319af5:;
  /* 12319af5 mov dword ptr [ebp - 0x18], 0x123418a0 */
  w32((uint32_t)(EBP + -0x18), (0x123418a0u));
  /* 12319afc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12319aff mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12319b01 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12319b04 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12319b07 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12319b0a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12319b0d jmp 0x12319b76 */
  goto L_12319b76;
L_12319b0f:;
  /* 12319b0f mov dword ptr [ebp - 0x18], 0x123418a4 */
  w32((uint32_t)(EBP + -0x18), (0x123418a4u));
  /* 12319b16 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12319b19 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12319b1b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12319b1e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12319b21 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12319b24 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12319b27 jmp 0x12319b76 */
  goto L_12319b76;
L_12319b29:;
  /* 12319b29 mov dword ptr [ebp - 0x18], 0x123418a8 */
  w32((uint32_t)(EBP + -0x18), (0x123418a8u));
  /* 12319b30 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12319b33 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12319b35 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12319b38 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12319b3b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12319b3e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12319b41 jmp 0x12319b76 */
  goto L_12319b76;
L_12319b43:;
  /* 12319b43 call 0x12316040 */
  push32(0x12319b48u); f_12316040();
  /* 12319b48 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12319b4b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12319b4e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12319b51 push edx */
  push32((uint32_t)(EDX));
  /* 12319b52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12319b55 push eax */
  push32((uint32_t)(EAX));
  /* 12319b56 call 0x12319ce0 */
  push32(0x12319b5bu); f_12319ce0();
  /* 12319b5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12319b5e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12319b61 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12319b64 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12319b67 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12319b69 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12319b6c jmp 0x12319b76 */
  goto L_12319b76;
L_12319b6e:;
  /* 12319b6e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12319b71 jmp 0x12319ca6 */
  goto L_12319ca6;
L_12319b76:;
  /* 12319b76 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319b7a je 0x12319b86 */
  if (C.zf) goto L_12319b86;
  /* 12319b7c push 1 */
  push32((uint32_t)(0x1u));
  /* 12319b7e call 0x1231a9b0 */
  push32(0x12319b83u); f_1231a9b0();
  /* 12319b83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12319b86:;
  /* 12319b86 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319b8a jne 0x12319ba3 */
  if (!C.zf) goto L_12319ba3;
  /* 12319b8c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319b90 je 0x12319b9c */
  if (C.zf) goto L_12319b9c;
  /* 12319b92 push 1 */
  push32((uint32_t)(0x1u));
  /* 12319b94 call 0x1231aa50 */
  push32(0x12319b99u); f_1231aa50();
  /* 12319b99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12319b9c:;
  /* 12319b9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12319b9e jmp 0x12319ca6 */
  goto L_12319ca6;
L_12319ba3:;
  /* 12319ba3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319ba7 jne 0x12319bc0 */
  if (!C.zf) goto L_12319bc0;
  /* 12319ba9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319bad je 0x12319bb9 */
  if (C.zf) goto L_12319bb9;
  /* 12319baf push 1 */
  push32((uint32_t)(0x1u));
  /* 12319bb1 call 0x1231aa50 */
  push32(0x12319bb6u); f_1231aa50();
  /* 12319bb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12319bb9:;
  /* 12319bb9 push 3 */
  push32((uint32_t)(0x3u));
  /* 12319bbb call 0x12315dc0 */
  push32(0x12319bc0u); f_12315dc0();
L_12319bc0:;
  /* 12319bc0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319bc4 je 0x12319bd2 */
  if (C.zf) goto L_12319bd2;
  /* 12319bc6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319bca je 0x12319bd2 */
  if (C.zf) goto L_12319bd2;
  /* 12319bcc cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319bd0 jne 0x12319bfe */
  if (!C.zf) goto L_12319bfe;
L_12319bd2:;
  /* 12319bd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12319bd5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12319bd8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12319bdb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12319bde mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 12319be5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319be9 jne 0x12319bfe */
  if (!C.zf) goto L_12319bfe;
  /* 12319beb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12319bee mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12319bf1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12319bf4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12319bf7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_12319bfe:;
  /* 12319bfe cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319c02 jne 0x12319c40 */
  if (!C.zf) goto L_12319c40;
  /* 12319c04 mov eax, dword ptr [0x12340138] */
  EAX = (r32((uint32_t)(0x12340138)));
  /* 12319c09 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12319c0c jmp 0x12319c17 */
  goto L_12319c17;
L_12319c0e:;
  /* 12319c0e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12319c11 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12319c14 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12319c17:;
  /* 12319c17 mov edx, dword ptr [0x12340138] */
  EDX = (r32((uint32_t)(0x12340138)));
  /* 12319c1d add edx, dword ptr [0x1234013c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1234013c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12319c23 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319c26 jge 0x12319c3e */
  if ((C.sf==C.of)) goto L_12319c3e;
  /* 12319c28 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12319c2b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12319c2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12319c31 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12319c34 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12319c3c jmp 0x12319c0e */
  goto L_12319c0e;
L_12319c3e:;
  /* 12319c3e jmp 0x12319c49 */
  goto L_12319c49;
L_12319c40:;
  /* 12319c40 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12319c43 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12319c49:;
  /* 12319c49 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319c4d je 0x12319c59 */
  if (C.zf) goto L_12319c59;
  /* 12319c4f push 1 */
  push32((uint32_t)(0x1u));
  /* 12319c51 call 0x1231aa50 */
  push32(0x12319c56u); f_1231aa50();
  /* 12319c56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12319c59:;
  /* 12319c59 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319c5d jne 0x12319c70 */
  if (!C.zf) goto L_12319c70;
  /* 12319c5f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12319c62 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12319c65 push edx */
  push32((uint32_t)(EDX));
  /* 12319c66 push 8 */
  push32((uint32_t)(0x8u));
  /* 12319c68 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12319c6bu);
  /* 12319c6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12319c6e jmp 0x12319c7a */
  goto L_12319c7a;
L_12319c70:;
  /* 12319c70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12319c73 push eax */
  push32((uint32_t)(EAX));
  /* 12319c74 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12319c77u);
  /* 12319c77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12319c7a:;
  /* 12319c7a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319c7e je 0x12319c8c */
  if (C.zf) goto L_12319c8c;
  /* 12319c80 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319c84 je 0x12319c8c */
  if (C.zf) goto L_12319c8c;
  /* 12319c86 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319c8a jne 0x12319ca4 */
  if (!C.zf) goto L_12319ca4;
L_12319c8c:;
  /* 12319c8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12319c8f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12319c92 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 12319c95 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319c99 jne 0x12319ca4 */
  if (!C.zf) goto L_12319ca4;
  /* 12319c9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12319c9e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12319ca1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_12319ca4:;
  /* 12319ca4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12319ca6:;
  /* 12319ca6 mov esp, ebp */
  ESP = (EBP);
  /* 12319ca8 pop ebp */
  EBP = (pop32());
  /* 12319ca9 ret  */
  ESPCHK(0x12319aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ce0 @ 0x12319ce0 (91 bytes, 35 insns) */
void f_12319ce0(void) {
  FTRACE(0x12319ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12319ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 12319ce1 mov ebp, esp */
  EBP = (ESP);
  /* 12319ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 12319ce4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12319ce7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12319cea:;
  /* 12319cea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12319ced mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12319cf0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319cf3 je 0x12319d13 */
  if (C.zf) goto L_12319d13;
  /* 12319cf5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12319cf8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12319cfb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12319cfe mov ecx, dword ptr [0x12340144] */
  ECX = (r32((uint32_t)(0x12340144)));
  /* 12319d04 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12319d07 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12319d0a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12319d0c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319d0f jae 0x12319d13 */
  if (!C.cf) goto L_12319d13;
  /* 12319d11 jmp 0x12319cea */
  goto L_12319cea;
L_12319d13:;
  /* 12319d13 mov eax, dword ptr [0x12340144] */
  EAX = (r32((uint32_t)(0x12340144)));
  /* 12319d18 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12319d1b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12319d1e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12319d20 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319d23 jae 0x12319d35 */
  if (!C.cf) goto L_12319d35;
  /* 12319d25 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12319d28 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12319d2b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319d2e jne 0x12319d35 */
  if (!C.zf) goto L_12319d35;
  /* 12319d30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12319d33 jmp 0x12319d37 */
  goto L_12319d37;
L_12319d35:;
  /* 12319d35 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12319d37:;
  /* 12319d37 mov esp, ebp */
  ESP = (EBP);
  /* 12319d39 pop ebp */
  EBP = (pop32());
  /* 12319d3a ret  */
  ESPCHK(0x12319ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d40 @ 0x12319d40 (13 bytes, 6 insns) */
void f_12319d40(void) {
  FTRACE(0x12319d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12319d40 push ebp */
  push32((uint32_t)(EBP));
  /* 12319d41 mov ebp, esp */
  EBP = (ESP);
  /* 12319d43 call 0x12316040 */
  push32(0x12319d48u); f_12316040();
  /* 12319d48 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12319d4b pop ebp */
  EBP = (pop32());
  /* 12319d4c ret  */
  ESPCHK(0x12319d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d50 @ 0x12319d50 (13 bytes, 6 insns) */
void f_12319d50(void) {
  FTRACE(0x12319d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12319d50 push ebp */
  push32((uint32_t)(EBP));
  /* 12319d51 mov ebp, esp */
  EBP = (ESP);
  /* 12319d53 call 0x12316040 */
  push32(0x12319d58u); f_12316040();
  /* 12319d58 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12319d5b pop ebp */
  EBP = (pop32());
  /* 12319d5c ret  */
  ESPCHK(0x12319d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d60 @ 0x12319d60 (187 bytes, 54 insns) */
void f_12319d60(void) {
  FTRACE(0x12319d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12319d60 push ebp */
  push32((uint32_t)(EBP));
  /* 12319d61 mov ebp, esp */
  EBP = (ESP);
  /* 12319d63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12319d66 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12319d6d cmp dword ptr [0x123418b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123418b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319d74 jne 0x12319dd3 */
  if (!C.zf) goto L_12319dd3;
  /* 12319d76 push 0x1233cbfc */
  push32((uint32_t)(0x1233cbfcu));
  /* 12319d7b call dword ptr [0x12344220] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344220))), 0x12319d81u);
  /* 12319d81 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12319d84 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319d88 je 0x12319da7 */
  if (C.zf) goto L_12319da7;
  /* 12319d8a push 0x1233d8bc */
  push32((uint32_t)(0x1233d8bcu));
  /* 12319d8f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12319d92 push eax */
  push32((uint32_t)(EAX));
  /* 12319d93 call dword ptr [0x12344288] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344288))), 0x12319d99u);
  /* 12319d99 mov dword ptr [0x123418b0], eax */
  w32((uint32_t)(0x123418b0), (EAX));
  /* 12319d9e cmp dword ptr [0x123418b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123418b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319da5 jne 0x12319dab */
  if (!C.zf) goto L_12319dab;
L_12319da7:;
  /* 12319da7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12319da9 jmp 0x12319e17 */
  goto L_12319e17;
L_12319dab:;
  /* 12319dab push 0x1233d8ac */
  push32((uint32_t)(0x1233d8acu));
  /* 12319db0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12319db3 push ecx */
  push32((uint32_t)(ECX));
  /* 12319db4 call dword ptr [0x12344288] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344288))), 0x12319dbau);
  /* 12319dba mov dword ptr [0x123418b4], eax */
  w32((uint32_t)(0x123418b4), (EAX));
  /* 12319dbf push 0x1233d898 */
  push32((uint32_t)(0x1233d898u));
  /* 12319dc4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12319dc7 push edx */
  push32((uint32_t)(EDX));
  /* 12319dc8 call dword ptr [0x12344288] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344288))), 0x12319dceu);
  /* 12319dce mov dword ptr [0x123418b8], eax */
  w32((uint32_t)(0x123418b8), (EAX));
L_12319dd3:;
  /* 12319dd3 cmp dword ptr [0x123418b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123418b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319dda je 0x12319de5 */
  if (C.zf) goto L_12319de5;
  /* 12319ddc call dword ptr [0x123418b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123418b4))), 0x12319de2u);
  /* 12319de2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12319de5:;
  /* 12319de5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319de9 je 0x12319e01 */
  if (C.zf) goto L_12319e01;
  /* 12319deb cmp dword ptr [0x123418b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123418b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319df2 je 0x12319e01 */
  if (C.zf) goto L_12319e01;
  /* 12319df4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12319df7 push eax */
  push32((uint32_t)(EAX));
  /* 12319df8 call dword ptr [0x123418b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123418b8))), 0x12319dfeu);
  /* 12319dfe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12319e01:;
  /* 12319e01 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12319e04 push ecx */
  push32((uint32_t)(ECX));
  /* 12319e05 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12319e08 push edx */
  push32((uint32_t)(EDX));
  /* 12319e09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12319e0c push eax */
  push32((uint32_t)(EAX));
  /* 12319e0d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12319e10 push ecx */
  push32((uint32_t)(ECX));
  /* 12319e11 call dword ptr [0x123418b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123418b0))), 0x12319e17u);
L_12319e17:;
  /* 12319e17 mov esp, ebp */
  ESP = (EBP);
  /* 12319e19 pop ebp */
  EBP = (pop32());
  /* 12319e1a ret  */
  ESPCHK(0x12319d60u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x12319e20 (254 bytes, 109 insns) */
void f_12319e20(void) {
  FTRACE(0x12319e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12319e20 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12319e24 push edi */
  push32((uint32_t)(EDI));
  /* 12319e25 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12319e27 je 0x12319ea3 */
  if (C.zf) goto L_12319ea3;
  /* 12319e29 push esi */
  push32((uint32_t)(ESI));
  /* 12319e2a push ebx */
  push32((uint32_t)(EBX));
  /* 12319e2b mov ebx, ecx */
  EBX = (ECX);
  /* 12319e2d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 12319e31 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12319e37 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 12319e3b jne 0x12319e44 */
  if (!C.zf) goto L_12319e44;
  /* 12319e3d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12319e40 jne 0x12319eb1 */
  if (!C.zf) goto L_12319eb1;
  /* 12319e42 jmp 0x12319e65 */
  goto L_12319e65;
L_12319e44:;
  /* 12319e44 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12319e46 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12319e47 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12319e49 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12319e4a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12319e4b je 0x12319e72 */
  if (C.zf) goto L_12319e72;
  /* 12319e4d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12319e4f je 0x12319e7a */
  if (C.zf) goto L_12319e7a;
  /* 12319e51 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12319e57 jne 0x12319e44 */
  if (!C.zf) goto L_12319e44;
  /* 12319e59 mov ebx, ecx */
  EBX = (ECX);
  /* 12319e5b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12319e5e jne 0x12319eb1 */
  if (!C.zf) goto L_12319eb1;
L_12319e60:;
  /* 12319e60 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12319e63 je 0x12319e72 */
  if (C.zf) goto L_12319e72;
L_12319e65:;
  /* 12319e65 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12319e67 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12319e68 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12319e6a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12319e6b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12319e6d je 0x12319e9e */
  if (C.zf) goto L_12319e9e;
  /* 12319e6f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12319e70 jne 0x12319e65 */
  if (!C.zf) goto L_12319e65;
L_12319e72:;
  /* 12319e72 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12319e76 pop ebx */
  EBX = (pop32());
  /* 12319e77 pop esi */
  ESI = (pop32());
  /* 12319e78 pop edi */
  EDI = (pop32());
  /* 12319e79 ret  */
  ESPCHK(0x12319e20u, _esp0);
  ESP += 4; return;
L_12319e7a:;
  /* 12319e7a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12319e80 je 0x12319e94 */
  if (C.zf) goto L_12319e94;
L_12319e82:;
  /* 12319e82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12319e84 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12319e85 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12319e86 je 0x12319f16 */
  if (C.zf) goto L_12319f16;
  /* 12319e8c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12319e92 jne 0x12319e82 */
  if (!C.zf) goto L_12319e82;
L_12319e94:;
  /* 12319e94 mov ebx, ecx */
  EBX = (ECX);
  /* 12319e96 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12319e99 jne 0x12319f07 */
  if (!C.zf) goto L_12319f07;
L_12319e9b:;
  /* 12319e9b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12319e9d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_12319e9e:;
  /* 12319e9e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12319e9f jne 0x12319e9b */
  if (!C.zf) goto L_12319e9b;
  /* 12319ea1 pop ebx */
  EBX = (pop32());
  /* 12319ea2 pop esi */
  ESI = (pop32());
L_12319ea3:;
  /* 12319ea3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12319ea7 pop edi */
  EDI = (pop32());
  /* 12319ea8 ret  */
  ESPCHK(0x12319e20u, _esp0);
  ESP += 4; return;
L_12319ea9:;
  /* 12319ea9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12319eab add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12319eae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12319eaf je 0x12319e60 */
  if (C.zf) goto L_12319e60;
L_12319eb1:;
  /* 12319eb1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12319eb6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12319eb8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12319eba xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12319ebd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12319ebf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 12319ec1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12319ec4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12319ec9 je 0x12319ea9 */
  if (C.zf) goto L_12319ea9;
  /* 12319ecb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12319ecd je 0x12319efb */
  if (C.zf) goto L_12319efb;
  /* 12319ecf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12319ed1 je 0x12319ef1 */
  if (C.zf) goto L_12319ef1;
  /* 12319ed3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12319ed9 je 0x12319ee7 */
  if (C.zf) goto L_12319ee7;
  /* 12319edb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12319ee1 jne 0x12319ea9 */
  if (!C.zf) goto L_12319ea9;
  /* 12319ee3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12319ee5 jmp 0x12319eff */
  goto L_12319eff;
L_12319ee7:;
  /* 12319ee7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12319eed mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12319eef jmp 0x12319eff */
  goto L_12319eff;
L_12319ef1:;
  /* 12319ef1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12319ef7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12319ef9 jmp 0x12319eff */
  goto L_12319eff;
L_12319efb:;
  /* 12319efb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12319efd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_12319eff:;
  /* 12319eff add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12319f02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12319f04 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12319f05 je 0x12319f11 */
  if (C.zf) goto L_12319f11;
L_12319f07:;
  /* 12319f07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12319f09:;
  /* 12319f09 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 12319f0b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12319f0e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12319f0f jne 0x12319f09 */
  if (!C.zf) goto L_12319f09;
L_12319f11:;
  /* 12319f11 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12319f14 jne 0x12319e9b */
  if (!C.zf) goto L_12319e9b;
L_12319f16:;
  /* 12319f16 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12319f1a pop ebx */
  EBX = (pop32());
  /* 12319f1b pop esi */
  ESI = (pop32());
  /* 12319f1c pop edi */
  EDI = (pop32());
  /* 12319f1d ret  */
  ESPCHK(0x12319e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f20 @ 0x12319f20 (130 bytes, 43 insns) */
void f_12319f20(void) {
  FTRACE(0x12319f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12319f20 push ebp */
  push32((uint32_t)(EBP));
  /* 12319f21 mov ebp, esp */
  EBP = (ESP);
  /* 12319f23 push ecx */
  push32((uint32_t)(ECX));
  /* 12319f24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12319f27 cmp eax, dword ptr [0x1234323c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1234323c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319f2d jae 0x12319f51 */
  if (!C.cf) goto L_12319f51;
  /* 12319f2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12319f32 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12319f35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12319f38 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12319f3b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12319f3e mov eax, dword ptr [ecx*4 + 0x12343100] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12343100)));
  /* 12319f45 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12319f4a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12319f4d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12319f4f jne 0x12319f6c */
  if (!C.zf) goto L_12319f6c;
L_12319f51:;
  /* 12319f51 call 0x1231db70 */
  push32(0x12319f56u); f_1231db70();
  /* 12319f56 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12319f5c call 0x1231db80 */
  push32(0x12319f61u); f_1231db80();
  /* 12319f61 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12319f67 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12319f6a jmp 0x12319f9e */
  goto L_12319f9e;
L_12319f6c:;
  /* 12319f6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12319f6f push edx */
  push32((uint32_t)(EDX));
  /* 12319f70 call 0x1231e0a0 */
  push32(0x12319f75u); f_1231e0a0();
  /* 12319f75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12319f78 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12319f7b push eax */
  push32((uint32_t)(EAX));
  /* 12319f7c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12319f7f push ecx */
  push32((uint32_t)(ECX));
  /* 12319f80 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12319f83 push edx */
  push32((uint32_t)(EDX));
  /* 12319f84 call 0x12319fb0 */
  push32(0x12319f89u); f_12319fb0();
  /* 12319f89 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12319f8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12319f8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12319f92 push eax */
  push32((uint32_t)(EAX));
  /* 12319f93 call 0x1231e130 */
  push32(0x12319f98u); f_1231e130();
  /* 12319f98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12319f9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12319f9e:;
  /* 12319f9e mov esp, ebp */
  ESP = (EBP);
  /* 12319fa0 pop ebp */
  EBP = (pop32());
  /* 12319fa1 ret  */
  ESPCHK(0x12319f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10009fb0 @ 0x12319fb0 (178 bytes, 56 insns) */
void f_12319fb0(void) {
  FTRACE(0x12319fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12319fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12319fb1 mov ebp, esp */
  EBP = (ESP);
  /* 12319fb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12319fb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12319fb9 push eax */
  push32((uint32_t)(EAX));
  /* 12319fba call 0x1231df20 */
  push32(0x12319fbfu); f_1231df20();
  /* 12319fbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12319fc2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12319fc5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319fc9 jne 0x12319fde */
  if (!C.zf) goto L_12319fde;
  /* 12319fcb call 0x1231db70 */
  push32(0x12319fd0u); f_1231db70();
  /* 12319fd0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12319fd6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12319fd9 jmp 0x1231a05e */
  goto L_1231a05e;
L_12319fde:;
  /* 12319fde mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12319fe1 push ecx */
  push32((uint32_t)(ECX));
  /* 12319fe2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12319fe4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12319fe7 push edx */
  push32((uint32_t)(EDX));
  /* 12319fe8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12319feb push eax */
  push32((uint32_t)(EAX));
  /* 12319fec call dword ptr [0x1234429c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1234429c))), 0x12319ff2u);
  /* 12319ff2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12319ff5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12319ff9 jne 0x1231a006 */
  if (!C.zf) goto L_1231a006;
  /* 12319ffb call dword ptr [0x12344250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344250))), 0x1231a001u);
  /* 1231a001 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1231a004 jmp 0x1231a00d */
  goto L_1231a00d;
L_1231a006:;
  /* 1231a006 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1231a00d:;
  /* 1231a00d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a011 je 0x1231a024 */
  if (C.zf) goto L_1231a024;
  /* 1231a013 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231a016 push ecx */
  push32((uint32_t)(ECX));
  /* 1231a017 call 0x1231dad0 */
  push32(0x1231a01cu); f_1231dad0();
  /* 1231a01c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a01f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1231a022 jmp 0x1231a05e */
  goto L_1231a05e;
L_1231a024:;
  /* 1231a024 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231a027 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1231a02a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231a02d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1231a030 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231a033 mov ecx, dword ptr [edx*4 + 0x12343100] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12343100)));
  /* 1231a03a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1231a03e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1231a041 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231a044 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1231a047 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231a04a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1231a04d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231a050 mov eax, dword ptr [eax*4 + 0x12343100] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12343100)));
  /* 1231a057 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1231a05b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1231a05e:;
  /* 1231a05e mov esp, ebp */
  ESP = (EBP);
  /* 1231a060 pop ebp */
  EBP = (pop32());
  /* 1231a061 ret  */
  ESPCHK(0x12319fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a070 @ 0x1231a070 (130 bytes, 43 insns) */
void f_1231a070(void) {
  FTRACE(0x1231a070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231a070 push ebp */
  push32((uint32_t)(EBP));
  /* 1231a071 mov ebp, esp */
  EBP = (ESP);
  /* 1231a073 push ecx */
  push32((uint32_t)(ECX));
  /* 1231a074 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231a077 cmp eax, dword ptr [0x1234323c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1234323c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a07d jae 0x1231a0a1 */
  if (!C.cf) goto L_1231a0a1;
  /* 1231a07f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231a082 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1231a085 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231a088 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1231a08b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231a08e mov eax, dword ptr [ecx*4 + 0x12343100] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12343100)));
  /* 1231a095 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1231a09a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1231a09d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1231a09f jne 0x1231a0bc */
  if (!C.zf) goto L_1231a0bc;
L_1231a0a1:;
  /* 1231a0a1 call 0x1231db70 */
  push32(0x1231a0a6u); f_1231db70();
  /* 1231a0a6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1231a0ac call 0x1231db80 */
  push32(0x1231a0b1u); f_1231db80();
  /* 1231a0b1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1231a0b7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1231a0ba jmp 0x1231a0ee */
  goto L_1231a0ee;
L_1231a0bc:;
  /* 1231a0bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231a0bf push edx */
  push32((uint32_t)(EDX));
  /* 1231a0c0 call 0x1231e0a0 */
  push32(0x1231a0c5u); f_1231e0a0();
  /* 1231a0c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a0c8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1231a0cb push eax */
  push32((uint32_t)(EAX));
  /* 1231a0cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231a0cf push ecx */
  push32((uint32_t)(ECX));
  /* 1231a0d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231a0d3 push edx */
  push32((uint32_t)(EDX));
  /* 1231a0d4 call 0x1231a100 */
  push32(0x1231a0d9u); f_1231a100();
  /* 1231a0d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a0dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1231a0df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231a0e2 push eax */
  push32((uint32_t)(EAX));
  /* 1231a0e3 call 0x1231e130 */
  push32(0x1231a0e8u); f_1231e130();
  /* 1231a0e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a0eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1231a0ee:;
  /* 1231a0ee mov esp, ebp */
  ESP = (EBP);
  /* 1231a0f0 pop ebp */
  EBP = (pop32());
  /* 1231a0f1 ret  */
  ESPCHK(0x1231a070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a100 @ 0x1231a100 (627 bytes, 182 insns) */
void f_1231a100(void) {
  FTRACE(0x1231a100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231a100 push ebp */
  push32((uint32_t)(EBP));
  /* 1231a101 mov ebp, esp */
  EBP = (ESP);
  /* 1231a103 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231a109 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1231a110 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231a113 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1231a119 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a11d jne 0x1231a126 */
  if (!C.zf) goto L_1231a126;
  /* 1231a11f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231a121 jmp 0x1231a36f */
  goto L_1231a36f;
L_1231a126:;
  /* 1231a126 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231a129 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1231a12c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231a12f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1231a132 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231a135 mov eax, dword ptr [ecx*4 + 0x12343100] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12343100)));
  /* 1231a13c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1231a141 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1231a144 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1231a146 je 0x1231a158 */
  if (C.zf) goto L_1231a158;
  /* 1231a148 push 2 */
  push32((uint32_t)(0x2u));
  /* 1231a14a push 0 */
  push32((uint32_t)(0x0u));
  /* 1231a14c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231a14f push edx */
  push32((uint32_t)(EDX));
  /* 1231a150 call 0x12319fb0 */
  push32(0x1231a155u); f_12319fb0();
  /* 1231a155 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1231a158:;
  /* 1231a158 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231a15b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1231a15e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231a161 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1231a164 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231a167 mov edx, dword ptr [eax*4 + 0x12343100] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12343100)));
  /* 1231a16e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1231a173 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1231a178 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231a17a je 0x1231a28c */
  if (C.zf) goto L_1231a28c;
  /* 1231a180 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231a183 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1231a186 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1231a18d:;
  /* 1231a18d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231a190 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231a193 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a196 jae 0x1231a28a */
  if (!C.cf) goto L_1231a28a;
  /* 1231a19c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1231a1a2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1231a1a5:;
  /* 1231a1a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231a1a8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1231a1ae sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231a1b0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a1b6 jge 0x1231a217 */
  if ((C.sf==C.of)) goto L_1231a217;
  /* 1231a1b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231a1bb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231a1be cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a1c1 jae 0x1231a217 */
  if (!C.cf) goto L_1231a217;
  /* 1231a1c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231a1c6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1231a1c8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1231a1ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231a1d1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a1d4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1231a1d7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1231a1de cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a1e1 jne 0x1231a201 */
  if (!C.zf) goto L_1231a201;
  /* 1231a1e3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1231a1e9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a1ec mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1231a1f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231a1f5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1231a1f8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231a1fb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a1fe mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1231a201:;
  /* 1231a201 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231a204 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1231a20a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1231a20c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231a20f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a212 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1231a215 jmp 0x1231a1a5 */
  goto L_1231a1a5;
L_1231a217:;
  /* 1231a217 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231a219 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1231a21f push edx */
  push32((uint32_t)(EDX));
  /* 1231a220 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231a223 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1231a229 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231a22b push eax */
  push32((uint32_t)(EAX));
  /* 1231a22c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1231a232 push edx */
  push32((uint32_t)(EDX));
  /* 1231a233 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231a236 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1231a239 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231a23c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1231a23f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231a242 mov edx, dword ptr [eax*4 + 0x12343100] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12343100)));
  /* 1231a249 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1231a24c push eax */
  push32((uint32_t)(EAX));
  /* 1231a24d call dword ptr [0x12344214] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344214))), 0x1231a253u);
  /* 1231a253 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231a255 je 0x1231a27a */
  if (C.zf) goto L_1231a27a;
  /* 1231a257 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231a25a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a260 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1231a263 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231a266 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1231a26c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231a26e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a274 jge 0x1231a278 */
  if ((C.sf==C.of)) goto L_1231a278;
  /* 1231a276 jmp 0x1231a28a */
  goto L_1231a28a;
L_1231a278:;
  /* 1231a278 jmp 0x1231a285 */
  goto L_1231a285;
L_1231a27a:;
  /* 1231a27a call dword ptr [0x12344250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344250))), 0x1231a280u);
  /* 1231a280 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1231a283 jmp 0x1231a28a */
  goto L_1231a28a;
L_1231a285:;
  /* 1231a285 jmp 0x1231a18d */
  goto L_1231a18d;
L_1231a28a:;
  /* 1231a28a jmp 0x1231a2dc */
  goto L_1231a2dc;
L_1231a28c:;
  /* 1231a28c push 0 */
  push32((uint32_t)(0x0u));
  /* 1231a28e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1231a294 push ecx */
  push32((uint32_t)(ECX));
  /* 1231a295 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1231a298 push edx */
  push32((uint32_t)(EDX));
  /* 1231a299 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231a29c push eax */
  push32((uint32_t)(EAX));
  /* 1231a29d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231a2a0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1231a2a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231a2a6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1231a2a9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231a2ac mov eax, dword ptr [ecx*4 + 0x12343100] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12343100)));
  /* 1231a2b3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1231a2b6 push ecx */
  push32((uint32_t)(ECX));
  /* 1231a2b7 call dword ptr [0x12344214] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344214))), 0x1231a2bdu);
  /* 1231a2bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231a2bf je 0x1231a2d3 */
  if (C.zf) goto L_1231a2d3;
  /* 1231a2c1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1231a2c8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1231a2ce mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1231a2d1 jmp 0x1231a2dc */
  goto L_1231a2dc;
L_1231a2d3:;
  /* 1231a2d3 call dword ptr [0x12344250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344250))), 0x1231a2d9u);
  /* 1231a2d9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1231a2dc:;
  /* 1231a2dc cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a2e0 jne 0x1231a366 */
  if (!C.zf) goto L_1231a366;
  /* 1231a2e6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a2ea je 0x1231a31a */
  if (C.zf) goto L_1231a31a;
  /* 1231a2ec cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a2f0 jne 0x1231a309 */
  if (!C.zf) goto L_1231a309;
  /* 1231a2f2 call 0x1231db70 */
  push32(0x1231a2f7u); f_1231db70();
  /* 1231a2f7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1231a2fd call 0x1231db80 */
  push32(0x1231a302u); f_1231db80();
  /* 1231a302 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231a305 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1231a307 jmp 0x1231a315 */
  goto L_1231a315;
L_1231a309:;
  /* 1231a309 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231a30c push edx */
  push32((uint32_t)(EDX));
  /* 1231a30d call 0x1231dad0 */
  push32(0x1231a312u); f_1231dad0();
  /* 1231a312 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1231a315:;
  /* 1231a315 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1231a318 jmp 0x1231a36f */
  goto L_1231a36f;
L_1231a31a:;
  /* 1231a31a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231a31d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1231a320 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231a323 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1231a326 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231a329 mov edx, dword ptr [eax*4 + 0x12343100] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12343100)));
  /* 1231a330 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1231a335 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1231a338 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231a33a je 0x1231a34b */
  if (C.zf) goto L_1231a34b;
  /* 1231a33c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231a33f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1231a342 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a345 jne 0x1231a34b */
  if (!C.zf) goto L_1231a34b;
  /* 1231a347 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231a349 jmp 0x1231a36f */
  goto L_1231a36f;
L_1231a34b:;
  /* 1231a34b call 0x1231db70 */
  push32(0x1231a350u); f_1231db70();
  /* 1231a350 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1231a356 call 0x1231db80 */
  push32(0x1231a35bu); f_1231db80();
  /* 1231a35b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1231a361 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1231a364 jmp 0x1231a36f */
  goto L_1231a36f;
L_1231a366:;
  /* 1231a366 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231a369 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1231a36f:;
  /* 1231a36f mov esp, ebp */
  ESP = (EBP);
  /* 1231a371 pop ebp */
  EBP = (pop32());
  /* 1231a372 ret  */
  ESPCHK(0x1231a100u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a380 @ 0x1231a380 (199 bytes, 68 insns) */
void f_1231a380(void) {
  FTRACE(0x1231a380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231a380 push ebp */
  push32((uint32_t)(EBP));
  /* 1231a381 mov ebp, esp */
  EBP = (ESP);
  /* 1231a383 push ecx */
  push32((uint32_t)(ECX));
  /* 1231a384 push ebx */
  push32((uint32_t)(EBX));
  /* 1231a385 push esi */
  push32((uint32_t)(ESI));
  /* 1231a386 push edi */
  push32((uint32_t)(EDI));
L_1231a387:;
  /* 1231a387 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a38b jne 0x1231a3ab */
  if (!C.zf) goto L_1231a3ab;
  /* 1231a38d push 0x1233cdb0 */
  push32((uint32_t)(0x1233cdb0u));
  /* 1231a392 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231a394 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1231a396 push 0x1233d8c8 */
  push32((uint32_t)(0x1233d8c8u));
  /* 1231a39b push 2 */
  push32((uint32_t)(0x2u));
  /* 1231a39d call 0x123145a0 */
  push32(0x1231a3a2u); f_123145a0();
  /* 1231a3a2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a3a5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a3a8 jne 0x1231a3ab */
  if (!C.zf) goto L_1231a3ab;
  /* 1231a3aa int3  */
  x86_unimpl("int3 @ 0x1231a3aa");
L_1231a3ab:;
  /* 1231a3ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231a3ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231a3af jne 0x1231a387 */
  if (!C.zf) goto L_1231a387;
  /* 1231a3b1 mov ecx, dword ptr [0x123418bc] */
  ECX = (r32((uint32_t)(0x123418bc)));
  /* 1231a3b7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a3ba mov dword ptr [0x123418bc], ecx */
  w32((uint32_t)(0x123418bc), (ECX));
  /* 1231a3c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231a3c3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1231a3c6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1231a3c8 push 0x1233d8c8 */
  push32((uint32_t)(0x1233d8c8u));
  /* 1231a3cd push 2 */
  push32((uint32_t)(0x2u));
  /* 1231a3cf push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1231a3d4 call 0x12316600 */
  push32(0x1231a3d9u); f_12316600();
  /* 1231a3d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a3dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231a3df mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1231a3e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231a3e5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a3e9 je 0x1231a406 */
  if (C.zf) goto L_1231a406;
  /* 1231a3eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231a3ee mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1231a3f1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1231a3f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231a3f7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1231a3fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231a3fd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1231a404 jmp 0x1231a42b */
  goto L_1231a42b;
L_1231a406:;
  /* 1231a406 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231a409 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1231a40c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1231a40f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231a412 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1231a415 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231a418 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a41b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231a41e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1231a421 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231a424 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1231a42b:;
  /* 1231a42b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231a42e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231a431 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1231a434 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1231a436 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231a439 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1231a440 pop edi */
  EDI = (pop32());
  /* 1231a441 pop esi */
  ESI = (pop32());
  /* 1231a442 pop ebx */
  EBX = (pop32());
  /* 1231a443 mov esp, ebp */
  ESP = (EBP);
  /* 1231a445 pop ebp */
  EBP = (pop32());
  /* 1231a446 ret  */
  ESPCHK(0x1231a380u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1231a450 (50 bytes, 17 insns) */
void f_1231a450(void) {
  FTRACE(0x1231a450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231a450 push ebp */
  push32((uint32_t)(EBP));
  /* 1231a451 mov ebp, esp */
  EBP = (ESP);
  /* 1231a453 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231a456 cmp eax, dword ptr [0x1234323c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1234323c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a45c jb 0x1231a462 */
  if (C.cf) goto L_1231a462;
  /* 1231a45e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231a460 jmp 0x1231a480 */
  goto L_1231a480;
L_1231a462:;
  /* 1231a462 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231a465 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1231a468 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231a46b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1231a46e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231a471 mov eax, dword ptr [ecx*4 + 0x12343100] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12343100)));
  /* 1231a478 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1231a47d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1231a480:;
  /* 1231a480 pop ebp */
  EBP = (pop32());
  /* 1231a481 ret  */
  ESPCHK(0x1231a450u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a490 @ 0x1231a490 (300 bytes, 80 insns) */
void f_1231a490(void) {
  FTRACE(0x1231a490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231a490 push ebp */
  push32((uint32_t)(EBP));
  /* 1231a491 mov ebp, esp */
  EBP = (ESP);
  /* 1231a493 push ecx */
  push32((uint32_t)(ECX));
  /* 1231a494 cmp dword ptr [0x123430e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123430e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a49b jne 0x1231a4a9 */
  if (!C.zf) goto L_1231a4a9;
  /* 1231a49d mov dword ptr [0x123430e0], 0x200 */
  w32((uint32_t)(0x123430e0), (0x200u));
  /* 1231a4a7 jmp 0x1231a4bc */
  goto L_1231a4bc;
L_1231a4a9:;
  /* 1231a4a9 cmp dword ptr [0x123430e0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x123430e0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a4b0 jge 0x1231a4bc */
  if ((C.sf==C.of)) goto L_1231a4bc;
  /* 1231a4b2 mov dword ptr [0x123430e0], 0x14 */
  w32((uint32_t)(0x123430e0), (0x14u));
L_1231a4bc:;
  /* 1231a4bc push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1231a4c1 push 0x1233d8d4 */
  push32((uint32_t)(0x1233d8d4u));
  /* 1231a4c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1231a4c8 push 4 */
  push32((uint32_t)(0x4u));
  /* 1231a4ca mov eax, dword ptr [0x123430e0] */
  EAX = (r32((uint32_t)(0x123430e0)));
  /* 1231a4cf push eax */
  push32((uint32_t)(EAX));
  /* 1231a4d0 call 0x12316a10 */
  push32(0x1231a4d5u); f_12316a10();
  /* 1231a4d5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a4d8 mov dword ptr [0x12341d8c], eax */
  w32((uint32_t)(0x12341d8c), (EAX));
  /* 1231a4dd cmp dword ptr [0x12341d8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341d8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a4e4 jne 0x1231a525 */
  if (!C.zf) goto L_1231a525;
  /* 1231a4e6 mov dword ptr [0x123430e0], 0x14 */
  w32((uint32_t)(0x123430e0), (0x14u));
  /* 1231a4f0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1231a4f5 push 0x1233d8d4 */
  push32((uint32_t)(0x1233d8d4u));
  /* 1231a4fa push 2 */
  push32((uint32_t)(0x2u));
  /* 1231a4fc push 4 */
  push32((uint32_t)(0x4u));
  /* 1231a4fe mov ecx, dword ptr [0x123430e0] */
  ECX = (r32((uint32_t)(0x123430e0)));
  /* 1231a504 push ecx */
  push32((uint32_t)(ECX));
  /* 1231a505 call 0x12316a10 */
  push32(0x1231a50au); f_12316a10();
  /* 1231a50a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a50d mov dword ptr [0x12341d8c], eax */
  w32((uint32_t)(0x12341d8c), (EAX));
  /* 1231a512 cmp dword ptr [0x12341d8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341d8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a519 jne 0x1231a525 */
  if (!C.zf) goto L_1231a525;
  /* 1231a51b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1231a51d call 0x12314450 */
  push32(0x1231a522u); f_12314450();
  /* 1231a522 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1231a525:;
  /* 1231a525 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1231a52c jmp 0x1231a537 */
  goto L_1231a537;
L_1231a52e:;
  /* 1231a52e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231a531 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a534 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1231a537:;
  /* 1231a537 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a53b jge 0x1231a556 */
  if ((C.sf==C.of)) goto L_1231a556;
  /* 1231a53d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231a540 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1231a543 add eax, 0x1233fb50 */
  { uint32_t _a=(EAX),_b=(0x1233fb50u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a548 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231a54b mov edx, dword ptr [0x12341d8c] */
  EDX = (r32((uint32_t)(0x12341d8c)));
  /* 1231a551 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1231a554 jmp 0x1231a52e */
  goto L_1231a52e;
L_1231a556:;
  /* 1231a556 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1231a55d jmp 0x1231a568 */
  goto L_1231a568;
L_1231a55f:;
  /* 1231a55f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231a562 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a565 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1231a568:;
  /* 1231a568 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a56c jge 0x1231a5b8 */
  if ((C.sf==C.of)) goto L_1231a5b8;
  /* 1231a56e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231a571 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1231a574 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231a577 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1231a57a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231a57d mov eax, dword ptr [ecx*4 + 0x12343100] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12343100)));
  /* 1231a584 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a588 je 0x1231a5a6 */
  if (C.zf) goto L_1231a5a6;
  /* 1231a58a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231a58d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1231a590 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231a593 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1231a596 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231a599 mov eax, dword ptr [ecx*4 + 0x12343100] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12343100)));
  /* 1231a5a0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a5a4 jne 0x1231a5b6 */
  if (!C.zf) goto L_1231a5b6;
L_1231a5a6:;
  /* 1231a5a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231a5a9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1231a5ac mov dword ptr [ecx + 0x1233fb60], 0xffffffff */
  w32((uint32_t)(ECX + 0x1233fb60), (0xffffffffu));
L_1231a5b6:;
  /* 1231a5b6 jmp 0x1231a55f */
  goto L_1231a55f;
L_1231a5b8:;
  /* 1231a5b8 mov esp, ebp */
  ESP = (EBP);
  /* 1231a5ba pop ebp */
  EBP = (pop32());
  /* 1231a5bb ret  */
  ESPCHK(0x1231a490u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5c0 @ 0x1231a5c0 (26 bytes, 9 insns) */
void f_1231a5c0(void) {
  FTRACE(0x1231a5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231a5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1231a5c1 mov ebp, esp */
  EBP = (ESP);
  /* 1231a5c3 call 0x1231e3a0 */
  push32(0x1231a5c8u); f_1231e3a0();
  /* 1231a5c8 movsx eax, byte ptr [0x1234176c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x1234176c))));
  /* 1231a5cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231a5d1 je 0x1231a5d8 */
  if (C.zf) goto L_1231a5d8;
  /* 1231a5d3 call 0x1231e160 */
  push32(0x1231a5d8u); f_1231e160();
L_1231a5d8:;
  /* 1231a5d8 pop ebp */
  EBP = (pop32());
  /* 1231a5d9 ret  */
  ESPCHK(0x1231a5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5e0 @ 0x1231a5e0 (61 bytes, 20 insns) */
void f_1231a5e0(void) {
  FTRACE(0x1231a5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231a5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1231a5e1 mov ebp, esp */
  EBP = (ESP);
  /* 1231a5e3 cmp dword ptr [ebp + 8], 0x1233fb50 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1233fb50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a5ea jb 0x1231a60e */
  if (C.cf) goto L_1231a60e;
  /* 1231a5ec cmp dword ptr [ebp + 8], 0x1233fdb0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1233fdb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a5f3 ja 0x1231a60e */
  if ((!C.cf&&!C.zf)) goto L_1231a60e;
  /* 1231a5f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231a5f8 sub eax, 0x1233fb50 */
  { uint32_t _a=(EAX),_b=(0x1233fb50u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231a5fd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1231a600 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a603 push eax */
  push32((uint32_t)(EAX));
  /* 1231a604 call 0x1231a9b0 */
  push32(0x1231a609u); f_1231a9b0();
  /* 1231a609 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a60c jmp 0x1231a61b */
  goto L_1231a61b;
L_1231a60e:;
  /* 1231a60e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231a611 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a614 push ecx */
  push32((uint32_t)(ECX));
  /* 1231a615 call dword ptr [0x123442a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442a0))), 0x1231a61bu);
L_1231a61b:;
  /* 1231a61b pop ebp */
  EBP = (pop32());
  /* 1231a61c ret  */
  ESPCHK(0x1231a5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a620 @ 0x1231a620 (41 bytes, 16 insns) */
void f_1231a620(void) {
  FTRACE(0x1231a620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231a620 push ebp */
  push32((uint32_t)(EBP));
  /* 1231a621 mov ebp, esp */
  EBP = (ESP);
  /* 1231a623 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a627 jge 0x1231a63a */
  if ((C.sf==C.of)) goto L_1231a63a;
  /* 1231a629 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231a62c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a62f push eax */
  push32((uint32_t)(EAX));
  /* 1231a630 call 0x1231a9b0 */
  push32(0x1231a635u); f_1231a9b0();
  /* 1231a635 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a638 jmp 0x1231a647 */
  goto L_1231a647;
L_1231a63a:;
  /* 1231a63a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231a63d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a640 push ecx */
  push32((uint32_t)(ECX));
  /* 1231a641 call dword ptr [0x123442a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442a0))), 0x1231a647u);
L_1231a647:;
  /* 1231a647 pop ebp */
  EBP = (pop32());
  /* 1231a648 ret  */
  ESPCHK(0x1231a620u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a650 @ 0x1231a650 (61 bytes, 20 insns) */
void f_1231a650(void) {
  FTRACE(0x1231a650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231a650 push ebp */
  push32((uint32_t)(EBP));
  /* 1231a651 mov ebp, esp */
  EBP = (ESP);
  /* 1231a653 cmp dword ptr [ebp + 8], 0x1233fb50 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1233fb50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a65a jb 0x1231a67e */
  if (C.cf) goto L_1231a67e;
  /* 1231a65c cmp dword ptr [ebp + 8], 0x1233fdb0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1233fdb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a663 ja 0x1231a67e */
  if ((!C.cf&&!C.zf)) goto L_1231a67e;
  /* 1231a665 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231a668 sub eax, 0x1233fb50 */
  { uint32_t _a=(EAX),_b=(0x1233fb50u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231a66d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1231a670 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a673 push eax */
  push32((uint32_t)(EAX));
  /* 1231a674 call 0x1231aa50 */
  push32(0x1231a679u); f_1231aa50();
  /* 1231a679 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a67c jmp 0x1231a68b */
  goto L_1231a68b;
L_1231a67e:;
  /* 1231a67e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231a681 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a684 push ecx */
  push32((uint32_t)(ECX));
  /* 1231a685 call dword ptr [0x123442a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442a4))), 0x1231a68bu);
L_1231a68b:;
  /* 1231a68b pop ebp */
  EBP = (pop32());
  /* 1231a68c ret  */
  ESPCHK(0x1231a650u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a690 @ 0x1231a690 (41 bytes, 16 insns) */
void f_1231a690(void) {
  FTRACE(0x1231a690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231a690 push ebp */
  push32((uint32_t)(EBP));
  /* 1231a691 mov ebp, esp */
  EBP = (ESP);
  /* 1231a693 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a697 jge 0x1231a6aa */
  if ((C.sf==C.of)) goto L_1231a6aa;
  /* 1231a699 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231a69c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a69f push eax */
  push32((uint32_t)(EAX));
  /* 1231a6a0 call 0x1231aa50 */
  push32(0x1231a6a5u); f_1231aa50();
  /* 1231a6a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a6a8 jmp 0x1231a6b7 */
  goto L_1231a6b7;
L_1231a6aa:;
  /* 1231a6aa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231a6ad add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a6b0 push ecx */
  push32((uint32_t)(ECX));
  /* 1231a6b1 call dword ptr [0x123442a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442a4))), 0x1231a6b7u);
L_1231a6b7:;
  /* 1231a6b7 pop ebp */
  EBP = (pop32());
  /* 1231a6b8 ret  */
  ESPCHK(0x1231a690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6c0 @ 0x1231a6c0 (119 bytes, 34 insns) */
void f_1231a6c0(void) {
  FTRACE(0x1231a6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231a6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1231a6c1 mov ebp, esp */
  EBP = (ESP);
  /* 1231a6c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231a6c6 push 0x12341ac4 */
  push32((uint32_t)(0x12341ac4u));
  /* 1231a6cb call dword ptr [0x12344224] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344224))), 0x1231a6d1u);
  /* 1231a6d1 cmp dword ptr [0x12341ab4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341ab4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a6d8 je 0x1231a6f8 */
  if (C.zf) goto L_1231a6f8;
  /* 1231a6da push 0x12341ac4 */
  push32((uint32_t)(0x12341ac4u));
  /* 1231a6df call dword ptr [0x12344218] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344218))), 0x1231a6e5u);
  /* 1231a6e5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1231a6e7 call 0x1231a9b0 */
  push32(0x1231a6ecu); f_1231a9b0();
  /* 1231a6ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a6ef mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1231a6f6 jmp 0x1231a6ff */
  goto L_1231a6ff;
L_1231a6f8:;
  /* 1231a6f8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1231a6ff:;
  /* 1231a6ff mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1231a703 push eax */
  push32((uint32_t)(EAX));
  /* 1231a704 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231a707 push ecx */
  push32((uint32_t)(ECX));
  /* 1231a708 call 0x1231a740 */
  push32(0x1231a70du); f_1231a740();
  /* 1231a70d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a710 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1231a713 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a717 je 0x1231a725 */
  if (C.zf) goto L_1231a725;
  /* 1231a719 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1231a71b call 0x1231aa50 */
  push32(0x1231a720u); f_1231aa50();
  /* 1231a720 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a723 jmp 0x1231a730 */
  goto L_1231a730;
L_1231a725:;
  /* 1231a725 push 0x12341ac4 */
  push32((uint32_t)(0x12341ac4u));
  /* 1231a72a call dword ptr [0x12344218] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344218))), 0x1231a730u);
L_1231a730:;
  /* 1231a730 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231a733 mov esp, ebp */
  ESP = (EBP);
  /* 1231a735 pop ebp */
  EBP = (pop32());
  /* 1231a736 ret  */
  ESPCHK(0x1231a6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a740 @ 0x1231a740 (160 bytes, 50 insns) */
void f_1231a740(void) {
  FTRACE(0x1231a740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231a740 push ebp */
  push32((uint32_t)(EBP));
  /* 1231a741 mov ebp, esp */
  EBP = (ESP);
  /* 1231a743 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231a746 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a74a jne 0x1231a753 */
  if (!C.zf) goto L_1231a753;
  /* 1231a74c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231a74e jmp 0x1231a7dc */
  goto L_1231a7dc;
L_1231a753:;
  /* 1231a753 cmp dword ptr [0x12341940], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341940))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a75a jne 0x1231a78a */
  if (!C.zf) goto L_1231a78a;
  /* 1231a75c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231a75f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1231a764 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a769 jle 0x1231a77b */
  if ((C.zf||C.sf!=C.of)) goto L_1231a77b;
  /* 1231a76b call 0x1231db70 */
  push32(0x1231a770u); f_1231db70();
  /* 1231a770 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1231a776 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1231a779 jmp 0x1231a7dc */
  goto L_1231a7dc;
L_1231a77b:;
  /* 1231a77b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231a77e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1231a781 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1231a783 mov eax, 1 */
  EAX = (0x1u);
  /* 1231a788 jmp 0x1231a7dc */
  goto L_1231a7dc;
L_1231a78a:;
  /* 1231a78a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1231a791 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1231a794 push eax */
  push32((uint32_t)(EAX));
  /* 1231a795 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231a797 mov ecx, dword ptr [0x12340158] */
  ECX = (r32((uint32_t)(0x12340158)));
  /* 1231a79d push ecx */
  push32((uint32_t)(ECX));
  /* 1231a79e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231a7a1 push edx */
  push32((uint32_t)(EDX));
  /* 1231a7a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1231a7a4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1231a7a7 push eax */
  push32((uint32_t)(EAX));
  /* 1231a7a8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1231a7ad mov ecx, dword ptr [0x12341950] */
  ECX = (r32((uint32_t)(0x12341950)));
  /* 1231a7b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1231a7b4 call dword ptr [0x1234427c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1234427c))), 0x1231a7bau);
  /* 1231a7ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1231a7bd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a7c1 je 0x1231a7c9 */
  if (C.zf) goto L_1231a7c9;
  /* 1231a7c3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a7c7 je 0x1231a7d9 */
  if (C.zf) goto L_1231a7d9;
L_1231a7c9:;
  /* 1231a7c9 call 0x1231db70 */
  push32(0x1231a7ceu); f_1231db70();
  /* 1231a7ce mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1231a7d4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1231a7d7 jmp 0x1231a7dc */
  goto L_1231a7dc;
L_1231a7d9:;
  /* 1231a7d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1231a7dc:;
  /* 1231a7dc mov esp, ebp */
  ESP = (EBP);
  /* 1231a7de pop ebp */
  EBP = (pop32());
  /* 1231a7df ret  */
  ESPCHK(0x1231a740u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1231a7e0 (104 bytes, 43 insns) */
void f_1231a7e0(void) {
  FTRACE(0x1231a7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231a7e0 push ebx */
  push32((uint32_t)(EBX));
  /* 1231a7e1 push esi */
  push32((uint32_t)(ESI));
  /* 1231a7e2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1231a7e6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231a7e8 jne 0x1231a802 */
  if (!C.zf) goto L_1231a802;
  /* 1231a7ea mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1231a7ee mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1231a7f2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1231a7f4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1231a7f6 mov ebx, eax */
  EBX = (EAX);
  /* 1231a7f8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1231a7fc div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1231a7fe mov edx, ebx */
  EDX = (EBX);
  /* 1231a800 jmp 0x1231a843 */
  goto L_1231a843;
L_1231a802:;
  /* 1231a802 mov ecx, eax */
  ECX = (EAX);
  /* 1231a804 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1231a808 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1231a80c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1231a810:;
  /* 1231a810 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1231a812 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1231a814 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1231a816 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1231a818 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1231a81a jne 0x1231a810 */
  if (!C.zf) goto L_1231a810;
  /* 1231a81c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1231a81e mov esi, eax */
  ESI = (EAX);
  /* 1231a820 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1231a824 mov ecx, eax */
  ECX = (EAX);
  /* 1231a826 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1231a82a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1231a82c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a82e jb 0x1231a83e */
  if (C.cf) goto L_1231a83e;
  /* 1231a830 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a834 ja 0x1231a83e */
  if ((!C.cf&&!C.zf)) goto L_1231a83e;
  /* 1231a836 jb 0x1231a83f */
  if (C.cf) goto L_1231a83f;
  /* 1231a838 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a83c jbe 0x1231a83f */
  if ((C.cf||C.zf)) goto L_1231a83f;
L_1231a83e:;
  /* 1231a83e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1231a83f:;
  /* 1231a83f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1231a841 mov eax, esi */
  EAX = (ESI);
L_1231a843:;
  /* 1231a843 pop esi */
  ESI = (pop32());
  /* 1231a844 pop ebx */
  EBX = (pop32());
  /* 1231a845 ret 0x10 */
  ESPCHK(0x1231a7e0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1231a850 (117 bytes, 44 insns) */
void f_1231a850(void) {
  FTRACE(0x1231a850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231a850 push ebx */
  push32((uint32_t)(EBX));
  /* 1231a851 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1231a855 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231a857 jne 0x1231a871 */
  if (!C.zf) goto L_1231a871;
  /* 1231a859 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1231a85d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1231a861 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1231a863 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1231a865 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1231a869 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1231a86b mov eax, edx */
  EAX = (EDX);
  /* 1231a86d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1231a86f jmp 0x1231a8c1 */
  goto L_1231a8c1;
L_1231a871:;
  /* 1231a871 mov ecx, eax */
  ECX = (EAX);
  /* 1231a873 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1231a877 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1231a87b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1231a87f:;
  /* 1231a87f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1231a881 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1231a883 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1231a885 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1231a887 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1231a889 jne 0x1231a87f */
  if (!C.zf) goto L_1231a87f;
  /* 1231a88b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1231a88d mov ecx, eax */
  ECX = (EAX);
  /* 1231a88f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1231a893 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1231a894 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1231a898 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a89a jb 0x1231a8aa */
  if (C.cf) goto L_1231a8aa;
  /* 1231a89c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a8a0 ja 0x1231a8aa */
  if ((!C.cf&&!C.zf)) goto L_1231a8aa;
  /* 1231a8a2 jb 0x1231a8b2 */
  if (C.cf) goto L_1231a8b2;
  /* 1231a8a4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a8a8 jbe 0x1231a8b2 */
  if ((C.cf||C.zf)) goto L_1231a8b2;
L_1231a8aa:;
  /* 1231a8aa sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231a8ae sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1231a8b2:;
  /* 1231a8b2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231a8b6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231a8ba neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1231a8bc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1231a8be sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1231a8c1:;
  /* 1231a8c1 pop ebx */
  EBX = (pop32());
  /* 1231a8c2 ret 0x10 */
  ESPCHK(0x1231a850u, _esp0);
  ESP += 20; return;
}

/* FUN_1000a8d0 @ 0x1231a8d0 (55 bytes, 16 insns) */
void f_1231a8d0(void) {
  FTRACE(0x1231a8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231a8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1231a8d1 mov ebp, esp */
  EBP = (ESP);
  /* 1231a8d3 mov eax, dword ptr [0x12340044] */
  EAX = (r32((uint32_t)(0x12340044)));
  /* 1231a8d8 push eax */
  push32((uint32_t)(EAX));
  /* 1231a8d9 call dword ptr [0x123442a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442a8))), 0x1231a8dfu);
  /* 1231a8df mov ecx, dword ptr [0x12340034] */
  ECX = (r32((uint32_t)(0x12340034)));
  /* 1231a8e5 push ecx */
  push32((uint32_t)(ECX));
  /* 1231a8e6 call dword ptr [0x123442a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442a8))), 0x1231a8ecu);
  /* 1231a8ec mov edx, dword ptr [0x12340024] */
  EDX = (r32((uint32_t)(0x12340024)));
  /* 1231a8f2 push edx */
  push32((uint32_t)(EDX));
  /* 1231a8f3 call dword ptr [0x123442a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442a8))), 0x1231a8f9u);
  /* 1231a8f9 mov eax, dword ptr [0x12340004] */
  EAX = (r32((uint32_t)(0x12340004)));
  /* 1231a8fe push eax */
  push32((uint32_t)(EAX));
  /* 1231a8ff call dword ptr [0x123442a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442a8))), 0x1231a905u);
  /* 1231a905 pop ebp */
  EBP = (pop32());
  /* 1231a906 ret  */
  ESPCHK(0x1231a8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a910 @ 0x1231a910 (159 bytes, 47 insns) */
void f_1231a910(void) {
  FTRACE(0x1231a910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231a910 push ebp */
  push32((uint32_t)(EBP));
  /* 1231a911 mov ebp, esp */
  EBP = (ESP);
  /* 1231a913 push ecx */
  push32((uint32_t)(ECX));
  /* 1231a914 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1231a91b jmp 0x1231a926 */
  goto L_1231a926;
L_1231a91d:;
  /* 1231a91d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231a920 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a923 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1231a926:;
  /* 1231a926 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a92a jge 0x1231a979 */
  if ((C.sf==C.of)) goto L_1231a979;
  /* 1231a92c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231a92f cmp dword ptr [ecx*4 + 0x12340000], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12340000))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a937 je 0x1231a977 */
  if (C.zf) goto L_1231a977;
  /* 1231a939 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a93d je 0x1231a977 */
  if (C.zf) goto L_1231a977;
  /* 1231a93f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a943 je 0x1231a977 */
  if (C.zf) goto L_1231a977;
  /* 1231a945 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a949 je 0x1231a977 */
  if (C.zf) goto L_1231a977;
  /* 1231a94b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a94f je 0x1231a977 */
  if (C.zf) goto L_1231a977;
  /* 1231a951 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231a954 mov eax, dword ptr [edx*4 + 0x12340000] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12340000)));
  /* 1231a95b push eax */
  push32((uint32_t)(EAX));
  /* 1231a95c call dword ptr [0x12344264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344264))), 0x1231a962u);
  /* 1231a962 push 2 */
  push32((uint32_t)(0x2u));
  /* 1231a964 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231a967 mov edx, dword ptr [ecx*4 + 0x12340000] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12340000)));
  /* 1231a96e push edx */
  push32((uint32_t)(EDX));
  /* 1231a96f call 0x12317090 */
  push32(0x1231a974u); f_12317090();
  /* 1231a974 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1231a977:;
  /* 1231a977 jmp 0x1231a91d */
  goto L_1231a91d;
L_1231a979:;
  /* 1231a979 mov eax, dword ptr [0x12340024] */
  EAX = (r32((uint32_t)(0x12340024)));
  /* 1231a97e push eax */
  push32((uint32_t)(EAX));
  /* 1231a97f call dword ptr [0x12344264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344264))), 0x1231a985u);
  /* 1231a985 mov ecx, dword ptr [0x12340034] */
  ECX = (r32((uint32_t)(0x12340034)));
  /* 1231a98b push ecx */
  push32((uint32_t)(ECX));
  /* 1231a98c call dword ptr [0x12344264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344264))), 0x1231a992u);
  /* 1231a992 mov edx, dword ptr [0x12340044] */
  EDX = (r32((uint32_t)(0x12340044)));
  /* 1231a998 push edx */
  push32((uint32_t)(EDX));
  /* 1231a999 call dword ptr [0x12344264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344264))), 0x1231a99fu);
  /* 1231a99f mov eax, dword ptr [0x12340004] */
  EAX = (r32((uint32_t)(0x12340004)));
  /* 1231a9a4 push eax */
  push32((uint32_t)(EAX));
  /* 1231a9a5 call dword ptr [0x12344264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344264))), 0x1231a9abu);
  /* 1231a9ab mov esp, ebp */
  ESP = (EBP);
  /* 1231a9ad pop ebp */
  EBP = (pop32());
  /* 1231a9ae ret  */
  ESPCHK(0x1231a910u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a9b0 @ 0x1231a9b0 (151 bytes, 46 insns) */
void f_1231a9b0(void) {
  FTRACE(0x1231a9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231a9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1231a9b1 mov ebp, esp */
  EBP = (ESP);
  /* 1231a9b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1231a9b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231a9b7 cmp dword ptr [eax*4 + 0x12340000], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12340000))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a9bf jne 0x1231aa32 */
  if (!C.zf) goto L_1231aa32;
  /* 1231a9c1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1231a9c6 push 0x1233d8dc */
  push32((uint32_t)(0x1233d8dcu));
  /* 1231a9cb push 2 */
  push32((uint32_t)(0x2u));
  /* 1231a9cd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1231a9cf call 0x12316600 */
  push32(0x1231a9d4u); f_12316600();
  /* 1231a9d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a9d7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1231a9da cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a9de jne 0x1231a9ea */
  if (!C.zf) goto L_1231a9ea;
  /* 1231a9e0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1231a9e2 call 0x12314450 */
  push32(0x1231a9e7u); f_12314450();
  /* 1231a9e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1231a9ea:;
  /* 1231a9ea push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1231a9ec call 0x1231a9b0 */
  push32(0x1231a9f1u); f_1231a9b0();
  /* 1231a9f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231a9f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231a9f7 cmp dword ptr [ecx*4 + 0x12340000], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12340000))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231a9ff jne 0x1231aa1a */
  if (!C.zf) goto L_1231aa1a;
  /* 1231aa01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231aa04 push edx */
  push32((uint32_t)(EDX));
  /* 1231aa05 call dword ptr [0x123442a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442a8))), 0x1231aa0bu);
  /* 1231aa0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231aa0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231aa11 mov dword ptr [eax*4 + 0x12340000], ecx */
  w32((uint32_t)(EAX*4 + 0x12340000), (ECX));
  /* 1231aa18 jmp 0x1231aa28 */
  goto L_1231aa28;
L_1231aa1a:;
  /* 1231aa1a push 2 */
  push32((uint32_t)(0x2u));
  /* 1231aa1c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231aa1f push edx */
  push32((uint32_t)(EDX));
  /* 1231aa20 call 0x12317090 */
  push32(0x1231aa25u); f_12317090();
  /* 1231aa25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1231aa28:;
  /* 1231aa28 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1231aa2a call 0x1231aa50 */
  push32(0x1231aa2fu); f_1231aa50();
  /* 1231aa2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1231aa32:;
  /* 1231aa32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231aa35 mov ecx, dword ptr [eax*4 + 0x12340000] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12340000)));
  /* 1231aa3c push ecx */
  push32((uint32_t)(ECX));
  /* 1231aa3d call dword ptr [0x123442a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442a0))), 0x1231aa43u);
  /* 1231aa43 mov esp, ebp */
  ESP = (EBP);
  /* 1231aa45 pop ebp */
  EBP = (pop32());
  /* 1231aa46 ret  */
  ESPCHK(0x1231a9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa50 @ 0x1231aa50 (22 bytes, 8 insns) */
void f_1231aa50(void) {
  FTRACE(0x1231aa50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231aa50 push ebp */
  push32((uint32_t)(EBP));
  /* 1231aa51 mov ebp, esp */
  EBP = (ESP);
  /* 1231aa53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231aa56 mov ecx, dword ptr [eax*4 + 0x12340000] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12340000)));
  /* 1231aa5d push ecx */
  push32((uint32_t)(ECX));
  /* 1231aa5e call dword ptr [0x123442a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442a4))), 0x1231aa64u);
  /* 1231aa64 pop ebp */
  EBP = (pop32());
  /* 1231aa65 ret  */
  ESPCHK(0x1231aa50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa70 @ 0x1231aa70 (26 bytes, 10 insns) */
void f_1231aa70(void) {
  FTRACE(0x1231aa70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231aa70 push ebp */
  push32((uint32_t)(EBP));
  /* 1231aa71 mov ebp, esp */
  EBP = (ESP);
  /* 1231aa73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231aa76 push eax */
  push32((uint32_t)(EAX));
  /* 1231aa77 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231aa79 call dword ptr [0x123442ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442ac))), 0x1231aa7fu);
  /* 1231aa7f push 0xff */
  push32((uint32_t)(0xffu));
  /* 1231aa84 call dword ptr [0x1234422c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1234422c))), 0x1231aa8au);
  /* 1231aa8a pop ebp */
  EBP = (pop32());
  /* 1231aa8b ret  */
  ESPCHK(0x1231aa70u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x1231aa90 (446 bytes, 130 insns) */
void f_1231aa90(void) {
  FTRACE(0x1231aa90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231aa90 push ebp */
  push32((uint32_t)(EBP));
  /* 1231aa91 mov ebp, esp */
  EBP = (ESP);
  /* 1231aa93 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231aa96 call 0x12316040 */
  push32(0x1231aa9bu); f_12316040();
  /* 1231aa9b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1231aa9e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231aaa1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 1231aaa4 push ecx */
  push32((uint32_t)(ECX));
  /* 1231aaa5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231aaa8 push edx */
  push32((uint32_t)(EDX));
  /* 1231aaa9 call 0x1231ac50 */
  push32(0x1231aaaeu); f_1231ac50();
  /* 1231aaae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231aab1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1231aab4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231aab8 je 0x1231aac3 */
  if (C.zf) goto L_1231aac3;
  /* 1231aaba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231aabd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231aac1 jne 0x1231aad2 */
  if (!C.zf) goto L_1231aad2;
L_1231aac3:;
  /* 1231aac3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231aac6 push ecx */
  push32((uint32_t)(ECX));
  /* 1231aac7 call dword ptr [0x123442b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442b0))), 0x1231aacdu);
  /* 1231aacd jmp 0x1231ac4a */
  goto L_1231ac4a;
L_1231aad2:;
  /* 1231aad2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231aad5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231aad9 jne 0x1231aaef */
  if (!C.zf) goto L_1231aaef;
  /* 1231aadb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231aade mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1231aae5 mov eax, 1 */
  EAX = (0x1u);
  /* 1231aaea jmp 0x1231ac4a */
  goto L_1231ac4a;
L_1231aaef:;
  /* 1231aaef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231aaf2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231aaf6 jne 0x1231ab00 */
  if (!C.zf) goto L_1231ab00;
  /* 1231aaf8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1231aafb jmp 0x1231ac4a */
  goto L_1231ac4a;
L_1231ab00:;
  /* 1231ab00 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231ab03 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1231ab06 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1231ab09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231ab0c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 1231ab0f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1231ab12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231ab15 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231ab18 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 1231ab1b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231ab1e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ab22 jne 0x1231ac27 */
  if (!C.zf) goto L_1231ac27;
  /* 1231ab28 mov eax, dword ptr [0x12340138] */
  EAX = (r32((uint32_t)(0x12340138)));
  /* 1231ab2d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1231ab30 jmp 0x1231ab3b */
  goto L_1231ab3b;
L_1231ab32:;
  /* 1231ab32 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231ab35 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ab38 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1231ab3b:;
  /* 1231ab3b mov edx, dword ptr [0x12340138] */
  EDX = (r32((uint32_t)(0x12340138)));
  /* 1231ab41 add edx, dword ptr [0x1234013c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1234013c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ab47 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ab4a jge 0x1231ab62 */
  if ((C.sf==C.of)) goto L_1231ab62;
  /* 1231ab4c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231ab4f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231ab52 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231ab55 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1231ab58 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1231ab60 jmp 0x1231ab32 */
  goto L_1231ab32;
L_1231ab62:;
  /* 1231ab62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231ab65 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 1231ab68 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231ab6b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231ab6e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ab74 jne 0x1231ab85 */
  if (!C.zf) goto L_1231ab85;
  /* 1231ab76 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231ab79 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 1231ab80 jmp 0x1231ac0d */
  goto L_1231ac0d;
L_1231ab85:;
  /* 1231ab85 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231ab88 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ab8e jne 0x1231ab9c */
  if (!C.zf) goto L_1231ab9c;
  /* 1231ab90 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231ab93 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 1231ab9a jmp 0x1231ac0d */
  goto L_1231ac0d;
L_1231ab9c:;
  /* 1231ab9c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231ab9f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231aba5 jne 0x1231abb3 */
  if (!C.zf) goto L_1231abb3;
  /* 1231aba7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231abaa mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 1231abb1 jmp 0x1231ac0d */
  goto L_1231ac0d;
L_1231abb3:;
  /* 1231abb3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231abb6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231abbc jne 0x1231abca */
  if (!C.zf) goto L_1231abca;
  /* 1231abbe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231abc1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 1231abc8 jmp 0x1231ac0d */
  goto L_1231ac0d;
L_1231abca:;
  /* 1231abca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231abcd cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231abd3 jne 0x1231abe1 */
  if (!C.zf) goto L_1231abe1;
  /* 1231abd5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231abd8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 1231abdf jmp 0x1231ac0d */
  goto L_1231ac0d;
L_1231abe1:;
  /* 1231abe1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231abe4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231abea jne 0x1231abf8 */
  if (!C.zf) goto L_1231abf8;
  /* 1231abec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231abef mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 1231abf6 jmp 0x1231ac0d */
  goto L_1231ac0d;
L_1231abf8:;
  /* 1231abf8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231abfb cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ac01 jne 0x1231ac0d */
  if (!C.zf) goto L_1231ac0d;
  /* 1231ac03 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231ac06 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1231ac0d:;
  /* 1231ac0d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231ac10 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 1231ac13 push edx */
  push32((uint32_t)(EDX));
  /* 1231ac14 push 8 */
  push32((uint32_t)(0x8u));
  /* 1231ac16 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1231ac19u);
  /* 1231ac19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ac1c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231ac1f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231ac22 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 1231ac25 jmp 0x1231ac3e */
  goto L_1231ac3e;
L_1231ac27:;
  /* 1231ac27 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231ac2a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 1231ac31 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231ac34 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1231ac37 push ecx */
  push32((uint32_t)(ECX));
  /* 1231ac38 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1231ac3bu);
  /* 1231ac3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1231ac3e:;
  /* 1231ac3e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231ac41 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231ac44 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 1231ac47 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1231ac4a:;
  /* 1231ac4a mov esp, ebp */
  ESP = (EBP);
  /* 1231ac4c pop ebp */
  EBP = (pop32());
  /* 1231ac4d ret  */
  ESPCHK(0x1231aa90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac50 @ 0x1231ac50 (89 bytes, 35 insns) */
void f_1231ac50(void) {
  FTRACE(0x1231ac50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231ac50 push ebp */
  push32((uint32_t)(EBP));
  /* 1231ac51 mov ebp, esp */
  EBP = (ESP);
  /* 1231ac53 push ecx */
  push32((uint32_t)(ECX));
  /* 1231ac54 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231ac57 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1231ac5a:;
  /* 1231ac5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231ac5d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1231ac5f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ac62 je 0x1231ac82 */
  if (C.zf) goto L_1231ac82;
  /* 1231ac64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231ac67 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ac6a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1231ac6d mov ecx, dword ptr [0x12340144] */
  ECX = (r32((uint32_t)(0x12340144)));
  /* 1231ac73 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231ac76 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231ac79 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ac7b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ac7e jae 0x1231ac82 */
  if (!C.cf) goto L_1231ac82;
  /* 1231ac80 jmp 0x1231ac5a */
  goto L_1231ac5a;
L_1231ac82:;
  /* 1231ac82 mov eax, dword ptr [0x12340144] */
  EAX = (r32((uint32_t)(0x12340144)));
  /* 1231ac87 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231ac8a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231ac8d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ac8f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ac92 jae 0x1231ac9e */
  if (!C.cf) goto L_1231ac9e;
  /* 1231ac94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231ac97 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1231ac99 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ac9c je 0x1231aca2 */
  if (C.zf) goto L_1231aca2;
L_1231ac9e:;
  /* 1231ac9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231aca0 jmp 0x1231aca5 */
  goto L_1231aca5;
L_1231aca2:;
  /* 1231aca2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1231aca5:;
  /* 1231aca5 mov esp, ebp */
  ESP = (EBP);
  /* 1231aca7 pop ebp */
  EBP = (pop32());
  /* 1231aca8 ret  */
  ESPCHK(0x1231ac50u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x1231acb0 (48 bytes, 17 insns) */
void f_1231acb0(void) {
  FTRACE(0x1231acb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231acb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1231acb1 mov ebp, esp */
  EBP = (ESP);
  /* 1231acb3 push ecx */
  push32((uint32_t)(ECX));
  /* 1231acb4 push 9 */
  push32((uint32_t)(0x9u));
  /* 1231acb6 call 0x1231a9b0 */
  push32(0x1231acbbu); f_1231a9b0();
  /* 1231acbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231acbe mov eax, dword ptr [0x12341924] */
  EAX = (r32((uint32_t)(0x12341924)));
  /* 1231acc3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1231acc6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231acc9 mov dword ptr [0x12341924], ecx */
  w32((uint32_t)(0x12341924), (ECX));
  /* 1231accf push 9 */
  push32((uint32_t)(0x9u));
  /* 1231acd1 call 0x1231aa50 */
  push32(0x1231acd6u); f_1231aa50();
  /* 1231acd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231acd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231acdc mov esp, ebp */
  ESP = (EBP);
  /* 1231acde pop ebp */
  EBP = (pop32());
  /* 1231acdf ret  */
  ESPCHK(0x1231acb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ace0 @ 0x1231ace0 (10 bytes, 5 insns) */
void f_1231ace0(void) {
  FTRACE(0x1231ace0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231ace0 push ebp */
  push32((uint32_t)(EBP));
  /* 1231ace1 mov ebp, esp */
  EBP = (ESP);
  /* 1231ace3 mov eax, dword ptr [0x12341924] */
  EAX = (r32((uint32_t)(0x12341924)));
  /* 1231ace8 pop ebp */
  EBP = (pop32());
  /* 1231ace9 ret  */
  ESPCHK(0x1231ace0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x1231acf0 (45 bytes, 19 insns) */
void f_1231acf0(void) {
  FTRACE(0x1231acf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231acf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1231acf1 mov ebp, esp */
  EBP = (ESP);
  /* 1231acf3 push ecx */
  push32((uint32_t)(ECX));
  /* 1231acf4 mov eax, dword ptr [0x12341924] */
  EAX = (r32((uint32_t)(0x12341924)));
  /* 1231acf9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1231acfc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ad00 je 0x1231ad10 */
  if (C.zf) goto L_1231ad10;
  /* 1231ad02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231ad05 push ecx */
  push32((uint32_t)(ECX));
  /* 1231ad06 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1231ad09u);
  /* 1231ad09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ad0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231ad0e jne 0x1231ad14 */
  if (!C.zf) goto L_1231ad14;
L_1231ad10:;
  /* 1231ad10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231ad12 jmp 0x1231ad19 */
  goto L_1231ad19;
L_1231ad14:;
  /* 1231ad14 mov eax, 1 */
  EAX = (0x1u);
L_1231ad19:;
  /* 1231ad19 mov esp, ebp */
  ESP = (EBP);
  /* 1231ad1b pop ebp */
  EBP = (pop32());
  /* 1231ad1c ret  */
  ESPCHK(0x1231acf0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x1231ad20 (88 bytes, 40 insns) */
void f_1231ad20(void) {
  FTRACE(0x1231ad20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231ad20 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1231ad24 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1231ad28 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1231ad2a je 0x1231ad73 */
  if (C.zf) goto L_1231ad73;
  /* 1231ad2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231ad2e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 1231ad32 push edi */
  push32((uint32_t)(EDI));
  /* 1231ad33 mov edi, ecx */
  EDI = (ECX);
  /* 1231ad35 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ad38 jb 0x1231ad67 */
  if (C.cf) goto L_1231ad67;
  /* 1231ad3a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1231ad3c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1231ad3f je 0x1231ad49 */
  if (C.zf) goto L_1231ad49;
  /* 1231ad41 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1231ad43:;
  /* 1231ad43 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1231ad45 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1231ad46 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1231ad47 jne 0x1231ad43 */
  if (!C.zf) goto L_1231ad43;
L_1231ad49:;
  /* 1231ad49 mov ecx, eax */
  ECX = (EAX);
  /* 1231ad4b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1231ad4e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ad50 mov ecx, eax */
  ECX = (EAX);
  /* 1231ad52 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1231ad55 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ad57 mov ecx, edx */
  ECX = (EDX);
  /* 1231ad59 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1231ad5c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1231ad5f je 0x1231ad67 */
  if (C.zf) goto L_1231ad67;
  /* 1231ad61 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1231ad63 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1231ad65 je 0x1231ad6d */
  if (C.zf) goto L_1231ad6d;
L_1231ad67:;
  /* 1231ad67 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1231ad69 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1231ad6a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1231ad6b jne 0x1231ad67 */
  if (!C.zf) goto L_1231ad67;
L_1231ad6d:;
  /* 1231ad6d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1231ad71 pop edi */
  EDI = (pop32());
  /* 1231ad72 ret  */
  ESPCHK(0x1231ad20u, _esp0);
  ESP += 4; return;
L_1231ad73:;
  /* 1231ad73 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1231ad77 ret  */
  ESPCHK(0x1231ad20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad80 @ 0x1231ad80 (23 bytes, 10 insns) */
void f_1231ad80(void) {
  FTRACE(0x1231ad80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231ad80 push ebp */
  push32((uint32_t)(EBP));
  /* 1231ad81 mov ebp, esp */
  EBP = (ESP);
  /* 1231ad83 mov eax, dword ptr [0x12341920] */
  EAX = (r32((uint32_t)(0x12341920)));
  /* 1231ad88 push eax */
  push32((uint32_t)(EAX));
  /* 1231ad89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231ad8c push ecx */
  push32((uint32_t)(ECX));
  /* 1231ad8d call 0x1231ada0 */
  push32(0x1231ad92u); f_1231ada0();
  /* 1231ad92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ad95 pop ebp */
  EBP = (pop32());
  /* 1231ad96 ret  */
  ESPCHK(0x1231ad80u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x1231ada0 (87 bytes, 34 insns) */
void f_1231ada0(void) {
  FTRACE(0x1231ada0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231ada0 push ebp */
  push32((uint32_t)(EBP));
  /* 1231ada1 mov ebp, esp */
  EBP = (ESP);
  /* 1231ada3 push ecx */
  push32((uint32_t)(ECX));
  /* 1231ada4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ada8 jbe 0x1231adae */
  if ((C.cf||C.zf)) goto L_1231adae;
  /* 1231adaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231adac jmp 0x1231adf3 */
  goto L_1231adf3;
L_1231adae:;
  /* 1231adae cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231adb2 ja 0x1231adc5 */
  if ((!C.cf&&!C.zf)) goto L_1231adc5;
  /* 1231adb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231adb7 push eax */
  push32((uint32_t)(EAX));
  /* 1231adb8 call 0x1231ae00 */
  push32(0x1231adbdu); f_1231ae00();
  /* 1231adbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231adc0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1231adc3 jmp 0x1231adcc */
  goto L_1231adcc;
L_1231adc5:;
  /* 1231adc5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1231adcc:;
  /* 1231adcc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231add0 jne 0x1231add8 */
  if (!C.zf) goto L_1231add8;
  /* 1231add2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231add6 jne 0x1231addd */
  if (!C.zf) goto L_1231addd;
L_1231add8:;
  /* 1231add8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231addb jmp 0x1231adf3 */
  goto L_1231adf3;
L_1231addd:;
  /* 1231addd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231ade0 push ecx */
  push32((uint32_t)(ECX));
  /* 1231ade1 call 0x1231acf0 */
  push32(0x1231ade6u); f_1231acf0();
  /* 1231ade6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ade9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231adeb jne 0x1231adf1 */
  if (!C.zf) goto L_1231adf1;
  /* 1231aded xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231adef jmp 0x1231adf3 */
  goto L_1231adf3;
L_1231adf1:;
  /* 1231adf1 jmp 0x1231adae */
  goto L_1231adae;
L_1231adf3:;
  /* 1231adf3 mov esp, ebp */
  ESP = (EBP);
  /* 1231adf5 pop ebp */
  EBP = (pop32());
  /* 1231adf6 ret  */
  ESPCHK(0x1231ada0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae00 @ 0x1231ae00 (109 bytes, 37 insns) */
void f_1231ae00(void) {
  FTRACE(0x1231ae00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231ae00 push ebp */
  push32((uint32_t)(EBP));
  /* 1231ae01 mov ebp, esp */
  EBP = (ESP);
  /* 1231ae03 push ecx */
  push32((uint32_t)(ECX));
  /* 1231ae04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231ae07 cmp eax, dword ptr [0x12340154] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12340154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ae0d ja 0x1231ae3d */
  if ((!C.cf&&!C.zf)) goto L_1231ae3d;
  /* 1231ae0f push 9 */
  push32((uint32_t)(0x9u));
  /* 1231ae11 call 0x1231a9b0 */
  push32(0x1231ae16u); f_1231a9b0();
  /* 1231ae16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ae19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231ae1c push ecx */
  push32((uint32_t)(ECX));
  /* 1231ae1d call 0x1231b940 */
  push32(0x1231ae22u); f_1231b940();
  /* 1231ae22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ae25 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1231ae28 push 9 */
  push32((uint32_t)(0x9u));
  /* 1231ae2a call 0x1231aa50 */
  push32(0x1231ae2fu); f_1231aa50();
  /* 1231ae2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ae32 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ae36 je 0x1231ae3d */
  if (C.zf) goto L_1231ae3d;
  /* 1231ae38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231ae3b jmp 0x1231ae69 */
  goto L_1231ae69;
L_1231ae3d:;
  /* 1231ae3d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ae41 jne 0x1231ae4a */
  if (!C.zf) goto L_1231ae4a;
  /* 1231ae43 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_1231ae4a:;
  /* 1231ae4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231ae4d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ae50 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1231ae53 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1231ae56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231ae59 push eax */
  push32((uint32_t)(EAX));
  /* 1231ae5a push 0 */
  push32((uint32_t)(0x0u));
  /* 1231ae5c mov ecx, dword ptr [0x123430e4] */
  ECX = (r32((uint32_t)(0x123430e4)));
  /* 1231ae62 push ecx */
  push32((uint32_t)(ECX));
  /* 1231ae63 call dword ptr [0x123442b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442b4))), 0x1231ae69u);
L_1231ae69:;
  /* 1231ae69 mov esp, ebp */
  ESP = (EBP);
  /* 1231ae6b pop ebp */
  EBP = (pop32());
  /* 1231ae6c ret  */
  ESPCHK(0x1231ae00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae70 @ 0x1231ae70 (10 bytes, 5 insns) */
void f_1231ae70(void) {
  FTRACE(0x1231ae70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231ae70 push ebp */
  push32((uint32_t)(EBP));
  /* 1231ae71 mov ebp, esp */
  EBP = (ESP);
  /* 1231ae73 mov eax, 1 */
  EAX = (0x1u);
  /* 1231ae78 pop ebp */
  EBP = (pop32());
  /* 1231ae79 ret  */
  ESPCHK(0x1231ae70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae80 @ 0x1231ae80 (173 bytes, 59 insns) */
void f_1231ae80(void) {
  FTRACE(0x1231ae80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231ae80 push ebp */
  push32((uint32_t)(EBP));
  /* 1231ae81 mov ebp, esp */
  EBP = (ESP);
  /* 1231ae83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231ae86 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ae8a jbe 0x1231ae93 */
  if ((C.cf||C.zf)) goto L_1231ae93;
  /* 1231ae8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231ae8e jmp 0x1231af29 */
  goto L_1231af29;
L_1231ae93:;
  /* 1231ae93 push 9 */
  push32((uint32_t)(0x9u));
  /* 1231ae95 call 0x1231a9b0 */
  push32(0x1231ae9au); f_1231a9b0();
  /* 1231ae9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ae9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231aea0 push eax */
  push32((uint32_t)(EAX));
  /* 1231aea1 call 0x1231b2b0 */
  push32(0x1231aea6u); f_1231b2b0();
  /* 1231aea6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231aea9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1231aeac cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231aeb0 je 0x1231aef1 */
  if (C.zf) goto L_1231aef1;
  /* 1231aeb2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1231aeb9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231aebc cmp ecx, dword ptr [0x12340154] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12340154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231aec2 ja 0x1231aee2 */
  if ((!C.cf&&!C.zf)) goto L_1231aee2;
  /* 1231aec4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231aec7 push edx */
  push32((uint32_t)(EDX));
  /* 1231aec8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231aecb push eax */
  push32((uint32_t)(EAX));
  /* 1231aecc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231aecf push ecx */
  push32((uint32_t)(ECX));
  /* 1231aed0 call 0x1231c180 */
  push32(0x1231aed5u); f_1231c180();
  /* 1231aed5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231aed8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231aeda je 0x1231aee2 */
  if (C.zf) goto L_1231aee2;
  /* 1231aedc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231aedf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1231aee2:;
  /* 1231aee2 push 9 */
  push32((uint32_t)(0x9u));
  /* 1231aee4 call 0x1231aa50 */
  push32(0x1231aee9u); f_1231aa50();
  /* 1231aee9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231aeec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231aeef jmp 0x1231af29 */
  goto L_1231af29;
L_1231aef1:;
  /* 1231aef1 push 9 */
  push32((uint32_t)(0x9u));
  /* 1231aef3 call 0x1231aa50 */
  push32(0x1231aef8u); f_1231aa50();
  /* 1231aef8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231aefb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231aeff jne 0x1231af08 */
  if (!C.zf) goto L_1231af08;
  /* 1231af01 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1231af08:;
  /* 1231af08 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231af0b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231af0e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1231af10 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1231af13 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231af16 push ecx */
  push32((uint32_t)(ECX));
  /* 1231af17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231af1a push edx */
  push32((uint32_t)(EDX));
  /* 1231af1b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1231af1d mov eax, dword ptr [0x123430e4] */
  EAX = (r32((uint32_t)(0x123430e4)));
  /* 1231af22 push eax */
  push32((uint32_t)(EAX));
  /* 1231af23 call dword ptr [0x123442b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442b8))), 0x1231af29u);
L_1231af29:;
  /* 1231af29 mov esp, ebp */
  ESP = (EBP);
  /* 1231af2b pop ebp */
  EBP = (pop32());
  /* 1231af2c ret  */
  ESPCHK(0x1231ae80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af30 @ 0x1231af30 (490 bytes, 165 insns) */
void f_1231af30(void) {
  FTRACE(0x1231af30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231af30 push ebp */
  push32((uint32_t)(EBP));
  /* 1231af31 mov ebp, esp */
  EBP = (ESP);
  /* 1231af33 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231af36 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231af3a jne 0x1231af4d */
  if (!C.zf) goto L_1231af4d;
  /* 1231af3c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231af3f push eax */
  push32((uint32_t)(EAX));
  /* 1231af40 call 0x1231ad80 */
  push32(0x1231af45u); f_1231ad80();
  /* 1231af45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231af48 jmp 0x1231b116 */
  goto L_1231b116;
L_1231af4d:;
  /* 1231af4d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231af51 jne 0x1231af66 */
  if (!C.zf) goto L_1231af66;
  /* 1231af53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231af56 push ecx */
  push32((uint32_t)(ECX));
  /* 1231af57 call 0x1231b120 */
  push32(0x1231af5cu); f_1231b120();
  /* 1231af5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231af5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231af61 jmp 0x1231b116 */
  goto L_1231b116;
L_1231af66:;
  /* 1231af66 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1231af6d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231af71 ja 0x1231b0e9 */
  if ((!C.cf&&!C.zf)) goto L_1231b0e9;
  /* 1231af77 push 9 */
  push32((uint32_t)(0x9u));
  /* 1231af79 call 0x1231a9b0 */
  push32(0x1231af7eu); f_1231a9b0();
  /* 1231af7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231af81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231af84 push edx */
  push32((uint32_t)(EDX));
  /* 1231af85 call 0x1231b2b0 */
  push32(0x1231af8au); f_1231b2b0();
  /* 1231af8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231af8d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1231af90 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231af94 je 0x1231b0ac */
  if (C.zf) goto L_1231b0ac;
  /* 1231af9a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231af9d cmp eax, dword ptr [0x12340154] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12340154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231afa3 ja 0x1231b020 */
  if ((!C.cf&&!C.zf)) goto L_1231b020;
  /* 1231afa5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231afa8 push ecx */
  push32((uint32_t)(ECX));
  /* 1231afa9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231afac push edx */
  push32((uint32_t)(EDX));
  /* 1231afad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231afb0 push eax */
  push32((uint32_t)(EAX));
  /* 1231afb1 call 0x1231c180 */
  push32(0x1231afb6u); f_1231c180();
  /* 1231afb6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231afb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231afbb je 0x1231afc5 */
  if (C.zf) goto L_1231afc5;
  /* 1231afbd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231afc0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1231afc3 jmp 0x1231b020 */
  goto L_1231b020;
L_1231afc5:;
  /* 1231afc5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231afc8 push edx */
  push32((uint32_t)(EDX));
  /* 1231afc9 call 0x1231b940 */
  push32(0x1231afceu); f_1231b940();
  /* 1231afce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231afd1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1231afd4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231afd8 je 0x1231b020 */
  if (C.zf) goto L_1231b020;
  /* 1231afda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231afdd mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 1231afe0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231afe3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1231afe6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231afe9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231afec jae 0x1231aff6 */
  if (!C.cf) goto L_1231aff6;
  /* 1231afee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231aff1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1231aff4 jmp 0x1231affc */
  goto L_1231affc;
L_1231aff6:;
  /* 1231aff6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231aff9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1231affc:;
  /* 1231affc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231afff push edx */
  push32((uint32_t)(EDX));
  /* 1231b000 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231b003 push eax */
  push32((uint32_t)(EAX));
  /* 1231b004 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231b007 push ecx */
  push32((uint32_t)(ECX));
  /* 1231b008 call 0x1231d790 */
  push32(0x1231b00du); f_1231d790();
  /* 1231b00d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b010 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231b013 push edx */
  push32((uint32_t)(EDX));
  /* 1231b014 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231b017 push eax */
  push32((uint32_t)(EAX));
  /* 1231b018 call 0x1231b370 */
  push32(0x1231b01du); f_1231b370();
  /* 1231b01d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1231b020:;
  /* 1231b020 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231b024 jne 0x1231b0a0 */
  if (!C.zf) goto L_1231b0a0;
  /* 1231b026 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231b02a jne 0x1231b033 */
  if (!C.zf) goto L_1231b033;
  /* 1231b02c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1231b033:;
  /* 1231b033 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231b036 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b039 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1231b03c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1231b03f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231b042 push edx */
  push32((uint32_t)(EDX));
  /* 1231b043 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231b045 mov eax, dword ptr [0x123430e4] */
  EAX = (r32((uint32_t)(0x123430e4)));
  /* 1231b04a push eax */
  push32((uint32_t)(EAX));
  /* 1231b04b call dword ptr [0x123442b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442b4))), 0x1231b051u);
  /* 1231b051 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1231b054 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231b058 je 0x1231b0a0 */
  if (C.zf) goto L_1231b0a0;
  /* 1231b05a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231b05d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1231b060 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231b063 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1231b066 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231b069 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231b06c jae 0x1231b076 */
  if (!C.cf) goto L_1231b076;
  /* 1231b06e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231b071 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1231b074 jmp 0x1231b07c */
  goto L_1231b07c;
L_1231b076:;
  /* 1231b076 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231b079 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1231b07c:;
  /* 1231b07c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231b07f push eax */
  push32((uint32_t)(EAX));
  /* 1231b080 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231b083 push ecx */
  push32((uint32_t)(ECX));
  /* 1231b084 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231b087 push edx */
  push32((uint32_t)(EDX));
  /* 1231b088 call 0x1231d790 */
  push32(0x1231b08du); f_1231d790();
  /* 1231b08d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b090 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231b093 push eax */
  push32((uint32_t)(EAX));
  /* 1231b094 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231b097 push ecx */
  push32((uint32_t)(ECX));
  /* 1231b098 call 0x1231b370 */
  push32(0x1231b09du); f_1231b370();
  /* 1231b09d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1231b0a0:;
  /* 1231b0a0 push 9 */
  push32((uint32_t)(0x9u));
  /* 1231b0a2 call 0x1231aa50 */
  push32(0x1231b0a7u); f_1231aa50();
  /* 1231b0a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b0aa jmp 0x1231b0e9 */
  goto L_1231b0e9;
L_1231b0ac:;
  /* 1231b0ac push 9 */
  push32((uint32_t)(0x9u));
  /* 1231b0ae call 0x1231aa50 */
  push32(0x1231b0b3u); f_1231aa50();
  /* 1231b0b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b0b6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231b0ba jne 0x1231b0c3 */
  if (!C.zf) goto L_1231b0c3;
  /* 1231b0bc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1231b0c3:;
  /* 1231b0c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231b0c6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b0c9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1231b0cc mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1231b0cf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231b0d2 push eax */
  push32((uint32_t)(EAX));
  /* 1231b0d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231b0d6 push ecx */
  push32((uint32_t)(ECX));
  /* 1231b0d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231b0d9 mov edx, dword ptr [0x123430e4] */
  EDX = (r32((uint32_t)(0x123430e4)));
  /* 1231b0df push edx */
  push32((uint32_t)(EDX));
  /* 1231b0e0 call dword ptr [0x123442b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442b8))), 0x1231b0e6u);
  /* 1231b0e6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1231b0e9:;
  /* 1231b0e9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231b0ed jne 0x1231b0f8 */
  if (!C.zf) goto L_1231b0f8;
  /* 1231b0ef cmp dword ptr [0x12341920], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341920))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231b0f6 jne 0x1231b0fd */
  if (!C.zf) goto L_1231b0fd;
L_1231b0f8:;
  /* 1231b0f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231b0fb jmp 0x1231b116 */
  goto L_1231b116;
L_1231b0fd:;
  /* 1231b0fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231b100 push eax */
  push32((uint32_t)(EAX));
  /* 1231b101 call 0x1231acf0 */
  push32(0x1231b106u); f_1231acf0();
  /* 1231b106 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b109 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231b10b jne 0x1231b111 */
  if (!C.zf) goto L_1231b111;
  /* 1231b10d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231b10f jmp 0x1231b116 */
  goto L_1231b116;
L_1231b111:;
  /* 1231b111 jmp 0x1231af66 */
  goto L_1231af66;
L_1231b116:;
  /* 1231b116 mov esp, ebp */
  ESP = (EBP);
  /* 1231b118 pop ebp */
  EBP = (pop32());
  /* 1231b119 ret  */
  ESPCHK(0x1231af30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b120 @ 0x1231b120 (104 bytes, 38 insns) */
void f_1231b120(void) {
  FTRACE(0x1231b120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231b120 push ebp */
  push32((uint32_t)(EBP));
  /* 1231b121 mov ebp, esp */
  EBP = (ESP);
  /* 1231b123 push ecx */
  push32((uint32_t)(ECX));
  /* 1231b124 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231b128 jne 0x1231b12c */
  if (!C.zf) goto L_1231b12c;
  /* 1231b12a jmp 0x1231b184 */
  goto L_1231b184;
L_1231b12c:;
  /* 1231b12c push 9 */
  push32((uint32_t)(0x9u));
  /* 1231b12e call 0x1231a9b0 */
  push32(0x1231b133u); f_1231a9b0();
  /* 1231b133 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b136 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231b139 push eax */
  push32((uint32_t)(EAX));
  /* 1231b13a call 0x1231b2b0 */
  push32(0x1231b13fu); f_1231b2b0();
  /* 1231b13f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b142 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1231b145 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231b149 je 0x1231b167 */
  if (C.zf) goto L_1231b167;
  /* 1231b14b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231b14e push ecx */
  push32((uint32_t)(ECX));
  /* 1231b14f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231b152 push edx */
  push32((uint32_t)(EDX));
  /* 1231b153 call 0x1231b370 */
  push32(0x1231b158u); f_1231b370();
  /* 1231b158 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b15b push 9 */
  push32((uint32_t)(0x9u));
  /* 1231b15d call 0x1231aa50 */
  push32(0x1231b162u); f_1231aa50();
  /* 1231b162 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b165 jmp 0x1231b184 */
  goto L_1231b184;
L_1231b167:;
  /* 1231b167 push 9 */
  push32((uint32_t)(0x9u));
  /* 1231b169 call 0x1231aa50 */
  push32(0x1231b16eu); f_1231aa50();
  /* 1231b16e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b171 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231b174 push eax */
  push32((uint32_t)(EAX));
  /* 1231b175 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231b177 mov ecx, dword ptr [0x123430e4] */
  ECX = (r32((uint32_t)(0x123430e4)));
  /* 1231b17d push ecx */
  push32((uint32_t)(ECX));
  /* 1231b17e call dword ptr [0x12344200] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344200))), 0x1231b184u);
L_1231b184:;
  /* 1231b184 mov esp, ebp */
  ESP = (EBP);
  /* 1231b186 pop ebp */
  EBP = (pop32());
  /* 1231b187 ret  */
  ESPCHK(0x1231b120u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b190 @ 0x1231b190 (116 bytes, 34 insns) */
void f_1231b190(void) {
  FTRACE(0x1231b190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231b190 push ebp */
  push32((uint32_t)(EBP));
  /* 1231b191 mov ebp, esp */
  EBP = (ESP);
  /* 1231b193 push ecx */
  push32((uint32_t)(ECX));
  /* 1231b194 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 1231b19b push 9 */
  push32((uint32_t)(0x9u));
  /* 1231b19d call 0x1231a9b0 */
  push32(0x1231b1a2u); f_1231a9b0();
  /* 1231b1a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b1a5 call 0x1231c8a0 */
  push32(0x1231b1aau); f_1231c8a0();
  /* 1231b1aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231b1ac jge 0x1231b1b5 */
  if ((C.sf==C.of)) goto L_1231b1b5;
  /* 1231b1ae mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1231b1b5:;
  /* 1231b1b5 push 9 */
  push32((uint32_t)(0x9u));
  /* 1231b1b7 call 0x1231aa50 */
  push32(0x1231b1bcu); f_1231aa50();
  /* 1231b1bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b1bf push 0 */
  push32((uint32_t)(0x0u));
  /* 1231b1c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231b1c3 mov eax, dword ptr [0x123430e4] */
  EAX = (r32((uint32_t)(0x123430e4)));
  /* 1231b1c8 push eax */
  push32((uint32_t)(EAX));
  /* 1231b1c9 call dword ptr [0x12344270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344270))), 0x1231b1cfu);
  /* 1231b1cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231b1d1 jne 0x1231b1fd */
  if (!C.zf) goto L_1231b1fd;
  /* 1231b1d3 call dword ptr [0x12344250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344250))), 0x1231b1d9u);
  /* 1231b1d9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231b1dc jne 0x1231b1f6 */
  if (!C.zf) goto L_1231b1f6;
  /* 1231b1de call 0x1231db80 */
  push32(0x1231b1e3u); f_1231db80();
  /* 1231b1e3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 1231b1e9 call 0x1231db70 */
  push32(0x1231b1eeu); f_1231db70();
  /* 1231b1ee mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 1231b1f4 jmp 0x1231b1fd */
  goto L_1231b1fd;
L_1231b1f6:;
  /* 1231b1f6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1231b1fd:;
  /* 1231b1fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231b200 mov esp, ebp */
  ESP = (EBP);
  /* 1231b202 pop ebp */
  EBP = (pop32());
  /* 1231b203 ret  */
  ESPCHK(0x1231b190u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b210 @ 0x1231b210 (10 bytes, 5 insns) */
void f_1231b210(void) {
  FTRACE(0x1231b210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231b210 push ebp */
  push32((uint32_t)(EBP));
  /* 1231b211 mov ebp, esp */
  EBP = (ESP);
  /* 1231b213 call 0x1231b190 */
  push32(0x1231b218u); f_1231b190();
  /* 1231b218 pop ebp */
  EBP = (pop32());
  /* 1231b219 ret  */
  ESPCHK(0x1231b210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b220 @ 0x1231b220 (10 bytes, 5 insns) */
void f_1231b220(void) {
  FTRACE(0x1231b220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231b220 push ebp */
  push32((uint32_t)(EBP));
  /* 1231b221 mov ebp, esp */
  EBP = (ESP);
  /* 1231b223 mov eax, dword ptr [0x12340154] */
  EAX = (r32((uint32_t)(0x12340154)));
  /* 1231b228 pop ebp */
  EBP = (pop32());
  /* 1231b229 ret  */
  ESPCHK(0x1231b220u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b230 @ 0x1231b230 (31 bytes, 11 insns) */
void f_1231b230(void) {
  FTRACE(0x1231b230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231b230 push ebp */
  push32((uint32_t)(EBP));
  /* 1231b231 mov ebp, esp */
  EBP = (ESP);
  /* 1231b233 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231b23a jbe 0x1231b240 */
  if ((C.cf||C.zf)) goto L_1231b240;
  /* 1231b23c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231b23e jmp 0x1231b24d */
  goto L_1231b24d;
L_1231b240:;
  /* 1231b240 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231b243 mov dword ptr [0x12340154], eax */
  w32((uint32_t)(0x12340154), (EAX));
  /* 1231b248 mov eax, 1 */
  EAX = (0x1u);
L_1231b24d:;
  /* 1231b24d pop ebp */
  EBP = (pop32());
  /* 1231b24e ret  */
  ESPCHK(0x1231b230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b250 @ 0x1231b250 (89 bytes, 20 insns) */
void f_1231b250(void) {
  FTRACE(0x1231b250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231b250 push ebp */
  push32((uint32_t)(EBP));
  /* 1231b251 mov ebp, esp */
  EBP = (ESP);
  /* 1231b253 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1231b258 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231b25a mov eax, dword ptr [0x123430e4] */
  EAX = (r32((uint32_t)(0x123430e4)));
  /* 1231b25f push eax */
  push32((uint32_t)(EAX));
  /* 1231b260 call dword ptr [0x123442b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442b4))), 0x1231b266u);
  /* 1231b266 mov dword ptr [0x12341d88], eax */
  w32((uint32_t)(0x12341d88), (EAX));
  /* 1231b26b cmp dword ptr [0x12341d88], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341d88))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231b272 jne 0x1231b278 */
  if (!C.zf) goto L_1231b278;
  /* 1231b274 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231b276 jmp 0x1231b2a7 */
  goto L_1231b2a7;
L_1231b278:;
  /* 1231b278 mov ecx, dword ptr [0x12341d88] */
  ECX = (r32((uint32_t)(0x12341d88)));
  /* 1231b27e mov dword ptr [0x12341d7c], ecx */
  w32((uint32_t)(0x12341d7c), (ECX));
  /* 1231b284 mov dword ptr [0x12341d80], 0 */
  w32((uint32_t)(0x12341d80), (0x0u));
  /* 1231b28e mov dword ptr [0x12341d84], 0 */
  w32((uint32_t)(0x12341d84), (0x0u));
  /* 1231b298 mov dword ptr [0x12341d68], 0x10 */
  w32((uint32_t)(0x12341d68), (0x10u));
  /* 1231b2a2 mov eax, 1 */
  EAX = (0x1u);
L_1231b2a7:;
  /* 1231b2a7 pop ebp */
  EBP = (pop32());
  /* 1231b2a8 ret  */
  ESPCHK(0x1231b250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2b0 @ 0x1231b2b0 (85 bytes, 29 insns) */
void f_1231b2b0(void) {
  FTRACE(0x1231b2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231b2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1231b2b1 mov ebp, esp */
  EBP = (ESP);
  /* 1231b2b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231b2b6 mov eax, dword ptr [0x12341d84] */
  EAX = (r32((uint32_t)(0x12341d84)));
  /* 1231b2bb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231b2be mov ecx, dword ptr [0x12341d88] */
  ECX = (r32((uint32_t)(0x12341d88)));
  /* 1231b2c4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b2c6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231b2c9 mov edx, dword ptr [0x12341d88] */
  EDX = (r32((uint32_t)(0x12341d88)));
  /* 1231b2cf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1231b2d2:;
  /* 1231b2d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231b2d5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231b2d8 jae 0x1231b2ff */
  if (!C.cf) goto L_1231b2ff;
  /* 1231b2da mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231b2dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231b2e0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231b2e3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1231b2e6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231b2ed jae 0x1231b2f4 */
  if (!C.cf) goto L_1231b2f4;
  /* 1231b2ef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231b2f2 jmp 0x1231b301 */
  goto L_1231b301;
L_1231b2f4:;
  /* 1231b2f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231b2f7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b2fa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1231b2fd jmp 0x1231b2d2 */
  goto L_1231b2d2;
L_1231b2ff:;
  /* 1231b2ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1231b301:;
  /* 1231b301 mov esp, ebp */
  ESP = (EBP);
  /* 1231b303 pop ebp */
  EBP = (pop32());
  /* 1231b304 ret  */
  ESPCHK(0x1231b2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b310 @ 0x1231b310 (95 bytes, 33 insns) */
void f_1231b310(void) {
  FTRACE(0x1231b310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231b310 push ebp */
  push32((uint32_t)(EBP));
  /* 1231b311 mov ebp, esp */
  EBP = (ESP);
  /* 1231b313 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231b316 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231b319 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231b31c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231b31f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1231b322 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231b325 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1231b328 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1231b32b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1231b330 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231b333 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1231b335 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231b338 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1231b33b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1231b33d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1231b33f jne 0x1231b361 */
  if (!C.zf) goto L_1231b361;
  /* 1231b341 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231b344 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1231b347 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231b349 jne 0x1231b361 */
  if (!C.zf) goto L_1231b361;
  /* 1231b34b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231b34e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 1231b354 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1231b356 je 0x1231b361 */
  if (C.zf) goto L_1231b361;
  /* 1231b358 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1231b35f jmp 0x1231b368 */
  goto L_1231b368;
L_1231b361:;
  /* 1231b361 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1231b368:;
  /* 1231b368 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231b36b mov esp, ebp */
  ESP = (EBP);
  /* 1231b36d pop ebp */
  EBP = (pop32());
  /* 1231b36e ret  */
  ESPCHK(0x1231b310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b370 @ 0x1231b370 (1485 bytes, 453 insns) */
void f_1231b370(void) {
  FTRACE(0x1231b370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231b370 push ebp */
  push32((uint32_t)(EBP));
  /* 1231b371 mov ebp, esp */
  EBP = (ESP);
  /* 1231b373 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231b376 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231b379 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1231b37c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1231b37f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231b382 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231b385 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231b388 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1231b38b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231b38e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1231b391 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1231b394 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231b397 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231b39d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1231b3a0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 1231b3a7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1231b3aa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231b3ad sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231b3b0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1231b3b3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1231b3b6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1231b3b8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231b3bb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1231b3be mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1231b3c1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b3c4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 1231b3c7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1231b3ca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1231b3cc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1231b3cf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1231b3d2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1231b3d5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1231b3d8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231b3db and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1231b3de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1231b3e0 jne 0x1231b508 */
  if (!C.zf) goto L_1231b508;
  /* 1231b3e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231b3e9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1231b3ec sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231b3ef mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1231b3f2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231b3f6 jbe 0x1231b3ff */
  if ((C.cf||C.zf)) goto L_1231b3ff;
  /* 1231b3f8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1231b3ff:;
  /* 1231b3ff mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1231b402 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1231b405 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1231b408 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231b40b jne 0x1231b4e1 */
  if (!C.zf) goto L_1231b4e1;
  /* 1231b411 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231b415 jae 0x1231b476 */
  if (!C.cf) goto L_1231b476;
  /* 1231b417 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1231b41c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231b41f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1231b421 not eax */
  EAX = (~(EAX));
  /* 1231b423 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231b426 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1231b429 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1231b42d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231b42f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231b432 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1231b435 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1231b439 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1231b43c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b43f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1231b442 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1231b445 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1231b448 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b44b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1231b44e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1231b451 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b454 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1231b458 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1231b45a jne 0x1231b474 */
  if (!C.zf) goto L_1231b474;
  /* 1231b45c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1231b461 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231b464 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1231b466 not eax */
  EAX = (~(EAX));
  /* 1231b468 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231b46b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1231b46d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1231b46f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231b472 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1231b474:;
  /* 1231b474 jmp 0x1231b4e1 */
  goto L_1231b4e1;
L_1231b476:;
  /* 1231b476 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231b479 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231b47c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1231b481 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1231b483 not edx */
  EDX = (~(EDX));
  /* 1231b485 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231b488 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1231b48b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1231b492 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1231b494 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231b497 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1231b49a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1231b4a1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1231b4a4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b4a7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1231b4aa sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1231b4ad mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1231b4b0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b4b3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1231b4b6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1231b4b9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b4bc movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1231b4c0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1231b4c2 jne 0x1231b4e1 */
  if (!C.zf) goto L_1231b4e1;
  /* 1231b4c4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231b4c7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231b4ca mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1231b4cf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1231b4d1 not edx */
  EDX = (~(EDX));
  /* 1231b4d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231b4d6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1231b4d9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1231b4db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231b4de mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1231b4e1:;
  /* 1231b4e1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1231b4e4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1231b4e7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1231b4ea mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1231b4ed mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1231b4f0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1231b4f3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1231b4f6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1231b4f9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1231b4fc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1231b4ff mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231b502 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b505 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_1231b508:;
  /* 1231b508 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231b50b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1231b50e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231b511 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1231b514 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231b518 jbe 0x1231b521 */
  if ((C.cf||C.zf)) goto L_1231b521;
  /* 1231b51a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1231b521:;
  /* 1231b521 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231b524 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1231b527 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1231b529 jne 0x1231b685 */
  if (!C.zf) goto L_1231b685;
  /* 1231b52f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1231b532 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231b535 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 1231b538 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231b53b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1231b53e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231b541 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1231b544 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231b548 jbe 0x1231b551 */
  if ((C.cf||C.zf)) goto L_1231b551;
  /* 1231b54a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_1231b551:;
  /* 1231b551 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231b554 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b557 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1231b55a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231b55d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1231b560 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231b563 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1231b566 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231b56a jbe 0x1231b573 */
  if ((C.cf||C.zf)) goto L_1231b573;
  /* 1231b56c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1231b573:;
  /* 1231b573 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231b576 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231b579 je 0x1231b67f */
  if (C.zf) goto L_1231b67f;
  /* 1231b57f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1231b582 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1231b585 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1231b588 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231b58b jne 0x1231b661 */
  if (!C.zf) goto L_1231b661;
  /* 1231b591 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231b595 jae 0x1231b5f6 */
  if (!C.cf) goto L_1231b5f6;
  /* 1231b597 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1231b59c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231b59f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1231b5a1 not edx */
  EDX = (~(EDX));
  /* 1231b5a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231b5a6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1231b5a9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1231b5ad and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1231b5af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231b5b2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1231b5b5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1231b5b9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1231b5bc add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b5bf mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1231b5c2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1231b5c5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1231b5c8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b5cb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1231b5ce mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1231b5d1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b5d4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1231b5d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1231b5da jne 0x1231b5f4 */
  if (!C.zf) goto L_1231b5f4;
  /* 1231b5dc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1231b5e1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231b5e4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1231b5e6 not edx */
  EDX = (~(EDX));
  /* 1231b5e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231b5eb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1231b5ed and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1231b5ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231b5f2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1231b5f4:;
  /* 1231b5f4 jmp 0x1231b661 */
  goto L_1231b661;
L_1231b5f6:;
  /* 1231b5f6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231b5f9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231b5fc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1231b601 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1231b603 not eax */
  EAX = (~(EAX));
  /* 1231b605 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231b608 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1231b60b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1231b612 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231b614 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231b617 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1231b61a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1231b621 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1231b624 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b627 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1231b62a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1231b62d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1231b630 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b633 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1231b636 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1231b639 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b63c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1231b640 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1231b642 jne 0x1231b661 */
  if (!C.zf) goto L_1231b661;
  /* 1231b644 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231b647 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231b64a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1231b64f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1231b651 not eax */
  EAX = (~(EAX));
  /* 1231b653 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231b656 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1231b659 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1231b65b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231b65e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1231b661:;
  /* 1231b661 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1231b664 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1231b667 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1231b66a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1231b66d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1231b670 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1231b673 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1231b676 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1231b679 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1231b67c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_1231b67f:;
  /* 1231b67f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1231b682 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_1231b685:;
  /* 1231b685 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231b688 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1231b68b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1231b68d jne 0x1231b69b */
  if (!C.zf) goto L_1231b69b;
  /* 1231b68f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231b692 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231b695 je 0x1231b7ab */
  if (C.zf) goto L_1231b7ab;
L_1231b69b:;
  /* 1231b69b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1231b69e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231b6a1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1231b6a4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1231b6a7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1231b6aa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1231b6ad mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1231b6b0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1231b6b3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1231b6b6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1231b6b9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1231b6bc mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1231b6bf mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1231b6c2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1231b6c5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1231b6c8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1231b6cb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1231b6ce mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1231b6d1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1231b6d4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1231b6d7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1231b6da cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231b6dd jne 0x1231b7ab */
  if (!C.zf) goto L_1231b7ab;
  /* 1231b6e3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231b6e7 jae 0x1231b744 */
  if (!C.cf) goto L_1231b744;
  /* 1231b6e9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1231b6ec add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b6ef movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1231b6f3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1231b6f6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b6f9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1231b6fc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1231b6ff mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1231b702 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b705 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1231b708 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1231b70a jne 0x1231b722 */
  if (!C.zf) goto L_1231b722;
  /* 1231b70c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1231b711 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1231b714 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1231b716 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231b719 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1231b71b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1231b71d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231b720 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1231b722:;
  /* 1231b722 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1231b727 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1231b72a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1231b72c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231b72f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1231b732 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1231b736 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231b738 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231b73b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1231b73e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1231b742 jmp 0x1231b7ab */
  goto L_1231b7ab;
L_1231b744:;
  /* 1231b744 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1231b747 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b74a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1231b74e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1231b751 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b754 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1231b757 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1231b75a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1231b75d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b760 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1231b763 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1231b765 jne 0x1231b782 */
  if (!C.zf) goto L_1231b782;
  /* 1231b767 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1231b76a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231b76d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1231b772 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1231b774 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231b777 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1231b77a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1231b77c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231b77f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1231b782:;
  /* 1231b782 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1231b785 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231b788 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1231b78d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1231b78f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231b792 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1231b795 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1231b79c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231b79e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231b7a1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1231b7a4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1231b7ab:;
  /* 1231b7ab mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1231b7ae mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231b7b1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1231b7b3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1231b7b6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b7b9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231b7bc mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1231b7bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231b7c2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1231b7c4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231b7c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231b7ca mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1231b7cc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231b7cf cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231b7d2 jne 0x1231b939 */
  if (!C.zf) goto L_1231b939;
  /* 1231b7d8 cmp dword ptr [0x12341d80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341d80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231b7df je 0x1231b928 */
  if (C.zf) goto L_1231b928;
  /* 1231b7e5 mov eax, dword ptr [0x12341d78] */
  EAX = (r32((uint32_t)(0x12341d78)));
  /* 1231b7ea shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1231b7ed mov ecx, dword ptr [0x12341d80] */
  ECX = (r32((uint32_t)(0x12341d80)));
  /* 1231b7f3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1231b7f6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b7f8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1231b7fb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1231b800 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1231b805 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231b808 push eax */
  push32((uint32_t)(EAX));
  /* 1231b809 call dword ptr [0x12344294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344294))), 0x1231b80fu);
  /* 1231b80f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1231b814 mov ecx, dword ptr [0x12341d78] */
  ECX = (r32((uint32_t)(0x12341d78)));
  /* 1231b81a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1231b81c mov eax, dword ptr [0x12341d80] */
  EAX = (r32((uint32_t)(0x12341d80)));
  /* 1231b821 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1231b824 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1231b826 mov edx, dword ptr [0x12341d80] */
  EDX = (r32((uint32_t)(0x12341d80)));
  /* 1231b82c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1231b82f mov eax, dword ptr [0x12341d80] */
  EAX = (r32((uint32_t)(0x12341d80)));
  /* 1231b834 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1231b837 mov edx, dword ptr [0x12341d78] */
  EDX = (r32((uint32_t)(0x12341d78)));
  /* 1231b83d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1231b848 mov eax, dword ptr [0x12341d80] */
  EAX = (r32((uint32_t)(0x12341d80)));
  /* 1231b84d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1231b850 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1231b853 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1231b856 mov eax, dword ptr [0x12341d80] */
  EAX = (r32((uint32_t)(0x12341d80)));
  /* 1231b85b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1231b85e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1231b861 mov edx, dword ptr [0x12341d80] */
  EDX = (r32((uint32_t)(0x12341d80)));
  /* 1231b867 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1231b86a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1231b86e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1231b870 jne 0x1231b886 */
  if (!C.zf) goto L_1231b886;
  /* 1231b872 mov edx, dword ptr [0x12341d80] */
  EDX = (r32((uint32_t)(0x12341d80)));
  /* 1231b878 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1231b87b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1231b87d mov ecx, dword ptr [0x12341d80] */
  ECX = (r32((uint32_t)(0x12341d80)));
  /* 1231b883 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1231b886:;
  /* 1231b886 mov edx, dword ptr [0x12341d80] */
  EDX = (r32((uint32_t)(0x12341d80)));
  /* 1231b88c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231b890 jne 0x1231b928 */
  if (!C.zf) goto L_1231b928;
  /* 1231b896 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1231b89b push 0 */
  push32((uint32_t)(0x0u));
  /* 1231b89d mov eax, dword ptr [0x12341d80] */
  EAX = (r32((uint32_t)(0x12341d80)));
  /* 1231b8a2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1231b8a5 push ecx */
  push32((uint32_t)(ECX));
  /* 1231b8a6 call dword ptr [0x12344294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344294))), 0x1231b8acu);
  /* 1231b8ac mov edx, dword ptr [0x12341d80] */
  EDX = (r32((uint32_t)(0x12341d80)));
  /* 1231b8b2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1231b8b5 push eax */
  push32((uint32_t)(EAX));
  /* 1231b8b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231b8b8 mov ecx, dword ptr [0x123430e4] */
  ECX = (r32((uint32_t)(0x123430e4)));
  /* 1231b8be push ecx */
  push32((uint32_t)(ECX));
  /* 1231b8bf call dword ptr [0x12344200] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344200))), 0x1231b8c5u);
  /* 1231b8c5 mov edx, dword ptr [0x12341d84] */
  EDX = (r32((uint32_t)(0x12341d84)));
  /* 1231b8cb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231b8ce mov eax, dword ptr [0x12341d88] */
  EAX = (r32((uint32_t)(0x12341d88)));
  /* 1231b8d3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b8d5 mov ecx, dword ptr [0x12341d80] */
  ECX = (r32((uint32_t)(0x12341d80)));
  /* 1231b8db add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b8de sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231b8e0 push eax */
  push32((uint32_t)(EAX));
  /* 1231b8e1 mov edx, dword ptr [0x12341d80] */
  EDX = (r32((uint32_t)(0x12341d80)));
  /* 1231b8e7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b8ea push edx */
  push32((uint32_t)(EDX));
  /* 1231b8eb mov eax, dword ptr [0x12341d80] */
  EAX = (r32((uint32_t)(0x12341d80)));
  /* 1231b8f0 push eax */
  push32((uint32_t)(EAX));
  /* 1231b8f1 call 0x1231ef50 */
  push32(0x1231b8f6u); f_1231ef50();
  /* 1231b8f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b8f9 mov ecx, dword ptr [0x12341d84] */
  ECX = (r32((uint32_t)(0x12341d84)));
  /* 1231b8ff sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231b902 mov dword ptr [0x12341d84], ecx */
  w32((uint32_t)(0x12341d84), (ECX));
  /* 1231b908 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231b90b cmp edx, dword ptr [0x12341d80] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12341d80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231b911 jbe 0x1231b91c */
  if ((C.cf||C.zf)) goto L_1231b91c;
  /* 1231b913 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231b916 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231b919 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1231b91c:;
  /* 1231b91c mov ecx, dword ptr [0x12341d88] */
  ECX = (r32((uint32_t)(0x12341d88)));
  /* 1231b922 mov dword ptr [0x12341d7c], ecx */
  w32((uint32_t)(0x12341d7c), (ECX));
L_1231b928:;
  /* 1231b928 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231b92b mov dword ptr [0x12341d80], edx */
  w32((uint32_t)(0x12341d80), (EDX));
  /* 1231b931 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231b934 mov dword ptr [0x12341d78], eax */
  w32((uint32_t)(0x12341d78), (EAX));
L_1231b939:;
  /* 1231b939 mov esp, ebp */
  ESP = (EBP);
  /* 1231b93b pop ebp */
  EBP = (pop32());
  /* 1231b93c ret  */
  ESPCHK(0x1231b370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b940 @ 0x1231b940 (1334 bytes, 427 insns) */
void f_1231b940(void) {
  FTRACE(0x1231b940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231b940 push ebp */
  push32((uint32_t)(EBP));
  /* 1231b941 mov ebp, esp */
  EBP = (ESP);
  /* 1231b943 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231b946 push esi */
  push32((uint32_t)(ESI));
  /* 1231b947 mov eax, dword ptr [0x12341d84] */
  EAX = (r32((uint32_t)(0x12341d84)));
  /* 1231b94c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231b94f mov ecx, dword ptr [0x12341d88] */
  ECX = (r32((uint32_t)(0x12341d88)));
  /* 1231b955 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b957 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1231b95a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231b95d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b960 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1231b963 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1231b966 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1231b969 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1231b96c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231b96f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1231b972 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231b976 jge 0x1231b98c */
  if ((C.sf==C.of)) goto L_1231b98c;
  /* 1231b978 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1231b97b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1231b97e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1231b980 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1231b983 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1231b98a jmp 0x1231b9a1 */
  goto L_1231b9a1;
L_1231b98c:;
  /* 1231b98c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1231b993 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1231b996 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231b999 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1231b99c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1231b99e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_1231b9a1:;
  /* 1231b9a1 mov ecx, dword ptr [0x12341d7c] */
  ECX = (r32((uint32_t)(0x12341d7c)));
  /* 1231b9a7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1231b9aa:;
  /* 1231b9aa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231b9ad cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231b9b0 jae 0x1231b9d6 */
  if (!C.cf) goto L_1231b9d6;
  /* 1231b9b2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231b9b5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231b9b8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1231b9ba mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231b9bd mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1231b9c0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 1231b9c3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231b9c5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1231b9c7 je 0x1231b9cb */
  if (C.zf) goto L_1231b9cb;
  /* 1231b9c9 jmp 0x1231b9d6 */
  goto L_1231b9d6;
L_1231b9cb:;
  /* 1231b9cb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231b9ce add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231b9d1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1231b9d4 jmp 0x1231b9aa */
  goto L_1231b9aa;
L_1231b9d6:;
  /* 1231b9d6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231b9d9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231b9dc jne 0x1231babd */
  if (!C.zf) goto L_1231babd;
  /* 1231b9e2 mov eax, dword ptr [0x12341d88] */
  EAX = (r32((uint32_t)(0x12341d88)));
  /* 1231b9e7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1231b9ea:;
  /* 1231b9ea mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231b9ed cmp ecx, dword ptr [0x12341d7c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12341d7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231b9f3 jae 0x1231ba19 */
  if (!C.cf) goto L_1231ba19;
  /* 1231b9f5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231b9f8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231b9fb and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1231b9fd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231ba00 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1231ba03 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 1231ba06 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1231ba08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231ba0a je 0x1231ba0e */
  if (C.zf) goto L_1231ba0e;
  /* 1231ba0c jmp 0x1231ba19 */
  goto L_1231ba19;
L_1231ba0e:;
  /* 1231ba0e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231ba11 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ba14 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1231ba17 jmp 0x1231b9ea */
  goto L_1231b9ea;
L_1231ba19:;
  /* 1231ba19 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231ba1c cmp ecx, dword ptr [0x12341d7c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12341d7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ba22 jne 0x1231babd */
  if (!C.zf) goto L_1231babd;
L_1231ba28:;
  /* 1231ba28 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231ba2b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ba2e jae 0x1231ba46 */
  if (!C.cf) goto L_1231ba46;
  /* 1231ba30 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231ba33 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ba37 je 0x1231ba3b */
  if (C.zf) goto L_1231ba3b;
  /* 1231ba39 jmp 0x1231ba46 */
  goto L_1231ba46;
L_1231ba3b:;
  /* 1231ba3b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231ba3e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ba41 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1231ba44 jmp 0x1231ba28 */
  goto L_1231ba28;
L_1231ba46:;
  /* 1231ba46 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231ba49 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ba4c jne 0x1231ba97 */
  if (!C.zf) goto L_1231ba97;
  /* 1231ba4e mov eax, dword ptr [0x12341d88] */
  EAX = (r32((uint32_t)(0x12341d88)));
  /* 1231ba53 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1231ba56:;
  /* 1231ba56 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231ba59 cmp ecx, dword ptr [0x12341d7c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12341d7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ba5f jae 0x1231ba77 */
  if (!C.cf) goto L_1231ba77;
  /* 1231ba61 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231ba64 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ba68 je 0x1231ba6c */
  if (C.zf) goto L_1231ba6c;
  /* 1231ba6a jmp 0x1231ba77 */
  goto L_1231ba77;
L_1231ba6c:;
  /* 1231ba6c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231ba6f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ba72 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1231ba75 jmp 0x1231ba56 */
  goto L_1231ba56;
L_1231ba77:;
  /* 1231ba77 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231ba7a cmp ecx, dword ptr [0x12341d7c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12341d7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ba80 jne 0x1231ba97 */
  if (!C.zf) goto L_1231ba97;
  /* 1231ba82 call 0x1231be80 */
  push32(0x1231ba87u); f_1231be80();
  /* 1231ba87 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1231ba8a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ba8e jne 0x1231ba97 */
  if (!C.zf) goto L_1231ba97;
  /* 1231ba90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231ba92 jmp 0x1231be71 */
  goto L_1231be71;
L_1231ba97:;
  /* 1231ba97 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231ba9a push edx */
  push32((uint32_t)(EDX));
  /* 1231ba9b call 0x1231bf90 */
  push32(0x1231baa0u); f_1231bf90();
  /* 1231baa0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231baa3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231baa6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1231baa9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1231baab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231baae mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1231bab1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231bab4 jne 0x1231babd */
  if (!C.zf) goto L_1231babd;
  /* 1231bab6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231bab8 jmp 0x1231be71 */
  goto L_1231be71;
L_1231babd:;
  /* 1231babd mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231bac0 mov dword ptr [0x12341d7c], edx */
  w32((uint32_t)(0x12341d7c), (EDX));
  /* 1231bac6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231bac9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1231bacc mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1231bacf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1231bad2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1231bad4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1231bad7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231badb je 0x1231bb00 */
  if (C.zf) goto L_1231bb00;
  /* 1231badd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231bae0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1231bae3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231bae6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1231baea mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231baed mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1231baf0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1231baf3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1231bafa or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1231bafc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231bafe jne 0x1231bb35 */
  if (!C.zf) goto L_1231bb35;
L_1231bb00:;
  /* 1231bb00 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_1231bb07:;
  /* 1231bb07 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231bb0a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1231bb0d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231bb10 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1231bb14 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231bb17 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1231bb1a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1231bb1d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1231bb24 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1231bb26 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1231bb28 jne 0x1231bb35 */
  if (!C.zf) goto L_1231bb35;
  /* 1231bb2a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231bb2d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231bb30 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1231bb33 jmp 0x1231bb07 */
  goto L_1231bb07;
L_1231bb35:;
  /* 1231bb35 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231bb38 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231bb3e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1231bb41 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1231bb48 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1231bb4b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1231bb52 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231bb55 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1231bb58 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231bb5b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1231bb5f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1231bb62 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231bb66 jne 0x1231bb82 */
  if (!C.zf) goto L_1231bb82;
  /* 1231bb68 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1231bb6f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231bb72 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1231bb75 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1231bb78 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1231bb7f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_1231bb82:;
  /* 1231bb82 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231bb86 jl 0x1231bb9b */
  if ((C.sf!=C.of)) goto L_1231bb9b;
  /* 1231bb88 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1231bb8b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1231bb8d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1231bb90 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1231bb93 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231bb96 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1231bb99 jmp 0x1231bb82 */
  goto L_1231bb82;
L_1231bb9b:;
  /* 1231bb9b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1231bb9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231bba1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 1231bba5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1231bba8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231bbab mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1231bbad sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231bbb0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1231bbb3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231bbb6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1231bbb9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231bbbc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1231bbbf cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231bbc3 jle 0x1231bbcc */
  if ((C.zf||C.sf!=C.of)) goto L_1231bbcc;
  /* 1231bbc5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1231bbcc:;
  /* 1231bbcc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231bbcf cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231bbd2 je 0x1231bdf0 */
  if (C.zf) goto L_1231bdf0;
  /* 1231bbd8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231bbdb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231bbde mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1231bbe1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231bbe4 jne 0x1231bcba */
  if (!C.zf) goto L_1231bcba;
  /* 1231bbea cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231bbee jge 0x1231bc4f */
  if ((C.sf==C.of)) goto L_1231bc4f;
  /* 1231bbf0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1231bbf5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1231bbf8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1231bbfa not eax */
  EAX = (~(EAX));
  /* 1231bbfc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231bbff mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1231bc02 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1231bc06 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231bc08 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231bc0b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1231bc0e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1231bc12 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1231bc15 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231bc18 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1231bc1b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1231bc1e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1231bc21 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231bc24 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1231bc27 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1231bc2a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231bc2d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1231bc31 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1231bc33 jne 0x1231bc4d */
  if (!C.zf) goto L_1231bc4d;
  /* 1231bc35 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1231bc3a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1231bc3d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1231bc3f not eax */
  EAX = (~(EAX));
  /* 1231bc41 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231bc44 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1231bc46 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1231bc48 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231bc4b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1231bc4d:;
  /* 1231bc4d jmp 0x1231bcba */
  goto L_1231bcba;
L_1231bc4f:;
  /* 1231bc4f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1231bc52 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231bc55 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1231bc5a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1231bc5c not edx */
  EDX = (~(EDX));
  /* 1231bc5e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231bc61 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1231bc64 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1231bc6b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1231bc6d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231bc70 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1231bc73 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1231bc7a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1231bc7d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231bc80 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1231bc83 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1231bc86 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1231bc89 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231bc8c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1231bc8f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1231bc92 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231bc95 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1231bc99 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1231bc9b jne 0x1231bcba */
  if (!C.zf) goto L_1231bcba;
  /* 1231bc9d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1231bca0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231bca3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1231bca8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1231bcaa not edx */
  EDX = (~(EDX));
  /* 1231bcac mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231bcaf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1231bcb2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1231bcb4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231bcb7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1231bcba:;
  /* 1231bcba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231bcbd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1231bcc0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231bcc3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1231bcc6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1231bcc9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231bccc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1231bccf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231bcd2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1231bcd5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1231bcd8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231bcdc je 0x1231bdf0 */
  if (C.zf) goto L_1231bdf0;
  /* 1231bce2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231bce5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231bce8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1231bceb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231bcee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231bcf1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231bcf4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1231bcf7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1231bcfa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231bcfd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231bd00 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1231bd03 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231bd06 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231bd09 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1231bd0c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231bd0f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1231bd12 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231bd15 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1231bd18 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231bd1b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231bd1e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1231bd21 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231bd24 jne 0x1231bdf0 */
  if (!C.zf) goto L_1231bdf0;
  /* 1231bd2a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231bd2e jge 0x1231bd8a */
  if ((C.sf==C.of)) goto L_1231bd8a;
  /* 1231bd30 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1231bd33 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231bd36 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1231bd3a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1231bd3d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231bd40 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1231bd43 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1231bd45 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1231bd48 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231bd4b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1231bd4e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1231bd50 jne 0x1231bd68 */
  if (!C.zf) goto L_1231bd68;
  /* 1231bd52 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1231bd57 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231bd5a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1231bd5c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231bd5f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1231bd61 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1231bd63 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231bd66 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1231bd68:;
  /* 1231bd68 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1231bd6d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231bd70 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1231bd72 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231bd75 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1231bd78 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1231bd7c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1231bd7e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231bd81 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1231bd84 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1231bd88 jmp 0x1231bdf0 */
  goto L_1231bdf0;
L_1231bd8a:;
  /* 1231bd8a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1231bd8d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231bd90 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1231bd94 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1231bd97 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231bd9a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1231bd9d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1231bd9f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1231bda2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231bda5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1231bda8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1231bdaa jne 0x1231bdc7 */
  if (!C.zf) goto L_1231bdc7;
  /* 1231bdac mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231bdaf sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231bdb2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1231bdb7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1231bdb9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231bdbc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1231bdbf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1231bdc1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231bdc4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1231bdc7:;
  /* 1231bdc7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231bdca sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231bdcd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1231bdd2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1231bdd4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231bdd7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1231bdda mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1231bde1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1231bde3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231bde6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1231bde9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1231bdf0:;
  /* 1231bdf0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231bdf4 je 0x1231be0a */
  if (C.zf) goto L_1231be0a;
  /* 1231bdf6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231bdf9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231bdfc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1231bdfe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231be01 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231be04 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231be07 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1231be0a:;
  /* 1231be0a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231be0d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231be10 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1231be13 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1231be16 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231be19 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231be1c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1231be1e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1231be21 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231be24 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231be27 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231be2a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1231be2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231be30 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1231be32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231be35 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1231be37 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231be3a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231be3d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1231be3f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1231be41 jne 0x1231be63 */
  if (!C.zf) goto L_1231be63;
  /* 1231be43 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231be46 cmp eax, dword ptr [0x12341d80] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12341d80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231be4c jne 0x1231be63 */
  if (!C.zf) goto L_1231be63;
  /* 1231be4e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231be51 cmp ecx, dword ptr [0x12341d78] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12341d78))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231be57 jne 0x1231be63 */
  if (!C.zf) goto L_1231be63;
  /* 1231be59 mov dword ptr [0x12341d80], 0 */
  w32((uint32_t)(0x12341d80), (0x0u));
L_1231be63:;
  /* 1231be63 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1231be66 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231be69 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1231be6b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231be6e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1231be71:;
  /* 1231be71 pop esi */
  ESI = (pop32());
  /* 1231be72 mov esp, ebp */
  ESP = (EBP);
  /* 1231be74 pop ebp */
  EBP = (pop32());
  /* 1231be75 ret  */
  ESPCHK(0x1231b940u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be80 @ 0x1231be80 (271 bytes, 78 insns) */
void f_1231be80(void) {
  FTRACE(0x1231be80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231be80 push ebp */
  push32((uint32_t)(EBP));
  /* 1231be81 mov ebp, esp */
  EBP = (ESP);
  /* 1231be83 push ecx */
  push32((uint32_t)(ECX));
  /* 1231be84 mov eax, dword ptr [0x12341d84] */
  EAX = (r32((uint32_t)(0x12341d84)));
  /* 1231be89 cmp eax, dword ptr [0x12341d68] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12341d68))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231be8f jne 0x1231bedb */
  if (!C.zf) goto L_1231bedb;
  /* 1231be91 mov ecx, dword ptr [0x12341d68] */
  ECX = (r32((uint32_t)(0x12341d68)));
  /* 1231be97 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231be9a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231be9d push ecx */
  push32((uint32_t)(ECX));
  /* 1231be9e mov edx, dword ptr [0x12341d88] */
  EDX = (r32((uint32_t)(0x12341d88)));
  /* 1231bea4 push edx */
  push32((uint32_t)(EDX));
  /* 1231bea5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231bea7 mov eax, dword ptr [0x123430e4] */
  EAX = (r32((uint32_t)(0x123430e4)));
  /* 1231beac push eax */
  push32((uint32_t)(EAX));
  /* 1231bead call dword ptr [0x123442b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442b8))), 0x1231beb3u);
  /* 1231beb3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1231beb6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231beba jne 0x1231bec3 */
  if (!C.zf) goto L_1231bec3;
  /* 1231bebc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231bebe jmp 0x1231bf8b */
  goto L_1231bf8b;
L_1231bec3:;
  /* 1231bec3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231bec6 mov dword ptr [0x12341d88], ecx */
  w32((uint32_t)(0x12341d88), (ECX));
  /* 1231becc mov edx, dword ptr [0x12341d68] */
  EDX = (r32((uint32_t)(0x12341d68)));
  /* 1231bed2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231bed5 mov dword ptr [0x12341d68], edx */
  w32((uint32_t)(0x12341d68), (EDX));
L_1231bedb:;
  /* 1231bedb mov eax, dword ptr [0x12341d84] */
  EAX = (r32((uint32_t)(0x12341d84)));
  /* 1231bee0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231bee3 mov ecx, dword ptr [0x12341d88] */
  ECX = (r32((uint32_t)(0x12341d88)));
  /* 1231bee9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231beeb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1231beee push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1231bef3 push 8 */
  push32((uint32_t)(0x8u));
  /* 1231bef5 mov edx, dword ptr [0x123430e4] */
  EDX = (r32((uint32_t)(0x123430e4)));
  /* 1231befb push edx */
  push32((uint32_t)(EDX));
  /* 1231befc call dword ptr [0x123442b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442b4))), 0x1231bf02u);
  /* 1231bf02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231bf05 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 1231bf08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231bf0b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231bf0f jne 0x1231bf15 */
  if (!C.zf) goto L_1231bf15;
  /* 1231bf11 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231bf13 jmp 0x1231bf8b */
  goto L_1231bf8b;
L_1231bf15:;
  /* 1231bf15 push 4 */
  push32((uint32_t)(0x4u));
  /* 1231bf17 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1231bf1c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1231bf21 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231bf23 call dword ptr [0x123442bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442bc))), 0x1231bf29u);
  /* 1231bf29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231bf2c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1231bf2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231bf32 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231bf36 jne 0x1231bf52 */
  if (!C.zf) goto L_1231bf52;
  /* 1231bf38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231bf3b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1231bf3e push ecx */
  push32((uint32_t)(ECX));
  /* 1231bf3f push 0 */
  push32((uint32_t)(0x0u));
  /* 1231bf41 mov edx, dword ptr [0x123430e4] */
  EDX = (r32((uint32_t)(0x123430e4)));
  /* 1231bf47 push edx */
  push32((uint32_t)(EDX));
  /* 1231bf48 call dword ptr [0x12344200] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344200))), 0x1231bf4eu);
  /* 1231bf4e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231bf50 jmp 0x1231bf8b */
  goto L_1231bf8b;
L_1231bf52:;
  /* 1231bf52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231bf55 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1231bf5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231bf5e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1231bf65 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231bf68 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1231bf6f mov eax, dword ptr [0x12341d84] */
  EAX = (r32((uint32_t)(0x12341d84)));
  /* 1231bf74 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231bf77 mov dword ptr [0x12341d84], eax */
  w32((uint32_t)(0x12341d84), (EAX));
  /* 1231bf7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231bf7f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1231bf82 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 1231bf88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1231bf8b:;
  /* 1231bf8b mov esp, ebp */
  ESP = (EBP);
  /* 1231bf8d pop ebp */
  EBP = (pop32());
  /* 1231bf8e ret  */
  ESPCHK(0x1231be80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf90 @ 0x1231bf90 (494 bytes, 149 insns) */
void f_1231bf90(void) {
  FTRACE(0x1231bf90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231bf90 push ebp */
  push32((uint32_t)(EBP));
  /* 1231bf91 mov ebp, esp */
  EBP = (ESP);
  /* 1231bf93 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231bf96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231bf99 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1231bf9c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1231bf9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231bfa2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1231bfa5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1231bfa8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1231bfaf:;
  /* 1231bfaf cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231bfb3 jl 0x1231bfc8 */
  if ((C.sf!=C.of)) goto L_1231bfc8;
  /* 1231bfb5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231bfb8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1231bfba mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1231bfbd mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1231bfc0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231bfc3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1231bfc6 jmp 0x1231bfaf */
  goto L_1231bfaf;
L_1231bfc8:;
  /* 1231bfc8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1231bfcb imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231bfd1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231bfd4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1231bfdb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1231bfde mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1231bfe5 jmp 0x1231bff0 */
  goto L_1231bff0;
L_1231bfe7:;
  /* 1231bfe7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1231bfea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231bfed mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1231bff0:;
  /* 1231bff0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231bff4 jge 0x1231c016 */
  if ((C.sf==C.of)) goto L_1231c016;
  /* 1231bff6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1231bff9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231bffc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1231bfff mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1231c002 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231c005 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231c008 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1231c00b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231c00e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231c011 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1231c014 jmp 0x1231bfe7 */
  goto L_1231bfe7;
L_1231c016:;
  /* 1231c016 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1231c019 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1231c01c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231c01f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1231c022 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c024 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1231c027 push 4 */
  push32((uint32_t)(0x4u));
  /* 1231c029 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1231c02e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1231c033 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231c036 push edx */
  push32((uint32_t)(EDX));
  /* 1231c037 call dword ptr [0x123442bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442bc))), 0x1231c03du);
  /* 1231c03d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231c03f jne 0x1231c049 */
  if (!C.zf) goto L_1231c049;
  /* 1231c041 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1231c044 jmp 0x1231c17a */
  goto L_1231c17a;
L_1231c049:;
  /* 1231c049 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231c04c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c051 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1231c054 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231c057 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1231c05a jmp 0x1231c068 */
  goto L_1231c068;
L_1231c05c:;
  /* 1231c05c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231c05f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c065 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1231c068:;
  /* 1231c068 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231c06b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231c06e ja 0x1231c0cd */
  if ((!C.cf&&!C.zf)) goto L_1231c0cd;
  /* 1231c070 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231c073 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1231c07a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231c07d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 1231c087 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231c08a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c08d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1231c090 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231c093 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1231c099 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231c09c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c0a2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231c0a5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1231c0a8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231c0ab sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231c0b1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231c0b4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1231c0b7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231c0ba add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c0bf mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1231c0c2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231c0c5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1231c0cb jmp 0x1231c05c */
  goto L_1231c05c;
L_1231c0cd:;
  /* 1231c0cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231c0d0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c0d6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1231c0d9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231c0dc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c0df mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231c0e2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1231c0e5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231c0e8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1231c0eb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1231c0ee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231c0f1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231c0f4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1231c0f7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1231c0fa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c0fd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231c100 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1231c103 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231c106 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1231c109 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1231c10c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231c10f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231c112 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1231c115 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1231c118 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231c11b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 1231c123 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1231c126 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231c129 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 1231c134 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231c137 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1231c13b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231c13e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 1231c141 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1231c144 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231c147 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1231c14a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1231c14c jne 0x1231c15d */
  if (!C.zf) goto L_1231c15d;
  /* 1231c14e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231c151 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1231c154 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1231c157 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231c15a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1231c15d:;
  /* 1231c15d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1231c162 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1231c165 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1231c167 not edx */
  EDX = (~(EDX));
  /* 1231c169 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231c16c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1231c16f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1231c171 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231c174 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1231c177 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1231c17a:;
  /* 1231c17a mov esp, ebp */
  ESP = (EBP);
  /* 1231c17c pop ebp */
  EBP = (pop32());
  /* 1231c17d ret  */
  ESPCHK(0x1231bf90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c180 @ 0x1231c180 (1515 bytes, 489 insns) */
void f_1231c180(void) {
  FTRACE(0x1231c180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231c180 push ebp */
  push32((uint32_t)(EBP));
  /* 1231c181 mov ebp, esp */
  EBP = (ESP);
  /* 1231c183 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231c186 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1231c189 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c18c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1231c18e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1231c191 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231c194 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1231c197 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1231c19a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231c19d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231c1a0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231c1a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231c1a6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231c1a9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1231c1ac mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1231c1af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231c1b2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231c1b8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c1bb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1231c1c2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1231c1c5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231c1c8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231c1cb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1231c1ce mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231c1d1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1231c1d3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231c1d6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1231c1d9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231c1dc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c1df mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1231c1e2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231c1e5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1231c1e7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1231c1ea mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1231c1ed cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231c1f0 jle 0x1231c4a6 */
  if ((C.zf||C.sf!=C.of)) goto L_1231c4a6;
  /* 1231c1f6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231c1f9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1231c1fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1231c1fe jne 0x1231c20b */
  if (!C.zf) goto L_1231c20b;
  /* 1231c200 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1231c203 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c206 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231c209 jle 0x1231c212 */
  if ((C.zf||C.sf!=C.of)) goto L_1231c212;
L_1231c20b:;
  /* 1231c20b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231c20d jmp 0x1231c767 */
  goto L_1231c767;
L_1231c212:;
  /* 1231c212 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231c215 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1231c218 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231c21b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1231c21e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231c222 jbe 0x1231c22b */
  if ((C.cf||C.zf)) goto L_1231c22b;
  /* 1231c224 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1231c22b:;
  /* 1231c22b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231c22e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231c231 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1231c234 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231c237 jne 0x1231c30d */
  if (!C.zf) goto L_1231c30d;
  /* 1231c23d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231c241 jae 0x1231c2a2 */
  if (!C.cf) goto L_1231c2a2;
  /* 1231c243 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1231c248 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1231c24b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1231c24d not edx */
  EDX = (~(EDX));
  /* 1231c24f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231c252 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c255 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1231c259 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1231c25b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231c25e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c261 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1231c265 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c268 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c26b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1231c26e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1231c271 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c274 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c277 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1231c27a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c27d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c280 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1231c284 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1231c286 jne 0x1231c2a0 */
  if (!C.zf) goto L_1231c2a0;
  /* 1231c288 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1231c28d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1231c290 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1231c292 not edx */
  EDX = (~(EDX));
  /* 1231c294 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231c297 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1231c299 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1231c29b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231c29e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1231c2a0:;
  /* 1231c2a0 jmp 0x1231c30d */
  goto L_1231c30d;
L_1231c2a2:;
  /* 1231c2a2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1231c2a5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231c2a8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1231c2ad shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1231c2af not eax */
  EAX = (~(EAX));
  /* 1231c2b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231c2b4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c2b7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1231c2be and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231c2c0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231c2c3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c2c6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1231c2cd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c2d0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c2d3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1231c2d6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1231c2d9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c2dc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c2df mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1231c2e2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c2e5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c2e8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1231c2ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1231c2ee jne 0x1231c30d */
  if (!C.zf) goto L_1231c30d;
  /* 1231c2f0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1231c2f3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231c2f6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1231c2fb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1231c2fd not eax */
  EAX = (~(EAX));
  /* 1231c2ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231c302 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1231c305 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1231c307 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231c30a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1231c30d:;
  /* 1231c30d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231c310 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1231c313 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231c316 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1231c319 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1231c31c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231c31f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1231c322 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231c325 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1231c328 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1231c32b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1231c32e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c331 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231c334 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1231c337 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231c33b jle 0x1231c487 */
  if ((C.zf||C.sf!=C.of)) goto L_1231c487;
  /* 1231c341 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231c344 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c347 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1231c34a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231c34d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1231c350 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231c353 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1231c356 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231c35a jbe 0x1231c363 */
  if ((C.cf||C.zf)) goto L_1231c363;
  /* 1231c35c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1231c363:;
  /* 1231c363 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1231c366 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231c369 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1231c36c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1231c36f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231c372 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231c375 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1231c378 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1231c37b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231c37e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231c381 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1231c384 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231c387 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231c38a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1231c38d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231c390 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1231c393 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231c396 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1231c399 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231c39c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231c39f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1231c3a2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231c3a5 jne 0x1231c473 */
  if (!C.zf) goto L_1231c473;
  /* 1231c3ab cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231c3af jae 0x1231c40c */
  if (!C.cf) goto L_1231c40c;
  /* 1231c3b1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c3b4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c3b7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1231c3bb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c3be add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c3c1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1231c3c4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1231c3c7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c3ca add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c3cd mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1231c3d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1231c3d2 jne 0x1231c3ea */
  if (!C.zf) goto L_1231c3ea;
  /* 1231c3d4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1231c3d9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1231c3dc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1231c3de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231c3e1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1231c3e3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1231c3e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231c3e8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1231c3ea:;
  /* 1231c3ea mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1231c3ef mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1231c3f2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1231c3f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231c3f7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c3fa mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1231c3fe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231c400 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231c403 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c406 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1231c40a jmp 0x1231c473 */
  goto L_1231c473;
L_1231c40c:;
  /* 1231c40c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c40f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c412 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1231c416 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c419 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c41c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1231c41f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1231c422 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c425 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c428 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1231c42b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1231c42d jne 0x1231c44a */
  if (!C.zf) goto L_1231c44a;
  /* 1231c42f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1231c432 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231c435 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1231c43a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1231c43c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231c43f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1231c442 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1231c444 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231c447 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1231c44a:;
  /* 1231c44a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1231c44d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231c450 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1231c455 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1231c457 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231c45a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c45d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1231c464 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231c466 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231c469 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c46c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1231c473:;
  /* 1231c473 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231c476 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231c479 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1231c47b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231c47e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c481 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231c484 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_1231c487:;
  /* 1231c487 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1231c48a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c48d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231c490 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1231c492 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1231c495 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c498 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231c49b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c49e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1231c4a1 jmp 0x1231c762 */
  goto L_1231c762;
L_1231c4a6:;
  /* 1231c4a6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1231c4a9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231c4ac jge 0x1231c762 */
  if ((C.sf==C.of)) goto L_1231c762;
  /* 1231c4b2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1231c4b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c4b8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231c4bb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1231c4bd mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1231c4c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c4c3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231c4c6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c4c9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1231c4cc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231c4cf add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c4d2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1231c4d5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1231c4d8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231c4db mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1231c4de mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1231c4e1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1231c4e4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231c4e7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1231c4ea cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231c4ee jbe 0x1231c4f7 */
  if ((C.cf||C.zf)) goto L_1231c4f7;
  /* 1231c4f0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1231c4f7:;
  /* 1231c4f7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231c4fa and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1231c4fd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1231c4ff jne 0x1231c640 */
  if (!C.zf) goto L_1231c640;
  /* 1231c505 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231c508 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1231c50b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231c50e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1231c511 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231c515 jbe 0x1231c51e */
  if ((C.cf||C.zf)) goto L_1231c51e;
  /* 1231c517 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1231c51e:;
  /* 1231c51e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231c521 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231c524 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1231c527 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231c52a jne 0x1231c600 */
  if (!C.zf) goto L_1231c600;
  /* 1231c530 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231c534 jae 0x1231c595 */
  if (!C.cf) goto L_1231c595;
  /* 1231c536 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1231c53b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1231c53e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1231c540 not edx */
  EDX = (~(EDX));
  /* 1231c542 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231c545 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c548 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1231c54c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1231c54e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231c551 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c554 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1231c558 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c55b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c55e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1231c561 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1231c564 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c567 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c56a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1231c56d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c570 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c573 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1231c577 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1231c579 jne 0x1231c593 */
  if (!C.zf) goto L_1231c593;
  /* 1231c57b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1231c580 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1231c583 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1231c585 not edx */
  EDX = (~(EDX));
  /* 1231c587 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231c58a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1231c58c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1231c58e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231c591 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1231c593:;
  /* 1231c593 jmp 0x1231c600 */
  goto L_1231c600;
L_1231c595:;
  /* 1231c595 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1231c598 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231c59b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1231c5a0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1231c5a2 not eax */
  EAX = (~(EAX));
  /* 1231c5a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231c5a7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c5aa mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1231c5b1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1231c5b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231c5b6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c5b9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1231c5c0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c5c3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c5c6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1231c5c9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1231c5cc mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c5cf add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c5d2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1231c5d5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c5d8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c5db movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1231c5df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1231c5e1 jne 0x1231c600 */
  if (!C.zf) goto L_1231c600;
  /* 1231c5e3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1231c5e6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231c5e9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1231c5ee shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1231c5f0 not eax */
  EAX = (~(EAX));
  /* 1231c5f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231c5f5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1231c5f8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1231c5fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231c5fd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1231c600:;
  /* 1231c600 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231c603 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1231c606 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231c609 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1231c60c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1231c60f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231c612 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1231c615 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1231c618 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1231c61b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1231c61e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1231c621 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c624 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1231c627 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1231c62a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1231c62d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231c630 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1231c633 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231c637 jbe 0x1231c640 */
  if ((C.cf||C.zf)) goto L_1231c640;
  /* 1231c639 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1231c640:;
  /* 1231c640 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231c643 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231c646 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1231c649 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1231c64c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231c64f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231c652 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1231c655 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1231c658 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231c65b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231c65e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1231c661 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231c664 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231c667 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1231c66a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231c66d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1231c670 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231c673 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1231c676 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231c679 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231c67c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1231c67f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231c682 jne 0x1231c74e */
  if (!C.zf) goto L_1231c74e;
  /* 1231c688 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231c68c jae 0x1231c6e8 */
  if (!C.cf) goto L_1231c6e8;
  /* 1231c68e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c691 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c694 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1231c698 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c69b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c69e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1231c6a1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1231c6a3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c6a6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c6a9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1231c6ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1231c6ae jne 0x1231c6c6 */
  if (!C.zf) goto L_1231c6c6;
  /* 1231c6b0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1231c6b5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231c6b8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1231c6ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231c6bd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1231c6bf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1231c6c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231c6c4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1231c6c6:;
  /* 1231c6c6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1231c6cb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231c6ce shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1231c6d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231c6d3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c6d6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1231c6da or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1231c6dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231c6df mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c6e2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1231c6e6 jmp 0x1231c74e */
  goto L_1231c74e;
L_1231c6e8:;
  /* 1231c6e8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c6eb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c6ee movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1231c6f2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c6f5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c6f8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1231c6fb add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1231c6fd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c700 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c703 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1231c706 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1231c708 jne 0x1231c725 */
  if (!C.zf) goto L_1231c725;
  /* 1231c70a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231c70d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231c710 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1231c715 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1231c717 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231c71a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1231c71d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1231c71f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231c722 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1231c725:;
  /* 1231c725 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231c728 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231c72b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1231c730 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1231c732 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231c735 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c738 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1231c73f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1231c741 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231c744 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1231c747 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1231c74e:;
  /* 1231c74e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231c751 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1231c754 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1231c756 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231c759 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c75c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1231c75f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1231c762:;
  /* 1231c762 mov eax, 1 */
  EAX = (0x1u);
L_1231c767:;
  /* 1231c767 mov esp, ebp */
  ESP = (EBP);
  /* 1231c769 pop ebp */
  EBP = (pop32());
  /* 1231c76a ret  */
  ESPCHK(0x1231c180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c770 @ 0x1231c770 (304 bytes, 79 insns) */
void f_1231c770(void) {
  FTRACE(0x1231c770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231c770 push ebp */
  push32((uint32_t)(EBP));
  /* 1231c771 mov ebp, esp */
  EBP = (ESP);
  /* 1231c773 push ecx */
  push32((uint32_t)(ECX));
  /* 1231c774 cmp dword ptr [0x12341d80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341d80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231c77b je 0x1231c89c */
  if (C.zf) goto L_1231c89c;
  /* 1231c781 mov eax, dword ptr [0x12341d78] */
  EAX = (r32((uint32_t)(0x12341d78)));
  /* 1231c786 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1231c789 mov ecx, dword ptr [0x12341d80] */
  ECX = (r32((uint32_t)(0x12341d80)));
  /* 1231c78f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1231c792 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c794 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1231c797 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1231c79c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1231c7a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231c7a4 push eax */
  push32((uint32_t)(EAX));
  /* 1231c7a5 call dword ptr [0x12344294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344294))), 0x1231c7abu);
  /* 1231c7ab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1231c7b0 mov ecx, dword ptr [0x12341d78] */
  ECX = (r32((uint32_t)(0x12341d78)));
  /* 1231c7b6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1231c7b8 mov eax, dword ptr [0x12341d80] */
  EAX = (r32((uint32_t)(0x12341d80)));
  /* 1231c7bd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1231c7c0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1231c7c2 mov edx, dword ptr [0x12341d80] */
  EDX = (r32((uint32_t)(0x12341d80)));
  /* 1231c7c8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1231c7cb mov eax, dword ptr [0x12341d80] */
  EAX = (r32((uint32_t)(0x12341d80)));
  /* 1231c7d0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1231c7d3 mov edx, dword ptr [0x12341d78] */
  EDX = (r32((uint32_t)(0x12341d78)));
  /* 1231c7d9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1231c7e4 mov eax, dword ptr [0x12341d80] */
  EAX = (r32((uint32_t)(0x12341d80)));
  /* 1231c7e9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1231c7ec mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1231c7ef sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1231c7f2 mov eax, dword ptr [0x12341d80] */
  EAX = (r32((uint32_t)(0x12341d80)));
  /* 1231c7f7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1231c7fa mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1231c7fd mov edx, dword ptr [0x12341d80] */
  EDX = (r32((uint32_t)(0x12341d80)));
  /* 1231c803 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1231c806 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1231c80a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1231c80c jne 0x1231c822 */
  if (!C.zf) goto L_1231c822;
  /* 1231c80e mov edx, dword ptr [0x12341d80] */
  EDX = (r32((uint32_t)(0x12341d80)));
  /* 1231c814 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1231c817 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1231c819 mov ecx, dword ptr [0x12341d80] */
  ECX = (r32((uint32_t)(0x12341d80)));
  /* 1231c81f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1231c822:;
  /* 1231c822 mov edx, dword ptr [0x12341d80] */
  EDX = (r32((uint32_t)(0x12341d80)));
  /* 1231c828 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231c82c jne 0x1231c892 */
  if (!C.zf) goto L_1231c892;
  /* 1231c82e cmp dword ptr [0x12341d84], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12341d84))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231c835 jle 0x1231c892 */
  if ((C.zf||C.sf!=C.of)) goto L_1231c892;
  /* 1231c837 mov eax, dword ptr [0x12341d80] */
  EAX = (r32((uint32_t)(0x12341d80)));
  /* 1231c83c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1231c83f push ecx */
  push32((uint32_t)(ECX));
  /* 1231c840 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231c842 mov edx, dword ptr [0x123430e4] */
  EDX = (r32((uint32_t)(0x123430e4)));
  /* 1231c848 push edx */
  push32((uint32_t)(EDX));
  /* 1231c849 call dword ptr [0x12344200] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344200))), 0x1231c84fu);
  /* 1231c84f mov eax, dword ptr [0x12341d84] */
  EAX = (r32((uint32_t)(0x12341d84)));
  /* 1231c854 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231c857 mov ecx, dword ptr [0x12341d88] */
  ECX = (r32((uint32_t)(0x12341d88)));
  /* 1231c85d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c85f mov edx, dword ptr [0x12341d80] */
  EDX = (r32((uint32_t)(0x12341d80)));
  /* 1231c865 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c868 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231c86a push ecx */
  push32((uint32_t)(ECX));
  /* 1231c86b mov eax, dword ptr [0x12341d80] */
  EAX = (r32((uint32_t)(0x12341d80)));
  /* 1231c870 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c873 push eax */
  push32((uint32_t)(EAX));
  /* 1231c874 mov ecx, dword ptr [0x12341d80] */
  ECX = (r32((uint32_t)(0x12341d80)));
  /* 1231c87a push ecx */
  push32((uint32_t)(ECX));
  /* 1231c87b call 0x1231ef50 */
  push32(0x1231c880u); f_1231ef50();
  /* 1231c880 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c883 mov edx, dword ptr [0x12341d84] */
  EDX = (r32((uint32_t)(0x12341d84)));
  /* 1231c889 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231c88c mov dword ptr [0x12341d84], edx */
  w32((uint32_t)(0x12341d84), (EDX));
L_1231c892:;
  /* 1231c892 mov dword ptr [0x12341d80], 0 */
  w32((uint32_t)(0x12341d80), (0x0u));
L_1231c89c:;
  /* 1231c89c mov esp, ebp */
  ESP = (EBP);
  /* 1231c89e pop ebp */
  EBP = (pop32());
  /* 1231c89f ret  */
  ESPCHK(0x1231c770u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8a0 @ 0x1231c8a0 (1565 bytes, 343 insns) */
void f_1231c8a0(void) {
  FTRACE(0x1231c8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231c8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1231c8a1 mov ebp, esp */
  EBP = (ESP);
  /* 1231c8a3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231c8a9 mov eax, dword ptr [0x12341d84] */
  EAX = (r32((uint32_t)(0x12341d84)));
  /* 1231c8ae imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231c8b1 push eax */
  push32((uint32_t)(EAX));
  /* 1231c8b2 mov ecx, dword ptr [0x12341d88] */
  ECX = (r32((uint32_t)(0x12341d88)));
  /* 1231c8b8 push ecx */
  push32((uint32_t)(ECX));
  /* 1231c8b9 call dword ptr [0x12344268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344268))), 0x1231c8bfu);
  /* 1231c8bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231c8c1 je 0x1231c8cb */
  if (C.zf) goto L_1231c8cb;
  /* 1231c8c3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1231c8c6 jmp 0x1231ceb9 */
  goto L_1231ceb9;
L_1231c8cb:;
  /* 1231c8cb mov edx, dword ptr [0x12341d88] */
  EDX = (r32((uint32_t)(0x12341d88)));
  /* 1231c8d1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1231c8d7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1231c8e1 jmp 0x1231c8f2 */
  goto L_1231c8f2;
L_1231c8e3:;
  /* 1231c8e3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1231c8e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c8ec mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1231c8f2:;
  /* 1231c8f2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1231c8f8 cmp ecx, dword ptr [0x12341d84] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12341d84))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231c8fe jge 0x1231ceb7 */
  if ((C.sf==C.of)) goto L_1231ceb7;
  /* 1231c904 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1231c90a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1231c90d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1231c913 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1231c918 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1231c91e push ecx */
  push32((uint32_t)(ECX));
  /* 1231c91f call dword ptr [0x12344268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344268))), 0x1231c925u);
  /* 1231c925 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231c927 je 0x1231c933 */
  if (C.zf) goto L_1231c933;
  /* 1231c929 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1231c92e jmp 0x1231ceb9 */
  goto L_1231ceb9;
L_1231c933:;
  /* 1231c933 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1231c939 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1231c93c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1231c942 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1231c948 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c94e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1231c951 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1231c957 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1231c95a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1231c95d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1231c967 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1231c971 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1231c978 jmp 0x1231c983 */
  goto L_1231c983;
L_1231c97a:;
  /* 1231c97a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231c97d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c980 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1231c983:;
  /* 1231c983 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231c987 jge 0x1231ce7b */
  if ((C.sf==C.of)) goto L_1231ce7b;
  /* 1231c98d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1231c997 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1231c9a1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1231c9ab mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 1231c9b5 jmp 0x1231c9c6 */
  goto L_1231c9c6;
L_1231c9b7:;
  /* 1231c9b7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1231c9bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231c9c0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_1231c9c6:;
  /* 1231c9c6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231c9cd jge 0x1231c9e2 */
  if ((C.sf==C.of)) goto L_1231c9e2;
  /* 1231c9cf mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1231c9d5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 1231c9e0 jmp 0x1231c9b7 */
  goto L_1231c9b7;
L_1231c9e2:;
  /* 1231c9e2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231c9e6 jl 0x1231ce1d */
  if ((C.sf!=C.of)) goto L_1231ce1d;
  /* 1231c9ec push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1231c9f1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 1231c9f7 push ecx */
  push32((uint32_t)(ECX));
  /* 1231c9f8 call dword ptr [0x12344268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344268))), 0x1231c9feu);
  /* 1231c9fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231ca00 je 0x1231ca0c */
  if (C.zf) goto L_1231ca0c;
  /* 1231ca02 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 1231ca07 jmp 0x1231ceb9 */
  goto L_1231ceb9;
L_1231ca0c:;
  /* 1231ca0c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1231ca12 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1231ca15 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1231ca1f jmp 0x1231ca30 */
  goto L_1231ca30;
L_1231ca21:;
  /* 1231ca21 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1231ca27 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ca2a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1231ca30:;
  /* 1231ca30 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ca37 jge 0x1231cbb4 */
  if ((C.sf==C.of)) goto L_1231cbb4;
  /* 1231ca3d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231ca40 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ca43 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1231ca49 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1231ca4f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ca55 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1231ca5b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1231ca61 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ca65 jne 0x1231ca72 */
  if (!C.zf) goto L_1231ca72;
  /* 1231ca67 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1231ca6d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ca70 je 0x1231ca7c */
  if (C.zf) goto L_1231ca7c;
L_1231ca72:;
  /* 1231ca72 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1231ca77 jmp 0x1231ceb9 */
  goto L_1231ceb9;
L_1231ca7c:;
  /* 1231ca7c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1231ca82 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1231ca84 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1231ca8a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1231ca90 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1231ca96 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1231ca9c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1231ca9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1231caa1 je 0x1231cad9 */
  if (C.zf) goto L_1231cad9;
  /* 1231caa3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1231caa9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231caac mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1231cab2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231cabc jle 0x1231cac8 */
  if ((C.zf||C.sf!=C.of)) goto L_1231cac8;
  /* 1231cabe mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1231cac3 jmp 0x1231ceb9 */
  goto L_1231ceb9;
L_1231cac8:;
  /* 1231cac8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1231cace add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231cad1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1231cad7 jmp 0x1231cb1b */
  goto L_1231cb1b;
L_1231cad9:;
  /* 1231cad9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1231cadf sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1231cae2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231cae5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1231caeb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231caf2 jle 0x1231cafe */
  if ((C.zf||C.sf!=C.of)) goto L_1231cafe;
  /* 1231caf4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1231cafe:;
  /* 1231cafe mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1231cb04 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1231cb0b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231cb0e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1231cb14 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1231cb1b:;
  /* 1231cb1b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231cb22 jl 0x1231cb3d */
  if ((C.sf!=C.of)) goto L_1231cb3d;
  /* 1231cb24 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1231cb2a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1231cb2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231cb2f jne 0x1231cb3d */
  if (!C.zf) goto L_1231cb3d;
  /* 1231cb31 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231cb3b jle 0x1231cb47 */
  if ((C.zf||C.sf!=C.of)) goto L_1231cb47;
L_1231cb3d:;
  /* 1231cb3d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1231cb42 jmp 0x1231ceb9 */
  goto L_1231ceb9;
L_1231cb47:;
  /* 1231cb47 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1231cb4d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231cb53 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1231cb56 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231cb5c je 0x1231cb68 */
  if (C.zf) goto L_1231cb68;
  /* 1231cb5e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1231cb63 jmp 0x1231ceb9 */
  goto L_1231ceb9;
L_1231cb68:;
  /* 1231cb68 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1231cb6e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231cb74 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1231cb7a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1231cb80 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231cb86 jb 0x1231ca7c */
  if (C.cf) goto L_1231ca7c;
  /* 1231cb8c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1231cb92 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231cb98 je 0x1231cba4 */
  if (C.zf) goto L_1231cba4;
  /* 1231cb9a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1231cb9f jmp 0x1231ceb9 */
  goto L_1231ceb9;
L_1231cba4:;
  /* 1231cba4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231cba7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231cbac mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1231cbaf jmp 0x1231ca21 */
  goto L_1231ca21;
L_1231cbb4:;
  /* 1231cbb4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231cbb7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1231cbb9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231cbbf je 0x1231cbcb */
  if (C.zf) goto L_1231cbcb;
  /* 1231cbc1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1231cbc6 jmp 0x1231ceb9 */
  goto L_1231ceb9;
L_1231cbcb:;
  /* 1231cbcb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231cbce mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1231cbd4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1231cbdb jmp 0x1231cbe6 */
  goto L_1231cbe6;
L_1231cbdd:;
  /* 1231cbdd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231cbe0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231cbe3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1231cbe6:;
  /* 1231cbe6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231cbea jge 0x1231ce1d */
  if ((C.sf==C.of)) goto L_1231ce1d;
  /* 1231cbf0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1231cbfa mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1231cc00 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1231cc06:;
  /* 1231cc06 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1231cc0c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1231cc0f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1231cc15 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1231cc1b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231cc21 je 0x1231cd4a */
  if (C.zf) goto L_1231cd4a;
  /* 1231cc27 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231cc2a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1231cc30 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231cc37 je 0x1231cd4a */
  if (C.zf) goto L_1231cd4a;
  /* 1231cc3d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1231cc43 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231cc49 jb 0x1231cc5e */
  if (C.cf) goto L_1231cc5e;
  /* 1231cc4b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1231cc51 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231cc56 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231cc5c jb 0x1231cc68 */
  if (C.cf) goto L_1231cc68;
L_1231cc5e:;
  /* 1231cc5e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1231cc63 jmp 0x1231ceb9 */
  goto L_1231ceb9;
L_1231cc68:;
  /* 1231cc68 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1231cc6e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1231cc74 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1231cc7a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1231cc80 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231cc83 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1231cc86 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231cc89 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231cc8e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1231cc94:;
  /* 1231cc94 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231cc97 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231cc9d je 0x1231ccbe */
  if (C.zf) goto L_1231ccbe;
  /* 1231cc9f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231cca2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231cca8 jne 0x1231ccac */
  if (!C.zf) goto L_1231ccac;
  /* 1231ccaa jmp 0x1231ccbe */
  goto L_1231ccbe;
L_1231ccac:;
  /* 1231ccac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231ccaf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1231ccb1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1231ccb4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231ccb7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ccb9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1231ccbc jmp 0x1231cc94 */
  goto L_1231cc94;
L_1231ccbe:;
  /* 1231ccbe mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231ccc1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ccc7 jne 0x1231ccd3 */
  if (!C.zf) goto L_1231ccd3;
  /* 1231ccc9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1231ccce jmp 0x1231ceb9 */
  goto L_1231ceb9;
L_1231ccd3:;
  /* 1231ccd3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1231ccd9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1231ccdb sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1231ccde sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231cce1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1231cce7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ccee jle 0x1231ccfa */
  if ((C.zf||C.sf!=C.of)) goto L_1231ccfa;
  /* 1231ccf0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1231ccfa:;
  /* 1231ccfa mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1231cd00 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231cd03 je 0x1231cd0f */
  if (C.zf) goto L_1231cd0f;
  /* 1231cd05 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1231cd0a jmp 0x1231ceb9 */
  goto L_1231ceb9;
L_1231cd0f:;
  /* 1231cd0f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1231cd15 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1231cd18 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231cd1e je 0x1231cd2a */
  if (C.zf) goto L_1231cd2a;
  /* 1231cd20 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1231cd25 jmp 0x1231ceb9 */
  goto L_1231ceb9;
L_1231cd2a:;
  /* 1231cd2a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1231cd30 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1231cd36 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1231cd3c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231cd3f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1231cd45 jmp 0x1231cc06 */
  goto L_1231cc06;
L_1231cd4a:;
  /* 1231cd4a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231cd51 je 0x1231cdc1 */
  if (C.zf) goto L_1231cdc1;
  /* 1231cd53 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231cd57 jge 0x1231cd8b */
  if ((C.sf==C.of)) goto L_1231cd8b;
  /* 1231cd59 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1231cd5e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231cd61 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1231cd63 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1231cd69 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1231cd6b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1231cd71 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1231cd76 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231cd79 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1231cd7b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1231cd81 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1231cd83 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1231cd89 jmp 0x1231cdc1 */
  goto L_1231cdc1;
L_1231cd8b:;
  /* 1231cd8b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231cd8e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231cd91 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1231cd96 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1231cd98 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1231cd9e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1231cda0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1231cda6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231cda9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231cdac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1231cdb1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1231cdb3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1231cdb9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1231cdbb mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1231cdc1:;
  /* 1231cdc1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1231cdc7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1231cdca cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231cdd0 jne 0x1231cde4 */
  if (!C.zf) goto L_1231cde4;
  /* 1231cdd2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1231cdd5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1231cddb cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231cde2 je 0x1231cdee */
  if (C.zf) goto L_1231cdee;
L_1231cde4:;
  /* 1231cde4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1231cde9 jmp 0x1231ceb9 */
  goto L_1231ceb9;
L_1231cdee:;
  /* 1231cdee mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1231cdf4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1231cdf7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231cdfd je 0x1231ce09 */
  if (C.zf) goto L_1231ce09;
  /* 1231cdff mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1231ce04 jmp 0x1231ceb9 */
  goto L_1231ceb9;
L_1231ce09:;
  /* 1231ce09 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1231ce0f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ce12 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1231ce18 jmp 0x1231cbdd */
  goto L_1231cbdd;
L_1231ce1d:;
  /* 1231ce1d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231ce20 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1231ce26 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1231ce2c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ce30 jne 0x1231ce4a */
  if (!C.zf) goto L_1231ce4a;
  /* 1231ce32 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231ce35 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1231ce3b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1231ce41 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ce48 je 0x1231ce51 */
  if (C.zf) goto L_1231ce51;
L_1231ce4a:;
  /* 1231ce4a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1231ce4f jmp 0x1231ceb9 */
  goto L_1231ceb9;
L_1231ce51:;
  /* 1231ce51 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1231ce57 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ce5d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1231ce63 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231ce66 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ce6b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1231ce6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231ce71 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1231ce73 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1231ce76 jmp 0x1231c97a */
  goto L_1231c97a;
L_1231ce7b:;
  /* 1231ce7b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1231ce81 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1231ce87 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ce89 jne 0x1231ce9c */
  if (!C.zf) goto L_1231ce9c;
  /* 1231ce8b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1231ce91 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1231ce97 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ce9a je 0x1231cea3 */
  if (C.zf) goto L_1231cea3;
L_1231ce9c:;
  /* 1231ce9c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1231cea1 jmp 0x1231ceb9 */
  goto L_1231ceb9;
L_1231cea3:;
  /* 1231cea3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1231cea9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ceac mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1231ceb2 jmp 0x1231c8e3 */
  goto L_1231c8e3;
L_1231ceb7:;
  /* 1231ceb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1231ceb9:;
  /* 1231ceb9 mov esp, ebp */
  ESP = (EBP);
  /* 1231cebb pop ebp */
  EBP = (pop32());
  /* 1231cebc ret  */
  ESPCHK(0x1231c8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cec0 @ 0x1231cec0 (183 bytes, 58 insns) */
void f_1231cec0(void) {
  FTRACE(0x1231cec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231cec0 push ebp */
  push32((uint32_t)(EBP));
  /* 1231cec1 mov ebp, esp */
  EBP = (ESP);
  /* 1231cec3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231cec6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231cec9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231cecc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ced1 ja 0x1231ceea */
  if ((!C.cf&&!C.zf)) goto L_1231ceea;
  /* 1231ced3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231ced6 mov edx, dword ptr [0x1233fde8] */
  EDX = (r32((uint32_t)(0x1233fde8)));
  /* 1231cedc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231cede mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1231cee2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1231cee5 jmp 0x1231cf73 */
  goto L_1231cf73;
L_1231ceea:;
  /* 1231ceea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231ceed sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1231cef0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1231cef6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1231cefc mov edx, dword ptr [0x1233fde8] */
  EDX = (r32((uint32_t)(0x1233fde8)));
  /* 1231cf02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231cf04 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1231cf08 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1231cf0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231cf0f je 0x1231cf33 */
  if (C.zf) goto L_1231cf33;
  /* 1231cf11 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231cf14 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1231cf17 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1231cf1d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1231cf20 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1231cf23 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1231cf26 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1231cf2a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1231cf31 jmp 0x1231cf44 */
  goto L_1231cf44;
L_1231cf33:;
  /* 1231cf33 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1231cf36 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1231cf39 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1231cf3d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1231cf44:;
  /* 1231cf44 push 1 */
  push32((uint32_t)(0x1u));
  /* 1231cf46 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231cf48 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231cf4a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1231cf4d push ecx */
  push32((uint32_t)(ECX));
  /* 1231cf4e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231cf51 push edx */
  push32((uint32_t)(EDX));
  /* 1231cf52 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1231cf55 push eax */
  push32((uint32_t)(EAX));
  /* 1231cf56 push 1 */
  push32((uint32_t)(0x1u));
  /* 1231cf58 call 0x1231f290 */
  push32(0x1231cf5du); f_1231f290();
  /* 1231cf5d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231cf60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231cf62 jne 0x1231cf68 */
  if (!C.zf) goto L_1231cf68;
  /* 1231cf64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231cf66 jmp 0x1231cf73 */
  goto L_1231cf73;
L_1231cf68:;
  /* 1231cf68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231cf6b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1231cf70 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1231cf73:;
  /* 1231cf73 mov esp, ebp */
  ESP = (EBP);
  /* 1231cf75 pop ebp */
  EBP = (pop32());
  /* 1231cf76 ret  */
  ESPCHK(0x1231cec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf80 @ 0x1231cf80 (836 bytes, 238 insns) */
void f_1231cf80(void) {
  FTRACE(0x1231cf80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231cf80 push ebp */
  push32((uint32_t)(EBP));
  /* 1231cf81 mov ebp, esp */
  EBP = (ESP);
  /* 1231cf83 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231cf86 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1231cf88 call 0x1231a9b0 */
  push32(0x1231cf8du); f_1231a9b0();
  /* 1231cf8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231cf90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231cf93 push eax */
  push32((uint32_t)(EAX));
  /* 1231cf94 call 0x1231d2d0 */
  push32(0x1231cf99u); f_1231d2d0();
  /* 1231cf99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231cf9c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1231cf9f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231cfa2 cmp ecx, dword ptr [0x12341ac8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12341ac8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231cfa8 jne 0x1231cfbb */
  if (!C.zf) goto L_1231cfbb;
  /* 1231cfaa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1231cfac call 0x1231aa50 */
  push32(0x1231cfb1u); f_1231aa50();
  /* 1231cfb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231cfb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231cfb6 jmp 0x1231d2c0 */
  goto L_1231d2c0;
L_1231cfbb:;
  /* 1231cfbb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231cfbf jne 0x1231cfdc */
  if (!C.zf) goto L_1231cfdc;
  /* 1231cfc1 call 0x1231d3b0 */
  push32(0x1231cfc6u); f_1231d3b0();
  /* 1231cfc6 call 0x1231d430 */
  push32(0x1231cfcbu); f_1231d430();
  /* 1231cfcb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1231cfcd call 0x1231aa50 */
  push32(0x1231cfd2u); f_1231aa50();
  /* 1231cfd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231cfd5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231cfd7 jmp 0x1231d2c0 */
  goto L_1231d2c0;
L_1231cfdc:;
  /* 1231cfdc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1231cfe3 jmp 0x1231cfee */
  goto L_1231cfee;
L_1231cfe5:;
  /* 1231cfe5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231cfe8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231cfeb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1231cfee:;
  /* 1231cfee cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231cff2 jae 0x1231d13f */
  if (!C.cf) goto L_1231d13f;
  /* 1231cff8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231cffb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231cffe mov ecx, dword ptr [eax + 0x12340170] */
  ECX = (r32((uint32_t)(EAX + 0x12340170)));
  /* 1231d004 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d007 jne 0x1231d13a */
  if (!C.zf) goto L_1231d13a;
  /* 1231d00d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1231d014 jmp 0x1231d01f */
  goto L_1231d01f;
L_1231d016:;
  /* 1231d016 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231d019 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231d01c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1231d01f:;
  /* 1231d01f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d026 jae 0x1231d034 */
  if (!C.cf) goto L_1231d034;
  /* 1231d028 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231d02b mov byte ptr [eax + 0x12341c60], 0 */
  w8((uint32_t)(EAX + 0x12341c60), (0x0u));
  /* 1231d032 jmp 0x1231d016 */
  goto L_1231d016;
L_1231d034:;
  /* 1231d034 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1231d03b jmp 0x1231d046 */
  goto L_1231d046;
L_1231d03d:;
  /* 1231d03d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231d040 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231d043 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1231d046:;
  /* 1231d046 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d04a jae 0x1231d0c7 */
  if (!C.cf) goto L_1231d0c7;
  /* 1231d04c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231d04f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231d052 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231d055 lea ecx, [edx + eax*8 + 0x12340180] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x12340180));
  /* 1231d05c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1231d05f jmp 0x1231d06a */
  goto L_1231d06a;
L_1231d061:;
  /* 1231d061 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231d064 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231d067 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1231d06a:;
  /* 1231d06a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231d06d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1231d06f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1231d071 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1231d073 je 0x1231d0c2 */
  if (C.zf) goto L_1231d0c2;
  /* 1231d075 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231d078 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231d07a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1231d07d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231d07f je 0x1231d0c2 */
  if (C.zf) goto L_1231d0c2;
  /* 1231d081 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231d084 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1231d086 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1231d088 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1231d08b jmp 0x1231d096 */
  goto L_1231d096;
L_1231d08d:;
  /* 1231d08d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231d090 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231d093 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1231d096:;
  /* 1231d096 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231d099 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1231d09b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1231d09e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d0a1 ja 0x1231d0c0 */
  if ((!C.cf&&!C.zf)) goto L_1231d0c0;
  /* 1231d0a3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231d0a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231d0a9 mov dl, byte ptr [eax + 0x12341c61] */
  DL = (r8((uint32_t)(EAX + 0x12341c61)));
  /* 1231d0af or dl, byte ptr [ecx + 0x12340168] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x12340168))); DL = (_r); fl_logic(_r,8); }
  /* 1231d0b5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231d0b8 mov byte ptr [eax + 0x12341c61], dl */
  w8((uint32_t)(EAX + 0x12341c61), (DL));
  /* 1231d0be jmp 0x1231d08d */
  goto L_1231d08d;
L_1231d0c0:;
  /* 1231d0c0 jmp 0x1231d061 */
  goto L_1231d061;
L_1231d0c2:;
  /* 1231d0c2 jmp 0x1231d03d */
  goto L_1231d03d;
L_1231d0c7:;
  /* 1231d0c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231d0ca mov dword ptr [0x12341ac8], ecx */
  w32((uint32_t)(0x12341ac8), (ECX));
  /* 1231d0d0 mov dword ptr [0x12341b4c], 1 */
  w32((uint32_t)(0x12341b4c), (0x1u));
  /* 1231d0da mov edx, dword ptr [0x12341ac8] */
  EDX = (r32((uint32_t)(0x12341ac8)));
  /* 1231d0e0 push edx */
  push32((uint32_t)(EDX));
  /* 1231d0e1 call 0x1231d330 */
  push32(0x1231d0e6u); f_1231d330();
  /* 1231d0e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231d0e9 mov dword ptr [0x12341d64], eax */
  w32((uint32_t)(0x12341d64), (EAX));
  /* 1231d0ee mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1231d0f5 jmp 0x1231d100 */
  goto L_1231d100;
L_1231d0f7:;
  /* 1231d0f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231d0fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231d0fd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1231d100:;
  /* 1231d100 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d104 jae 0x1231d124 */
  if (!C.cf) goto L_1231d124;
  /* 1231d106 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231d109 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231d10c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231d10f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231d112 mov cx, word ptr [ecx + eax*2 + 0x12340174] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x12340174)));
  /* 1231d11a mov word ptr [edx*2 + 0x12341b40], cx */
  w16((uint32_t)(EDX*2 + 0x12341b40), (CX));
  /* 1231d122 jmp 0x1231d0f7 */
  goto L_1231d0f7;
L_1231d124:;
  /* 1231d124 call 0x1231d430 */
  push32(0x1231d129u); f_1231d430();
  /* 1231d129 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1231d12b call 0x1231aa50 */
  push32(0x1231d130u); f_1231aa50();
  /* 1231d130 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231d133 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231d135 jmp 0x1231d2c0 */
  goto L_1231d2c0;
L_1231d13a:;
  /* 1231d13a jmp 0x1231cfe5 */
  goto L_1231cfe5;
L_1231d13f:;
  /* 1231d13f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1231d142 push edx */
  push32((uint32_t)(EDX));
  /* 1231d143 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231d146 push eax */
  push32((uint32_t)(EAX));
  /* 1231d147 call dword ptr [0x123442c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442c0))), 0x1231d14du);
  /* 1231d14d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d150 jne 0x1231d292 */
  if (!C.zf) goto L_1231d292;
  /* 1231d156 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1231d15d jmp 0x1231d168 */
  goto L_1231d168;
L_1231d15f:;
  /* 1231d15f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231d162 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231d165 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1231d168:;
  /* 1231d168 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d16f jae 0x1231d17d */
  if (!C.cf) goto L_1231d17d;
  /* 1231d171 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231d174 mov byte ptr [edx + 0x12341c60], 0 */
  w8((uint32_t)(EDX + 0x12341c60), (0x0u));
  /* 1231d17b jmp 0x1231d15f */
  goto L_1231d15f;
L_1231d17d:;
  /* 1231d17d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231d180 mov dword ptr [0x12341ac8], eax */
  w32((uint32_t)(0x12341ac8), (EAX));
  /* 1231d185 mov dword ptr [0x12341d64], 0 */
  w32((uint32_t)(0x12341d64), (0x0u));
  /* 1231d18f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d193 jbe 0x1231d24e */
  if ((C.cf||C.zf)) goto L_1231d24e;
  /* 1231d199 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1231d19c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1231d19f jmp 0x1231d1aa */
  goto L_1231d1aa;
L_1231d1a1:;
  /* 1231d1a1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1231d1a4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231d1a7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1231d1aa:;
  /* 1231d1aa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1231d1ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1231d1af mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1231d1b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1231d1b3 je 0x1231d1fc */
  if (C.zf) goto L_1231d1fc;
  /* 1231d1b5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1231d1b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231d1ba mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1231d1bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231d1bf je 0x1231d1fc */
  if (C.zf) goto L_1231d1fc;
  /* 1231d1c1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1231d1c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1231d1c6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1231d1c8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1231d1cb jmp 0x1231d1d6 */
  goto L_1231d1d6;
L_1231d1cd:;
  /* 1231d1cd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231d1d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231d1d3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1231d1d6:;
  /* 1231d1d6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1231d1d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1231d1db mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1231d1de cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d1e1 ja 0x1231d1fa */
  if ((!C.cf&&!C.zf)) goto L_1231d1fa;
  /* 1231d1e3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231d1e6 mov cl, byte ptr [eax + 0x12341c61] */
  CL = (r8((uint32_t)(EAX + 0x12341c61)));
  /* 1231d1ec or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1231d1ef mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231d1f2 mov byte ptr [edx + 0x12341c61], cl */
  w8((uint32_t)(EDX + 0x12341c61), (CL));
  /* 1231d1f8 jmp 0x1231d1cd */
  goto L_1231d1cd;
L_1231d1fa:;
  /* 1231d1fa jmp 0x1231d1a1 */
  goto L_1231d1a1;
L_1231d1fc:;
  /* 1231d1fc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1231d203 jmp 0x1231d20e */
  goto L_1231d20e;
L_1231d205:;
  /* 1231d205 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231d208 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231d20b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1231d20e:;
  /* 1231d20e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d215 jae 0x1231d22e */
  if (!C.cf) goto L_1231d22e;
  /* 1231d217 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231d21a mov dl, byte ptr [ecx + 0x12341c61] */
  DL = (r8((uint32_t)(ECX + 0x12341c61)));
  /* 1231d220 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1231d223 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1231d226 mov byte ptr [eax + 0x12341c61], dl */
  w8((uint32_t)(EAX + 0x12341c61), (DL));
  /* 1231d22c jmp 0x1231d205 */
  goto L_1231d205;
L_1231d22e:;
  /* 1231d22e mov ecx, dword ptr [0x12341ac8] */
  ECX = (r32((uint32_t)(0x12341ac8)));
  /* 1231d234 push ecx */
  push32((uint32_t)(ECX));
  /* 1231d235 call 0x1231d330 */
  push32(0x1231d23au); f_1231d330();
  /* 1231d23a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231d23d mov dword ptr [0x12341d64], eax */
  w32((uint32_t)(0x12341d64), (EAX));
  /* 1231d242 mov dword ptr [0x12341b4c], 1 */
  w32((uint32_t)(0x12341b4c), (0x1u));
  /* 1231d24c jmp 0x1231d258 */
  goto L_1231d258;
L_1231d24e:;
  /* 1231d24e mov dword ptr [0x12341b4c], 0 */
  w32((uint32_t)(0x12341b4c), (0x0u));
L_1231d258:;
  /* 1231d258 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1231d25f jmp 0x1231d26a */
  goto L_1231d26a;
L_1231d261:;
  /* 1231d261 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231d264 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231d267 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1231d26a:;
  /* 1231d26a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d26e jae 0x1231d27f */
  if (!C.cf) goto L_1231d27f;
  /* 1231d270 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231d273 mov word ptr [eax*2 + 0x12341b40], 0 */
  w16((uint32_t)(EAX*2 + 0x12341b40), (0x0u));
  /* 1231d27d jmp 0x1231d261 */
  goto L_1231d261;
L_1231d27f:;
  /* 1231d27f call 0x1231d430 */
  push32(0x1231d284u); f_1231d430();
  /* 1231d284 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1231d286 call 0x1231aa50 */
  push32(0x1231d28bu); f_1231aa50();
  /* 1231d28b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231d28e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231d290 jmp 0x1231d2c0 */
  goto L_1231d2c0;
L_1231d292:;
  /* 1231d292 cmp dword ptr [0x12341928], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341928))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d299 je 0x1231d2b3 */
  if (C.zf) goto L_1231d2b3;
  /* 1231d29b call 0x1231d3b0 */
  push32(0x1231d2a0u); f_1231d3b0();
  /* 1231d2a0 call 0x1231d430 */
  push32(0x1231d2a5u); f_1231d430();
  /* 1231d2a5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1231d2a7 call 0x1231aa50 */
  push32(0x1231d2acu); f_1231aa50();
  /* 1231d2ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231d2af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231d2b1 jmp 0x1231d2c0 */
  goto L_1231d2c0;
L_1231d2b3:;
  /* 1231d2b3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1231d2b5 call 0x1231aa50 */
  push32(0x1231d2bau); f_1231aa50();
  /* 1231d2ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231d2bd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1231d2c0:;
  /* 1231d2c0 mov esp, ebp */
  ESP = (EBP);
  /* 1231d2c2 pop ebp */
  EBP = (pop32());
  /* 1231d2c3 ret  */
  ESPCHK(0x1231cf80u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1231d2d0 (89 bytes, 21 insns) */
void f_1231d2d0(void) {
  FTRACE(0x1231d2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231d2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1231d2d1 mov ebp, esp */
  EBP = (ESP);
  /* 1231d2d3 mov dword ptr [0x12341928], 0 */
  w32((uint32_t)(0x12341928), (0x0u));
  /* 1231d2dd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d2e1 jne 0x1231d2f5 */
  if (!C.zf) goto L_1231d2f5;
  /* 1231d2e3 mov dword ptr [0x12341928], 1 */
  w32((uint32_t)(0x12341928), (0x1u));
  /* 1231d2ed call dword ptr [0x123442c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442c8))), 0x1231d2f3u);
  /* 1231d2f3 jmp 0x1231d327 */
  goto L_1231d327;
L_1231d2f5:;
  /* 1231d2f5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d2f9 jne 0x1231d30d */
  if (!C.zf) goto L_1231d30d;
  /* 1231d2fb mov dword ptr [0x12341928], 1 */
  w32((uint32_t)(0x12341928), (0x1u));
  /* 1231d305 call dword ptr [0x123442c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442c4))), 0x1231d30bu);
  /* 1231d30b jmp 0x1231d327 */
  goto L_1231d327;
L_1231d30d:;
  /* 1231d30d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d311 jne 0x1231d324 */
  if (!C.zf) goto L_1231d324;
  /* 1231d313 mov dword ptr [0x12341928], 1 */
  w32((uint32_t)(0x12341928), (0x1u));
  /* 1231d31d mov eax, dword ptr [0x12341950] */
  EAX = (r32((uint32_t)(0x12341950)));
  /* 1231d322 jmp 0x1231d327 */
  goto L_1231d327;
L_1231d324:;
  /* 1231d324 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1231d327:;
  /* 1231d327 pop ebp */
  EBP = (pop32());
  /* 1231d328 ret  */
  ESPCHK(0x1231d2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d330 @ 0x1231d330 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1231d330(void) {
  FTRACE(0x1231d330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231d330 push ebp */
  push32((uint32_t)(EBP));
  /* 1231d331 mov ebp, esp */
  EBP = (ESP);
  /* 1231d333 push ecx */
  push32((uint32_t)(ECX));
  /* 1231d334 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231d337 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1231d33a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231d33d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231d343 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1231d346 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d34a ja 0x1231d37a */
  if ((!C.cf&&!C.zf)) goto L_1231d37a;
  /* 1231d34c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231d34f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1231d351 mov dl, byte ptr [eax + 0x1231d394] */
  DL = (r8((uint32_t)(EAX + 0x1231d394)));
  /* 1231d357 jmp dword ptr [edx*4 + 0x1231d380] */
  switch (EDX) {
    case 0: goto L_1231d35e;
    case 1: goto L_1231d365;
    case 2: goto L_1231d36c;
    case 3: goto L_1231d373;
    case 4: goto L_1231d37a;
    default: x86_unimpl("switch@0x1231d357 out of table"); return;
  }
L_1231d35e:;
  /* 1231d35e mov eax, 0x411 */
  EAX = (0x411u);
  /* 1231d363 jmp 0x1231d37c */
  goto L_1231d37c;
L_1231d365:;
  /* 1231d365 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1231d36a jmp 0x1231d37c */
  goto L_1231d37c;
L_1231d36c:;
  /* 1231d36c mov eax, 0x412 */
  EAX = (0x412u);
  /* 1231d371 jmp 0x1231d37c */
  goto L_1231d37c;
L_1231d373:;
  /* 1231d373 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1231d378 jmp 0x1231d37c */
  goto L_1231d37c;
L_1231d37a:;
  /* 1231d37a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1231d37c:;
  /* 1231d37c mov esp, ebp */
  ESP = (EBP);
  /* 1231d37e pop ebp */
  EBP = (pop32());
  /* 1231d37f ret  */
  ESPCHK(0x1231d330u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1231d3b0 (116 bytes, 29 insns) */
void f_1231d3b0(void) {
  FTRACE(0x1231d3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231d3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1231d3b1 mov ebp, esp */
  EBP = (ESP);
  /* 1231d3b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1231d3b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1231d3bb jmp 0x1231d3c6 */
  goto L_1231d3c6;
L_1231d3bd:;
  /* 1231d3bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231d3c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231d3c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1231d3c6:;
  /* 1231d3c6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d3cd jge 0x1231d3db */
  if ((C.sf==C.of)) goto L_1231d3db;
  /* 1231d3cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231d3d2 mov byte ptr [ecx + 0x12341c60], 0 */
  w8((uint32_t)(ECX + 0x12341c60), (0x0u));
  /* 1231d3d9 jmp 0x1231d3bd */
  goto L_1231d3bd;
L_1231d3db:;
  /* 1231d3db mov dword ptr [0x12341ac8], 0 */
  w32((uint32_t)(0x12341ac8), (0x0u));
  /* 1231d3e5 mov dword ptr [0x12341b4c], 0 */
  w32((uint32_t)(0x12341b4c), (0x0u));
  /* 1231d3ef mov dword ptr [0x12341d64], 0 */
  w32((uint32_t)(0x12341d64), (0x0u));
  /* 1231d3f9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1231d400 jmp 0x1231d40b */
  goto L_1231d40b;
L_1231d402:;
  /* 1231d402 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231d405 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231d408 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1231d40b:;
  /* 1231d40b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d40f jge 0x1231d420 */
  if ((C.sf==C.of)) goto L_1231d420;
  /* 1231d411 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231d414 mov word ptr [eax*2 + 0x12341b40], 0 */
  w16((uint32_t)(EAX*2 + 0x12341b40), (0x0u));
  /* 1231d41e jmp 0x1231d402 */
  goto L_1231d402;
L_1231d420:;
  /* 1231d420 mov esp, ebp */
  ESP = (EBP);
  /* 1231d422 pop ebp */
  EBP = (pop32());
  /* 1231d423 ret  */
  ESPCHK(0x1231d3b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d430 @ 0x1231d430 (770 bytes, 175 insns) */
void f_1231d430(void) {
  FTRACE(0x1231d430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231d430 push ebp */
  push32((uint32_t)(EBP));
  /* 1231d431 mov ebp, esp */
  EBP = (ESP);
  /* 1231d433 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231d439 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1231d43f push eax */
  push32((uint32_t)(EAX));
  /* 1231d440 mov ecx, dword ptr [0x12341ac8] */
  ECX = (r32((uint32_t)(0x12341ac8)));
  /* 1231d446 push ecx */
  push32((uint32_t)(ECX));
  /* 1231d447 call dword ptr [0x123442c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442c0))), 0x1231d44du);
  /* 1231d44d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d450 jne 0x1231d669 */
  if (!C.zf) goto L_1231d669;
  /* 1231d456 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1231d460 jmp 0x1231d471 */
  goto L_1231d471;
L_1231d462:;
  /* 1231d462 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1231d468 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231d46b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1231d471:;
  /* 1231d471 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d47b jae 0x1231d492 */
  if (!C.cf) goto L_1231d492;
  /* 1231d47d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1231d483 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1231d489 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1231d490 jmp 0x1231d462 */
  goto L_1231d462;
L_1231d492:;
  /* 1231d492 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1231d499 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1231d49f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1231d4a2 jmp 0x1231d4ad */
  goto L_1231d4ad;
L_1231d4a4:;
  /* 1231d4a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231d4a7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231d4aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1231d4ad:;
  /* 1231d4ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231d4b0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1231d4b2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1231d4b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1231d4b6 je 0x1231d4f8 */
  if (C.zf) goto L_1231d4f8;
  /* 1231d4b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231d4bb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1231d4bd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1231d4bf mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1231d4c5 jmp 0x1231d4d6 */
  goto L_1231d4d6;
L_1231d4c7:;
  /* 1231d4c7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1231d4cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231d4d0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1231d4d6:;
  /* 1231d4d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231d4d9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1231d4db mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1231d4de cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d4e4 ja 0x1231d4f6 */
  if ((!C.cf&&!C.zf)) goto L_1231d4f6;
  /* 1231d4e6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1231d4ec mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1231d4f4 jmp 0x1231d4c7 */
  goto L_1231d4c7;
L_1231d4f6:;
  /* 1231d4f6 jmp 0x1231d4a4 */
  goto L_1231d4a4;
L_1231d4f8:;
  /* 1231d4f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231d4fa mov eax, dword ptr [0x12341d64] */
  EAX = (r32((uint32_t)(0x12341d64)));
  /* 1231d4ff push eax */
  push32((uint32_t)(EAX));
  /* 1231d500 mov ecx, dword ptr [0x12341ac8] */
  ECX = (r32((uint32_t)(0x12341ac8)));
  /* 1231d506 push ecx */
  push32((uint32_t)(ECX));
  /* 1231d507 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1231d50d push edx */
  push32((uint32_t)(EDX));
  /* 1231d50e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1231d513 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1231d519 push eax */
  push32((uint32_t)(EAX));
  /* 1231d51a push 1 */
  push32((uint32_t)(0x1u));
  /* 1231d51c call 0x1231f290 */
  push32(0x1231d521u); f_1231f290();
  /* 1231d521 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231d524 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231d526 mov ecx, dword ptr [0x12341ac8] */
  ECX = (r32((uint32_t)(0x12341ac8)));
  /* 1231d52c push ecx */
  push32((uint32_t)(ECX));
  /* 1231d52d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1231d532 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1231d538 push edx */
  push32((uint32_t)(EDX));
  /* 1231d539 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1231d53e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1231d544 push eax */
  push32((uint32_t)(EAX));
  /* 1231d545 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1231d54a mov ecx, dword ptr [0x12341d64] */
  ECX = (r32((uint32_t)(0x12341d64)));
  /* 1231d550 push ecx */
  push32((uint32_t)(ECX));
  /* 1231d551 call 0x1231f450 */
  push32(0x1231d556u); f_1231f450();
  /* 1231d556 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231d559 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231d55b mov edx, dword ptr [0x12341ac8] */
  EDX = (r32((uint32_t)(0x12341ac8)));
  /* 1231d561 push edx */
  push32((uint32_t)(EDX));
  /* 1231d562 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1231d567 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1231d56d push eax */
  push32((uint32_t)(EAX));
  /* 1231d56e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1231d573 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1231d579 push ecx */
  push32((uint32_t)(ECX));
  /* 1231d57a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1231d57f mov edx, dword ptr [0x12341d64] */
  EDX = (r32((uint32_t)(0x12341d64)));
  /* 1231d585 push edx */
  push32((uint32_t)(EDX));
  /* 1231d586 call 0x1231f450 */
  push32(0x1231d58bu); f_1231f450();
  /* 1231d58b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231d58e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1231d598 jmp 0x1231d5a9 */
  goto L_1231d5a9;
L_1231d59a:;
  /* 1231d59a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1231d5a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231d5a3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1231d5a9:;
  /* 1231d5a9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d5b3 jae 0x1231d664 */
  if (!C.cf) goto L_1231d664;
  /* 1231d5b9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1231d5bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1231d5c1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1231d5c9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1231d5cc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1231d5ce je 0x1231d606 */
  if (C.zf) goto L_1231d606;
  /* 1231d5d0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1231d5d6 mov cl, byte ptr [eax + 0x12341c61] */
  CL = (r8((uint32_t)(EAX + 0x12341c61)));
  /* 1231d5dc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1231d5df mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1231d5e5 mov byte ptr [edx + 0x12341c61], cl */
  w8((uint32_t)(EDX + 0x12341c61), (CL));
  /* 1231d5eb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1231d5f1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1231d5f7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1231d5fe mov byte ptr [eax + 0x12341b60], dl */
  w8((uint32_t)(EAX + 0x12341b60), (DL));
  /* 1231d604 jmp 0x1231d65f */
  goto L_1231d65f;
L_1231d606:;
  /* 1231d606 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1231d60c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1231d60e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1231d616 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1231d619 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1231d61b je 0x1231d652 */
  if (C.zf) goto L_1231d652;
  /* 1231d61d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1231d623 mov al, byte ptr [edx + 0x12341c61] */
  AL = (r8((uint32_t)(EDX + 0x12341c61)));
  /* 1231d629 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1231d62b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1231d631 mov byte ptr [ecx + 0x12341c61], al */
  w8((uint32_t)(ECX + 0x12341c61), (AL));
  /* 1231d637 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1231d63d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1231d643 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1231d64a mov byte ptr [edx + 0x12341b60], cl */
  w8((uint32_t)(EDX + 0x12341b60), (CL));
  /* 1231d650 jmp 0x1231d65f */
  goto L_1231d65f;
L_1231d652:;
  /* 1231d652 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1231d658 mov byte ptr [edx + 0x12341b60], 0 */
  w8((uint32_t)(EDX + 0x12341b60), (0x0u));
L_1231d65f:;
  /* 1231d65f jmp 0x1231d59a */
  goto L_1231d59a;
L_1231d664:;
  /* 1231d664 jmp 0x1231d72e */
  goto L_1231d72e;
L_1231d669:;
  /* 1231d669 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1231d673 jmp 0x1231d684 */
  goto L_1231d684;
L_1231d675:;
  /* 1231d675 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1231d67b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231d67e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1231d684:;
  /* 1231d684 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d68e jae 0x1231d72e */
  if (!C.cf) goto L_1231d72e;
  /* 1231d694 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d69b jb 0x1231d6d8 */
  if (C.cf) goto L_1231d6d8;
  /* 1231d69d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d6a4 ja 0x1231d6d8 */
  if ((!C.cf&&!C.zf)) goto L_1231d6d8;
  /* 1231d6a6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1231d6ac mov dl, byte ptr [ecx + 0x12341c61] */
  DL = (r8((uint32_t)(ECX + 0x12341c61)));
  /* 1231d6b2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1231d6b5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1231d6bb mov byte ptr [eax + 0x12341c61], dl */
  w8((uint32_t)(EAX + 0x12341c61), (DL));
  /* 1231d6c1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1231d6c7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231d6ca mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1231d6d0 mov byte ptr [edx + 0x12341b60], cl */
  w8((uint32_t)(EDX + 0x12341b60), (CL));
  /* 1231d6d6 jmp 0x1231d729 */
  goto L_1231d729;
L_1231d6d8:;
  /* 1231d6d8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d6df jb 0x1231d71c */
  if (C.cf) goto L_1231d71c;
  /* 1231d6e1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d6e8 ja 0x1231d71c */
  if ((!C.cf&&!C.zf)) goto L_1231d71c;
  /* 1231d6ea mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1231d6f0 mov cl, byte ptr [eax + 0x12341c61] */
  CL = (r8((uint32_t)(EAX + 0x12341c61)));
  /* 1231d6f6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1231d6f9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1231d6ff mov byte ptr [edx + 0x12341c61], cl */
  w8((uint32_t)(EDX + 0x12341c61), (CL));
  /* 1231d705 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1231d70b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231d70e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1231d714 mov byte ptr [ecx + 0x12341b60], al */
  w8((uint32_t)(ECX + 0x12341b60), (AL));
  /* 1231d71a jmp 0x1231d729 */
  goto L_1231d729;
L_1231d71c:;
  /* 1231d71c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1231d722 mov byte ptr [edx + 0x12341b60], 0 */
  w8((uint32_t)(EDX + 0x12341b60), (0x0u));
L_1231d729:;
  /* 1231d729 jmp 0x1231d675 */
  goto L_1231d675;
L_1231d72e:;
  /* 1231d72e mov esp, ebp */
  ESP = (EBP);
  /* 1231d730 pop ebp */
  EBP = (pop32());
  /* 1231d731 ret  */
  ESPCHK(0x1231d430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d740 @ 0x1231d740 (23 bytes, 9 insns) */
void f_1231d740(void) {
  FTRACE(0x1231d740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231d740 push ebp */
  push32((uint32_t)(EBP));
  /* 1231d741 mov ebp, esp */
  EBP = (ESP);
  /* 1231d743 cmp dword ptr [0x12341b4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341b4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d74a je 0x1231d753 */
  if (C.zf) goto L_1231d753;
  /* 1231d74c mov eax, dword ptr [0x12341ac8] */
  EAX = (r32((uint32_t)(0x12341ac8)));
  /* 1231d751 jmp 0x1231d755 */
  goto L_1231d755;
L_1231d753:;
  /* 1231d753 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1231d755:;
  /* 1231d755 pop ebp */
  EBP = (pop32());
  /* 1231d756 ret  */
  ESPCHK(0x1231d740u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d760 @ 0x1231d760 (34 bytes, 10 insns) */
void f_1231d760(void) {
  FTRACE(0x1231d760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231d760 push ebp */
  push32((uint32_t)(EBP));
  /* 1231d761 mov ebp, esp */
  EBP = (ESP);
  /* 1231d763 cmp dword ptr [0x12343250], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12343250))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d76a jne 0x1231d780 */
  if (!C.zf) goto L_1231d780;
  /* 1231d76c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1231d76e call 0x1231cf80 */
  push32(0x1231d773u); f_1231cf80();
  /* 1231d773 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231d776 mov dword ptr [0x12343250], 1 */
  w32((uint32_t)(0x12343250), (0x1u));
L_1231d780:;
  /* 1231d780 pop ebp */
  EBP = (pop32());
  /* 1231d781 ret  */
  ESPCHK(0x1231d760u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d790 @ 0x1231d790 (664 bytes, 263 insns) [15 switch table(s)] */
void f_1231d790(void) {
  FTRACE(0x1231d790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231d790 push ebp */
  push32((uint32_t)(EBP));
  /* 1231d791 mov ebp, esp */
  EBP = (ESP);
  /* 1231d793 push edi */
  push32((uint32_t)(EDI));
  /* 1231d794 push esi */
  push32((uint32_t)(ESI));
  /* 1231d795 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1231d798 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1231d79b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1231d79e mov eax, ecx */
  EAX = (ECX);
  /* 1231d7a0 mov edx, ecx */
  EDX = (ECX);
  /* 1231d7a2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231d7a4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d7a6 jbe 0x1231d7b0 */
  if ((C.cf||C.zf)) goto L_1231d7b0;
  /* 1231d7a8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d7aa jb 0x1231d928 */
  if (C.cf) goto L_1231d928;
L_1231d7b0:;
  /* 1231d7b0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1231d7b6 jne 0x1231d7cc */
  if (!C.zf) goto L_1231d7cc;
  /* 1231d7b8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1231d7bb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1231d7be cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d7c1 jb 0x1231d7ec */
  if (C.cf) goto L_1231d7ec;
  /* 1231d7c3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1231d7c5 jmp dword ptr [edx*4 + 0x1231d8d8] */
  switch (EDX) {
    case 0: goto L_1231d8e8;
    case 1: goto L_1231d8f0;
    case 2: goto L_1231d8fc;
    case 3: goto L_1231d910;
    default: x86_unimpl("switch@0x1231d7c5 out of table"); return;
  }
L_1231d7cc:;
  /* 1231d7cc mov eax, edi */
  EAX = (EDI);
  /* 1231d7ce mov edx, 3 */
  EDX = (0x3u);
  /* 1231d7d3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231d7d6 jb 0x1231d7e4 */
  if (C.cf) goto L_1231d7e4;
  /* 1231d7d8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1231d7db add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231d7dd jmp dword ptr [eax*4 + 0x1231d7f0] */
  switch (EAX) {
    case 1: goto L_1231d800;
    case 2: goto L_1231d82c;
    case 3: goto L_1231d850;
    default: x86_unimpl("switch@0x1231d7dd out of table"); return;
  }
L_1231d7e4:;
  /* 1231d7e4 jmp dword ptr [ecx*4 + 0x1231d8e8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1231d8e8)))); return;
  /* 1231d7eb nop  */
  /* nop */
L_1231d7ec:;
  /* 1231d7ec jmp dword ptr [ecx*4 + 0x1231d86c] */
  switch (ECX) {
    case 0: goto L_1231d8cf;
    case 1: goto L_1231d8bc;
    case 2: goto L_1231d8b4;
    case 3: goto L_1231d8ac;
    case 4: goto L_1231d8a4;
    case 5: goto L_1231d89c;
    case 6: goto L_1231d894;
    case 7: goto L_1231d88c;
    default: x86_unimpl("switch@0x1231d7ec out of table"); return;
  }
  /* 1231d7f3 nop  */
  /* nop */
L_1231d800:;
  /* 1231d800 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1231d802 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1231d804 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1231d806 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1231d809 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1231d80c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1231d80f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1231d812 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1231d815 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1231d818 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1231d81b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d81e jb 0x1231d7ec */
  if (C.cf) goto L_1231d7ec;
  /* 1231d820 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1231d822 jmp dword ptr [edx*4 + 0x1231d8d8] */
  switch (EDX) {
    case 0: goto L_1231d8e8;
    case 1: goto L_1231d8f0;
    case 2: goto L_1231d8fc;
    case 3: goto L_1231d910;
    default: x86_unimpl("switch@0x1231d822 out of table"); return;
  }
  /* 1231d829 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1231d82c:;
  /* 1231d82c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1231d82e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1231d830 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1231d832 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1231d835 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1231d838 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1231d83b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1231d83e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1231d841 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d844 jb 0x1231d7ec */
  if (C.cf) goto L_1231d7ec;
  /* 1231d846 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1231d848 jmp dword ptr [edx*4 + 0x1231d8d8] */
  switch (EDX) {
    case 0: goto L_1231d8e8;
    case 1: goto L_1231d8f0;
    case 2: goto L_1231d8fc;
    case 3: goto L_1231d910;
    default: x86_unimpl("switch@0x1231d848 out of table"); return;
  }
  /* 1231d84f nop  */
  /* nop */
L_1231d850:;
  /* 1231d850 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1231d852 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1231d854 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1231d856 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1231d857 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1231d85a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1231d85b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d85e jb 0x1231d7ec */
  if (C.cf) goto L_1231d7ec;
  /* 1231d860 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1231d862 jmp dword ptr [edx*4 + 0x1231d8d8] */
  switch (EDX) {
    case 0: goto L_1231d8e8;
    case 1: goto L_1231d8f0;
    case 2: goto L_1231d8fc;
    case 3: goto L_1231d910;
    default: x86_unimpl("switch@0x1231d862 out of table"); return;
  }
  /* 1231d869 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1231d88c:;
  /* 1231d88c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1231d890 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1231d894:;
  /* 1231d894 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1231d898 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1231d89c:;
  /* 1231d89c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1231d8a0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1231d8a4:;
  /* 1231d8a4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1231d8a8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1231d8ac:;
  /* 1231d8ac mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1231d8b0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1231d8b4:;
  /* 1231d8b4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1231d8b8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1231d8bc:;
  /* 1231d8bc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1231d8c0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1231d8c4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1231d8cb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1231d8cd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1231d8cf:;
  /* 1231d8cf jmp dword ptr [edx*4 + 0x1231d8d8] */
  switch (EDX) {
    case 0: goto L_1231d8e8;
    case 1: goto L_1231d8f0;
    case 2: goto L_1231d8fc;
    case 3: goto L_1231d910;
    default: x86_unimpl("switch@0x1231d8cf out of table"); return;
  }
  /* 1231d8d6 mov edi, edi */
  EDI = (EDI);
L_1231d8e8:;
  /* 1231d8e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231d8eb pop esi */
  ESI = (pop32());
  /* 1231d8ec pop edi */
  EDI = (pop32());
  /* 1231d8ed leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1231d8ee ret  */
  ESPCHK(0x1231d790u, _esp0);
  ESP += 4; return;
  /* 1231d8ef nop  */
  /* nop */
L_1231d8f0:;
  /* 1231d8f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1231d8f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1231d8f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231d8f7 pop esi */
  ESI = (pop32());
  /* 1231d8f8 pop edi */
  EDI = (pop32());
  /* 1231d8f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1231d8fa ret  */
  ESPCHK(0x1231d790u, _esp0);
  ESP += 4; return;
  /* 1231d8fb nop  */
  /* nop */
L_1231d8fc:;
  /* 1231d8fc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1231d8fe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1231d900 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1231d903 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1231d906 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231d909 pop esi */
  ESI = (pop32());
  /* 1231d90a pop edi */
  EDI = (pop32());
  /* 1231d90b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1231d90c ret  */
  ESPCHK(0x1231d790u, _esp0);
  ESP += 4; return;
  /* 1231d90d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1231d910:;
  /* 1231d910 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1231d912 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1231d914 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1231d917 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1231d91a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1231d91d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1231d920 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231d923 pop esi */
  ESI = (pop32());
  /* 1231d924 pop edi */
  EDI = (pop32());
  /* 1231d925 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1231d926 ret  */
  ESPCHK(0x1231d790u, _esp0);
  ESP += 4; return;
  /* 1231d927 nop  */
  /* nop */
L_1231d928:;
  /* 1231d928 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1231d92c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1231d930 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1231d936 jne 0x1231d95c */
  if (!C.zf) goto L_1231d95c;
  /* 1231d938 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1231d93b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1231d93e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d941 jb 0x1231d950 */
  if (C.cf) goto L_1231d950;
  /* 1231d943 std  */
  C.df=1;
  /* 1231d944 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1231d946 cld  */
  C.df=0;
  /* 1231d947 jmp dword ptr [edx*4 + 0x1231da70] */
  switch (EDX) {
    case 0: goto L_1231da80;
    case 1: goto L_1231da88;
    case 2: goto L_1231da98;
    case 3: goto L_1231daac;
    default: x86_unimpl("switch@0x1231d947 out of table"); return;
  }
  /* 1231d94e mov edi, edi */
  EDI = (EDI);
L_1231d950:;
  /* 1231d950 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1231d952 jmp dword ptr [ecx*4 + 0x1231da20] */
  switch (ECX) {
    case 0: goto L_1231da67;
    default: x86_unimpl("switch@0x1231d952 out of table"); return;
  }
  /* 1231d959 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1231d95c:;
  /* 1231d95c mov eax, edi */
  EAX = (EDI);
  /* 1231d95e mov edx, 3 */
  EDX = (0x3u);
  /* 1231d963 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d966 jb 0x1231d974 */
  if (C.cf) goto L_1231d974;
  /* 1231d968 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1231d96b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231d96d jmp dword ptr [eax*4 + 0x1231d978] */
  switch (EAX) {
    case 1: goto L_1231d988;
    case 2: goto L_1231d9a8;
    case 3: goto L_1231d9d0;
    default: x86_unimpl("switch@0x1231d96d out of table"); return;
  }
L_1231d974:;
  /* 1231d974 jmp dword ptr [ecx*4 + 0x1231da70] */
  switch (ECX) {
    case 0: goto L_1231da80;
    case 1: goto L_1231da88;
    case 2: goto L_1231da98;
    case 3: goto L_1231daac;
    default: x86_unimpl("switch@0x1231d974 out of table"); return;
  }
  /* 1231d97b nop  */
  /* nop */
L_1231d988:;
  /* 1231d988 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1231d98b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1231d98d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1231d990 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1231d991 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1231d994 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1231d995 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d998 jb 0x1231d950 */
  if (C.cf) goto L_1231d950;
  /* 1231d99a std  */
  C.df=1;
  /* 1231d99b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1231d99d cld  */
  C.df=0;
  /* 1231d99e jmp dword ptr [edx*4 + 0x1231da70] */
  switch (EDX) {
    case 0: goto L_1231da80;
    case 1: goto L_1231da88;
    case 2: goto L_1231da98;
    case 3: goto L_1231daac;
    default: x86_unimpl("switch@0x1231d99e out of table"); return;
  }
  /* 1231d9a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1231d9a8:;
  /* 1231d9a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1231d9ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1231d9ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1231d9b0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1231d9b3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1231d9b6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1231d9b9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231d9bc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231d9bf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d9c2 jb 0x1231d950 */
  if (C.cf) goto L_1231d950;
  /* 1231d9c4 std  */
  C.df=1;
  /* 1231d9c5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1231d9c7 cld  */
  C.df=0;
  /* 1231d9c8 jmp dword ptr [edx*4 + 0x1231da70] */
  switch (EDX) {
    case 0: goto L_1231da80;
    case 1: goto L_1231da88;
    case 2: goto L_1231da98;
    case 3: goto L_1231daac;
    default: x86_unimpl("switch@0x1231d9c8 out of table"); return;
  }
  /* 1231d9cf nop  */
  /* nop */
L_1231d9d0:;
  /* 1231d9d0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1231d9d3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1231d9d5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1231d9d8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1231d9db mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1231d9de mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1231d9e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1231d9e4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1231d9e7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231d9ea sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231d9ed cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231d9f0 jb 0x1231d950 */
  if (C.cf) goto L_1231d950;
  /* 1231d9f6 std  */
  C.df=1;
  /* 1231d9f7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1231d9f9 cld  */
  C.df=0;
  /* 1231d9fa jmp dword ptr [edx*4 + 0x1231da70] */
  switch (EDX) {
    case 0: goto L_1231da80;
    case 1: goto L_1231da88;
    case 2: goto L_1231da98;
    case 3: goto L_1231daac;
    default: x86_unimpl("switch@0x1231d9fa out of table"); return;
  }
  /* 1231da01 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1231da04 and al, 0xda */
  { uint32_t _r=(AL)&(0xdau); AL = (_r); fl_logic(_r,8); }
  /* 1231da06 xor dword ptr [edx], edx */
  { uint32_t _r=(r32((uint32_t)(EDX)))^(EDX); w32((uint32_t)(EDX), (_r)); fl_logic(_r,32); }
  /* 1231da08 sub al, 0xda */
  { uint32_t _a=(AL),_b=(0xdau),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1231da0a xor dword ptr [edx], edx */
  { uint32_t _r=(r32((uint32_t)(EDX)))^(EDX); w32((uint32_t)(EDX), (_r)); fl_logic(_r,32); }
  /* 1231da0c xor al, 0xda */
  { uint32_t _r=(AL)^(0xdau); AL = (_r); fl_logic(_r,8); }
  /* 1231da0e xor dword ptr [edx], edx */
  { uint32_t _r=(r32((uint32_t)(EDX)))^(EDX); w32((uint32_t)(EDX), (_r)); fl_logic(_r,32); }
  /* 1231da10 cmp al, 0xda */
  { uint32_t _a=(AL),_b=(0xdau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1231da12 xor dword ptr [edx], edx */
  { uint32_t _r=(r32((uint32_t)(EDX)))^(EDX); w32((uint32_t)(EDX), (_r)); fl_logic(_r,32); }
  /* 1231da14 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 1231da15 fidiv dword ptr [ecx] */
  FPU_ST(0) = FPU_ST(0) / ((double)(int32_t)r32((uint32_t)(ECX)));
  /* 1231da17 adc cl, byte ptr [edx + ebx*8 + 0x31] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EDX + EBX*8 + 0x31))),_r=_a+_b+C.cf; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1231da1b adc dl, byte ptr [edx + ebx*8 + 0x31] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EDX + EBX*8 + 0x31))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1231da24 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1231da28 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1231da2c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1231da30 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1231da34 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1231da38 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1231da3c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1231da40 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1231da44 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1231da48 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1231da4c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1231da50 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1231da54 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1231da58 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1231da5c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1231da63 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1231da65 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1231da67:;
  /* 1231da67 jmp dword ptr [edx*4 + 0x1231da70] */
  switch (EDX) {
    case 0: goto L_1231da80;
    case 1: goto L_1231da88;
    case 2: goto L_1231da98;
    case 3: goto L_1231daac;
    default: x86_unimpl("switch@0x1231da67 out of table"); return;
  }
  /* 1231da6e mov edi, edi */
  EDI = (EDI);
L_1231da80:;
  /* 1231da80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231da83 pop esi */
  ESI = (pop32());
  /* 1231da84 pop edi */
  EDI = (pop32());
  /* 1231da85 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1231da86 ret  */
  ESPCHK(0x1231d790u, _esp0);
  ESP += 4; return;
  /* 1231da87 nop  */
  /* nop */
L_1231da88:;
  /* 1231da88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1231da8b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1231da8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231da91 pop esi */
  ESI = (pop32());
  /* 1231da92 pop edi */
  EDI = (pop32());
  /* 1231da93 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1231da94 ret  */
  ESPCHK(0x1231d790u, _esp0);
  ESP += 4; return;
  /* 1231da95 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1231da98:;
  /* 1231da98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1231da9b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1231da9e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1231daa1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1231daa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231daa7 pop esi */
  ESI = (pop32());
  /* 1231daa8 pop edi */
  EDI = (pop32());
  /* 1231daa9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1231daaa ret  */
  ESPCHK(0x1231d790u, _esp0);
  ESP += 4; return;
  /* 1231daab nop  */
  /* nop */
L_1231daac:;
  /* 1231daac mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1231daaf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1231dab2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1231dab5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1231dab8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1231dabb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1231dabe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231dac1 pop esi */
  ESI = (pop32());
  /* 1231dac2 pop edi */
  EDI = (pop32());
  /* 1231dac3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1231dac4 ret  */
  ESPCHK(0x1231d790u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1231dad0 (145 bytes, 42 insns) */
void f_1231dad0(void) {
  FTRACE(0x1231dad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231dad0 push ebp */
  push32((uint32_t)(EBP));
  /* 1231dad1 mov ebp, esp */
  EBP = (ESP);
  /* 1231dad3 push ecx */
  push32((uint32_t)(ECX));
  /* 1231dad4 call 0x1231db80 */
  push32(0x1231dad9u); f_1231db80();
  /* 1231dad9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231dadc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1231dade mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1231dae5 jmp 0x1231daf0 */
  goto L_1231daf0;
L_1231dae7:;
  /* 1231dae7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231daea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231daed mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1231daf0:;
  /* 1231daf0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231daf4 jae 0x1231db1a */
  if (!C.cf) goto L_1231db1a;
  /* 1231daf6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231daf9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231dafc cmp ecx, dword ptr [eax*8 + 0x12340260] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12340260))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231db03 jne 0x1231db18 */
  if (!C.zf) goto L_1231db18;
  /* 1231db05 call 0x1231db70 */
  push32(0x1231db0au); f_1231db70();
  /* 1231db0a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231db0d mov ecx, dword ptr [edx*8 + 0x12340264] */
  ECX = (r32((uint32_t)(EDX*8 + 0x12340264)));
  /* 1231db14 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1231db16 jmp 0x1231db5d */
  goto L_1231db5d;
L_1231db18:;
  /* 1231db18 jmp 0x1231dae7 */
  goto L_1231dae7;
L_1231db1a:;
  /* 1231db1a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231db1e jb 0x1231db33 */
  if (C.cf) goto L_1231db33;
  /* 1231db20 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231db24 ja 0x1231db33 */
  if ((!C.cf&&!C.zf)) goto L_1231db33;
  /* 1231db26 call 0x1231db70 */
  push32(0x1231db2bu); f_1231db70();
  /* 1231db2b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1231db31 jmp 0x1231db5d */
  goto L_1231db5d;
L_1231db33:;
  /* 1231db33 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231db3a jb 0x1231db52 */
  if (C.cf) goto L_1231db52;
  /* 1231db3c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231db43 ja 0x1231db52 */
  if ((!C.cf&&!C.zf)) goto L_1231db52;
  /* 1231db45 call 0x1231db70 */
  push32(0x1231db4au); f_1231db70();
  /* 1231db4a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1231db50 jmp 0x1231db5d */
  goto L_1231db5d;
L_1231db52:;
  /* 1231db52 call 0x1231db70 */
  push32(0x1231db57u); f_1231db70();
  /* 1231db57 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1231db5d:;
  /* 1231db5d mov esp, ebp */
  ESP = (EBP);
  /* 1231db5f pop ebp */
  EBP = (pop32());
  /* 1231db60 ret  */
  ESPCHK(0x1231dad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db70 @ 0x1231db70 (13 bytes, 6 insns) */
void f_1231db70(void) {
  FTRACE(0x1231db70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231db70 push ebp */
  push32((uint32_t)(EBP));
  /* 1231db71 mov ebp, esp */
  EBP = (ESP);
  /* 1231db73 call 0x12316040 */
  push32(0x1231db78u); f_12316040();
  /* 1231db78 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231db7b pop ebp */
  EBP = (pop32());
  /* 1231db7c ret  */
  ESPCHK(0x1231db70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db80 @ 0x1231db80 (13 bytes, 6 insns) */
void f_1231db80(void) {
  FTRACE(0x1231db80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231db80 push ebp */
  push32((uint32_t)(EBP));
  /* 1231db81 mov ebp, esp */
  EBP = (ESP);
  /* 1231db83 call 0x12316040 */
  push32(0x1231db88u); f_12316040();
  /* 1231db88 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231db8b pop ebp */
  EBP = (pop32());
  /* 1231db8c ret  */
  ESPCHK(0x1231db80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db90 @ 0x1231db90 (482 bytes, 138 insns) */
void f_1231db90(void) {
  FTRACE(0x1231db90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231db90 push ebp */
  push32((uint32_t)(EBP));
  /* 1231db91 mov ebp, esp */
  EBP = (ESP);
  /* 1231db93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231db96 push esi */
  push32((uint32_t)(ESI));
  /* 1231db97 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1231db9e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1231dba0 call 0x1231a9b0 */
  push32(0x1231dba5u); f_1231a9b0();
  /* 1231dba5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231dba8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1231dbaf jmp 0x1231dbba */
  goto L_1231dbba;
L_1231dbb1:;
  /* 1231dbb1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231dbb4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231dbb7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1231dbba:;
  /* 1231dbba cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231dbbe jge 0x1231dd60 */
  if ((C.sf==C.of)) goto L_1231dd60;
  /* 1231dbc4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231dbc7 cmp dword ptr [ecx*4 + 0x12343100], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12343100))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231dbcf je 0x1231dcc6 */
  if (C.zf) goto L_1231dcc6;
  /* 1231dbd5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231dbd8 mov eax, dword ptr [edx*4 + 0x12343100] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12343100)));
  /* 1231dbdf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1231dbe2 jmp 0x1231dbed */
  goto L_1231dbed;
L_1231dbe4:;
  /* 1231dbe4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231dbe7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231dbea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1231dbed:;
  /* 1231dbed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231dbf0 mov eax, dword ptr [edx*4 + 0x12343100] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12343100)));
  /* 1231dbf7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231dbfc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231dbff jae 0x1231dcb6 */
  if (!C.cf) goto L_1231dcb6;
  /* 1231dc05 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231dc08 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1231dc0c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1231dc0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1231dc11 jne 0x1231dcb1 */
  if (!C.zf) goto L_1231dcb1;
  /* 1231dc17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231dc1a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231dc1e jne 0x1231dc59 */
  if (!C.zf) goto L_1231dc59;
  /* 1231dc20 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1231dc22 call 0x1231a9b0 */
  push32(0x1231dc27u); f_1231a9b0();
  /* 1231dc27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231dc2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231dc2d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231dc31 jne 0x1231dc4f */
  if (!C.zf) goto L_1231dc4f;
  /* 1231dc33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231dc36 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231dc39 push edx */
  push32((uint32_t)(EDX));
  /* 1231dc3a call dword ptr [0x123442a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442a8))), 0x1231dc40u);
  /* 1231dc40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231dc43 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1231dc46 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231dc49 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231dc4c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1231dc4f:;
  /* 1231dc4f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1231dc51 call 0x1231aa50 */
  push32(0x1231dc56u); f_1231aa50();
  /* 1231dc56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1231dc59:;
  /* 1231dc59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231dc5c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231dc5f push eax */
  push32((uint32_t)(EAX));
  /* 1231dc60 call dword ptr [0x123442a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442a0))), 0x1231dc66u);
  /* 1231dc66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231dc69 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1231dc6d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1231dc70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1231dc72 je 0x1231dc86 */
  if (C.zf) goto L_1231dc86;
  /* 1231dc74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231dc77 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231dc7a push eax */
  push32((uint32_t)(EAX));
  /* 1231dc7b call dword ptr [0x123442a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442a4))), 0x1231dc81u);
  /* 1231dc81 jmp 0x1231dbe4 */
  goto L_1231dbe4;
L_1231dc86:;
  /* 1231dc86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231dc89 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1231dc8f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231dc92 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1231dc95 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231dc98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231dc9b sub eax, dword ptr [edx*4 + 0x12343100] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x12343100))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231dca2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1231dca3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1231dca8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1231dcaa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231dcac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1231dcaf jmp 0x1231dcb6 */
  goto L_1231dcb6;
L_1231dcb1:;
  /* 1231dcb1 jmp 0x1231dbe4 */
  goto L_1231dbe4;
L_1231dcb6:;
  /* 1231dcb6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231dcba je 0x1231dcc1 */
  if (C.zf) goto L_1231dcc1;
  /* 1231dcbc jmp 0x1231dd60 */
  goto L_1231dd60;
L_1231dcc1:;
  /* 1231dcc1 jmp 0x1231dd5b */
  goto L_1231dd5b;
L_1231dcc6:;
  /* 1231dcc6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1231dcc8 push 0x1233d8e4 */
  push32((uint32_t)(0x1233d8e4u));
  /* 1231dccd push 2 */
  push32((uint32_t)(0x2u));
  /* 1231dccf push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1231dcd4 call 0x12316600 */
  push32(0x1231dcd9u); f_12316600();
  /* 1231dcd9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231dcdc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1231dcdf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231dce3 je 0x1231dd59 */
  if (C.zf) goto L_1231dd59;
  /* 1231dce5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231dce8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231dceb mov dword ptr [eax*4 + 0x12343100], ecx */
  w32((uint32_t)(EAX*4 + 0x12343100), (ECX));
  /* 1231dcf2 mov edx, dword ptr [0x1234323c] */
  EDX = (r32((uint32_t)(0x1234323c)));
  /* 1231dcf8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231dcfb mov dword ptr [0x1234323c], edx */
  w32((uint32_t)(0x1234323c), (EDX));
  /* 1231dd01 jmp 0x1231dd0c */
  goto L_1231dd0c;
L_1231dd03:;
  /* 1231dd03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231dd06 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231dd09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1231dd0c:;
  /* 1231dd0c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231dd0f mov edx, dword ptr [ecx*4 + 0x12343100] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12343100)));
  /* 1231dd16 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231dd1c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231dd1f jae 0x1231dd44 */
  if (!C.cf) goto L_1231dd44;
  /* 1231dd21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231dd24 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1231dd28 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231dd2b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1231dd31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231dd34 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1231dd38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231dd3b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1231dd42 jmp 0x1231dd03 */
  goto L_1231dd03;
L_1231dd44:;
  /* 1231dd44 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231dd47 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1231dd4a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1231dd4d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231dd50 push edx */
  push32((uint32_t)(EDX));
  /* 1231dd51 call 0x1231e0a0 */
  push32(0x1231dd56u); f_1231e0a0();
  /* 1231dd56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1231dd59:;
  /* 1231dd59 jmp 0x1231dd60 */
  goto L_1231dd60;
L_1231dd5b:;
  /* 1231dd5b jmp 0x1231dbb1 */
  goto L_1231dbb1;
L_1231dd60:;
  /* 1231dd60 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1231dd62 call 0x1231aa50 */
  push32(0x1231dd67u); f_1231aa50();
  /* 1231dd67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231dd6a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231dd6d pop esi */
  ESI = (pop32());
  /* 1231dd6e mov esp, ebp */
  ESP = (EBP);
  /* 1231dd70 pop ebp */
  EBP = (pop32());
  /* 1231dd71 ret  */
  ESPCHK(0x1231db90u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1231dd80 (183 bytes, 57 insns) */
void f_1231dd80(void) {
  FTRACE(0x1231dd80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231dd80 push ebp */
  push32((uint32_t)(EBP));
  /* 1231dd81 mov ebp, esp */
  EBP = (ESP);
  /* 1231dd83 push ecx */
  push32((uint32_t)(ECX));
  /* 1231dd84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231dd87 cmp eax, dword ptr [0x1234323c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1234323c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231dd8d jae 0x1231de1a */
  if (!C.cf) goto L_1231de1a;
  /* 1231dd93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231dd96 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1231dd99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231dd9c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1231dd9f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231dda2 mov eax, dword ptr [ecx*4 + 0x12343100] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12343100)));
  /* 1231dda9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ddad jne 0x1231de1a */
  if (!C.zf) goto L_1231de1a;
  /* 1231ddaf cmp dword ptr [0x1234172c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1234172c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ddb6 jne 0x1231ddfa */
  if (!C.zf) goto L_1231ddfa;
  /* 1231ddb8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231ddbb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1231ddbe cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ddc2 je 0x1231ddd2 */
  if (C.zf) goto L_1231ddd2;
  /* 1231ddc4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ddc8 je 0x1231dde0 */
  if (C.zf) goto L_1231dde0;
  /* 1231ddca cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ddce je 0x1231ddee */
  if (C.zf) goto L_1231ddee;
  /* 1231ddd0 jmp 0x1231ddfa */
  goto L_1231ddfa;
L_1231ddd2:;
  /* 1231ddd2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231ddd5 push edx */
  push32((uint32_t)(EDX));
  /* 1231ddd6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1231ddd8 call dword ptr [0x123442cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442cc))), 0x1231dddeu);
  /* 1231ddde jmp 0x1231ddfa */
  goto L_1231ddfa;
L_1231dde0:;
  /* 1231dde0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231dde3 push eax */
  push32((uint32_t)(EAX));
  /* 1231dde4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1231dde6 call dword ptr [0x123442cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442cc))), 0x1231ddecu);
  /* 1231ddec jmp 0x1231ddfa */
  goto L_1231ddfa;
L_1231ddee:;
  /* 1231ddee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231ddf1 push ecx */
  push32((uint32_t)(ECX));
  /* 1231ddf2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1231ddf4 call dword ptr [0x123442cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442cc))), 0x1231ddfau);
L_1231ddfa:;
  /* 1231ddfa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231ddfd sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1231de00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231de03 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1231de06 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231de09 mov ecx, dword ptr [edx*4 + 0x12343100] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12343100)));
  /* 1231de10 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231de13 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1231de16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231de18 jmp 0x1231de33 */
  goto L_1231de33;
L_1231de1a:;
  /* 1231de1a call 0x1231db70 */
  push32(0x1231de1fu); f_1231db70();
  /* 1231de1f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1231de25 call 0x1231db80 */
  push32(0x1231de2au); f_1231db80();
  /* 1231de2a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1231de30 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1231de33:;
  /* 1231de33 mov esp, ebp */
  ESP = (EBP);
  /* 1231de35 pop ebp */
  EBP = (pop32());
  /* 1231de36 ret  */
  ESPCHK(0x1231dd80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de40 @ 0x1231de40 (216 bytes, 63 insns) */
void f_1231de40(void) {
  FTRACE(0x1231de40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231de40 push ebp */
  push32((uint32_t)(EBP));
  /* 1231de41 mov ebp, esp */
  EBP = (ESP);
  /* 1231de43 push ecx */
  push32((uint32_t)(ECX));
  /* 1231de44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231de47 cmp eax, dword ptr [0x1234323c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1234323c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231de4d jae 0x1231defb */
  if (!C.cf) goto L_1231defb;
  /* 1231de53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231de56 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1231de59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231de5c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1231de5f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231de62 mov eax, dword ptr [ecx*4 + 0x12343100] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12343100)));
  /* 1231de69 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1231de6e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1231de71 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1231de73 je 0x1231defb */
  if (C.zf) goto L_1231defb;
  /* 1231de79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231de7c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1231de7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231de82 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1231de85 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231de88 mov ecx, dword ptr [edx*4 + 0x12343100] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12343100)));
  /* 1231de8f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231de93 je 0x1231defb */
  if (C.zf) goto L_1231defb;
  /* 1231de95 cmp dword ptr [0x1234172c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1234172c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231de9c jne 0x1231deda */
  if (!C.zf) goto L_1231deda;
  /* 1231de9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231dea1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1231dea4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231dea8 je 0x1231deb8 */
  if (C.zf) goto L_1231deb8;
  /* 1231deaa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231deae je 0x1231dec4 */
  if (C.zf) goto L_1231dec4;
  /* 1231deb0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231deb4 je 0x1231ded0 */
  if (C.zf) goto L_1231ded0;
  /* 1231deb6 jmp 0x1231deda */
  goto L_1231deda;
L_1231deb8:;
  /* 1231deb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231deba push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1231debc call dword ptr [0x123442cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442cc))), 0x1231dec2u);
  /* 1231dec2 jmp 0x1231deda */
  goto L_1231deda;
L_1231dec4:;
  /* 1231dec4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231dec6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1231dec8 call dword ptr [0x123442cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442cc))), 0x1231deceu);
  /* 1231dece jmp 0x1231deda */
  goto L_1231deda;
L_1231ded0:;
  /* 1231ded0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231ded2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1231ded4 call dword ptr [0x123442cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442cc))), 0x1231dedau);
L_1231deda:;
  /* 1231deda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231dedd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1231dee0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231dee3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1231dee6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231dee9 mov edx, dword ptr [eax*4 + 0x12343100] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12343100)));
  /* 1231def0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1231def7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231def9 jmp 0x1231df14 */
  goto L_1231df14;
L_1231defb:;
  /* 1231defb call 0x1231db70 */
  push32(0x1231df00u); f_1231db70();
  /* 1231df00 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1231df06 call 0x1231db80 */
  push32(0x1231df0bu); f_1231db80();
  /* 1231df0b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1231df11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1231df14:;
  /* 1231df14 mov esp, ebp */
  ESP = (EBP);
  /* 1231df16 pop ebp */
  EBP = (pop32());
  /* 1231df17 ret  */
  ESPCHK(0x1231de40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df20 @ 0x1231df20 (102 bytes, 30 insns) */
void f_1231df20(void) {
  FTRACE(0x1231df20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231df20 push ebp */
  push32((uint32_t)(EBP));
  /* 1231df21 mov ebp, esp */
  EBP = (ESP);
  /* 1231df23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231df26 cmp eax, dword ptr [0x1234323c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1234323c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231df2c jae 0x1231df6b */
  if (!C.cf) goto L_1231df6b;
  /* 1231df2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231df31 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1231df34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231df37 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1231df3a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231df3d mov eax, dword ptr [ecx*4 + 0x12343100] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12343100)));
  /* 1231df44 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1231df49 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1231df4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1231df4e je 0x1231df6b */
  if (C.zf) goto L_1231df6b;
  /* 1231df50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231df53 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1231df56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231df59 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1231df5c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231df5f mov ecx, dword ptr [edx*4 + 0x12343100] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12343100)));
  /* 1231df66 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1231df69 jmp 0x1231df84 */
  goto L_1231df84;
L_1231df6b:;
  /* 1231df6b call 0x1231db70 */
  push32(0x1231df70u); f_1231db70();
  /* 1231df70 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1231df76 call 0x1231db80 */
  push32(0x1231df7bu); f_1231db80();
  /* 1231df7b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1231df81 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1231df84:;
  /* 1231df84 pop ebp */
  EBP = (pop32());
  /* 1231df85 ret  */
  ESPCHK(0x1231df20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df90 @ 0x1231df90 (260 bytes, 83 insns) */
void f_1231df90(void) {
  FTRACE(0x1231df90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231df90 push ebp */
  push32((uint32_t)(EBP));
  /* 1231df91 mov ebp, esp */
  EBP = (ESP);
  /* 1231df93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231df96 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1231df9a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231df9d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1231dfa0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231dfa2 je 0x1231dfad */
  if (C.zf) goto L_1231dfad;
  /* 1231dfa4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1231dfa7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1231dfaa mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1231dfad:;
  /* 1231dfad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231dfb0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1231dfb6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1231dfb8 je 0x1231dfc2 */
  if (C.zf) goto L_1231dfc2;
  /* 1231dfba mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1231dfbd or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1231dfbf mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1231dfc2:;
  /* 1231dfc2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231dfc5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1231dfcb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1231dfcd je 0x1231dfd8 */
  if (C.zf) goto L_1231dfd8;
  /* 1231dfcf mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1231dfd2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1231dfd5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1231dfd8:;
  /* 1231dfd8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231dfdb push eax */
  push32((uint32_t)(EAX));
  /* 1231dfdc call dword ptr [0x1234425c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1234425c))), 0x1231dfe2u);
  /* 1231dfe2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1231dfe5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231dfe9 jne 0x1231e002 */
  if (!C.zf) goto L_1231e002;
  /* 1231dfeb call dword ptr [0x12344250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344250))), 0x1231dff1u);
  /* 1231dff1 push eax */
  push32((uint32_t)(EAX));
  /* 1231dff2 call 0x1231dad0 */
  push32(0x1231dff7u); f_1231dad0();
  /* 1231dff7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231dffa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1231dffd jmp 0x1231e090 */
  goto L_1231e090;
L_1231e002:;
  /* 1231e002 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e006 jne 0x1231e013 */
  if (!C.zf) goto L_1231e013;
  /* 1231e008 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1231e00b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1231e00e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1231e011 jmp 0x1231e022 */
  goto L_1231e022;
L_1231e013:;
  /* 1231e013 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e017 jne 0x1231e022 */
  if (!C.zf) goto L_1231e022;
  /* 1231e019 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1231e01c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1231e01f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1231e022:;
  /* 1231e022 call 0x1231db90 */
  push32(0x1231e027u); f_1231db90();
  /* 1231e027 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1231e02a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e02e jne 0x1231e04b */
  if (!C.zf) goto L_1231e04b;
  /* 1231e030 call 0x1231db70 */
  push32(0x1231e035u); f_1231db70();
  /* 1231e035 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1231e03b call 0x1231db80 */
  push32(0x1231e040u); f_1231db80();
  /* 1231e040 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1231e046 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1231e049 jmp 0x1231e090 */
  goto L_1231e090;
L_1231e04b:;
  /* 1231e04b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231e04e push eax */
  push32((uint32_t)(EAX));
  /* 1231e04f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231e052 push ecx */
  push32((uint32_t)(ECX));
  /* 1231e053 call 0x1231dd80 */
  push32(0x1231e058u); f_1231dd80();
  /* 1231e058 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e05b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1231e05e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1231e061 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1231e064 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231e067 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1231e06a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231e06d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1231e070 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231e073 mov edx, dword ptr [eax*4 + 0x12343100] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12343100)));
  /* 1231e07a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1231e07d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1231e081 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231e084 push ecx */
  push32((uint32_t)(ECX));
  /* 1231e085 call 0x1231e130 */
  push32(0x1231e08au); f_1231e130();
  /* 1231e08a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e08d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1231e090:;
  /* 1231e090 mov esp, ebp */
  ESP = (EBP);
  /* 1231e092 pop ebp */
  EBP = (pop32());
  /* 1231e093 ret  */
  ESPCHK(0x1231df90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0a0 @ 0x1231e0a0 (134 bytes, 44 insns) */
void f_1231e0a0(void) {
  FTRACE(0x1231e0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231e0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1231e0a1 mov ebp, esp */
  EBP = (ESP);
  /* 1231e0a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1231e0a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231e0a7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1231e0aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231e0ad and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1231e0b0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231e0b3 mov edx, dword ptr [eax*4 + 0x12343100] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12343100)));
  /* 1231e0ba add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e0bc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1231e0bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231e0c2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e0c6 jne 0x1231e101 */
  if (!C.zf) goto L_1231e101;
  /* 1231e0c8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1231e0ca call 0x1231a9b0 */
  push32(0x1231e0cfu); f_1231a9b0();
  /* 1231e0cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e0d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231e0d5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e0d9 jne 0x1231e0f7 */
  if (!C.zf) goto L_1231e0f7;
  /* 1231e0db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231e0de add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e0e1 push edx */
  push32((uint32_t)(EDX));
  /* 1231e0e2 call dword ptr [0x123442a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442a8))), 0x1231e0e8u);
  /* 1231e0e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231e0eb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1231e0ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e0f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231e0f4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1231e0f7:;
  /* 1231e0f7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1231e0f9 call 0x1231aa50 */
  push32(0x1231e0feu); f_1231aa50();
  /* 1231e0fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1231e101:;
  /* 1231e101 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231e104 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1231e107 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231e10a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1231e10d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231e110 mov edx, dword ptr [eax*4 + 0x12343100] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12343100)));
  /* 1231e117 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1231e11b push eax */
  push32((uint32_t)(EAX));
  /* 1231e11c call dword ptr [0x123442a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442a0))), 0x1231e122u);
  /* 1231e122 mov esp, ebp */
  ESP = (EBP);
  /* 1231e124 pop ebp */
  EBP = (pop32());
  /* 1231e125 ret  */
  ESPCHK(0x1231e0a0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1231e130 (38 bytes, 13 insns) */
void f_1231e130(void) {
  FTRACE(0x1231e130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231e130 push ebp */
  push32((uint32_t)(EBP));
  /* 1231e131 mov ebp, esp */
  EBP = (ESP);
  /* 1231e133 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231e136 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1231e139 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231e13c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1231e13f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231e142 mov edx, dword ptr [eax*4 + 0x12343100] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12343100)));
  /* 1231e149 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1231e14d push eax */
  push32((uint32_t)(EAX));
  /* 1231e14e call dword ptr [0x123442a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442a4))), 0x1231e154u);
  /* 1231e154 pop ebp */
  EBP = (pop32());
  /* 1231e155 ret  */
  ESPCHK(0x1231e130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e160 @ 0x1231e160 (218 bytes, 63 insns) */
void f_1231e160(void) {
  FTRACE(0x1231e160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231e160 push ebp */
  push32((uint32_t)(EBP));
  /* 1231e161 mov ebp, esp */
  EBP = (ESP);
  /* 1231e163 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231e166 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1231e16d push 2 */
  push32((uint32_t)(0x2u));
  /* 1231e16f call 0x1231a9b0 */
  push32(0x1231e174u); f_1231a9b0();
  /* 1231e174 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e177 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1231e17e jmp 0x1231e189 */
  goto L_1231e189;
L_1231e180:;
  /* 1231e180 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231e183 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e186 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1231e189:;
  /* 1231e189 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231e18c cmp ecx, dword ptr [0x123430e0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x123430e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e192 jge 0x1231e229 */
  if ((C.sf==C.of)) goto L_1231e229;
  /* 1231e198 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231e19b mov eax, dword ptr [0x12341d8c] */
  EAX = (r32((uint32_t)(0x12341d8c)));
  /* 1231e1a0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e1a4 je 0x1231e224 */
  if (C.zf) goto L_1231e224;
  /* 1231e1a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231e1a9 mov edx, dword ptr [0x12341d8c] */
  EDX = (r32((uint32_t)(0x12341d8c)));
  /* 1231e1af mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1231e1b2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1231e1b5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1231e1bb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1231e1bd je 0x1231e1e1 */
  if (C.zf) goto L_1231e1e1;
  /* 1231e1bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231e1c2 mov eax, dword ptr [0x12341d8c] */
  EAX = (r32((uint32_t)(0x12341d8c)));
  /* 1231e1c7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1231e1ca push ecx */
  push32((uint32_t)(ECX));
  /* 1231e1cb call 0x1231f7b0 */
  push32(0x1231e1d0u); f_1231f7b0();
  /* 1231e1d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e1d3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e1d6 je 0x1231e1e1 */
  if (C.zf) goto L_1231e1e1;
  /* 1231e1d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231e1db add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e1de mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1231e1e1:;
  /* 1231e1e1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e1e5 jl 0x1231e224 */
  if ((C.sf!=C.of)) goto L_1231e224;
  /* 1231e1e7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231e1ea mov ecx, dword ptr [0x12341d8c] */
  ECX = (r32((uint32_t)(0x12341d8c)));
  /* 1231e1f0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1231e1f3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e1f6 push edx */
  push32((uint32_t)(EDX));
  /* 1231e1f7 call dword ptr [0x12344264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12344264))), 0x1231e1fdu);
  /* 1231e1fd push 2 */
  push32((uint32_t)(0x2u));
  /* 1231e1ff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231e202 mov ecx, dword ptr [0x12341d8c] */
  ECX = (r32((uint32_t)(0x12341d8c)));
  /* 1231e208 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1231e20b push edx */
  push32((uint32_t)(EDX));
  /* 1231e20c call 0x12317090 */
  push32(0x1231e211u); f_12317090();
  /* 1231e211 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e214 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231e217 mov ecx, dword ptr [0x12341d8c] */
  ECX = (r32((uint32_t)(0x12341d8c)));
  /* 1231e21d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1231e224:;
  /* 1231e224 jmp 0x1231e180 */
  goto L_1231e180;
L_1231e229:;
  /* 1231e229 push 2 */
  push32((uint32_t)(0x2u));
  /* 1231e22b call 0x1231aa50 */
  push32(0x1231e230u); f_1231aa50();
  /* 1231e230 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e233 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231e236 mov esp, ebp */
  ESP = (EBP);
  /* 1231e238 pop ebp */
  EBP = (pop32());
  /* 1231e239 ret  */
  ESPCHK(0x1231e160u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e240 @ 0x1231e240 (68 bytes, 26 insns) */
void f_1231e240(void) {
  FTRACE(0x1231e240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231e240 push ebp */
  push32((uint32_t)(EBP));
  /* 1231e241 mov ebp, esp */
  EBP = (ESP);
  /* 1231e243 push ecx */
  push32((uint32_t)(ECX));
  /* 1231e244 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e248 jne 0x1231e256 */
  if (!C.zf) goto L_1231e256;
  /* 1231e24a push 0 */
  push32((uint32_t)(0x0u));
  /* 1231e24c call 0x1231e3b0 */
  push32(0x1231e251u); f_1231e3b0();
  /* 1231e251 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e254 jmp 0x1231e280 */
  goto L_1231e280;
L_1231e256:;
  /* 1231e256 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231e259 push eax */
  push32((uint32_t)(EAX));
  /* 1231e25a call 0x1231a5e0 */
  push32(0x1231e25fu); f_1231a5e0();
  /* 1231e25f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e262 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231e265 push ecx */
  push32((uint32_t)(ECX));
  /* 1231e266 call 0x1231e290 */
  push32(0x1231e26bu); f_1231e290();
  /* 1231e26b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e26e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1231e271 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231e274 push edx */
  push32((uint32_t)(EDX));
  /* 1231e275 call 0x1231a650 */
  push32(0x1231e27au); f_1231a650();
  /* 1231e27a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e27d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1231e280:;
  /* 1231e280 mov esp, ebp */
  ESP = (EBP);
  /* 1231e282 pop ebp */
  EBP = (pop32());
  /* 1231e283 ret  */
  ESPCHK(0x1231e240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e290 @ 0x1231e290 (65 bytes, 26 insns) */
void f_1231e290(void) {
  FTRACE(0x1231e290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231e290 push ebp */
  push32((uint32_t)(EBP));
  /* 1231e291 mov ebp, esp */
  EBP = (ESP);
  /* 1231e293 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231e296 push eax */
  push32((uint32_t)(EAX));
  /* 1231e297 call 0x1231e2e0 */
  push32(0x1231e29cu); f_1231e2e0();
  /* 1231e29c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e29f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231e2a1 je 0x1231e2a8 */
  if (C.zf) goto L_1231e2a8;
  /* 1231e2a3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1231e2a6 jmp 0x1231e2cf */
  goto L_1231e2cf;
L_1231e2a8:;
  /* 1231e2a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231e2ab mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1231e2ae and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1231e2b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1231e2b6 je 0x1231e2cd */
  if (C.zf) goto L_1231e2cd;
  /* 1231e2b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231e2bb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1231e2be push ecx */
  push32((uint32_t)(ECX));
  /* 1231e2bf call 0x1231f900 */
  push32(0x1231e2c4u); f_1231f900();
  /* 1231e2c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e2c7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1231e2c9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231e2cb jmp 0x1231e2cf */
  goto L_1231e2cf;
L_1231e2cd:;
  /* 1231e2cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1231e2cf:;
  /* 1231e2cf pop ebp */
  EBP = (pop32());
  /* 1231e2d0 ret  */
  ESPCHK(0x1231e290u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2e0 @ 0x1231e2e0 (183 bytes, 62 insns) */
void f_1231e2e0(void) {
  FTRACE(0x1231e2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231e2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1231e2e1 mov ebp, esp */
  EBP = (ESP);
  /* 1231e2e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231e2e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1231e2ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231e2f0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1231e2f3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231e2f6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1231e2f9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1231e2fc cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e2ff jne 0x1231e37b */
  if (!C.zf) goto L_1231e37b;
  /* 1231e301 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231e304 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1231e307 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1231e30d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1231e30f je 0x1231e37b */
  if (C.zf) goto L_1231e37b;
  /* 1231e311 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231e314 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231e317 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1231e319 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231e31c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231e31f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e323 jle 0x1231e37b */
  if ((C.zf||C.sf!=C.of)) goto L_1231e37b;
  /* 1231e325 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231e328 push edx */
  push32((uint32_t)(EDX));
  /* 1231e329 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231e32c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1231e32f push ecx */
  push32((uint32_t)(ECX));
  /* 1231e330 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231e333 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1231e336 push eax */
  push32((uint32_t)(EAX));
  /* 1231e337 call 0x1231a070 */
  push32(0x1231e33cu); f_1231a070();
  /* 1231e33c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e33f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e342 jne 0x1231e365 */
  if (!C.zf) goto L_1231e365;
  /* 1231e344 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231e347 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1231e34a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1231e350 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1231e352 je 0x1231e363 */
  if (C.zf) goto L_1231e363;
  /* 1231e354 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231e357 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1231e35a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1231e35d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231e360 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1231e363:;
  /* 1231e363 jmp 0x1231e37b */
  goto L_1231e37b;
L_1231e365:;
  /* 1231e365 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231e368 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1231e36b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1231e36e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231e371 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1231e374 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1231e37b:;
  /* 1231e37b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231e37e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231e381 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1231e384 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1231e386 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231e389 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1231e390 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231e393 mov esp, ebp */
  ESP = (EBP);
  /* 1231e395 pop ebp */
  EBP = (pop32());
  /* 1231e396 ret  */
  ESPCHK(0x1231e2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e3a0 @ 0x1231e3a0 (15 bytes, 7 insns) */
void f_1231e3a0(void) {
  FTRACE(0x1231e3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231e3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1231e3a1 mov ebp, esp */
  EBP = (ESP);
  /* 1231e3a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1231e3a5 call 0x1231e3b0 */
  push32(0x1231e3aau); f_1231e3b0();
  /* 1231e3aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e3ad pop ebp */
  EBP = (pop32());
  /* 1231e3ae ret  */
  ESPCHK(0x1231e3a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e3b0 @ 0x1231e3b0 (319 bytes, 94 insns) */
void f_1231e3b0(void) {
  FTRACE(0x1231e3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231e3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1231e3b1 mov ebp, esp */
  EBP = (ESP);
  /* 1231e3b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231e3b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1231e3bd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1231e3c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1231e3c6 call 0x1231a9b0 */
  push32(0x1231e3cbu); f_1231a9b0();
  /* 1231e3cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e3ce mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1231e3d5 jmp 0x1231e3e0 */
  goto L_1231e3e0;
L_1231e3d7:;
  /* 1231e3d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231e3da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e3dd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1231e3e0:;
  /* 1231e3e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231e3e3 cmp ecx, dword ptr [0x123430e0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x123430e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e3e9 jge 0x1231e4d3 */
  if ((C.sf==C.of)) goto L_1231e4d3;
  /* 1231e3ef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231e3f2 mov eax, dword ptr [0x12341d8c] */
  EAX = (r32((uint32_t)(0x12341d8c)));
  /* 1231e3f7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e3fb je 0x1231e4ce */
  if (C.zf) goto L_1231e4ce;
  /* 1231e401 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231e404 mov edx, dword ptr [0x12341d8c] */
  EDX = (r32((uint32_t)(0x12341d8c)));
  /* 1231e40a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1231e40d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1231e410 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1231e416 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1231e418 je 0x1231e4ce */
  if (C.zf) goto L_1231e4ce;
  /* 1231e41e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231e421 mov eax, dword ptr [0x12341d8c] */
  EAX = (r32((uint32_t)(0x12341d8c)));
  /* 1231e426 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1231e429 push ecx */
  push32((uint32_t)(ECX));
  /* 1231e42a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231e42d push edx */
  push32((uint32_t)(EDX));
  /* 1231e42e call 0x1231a620 */
  push32(0x1231e433u); f_1231a620();
  /* 1231e433 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e436 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231e439 mov ecx, dword ptr [0x12341d8c] */
  ECX = (r32((uint32_t)(0x12341d8c)));
  /* 1231e43f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1231e442 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1231e445 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1231e44a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231e44c je 0x1231e4b5 */
  if (C.zf) goto L_1231e4b5;
  /* 1231e44e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e452 jne 0x1231e479 */
  if (!C.zf) goto L_1231e479;
  /* 1231e454 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231e457 mov edx, dword ptr [0x12341d8c] */
  EDX = (r32((uint32_t)(0x12341d8c)));
  /* 1231e45d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1231e460 push eax */
  push32((uint32_t)(EAX));
  /* 1231e461 call 0x1231e290 */
  push32(0x1231e466u); f_1231e290();
  /* 1231e466 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e469 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e46c je 0x1231e477 */
  if (C.zf) goto L_1231e477;
  /* 1231e46e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231e471 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e474 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1231e477:;
  /* 1231e477 jmp 0x1231e4b5 */
  goto L_1231e4b5;
L_1231e479:;
  /* 1231e479 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e47d jne 0x1231e4b5 */
  if (!C.zf) goto L_1231e4b5;
  /* 1231e47f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231e482 mov eax, dword ptr [0x12341d8c] */
  EAX = (r32((uint32_t)(0x12341d8c)));
  /* 1231e487 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1231e48a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1231e48d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1231e490 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1231e492 je 0x1231e4b5 */
  if (C.zf) goto L_1231e4b5;
  /* 1231e494 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231e497 mov ecx, dword ptr [0x12341d8c] */
  ECX = (r32((uint32_t)(0x12341d8c)));
  /* 1231e49d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1231e4a0 push edx */
  push32((uint32_t)(EDX));
  /* 1231e4a1 call 0x1231e290 */
  push32(0x1231e4a6u); f_1231e290();
  /* 1231e4a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e4a9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e4ac jne 0x1231e4b5 */
  if (!C.zf) goto L_1231e4b5;
  /* 1231e4ae mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1231e4b5:;
  /* 1231e4b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231e4b8 mov ecx, dword ptr [0x12341d8c] */
  ECX = (r32((uint32_t)(0x12341d8c)));
  /* 1231e4be mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1231e4c1 push edx */
  push32((uint32_t)(EDX));
  /* 1231e4c2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231e4c5 push eax */
  push32((uint32_t)(EAX));
  /* 1231e4c6 call 0x1231a690 */
  push32(0x1231e4cbu); f_1231a690();
  /* 1231e4cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1231e4ce:;
  /* 1231e4ce jmp 0x1231e3d7 */
  goto L_1231e3d7;
L_1231e4d3:;
  /* 1231e4d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1231e4d5 call 0x1231aa50 */
  push32(0x1231e4dau); f_1231aa50();
  /* 1231e4da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e4dd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e4e1 jne 0x1231e4e8 */
  if (!C.zf) goto L_1231e4e8;
  /* 1231e4e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231e4e6 jmp 0x1231e4eb */
  goto L_1231e4eb;
L_1231e4e8:;
  /* 1231e4e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1231e4eb:;
  /* 1231e4eb mov esp, ebp */
  ESP = (EBP);
  /* 1231e4ed pop ebp */
  EBP = (pop32());
  /* 1231e4ee ret  */
  ESPCHK(0x1231e3b0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1231e4f0 (15 bytes, 7 insns) */
void f_1231e4f0(void) {
  FTRACE(0x1231e4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231e4f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1231e4f1 mov ebp, esp */
  EBP = (ESP);
  /* 1231e4f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1231e4f5 call 0x12314450 */
  push32(0x1231e4fau); f_12314450();
  /* 1231e4fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e4fd pop ebp */
  EBP = (pop32());
  /* 1231e4fe ret  */
  ESPCHK(0x1231e4f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e500 @ 0x1231e500 (1007 bytes, 269 insns) */
void f_1231e500(void) {
  FTRACE(0x1231e500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231e500 push ebp */
  push32((uint32_t)(EBP));
  /* 1231e501 mov ebp, esp */
  EBP = (ESP);
  /* 1231e503 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231e509 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e50d jl 0x1231e515 */
  if ((C.sf!=C.of)) goto L_1231e515;
  /* 1231e50f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e513 jle 0x1231e51c */
  if ((C.zf||C.sf!=C.of)) goto L_1231e51c;
L_1231e515:;
  /* 1231e515 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231e517 jmp 0x1231e8eb */
  goto L_1231e8eb;
L_1231e51c:;
  /* 1231e51c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1231e51e call 0x1231a9b0 */
  push32(0x1231e523u); f_1231a9b0();
  /* 1231e523 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e526 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1231e52d mov eax, dword ptr [0x12341ab4] */
  EAX = (r32((uint32_t)(0x12341ab4)));
  /* 1231e532 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e535 mov dword ptr [0x12341ab4], eax */
  w32((uint32_t)(0x12341ab4), (EAX));
L_1231e53a:;
  /* 1231e53a cmp dword ptr [0x12341ac4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12341ac4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e541 je 0x1231e54d */
  if (C.zf) goto L_1231e54d;
  /* 1231e543 push 1 */
  push32((uint32_t)(0x1u));
  /* 1231e545 call dword ptr [0x123442d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123442d0))), 0x1231e54bu);
  /* 1231e54b jmp 0x1231e53a */
  goto L_1231e53a;
L_1231e54d:;
  /* 1231e54d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e551 je 0x1231e591 */
  if (C.zf) goto L_1231e591;
  /* 1231e553 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e557 je 0x1231e571 */
  if (C.zf) goto L_1231e571;
  /* 1231e559 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231e55c push ecx */
  push32((uint32_t)(ECX));
  /* 1231e55d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231e560 push edx */
  push32((uint32_t)(EDX));
  /* 1231e561 call 0x1231e8f0 */
  push32(0x1231e566u); f_1231e8f0();
  /* 1231e566 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e569 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1231e56f jmp 0x1231e583 */
  goto L_1231e583;
L_1231e571:;
  /* 1231e571 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231e574 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231e577 mov ecx, dword ptr [eax + 0x123404dc] */
  ECX = (r32((uint32_t)(EAX + 0x123404dc)));
  /* 1231e57d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1231e583:;
  /* 1231e583 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1231e589 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1231e58c jmp 0x1231e8cb */
  goto L_1231e8cb;
L_1231e591:;
  /* 1231e591 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1231e598 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1231e59f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e5a3 je 0x1231e8c3 */
  if (C.zf) goto L_1231e8c3;
  /* 1231e5a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231e5ac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1231e5af cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e5b2 jne 0x1231e7d4 */
  if (!C.zf) goto L_1231e7d4;
  /* 1231e5b8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231e5bb movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1231e5bf cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e5c2 jne 0x1231e7d4 */
  if (!C.zf) goto L_1231e7d4;
  /* 1231e5c8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231e5cb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1231e5cf cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e5d2 jne 0x1231e7d4 */
  if (!C.zf) goto L_1231e7d4;
  /* 1231e5d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231e5db mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1231e5e1:;
  /* 1231e5e1 push 0x1233d934 */
  push32((uint32_t)(0x1233d934u));
  /* 1231e5e6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1231e5ec push ecx */
  push32((uint32_t)(ECX));
  /* 1231e5ed call 0x12320fb0 */
  push32(0x1231e5f2u); f_12320fb0();
  /* 1231e5f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e5f5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1231e5fb cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e602 je 0x1231e62d */
  if (C.zf) goto L_1231e62d;
  /* 1231e604 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1231e60a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231e610 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1231e616 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e61d je 0x1231e62d */
  if (C.zf) goto L_1231e62d;
  /* 1231e61f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1231e625 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1231e628 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e62b jne 0x1231e653 */
  if (!C.zf) goto L_1231e653;
L_1231e62d:;
  /* 1231e62d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e631 je 0x1231e64c */
  if (C.zf) goto L_1231e64c;
  /* 1231e633 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1231e635 call 0x1231aa50 */
  push32(0x1231e63au); f_1231aa50();
  /* 1231e63a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e63d mov edx, dword ptr [0x12341ab4] */
  EDX = (r32((uint32_t)(0x12341ab4)));
  /* 1231e643 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231e646 mov dword ptr [0x12341ab4], edx */
  w32((uint32_t)(0x12341ab4), (EDX));
L_1231e64c:;
  /* 1231e64c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231e64e jmp 0x1231e8eb */
  goto L_1231e8eb;
L_1231e653:;
  /* 1231e653 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1231e65a jmp 0x1231e665 */
  goto L_1231e665;
L_1231e65c:;
  /* 1231e65c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231e65f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e662 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1231e665:;
  /* 1231e665 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e669 jg 0x1231e6b3 */
  if ((!C.zf&&C.sf==C.of)) goto L_1231e6b3;
  /* 1231e66b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1231e671 push ecx */
  push32((uint32_t)(ECX));
  /* 1231e672 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1231e678 push edx */
  push32((uint32_t)(EDX));
  /* 1231e679 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231e67c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231e67f mov ecx, dword ptr [eax + 0x123404d8] */
  ECX = (r32((uint32_t)(EAX + 0x123404d8)));
  /* 1231e685 push ecx */
  push32((uint32_t)(ECX));
  /* 1231e686 call 0x12320f70 */
  push32(0x1231e68bu); f_12320f70();
  /* 1231e68b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e68e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231e690 jne 0x1231e6b1 */
  if (!C.zf) goto L_1231e6b1;
  /* 1231e692 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231e695 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231e698 mov eax, dword ptr [edx + 0x123404d8] */
  EAX = (r32((uint32_t)(EDX + 0x123404d8)));
  /* 1231e69e push eax */
  push32((uint32_t)(EAX));
  /* 1231e69f call 0x12319430 */
  push32(0x1231e6a4u); f_12319430();
  /* 1231e6a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e6a7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e6ad jne 0x1231e6b1 */
  if (!C.zf) goto L_1231e6b1;
  /* 1231e6af jmp 0x1231e6b3 */
  goto L_1231e6b3;
L_1231e6b1:;
  /* 1231e6b1 jmp 0x1231e65c */
  goto L_1231e65c;
L_1231e6b3:;
  /* 1231e6b3 push 0x1233d930 */
  push32((uint32_t)(0x1233d930u));
  /* 1231e6b8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1231e6be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e6c1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1231e6c7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1231e6cd push edx */
  push32((uint32_t)(EDX));
  /* 1231e6ce call 0x12320f30 */
  push32(0x1231e6d3u); f_12320f30();
  /* 1231e6d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e6d6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1231e6dc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e6e3 jne 0x1231e719 */
  if (!C.zf) goto L_1231e719;
  /* 1231e6e5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1231e6eb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1231e6ee cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e6f1 je 0x1231e719 */
  if (C.zf) goto L_1231e719;
  /* 1231e6f3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e6f7 je 0x1231e712 */
  if (C.zf) goto L_1231e712;
  /* 1231e6f9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1231e6fb call 0x1231aa50 */
  push32(0x1231e700u); f_1231aa50();
  /* 1231e700 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e703 mov edx, dword ptr [0x12341ab4] */
  EDX = (r32((uint32_t)(0x12341ab4)));
  /* 1231e709 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231e70c mov dword ptr [0x12341ab4], edx */
  w32((uint32_t)(0x12341ab4), (EDX));
L_1231e712:;
  /* 1231e712 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231e714 jmp 0x1231e8eb */
  goto L_1231e8eb;
L_1231e719:;
  /* 1231e719 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e71d jg 0x1231e76a */
  if ((!C.zf&&C.sf==C.of)) goto L_1231e76a;
  /* 1231e71f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1231e725 push eax */
  push32((uint32_t)(EAX));
  /* 1231e726 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1231e72c push ecx */
  push32((uint32_t)(ECX));
  /* 1231e72d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1231e733 push edx */
  push32((uint32_t)(EDX));
  /* 1231e734 call 0x12319e20 */
  push32(0x1231e739u); f_12319e20();
  /* 1231e739 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e73c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1231e742 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1231e74a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1231e750 push ecx */
  push32((uint32_t)(ECX));
  /* 1231e751 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231e754 push edx */
  push32((uint32_t)(EDX));
  /* 1231e755 call 0x1231e8f0 */
  push32(0x1231e75au); f_1231e8f0();
  /* 1231e75a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e75d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231e75f je 0x1231e76a */
  if (C.zf) goto L_1231e76a;
  /* 1231e761 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231e764 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e767 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1231e76a:;
  /* 1231e76a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1231e770 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e776 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1231e77c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1231e782 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1231e785 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231e787 je 0x1231e798 */
  if (C.zf) goto L_1231e798;
  /* 1231e789 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1231e78f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e792 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1231e798:;
  /* 1231e798 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1231e79e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1231e7a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231e7a3 jne 0x1231e5e1 */
  if (!C.zf) goto L_1231e5e1;
  /* 1231e7a9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e7ad je 0x1231e7bc */
  if (C.zf) goto L_1231e7bc;
  /* 1231e7af call 0x1231ea90 */
  push32(0x1231e7b4u); f_1231ea90();
  /* 1231e7b4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1231e7ba jmp 0x1231e7c6 */
  goto L_1231e7c6;
L_1231e7bc:;
  /* 1231e7bc mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1231e7c6:;
  /* 1231e7c6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1231e7cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1231e7cf jmp 0x1231e8c1 */
  goto L_1231e8c1;
L_1231e7d4:;
  /* 1231e7d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231e7d7 push edx */
  push32((uint32_t)(EDX));
  /* 1231e7d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1231e7da push 0 */
  push32((uint32_t)(0x0u));
  /* 1231e7dc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1231e7e2 push eax */
  push32((uint32_t)(EAX));
  /* 1231e7e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231e7e6 push ecx */
  push32((uint32_t)(ECX));
  /* 1231e7e7 call 0x1231eb90 */
  push32(0x1231e7ecu); f_1231eb90();
  /* 1231e7ec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e7ef mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1231e7f2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e7f6 je 0x1231e8c1 */
  if (C.zf) goto L_1231e8c1;
  /* 1231e7fc mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1231e803 jmp 0x1231e80e */
  goto L_1231e80e;
L_1231e805:;
  /* 1231e805 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231e808 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e80b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1231e80e:;
  /* 1231e80e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e812 jg 0x1231e870 */
  if ((!C.zf&&C.sf==C.of)) goto L_1231e870;
  /* 1231e814 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e818 je 0x1231e86e */
  if (C.zf) goto L_1231e86e;
  /* 1231e81a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231e81d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231e820 mov ecx, dword ptr [eax + 0x123404dc] */
  ECX = (r32((uint32_t)(EAX + 0x123404dc)));
  /* 1231e826 push ecx */
  push32((uint32_t)(ECX));
  /* 1231e827 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1231e82d push edx */
  push32((uint32_t)(EDX));
  /* 1231e82e call 0x12320ea0 */
  push32(0x1231e833u); f_12320ea0();
  /* 1231e833 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e836 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231e838 je 0x1231e865 */
  if (C.zf) goto L_1231e865;
  /* 1231e83a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1231e840 push eax */
  push32((uint32_t)(EAX));
  /* 1231e841 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1231e844 push ecx */
  push32((uint32_t)(ECX));
  /* 1231e845 call 0x1231e8f0 */
  push32(0x1231e84au); f_1231e8f0();
  /* 1231e84a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e84d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231e84f je 0x1231e85c */
  if (C.zf) goto L_1231e85c;
  /* 1231e851 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231e854 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e857 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1231e85a jmp 0x1231e863 */
  goto L_1231e863;
L_1231e85c:;
  /* 1231e85c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1231e863:;
  /* 1231e863 jmp 0x1231e86e */
  goto L_1231e86e;
L_1231e865:;
  /* 1231e865 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231e868 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e86b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1231e86e:;
  /* 1231e86e jmp 0x1231e805 */
  goto L_1231e805;
L_1231e870:;
  /* 1231e870 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e874 je 0x1231e89b */
  if (C.zf) goto L_1231e89b;
  /* 1231e876 call 0x1231ea90 */
  push32(0x1231e87bu); f_1231ea90();
  /* 1231e87b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1231e87e push 2 */
  push32((uint32_t)(0x2u));
  /* 1231e880 mov ecx, dword ptr [0x123404dc] */
  ECX = (r32((uint32_t)(0x123404dc)));
  /* 1231e886 push ecx */
  push32((uint32_t)(ECX));
  /* 1231e887 call 0x12317090 */
  push32(0x1231e88cu); f_12317090();
  /* 1231e88c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e88f mov dword ptr [0x123404dc], 0 */
  w32((uint32_t)(0x123404dc), (0x0u));
  /* 1231e899 jmp 0x1231e8c1 */
  goto L_1231e8c1;
L_1231e89b:;
  /* 1231e89b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e89f je 0x1231e8ae */
  if (C.zf) goto L_1231e8ae;
  /* 1231e8a1 call 0x1231ea90 */
  push32(0x1231e8a6u); f_1231ea90();
  /* 1231e8a6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1231e8ac jmp 0x1231e8b8 */
  goto L_1231e8b8;
L_1231e8ae:;
  /* 1231e8ae mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_1231e8b8:;
  /* 1231e8b8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1231e8be mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1231e8c1:;
  /* 1231e8c1 jmp 0x1231e8cb */
  goto L_1231e8cb;
L_1231e8c3:;
  /* 1231e8c3 call 0x1231ea90 */
  push32(0x1231e8c8u); f_1231ea90();
  /* 1231e8c8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1231e8cb:;
  /* 1231e8cb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e8cf je 0x1231e8e8 */
  if (C.zf) goto L_1231e8e8;
  /* 1231e8d1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1231e8d3 call 0x1231aa50 */
  push32(0x1231e8d8u); f_1231aa50();
  /* 1231e8d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e8db mov eax, dword ptr [0x12341ab4] */
  EAX = (r32((uint32_t)(0x12341ab4)));
  /* 1231e8e0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231e8e3 mov dword ptr [0x12341ab4], eax */
  w32((uint32_t)(0x12341ab4), (EAX));
L_1231e8e8:;
  /* 1231e8e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1231e8eb:;
  /* 1231e8eb mov esp, ebp */
  ESP = (EBP);
  /* 1231e8ed pop ebp */
  EBP = (pop32());
  /* 1231e8ee ret  */
  ESPCHK(0x1231e500u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e8f0 @ 0x1231e8f0 (403 bytes, 117 insns) */
void f_1231e8f0(void) {
  FTRACE(0x1231e8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231e8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1231e8f1 mov ebp, esp */
  EBP = (ESP);
  /* 1231e8f3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231e8f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231e8fc push eax */
  push32((uint32_t)(EAX));
  /* 1231e8fd lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 1231e903 push ecx */
  push32((uint32_t)(ECX));
  /* 1231e904 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1231e90a push edx */
  push32((uint32_t)(EDX));
  /* 1231e90b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 1231e911 push eax */
  push32((uint32_t)(EAX));
  /* 1231e912 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231e915 push ecx */
  push32((uint32_t)(ECX));
  /* 1231e916 call 0x1231eb90 */
  push32(0x1231e91bu); f_1231eb90();
  /* 1231e91b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e91e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231e920 jne 0x1231e929 */
  if (!C.zf) goto L_1231e929;
  /* 1231e922 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231e924 jmp 0x1231ea7f */
  goto L_1231ea7f;
L_1231e929:;
  /* 1231e929 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1231e92e push 0x1233d938 */
  push32((uint32_t)(0x1233d938u));
  /* 1231e933 push 2 */
  push32((uint32_t)(0x2u));
  /* 1231e935 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1231e93b push edx */
  push32((uint32_t)(EDX));
  /* 1231e93c call 0x12319430 */
  push32(0x1231e941u); f_12319430();
  /* 1231e941 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e944 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e947 push eax */
  push32((uint32_t)(EAX));
  /* 1231e948 call 0x12316600 */
  push32(0x1231e94du); f_12316600();
  /* 1231e94d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e950 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1231e953 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e957 jne 0x1231e960 */
  if (!C.zf) goto L_1231e960;
  /* 1231e959 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231e95b jmp 0x1231ea7f */
  goto L_1231ea7f;
L_1231e960:;
  /* 1231e960 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231e963 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231e966 mov ecx, dword ptr [eax + 0x123404dc] */
  ECX = (r32((uint32_t)(EAX + 0x123404dc)));
  /* 1231e96c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1231e96f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231e972 mov eax, dword ptr [edx*4 + 0x12341938] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12341938)));
  /* 1231e979 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1231e97c push 6 */
  push32((uint32_t)(0x6u));
  /* 1231e97e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231e981 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231e984 add ecx, 0x1234197c */
  { uint32_t _a=(ECX),_b=(0x1234197cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e98a push ecx */
  push32((uint32_t)(ECX));
  /* 1231e98b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1231e98e push edx */
  push32((uint32_t)(EDX));
  /* 1231e98f call 0x1231d790 */
  push32(0x1231e994u); f_1231d790();
  /* 1231e994 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e997 mov eax, dword ptr [0x12341950] */
  EAX = (r32((uint32_t)(0x12341950)));
  /* 1231e99c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1231e99f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 1231e9a5 push ecx */
  push32((uint32_t)(ECX));
  /* 1231e9a6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231e9a9 push edx */
  push32((uint32_t)(EDX));
  /* 1231e9aa call 0x123195b0 */
  push32(0x1231e9afu); f_123195b0();
  /* 1231e9af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e9b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231e9b5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231e9b8 mov dword ptr [ecx + 0x123404dc], eax */
  w32((uint32_t)(ECX + 0x123404dc), (EAX));
  /* 1231e9be mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1231e9c4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1231e9ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231e9cd mov dword ptr [eax*4 + 0x12341938], edx */
  w32((uint32_t)(EAX*4 + 0x12341938), (EDX));
  /* 1231e9d4 push 6 */
  push32((uint32_t)(0x6u));
  /* 1231e9d6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1231e9dc push ecx */
  push32((uint32_t)(ECX));
  /* 1231e9dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231e9e0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231e9e3 add edx, 0x1234197c */
  { uint32_t _a=(EDX),_b=(0x1234197cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e9e9 push edx */
  push32((uint32_t)(EDX));
  /* 1231e9ea call 0x1231d790 */
  push32(0x1231e9efu); f_1231d790();
  /* 1231e9ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231e9f2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231e9f6 jne 0x1231ea03 */
  if (!C.zf) goto L_1231ea03;
  /* 1231e9f8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1231e9fe mov dword ptr [0x12341950], eax */
  w32((uint32_t)(0x12341950), (EAX));
L_1231ea03:;
  /* 1231ea03 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ea07 jne 0x1231ea15 */
  if (!C.zf) goto L_1231ea15;
  /* 1231ea09 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1231ea0f mov dword ptr [0x12341954], ecx */
  w32((uint32_t)(0x12341954), (ECX));
L_1231ea15:;
  /* 1231ea15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231ea18 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231ea1b call dword ptr [edx + 0x123404e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x123404e0))), 0x1231ea21u);
  /* 1231ea21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231ea23 je 0x1231ea5c */
  if (C.zf) goto L_1231ea5c;
  /* 1231ea25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231ea28 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231ea2b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231ea2e mov dword ptr [eax + 0x123404dc], ecx */
  w32((uint32_t)(EAX + 0x123404dc), (ECX));
  /* 1231ea34 push 2 */
  push32((uint32_t)(0x2u));
  /* 1231ea36 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231ea39 push edx */
  push32((uint32_t)(EDX));
  /* 1231ea3a call 0x12317090 */
  push32(0x1231ea3fu); f_12317090();
  /* 1231ea3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ea42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231ea45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231ea48 mov dword ptr [eax*4 + 0x12341938], ecx */
  w32((uint32_t)(EAX*4 + 0x12341938), (ECX));
  /* 1231ea4f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1231ea52 mov dword ptr [0x12341950], edx */
  w32((uint32_t)(0x12341950), (EDX));
  /* 1231ea58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231ea5a jmp 0x1231ea7f */
  goto L_1231ea7f;
L_1231ea5c:;
  /* 1231ea5c cmp dword ptr [ebp - 0xc], 0x123403c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x123403c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ea63 je 0x1231ea73 */
  if (C.zf) goto L_1231ea73;
  /* 1231ea65 push 2 */
  push32((uint32_t)(0x2u));
  /* 1231ea67 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231ea6a push eax */
  push32((uint32_t)(EAX));
  /* 1231ea6b call 0x12317090 */
  push32(0x1231ea70u); f_12317090();
  /* 1231ea70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1231ea73:;
  /* 1231ea73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231ea76 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231ea79 mov eax, dword ptr [ecx + 0x123404dc] */
  EAX = (r32((uint32_t)(ECX + 0x123404dc)));
L_1231ea7f:;
  /* 1231ea7f mov esp, ebp */
  ESP = (EBP);
  /* 1231ea81 pop ebp */
  EBP = (pop32());
  /* 1231ea82 ret  */
  ESPCHK(0x1231e8f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea90 @ 0x1231ea90 (256 bytes, 72 insns) */
void f_1231ea90(void) {
  FTRACE(0x1231ea90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231ea90 push ebp */
  push32((uint32_t)(EBP));
  /* 1231ea91 mov ebp, esp */
  EBP = (ESP);
  /* 1231ea93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231ea96 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1231ea9d cmp dword ptr [0x123404dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123404dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231eaa4 jne 0x1231eac4 */
  if (!C.zf) goto L_1231eac4;
  /* 1231eaa6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1231eaab push 0x1233d938 */
  push32((uint32_t)(0x1233d938u));
  /* 1231eab0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1231eab2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 1231eab7 call 0x12316600 */
  push32(0x1231eabcu); f_12316600();
  /* 1231eabc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231eabf mov dword ptr [0x123404dc], eax */
  w32((uint32_t)(0x123404dc), (EAX));
L_1231eac4:;
  /* 1231eac4 mov eax, dword ptr [0x123404dc] */
  EAX = (r32((uint32_t)(0x123404dc)));
  /* 1231eac9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1231eacc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1231ead3 jmp 0x1231eade */
  goto L_1231eade;
L_1231ead5:;
  /* 1231ead5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231ead8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231eadb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1231eade:;
  /* 1231eade mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231eae1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231eae4 mov eax, dword ptr [edx + 0x123404dc] */
  EAX = (r32((uint32_t)(EDX + 0x123404dc)));
  /* 1231eaea push eax */
  push32((uint32_t)(EAX));
  /* 1231eaeb push 0x1233d944 */
  push32((uint32_t)(0x1233d944u));
  /* 1231eaf0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231eaf3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231eaf6 mov edx, dword ptr [ecx + 0x123404d8] */
  EDX = (r32((uint32_t)(ECX + 0x123404d8)));
  /* 1231eafc push edx */
  push32((uint32_t)(EDX));
  /* 1231eafd push 3 */
  push32((uint32_t)(0x3u));
  /* 1231eaff mov eax, dword ptr [0x123404dc] */
  EAX = (r32((uint32_t)(0x123404dc)));
  /* 1231eb04 push eax */
  push32((uint32_t)(EAX));
  /* 1231eb05 call 0x1231ed30 */
  push32(0x1231eb0au); f_1231ed30();
  /* 1231eb0a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231eb0d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231eb11 jge 0x1231eb59 */
  if ((C.sf==C.of)) goto L_1231eb59;
  /* 1231eb13 push 0x1233d930 */
  push32((uint32_t)(0x1233d930u));
  /* 1231eb18 mov ecx, dword ptr [0x123404dc] */
  ECX = (r32((uint32_t)(0x123404dc)));
  /* 1231eb1e push ecx */
  push32((uint32_t)(ECX));
  /* 1231eb1f call 0x123195c0 */
  push32(0x1231eb24u); f_123195c0();
  /* 1231eb24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231eb27 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231eb2a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231eb2d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231eb30 mov eax, dword ptr [edx + 0x123404dc] */
  EAX = (r32((uint32_t)(EDX + 0x123404dc)));
  /* 1231eb36 push eax */
  push32((uint32_t)(EAX));
  /* 1231eb37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231eb3a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1231eb3d mov edx, dword ptr [ecx + 0x123404dc] */
  EDX = (r32((uint32_t)(ECX + 0x123404dc)));
  /* 1231eb43 push edx */
  push32((uint32_t)(EDX));
  /* 1231eb44 call 0x12320ea0 */
  push32(0x1231eb49u); f_12320ea0();
  /* 1231eb49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231eb4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231eb4e je 0x1231eb57 */
  if (C.zf) goto L_1231eb57;
  /* 1231eb50 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1231eb57:;
  /* 1231eb57 jmp 0x1231eb87 */
  goto L_1231eb87;
L_1231eb59:;
  /* 1231eb59 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231eb5d jne 0x1231eb66 */
  if (!C.zf) goto L_1231eb66;
  /* 1231eb5f mov eax, dword ptr [0x123404dc] */
  EAX = (r32((uint32_t)(0x123404dc)));
  /* 1231eb64 jmp 0x1231eb8c */
  goto L_1231eb8c;
L_1231eb66:;
  /* 1231eb66 push 2 */
  push32((uint32_t)(0x2u));
  /* 1231eb68 mov eax, dword ptr [0x123404dc] */
  EAX = (r32((uint32_t)(0x123404dc)));
  /* 1231eb6d push eax */
  push32((uint32_t)(EAX));
  /* 1231eb6e call 0x12317090 */
  push32(0x1231eb73u); f_12317090();
  /* 1231eb73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231eb76 mov dword ptr [0x123404dc], 0 */
  w32((uint32_t)(0x123404dc), (0x0u));
  /* 1231eb80 mov eax, dword ptr [0x123404f4] */
  EAX = (r32((uint32_t)(0x123404f4)));
  /* 1231eb85 jmp 0x1231eb8c */
  goto L_1231eb8c;
L_1231eb87:;
  /* 1231eb87 jmp 0x1231ead5 */
  goto L_1231ead5;
L_1231eb8c:;
  /* 1231eb8c mov esp, ebp */
  ESP = (EBP);
  /* 1231eb8e pop ebp */
  EBP = (pop32());
  /* 1231eb8f ret  */
  ESPCHK(0x1231ea90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb90 @ 0x1231eb90 (388 bytes, 115 insns) */
void f_1231eb90(void) {
  FTRACE(0x1231eb90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231eb90 push ebp */
  push32((uint32_t)(EBP));
  /* 1231eb91 mov ebp, esp */
  EBP = (ESP);
  /* 1231eb93 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231eb99 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231eb9d jne 0x1231eba6 */
  if (!C.zf) goto L_1231eba6;
  /* 1231eb9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231eba1 jmp 0x1231ed10 */
  goto L_1231ed10;
L_1231eba6:;
  /* 1231eba6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231eba9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1231ebac cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ebaf jne 0x1231ec00 */
  if (!C.zf) goto L_1231ec00;
  /* 1231ebb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231ebb4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1231ebb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231ebba jne 0x1231ec00 */
  if (!C.zf) goto L_1231ec00;
  /* 1231ebbc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231ebbf mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 1231ebc2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231ebc5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 1231ebc9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ebcd je 0x1231ebe9 */
  if (C.zf) goto L_1231ebe9;
  /* 1231ebcf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1231ebd2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 1231ebd7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1231ebda mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 1231ebe0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1231ebe3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_1231ebe9:;
  /* 1231ebe9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ebed je 0x1231ebf8 */
  if (C.zf) goto L_1231ebf8;
  /* 1231ebef mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1231ebf2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1231ebf8:;
  /* 1231ebf8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231ebfb jmp 0x1231ed10 */
  goto L_1231ed10;
L_1231ec00:;
  /* 1231ec00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231ec03 push ecx */
  push32((uint32_t)(ECX));
  /* 1231ec04 push 0x12340450 */
  push32((uint32_t)(0x12340450u));
  /* 1231ec09 call 0x12320ea0 */
  push32(0x1231ec0eu); f_12320ea0();
  /* 1231ec0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ec11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231ec13 je 0x1231ecc8 */
  if (C.zf) goto L_1231ecc8;
  /* 1231ec19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231ec1c push edx */
  push32((uint32_t)(EDX));
  /* 1231ec1d push 0x123403cc */
  push32((uint32_t)(0x123403ccu));
  /* 1231ec22 call 0x12320ea0 */
  push32(0x1231ec27u); f_12320ea0();
  /* 1231ec27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ec2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231ec2c je 0x1231ecc8 */
  if (C.zf) goto L_1231ecc8;
  /* 1231ec32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231ec35 push eax */
  push32((uint32_t)(EAX));
  /* 1231ec36 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1231ec3c push ecx */
  push32((uint32_t)(ECX));
  /* 1231ec3d call 0x1231ed80 */
  push32(0x1231ec42u); f_1231ed80();
  /* 1231ec42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ec45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231ec47 je 0x1231ec50 */
  if (C.zf) goto L_1231ec50;
  /* 1231ec49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231ec4b jmp 0x1231ed10 */
  goto L_1231ed10;
L_1231ec50:;
  /* 1231ec50 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1231ec56 push edx */
  push32((uint32_t)(EDX));
  /* 1231ec57 push 0x1234192c */
  push32((uint32_t)(0x1234192cu));
  /* 1231ec5c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 1231ec62 push eax */
  push32((uint32_t)(EAX));
  /* 1231ec63 call 0x12320ff0 */
  push32(0x1231ec68u); f_12320ff0();
  /* 1231ec68 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ec6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231ec6d jne 0x1231ec76 */
  if (!C.zf) goto L_1231ec76;
  /* 1231ec6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231ec71 jmp 0x1231ed10 */
  goto L_1231ed10;
L_1231ec76:;
  /* 1231ec76 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1231ec78 mov cx, word ptr [0x12341930] */
  CX = (r16((uint32_t)(0x12341930)));
  /* 1231ec7f mov dword ptr [0x12341934], ecx */
  w32((uint32_t)(0x12341934), (ECX));
  /* 1231ec85 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1231ec8b push edx */
  push32((uint32_t)(EDX));
  /* 1231ec8c push 0x12340450 */
  push32((uint32_t)(0x12340450u));
  /* 1231ec91 call 0x1231eee0 */
  push32(0x1231ec96u); f_1231eee0();
  /* 1231ec96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ec99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231ec9c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1231ec9f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1231eca1 je 0x1231ecb6 */
  if (C.zf) goto L_1231ecb6;
  /* 1231eca3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231eca6 push edx */
  push32((uint32_t)(EDX));
  /* 1231eca7 push 0x123403cc */
  push32((uint32_t)(0x123403ccu));
  /* 1231ecac call 0x123195b0 */
  push32(0x1231ecb1u); f_123195b0();
  /* 1231ecb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ecb4 jmp 0x1231ecc8 */
  goto L_1231ecc8;
L_1231ecb6:;
  /* 1231ecb6 push 0x12340450 */
  push32((uint32_t)(0x12340450u));
  /* 1231ecbb push 0x123403cc */
  push32((uint32_t)(0x123403ccu));
  /* 1231ecc0 call 0x123195b0 */
  push32(0x1231ecc5u); f_123195b0();
  /* 1231ecc5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1231ecc8:;
  /* 1231ecc8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231eccc je 0x1231ece1 */
  if (C.zf) goto L_1231ece1;
  /* 1231ecce push 6 */
  push32((uint32_t)(0x6u));
  /* 1231ecd0 push 0x1234192c */
  push32((uint32_t)(0x1234192cu));
  /* 1231ecd5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1231ecd8 push eax */
  push32((uint32_t)(EAX));
  /* 1231ecd9 call 0x1231d790 */
  push32(0x1231ecdeu); f_1231d790();
  /* 1231ecde add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1231ece1:;
  /* 1231ece1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ece5 je 0x1231ecfa */
  if (C.zf) goto L_1231ecfa;
  /* 1231ece7 push 4 */
  push32((uint32_t)(0x4u));
  /* 1231ece9 push 0x12341934 */
  push32((uint32_t)(0x12341934u));
  /* 1231ecee mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1231ecf1 push ecx */
  push32((uint32_t)(ECX));
  /* 1231ecf2 call 0x1231d790 */
  push32(0x1231ecf7u); f_1231d790();
  /* 1231ecf7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1231ecfa:;
  /* 1231ecfa push 0x12340450 */
  push32((uint32_t)(0x12340450u));
  /* 1231ecff mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231ed02 push edx */
  push32((uint32_t)(EDX));
  /* 1231ed03 call 0x123195b0 */
  push32(0x1231ed08u); f_123195b0();
  /* 1231ed08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ed0b mov eax, 0x12340450 */
  EAX = (0x12340450u);
L_1231ed10:;
  /* 1231ed10 mov esp, ebp */
  ESP = (EBP);
  /* 1231ed12 pop ebp */
  EBP = (pop32());
  /* 1231ed13 ret  */
  ESPCHK(0x1231eb90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed20 @ 0x1231ed20 (7 bytes, 5 insns) */
void f_1231ed20(void) {
  FTRACE(0x1231ed20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231ed20 push ebp */
  push32((uint32_t)(EBP));
  /* 1231ed21 mov ebp, esp */
  EBP = (ESP);
  /* 1231ed23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231ed25 pop ebp */
  EBP = (pop32());
  /* 1231ed26 ret  */
  ESPCHK(0x1231ed20u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x1231ed30 (79 bytes, 28 insns) */
void f_1231ed30(void) {
  FTRACE(0x1231ed30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231ed30 push ebp */
  push32((uint32_t)(EBP));
  /* 1231ed31 mov ebp, esp */
  EBP = (ESP);
  /* 1231ed33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231ed36 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1231ed39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1231ed3c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1231ed43 jmp 0x1231ed4e */
  goto L_1231ed4e;
L_1231ed45:;
  /* 1231ed45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231ed48 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ed4b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1231ed4e:;
  /* 1231ed4e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1231ed51 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ed54 jge 0x1231ed74 */
  if ((C.sf==C.of)) goto L_1231ed74;
  /* 1231ed56 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231ed59 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ed5c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1231ed5f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231ed62 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1231ed65 push edx */
  push32((uint32_t)(EDX));
  /* 1231ed66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231ed69 push eax */
  push32((uint32_t)(EAX));
  /* 1231ed6a call 0x123195c0 */
  push32(0x1231ed6fu); f_123195c0();
  /* 1231ed6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ed72 jmp 0x1231ed45 */
  goto L_1231ed45;
L_1231ed74:;
  /* 1231ed74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1231ed7b mov esp, ebp */
  ESP = (EBP);
  /* 1231ed7d pop ebp */
  EBP = (pop32());
  /* 1231ed7e ret  */
  ESPCHK(0x1231ed30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed80 @ 0x1231ed80 (349 bytes, 122 insns) */
void f_1231ed80(void) {
  FTRACE(0x1231ed80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1231ed80 push ebp */
  push32((uint32_t)(EBP));
  /* 1231ed81 mov ebp, esp */
  EBP = (ESP);
  /* 1231ed83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1231ed86 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1231ed8b push 0 */
  push32((uint32_t)(0x0u));
  /* 1231ed8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231ed90 push eax */
  push32((uint32_t)(EAX));
  /* 1231ed91 call 0x1231ad20 */
  push32(0x1231ed96u); f_1231ad20();
  /* 1231ed96 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ed99 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231ed9c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1231ed9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1231eda1 jne 0x1231edaa */
  if (!C.zf) goto L_1231edaa;
  /* 1231eda3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231eda5 jmp 0x1231eed9 */
  goto L_1231eed9;
L_1231edaa:;
  /* 1231edaa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231edad movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1231edb0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231edb3 jne 0x1231ede0 */
  if (!C.zf) goto L_1231ede0;
  /* 1231edb5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231edb8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1231edbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231edbe je 0x1231ede0 */
  if (C.zf) goto L_1231ede0;
  /* 1231edc0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231edc3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231edc6 push ecx */
  push32((uint32_t)(ECX));
  /* 1231edc7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231edca add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231edd0 push edx */
  push32((uint32_t)(EDX));
  /* 1231edd1 call 0x123195b0 */
  push32(0x1231edd6u); f_123195b0();
  /* 1231edd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231edd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1231eddb jmp 0x1231eed9 */
  goto L_1231eed9;
L_1231ede0:;
  /* 1231ede0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1231ede7 jmp 0x1231edf2 */
  goto L_1231edf2;
L_1231ede9:;
  /* 1231ede9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1231edec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231edef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1231edf2:;
  /* 1231edf2 push 0x1233d948 */
  push32((uint32_t)(0x1233d948u));
  /* 1231edf7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231edfa push ecx */
  push32((uint32_t)(ECX));
  /* 1231edfb call 0x12320f30 */
  push32(0x1231ee00u); f_12320f30();
  /* 1231ee00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ee03 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1231ee06 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ee0a jne 0x1231ee14 */
  if (!C.zf) goto L_1231ee14;
  /* 1231ee0c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1231ee0f jmp 0x1231eed9 */
  goto L_1231eed9;
L_1231ee14:;
  /* 1231ee14 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231ee17 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ee1a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1231ee1c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1231ee1f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ee23 jne 0x1231ee4a */
  if (!C.zf) goto L_1231ee4a;
  /* 1231ee25 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ee29 jge 0x1231ee4a */
  if ((C.sf==C.of)) goto L_1231ee4a;
  /* 1231ee2b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1231ee2f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ee32 je 0x1231ee4a */
  if (C.zf) goto L_1231ee4a;
  /* 1231ee34 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231ee37 push edx */
  push32((uint32_t)(EDX));
  /* 1231ee38 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231ee3b push eax */
  push32((uint32_t)(EAX));
  /* 1231ee3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231ee3f push ecx */
  push32((uint32_t)(ECX));
  /* 1231ee40 call 0x12319e20 */
  push32(0x1231ee45u); f_12319e20();
  /* 1231ee45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ee48 jmp 0x1231eeb0 */
  goto L_1231eeb0;
L_1231ee4a:;
  /* 1231ee4a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ee4e jne 0x1231ee78 */
  if (!C.zf) goto L_1231ee78;
  /* 1231ee50 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ee54 jge 0x1231ee78 */
  if ((C.sf==C.of)) goto L_1231ee78;
  /* 1231ee56 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1231ee5a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ee5d je 0x1231ee78 */
  if (C.zf) goto L_1231ee78;
  /* 1231ee5f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231ee62 push eax */
  push32((uint32_t)(EAX));
  /* 1231ee63 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231ee66 push ecx */
  push32((uint32_t)(ECX));
  /* 1231ee67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231ee6a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ee6d push edx */
  push32((uint32_t)(EDX));
  /* 1231ee6e call 0x12319e20 */
  push32(0x1231ee73u); f_12319e20();
  /* 1231ee73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231ee76 jmp 0x1231eeb0 */
  goto L_1231eeb0;
L_1231ee78:;
  /* 1231ee78 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ee7c jne 0x1231eeab */
  if (!C.zf) goto L_1231eeab;
  /* 1231ee7e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1231ee82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231ee84 je 0x1231ee8f */
  if (C.zf) goto L_1231ee8f;
  /* 1231ee86 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1231ee8a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231ee8d jne 0x1231eeab */
  if (!C.zf) goto L_1231eeab;
L_1231ee8f:;
  /* 1231ee8f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231ee92 push edx */
  push32((uint32_t)(EDX));
  /* 1231ee93 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231ee96 push eax */
  push32((uint32_t)(EAX));
  /* 1231ee97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1231ee9a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1231eea0 push ecx */
  push32((uint32_t)(ECX));
  /* 1231eea1 call 0x12319e20 */
  push32(0x1231eea6u); f_12319e20();
  /* 1231eea6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1231eea9 jmp 0x1231eeb0 */
  goto L_1231eeb0;
L_1231eeab:;
  /* 1231eeab or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1231eeae jmp 0x1231eed9 */
  goto L_1231eed9;
L_1231eeb0:;
  /* 1231eeb0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1231eeb4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1231eeb7 jne 0x1231eebb */
  if (!C.zf) goto L_1231eebb;
  /* 1231eeb9 jmp 0x1231eed7 */
  goto L_1231eed7;
L_1231eebb:;
  /* 1231eebb movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1231eebf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1231eec1 jne 0x1231eec5 */
  if (!C.zf) goto L_1231eec5;
  /* 1231eec3 jmp 0x1231eed7 */
  goto L_1231eed7;
L_1231eec5:;
  /* 1231eec5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1231eec8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1231eecb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1231eecf mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1231eed2 jmp 0x1231ede9 */
  goto L_1231ede9;
L_1231eed7:;
  /* 1231eed7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1231eed9:;
  /* 1231eed9 mov esp, ebp */
  ESP = (EBP);
  /* 1231eedb pop ebp */
  EBP = (pop32());
  /* 1231eedc ret  */
  ESPCHK(0x1231ed80u, _esp0);
  ESP += 4; return;
}

