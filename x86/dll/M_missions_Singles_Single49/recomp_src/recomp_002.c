#include "recomp.h"

/* FUN_10013ba0 @ 0x11803ba0 (393 bytes, 123 insns) */
void f_11803ba0(void) {
  FTRACE(0x11803ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11803ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 11803ba1 mov ebp, esp */
  EBP = (ESP);
  /* 11803ba3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11803ba6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11803baa jne 0x11803bb6 */
  if (!C.zf) goto L_11803bb6;
  /* 11803bac mov eax, dword ptr [0x11821c98] */
  EAX = (r32((uint32_t)(0x11821c98)));
  /* 11803bb1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11803bb4 jmp 0x11803bbc */
  goto L_11803bbc;
L_11803bb6:;
  /* 11803bb6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11803bb9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11803bbc:;
  /* 11803bbc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11803bbf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11803bc2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11803bc5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11803bc8 push 0x11822a7c */
  push32((uint32_t)(0x11822a7cu));
  /* 11803bcd call dword ptr [0x118253c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253c8))), 0x11803bd3u);
  /* 11803bd3 cmp dword ptr [0x11822a6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822a6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11803bda je 0x11803bfa */
  if (C.zf) goto L_11803bfa;
  /* 11803bdc push 0x11822a7c */
  push32((uint32_t)(0x11822a7cu));
  /* 11803be1 call dword ptr [0x118253b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253b8))), 0x11803be7u);
  /* 11803be7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11803be9 call 0x117fa260 */
  push32(0x11803beeu); f_117fa260();
  /* 11803bee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803bf1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11803bf8 jmp 0x11803c01 */
  goto L_11803c01;
L_11803bfa:;
  /* 11803bfa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11803c01:;
  /* 11803c01 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11803c05 jbe 0x11803cf2 */
  if ((C.cf||C.zf)) goto L_11803cf2;
  /* 11803c0b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11803c0e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11803c10 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 11803c13 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11803c17 je 0x11803c21 */
  if (C.zf) goto L_11803c21;
  /* 11803c19 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11803c1d je 0x11803c26 */
  if (C.zf) goto L_11803c26;
  /* 11803c1f jmp 0x11803c80 */
  goto L_11803c80;
L_11803c21:;
  /* 11803c21 jmp 0x11803cf2 */
  goto L_11803cf2;
L_11803c26:;
  /* 11803c26 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11803c29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11803c2c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11803c2f mov dword ptr [0x11822a58], 0 */
  w32((uint32_t)(0x11822a58), (0x0u));
  /* 11803c39 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11803c3c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11803c3f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11803c42 jne 0x11803c57 */
  if (!C.zf) goto L_11803c57;
  /* 11803c44 mov dword ptr [0x11822a58], 1 */
  w32((uint32_t)(0x11822a58), (0x1u));
  /* 11803c4e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11803c51 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11803c54 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11803c57:;
  /* 11803c57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11803c5a push ecx */
  push32((uint32_t)(ECX));
  /* 11803c5b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11803c5e push edx */
  push32((uint32_t)(EDX));
  /* 11803c5f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11803c62 push eax */
  push32((uint32_t)(EAX));
  /* 11803c63 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11803c66 push ecx */
  push32((uint32_t)(ECX));
  /* 11803c67 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11803c6a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11803c6c push eax */
  push32((uint32_t)(EAX));
  /* 11803c6d call 0x11803d30 */
  push32(0x11803c72u); f_11803d30();
  /* 11803c72 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803c75 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11803c78 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11803c7b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11803c7e jmp 0x11803ced */
  goto L_11803ced;
L_11803c80:;
  /* 11803c80 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11803c83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11803c85 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11803c87 mov ecx, dword ptr [0x11820c98] */
  ECX = (r32((uint32_t)(0x11820c98)));
  /* 11803c8d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11803c8f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11803c93 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11803c99 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11803c9b je 0x11803cc8 */
  if (C.zf) goto L_11803cc8;
  /* 11803c9d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11803ca1 jbe 0x11803cc8 */
  if ((C.cf||C.zf)) goto L_11803cc8;
  /* 11803ca3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11803ca6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11803ca9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11803cab mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11803cad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11803cb0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11803cb3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11803cb6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11803cb9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11803cbc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11803cbf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11803cc2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11803cc5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11803cc8:;
  /* 11803cc8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11803ccb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11803cce mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11803cd0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11803cd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11803cd5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11803cd8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11803cdb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11803cde add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11803ce1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11803ce4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11803ce7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11803cea mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11803ced:;
  /* 11803ced jmp 0x11803c01 */
  goto L_11803c01;
L_11803cf2:;
  /* 11803cf2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11803cf6 je 0x11803d04 */
  if (C.zf) goto L_11803d04;
  /* 11803cf8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11803cfa call 0x117fa300 */
  push32(0x11803cffu); f_117fa300();
  /* 11803cff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803d02 jmp 0x11803d0f */
  goto L_11803d0f;
L_11803d04:;
  /* 11803d04 push 0x11822a7c */
  push32((uint32_t)(0x11822a7cu));
  /* 11803d09 call dword ptr [0x118253b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253b8))), 0x11803d0fu);
L_11803d0f:;
  /* 11803d0f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11803d13 jbe 0x11803d23 */
  if ((C.cf||C.zf)) goto L_11803d23;
  /* 11803d15 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11803d18 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11803d1b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11803d1e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11803d21 jmp 0x11803d25 */
  goto L_11803d25;
L_11803d23:;
  /* 11803d23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11803d25:;
  /* 11803d25 mov esp, ebp */
  ESP = (EBP);
  /* 11803d27 pop ebp */
  EBP = (pop32());
  /* 11803d28 ret  */
  ESPCHK(0x11803ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d30 @ 0x11803d30 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_11803d30(void) {
  FTRACE(0x11803d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11803d30 push ebp */
  push32((uint32_t)(EBP));
  /* 11803d31 mov ebp, esp */
  EBP = (ESP);
  /* 11803d33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11803d36 push esi */
  push32((uint32_t)(ESI));
  /* 11803d37 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11803d3b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11803d3e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11803d41 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11803d44 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11803d47 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11803d4b ja 0x11804298 */
  if ((!C.cf&&!C.zf)) goto L_11804298;
  /* 11803d51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11803d54 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11803d56 mov dl, byte ptr [eax + 0x118042f9] */
  DL = (r8((uint32_t)(EAX + 0x118042f9)));
  /* 11803d5c jmp dword ptr [edx*4 + 0x1180429d] */
  switch (EDX) {
    case 0: goto L_11804276;
    case 1: goto L_11803d85;
    case 2: goto L_11803dcb;
    case 3: goto L_11803f18;
    case 4: goto L_11803f40;
    case 5: goto L_11803fdf;
    case 6: goto L_1180404b;
    case 7: goto L_11804074;
    case 8: goto L_118040b5;
    case 9: goto L_11804197;
    case 10: goto L_118041fe;
    case 11: goto L_1180424b;
    case 12: goto L_11803d63;
    case 13: goto L_11803da8;
    case 14: goto L_11803dee;
    case 15: goto L_11803eee;
    case 16: goto L_11803f85;
    case 17: goto L_11803fb2;
    case 18: goto L_11804007;
    case 19: goto L_1180408b;
    case 20: goto L_11804139;
    case 21: goto L_118041c8;
    case 22: goto L_11804298;
    default: x86_unimpl("switch@0x11803d5c out of table"); return;
  }
L_11803d63:;
  /* 11803d63 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11803d66 push ecx */
  push32((uint32_t)(ECX));
  /* 11803d67 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11803d6a push edx */
  push32((uint32_t)(EDX));
  /* 11803d6b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11803d6e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11803d71 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11803d74 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11803d77 push eax */
  push32((uint32_t)(EAX));
  /* 11803d78 call 0x11804350 */
  push32(0x11803d7du); f_11804350();
  /* 11803d7d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803d80 jmp 0x11804298 */
  goto L_11804298;
L_11803d85:;
  /* 11803d85 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11803d88 push ecx */
  push32((uint32_t)(ECX));
  /* 11803d89 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11803d8c push edx */
  push32((uint32_t)(EDX));
  /* 11803d8d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11803d90 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11803d93 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11803d96 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11803d9a push eax */
  push32((uint32_t)(EAX));
  /* 11803d9b call 0x11804350 */
  push32(0x11803da0u); f_11804350();
  /* 11803da0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803da3 jmp 0x11804298 */
  goto L_11804298;
L_11803da8:;
  /* 11803da8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11803dab push ecx */
  push32((uint32_t)(ECX));
  /* 11803dac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11803daf push edx */
  push32((uint32_t)(EDX));
  /* 11803db0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11803db3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11803db6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11803db9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11803dbd push eax */
  push32((uint32_t)(EAX));
  /* 11803dbe call 0x11804350 */
  push32(0x11803dc3u); f_11804350();
  /* 11803dc3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803dc6 jmp 0x11804298 */
  goto L_11804298;
L_11803dcb:;
  /* 11803dcb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11803dce push ecx */
  push32((uint32_t)(ECX));
  /* 11803dcf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11803dd2 push edx */
  push32((uint32_t)(EDX));
  /* 11803dd3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11803dd6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11803dd9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11803ddc mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11803de0 push eax */
  push32((uint32_t)(EAX));
  /* 11803de1 call 0x11804350 */
  push32(0x11803de6u); f_11804350();
  /* 11803de6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803de9 jmp 0x11804298 */
  goto L_11804298;
L_11803dee:;
  /* 11803dee cmp dword ptr [0x11822a58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822a58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11803df5 je 0x11803e76 */
  if (C.zf) goto L_11803e76;
  /* 11803df7 mov dword ptr [0x11822a58], 0 */
  w32((uint32_t)(0x11822a58), (0x0u));
  /* 11803e01 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11803e04 push ecx */
  push32((uint32_t)(ECX));
  /* 11803e05 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11803e08 push edx */
  push32((uint32_t)(EDX));
  /* 11803e09 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11803e0c push eax */
  push32((uint32_t)(EAX));
  /* 11803e0d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11803e10 push ecx */
  push32((uint32_t)(ECX));
  /* 11803e11 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11803e14 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11803e1a push eax */
  push32((uint32_t)(EAX));
  /* 11803e1b call 0x11804500 */
  push32(0x11803e20u); f_11804500();
  /* 11803e20 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803e23 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11803e26 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11803e29 jne 0x11803e30 */
  if (!C.zf) goto L_11803e30;
  /* 11803e2b jmp 0x11804298 */
  goto L_11804298;
L_11803e30:;
  /* 11803e30 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11803e33 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11803e35 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11803e38 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11803e3b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11803e3d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11803e40 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11803e43 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11803e45 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11803e48 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11803e4a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11803e4d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11803e50 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11803e52 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11803e55 push ecx */
  push32((uint32_t)(ECX));
  /* 11803e56 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11803e59 push edx */
  push32((uint32_t)(EDX));
  /* 11803e5a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11803e5d push eax */
  push32((uint32_t)(EAX));
  /* 11803e5e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11803e61 push ecx */
  push32((uint32_t)(ECX));
  /* 11803e62 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11803e65 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11803e6b push eax */
  push32((uint32_t)(EAX));
  /* 11803e6c call 0x11804500 */
  push32(0x11803e71u); f_11804500();
  /* 11803e71 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803e74 jmp 0x11803ee9 */
  goto L_11803ee9;
L_11803e76:;
  /* 11803e76 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11803e79 push ecx */
  push32((uint32_t)(ECX));
  /* 11803e7a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11803e7d push edx */
  push32((uint32_t)(EDX));
  /* 11803e7e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11803e81 push eax */
  push32((uint32_t)(EAX));
  /* 11803e82 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11803e85 push ecx */
  push32((uint32_t)(ECX));
  /* 11803e86 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11803e89 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11803e8f push eax */
  push32((uint32_t)(EAX));
  /* 11803e90 call 0x11804500 */
  push32(0x11803e95u); f_11804500();
  /* 11803e95 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803e98 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11803e9b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11803e9e jne 0x11803ea5 */
  if (!C.zf) goto L_11803ea5;
  /* 11803ea0 jmp 0x11804298 */
  goto L_11804298;
L_11803ea5:;
  /* 11803ea5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11803ea8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11803eaa mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11803ead mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11803eb0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11803eb2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11803eb5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11803eb8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11803eba mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11803ebd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11803ebf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11803ec2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11803ec5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11803ec7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11803eca push ecx */
  push32((uint32_t)(ECX));
  /* 11803ecb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11803ece push edx */
  push32((uint32_t)(EDX));
  /* 11803ecf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11803ed2 push eax */
  push32((uint32_t)(EAX));
  /* 11803ed3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11803ed6 push ecx */
  push32((uint32_t)(ECX));
  /* 11803ed7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11803eda mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11803ee0 push eax */
  push32((uint32_t)(EAX));
  /* 11803ee1 call 0x11804500 */
  push32(0x11803ee6u); f_11804500();
  /* 11803ee6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11803ee9:;
  /* 11803ee9 jmp 0x11804298 */
  goto L_11804298;
L_11803eee:;
  /* 11803eee mov ecx, dword ptr [0x11822a58] */
  ECX = (r32((uint32_t)(0x11822a58)));
  /* 11803ef4 mov dword ptr [0x11822a68], ecx */
  w32((uint32_t)(0x11822a68), (ECX));
  /* 11803efa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11803efd push edx */
  push32((uint32_t)(EDX));
  /* 11803efe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11803f01 push eax */
  push32((uint32_t)(EAX));
  /* 11803f02 push 2 */
  push32((uint32_t)(0x2u));
  /* 11803f04 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11803f07 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11803f0a push edx */
  push32((uint32_t)(EDX));
  /* 11803f0b call 0x118043a0 */
  push32(0x11803f10u); f_118043a0();
  /* 11803f10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803f13 jmp 0x11804298 */
  goto L_11804298;
L_11803f18:;
  /* 11803f18 mov eax, dword ptr [0x11822a58] */
  EAX = (r32((uint32_t)(0x11822a58)));
  /* 11803f1d mov dword ptr [0x11822a68], eax */
  w32((uint32_t)(0x11822a68), (EAX));
  /* 11803f22 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11803f25 push ecx */
  push32((uint32_t)(ECX));
  /* 11803f26 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11803f29 push edx */
  push32((uint32_t)(EDX));
  /* 11803f2a push 2 */
  push32((uint32_t)(0x2u));
  /* 11803f2c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11803f2f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11803f32 push ecx */
  push32((uint32_t)(ECX));
  /* 11803f33 call 0x118043a0 */
  push32(0x11803f38u); f_118043a0();
  /* 11803f38 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803f3b jmp 0x11804298 */
  goto L_11804298;
L_11803f40:;
  /* 11803f40 mov edx, dword ptr [0x11822a58] */
  EDX = (r32((uint32_t)(0x11822a58)));
  /* 11803f46 mov dword ptr [0x11822a68], edx */
  w32((uint32_t)(0x11822a68), (EDX));
  /* 11803f4c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11803f4f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 11803f52 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11803f53 mov ecx, 0xc */
  ECX = (0xcu);
  /* 11803f58 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11803f5a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11803f5d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11803f61 jne 0x11803f6a */
  if (!C.zf) goto L_11803f6a;
  /* 11803f63 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_11803f6a:;
  /* 11803f6a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11803f6d push edx */
  push32((uint32_t)(EDX));
  /* 11803f6e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11803f71 push eax */
  push32((uint32_t)(EAX));
  /* 11803f72 push 2 */
  push32((uint32_t)(0x2u));
  /* 11803f74 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11803f77 push ecx */
  push32((uint32_t)(ECX));
  /* 11803f78 call 0x118043a0 */
  push32(0x11803f7du); f_118043a0();
  /* 11803f7d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803f80 jmp 0x11804298 */
  goto L_11804298;
L_11803f85:;
  /* 11803f85 mov edx, dword ptr [0x11822a58] */
  EDX = (r32((uint32_t)(0x11822a58)));
  /* 11803f8b mov dword ptr [0x11822a68], edx */
  w32((uint32_t)(0x11822a68), (EDX));
  /* 11803f91 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11803f94 push eax */
  push32((uint32_t)(EAX));
  /* 11803f95 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11803f98 push ecx */
  push32((uint32_t)(ECX));
  /* 11803f99 push 3 */
  push32((uint32_t)(0x3u));
  /* 11803f9b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11803f9e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11803fa1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11803fa4 push eax */
  push32((uint32_t)(EAX));
  /* 11803fa5 call 0x118043a0 */
  push32(0x11803faau); f_118043a0();
  /* 11803faa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803fad jmp 0x11804298 */
  goto L_11804298;
L_11803fb2:;
  /* 11803fb2 mov ecx, dword ptr [0x11822a58] */
  ECX = (r32((uint32_t)(0x11822a58)));
  /* 11803fb8 mov dword ptr [0x11822a68], ecx */
  w32((uint32_t)(0x11822a68), (ECX));
  /* 11803fbe mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11803fc1 push edx */
  push32((uint32_t)(EDX));
  /* 11803fc2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11803fc5 push eax */
  push32((uint32_t)(EAX));
  /* 11803fc6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11803fc8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11803fcb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11803fce add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11803fd1 push edx */
  push32((uint32_t)(EDX));
  /* 11803fd2 call 0x118043a0 */
  push32(0x11803fd7u); f_118043a0();
  /* 11803fd7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803fda jmp 0x11804298 */
  goto L_11804298;
L_11803fdf:;
  /* 11803fdf mov eax, dword ptr [0x11822a58] */
  EAX = (r32((uint32_t)(0x11822a58)));
  /* 11803fe4 mov dword ptr [0x11822a68], eax */
  w32((uint32_t)(0x11822a68), (EAX));
  /* 11803fe9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11803fec push ecx */
  push32((uint32_t)(ECX));
  /* 11803fed mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11803ff0 push edx */
  push32((uint32_t)(EDX));
  /* 11803ff1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11803ff3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11803ff6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11803ff9 push ecx */
  push32((uint32_t)(ECX));
  /* 11803ffa call 0x118043a0 */
  push32(0x11803fffu); f_118043a0();
  /* 11803fff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11804002 jmp 0x11804298 */
  goto L_11804298;
L_11804007:;
  /* 11804007 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1180400a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180400e jg 0x1180402c */
  if ((!C.zf&&C.sf==C.of)) goto L_1180402c;
  /* 11804010 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11804013 push eax */
  push32((uint32_t)(EAX));
  /* 11804014 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11804017 push ecx */
  push32((uint32_t)(ECX));
  /* 11804018 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1180401b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11804021 push eax */
  push32((uint32_t)(EAX));
  /* 11804022 call 0x11804350 */
  push32(0x11804027u); f_11804350();
  /* 11804027 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180402a jmp 0x11804046 */
  goto L_11804046;
L_1180402c:;
  /* 1180402c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1180402f push ecx */
  push32((uint32_t)(ECX));
  /* 11804030 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11804033 push edx */
  push32((uint32_t)(EDX));
  /* 11804034 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11804037 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1180403d push ecx */
  push32((uint32_t)(ECX));
  /* 1180403e call 0x11804350 */
  push32(0x11804043u); f_11804350();
  /* 11804043 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11804046:;
  /* 11804046 jmp 0x11804298 */
  goto L_11804298;
L_1180404b:;
  /* 1180404b mov edx, dword ptr [0x11822a58] */
  EDX = (r32((uint32_t)(0x11822a58)));
  /* 11804051 mov dword ptr [0x11822a68], edx */
  w32((uint32_t)(0x11822a68), (EDX));
  /* 11804057 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1180405a push eax */
  push32((uint32_t)(EAX));
  /* 1180405b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1180405e push ecx */
  push32((uint32_t)(ECX));
  /* 1180405f push 2 */
  push32((uint32_t)(0x2u));
  /* 11804061 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11804064 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11804066 push eax */
  push32((uint32_t)(EAX));
  /* 11804067 call 0x118043a0 */
  push32(0x1180406cu); f_118043a0();
  /* 1180406c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180406f jmp 0x11804298 */
  goto L_11804298;
L_11804074:;
  /* 11804074 mov ecx, dword ptr [0x11822a58] */
  ECX = (r32((uint32_t)(0x11822a58)));
  /* 1180407a mov dword ptr [0x11822a68], ecx */
  w32((uint32_t)(0x11822a68), (ECX));
  /* 11804080 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11804083 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11804086 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11804089 jmp 0x118040dd */
  goto L_118040dd;
L_1180408b:;
  /* 1180408b mov ecx, dword ptr [0x11822a58] */
  ECX = (r32((uint32_t)(0x11822a58)));
  /* 11804091 mov dword ptr [0x11822a68], ecx */
  w32((uint32_t)(0x11822a68), (ECX));
  /* 11804097 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1180409a push edx */
  push32((uint32_t)(EDX));
  /* 1180409b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1180409e push eax */
  push32((uint32_t)(EAX));
  /* 1180409f push 1 */
  push32((uint32_t)(0x1u));
  /* 118040a1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118040a4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 118040a7 push edx */
  push32((uint32_t)(EDX));
  /* 118040a8 call 0x118043a0 */
  push32(0x118040adu); f_118043a0();
  /* 118040ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118040b0 jmp 0x11804298 */
  goto L_11804298;
L_118040b5:;
  /* 118040b5 mov eax, dword ptr [0x11822a58] */
  EAX = (r32((uint32_t)(0x11822a58)));
  /* 118040ba mov dword ptr [0x11822a68], eax */
  w32((uint32_t)(0x11822a68), (EAX));
  /* 118040bf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118040c2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118040c6 jne 0x118040d1 */
  if (!C.zf) goto L_118040d1;
  /* 118040c8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 118040cf jmp 0x118040dd */
  goto L_118040dd;
L_118040d1:;
  /* 118040d1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118040d4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 118040d7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118040da mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_118040dd:;
  /* 118040dd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118040e0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 118040e3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118040e6 jge 0x118040f1 */
  if ((C.sf==C.of)) goto L_118040f1;
  /* 118040e8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 118040ef jmp 0x1180411e */
  goto L_1180411e;
L_118040f1:;
  /* 118040f1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118040f4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 118040f7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118040f8 mov ecx, 7 */
  ECX = (0x7u);
  /* 118040fd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118040ff mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11804102 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11804105 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11804108 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11804109 mov ecx, 7 */
  ECX = (0x7u);
  /* 1180410e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11804110 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804113 jl 0x1180411e */
  if ((C.sf!=C.of)) goto L_1180411e;
  /* 11804115 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11804118 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180411b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1180411e:;
  /* 1180411e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11804121 push eax */
  push32((uint32_t)(EAX));
  /* 11804122 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11804125 push ecx */
  push32((uint32_t)(ECX));
  /* 11804126 push 2 */
  push32((uint32_t)(0x2u));
  /* 11804128 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1180412b push edx */
  push32((uint32_t)(EDX));
  /* 1180412c call 0x118043a0 */
  push32(0x11804131u); f_118043a0();
  /* 11804131 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11804134 jmp 0x11804298 */
  goto L_11804298;
L_11804139:;
  /* 11804139 cmp dword ptr [0x11822a58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822a58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804140 je 0x11804170 */
  if (C.zf) goto L_11804170;
  /* 11804142 mov dword ptr [0x11822a58], 0 */
  w32((uint32_t)(0x11822a58), (0x0u));
  /* 1180414c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1180414f push eax */
  push32((uint32_t)(EAX));
  /* 11804150 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11804153 push ecx */
  push32((uint32_t)(ECX));
  /* 11804154 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11804157 push edx */
  push32((uint32_t)(EDX));
  /* 11804158 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1180415b push eax */
  push32((uint32_t)(EAX));
  /* 1180415c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1180415f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11804165 push edx */
  push32((uint32_t)(EDX));
  /* 11804166 call 0x11804500 */
  push32(0x1180416bu); f_11804500();
  /* 1180416b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180416e jmp 0x11804192 */
  goto L_11804192;
L_11804170:;
  /* 11804170 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11804173 push eax */
  push32((uint32_t)(EAX));
  /* 11804174 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11804177 push ecx */
  push32((uint32_t)(ECX));
  /* 11804178 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1180417b push edx */
  push32((uint32_t)(EDX));
  /* 1180417c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1180417f push eax */
  push32((uint32_t)(EAX));
  /* 11804180 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11804183 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11804189 push edx */
  push32((uint32_t)(EDX));
  /* 1180418a call 0x11804500 */
  push32(0x1180418fu); f_11804500();
  /* 1180418f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11804192:;
  /* 11804192 jmp 0x11804298 */
  goto L_11804298;
L_11804197:;
  /* 11804197 mov dword ptr [0x11822a58], 0 */
  w32((uint32_t)(0x11822a58), (0x0u));
  /* 118041a1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 118041a4 push eax */
  push32((uint32_t)(EAX));
  /* 118041a5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118041a8 push ecx */
  push32((uint32_t)(ECX));
  /* 118041a9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118041ac push edx */
  push32((uint32_t)(EDX));
  /* 118041ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118041b0 push eax */
  push32((uint32_t)(EAX));
  /* 118041b1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 118041b4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 118041ba push edx */
  push32((uint32_t)(EDX));
  /* 118041bb call 0x11804500 */
  push32(0x118041c0u); f_11804500();
  /* 118041c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118041c3 jmp 0x11804298 */
  goto L_11804298;
L_118041c8:;
  /* 118041c8 mov eax, dword ptr [0x11822a58] */
  EAX = (r32((uint32_t)(0x11822a58)));
  /* 118041cd mov dword ptr [0x11822a68], eax */
  w32((uint32_t)(0x11822a68), (EAX));
  /* 118041d2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118041d5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 118041d8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118041d9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 118041de idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118041e0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 118041e3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 118041e6 push edx */
  push32((uint32_t)(EDX));
  /* 118041e7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118041ea push eax */
  push32((uint32_t)(EAX));
  /* 118041eb push 2 */
  push32((uint32_t)(0x2u));
  /* 118041ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118041f0 push ecx */
  push32((uint32_t)(ECX));
  /* 118041f1 call 0x118043a0 */
  push32(0x118041f6u); f_118043a0();
  /* 118041f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118041f9 jmp 0x11804298 */
  goto L_11804298;
L_118041fe:;
  /* 118041fe mov edx, dword ptr [0x11822a58] */
  EDX = (r32((uint32_t)(0x11822a58)));
  /* 11804204 mov dword ptr [0x11822a68], edx */
  w32((uint32_t)(0x11822a68), (EDX));
  /* 1180420a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1180420d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 11804210 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11804211 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11804216 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11804218 mov ecx, eax */
  ECX = (EAX);
  /* 1180421a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180421d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11804220 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11804223 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11804226 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11804227 mov esi, 0x64 */
  ESI = (0x64u);
  /* 1180422c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1180422e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11804230 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11804233 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11804236 push eax */
  push32((uint32_t)(EAX));
  /* 11804237 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1180423a push ecx */
  push32((uint32_t)(ECX));
  /* 1180423b push 4 */
  push32((uint32_t)(0x4u));
  /* 1180423d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11804240 push edx */
  push32((uint32_t)(EDX));
  /* 11804241 call 0x118043a0 */
  push32(0x11804246u); f_118043a0();
  /* 11804246 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11804249 jmp 0x11804298 */
  goto L_11804298;
L_1180424b:;
  /* 1180424b call 0x11805360 */
  push32(0x11804250u); f_11805360();
  /* 11804250 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11804253 push eax */
  push32((uint32_t)(EAX));
  /* 11804254 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11804257 push ecx */
  push32((uint32_t)(ECX));
  /* 11804258 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1180425b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1180425d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804261 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 11804264 mov ecx, dword ptr [eax*4 + 0x11821e1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11821e1c)));
  /* 1180426b push ecx */
  push32((uint32_t)(ECX));
  /* 1180426c call 0x11804350 */
  push32(0x11804271u); f_11804350();
  /* 11804271 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11804274 jmp 0x11804298 */
  goto L_11804298;
L_11804276:;
  /* 11804276 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11804279 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1180427b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 1180427e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11804281 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11804283 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11804286 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11804289 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1180428b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1180428e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11804290 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11804293 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11804296 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11804298:;
  /* 11804298 pop esi */
  ESI = (pop32());
  /* 11804299 mov esp, ebp */
  ESP = (EBP);
  /* 1180429b pop ebp */
  EBP = (pop32());
  /* 1180429c ret  */
  ESPCHK(0x11803d30u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x11804350 (72 bytes, 30 insns) */
void f_11804350(void) {
  FTRACE(0x11804350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11804350 push ebp */
  push32((uint32_t)(EBP));
  /* 11804351 mov ebp, esp */
  EBP = (ESP);
L_11804353:;
  /* 11804353 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11804356 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804359 je 0x11804396 */
  if (C.zf) goto L_11804396;
  /* 1180435b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180435e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11804361 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11804363 je 0x11804396 */
  if (C.zf) goto L_11804396;
  /* 11804365 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11804368 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1180436a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180436d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1180436f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11804371 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11804374 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11804376 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11804379 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1180437c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1180437e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11804381 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11804384 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11804387 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1180438a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1180438c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1180438f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11804392 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11804394 jmp 0x11804353 */
  goto L_11804353;
L_11804396:;
  /* 11804396 pop ebp */
  EBP = (pop32());
  /* 11804397 ret  */
  ESPCHK(0x11804350u, _esp0);
  ESP += 4; return;
}

/* FUN_100143a0 @ 0x118043a0 (173 bytes, 64 insns) */
void f_118043a0(void) {
  FTRACE(0x118043a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118043a0 push ebp */
  push32((uint32_t)(EBP));
  /* 118043a1 mov ebp, esp */
  EBP = (ESP);
  /* 118043a3 push ecx */
  push32((uint32_t)(ECX));
  /* 118043a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 118043ab cmp dword ptr [0x11822a68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822a68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118043b2 je 0x118043ca */
  if (C.zf) goto L_118043ca;
  /* 118043b4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118043b7 push eax */
  push32((uint32_t)(EAX));
  /* 118043b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118043bb push ecx */
  push32((uint32_t)(ECX));
  /* 118043bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118043bf push edx */
  push32((uint32_t)(EDX));
  /* 118043c0 call 0x11804450 */
  push32(0x118043c5u); f_11804450();
  /* 118043c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118043c8 jmp 0x11804449 */
  goto L_11804449;
L_118043ca:;
  /* 118043ca mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118043cd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118043d0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118043d2 jae 0x11804440 */
  if (!C.cf) goto L_11804440;
  /* 118043d4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118043d7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118043da mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 118043dd jmp 0x118043e8 */
  goto L_118043e8;
L_118043df:;
  /* 118043df mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118043e2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118043e5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_118043e8:;
  /* 118043e8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118043eb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118043ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118043f0 je 0x11804424 */
  if (C.zf) goto L_11804424;
  /* 118043f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118043f5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118043f6 mov ecx, 0xa */
  ECX = (0xau);
  /* 118043fb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118043fd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11804400 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11804403 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11804405 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11804408 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 1180440b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180440e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1180440f mov ecx, 0xa */
  ECX = (0xau);
  /* 11804414 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11804416 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11804419 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1180441c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180441f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11804422 jmp 0x118043df */
  goto L_118043df;
L_11804424:;
  /* 11804424 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11804427 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11804429 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180442c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1180442f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11804431 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11804434 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11804436 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11804439 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1180443c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1180443e jmp 0x11804449 */
  goto L_11804449;
L_11804440:;
  /* 11804440 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11804443 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11804449:;
  /* 11804449 mov esp, ebp */
  ESP = (EBP);
  /* 1180444b pop ebp */
  EBP = (pop32());
  /* 1180444c ret  */
  ESPCHK(0x118043a0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x11804450 (172 bytes, 65 insns) */
void f_11804450(void) {
  FTRACE(0x11804450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11804450 push ebp */
  push32((uint32_t)(EBP));
  /* 11804451 mov ebp, esp */
  EBP = (ESP);
  /* 11804453 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11804456 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11804459 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1180445b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1180445e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11804461 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804464 jbe 0x118044ab */
  if ((C.cf||C.zf)) goto L_118044ab;
L_11804466:;
  /* 11804466 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11804469 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1180446a mov ecx, 0xa */
  ECX = (0xau);
  /* 1180446f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11804471 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11804474 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11804477 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11804479 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1180447c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180447f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11804482 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11804485 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11804487 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1180448a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1180448d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1180448f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11804492 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11804493 mov ecx, 0xa */
  ECX = (0xau);
  /* 11804498 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1180449a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1180449d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118044a1 jle 0x118044ab */
  if ((C.zf||C.sf!=C.of)) goto L_118044ab;
  /* 118044a3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118044a6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118044a9 ja 0x11804466 */
  if ((!C.cf&&!C.zf)) goto L_11804466;
L_118044ab:;
  /* 118044ab mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118044ae mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118044b0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118044b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118044b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118044b9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 118044bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118044be sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118044c1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_118044c4:;
  /* 118044c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118044c7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118044c9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 118044cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118044cf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118044d2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118044d4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 118044d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118044d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118044dc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 118044df mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118044e2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 118044e5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 118044e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118044ea add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118044ed mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118044f0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118044f3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118044f6 jb 0x118044c4 */
  if (C.cf) goto L_118044c4;
  /* 118044f8 mov esp, ebp */
  ESP = (EBP);
  /* 118044fa pop ebp */
  EBP = (pop32());
  /* 118044fb ret  */
  ESPCHK(0x11804450u, _esp0);
  ESP += 4; return;
}

/* FUN_10014500 @ 0x11804500 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_11804500(void) {
  FTRACE(0x11804500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11804500 push ebp */
  push32((uint32_t)(EBP));
  /* 11804501 mov ebp, esp */
  EBP = (ESP);
  /* 11804503 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11804506:;
  /* 11804506 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11804509 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1180450c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1180450e je 0x1180497c */
  if (C.zf) goto L_1180497c;
  /* 11804514 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11804517 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180451a je 0x1180497c */
  if (C.zf) goto L_1180497c;
  /* 11804520 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11804524 mov dword ptr [0x11822a68], 0 */
  w32((uint32_t)(0x11822a68), (0x0u));
  /* 1180452e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11804535 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11804538 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1180453b jmp 0x11804546 */
  goto L_11804546;
L_1180453d:;
  /* 1180453d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11804540 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11804543 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11804546:;
  /* 11804546 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11804549 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1180454c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180454f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11804552 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11804555 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11804558 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1180455b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180455d jne 0x11804561 */
  if (!C.zf) goto L_11804561;
  /* 1180455f jmp 0x1180453d */
  goto L_1180453d;
L_11804561:;
  /* 11804561 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11804564 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11804567 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1180456a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180456d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11804570 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11804573 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11804576 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11804579 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1180457c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804580 ja 0x118048d0 */
  if ((!C.cf&&!C.zf)) goto L_118048d0;
  /* 11804586 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11804589 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1180458b mov al, byte ptr [ecx + 0x118049ac] */
  AL = (r8((uint32_t)(ECX + 0x118049ac)));
  /* 11804591 jmp dword ptr [eax*4 + 0x11804980] */
  switch (EAX) {
    case 0: goto L_118047ef;
    case 1: goto L_118046d3;
    case 2: goto L_1180465e;
    case 3: goto L_11804598;
    case 4: goto L_118045d6;
    case 5: goto L_11804637;
    case 6: goto L_11804685;
    case 7: goto L_118046ac;
    case 8: goto L_1180471a;
    case 9: goto L_11804614;
    case 10: goto L_118048d0;
    default: x86_unimpl("switch@0x11804591 out of table"); return;
  }
L_11804598:;
  /* 11804598 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1180459b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1180459e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 118045a1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118045a4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 118045a7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118045ab ja 0x118045d1 */
  if ((!C.cf&&!C.zf)) goto L_118045d1;
  /* 118045ad mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 118045b0 jmp dword ptr [ecx*4 + 0x118049ff] */
  switch (ECX) {
    case 0: goto L_118045b7;
    case 1: goto L_118045c1;
    case 2: goto L_118045c7;
    case 3: goto L_118045cd;
    case 4: goto L_118045f5;
    case 5: goto L_118045ff;
    case 6: goto L_11804605;
    case 7: goto L_1180460b;
    default: x86_unimpl("switch@0x118045b0 out of table"); return;
  }
L_118045b7:;
  /* 118045b7 mov dword ptr [0x11822a68], 1 */
  w32((uint32_t)(0x11822a68), (0x1u));
L_118045c1:;
  /* 118045c1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 118045c5 jmp 0x118045d1 */
  goto L_118045d1;
L_118045c7:;
  /* 118045c7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 118045cb jmp 0x118045d1 */
  goto L_118045d1;
L_118045cd:;
  /* 118045cd mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_118045d1:;
  /* 118045d1 jmp 0x118048d0 */
  goto L_118048d0;
L_118045d6:;
  /* 118045d6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118045d9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 118045dc mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 118045df sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118045e2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 118045e5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118045e9 ja 0x1180460f */
  if ((!C.cf&&!C.zf)) goto L_1180460f;
  /* 118045eb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 118045ee jmp dword ptr [ecx*4 + 0x11804a0f] */
  switch (ECX) {
    case 0: goto L_118045f5;
    case 1: goto L_118045ff;
    case 2: goto L_11804605;
    case 3: goto L_1180460b;
    default: x86_unimpl("switch@0x118045ee out of table"); return;
  }
L_118045f5:;
  /* 118045f5 mov dword ptr [0x11822a68], 1 */
  w32((uint32_t)(0x11822a68), (0x1u));
L_118045ff:;
  /* 118045ff mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 11804603 jmp 0x1180460f */
  goto L_1180460f;
L_11804605:;
  /* 11804605 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 11804609 jmp 0x1180460f */
  goto L_1180460f;
L_1180460b:;
  /* 1180460b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_1180460f:;
  /* 1180460f jmp 0x118048d0 */
  goto L_118048d0;
L_11804614:;
  /* 11804614 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11804617 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1180461a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180461e je 0x11804628 */
  if (C.zf) goto L_11804628;
  /* 11804620 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804624 je 0x1180462e */
  if (C.zf) goto L_1180462e;
  /* 11804626 jmp 0x11804632 */
  goto L_11804632;
L_11804628:;
  /* 11804628 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 1180462c jmp 0x11804632 */
  goto L_11804632;
L_1180462e:;
  /* 1180462e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_11804632:;
  /* 11804632 jmp 0x118048d0 */
  goto L_118048d0;
L_11804637:;
  /* 11804637 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1180463a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1180463d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804641 je 0x1180464b */
  if (C.zf) goto L_1180464b;
  /* 11804643 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804647 je 0x11804655 */
  if (C.zf) goto L_11804655;
  /* 11804649 jmp 0x11804659 */
  goto L_11804659;
L_1180464b:;
  /* 1180464b mov dword ptr [0x11822a68], 1 */
  w32((uint32_t)(0x11822a68), (0x1u));
L_11804655:;
  /* 11804655 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_11804659:;
  /* 11804659 jmp 0x118048d0 */
  goto L_118048d0;
L_1180465e:;
  /* 1180465e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11804661 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11804664 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804668 je 0x11804672 */
  if (C.zf) goto L_11804672;
  /* 1180466a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180466e je 0x1180467c */
  if (C.zf) goto L_1180467c;
  /* 11804670 jmp 0x11804680 */
  goto L_11804680;
L_11804672:;
  /* 11804672 mov dword ptr [0x11822a68], 1 */
  w32((uint32_t)(0x11822a68), (0x1u));
L_1180467c:;
  /* 1180467c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_11804680:;
  /* 11804680 jmp 0x118048d0 */
  goto L_118048d0;
L_11804685:;
  /* 11804685 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11804688 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 1180468b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180468f je 0x11804699 */
  if (C.zf) goto L_11804699;
  /* 11804691 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804695 je 0x118046a3 */
  if (C.zf) goto L_118046a3;
  /* 11804697 jmp 0x118046a7 */
  goto L_118046a7;
L_11804699:;
  /* 11804699 mov dword ptr [0x11822a68], 1 */
  w32((uint32_t)(0x11822a68), (0x1u));
L_118046a3:;
  /* 118046a3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_118046a7:;
  /* 118046a7 jmp 0x118048d0 */
  goto L_118048d0;
L_118046ac:;
  /* 118046ac mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118046af mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 118046b2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118046b6 je 0x118046c0 */
  if (C.zf) goto L_118046c0;
  /* 118046b8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118046bc je 0x118046ca */
  if (C.zf) goto L_118046ca;
  /* 118046be jmp 0x118046ce */
  goto L_118046ce;
L_118046c0:;
  /* 118046c0 mov dword ptr [0x11822a68], 1 */
  w32((uint32_t)(0x11822a68), (0x1u));
L_118046ca:;
  /* 118046ca mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_118046ce:;
  /* 118046ce jmp 0x118048d0 */
  goto L_118048d0;
L_118046d3:;
  /* 118046d3 push 0x1181ef5c */
  push32((uint32_t)(0x1181ef5cu));
  /* 118046d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118046db push ecx */
  push32((uint32_t)(ECX));
  /* 118046dc call 0x11804f30 */
  push32(0x118046e1u); f_11804f30();
  /* 118046e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118046e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118046e6 jne 0x118046f3 */
  if (!C.zf) goto L_118046f3;
  /* 118046e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118046eb add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118046ee mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 118046f1 jmp 0x11804711 */
  goto L_11804711;
L_118046f3:;
  /* 118046f3 push 0x1181ef58 */
  push32((uint32_t)(0x1181ef58u));
  /* 118046f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118046fb push eax */
  push32((uint32_t)(EAX));
  /* 118046fc call 0x11804f30 */
  push32(0x11804701u); f_11804f30();
  /* 11804701 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11804704 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11804706 jne 0x11804711 */
  if (!C.zf) goto L_11804711;
  /* 11804708 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180470b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180470e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11804711:;
  /* 11804711 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 11804715 jmp 0x118048d0 */
  goto L_118048d0;
L_1180471a:;
  /* 1180471a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1180471d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804721 jg 0x11804731 */
  if ((!C.zf&&C.sf==C.of)) goto L_11804731;
  /* 11804723 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11804726 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1180472c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1180472f jmp 0x1180473d */
  goto L_1180473d;
L_11804731:;
  /* 11804731 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11804734 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 1180473a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1180473d:;
  /* 1180473d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804741 jle 0x118047e4 */
  if ((C.zf||C.sf!=C.of)) goto L_118047e4;
  /* 11804747 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1180474a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180474d jbe 0x118047e4 */
  if ((C.cf||C.zf)) goto L_118047e4;
  /* 11804753 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11804756 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11804758 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1180475a mov ecx, dword ptr [0x11820c98] */
  ECX = (r32((uint32_t)(0x11820c98)));
  /* 11804760 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11804762 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11804766 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1180476c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1180476e je 0x118047a7 */
  if (C.zf) goto L_118047a7;
  /* 11804770 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11804773 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804776 jbe 0x118047a7 */
  if ((C.cf||C.zf)) goto L_118047a7;
  /* 11804778 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1180477b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1180477d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11804780 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11804782 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11804784 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11804787 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11804789 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180478c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1180478f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11804791 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11804794 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11804797 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1180479a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1180479d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1180479f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118047a2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 118047a5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_118047a7:;
  /* 118047a7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118047aa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118047ac mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 118047af mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118047b1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 118047b3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118047b6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118047b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118047bb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118047be mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 118047c0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118047c3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118047c6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 118047c9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 118047cc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 118047ce sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118047d1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118047d4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 118047d6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118047d9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118047dc mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 118047df jmp 0x1180473d */
  goto L_1180473d;
L_118047e4:;
  /* 118047e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118047e7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 118047ea jmp 0x11804506 */
  goto L_11804506;
L_118047ef:;
  /* 118047ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118047f2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 118047f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118047f7 je 0x118048c2 */
  if (C.zf) goto L_118048c2;
  /* 118047fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11804800 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11804803 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11804806:;
  /* 11804806 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11804809 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1180480c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1180480e je 0x118048c0 */
  if (C.zf) goto L_118048c0;
  /* 11804814 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11804817 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180481a je 0x118048c0 */
  if (C.zf) goto L_118048c0;
  /* 11804820 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11804823 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11804826 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804829 jne 0x11804839 */
  if (!C.zf) goto L_11804839;
  /* 1180482b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180482e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11804831 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11804834 jmp 0x118048c0 */
  goto L_118048c0;
L_11804839:;
  /* 11804839 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180483c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1180483e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11804840 mov edx, dword ptr [0x11820c98] */
  EDX = (r32((uint32_t)(0x11820c98)));
  /* 11804846 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11804848 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1180484c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11804851 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11804853 je 0x1180488c */
  if (C.zf) goto L_1180488c;
  /* 11804855 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11804858 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180485b jbe 0x1180488c */
  if ((C.cf||C.zf)) goto L_1180488c;
  /* 1180485d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11804860 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11804862 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11804865 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11804867 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11804869 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1180486c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1180486e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11804871 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11804874 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11804876 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11804879 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180487c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1180487f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11804882 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11804884 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11804887 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1180488a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1180488c:;
  /* 1180488c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1180488f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11804891 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11804894 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11804896 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11804898 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1180489b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1180489d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118048a0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118048a3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 118048a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118048a8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118048ab mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 118048ae mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118048b1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118048b3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118048b6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 118048b9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 118048bb jmp 0x11804806 */
  goto L_11804806;
L_118048c0:;
  /* 118048c0 jmp 0x118048cb */
  goto L_118048cb;
L_118048c2:;
  /* 118048c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118048c5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118048c8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_118048cb:;
  /* 118048cb jmp 0x11804506 */
  goto L_11804506;
L_118048d0:;
  /* 118048d0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 118048d4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118048d6 je 0x118048fc */
  if (C.zf) goto L_118048fc;
  /* 118048d8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 118048db push edx */
  push32((uint32_t)(EDX));
  /* 118048dc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118048df push eax */
  push32((uint32_t)(EAX));
  /* 118048e0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118048e3 push ecx */
  push32((uint32_t)(ECX));
  /* 118048e4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118048e7 push edx */
  push32((uint32_t)(EDX));
  /* 118048e8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 118048eb push eax */
  push32((uint32_t)(EAX));
  /* 118048ec call 0x11803d30 */
  push32(0x118048f1u); f_11803d30();
  /* 118048f1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118048f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118048f7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 118048fa jmp 0x11804977 */
  goto L_11804977;
L_118048fc:;
  /* 118048fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118048ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11804901 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11804903 mov ecx, dword ptr [0x11820c98] */
  ECX = (r32((uint32_t)(0x11820c98)));
  /* 11804909 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1180490b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1180490f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11804915 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11804917 je 0x11804948 */
  if (C.zf) goto L_11804948;
  /* 11804919 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1180491c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1180491e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11804921 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11804923 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11804925 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11804928 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1180492a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180492d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11804930 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11804932 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11804935 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11804938 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1180493b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1180493e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11804940 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11804943 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11804946 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11804948:;
  /* 11804948 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1180494b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1180494d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11804950 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11804952 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11804954 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11804957 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11804959 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180495c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1180495f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11804961 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11804964 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11804967 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1180496a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1180496d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1180496f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11804972 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11804975 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11804977:;
  /* 11804977 jmp 0x11804506 */
  goto L_11804506;
L_1180497c:;
  /* 1180497c mov esp, ebp */
  ESP = (EBP);
  /* 1180497e pop ebp */
  EBP = (pop32());
  /* 1180497f ret  */
  ESPCHK(0x11804500u, _esp0);
  ESP += 4; return;
}

/* FUN_10014a20 @ 0x11804a20 (650 bytes, 178 insns) */
void f_11804a20(void) {
  FTRACE(0x11804a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11804a20 push ebp */
  push32((uint32_t)(EBP));
  /* 11804a21 mov ebp, esp */
  EBP = (ESP);
  /* 11804a23 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11804a29 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804a2d jne 0x11804b89 */
  if (!C.zf) goto L_11804b89;
  /* 11804a33 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11804a36 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 11804a3c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 11804a42 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11804a45 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11804a4c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 11804a56 push 0 */
  push32((uint32_t)(0x0u));
  /* 11804a58 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11804a5e push edx */
  push32((uint32_t)(EDX));
  /* 11804a5f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11804a62 push eax */
  push32((uint32_t)(EAX));
  /* 11804a63 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11804a66 push ecx */
  push32((uint32_t)(ECX));
  /* 11804a67 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11804a6a push edx */
  push32((uint32_t)(EDX));
  /* 11804a6b call 0x11805e40 */
  push32(0x11804a70u); f_11805e40();
  /* 11804a70 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11804a73 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11804a76 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804a7a jne 0x11804b0f */
  if (!C.zf) goto L_11804b0f;
  /* 11804a80 call dword ptr [0x118253f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253f0))), 0x11804a86u);
  /* 11804a86 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804a89 je 0x11804a90 */
  if (C.zf) goto L_11804a90;
  /* 11804a8b jmp 0x11804b6d */
  goto L_11804b6d;
L_11804a90:;
  /* 11804a90 push 0 */
  push32((uint32_t)(0x0u));
  /* 11804a92 push 0 */
  push32((uint32_t)(0x0u));
  /* 11804a94 push 0 */
  push32((uint32_t)(0x0u));
  /* 11804a96 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11804a99 push eax */
  push32((uint32_t)(EAX));
  /* 11804a9a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11804a9d push ecx */
  push32((uint32_t)(ECX));
  /* 11804a9e call 0x11805e40 */
  push32(0x11804aa3u); f_11805e40();
  /* 11804aa3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11804aa6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 11804aac cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804ab3 jne 0x11804aba */
  if (!C.zf) goto L_11804aba;
  /* 11804ab5 jmp 0x11804b6d */
  goto L_11804b6d;
L_11804aba:;
  /* 11804aba push 0x58 */
  push32((uint32_t)(0x58u));
  /* 11804abc push 0x1181ef64 */
  push32((uint32_t)(0x1181ef64u));
  /* 11804ac1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11804ac3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11804ac9 push edx */
  push32((uint32_t)(EDX));
  /* 11804aca call 0x117f6860 */
  push32(0x11804acfu); f_117f6860();
  /* 11804acf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11804ad2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11804ad5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804ad9 jne 0x11804ae0 */
  if (!C.zf) goto L_11804ae0;
  /* 11804adb jmp 0x11804b6d */
  goto L_11804b6d;
L_11804ae0:;
  /* 11804ae0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11804ae7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11804ae9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 11804aef push eax */
  push32((uint32_t)(EAX));
  /* 11804af0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11804af3 push ecx */
  push32((uint32_t)(ECX));
  /* 11804af4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11804af7 push edx */
  push32((uint32_t)(EDX));
  /* 11804af8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11804afb push eax */
  push32((uint32_t)(EAX));
  /* 11804afc call 0x11805e40 */
  push32(0x11804b01u); f_11805e40();
  /* 11804b01 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11804b04 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11804b07 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804b0b jne 0x11804b0f */
  if (!C.zf) goto L_11804b0f;
  /* 11804b0d jmp 0x11804b6d */
  goto L_11804b6d;
L_11804b0f:;
  /* 11804b0f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11804b11 push 0x1181ef64 */
  push32((uint32_t)(0x1181ef64u));
  /* 11804b16 push 2 */
  push32((uint32_t)(0x2u));
  /* 11804b18 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11804b1b push ecx */
  push32((uint32_t)(ECX));
  /* 11804b1c call 0x117f6860 */
  push32(0x11804b21u); f_117f6860();
  /* 11804b21 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11804b24 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 11804b2a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11804b2c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11804b32 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804b35 jne 0x11804b39 */
  if (!C.zf) goto L_11804b39;
  /* 11804b37 jmp 0x11804b6d */
  goto L_11804b6d;
L_11804b39:;
  /* 11804b39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11804b3c push ecx */
  push32((uint32_t)(ECX));
  /* 11804b3d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11804b40 push edx */
  push32((uint32_t)(EDX));
  /* 11804b41 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11804b47 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11804b49 push ecx */
  push32((uint32_t)(ECX));
  /* 11804b4a call 0x117fa080 */
  push32(0x11804b4fu); f_117fa080();
  /* 11804b4f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11804b52 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804b56 je 0x11804b66 */
  if (C.zf) goto L_11804b66;
  /* 11804b58 push 2 */
  push32((uint32_t)(0x2u));
  /* 11804b5a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11804b5d push edx */
  push32((uint32_t)(EDX));
  /* 11804b5e call 0x117f72f0 */
  push32(0x11804b63u); f_117f72f0();
  /* 11804b63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11804b66:;
  /* 11804b66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11804b68 jmp 0x11804ca6 */
  goto L_11804ca6;
L_11804b6d:;
  /* 11804b6d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804b71 je 0x11804b81 */
  if (C.zf) goto L_11804b81;
  /* 11804b73 push 2 */
  push32((uint32_t)(0x2u));
  /* 11804b75 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11804b78 push eax */
  push32((uint32_t)(EAX));
  /* 11804b79 call 0x117f72f0 */
  push32(0x11804b7eu); f_117f72f0();
  /* 11804b7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11804b81:;
  /* 11804b81 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11804b84 jmp 0x11804ca6 */
  goto L_11804ca6;
L_11804b89:;
  /* 11804b89 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804b8d jne 0x11804ca3 */
  if (!C.zf) goto L_11804ca3;
  /* 11804b93 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 11804b9d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11804ba0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11804ba6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11804ba8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11804bae push edx */
  push32((uint32_t)(EDX));
  /* 11804baf push 0x11822980 */
  push32((uint32_t)(0x11822980u));
  /* 11804bb4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11804bb7 push eax */
  push32((uint32_t)(EAX));
  /* 11804bb8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11804bbb push ecx */
  push32((uint32_t)(ECX));
  /* 11804bbc call 0x11805ca0 */
  push32(0x11804bc1u); f_11805ca0();
  /* 11804bc1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11804bc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11804bc6 jne 0x11804bd0 */
  if (!C.zf) goto L_11804bd0;
  /* 11804bc8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11804bcb jmp 0x11804ca6 */
  goto L_11804ca6;
L_11804bd0:;
  /* 11804bd0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11804bd6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11804bd9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 11804be3 jmp 0x11804bf4 */
  goto L_11804bf4;
L_11804be5:;
  /* 11804be5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11804beb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11804bee mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_11804bf4:;
  /* 11804bf4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804bfb jge 0x11804c9f */
  if ((C.sf==C.of)) goto L_11804c9f;
  /* 11804c01 cmp dword ptr [0x11820ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11820ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804c08 jle 0x11804c3b */
  if ((C.zf||C.sf!=C.of)) goto L_11804c3b;
  /* 11804c0a push 4 */
  push32((uint32_t)(0x4u));
  /* 11804c0c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11804c12 mov dl, byte ptr [ecx*2 + 0x11822980] */
  DL = (r8((uint32_t)(ECX*2 + 0x11822980)));
  /* 11804c19 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11804c1f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11804c25 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11804c2a push eax */
  push32((uint32_t)(EAX));
  /* 11804c2b call 0x117fc870 */
  push32(0x11804c30u); f_117fc870();
  /* 11804c30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11804c33 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11804c39 jmp 0x11804c6e */
  goto L_11804c6e;
L_11804c3b:;
  /* 11804c3b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11804c41 mov dl, byte ptr [ecx*2 + 0x11822980] */
  DL = (r8((uint32_t)(ECX*2 + 0x11822980)));
  /* 11804c48 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11804c4e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11804c54 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11804c59 mov ecx, dword ptr [0x11820c98] */
  ECX = (r32((uint32_t)(0x11820c98)));
  /* 11804c5f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11804c61 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11804c65 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11804c68 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_11804c6e:;
  /* 11804c6e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804c75 je 0x11804c98 */
  if (C.zf) goto L_11804c98;
  /* 11804c77 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11804c7d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11804c80 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11804c83 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 11804c8a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11804c8e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11804c94 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11804c96 jmp 0x11804c9a */
  goto L_11804c9a;
L_11804c98:;
  /* 11804c98 jmp 0x11804c9f */
  goto L_11804c9f;
L_11804c9a:;
  /* 11804c9a jmp 0x11804be5 */
  goto L_11804be5;
L_11804c9f:;
  /* 11804c9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11804ca1 jmp 0x11804ca6 */
  goto L_11804ca6;
L_11804ca3:;
  /* 11804ca3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11804ca6:;
  /* 11804ca6 mov esp, ebp */
  ESP = (EBP);
  /* 11804ca8 pop ebp */
  EBP = (pop32());
  /* 11804ca9 ret  */
  ESPCHK(0x11804a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10014cb0 @ 0x11804cb0 (10 bytes, 5 insns) */
void f_11804cb0(void) {
  FTRACE(0x11804cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11804cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11804cb1 mov ebp, esp */
  EBP = (ESP);
  /* 11804cb3 mov eax, dword ptr [0x11821d88] */
  EAX = (r32((uint32_t)(0x11821d88)));
  /* 11804cb8 pop ebp */
  EBP = (pop32());
  /* 11804cb9 ret  */
  ESPCHK(0x11804cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014cc0 @ 0x11804cc0 (575 bytes, 196 insns) */
void f_11804cc0(void) {
  FTRACE(0x11804cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11804cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11804cc1 mov ebp, esp */
  EBP = (ESP);
  /* 11804cc3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11804cc5 push 0x1181ef70 */
  push32((uint32_t)(0x1181ef70u));
  /* 11804cca push 0x117ff968 */
  push32((uint32_t)(0x117ff968u));
  /* 11804ccf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11804cd5 push eax */
  push32((uint32_t)(EAX));
  /* 11804cd6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11804cdd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11804ce0 push ebx */
  push32((uint32_t)(EBX));
  /* 11804ce1 push esi */
  push32((uint32_t)(ESI));
  /* 11804ce2 push edi */
  push32((uint32_t)(EDI));
  /* 11804ce3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11804ce6 cmp dword ptr [0x1182298c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1182298c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804ced jne 0x11804d3e */
  if (!C.zf) goto L_11804d3e;
  /* 11804cef lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11804cf2 push eax */
  push32((uint32_t)(EAX));
  /* 11804cf3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11804cf5 push 0x1181e6a4 */
  push32((uint32_t)(0x1181e6a4u));
  /* 11804cfa push 1 */
  push32((uint32_t)(0x1u));
  /* 11804cfc call dword ptr [0x11825330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825330))), 0x11804d02u);
  /* 11804d02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11804d04 je 0x11804d12 */
  if (C.zf) goto L_11804d12;
  /* 11804d06 mov dword ptr [0x1182298c], 1 */
  w32((uint32_t)(0x1182298c), (0x1u));
  /* 11804d10 jmp 0x11804d3e */
  goto L_11804d3e;
L_11804d12:;
  /* 11804d12 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11804d15 push ecx */
  push32((uint32_t)(ECX));
  /* 11804d16 push 1 */
  push32((uint32_t)(0x1u));
  /* 11804d18 push 0x1181e6a0 */
  push32((uint32_t)(0x1181e6a0u));
  /* 11804d1d push 1 */
  push32((uint32_t)(0x1u));
  /* 11804d1f push 0 */
  push32((uint32_t)(0x0u));
  /* 11804d21 call dword ptr [0x11825334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825334))), 0x11804d27u);
  /* 11804d27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11804d29 je 0x11804d37 */
  if (C.zf) goto L_11804d37;
  /* 11804d2b mov dword ptr [0x1182298c], 2 */
  w32((uint32_t)(0x1182298c), (0x2u));
  /* 11804d35 jmp 0x11804d3e */
  goto L_11804d3e;
L_11804d37:;
  /* 11804d37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11804d39 jmp 0x11804f19 */
  goto L_11804f19;
L_11804d3e:;
  /* 11804d3e cmp dword ptr [0x1182298c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1182298c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804d45 jne 0x11804d62 */
  if (!C.zf) goto L_11804d62;
  /* 11804d47 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11804d4a push edx */
  push32((uint32_t)(EDX));
  /* 11804d4b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11804d4e push eax */
  push32((uint32_t)(EAX));
  /* 11804d4f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11804d52 push ecx */
  push32((uint32_t)(ECX));
  /* 11804d53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11804d56 push edx */
  push32((uint32_t)(EDX));
  /* 11804d57 call dword ptr [0x11825330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825330))), 0x11804d5du);
  /* 11804d5d jmp 0x11804f19 */
  goto L_11804f19;
L_11804d62:;
  /* 11804d62 cmp dword ptr [0x1182298c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1182298c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804d69 jne 0x11804f17 */
  if (!C.zf) goto L_11804f17;
  /* 11804d6f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804d73 jne 0x11804d7d */
  if (!C.zf) goto L_11804d7d;
  /* 11804d75 mov eax, dword ptr [0x11822900] */
  EAX = (r32((uint32_t)(0x11822900)));
  /* 11804d7a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11804d7d:;
  /* 11804d7d push 0 */
  push32((uint32_t)(0x0u));
  /* 11804d7f push 0 */
  push32((uint32_t)(0x0u));
  /* 11804d81 push 0 */
  push32((uint32_t)(0x0u));
  /* 11804d83 push 0 */
  push32((uint32_t)(0x0u));
  /* 11804d85 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11804d88 push ecx */
  push32((uint32_t)(ECX));
  /* 11804d89 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11804d8c push edx */
  push32((uint32_t)(EDX));
  /* 11804d8d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11804d92 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11804d95 push eax */
  push32((uint32_t)(EAX));
  /* 11804d96 call dword ptr [0x11825384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825384))), 0x11804d9cu);
  /* 11804d9c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11804d9f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804da3 jne 0x11804dac */
  if (!C.zf) goto L_11804dac;
  /* 11804da5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11804da7 jmp 0x11804f19 */
  goto L_11804f19;
L_11804dac:;
  /* 11804dac mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11804db3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11804db6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11804db9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11804dbb call 0x117f9a00 */
  push32(0x11804dc0u); f_117f9a00();
  /* 11804dc0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11804dc3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11804dc6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11804dc9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11804dcc mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11804dcf push edx */
  push32((uint32_t)(EDX));
  /* 11804dd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11804dd2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11804dd5 push eax */
  push32((uint32_t)(EAX));
  /* 11804dd6 call 0x117fa5d0 */
  push32(0x11804ddbu); f_117fa5d0();
  /* 11804ddb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11804dde mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11804de5 jmp 0x11804dfe */
  goto L_11804dfe;
  /* 11804de7 mov eax, 1 */
  EAX = (0x1u);
  /* 11804dec ret  */
  ESPCHK(0x11804cc0u, _esp0);
  ESP += 4; return;
  /* 11804ded mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11804df0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11804df7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11804dfe:;
  /* 11804dfe cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804e02 jne 0x11804e0b */
  if (!C.zf) goto L_11804e0b;
  /* 11804e04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11804e06 jmp 0x11804f19 */
  goto L_11804f19;
L_11804e0b:;
  /* 11804e0b push 0 */
  push32((uint32_t)(0x0u));
  /* 11804e0d push 0 */
  push32((uint32_t)(0x0u));
  /* 11804e0f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11804e12 push ecx */
  push32((uint32_t)(ECX));
  /* 11804e13 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11804e16 push edx */
  push32((uint32_t)(EDX));
  /* 11804e17 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11804e1a push eax */
  push32((uint32_t)(EAX));
  /* 11804e1b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11804e1e push ecx */
  push32((uint32_t)(ECX));
  /* 11804e1f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11804e24 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11804e27 push edx */
  push32((uint32_t)(EDX));
  /* 11804e28 call dword ptr [0x11825384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825384))), 0x11804e2eu);
  /* 11804e2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11804e30 jne 0x11804e39 */
  if (!C.zf) goto L_11804e39;
  /* 11804e32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11804e34 jmp 0x11804f19 */
  goto L_11804f19;
L_11804e39:;
  /* 11804e39 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11804e40 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11804e43 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 11804e47 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11804e4a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11804e4c call 0x117f9a00 */
  push32(0x11804e51u); f_117f9a00();
  /* 11804e51 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11804e54 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11804e57 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11804e5a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11804e5d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11804e64 jmp 0x11804e7d */
  goto L_11804e7d;
  /* 11804e66 mov eax, 1 */
  EAX = (0x1u);
  /* 11804e6b ret  */
  ESPCHK(0x11804cc0u, _esp0);
  ESP += 4; return;
  /* 11804e6c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11804e6f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11804e76 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11804e7d:;
  /* 11804e7d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804e81 jne 0x11804e8a */
  if (!C.zf) goto L_11804e8a;
  /* 11804e83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11804e85 jmp 0x11804f19 */
  goto L_11804f19;
L_11804e8a:;
  /* 11804e8a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804e8e jne 0x11804e99 */
  if (!C.zf) goto L_11804e99;
  /* 11804e90 mov edx, dword ptr [0x118228f0] */
  EDX = (r32((uint32_t)(0x118228f0)));
  /* 11804e96 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11804e99:;
  /* 11804e99 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11804e9c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11804e9f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 11804ea5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11804ea8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11804eab mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 11804eb2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11804eb5 push ecx */
  push32((uint32_t)(ECX));
  /* 11804eb6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11804eb9 push edx */
  push32((uint32_t)(EDX));
  /* 11804eba mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11804ebd push eax */
  push32((uint32_t)(EAX));
  /* 11804ebe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11804ec1 push ecx */
  push32((uint32_t)(ECX));
  /* 11804ec2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11804ec5 push edx */
  push32((uint32_t)(EDX));
  /* 11804ec6 call dword ptr [0x11825334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825334))), 0x11804eccu);
  /* 11804ecc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11804ecf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11804ed2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11804ed5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11804ed7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 11804edc cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804ee2 je 0x11804ef8 */
  if (C.zf) goto L_11804ef8;
  /* 11804ee4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11804ee7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11804eea xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11804eec mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11804ef0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804ef6 je 0x11804efc */
  if (C.zf) goto L_11804efc;
L_11804ef8:;
  /* 11804ef8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11804efa jmp 0x11804f19 */
  goto L_11804f19;
L_11804efc:;
  /* 11804efc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11804eff shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11804f01 push eax */
  push32((uint32_t)(EAX));
  /* 11804f02 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11804f05 push ecx */
  push32((uint32_t)(ECX));
  /* 11804f06 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11804f09 push edx */
  push32((uint32_t)(EDX));
  /* 11804f0a call 0x117fe750 */
  push32(0x11804f0fu); f_117fe750();
  /* 11804f0f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11804f12 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11804f15 jmp 0x11804f19 */
  goto L_11804f19;
L_11804f17:;
  /* 11804f17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11804f19:;
  /* 11804f19 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11804f1c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11804f1f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11804f26 pop edi */
  EDI = (pop32());
  /* 11804f27 pop esi */
  ESI = (pop32());
  /* 11804f28 pop ebx */
  EBX = (pop32());
  /* 11804f29 mov esp, ebp */
  ESP = (EBP);
  /* 11804f2b pop ebp */
  EBP = (pop32());
  /* 11804f2c ret  */
  ESPCHK(0x11804cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014f30 @ 0x11804f30 (208 bytes, 85 insns) */
void f_11804f30(void) {
  FTRACE(0x11804f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11804f30 push ebp */
  push32((uint32_t)(EBP));
  /* 11804f31 mov ebp, esp */
  EBP = (ESP);
  /* 11804f33 push edi */
  push32((uint32_t)(EDI));
  /* 11804f34 push esi */
  push32((uint32_t)(ESI));
  /* 11804f35 push ebx */
  push32((uint32_t)(EBX));
  /* 11804f36 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11804f39 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11804f3c lea eax, [0x118228e8] */
  EAX = ((uint32_t)(0x118228e8));
  /* 11804f42 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804f46 jne 0x11804f83 */
  if (!C.zf) goto L_11804f83;
  /* 11804f48 mov al, 0xff */
  AL = (0xffu);
  /* 11804f4a mov edi, edi */
  EDI = (EDI);
L_11804f4c:;
  /* 11804f4c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11804f4e je 0x11804f7e */
  if (C.zf) goto L_11804f7e;
  /* 11804f50 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11804f52 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11804f53 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11804f55 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11804f56 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11804f58 je 0x11804f4c */
  if (C.zf) goto L_11804f4c;
  /* 11804f5a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11804f5c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11804f5e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11804f60 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11804f63 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11804f65 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11804f67 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11804f69 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11804f6b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11804f6d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11804f6f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11804f72 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11804f74 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11804f76 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11804f78 je 0x11804f4c */
  if (C.zf) goto L_11804f4c;
  /* 11804f7a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11804f7c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11804f7e:;
  /* 11804f7e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11804f81 jmp 0x11804ffb */
  goto L_11804ffb;
L_11804f83:;
  /* 11804f83 lock inc dword ptr [0x11822a7c] */
  x86_unimpl("lock inc @ 0x11804f83");
  /* 11804f8a cmp dword ptr [0x11822a6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822a6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11804f91 jg 0x11804f97 */
  if ((!C.zf&&C.sf==C.of)) goto L_11804f97;
  /* 11804f93 push 0 */
  push32((uint32_t)(0x0u));
  /* 11804f95 jmp 0x11804fac */
  goto L_11804fac;
L_11804f97:;
  /* 11804f97 lock dec dword ptr [0x11822a7c] */
  x86_unimpl("lock dec @ 0x11804f97");
  /* 11804f9e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11804fa0 call 0x117fa260 */
  push32(0x11804fa5u); f_117fa260();
  /* 11804fa5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11804fac:;
  /* 11804fac mov eax, 0xff */
  EAX = (0xffu);
  /* 11804fb1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11804fb3 nop  */
  /* nop */
L_11804fb4:;
  /* 11804fb4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11804fb6 je 0x11804fdf */
  if (C.zf) goto L_11804fdf;
  /* 11804fb8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11804fba inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11804fbb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11804fbd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11804fbe cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11804fc0 je 0x11804fb4 */
  if (C.zf) goto L_11804fb4;
  /* 11804fc2 push eax */
  push32((uint32_t)(EAX));
  /* 11804fc3 push ebx */
  push32((uint32_t)(EBX));
  /* 11804fc4 call 0x118060a0 */
  push32(0x11804fc9u); f_118060a0();
  /* 11804fc9 mov ebx, eax */
  EBX = (EAX);
  /* 11804fcb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11804fce call 0x118060a0 */
  push32(0x11804fd3u); f_118060a0();
  /* 11804fd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11804fd6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11804fd8 je 0x11804fb4 */
  if (C.zf) goto L_11804fb4;
  /* 11804fda sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11804fdc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11804fdf:;
  /* 11804fdf mov ebx, eax */
  EBX = (EAX);
  /* 11804fe1 pop eax */
  EAX = (pop32());
  /* 11804fe2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11804fe4 jne 0x11804fef */
  if (!C.zf) goto L_11804fef;
  /* 11804fe6 lock dec dword ptr [0x11822a7c] */
  x86_unimpl("lock dec @ 0x11804fe6");
  /* 11804fed jmp 0x11804ff9 */
  goto L_11804ff9;
L_11804fef:;
  /* 11804fef push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11804ff1 call 0x117fa300 */
  push32(0x11804ff6u); f_117fa300();
  /* 11804ff6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11804ff9:;
  /* 11804ff9 mov eax, ebx */
  EAX = (EBX);
L_11804ffb:;
  /* 11804ffb pop ebx */
  EBX = (pop32());
  /* 11804ffc pop esi */
  ESI = (pop32());
  /* 11804ffd pop edi */
  EDI = (pop32());
  /* 11804ffe leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11804fff ret  */
  ESPCHK(0x11804f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10015000 @ 0x11805000 (257 bytes, 103 insns) */
void f_11805000(void) {
  FTRACE(0x11805000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11805000 push ebp */
  push32((uint32_t)(EBP));
  /* 11805001 mov ebp, esp */
  EBP = (ESP);
  /* 11805003 push edi */
  push32((uint32_t)(EDI));
  /* 11805004 push esi */
  push32((uint32_t)(ESI));
  /* 11805005 push ebx */
  push32((uint32_t)(EBX));
  /* 11805006 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11805009 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1180500b je 0x118050fa */
  if (C.zf) goto L_118050fa;
  /* 11805011 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11805014 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11805017 lea eax, [0x118228e8] */
  EAX = ((uint32_t)(0x118228e8));
  /* 1180501d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805021 jne 0x11805071 */
  if (!C.zf) goto L_11805071;
  /* 11805023 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11805025 mov bl, 0x5a */
  BL = (0x5au);
  /* 11805027 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11805029 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1180502c:;
  /* 1180502c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 1180502e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11805030 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11805032 je 0x11805055 */
  if (C.zf) goto L_11805055;
  /* 11805034 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11805036 je 0x11805055 */
  if (C.zf) goto L_11805055;
  /* 11805038 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11805039 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1180503a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1180503c jb 0x11805044 */
  if (C.cf) goto L_11805044;
  /* 1180503e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11805040 ja 0x11805044 */
  if ((!C.cf&&!C.zf)) goto L_11805044;
  /* 11805042 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11805044:;
  /* 11805044 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11805046 jb 0x1180504e */
  if (C.cf) goto L_1180504e;
  /* 11805048 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1180504a ja 0x1180504e */
  if ((!C.cf&&!C.zf)) goto L_1180504e;
  /* 1180504c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_1180504e:;
  /* 1180504e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11805050 jne 0x1180505f */
  if (!C.zf) goto L_1180505f;
  /* 11805052 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11805053 jne 0x1180502c */
  if (!C.zf) goto L_1180502c;
L_11805055:;
  /* 11805055 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11805057 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11805059 je 0x118050fa */
  if (C.zf) goto L_118050fa;
L_1180505f:;
  /* 1180505f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11805064 jb 0x118050fa */
  if (C.cf) goto L_118050fa;
  /* 1180506a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1180506c jmp 0x118050fa */
  goto L_118050fa;
L_11805071:;
  /* 11805071 lock inc dword ptr [0x11822a7c] */
  x86_unimpl("lock inc @ 0x11805071");
  /* 11805078 cmp dword ptr [0x11822a6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822a6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180507f jg 0x11805085 */
  if ((!C.zf&&C.sf==C.of)) goto L_11805085;
  /* 11805081 push 0 */
  push32((uint32_t)(0x0u));
  /* 11805083 jmp 0x1180509e */
  goto L_1180509e;
L_11805085:;
  /* 11805085 lock dec dword ptr [0x11822a7c] */
  x86_unimpl("lock dec @ 0x11805085");
  /* 1180508c mov ebx, ecx */
  EBX = (ECX);
  /* 1180508e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11805090 call 0x117fa260 */
  push32(0x11805095u); f_117fa260();
  /* 11805095 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1180509c mov ecx, ebx */
  ECX = (EBX);
L_1180509e:;
  /* 1180509e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118050a0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118050a2 mov edi, edi */
  EDI = (EDI);
L_118050a4:;
  /* 118050a4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118050a6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118050a8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 118050aa je 0x118050cf */
  if (C.zf) goto L_118050cf;
  /* 118050ac or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118050ae je 0x118050cf */
  if (C.zf) goto L_118050cf;
  /* 118050b0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118050b1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118050b2 push ecx */
  push32((uint32_t)(ECX));
  /* 118050b3 push eax */
  push32((uint32_t)(EAX));
  /* 118050b4 push ebx */
  push32((uint32_t)(EBX));
  /* 118050b5 call 0x118060a0 */
  push32(0x118050bau); f_118060a0();
  /* 118050ba mov ebx, eax */
  EBX = (EAX);
  /* 118050bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118050bf call 0x118060a0 */
  push32(0x118050c4u); f_118060a0();
  /* 118050c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118050c7 pop ecx */
  ECX = (pop32());
  /* 118050c8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118050ca jne 0x118050d5 */
  if (!C.zf) goto L_118050d5;
  /* 118050cc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118050cd jne 0x118050a4 */
  if (!C.zf) goto L_118050a4;
L_118050cf:;
  /* 118050cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118050d1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118050d3 je 0x118050de */
  if (C.zf) goto L_118050de;
L_118050d5:;
  /* 118050d5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 118050da jb 0x118050de */
  if (C.cf) goto L_118050de;
  /* 118050dc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_118050de:;
  /* 118050de pop eax */
  EAX = (pop32());
  /* 118050df or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118050e1 jne 0x118050ec */
  if (!C.zf) goto L_118050ec;
  /* 118050e3 lock dec dword ptr [0x11822a7c] */
  x86_unimpl("lock dec @ 0x118050e3");
  /* 118050ea jmp 0x118050fa */
  goto L_118050fa;
L_118050ec:;
  /* 118050ec mov ebx, ecx */
  EBX = (ECX);
  /* 118050ee push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118050f0 call 0x117fa300 */
  push32(0x118050f5u); f_117fa300();
  /* 118050f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118050f8 mov ecx, ebx */
  ECX = (EBX);
L_118050fa:;
  /* 118050fa mov eax, ecx */
  EAX = (ECX);
  /* 118050fc pop ebx */
  EBX = (pop32());
  /* 118050fd pop esi */
  ESI = (pop32());
  /* 118050fe pop edi */
  EDI = (pop32());
  /* 118050ff leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11805100 ret  */
  ESPCHK(0x11805000u, _esp0);
  ESP += 4; return;
}

/* FUN_10015110 @ 0x11805110 (255 bytes, 88 insns) */
void f_11805110(void) {
  FTRACE(0x11805110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11805110 push ebp */
  push32((uint32_t)(EBP));
  /* 11805111 mov ebp, esp */
  EBP = (ESP);
  /* 11805113 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11805116:;
  /* 11805116 cmp dword ptr [0x11820ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11820ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180511d jle 0x11805136 */
  if ((C.zf||C.sf!=C.of)) goto L_11805136;
  /* 1180511f push 8 */
  push32((uint32_t)(0x8u));
  /* 11805121 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11805124 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11805126 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11805128 push ecx */
  push32((uint32_t)(ECX));
  /* 11805129 call 0x117fc870 */
  push32(0x1180512eu); f_117fc870();
  /* 1180512e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11805131 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11805134 jmp 0x1180514f */
  goto L_1180514f;
L_11805136:;
  /* 11805136 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11805139 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1180513b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1180513d mov ecx, dword ptr [0x11820c98] */
  ECX = (r32((uint32_t)(0x11820c98)));
  /* 11805143 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11805145 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11805149 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1180514c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1180514f:;
  /* 1180514f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805153 je 0x11805160 */
  if (C.zf) goto L_11805160;
  /* 11805155 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11805158 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180515b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1180515e jmp 0x11805116 */
  goto L_11805116;
L_11805160:;
  /* 11805160 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11805163 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11805165 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11805167 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1180516a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180516d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11805170 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11805173 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11805176 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11805179 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180517d je 0x11805185 */
  if (C.zf) goto L_11805185;
  /* 1180517f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805183 jne 0x11805198 */
  if (!C.zf) goto L_11805198;
L_11805185:;
  /* 11805185 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11805188 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1180518a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1180518c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1180518f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11805192 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11805195 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11805198:;
  /* 11805198 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1180519f:;
  /* 1180519f cmp dword ptr [0x11820ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11820ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118051a6 jle 0x118051bb */
  if ((C.zf||C.sf!=C.of)) goto L_118051bb;
  /* 118051a8 push 4 */
  push32((uint32_t)(0x4u));
  /* 118051aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118051ad push edx */
  push32((uint32_t)(EDX));
  /* 118051ae call 0x117fc870 */
  push32(0x118051b3u); f_117fc870();
  /* 118051b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118051b6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 118051b9 jmp 0x118051d0 */
  goto L_118051d0;
L_118051bb:;
  /* 118051bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118051be mov ecx, dword ptr [0x11820c98] */
  ECX = (r32((uint32_t)(0x11820c98)));
  /* 118051c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118051c6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 118051ca and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 118051cd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_118051d0:;
  /* 118051d0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118051d4 je 0x118051fb */
  if (C.zf) goto L_118051fb;
  /* 118051d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118051d9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118051dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118051df lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 118051e3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 118051e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118051e9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118051eb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 118051ed mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 118051f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118051f3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118051f6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 118051f9 jmp 0x1180519f */
  goto L_1180519f;
L_118051fb:;
  /* 118051fb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118051ff jne 0x11805208 */
  if (!C.zf) goto L_11805208;
  /* 11805201 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11805204 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11805206 jmp 0x1180520b */
  goto L_1180520b;
L_11805208:;
  /* 11805208 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1180520b:;
  /* 1180520b mov esp, ebp */
  ESP = (EBP);
  /* 1180520d pop ebp */
  EBP = (pop32());
  /* 1180520e ret  */
  ESPCHK(0x11805110u, _esp0);
  ESP += 4; return;
}

/* FUN_10015210 @ 0x11805210 (17 bytes, 8 insns) */
void f_11805210(void) {
  FTRACE(0x11805210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11805210 push ebp */
  push32((uint32_t)(EBP));
  /* 11805211 mov ebp, esp */
  EBP = (ESP);
  /* 11805213 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11805216 push eax */
  push32((uint32_t)(EAX));
  /* 11805217 call 0x11805110 */
  push32(0x1180521cu); f_11805110();
  /* 1180521c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180521f pop ebp */
  EBP = (pop32());
  /* 11805220 ret  */
  ESPCHK(0x11805210u, _esp0);
  ESP += 4; return;
}

/* FUN_10015230 @ 0x11805230 (297 bytes, 106 insns) */
void f_11805230(void) {
  FTRACE(0x11805230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11805230 push ebp */
  push32((uint32_t)(EBP));
  /* 11805231 mov ebp, esp */
  EBP = (ESP);
  /* 11805233 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11805236 push esi */
  push32((uint32_t)(ESI));
L_11805237:;
  /* 11805237 cmp dword ptr [0x11820ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11820ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180523e jle 0x11805257 */
  if ((C.zf||C.sf!=C.of)) goto L_11805257;
  /* 11805240 push 8 */
  push32((uint32_t)(0x8u));
  /* 11805242 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11805245 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11805247 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11805249 push ecx */
  push32((uint32_t)(ECX));
  /* 1180524a call 0x117fc870 */
  push32(0x1180524fu); f_117fc870();
  /* 1180524f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11805252 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11805255 jmp 0x11805270 */
  goto L_11805270;
L_11805257:;
  /* 11805257 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180525a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1180525c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1180525e mov ecx, dword ptr [0x11820c98] */
  ECX = (r32((uint32_t)(0x11820c98)));
  /* 11805264 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11805266 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1180526a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1180526d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11805270:;
  /* 11805270 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805274 je 0x11805281 */
  if (C.zf) goto L_11805281;
  /* 11805276 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11805279 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180527c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1180527f jmp 0x11805237 */
  goto L_11805237;
L_11805281:;
  /* 11805281 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11805284 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11805286 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11805288 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1180528b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180528e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11805291 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11805294 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11805297 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1180529a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180529e je 0x118052a6 */
  if (C.zf) goto L_118052a6;
  /* 118052a0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118052a4 jne 0x118052b9 */
  if (!C.zf) goto L_118052b9;
L_118052a6:;
  /* 118052a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118052a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118052ab mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118052ad mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118052b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118052b3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118052b6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_118052b9:;
  /* 118052b9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 118052c0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_118052c7:;
  /* 118052c7 cmp dword ptr [0x11820ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11820ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118052ce jle 0x118052e3 */
  if ((C.zf||C.sf!=C.of)) goto L_118052e3;
  /* 118052d0 push 4 */
  push32((uint32_t)(0x4u));
  /* 118052d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118052d5 push edx */
  push32((uint32_t)(EDX));
  /* 118052d6 call 0x117fc870 */
  push32(0x118052dbu); f_117fc870();
  /* 118052db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118052de mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 118052e1 jmp 0x118052f8 */
  goto L_118052f8;
L_118052e3:;
  /* 118052e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118052e6 mov ecx, dword ptr [0x11820c98] */
  ECX = (r32((uint32_t)(0x11820c98)));
  /* 118052ec xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118052ee mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 118052f2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 118052f5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_118052f8:;
  /* 118052f8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118052fc je 0x11805339 */
  if (C.zf) goto L_11805339;
  /* 118052fe push 0 */
  push32((uint32_t)(0x0u));
  /* 11805300 push 0xa */
  push32((uint32_t)(0xau));
  /* 11805302 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11805305 push eax */
  push32((uint32_t)(EAX));
  /* 11805306 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11805309 push ecx */
  push32((uint32_t)(ECX));
  /* 1180530a call 0x118061d0 */
  push32(0x1180530fu); f_118061d0();
  /* 1180530f mov ecx, eax */
  ECX = (EAX);
  /* 11805311 mov esi, edx */
  ESI = (EDX);
  /* 11805313 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11805316 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11805319 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1180531a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180531c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1180531e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11805321 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11805324 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11805327 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11805329 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1180532b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1180532e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11805331 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11805334 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11805337 jmp 0x118052c7 */
  goto L_118052c7;
L_11805339:;
  /* 11805339 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180533d jne 0x1180534e */
  if (!C.zf) goto L_1180534e;
  /* 1180533f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11805342 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11805344 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11805347 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180534a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1180534c jmp 0x11805354 */
  goto L_11805354;
L_1180534e:;
  /* 1180534e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11805351 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11805354:;
  /* 11805354 pop esi */
  ESI = (pop32());
  /* 11805355 mov esp, ebp */
  ESP = (EBP);
  /* 11805357 pop ebp */
  EBP = (pop32());
  /* 11805358 ret  */
  ESPCHK(0x11805230u, _esp0);
  ESP += 4; return;
}

/* FUN_10015360 @ 0x11805360 (61 bytes, 18 insns) */
void f_11805360(void) {
  FTRACE(0x11805360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11805360 push ebp */
  push32((uint32_t)(EBP));
  /* 11805361 mov ebp, esp */
  EBP = (ESP);
  /* 11805363 cmp dword ptr [0x11822a48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822a48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180536a jne 0x1180539b */
  if (!C.zf) goto L_1180539b;
  /* 1180536c push 0xb */
  push32((uint32_t)(0xbu));
  /* 1180536e call 0x117fa260 */
  push32(0x11805373u); f_117fa260();
  /* 11805373 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11805376 cmp dword ptr [0x11822a48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822a48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180537d jne 0x11805391 */
  if (!C.zf) goto L_11805391;
  /* 1180537f call 0x118053c0 */
  push32(0x11805384u); f_118053c0();
  /* 11805384 mov eax, dword ptr [0x11822a48] */
  EAX = (r32((uint32_t)(0x11822a48)));
  /* 11805389 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180538c mov dword ptr [0x11822a48], eax */
  w32((uint32_t)(0x11822a48), (EAX));
L_11805391:;
  /* 11805391 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11805393 call 0x117fa300 */
  push32(0x11805398u); f_117fa300();
  /* 11805398 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1180539b:;
  /* 1180539b pop ebp */
  EBP = (pop32());
  /* 1180539c ret  */
  ESPCHK(0x11805360u, _esp0);
  ESP += 4; return;
}

/* FUN_100153a0 @ 0x118053a0 (30 bytes, 11 insns) */
void f_118053a0(void) {
  FTRACE(0x118053a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118053a0 push ebp */
  push32((uint32_t)(EBP));
  /* 118053a1 mov ebp, esp */
  EBP = (ESP);
  /* 118053a3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 118053a5 call 0x117fa260 */
  push32(0x118053aau); f_117fa260();
  /* 118053aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118053ad call 0x118053c0 */
  push32(0x118053b2u); f_118053c0();
  /* 118053b2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 118053b4 call 0x117fa300 */
  push32(0x118053b9u); f_117fa300();
  /* 118053b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118053bc pop ebp */
  EBP = (pop32());
  /* 118053bd ret  */
  ESPCHK(0x118053a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100153c0 @ 0x118053c0 (939 bytes, 266 insns) */
void f_118053c0(void) {
  FTRACE(0x118053c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118053c0 push ebp */
  push32((uint32_t)(EBP));
  /* 118053c1 mov ebp, esp */
  EBP = (ESP);
  /* 118053c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118053c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 118053cd push 0xc */
  push32((uint32_t)(0xcu));
  /* 118053cf call 0x117fa260 */
  push32(0x118053d4u); f_117fa260();
  /* 118053d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118053d7 mov dword ptr [0x11822990], 0 */
  w32((uint32_t)(0x11822990), (0x0u));
  /* 118053e1 mov dword ptr [0x11821e38], 0xffffffff */
  w32((uint32_t)(0x11821e38), (0xffffffffu));
  /* 118053eb mov eax, dword ptr [0x11821e38] */
  EAX = (r32((uint32_t)(0x11821e38)));
  /* 118053f0 mov dword ptr [0x11821e28], eax */
  w32((uint32_t)(0x11821e28), (EAX));
  /* 118053f5 push 0x1181efd0 */
  push32((uint32_t)(0x1181efd0u));
  /* 118053fa call 0x11806240 */
  push32(0x118053ffu); f_11806240();
  /* 118053ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11805402 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11805405 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805409 jne 0x11805543 */
  if (!C.zf) goto L_11805543;
  /* 1180540f push 0xc */
  push32((uint32_t)(0xcu));
  /* 11805411 call 0x117fa300 */
  push32(0x11805416u); f_117fa300();
  /* 11805416 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11805419 push 0x11822998 */
  push32((uint32_t)(0x11822998u));
  /* 1180541e call dword ptr [0x118252f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118252f4))), 0x11805424u);
  /* 11805424 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805427 je 0x1180553e */
  if (C.zf) goto L_1180553e;
  /* 1180542d mov dword ptr [0x11822990], 1 */
  w32((uint32_t)(0x11822990), (0x1u));
  /* 11805437 mov ecx, dword ptr [0x11822998] */
  ECX = (r32((uint32_t)(0x11822998)));
  /* 1180543d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11805440 mov dword ptr [0x11821d90], ecx */
  w32((uint32_t)(0x11821d90), (ECX));
  /* 11805446 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11805448 mov dx, word ptr [0x118229de] */
  DX = (r16((uint32_t)(0x118229de)));
  /* 1180544f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11805451 je 0x11805469 */
  if (C.zf) goto L_11805469;
  /* 11805453 mov eax, dword ptr [0x118229ec] */
  EAX = (r32((uint32_t)(0x118229ec)));
  /* 11805458 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1180545b mov ecx, dword ptr [0x11821d90] */
  ECX = (r32((uint32_t)(0x11821d90)));
  /* 11805461 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11805463 mov dword ptr [0x11821d90], ecx */
  w32((uint32_t)(0x11821d90), (ECX));
L_11805469:;
  /* 11805469 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1180546b mov dx, word ptr [0x11822a32] */
  DX = (r16((uint32_t)(0x11822a32)));
  /* 11805472 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11805474 je 0x1180549e */
  if (C.zf) goto L_1180549e;
  /* 11805476 cmp dword ptr [0x11822a40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822a40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180547d je 0x1180549e */
  if (C.zf) goto L_1180549e;
  /* 1180547f mov dword ptr [0x11821d94], 1 */
  w32((uint32_t)(0x11821d94), (0x1u));
  /* 11805489 mov eax, dword ptr [0x11822a40] */
  EAX = (r32((uint32_t)(0x11822a40)));
  /* 1180548e sub eax, dword ptr [0x118229ec] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118229ec))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11805494 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11805497 mov dword ptr [0x11821d98], eax */
  w32((uint32_t)(0x11821d98), (EAX));
  /* 1180549c jmp 0x118054b2 */
  goto L_118054b2;
L_1180549e:;
  /* 1180549e mov dword ptr [0x11821d94], 0 */
  w32((uint32_t)(0x11821d94), (0x0u));
  /* 118054a8 mov dword ptr [0x11821d98], 0 */
  w32((uint32_t)(0x11821d98), (0x0u));
L_118054b2:;
  /* 118054b2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 118054b5 push ecx */
  push32((uint32_t)(ECX));
  /* 118054b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 118054b8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 118054ba mov edx, dword ptr [0x11821e1c] */
  EDX = (r32((uint32_t)(0x11821e1c)));
  /* 118054c0 push edx */
  push32((uint32_t)(EDX));
  /* 118054c1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118054c3 push 0x1182299c */
  push32((uint32_t)(0x1182299cu));
  /* 118054c8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 118054cd mov eax, dword ptr [0x11822900] */
  EAX = (r32((uint32_t)(0x11822900)));
  /* 118054d2 push eax */
  push32((uint32_t)(EAX));
  /* 118054d3 call dword ptr [0x11825384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825384))), 0x118054d9u);
  /* 118054d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118054db je 0x118054ef */
  if (C.zf) goto L_118054ef;
  /* 118054dd cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118054e1 jne 0x118054ef */
  if (!C.zf) goto L_118054ef;
  /* 118054e3 mov ecx, dword ptr [0x11821e1c] */
  ECX = (r32((uint32_t)(0x11821e1c)));
  /* 118054e9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 118054ed jmp 0x118054f8 */
  goto L_118054f8;
L_118054ef:;
  /* 118054ef mov edx, dword ptr [0x11821e1c] */
  EDX = (r32((uint32_t)(0x11821e1c)));
  /* 118054f5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_118054f8:;
  /* 118054f8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 118054fb push eax */
  push32((uint32_t)(EAX));
  /* 118054fc push 0 */
  push32((uint32_t)(0x0u));
  /* 118054fe push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11805500 mov ecx, dword ptr [0x11821e20] */
  ECX = (r32((uint32_t)(0x11821e20)));
  /* 11805506 push ecx */
  push32((uint32_t)(ECX));
  /* 11805507 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11805509 push 0x118229f0 */
  push32((uint32_t)(0x118229f0u));
  /* 1180550e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11805513 mov edx, dword ptr [0x11822900] */
  EDX = (r32((uint32_t)(0x11822900)));
  /* 11805519 push edx */
  push32((uint32_t)(EDX));
  /* 1180551a call dword ptr [0x11825384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825384))), 0x11805520u);
  /* 11805520 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11805522 je 0x11805535 */
  if (C.zf) goto L_11805535;
  /* 11805524 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805528 jne 0x11805535 */
  if (!C.zf) goto L_11805535;
  /* 1180552a mov eax, dword ptr [0x11821e20] */
  EAX = (r32((uint32_t)(0x11821e20)));
  /* 1180552f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 11805533 jmp 0x1180553e */
  goto L_1180553e;
L_11805535:;
  /* 11805535 mov ecx, dword ptr [0x11821e20] */
  ECX = (r32((uint32_t)(0x11821e20)));
  /* 1180553b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_1180553e:;
  /* 1180553e jmp 0x11805767 */
  goto L_11805767;
L_11805543:;
  /* 11805543 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11805546 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11805549 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1180554b je 0x1180556d */
  if (C.zf) goto L_1180556d;
  /* 1180554d cmp dword ptr [0x11822a44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822a44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805554 je 0x1180557c */
  if (C.zf) goto L_1180557c;
  /* 11805556 mov ecx, dword ptr [0x11822a44] */
  ECX = (r32((uint32_t)(0x11822a44)));
  /* 1180555c push ecx */
  push32((uint32_t)(ECX));
  /* 1180555d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11805560 push edx */
  push32((uint32_t)(EDX));
  /* 11805561 call 0x118024f0 */
  push32(0x11805566u); f_118024f0();
  /* 11805566 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11805569 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1180556b jne 0x1180557c */
  if (!C.zf) goto L_1180557c;
L_1180556d:;
  /* 1180556d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1180556f call 0x117fa300 */
  push32(0x11805574u); f_117fa300();
  /* 11805574 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11805577 jmp 0x11805767 */
  goto L_11805767;
L_1180557c:;
  /* 1180557c push 2 */
  push32((uint32_t)(0x2u));
  /* 1180557e mov eax, dword ptr [0x11822a44] */
  EAX = (r32((uint32_t)(0x11822a44)));
  /* 11805583 push eax */
  push32((uint32_t)(EAX));
  /* 11805584 call 0x117f72f0 */
  push32(0x11805589u); f_117f72f0();
  /* 11805589 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180558c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 11805591 push 0x1181efc8 */
  push32((uint32_t)(0x1181efc8u));
  /* 11805596 push 2 */
  push32((uint32_t)(0x2u));
  /* 11805598 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1180559b push ecx */
  push32((uint32_t)(ECX));
  /* 1180559c call 0x117f9690 */
  push32(0x118055a1u); f_117f9690();
  /* 118055a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118055a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118055a7 push eax */
  push32((uint32_t)(EAX));
  /* 118055a8 call 0x117f6860 */
  push32(0x118055adu); f_117f6860();
  /* 118055ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118055b0 mov dword ptr [0x11822a44], eax */
  w32((uint32_t)(0x11822a44), (EAX));
  /* 118055b5 cmp dword ptr [0x11822a44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822a44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118055bc jne 0x118055cd */
  if (!C.zf) goto L_118055cd;
  /* 118055be push 0xc */
  push32((uint32_t)(0xcu));
  /* 118055c0 call 0x117fa300 */
  push32(0x118055c5u); f_117fa300();
  /* 118055c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118055c8 jmp 0x11805767 */
  goto L_11805767;
L_118055cd:;
  /* 118055cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118055d0 push edx */
  push32((uint32_t)(EDX));
  /* 118055d1 mov eax, dword ptr [0x11822a44] */
  EAX = (r32((uint32_t)(0x11822a44)));
  /* 118055d6 push eax */
  push32((uint32_t)(EAX));
  /* 118055d7 call 0x117f9810 */
  push32(0x118055dcu); f_117f9810();
  /* 118055dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118055df push 0xc */
  push32((uint32_t)(0xcu));
  /* 118055e1 call 0x117fa300 */
  push32(0x118055e6u); f_117fa300();
  /* 118055e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118055e9 push 3 */
  push32((uint32_t)(0x3u));
  /* 118055eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118055ee push ecx */
  push32((uint32_t)(ECX));
  /* 118055ef mov edx, dword ptr [0x11821e1c] */
  EDX = (r32((uint32_t)(0x11821e1c)));
  /* 118055f5 push edx */
  push32((uint32_t)(EDX));
  /* 118055f6 call 0x117fa080 */
  push32(0x118055fbu); f_117fa080();
  /* 118055fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118055fe mov eax, dword ptr [0x11821e1c] */
  EAX = (r32((uint32_t)(0x11821e1c)));
  /* 11805603 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 11805607 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1180560a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180560d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11805610 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11805613 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11805616 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805619 jne 0x1180562d */
  if (!C.zf) goto L_1180562d;
  /* 1180561b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1180561e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11805621 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11805624 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11805627 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180562a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1180562d:;
  /* 1180562d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11805630 push eax */
  push32((uint32_t)(EAX));
  /* 11805631 call 0x11805110 */
  push32(0x11805636u); f_11805110();
  /* 11805636 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11805639 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1180563f mov dword ptr [0x11821d90], eax */
  w32((uint32_t)(0x11821d90), (EAX));
L_11805644:;
  /* 11805644 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11805647 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1180564a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180564d je 0x11805665 */
  if (C.zf) goto L_11805665;
  /* 1180564f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11805652 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11805655 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805658 jl 0x11805670 */
  if ((C.sf!=C.of)) goto L_11805670;
  /* 1180565a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1180565d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11805660 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805663 jg 0x11805670 */
  if ((!C.zf&&C.sf==C.of)) goto L_11805670;
L_11805665:;
  /* 11805665 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11805668 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180566b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1180566e jmp 0x11805644 */
  goto L_11805644;
L_11805670:;
  /* 11805670 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11805673 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11805676 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805679 jne 0x11805715 */
  if (!C.zf) goto L_11805715;
  /* 1180567f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11805682 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11805685 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11805688 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1180568b push edx */
  push32((uint32_t)(EDX));
  /* 1180568c call 0x11805110 */
  push32(0x11805691u); f_11805110();
  /* 11805691 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11805694 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11805697 mov ecx, dword ptr [0x11821d90] */
  ECX = (r32((uint32_t)(0x11821d90)));
  /* 1180569d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180569f mov dword ptr [0x11821d90], ecx */
  w32((uint32_t)(0x11821d90), (ECX));
L_118056a5:;
  /* 118056a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118056a8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 118056ab cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118056ae jl 0x118056c6 */
  if ((C.sf!=C.of)) goto L_118056c6;
  /* 118056b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118056b3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 118056b6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118056b9 jg 0x118056c6 */
  if ((!C.zf&&C.sf==C.of)) goto L_118056c6;
  /* 118056bb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118056be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118056c1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 118056c4 jmp 0x118056a5 */
  goto L_118056a5;
L_118056c6:;
  /* 118056c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118056c9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 118056cc cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118056cf jne 0x11805715 */
  if (!C.zf) goto L_11805715;
  /* 118056d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118056d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118056d7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 118056da mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118056dd push ecx */
  push32((uint32_t)(ECX));
  /* 118056de call 0x11805110 */
  push32(0x118056e3u); f_11805110();
  /* 118056e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118056e6 mov edx, dword ptr [0x11821d90] */
  EDX = (r32((uint32_t)(0x11821d90)));
  /* 118056ec add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118056ee mov dword ptr [0x11821d90], edx */
  w32((uint32_t)(0x11821d90), (EDX));
L_118056f4:;
  /* 118056f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118056f7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118056fa cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118056fd jl 0x11805715 */
  if ((C.sf!=C.of)) goto L_11805715;
  /* 118056ff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11805702 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11805705 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805708 jg 0x11805715 */
  if ((!C.zf&&C.sf==C.of)) goto L_11805715;
  /* 1180570a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1180570d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11805710 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11805713 jmp 0x118056f4 */
  goto L_118056f4;
L_11805715:;
  /* 11805715 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805719 je 0x11805729 */
  if (C.zf) goto L_11805729;
  /* 1180571b mov edx, dword ptr [0x11821d90] */
  EDX = (r32((uint32_t)(0x11821d90)));
  /* 11805721 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11805723 mov dword ptr [0x11821d90], edx */
  w32((uint32_t)(0x11821d90), (EDX));
L_11805729:;
  /* 11805729 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1180572c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1180572f mov dword ptr [0x11821d94], ecx */
  w32((uint32_t)(0x11821d94), (ECX));
  /* 11805735 cmp dword ptr [0x11821d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11821d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180573c je 0x1180575e */
  if (C.zf) goto L_1180575e;
  /* 1180573e push 3 */
  push32((uint32_t)(0x3u));
  /* 11805740 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11805743 push edx */
  push32((uint32_t)(EDX));
  /* 11805744 mov eax, dword ptr [0x11821e20] */
  EAX = (r32((uint32_t)(0x11821e20)));
  /* 11805749 push eax */
  push32((uint32_t)(EAX));
  /* 1180574a call 0x117fa080 */
  push32(0x1180574fu); f_117fa080();
  /* 1180574f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11805752 mov ecx, dword ptr [0x11821e20] */
  ECX = (r32((uint32_t)(0x11821e20)));
  /* 11805758 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 1180575c jmp 0x11805767 */
  goto L_11805767;
L_1180575e:;
  /* 1180575e mov edx, dword ptr [0x11821e20] */
  EDX = (r32((uint32_t)(0x11821e20)));
  /* 11805764 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11805767:;
  /* 11805767 mov esp, ebp */
  ESP = (EBP);
  /* 11805769 pop ebp */
  EBP = (pop32());
  /* 1180576a ret  */
  ESPCHK(0x118053c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015770 @ 0x11805770 (46 bytes, 18 insns) */
void f_11805770(void) {
  FTRACE(0x11805770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11805770 push ebp */
  push32((uint32_t)(EBP));
  /* 11805771 mov ebp, esp */
  EBP = (ESP);
  /* 11805773 push ecx */
  push32((uint32_t)(ECX));
  /* 11805774 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11805776 call 0x117fa260 */
  push32(0x1180577bu); f_117fa260();
  /* 1180577b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180577e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11805781 push eax */
  push32((uint32_t)(EAX));
  /* 11805782 call 0x118057a0 */
  push32(0x11805787u); f_118057a0();
  /* 11805787 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180578a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1180578d push 0xb */
  push32((uint32_t)(0xbu));
  /* 1180578f call 0x117fa300 */
  push32(0x11805794u); f_117fa300();
  /* 11805794 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11805797 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1180579a mov esp, ebp */
  ESP = (EBP);
  /* 1180579c pop ebp */
  EBP = (pop32());
  /* 1180579d ret  */
  ESPCHK(0x11805770u, _esp0);
  ESP += 4; return;
}

/* FUN_100157a0 @ 0x118057a0 (762 bytes, 246 insns) */
void f_118057a0(void) {
  FTRACE(0x118057a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118057a0 push ebp */
  push32((uint32_t)(EBP));
  /* 118057a1 mov ebp, esp */
  EBP = (ESP);
  /* 118057a3 push ecx */
  push32((uint32_t)(ECX));
  /* 118057a4 cmp dword ptr [0x11821d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11821d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118057ab jne 0x118057b4 */
  if (!C.zf) goto L_118057b4;
  /* 118057ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118057af jmp 0x11805a96 */
  goto L_11805a96;
L_118057b4:;
  /* 118057b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118057b7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 118057ba cmp ecx, dword ptr [0x11821e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11821e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118057c0 jne 0x118057d4 */
  if (!C.zf) goto L_118057d4;
  /* 118057c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118057c5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 118057c8 cmp eax, dword ptr [0x11821e38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11821e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118057ce je 0x1180599b */
  if (C.zf) goto L_1180599b;
L_118057d4:;
  /* 118057d4 cmp dword ptr [0x11822990], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822990))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118057db je 0x11805955 */
  if (C.zf) goto L_11805955;
  /* 118057e1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118057e3 mov cx, word ptr [0x11822a30] */
  CX = (r16((uint32_t)(0x11822a30)));
  /* 118057ea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118057ec jne 0x11805849 */
  if (!C.zf) goto L_11805849;
  /* 118057ee xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118057f0 mov dx, word ptr [0x11822a3e] */
  DX = (r16((uint32_t)(0x11822a3e)));
  /* 118057f7 push edx */
  push32((uint32_t)(EDX));
  /* 118057f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118057fa mov ax, word ptr [0x11822a3c] */
  AX = (r16((uint32_t)(0x11822a3c)));
  /* 11805800 push eax */
  push32((uint32_t)(EAX));
  /* 11805801 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11805803 mov cx, word ptr [0x11822a3a] */
  CX = (r16((uint32_t)(0x11822a3a)));
  /* 1180580a push ecx */
  push32((uint32_t)(ECX));
  /* 1180580b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1180580d mov dx, word ptr [0x11822a38] */
  DX = (r16((uint32_t)(0x11822a38)));
  /* 11805814 push edx */
  push32((uint32_t)(EDX));
  /* 11805815 push 0 */
  push32((uint32_t)(0x0u));
  /* 11805817 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11805819 mov ax, word ptr [0x11822a34] */
  AX = (r16((uint32_t)(0x11822a34)));
  /* 1180581f push eax */
  push32((uint32_t)(EAX));
  /* 11805820 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11805822 mov cx, word ptr [0x11822a36] */
  CX = (r16((uint32_t)(0x11822a36)));
  /* 11805829 push ecx */
  push32((uint32_t)(ECX));
  /* 1180582a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1180582c mov dx, word ptr [0x11822a32] */
  DX = (r16((uint32_t)(0x11822a32)));
  /* 11805833 push edx */
  push32((uint32_t)(EDX));
  /* 11805834 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11805837 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1180583a push ecx */
  push32((uint32_t)(ECX));
  /* 1180583b push 1 */
  push32((uint32_t)(0x1u));
  /* 1180583d push 1 */
  push32((uint32_t)(0x1u));
  /* 1180583f call 0x11805aa0 */
  push32(0x11805844u); f_11805aa0();
  /* 11805844 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11805847 jmp 0x1180589a */
  goto L_1180589a;
L_11805849:;
  /* 11805849 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1180584b mov dx, word ptr [0x11822a3e] */
  DX = (r16((uint32_t)(0x11822a3e)));
  /* 11805852 push edx */
  push32((uint32_t)(EDX));
  /* 11805853 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11805855 mov ax, word ptr [0x11822a3c] */
  AX = (r16((uint32_t)(0x11822a3c)));
  /* 1180585b push eax */
  push32((uint32_t)(EAX));
  /* 1180585c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1180585e mov cx, word ptr [0x11822a3a] */
  CX = (r16((uint32_t)(0x11822a3a)));
  /* 11805865 push ecx */
  push32((uint32_t)(ECX));
  /* 11805866 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11805868 mov dx, word ptr [0x11822a38] */
  DX = (r16((uint32_t)(0x11822a38)));
  /* 1180586f push edx */
  push32((uint32_t)(EDX));
  /* 11805870 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11805872 mov ax, word ptr [0x11822a36] */
  AX = (r16((uint32_t)(0x11822a36)));
  /* 11805878 push eax */
  push32((uint32_t)(EAX));
  /* 11805879 push 0 */
  push32((uint32_t)(0x0u));
  /* 1180587b push 0 */
  push32((uint32_t)(0x0u));
  /* 1180587d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1180587f mov cx, word ptr [0x11822a32] */
  CX = (r16((uint32_t)(0x11822a32)));
  /* 11805886 push ecx */
  push32((uint32_t)(ECX));
  /* 11805887 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180588a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1180588d push eax */
  push32((uint32_t)(EAX));
  /* 1180588e push 0 */
  push32((uint32_t)(0x0u));
  /* 11805890 push 1 */
  push32((uint32_t)(0x1u));
  /* 11805892 call 0x11805aa0 */
  push32(0x11805897u); f_11805aa0();
  /* 11805897 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1180589a:;
  /* 1180589a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1180589c mov cx, word ptr [0x118229dc] */
  CX = (r16((uint32_t)(0x118229dc)));
  /* 118058a3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118058a5 jne 0x11805902 */
  if (!C.zf) goto L_11805902;
  /* 118058a7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118058a9 mov dx, word ptr [0x118229ea] */
  DX = (r16((uint32_t)(0x118229ea)));
  /* 118058b0 push edx */
  push32((uint32_t)(EDX));
  /* 118058b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118058b3 mov ax, word ptr [0x118229e8] */
  AX = (r16((uint32_t)(0x118229e8)));
  /* 118058b9 push eax */
  push32((uint32_t)(EAX));
  /* 118058ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118058bc mov cx, word ptr [0x118229e6] */
  CX = (r16((uint32_t)(0x118229e6)));
  /* 118058c3 push ecx */
  push32((uint32_t)(ECX));
  /* 118058c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118058c6 mov dx, word ptr [0x118229e4] */
  DX = (r16((uint32_t)(0x118229e4)));
  /* 118058cd push edx */
  push32((uint32_t)(EDX));
  /* 118058ce push 0 */
  push32((uint32_t)(0x0u));
  /* 118058d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118058d2 mov ax, word ptr [0x118229e0] */
  AX = (r16((uint32_t)(0x118229e0)));
  /* 118058d8 push eax */
  push32((uint32_t)(EAX));
  /* 118058d9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118058db mov cx, word ptr [0x118229e2] */
  CX = (r16((uint32_t)(0x118229e2)));
  /* 118058e2 push ecx */
  push32((uint32_t)(ECX));
  /* 118058e3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118058e5 mov dx, word ptr [0x118229de] */
  DX = (r16((uint32_t)(0x118229de)));
  /* 118058ec push edx */
  push32((uint32_t)(EDX));
  /* 118058ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118058f0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 118058f3 push ecx */
  push32((uint32_t)(ECX));
  /* 118058f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 118058f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 118058f8 call 0x11805aa0 */
  push32(0x118058fdu); f_11805aa0();
  /* 118058fd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11805900 jmp 0x11805953 */
  goto L_11805953;
L_11805902:;
  /* 11805902 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11805904 mov dx, word ptr [0x118229ea] */
  DX = (r16((uint32_t)(0x118229ea)));
  /* 1180590b push edx */
  push32((uint32_t)(EDX));
  /* 1180590c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1180590e mov ax, word ptr [0x118229e8] */
  AX = (r16((uint32_t)(0x118229e8)));
  /* 11805914 push eax */
  push32((uint32_t)(EAX));
  /* 11805915 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11805917 mov cx, word ptr [0x118229e6] */
  CX = (r16((uint32_t)(0x118229e6)));
  /* 1180591e push ecx */
  push32((uint32_t)(ECX));
  /* 1180591f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11805921 mov dx, word ptr [0x118229e4] */
  DX = (r16((uint32_t)(0x118229e4)));
  /* 11805928 push edx */
  push32((uint32_t)(EDX));
  /* 11805929 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1180592b mov ax, word ptr [0x118229e2] */
  AX = (r16((uint32_t)(0x118229e2)));
  /* 11805931 push eax */
  push32((uint32_t)(EAX));
  /* 11805932 push 0 */
  push32((uint32_t)(0x0u));
  /* 11805934 push 0 */
  push32((uint32_t)(0x0u));
  /* 11805936 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11805938 mov cx, word ptr [0x118229de] */
  CX = (r16((uint32_t)(0x118229de)));
  /* 1180593f push ecx */
  push32((uint32_t)(ECX));
  /* 11805940 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11805943 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11805946 push eax */
  push32((uint32_t)(EAX));
  /* 11805947 push 0 */
  push32((uint32_t)(0x0u));
  /* 11805949 push 0 */
  push32((uint32_t)(0x0u));
  /* 1180594b call 0x11805aa0 */
  push32(0x11805950u); f_11805aa0();
  /* 11805950 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11805953:;
  /* 11805953 jmp 0x1180599b */
  goto L_1180599b;
L_11805955:;
  /* 11805955 push 0 */
  push32((uint32_t)(0x0u));
  /* 11805957 push 0 */
  push32((uint32_t)(0x0u));
  /* 11805959 push 0 */
  push32((uint32_t)(0x0u));
  /* 1180595b push 2 */
  push32((uint32_t)(0x2u));
  /* 1180595d push 0 */
  push32((uint32_t)(0x0u));
  /* 1180595f push 0 */
  push32((uint32_t)(0x0u));
  /* 11805961 push 1 */
  push32((uint32_t)(0x1u));
  /* 11805963 push 4 */
  push32((uint32_t)(0x4u));
  /* 11805965 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11805968 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1180596b push edx */
  push32((uint32_t)(EDX));
  /* 1180596c push 1 */
  push32((uint32_t)(0x1u));
  /* 1180596e push 1 */
  push32((uint32_t)(0x1u));
  /* 11805970 call 0x11805aa0 */
  push32(0x11805975u); f_11805aa0();
  /* 11805975 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11805978 push 0 */
  push32((uint32_t)(0x0u));
  /* 1180597a push 0 */
  push32((uint32_t)(0x0u));
  /* 1180597c push 0 */
  push32((uint32_t)(0x0u));
  /* 1180597e push 2 */
  push32((uint32_t)(0x2u));
  /* 11805980 push 0 */
  push32((uint32_t)(0x0u));
  /* 11805982 push 0 */
  push32((uint32_t)(0x0u));
  /* 11805984 push 5 */
  push32((uint32_t)(0x5u));
  /* 11805986 push 0xa */
  push32((uint32_t)(0xau));
  /* 11805988 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180598b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1180598e push ecx */
  push32((uint32_t)(ECX));
  /* 1180598f push 1 */
  push32((uint32_t)(0x1u));
  /* 11805991 push 0 */
  push32((uint32_t)(0x0u));
  /* 11805993 call 0x11805aa0 */
  push32(0x11805998u); f_11805aa0();
  /* 11805998 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1180599b:;
  /* 1180599b mov edx, dword ptr [0x11821e2c] */
  EDX = (r32((uint32_t)(0x11821e2c)));
  /* 118059a1 cmp edx, dword ptr [0x11821e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11821e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118059a7 jge 0x118059f4 */
  if ((C.sf==C.of)) goto L_118059f4;
  /* 118059a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118059ac mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 118059af cmp ecx, dword ptr [0x11821e2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11821e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118059b5 jl 0x118059c5 */
  if ((C.sf!=C.of)) goto L_118059c5;
  /* 118059b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118059ba mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 118059bd cmp eax, dword ptr [0x11821e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11821e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118059c3 jle 0x118059cc */
  if ((C.zf||C.sf!=C.of)) goto L_118059cc;
L_118059c5:;
  /* 118059c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118059c7 jmp 0x11805a96 */
  goto L_11805a96;
L_118059cc:;
  /* 118059cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118059cf mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 118059d2 cmp edx, dword ptr [0x11821e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11821e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118059d8 jle 0x118059f2 */
  if ((C.zf||C.sf!=C.of)) goto L_118059f2;
  /* 118059da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118059dd mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 118059e0 cmp ecx, dword ptr [0x11821e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11821e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118059e6 jge 0x118059f2 */
  if ((C.sf==C.of)) goto L_118059f2;
  /* 118059e8 mov eax, 1 */
  EAX = (0x1u);
  /* 118059ed jmp 0x11805a96 */
  goto L_11805a96;
L_118059f2:;
  /* 118059f2 jmp 0x11805a37 */
  goto L_11805a37;
L_118059f4:;
  /* 118059f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118059f7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 118059fa cmp eax, dword ptr [0x11821e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11821e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805a00 jl 0x11805a10 */
  if ((C.sf!=C.of)) goto L_11805a10;
  /* 11805a02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11805a05 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11805a08 cmp edx, dword ptr [0x11821e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11821e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805a0e jle 0x11805a17 */
  if ((C.zf||C.sf!=C.of)) goto L_11805a17;
L_11805a10:;
  /* 11805a10 mov eax, 1 */
  EAX = (0x1u);
  /* 11805a15 jmp 0x11805a96 */
  goto L_11805a96;
L_11805a17:;
  /* 11805a17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11805a1a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11805a1d cmp ecx, dword ptr [0x11821e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11821e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805a23 jle 0x11805a37 */
  if ((C.zf||C.sf!=C.of)) goto L_11805a37;
  /* 11805a25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11805a28 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11805a2b cmp eax, dword ptr [0x11821e2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11821e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805a31 jge 0x11805a37 */
  if ((C.sf==C.of)) goto L_11805a37;
  /* 11805a33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11805a35 jmp 0x11805a96 */
  goto L_11805a96;
L_11805a37:;
  /* 11805a37 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11805a3a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11805a3d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11805a40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11805a43 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11805a45 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11805a47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11805a4a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11805a4d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11805a53 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11805a55 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11805a5b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11805a5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11805a61 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11805a64 cmp edx, dword ptr [0x11821e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11821e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805a6a jne 0x11805a82 */
  if (!C.zf) goto L_11805a82;
  /* 11805a6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11805a6f cmp eax, dword ptr [0x11821e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11821e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805a75 jl 0x11805a7e */
  if ((C.sf!=C.of)) goto L_11805a7e;
  /* 11805a77 mov eax, 1 */
  EAX = (0x1u);
  /* 11805a7c jmp 0x11805a96 */
  goto L_11805a96;
L_11805a7e:;
  /* 11805a7e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11805a80 jmp 0x11805a96 */
  goto L_11805a96;
L_11805a82:;
  /* 11805a82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11805a85 cmp ecx, dword ptr [0x11821e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11821e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805a8b jge 0x11805a94 */
  if ((C.sf==C.of)) goto L_11805a94;
  /* 11805a8d mov eax, 1 */
  EAX = (0x1u);
  /* 11805a92 jmp 0x11805a96 */
  goto L_11805a96;
L_11805a94:;
  /* 11805a94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11805a96:;
  /* 11805a96 mov esp, ebp */
  ESP = (EBP);
  /* 11805a98 pop ebp */
  EBP = (pop32());
  /* 11805a99 ret  */
  ESPCHK(0x118057a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015aa0 @ 0x11805aa0 (504 bytes, 145 insns) */
void f_11805aa0(void) {
  FTRACE(0x11805aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11805aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11805aa1 mov ebp, esp */
  EBP = (ESP);
  /* 11805aa3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11805aa6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805aaa jne 0x11805b7c */
  if (!C.zf) goto L_11805b7c;
  /* 11805ab0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11805ab3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11805ab6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11805ab8 jne 0x11805ac9 */
  if (!C.zf) goto L_11805ac9;
  /* 11805aba mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11805abd mov edx, dword ptr [ecx*4 + 0x11821e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11821e4c)));
  /* 11805ac4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11805ac7 jmp 0x11805ad6 */
  goto L_11805ad6;
L_11805ac9:;
  /* 11805ac9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11805acc mov ecx, dword ptr [eax*4 + 0x11821e80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11821e80)));
  /* 11805ad3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11805ad6:;
  /* 11805ad6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11805ad9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11805adc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11805adf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11805ae2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11805ae5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11805aeb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11805aee add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11805af0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11805af3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11805af6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 11805af9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 11805afd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11805afe mov ecx, 7 */
  ECX = (0x7u);
  /* 11805b03 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11805b05 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11805b08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11805b0b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805b0e jge 0x11805b29 */
  if ((C.sf==C.of)) goto L_11805b29;
  /* 11805b10 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11805b13 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11805b16 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11805b19 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11805b1c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11805b1f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11805b22 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11805b24 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11805b27 jmp 0x11805b3d */
  goto L_11805b3d;
L_11805b29:;
  /* 11805b29 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11805b2c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11805b2f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11805b32 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11805b35 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11805b38 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11805b3a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11805b3d:;
  /* 11805b3d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805b41 jne 0x11805b7a */
  if (!C.zf) goto L_11805b7a;
  /* 11805b43 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11805b46 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11805b49 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11805b4b jne 0x11805b5c */
  if (!C.zf) goto L_11805b5c;
  /* 11805b4d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11805b50 mov eax, dword ptr [edx*4 + 0x11821e50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11821e50)));
  /* 11805b57 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11805b5a jmp 0x11805b69 */
  goto L_11805b69;
L_11805b5c:;
  /* 11805b5c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11805b5f mov edx, dword ptr [ecx*4 + 0x11821e84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11821e84)));
  /* 11805b66 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11805b69:;
  /* 11805b69 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11805b6c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805b6f jle 0x11805b7a */
  if ((C.zf||C.sf!=C.of)) goto L_11805b7a;
  /* 11805b71 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11805b74 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11805b77 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11805b7a:;
  /* 11805b7a jmp 0x11805bb1 */
  goto L_11805bb1;
L_11805b7c:;
  /* 11805b7c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11805b7f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11805b82 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11805b84 jne 0x11805b95 */
  if (!C.zf) goto L_11805b95;
  /* 11805b86 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11805b89 mov ecx, dword ptr [eax*4 + 0x11821e4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11821e4c)));
  /* 11805b90 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11805b93 jmp 0x11805ba2 */
  goto L_11805ba2;
L_11805b95:;
  /* 11805b95 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11805b98 mov eax, dword ptr [edx*4 + 0x11821e80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11821e80)));
  /* 11805b9f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11805ba2:;
  /* 11805ba2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11805ba5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11805ba8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11805bab add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11805bae mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11805bb1:;
  /* 11805bb1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805bb5 jne 0x11805bf1 */
  if (!C.zf) goto L_11805bf1;
  /* 11805bb7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11805bba mov dword ptr [0x11821e2c], eax */
  w32((uint32_t)(0x11821e2c), (EAX));
  /* 11805bbf mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11805bc2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11805bc5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11805bc8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11805bca imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11805bcd mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11805bd0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11805bd2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11805bd8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11805bdb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11805bdd mov dword ptr [0x11821e30], ecx */
  w32((uint32_t)(0x11821e30), (ECX));
  /* 11805be3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11805be6 mov dword ptr [0x11821e28], edx */
  w32((uint32_t)(0x11821e28), (EDX));
  /* 11805bec jmp 0x11805c94 */
  goto L_11805c94;
L_11805bf1:;
  /* 11805bf1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11805bf4 mov dword ptr [0x11821e3c], eax */
  w32((uint32_t)(0x11821e3c), (EAX));
  /* 11805bf9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11805bfc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11805bff mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11805c02 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11805c04 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11805c07 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11805c0a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11805c0c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11805c12 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11805c15 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11805c17 mov dword ptr [0x11821e40], ecx */
  w32((uint32_t)(0x11821e40), (ECX));
  /* 11805c1d mov edx, dword ptr [0x11821d98] */
  EDX = (r32((uint32_t)(0x11821d98)));
  /* 11805c23 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11805c29 mov eax, dword ptr [0x11821e40] */
  EAX = (r32((uint32_t)(0x11821e40)));
  /* 11805c2e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11805c30 mov dword ptr [0x11821e40], eax */
  w32((uint32_t)(0x11821e40), (EAX));
  /* 11805c35 cmp dword ptr [0x11821e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11821e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805c3c jge 0x11805c61 */
  if ((C.sf==C.of)) goto L_11805c61;
  /* 11805c3e mov ecx, dword ptr [0x11821e40] */
  ECX = (r32((uint32_t)(0x11821e40)));
  /* 11805c44 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11805c4a mov dword ptr [0x11821e40], ecx */
  w32((uint32_t)(0x11821e40), (ECX));
  /* 11805c50 mov edx, dword ptr [0x11821e3c] */
  EDX = (r32((uint32_t)(0x11821e3c)));
  /* 11805c56 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11805c59 mov dword ptr [0x11821e3c], edx */
  w32((uint32_t)(0x11821e3c), (EDX));
  /* 11805c5f jmp 0x11805c8b */
  goto L_11805c8b;
L_11805c61:;
  /* 11805c61 cmp dword ptr [0x11821e40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x11821e40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805c6b jl 0x11805c8b */
  if ((C.sf!=C.of)) goto L_11805c8b;
  /* 11805c6d mov eax, dword ptr [0x11821e40] */
  EAX = (r32((uint32_t)(0x11821e40)));
  /* 11805c72 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11805c77 mov dword ptr [0x11821e40], eax */
  w32((uint32_t)(0x11821e40), (EAX));
  /* 11805c7c mov ecx, dword ptr [0x11821e3c] */
  ECX = (r32((uint32_t)(0x11821e3c)));
  /* 11805c82 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11805c85 mov dword ptr [0x11821e3c], ecx */
  w32((uint32_t)(0x11821e3c), (ECX));
L_11805c8b:;
  /* 11805c8b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11805c8e mov dword ptr [0x11821e38], edx */
  w32((uint32_t)(0x11821e38), (EDX));
L_11805c94:;
  /* 11805c94 mov esp, ebp */
  ESP = (EBP);
  /* 11805c96 pop ebp */
  EBP = (pop32());
  /* 11805c97 ret  */
  ESPCHK(0x11805aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015ca0 @ 0x11805ca0 (382 bytes, 135 insns) */
void f_11805ca0(void) {
  FTRACE(0x11805ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11805ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 11805ca1 mov ebp, esp */
  EBP = (ESP);
  /* 11805ca3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11805ca5 push 0x1181efd8 */
  push32((uint32_t)(0x1181efd8u));
  /* 11805caa push 0x117ff968 */
  push32((uint32_t)(0x117ff968u));
  /* 11805caf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11805cb5 push eax */
  push32((uint32_t)(EAX));
  /* 11805cb6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11805cbd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11805cc0 push ebx */
  push32((uint32_t)(EBX));
  /* 11805cc1 push esi */
  push32((uint32_t)(ESI));
  /* 11805cc2 push edi */
  push32((uint32_t)(EDI));
  /* 11805cc3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11805cc6 cmp dword ptr [0x11822a4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822a4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805ccd jne 0x11805d12 */
  if (!C.zf) goto L_11805d12;
  /* 11805ccf push 0 */
  push32((uint32_t)(0x0u));
  /* 11805cd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11805cd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11805cd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11805cd7 call dword ptr [0x118252f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118252f0))), 0x11805cddu);
  /* 11805cdd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11805cdf je 0x11805ced */
  if (C.zf) goto L_11805ced;
  /* 11805ce1 mov dword ptr [0x11822a4c], 1 */
  w32((uint32_t)(0x11822a4c), (0x1u));
  /* 11805ceb jmp 0x11805d12 */
  goto L_11805d12;
L_11805ced:;
  /* 11805ced push 0 */
  push32((uint32_t)(0x0u));
  /* 11805cef push 0 */
  push32((uint32_t)(0x0u));
  /* 11805cf1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11805cf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11805cf5 call dword ptr [0x11825308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825308))), 0x11805cfbu);
  /* 11805cfb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11805cfd je 0x11805d0b */
  if (C.zf) goto L_11805d0b;
  /* 11805cff mov dword ptr [0x11822a4c], 2 */
  w32((uint32_t)(0x11822a4c), (0x2u));
  /* 11805d09 jmp 0x11805d12 */
  goto L_11805d12;
L_11805d0b:;
  /* 11805d0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11805d0d jmp 0x11805e21 */
  goto L_11805e21;
L_11805d12:;
  /* 11805d12 cmp dword ptr [0x11822a4c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11822a4c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805d19 jne 0x11805d36 */
  if (!C.zf) goto L_11805d36;
  /* 11805d1b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11805d1e push eax */
  push32((uint32_t)(EAX));
  /* 11805d1f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11805d22 push ecx */
  push32((uint32_t)(ECX));
  /* 11805d23 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11805d26 push edx */
  push32((uint32_t)(EDX));
  /* 11805d27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11805d2a push eax */
  push32((uint32_t)(EAX));
  /* 11805d2b call dword ptr [0x118252f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118252f0))), 0x11805d31u);
  /* 11805d31 jmp 0x11805e21 */
  goto L_11805e21;
L_11805d36:;
  /* 11805d36 cmp dword ptr [0x11822a4c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11822a4c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805d3d jne 0x11805e1f */
  if (!C.zf) goto L_11805e1f;
  /* 11805d43 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805d47 jne 0x11805d52 */
  if (!C.zf) goto L_11805d52;
  /* 11805d49 mov ecx, dword ptr [0x11822900] */
  ECX = (r32((uint32_t)(0x11822900)));
  /* 11805d4f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11805d52:;
  /* 11805d52 push 0 */
  push32((uint32_t)(0x0u));
  /* 11805d54 push 0 */
  push32((uint32_t)(0x0u));
  /* 11805d56 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11805d59 push edx */
  push32((uint32_t)(EDX));
  /* 11805d5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11805d5d push eax */
  push32((uint32_t)(EAX));
  /* 11805d5e call dword ptr [0x11825308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825308))), 0x11805d64u);
  /* 11805d64 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11805d67 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805d6b jne 0x11805d74 */
  if (!C.zf) goto L_11805d74;
  /* 11805d6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11805d6f jmp 0x11805e21 */
  goto L_11805e21;
L_11805d74:;
  /* 11805d74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11805d7b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11805d7e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11805d81 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11805d83 call 0x117f9a00 */
  push32(0x11805d88u); f_117f9a00();
  /* 11805d88 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11805d8b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11805d8e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11805d91 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11805d94 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11805d9b jmp 0x11805db4 */
  goto L_11805db4;
  /* 11805d9d mov eax, 1 */
  EAX = (0x1u);
  /* 11805da2 ret  */
  ESPCHK(0x11805ca0u, _esp0);
  ESP += 4; return;
  /* 11805da3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11805da6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11805dad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11805db4:;
  /* 11805db4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805db8 jne 0x11805dbe */
  if (!C.zf) goto L_11805dbe;
  /* 11805dba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11805dbc jmp 0x11805e21 */
  goto L_11805e21;
L_11805dbe:;
  /* 11805dbe mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11805dc1 push edx */
  push32((uint32_t)(EDX));
  /* 11805dc2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11805dc5 push eax */
  push32((uint32_t)(EAX));
  /* 11805dc6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11805dc9 push ecx */
  push32((uint32_t)(ECX));
  /* 11805dca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11805dcd push edx */
  push32((uint32_t)(EDX));
  /* 11805dce call dword ptr [0x11825308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825308))), 0x11805dd4u);
  /* 11805dd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11805dd6 jne 0x11805ddc */
  if (!C.zf) goto L_11805ddc;
  /* 11805dd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11805dda jmp 0x11805e21 */
  goto L_11805e21;
L_11805ddc:;
  /* 11805ddc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805de0 jne 0x11805dfd */
  if (!C.zf) goto L_11805dfd;
  /* 11805de2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11805de4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11805de6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11805de8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11805deb push eax */
  push32((uint32_t)(EAX));
  /* 11805dec push 1 */
  push32((uint32_t)(0x1u));
  /* 11805dee mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11805df1 push ecx */
  push32((uint32_t)(ECX));
  /* 11805df2 call dword ptr [0x11825338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825338))), 0x11805df8u);
  /* 11805df8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11805dfb jmp 0x11805e1a */
  goto L_11805e1a;
L_11805dfd:;
  /* 11805dfd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11805e00 push edx */
  push32((uint32_t)(EDX));
  /* 11805e01 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11805e04 push eax */
  push32((uint32_t)(EAX));
  /* 11805e05 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11805e07 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11805e0a push ecx */
  push32((uint32_t)(ECX));
  /* 11805e0b push 1 */
  push32((uint32_t)(0x1u));
  /* 11805e0d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11805e10 push edx */
  push32((uint32_t)(EDX));
  /* 11805e11 call dword ptr [0x11825338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825338))), 0x11805e17u);
  /* 11805e17 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11805e1a:;
  /* 11805e1a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11805e1d jmp 0x11805e21 */
  goto L_11805e21;
L_11805e1f:;
  /* 11805e1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11805e21:;
  /* 11805e21 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11805e24 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11805e27 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11805e2e pop edi */
  EDI = (pop32());
  /* 11805e2f pop esi */
  ESI = (pop32());
  /* 11805e30 pop ebx */
  EBX = (pop32());
  /* 11805e31 mov esp, ebp */
  ESP = (EBP);
  /* 11805e33 pop ebp */
  EBP = (pop32());
  /* 11805e34 ret  */
  ESPCHK(0x11805ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015e40 @ 0x11805e40 (398 bytes, 140 insns) */
void f_11805e40(void) {
  FTRACE(0x11805e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11805e40 push ebp */
  push32((uint32_t)(EBP));
  /* 11805e41 mov ebp, esp */
  EBP = (ESP);
  /* 11805e43 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11805e45 push 0x1181efe8 */
  push32((uint32_t)(0x1181efe8u));
  /* 11805e4a push 0x117ff968 */
  push32((uint32_t)(0x117ff968u));
  /* 11805e4f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11805e55 push eax */
  push32((uint32_t)(EAX));
  /* 11805e56 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11805e5d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11805e60 push ebx */
  push32((uint32_t)(EBX));
  /* 11805e61 push esi */
  push32((uint32_t)(ESI));
  /* 11805e62 push edi */
  push32((uint32_t)(EDI));
  /* 11805e63 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11805e66 cmp dword ptr [0x11822a50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822a50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805e6d jne 0x11805eb2 */
  if (!C.zf) goto L_11805eb2;
  /* 11805e6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11805e71 push 0 */
  push32((uint32_t)(0x0u));
  /* 11805e73 push 1 */
  push32((uint32_t)(0x1u));
  /* 11805e75 push 0 */
  push32((uint32_t)(0x0u));
  /* 11805e77 call dword ptr [0x118252f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118252f0))), 0x11805e7du);
  /* 11805e7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11805e7f je 0x11805e8d */
  if (C.zf) goto L_11805e8d;
  /* 11805e81 mov dword ptr [0x11822a50], 1 */
  w32((uint32_t)(0x11822a50), (0x1u));
  /* 11805e8b jmp 0x11805eb2 */
  goto L_11805eb2;
L_11805e8d:;
  /* 11805e8d push 0 */
  push32((uint32_t)(0x0u));
  /* 11805e8f push 0 */
  push32((uint32_t)(0x0u));
  /* 11805e91 push 1 */
  push32((uint32_t)(0x1u));
  /* 11805e93 push 0 */
  push32((uint32_t)(0x0u));
  /* 11805e95 call dword ptr [0x11825308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825308))), 0x11805e9bu);
  /* 11805e9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11805e9d je 0x11805eab */
  if (C.zf) goto L_11805eab;
  /* 11805e9f mov dword ptr [0x11822a50], 2 */
  w32((uint32_t)(0x11822a50), (0x2u));
  /* 11805ea9 jmp 0x11805eb2 */
  goto L_11805eb2;
L_11805eab:;
  /* 11805eab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11805ead jmp 0x11805fd1 */
  goto L_11805fd1;
L_11805eb2:;
  /* 11805eb2 cmp dword ptr [0x11822a50], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11822a50))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805eb9 jne 0x11805ed6 */
  if (!C.zf) goto L_11805ed6;
  /* 11805ebb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11805ebe push eax */
  push32((uint32_t)(EAX));
  /* 11805ebf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11805ec2 push ecx */
  push32((uint32_t)(ECX));
  /* 11805ec3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11805ec6 push edx */
  push32((uint32_t)(EDX));
  /* 11805ec7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11805eca push eax */
  push32((uint32_t)(EAX));
  /* 11805ecb call dword ptr [0x11825308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825308))), 0x11805ed1u);
  /* 11805ed1 jmp 0x11805fd1 */
  goto L_11805fd1;
L_11805ed6:;
  /* 11805ed6 cmp dword ptr [0x11822a50], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11822a50))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805edd jne 0x11805fcf */
  if (!C.zf) goto L_11805fcf;
  /* 11805ee3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805ee7 jne 0x11805ef2 */
  if (!C.zf) goto L_11805ef2;
  /* 11805ee9 mov ecx, dword ptr [0x11822900] */
  ECX = (r32((uint32_t)(0x11822900)));
  /* 11805eef mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11805ef2:;
  /* 11805ef2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11805ef4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11805ef6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11805ef9 push edx */
  push32((uint32_t)(EDX));
  /* 11805efa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11805efd push eax */
  push32((uint32_t)(EAX));
  /* 11805efe call dword ptr [0x118252f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118252f0))), 0x11805f04u);
  /* 11805f04 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11805f07 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805f0b jne 0x11805f14 */
  if (!C.zf) goto L_11805f14;
  /* 11805f0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11805f0f jmp 0x11805fd1 */
  goto L_11805fd1;
L_11805f14:;
  /* 11805f14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11805f1b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11805f1e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11805f20 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11805f23 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11805f25 call 0x117f9a00 */
  push32(0x11805f2au); f_117f9a00();
  /* 11805f2a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11805f2d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11805f30 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11805f33 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11805f36 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11805f3d jmp 0x11805f56 */
  goto L_11805f56;
  /* 11805f3f mov eax, 1 */
  EAX = (0x1u);
  /* 11805f44 ret  */
  ESPCHK(0x11805e40u, _esp0);
  ESP += 4; return;
  /* 11805f45 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11805f48 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11805f4f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11805f56:;
  /* 11805f56 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805f5a jne 0x11805f60 */
  if (!C.zf) goto L_11805f60;
  /* 11805f5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11805f5e jmp 0x11805fd1 */
  goto L_11805fd1;
L_11805f60:;
  /* 11805f60 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11805f63 push edx */
  push32((uint32_t)(EDX));
  /* 11805f64 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11805f67 push eax */
  push32((uint32_t)(EAX));
  /* 11805f68 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11805f6b push ecx */
  push32((uint32_t)(ECX));
  /* 11805f6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11805f6f push edx */
  push32((uint32_t)(EDX));
  /* 11805f70 call dword ptr [0x118252f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118252f0))), 0x11805f76u);
  /* 11805f76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11805f78 jne 0x11805f7e */
  if (!C.zf) goto L_11805f7e;
  /* 11805f7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11805f7c jmp 0x11805fd1 */
  goto L_11805fd1;
L_11805f7e:;
  /* 11805f7e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11805f82 jne 0x11805fa6 */
  if (!C.zf) goto L_11805fa6;
  /* 11805f84 push 0 */
  push32((uint32_t)(0x0u));
  /* 11805f86 push 0 */
  push32((uint32_t)(0x0u));
  /* 11805f88 push 0 */
  push32((uint32_t)(0x0u));
  /* 11805f8a push 0 */
  push32((uint32_t)(0x0u));
  /* 11805f8c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11805f8e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11805f91 push eax */
  push32((uint32_t)(EAX));
  /* 11805f92 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11805f97 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11805f9a push ecx */
  push32((uint32_t)(ECX));
  /* 11805f9b call dword ptr [0x11825384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825384))), 0x11805fa1u);
  /* 11805fa1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11805fa4 jmp 0x11805fca */
  goto L_11805fca;
L_11805fa6:;
  /* 11805fa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11805fa8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11805faa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11805fad push edx */
  push32((uint32_t)(EDX));
  /* 11805fae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11805fb1 push eax */
  push32((uint32_t)(EAX));
  /* 11805fb2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11805fb4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11805fb7 push ecx */
  push32((uint32_t)(ECX));
  /* 11805fb8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11805fbd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11805fc0 push edx */
  push32((uint32_t)(EDX));
  /* 11805fc1 call dword ptr [0x11825384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825384))), 0x11805fc7u);
  /* 11805fc7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11805fca:;
  /* 11805fca mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11805fcd jmp 0x11805fd1 */
  goto L_11805fd1;
L_11805fcf:;
  /* 11805fcf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11805fd1:;
  /* 11805fd1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11805fd4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11805fd7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11805fde pop edi */
  EDI = (pop32());
  /* 11805fdf pop esi */
  ESI = (pop32());
  /* 11805fe0 pop ebx */
  EBX = (pop32());
  /* 11805fe1 mov esp, ebp */
  ESP = (EBP);
  /* 11805fe3 pop ebp */
  EBP = (pop32());
  /* 11805fe4 ret  */
  ESPCHK(0x11805e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10015ff0 @ 0x11805ff0 (11 bytes, 6 insns) */
void f_11805ff0(void) {
  FTRACE(0x11805ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11805ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 11805ff1 mov ebp, esp */
  EBP = (ESP);
  /* 11805ff3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11805ff6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11805ff9 pop ebp */
  EBP = (pop32());
  /* 11805ffa ret  */
  ESPCHK(0x11805ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016000 @ 0x11806000 (147 bytes, 43 insns) */
void f_11806000(void) {
  FTRACE(0x11806000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11806000 push ebp */
  push32((uint32_t)(EBP));
  /* 11806001 mov ebp, esp */
  EBP = (ESP);
  /* 11806003 push ecx */
  push32((uint32_t)(ECX));
  /* 11806004 cmp dword ptr [0x118228f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118228f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180600b jne 0x11806027 */
  if (!C.zf) goto L_11806027;
  /* 1180600d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806011 jl 0x11806022 */
  if ((C.sf!=C.of)) goto L_11806022;
  /* 11806013 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806017 jg 0x11806022 */
  if ((!C.zf&&C.sf==C.of)) goto L_11806022;
  /* 11806019 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180601c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180601f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11806022:;
  /* 11806022 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11806025 jmp 0x1180608f */
  goto L_1180608f;
L_11806027:;
  /* 11806027 push 0x11822a7c */
  push32((uint32_t)(0x11822a7cu));
  /* 1180602c call dword ptr [0x118253c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253c8))), 0x11806032u);
  /* 11806032 cmp dword ptr [0x11822a6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822a6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806039 je 0x11806059 */
  if (C.zf) goto L_11806059;
  /* 1180603b push 0x11822a7c */
  push32((uint32_t)(0x11822a7cu));
  /* 11806040 call dword ptr [0x118253b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253b8))), 0x11806046u);
  /* 11806046 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11806048 call 0x117fa260 */
  push32(0x1180604du); f_117fa260();
  /* 1180604d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11806050 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11806057 jmp 0x11806060 */
  goto L_11806060;
L_11806059:;
  /* 11806059 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11806060:;
  /* 11806060 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11806063 push ecx */
  push32((uint32_t)(ECX));
  /* 11806064 call 0x118060a0 */
  push32(0x11806069u); f_118060a0();
  /* 11806069 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180606c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1180606f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806073 je 0x11806081 */
  if (C.zf) goto L_11806081;
  /* 11806075 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11806077 call 0x117fa300 */
  push32(0x1180607cu); f_117fa300();
  /* 1180607c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180607f jmp 0x1180608c */
  goto L_1180608c;
L_11806081:;
  /* 11806081 push 0x11822a7c */
  push32((uint32_t)(0x11822a7cu));
  /* 11806086 call dword ptr [0x118253b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253b8))), 0x1180608cu);
L_1180608c:;
  /* 1180608c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1180608f:;
  /* 1180608f mov esp, ebp */
  ESP = (EBP);
  /* 11806091 pop ebp */
  EBP = (pop32());
  /* 11806092 ret  */
  ESPCHK(0x11806000u, _esp0);
  ESP += 4; return;
}

/* FUN_100160a0 @ 0x118060a0 (299 bytes, 91 insns) */
void f_118060a0(void) {
  FTRACE(0x118060a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118060a0 push ebp */
  push32((uint32_t)(EBP));
  /* 118060a1 mov ebp, esp */
  EBP = (ESP);
  /* 118060a3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118060a6 cmp dword ptr [0x118228f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118228f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118060ad jne 0x118060cc */
  if (!C.zf) goto L_118060cc;
  /* 118060af cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118060b3 jl 0x118060c4 */
  if ((C.sf!=C.of)) goto L_118060c4;
  /* 118060b5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118060b9 jg 0x118060c4 */
  if ((!C.zf&&C.sf==C.of)) goto L_118060c4;
  /* 118060bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118060be add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118060c1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_118060c4:;
  /* 118060c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118060c7 jmp 0x118061c7 */
  goto L_118061c7;
L_118060cc:;
  /* 118060cc cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118060d3 jge 0x11806113 */
  if ((C.sf==C.of)) goto L_11806113;
  /* 118060d5 cmp dword ptr [0x11820ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11820ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118060dc jle 0x118060f1 */
  if ((C.zf||C.sf!=C.of)) goto L_118060f1;
  /* 118060de push 1 */
  push32((uint32_t)(0x1u));
  /* 118060e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118060e3 push ecx */
  push32((uint32_t)(ECX));
  /* 118060e4 call 0x117fc870 */
  push32(0x118060e9u); f_117fc870();
  /* 118060e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118060ec mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 118060ef jmp 0x11806105 */
  goto L_11806105;
L_118060f1:;
  /* 118060f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118060f4 mov eax, dword ptr [0x11820c98] */
  EAX = (r32((uint32_t)(0x11820c98)));
  /* 118060f9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118060fb mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 118060ff and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11806102 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11806105:;
  /* 11806105 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806109 jne 0x11806113 */
  if (!C.zf) goto L_11806113;
  /* 1180610b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180610e jmp 0x118061c7 */
  goto L_118061c7;
L_11806113:;
  /* 11806113 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11806116 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11806119 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1180611f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11806125 mov eax, dword ptr [0x11820c98] */
  EAX = (r32((uint32_t)(0x11820c98)));
  /* 1180612a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1180612c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11806130 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11806136 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11806138 je 0x1180615c */
  if (C.zf) goto L_1180615c;
  /* 1180613a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180613d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11806140 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11806146 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 11806149 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1180614c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 1180614f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 11806153 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1180615a jmp 0x1180616d */
  goto L_1180616d;
L_1180615c:;
  /* 1180615c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1180615f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11806162 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 11806166 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1180616d:;
  /* 1180616d push 1 */
  push32((uint32_t)(0x1u));
  /* 1180616f push 0 */
  push32((uint32_t)(0x0u));
  /* 11806171 push 3 */
  push32((uint32_t)(0x3u));
  /* 11806173 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11806176 push edx */
  push32((uint32_t)(EDX));
  /* 11806177 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1180617a push eax */
  push32((uint32_t)(EAX));
  /* 1180617b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1180617e push ecx */
  push32((uint32_t)(ECX));
  /* 1180617f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11806184 mov edx, dword ptr [0x118228f0] */
  EDX = (r32((uint32_t)(0x118228f0)));
  /* 1180618a push edx */
  push32((uint32_t)(EDX));
  /* 1180618b call 0x117fec50 */
  push32(0x11806190u); f_117fec50();
  /* 11806190 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11806193 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11806196 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180619a jne 0x118061a1 */
  if (!C.zf) goto L_118061a1;
  /* 1180619c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180619f jmp 0x118061c7 */
  goto L_118061c7;
L_118061a1:;
  /* 118061a1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118061a5 jne 0x118061b1 */
  if (!C.zf) goto L_118061b1;
  /* 118061a7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118061aa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 118061af jmp 0x118061c7 */
  goto L_118061c7;
L_118061b1:;
  /* 118061b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118061b4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 118061b9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 118061bc and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 118061c2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 118061c5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_118061c7:;
  /* 118061c7 mov esp, ebp */
  ESP = (EBP);
  /* 118061c9 pop ebp */
  EBP = (pop32());
  /* 118061ca ret  */
  ESPCHK(0x118060a0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x118061d0 (52 bytes, 19 insns) */
void f_118061d0(void) {
  FTRACE(0x118061d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118061d0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118061d4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 118061d8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118061da mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 118061de jne 0x118061e9 */
  if (!C.zf) goto L_118061e9;
  /* 118061e0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118061e4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 118061e6 ret 0x10 */
  ESPCHK(0x118061d0u, _esp0);
  ESP += 20; return;
L_118061e9:;
  /* 118061e9 push ebx */
  push32((uint32_t)(EBX));
  /* 118061ea mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 118061ec mov ebx, eax */
  EBX = (EAX);
  /* 118061ee mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118061f2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 118061f6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 118061f8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118061fc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 118061fe add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11806200 pop ebx */
  EBX = (pop32());
  /* 11806201 ret 0x10 */
  ESPCHK(0x118061d0u, _esp0);
  ESP += 20; return;
}

/* FUN_10016210 @ 0x11806210 (46 bytes, 18 insns) */
void f_11806210(void) {
  FTRACE(0x11806210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11806210 push ebp */
  push32((uint32_t)(EBP));
  /* 11806211 mov ebp, esp */
  EBP = (ESP);
  /* 11806213 push ecx */
  push32((uint32_t)(ECX));
  /* 11806214 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11806216 call 0x117fa260 */
  push32(0x1180621bu); f_117fa260();
  /* 1180621b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180621e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11806221 push eax */
  push32((uint32_t)(EAX));
  /* 11806222 call 0x11806240 */
  push32(0x11806227u); f_11806240();
  /* 11806227 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180622a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1180622d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1180622f call 0x117fa300 */
  push32(0x11806234u); f_117fa300();
  /* 11806234 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11806237 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1180623a mov esp, ebp */
  ESP = (EBP);
  /* 1180623c pop ebp */
  EBP = (pop32());
  /* 1180623d ret  */
  ESPCHK(0x11806210u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x11806240 (198 bytes, 69 insns) */
void f_11806240(void) {
  FTRACE(0x11806240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11806240 push ebp */
  push32((uint32_t)(EBP));
  /* 11806241 mov ebp, esp */
  EBP = (ESP);
  /* 11806243 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11806246 mov eax, dword ptr [0x1182270c] */
  EAX = (r32((uint32_t)(0x1182270c)));
  /* 1180624b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1180624e cmp dword ptr [0x11824200], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11824200))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806255 jne 0x1180625e */
  if (!C.zf) goto L_1180625e;
  /* 11806257 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11806259 jmp 0x11806302 */
  goto L_11806302;
L_1180625e:;
  /* 1180625e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806262 jne 0x11806286 */
  if (!C.zf) goto L_11806286;
  /* 11806264 cmp dword ptr [0x11822714], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822714))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180626b je 0x11806286 */
  if (C.zf) goto L_11806286;
  /* 1180626d call 0x11806360 */
  push32(0x11806272u); f_11806360();
  /* 11806272 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11806274 je 0x1180627d */
  if (C.zf) goto L_1180627d;
  /* 11806276 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11806278 jmp 0x11806302 */
  goto L_11806302;
L_1180627d:;
  /* 1180627d mov ecx, dword ptr [0x1182270c] */
  ECX = (r32((uint32_t)(0x1182270c)));
  /* 11806283 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11806286:;
  /* 11806286 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180628a je 0x11806300 */
  if (C.zf) goto L_11806300;
  /* 1180628c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806290 je 0x11806300 */
  if (C.zf) goto L_11806300;
  /* 11806292 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11806295 push edx */
  push32((uint32_t)(EDX));
  /* 11806296 call 0x117f9690 */
  push32(0x1180629bu); f_117f9690();
  /* 1180629b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180629e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_118062a1:;
  /* 118062a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118062a4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118062a7 je 0x11806300 */
  if (C.zf) goto L_11806300;
  /* 118062a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118062ac mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118062ae push edx */
  push32((uint32_t)(EDX));
  /* 118062af call 0x117f9690 */
  push32(0x118062b4u); f_117f9690();
  /* 118062b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118062b7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118062ba jbe 0x118062f5 */
  if ((C.cf||C.zf)) goto L_118062f5;
  /* 118062bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118062bf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118062c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118062c4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 118062c8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118062cb jne 0x118062f5 */
  if (!C.zf) goto L_118062f5;
  /* 118062cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118062d0 push ecx */
  push32((uint32_t)(ECX));
  /* 118062d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118062d4 push edx */
  push32((uint32_t)(EDX));
  /* 118062d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118062d8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118062da push ecx */
  push32((uint32_t)(ECX));
  /* 118062db call 0x11806310 */
  push32(0x118062e0u); f_11806310();
  /* 118062e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118062e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118062e5 jne 0x118062f5 */
  if (!C.zf) goto L_118062f5;
  /* 118062e7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118062ea mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 118062ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118062ef lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 118062f3 jmp 0x11806302 */
  goto L_11806302;
L_118062f5:;
  /* 118062f5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118062f8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118062fb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 118062fe jmp 0x118062a1 */
  goto L_118062a1;
L_11806300:;
  /* 11806300 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11806302:;
  /* 11806302 mov esp, ebp */
  ESP = (EBP);
  /* 11806304 pop ebp */
  EBP = (pop32());
  /* 11806305 ret  */
  ESPCHK(0x11806240u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x11806310 (79 bytes, 32 insns) */
void f_11806310(void) {
  FTRACE(0x11806310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11806310 push ebp */
  push32((uint32_t)(EBP));
  /* 11806311 mov ebp, esp */
  EBP = (ESP);
  /* 11806313 push ecx */
  push32((uint32_t)(ECX));
  /* 11806314 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806318 jne 0x1180631e */
  if (!C.zf) goto L_1180631e;
  /* 1180631a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1180631c jmp 0x1180635b */
  goto L_1180635b;
L_1180631e:;
  /* 1180631e mov eax, dword ptr [0x11823dc4] */
  EAX = (r32((uint32_t)(0x11823dc4)));
  /* 11806323 push eax */
  push32((uint32_t)(EAX));
  /* 11806324 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11806327 push ecx */
  push32((uint32_t)(ECX));
  /* 11806328 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1180632b push edx */
  push32((uint32_t)(EDX));
  /* 1180632c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1180632f push eax */
  push32((uint32_t)(EAX));
  /* 11806330 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11806333 push ecx */
  push32((uint32_t)(ECX));
  /* 11806334 push 1 */
  push32((uint32_t)(0x1u));
  /* 11806336 mov edx, dword ptr [0x11824064] */
  EDX = (r32((uint32_t)(0x11824064)));
  /* 1180633c push edx */
  push32((uint32_t)(EDX));
  /* 1180633d call 0x11806410 */
  push32(0x11806342u); f_11806410();
  /* 11806342 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11806345 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11806348 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180634c jne 0x11806355 */
  if (!C.zf) goto L_11806355;
  /* 1180634e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 11806353 jmp 0x1180635b */
  goto L_1180635b;
L_11806355:;
  /* 11806355 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11806358 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1180635b:;
  /* 1180635b mov esp, ebp */
  ESP = (EBP);
  /* 1180635d pop ebp */
  EBP = (pop32());
  /* 1180635e ret  */
  ESPCHK(0x11806310u, _esp0);
  ESP += 4; return;
}

/* FUN_10016360 @ 0x11806360 (174 bytes, 66 insns) */
void f_11806360(void) {
  FTRACE(0x11806360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11806360 push ebp */
  push32((uint32_t)(EBP));
  /* 11806361 mov ebp, esp */
  EBP = (ESP);
  /* 11806363 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11806366 mov eax, dword ptr [0x11822714] */
  EAX = (r32((uint32_t)(0x11822714)));
  /* 1180636b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1180636e:;
  /* 1180636e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11806371 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806374 je 0x11806408 */
  if (C.zf) goto L_11806408;
  /* 1180637a push 0 */
  push32((uint32_t)(0x0u));
  /* 1180637c push 0 */
  push32((uint32_t)(0x0u));
  /* 1180637e push 0 */
  push32((uint32_t)(0x0u));
  /* 11806380 push 0 */
  push32((uint32_t)(0x0u));
  /* 11806382 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11806384 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11806387 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11806389 push eax */
  push32((uint32_t)(EAX));
  /* 1180638a push 0 */
  push32((uint32_t)(0x0u));
  /* 1180638c push 1 */
  push32((uint32_t)(0x1u));
  /* 1180638e call dword ptr [0x11825384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825384))), 0x11806394u);
  /* 11806394 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11806397 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180639b jne 0x118063a2 */
  if (!C.zf) goto L_118063a2;
  /* 1180639d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118063a0 jmp 0x1180640a */
  goto L_1180640a;
L_118063a2:;
  /* 118063a2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 118063a4 push 0x1181eff4 */
  push32((uint32_t)(0x1181eff4u));
  /* 118063a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 118063ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118063ae push ecx */
  push32((uint32_t)(ECX));
  /* 118063af call 0x117f6860 */
  push32(0x118063b4u); f_117f6860();
  /* 118063b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118063b7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118063ba cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118063be jne 0x118063c5 */
  if (!C.zf) goto L_118063c5;
  /* 118063c0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118063c3 jmp 0x1180640a */
  goto L_1180640a;
L_118063c5:;
  /* 118063c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 118063c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 118063c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118063cc push edx */
  push32((uint32_t)(EDX));
  /* 118063cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118063d0 push eax */
  push32((uint32_t)(EAX));
  /* 118063d1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118063d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118063d6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118063d8 push edx */
  push32((uint32_t)(EDX));
  /* 118063d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 118063db push 1 */
  push32((uint32_t)(0x1u));
  /* 118063dd call dword ptr [0x11825384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825384))), 0x118063e3u);
  /* 118063e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118063e5 jne 0x118063ec */
  if (!C.zf) goto L_118063ec;
  /* 118063e7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118063ea jmp 0x1180640a */
  goto L_1180640a;
L_118063ec:;
  /* 118063ec push 0 */
  push32((uint32_t)(0x0u));
  /* 118063ee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118063f1 push eax */
  push32((uint32_t)(EAX));
  /* 118063f2 call 0x11806860 */
  push32(0x118063f7u); f_11806860();
  /* 118063f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118063fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118063fd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11806400 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11806403 jmp 0x1180636e */
  goto L_1180636e;
L_11806408:;
  /* 11806408 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1180640a:;
  /* 1180640a mov esp, ebp */
  ESP = (EBP);
  /* 1180640c pop ebp */
  EBP = (pop32());
  /* 1180640d ret  */
  ESPCHK(0x11806360u, _esp0);
  ESP += 4; return;
}

/* FUN_10016410 @ 0x11806410 (970 bytes, 340 insns) */
void f_11806410(void) {
  FTRACE(0x11806410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11806410 push ebp */
  push32((uint32_t)(EBP));
  /* 11806411 mov ebp, esp */
  EBP = (ESP);
  /* 11806413 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11806415 push 0x1181f048 */
  push32((uint32_t)(0x1181f048u));
  /* 1180641a push 0x117ff968 */
  push32((uint32_t)(0x117ff968u));
  /* 1180641f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11806425 push eax */
  push32((uint32_t)(EAX));
  /* 11806426 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1180642d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11806430 push ebx */
  push32((uint32_t)(EBX));
  /* 11806431 push esi */
  push32((uint32_t)(ESI));
  /* 11806432 push edi */
  push32((uint32_t)(EDI));
  /* 11806433 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11806436 cmp dword ptr [0x11822a54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822a54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180643d jne 0x11806496 */
  if (!C.zf) goto L_11806496;
  /* 1180643f push 1 */
  push32((uint32_t)(0x1u));
  /* 11806441 push 0x1181e6a4 */
  push32((uint32_t)(0x1181e6a4u));
  /* 11806446 push 1 */
  push32((uint32_t)(0x1u));
  /* 11806448 push 0x1181e6a4 */
  push32((uint32_t)(0x1181e6a4u));
  /* 1180644d push 0 */
  push32((uint32_t)(0x0u));
  /* 1180644f push 0 */
  push32((uint32_t)(0x0u));
  /* 11806451 call dword ptr [0x118252e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118252e8))), 0x11806457u);
  /* 11806457 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11806459 je 0x11806467 */
  if (C.zf) goto L_11806467;
  /* 1180645b mov dword ptr [0x11822a54], 1 */
  w32((uint32_t)(0x11822a54), (0x1u));
  /* 11806465 jmp 0x11806496 */
  goto L_11806496;
L_11806467:;
  /* 11806467 push 1 */
  push32((uint32_t)(0x1u));
  /* 11806469 push 0x1181e6a0 */
  push32((uint32_t)(0x1181e6a0u));
  /* 1180646e push 1 */
  push32((uint32_t)(0x1u));
  /* 11806470 push 0x1181e6a0 */
  push32((uint32_t)(0x1181e6a0u));
  /* 11806475 push 0 */
  push32((uint32_t)(0x0u));
  /* 11806477 push 0 */
  push32((uint32_t)(0x0u));
  /* 11806479 call dword ptr [0x118252ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x118252ec))), 0x1180647fu);
  /* 1180647f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11806481 je 0x1180648f */
  if (C.zf) goto L_1180648f;
  /* 11806483 mov dword ptr [0x11822a54], 2 */
  w32((uint32_t)(0x11822a54), (0x2u));
  /* 1180648d jmp 0x11806496 */
  goto L_11806496;
L_1180648f:;
  /* 1180648f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11806491 jmp 0x118067f4 */
  goto L_118067f4;
L_11806496:;
  /* 11806496 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180649a jle 0x118064af */
  if ((C.zf||C.sf!=C.of)) goto L_118064af;
  /* 1180649c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1180649f push eax */
  push32((uint32_t)(EAX));
  /* 118064a0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118064a3 push ecx */
  push32((uint32_t)(ECX));
  /* 118064a4 call 0x11806810 */
  push32(0x118064a9u); f_11806810();
  /* 118064a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118064ac mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_118064af:;
  /* 118064af cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118064b3 jle 0x118064c8 */
  if ((C.zf||C.sf!=C.of)) goto L_118064c8;
  /* 118064b5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 118064b8 push edx */
  push32((uint32_t)(EDX));
  /* 118064b9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 118064bc push eax */
  push32((uint32_t)(EAX));
  /* 118064bd call 0x11806810 */
  push32(0x118064c2u); f_11806810();
  /* 118064c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118064c5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_118064c8:;
  /* 118064c8 cmp dword ptr [0x11822a54], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11822a54))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118064cf jne 0x118064f4 */
  if (!C.zf) goto L_118064f4;
  /* 118064d1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 118064d4 push ecx */
  push32((uint32_t)(ECX));
  /* 118064d5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 118064d8 push edx */
  push32((uint32_t)(EDX));
  /* 118064d9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118064dc push eax */
  push32((uint32_t)(EAX));
  /* 118064dd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118064e0 push ecx */
  push32((uint32_t)(ECX));
  /* 118064e1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118064e4 push edx */
  push32((uint32_t)(EDX));
  /* 118064e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118064e8 push eax */
  push32((uint32_t)(EAX));
  /* 118064e9 call dword ptr [0x118252ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x118252ec))), 0x118064efu);
  /* 118064ef jmp 0x118067f4 */
  goto L_118067f4;
L_118064f4:;
  /* 118064f4 cmp dword ptr [0x11822a54], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11822a54))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118064fb jne 0x118067f2 */
  if (!C.zf) goto L_118067f2;
  /* 11806501 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806505 jne 0x11806510 */
  if (!C.zf) goto L_11806510;
  /* 11806507 mov ecx, dword ptr [0x11822900] */
  ECX = (r32((uint32_t)(0x11822900)));
  /* 1180650d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_11806510:;
  /* 11806510 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806514 je 0x11806520 */
  if (C.zf) goto L_11806520;
  /* 11806516 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180651a jne 0x1180669c */
  if (!C.zf) goto L_1180669c;
L_11806520:;
  /* 11806520 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11806523 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806526 jne 0x11806532 */
  if (!C.zf) goto L_11806532;
  /* 11806528 mov eax, 2 */
  EAX = (0x2u);
  /* 1180652d jmp 0x118067f4 */
  goto L_118067f4;
L_11806532:;
  /* 11806532 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806536 jle 0x11806542 */
  if ((C.zf||C.sf!=C.of)) goto L_11806542;
  /* 11806538 mov eax, 1 */
  EAX = (0x1u);
  /* 1180653d jmp 0x118067f4 */
  goto L_118067f4;
L_11806542:;
  /* 11806542 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806546 jle 0x11806552 */
  if ((C.zf||C.sf!=C.of)) goto L_11806552;
  /* 11806548 mov eax, 3 */
  EAX = (0x3u);
  /* 1180654d jmp 0x118067f4 */
  goto L_118067f4;
L_11806552:;
  /* 11806552 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 11806555 push eax */
  push32((uint32_t)(EAX));
  /* 11806556 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11806559 push ecx */
  push32((uint32_t)(ECX));
  /* 1180655a call dword ptr [0x11825344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825344))), 0x11806560u);
  /* 11806560 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11806562 jne 0x1180656b */
  if (!C.zf) goto L_1180656b;
  /* 11806564 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11806566 jmp 0x118067f4 */
  goto L_118067f4;
L_1180656b:;
  /* 1180656b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180656f jne 0x11806577 */
  if (!C.zf) goto L_11806577;
  /* 11806571 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806575 je 0x118065a4 */
  if (C.zf) goto L_118065a4;
L_11806577:;
  /* 11806577 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180657b jne 0x11806583 */
  if (!C.zf) goto L_11806583;
  /* 1180657d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806581 je 0x118065a4 */
  if (C.zf) goto L_118065a4;
L_11806583:;
  /* 11806583 push 0x1181f008 */
  push32((uint32_t)(0x1181f008u));
  /* 11806588 push 0 */
  push32((uint32_t)(0x0u));
  /* 1180658a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 1180658f push 0x1181f000 */
  push32((uint32_t)(0x1181f000u));
  /* 11806594 push 2 */
  push32((uint32_t)(0x2u));
  /* 11806596 call 0x117f5920 */
  push32(0x1180659bu); f_117f5920();
  /* 1180659b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180659e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118065a1 jne 0x118065a4 */
  if (!C.zf) goto L_118065a4;
  /* 118065a3 int3  */
  x86_unimpl("int3 @ 0x118065a3");
L_118065a4:;
  /* 118065a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118065a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118065a8 jne 0x1180656b */
  if (!C.zf) goto L_1180656b;
  /* 118065aa cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118065ae jle 0x11806623 */
  if ((C.zf||C.sf!=C.of)) goto L_11806623;
  /* 118065b0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118065b4 jae 0x118065c0 */
  if (!C.cf) goto L_118065c0;
  /* 118065b6 mov eax, 3 */
  EAX = (0x3u);
  /* 118065bb jmp 0x118067f4 */
  goto L_118067f4;
L_118065c0:;
  /* 118065c0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 118065c3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 118065c6 jmp 0x118065d1 */
  goto L_118065d1;
L_118065c8:;
  /* 118065c8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 118065cb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118065ce mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_118065d1:;
  /* 118065d1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 118065d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118065d6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118065d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118065da je 0x11806619 */
  if (C.zf) goto L_11806619;
  /* 118065dc mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 118065df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118065e1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 118065e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118065e6 je 0x11806619 */
  if (C.zf) goto L_11806619;
  /* 118065e8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118065eb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118065ed mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 118065ef mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 118065f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118065f4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118065f6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118065f8 jl 0x11806617 */
  if ((C.sf!=C.of)) goto L_11806617;
  /* 118065fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118065fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118065ff mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11806601 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11806604 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11806606 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11806609 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180660b jg 0x11806617 */
  if ((!C.zf&&C.sf==C.of)) goto L_11806617;
  /* 1180660d mov eax, 2 */
  EAX = (0x2u);
  /* 11806612 jmp 0x118067f4 */
  goto L_118067f4;
L_11806617:;
  /* 11806617 jmp 0x118065c8 */
  goto L_118065c8;
L_11806619:;
  /* 11806619 mov eax, 3 */
  EAX = (0x3u);
  /* 1180661e jmp 0x118067f4 */
  goto L_118067f4;
L_11806623:;
  /* 11806623 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806627 jle 0x1180669c */
  if ((C.zf||C.sf!=C.of)) goto L_1180669c;
  /* 11806629 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180662d jae 0x11806639 */
  if (!C.cf) goto L_11806639;
  /* 1180662f mov eax, 1 */
  EAX = (0x1u);
  /* 11806634 jmp 0x118067f4 */
  goto L_118067f4;
L_11806639:;
  /* 11806639 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 1180663c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 1180663f jmp 0x1180664a */
  goto L_1180664a;
L_11806641:;
  /* 11806641 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11806644 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11806647 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_1180664a:;
  /* 1180664a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1180664d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1180664f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11806651 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11806653 je 0x11806692 */
  if (C.zf) goto L_11806692;
  /* 11806655 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11806658 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1180665a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1180665d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1180665f je 0x11806692 */
  if (C.zf) goto L_11806692;
  /* 11806661 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11806664 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11806666 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11806668 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1180666b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1180666d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1180666f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806671 jl 0x11806690 */
  if ((C.sf!=C.of)) goto L_11806690;
  /* 11806673 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11806676 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11806678 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1180667a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1180667d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1180667f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11806682 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806684 jg 0x11806690 */
  if ((!C.zf&&C.sf==C.of)) goto L_11806690;
  /* 11806686 mov eax, 2 */
  EAX = (0x2u);
  /* 1180668b jmp 0x118067f4 */
  goto L_118067f4;
L_11806690:;
  /* 11806690 jmp 0x11806641 */
  goto L_11806641;
L_11806692:;
  /* 11806692 mov eax, 1 */
  EAX = (0x1u);
  /* 11806697 jmp 0x118067f4 */
  goto L_118067f4;
L_1180669c:;
  /* 1180669c push 0 */
  push32((uint32_t)(0x0u));
  /* 1180669e push 0 */
  push32((uint32_t)(0x0u));
  /* 118066a0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118066a3 push ecx */
  push32((uint32_t)(ECX));
  /* 118066a4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118066a7 push edx */
  push32((uint32_t)(EDX));
  /* 118066a8 push 9 */
  push32((uint32_t)(0x9u));
  /* 118066aa mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 118066ad push eax */
  push32((uint32_t)(EAX));
  /* 118066ae call dword ptr [0x11825338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825338))), 0x118066b4u);
  /* 118066b4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 118066b7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118066bb jne 0x118066c4 */
  if (!C.zf) goto L_118066c4;
  /* 118066bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118066bf jmp 0x118067f4 */
  goto L_118067f4;
L_118066c4:;
  /* 118066c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 118066cb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 118066ce shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 118066d0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118066d3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 118066d5 call 0x117f9a00 */
  push32(0x118066dau); f_117f9a00();
  /* 118066da mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 118066dd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 118066e0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 118066e3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 118066e6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 118066ed jmp 0x11806706 */
  goto L_11806706;
  /* 118066ef mov eax, 1 */
  EAX = (0x1u);
  /* 118066f4 ret  */
  ESPCHK(0x11806410u, _esp0);
  ESP += 4; return;
  /* 118066f5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 118066f8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 118066ff mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11806706:;
  /* 11806706 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180670a jne 0x11806713 */
  if (!C.zf) goto L_11806713;
  /* 1180670c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1180670e jmp 0x118067f4 */
  goto L_118067f4;
L_11806713:;
  /* 11806713 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11806716 push edx */
  push32((uint32_t)(EDX));
  /* 11806717 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1180671a push eax */
  push32((uint32_t)(EAX));
  /* 1180671b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1180671e push ecx */
  push32((uint32_t)(ECX));
  /* 1180671f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11806722 push edx */
  push32((uint32_t)(EDX));
  /* 11806723 push 1 */
  push32((uint32_t)(0x1u));
  /* 11806725 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11806728 push eax */
  push32((uint32_t)(EAX));
  /* 11806729 call dword ptr [0x11825338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825338))), 0x1180672fu);
  /* 1180672f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11806731 jne 0x1180673a */
  if (!C.zf) goto L_1180673a;
  /* 11806733 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11806735 jmp 0x118067f4 */
  goto L_118067f4;
L_1180673a:;
  /* 1180673a push 0 */
  push32((uint32_t)(0x0u));
  /* 1180673c push 0 */
  push32((uint32_t)(0x0u));
  /* 1180673e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11806741 push ecx */
  push32((uint32_t)(ECX));
  /* 11806742 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11806745 push edx */
  push32((uint32_t)(EDX));
  /* 11806746 push 9 */
  push32((uint32_t)(0x9u));
  /* 11806748 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1180674b push eax */
  push32((uint32_t)(EAX));
  /* 1180674c call dword ptr [0x11825338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825338))), 0x11806752u);
  /* 11806752 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11806755 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806759 jne 0x11806762 */
  if (!C.zf) goto L_11806762;
  /* 1180675b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1180675d jmp 0x118067f4 */
  goto L_118067f4;
L_11806762:;
  /* 11806762 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11806769 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1180676c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1180676e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11806771 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11806773 call 0x117f9a00 */
  push32(0x11806778u); f_117f9a00();
  /* 11806778 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 1180677b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1180677e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11806781 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11806784 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1180678b jmp 0x118067a4 */
  goto L_118067a4;
  /* 1180678d mov eax, 1 */
  EAX = (0x1u);
  /* 11806792 ret  */
  ESPCHK(0x11806410u, _esp0);
  ESP += 4; return;
  /* 11806793 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11806796 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1180679d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_118067a4:;
  /* 118067a4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118067a8 jne 0x118067ae */
  if (!C.zf) goto L_118067ae;
  /* 118067aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118067ac jmp 0x118067f4 */
  goto L_118067f4;
L_118067ae:;
  /* 118067ae mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 118067b1 push edx */
  push32((uint32_t)(EDX));
  /* 118067b2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 118067b5 push eax */
  push32((uint32_t)(EAX));
  /* 118067b6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 118067b9 push ecx */
  push32((uint32_t)(ECX));
  /* 118067ba mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 118067bd push edx */
  push32((uint32_t)(EDX));
  /* 118067be push 1 */
  push32((uint32_t)(0x1u));
  /* 118067c0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 118067c3 push eax */
  push32((uint32_t)(EAX));
  /* 118067c4 call dword ptr [0x11825338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825338))), 0x118067cau);
  /* 118067ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118067cc jne 0x118067d2 */
  if (!C.zf) goto L_118067d2;
  /* 118067ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118067d0 jmp 0x118067f4 */
  goto L_118067f4;
L_118067d2:;
  /* 118067d2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 118067d5 push ecx */
  push32((uint32_t)(ECX));
  /* 118067d6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 118067d9 push edx */
  push32((uint32_t)(EDX));
  /* 118067da mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 118067dd push eax */
  push32((uint32_t)(EAX));
  /* 118067de mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 118067e1 push ecx */
  push32((uint32_t)(ECX));
  /* 118067e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118067e5 push edx */
  push32((uint32_t)(EDX));
  /* 118067e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118067e9 push eax */
  push32((uint32_t)(EAX));
  /* 118067ea call dword ptr [0x118252e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118252e8))), 0x118067f0u);
  /* 118067f0 jmp 0x118067f4 */
  goto L_118067f4;
L_118067f2:;
  /* 118067f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118067f4:;
  /* 118067f4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 118067f7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118067fa mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11806801 pop edi */
  EDI = (pop32());
  /* 11806802 pop esi */
  ESI = (pop32());
  /* 11806803 pop ebx */
  EBX = (pop32());
  /* 11806804 mov esp, ebp */
  ESP = (EBP);
  /* 11806806 pop ebp */
  EBP = (pop32());
  /* 11806807 ret  */
  ESPCHK(0x11806410u, _esp0);
  ESP += 4; return;
}

/* FUN_10016810 @ 0x11806810 (80 bytes, 32 insns) */
void f_11806810(void) {
  FTRACE(0x11806810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11806810 push ebp */
  push32((uint32_t)(EBP));
  /* 11806811 mov ebp, esp */
  EBP = (ESP);
  /* 11806813 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11806816 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11806819 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1180681c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180681f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11806822:;
  /* 11806822 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11806825 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11806828 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1180682b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1180682e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11806830 je 0x11806847 */
  if (C.zf) goto L_11806847;
  /* 11806832 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11806835 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11806838 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1180683a je 0x11806847 */
  if (C.zf) goto L_11806847;
  /* 1180683c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1180683f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11806842 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11806845 jmp 0x11806822 */
  goto L_11806822;
L_11806847:;
  /* 11806847 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1180684a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1180684d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1180684f jne 0x11806859 */
  if (!C.zf) goto L_11806859;
  /* 11806851 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11806854 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11806857 jmp 0x1180685c */
  goto L_1180685c;
L_11806859:;
  /* 11806859 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1180685c:;
  /* 1180685c mov esp, ebp */
  ESP = (EBP);
  /* 1180685e pop ebp */
  EBP = (pop32());
  /* 1180685f ret  */
  ESPCHK(0x11806810u, _esp0);
  ESP += 4; return;
}

/* FUN_10016860 @ 0x11806860 (736 bytes, 224 insns) */
void f_11806860(void) {
  FTRACE(0x11806860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11806860 push ebp */
  push32((uint32_t)(EBP));
  /* 11806861 mov ebp, esp */
  EBP = (ESP);
  /* 11806863 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11806866 push esi */
  push32((uint32_t)(ESI));
  /* 11806867 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180686b je 0x1180688c */
  if (C.zf) goto L_1180688c;
  /* 1180686d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1180686f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11806872 push eax */
  push32((uint32_t)(EAX));
  /* 11806873 call 0x11806cb0 */
  push32(0x11806878u); f_11806cb0();
  /* 11806878 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180687b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1180687e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806882 je 0x1180688c */
  if (C.zf) goto L_1180688c;
  /* 11806884 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11806887 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180688a jne 0x11806894 */
  if (!C.zf) goto L_11806894;
L_1180688c:;
  /* 1180688c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1180688f jmp 0x11806b3b */
  goto L_11806b3b;
L_11806894:;
  /* 11806894 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11806897 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1180689b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1180689d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1180689f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118068a0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 118068a3 mov ecx, dword ptr [0x1182270c] */
  ECX = (r32((uint32_t)(0x1182270c)));
  /* 118068a9 cmp ecx, dword ptr [0x11822710] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11822710))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118068af jne 0x118068c5 */
  if (!C.zf) goto L_118068c5;
  /* 118068b1 mov edx, dword ptr [0x1182270c] */
  EDX = (r32((uint32_t)(0x1182270c)));
  /* 118068b7 push edx */
  push32((uint32_t)(EDX));
  /* 118068b8 call 0x11806bc0 */
  push32(0x118068bdu); f_11806bc0();
  /* 118068bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118068c0 mov dword ptr [0x1182270c], eax */
  w32((uint32_t)(0x1182270c), (EAX));
L_118068c5:;
  /* 118068c5 cmp dword ptr [0x1182270c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1182270c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118068cc jne 0x11806985 */
  if (!C.zf) goto L_11806985;
  /* 118068d2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118068d6 je 0x118068f7 */
  if (C.zf) goto L_118068f7;
  /* 118068d8 cmp dword ptr [0x11822714], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822714))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118068df je 0x118068f7 */
  if (C.zf) goto L_118068f7;
  /* 118068e1 call 0x11806360 */
  push32(0x118068e6u); f_11806360();
  /* 118068e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118068e8 je 0x118068f2 */
  if (C.zf) goto L_118068f2;
  /* 118068ea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118068ed jmp 0x11806b3b */
  goto L_11806b3b;
L_118068f2:;
  /* 118068f2 jmp 0x11806985 */
  goto L_11806985;
L_118068f7:;
  /* 118068f7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118068fb je 0x11806904 */
  if (C.zf) goto L_11806904;
  /* 118068fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118068ff jmp 0x11806b3b */
  goto L_11806b3b;
L_11806904:;
  /* 11806904 cmp dword ptr [0x1182270c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1182270c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180690b jne 0x11806944 */
  if (!C.zf) goto L_11806944;
  /* 1180690d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 11806912 push 0x1181f060 */
  push32((uint32_t)(0x1181f060u));
  /* 11806917 push 2 */
  push32((uint32_t)(0x2u));
  /* 11806919 push 4 */
  push32((uint32_t)(0x4u));
  /* 1180691b call 0x117f6860 */
  push32(0x11806920u); f_117f6860();
  /* 11806920 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11806923 mov dword ptr [0x1182270c], eax */
  w32((uint32_t)(0x1182270c), (EAX));
  /* 11806928 cmp dword ptr [0x1182270c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1182270c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180692f jne 0x11806939 */
  if (!C.zf) goto L_11806939;
  /* 11806931 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11806934 jmp 0x11806b3b */
  goto L_11806b3b;
L_11806939:;
  /* 11806939 mov eax, dword ptr [0x1182270c] */
  EAX = (r32((uint32_t)(0x1182270c)));
  /* 1180693e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11806944:;
  /* 11806944 cmp dword ptr [0x11822714], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822714))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180694b jne 0x11806985 */
  if (!C.zf) goto L_11806985;
  /* 1180694d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 11806952 push 0x1181f060 */
  push32((uint32_t)(0x1181f060u));
  /* 11806957 push 2 */
  push32((uint32_t)(0x2u));
  /* 11806959 push 4 */
  push32((uint32_t)(0x4u));
  /* 1180695b call 0x117f6860 */
  push32(0x11806960u); f_117f6860();
  /* 11806960 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11806963 mov dword ptr [0x11822714], eax */
  w32((uint32_t)(0x11822714), (EAX));
  /* 11806968 cmp dword ptr [0x11822714], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822714))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180696f jne 0x11806979 */
  if (!C.zf) goto L_11806979;
  /* 11806971 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11806974 jmp 0x11806b3b */
  goto L_11806b3b;
L_11806979:;
  /* 11806979 mov ecx, dword ptr [0x11822714] */
  ECX = (r32((uint32_t)(0x11822714)));
  /* 1180697f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_11806985:;
  /* 11806985 mov edx, dword ptr [0x1182270c] */
  EDX = (r32((uint32_t)(0x1182270c)));
  /* 1180698b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1180698e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11806991 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11806994 push eax */
  push32((uint32_t)(EAX));
  /* 11806995 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11806998 push ecx */
  push32((uint32_t)(ECX));
  /* 11806999 call 0x11806b40 */
  push32(0x1180699eu); f_11806b40();
  /* 1180699e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118069a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118069a4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118069a8 jl 0x11806a41 */
  if ((C.sf!=C.of)) goto L_11806a41;
  /* 118069ae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118069b1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118069b4 je 0x11806a41 */
  if (C.zf) goto L_11806a41;
  /* 118069ba cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118069be je 0x11806a33 */
  if (C.zf) goto L_11806a33;
  /* 118069c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 118069c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118069c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118069c8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 118069cb push edx */
  push32((uint32_t)(EDX));
  /* 118069cc call 0x117f72f0 */
  push32(0x118069d1u); f_117f72f0();
  /* 118069d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118069d4 jmp 0x118069df */
  goto L_118069df;
L_118069d6:;
  /* 118069d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118069d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118069dc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_118069df:;
  /* 118069df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118069e2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118069e5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118069e9 je 0x11806a00 */
  if (C.zf) goto L_11806a00;
  /* 118069eb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118069ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118069f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118069f4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 118069f7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 118069fb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 118069fe jmp 0x118069d6 */
  goto L_118069d6;
L_11806a00:;
  /* 11806a00 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 11806a05 push 0x1181f060 */
  push32((uint32_t)(0x1181f060u));
  /* 11806a0a push 2 */
  push32((uint32_t)(0x2u));
  /* 11806a0c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11806a0f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11806a12 push eax */
  push32((uint32_t)(EAX));
  /* 11806a13 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11806a16 push ecx */
  push32((uint32_t)(ECX));
  /* 11806a17 call 0x117f6cf0 */
  push32(0x11806a1cu); f_117f6cf0();
  /* 11806a1c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11806a1f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11806a22 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806a26 je 0x11806a31 */
  if (C.zf) goto L_11806a31;
  /* 11806a28 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11806a2b mov dword ptr [0x1182270c], edx */
  w32((uint32_t)(0x1182270c), (EDX));
L_11806a31:;
  /* 11806a31 jmp 0x11806a3f */
  goto L_11806a3f;
L_11806a33:;
  /* 11806a33 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11806a36 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11806a39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11806a3c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_11806a3f:;
  /* 11806a3f jmp 0x11806ab4 */
  goto L_11806ab4;
L_11806a41:;
  /* 11806a41 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806a45 jne 0x11806aad */
  if (!C.zf) goto L_11806aad;
  /* 11806a47 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806a4b jge 0x11806a55 */
  if ((C.sf==C.of)) goto L_11806a55;
  /* 11806a4d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11806a50 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11806a52 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11806a55:;
  /* 11806a55 push 0xce */
  push32((uint32_t)(0xceu));
  /* 11806a5a push 0x1181f060 */
  push32((uint32_t)(0x1181f060u));
  /* 11806a5f push 2 */
  push32((uint32_t)(0x2u));
  /* 11806a61 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11806a64 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 11806a6b push edx */
  push32((uint32_t)(EDX));
  /* 11806a6c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11806a6f push eax */
  push32((uint32_t)(EAX));
  /* 11806a70 call 0x117f6cf0 */
  push32(0x11806a75u); f_117f6cf0();
  /* 11806a75 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11806a78 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11806a7b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806a7f jne 0x11806a89 */
  if (!C.zf) goto L_11806a89;
  /* 11806a81 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11806a84 jmp 0x11806b3b */
  goto L_11806b3b;
L_11806a89:;
  /* 11806a89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11806a8c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11806a8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11806a92 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11806a95 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11806a98 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11806a9b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 11806aa3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11806aa6 mov dword ptr [0x1182270c], eax */
  w32((uint32_t)(0x1182270c), (EAX));
  /* 11806aab jmp 0x11806ab4 */
  goto L_11806ab4;
L_11806aad:;
  /* 11806aad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11806aaf jmp 0x11806b3b */
  goto L_11806b3b;
L_11806ab4:;
  /* 11806ab4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806ab8 je 0x11806b39 */
  if (C.zf) goto L_11806b39;
  /* 11806aba push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 11806abf push 0x1181f060 */
  push32((uint32_t)(0x1181f060u));
  /* 11806ac4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11806ac6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11806ac9 push ecx */
  push32((uint32_t)(ECX));
  /* 11806aca call 0x117f9690 */
  push32(0x11806acfu); f_117f9690();
  /* 11806acf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11806ad2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11806ad5 push eax */
  push32((uint32_t)(EAX));
  /* 11806ad6 call 0x117f6860 */
  push32(0x11806adbu); f_117f6860();
  /* 11806adb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11806ade mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11806ae1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806ae5 je 0x11806b39 */
  if (C.zf) goto L_11806b39;
  /* 11806ae7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11806aea push edx */
  push32((uint32_t)(EDX));
  /* 11806aeb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11806aee push eax */
  push32((uint32_t)(EAX));
  /* 11806aef call 0x117f9810 */
  push32(0x11806af4u); f_117f9810();
  /* 11806af4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11806af7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11806afa sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11806afd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11806b00 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11806b02 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11806b05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11806b08 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11806b0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11806b0e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11806b11 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11806b14 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11806b17 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11806b19 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11806b1b not edx */
  EDX = (~(EDX));
  /* 11806b1d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11806b20 push edx */
  push32((uint32_t)(EDX));
  /* 11806b21 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11806b24 push eax */
  push32((uint32_t)(EAX));
  /* 11806b25 call dword ptr [0x118252e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118252e4))), 0x11806b2bu);
  /* 11806b2b push 2 */
  push32((uint32_t)(0x2u));
  /* 11806b2d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11806b30 push ecx */
  push32((uint32_t)(ECX));
  /* 11806b31 call 0x117f72f0 */
  push32(0x11806b36u); f_117f72f0();
  /* 11806b36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11806b39:;
  /* 11806b39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11806b3b:;
  /* 11806b3b pop esi */
  ESI = (pop32());
  /* 11806b3c mov esp, ebp */
  ESP = (EBP);
  /* 11806b3e pop ebp */
  EBP = (pop32());
  /* 11806b3f ret  */
  ESPCHK(0x11806860u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x11806b40 (124 bytes, 47 insns) */
void f_11806b40(void) {
  FTRACE(0x11806b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11806b40 push ebp */
  push32((uint32_t)(EBP));
  /* 11806b41 mov ebp, esp */
  EBP = (ESP);
  /* 11806b43 push ecx */
  push32((uint32_t)(ECX));
  /* 11806b44 mov eax, dword ptr [0x1182270c] */
  EAX = (r32((uint32_t)(0x1182270c)));
  /* 11806b49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11806b4c jmp 0x11806b57 */
  goto L_11806b57;
L_11806b4e:;
  /* 11806b4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11806b51 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11806b54 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11806b57:;
  /* 11806b57 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11806b5a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806b5d je 0x11806baa */
  if (C.zf) goto L_11806baa;
  /* 11806b5f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11806b62 push eax */
  push32((uint32_t)(EAX));
  /* 11806b63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11806b66 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11806b68 push edx */
  push32((uint32_t)(EDX));
  /* 11806b69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11806b6c push eax */
  push32((uint32_t)(EAX));
  /* 11806b6d call 0x11806310 */
  push32(0x11806b72u); f_11806310();
  /* 11806b72 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11806b75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11806b77 jne 0x11806ba8 */
  if (!C.zf) goto L_11806ba8;
  /* 11806b79 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11806b7c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11806b7e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11806b81 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 11806b85 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806b88 je 0x11806b9a */
  if (C.zf) goto L_11806b9a;
  /* 11806b8a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11806b8d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11806b8f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11806b92 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 11806b96 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11806b98 jne 0x11806ba8 */
  if (!C.zf) goto L_11806ba8;
L_11806b9a:;
  /* 11806b9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11806b9d sub eax, dword ptr [0x1182270c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1182270c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11806ba3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11806ba6 jmp 0x11806bb8 */
  goto L_11806bb8;
L_11806ba8:;
  /* 11806ba8 jmp 0x11806b4e */
  goto L_11806b4e;
L_11806baa:;
  /* 11806baa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11806bad sub eax, dword ptr [0x1182270c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1182270c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11806bb3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11806bb6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11806bb8:;
  /* 11806bb8 mov esp, ebp */
  ESP = (EBP);
  /* 11806bba pop ebp */
  EBP = (pop32());
  /* 11806bbb ret  */
  ESPCHK(0x11806b40u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x11806bc0 (238 bytes, 80 insns) */
void f_11806bc0(void) {
  FTRACE(0x11806bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11806bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11806bc1 mov ebp, esp */
  EBP = (ESP);
  /* 11806bc3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11806bc6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11806bcd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11806bd0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11806bd3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806bd7 jne 0x11806be0 */
  if (!C.zf) goto L_11806be0;
  /* 11806bd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11806bdb jmp 0x11806caa */
  goto L_11806caa;
L_11806be0:;
  /* 11806be0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11806be3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11806be5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11806be8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11806beb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11806bee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11806bf0 je 0x11806bfd */
  if (C.zf) goto L_11806bfd;
  /* 11806bf2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11806bf5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11806bf8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11806bfb jmp 0x11806be0 */
  goto L_11806be0;
L_11806bfd:;
  /* 11806bfd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 11806c02 push 0x1181f060 */
  push32((uint32_t)(0x1181f060u));
  /* 11806c07 push 2 */
  push32((uint32_t)(0x2u));
  /* 11806c09 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11806c0c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 11806c13 push eax */
  push32((uint32_t)(EAX));
  /* 11806c14 call 0x117f6860 */
  push32(0x11806c19u); f_117f6860();
  /* 11806c19 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11806c1c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11806c1f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11806c22 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11806c25 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806c29 jne 0x11806c35 */
  if (!C.zf) goto L_11806c35;
  /* 11806c2b push 9 */
  push32((uint32_t)(0x9u));
  /* 11806c2d call 0x117f57d0 */
  push32(0x11806c32u); f_117f57d0();
  /* 11806c32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11806c35:;
  /* 11806c35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11806c38 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11806c3b:;
  /* 11806c3b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11806c3e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806c41 je 0x11806c9e */
  if (C.zf) goto L_11806c9e;
  /* 11806c43 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 11806c48 push 0x1181f060 */
  push32((uint32_t)(0x1181f060u));
  /* 11806c4d push 2 */
  push32((uint32_t)(0x2u));
  /* 11806c4f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11806c52 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11806c54 push edx */
  push32((uint32_t)(EDX));
  /* 11806c55 call 0x117f9690 */
  push32(0x11806c5au); f_117f9690();
  /* 11806c5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11806c5d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11806c60 push eax */
  push32((uint32_t)(EAX));
  /* 11806c61 call 0x117f6860 */
  push32(0x11806c66u); f_117f6860();
  /* 11806c66 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11806c69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11806c6c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11806c6e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11806c71 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806c74 je 0x11806c8a */
  if (C.zf) goto L_11806c8a;
  /* 11806c76 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11806c79 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11806c7b push ecx */
  push32((uint32_t)(ECX));
  /* 11806c7c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11806c7f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11806c81 push eax */
  push32((uint32_t)(EAX));
  /* 11806c82 call 0x117f9810 */
  push32(0x11806c87u); f_117f9810();
  /* 11806c87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11806c8a:;
  /* 11806c8a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11806c8d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11806c90 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11806c93 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11806c96 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11806c99 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11806c9c jmp 0x11806c3b */
  goto L_11806c3b;
L_11806c9e:;
  /* 11806c9e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11806ca1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11806ca7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11806caa:;
  /* 11806caa mov esp, ebp */
  ESP = (EBP);
  /* 11806cac pop ebp */
  EBP = (pop32());
  /* 11806cad ret  */
  ESPCHK(0x11806bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016cb0 @ 0x11806cb0 (237 bytes, 81 insns) */
void f_11806cb0(void) {
  FTRACE(0x11806cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11806cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11806cb1 mov ebp, esp */
  EBP = (ESP);
  /* 11806cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11806cb4 cmp dword ptr [0x11823e4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11823e4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806cbb jne 0x11806cd2 */
  if (!C.zf) goto L_11806cd2;
  /* 11806cbd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11806cc0 push eax */
  push32((uint32_t)(EAX));
  /* 11806cc1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11806cc4 push ecx */
  push32((uint32_t)(ECX));
  /* 11806cc5 call 0x11806db0 */
  push32(0x11806ccau); f_11806db0();
  /* 11806cca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11806ccd jmp 0x11806d99 */
  goto L_11806d99;
L_11806cd2:;
  /* 11806cd2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11806cd4 call 0x117fa260 */
  push32(0x11806cd9u); f_117fa260();
  /* 11806cd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11806cdc jmp 0x11806ce7 */
  goto L_11806ce7;
L_11806cde:;
  /* 11806cde mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11806ce1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11806ce4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11806ce7:;
  /* 11806ce7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11806cea movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 11806cee mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11806cf2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11806cf5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11806cfb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11806cfd je 0x11806d7b */
  if (C.zf) goto L_11806d7b;
  /* 11806cff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11806d02 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11806d07 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11806d09 mov cl, byte ptr [eax + 0x11823f61] */
  CL = (r8((uint32_t)(EAX + 0x11823f61)));
  /* 11806d0f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11806d12 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11806d14 je 0x11806d66 */
  if (C.zf) goto L_11806d66;
  /* 11806d16 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11806d19 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11806d1c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11806d1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11806d22 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11806d24 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11806d26 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11806d28 jne 0x11806d38 */
  if (!C.zf) goto L_11806d38;
  /* 11806d2a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11806d2c call 0x117fa300 */
  push32(0x11806d31u); f_117fa300();
  /* 11806d31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11806d34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11806d36 jmp 0x11806d99 */
  goto L_11806d99;
L_11806d38:;
  /* 11806d38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11806d3b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11806d41 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11806d44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11806d47 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11806d49 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11806d4b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11806d4d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806d50 jne 0x11806d64 */
  if (!C.zf) goto L_11806d64;
  /* 11806d52 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11806d54 call 0x117fa300 */
  push32(0x11806d59u); f_117fa300();
  /* 11806d59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11806d5c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11806d5f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11806d62 jmp 0x11806d99 */
  goto L_11806d99;
L_11806d64:;
  /* 11806d64 jmp 0x11806d76 */
  goto L_11806d76;
L_11806d66:;
  /* 11806d66 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11806d69 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11806d6f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806d72 jne 0x11806d76 */
  if (!C.zf) goto L_11806d76;
  /* 11806d74 jmp 0x11806d7b */
  goto L_11806d7b;
L_11806d76:;
  /* 11806d76 jmp 0x11806cde */
  goto L_11806cde;
L_11806d7b:;
  /* 11806d7b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11806d7d call 0x117fa300 */
  push32(0x11806d82u); f_117fa300();
  /* 11806d82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11806d85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11806d88 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11806d8d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11806d90 jne 0x11806d97 */
  if (!C.zf) goto L_11806d97;
  /* 11806d92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11806d95 jmp 0x11806d99 */
  goto L_11806d99;
L_11806d97:;
  /* 11806d97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11806d99:;
  /* 11806d99 mov esp, ebp */
  ESP = (EBP);
  /* 11806d9b pop ebp */
  EBP = (pop32());
  /* 11806d9c ret  */
  ESPCHK(0x11806cb0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11806db0 (193 bytes, 87 insns) */
void f_11806db0(void) {
  FTRACE(0x11806db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11806db0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11806db2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11806db6 push ebx */
  push32((uint32_t)(EBX));
  /* 11806db7 mov ebx, eax */
  EBX = (EAX);
  /* 11806db9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11806dbc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11806dc0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11806dc6 je 0x11806ddb */
  if (C.zf) goto L_11806ddb;
L_11806dc8:;
  /* 11806dc8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11806dca inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11806dcb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11806dcd je 0x11806da0 */
  if (C.zf) { jmp_ind(0x11806da0u); return; }
  /* 11806dcf test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11806dd1 je 0x11806e24 */
  if (C.zf) goto L_11806e24;
  /* 11806dd3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11806dd9 jne 0x11806dc8 */
  if (!C.zf) goto L_11806dc8;
L_11806ddb:;
  /* 11806ddb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11806ddd push edi */
  push32((uint32_t)(EDI));
  /* 11806dde mov eax, ebx */
  EAX = (EBX);
  /* 11806de0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11806de3 push esi */
  push32((uint32_t)(ESI));
  /* 11806de4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11806de6:;
  /* 11806de6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11806de8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11806ded mov eax, ecx */
  EAX = (ECX);
  /* 11806def mov esi, edi */
  ESI = (EDI);
  /* 11806df1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11806df3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11806df5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11806df7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11806dfa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11806dfd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11806dff xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11806e01 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11806e04 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11806e0a jne 0x11806e28 */
  if (!C.zf) goto L_11806e28;
  /* 11806e0c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11806e11 je 0x11806de6 */
  if (C.zf) goto L_11806de6;
  /* 11806e13 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11806e18 jne 0x11806e22 */
  if (!C.zf) goto L_11806e22;
  /* 11806e1a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11806e20 jne 0x11806de6 */
  if (!C.zf) goto L_11806de6;
L_11806e22:;
  /* 11806e22 pop esi */
  ESI = (pop32());
  /* 11806e23 pop edi */
  EDI = (pop32());
L_11806e24:;
  /* 11806e24 pop ebx */
  EBX = (pop32());
  /* 11806e25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11806e27 ret  */
  ESPCHK(0x11806db0u, _esp0);
  ESP += 4; return;
L_11806e28:;
  /* 11806e28 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11806e2b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11806e2d je 0x11806e65 */
  if (C.zf) goto L_11806e65;
  /* 11806e2f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11806e31 je 0x11806e22 */
  if (C.zf) goto L_11806e22;
  /* 11806e33 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11806e35 je 0x11806e5e */
  if (C.zf) goto L_11806e5e;
  /* 11806e37 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11806e39 je 0x11806e22 */
  if (C.zf) goto L_11806e22;
  /* 11806e3b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11806e3e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11806e40 je 0x11806e57 */
  if (C.zf) goto L_11806e57;
  /* 11806e42 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11806e44 je 0x11806e22 */
  if (C.zf) goto L_11806e22;
  /* 11806e46 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11806e48 je 0x11806e50 */
  if (C.zf) goto L_11806e50;
  /* 11806e4a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11806e4c je 0x11806e22 */
  if (C.zf) goto L_11806e22;
  /* 11806e4e jmp 0x11806de6 */
  goto L_11806de6;
L_11806e50:;
  /* 11806e50 pop esi */
  ESI = (pop32());
  /* 11806e51 pop edi */
  EDI = (pop32());
  /* 11806e52 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11806e55 pop ebx */
  EBX = (pop32());
  /* 11806e56 ret  */
  ESPCHK(0x11806db0u, _esp0);
  ESP += 4; return;
L_11806e57:;
  /* 11806e57 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11806e5a pop esi */
  ESI = (pop32());
  /* 11806e5b pop edi */
  EDI = (pop32());
  /* 11806e5c pop ebx */
  EBX = (pop32());
  /* 11806e5d ret  */
  ESPCHK(0x11806db0u, _esp0);
  ESP += 4; return;
L_11806e5e:;
  /* 11806e5e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11806e61 pop esi */
  ESI = (pop32());
  /* 11806e62 pop edi */
  EDI = (pop32());
  /* 11806e63 pop ebx */
  EBX = (pop32());
  /* 11806e64 ret  */
  ESPCHK(0x11806db0u, _esp0);
  ESP += 4; return;
L_11806e65:;
  /* 11806e65 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11806e68 pop esi */
  ESI = (pop32());
  /* 11806e69 pop edi */
  EDI = (pop32());
  /* 11806e6a pop ebx */
  EBX = (pop32());
  /* 11806e6b ret  */
  ESPCHK(0x11806db0u, _esp0);
  ESP += 4; return;
  /* 11806e6c jmp dword ptr [0x118253a4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x118253a4)))); return;
}

/* RtlUnwind @ 0x11806fbc (6 bytes, 1 insns) */
void f_11806fbc(void) {
  FTRACE(0x11806fbcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11806fbc jmp dword ptr [0x11825320] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11825320)))); return;
}

