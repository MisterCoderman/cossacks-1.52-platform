#include "recomp.h"

/* FUN_10005d2e @ 0x118d5d2e (115 bytes, 37 insns) */
void f_118d5d2e(void) {
  FTRACE(0x118d5d2eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d5d2e push esi */
  push32((uint32_t)(ESI));
  /* 118d5d2f call 0x118d5daa */
  push32(0x118d5d34u); f_118d5daa();
  /* 118d5d34 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 118d5d38 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 118d5d3a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 118d5d3c mov eax, 0x118dbac0 */
  EAX = (0x118dbac0u);
L_118d5d41:;
  /* 118d5d41 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5d43 je 0x118d5d67 */
  if (C.zf) goto L_118d5d67;
  /* 118d5d45 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d5d48 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118d5d49 cmp eax, 0x118dbc28 */
  { uint32_t _a=(EAX),_b=(0x118dbc28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5d4e jl 0x118d5d41 */
  if ((C.sf!=C.of)) goto L_118d5d41;
  /* 118d5d50 cmp ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5d53 jb 0x118d5d77 */
  if (C.cf) goto L_118d5d77;
  /* 118d5d55 cmp ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5d58 ja 0x118d5d77 */
  if ((!C.cf&&!C.zf)) goto L_118d5d77;
  /* 118d5d5a call 0x118d5da1 */
  push32(0x118d5d5fu); f_118d5da1();
  /* 118d5d5f mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 118d5d65 pop esi */
  ESI = (pop32());
  /* 118d5d66 ret  */
  ESPCHK(0x118d5d2eu, _esp0);
  ESP += 4; return;
L_118d5d67:;
  /* 118d5d67 call 0x118d5da1 */
  push32(0x118d5d6cu); f_118d5da1();
  /* 118d5d6c mov ecx, dword ptr [esi*8 + 0x118dbac4] */
  ECX = (r32((uint32_t)(ESI*8 + 0x118dbac4)));
  /* 118d5d73 pop esi */
  ESI = (pop32());
  /* 118d5d74 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 118d5d76 ret  */
  ESPCHK(0x118d5d2eu, _esp0);
  ESP += 4; return;
L_118d5d77:;
  /* 118d5d77 cmp ecx, 0xbc */
  { uint32_t _a=(ECX),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5d7d jb 0x118d5d94 */
  if (C.cf) goto L_118d5d94;
  /* 118d5d7f cmp ecx, 0xca */
  { uint32_t _a=(ECX),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5d85 ja 0x118d5d94 */
  if ((!C.cf&&!C.zf)) goto L_118d5d94;
  /* 118d5d87 call 0x118d5da1 */
  push32(0x118d5d8cu); f_118d5da1();
  /* 118d5d8c mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 118d5d92 pop esi */
  ESI = (pop32());
  /* 118d5d93 ret  */
  ESPCHK(0x118d5d2eu, _esp0);
  ESP += 4; return;
L_118d5d94:;
  /* 118d5d94 call 0x118d5da1 */
  push32(0x118d5d99u); f_118d5da1();
  /* 118d5d99 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 118d5d9f pop esi */
  ESI = (pop32());
  /* 118d5da0 ret  */
  ESPCHK(0x118d5d2eu, _esp0);
  ESP += 4; return;
}

/* FUN_10005da1 @ 0x118d5da1 (9 bytes, 3 insns) */
void f_118d5da1(void) {
  FTRACE(0x118d5da1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d5da1 call 0x118d2984 */
  push32(0x118d5da6u); f_118d2984();
  /* 118d5da6 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d5da9 ret  */
  ESPCHK(0x118d5da1u, _esp0);
  ESP += 4; return;
}

/* FUN_10005daa @ 0x118d5daa (9 bytes, 3 insns) */
void f_118d5daa(void) {
  FTRACE(0x118d5daau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d5daa call 0x118d2984 */
  push32(0x118d5dafu); f_118d2984();
  /* 118d5daf add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d5db2 ret  */
  ESPCHK(0x118d5daau, _esp0);
  ESP += 4; return;
}

/* FUN_10005db3 @ 0x118d5db3 (127 bytes, 48 insns) */
void f_118d5db3(void) {
  FTRACE(0x118d5db3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d5db3 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d5db7 push esi */
  push32((uint32_t)(ESI));
  /* 118d5db8 cmp ecx, dword ptr [0x118dd820] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x118dd820))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5dbe push edi */
  push32((uint32_t)(EDI));
  /* 118d5dbf jae 0x118d5e19 */
  if (!C.cf) goto L_118d5e19;
  /* 118d5dc1 mov eax, ecx */
  EAX = (ECX);
  /* 118d5dc3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 118d5dc6 lea edi, [eax*4 + 0x118dd720] */
  EDI = ((uint32_t)(EAX*4 + 0x118dd720));
  /* 118d5dcd mov eax, ecx */
  EAX = (ECX);
  /* 118d5dcf and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 118d5dd2 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 118d5dd5 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 118d5dd7 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 118d5dda add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d5ddc test byte ptr [eax + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 118d5de0 je 0x118d5e19 */
  if (C.zf) goto L_118d5e19;
  /* 118d5de2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5de5 je 0x118d5e19 */
  if (C.zf) goto L_118d5e19;
  /* 118d5de7 cmp dword ptr [0x118dc148], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118dc148))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5dee jne 0x118d5e0f */
  if (!C.zf) goto L_118d5e0f;
  /* 118d5df0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d5df2 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d5df4 je 0x118d5e06 */
  if (C.zf) goto L_118d5e06;
  /* 118d5df6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118d5df7 je 0x118d5e01 */
  if (C.zf) goto L_118d5e01;
  /* 118d5df9 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118d5dfa jne 0x118d5e0f */
  if (!C.zf) goto L_118d5e0f;
  /* 118d5dfc push eax */
  push32((uint32_t)(EAX));
  /* 118d5dfd push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 118d5dff jmp 0x118d5e09 */
  goto L_118d5e09;
L_118d5e01:;
  /* 118d5e01 push eax */
  push32((uint32_t)(EAX));
  /* 118d5e02 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 118d5e04 jmp 0x118d5e09 */
  goto L_118d5e09;
L_118d5e06:;
  /* 118d5e06 push eax */
  push32((uint32_t)(EAX));
  /* 118d5e07 push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_118d5e09:;
  /* 118d5e09 call dword ptr [0x118d8024] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8024))), 0x118d5e0fu);
L_118d5e0f:;
  /* 118d5e0f mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 118d5e11 or dword ptr [eax + esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1)))|(0xffffffffu); w32((uint32_t)(EAX + ESI*1), (_r)); fl_logic(_r,32); }
  /* 118d5e15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d5e17 jmp 0x118d5e2f */
  goto L_118d5e2f;
L_118d5e19:;
  /* 118d5e19 call 0x118d5da1 */
  push32(0x118d5e1eu); f_118d5da1();
  /* 118d5e1e mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 118d5e24 call 0x118d5daa */
  push32(0x118d5e29u); f_118d5daa();
  /* 118d5e29 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 118d5e2c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_118d5e2f:;
  /* 118d5e2f pop edi */
  EDI = (pop32());
  /* 118d5e30 pop esi */
  ESI = (pop32());
  /* 118d5e31 ret  */
  ESPCHK(0x118d5db3u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e32 @ 0x118d5e32 (66 bytes, 19 insns) */
void f_118d5e32(void) {
  FTRACE(0x118d5e32u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d5e32 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d5e36 cmp eax, dword ptr [0x118dd820] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118dd820))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5e3c jae 0x118d5e5d */
  if (!C.cf) goto L_118d5e5d;
  /* 118d5e3e mov ecx, eax */
  ECX = (EAX);
  /* 118d5e40 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 118d5e43 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118d5e46 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 118d5e49 mov ecx, dword ptr [ecx*4 + 0x118dd720] */
  ECX = (r32((uint32_t)(ECX*4 + 0x118dd720)));
  /* 118d5e50 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 118d5e55 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 118d5e58 je 0x118d5e5d */
  if (C.zf) goto L_118d5e5d;
  /* 118d5e5a mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 118d5e5c ret  */
  ESPCHK(0x118d5e32u, _esp0);
  ESP += 4; return;
L_118d5e5d:;
  /* 118d5e5d call 0x118d5da1 */
  push32(0x118d5e62u); f_118d5da1();
  /* 118d5e62 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 118d5e68 call 0x118d5daa */
  push32(0x118d5e6du); f_118d5daa();
  /* 118d5e6d and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 118d5e70 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118d5e73 ret  */
  ESPCHK(0x118d5e32u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e74 @ 0x118d5e74 (95 bytes, 34 insns) */
void f_118d5e74(void) {
  FTRACE(0x118d5e74u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d5e74 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d5e78 push ebx */
  push32((uint32_t)(EBX));
  /* 118d5e79 mov ecx, eax */
  ECX = (EAX);
  /* 118d5e7b and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 118d5e7e sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118d5e81 push esi */
  push32((uint32_t)(ESI));
  /* 118d5e82 push edi */
  push32((uint32_t)(EDI));
  /* 118d5e83 mov esi, dword ptr [ecx*4 + 0x118dd720] */
  ESI = (r32((uint32_t)(ECX*4 + 0x118dd720)));
  /* 118d5e8a lea ebx, [ecx*4 + 0x118dd720] */
  EBX = ((uint32_t)(ECX*4 + 0x118dd720));
  /* 118d5e91 lea edi, [eax + eax*8] */
  EDI = ((uint32_t)(EAX + EAX*8));
  /* 118d5e94 shl edi, 2 */
  EDI = (sh_shl((uint32_t)(EDI), (0x2u)&0x1f, 32));
  /* 118d5e97 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d5e99 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5e9d jne 0x118d5ec2 */
  if (!C.zf) goto L_118d5ec2;
  /* 118d5e9f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 118d5ea1 call 0x118d3e87 */
  push32(0x118d5ea6u); f_118d3e87();
  /* 118d5ea6 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5eaa pop ecx */
  ECX = (pop32());
  /* 118d5eab jne 0x118d5eba */
  if (!C.zf) goto L_118d5eba;
  /* 118d5ead lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 118d5eb0 push eax */
  push32((uint32_t)(EAX));
  /* 118d5eb1 call dword ptr [0x118d8048] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8048))), 0x118d5eb7u);
  /* 118d5eb7 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_118d5eba:;
  /* 118d5eba push 0x11 */
  push32((uint32_t)(0x11u));
  /* 118d5ebc call 0x118d3ee8 */
  push32(0x118d5ec1u); f_118d3ee8();
  /* 118d5ec1 pop ecx */
  ECX = (pop32());
L_118d5ec2:;
  /* 118d5ec2 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 118d5ec4 lea eax, [eax + edi + 0xc] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0xc));
  /* 118d5ec8 push eax */
  push32((uint32_t)(EAX));
  /* 118d5ec9 call dword ptr [0x118d8064] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8064))), 0x118d5ecfu);
  /* 118d5ecf pop edi */
  EDI = (pop32());
  /* 118d5ed0 pop esi */
  ESI = (pop32());
  /* 118d5ed1 pop ebx */
  EBX = (pop32());
  /* 118d5ed2 ret  */
  ESPCHK(0x118d5e74u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ed3 @ 0x118d5ed3 (34 bytes, 10 insns) */
void f_118d5ed3(void) {
  FTRACE(0x118d5ed3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d5ed3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d5ed7 mov ecx, eax */
  ECX = (EAX);
  /* 118d5ed9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 118d5edc sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118d5edf lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 118d5ee2 mov ecx, dword ptr [ecx*4 + 0x118dd720] */
  ECX = (r32((uint32_t)(ECX*4 + 0x118dd720)));
  /* 118d5ee9 lea eax, [ecx + eax*4 + 0xc] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0xc));
  /* 118d5eed push eax */
  push32((uint32_t)(EAX));
  /* 118d5eee call dword ptr [0x118d8054] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8054))), 0x118d5ef4u);
  /* 118d5ef4 ret  */
  ESPCHK(0x118d5ed3u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f76 @ 0x118d5f76 (46 bytes, 22 insns) */
void f_118d5f76(void) {
  FTRACE(0x118d5f76u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d5f76 push esi */
  push32((uint32_t)(ESI));
  /* 118d5f77 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118d5f7b push esi */
  push32((uint32_t)(ESI));
  /* 118d5f7c call 0x118d5fa4 */
  push32(0x118d5f81u); f_118d5fa4();
  /* 118d5f81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d5f83 pop ecx */
  ECX = (pop32());
  /* 118d5f84 je 0x118d5f8b */
  if (C.zf) goto L_118d5f8b;
  /* 118d5f86 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118d5f89 pop esi */
  ESI = (pop32());
  /* 118d5f8a ret  */
  ESPCHK(0x118d5f76u, _esp0);
  ESP += 4; return;
L_118d5f8b:;
  /* 118d5f8b test byte ptr [esi + 0xd], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xd)))&(0x40u); fl_logic(_r,8); }
  /* 118d5f8f je 0x118d5fa0 */
  if (C.zf) goto L_118d5fa0;
  /* 118d5f91 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 118d5f94 call 0x118d6c02 */
  push32(0x118d5f99u); f_118d6c02();
  /* 118d5f99 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 118d5f9b pop ecx */
  ECX = (pop32());
  /* 118d5f9c pop esi */
  ESI = (pop32());
  /* 118d5f9d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d5f9f ret  */
  ESPCHK(0x118d5f76u, _esp0);
  ESP += 4; return;
L_118d5fa0:;
  /* 118d5fa0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d5fa2 pop esi */
  ESI = (pop32());
  /* 118d5fa3 ret  */
  ESPCHK(0x118d5f76u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fa4 @ 0x118d5fa4 (92 bytes, 40 insns) */
void f_118d5fa4(void) {
  FTRACE(0x118d5fa4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d5fa4 push ebx */
  push32((uint32_t)(EBX));
  /* 118d5fa5 push esi */
  push32((uint32_t)(ESI));
  /* 118d5fa6 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 118d5faa xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118d5fac push edi */
  push32((uint32_t)(EDI));
  /* 118d5fad mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 118d5fb0 mov ecx, eax */
  ECX = (EAX);
  /* 118d5fb2 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 118d5fb5 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d5fb8 jne 0x118d5ff1 */
  if (!C.zf) goto L_118d5ff1;
  /* 118d5fba test ax, 0x108 */
  { uint32_t _r=(AX)&(0x108u); fl_logic(_r,16); }
  /* 118d5fbe je 0x118d5ff1 */
  if (C.zf) goto L_118d5ff1;
  /* 118d5fc0 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 118d5fc3 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 118d5fc5 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d5fc7 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 118d5fc9 jle 0x118d5ff1 */
  if ((C.zf||C.sf!=C.of)) goto L_118d5ff1;
  /* 118d5fcb push edi */
  push32((uint32_t)(EDI));
  /* 118d5fcc push eax */
  push32((uint32_t)(EAX));
  /* 118d5fcd push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 118d5fd0 call 0x118d36cf */
  push32(0x118d5fd5u); f_118d36cf();
  /* 118d5fd5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d5fd8 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5fda jne 0x118d5fea */
  if (!C.zf) goto L_118d5fea;
  /* 118d5fdc mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 118d5fdf test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 118d5fe1 je 0x118d5ff1 */
  if (C.zf) goto L_118d5ff1;
  /* 118d5fe3 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 118d5fe5 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 118d5fe8 jmp 0x118d5ff1 */
  goto L_118d5ff1;
L_118d5fea:;
  /* 118d5fea or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 118d5fee or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
L_118d5ff1:;
  /* 118d5ff1 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 118d5ff4 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 118d5ff8 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 118d5ffa pop edi */
  EDI = (pop32());
  /* 118d5ffb mov eax, ebx */
  EAX = (EBX);
  /* 118d5ffd pop esi */
  ESI = (pop32());
  /* 118d5ffe pop ebx */
  EBX = (pop32());
  /* 118d5fff ret  */
  ESPCHK(0x118d5fa4u, _esp0);
  ESP += 4; return;
}

/* FUN_10006009 @ 0x118d6009 (164 bytes, 66 insns) */
void f_118d6009(void) {
  FTRACE(0x118d6009u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d6009 push ebx */
  push32((uint32_t)(EBX));
  /* 118d600a push esi */
  push32((uint32_t)(ESI));
  /* 118d600b push edi */
  push32((uint32_t)(EDI));
  /* 118d600c push 2 */
  push32((uint32_t)(0x2u));
  /* 118d600e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118d6010 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 118d6012 call 0x118d3e87 */
  push32(0x118d6017u); f_118d3e87();
  /* 118d6017 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 118d6019 pop ecx */
  ECX = (pop32());
  /* 118d601a cmp dword ptr [0x118dd700], esi */
  { uint32_t _a=(r32((uint32_t)(0x118dd700))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d6020 jle 0x118d6096 */
  if ((C.zf||C.sf!=C.of)) goto L_118d6096;
L_118d6022:;
  /* 118d6022 mov eax, dword ptr [0x118dc6e8] */
  EAX = (r32((uint32_t)(0x118dc6e8)));
  /* 118d6027 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 118d602a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d602c je 0x118d608d */
  if (C.zf) goto L_118d608d;
  /* 118d602e test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 118d6032 je 0x118d608d */
  if (C.zf) goto L_118d608d;
  /* 118d6034 push eax */
  push32((uint32_t)(EAX));
  /* 118d6035 push esi */
  push32((uint32_t)(ESI));
  /* 118d6036 call 0x118d3a17 */
  push32(0x118d603bu); f_118d3a17();
  /* 118d603b mov eax, dword ptr [0x118dc6e8] */
  EAX = (r32((uint32_t)(0x118dc6e8)));
  /* 118d6040 pop ecx */
  ECX = (pop32());
  /* 118d6041 pop ecx */
  ECX = (pop32());
  /* 118d6042 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 118d6045 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 118d6048 test cl, 0x83 */
  { uint32_t _r=(CL)&(0x83u); fl_logic(_r,8); }
  /* 118d604b je 0x118d607d */
  if (C.zf) goto L_118d607d;
  /* 118d604d cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d6052 jne 0x118d6063 */
  if (!C.zf) goto L_118d6063;
  /* 118d6054 push eax */
  push32((uint32_t)(EAX));
  /* 118d6055 call 0x118d5f76 */
  push32(0x118d605au); f_118d5f76();
  /* 118d605a cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d605d pop ecx */
  ECX = (pop32());
  /* 118d605e je 0x118d607d */
  if (C.zf) goto L_118d607d;
  /* 118d6060 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 118d6061 jmp 0x118d607d */
  goto L_118d607d;
L_118d6063:;
  /* 118d6063 cmp dword ptr [esp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d6068 jne 0x118d607d */
  if (!C.zf) goto L_118d607d;
  /* 118d606a test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 118d606d je 0x118d607d */
  if (C.zf) goto L_118d607d;
  /* 118d606f push eax */
  push32((uint32_t)(EAX));
  /* 118d6070 call 0x118d5f76 */
  push32(0x118d6075u); f_118d5f76();
  /* 118d6075 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d6078 pop ecx */
  ECX = (pop32());
  /* 118d6079 jne 0x118d607d */
  if (!C.zf) goto L_118d607d;
  /* 118d607b or edi, eax */
  { uint32_t _r=(EDI)|(EAX); EDI = (_r); fl_logic(_r,32); }
L_118d607d:;
  /* 118d607d mov eax, dword ptr [0x118dc6e8] */
  EAX = (r32((uint32_t)(0x118dc6e8)));
  /* 118d6082 push dword ptr [eax + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*4))));
  /* 118d6085 push esi */
  push32((uint32_t)(ESI));
  /* 118d6086 call 0x118d3a69 */
  push32(0x118d608bu); f_118d3a69();
  /* 118d608b pop ecx */
  ECX = (pop32());
  /* 118d608c pop ecx */
  ECX = (pop32());
L_118d608d:;
  /* 118d608d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118d608e cmp esi, dword ptr [0x118dd700] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x118dd700))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d6094 jl 0x118d6022 */
  if ((C.sf!=C.of)) goto L_118d6022;
L_118d6096:;
  /* 118d6096 push 2 */
  push32((uint32_t)(0x2u));
  /* 118d6098 call 0x118d3ee8 */
  push32(0x118d609du); f_118d3ee8();
  /* 118d609d cmp dword ptr [esp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d60a2 pop ecx */
  ECX = (pop32());
  /* 118d60a3 mov eax, ebx */
  EAX = (EBX);
  /* 118d60a5 je 0x118d60a9 */
  if (C.zf) goto L_118d60a9;
  /* 118d60a7 mov eax, edi */
  EAX = (EDI);
L_118d60a9:;
  /* 118d60a9 pop edi */
  EDI = (pop32());
  /* 118d60aa pop esi */
  ESI = (pop32());
  /* 118d60ab pop ebx */
  EBX = (pop32());
  /* 118d60ac ret  */
  ESPCHK(0x118d6009u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x118d60ad (9 bytes, 4 insns) */
void f_118d60ad(void) {
  FTRACE(0x118d60adu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d60ad push 2 */
  push32((uint32_t)(0x2u));
  /* 118d60af call 0x118d1faa */
  push32(0x118d60b4u); f_118d1faa();
  /* 118d60b4 pop ecx */
  ECX = (pop32());
  /* 118d60b5 ret  */
  ESPCHK(0x118d60adu, _esp0);
  ESP += 4; return;
}

/* FUN_100060b6 @ 0x118d60b6 (27 bytes, 13 insns) */
void f_118d60b6(void) {
  FTRACE(0x118d60b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d60b6 mov eax, dword ptr [0x118dc340] */
  EAX = (r32((uint32_t)(0x118dc340)));
  /* 118d60bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d60bd je 0x118d60ce */
  if (C.zf) goto L_118d60ce;
  /* 118d60bf push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 118d60c3 call eax */
  call_ind((uint32_t)(EAX), 0x118d60c5u);
  /* 118d60c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d60c7 pop ecx */
  ECX = (pop32());
  /* 118d60c8 je 0x118d60ce */
  if (C.zf) goto L_118d60ce;
  /* 118d60ca push 1 */
  push32((uint32_t)(0x1u));
  /* 118d60cc pop eax */
  EAX = (pop32());
  /* 118d60cd ret  */
  ESPCHK(0x118d60b6u, _esp0);
  ESP += 4; return;
L_118d60ce:;
  /* 118d60ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d60d0 ret  */
  ESPCHK(0x118d60b6u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x118d60e0 (88 bytes, 40 insns) */
void f_118d60e0(void) {
  FTRACE(0x118d60e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d60e0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 118d60e4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d60e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118d60ea je 0x118d6133 */
  if (C.zf) goto L_118d6133;
  /* 118d60ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d60ee mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 118d60f2 push edi */
  push32((uint32_t)(EDI));
  /* 118d60f3 mov edi, ecx */
  EDI = (ECX);
  /* 118d60f5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d60f8 jb 0x118d6127 */
  if (C.cf) goto L_118d6127;
  /* 118d60fa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 118d60fc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 118d60ff je 0x118d6109 */
  if (C.zf) goto L_118d6109;
  /* 118d6101 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_118d6103:;
  /* 118d6103 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118d6105 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118d6106 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118d6107 jne 0x118d6103 */
  if (!C.zf) goto L_118d6103;
L_118d6109:;
  /* 118d6109 mov ecx, eax */
  ECX = (EAX);
  /* 118d610b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 118d610e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d6110 mov ecx, eax */
  ECX = (EAX);
  /* 118d6112 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 118d6115 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d6117 mov ecx, edx */
  ECX = (EDX);
  /* 118d6119 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 118d611c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118d611f je 0x118d6127 */
  if (C.zf) goto L_118d6127;
  /* 118d6121 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 118d6123 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118d6125 je 0x118d612d */
  if (C.zf) goto L_118d612d;
L_118d6127:;
  /* 118d6127 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118d6129 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118d612a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 118d612b jne 0x118d6127 */
  if (!C.zf) goto L_118d6127;
L_118d612d:;
  /* 118d612d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118d6131 pop edi */
  EDI = (pop32());
  /* 118d6132 ret  */
  ESPCHK(0x118d60e0u, _esp0);
  ESP += 4; return;
L_118d6133:;
  /* 118d6133 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d6137 ret  */
  ESPCHK(0x118d60e0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x118d6138 (32 bytes, 18 insns) */
void f_118d6138(void) {
  FTRACE(0x118d6138u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d6138 push ebp */
  push32((uint32_t)(EBP));
  /* 118d6139 mov ebp, esp */
  EBP = (ESP);
  /* 118d613b push ebx */
  push32((uint32_t)(EBX));
  /* 118d613c push esi */
  push32((uint32_t)(ESI));
  /* 118d613d push edi */
  push32((uint32_t)(EDI));
  /* 118d613e push ebp */
  push32((uint32_t)(EBP));
  /* 118d613f push 0 */
  push32((uint32_t)(0x0u));
  /* 118d6141 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d6143 push 0x118d6150 */
  push32((uint32_t)(0x118d6150u));
  /* 118d6148 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118d614b call 0x118d7194 */
  push32(0x118d6150u); f_118d7194();
  /* 118d6150 pop ebp */
  EBP = (pop32());
  /* 118d6151 pop edi */
  EDI = (pop32());
  /* 118d6152 pop esi */
  ESI = (pop32());
  /* 118d6153 pop ebx */
  EBX = (pop32());
  /* 118d6154 mov esp, ebp */
  ESP = (EBP);
  /* 118d6156 pop ebp */
  EBP = (pop32());
  /* 118d6157 ret  */
  ESPCHK(0x118d6138u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x118d617a (104 bytes, 33 insns) */
void f_118d617a(void) {
  FTRACE(0x118d617au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d617a push ebx */
  push32((uint32_t)(EBX));
  /* 118d617b push esi */
  push32((uint32_t)(ESI));
  /* 118d617c push edi */
  push32((uint32_t)(EDI));
  /* 118d617d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 118d6181 push eax */
  push32((uint32_t)(EAX));
  /* 118d6182 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 118d6184 push 0x118d6158 */
  push32((uint32_t)(0x118d6158u));
  /* 118d6189 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 118d6190 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_118d6197:;
  /* 118d6197 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 118d619b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 118d619e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 118d61a1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d61a4 je 0x118d61d4 */
  if (C.zf) goto L_118d61d4;
  /* 118d61a6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d61aa je 0x118d61d4 */
  if (C.zf) goto L_118d61d4;
  /* 118d61ac lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 118d61af mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 118d61b2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 118d61b6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 118d61b9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d61be jne 0x118d61d2 */
  if (!C.zf) goto L_118d61d2;
  /* 118d61c0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 118d61c5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 118d61c9 call 0x118d620e */
  push32(0x118d61ceu); f_118d620e();
  /* 118d61ce call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x118d61d2u);
L_118d61d2:;
  /* 118d61d2 jmp 0x118d6197 */
  goto L_118d6197;
L_118d61d4:;
  /* 118d61d4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 118d61db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d61de pop edi */
  EDI = (pop32());
  /* 118d61df pop esi */
  ESI = (pop32());
  /* 118d61e0 pop ebx */
  EBX = (pop32());
  /* 118d61e1 ret  */
  ESPCHK(0x118d617au, _esp0);
  ESP += 4; return;
}

/* FUN_1000620e @ 0x118d620e (24 bytes, 10 insns) */
void f_118d620e(void) {
  FTRACE(0x118d620eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d620e push ebx */
  push32((uint32_t)(EBX));
  /* 118d620f push ecx */
  push32((uint32_t)(ECX));
  /* 118d6210 mov ebx, 0x118dbd40 */
  EBX = (0x118dbd40u);
  /* 118d6215 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d6218 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 118d621b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 118d621e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 118d6221 pop ecx */
  ECX = (pop32());
  /* 118d6222 pop ebx */
  EBX = (pop32());
  /* 118d6223 ret 4 */
  ESPCHK(0x118d620eu, _esp0);
  ESP += 8; return;
}

/* FUN_100062ed @ 0x118d62ed (27 bytes, 11 insns) */
void f_118d62ed(void) {
  FTRACE(0x118d62edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d62ed push ebp */
  push32((uint32_t)(EBP));
  /* 118d62ee mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 118d62f2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 118d62f4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 118d62f7 push eax */
  push32((uint32_t)(EAX));
  /* 118d62f8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 118d62fb push eax */
  push32((uint32_t)(EAX));
  /* 118d62fc call 0x118d617a */
  push32(0x118d6301u); f_118d617a();
  /* 118d6301 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d6304 pop ebp */
  EBP = (pop32());
  /* 118d6305 ret 4 */
  ESPCHK(0x118d62edu, _esp0);
  ESP += 8; return;
}

/* FUN_10006308 @ 0x118d6308 (511 bytes, 193 insns) */
void f_118d6308(void) {
  FTRACE(0x118d6308u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d6308 push ebp */
  push32((uint32_t)(EBP));
  /* 118d6309 mov ebp, esp */
  EBP = (ESP);
  /* 118d630b push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118d630d push 0x118d85c0 */
  push32((uint32_t)(0x118d85c0u));
  /* 118d6312 push 0x118d6230 */
  push32((uint32_t)(0x118d6230u));
  /* 118d6317 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 118d631d push eax */
  push32((uint32_t)(EAX));
  /* 118d631e mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 118d6325 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d6328 push ebx */
  push32((uint32_t)(EBX));
  /* 118d6329 push esi */
  push32((uint32_t)(ESI));
  /* 118d632a push edi */
  push32((uint32_t)(EDI));
  /* 118d632b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 118d632e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 118d6330 cmp dword ptr [0x118dc348], edi */
  { uint32_t _a=(r32((uint32_t)(0x118dc348))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d6336 jne 0x118d637e */
  if (!C.zf) goto L_118d637e;
  /* 118d6338 push edi */
  push32((uint32_t)(EDI));
  /* 118d6339 push edi */
  push32((uint32_t)(EDI));
  /* 118d633a push 1 */
  push32((uint32_t)(0x1u));
  /* 118d633c pop ebx */
  EBX = (pop32());
  /* 118d633d push ebx */
  push32((uint32_t)(EBX));
  /* 118d633e push 0x118d85b8 */
  push32((uint32_t)(0x118d85b8u));
  /* 118d6343 mov esi, 0x100 */
  ESI = (0x100u);
  /* 118d6348 push esi */
  push32((uint32_t)(ESI));
  /* 118d6349 push edi */
  push32((uint32_t)(EDI));
  /* 118d634a call dword ptr [0x118d8020] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8020))), 0x118d6350u);
  /* 118d6350 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d6352 je 0x118d635c */
  if (C.zf) goto L_118d635c;
  /* 118d6354 mov dword ptr [0x118dc348], ebx */
  w32((uint32_t)(0x118dc348), (EBX));
  /* 118d635a jmp 0x118d637e */
  goto L_118d637e;
L_118d635c:;
  /* 118d635c push edi */
  push32((uint32_t)(EDI));
  /* 118d635d push edi */
  push32((uint32_t)(EDI));
  /* 118d635e push ebx */
  push32((uint32_t)(EBX));
  /* 118d635f push 0x118d85b4 */
  push32((uint32_t)(0x118d85b4u));
  /* 118d6364 push esi */
  push32((uint32_t)(ESI));
  /* 118d6365 push edi */
  push32((uint32_t)(EDI));
  /* 118d6366 call dword ptr [0x118d8018] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8018))), 0x118d636cu);
  /* 118d636c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d636e je 0x118d6496 */
  if (C.zf) goto L_118d6496;
  /* 118d6374 mov dword ptr [0x118dc348], 2 */
  w32((uint32_t)(0x118dc348), (0x2u));
L_118d637e:;
  /* 118d637e cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d6381 jle 0x118d6393 */
  if ((C.zf||C.sf!=C.of)) goto L_118d6393;
  /* 118d6383 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 118d6386 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118d6389 call 0x118d652c */
  push32(0x118d638eu); f_118d652c();
  /* 118d638e pop ecx */
  ECX = (pop32());
  /* 118d638f pop ecx */
  ECX = (pop32());
  /* 118d6390 mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_118d6393:;
  /* 118d6393 mov eax, dword ptr [0x118dc348] */
  EAX = (r32((uint32_t)(0x118dc348)));
  /* 118d6398 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d639b jne 0x118d63ba */
  if (!C.zf) goto L_118d63ba;
  /* 118d639d push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 118d63a0 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 118d63a3 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 118d63a6 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118d63a9 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118d63ac push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118d63af call dword ptr [0x118d8018] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8018))), 0x118d63b5u);
  /* 118d63b5 jmp 0x118d6498 */
  goto L_118d6498;
L_118d63ba:;
  /* 118d63ba cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d63bd jne 0x118d6496 */
  if (!C.zf) goto L_118d6496;
  /* 118d63c3 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d63c6 jne 0x118d63d0 */
  if (!C.zf) goto L_118d63d0;
  /* 118d63c8 mov eax, dword ptr [0x118dc338] */
  EAX = (r32((uint32_t)(0x118dc338)));
  /* 118d63cd mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_118d63d0:;
  /* 118d63d0 push edi */
  push32((uint32_t)(EDI));
  /* 118d63d1 push edi */
  push32((uint32_t)(EDI));
  /* 118d63d2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 118d63d5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118d63d8 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 118d63db neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 118d63dd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d63df and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 118d63e2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118d63e3 push eax */
  push32((uint32_t)(EAX));
  /* 118d63e4 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 118d63e7 call dword ptr [0x118d801c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d801c))), 0x118d63edu);
  /* 118d63ed mov ebx, eax */
  EBX = (EAX);
  /* 118d63ef mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 118d63f2 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d63f4 je 0x118d6496 */
  if (C.zf) goto L_118d6496;
  /* 118d63fa mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 118d63fd lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 118d6400 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d6403 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 118d6405 call 0x118d4d00 */
  push32(0x118d640au); f_118d4d00();
  /* 118d640a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 118d640d mov eax, esp */
  EAX = (ESP);
  /* 118d640f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 118d6412 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118d6416 jmp 0x118d642b */
  goto L_118d642b;
  /* 118d6418 push 1 */
  push32((uint32_t)(0x1u));
  /* 118d641a pop eax */
  EAX = (pop32());
  /* 118d641b ret  */
  ESPCHK(0x118d6308u, _esp0);
  ESP += 4; return;
  /* 118d641c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 118d641f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 118d6421 mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 118d6424 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118d6428 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_118d642b:;
  /* 118d642b cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d642e je 0x118d6496 */
  if (C.zf) goto L_118d6496;
  /* 118d6430 push ebx */
  push32((uint32_t)(EBX));
  /* 118d6431 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 118d6434 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 118d6437 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118d643a push 1 */
  push32((uint32_t)(0x1u));
  /* 118d643c push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 118d643f call dword ptr [0x118d801c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d801c))), 0x118d6445u);
  /* 118d6445 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d6447 je 0x118d6496 */
  if (C.zf) goto L_118d6496;
  /* 118d6449 push edi */
  push32((uint32_t)(EDI));
  /* 118d644a push edi */
  push32((uint32_t)(EDI));
  /* 118d644b push ebx */
  push32((uint32_t)(EBX));
  /* 118d644c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 118d644f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118d6452 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118d6455 call dword ptr [0x118d8020] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8020))), 0x118d645bu);
  /* 118d645b mov esi, eax */
  ESI = (EAX);
  /* 118d645d mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 118d6460 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d6462 je 0x118d6496 */
  if (C.zf) goto L_118d6496;
  /* 118d6464 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 118d6468 je 0x118d64aa */
  if (C.zf) goto L_118d64aa;
  /* 118d646a cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d646d je 0x118d6525 */
  if (C.zf) goto L_118d6525;
  /* 118d6473 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d6476 jg 0x118d6496 */
  if ((!C.zf&&C.sf==C.of)) goto L_118d6496;
  /* 118d6478 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 118d647b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 118d647e push ebx */
  push32((uint32_t)(EBX));
  /* 118d647f push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 118d6482 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118d6485 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118d6488 call dword ptr [0x118d8020] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8020))), 0x118d648eu);
  /* 118d648e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d6490 jne 0x118d6525 */
  if (!C.zf) goto L_118d6525;
L_118d6496:;
  /* 118d6496 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118d6498:;
  /* 118d6498 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 118d649b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118d649e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 118d64a5 pop edi */
  EDI = (pop32());
  /* 118d64a6 pop esi */
  ESI = (pop32());
  /* 118d64a7 pop ebx */
  EBX = (pop32());
  /* 118d64a8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d64a9 ret  */
  ESPCHK(0x118d6308u, _esp0);
  ESP += 4; return;
L_118d64aa:;
  /* 118d64aa mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 118d64b1 lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 118d64b4 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d64b7 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 118d64b9 call 0x118d4d00 */
  push32(0x118d64beu); f_118d4d00();
  /* 118d64be mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 118d64c1 mov ebx, esp */
  EBX = (ESP);
  /* 118d64c3 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 118d64c6 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118d64ca jmp 0x118d64de */
  goto L_118d64de;
  /* 118d64cc push 1 */
  push32((uint32_t)(0x1u));
  /* 118d64ce pop eax */
  EAX = (pop32());
  /* 118d64cf ret  */
  ESPCHK(0x118d6308u, _esp0);
  ESP += 4; return;
  /* 118d64d0 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 118d64d3 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 118d64d5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118d64d7 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118d64db mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_118d64de:;
  /* 118d64de cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d64e0 je 0x118d6496 */
  if (C.zf) goto L_118d6496;
  /* 118d64e2 push esi */
  push32((uint32_t)(ESI));
  /* 118d64e3 push ebx */
  push32((uint32_t)(EBX));
  /* 118d64e4 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 118d64e7 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 118d64ea push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118d64ed push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118d64f0 call dword ptr [0x118d8020] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8020))), 0x118d64f6u);
  /* 118d64f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d64f8 je 0x118d6496 */
  if (C.zf) goto L_118d6496;
  /* 118d64fa cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d64fd push edi */
  push32((uint32_t)(EDI));
  /* 118d64fe push edi */
  push32((uint32_t)(EDI));
  /* 118d64ff jne 0x118d6505 */
  if (!C.zf) goto L_118d6505;
  /* 118d6501 push edi */
  push32((uint32_t)(EDI));
  /* 118d6502 push edi */
  push32((uint32_t)(EDI));
  /* 118d6503 jmp 0x118d650b */
  goto L_118d650b;
L_118d6505:;
  /* 118d6505 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 118d6508 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_118d650b:;
  /* 118d650b push esi */
  push32((uint32_t)(ESI));
  /* 118d650c push ebx */
  push32((uint32_t)(EBX));
  /* 118d650d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 118d6512 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 118d6515 call dword ptr [0x118d80d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d80d0))), 0x118d651bu);
  /* 118d651b mov esi, eax */
  ESI = (EAX);
  /* 118d651d cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d651f je 0x118d6496 */
  if (C.zf) goto L_118d6496;
L_118d6525:;
  /* 118d6525 mov eax, esi */
  EAX = (ESI);
  /* 118d6527 jmp 0x118d6498 */
  goto L_118d6498;
}

/* FUN_1000652c @ 0x118d652c (43 bytes, 20 insns) */
void f_118d652c(void) {
  FTRACE(0x118d652cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d652c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 118d6530 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d6534 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118d6536 push esi */
  push32((uint32_t)(ESI));
  /* 118d6537 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 118d653a je 0x118d6549 */
  if (C.zf) goto L_118d6549;
L_118d653c:;
  /* 118d653c cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d653f je 0x118d6549 */
  if (C.zf) goto L_118d6549;
  /* 118d6541 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118d6542 mov esi, ecx */
  ESI = (ECX);
  /* 118d6544 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118d6545 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118d6547 jne 0x118d653c */
  if (!C.zf) goto L_118d653c;
L_118d6549:;
  /* 118d6549 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d654c pop esi */
  ESI = (pop32());
  /* 118d654d jne 0x118d6554 */
  if (!C.zf) goto L_118d6554;
  /* 118d654f sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d6553 ret  */
  ESPCHK(0x118d652cu, _esp0);
  ESP += 4; return;
L_118d6554:;
  /* 118d6554 mov eax, edx */
  EAX = (EDX);
  /* 118d6556 ret  */
  ESPCHK(0x118d652cu, _esp0);
  ESP += 4; return;
}

/* FUN_10006557 @ 0x118d6557 (318 bytes, 123 insns) */
void f_118d6557(void) {
  FTRACE(0x118d6557u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d6557 push ebp */
  push32((uint32_t)(EBP));
  /* 118d6558 mov ebp, esp */
  EBP = (ESP);
  /* 118d655a push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118d655c push 0x118d85d8 */
  push32((uint32_t)(0x118d85d8u));
  /* 118d6561 push 0x118d6230 */
  push32((uint32_t)(0x118d6230u));
  /* 118d6566 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 118d656c push eax */
  push32((uint32_t)(EAX));
  /* 118d656d mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 118d6574 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d6577 push ebx */
  push32((uint32_t)(EBX));
  /* 118d6578 push esi */
  push32((uint32_t)(ESI));
  /* 118d6579 push edi */
  push32((uint32_t)(EDI));
  /* 118d657a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 118d657d mov eax, dword ptr [0x118dc34c] */
  EAX = (r32((uint32_t)(0x118dc34c)));
  /* 118d6582 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118d6584 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d6586 jne 0x118d65c6 */
  if (!C.zf) goto L_118d65c6;
  /* 118d6588 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 118d658b push eax */
  push32((uint32_t)(EAX));
  /* 118d658c push 1 */
  push32((uint32_t)(0x1u));
  /* 118d658e pop esi */
  ESI = (pop32());
  /* 118d658f push esi */
  push32((uint32_t)(ESI));
  /* 118d6590 push 0x118d85b8 */
  push32((uint32_t)(0x118d85b8u));
  /* 118d6595 push esi */
  push32((uint32_t)(ESI));
  /* 118d6596 call dword ptr [0x118d800c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d800c))), 0x118d659cu);
  /* 118d659c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d659e je 0x118d65a4 */
  if (C.zf) goto L_118d65a4;
  /* 118d65a0 mov eax, esi */
  EAX = (ESI);
  /* 118d65a2 jmp 0x118d65c1 */
  goto L_118d65c1;
L_118d65a4:;
  /* 118d65a4 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 118d65a7 push eax */
  push32((uint32_t)(EAX));
  /* 118d65a8 push esi */
  push32((uint32_t)(ESI));
  /* 118d65a9 push 0x118d85b4 */
  push32((uint32_t)(0x118d85b4u));
  /* 118d65ae push esi */
  push32((uint32_t)(ESI));
  /* 118d65af push ebx */
  push32((uint32_t)(EBX));
  /* 118d65b0 call dword ptr [0x118d8010] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8010))), 0x118d65b6u);
  /* 118d65b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d65b8 je 0x118d668c */
  if (C.zf) goto L_118d668c;
  /* 118d65be push 2 */
  push32((uint32_t)(0x2u));
  /* 118d65c0 pop eax */
  EAX = (pop32());
L_118d65c1:;
  /* 118d65c1 mov dword ptr [0x118dc34c], eax */
  w32((uint32_t)(0x118dc34c), (EAX));
L_118d65c6:;
  /* 118d65c6 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d65c9 jne 0x118d65ef */
  if (!C.zf) goto L_118d65ef;
  /* 118d65cb mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 118d65ce cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d65d0 jne 0x118d65d7 */
  if (!C.zf) goto L_118d65d7;
  /* 118d65d2 mov eax, dword ptr [0x118dc328] */
  EAX = (r32((uint32_t)(0x118dc328)));
L_118d65d7:;
  /* 118d65d7 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 118d65da push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118d65dd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118d65e0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118d65e3 push eax */
  push32((uint32_t)(EAX));
  /* 118d65e4 call dword ptr [0x118d8010] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8010))), 0x118d65eau);
  /* 118d65ea jmp 0x118d668e */
  goto L_118d668e;
L_118d65ef:;
  /* 118d65ef cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d65f2 jne 0x118d668c */
  if (!C.zf) goto L_118d668c;
  /* 118d65f8 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d65fb jne 0x118d6605 */
  if (!C.zf) goto L_118d6605;
  /* 118d65fd mov eax, dword ptr [0x118dc338] */
  EAX = (r32((uint32_t)(0x118dc338)));
  /* 118d6602 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_118d6605:;
  /* 118d6605 push ebx */
  push32((uint32_t)(EBX));
  /* 118d6606 push ebx */
  push32((uint32_t)(EBX));
  /* 118d6607 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118d660a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118d660d mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 118d6610 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 118d6612 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d6614 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 118d6617 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118d6618 push eax */
  push32((uint32_t)(EAX));
  /* 118d6619 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 118d661c call dword ptr [0x118d801c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d801c))), 0x118d6622u);
  /* 118d6622 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 118d6625 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d6627 je 0x118d668c */
  if (C.zf) goto L_118d668c;
  /* 118d6629 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 118d662c lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 118d662f mov eax, edi */
  EAX = (EDI);
  /* 118d6631 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d6634 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 118d6636 call 0x118d4d00 */
  push32(0x118d663bu); f_118d4d00();
  /* 118d663b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 118d663e mov esi, esp */
  ESI = (ESP);
  /* 118d6640 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 118d6643 push edi */
  push32((uint32_t)(EDI));
  /* 118d6644 push ebx */
  push32((uint32_t)(EBX));
  /* 118d6645 push esi */
  push32((uint32_t)(ESI));
  /* 118d6646 call 0x118d60e0 */
  push32(0x118d664bu); f_118d60e0();
  /* 118d664b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d664e jmp 0x118d665b */
  goto L_118d665b;
  /* 118d6650 push 1 */
  push32((uint32_t)(0x1u));
  /* 118d6652 pop eax */
  EAX = (pop32());
  /* 118d6653 ret  */
  ESPCHK(0x118d6557u, _esp0);
  ESP += 4; return;
  /* 118d6654 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 118d6657 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118d6659 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_118d665b:;
  /* 118d665b or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118d665f cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d6661 je 0x118d668c */
  if (C.zf) goto L_118d668c;
  /* 118d6663 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 118d6666 push esi */
  push32((uint32_t)(ESI));
  /* 118d6667 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118d666a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118d666d push 1 */
  push32((uint32_t)(0x1u));
  /* 118d666f push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 118d6672 call dword ptr [0x118d801c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d801c))), 0x118d6678u);
  /* 118d6678 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d667a je 0x118d668c */
  if (C.zf) goto L_118d668c;
  /* 118d667c push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 118d667f push eax */
  push32((uint32_t)(EAX));
  /* 118d6680 push esi */
  push32((uint32_t)(ESI));
  /* 118d6681 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118d6684 call dword ptr [0x118d800c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d800c))), 0x118d668au);
  /* 118d668a jmp 0x118d668e */
  goto L_118d668e;
L_118d668c:;
  /* 118d668c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118d668e:;
  /* 118d668e lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 118d6691 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118d6694 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 118d669b pop edi */
  EDI = (pop32());
  /* 118d669c pop esi */
  ESI = (pop32());
  /* 118d669d pop ebx */
  EBX = (pop32());
  /* 118d669e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d669f ret  */
  ESPCHK(0x118d6557u, _esp0);
  ESP += 4; return;
}

/* FUN_100066a0 @ 0x118d66a0 (111 bytes, 44 insns) */
void f_118d66a0(void) {
  FTRACE(0x118d66a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d66a0 push ebx */
  push32((uint32_t)(EBX));
  /* 118d66a1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118d66a3 cmp dword ptr [0x118dc328], ebx */
  { uint32_t _a=(r32((uint32_t)(0x118dc328))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d66a9 jne 0x118d66be */
  if (!C.zf) goto L_118d66be;
  /* 118d66ab mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118d66af cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d66b2 jl 0x118d670d */
  if ((C.sf!=C.of)) goto L_118d670d;
  /* 118d66b4 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d66b7 jg 0x118d670d */
  if ((!C.zf&&C.sf==C.of)) goto L_118d670d;
  /* 118d66b9 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d66bc pop ebx */
  EBX = (pop32());
  /* 118d66bd ret  */
  ESPCHK(0x118d66a0u, _esp0);
  ESP += 4; return;
L_118d66be:;
  /* 118d66be push esi */
  push32((uint32_t)(ESI));
  /* 118d66bf mov esi, 0x118dc494 */
  ESI = (0x118dc494u);
  /* 118d66c4 push edi */
  push32((uint32_t)(EDI));
  /* 118d66c5 push esi */
  push32((uint32_t)(ESI));
  /* 118d66c6 call dword ptr [0x118d8058] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8058))), 0x118d66ccu);
  /* 118d66cc cmp dword ptr [0x118dc490], ebx */
  { uint32_t _a=(r32((uint32_t)(0x118dc490))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d66d2 mov edi, dword ptr [0x118d8050] */
  EDI = (r32((uint32_t)(0x118d8050)));
  /* 118d66d8 je 0x118d66e8 */
  if (C.zf) goto L_118d66e8;
  /* 118d66da push esi */
  push32((uint32_t)(ESI));
  /* 118d66db call edi */
  call_ind((uint32_t)(EDI), 0x118d66ddu);
  /* 118d66dd push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118d66df call 0x118d3e87 */
  push32(0x118d66e4u); f_118d3e87();
  /* 118d66e4 pop ecx */
  ECX = (pop32());
  /* 118d66e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 118d66e7 pop ebx */
  EBX = (pop32());
L_118d66e8:;
  /* 118d66e8 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 118d66ec call 0x118d670f */
  push32(0x118d66f1u); f_118d670f();
  /* 118d66f1 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 118d66f3 pop ecx */
  ECX = (pop32());
  /* 118d66f4 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 118d66f8 je 0x118d6704 */
  if (C.zf) goto L_118d6704;
  /* 118d66fa push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118d66fc call 0x118d3ee8 */
  push32(0x118d6701u); f_118d3ee8();
  /* 118d6701 pop ecx */
  ECX = (pop32());
  /* 118d6702 jmp 0x118d6707 */
  goto L_118d6707;
L_118d6704:;
  /* 118d6704 push esi */
  push32((uint32_t)(ESI));
  /* 118d6705 call edi */
  call_ind((uint32_t)(EDI), 0x118d6707u);
L_118d6707:;
  /* 118d6707 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 118d670b pop edi */
  EDI = (pop32());
  /* 118d670c pop esi */
  ESI = (pop32());
L_118d670d:;
  /* 118d670d pop ebx */
  EBX = (pop32());
  /* 118d670e ret  */
  ESPCHK(0x118d66a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000670f @ 0x118d670f (204 bytes, 71 insns) */
void f_118d670f(void) {
  FTRACE(0x118d670fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d670f push ebp */
  push32((uint32_t)(EBP));
  /* 118d6710 mov ebp, esp */
  EBP = (ESP);
  /* 118d6712 push ecx */
  push32((uint32_t)(ECX));
  /* 118d6713 cmp dword ptr [0x118dc328], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118dc328))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d671a push ebx */
  push32((uint32_t)(EBX));
  /* 118d671b jne 0x118d673a */
  if (!C.zf) goto L_118d673a;
  /* 118d671d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d6720 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d6723 jl 0x118d67d8 */
  if ((C.sf!=C.of)) goto L_118d67d8;
  /* 118d6729 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d672c jg 0x118d67d8 */
  if ((!C.zf&&C.sf==C.of)) goto L_118d67d8;
  /* 118d6732 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d6735 jmp 0x118d67d8 */
  goto L_118d67d8;
L_118d673a:;
  /* 118d673a mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d673d cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d6743 jge 0x118d676d */
  if ((C.sf==C.of)) goto L_118d676d;
  /* 118d6745 cmp dword ptr [0x118dbd34], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118dbd34))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d674c jle 0x118d675a */
  if ((C.zf||C.sf!=C.of)) goto L_118d675a;
  /* 118d674e push 2 */
  push32((uint32_t)(0x2u));
  /* 118d6750 push ebx */
  push32((uint32_t)(EBX));
  /* 118d6751 call 0x118d67db */
  push32(0x118d6756u); f_118d67db();
  /* 118d6756 pop ecx */
  ECX = (pop32());
  /* 118d6757 pop ecx */
  ECX = (pop32());
  /* 118d6758 jmp 0x118d6765 */
  goto L_118d6765;
L_118d675a:;
  /* 118d675a mov eax, dword ptr [0x118d9628] */
  EAX = (r32((uint32_t)(0x118d9628)));
  /* 118d675f mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 118d6762 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_118d6765:;
  /* 118d6765 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d6767 jne 0x118d676d */
  if (!C.zf) goto L_118d676d;
L_118d6769:;
  /* 118d6769 mov eax, ebx */
  EAX = (EBX);
  /* 118d676b jmp 0x118d67d8 */
  goto L_118d67d8;
L_118d676d:;
  /* 118d676d mov edx, dword ptr [0x118d9628] */
  EDX = (r32((uint32_t)(0x118d9628)));
  /* 118d6773 mov eax, ebx */
  EAX = (EBX);
  /* 118d6775 sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 118d6778 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 118d677b test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 118d6780 je 0x118d6790 */
  if (C.zf) goto L_118d6790;
  /* 118d6782 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 118d6786 mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 118d6789 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 118d678c push 2 */
  push32((uint32_t)(0x2u));
  /* 118d678e jmp 0x118d6799 */
  goto L_118d6799;
L_118d6790:;
  /* 118d6790 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 118d6794 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 118d6797 push 1 */
  push32((uint32_t)(0x1u));
L_118d6799:;
  /* 118d6799 pop eax */
  EAX = (pop32());
  /* 118d679a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 118d679d push 1 */
  push32((uint32_t)(0x1u));
  /* 118d679f push 0 */
  push32((uint32_t)(0x0u));
  /* 118d67a1 push 3 */
  push32((uint32_t)(0x3u));
  /* 118d67a3 push ecx */
  push32((uint32_t)(ECX));
  /* 118d67a4 push eax */
  push32((uint32_t)(EAX));
  /* 118d67a5 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 118d67a8 push eax */
  push32((uint32_t)(EAX));
  /* 118d67a9 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 118d67ae push dword ptr [0x118dc328] */
  push32((uint32_t)(r32((uint32_t)(0x118dc328))));
  /* 118d67b4 call 0x118d6308 */
  push32(0x118d67b9u); f_118d6308();
  /* 118d67b9 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d67bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d67be je 0x118d6769 */
  if (C.zf) goto L_118d6769;
  /* 118d67c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d67c3 jne 0x118d67cb */
  if (!C.zf) goto L_118d67cb;
  /* 118d67c5 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 118d67c9 jmp 0x118d67d8 */
  goto L_118d67d8;
L_118d67cb:;
  /* 118d67cb movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 118d67cf movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 118d67d3 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 118d67d6 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_118d67d8:;
  /* 118d67d8 pop ebx */
  EBX = (pop32());
  /* 118d67d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d67da ret  */
  ESPCHK(0x118d670fu, _esp0);
  ESP += 4; return;
}

/* FUN_100067db @ 0x118d67db (117 bytes, 46 insns) */
void f_118d67db(void) {
  FTRACE(0x118d67dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d67db push ebp */
  push32((uint32_t)(EBP));
  /* 118d67dc mov ebp, esp */
  EBP = (ESP);
  /* 118d67de push ecx */
  push32((uint32_t)(ECX));
  /* 118d67df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d67e2 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 118d67e5 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d67eb ja 0x118d67f9 */
  if ((!C.cf&&!C.zf)) goto L_118d67f9;
  /* 118d67ed mov ecx, dword ptr [0x118d9628] */
  ECX = (r32((uint32_t)(0x118d9628)));
  /* 118d67f3 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 118d67f7 jmp 0x118d684b */
  goto L_118d684b;
L_118d67f9:;
  /* 118d67f9 mov ecx, eax */
  ECX = (EAX);
  /* 118d67fb push esi */
  push32((uint32_t)(ESI));
  /* 118d67fc mov esi, dword ptr [0x118d9628] */
  ESI = (r32((uint32_t)(0x118d9628)));
  /* 118d6802 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 118d6805 movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 118d6808 test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 118d680d pop esi */
  ESI = (pop32());
  /* 118d680e je 0x118d681e */
  if (C.zf) goto L_118d681e;
  /* 118d6810 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 118d6814 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 118d6817 mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 118d681a push 2 */
  push32((uint32_t)(0x2u));
  /* 118d681c jmp 0x118d6827 */
  goto L_118d6827;
L_118d681e:;
  /* 118d681e and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 118d6822 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 118d6825 push 1 */
  push32((uint32_t)(0x1u));
L_118d6827:;
  /* 118d6827 pop eax */
  EAX = (pop32());
  /* 118d6828 lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 118d682b push 1 */
  push32((uint32_t)(0x1u));
  /* 118d682d push 0 */
  push32((uint32_t)(0x0u));
  /* 118d682f push 0 */
  push32((uint32_t)(0x0u));
  /* 118d6831 push ecx */
  push32((uint32_t)(ECX));
  /* 118d6832 push eax */
  push32((uint32_t)(EAX));
  /* 118d6833 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 118d6836 push eax */
  push32((uint32_t)(EAX));
  /* 118d6837 push 1 */
  push32((uint32_t)(0x1u));
  /* 118d6839 call 0x118d6557 */
  push32(0x118d683eu); f_118d6557();
  /* 118d683e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d6841 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d6843 jne 0x118d6847 */
  if (!C.zf) goto L_118d6847;
  /* 118d6845 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d6846 ret  */
  ESPCHK(0x118d67dbu, _esp0);
  ESP += 4; return;
L_118d6847:;
  /* 118d6847 movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_118d684b:;
  /* 118d684b and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 118d684e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d684f ret  */
  ESPCHK(0x118d67dbu, _esp0);
  ESP += 4; return;
}

/* FUN_10006850 @ 0x118d6850 (664 bytes, 265 insns) [15 switch table(s)] */
void f_118d6850(void) {
  FTRACE(0x118d6850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d6850 push ebp */
  push32((uint32_t)(EBP));
  /* 118d6851 mov ebp, esp */
  EBP = (ESP);
  /* 118d6853 push edi */
  push32((uint32_t)(EDI));
  /* 118d6854 push esi */
  push32((uint32_t)(ESI));
  /* 118d6855 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 118d6858 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118d685b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 118d685e mov eax, ecx */
  EAX = (ECX);
  /* 118d6860 mov edx, ecx */
  EDX = (ECX);
  /* 118d6862 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d6864 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d6866 jbe 0x118d6870 */
  if ((C.cf||C.zf)) goto L_118d6870;
  /* 118d6868 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d686a jb 0x118d69e8 */
  if (C.cf) goto L_118d69e8;
L_118d6870:;
  /* 118d6870 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 118d6876 jne 0x118d688c */
  if (!C.zf) goto L_118d688c;
  /* 118d6878 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118d687b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 118d687e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d6881 jb 0x118d68ac */
  if (C.cf) goto L_118d68ac;
  /* 118d6883 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118d6885 jmp dword ptr [edx*4 + 0x118d6998] */
  switch (EDX) {
    case 0: goto L_118d69a8;
    case 1: goto L_118d69b0;
    case 2: goto L_118d69bc;
    case 3: goto L_118d69d0;
    default: x86_unimpl("switch@0x118d6885 out of table"); return;
  }
L_118d688c:;
  /* 118d688c mov eax, edi */
  EAX = (EDI);
  /* 118d688e mov edx, 3 */
  EDX = (0x3u);
  /* 118d6893 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d6896 jb 0x118d68a4 */
  if (C.cf) goto L_118d68a4;
  /* 118d6898 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 118d689b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d689d jmp dword ptr [eax*4 + 0x118d68b0] */
  switch (EAX) {
    case 1: goto L_118d68c0;
    case 2: goto L_118d68ec;
    case 3: goto L_118d6910;
    default: x86_unimpl("switch@0x118d689d out of table"); return;
  }
L_118d68a4:;
  /* 118d68a4 jmp dword ptr [ecx*4 + 0x118d69a8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x118d69a8)))); return;
  /* 118d68ab nop  */
  /* nop */
L_118d68ac:;
  /* 118d68ac jmp dword ptr [ecx*4 + 0x118d692c] */
  switch (ECX) {
    case 0: goto L_118d698f;
    case 1: goto L_118d697c;
    case 2: goto L_118d6974;
    case 3: goto L_118d696c;
    case 4: goto L_118d6964;
    case 5: goto L_118d695c;
    case 6: goto L_118d6954;
    case 7: goto L_118d694c;
    default: x86_unimpl("switch@0x118d68ac out of table"); return;
  }
  /* 118d68b3 nop  */
  /* nop */
L_118d68c0:;
  /* 118d68c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 118d68c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118d68c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118d68c6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 118d68c9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 118d68cc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 118d68cf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118d68d2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 118d68d5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d68d8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d68db cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d68de jb 0x118d68ac */
  if (C.cf) goto L_118d68ac;
  /* 118d68e0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118d68e2 jmp dword ptr [edx*4 + 0x118d6998] */
  switch (EDX) {
    case 0: goto L_118d69a8;
    case 1: goto L_118d69b0;
    case 2: goto L_118d69bc;
    case 3: goto L_118d69d0;
    default: x86_unimpl("switch@0x118d68e2 out of table"); return;
  }
  /* 118d68e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118d68ec:;
  /* 118d68ec and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 118d68ee mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118d68f0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118d68f2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 118d68f5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118d68f8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 118d68fb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d68fe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d6901 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d6904 jb 0x118d68ac */
  if (C.cf) goto L_118d68ac;
  /* 118d6906 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118d6908 jmp dword ptr [edx*4 + 0x118d6998] */
  switch (EDX) {
    case 0: goto L_118d69a8;
    case 1: goto L_118d69b0;
    case 2: goto L_118d69bc;
    case 3: goto L_118d69d0;
    default: x86_unimpl("switch@0x118d6908 out of table"); return;
  }
  /* 118d690f nop  */
  /* nop */
L_118d6910:;
  /* 118d6910 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 118d6912 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118d6914 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118d6916 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118d6917 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118d691a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118d691b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d691e jb 0x118d68ac */
  if (C.cf) goto L_118d68ac;
  /* 118d6920 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118d6922 jmp dword ptr [edx*4 + 0x118d6998] */
  switch (EDX) {
    case 0: goto L_118d69a8;
    case 1: goto L_118d69b0;
    case 2: goto L_118d69bc;
    case 3: goto L_118d69d0;
    default: x86_unimpl("switch@0x118d6922 out of table"); return;
  }
  /* 118d6929 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118d694c:;
  /* 118d694c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 118d6950 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_118d6954:;
  /* 118d6954 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 118d6958 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_118d695c:;
  /* 118d695c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 118d6960 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_118d6964:;
  /* 118d6964 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 118d6968 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_118d696c:;
  /* 118d696c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 118d6970 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_118d6974:;
  /* 118d6974 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 118d6978 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_118d697c:;
  /* 118d697c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 118d6980 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 118d6984 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 118d698b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d698d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_118d698f:;
  /* 118d698f jmp dword ptr [edx*4 + 0x118d6998] */
  switch (EDX) {
    case 0: goto L_118d69a8;
    case 1: goto L_118d69b0;
    case 2: goto L_118d69bc;
    case 3: goto L_118d69d0;
    default: x86_unimpl("switch@0x118d698f out of table"); return;
  }
  /* 118d6996 mov edi, edi */
  EDI = (EDI);
L_118d69a8:;
  /* 118d69a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d69ab pop esi */
  ESI = (pop32());
  /* 118d69ac pop edi */
  EDI = (pop32());
  /* 118d69ad leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d69ae ret  */
  ESPCHK(0x118d6850u, _esp0);
  ESP += 4; return;
  /* 118d69af nop  */
  /* nop */
L_118d69b0:;
  /* 118d69b0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118d69b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118d69b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d69b7 pop esi */
  ESI = (pop32());
  /* 118d69b8 pop edi */
  EDI = (pop32());
  /* 118d69b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d69ba ret  */
  ESPCHK(0x118d6850u, _esp0);
  ESP += 4; return;
  /* 118d69bb nop  */
  /* nop */
L_118d69bc:;
  /* 118d69bc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118d69be mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118d69c0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 118d69c3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 118d69c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d69c9 pop esi */
  ESI = (pop32());
  /* 118d69ca pop edi */
  EDI = (pop32());
  /* 118d69cb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d69cc ret  */
  ESPCHK(0x118d6850u, _esp0);
  ESP += 4; return;
  /* 118d69cd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118d69d0:;
  /* 118d69d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118d69d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118d69d4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 118d69d7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 118d69da mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 118d69dd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 118d69e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d69e3 pop esi */
  ESI = (pop32());
  /* 118d69e4 pop edi */
  EDI = (pop32());
  /* 118d69e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d69e6 ret  */
  ESPCHK(0x118d6850u, _esp0);
  ESP += 4; return;
  /* 118d69e7 nop  */
  /* nop */
L_118d69e8:;
  /* 118d69e8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 118d69ec lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 118d69f0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 118d69f6 jne 0x118d6a1c */
  if (!C.zf) goto L_118d6a1c;
  /* 118d69f8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118d69fb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 118d69fe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d6a01 jb 0x118d6a10 */
  if (C.cf) goto L_118d6a10;
  /* 118d6a03 std  */
  C.df=1;
  /* 118d6a04 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118d6a06 cld  */
  C.df=0;
  /* 118d6a07 jmp dword ptr [edx*4 + 0x118d6b30] */
  switch (EDX) {
    case 0: goto L_118d6b40;
    case 1: goto L_118d6b48;
    case 2: goto L_118d6b58;
    case 3: goto L_118d6b6c;
    default: x86_unimpl("switch@0x118d6a07 out of table"); return;
  }
  /* 118d6a0e mov edi, edi */
  EDI = (EDI);
L_118d6a10:;
  /* 118d6a10 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 118d6a12 jmp dword ptr [ecx*4 + 0x118d6ae0] */
  switch (ECX) {
    case 0: goto L_118d6b27;
    default: x86_unimpl("switch@0x118d6a12 out of table"); return;
  }
  /* 118d6a19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118d6a1c:;
  /* 118d6a1c mov eax, edi */
  EAX = (EDI);
  /* 118d6a1e mov edx, 3 */
  EDX = (0x3u);
  /* 118d6a23 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d6a26 jb 0x118d6a34 */
  if (C.cf) goto L_118d6a34;
  /* 118d6a28 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 118d6a2b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d6a2d jmp dword ptr [eax*4 + 0x118d6a38] */
  switch (EAX) {
    case 1: goto L_118d6a48;
    case 2: goto L_118d6a68;
    case 3: goto L_118d6a90;
    default: x86_unimpl("switch@0x118d6a2d out of table"); return;
  }
L_118d6a34:;
  /* 118d6a34 jmp dword ptr [ecx*4 + 0x118d6b30] */
  switch (ECX) {
    case 0: goto L_118d6b40;
    case 1: goto L_118d6b48;
    case 2: goto L_118d6b58;
    case 3: goto L_118d6b6c;
    default: x86_unimpl("switch@0x118d6a34 out of table"); return;
  }
  /* 118d6a3b nop  */
  /* nop */
L_118d6a48:;
  /* 118d6a48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 118d6a4b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 118d6a4d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 118d6a50 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 118d6a51 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118d6a54 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 118d6a55 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d6a58 jb 0x118d6a10 */
  if (C.cf) goto L_118d6a10;
  /* 118d6a5a std  */
  C.df=1;
  /* 118d6a5b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118d6a5d cld  */
  C.df=0;
  /* 118d6a5e jmp dword ptr [edx*4 + 0x118d6b30] */
  switch (EDX) {
    case 0: goto L_118d6b40;
    case 1: goto L_118d6b48;
    case 2: goto L_118d6b58;
    case 3: goto L_118d6b6c;
    default: x86_unimpl("switch@0x118d6a5e out of table"); return;
  }
  /* 118d6a65 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118d6a68:;
  /* 118d6a68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 118d6a6b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 118d6a6d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 118d6a70 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 118d6a73 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118d6a76 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 118d6a79 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d6a7c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d6a7f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d6a82 jb 0x118d6a10 */
  if (C.cf) goto L_118d6a10;
  /* 118d6a84 std  */
  C.df=1;
  /* 118d6a85 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118d6a87 cld  */
  C.df=0;
  /* 118d6a88 jmp dword ptr [edx*4 + 0x118d6b30] */
  switch (EDX) {
    case 0: goto L_118d6b40;
    case 1: goto L_118d6b48;
    case 2: goto L_118d6b58;
    case 3: goto L_118d6b6c;
    default: x86_unimpl("switch@0x118d6a88 out of table"); return;
  }
  /* 118d6a8f nop  */
  /* nop */
L_118d6a90:;
  /* 118d6a90 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 118d6a93 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 118d6a95 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 118d6a98 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 118d6a9b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 118d6a9e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 118d6aa1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118d6aa4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 118d6aa7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d6aaa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d6aad cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d6ab0 jb 0x118d6a10 */
  if (C.cf) goto L_118d6a10;
  /* 118d6ab6 std  */
  C.df=1;
  /* 118d6ab7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118d6ab9 cld  */
  C.df=0;
  /* 118d6aba jmp dword ptr [edx*4 + 0x118d6b30] */
  switch (EDX) {
    case 0: goto L_118d6b40;
    case 1: goto L_118d6b48;
    case 2: goto L_118d6b58;
    case 3: goto L_118d6b6c;
    default: x86_unimpl("switch@0x118d6aba out of table"); return;
  }
  /* 118d6ac1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 118d6ac4 in al, 0x6a */
  x86_unimpl("in @ 0x118d6ac4");
  /* 118d6ac6 lea edx, [ecx] */
  EDX = ((uint32_t)(ECX));
  /* 118d6ac8 in al, dx */
  x86_unimpl("in @ 0x118d6ac8");
  /* 118d6ac9 push -0x73 */
  push32((uint32_t)(0xffffff8du));
  /* 118d6acb adc esp, esi */
  { uint32_t _a=(ESP),_b=(ESI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d6acd push -0x73 */
  push32((uint32_t)(0xffffff8du));
  /* 118d6acf adc esp, edi */
  { uint32_t _a=(ESP),_b=(EDI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d6ad1 push -0x73 */
  push32((uint32_t)(0xffffff8du));
  /* 118d6ad3 adc dword ptr [ebx + ebp*2], eax */
  { uint32_t _a=(r32((uint32_t)(EBX + EBP*2))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(EBX + EBP*2), (_r)); fl_add(_a,_b,_r,32); }
  /* 118d6ad6 lea edx, [ecx] */
  EDX = ((uint32_t)(ECX));
  /* 118d6ad8 or al, 0x6b */
  { uint32_t _r=(AL)|(0x6bu); AL = (_r); fl_logic(_r,8); }
  /* 118d6ada lea edx, [ecx] */
  EDX = ((uint32_t)(ECX));
  /* 118d6adc adc al, 0x6b */
  { uint32_t _a=(AL),_b=(0x6bu),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 118d6ade lea edx, [ecx] */
  EDX = ((uint32_t)(ECX));
  /* 118d6ae4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 118d6ae8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 118d6aec mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 118d6af0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 118d6af4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 118d6af8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 118d6afc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 118d6b00 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 118d6b04 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 118d6b08 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 118d6b0c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 118d6b10 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 118d6b14 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 118d6b18 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 118d6b1c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 118d6b23 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d6b25 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_118d6b27:;
  /* 118d6b27 jmp dword ptr [edx*4 + 0x118d6b30] */
  switch (EDX) {
    case 0: goto L_118d6b40;
    case 1: goto L_118d6b48;
    case 2: goto L_118d6b58;
    case 3: goto L_118d6b6c;
    default: x86_unimpl("switch@0x118d6b27 out of table"); return;
  }
  /* 118d6b2e mov edi, edi */
  EDI = (EDI);
L_118d6b40:;
  /* 118d6b40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d6b43 pop esi */
  ESI = (pop32());
  /* 118d6b44 pop edi */
  EDI = (pop32());
  /* 118d6b45 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d6b46 ret  */
  ESPCHK(0x118d6850u, _esp0);
  ESP += 4; return;
  /* 118d6b47 nop  */
  /* nop */
L_118d6b48:;
  /* 118d6b48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 118d6b4b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 118d6b4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d6b51 pop esi */
  ESI = (pop32());
  /* 118d6b52 pop edi */
  EDI = (pop32());
  /* 118d6b53 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d6b54 ret  */
  ESPCHK(0x118d6850u, _esp0);
  ESP += 4; return;
  /* 118d6b55 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118d6b58:;
  /* 118d6b58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 118d6b5b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 118d6b5e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 118d6b61 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 118d6b64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d6b67 pop esi */
  ESI = (pop32());
  /* 118d6b68 pop edi */
  EDI = (pop32());
  /* 118d6b69 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d6b6a ret  */
  ESPCHK(0x118d6850u, _esp0);
  ESP += 4; return;
  /* 118d6b6b nop  */
  /* nop */
L_118d6b6c:;
  /* 118d6b6c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 118d6b6f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 118d6b72 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 118d6b75 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 118d6b78 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 118d6b7b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 118d6b7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d6b81 pop esi */
  ESI = (pop32());
  /* 118d6b82 pop edi */
  EDI = (pop32());
  /* 118d6b83 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d6b84 ret  */
  ESPCHK(0x118d6850u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b85 @ 0x118d6b85 (49 bytes, 20 insns) */
void f_118d6b85(void) {
  FTRACE(0x118d6b85u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d6b85 push esi */
  push32((uint32_t)(ESI));
  /* 118d6b86 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118d6b8a push edi */
  push32((uint32_t)(EDI));
  /* 118d6b8b or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 118d6b8e test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 118d6b92 je 0x118d6b9a */
  if (C.zf) goto L_118d6b9a;
  /* 118d6b94 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 118d6b98 jmp 0x118d6bb1 */
  goto L_118d6bb1;
L_118d6b9a:;
  /* 118d6b9a push esi */
  push32((uint32_t)(ESI));
  /* 118d6b9b call 0x118d39e8 */
  push32(0x118d6ba0u); f_118d39e8();
  /* 118d6ba0 push esi */
  push32((uint32_t)(ESI));
  /* 118d6ba1 call 0x118d6bb6 */
  push32(0x118d6ba6u); f_118d6bb6();
  /* 118d6ba6 push esi */
  push32((uint32_t)(ESI));
  /* 118d6ba7 mov edi, eax */
  EDI = (EAX);
  /* 118d6ba9 call 0x118d3a3a */
  push32(0x118d6baeu); f_118d3a3a();
  /* 118d6bae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118d6bb1:;
  /* 118d6bb1 mov eax, edi */
  EAX = (EDI);
  /* 118d6bb3 pop edi */
  EDI = (pop32());
  /* 118d6bb4 pop esi */
  ESI = (pop32());
  /* 118d6bb5 ret  */
  ESPCHK(0x118d6b85u, _esp0);
  ESP += 4; return;
}

/* __fclose_lk @ 0x118d6bb6 (76 bytes, 30 insns) */
void f_118d6bb6(void) {
  FTRACE(0x118d6bb6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d6bb6 push esi */
  push32((uint32_t)(ESI));
  /* 118d6bb7 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118d6bbb push edi */
  push32((uint32_t)(EDI));
  /* 118d6bbc or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 118d6bbf test byte ptr [esi + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 118d6bc3 je 0x118d6bf9 */
  if (C.zf) goto L_118d6bf9;
  /* 118d6bc5 push esi */
  push32((uint32_t)(ESI));
  /* 118d6bc6 call 0x118d5fa4 */
  push32(0x118d6bcbu); f_118d5fa4();
  /* 118d6bcb push esi */
  push32((uint32_t)(ESI));
  /* 118d6bcc mov edi, eax */
  EDI = (EAX);
  /* 118d6bce call 0x118d6e8a */
  push32(0x118d6bd3u); f_118d6e8a();
  /* 118d6bd3 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 118d6bd6 call 0x118d6daa */
  push32(0x118d6bdbu); f_118d6daa();
  /* 118d6bdb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d6bde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d6be0 jge 0x118d6be7 */
  if ((C.sf==C.of)) goto L_118d6be7;
  /* 118d6be2 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 118d6be5 jmp 0x118d6bf9 */
  goto L_118d6bf9;
L_118d6be7:;
  /* 118d6be7 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 118d6bea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d6bec je 0x118d6bf9 */
  if (C.zf) goto L_118d6bf9;
  /* 118d6bee push eax */
  push32((uint32_t)(EAX));
  /* 118d6bef call 0x118d3efd */
  push32(0x118d6bf4u); f_118d3efd();
  /* 118d6bf4 and dword ptr [esi + 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))&(0x0u); w32((uint32_t)(ESI + 0x1c), (_r)); fl_logic(_r,32); }
  /* 118d6bf8 pop ecx */
  ECX = (pop32());
L_118d6bf9:;
  /* 118d6bf9 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 118d6bfd mov eax, edi */
  EAX = (EDI);
  /* 118d6bff pop edi */
  EDI = (pop32());
  /* 118d6c00 pop esi */
  ESI = (pop32());
  /* 118d6c01 ret  */
  ESPCHK(0x118d6bb6u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c02 @ 0x118d6c02 (147 bytes, 52 insns) */
void f_118d6c02(void) {
  FTRACE(0x118d6c02u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d6c02 push ebx */
  push32((uint32_t)(EBX));
  /* 118d6c03 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 118d6c07 cmp ebx, dword ptr [0x118dd820] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x118dd820))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d6c0d push esi */
  push32((uint32_t)(ESI));
  /* 118d6c0e push edi */
  push32((uint32_t)(EDI));
  /* 118d6c0f jae 0x118d6c83 */
  if (!C.cf) goto L_118d6c83;
  /* 118d6c11 mov eax, ebx */
  EAX = (EBX);
  /* 118d6c13 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 118d6c16 lea edi, [eax*4 + 0x118dd720] */
  EDI = ((uint32_t)(EAX*4 + 0x118dd720));
  /* 118d6c1d mov eax, ebx */
  EAX = (EBX);
  /* 118d6c1f and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 118d6c22 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 118d6c25 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 118d6c27 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 118d6c2a test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 118d6c2f je 0x118d6c83 */
  if (C.zf) goto L_118d6c83;
  /* 118d6c31 push ebx */
  push32((uint32_t)(EBX));
  /* 118d6c32 call 0x118d5e74 */
  push32(0x118d6c37u); f_118d5e74();
  /* 118d6c37 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 118d6c39 pop ecx */
  ECX = (pop32());
  /* 118d6c3a test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 118d6c3f je 0x118d6c6a */
  if (C.zf) goto L_118d6c6a;
  /* 118d6c41 push ebx */
  push32((uint32_t)(EBX));
  /* 118d6c42 call 0x118d5e32 */
  push32(0x118d6c47u); f_118d5e32();
  /* 118d6c47 pop ecx */
  ECX = (pop32());
  /* 118d6c48 push eax */
  push32((uint32_t)(EAX));
  /* 118d6c49 call dword ptr [0x118d8014] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8014))), 0x118d6c4fu);
  /* 118d6c4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d6c51 jne 0x118d6c5d */
  if (!C.zf) goto L_118d6c5d;
  /* 118d6c53 call dword ptr [0x118d80a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d80a0))), 0x118d6c59u);
  /* 118d6c59 mov esi, eax */
  ESI = (EAX);
  /* 118d6c5b jmp 0x118d6c5f */
  goto L_118d6c5f;
L_118d6c5d:;
  /* 118d6c5d xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_118d6c5f:;
  /* 118d6c5f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118d6c61 je 0x118d6c78 */
  if (C.zf) goto L_118d6c78;
  /* 118d6c63 call 0x118d5daa */
  push32(0x118d6c68u); f_118d5daa();
  /* 118d6c68 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_118d6c6a:;
  /* 118d6c6a call 0x118d5da1 */
  push32(0x118d6c6fu); f_118d5da1();
  /* 118d6c6f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 118d6c75 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_118d6c78:;
  /* 118d6c78 push ebx */
  push32((uint32_t)(EBX));
  /* 118d6c79 call 0x118d5ed3 */
  push32(0x118d6c7eu); f_118d5ed3();
  /* 118d6c7e pop ecx */
  ECX = (pop32());
  /* 118d6c7f mov eax, esi */
  EAX = (ESI);
  /* 118d6c81 jmp 0x118d6c91 */
  goto L_118d6c91;
L_118d6c83:;
  /* 118d6c83 call 0x118d5da1 */
  push32(0x118d6c88u); f_118d5da1();
  /* 118d6c88 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 118d6c8e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_118d6c91:;
  /* 118d6c91 pop edi */
  EDI = (pop32());
  /* 118d6c92 pop esi */
  ESI = (pop32());
  /* 118d6c93 pop ebx */
  EBX = (pop32());
  /* 118d6c94 ret  */
  ESPCHK(0x118d6c02u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d30 @ 0x118d6d30 (62 bytes, 35 insns) */
void f_118d6d30(void) {
  FTRACE(0x118d6d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d6d30 push ebp */
  push32((uint32_t)(EBP));
  /* 118d6d31 mov ebp, esp */
  EBP = (ESP);
  /* 118d6d33 push esi */
  push32((uint32_t)(ESI));
  /* 118d6d34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d6d36 push eax */
  push32((uint32_t)(EAX));
  /* 118d6d37 push eax */
  push32((uint32_t)(EAX));
  /* 118d6d38 push eax */
  push32((uint32_t)(EAX));
  /* 118d6d39 push eax */
  push32((uint32_t)(EAX));
  /* 118d6d3a push eax */
  push32((uint32_t)(EAX));
  /* 118d6d3b push eax */
  push32((uint32_t)(EAX));
  /* 118d6d3c push eax */
  push32((uint32_t)(EAX));
  /* 118d6d3d push eax */
  push32((uint32_t)(EAX));
  /* 118d6d3e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118d6d41 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118d6d44:;
  /* 118d6d44 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118d6d46 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 118d6d48 je 0x118d6d51 */
  if (C.zf) goto L_118d6d51;
  /* 118d6d4a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 118d6d4b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x118d6d4b");
  /* 118d6d4f jmp 0x118d6d44 */
  goto L_118d6d44;
L_118d6d51:;
  /* 118d6d51 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 118d6d54 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 118d6d57 nop  */
  /* nop */
L_118d6d58:;
  /* 118d6d58 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118d6d59 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118d6d5b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 118d6d5d je 0x118d6d66 */
  if (C.zf) goto L_118d6d66;
  /* 118d6d5f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118d6d60 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x118d6d60");
  /* 118d6d64 jae 0x118d6d58 */
  if (!C.cf) goto L_118d6d58;
L_118d6d66:;
  /* 118d6d66 mov eax, ecx */
  EAX = (ECX);
  /* 118d6d68 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d6d6b pop esi */
  ESI = (pop32());
  /* 118d6d6c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d6d6d ret  */
  ESPCHK(0x118d6d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d70 @ 0x118d6d70 (58 bytes, 32 insns) */
void f_118d6d70(void) {
  FTRACE(0x118d6d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d6d70 push ebp */
  push32((uint32_t)(EBP));
  /* 118d6d71 mov ebp, esp */
  EBP = (ESP);
  /* 118d6d73 push esi */
  push32((uint32_t)(ESI));
  /* 118d6d74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d6d76 push eax */
  push32((uint32_t)(EAX));
  /* 118d6d77 push eax */
  push32((uint32_t)(EAX));
  /* 118d6d78 push eax */
  push32((uint32_t)(EAX));
  /* 118d6d79 push eax */
  push32((uint32_t)(EAX));
  /* 118d6d7a push eax */
  push32((uint32_t)(EAX));
  /* 118d6d7b push eax */
  push32((uint32_t)(EAX));
  /* 118d6d7c push eax */
  push32((uint32_t)(EAX));
  /* 118d6d7d push eax */
  push32((uint32_t)(EAX));
  /* 118d6d7e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118d6d81 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118d6d84:;
  /* 118d6d84 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118d6d86 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 118d6d88 je 0x118d6d91 */
  if (C.zf) goto L_118d6d91;
  /* 118d6d8a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 118d6d8b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x118d6d8b");
  /* 118d6d8f jmp 0x118d6d84 */
  goto L_118d6d84;
L_118d6d91:;
  /* 118d6d91 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_118d6d94:;
  /* 118d6d94 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118d6d96 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 118d6d98 je 0x118d6da4 */
  if (C.zf) goto L_118d6da4;
  /* 118d6d9a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118d6d9b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x118d6d9b");
  /* 118d6d9f jae 0x118d6d94 */
  if (!C.cf) goto L_118d6d94;
  /* 118d6da1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_118d6da4:;
  /* 118d6da4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d6da7 pop esi */
  ESI = (pop32());
  /* 118d6da8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d6da9 ret  */
  ESPCHK(0x118d6d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006daa @ 0x118d6daa (93 bytes, 32 insns) */
void f_118d6daa(void) {
  FTRACE(0x118d6daau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d6daa push esi */
  push32((uint32_t)(ESI));
  /* 118d6dab mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118d6daf cmp esi, dword ptr [0x118dd820] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x118dd820))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d6db5 jae 0x118d6def */
  if (!C.cf) goto L_118d6def;
  /* 118d6db7 mov ecx, esi */
  ECX = (ESI);
  /* 118d6db9 mov eax, esi */
  EAX = (ESI);
  /* 118d6dbb sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118d6dbe and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 118d6dc1 mov ecx, dword ptr [ecx*4 + 0x118dd720] */
  ECX = (r32((uint32_t)(ECX*4 + 0x118dd720)));
  /* 118d6dc8 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 118d6dcb test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 118d6dd0 je 0x118d6def */
  if (C.zf) goto L_118d6def;
  /* 118d6dd2 push edi */
  push32((uint32_t)(EDI));
  /* 118d6dd3 push esi */
  push32((uint32_t)(ESI));
  /* 118d6dd4 call 0x118d5e74 */
  push32(0x118d6dd9u); f_118d5e74();
  /* 118d6dd9 push esi */
  push32((uint32_t)(ESI));
  /* 118d6dda call 0x118d6e07 */
  push32(0x118d6ddfu); f_118d6e07();
  /* 118d6ddf push esi */
  push32((uint32_t)(ESI));
  /* 118d6de0 mov edi, eax */
  EDI = (EAX);
  /* 118d6de2 call 0x118d5ed3 */
  push32(0x118d6de7u); f_118d5ed3();
  /* 118d6de7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d6dea mov eax, edi */
  EAX = (EDI);
  /* 118d6dec pop edi */
  EDI = (pop32());
  /* 118d6ded pop esi */
  ESI = (pop32());
  /* 118d6dee ret  */
  ESPCHK(0x118d6daau, _esp0);
  ESP += 4; return;
L_118d6def:;
  /* 118d6def call 0x118d5da1 */
  push32(0x118d6df4u); f_118d5da1();
  /* 118d6df4 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 118d6dfa call 0x118d5daa */
  push32(0x118d6dffu); f_118d5daa();
  /* 118d6dff and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 118d6e02 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118d6e05 pop esi */
  ESI = (pop32());
  /* 118d6e06 ret  */
  ESPCHK(0x118d6daau, _esp0);
  ESP += 4; return;
}

/* FUN_10006e07 @ 0x118d6e07 (131 bytes, 52 insns) */
void f_118d6e07(void) {
  FTRACE(0x118d6e07u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d6e07 push esi */
  push32((uint32_t)(ESI));
  /* 118d6e08 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118d6e0c push edi */
  push32((uint32_t)(EDI));
  /* 118d6e0d push esi */
  push32((uint32_t)(ESI));
  /* 118d6e0e call 0x118d5e32 */
  push32(0x118d6e13u); f_118d5e32();
  /* 118d6e13 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d6e16 pop ecx */
  ECX = (pop32());
  /* 118d6e17 je 0x118d6e55 */
  if (C.zf) goto L_118d6e55;
  /* 118d6e19 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d6e1c je 0x118d6e23 */
  if (C.zf) goto L_118d6e23;
  /* 118d6e1e cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d6e21 jne 0x118d6e39 */
  if (!C.zf) goto L_118d6e39;
L_118d6e23:;
  /* 118d6e23 push 2 */
  push32((uint32_t)(0x2u));
  /* 118d6e25 call 0x118d5e32 */
  push32(0x118d6e2au); f_118d5e32();
  /* 118d6e2a push 1 */
  push32((uint32_t)(0x1u));
  /* 118d6e2c mov edi, eax */
  EDI = (EAX);
  /* 118d6e2e call 0x118d5e32 */
  push32(0x118d6e33u); f_118d5e32();
  /* 118d6e33 pop ecx */
  ECX = (pop32());
  /* 118d6e34 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d6e36 pop ecx */
  ECX = (pop32());
  /* 118d6e37 je 0x118d6e55 */
  if (C.zf) goto L_118d6e55;
L_118d6e39:;
  /* 118d6e39 push esi */
  push32((uint32_t)(ESI));
  /* 118d6e3a call 0x118d5e32 */
  push32(0x118d6e3fu); f_118d5e32();
  /* 118d6e3f pop ecx */
  ECX = (pop32());
  /* 118d6e40 push eax */
  push32((uint32_t)(EAX));
  /* 118d6e41 call dword ptr [0x118d8008] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8008))), 0x118d6e47u);
  /* 118d6e47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d6e49 jne 0x118d6e55 */
  if (!C.zf) goto L_118d6e55;
  /* 118d6e4b call dword ptr [0x118d80a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d80a0))), 0x118d6e51u);
  /* 118d6e51 mov edi, eax */
  EDI = (EAX);
  /* 118d6e53 jmp 0x118d6e57 */
  goto L_118d6e57;
L_118d6e55:;
  /* 118d6e55 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_118d6e57:;
  /* 118d6e57 push esi */
  push32((uint32_t)(ESI));
  /* 118d6e58 call 0x118d5db3 */
  push32(0x118d6e5du); f_118d5db3();
  /* 118d6e5d mov eax, esi */
  EAX = (ESI);
  /* 118d6e5f and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 118d6e62 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 118d6e65 pop ecx */
  ECX = (pop32());
  /* 118d6e66 mov eax, dword ptr [eax*4 + 0x118dd720] */
  EAX = (r32((uint32_t)(EAX*4 + 0x118dd720)));
  /* 118d6e6d lea ecx, [esi + esi*8] */
  ECX = ((uint32_t)(ESI + ESI*8));
  /* 118d6e70 and byte ptr [eax + ecx*4 + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + ECX*4 + 0x4)))&(0x0u); w8((uint32_t)(EAX + ECX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 118d6e75 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 118d6e77 je 0x118d6e85 */
  if (C.zf) goto L_118d6e85;
  /* 118d6e79 push edi */
  push32((uint32_t)(EDI));
  /* 118d6e7a call 0x118d5d2e */
  push32(0x118d6e7fu); f_118d5d2e();
  /* 118d6e7f pop ecx */
  ECX = (pop32());
  /* 118d6e80 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118d6e83 jmp 0x118d6e87 */
  goto L_118d6e87;
L_118d6e85:;
  /* 118d6e85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118d6e87:;
  /* 118d6e87 pop edi */
  EDI = (pop32());
  /* 118d6e88 pop esi */
  ESI = (pop32());
  /* 118d6e89 ret  */
  ESPCHK(0x118d6e07u, _esp0);
  ESP += 4; return;
}

/* __freebuf @ 0x118d6e8a (43 bytes, 17 insns) */
void f_118d6e8a(void) {
  FTRACE(0x118d6e8au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d6e8a push esi */
  push32((uint32_t)(ESI));
  /* 118d6e8b mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118d6e8f mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 118d6e92 test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 118d6e94 je 0x118d6eb3 */
  if (C.zf) goto L_118d6eb3;
  /* 118d6e96 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 118d6e98 je 0x118d6eb3 */
  if (C.zf) goto L_118d6eb3;
  /* 118d6e9a push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 118d6e9d call 0x118d3efd */
  push32(0x118d6ea2u); f_118d3efd();
  /* 118d6ea2 and word ptr [esi + 0xc], 0xfbf7 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0xfbf7u); w16((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,16); }
  /* 118d6ea8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d6eaa pop ecx */
  ECX = (pop32());
  /* 118d6eab mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 118d6ead mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 118d6eb0 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_118d6eb3:;
  /* 118d6eb3 pop esi */
  ESI = (pop32());
  /* 118d6eb4 ret  */
  ESPCHK(0x118d6e8au, _esp0);
  ESP += 4; return;
}

/* FUN_10006ec0 @ 0x118d6ec0 (208 bytes, 85 insns) */
void f_118d6ec0(void) {
  FTRACE(0x118d6ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d6ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 118d6ec1 mov ebp, esp */
  EBP = (ESP);
  /* 118d6ec3 push edi */
  push32((uint32_t)(EDI));
  /* 118d6ec4 push esi */
  push32((uint32_t)(ESI));
  /* 118d6ec5 push ebx */
  push32((uint32_t)(EBX));
  /* 118d6ec6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 118d6ec9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 118d6ecc lea eax, [0x118dc320] */
  EAX = ((uint32_t)(0x118dc320));
  /* 118d6ed2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d6ed6 jne 0x118d6f13 */
  if (!C.zf) goto L_118d6f13;
  /* 118d6ed8 mov al, 0xff */
  AL = (0xffu);
  /* 118d6eda mov edi, edi */
  EDI = (EDI);
L_118d6edc:;
  /* 118d6edc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 118d6ede je 0x118d6f0e */
  if (C.zf) goto L_118d6f0e;
  /* 118d6ee0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118d6ee2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118d6ee3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 118d6ee5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118d6ee6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d6ee8 je 0x118d6edc */
  if (C.zf) goto L_118d6edc;
  /* 118d6eea sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 118d6eec cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d6eee sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 118d6ef0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 118d6ef3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 118d6ef5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 118d6ef7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 118d6ef9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 118d6efb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d6efd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 118d6eff and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 118d6f02 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 118d6f04 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 118d6f06 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d6f08 je 0x118d6edc */
  if (C.zf) goto L_118d6edc;
  /* 118d6f0a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 118d6f0c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_118d6f0e:;
  /* 118d6f0e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 118d6f11 jmp 0x118d6f8b */
  goto L_118d6f8b;
L_118d6f13:;
  /* 118d6f13 lock inc dword ptr [0x118dc494] */
  x86_unimpl("lock inc @ 0x118d6f13");
  /* 118d6f1a cmp dword ptr [0x118dc490], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118dc490))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d6f21 jg 0x118d6f27 */
  if ((!C.zf&&C.sf==C.of)) goto L_118d6f27;
  /* 118d6f23 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d6f25 jmp 0x118d6f3c */
  goto L_118d6f3c;
L_118d6f27:;
  /* 118d6f27 lock dec dword ptr [0x118dc494] */
  x86_unimpl("lock dec @ 0x118d6f27");
  /* 118d6f2e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118d6f30 call 0x118d3e87 */
  push32(0x118d6f35u); f_118d3e87();
  /* 118d6f35 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_118d6f3c:;
  /* 118d6f3c mov eax, 0xff */
  EAX = (0xffu);
  /* 118d6f41 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118d6f43 nop  */
  /* nop */
L_118d6f44:;
  /* 118d6f44 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 118d6f46 je 0x118d6f6f */
  if (C.zf) goto L_118d6f6f;
  /* 118d6f48 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118d6f4a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118d6f4b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 118d6f4d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118d6f4e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d6f50 je 0x118d6f44 */
  if (C.zf) goto L_118d6f44;
  /* 118d6f52 push eax */
  push32((uint32_t)(EAX));
  /* 118d6f53 push ebx */
  push32((uint32_t)(EBX));
  /* 118d6f54 call 0x118d7091 */
  push32(0x118d6f59u); f_118d7091();
  /* 118d6f59 mov ebx, eax */
  EBX = (EAX);
  /* 118d6f5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d6f5e call 0x118d7091 */
  push32(0x118d6f63u); f_118d7091();
  /* 118d6f63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d6f66 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d6f68 je 0x118d6f44 */
  if (C.zf) goto L_118d6f44;
  /* 118d6f6a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d6f6c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_118d6f6f:;
  /* 118d6f6f mov ebx, eax */
  EBX = (EAX);
  /* 118d6f71 pop eax */
  EAX = (pop32());
  /* 118d6f72 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d6f74 jne 0x118d6f7f */
  if (!C.zf) goto L_118d6f7f;
  /* 118d6f76 lock dec dword ptr [0x118dc494] */
  x86_unimpl("lock dec @ 0x118d6f76");
  /* 118d6f7d jmp 0x118d6f89 */
  goto L_118d6f89;
L_118d6f7f:;
  /* 118d6f7f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118d6f81 call 0x118d3ee8 */
  push32(0x118d6f86u); f_118d3ee8();
  /* 118d6f86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118d6f89:;
  /* 118d6f89 mov eax, ebx */
  EAX = (EBX);
L_118d6f8b:;
  /* 118d6f8b pop ebx */
  EBX = (pop32());
  /* 118d6f8c pop esi */
  ESI = (pop32());
  /* 118d6f8d pop edi */
  EDI = (pop32());
  /* 118d6f8e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d6f8f ret  */
  ESPCHK(0x118d6ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f90 @ 0x118d6f90 (257 bytes, 103 insns) */
void f_118d6f90(void) {
  FTRACE(0x118d6f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d6f90 push ebp */
  push32((uint32_t)(EBP));
  /* 118d6f91 mov ebp, esp */
  EBP = (ESP);
  /* 118d6f93 push edi */
  push32((uint32_t)(EDI));
  /* 118d6f94 push esi */
  push32((uint32_t)(ESI));
  /* 118d6f95 push ebx */
  push32((uint32_t)(EBX));
  /* 118d6f96 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118d6f99 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118d6f9b je 0x118d708a */
  if (C.zf) goto L_118d708a;
  /* 118d6fa1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 118d6fa4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 118d6fa7 lea eax, [0x118dc320] */
  EAX = ((uint32_t)(0x118dc320));
  /* 118d6fad cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d6fb1 jne 0x118d7001 */
  if (!C.zf) goto L_118d7001;
  /* 118d6fb3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 118d6fb5 mov bl, 0x5a */
  BL = (0x5au);
  /* 118d6fb7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 118d6fb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118d6fbc:;
  /* 118d6fbc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 118d6fbe or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 118d6fc0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 118d6fc2 je 0x118d6fe5 */
  if (C.zf) goto L_118d6fe5;
  /* 118d6fc4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 118d6fc6 je 0x118d6fe5 */
  if (C.zf) goto L_118d6fe5;
  /* 118d6fc8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118d6fc9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118d6fca cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d6fcc jb 0x118d6fd4 */
  if (C.cf) goto L_118d6fd4;
  /* 118d6fce cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d6fd0 ja 0x118d6fd4 */
  if ((!C.cf&&!C.zf)) goto L_118d6fd4;
  /* 118d6fd2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_118d6fd4:;
  /* 118d6fd4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d6fd6 jb 0x118d6fde */
  if (C.cf) goto L_118d6fde;
  /* 118d6fd8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d6fda ja 0x118d6fde */
  if ((!C.cf&&!C.zf)) goto L_118d6fde;
  /* 118d6fdc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_118d6fde:;
  /* 118d6fde cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d6fe0 jne 0x118d6fef */
  if (!C.zf) goto L_118d6fef;
  /* 118d6fe2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118d6fe3 jne 0x118d6fbc */
  if (!C.zf) goto L_118d6fbc;
L_118d6fe5:;
  /* 118d6fe5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118d6fe7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d6fe9 je 0x118d708a */
  if (C.zf) goto L_118d708a;
L_118d6fef:;
  /* 118d6fef mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 118d6ff4 jb 0x118d708a */
  if (C.cf) goto L_118d708a;
  /* 118d6ffa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 118d6ffc jmp 0x118d708a */
  goto L_118d708a;
L_118d7001:;
  /* 118d7001 lock inc dword ptr [0x118dc494] */
  x86_unimpl("lock inc @ 0x118d7001");
  /* 118d7008 cmp dword ptr [0x118dc490], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118dc490))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d700f jg 0x118d7015 */
  if ((!C.zf&&C.sf==C.of)) goto L_118d7015;
  /* 118d7011 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d7013 jmp 0x118d702e */
  goto L_118d702e;
L_118d7015:;
  /* 118d7015 lock dec dword ptr [0x118dc494] */
  x86_unimpl("lock dec @ 0x118d7015");
  /* 118d701c mov ebx, ecx */
  EBX = (ECX);
  /* 118d701e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118d7020 call 0x118d3e87 */
  push32(0x118d7025u); f_118d3e87();
  /* 118d7025 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 118d702c mov ecx, ebx */
  ECX = (EBX);
L_118d702e:;
  /* 118d702e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d7030 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118d7032 mov edi, edi */
  EDI = (EDI);
L_118d7034:;
  /* 118d7034 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118d7036 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d7038 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 118d703a je 0x118d705f */
  if (C.zf) goto L_118d705f;
  /* 118d703c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118d703e je 0x118d705f */
  if (C.zf) goto L_118d705f;
  /* 118d7040 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118d7041 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118d7042 push ecx */
  push32((uint32_t)(ECX));
  /* 118d7043 push eax */
  push32((uint32_t)(EAX));
  /* 118d7044 push ebx */
  push32((uint32_t)(EBX));
  /* 118d7045 call 0x118d7091 */
  push32(0x118d704au); f_118d7091();
  /* 118d704a mov ebx, eax */
  EBX = (EAX);
  /* 118d704c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d704f call 0x118d7091 */
  push32(0x118d7054u); f_118d7091();
  /* 118d7054 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d7057 pop ecx */
  ECX = (pop32());
  /* 118d7058 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d705a jne 0x118d7065 */
  if (!C.zf) goto L_118d7065;
  /* 118d705c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118d705d jne 0x118d7034 */
  if (!C.zf) goto L_118d7034;
L_118d705f:;
  /* 118d705f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118d7061 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d7063 je 0x118d706e */
  if (C.zf) goto L_118d706e;
L_118d7065:;
  /* 118d7065 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 118d706a jb 0x118d706e */
  if (C.cf) goto L_118d706e;
  /* 118d706c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_118d706e:;
  /* 118d706e pop eax */
  EAX = (pop32());
  /* 118d706f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d7071 jne 0x118d707c */
  if (!C.zf) goto L_118d707c;
  /* 118d7073 lock dec dword ptr [0x118dc494] */
  x86_unimpl("lock dec @ 0x118d7073");
  /* 118d707a jmp 0x118d708a */
  goto L_118d708a;
L_118d707c:;
  /* 118d707c mov ebx, ecx */
  EBX = (ECX);
  /* 118d707e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118d7080 call 0x118d3ee8 */
  push32(0x118d7085u); f_118d3ee8();
  /* 118d7085 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d7088 mov ecx, ebx */
  ECX = (EBX);
L_118d708a:;
  /* 118d708a mov eax, ecx */
  EAX = (ECX);
  /* 118d708c pop ebx */
  EBX = (pop32());
  /* 118d708d pop esi */
  ESI = (pop32());
  /* 118d708e pop edi */
  EDI = (pop32());
  /* 118d708f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d7090 ret  */
  ESPCHK(0x118d6f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007091 @ 0x118d7091 (203 bytes, 78 insns) */
void f_118d7091(void) {
  FTRACE(0x118d7091u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d7091 push ebp */
  push32((uint32_t)(EBP));
  /* 118d7092 mov ebp, esp */
  EBP = (ESP);
  /* 118d7094 push ecx */
  push32((uint32_t)(ECX));
  /* 118d7095 cmp dword ptr [0x118dc328], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118dc328))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d709c push ebx */
  push32((uint32_t)(EBX));
  /* 118d709d push esi */
  push32((uint32_t)(ESI));
  /* 118d709e push edi */
  push32((uint32_t)(EDI));
  /* 118d709f jne 0x118d70be */
  if (!C.zf) goto L_118d70be;
  /* 118d70a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d70a4 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d70a7 jl 0x118d7157 */
  if ((C.sf!=C.of)) goto L_118d7157;
  /* 118d70ad cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d70b0 jg 0x118d7157 */
  if ((!C.zf&&C.sf==C.of)) goto L_118d7157;
  /* 118d70b6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d70b9 jmp 0x118d7157 */
  goto L_118d7157;
L_118d70be:;
  /* 118d70be mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d70c1 mov edi, 0x100 */
  EDI = (0x100u);
  /* 118d70c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 118d70c8 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d70ca pop esi */
  ESI = (pop32());
  /* 118d70cb jge 0x118d70f2 */
  if ((C.sf==C.of)) goto L_118d70f2;
  /* 118d70cd cmp dword ptr [0x118dbd34], esi */
  { uint32_t _a=(r32((uint32_t)(0x118dbd34))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d70d3 jle 0x118d70e0 */
  if ((C.zf||C.sf!=C.of)) goto L_118d70e0;
  /* 118d70d5 push esi */
  push32((uint32_t)(ESI));
  /* 118d70d6 push ebx */
  push32((uint32_t)(EBX));
  /* 118d70d7 call 0x118d67db */
  push32(0x118d70dcu); f_118d67db();
  /* 118d70dc pop ecx */
  ECX = (pop32());
  /* 118d70dd pop ecx */
  ECX = (pop32());
  /* 118d70de jmp 0x118d70ea */
  goto L_118d70ea;
L_118d70e0:;
  /* 118d70e0 mov eax, dword ptr [0x118d9628] */
  EAX = (r32((uint32_t)(0x118d9628)));
  /* 118d70e5 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 118d70e8 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_118d70ea:;
  /* 118d70ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d70ec jne 0x118d70f2 */
  if (!C.zf) goto L_118d70f2;
L_118d70ee:;
  /* 118d70ee mov eax, ebx */
  EAX = (EBX);
  /* 118d70f0 jmp 0x118d7157 */
  goto L_118d7157;
L_118d70f2:;
  /* 118d70f2 mov edx, dword ptr [0x118d9628] */
  EDX = (r32((uint32_t)(0x118d9628)));
  /* 118d70f8 mov eax, ebx */
  EAX = (EBX);
  /* 118d70fa sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 118d70fd movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 118d7100 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 118d7105 je 0x118d7116 */
  if (C.zf) goto L_118d7116;
  /* 118d7107 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 118d710b push 2 */
  push32((uint32_t)(0x2u));
  /* 118d710d mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 118d7110 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 118d7113 pop eax */
  EAX = (pop32());
  /* 118d7114 jmp 0x118d711f */
  goto L_118d711f;
L_118d7116:;
  /* 118d7116 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 118d711a mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 118d711d mov eax, esi */
  EAX = (ESI);
L_118d711f:;
  /* 118d711f push esi */
  push32((uint32_t)(ESI));
  /* 118d7120 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d7122 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 118d7125 push 3 */
  push32((uint32_t)(0x3u));
  /* 118d7127 push ecx */
  push32((uint32_t)(ECX));
  /* 118d7128 push eax */
  push32((uint32_t)(EAX));
  /* 118d7129 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 118d712c push eax */
  push32((uint32_t)(EAX));
  /* 118d712d push edi */
  push32((uint32_t)(EDI));
  /* 118d712e push dword ptr [0x118dc328] */
  push32((uint32_t)(r32((uint32_t)(0x118dc328))));
  /* 118d7134 call 0x118d6308 */
  push32(0x118d7139u); f_118d6308();
  /* 118d7139 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d713c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d713e je 0x118d70ee */
  if (C.zf) goto L_118d70ee;
  /* 118d7140 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d7142 jne 0x118d714a */
  if (!C.zf) goto L_118d714a;
  /* 118d7144 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 118d7148 jmp 0x118d7157 */
  goto L_118d7157;
L_118d714a:;
  /* 118d714a movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 118d714e movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 118d7152 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 118d7155 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_118d7157:;
  /* 118d7157 pop edi */
  EDI = (pop32());
  /* 118d7158 pop esi */
  ESI = (pop32());
  /* 118d7159 pop ebx */
  EBX = (pop32());
  /* 118d715a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d715b ret  */
  ESPCHK(0x118d7091u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x118d7194 (6 bytes, 1 insns) */
void f_118d7194(void) {
  FTRACE(0x118d7194u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d7194 jmp dword ptr [0x118d8028] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x118d8028)))); return;
}

