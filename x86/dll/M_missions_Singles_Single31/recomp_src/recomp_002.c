#include "recomp.h"

/* FUN_10009d06 @ 0x114c9d06 (24 bytes, 10 insns) */
void f_114c9d06(void) {
  FTRACE(0x114c9d06u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c9d06 push ebx */
  push32((uint32_t)(EBX));
  /* 114c9d07 push ecx */
  push32((uint32_t)(ECX));
  /* 114c9d08 mov ebx, 0x114fcdfc */
  EBX = (0x114fcdfcu);
  /* 114c9d0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c9d10 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 114c9d13 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 114c9d16 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 114c9d19 pop ecx */
  ECX = (pop32());
  /* 114c9d1a pop ebx */
  EBX = (pop32());
  /* 114c9d1b ret 4 */
  ESPCHK(0x114c9d06u, _esp0);
  ESP += 8; return;
}

/* FUN_10009d20 @ 0x114c9d20 (179 bytes, 53 insns) */
void f_114c9d20(void) {
  FTRACE(0x114c9d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c9d20 push ebp */
  push32((uint32_t)(EBP));
  /* 114c9d21 mov ebp, esp */
  EBP = (ESP);
  /* 114c9d23 push ecx */
  push32((uint32_t)(ECX));
  /* 114c9d24 call 0x114ceac0 */
  push32(0x114c9d29u); f_114ceac0();
  /* 114c9d29 push 2 */
  push32((uint32_t)(0x2u));
  /* 114c9d2b mov eax, dword ptr [0x11500c58] */
  EAX = (r32((uint32_t)(0x11500c58)));
  /* 114c9d30 push eax */
  push32((uint32_t)(EAX));
  /* 114c9d31 call 0x114cc7d0 */
  push32(0x114c9d36u); f_114cc7d0();
  /* 114c9d36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c9d39 mov ecx, dword ptr [0x11500c54] */
  ECX = (r32((uint32_t)(0x11500c54)));
  /* 114c9d3f sub ecx, dword ptr [0x11500c58] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11500c58))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c9d45 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c9d48 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c9d4a jae 0x114c9dad */
  if (!C.cf) goto L_114c9dad;
  /* 114c9d4c push 0x68 */
  push32((uint32_t)(0x68u));
  /* 114c9d4e push 0x114f9438 */
  push32((uint32_t)(0x114f9438u));
  /* 114c9d53 push 2 */
  push32((uint32_t)(0x2u));
  /* 114c9d55 push 2 */
  push32((uint32_t)(0x2u));
  /* 114c9d57 mov edx, dword ptr [0x11500c58] */
  EDX = (r32((uint32_t)(0x11500c58)));
  /* 114c9d5d push edx */
  push32((uint32_t)(EDX));
  /* 114c9d5e call 0x114cc7d0 */
  push32(0x114c9d63u); f_114cc7d0();
  /* 114c9d63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c9d66 add eax, 0x10 */
  { uint32_t _a=(EAX),_b=(0x10u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c9d69 push eax */
  push32((uint32_t)(EAX));
  /* 114c9d6a mov eax, dword ptr [0x11500c58] */
  EAX = (r32((uint32_t)(0x11500c58)));
  /* 114c9d6f push eax */
  push32((uint32_t)(EAX));
  /* 114c9d70 call 0x114cbd90 */
  push32(0x114c9d75u); f_114cbd90();
  /* 114c9d75 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c9d78 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114c9d7b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c9d7f jne 0x114c9d8a */
  if (!C.zf) goto L_114c9d8a;
  /* 114c9d81 call 0x114cead0 */
  push32(0x114c9d86u); f_114cead0();
  /* 114c9d86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114c9d88 jmp 0x114c9dcf */
  goto L_114c9dcf;
L_114c9d8a:;
  /* 114c9d8a mov ecx, dword ptr [0x11500c54] */
  ECX = (r32((uint32_t)(0x11500c54)));
  /* 114c9d90 sub ecx, dword ptr [0x11500c58] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11500c58))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c9d96 sar ecx, 2 */
  ECX = (sh_sar((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114c9d99 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c9d9c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 114c9d9f mov dword ptr [0x11500c54], eax */
  w32((uint32_t)(0x11500c54), (EAX));
  /* 114c9da4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c9da7 mov dword ptr [0x11500c58], ecx */
  w32((uint32_t)(0x11500c58), (ECX));
L_114c9dad:;
  /* 114c9dad mov edx, dword ptr [0x11500c54] */
  EDX = (r32((uint32_t)(0x11500c54)));
  /* 114c9db3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c9db6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 114c9db8 mov ecx, dword ptr [0x11500c54] */
  ECX = (r32((uint32_t)(0x11500c54)));
  /* 114c9dbe add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c9dc1 mov dword ptr [0x11500c54], ecx */
  w32((uint32_t)(0x11500c54), (ECX));
  /* 114c9dc7 call 0x114cead0 */
  push32(0x114c9dccu); f_114cead0();
  /* 114c9dcc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_114c9dcf:;
  /* 114c9dcf mov esp, ebp */
  ESP = (EBP);
  /* 114c9dd1 pop ebp */
  EBP = (pop32());
  /* 114c9dd2 ret  */
  ESPCHK(0x114c9d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10009de0 @ 0x114c9de0 (24 bytes, 12 insns) */
void f_114c9de0(void) {
  FTRACE(0x114c9de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c9de0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c9de1 mov ebp, esp */
  EBP = (ESP);
  /* 114c9de3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c9de6 push eax */
  push32((uint32_t)(EAX));
  /* 114c9de7 call 0x114c9d20 */
  push32(0x114c9decu); f_114c9d20();
  /* 114c9dec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c9def neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 114c9df1 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c9df3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 114c9df5 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 114c9df6 pop ebp */
  EBP = (pop32());
  /* 114c9df7 ret  */
  ESPCHK(0x114c9de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e00 @ 0x114c9e00 (77 bytes, 20 insns) */
void f_114c9e00(void) {
  FTRACE(0x114c9e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c9e00 push ebp */
  push32((uint32_t)(EBP));
  /* 114c9e01 mov ebp, esp */
  EBP = (ESP);
  /* 114c9e03 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 114c9e08 push 0x114f9438 */
  push32((uint32_t)(0x114f9438u));
  /* 114c9e0d push 2 */
  push32((uint32_t)(0x2u));
  /* 114c9e0f push 0x80 */
  push32((uint32_t)(0x80u));
  /* 114c9e14 call 0x114cb900 */
  push32(0x114c9e19u); f_114cb900();
  /* 114c9e19 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c9e1c mov dword ptr [0x11500c58], eax */
  w32((uint32_t)(0x11500c58), (EAX));
  /* 114c9e21 cmp dword ptr [0x11500c58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11500c58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c9e28 jne 0x114c9e34 */
  if (!C.zf) goto L_114c9e34;
  /* 114c9e2a push 0x18 */
  push32((uint32_t)(0x18u));
  /* 114c9e2c call 0x114ca370 */
  push32(0x114c9e31u); f_114ca370();
  /* 114c9e31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114c9e34:;
  /* 114c9e34 mov eax, dword ptr [0x11500c58] */
  EAX = (r32((uint32_t)(0x11500c58)));
  /* 114c9e39 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 114c9e3f mov ecx, dword ptr [0x11500c58] */
  ECX = (r32((uint32_t)(0x11500c58)));
  /* 114c9e45 mov dword ptr [0x11500c54], ecx */
  w32((uint32_t)(0x11500c54), (ECX));
  /* 114c9e4b pop ebp */
  EBP = (pop32());
  /* 114c9e4c ret  */
  ESPCHK(0x114c9e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e50 @ 0x114c9e50 (250 bytes, 92 insns) */
void f_114c9e50(void) {
  FTRACE(0x114c9e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c9e50 push ebp */
  push32((uint32_t)(EBP));
  /* 114c9e51 mov ebp, esp */
  EBP = (ESP);
  /* 114c9e53 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c9e56 push ebx */
  push32((uint32_t)(EBX));
  /* 114c9e57 push esi */
  push32((uint32_t)(ESI));
  /* 114c9e58 push edi */
  push32((uint32_t)(EDI));
  /* 114c9e59 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 114c9e5c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 114c9e5f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 114c9e62 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_114c9e65:;
  /* 114c9e65 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c9e69 jne 0x114c9e89 */
  if (!C.zf) goto L_114c9e89;
  /* 114c9e6b push 0x114f9460 */
  push32((uint32_t)(0x114f9460u));
  /* 114c9e70 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c9e72 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 114c9e74 push 0x114f9454 */
  push32((uint32_t)(0x114f9454u));
  /* 114c9e79 push 2 */
  push32((uint32_t)(0x2u));
  /* 114c9e7b call 0x114ca4c0 */
  push32(0x114c9e80u); f_114ca4c0();
  /* 114c9e80 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c9e83 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c9e86 jne 0x114c9e89 */
  if (!C.zf) goto L_114c9e89;
  /* 114c9e88 int3  */
  x86_unimpl("int3 @ 0x114c9e88");
L_114c9e89:;
  /* 114c9e89 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114c9e8b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114c9e8d jne 0x114c9e65 */
  if (!C.zf) goto L_114c9e65;
L_114c9e8f:;
  /* 114c9e8f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c9e93 jne 0x114c9eb3 */
  if (!C.zf) goto L_114c9eb3;
  /* 114c9e95 push 0x114f9444 */
  push32((uint32_t)(0x114f9444u));
  /* 114c9e9a push 0 */
  push32((uint32_t)(0x0u));
  /* 114c9e9c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 114c9e9e push 0x114f9454 */
  push32((uint32_t)(0x114f9454u));
  /* 114c9ea3 push 2 */
  push32((uint32_t)(0x2u));
  /* 114c9ea5 call 0x114ca4c0 */
  push32(0x114c9eaau); f_114ca4c0();
  /* 114c9eaa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c9ead cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c9eb0 jne 0x114c9eb3 */
  if (!C.zf) goto L_114c9eb3;
  /* 114c9eb2 int3  */
  x86_unimpl("int3 @ 0x114c9eb2");
L_114c9eb3:;
  /* 114c9eb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114c9eb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c9eb7 jne 0x114c9e8f */
  if (!C.zf) goto L_114c9e8f;
  /* 114c9eb9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114c9ebc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 114c9ec3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 114c9ec6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c9ec9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 114c9ecc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114c9ecf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c9ed2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 114c9ed4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 114c9ed7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 114c9ede mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114c9ee1 push ecx */
  push32((uint32_t)(ECX));
  /* 114c9ee2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114c9ee5 push edx */
  push32((uint32_t)(EDX));
  /* 114c9ee6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 114c9ee9 push eax */
  push32((uint32_t)(EAX));
  /* 114c9eea call 0x114ced90 */
  push32(0x114c9eefu); f_114ced90();
  /* 114c9eef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c9ef2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 114c9ef5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114c9ef8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114c9efb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c9efe mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 114c9f01 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 114c9f04 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114c9f07 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c9f0b jl 0x114c9f2f */
  if ((C.sf!=C.of)) goto L_114c9f2f;
  /* 114c9f0d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 114c9f10 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114c9f12 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 114c9f15 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114c9f17 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 114c9f1d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 114c9f20 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 114c9f23 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114c9f25 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c9f28 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114c9f2b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 114c9f2d jmp 0x114c9f40 */
  goto L_114c9f40;
L_114c9f2f:;
  /* 114c9f2f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 114c9f32 push edx */
  push32((uint32_t)(EDX));
  /* 114c9f33 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c9f35 call 0x114ceb10 */
  push32(0x114c9f3au); f_114ceb10();
  /* 114c9f3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c9f3d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_114c9f40:;
  /* 114c9f40 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 114c9f43 pop edi */
  EDI = (pop32());
  /* 114c9f44 pop esi */
  ESI = (pop32());
  /* 114c9f45 pop ebx */
  EBX = (pop32());
  /* 114c9f46 mov esp, ebp */
  ESP = (EBP);
  /* 114c9f48 pop ebp */
  EBP = (pop32());
  /* 114c9f49 ret  */
  ESPCHK(0x114c9e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f50 @ 0x114c9f50 (16 bytes, 7 insns) */
void f_114c9f50(void) {
  FTRACE(0x114c9f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c9f50 push ebp */
  push32((uint32_t)(EBP));
  /* 114c9f51 mov ebp, esp */
  EBP = (ESP);
  /* 114c9f53 call 0x114ce600 */
  push32(0x114c9f58u); f_114ce600();
  /* 114c9f58 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c9f5b mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 114c9f5e pop ebp */
  EBP = (pop32());
  /* 114c9f5f ret  */
  ESPCHK(0x114c9f50u, _esp0);
  ESP += 4; return;
}

/* _rand @ 0x114c9f60 (54 bytes, 18 insns) */
void f_114c9f60(void) {
  FTRACE(0x114c9f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c9f60 push ebp */
  push32((uint32_t)(EBP));
  /* 114c9f61 mov ebp, esp */
  EBP = (ESP);
  /* 114c9f63 push ecx */
  push32((uint32_t)(ECX));
  /* 114c9f64 call 0x114ce600 */
  push32(0x114c9f69u); f_114ce600();
  /* 114c9f69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114c9f6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c9f6f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 114c9f72 imul ecx, ecx, 0x343fd */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x343fdu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114c9f78 add ecx, 0x269ec3 */
  { uint32_t _a=(ECX),_b=(0x269ec3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c9f7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c9f81 mov dword ptr [edx + 0x14], ecx */
  w32((uint32_t)(EDX + 0x14), (ECX));
  /* 114c9f84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c9f87 mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 114c9f8a shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 114c9f8d and eax, 0x7fff */
  { uint32_t _r=(EAX)&(0x7fffu); EAX = (_r); fl_logic(_r,32); }
  /* 114c9f92 mov esp, ebp */
  ESP = (EBP);
  /* 114c9f94 pop ebp */
  EBP = (pop32());
  /* 114c9f95 ret  */
  ESPCHK(0x114c9f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10009fa0 @ 0x114c9fa0 (385 bytes, 103 insns) */
void f_114c9fa0(void) {
  FTRACE(0x114c9fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c9fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c9fa1 mov ebp, esp */
  EBP = (ESP);
  /* 114c9fa3 sub esp, 0xd8 */
  { uint32_t _a=(ESP),_b=(0xd8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c9fa9 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 114c9fac push eax */
  push32((uint32_t)(EAX));
  /* 114c9fad call dword ptr [0x11501408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501408))), 0x114c9fb3u);
  /* 114c9fb3 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 114c9fb6 push ecx */
  push32((uint32_t)(ECX));
  /* 114c9fb7 call dword ptr [0x11501404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501404))), 0x114c9fbdu);
  /* 114c9fbd mov edx, dword ptr [ebp - 6] */
  EDX = (r32((uint32_t)(EBP + -0x6)));
  /* 114c9fc0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114c9fc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114c9fc8 mov ax, word ptr [0x114ff11a] */
  AX = (r16((uint32_t)(0x114ff11a)));
  /* 114c9fce cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c9fd0 jne 0x114ca038 */
  if (!C.zf) goto L_114ca038;
  /* 114c9fd2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114c9fd5 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114c9fdb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114c9fdd mov dx, word ptr [0x114ff118] */
  DX = (r16((uint32_t)(0x114ff118)));
  /* 114c9fe4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c9fe6 jne 0x114ca038 */
  if (!C.zf) goto L_114ca038;
  /* 114c9fe8 mov eax, dword ptr [ebp - 0xa] */
  EAX = (r32((uint32_t)(EBP + -0xa)));
  /* 114c9feb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114c9ff0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114c9ff2 mov cx, word ptr [0x114ff116] */
  CX = (r16((uint32_t)(0x114ff116)));
  /* 114c9ff9 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c9ffb jne 0x114ca038 */
  if (!C.zf) goto L_114ca038;
  /* 114c9ffd mov edx, dword ptr [ebp - 0xe] */
  EDX = (r32((uint32_t)(EBP + -0xe)));
  /* 114ca000 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114ca006 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114ca008 mov ax, word ptr [0x114ff112] */
  AX = (r16((uint32_t)(0x114ff112)));
  /* 114ca00e cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca010 jne 0x114ca038 */
  if (!C.zf) goto L_114ca038;
  /* 114ca012 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114ca015 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114ca01b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114ca01d mov dx, word ptr [0x114ff110] */
  DX = (r16((uint32_t)(0x114ff110)));
  /* 114ca024 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca026 jne 0x114ca038 */
  if (!C.zf) goto L_114ca038;
  /* 114ca028 mov eax, dword ptr [0x114ff108] */
  EAX = (r32((uint32_t)(0x114ff108)));
  /* 114ca02d mov dword ptr [ebp - 0xd8], eax */
  w32((uint32_t)(EBP + -0xd8), (EAX));
  /* 114ca033 jmp 0x114ca0c0 */
  goto L_114ca0c0;
L_114ca038:;
  /* 114ca038 lea ecx, [ebp - 0xd0] */
  ECX = ((uint32_t)(EBP + -0xd0));
  /* 114ca03e push ecx */
  push32((uint32_t)(ECX));
  /* 114ca03f call dword ptr [0x11501400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501400))), 0x114ca045u);
  /* 114ca045 mov dword ptr [ebp - 0xd4], eax */
  w32((uint32_t)(EBP + -0xd4), (EAX));
  /* 114ca04b cmp dword ptr [ebp - 0xd4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xd4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca052 je 0x114ca088 */
  if (C.zf) goto L_114ca088;
  /* 114ca054 cmp dword ptr [ebp - 0xd4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xd4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca05b jne 0x114ca07c */
  if (!C.zf) goto L_114ca07c;
  /* 114ca05d mov edx, dword ptr [ebp - 0x36] */
  EDX = (r32((uint32_t)(EBP + -0x36)));
  /* 114ca060 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114ca066 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114ca068 je 0x114ca07c */
  if (C.zf) goto L_114ca07c;
  /* 114ca06a cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca06e je 0x114ca07c */
  if (C.zf) goto L_114ca07c;
  /* 114ca070 mov dword ptr [ebp - 0xd8], 1 */
  w32((uint32_t)(EBP + -0xd8), (0x1u));
  /* 114ca07a jmp 0x114ca086 */
  goto L_114ca086;
L_114ca07c:;
  /* 114ca07c mov dword ptr [ebp - 0xd8], 0 */
  w32((uint32_t)(EBP + -0xd8), (0x0u));
L_114ca086:;
  /* 114ca086 jmp 0x114ca092 */
  goto L_114ca092;
L_114ca088:;
  /* 114ca088 mov dword ptr [ebp - 0xd8], 0xffffffff */
  w32((uint32_t)(EBP + -0xd8), (0xffffffffu));
L_114ca092:;
  /* 114ca092 mov eax, dword ptr [ebp - 0xd8] */
  EAX = (r32((uint32_t)(EBP + -0xd8)));
  /* 114ca098 mov dword ptr [0x114ff108], eax */
  w32((uint32_t)(0x114ff108), (EAX));
  /* 114ca09d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114ca0a0 mov dword ptr [0x114ff110], ecx */
  w32((uint32_t)(0x114ff110), (ECX));
  /* 114ca0a6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114ca0a9 mov dword ptr [0x114ff114], edx */
  w32((uint32_t)(0x114ff114), (EDX));
  /* 114ca0af mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114ca0b2 mov dword ptr [0x114ff118], eax */
  w32((uint32_t)(0x114ff118), (EAX));
  /* 114ca0b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114ca0ba mov dword ptr [0x114ff11c], ecx */
  w32((uint32_t)(0x114ff11c), (ECX));
L_114ca0c0:;
  /* 114ca0c0 mov edx, dword ptr [ebp - 0xd8] */
  EDX = (r32((uint32_t)(EBP + -0xd8)));
  /* 114ca0c6 push edx */
  push32((uint32_t)(EDX));
  /* 114ca0c7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114ca0ca and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114ca0cf push eax */
  push32((uint32_t)(EAX));
  /* 114ca0d0 mov ecx, dword ptr [ebp - 0x1a] */
  ECX = (r32((uint32_t)(EBP + -0x1a)));
  /* 114ca0d3 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114ca0d9 push ecx */
  push32((uint32_t)(ECX));
  /* 114ca0da mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114ca0dd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114ca0e3 push edx */
  push32((uint32_t)(EDX));
  /* 114ca0e4 mov eax, dword ptr [ebp - 0x1e] */
  EAX = (r32((uint32_t)(EBP + -0x1e)));
  /* 114ca0e7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114ca0ec push eax */
  push32((uint32_t)(EAX));
  /* 114ca0ed mov ecx, dword ptr [ebp - 0x22] */
  ECX = (r32((uint32_t)(EBP + -0x22)));
  /* 114ca0f0 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114ca0f6 push ecx */
  push32((uint32_t)(ECX));
  /* 114ca0f7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 114ca0fa and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114ca100 push edx */
  push32((uint32_t)(EDX));
  /* 114ca101 call 0x114cfc30 */
  push32(0x114ca106u); f_114cfc30();
  /* 114ca106 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ca109 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 114ca10c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca110 je 0x114ca11a */
  if (C.zf) goto L_114ca11a;
  /* 114ca112 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ca115 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114ca118 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_114ca11a:;
  /* 114ca11a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114ca11d mov esp, ebp */
  ESP = (EBP);
  /* 114ca11f pop ebp */
  EBP = (pop32());
  /* 114ca120 ret  */
  ESPCHK(0x114c9fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a130 @ 0x114ca130 (313 bytes, 78 insns) */
void f_114ca130(void) {
  FTRACE(0x114ca130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ca130 push ebp */
  push32((uint32_t)(EBP));
  /* 114ca131 mov ebp, esp */
  EBP = (ESP);
  /* 114ca133 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca137 jne 0x114ca1f7 */
  if (!C.zf) goto L_114ca1f7;
  /* 114ca13d call dword ptr [0x11501410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501410))), 0x114ca143u);
  /* 114ca143 mov dword ptr [0x114ff1b0], eax */
  w32((uint32_t)(0x114ff1b0), (EAX));
  /* 114ca148 push 1 */
  push32((uint32_t)(0x1u));
  /* 114ca14a call 0x114d0970 */
  push32(0x114ca14fu); f_114d0970();
  /* 114ca14f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ca152 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ca154 jne 0x114ca15d */
  if (!C.zf) goto L_114ca15d;
  /* 114ca156 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114ca158 jmp 0x114ca265 */
  goto L_114ca265;
L_114ca15d:;
  /* 114ca15d mov eax, dword ptr [0x114ff1b0] */
  EAX = (r32((uint32_t)(0x114ff1b0)));
  /* 114ca162 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 114ca165 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114ca16a mov dword ptr [0x114ff1bc], eax */
  w32((uint32_t)(0x114ff1bc), (EAX));
  /* 114ca16f mov ecx, dword ptr [0x114ff1b0] */
  ECX = (r32((uint32_t)(0x114ff1b0)));
  /* 114ca175 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 114ca17b mov dword ptr [0x114ff1b8], ecx */
  w32((uint32_t)(0x114ff1b8), (ECX));
  /* 114ca181 mov edx, dword ptr [0x114ff1b8] */
  EDX = (r32((uint32_t)(0x114ff1b8)));
  /* 114ca187 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 114ca18a add edx, dword ptr [0x114ff1bc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x114ff1bc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114ca190 mov dword ptr [0x114ff1b4], edx */
  w32((uint32_t)(0x114ff1b4), (EDX));
  /* 114ca196 mov eax, dword ptr [0x114ff1b0] */
  EAX = (r32((uint32_t)(0x114ff1b0)));
  /* 114ca19b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 114ca19e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114ca1a3 mov dword ptr [0x114ff1b0], eax */
  w32((uint32_t)(0x114ff1b0), (EAX));
  /* 114ca1a8 call 0x114ce520 */
  push32(0x114ca1adu); f_114ce520();
  /* 114ca1ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ca1af jne 0x114ca1bd */
  if (!C.zf) goto L_114ca1bd;
  /* 114ca1b1 call 0x114d09c0 */
  push32(0x114ca1b6u); f_114d09c0();
  /* 114ca1b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114ca1b8 jmp 0x114ca265 */
  goto L_114ca265;
L_114ca1bd:;
  /* 114ca1bd call dword ptr [0x1150140c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150140c))), 0x114ca1c3u);
  /* 114ca1c3 mov dword ptr [0x11500c74], eax */
  w32((uint32_t)(0x11500c74), (EAX));
  /* 114ca1c8 call 0x114d0750 */
  push32(0x114ca1cdu); f_114d0750();
  /* 114ca1cd mov dword ptr [0x114ff124], eax */
  w32((uint32_t)(0x114ff124), (EAX));
  /* 114ca1d2 call 0x114cfd20 */
  push32(0x114ca1d7u); f_114cfd20();
  /* 114ca1d7 call 0x114d0240 */
  push32(0x114ca1dcu); f_114d0240();
  /* 114ca1dc call 0x114d00f0 */
  push32(0x114ca1e1u); f_114d00f0();
  /* 114ca1e1 call 0x114ce910 */
  push32(0x114ca1e6u); f_114ce910();
  /* 114ca1e6 mov ecx, dword ptr [0x114ff120] */
  ECX = (r32((uint32_t)(0x114ff120)));
  /* 114ca1ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114ca1ef mov dword ptr [0x114ff120], ecx */
  w32((uint32_t)(0x114ff120), (ECX));
  /* 114ca1f5 jmp 0x114ca260 */
  goto L_114ca260;
L_114ca1f7:;
  /* 114ca1f7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca1fb jne 0x114ca250 */
  if (!C.zf) goto L_114ca250;
  /* 114ca1fd cmp dword ptr [0x114ff120], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff120))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca204 jle 0x114ca24a */
  if ((C.zf||C.sf!=C.of)) goto L_114ca24a;
  /* 114ca206 mov edx, dword ptr [0x114ff120] */
  EDX = (r32((uint32_t)(0x114ff120)));
  /* 114ca20c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114ca20f mov dword ptr [0x114ff120], edx */
  w32((uint32_t)(0x114ff120), (EDX));
  /* 114ca215 cmp dword ptr [0x114ff1e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff1e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca21c jne 0x114ca223 */
  if (!C.zf) goto L_114ca223;
  /* 114ca21e call 0x114ce990 */
  push32(0x114ca223u); f_114ce990();
L_114ca223:;
  /* 114ca223 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 114ca225 call 0x114cce10 */
  push32(0x114ca22au); f_114cce10();
  /* 114ca22a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ca22d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 114ca230 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ca232 je 0x114ca239 */
  if (C.zf) goto L_114ca239;
  /* 114ca234 call 0x114cd720 */
  push32(0x114ca239u); f_114cd720();
L_114ca239:;
  /* 114ca239 call 0x114d0050 */
  push32(0x114ca23eu); f_114d0050();
  /* 114ca23e call 0x114ce5b0 */
  push32(0x114ca243u); f_114ce5b0();
  /* 114ca243 call 0x114d09c0 */
  push32(0x114ca248u); f_114d09c0();
  /* 114ca248 jmp 0x114ca24e */
  goto L_114ca24e;
L_114ca24a:;
  /* 114ca24a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114ca24c jmp 0x114ca265 */
  goto L_114ca265;
L_114ca24e:;
  /* 114ca24e jmp 0x114ca260 */
  goto L_114ca260;
L_114ca250:;
  /* 114ca250 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca254 jne 0x114ca260 */
  if (!C.zf) goto L_114ca260;
  /* 114ca256 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ca258 call 0x114ce6a0 */
  push32(0x114ca25du); f_114ce6a0();
  /* 114ca25d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114ca260:;
  /* 114ca260 mov eax, 1 */
  EAX = (0x1u);
L_114ca265:;
  /* 114ca265 pop ebp */
  EBP = (pop32());
  /* 114ca266 ret 0xc */
  ESPCHK(0x114ca130u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x114ca270 (243 bytes, 86 insns) */
void f_114ca270(void) {
  FTRACE(0x114ca270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ca270 push ebp */
  push32((uint32_t)(EBP));
  /* 114ca271 mov ebp, esp */
  EBP = (ESP);
  /* 114ca273 push ecx */
  push32((uint32_t)(ECX));
  /* 114ca274 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 114ca27b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca27f jne 0x114ca291 */
  if (!C.zf) goto L_114ca291;
  /* 114ca281 cmp dword ptr [0x114ff120], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff120))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca288 jne 0x114ca291 */
  if (!C.zf) goto L_114ca291;
  /* 114ca28a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114ca28c jmp 0x114ca35d */
  goto L_114ca35d;
L_114ca291:;
  /* 114ca291 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca295 je 0x114ca29d */
  if (C.zf) goto L_114ca29d;
  /* 114ca297 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca29b jne 0x114ca2df */
  if (!C.zf) goto L_114ca2df;
L_114ca29d:;
  /* 114ca29d cmp dword ptr [0x11500c84], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11500c84))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca2a4 je 0x114ca2bb */
  if (C.zf) goto L_114ca2bb;
  /* 114ca2a6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114ca2a9 push eax */
  push32((uint32_t)(EAX));
  /* 114ca2aa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114ca2ad push ecx */
  push32((uint32_t)(ECX));
  /* 114ca2ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ca2b1 push edx */
  push32((uint32_t)(EDX));
  /* 114ca2b2 call dword ptr [0x11500c84] */
  call_ind((uint32_t)(r32((uint32_t)(0x11500c84))), 0x114ca2b8u);
  /* 114ca2b8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114ca2bb:;
  /* 114ca2bb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca2bf je 0x114ca2d5 */
  if (C.zf) goto L_114ca2d5;
  /* 114ca2c1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114ca2c4 push eax */
  push32((uint32_t)(EAX));
  /* 114ca2c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114ca2c8 push ecx */
  push32((uint32_t)(ECX));
  /* 114ca2c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ca2cc push edx */
  push32((uint32_t)(EDX));
  /* 114ca2cd call 0x114ca130 */
  push32(0x114ca2d2u); f_114ca130();
  /* 114ca2d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114ca2d5:;
  /* 114ca2d5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca2d9 jne 0x114ca2df */
  if (!C.zf) goto L_114ca2df;
  /* 114ca2db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114ca2dd jmp 0x114ca35d */
  goto L_114ca35d;
L_114ca2df:;
  /* 114ca2df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114ca2e2 push eax */
  push32((uint32_t)(EAX));
  /* 114ca2e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114ca2e6 push ecx */
  push32((uint32_t)(ECX));
  /* 114ca2e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ca2ea push edx */
  push32((uint32_t)(EDX));
  /* 114ca2eb call 0x114c1064 */
  push32(0x114ca2f0u); f_114c1064();
  /* 114ca2f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114ca2f3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca2f7 jne 0x114ca30e */
  if (!C.zf) goto L_114ca30e;
  /* 114ca2f9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca2fd jne 0x114ca30e */
  if (!C.zf) goto L_114ca30e;
  /* 114ca2ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114ca302 push eax */
  push32((uint32_t)(EAX));
  /* 114ca303 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ca305 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ca308 push ecx */
  push32((uint32_t)(ECX));
  /* 114ca309 call 0x114ca130 */
  push32(0x114ca30eu); f_114ca130();
L_114ca30e:;
  /* 114ca30e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca312 je 0x114ca31a */
  if (C.zf) goto L_114ca31a;
  /* 114ca314 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca318 jne 0x114ca35a */
  if (!C.zf) goto L_114ca35a;
L_114ca31a:;
  /* 114ca31a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114ca31d push edx */
  push32((uint32_t)(EDX));
  /* 114ca31e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114ca321 push eax */
  push32((uint32_t)(EAX));
  /* 114ca322 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ca325 push ecx */
  push32((uint32_t)(ECX));
  /* 114ca326 call 0x114ca130 */
  push32(0x114ca32bu); f_114ca130();
  /* 114ca32b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ca32d jne 0x114ca336 */
  if (!C.zf) goto L_114ca336;
  /* 114ca32f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_114ca336:;
  /* 114ca336 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca33a je 0x114ca35a */
  if (C.zf) goto L_114ca35a;
  /* 114ca33c cmp dword ptr [0x11500c84], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11500c84))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca343 je 0x114ca35a */
  if (C.zf) goto L_114ca35a;
  /* 114ca345 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114ca348 push edx */
  push32((uint32_t)(EDX));
  /* 114ca349 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114ca34c push eax */
  push32((uint32_t)(EAX));
  /* 114ca34d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ca350 push ecx */
  push32((uint32_t)(ECX));
  /* 114ca351 call dword ptr [0x11500c84] */
  call_ind((uint32_t)(r32((uint32_t)(0x11500c84))), 0x114ca357u);
  /* 114ca357 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114ca35a:;
  /* 114ca35a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_114ca35d:;
  /* 114ca35d mov esp, ebp */
  ESP = (EBP);
  /* 114ca35f pop ebp */
  EBP = (pop32());
  /* 114ca360 ret 0xc */
  ESPCHK(0x114ca270u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x114ca370 (58 bytes, 18 insns) */
void f_114ca370(void) {
  FTRACE(0x114ca370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ca370 push ebp */
  push32((uint32_t)(EBP));
  /* 114ca371 mov ebp, esp */
  EBP = (ESP);
  /* 114ca373 cmp dword ptr [0x114ff12c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114ff12c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca37a je 0x114ca38e */
  if (C.zf) goto L_114ca38e;
  /* 114ca37c cmp dword ptr [0x114ff12c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff12c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca383 jne 0x114ca393 */
  if (!C.zf) goto L_114ca393;
  /* 114ca385 cmp dword ptr [0x114ff130], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114ff130))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca38c jne 0x114ca393 */
  if (!C.zf) goto L_114ca393;
L_114ca38e:;
  /* 114ca38e call 0x114d0a60 */
  push32(0x114ca393u); f_114d0a60();
L_114ca393:;
  /* 114ca393 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ca396 push eax */
  push32((uint32_t)(EAX));
  /* 114ca397 call 0x114d0ab0 */
  push32(0x114ca39cu); f_114d0ab0();
  /* 114ca39c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ca39f push 0xff */
  push32((uint32_t)(0xffu));
  /* 114ca3a4 call dword ptr [0x114fce0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x114fce0c))), 0x114ca3aau);
  /* 114ca3aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ca3ad pop ebp */
  EBP = (pop32());
  /* 114ca3ae ret  */
  ESPCHK(0x114ca370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3b0 @ 0x114ca3b0 (11 bytes, 5 insns) */
void f_114ca3b0(void) {
  FTRACE(0x114ca3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ca3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 114ca3b1 mov ebp, esp */
  EBP = (ESP);
  /* 114ca3b3 call dword ptr [0x11501414] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501414))), 0x114ca3b9u);
  /* 114ca3b9 pop ebp */
  EBP = (pop32());
  /* 114ca3ba ret  */
  ESPCHK(0x114ca3b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3c0 @ 0x114ca3c0 (87 bytes, 30 insns) */
void f_114ca3c0(void) {
  FTRACE(0x114ca3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ca3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 114ca3c1 mov ebp, esp */
  EBP = (ESP);
  /* 114ca3c3 push ecx */
  push32((uint32_t)(ECX));
  /* 114ca3c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca3c8 jl 0x114ca3d0 */
  if ((C.sf!=C.of)) goto L_114ca3d0;
  /* 114ca3ca cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca3ce jl 0x114ca3d5 */
  if ((C.sf!=C.of)) goto L_114ca3d5;
L_114ca3d0:;
  /* 114ca3d0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114ca3d3 jmp 0x114ca413 */
  goto L_114ca413;
L_114ca3d5:;
  /* 114ca3d5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca3d9 jne 0x114ca3e7 */
  if (!C.zf) goto L_114ca3e7;
  /* 114ca3db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ca3de mov eax, dword ptr [eax*4 + 0x114fce14] */
  EAX = (r32((uint32_t)(EAX*4 + 0x114fce14)));
  /* 114ca3e5 jmp 0x114ca413 */
  goto L_114ca413;
L_114ca3e7:;
  /* 114ca3e7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114ca3ea and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 114ca3ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114ca3ef je 0x114ca3f6 */
  if (C.zf) goto L_114ca3f6;
  /* 114ca3f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114ca3f4 jmp 0x114ca413 */
  goto L_114ca413;
L_114ca3f6:;
  /* 114ca3f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ca3f9 mov eax, dword ptr [edx*4 + 0x114fce14] */
  EAX = (r32((uint32_t)(EDX*4 + 0x114fce14)));
  /* 114ca400 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114ca403 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ca406 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114ca409 mov dword ptr [ecx*4 + 0x114fce14], edx */
  w32((uint32_t)(ECX*4 + 0x114fce14), (EDX));
  /* 114ca410 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_114ca413:;
  /* 114ca413 mov esp, ebp */
  ESP = (EBP);
  /* 114ca415 pop ebp */
  EBP = (pop32());
  /* 114ca416 ret  */
  ESPCHK(0x114ca3c0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x114ca420 (126 bytes, 38 insns) */
void f_114ca420(void) {
  FTRACE(0x114ca420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ca420 push ebp */
  push32((uint32_t)(EBP));
  /* 114ca421 mov ebp, esp */
  EBP = (ESP);
  /* 114ca423 push ecx */
  push32((uint32_t)(ECX));
  /* 114ca424 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca428 jl 0x114ca430 */
  if ((C.sf!=C.of)) goto L_114ca430;
  /* 114ca42a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca42e jl 0x114ca437 */
  if ((C.sf!=C.of)) goto L_114ca437;
L_114ca430:;
  /* 114ca430 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 114ca435 jmp 0x114ca49a */
  goto L_114ca49a;
L_114ca437:;
  /* 114ca437 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca43b jne 0x114ca449 */
  if (!C.zf) goto L_114ca449;
  /* 114ca43d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ca440 mov eax, dword ptr [eax*4 + 0x114fce20] */
  EAX = (r32((uint32_t)(EAX*4 + 0x114fce20)));
  /* 114ca447 jmp 0x114ca49a */
  goto L_114ca49a;
L_114ca449:;
  /* 114ca449 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ca44c mov edx, dword ptr [ecx*4 + 0x114fce20] */
  EDX = (r32((uint32_t)(ECX*4 + 0x114fce20)));
  /* 114ca453 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114ca456 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca45a jne 0x114ca470 */
  if (!C.zf) goto L_114ca470;
  /* 114ca45c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 114ca45e call dword ptr [0x11501418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501418))), 0x114ca464u);
  /* 114ca464 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ca467 mov dword ptr [ecx*4 + 0x114fce20], eax */
  w32((uint32_t)(ECX*4 + 0x114fce20), (EAX));
  /* 114ca46e jmp 0x114ca497 */
  goto L_114ca497;
L_114ca470:;
  /* 114ca470 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca474 jne 0x114ca48a */
  if (!C.zf) goto L_114ca48a;
  /* 114ca476 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 114ca478 call dword ptr [0x11501418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501418))), 0x114ca47eu);
  /* 114ca47e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ca481 mov dword ptr [edx*4 + 0x114fce20], eax */
  w32((uint32_t)(EDX*4 + 0x114fce20), (EAX));
  /* 114ca488 jmp 0x114ca497 */
  goto L_114ca497;
L_114ca48a:;
  /* 114ca48a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ca48d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114ca490 mov dword ptr [eax*4 + 0x114fce20], ecx */
  w32((uint32_t)(EAX*4 + 0x114fce20), (ECX));
L_114ca497:;
  /* 114ca497 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_114ca49a:;
  /* 114ca49a mov esp, ebp */
  ESP = (EBP);
  /* 114ca49c pop ebp */
  EBP = (pop32());
  /* 114ca49d ret  */
  ESPCHK(0x114ca420u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a4a0 @ 0x114ca4a0 (28 bytes, 11 insns) */
void f_114ca4a0(void) {
  FTRACE(0x114ca4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ca4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 114ca4a1 mov ebp, esp */
  EBP = (ESP);
  /* 114ca4a3 push ecx */
  push32((uint32_t)(ECX));
  /* 114ca4a4 mov eax, dword ptr [0x11500c68] */
  EAX = (r32((uint32_t)(0x11500c68)));
  /* 114ca4a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114ca4ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ca4af mov dword ptr [0x11500c68], ecx */
  w32((uint32_t)(0x11500c68), (ECX));
  /* 114ca4b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114ca4b8 mov esp, ebp */
  ESP = (EBP);
  /* 114ca4ba pop ebp */
  EBP = (pop32());
  /* 114ca4bb ret  */
  ESPCHK(0x114ca4a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a4c0 @ 0x114ca4c0 (912 bytes, 248 insns) */
void f_114ca4c0(void) {
  FTRACE(0x114ca4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ca4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 114ca4c1 mov ebp, esp */
  EBP = (ESP);
  /* 114ca4c3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 114ca4c8 call 0x114d1320 */
  push32(0x114ca4cdu); f_114d1320();
  /* 114ca4cd push edi */
  push32((uint32_t)(EDI));
  /* 114ca4ce mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 114ca4d5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 114ca4da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114ca4dc lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 114ca4e2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114ca4e4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 114ca4e6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 114ca4e7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 114ca4ee mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 114ca4f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114ca4f5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 114ca4fb rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114ca4fd stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 114ca4ff stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 114ca500 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 114ca507 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 114ca50c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114ca50e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 114ca514 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114ca516 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 114ca518 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 114ca519 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 114ca51c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 114ca522 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca526 jl 0x114ca52e */
  if ((C.sf!=C.of)) goto L_114ca52e;
  /* 114ca528 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca52c jl 0x114ca536 */
  if ((C.sf!=C.of)) goto L_114ca536;
L_114ca52e:;
  /* 114ca52e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114ca531 jmp 0x114ca84b */
  goto L_114ca84b;
L_114ca536:;
  /* 114ca536 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca53a jne 0x114ca5e0 */
  if (!C.zf) goto L_114ca5e0;
  /* 114ca540 push 0x114fce10 */
  push32((uint32_t)(0x114fce10u));
  /* 114ca545 call dword ptr [0x11501430] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501430))), 0x114ca54bu);
  /* 114ca54b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ca54d jle 0x114ca5e0 */
  if ((C.zf||C.sf!=C.of)) goto L_114ca5e0;
  /* 114ca553 cmp dword ptr [0x114ff134], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff134))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca55a jne 0x114ca59e */
  if (!C.zf) goto L_114ca59e;
  /* 114ca55c push 0x114f953c */
  push32((uint32_t)(0x114f953cu));
  /* 114ca561 call dword ptr [0x1150142c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150142c))), 0x114ca567u);
  /* 114ca567 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 114ca56d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca574 je 0x114ca596 */
  if (C.zf) goto L_114ca596;
  /* 114ca576 push 0x114f9530 */
  push32((uint32_t)(0x114f9530u));
  /* 114ca57b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 114ca581 push ecx */
  push32((uint32_t)(ECX));
  /* 114ca582 call dword ptr [0x1150131c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150131c))), 0x114ca588u);
  /* 114ca588 mov dword ptr [0x114ff134], eax */
  w32((uint32_t)(0x114ff134), (EAX));
  /* 114ca58d cmp dword ptr [0x114ff134], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff134))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca594 jne 0x114ca59e */
  if (!C.zf) goto L_114ca59e;
L_114ca596:;
  /* 114ca596 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114ca599 jmp 0x114ca84b */
  goto L_114ca84b;
L_114ca59e:;
  /* 114ca59e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114ca5a1 push edx */
  push32((uint32_t)(EDX));
  /* 114ca5a2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114ca5a5 push eax */
  push32((uint32_t)(EAX));
  /* 114ca5a6 push 0x114f94fc */
  push32((uint32_t)(0x114f94fcu));
  /* 114ca5ab lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 114ca5b1 push ecx */
  push32((uint32_t)(ECX));
  /* 114ca5b2 call dword ptr [0x114ff134] */
  call_ind((uint32_t)(r32((uint32_t)(0x114ff134))), 0x114ca5b8u);
  /* 114ca5b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ca5bb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 114ca5c1 push edx */
  push32((uint32_t)(EDX));
  /* 114ca5c2 call dword ptr [0x11501318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501318))), 0x114ca5c8u);
  /* 114ca5c8 push 0x114fce10 */
  push32((uint32_t)(0x114fce10u));
  /* 114ca5cd call dword ptr [0x11501420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501420))), 0x114ca5d3u);
  /* 114ca5d3 call 0x114ca3b0 */
  push32(0x114ca5d8u); f_114ca3b0();
  /* 114ca5d8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114ca5db jmp 0x114ca84b */
  goto L_114ca84b;
L_114ca5e0:;
  /* 114ca5e0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca5e4 je 0x114ca61d */
  if (C.zf) goto L_114ca61d;
  /* 114ca5e6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 114ca5ec push eax */
  push32((uint32_t)(EAX));
  /* 114ca5ed mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114ca5f0 push ecx */
  push32((uint32_t)(ECX));
  /* 114ca5f1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 114ca5f6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 114ca5fc push edx */
  push32((uint32_t)(EDX));
  /* 114ca5fd call 0x114d1220 */
  push32(0x114ca602u); f_114d1220();
  /* 114ca602 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ca605 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ca607 jge 0x114ca61d */
  if ((C.sf==C.of)) goto L_114ca61d;
  /* 114ca609 push 0x114f94d0 */
  push32((uint32_t)(0x114f94d0u));
  /* 114ca60e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 114ca614 push eax */
  push32((uint32_t)(EAX));
  /* 114ca615 call 0x114d1130 */
  push32(0x114ca61au); f_114d1130();
  /* 114ca61a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114ca61d:;
  /* 114ca61d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca621 jne 0x114ca655 */
  if (!C.zf) goto L_114ca655;
  /* 114ca623 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca627 je 0x114ca635 */
  if (C.zf) goto L_114ca635;
  /* 114ca629 mov dword ptr [ebp - 0x3028], 0x114f94bc */
  w32((uint32_t)(EBP + -0x3028), (0x114f94bcu));
  /* 114ca633 jmp 0x114ca63f */
  goto L_114ca63f;
L_114ca635:;
  /* 114ca635 mov dword ptr [ebp - 0x3028], 0x114f94a8 */
  w32((uint32_t)(EBP + -0x3028), (0x114f94a8u));
L_114ca63f:;
  /* 114ca63f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 114ca645 push ecx */
  push32((uint32_t)(ECX));
  /* 114ca646 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 114ca64c push edx */
  push32((uint32_t)(EDX));
  /* 114ca64d call 0x114d1130 */
  push32(0x114ca652u); f_114d1130();
  /* 114ca652 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114ca655:;
  /* 114ca655 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 114ca65b push eax */
  push32((uint32_t)(EAX));
  /* 114ca65c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 114ca662 push ecx */
  push32((uint32_t)(ECX));
  /* 114ca663 call 0x114d1140 */
  push32(0x114ca668u); f_114d1140();
  /* 114ca668 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ca66b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca66f jne 0x114ca6aa */
  if (!C.zf) goto L_114ca6aa;
  /* 114ca671 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ca674 mov eax, dword ptr [edx*4 + 0x114fce14] */
  EAX = (r32((uint32_t)(EDX*4 + 0x114fce14)));
  /* 114ca67b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 114ca67e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ca680 je 0x114ca696 */
  if (C.zf) goto L_114ca696;
  /* 114ca682 push 0x114f94a4 */
  push32((uint32_t)(0x114f94a4u));
  /* 114ca687 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 114ca68d push ecx */
  push32((uint32_t)(ECX));
  /* 114ca68e call 0x114d1140 */
  push32(0x114ca693u); f_114d1140();
  /* 114ca693 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114ca696:;
  /* 114ca696 push 0x114f94a0 */
  push32((uint32_t)(0x114f94a0u));
  /* 114ca69b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 114ca6a1 push edx */
  push32((uint32_t)(EDX));
  /* 114ca6a2 call 0x114d1140 */
  push32(0x114ca6a7u); f_114d1140();
  /* 114ca6a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114ca6aa:;
  /* 114ca6aa cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca6ae je 0x114ca6f2 */
  if (C.zf) goto L_114ca6f2;
  /* 114ca6b0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 114ca6b6 push eax */
  push32((uint32_t)(EAX));
  /* 114ca6b7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114ca6ba push ecx */
  push32((uint32_t)(ECX));
  /* 114ca6bb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114ca6be push edx */
  push32((uint32_t)(EDX));
  /* 114ca6bf push 0x114f9494 */
  push32((uint32_t)(0x114f9494u));
  /* 114ca6c4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 114ca6c9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 114ca6cf push eax */
  push32((uint32_t)(EAX));
  /* 114ca6d0 call 0x114d1030 */
  push32(0x114ca6d5u); f_114d1030();
  /* 114ca6d5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ca6d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ca6da jge 0x114ca6f0 */
  if ((C.sf==C.of)) goto L_114ca6f0;
  /* 114ca6dc push 0x114f94d0 */
  push32((uint32_t)(0x114f94d0u));
  /* 114ca6e1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 114ca6e7 push ecx */
  push32((uint32_t)(ECX));
  /* 114ca6e8 call 0x114d1130 */
  push32(0x114ca6edu); f_114d1130();
  /* 114ca6ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114ca6f0:;
  /* 114ca6f0 jmp 0x114ca708 */
  goto L_114ca708;
L_114ca6f2:;
  /* 114ca6f2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 114ca6f8 push edx */
  push32((uint32_t)(EDX));
  /* 114ca6f9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 114ca6ff push eax */
  push32((uint32_t)(EAX));
  /* 114ca700 call 0x114d1130 */
  push32(0x114ca705u); f_114d1130();
  /* 114ca705 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114ca708:;
  /* 114ca708 cmp dword ptr [0x11500c68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11500c68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca70f je 0x114ca74c */
  if (C.zf) goto L_114ca74c;
  /* 114ca711 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 114ca717 push ecx */
  push32((uint32_t)(ECX));
  /* 114ca718 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 114ca71e push edx */
  push32((uint32_t)(EDX));
  /* 114ca71f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ca722 push eax */
  push32((uint32_t)(EAX));
  /* 114ca723 call dword ptr [0x11500c68] */
  call_ind((uint32_t)(r32((uint32_t)(0x11500c68))), 0x114ca729u);
  /* 114ca729 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ca72c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ca72e je 0x114ca74c */
  if (C.zf) goto L_114ca74c;
  /* 114ca730 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca734 jne 0x114ca741 */
  if (!C.zf) goto L_114ca741;
  /* 114ca736 push 0x114fce10 */
  push32((uint32_t)(0x114fce10u));
  /* 114ca73b call dword ptr [0x11501420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501420))), 0x114ca741u);
L_114ca741:;
  /* 114ca741 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 114ca747 jmp 0x114ca84b */
  goto L_114ca84b;
L_114ca74c:;
  /* 114ca74c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ca74f mov edx, dword ptr [ecx*4 + 0x114fce14] */
  EDX = (r32((uint32_t)(ECX*4 + 0x114fce14)));
  /* 114ca756 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 114ca759 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114ca75b je 0x114ca79b */
  if (C.zf) goto L_114ca79b;
  /* 114ca75d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ca760 cmp dword ptr [eax*4 + 0x114fce20], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x114fce20))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca768 je 0x114ca79b */
  if (C.zf) goto L_114ca79b;
  /* 114ca76a push 0 */
  push32((uint32_t)(0x0u));
  /* 114ca76c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 114ca772 push ecx */
  push32((uint32_t)(ECX));
  /* 114ca773 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 114ca779 push edx */
  push32((uint32_t)(EDX));
  /* 114ca77a call 0x114d0fb0 */
  push32(0x114ca77fu); f_114d0fb0();
  /* 114ca77f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ca782 push eax */
  push32((uint32_t)(EAX));
  /* 114ca783 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 114ca789 push eax */
  push32((uint32_t)(EAX));
  /* 114ca78a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ca78d mov edx, dword ptr [ecx*4 + 0x114fce20] */
  EDX = (r32((uint32_t)(ECX*4 + 0x114fce20)));
  /* 114ca794 push edx */
  push32((uint32_t)(EDX));
  /* 114ca795 call dword ptr [0x1150141c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150141c))), 0x114ca79bu);
L_114ca79b:;
  /* 114ca79b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ca79e mov ecx, dword ptr [eax*4 + 0x114fce14] */
  ECX = (r32((uint32_t)(EAX*4 + 0x114fce14)));
  /* 114ca7a5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 114ca7a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114ca7aa je 0x114ca7b9 */
  if (C.zf) goto L_114ca7b9;
  /* 114ca7ac lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 114ca7b2 push edx */
  push32((uint32_t)(EDX));
  /* 114ca7b3 call dword ptr [0x11501318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501318))), 0x114ca7b9u);
L_114ca7b9:;
  /* 114ca7b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ca7bc mov ecx, dword ptr [eax*4 + 0x114fce14] */
  ECX = (r32((uint32_t)(EAX*4 + 0x114fce14)));
  /* 114ca7c3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 114ca7c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114ca7c8 je 0x114ca838 */
  if (C.zf) goto L_114ca838;
  /* 114ca7ca cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca7ce je 0x114ca7ed */
  if (C.zf) goto L_114ca7ed;
  /* 114ca7d0 push 0xa */
  push32((uint32_t)(0xau));
  /* 114ca7d2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 114ca7d8 push edx */
  push32((uint32_t)(EDX));
  /* 114ca7d9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114ca7dc push eax */
  push32((uint32_t)(EAX));
  /* 114ca7dd call 0x114d0cc0 */
  push32(0x114ca7e2u); f_114d0cc0();
  /* 114ca7e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ca7e5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 114ca7eb jmp 0x114ca7f7 */
  goto L_114ca7f7;
L_114ca7ed:;
  /* 114ca7ed mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_114ca7f7:;
  /* 114ca7f7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 114ca7fd push ecx */
  push32((uint32_t)(ECX));
  /* 114ca7fe mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114ca801 push edx */
  push32((uint32_t)(EDX));
  /* 114ca802 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 114ca808 push eax */
  push32((uint32_t)(EAX));
  /* 114ca809 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114ca80c push ecx */
  push32((uint32_t)(ECX));
  /* 114ca80d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ca810 push edx */
  push32((uint32_t)(EDX));
  /* 114ca811 call 0x114ca850 */
  push32(0x114ca816u); f_114ca850();
  /* 114ca816 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ca819 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 114ca81f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca823 jne 0x114ca830 */
  if (!C.zf) goto L_114ca830;
  /* 114ca825 push 0x114fce10 */
  push32((uint32_t)(0x114fce10u));
  /* 114ca82a call dword ptr [0x11501420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501420))), 0x114ca830u);
L_114ca830:;
  /* 114ca830 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 114ca836 jmp 0x114ca84b */
  goto L_114ca84b;
L_114ca838:;
  /* 114ca838 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca83c jne 0x114ca849 */
  if (!C.zf) goto L_114ca849;
  /* 114ca83e push 0x114fce10 */
  push32((uint32_t)(0x114fce10u));
  /* 114ca843 call dword ptr [0x11501420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501420))), 0x114ca849u);
L_114ca849:;
  /* 114ca849 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114ca84b:;
  /* 114ca84b pop edi */
  EDI = (pop32());
  /* 114ca84c mov esp, ebp */
  ESP = (EBP);
  /* 114ca84e pop ebp */
  EBP = (pop32());
  /* 114ca84f ret  */
  ESPCHK(0x114ca4c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a850 @ 0x114ca850 (780 bytes, 197 insns) */
void f_114ca850(void) {
  FTRACE(0x114ca850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ca850 push ebp */
  push32((uint32_t)(EBP));
  /* 114ca851 mov ebp, esp */
  EBP = (ESP);
  /* 114ca853 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 114ca858 call 0x114d1320 */
  push32(0x114ca85du); f_114d1320();
L_114ca85d:;
  /* 114ca85d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca861 jne 0x114ca888 */
  if (!C.zf) goto L_114ca888;
  /* 114ca863 push 0x114f968c */
  push32((uint32_t)(0x114f968cu));
  /* 114ca868 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ca86a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 114ca86f push 0x114f9680 */
  push32((uint32_t)(0x114f9680u));
  /* 114ca874 push 2 */
  push32((uint32_t)(0x2u));
  /* 114ca876 call 0x114ca4c0 */
  push32(0x114ca87bu); f_114ca4c0();
  /* 114ca87b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ca87e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca881 jne 0x114ca888 */
  if (!C.zf) goto L_114ca888;
  /* 114ca883 call 0x114ca3b0 */
  push32(0x114ca888u); f_114ca3b0();
L_114ca888:;
  /* 114ca888 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114ca88a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ca88c jne 0x114ca85d */
  if (!C.zf) goto L_114ca85d;
  /* 114ca88e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 114ca893 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 114ca899 push ecx */
  push32((uint32_t)(ECX));
  /* 114ca89a push 0 */
  push32((uint32_t)(0x0u));
  /* 114ca89c call dword ptr [0x11501434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501434))), 0x114ca8a2u);
  /* 114ca8a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ca8a4 jne 0x114ca8ba */
  if (!C.zf) goto L_114ca8ba;
  /* 114ca8a6 push 0x114f9668 */
  push32((uint32_t)(0x114f9668u));
  /* 114ca8ab lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 114ca8b1 push edx */
  push32((uint32_t)(EDX));
  /* 114ca8b2 call 0x114d1130 */
  push32(0x114ca8b7u); f_114d1130();
  /* 114ca8b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114ca8ba:;
  /* 114ca8ba lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 114ca8c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114ca8c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114ca8c6 push ecx */
  push32((uint32_t)(ECX));
  /* 114ca8c7 call 0x114d0fb0 */
  push32(0x114ca8ccu); f_114d0fb0();
  /* 114ca8cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ca8cf cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca8d2 jbe 0x114ca8fd */
  if ((C.cf||C.zf)) goto L_114ca8fd;
  /* 114ca8d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114ca8d7 push edx */
  push32((uint32_t)(EDX));
  /* 114ca8d8 call 0x114d0fb0 */
  push32(0x114ca8ddu); f_114d0fb0();
  /* 114ca8dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ca8e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114ca8e3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 114ca8e7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114ca8ea push 3 */
  push32((uint32_t)(0x3u));
  /* 114ca8ec push 0x114f9664 */
  push32((uint32_t)(0x114f9664u));
  /* 114ca8f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114ca8f4 push eax */
  push32((uint32_t)(EAX));
  /* 114ca8f5 call 0x114d19a0 */
  push32(0x114ca8fau); f_114d19a0();
  /* 114ca8fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114ca8fd:;
  /* 114ca8fd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114ca900 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 114ca906 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca90d je 0x114ca958 */
  if (C.zf) goto L_114ca958;
  /* 114ca90f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 114ca915 push edx */
  push32((uint32_t)(EDX));
  /* 114ca916 call 0x114d0fb0 */
  push32(0x114ca91bu); f_114d0fb0();
  /* 114ca91b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ca91e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca921 jbe 0x114ca958 */
  if ((C.cf||C.zf)) goto L_114ca958;
  /* 114ca923 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 114ca929 push eax */
  push32((uint32_t)(EAX));
  /* 114ca92a call 0x114d0fb0 */
  push32(0x114ca92fu); f_114d0fb0();
  /* 114ca92f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ca932 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 114ca938 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 114ca93c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 114ca942 push 3 */
  push32((uint32_t)(0x3u));
  /* 114ca944 push 0x114f9664 */
  push32((uint32_t)(0x114f9664u));
  /* 114ca949 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 114ca94f push eax */
  push32((uint32_t)(EAX));
  /* 114ca950 call 0x114d19a0 */
  push32(0x114ca955u); f_114d19a0();
  /* 114ca955 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114ca958:;
  /* 114ca958 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca95c jne 0x114ca96a */
  if (!C.zf) goto L_114ca96a;
  /* 114ca95e mov dword ptr [ebp - 0x1114], 0x114f95f0 */
  w32((uint32_t)(EBP + -0x1114), (0x114f95f0u));
  /* 114ca968 jmp 0x114ca974 */
  goto L_114ca974;
L_114ca96a:;
  /* 114ca96a mov dword ptr [ebp - 0x1114], 0x114f9324 */
  w32((uint32_t)(EBP + -0x1114), (0x114f9324u));
L_114ca974:;
  /* 114ca974 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114ca977 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114ca97a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114ca97c je 0x114ca989 */
  if (C.zf) goto L_114ca989;
  /* 114ca97e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114ca981 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 114ca987 jmp 0x114ca993 */
  goto L_114ca993;
L_114ca989:;
  /* 114ca989 mov dword ptr [ebp - 0x1118], 0x114f9324 */
  w32((uint32_t)(EBP + -0x1118), (0x114f9324u));
L_114ca993:;
  /* 114ca993 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114ca996 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114ca999 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114ca99b je 0x114ca9af */
  if (C.zf) goto L_114ca9af;
  /* 114ca99d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca9a1 jne 0x114ca9af */
  if (!C.zf) goto L_114ca9af;
  /* 114ca9a3 mov dword ptr [ebp - 0x111c], 0x114f95e0 */
  w32((uint32_t)(EBP + -0x111c), (0x114f95e0u));
  /* 114ca9ad jmp 0x114ca9b9 */
  goto L_114ca9b9;
L_114ca9af:;
  /* 114ca9af mov dword ptr [ebp - 0x111c], 0x114f9324 */
  w32((uint32_t)(EBP + -0x111c), (0x114f9324u));
L_114ca9b9:;
  /* 114ca9b9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114ca9bc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114ca9bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114ca9c1 je 0x114ca9cf */
  if (C.zf) goto L_114ca9cf;
  /* 114ca9c3 mov dword ptr [ebp - 0x1120], 0x114f95dc */
  w32((uint32_t)(EBP + -0x1120), (0x114f95dcu));
  /* 114ca9cd jmp 0x114ca9d9 */
  goto L_114ca9d9;
L_114ca9cf:;
  /* 114ca9cf mov dword ptr [ebp - 0x1120], 0x114f9324 */
  w32((uint32_t)(EBP + -0x1120), (0x114f9324u));
L_114ca9d9:;
  /* 114ca9d9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca9dd je 0x114ca9ea */
  if (C.zf) goto L_114ca9ea;
  /* 114ca9df mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114ca9e2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 114ca9e8 jmp 0x114ca9f4 */
  goto L_114ca9f4;
L_114ca9ea:;
  /* 114ca9ea mov dword ptr [ebp - 0x1124], 0x114f9324 */
  w32((uint32_t)(EBP + -0x1124), (0x114f9324u));
L_114ca9f4:;
  /* 114ca9f4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ca9f8 je 0x114caa06 */
  if (C.zf) goto L_114caa06;
  /* 114ca9fa mov dword ptr [ebp - 0x1128], 0x114f95d4 */
  w32((uint32_t)(EBP + -0x1128), (0x114f95d4u));
  /* 114caa04 jmp 0x114caa10 */
  goto L_114caa10;
L_114caa06:;
  /* 114caa06 mov dword ptr [ebp - 0x1128], 0x114f9324 */
  w32((uint32_t)(EBP + -0x1128), (0x114f9324u));
L_114caa10:;
  /* 114caa10 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114caa14 je 0x114caa21 */
  if (C.zf) goto L_114caa21;
  /* 114caa16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114caa19 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 114caa1f jmp 0x114caa2b */
  goto L_114caa2b;
L_114caa21:;
  /* 114caa21 mov dword ptr [ebp - 0x112c], 0x114f9324 */
  w32((uint32_t)(EBP + -0x112c), (0x114f9324u));
L_114caa2b:;
  /* 114caa2b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114caa2f je 0x114caa3d */
  if (C.zf) goto L_114caa3d;
  /* 114caa31 mov dword ptr [ebp - 0x1130], 0x114f95cc */
  w32((uint32_t)(EBP + -0x1130), (0x114f95ccu));
  /* 114caa3b jmp 0x114caa47 */
  goto L_114caa47;
L_114caa3d:;
  /* 114caa3d mov dword ptr [ebp - 0x1130], 0x114f9324 */
  w32((uint32_t)(EBP + -0x1130), (0x114f9324u));
L_114caa47:;
  /* 114caa47 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114caa4e je 0x114caa5e */
  if (C.zf) goto L_114caa5e;
  /* 114caa50 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 114caa56 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 114caa5c jmp 0x114caa68 */
  goto L_114caa68;
L_114caa5e:;
  /* 114caa5e mov dword ptr [ebp - 0x1134], 0x114f9324 */
  w32((uint32_t)(EBP + -0x1134), (0x114f9324u));
L_114caa68:;
  /* 114caa68 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114caa6f je 0x114caa7d */
  if (C.zf) goto L_114caa7d;
  /* 114caa71 mov dword ptr [ebp - 0x1138], 0x114f95c0 */
  w32((uint32_t)(EBP + -0x1138), (0x114f95c0u));
  /* 114caa7b jmp 0x114caa87 */
  goto L_114caa87;
L_114caa7d:;
  /* 114caa7d mov dword ptr [ebp - 0x1138], 0x114f9324 */
  w32((uint32_t)(EBP + -0x1138), (0x114f9324u));
L_114caa87:;
  /* 114caa87 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 114caa8d push edx */
  push32((uint32_t)(EDX));
  /* 114caa8e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 114caa94 push eax */
  push32((uint32_t)(EAX));
  /* 114caa95 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 114caa9b push ecx */
  push32((uint32_t)(ECX));
  /* 114caa9c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 114caaa2 push edx */
  push32((uint32_t)(EDX));
  /* 114caaa3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 114caaa9 push eax */
  push32((uint32_t)(EAX));
  /* 114caaaa mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 114caab0 push ecx */
  push32((uint32_t)(ECX));
  /* 114caab1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 114caab7 push edx */
  push32((uint32_t)(EDX));
  /* 114caab8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 114caabe push eax */
  push32((uint32_t)(EAX));
  /* 114caabf mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 114caac5 push ecx */
  push32((uint32_t)(ECX));
  /* 114caac6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 114caacc push edx */
  push32((uint32_t)(EDX));
  /* 114caacd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114caad0 push eax */
  push32((uint32_t)(EAX));
  /* 114caad1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114caad4 mov edx, dword ptr [ecx*4 + 0x114fce2c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x114fce2c)));
  /* 114caadb push edx */
  push32((uint32_t)(EDX));
  /* 114caadc push 0x114f956c */
  push32((uint32_t)(0x114f956cu));
  /* 114caae1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 114caae6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 114caaec push eax */
  push32((uint32_t)(EAX));
  /* 114caaed call 0x114d1030 */
  push32(0x114caaf2u); f_114d1030();
  /* 114caaf2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114caaf5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114caaf7 jge 0x114cab0d */
  if ((C.sf==C.of)) goto L_114cab0d;
  /* 114caaf9 push 0x114f94d0 */
  push32((uint32_t)(0x114f94d0u));
  /* 114caafe lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 114cab04 push ecx */
  push32((uint32_t)(ECX));
  /* 114cab05 call 0x114d1130 */
  push32(0x114cab0au); f_114d1130();
  /* 114cab0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114cab0d:;
  /* 114cab0d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 114cab12 push 0x114f9548 */
  push32((uint32_t)(0x114f9548u));
  /* 114cab17 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 114cab1d push edx */
  push32((uint32_t)(EDX));
  /* 114cab1e call 0x114d18e0 */
  push32(0x114cab23u); f_114d18e0();
  /* 114cab23 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cab26 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 114cab2c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cab33 jne 0x114cab46 */
  if (!C.zf) goto L_114cab46;
  /* 114cab35 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 114cab37 call 0x114d1620 */
  push32(0x114cab3cu); f_114d1620();
  /* 114cab3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cab3f push 3 */
  push32((uint32_t)(0x3u));
  /* 114cab41 call 0x114ce970 */
  push32(0x114cab46u); f_114ce970();
L_114cab46:;
  /* 114cab46 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cab4d jne 0x114cab56 */
  if (!C.zf) goto L_114cab56;
  /* 114cab4f mov eax, 1 */
  EAX = (0x1u);
  /* 114cab54 jmp 0x114cab58 */
  goto L_114cab58;
L_114cab56:;
  /* 114cab56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114cab58:;
  /* 114cab58 mov esp, ebp */
  ESP = (EBP);
  /* 114cab5a pop ebp */
  EBP = (pop32());
  /* 114cab5b ret  */
  ESPCHK(0x114ca850u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad5c @ 0x114cad5c (25 bytes, 7 insns) */
void f_114cad5c(void) {
  FTRACE(0x114cad5cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cad5c test eax, 0x80000 */
  { uint32_t _r=(EAX)&(0x80000u); fl_logic(_r,32); }
  /* 114cad61 je 0x114cad69 */
  if (C.zf) goto L_114cad69;
  /* 114cad63 mov eax, 7 */
  EAX = (0x7u);
  /* 114cad68 ret  */
  ESPCHK(0x114cad5cu, _esp0);
  ESP += 4; return;
L_114cad69:;
  /* 114cad69 fadd qword ptr [0x114f96b0] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(0x114f96b0)));
  /* 114cad6f mov eax, 1 */
  EAX = (0x1u);
  /* 114cad74 ret  */
  ESPCHK(0x114cad5cu, _esp0);
  ESP += 4; return;
}

/* __fload_withFB @ 0x114cad75 (67 bytes, 21 insns) */
void f_114cad75(void) {
  FTRACE(0x114cad75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cad75 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 114cad78 and eax, 0x7ff00000 */
  { uint32_t _r=(EAX)&(0x7ff00000u); EAX = (_r); fl_logic(_r,32); }
  /* 114cad7d cmp eax, 0x7ff00000 */
  { uint32_t _a=(EAX),_b=(0x7ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cad82 je 0x114cad87 */
  if (C.zf) goto L_114cad87;
  /* 114cad84 fld qword ptr [edx] */
  fpu_push(rf64((uint32_t)(EDX)));
  /* 114cad86 ret  */
  ESPCHK(0x114cad75u, _esp0);
  ESP += 4; return;
L_114cad87:;
  /* 114cad87 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 114cad8a sub esp, 0xa */
  { uint32_t _a=(ESP),_b=(0xau),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cad8d or eax, 0x7fff0000 */
  { uint32_t _r=(EAX)|(0x7fff0000u); EAX = (_r); fl_logic(_r,32); }
  /* 114cad92 mov dword ptr [esp + 6], eax */
  w32((uint32_t)(ESP + 0x6), (EAX));
  /* 114cad96 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 114cad99 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 114cad9b shld eax, ecx, 0xb */
  EAX = (sh_shld((uint32_t)(EAX),(uint32_t)(ECX),(0xbu)&0x1f,32));
  /* 114cad9f shl ecx, 0xb */
  ECX = (sh_shl((uint32_t)(ECX), (0xbu)&0x1f, 32));
  /* 114cada2 mov dword ptr [esp + 4], eax */
  w32((uint32_t)(ESP + 0x4), (EAX));
  /* 114cada6 mov dword ptr [esp], ecx */
  w32((uint32_t)(ESP), (ECX));
  /* 114cada9 fld xword ptr [esp] */
  fpu_push(rf80((uint32_t)(ESP)));
  /* 114cadac add esp, 0xa */
  { uint32_t _a=(ESP),_b=(0xau),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cadaf test eax, 0 */
  { uint32_t _r=(EAX)&(0x0u); fl_logic(_r,32); }
  /* 114cadb4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 114cadb7 ret  */
  ESPCHK(0x114cad75u, _esp0);
  ESP += 4; return;
}

/* FUN_1000adb8 @ 0x114cadb8 (22 bytes, 7 insns) */
void f_114cadb8(void) {
  FTRACE(0x114cadb8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cadb8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 114cadbc and eax, 0x7ff00000 */
  { uint32_t _r=(EAX)&(0x7ff00000u); EAX = (_r); fl_logic(_r,32); }
  /* 114cadc1 cmp eax, 0x7ff00000 */
  { uint32_t _a=(EAX),_b=(0x7ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cadc6 je 0x114cadc9 */
  if (C.zf) goto L_114cadc9;
  /* 114cadc8 ret  */
  ESPCHK(0x114cadb8u, _esp0);
  ESP += 4; return;
L_114cadc9:;
  /* 114cadc9 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 114cadcd ret  */
  ESPCHK(0x114cadb8u, _esp0);
  ESP += 4; return;
}

/* __math_exit @ 0x114caddb (42 bytes, 16 insns) */
void f_114caddb(void) {
  FTRACE(0x114caddbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114caddb mov ax, word ptr [esp] */
  AX = (r16((uint32_t)(ESP)));
  /* 114caddf cmp ax, 0x27f */
  { uint32_t _a=(AX),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 114cade3 je 0x114cae03 */
  if (C.zf) goto L_114cae03;
  /* 114cade5 and ax, 0x20 */
  { uint32_t _r=(AX)&(0x20u); AX = (_r); fl_logic(_r,16); }
  /* 114cade9 je 0x114cae00 */
  if (C.zf) goto L_114cae00;
  /* 114cadeb wait  */
  /* wait (no observable integer/reg state) */
  /* 114cadec fnstsw ax */
  AX = fpu_status();
  /* 114cadee and ax, 0x20 */
  { uint32_t _r=(AX)&(0x20u); AX = (_r); fl_logic(_r,16); }
  /* 114cadf2 je 0x114cae00 */
  if (C.zf) goto L_114cae00;
  /* 114cadf4 mov eax, 8 */
  EAX = (0x8u);
  /* 114cadf9 call 0x114caed7 */
  push32(0x114cadfeu); f_114caed7();
  /* 114cadfe pop edx */
  EDX = (pop32());
  /* 114cadff ret  */
  ESPCHK(0x114caddbu, _esp0);
  ESP += 4; return;
L_114cae00:;
  /* 114cae00 fldcw word ptr [esp] */
  C.fcw = r16((uint32_t)(ESP));
L_114cae03:;
  /* 114cae03 pop edx */
  EDX = (pop32());
  /* 114cae04 ret  */
  ESPCHK(0x114caddbu, _esp0);
  ESP += 4; return;
}

/* FUN_1000aec0 @ 0x114caec0 (23 bytes, 9 insns) */
void f_114caec0(void) {
  FTRACE(0x114caec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114caec0 push ebp */
  push32((uint32_t)(EBP));
  /* 114caec1 mov ebp, esp */
  EBP = (ESP);
  /* 114caec3 add esp, -0x20 */
  { uint32_t _a=(ESP),_b=(0xffffffe0u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114caec6 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 114caec9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114caecc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 114caecf mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114caed2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114caed5 jmp 0x114caee0 */
  jmp_ind(0x114caee0u); return;
}

/* __startOneArgErrorHandling @ 0x114caed7 (60 bytes, 23 insns) */
void f_114caed7(void) {
  FTRACE(0x114caed7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114caed7 push ebp */
  push32((uint32_t)(EBP));
  /* 114caed8 mov ebp, esp */
  EBP = (ESP);
  /* 114caeda add esp, -0x20 */
  { uint32_t _a=(ESP),_b=(0xffffffe0u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114caedd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 114caee0 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 114caee3 mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 114caee6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114caee9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114caeec mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 114caeef mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 114caef2 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 114caef5 lea ecx, [ebp - 0x20] */
  ECX = ((uint32_t)(EBP + -0x20));
  /* 114caef8 push eax */
  push32((uint32_t)(EAX));
  /* 114caef9 push ecx */
  push32((uint32_t)(ECX));
  /* 114caefa push edx */
  push32((uint32_t)(EDX));
  /* 114caefb call 0x114d1aa0 */
  push32(0x114caf00u); f_114d1aa0();
  /* 114caf00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114caf03 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 114caf06 cmp word ptr [ebp + 8], 0x27f */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 114caf0c je 0x114caf11 */
  if (C.zf) goto L_114caf11;
  /* 114caf0e fldcw word ptr [ebp + 8] */
  C.fcw = r16((uint32_t)(EBP + 0x8));
L_114caf11:;
  /* 114caf11 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114caf12 ret  */
  ESPCHK(0x114caed7u, _esp0);
  ESP += 4; return;
}

/* __setdefaultprecision @ 0x114caf20 (23 bytes, 8 insns) */
void f_114caf20(void) {
  FTRACE(0x114caf20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114caf20 push ebp */
  push32((uint32_t)(EBP));
  /* 114caf21 mov ebp, esp */
  EBP = (ESP);
  /* 114caf23 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 114caf28 push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 114caf2d call 0x114d1cb0 */
  push32(0x114caf32u); f_114d1cb0();
  /* 114caf32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114caf35 pop ebp */
  EBP = (pop32());
  /* 114caf36 ret  */
  ESPCHK(0x114caf20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af40 @ 0x114caf40 (94 bytes, 30 insns) */
void f_114caf40(void) {
  FTRACE(0x114caf40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114caf40 push ebp */
  push32((uint32_t)(EBP));
  /* 114caf41 mov ebp, esp */
  EBP = (ESP);
  /* 114caf43 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114caf46 push ebx */
  push32((uint32_t)(EBX));
  /* 114caf47 push esi */
  push32((uint32_t)(ESI));
  /* 114caf48 push edi */
  push32((uint32_t)(EDI));
  /* 114caf49 mov dword ptr [ebp - 0x18], 0x80000000 */
  w32((uint32_t)(EBP + -0x18), (0x80000000u));
  /* 114caf50 mov dword ptr [ebp - 0x14], 0x4147ffff */
  w32((uint32_t)(EBP + -0x14), (0x4147ffffu));
  /* 114caf57 mov dword ptr [ebp - 8], 0xc0000000 */
  w32((uint32_t)(EBP + -0x8), (0xc0000000u));
  /* 114caf5e mov dword ptr [ebp - 4], 0x4150017e */
  w32((uint32_t)(EBP + -0x4), (0x4150017eu));
  /* 114caf65 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 114caf68 fdiv qword ptr [ebp - 0x18] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x18)));
  /* 114caf6b fmul qword ptr [ebp - 0x18] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x18)));
  /* 114caf6e fsubr qword ptr [ebp - 8] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x8))) - FPU_ST(0);
  /* 114caf71 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 114caf74 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 114caf77 fcomp qword ptr [0x114f96f8] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x114f96f8)));
  (void)fpu_pop();
  /* 114caf7d fnstsw ax */
  AX = fpu_status();
  /* 114caf7f test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 114caf82 jne 0x114caf8d */
  if (!C.zf) goto L_114caf8d;
  /* 114caf84 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 114caf8b jmp 0x114caf94 */
  goto L_114caf94;
L_114caf8d:;
  /* 114caf8d mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
L_114caf94:;
  /* 114caf94 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114caf97 pop edi */
  EDI = (pop32());
  /* 114caf98 pop esi */
  ESI = (pop32());
  /* 114caf99 pop ebx */
  EBX = (pop32());
  /* 114caf9a mov esp, ebp */
  ESP = (EBP);
  /* 114caf9c pop ebp */
  EBP = (pop32());
  /* 114caf9d ret  */
  ESPCHK(0x114caf40u, _esp0);
  ESP += 4; return;
}

/* __ms_p5_mp_test_fdiv @ 0x114cafa0 (66 bytes, 22 insns) */
void f_114cafa0(void) {
  FTRACE(0x114cafa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cafa0 push ebp */
  push32((uint32_t)(EBP));
  /* 114cafa1 mov ebp, esp */
  EBP = (ESP);
  /* 114cafa3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cafa6 push 0x114f971c */
  push32((uint32_t)(0x114f971cu));
  /* 114cafab call dword ptr [0x11501438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501438))), 0x114cafb1u);
  /* 114cafb1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114cafb4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cafb8 je 0x114cafd9 */
  if (C.zf) goto L_114cafd9;
  /* 114cafba push 0x114f9700 */
  push32((uint32_t)(0x114f9700u));
  /* 114cafbf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cafc2 push eax */
  push32((uint32_t)(EAX));
  /* 114cafc3 call dword ptr [0x1150131c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150131c))), 0x114cafc9u);
  /* 114cafc9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114cafcc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cafd0 je 0x114cafd9 */
  if (C.zf) goto L_114cafd9;
  /* 114cafd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cafd4 call dword ptr [ebp - 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x8))), 0x114cafd7u);
  /* 114cafd7 jmp 0x114cafde */
  goto L_114cafde;
L_114cafd9:;
  /* 114cafd9 call 0x114caf40 */
  push32(0x114cafdeu); f_114caf40();
L_114cafde:;
  /* 114cafde mov esp, ebp */
  ESP = (EBP);
  /* 114cafe0 pop ebp */
  EBP = (pop32());
  /* 114cafe1 ret  */
  ESPCHK(0x114cafa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aff0 @ 0x114caff0 (168 bytes, 59 insns) */
void f_114caff0(void) {
  FTRACE(0x114caff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114caff0 push ebp */
  push32((uint32_t)(EBP));
  /* 114caff1 mov ebp, esp */
  EBP = (ESP);
  /* 114caff3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114caff6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114caff9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114caffc push ecx */
  push32((uint32_t)(ECX));
  /* 114caffd call 0x114d2190 */
  push32(0x114cb002u); f_114d2190();
  /* 114cb002 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb005 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb008 je 0x114cb050 */
  if (C.zf) goto L_114cb050;
L_114cb00a:;
  /* 114cb00a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb00d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb010 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 114cb013 cmp dword ptr [0x114fd040], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114fd040))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb01a jle 0x114cb032 */
  if ((C.zf||C.sf!=C.of)) goto L_114cb032;
  /* 114cb01c push 4 */
  push32((uint32_t)(0x4u));
  /* 114cb01e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb021 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114cb024 push ecx */
  push32((uint32_t)(ECX));
  /* 114cb025 call 0x114d20c0 */
  push32(0x114cb02au); f_114d20c0();
  /* 114cb02a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb02d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114cb030 jmp 0x114cb04a */
  goto L_114cb04a;
L_114cb032:;
  /* 114cb032 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb035 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114cb038 mov ecx, dword ptr [0x114fd04c] */
  ECX = (r32((uint32_t)(0x114fd04c)));
  /* 114cb03e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114cb040 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 114cb044 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 114cb047 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_114cb04a:;
  /* 114cb04a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb04e jne 0x114cb00a */
  if (!C.zf) goto L_114cb00a;
L_114cb050:;
  /* 114cb050 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb053 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 114cb055 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 114cb058 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb05b mov al, byte ptr [0x114fd044] */
  AL = (r8((uint32_t)(0x114fd044)));
  /* 114cb060 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 114cb062 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb065 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb068 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_114cb06b:;
  /* 114cb06b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb06e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114cb070 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 114cb073 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb076 mov dl, byte ptr [ebp - 8] */
  DL = (r8((uint32_t)(EBP + -0x8)));
  /* 114cb079 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 114cb07b mov al, byte ptr [ebp - 4] */
  AL = (r8((uint32_t)(EBP + -0x4)));
  /* 114cb07e mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 114cb081 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb084 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114cb087 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb08a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb08d mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 114cb090 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cb092 jne 0x114cb06b */
  if (!C.zf) goto L_114cb06b;
  /* 114cb094 mov esp, ebp */
  ESP = (EBP);
  /* 114cb096 pop ebp */
  EBP = (pop32());
  /* 114cb097 ret  */
  ESPCHK(0x114caff0u, _esp0);
  ESP += 4; return;
}

/* __cropzeros @ 0x114cb0a0 (215 bytes, 78 insns) */
void f_114cb0a0(void) {
  FTRACE(0x114cb0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cb0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 114cb0a1 mov ebp, esp */
  EBP = (ESP);
  /* 114cb0a3 push ecx */
  push32((uint32_t)(ECX));
L_114cb0a4:;
  /* 114cb0a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb0a7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114cb0aa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114cb0ac je 0x114cb0ca */
  if (C.zf) goto L_114cb0ca;
  /* 114cb0ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb0b1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114cb0b4 movsx ecx, byte ptr [0x114fd044] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x114fd044))));
  /* 114cb0bb cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb0bd je 0x114cb0ca */
  if (C.zf) goto L_114cb0ca;
  /* 114cb0bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb0c2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb0c5 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 114cb0c8 jmp 0x114cb0a4 */
  goto L_114cb0a4;
L_114cb0ca:;
  /* 114cb0ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb0cd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114cb0d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb0d3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb0d6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 114cb0d9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114cb0db je 0x114cb173 */
  if (C.zf) goto L_114cb173;
L_114cb0e1:;
  /* 114cb0e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb0e4 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114cb0e7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114cb0e9 je 0x114cb10c */
  if (C.zf) goto L_114cb10c;
  /* 114cb0eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb0ee movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114cb0f1 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb0f4 je 0x114cb10c */
  if (C.zf) goto L_114cb10c;
  /* 114cb0f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb0f9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114cb0fc cmp edx, 0x45 */
  { uint32_t _a=(EDX),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb0ff je 0x114cb10c */
  if (C.zf) goto L_114cb10c;
  /* 114cb101 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb104 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb107 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 114cb10a jmp 0x114cb0e1 */
  goto L_114cb0e1;
L_114cb10c:;
  /* 114cb10c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb10f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114cb112 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb115 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cb118 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_114cb11b:;
  /* 114cb11b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb11e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114cb121 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb124 jne 0x114cb131 */
  if (!C.zf) goto L_114cb131;
  /* 114cb126 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb129 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cb12c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 114cb12f jmp 0x114cb11b */
  goto L_114cb11b;
L_114cb131:;
  /* 114cb131 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb134 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114cb137 movsx edx, byte ptr [0x114fd044] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x114fd044))));
  /* 114cb13e cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb140 jne 0x114cb14b */
  if (!C.zf) goto L_114cb14b;
  /* 114cb142 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb145 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cb148 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_114cb14b:;
  /* 114cb14b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb14e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb151 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 114cb154 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb157 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb15a mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 114cb15c mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 114cb15e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb161 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114cb164 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb167 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb16a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114cb16d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cb16f je 0x114cb173 */
  if (C.zf) goto L_114cb173;
  /* 114cb171 jmp 0x114cb14b */
  goto L_114cb14b;
L_114cb173:;
  /* 114cb173 mov esp, ebp */
  ESP = (EBP);
  /* 114cb175 pop ebp */
  EBP = (pop32());
  /* 114cb176 ret  */
  ESPCHK(0x114cb0a0u, _esp0);
  ESP += 4; return;
}

/* __positive @ 0x114cb180 (45 bytes, 16 insns) */
void f_114cb180(void) {
  FTRACE(0x114cb180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cb180 push ebp */
  push32((uint32_t)(EBP));
  /* 114cb181 mov ebp, esp */
  EBP = (ESP);
  /* 114cb183 push ecx */
  push32((uint32_t)(ECX));
  /* 114cb184 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb187 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 114cb189 fcomp qword ptr [0x114f9728] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x114f9728)));
  (void)fpu_pop();
  /* 114cb18f fnstsw ax */
  AX = fpu_status();
  /* 114cb191 test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 114cb194 jne 0x114cb19f */
  if (!C.zf) goto L_114cb19f;
  /* 114cb196 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 114cb19d jmp 0x114cb1a6 */
  goto L_114cb1a6;
L_114cb19f:;
  /* 114cb19f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_114cb1a6:;
  /* 114cb1a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb1a9 mov esp, ebp */
  ESP = (EBP);
  /* 114cb1ab pop ebp */
  EBP = (pop32());
  /* 114cb1ac ret  */
  ESPCHK(0x114cb180u, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x114cb1b0 (72 bytes, 29 insns) */
void f_114cb1b0(void) {
  FTRACE(0x114cb1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cb1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 114cb1b1 mov ebp, esp */
  EBP = (ESP);
  /* 114cb1b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cb1b6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb1ba je 0x114cb1dc */
  if (C.zf) goto L_114cb1dc;
  /* 114cb1bc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cb1bf push eax */
  push32((uint32_t)(EAX));
  /* 114cb1c0 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 114cb1c3 push ecx */
  push32((uint32_t)(ECX));
  /* 114cb1c4 call 0x114d2a80 */
  push32(0x114cb1c9u); f_114d2a80();
  /* 114cb1c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb1cc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cb1cf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cb1d2 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 114cb1d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb1d7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 114cb1da jmp 0x114cb1f4 */
  goto L_114cb1f4;
L_114cb1dc:;
  /* 114cb1dc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cb1df push edx */
  push32((uint32_t)(EDX));
  /* 114cb1e0 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 114cb1e3 push eax */
  push32((uint32_t)(EAX));
  /* 114cb1e4 call 0x114d2b00 */
  push32(0x114cb1e9u); f_114d2b00();
  /* 114cb1e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb1ec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cb1ef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114cb1f2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
L_114cb1f4:;
  /* 114cb1f4 mov esp, ebp */
  ESP = (EBP);
  /* 114cb1f6 pop ebp */
  EBP = (pop32());
  /* 114cb1f7 ret  */
  ESPCHK(0x114cb1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b200 @ 0x114cb200 (118 bytes, 49 insns) */
void f_114cb200(void) {
  FTRACE(0x114cb200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cb200 push ebp */
  push32((uint32_t)(EBP));
  /* 114cb201 mov ebp, esp */
  EBP = (ESP);
  /* 114cb203 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cb206 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 114cb209 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114cb20c lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 114cb20f push ecx */
  push32((uint32_t)(ECX));
  /* 114cb210 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 114cb213 push edx */
  push32((uint32_t)(EDX));
  /* 114cb214 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb217 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114cb21a push ecx */
  push32((uint32_t)(ECX));
  /* 114cb21b mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 114cb21d push edx */
  push32((uint32_t)(EDX));
  /* 114cb21e call 0x114d2c40 */
  push32(0x114cb223u); f_114d2c40();
  /* 114cb223 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb226 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb229 push eax */
  push32((uint32_t)(EAX));
  /* 114cb22a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cb22d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb230 push ecx */
  push32((uint32_t)(ECX));
  /* 114cb231 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb234 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cb236 cmp dword ptr [edx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb239 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 114cb23c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cb23f add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb241 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114cb243 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb247 setg dl */
  DL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 114cb24a add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb24c push ecx */
  push32((uint32_t)(ECX));
  /* 114cb24d call 0x114d2b40 */
  push32(0x114cb252u); f_114d2b40();
  /* 114cb252 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb255 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cb257 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb25a push eax */
  push32((uint32_t)(EAX));
  /* 114cb25b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114cb25e push ecx */
  push32((uint32_t)(ECX));
  /* 114cb25f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cb262 push edx */
  push32((uint32_t)(EDX));
  /* 114cb263 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cb266 push eax */
  push32((uint32_t)(EAX));
  /* 114cb267 call 0x114cb280 */
  push32(0x114cb26cu); f_114cb280();
  /* 114cb26c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb26f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cb272 mov esp, ebp */
  ESP = (EBP);
  /* 114cb274 pop ebp */
  EBP = (pop32());
  /* 114cb275 ret  */
  ESPCHK(0x114cb200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b280 @ 0x114cb280 (358 bytes, 128 insns) */
void f_114cb280(void) {
  FTRACE(0x114cb280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cb280 push ebp */
  push32((uint32_t)(EBP));
  /* 114cb281 mov ebp, esp */
  EBP = (ESP);
  /* 114cb283 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cb286 movsx eax, byte ptr [ebp + 0x18] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x18))));
  /* 114cb28a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cb28c je 0x114cb2b7 */
  if (C.zf) goto L_114cb2b7;
  /* 114cb28e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114cb291 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114cb293 cmp dword ptr [ecx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb296 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 114cb299 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb29c add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb29e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114cb2a1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114cb2a3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb2a7 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 114cb2aa push ecx */
  push32((uint32_t)(ECX));
  /* 114cb2ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb2ae push edx */
  push32((uint32_t)(EDX));
  /* 114cb2af call 0x114cb6f0 */
  push32(0x114cb2b4u); f_114cb6f0();
  /* 114cb2b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114cb2b7:;
  /* 114cb2b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb2ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114cb2bd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114cb2c0 cmp dword ptr [ecx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb2c3 jne 0x114cb2d4 */
  if (!C.zf) goto L_114cb2d4;
  /* 114cb2c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb2c8 mov byte ptr [edx], 0x2d */
  w8((uint32_t)(EDX), (0x2du));
  /* 114cb2cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb2ce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb2d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114cb2d4:;
  /* 114cb2d4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb2d8 jle 0x114cb2f8 */
  if ((C.zf||C.sf!=C.of)) goto L_114cb2f8;
  /* 114cb2da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb2dd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb2e0 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 114cb2e3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 114cb2e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb2e8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb2eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114cb2ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb2f1 mov al, byte ptr [0x114fd044] */
  AL = (r8((uint32_t)(0x114fd044)));
  /* 114cb2f6 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
L_114cb2f8:;
  /* 114cb2f8 push 0x114f9730 */
  push32((uint32_t)(0x114f9730u));
  /* 114cb2fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb300 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb303 movsx edx, byte ptr [ebp + 0x18] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x18))));
  /* 114cb307 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 114cb309 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cb30b inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 114cb30c add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb30e push ecx */
  push32((uint32_t)(ECX));
  /* 114cb30f call 0x114d1130 */
  push32(0x114cb314u); f_114d1130();
  /* 114cb314 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb317 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114cb31a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb31e je 0x114cb326 */
  if (C.zf) goto L_114cb326;
  /* 114cb320 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb323 mov byte ptr [eax], 0x45 */
  w8((uint32_t)(EAX), (0x45u));
L_114cb326:;
  /* 114cb326 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb329 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb32c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114cb32f mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114cb332 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 114cb335 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114cb338 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb33b je 0x114cb3df */
  if (C.zf) goto L_114cb3df;
  /* 114cb341 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114cb344 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 114cb347 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cb34a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114cb34d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb351 jge 0x114cb361 */
  if ((C.sf==C.of)) goto L_114cb361;
  /* 114cb353 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cb356 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 114cb358 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114cb35b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb35e mov byte ptr [edx], 0x2d */
  w8((uint32_t)(EDX), (0x2du));
L_114cb361:;
  /* 114cb361 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb364 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb367 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114cb36a cmp dword ptr [ebp - 8], 0x64 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb36e jl 0x114cb395 */
  if ((C.sf!=C.of)) goto L_114cb395;
  /* 114cb370 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cb373 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114cb374 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 114cb379 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114cb37b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb37e mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 114cb380 add cl, al */
  { uint32_t _a=(CL),_b=(AL),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 114cb382 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb385 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 114cb387 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cb38a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114cb38b mov ecx, 0x64 */
  ECX = (0x64u);
  /* 114cb390 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114cb392 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_114cb395:;
  /* 114cb395 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb398 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb39b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114cb39e cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb3a2 jl 0x114cb3c9 */
  if ((C.sf!=C.of)) goto L_114cb3c9;
  /* 114cb3a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cb3a7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114cb3a8 mov ecx, 0xa */
  ECX = (0xau);
  /* 114cb3ad idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114cb3af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb3b2 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 114cb3b4 add cl, al */
  { uint32_t _a=(CL),_b=(AL),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 114cb3b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb3b9 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 114cb3bb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cb3be cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114cb3bf mov ecx, 0xa */
  ECX = (0xau);
  /* 114cb3c4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114cb3c6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_114cb3c9:;
  /* 114cb3c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb3cc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb3cf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114cb3d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb3d5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 114cb3d7 add cl, byte ptr [ebp - 8] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EBP + -0x8))),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 114cb3da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb3dd mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
L_114cb3df:;
  /* 114cb3df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb3e2 mov esp, ebp */
  ESP = (EBP);
  /* 114cb3e4 pop ebp */
  EBP = (pop32());
  /* 114cb3e5 ret  */
  ESPCHK(0x114cb280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b3f0 @ 0x114cb3f0 (106 bytes, 44 insns) */
void f_114cb3f0(void) {
  FTRACE(0x114cb3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cb3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 114cb3f1 mov ebp, esp */
  EBP = (ESP);
  /* 114cb3f3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cb3f6 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 114cb3f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114cb3fc lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 114cb3ff push ecx */
  push32((uint32_t)(ECX));
  /* 114cb400 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 114cb403 push edx */
  push32((uint32_t)(EDX));
  /* 114cb404 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb407 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114cb40a push ecx */
  push32((uint32_t)(ECX));
  /* 114cb40b mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 114cb40d push edx */
  push32((uint32_t)(EDX));
  /* 114cb40e call 0x114d2c40 */
  push32(0x114cb413u); f_114d2c40();
  /* 114cb413 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb416 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb419 push eax */
  push32((uint32_t)(EAX));
  /* 114cb41a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb41d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cb420 add edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb423 push edx */
  push32((uint32_t)(EDX));
  /* 114cb424 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb427 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114cb429 cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb42c sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 114cb42f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cb432 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb434 push edx */
  push32((uint32_t)(EDX));
  /* 114cb435 call 0x114d2b40 */
  push32(0x114cb43au); f_114d2b40();
  /* 114cb43a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb43d push 0 */
  push32((uint32_t)(0x0u));
  /* 114cb43f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb442 push eax */
  push32((uint32_t)(EAX));
  /* 114cb443 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cb446 push ecx */
  push32((uint32_t)(ECX));
  /* 114cb447 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cb44a push edx */
  push32((uint32_t)(EDX));
  /* 114cb44b call 0x114cb460 */
  push32(0x114cb450u); f_114cb460();
  /* 114cb450 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb453 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cb456 mov esp, ebp */
  ESP = (EBP);
  /* 114cb458 pop ebp */
  EBP = (pop32());
  /* 114cb459 ret  */
  ESPCHK(0x114cb3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b460 @ 0x114cb460 (317 bytes, 113 insns) */
void f_114cb460(void) {
  FTRACE(0x114cb460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cb460 push ebp */
  push32((uint32_t)(EBP));
  /* 114cb461 mov ebp, esp */
  EBP = (ESP);
  /* 114cb463 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cb466 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cb469 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114cb46c sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cb46f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114cb472 movsx edx, byte ptr [ebp + 0x14] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x14))));
  /* 114cb476 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cb478 je 0x114cb4b3 */
  if (C.zf) goto L_114cb4b3;
  /* 114cb47a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cb47d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114cb47f cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb482 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 114cb485 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb488 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb48a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114cb48d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cb490 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb493 jne 0x114cb4b3 */
  if (!C.zf) goto L_114cb4b3;
  /* 114cb495 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb498 add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb49b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114cb49e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114cb4a1 mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 114cb4a4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114cb4a7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb4aa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114cb4ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114cb4b0 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_114cb4b3:;
  /* 114cb4b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb4b6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114cb4b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cb4bc cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb4bf jne 0x114cb4d0 */
  if (!C.zf) goto L_114cb4d0;
  /* 114cb4c1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb4c4 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 114cb4c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb4ca add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb4cd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_114cb4d0:;
  /* 114cb4d0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cb4d3 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb4d7 jg 0x114cb4f8 */
  if ((!C.zf&&C.sf==C.of)) goto L_114cb4f8;
  /* 114cb4d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 114cb4db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb4de push ecx */
  push32((uint32_t)(ECX));
  /* 114cb4df call 0x114cb6f0 */
  push32(0x114cb4e4u); f_114cb6f0();
  /* 114cb4e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb4e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb4ea mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 114cb4ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb4f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb4f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114cb4f6 jmp 0x114cb504 */
  goto L_114cb504;
L_114cb4f8:;
  /* 114cb4f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cb4fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb4fe add edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb501 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_114cb504:;
  /* 114cb504 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb508 jle 0x114cb596 */
  if ((C.zf||C.sf!=C.of)) goto L_114cb596;
  /* 114cb50e push 1 */
  push32((uint32_t)(0x1u));
  /* 114cb510 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb513 push eax */
  push32((uint32_t)(EAX));
  /* 114cb514 call 0x114cb6f0 */
  push32(0x114cb519u); f_114cb6f0();
  /* 114cb519 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb51c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb51f mov dl, byte ptr [0x114fd044] */
  DL = (r8((uint32_t)(0x114fd044)));
  /* 114cb525 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 114cb527 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb52a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb52d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114cb530 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cb533 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb537 jge 0x114cb596 */
  if ((C.sf==C.of)) goto L_114cb596;
  /* 114cb539 movsx edx, byte ptr [ebp + 0x14] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x14))));
  /* 114cb53d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cb53f je 0x114cb54e */
  if (C.zf) goto L_114cb54e;
  /* 114cb541 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cb544 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114cb547 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 114cb549 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 114cb54c jmp 0x114cb574 */
  goto L_114cb574;
L_114cb54e:;
  /* 114cb54e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cb551 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 114cb554 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 114cb556 cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb559 jge 0x114cb563 */
  if ((C.sf==C.of)) goto L_114cb563;
  /* 114cb55b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cb55e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 114cb561 jmp 0x114cb56e */
  goto L_114cb56e;
L_114cb563:;
  /* 114cb563 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cb566 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 114cb569 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 114cb56b mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_114cb56e:;
  /* 114cb56e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114cb571 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_114cb574:;
  /* 114cb574 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cb577 push edx */
  push32((uint32_t)(EDX));
  /* 114cb578 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb57b push eax */
  push32((uint32_t)(EAX));
  /* 114cb57c call 0x114cb6f0 */
  push32(0x114cb581u); f_114cb6f0();
  /* 114cb581 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb584 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cb587 push ecx */
  push32((uint32_t)(ECX));
  /* 114cb588 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 114cb58a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb58d push edx */
  push32((uint32_t)(EDX));
  /* 114cb58e call 0x114d2e30 */
  push32(0x114cb593u); f_114d2e30();
  /* 114cb593 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114cb596:;
  /* 114cb596 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb599 mov esp, ebp */
  ESP = (EBP);
  /* 114cb59b pop ebp */
  EBP = (pop32());
  /* 114cb59c ret  */
  ESPCHK(0x114cb460u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5a0 @ 0x114cb5a0 (229 bytes, 89 insns) */
void f_114cb5a0(void) {
  FTRACE(0x114cb5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cb5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 114cb5a1 mov ebp, esp */
  EBP = (ESP);
  /* 114cb5a3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cb5a6 mov byte ptr [ebp - 0x30], 0 */
  w8((uint32_t)(EBP + -0x30), (0x0u));
  /* 114cb5aa lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 114cb5ad mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 114cb5b0 lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 114cb5b3 push ecx */
  push32((uint32_t)(ECX));
  /* 114cb5b4 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 114cb5b7 push edx */
  push32((uint32_t)(EDX));
  /* 114cb5b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb5bb mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114cb5be push ecx */
  push32((uint32_t)(ECX));
  /* 114cb5bf mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 114cb5c1 push edx */
  push32((uint32_t)(EDX));
  /* 114cb5c2 call 0x114d2c40 */
  push32(0x114cb5c7u); f_114d2c40();
  /* 114cb5c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb5ca mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 114cb5cd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114cb5d0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cb5d3 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
  /* 114cb5d6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 114cb5d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cb5db cmp dword ptr [edx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb5de sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 114cb5e1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cb5e4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb5e6 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114cb5e9 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 114cb5ec push edx */
  push32((uint32_t)(EDX));
  /* 114cb5ed mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cb5f0 push eax */
  push32((uint32_t)(EAX));
  /* 114cb5f1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb5f4 push ecx */
  push32((uint32_t)(ECX));
  /* 114cb5f5 call 0x114d2b40 */
  push32(0x114cb5fau); f_114d2b40();
  /* 114cb5fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb5fd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 114cb600 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 114cb603 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cb606 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114cb608 cmp dword ptr [ebp - 0x34], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb60b setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 114cb60e mov byte ptr [ebp - 0x30], cl */
  w8((uint32_t)(EBP + -0x30), (CL));
  /* 114cb611 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 114cb614 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 114cb617 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cb61a mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 114cb61d cmp dword ptr [ebp - 0x34], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb621 jl 0x114cb62b */
  if ((C.sf!=C.of)) goto L_114cb62b;
  /* 114cb623 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 114cb626 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb629 jl 0x114cb647 */
  if ((C.sf!=C.of)) goto L_114cb647;
L_114cb62b:;
  /* 114cb62b push 1 */
  push32((uint32_t)(0x1u));
  /* 114cb62d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 114cb630 push edx */
  push32((uint32_t)(EDX));
  /* 114cb631 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114cb634 push eax */
  push32((uint32_t)(EAX));
  /* 114cb635 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cb638 push ecx */
  push32((uint32_t)(ECX));
  /* 114cb639 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cb63c push edx */
  push32((uint32_t)(EDX));
  /* 114cb63d call 0x114cb280 */
  push32(0x114cb642u); f_114cb280();
  /* 114cb642 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb645 jmp 0x114cb681 */
  goto L_114cb681;
L_114cb647:;
  /* 114cb647 movsx eax, byte ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x30))));
  /* 114cb64b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cb64d je 0x114cb66b */
  if (C.zf) goto L_114cb66b;
L_114cb64f:;
  /* 114cb64f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb652 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114cb655 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb658 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb65b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114cb65e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cb660 je 0x114cb664 */
  if (C.zf) goto L_114cb664;
  /* 114cb662 jmp 0x114cb64f */
  goto L_114cb64f;
L_114cb664:;
  /* 114cb664 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb667 mov byte ptr [ecx - 2], 0 */
  w8((uint32_t)(ECX + -0x2), (0x0u));
L_114cb66b:;
  /* 114cb66b push 1 */
  push32((uint32_t)(0x1u));
  /* 114cb66d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 114cb670 push edx */
  push32((uint32_t)(EDX));
  /* 114cb671 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cb674 push eax */
  push32((uint32_t)(EAX));
  /* 114cb675 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cb678 push ecx */
  push32((uint32_t)(ECX));
  /* 114cb679 call 0x114cb460 */
  push32(0x114cb67eu); f_114cb460();
  /* 114cb67e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114cb681:;
  /* 114cb681 mov esp, ebp */
  ESP = (EBP);
  /* 114cb683 pop ebp */
  EBP = (pop32());
  /* 114cb684 ret  */
  ESPCHK(0x114cb5a0u, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x114cb690 (95 bytes, 40 insns) */
void f_114cb690(void) {
  FTRACE(0x114cb690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cb690 push ebp */
  push32((uint32_t)(EBP));
  /* 114cb691 mov ebp, esp */
  EBP = (ESP);
  /* 114cb693 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb697 je 0x114cb69f */
  if (C.zf) goto L_114cb69f;
  /* 114cb699 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb69d jne 0x114cb6b9 */
  if (!C.zf) goto L_114cb6b9;
L_114cb69f:;
  /* 114cb69f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114cb6a2 push eax */
  push32((uint32_t)(EAX));
  /* 114cb6a3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114cb6a6 push ecx */
  push32((uint32_t)(ECX));
  /* 114cb6a7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cb6aa push edx */
  push32((uint32_t)(EDX));
  /* 114cb6ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb6ae push eax */
  push32((uint32_t)(EAX));
  /* 114cb6af call 0x114cb200 */
  push32(0x114cb6b4u); f_114cb200();
  /* 114cb6b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb6b7 jmp 0x114cb6ed */
  goto L_114cb6ed;
L_114cb6b9:;
  /* 114cb6b9 cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb6bd jne 0x114cb6d5 */
  if (!C.zf) goto L_114cb6d5;
  /* 114cb6bf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114cb6c2 push ecx */
  push32((uint32_t)(ECX));
  /* 114cb6c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cb6c6 push edx */
  push32((uint32_t)(EDX));
  /* 114cb6c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb6ca push eax */
  push32((uint32_t)(EAX));
  /* 114cb6cb call 0x114cb3f0 */
  push32(0x114cb6d0u); f_114cb3f0();
  /* 114cb6d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb6d3 jmp 0x114cb6ed */
  goto L_114cb6ed;
L_114cb6d5:;
  /* 114cb6d5 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114cb6d8 push ecx */
  push32((uint32_t)(ECX));
  /* 114cb6d9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114cb6dc push edx */
  push32((uint32_t)(EDX));
  /* 114cb6dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cb6e0 push eax */
  push32((uint32_t)(EAX));
  /* 114cb6e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb6e4 push ecx */
  push32((uint32_t)(ECX));
  /* 114cb6e5 call 0x114cb5a0 */
  push32(0x114cb6eau); f_114cb5a0();
  /* 114cb6ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114cb6ed:;
  /* 114cb6ed pop ebp */
  EBP = (pop32());
  /* 114cb6ee ret  */
  ESPCHK(0x114cb690u, _esp0);
  ESP += 4; return;
}

/* __shift @ 0x114cb6f0 (46 bytes, 19 insns) */
void f_114cb6f0(void) {
  FTRACE(0x114cb6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cb6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 114cb6f1 mov ebp, esp */
  EBP = (ESP);
  /* 114cb6f3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb6f7 je 0x114cb71c */
  if (C.zf) goto L_114cb71c;
  /* 114cb6f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb6fc push eax */
  push32((uint32_t)(EAX));
  /* 114cb6fd call 0x114d0fb0 */
  push32(0x114cb702u); f_114d0fb0();
  /* 114cb702 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb705 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb708 push eax */
  push32((uint32_t)(EAX));
  /* 114cb709 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb70c push ecx */
  push32((uint32_t)(ECX));
  /* 114cb70d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb710 add edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb713 push edx */
  push32((uint32_t)(EDX));
  /* 114cb714 call 0x114d2e90 */
  push32(0x114cb719u); f_114d2e90();
  /* 114cb719 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114cb71c:;
  /* 114cb71c pop ebp */
  EBP = (pop32());
  /* 114cb71d ret  */
  ESPCHK(0x114cb6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b720 @ 0x114cb720 (55 bytes, 16 insns) */
void f_114cb720(void) {
  FTRACE(0x114cb720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cb720 push ebp */
  push32((uint32_t)(EBP));
  /* 114cb721 mov ebp, esp */
  EBP = (ESP);
  /* 114cb723 mov eax, dword ptr [0x114fcecc] */
  EAX = (r32((uint32_t)(0x114fcecc)));
  /* 114cb728 push eax */
  push32((uint32_t)(EAX));
  /* 114cb729 call dword ptr [0x11501424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501424))), 0x114cb72fu);
  /* 114cb72f mov ecx, dword ptr [0x114fcebc] */
  ECX = (r32((uint32_t)(0x114fcebc)));
  /* 114cb735 push ecx */
  push32((uint32_t)(ECX));
  /* 114cb736 call dword ptr [0x11501424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501424))), 0x114cb73cu);
  /* 114cb73c mov edx, dword ptr [0x114fceac] */
  EDX = (r32((uint32_t)(0x114fceac)));
  /* 114cb742 push edx */
  push32((uint32_t)(EDX));
  /* 114cb743 call dword ptr [0x11501424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501424))), 0x114cb749u);
  /* 114cb749 mov eax, dword ptr [0x114fce8c] */
  EAX = (r32((uint32_t)(0x114fce8c)));
  /* 114cb74e push eax */
  push32((uint32_t)(EAX));
  /* 114cb74f call dword ptr [0x11501424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501424))), 0x114cb755u);
  /* 114cb755 pop ebp */
  EBP = (pop32());
  /* 114cb756 ret  */
  ESPCHK(0x114cb720u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b760 @ 0x114cb760 (159 bytes, 47 insns) */
void f_114cb760(void) {
  FTRACE(0x114cb760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cb760 push ebp */
  push32((uint32_t)(EBP));
  /* 114cb761 mov ebp, esp */
  EBP = (ESP);
  /* 114cb763 push ecx */
  push32((uint32_t)(ECX));
  /* 114cb764 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114cb76b jmp 0x114cb776 */
  goto L_114cb776;
L_114cb76d:;
  /* 114cb76d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb770 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb773 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114cb776:;
  /* 114cb776 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb77a jge 0x114cb7c9 */
  if ((C.sf==C.of)) goto L_114cb7c9;
  /* 114cb77c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb77f cmp dword ptr [ecx*4 + 0x114fce88], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x114fce88))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb787 je 0x114cb7c7 */
  if (C.zf) goto L_114cb7c7;
  /* 114cb789 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb78d je 0x114cb7c7 */
  if (C.zf) goto L_114cb7c7;
  /* 114cb78f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb793 je 0x114cb7c7 */
  if (C.zf) goto L_114cb7c7;
  /* 114cb795 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb799 je 0x114cb7c7 */
  if (C.zf) goto L_114cb7c7;
  /* 114cb79b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb79f je 0x114cb7c7 */
  if (C.zf) goto L_114cb7c7;
  /* 114cb7a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb7a4 mov eax, dword ptr [edx*4 + 0x114fce88] */
  EAX = (r32((uint32_t)(EDX*4 + 0x114fce88)));
  /* 114cb7ab push eax */
  push32((uint32_t)(EAX));
  /* 114cb7ac call dword ptr [0x1150143c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150143c))), 0x114cb7b2u);
  /* 114cb7b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 114cb7b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb7b7 mov edx, dword ptr [ecx*4 + 0x114fce88] */
  EDX = (r32((uint32_t)(ECX*4 + 0x114fce88)));
  /* 114cb7be push edx */
  push32((uint32_t)(EDX));
  /* 114cb7bf call 0x114cc390 */
  push32(0x114cb7c4u); f_114cc390();
  /* 114cb7c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114cb7c7:;
  /* 114cb7c7 jmp 0x114cb76d */
  goto L_114cb76d;
L_114cb7c9:;
  /* 114cb7c9 mov eax, dword ptr [0x114fceac] */
  EAX = (r32((uint32_t)(0x114fceac)));
  /* 114cb7ce push eax */
  push32((uint32_t)(EAX));
  /* 114cb7cf call dword ptr [0x1150143c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150143c))), 0x114cb7d5u);
  /* 114cb7d5 mov ecx, dword ptr [0x114fcebc] */
  ECX = (r32((uint32_t)(0x114fcebc)));
  /* 114cb7db push ecx */
  push32((uint32_t)(ECX));
  /* 114cb7dc call dword ptr [0x1150143c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150143c))), 0x114cb7e2u);
  /* 114cb7e2 mov edx, dword ptr [0x114fcecc] */
  EDX = (r32((uint32_t)(0x114fcecc)));
  /* 114cb7e8 push edx */
  push32((uint32_t)(EDX));
  /* 114cb7e9 call dword ptr [0x1150143c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150143c))), 0x114cb7efu);
  /* 114cb7ef mov eax, dword ptr [0x114fce8c] */
  EAX = (r32((uint32_t)(0x114fce8c)));
  /* 114cb7f4 push eax */
  push32((uint32_t)(EAX));
  /* 114cb7f5 call dword ptr [0x1150143c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150143c))), 0x114cb7fbu);
  /* 114cb7fb mov esp, ebp */
  ESP = (EBP);
  /* 114cb7fd pop ebp */
  EBP = (pop32());
  /* 114cb7fe ret  */
  ESPCHK(0x114cb760u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b800 @ 0x114cb800 (151 bytes, 46 insns) */
void f_114cb800(void) {
  FTRACE(0x114cb800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cb800 push ebp */
  push32((uint32_t)(EBP));
  /* 114cb801 mov ebp, esp */
  EBP = (ESP);
  /* 114cb803 push ecx */
  push32((uint32_t)(ECX));
  /* 114cb804 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb807 cmp dword ptr [eax*4 + 0x114fce88], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x114fce88))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb80f jne 0x114cb882 */
  if (!C.zf) goto L_114cb882;
  /* 114cb811 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 114cb816 push 0x114f9738 */
  push32((uint32_t)(0x114f9738u));
  /* 114cb81b push 2 */
  push32((uint32_t)(0x2u));
  /* 114cb81d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 114cb81f call 0x114cb900 */
  push32(0x114cb824u); f_114cb900();
  /* 114cb824 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb827 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114cb82a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb82e jne 0x114cb83a */
  if (!C.zf) goto L_114cb83a;
  /* 114cb830 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 114cb832 call 0x114ca370 */
  push32(0x114cb837u); f_114ca370();
  /* 114cb837 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114cb83a:;
  /* 114cb83a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 114cb83c call 0x114cb800 */
  push32(0x114cb841u); f_114cb800();
  /* 114cb841 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb844 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb847 cmp dword ptr [ecx*4 + 0x114fce88], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x114fce88))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb84f jne 0x114cb86a */
  if (!C.zf) goto L_114cb86a;
  /* 114cb851 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb854 push edx */
  push32((uint32_t)(EDX));
  /* 114cb855 call dword ptr [0x11501424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501424))), 0x114cb85bu);
  /* 114cb85b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb85e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb861 mov dword ptr [eax*4 + 0x114fce88], ecx */
  w32((uint32_t)(EAX*4 + 0x114fce88), (ECX));
  /* 114cb868 jmp 0x114cb878 */
  goto L_114cb878;
L_114cb86a:;
  /* 114cb86a push 2 */
  push32((uint32_t)(0x2u));
  /* 114cb86c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb86f push edx */
  push32((uint32_t)(EDX));
  /* 114cb870 call 0x114cc390 */
  push32(0x114cb875u); f_114cc390();
  /* 114cb875 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114cb878:;
  /* 114cb878 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 114cb87a call 0x114cb8a0 */
  push32(0x114cb87fu); f_114cb8a0();
  /* 114cb87f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114cb882:;
  /* 114cb882 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb885 mov ecx, dword ptr [eax*4 + 0x114fce88] */
  ECX = (r32((uint32_t)(EAX*4 + 0x114fce88)));
  /* 114cb88c push ecx */
  push32((uint32_t)(ECX));
  /* 114cb88d call dword ptr [0x11501440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501440))), 0x114cb893u);
  /* 114cb893 mov esp, ebp */
  ESP = (EBP);
  /* 114cb895 pop ebp */
  EBP = (pop32());
  /* 114cb896 ret  */
  ESPCHK(0x114cb800u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8a0 @ 0x114cb8a0 (22 bytes, 8 insns) */
void f_114cb8a0(void) {
  FTRACE(0x114cb8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cb8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 114cb8a1 mov ebp, esp */
  EBP = (ESP);
  /* 114cb8a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb8a6 mov ecx, dword ptr [eax*4 + 0x114fce88] */
  ECX = (r32((uint32_t)(EAX*4 + 0x114fce88)));
  /* 114cb8ad push ecx */
  push32((uint32_t)(ECX));
  /* 114cb8ae call dword ptr [0x11501444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501444))), 0x114cb8b4u);
  /* 114cb8b4 pop ebp */
  EBP = (pop32());
  /* 114cb8b5 ret  */
  ESPCHK(0x114cb8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8c0 @ 0x114cb8c0 (26 bytes, 10 insns) */
void f_114cb8c0(void) {
  FTRACE(0x114cb8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cb8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 114cb8c1 mov ebp, esp */
  EBP = (ESP);
  /* 114cb8c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb8c6 push eax */
  push32((uint32_t)(EAX));
  /* 114cb8c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cb8c9 call dword ptr [0x1150144c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150144c))), 0x114cb8cfu);
  /* 114cb8cf push 0xff */
  push32((uint32_t)(0xffu));
  /* 114cb8d4 call dword ptr [0x11501448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501448))), 0x114cb8dau);
  /* 114cb8da pop ebp */
  EBP = (pop32());
  /* 114cb8db ret  */
  ESPCHK(0x114cb8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8e0 @ 0x114cb8e0 (29 bytes, 13 insns) */
void f_114cb8e0(void) {
  FTRACE(0x114cb8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cb8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 114cb8e1 mov ebp, esp */
  EBP = (ESP);
  /* 114cb8e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cb8e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cb8e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 114cb8e9 mov eax, dword ptr [0x114ff320] */
  EAX = (r32((uint32_t)(0x114ff320)));
  /* 114cb8ee push eax */
  push32((uint32_t)(EAX));
  /* 114cb8ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb8f2 push ecx */
  push32((uint32_t)(ECX));
  /* 114cb8f3 call 0x114cb950 */
  push32(0x114cb8f8u); f_114cb950();
  /* 114cb8f8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb8fb pop ebp */
  EBP = (pop32());
  /* 114cb8fc ret  */
  ESPCHK(0x114cb8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b900 @ 0x114cb900 (35 bytes, 16 insns) */
void f_114cb900(void) {
  FTRACE(0x114cb900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cb900 push ebp */
  push32((uint32_t)(EBP));
  /* 114cb901 mov ebp, esp */
  EBP = (ESP);
  /* 114cb903 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114cb906 push eax */
  push32((uint32_t)(EAX));
  /* 114cb907 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cb90a push ecx */
  push32((uint32_t)(ECX));
  /* 114cb90b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cb90e push edx */
  push32((uint32_t)(EDX));
  /* 114cb90f mov eax, dword ptr [0x114ff320] */
  EAX = (r32((uint32_t)(0x114ff320)));
  /* 114cb914 push eax */
  push32((uint32_t)(EAX));
  /* 114cb915 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb918 push ecx */
  push32((uint32_t)(ECX));
  /* 114cb919 call 0x114cb950 */
  push32(0x114cb91eu); f_114cb950();
  /* 114cb91e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb921 pop ebp */
  EBP = (pop32());
  /* 114cb922 ret  */
  ESPCHK(0x114cb900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b930 @ 0x114cb930 (27 bytes, 13 insns) */
void f_114cb930(void) {
  FTRACE(0x114cb930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cb930 push ebp */
  push32((uint32_t)(EBP));
  /* 114cb931 mov ebp, esp */
  EBP = (ESP);
  /* 114cb933 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cb935 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cb937 push 1 */
  push32((uint32_t)(0x1u));
  /* 114cb939 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cb93c push eax */
  push32((uint32_t)(EAX));
  /* 114cb93d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb940 push ecx */
  push32((uint32_t)(ECX));
  /* 114cb941 call 0x114cb950 */
  push32(0x114cb946u); f_114cb950();
  /* 114cb946 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb949 pop ebp */
  EBP = (pop32());
  /* 114cb94a ret  */
  ESPCHK(0x114cb930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b950 @ 0x114cb950 (94 bytes, 38 insns) */
void f_114cb950(void) {
  FTRACE(0x114cb950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cb950 push ebp */
  push32((uint32_t)(EBP));
  /* 114cb951 mov ebp, esp */
  EBP = (ESP);
  /* 114cb953 push ecx */
  push32((uint32_t)(ECX));
L_114cb954:;
  /* 114cb954 push 9 */
  push32((uint32_t)(0x9u));
  /* 114cb956 call 0x114cb800 */
  push32(0x114cb95bu); f_114cb800();
  /* 114cb95b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb95e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114cb961 push eax */
  push32((uint32_t)(EAX));
  /* 114cb962 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114cb965 push ecx */
  push32((uint32_t)(ECX));
  /* 114cb966 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cb969 push edx */
  push32((uint32_t)(EDX));
  /* 114cb96a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb96d push eax */
  push32((uint32_t)(EAX));
  /* 114cb96e call 0x114cb9d0 */
  push32(0x114cb973u); f_114cb9d0();
  /* 114cb973 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb976 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114cb979 push 9 */
  push32((uint32_t)(0x9u));
  /* 114cb97b call 0x114cb8a0 */
  push32(0x114cb980u); f_114cb8a0();
  /* 114cb980 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb983 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb987 jne 0x114cb98f */
  if (!C.zf) goto L_114cb98f;
  /* 114cb989 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cb98d jne 0x114cb994 */
  if (!C.zf) goto L_114cb994;
L_114cb98f:;
  /* 114cb98f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cb992 jmp 0x114cb9aa */
  goto L_114cb9aa;
L_114cb994:;
  /* 114cb994 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb997 push ecx */
  push32((uint32_t)(ECX));
  /* 114cb998 call 0x114d3220 */
  push32(0x114cb99du); f_114d3220();
  /* 114cb99d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb9a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cb9a2 jne 0x114cb9a8 */
  if (!C.zf) goto L_114cb9a8;
  /* 114cb9a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cb9a6 jmp 0x114cb9aa */
  goto L_114cb9aa;
L_114cb9a8:;
  /* 114cb9a8 jmp 0x114cb954 */
  goto L_114cb954;
L_114cb9aa:;
  /* 114cb9aa mov esp, ebp */
  ESP = (EBP);
  /* 114cb9ac pop ebp */
  EBP = (pop32());
  /* 114cb9ad ret  */
  ESPCHK(0x114cb950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9b0 @ 0x114cb9b0 (23 bytes, 11 insns) */
void f_114cb9b0(void) {
  FTRACE(0x114cb9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cb9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 114cb9b1 mov ebp, esp */
  EBP = (ESP);
  /* 114cb9b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cb9b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cb9b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 114cb9b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cb9bc push eax */
  push32((uint32_t)(EAX));
  /* 114cb9bd call 0x114cb9d0 */
  push32(0x114cb9c2u); f_114cb9d0();
  /* 114cb9c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cb9c5 pop ebp */
  EBP = (pop32());
  /* 114cb9c6 ret  */
  ESPCHK(0x114cb9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9d0 @ 0x114cb9d0 (787 bytes, 254 insns) */
void f_114cb9d0(void) {
  FTRACE(0x114cb9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cb9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114cb9d1 mov ebp, esp */
  EBP = (ESP);
  /* 114cb9d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cb9d6 push ebx */
  push32((uint32_t)(EBX));
  /* 114cb9d7 push esi */
  push32((uint32_t)(ESI));
  /* 114cb9d8 push edi */
  push32((uint32_t)(EDI));
  /* 114cb9d9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 114cb9e0 mov eax, dword ptr [0x114fcf48] */
  EAX = (r32((uint32_t)(0x114fcf48)));
  /* 114cb9e5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 114cb9e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cb9ea je 0x114cba1c */
  if (C.zf) goto L_114cba1c;
L_114cb9ec:;
  /* 114cb9ec call 0x114ccaa0 */
  push32(0x114cb9f1u); f_114ccaa0();
  /* 114cb9f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cb9f3 jne 0x114cba16 */
  if (!C.zf) goto L_114cba16;
  /* 114cb9f5 push 0x114f9828 */
  push32((uint32_t)(0x114f9828u));
  /* 114cb9fa push 0 */
  push32((uint32_t)(0x0u));
  /* 114cb9fc push 0x141 */
  push32((uint32_t)(0x141u));
  /* 114cba01 push 0x114f981c */
  push32((uint32_t)(0x114f981cu));
  /* 114cba06 push 2 */
  push32((uint32_t)(0x2u));
  /* 114cba08 call 0x114ca4c0 */
  push32(0x114cba0du); f_114ca4c0();
  /* 114cba0d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cba10 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cba13 jne 0x114cba16 */
  if (!C.zf) goto L_114cba16;
  /* 114cba15 int3  */
  x86_unimpl("int3 @ 0x114cba15");
L_114cba16:;
  /* 114cba16 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114cba18 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114cba1a jne 0x114cb9ec */
  if (!C.zf) goto L_114cb9ec;
L_114cba1c:;
  /* 114cba1c mov edx, dword ptr [0x114fcf4c] */
  EDX = (r32((uint32_t)(0x114fcf4c)));
  /* 114cba22 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 114cba25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cba28 cmp eax, dword ptr [0x114fcf50] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114fcf50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cba2e jne 0x114cba31 */
  if (!C.zf) goto L_114cba31;
  /* 114cba30 int3  */
  x86_unimpl("int3 @ 0x114cba30");
L_114cba31:;
  /* 114cba31 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114cba34 push ecx */
  push32((uint32_t)(ECX));
  /* 114cba35 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cba38 push edx */
  push32((uint32_t)(EDX));
  /* 114cba39 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cba3c push eax */
  push32((uint32_t)(EAX));
  /* 114cba3d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cba40 push ecx */
  push32((uint32_t)(ECX));
  /* 114cba41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cba44 push edx */
  push32((uint32_t)(EDX));
  /* 114cba45 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cba47 push 1 */
  push32((uint32_t)(0x1u));
  /* 114cba49 call dword ptr [0x114fd290] */
  call_ind((uint32_t)(r32((uint32_t)(0x114fd290))), 0x114cba4fu);
  /* 114cba4f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cba52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cba54 jne 0x114cbab4 */
  if (!C.zf) goto L_114cbab4;
  /* 114cba56 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cba5a je 0x114cba87 */
  if (C.zf) goto L_114cba87;
L_114cba5c:;
  /* 114cba5c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114cba5f push eax */
  push32((uint32_t)(EAX));
  /* 114cba60 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cba63 push ecx */
  push32((uint32_t)(ECX));
  /* 114cba64 push 0x114f97e4 */
  push32((uint32_t)(0x114f97e4u));
  /* 114cba69 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cba6b push 0 */
  push32((uint32_t)(0x0u));
  /* 114cba6d push 0 */
  push32((uint32_t)(0x0u));
  /* 114cba6f push 0 */
  push32((uint32_t)(0x0u));
  /* 114cba71 call 0x114ca4c0 */
  push32(0x114cba76u); f_114ca4c0();
  /* 114cba76 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cba79 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cba7c jne 0x114cba7f */
  if (!C.zf) goto L_114cba7f;
  /* 114cba7e int3  */
  x86_unimpl("int3 @ 0x114cba7e");
L_114cba7f:;
  /* 114cba7f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114cba81 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cba83 jne 0x114cba5c */
  if (!C.zf) goto L_114cba5c;
  /* 114cba85 jmp 0x114cbaad */
  goto L_114cbaad;
L_114cba87:;
  /* 114cba87 push 0x114f97c0 */
  push32((uint32_t)(0x114f97c0u));
  /* 114cba8c push 0x114f97bc */
  push32((uint32_t)(0x114f97bcu));
  /* 114cba91 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cba93 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cba95 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cba97 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cba99 call 0x114ca4c0 */
  push32(0x114cba9eu); f_114ca4c0();
  /* 114cba9e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cbaa1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cbaa4 jne 0x114cbaa7 */
  if (!C.zf) goto L_114cbaa7;
  /* 114cbaa6 int3  */
  x86_unimpl("int3 @ 0x114cbaa6");
L_114cbaa7:;
  /* 114cbaa7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cbaa9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cbaab jne 0x114cba87 */
  if (!C.zf) goto L_114cba87;
L_114cbaad:;
  /* 114cbaad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cbaaf jmp 0x114cbcdc */
  goto L_114cbcdc;
L_114cbab4:;
  /* 114cbab4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cbab7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114cbabd cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cbac0 je 0x114cbad6 */
  if (C.zf) goto L_114cbad6;
  /* 114cbac2 mov edx, dword ptr [0x114fcf48] */
  EDX = (r32((uint32_t)(0x114fcf48)));
  /* 114cbac8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 114cbacb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cbacd jne 0x114cbad6 */
  if (!C.zf) goto L_114cbad6;
  /* 114cbacf mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_114cbad6:;
  /* 114cbad6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cbada ja 0x114cbae7 */
  if ((!C.cf&&!C.zf)) goto L_114cbae7;
  /* 114cbadc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cbadf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cbae2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cbae5 jbe 0x114cbb13 */
  if ((C.cf||C.zf)) goto L_114cbb13;
L_114cbae7:;
  /* 114cbae7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cbaea push ecx */
  push32((uint32_t)(ECX));
  /* 114cbaeb push 0x114f9798 */
  push32((uint32_t)(0x114f9798u));
  /* 114cbaf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cbaf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cbaf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cbaf6 push 1 */
  push32((uint32_t)(0x1u));
  /* 114cbaf8 call 0x114ca4c0 */
  push32(0x114cbafdu); f_114ca4c0();
  /* 114cbafd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cbb00 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cbb03 jne 0x114cbb06 */
  if (!C.zf) goto L_114cbb06;
  /* 114cbb05 int3  */
  x86_unimpl("int3 @ 0x114cbb05");
L_114cbb06:;
  /* 114cbb06 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114cbb08 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cbb0a jne 0x114cbae7 */
  if (!C.zf) goto L_114cbae7;
  /* 114cbb0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cbb0e jmp 0x114cbcdc */
  goto L_114cbcdc;
L_114cbb13:;
  /* 114cbb13 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cbb16 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114cbb1b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cbb1e je 0x114cbb60 */
  if (C.zf) goto L_114cbb60;
  /* 114cbb20 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cbb24 je 0x114cbb60 */
  if (C.zf) goto L_114cbb60;
  /* 114cbb26 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cbb29 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114cbb2f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cbb32 je 0x114cbb60 */
  if (C.zf) goto L_114cbb60;
  /* 114cbb34 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cbb38 je 0x114cbb60 */
  if (C.zf) goto L_114cbb60;
L_114cbb3a:;
  /* 114cbb3a push 0x114f9764 */
  push32((uint32_t)(0x114f9764u));
  /* 114cbb3f push 0x114f97bc */
  push32((uint32_t)(0x114f97bcu));
  /* 114cbb44 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cbb46 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cbb48 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cbb4a push 1 */
  push32((uint32_t)(0x1u));
  /* 114cbb4c call 0x114ca4c0 */
  push32(0x114cbb51u); f_114ca4c0();
  /* 114cbb51 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cbb54 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cbb57 jne 0x114cbb5a */
  if (!C.zf) goto L_114cbb5a;
  /* 114cbb59 int3  */
  x86_unimpl("int3 @ 0x114cbb59");
L_114cbb5a:;
  /* 114cbb5a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114cbb5c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cbb5e jne 0x114cbb3a */
  if (!C.zf) goto L_114cbb3a;
L_114cbb60:;
  /* 114cbb60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cbb63 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cbb66 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 114cbb69 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114cbb6c push ecx */
  push32((uint32_t)(ECX));
  /* 114cbb6d call 0x114d32d0 */
  push32(0x114cbb72u); f_114d32d0();
  /* 114cbb72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cbb75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114cbb78 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cbb7c jne 0x114cbb85 */
  if (!C.zf) goto L_114cbb85;
  /* 114cbb7e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cbb80 jmp 0x114cbcdc */
  goto L_114cbcdc;
L_114cbb85:;
  /* 114cbb85 mov edx, dword ptr [0x114fcf4c] */
  EDX = (r32((uint32_t)(0x114fcf4c)));
  /* 114cbb8b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cbb8e mov dword ptr [0x114fcf4c], edx */
  w32((uint32_t)(0x114fcf4c), (EDX));
  /* 114cbb94 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cbb98 je 0x114cbbe3 */
  if (C.zf) goto L_114cbbe3;
  /* 114cbb9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cbb9d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 114cbba3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cbba6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 114cbbad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cbbb0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 114cbbb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cbbba mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 114cbbc1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cbbc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cbbc7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 114cbbca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cbbcd mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 114cbbd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cbbd7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 114cbbde jmp 0x114cbc83 */
  goto L_114cbc83;
L_114cbbe3:;
  /* 114cbbe3 mov edx, dword ptr [0x114ff19c] */
  EDX = (r32((uint32_t)(0x114ff19c)));
  /* 114cbbe9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cbbec mov dword ptr [0x114ff19c], edx */
  w32((uint32_t)(0x114ff19c), (EDX));
  /* 114cbbf2 mov eax, dword ptr [0x114ff1a4] */
  EAX = (r32((uint32_t)(0x114ff1a4)));
  /* 114cbbf7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cbbfa mov dword ptr [0x114ff1a4], eax */
  w32((uint32_t)(0x114ff1a4), (EAX));
  /* 114cbbff mov ecx, dword ptr [0x114ff1a4] */
  ECX = (r32((uint32_t)(0x114ff1a4)));
  /* 114cbc05 cmp ecx, dword ptr [0x114ff1a8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x114ff1a8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cbc0b jbe 0x114cbc19 */
  if ((C.cf||C.zf)) goto L_114cbc19;
  /* 114cbc0d mov edx, dword ptr [0x114ff1a4] */
  EDX = (r32((uint32_t)(0x114ff1a4)));
  /* 114cbc13 mov dword ptr [0x114ff1a8], edx */
  w32((uint32_t)(0x114ff1a8), (EDX));
L_114cbc19:;
  /* 114cbc19 cmp dword ptr [0x114ff1a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff1a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cbc20 je 0x114cbc2f */
  if (C.zf) goto L_114cbc2f;
  /* 114cbc22 mov eax, dword ptr [0x114ff1a0] */
  EAX = (r32((uint32_t)(0x114ff1a0)));
  /* 114cbc27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cbc2a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 114cbc2d jmp 0x114cbc38 */
  goto L_114cbc38;
L_114cbc2f:;
  /* 114cbc2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cbc32 mov dword ptr [0x114ff198], edx */
  w32((uint32_t)(0x114ff198), (EDX));
L_114cbc38:;
  /* 114cbc38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cbc3b mov ecx, dword ptr [0x114ff1a0] */
  ECX = (r32((uint32_t)(0x114ff1a0)));
  /* 114cbc41 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 114cbc43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cbc46 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 114cbc4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cbc50 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cbc53 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 114cbc56 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cbc59 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114cbc5c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 114cbc5f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cbc62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cbc65 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 114cbc68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cbc6b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cbc6e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 114cbc71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cbc74 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cbc77 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 114cbc7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cbc7d mov dword ptr [0x114ff1a0], ecx */
  w32((uint32_t)(0x114ff1a0), (ECX));
L_114cbc83:;
  /* 114cbc83 push 4 */
  push32((uint32_t)(0x4u));
  /* 114cbc85 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114cbc87 mov dl, byte ptr [0x114fcf54] */
  DL = (r8((uint32_t)(0x114fcf54)));
  /* 114cbc8d push edx */
  push32((uint32_t)(EDX));
  /* 114cbc8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cbc91 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cbc94 push eax */
  push32((uint32_t)(EAX));
  /* 114cbc95 call 0x114d2e30 */
  push32(0x114cbc9au); f_114d2e30();
  /* 114cbc9a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cbc9d push 4 */
  push32((uint32_t)(0x4u));
  /* 114cbc9f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114cbca1 mov cl, byte ptr [0x114fcf54] */
  CL = (r8((uint32_t)(0x114fcf54)));
  /* 114cbca7 push ecx */
  push32((uint32_t)(ECX));
  /* 114cbca8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cbcab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cbcae lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 114cbcb2 push ecx */
  push32((uint32_t)(ECX));
  /* 114cbcb3 call 0x114d2e30 */
  push32(0x114cbcb8u); f_114d2e30();
  /* 114cbcb8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cbcbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cbcbe push edx */
  push32((uint32_t)(EDX));
  /* 114cbcbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cbcc1 mov al, byte ptr [0x114fcf56] */
  AL = (r8((uint32_t)(0x114fcf56)));
  /* 114cbcc6 push eax */
  push32((uint32_t)(EAX));
  /* 114cbcc7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cbcca add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cbccd push ecx */
  push32((uint32_t)(ECX));
  /* 114cbcce call 0x114d2e30 */
  push32(0x114cbcd3u); f_114d2e30();
  /* 114cbcd3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cbcd6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cbcd9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_114cbcdc:;
  /* 114cbcdc pop edi */
  EDI = (pop32());
  /* 114cbcdd pop esi */
  ESI = (pop32());
  /* 114cbcde pop ebx */
  EBX = (pop32());
  /* 114cbcdf mov esp, ebp */
  ESP = (EBP);
  /* 114cbce1 pop ebp */
  EBP = (pop32());
  /* 114cbce2 ret  */
  ESPCHK(0x114cb9d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bcf0 @ 0x114cbcf0 (27 bytes, 13 insns) */
void f_114cbcf0(void) {
  FTRACE(0x114cbcf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cbcf0 push ebp */
  push32((uint32_t)(EBP));
  /* 114cbcf1 mov ebp, esp */
  EBP = (ESP);
  /* 114cbcf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cbcf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cbcf7 push 1 */
  push32((uint32_t)(0x1u));
  /* 114cbcf9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cbcfc push eax */
  push32((uint32_t)(EAX));
  /* 114cbcfd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cbd00 push ecx */
  push32((uint32_t)(ECX));
  /* 114cbd01 call 0x114cbd10 */
  push32(0x114cbd06u); f_114cbd10();
  /* 114cbd06 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cbd09 pop ebp */
  EBP = (pop32());
  /* 114cbd0a ret  */
  ESPCHK(0x114cbcf0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x114cbd10 (96 bytes, 37 insns) */
void f_114cbd10(void) {
  FTRACE(0x114cbd10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cbd10 push ebp */
  push32((uint32_t)(EBP));
  /* 114cbd11 mov ebp, esp */
  EBP = (ESP);
  /* 114cbd13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cbd16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cbd19 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114cbd1d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 114cbd20 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114cbd23 push ecx */
  push32((uint32_t)(ECX));
  /* 114cbd24 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114cbd27 push edx */
  push32((uint32_t)(EDX));
  /* 114cbd28 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cbd2b push eax */
  push32((uint32_t)(EAX));
  /* 114cbd2c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cbd2f push ecx */
  push32((uint32_t)(ECX));
  /* 114cbd30 call 0x114cb900 */
  push32(0x114cbd35u); f_114cb900();
  /* 114cbd35 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cbd38 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114cbd3b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cbd3f je 0x114cbd69 */
  if (C.zf) goto L_114cbd69;
  /* 114cbd41 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cbd44 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 114cbd47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114cbd4a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cbd4d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114cbd50:;
  /* 114cbd50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114cbd53 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cbd56 jae 0x114cbd69 */
  if (!C.cf) goto L_114cbd69;
  /* 114cbd58 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114cbd5b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 114cbd5e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114cbd61 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cbd64 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114cbd67 jmp 0x114cbd50 */
  goto L_114cbd50;
L_114cbd69:;
  /* 114cbd69 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cbd6c mov esp, ebp */
  ESP = (EBP);
  /* 114cbd6e pop ebp */
  EBP = (pop32());
  /* 114cbd6f ret  */
  ESPCHK(0x114cbd10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd70 @ 0x114cbd70 (27 bytes, 13 insns) */
void f_114cbd70(void) {
  FTRACE(0x114cbd70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cbd70 push ebp */
  push32((uint32_t)(EBP));
  /* 114cbd71 mov ebp, esp */
  EBP = (ESP);
  /* 114cbd73 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cbd75 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cbd77 push 1 */
  push32((uint32_t)(0x1u));
  /* 114cbd79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cbd7c push eax */
  push32((uint32_t)(EAX));
  /* 114cbd7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cbd80 push ecx */
  push32((uint32_t)(ECX));
  /* 114cbd81 call 0x114cbd90 */
  push32(0x114cbd86u); f_114cbd90();
  /* 114cbd86 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cbd89 pop ebp */
  EBP = (pop32());
  /* 114cbd8a ret  */
  ESPCHK(0x114cbd70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd90 @ 0x114cbd90 (64 bytes, 27 insns) */
void f_114cbd90(void) {
  FTRACE(0x114cbd90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cbd90 push ebp */
  push32((uint32_t)(EBP));
  /* 114cbd91 mov ebp, esp */
  EBP = (ESP);
  /* 114cbd93 push ecx */
  push32((uint32_t)(ECX));
  /* 114cbd94 push 9 */
  push32((uint32_t)(0x9u));
  /* 114cbd96 call 0x114cb800 */
  push32(0x114cbd9bu); f_114cb800();
  /* 114cbd9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cbd9e push 1 */
  push32((uint32_t)(0x1u));
  /* 114cbda0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114cbda3 push eax */
  push32((uint32_t)(EAX));
  /* 114cbda4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114cbda7 push ecx */
  push32((uint32_t)(ECX));
  /* 114cbda8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cbdab push edx */
  push32((uint32_t)(EDX));
  /* 114cbdac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cbdaf push eax */
  push32((uint32_t)(EAX));
  /* 114cbdb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cbdb3 push ecx */
  push32((uint32_t)(ECX));
  /* 114cbdb4 call 0x114cbdd0 */
  push32(0x114cbdb9u); f_114cbdd0();
  /* 114cbdb9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cbdbc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114cbdbf push 9 */
  push32((uint32_t)(0x9u));
  /* 114cbdc1 call 0x114cb8a0 */
  push32(0x114cbdc6u); f_114cb8a0();
  /* 114cbdc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cbdc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cbdcc mov esp, ebp */
  ESP = (EBP);
  /* 114cbdce pop ebp */
  EBP = (pop32());
  /* 114cbdcf ret  */
  ESPCHK(0x114cbd90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bdd0 @ 0x114cbdd0 (1297 bytes, 431 insns) */
void f_114cbdd0(void) {
  FTRACE(0x114cbdd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cbdd0 push ebp */
  push32((uint32_t)(EBP));
  /* 114cbdd1 mov ebp, esp */
  EBP = (ESP);
  /* 114cbdd3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cbdd6 push ebx */
  push32((uint32_t)(EBX));
  /* 114cbdd7 push esi */
  push32((uint32_t)(ESI));
  /* 114cbdd8 push edi */
  push32((uint32_t)(EDI));
  /* 114cbdd9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 114cbde0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cbde4 jne 0x114cbe03 */
  if (!C.zf) goto L_114cbe03;
  /* 114cbde6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114cbde9 push eax */
  push32((uint32_t)(EAX));
  /* 114cbdea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114cbded push ecx */
  push32((uint32_t)(ECX));
  /* 114cbdee mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cbdf1 push edx */
  push32((uint32_t)(EDX));
  /* 114cbdf2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cbdf5 push eax */
  push32((uint32_t)(EAX));
  /* 114cbdf6 call 0x114cb900 */
  push32(0x114cbdfbu); f_114cb900();
  /* 114cbdfb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cbdfe jmp 0x114cc2da */
  goto L_114cc2da;
L_114cbe03:;
  /* 114cbe03 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cbe07 je 0x114cbe26 */
  if (C.zf) goto L_114cbe26;
  /* 114cbe09 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cbe0d jne 0x114cbe26 */
  if (!C.zf) goto L_114cbe26;
  /* 114cbe0f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cbe12 push ecx */
  push32((uint32_t)(ECX));
  /* 114cbe13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cbe16 push edx */
  push32((uint32_t)(EDX));
  /* 114cbe17 call 0x114cc390 */
  push32(0x114cbe1cu); f_114cc390();
  /* 114cbe1c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cbe1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cbe21 jmp 0x114cc2da */
  goto L_114cc2da;
L_114cbe26:;
  /* 114cbe26 mov eax, dword ptr [0x114fcf48] */
  EAX = (r32((uint32_t)(0x114fcf48)));
  /* 114cbe2b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 114cbe2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cbe30 je 0x114cbe62 */
  if (C.zf) goto L_114cbe62;
L_114cbe32:;
  /* 114cbe32 call 0x114ccaa0 */
  push32(0x114cbe37u); f_114ccaa0();
  /* 114cbe37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cbe39 jne 0x114cbe5c */
  if (!C.zf) goto L_114cbe5c;
  /* 114cbe3b push 0x114f9828 */
  push32((uint32_t)(0x114f9828u));
  /* 114cbe40 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cbe42 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 114cbe47 push 0x114f981c */
  push32((uint32_t)(0x114f981cu));
  /* 114cbe4c push 2 */
  push32((uint32_t)(0x2u));
  /* 114cbe4e call 0x114ca4c0 */
  push32(0x114cbe53u); f_114ca4c0();
  /* 114cbe53 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cbe56 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cbe59 jne 0x114cbe5c */
  if (!C.zf) goto L_114cbe5c;
  /* 114cbe5b int3  */
  x86_unimpl("int3 @ 0x114cbe5b");
L_114cbe5c:;
  /* 114cbe5c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114cbe5e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114cbe60 jne 0x114cbe32 */
  if (!C.zf) goto L_114cbe32;
L_114cbe62:;
  /* 114cbe62 mov edx, dword ptr [0x114fcf4c] */
  EDX = (r32((uint32_t)(0x114fcf4c)));
  /* 114cbe68 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 114cbe6b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114cbe6e cmp eax, dword ptr [0x114fcf50] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114fcf50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cbe74 jne 0x114cbe77 */
  if (!C.zf) goto L_114cbe77;
  /* 114cbe76 int3  */
  x86_unimpl("int3 @ 0x114cbe76");
L_114cbe77:;
  /* 114cbe77 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114cbe7a push ecx */
  push32((uint32_t)(ECX));
  /* 114cbe7b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114cbe7e push edx */
  push32((uint32_t)(EDX));
  /* 114cbe7f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114cbe82 push eax */
  push32((uint32_t)(EAX));
  /* 114cbe83 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cbe86 push ecx */
  push32((uint32_t)(ECX));
  /* 114cbe87 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cbe8a push edx */
  push32((uint32_t)(EDX));
  /* 114cbe8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cbe8e push eax */
  push32((uint32_t)(EAX));
  /* 114cbe8f push 2 */
  push32((uint32_t)(0x2u));
  /* 114cbe91 call dword ptr [0x114fd290] */
  call_ind((uint32_t)(r32((uint32_t)(0x114fd290))), 0x114cbe97u);
  /* 114cbe97 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cbe9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cbe9c jne 0x114cbefc */
  if (!C.zf) goto L_114cbefc;
  /* 114cbe9e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cbea2 je 0x114cbecf */
  if (C.zf) goto L_114cbecf;
L_114cbea4:;
  /* 114cbea4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114cbea7 push ecx */
  push32((uint32_t)(ECX));
  /* 114cbea8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114cbeab push edx */
  push32((uint32_t)(EDX));
  /* 114cbeac push 0x114f99a4 */
  push32((uint32_t)(0x114f99a4u));
  /* 114cbeb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cbeb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cbeb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cbeb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cbeb9 call 0x114ca4c0 */
  push32(0x114cbebeu); f_114ca4c0();
  /* 114cbebe add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cbec1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cbec4 jne 0x114cbec7 */
  if (!C.zf) goto L_114cbec7;
  /* 114cbec6 int3  */
  x86_unimpl("int3 @ 0x114cbec6");
L_114cbec7:;
  /* 114cbec7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cbec9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cbecb jne 0x114cbea4 */
  if (!C.zf) goto L_114cbea4;
  /* 114cbecd jmp 0x114cbef5 */
  goto L_114cbef5;
L_114cbecf:;
  /* 114cbecf push 0x114f9980 */
  push32((uint32_t)(0x114f9980u));
  /* 114cbed4 push 0x114f97bc */
  push32((uint32_t)(0x114f97bcu));
  /* 114cbed9 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cbedb push 0 */
  push32((uint32_t)(0x0u));
  /* 114cbedd push 0 */
  push32((uint32_t)(0x0u));
  /* 114cbedf push 0 */
  push32((uint32_t)(0x0u));
  /* 114cbee1 call 0x114ca4c0 */
  push32(0x114cbee6u); f_114ca4c0();
  /* 114cbee6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cbee9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cbeec jne 0x114cbeef */
  if (!C.zf) goto L_114cbeef;
  /* 114cbeee int3  */
  x86_unimpl("int3 @ 0x114cbeee");
L_114cbeef:;
  /* 114cbeef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114cbef1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114cbef3 jne 0x114cbecf */
  if (!C.zf) goto L_114cbecf;
L_114cbef5:;
  /* 114cbef5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cbef7 jmp 0x114cc2da */
  goto L_114cc2da;
L_114cbefc:;
  /* 114cbefc cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cbf00 jbe 0x114cbf2e */
  if ((C.cf||C.zf)) goto L_114cbf2e;
L_114cbf02:;
  /* 114cbf02 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cbf05 push edx */
  push32((uint32_t)(EDX));
  /* 114cbf06 push 0x114f9950 */
  push32((uint32_t)(0x114f9950u));
  /* 114cbf0b push 0 */
  push32((uint32_t)(0x0u));
  /* 114cbf0d push 0 */
  push32((uint32_t)(0x0u));
  /* 114cbf0f push 0 */
  push32((uint32_t)(0x0u));
  /* 114cbf11 push 1 */
  push32((uint32_t)(0x1u));
  /* 114cbf13 call 0x114ca4c0 */
  push32(0x114cbf18u); f_114ca4c0();
  /* 114cbf18 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cbf1b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cbf1e jne 0x114cbf21 */
  if (!C.zf) goto L_114cbf21;
  /* 114cbf20 int3  */
  x86_unimpl("int3 @ 0x114cbf20");
L_114cbf21:;
  /* 114cbf21 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cbf23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cbf25 jne 0x114cbf02 */
  if (!C.zf) goto L_114cbf02;
  /* 114cbf27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cbf29 jmp 0x114cc2da */
  goto L_114cc2da;
L_114cbf2e:;
  /* 114cbf2e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cbf32 je 0x114cbf76 */
  if (C.zf) goto L_114cbf76;
  /* 114cbf34 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cbf37 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114cbf3d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cbf40 je 0x114cbf76 */
  if (C.zf) goto L_114cbf76;
  /* 114cbf42 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cbf45 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114cbf4b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cbf4e je 0x114cbf76 */
  if (C.zf) goto L_114cbf76;
L_114cbf50:;
  /* 114cbf50 push 0x114f9764 */
  push32((uint32_t)(0x114f9764u));
  /* 114cbf55 push 0x114f97bc */
  push32((uint32_t)(0x114f97bcu));
  /* 114cbf5a push 0 */
  push32((uint32_t)(0x0u));
  /* 114cbf5c push 0 */
  push32((uint32_t)(0x0u));
  /* 114cbf5e push 0 */
  push32((uint32_t)(0x0u));
  /* 114cbf60 push 1 */
  push32((uint32_t)(0x1u));
  /* 114cbf62 call 0x114ca4c0 */
  push32(0x114cbf67u); f_114ca4c0();
  /* 114cbf67 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cbf6a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cbf6d jne 0x114cbf70 */
  if (!C.zf) goto L_114cbf70;
  /* 114cbf6f int3  */
  x86_unimpl("int3 @ 0x114cbf6f");
L_114cbf70:;
  /* 114cbf70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cbf72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cbf74 jne 0x114cbf50 */
  if (!C.zf) goto L_114cbf50;
L_114cbf76:;
  /* 114cbf76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cbf79 push ecx */
  push32((uint32_t)(ECX));
  /* 114cbf7a call 0x114ccf00 */
  push32(0x114cbf7fu); f_114ccf00();
  /* 114cbf7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cbf82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cbf84 jne 0x114cbfa7 */
  if (!C.zf) goto L_114cbfa7;
  /* 114cbf86 push 0x114f992c */
  push32((uint32_t)(0x114f992cu));
  /* 114cbf8b push 0 */
  push32((uint32_t)(0x0u));
  /* 114cbf8d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 114cbf92 push 0x114f981c */
  push32((uint32_t)(0x114f981cu));
  /* 114cbf97 push 2 */
  push32((uint32_t)(0x2u));
  /* 114cbf99 call 0x114ca4c0 */
  push32(0x114cbf9eu); f_114ca4c0();
  /* 114cbf9e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cbfa1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cbfa4 jne 0x114cbfa7 */
  if (!C.zf) goto L_114cbfa7;
  /* 114cbfa6 int3  */
  x86_unimpl("int3 @ 0x114cbfa6");
L_114cbfa7:;
  /* 114cbfa7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114cbfa9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cbfab jne 0x114cbf76 */
  if (!C.zf) goto L_114cbf76;
  /* 114cbfad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cbfb0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cbfb3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114cbfb6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cbfb9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cbfbd jne 0x114cbfc6 */
  if (!C.zf) goto L_114cbfc6;
  /* 114cbfbf mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_114cbfc6:;
  /* 114cbfc6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cbfca je 0x114cc00a */
  if (C.zf) goto L_114cc00a;
L_114cbfcc:;
  /* 114cbfcc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cbfcf cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cbfd6 jne 0x114cbfe1 */
  if (!C.zf) goto L_114cbfe1;
  /* 114cbfd8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cbfdb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cbfdf je 0x114cc002 */
  if (C.zf) goto L_114cc002;
L_114cbfe1:;
  /* 114cbfe1 push 0x114f98e4 */
  push32((uint32_t)(0x114f98e4u));
  /* 114cbfe6 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cbfe8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 114cbfed push 0x114f981c */
  push32((uint32_t)(0x114f981cu));
  /* 114cbff2 push 2 */
  push32((uint32_t)(0x2u));
  /* 114cbff4 call 0x114ca4c0 */
  push32(0x114cbff9u); f_114ca4c0();
  /* 114cbff9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cbffc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cbfff jne 0x114cc002 */
  if (!C.zf) goto L_114cc002;
  /* 114cc001 int3  */
  x86_unimpl("int3 @ 0x114cc001");
L_114cc002:;
  /* 114cc002 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114cc004 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114cc006 jne 0x114cbfcc */
  if (!C.zf) goto L_114cbfcc;
  /* 114cc008 jmp 0x114cc06e */
  goto L_114cc06e;
L_114cc00a:;
  /* 114cc00a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cc00d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 114cc010 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114cc015 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc018 jne 0x114cc02f */
  if (!C.zf) goto L_114cc02f;
  /* 114cc01a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cc01d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114cc023 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc026 jne 0x114cc02f */
  if (!C.zf) goto L_114cc02f;
  /* 114cc028 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_114cc02f:;
  /* 114cc02f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cc032 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 114cc035 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114cc03a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cc03d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114cc043 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc045 je 0x114cc068 */
  if (C.zf) goto L_114cc068;
  /* 114cc047 push 0x114f98a8 */
  push32((uint32_t)(0x114f98a8u));
  /* 114cc04c push 0 */
  push32((uint32_t)(0x0u));
  /* 114cc04e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 114cc053 push 0x114f981c */
  push32((uint32_t)(0x114f981cu));
  /* 114cc058 push 2 */
  push32((uint32_t)(0x2u));
  /* 114cc05a call 0x114ca4c0 */
  push32(0x114cc05fu); f_114ca4c0();
  /* 114cc05f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc062 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc065 jne 0x114cc068 */
  if (!C.zf) goto L_114cc068;
  /* 114cc067 int3  */
  x86_unimpl("int3 @ 0x114cc067");
L_114cc068:;
  /* 114cc068 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114cc06a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cc06c jne 0x114cc02f */
  if (!C.zf) goto L_114cc02f;
L_114cc06e:;
  /* 114cc06e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc072 je 0x114cc099 */
  if (C.zf) goto L_114cc099;
  /* 114cc074 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cc077 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc07a push eax */
  push32((uint32_t)(EAX));
  /* 114cc07b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cc07e push ecx */
  push32((uint32_t)(ECX));
  /* 114cc07f call 0x114d3400 */
  push32(0x114cc084u); f_114d3400();
  /* 114cc084 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc087 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114cc08a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc08e jne 0x114cc097 */
  if (!C.zf) goto L_114cc097;
  /* 114cc090 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cc092 jmp 0x114cc2da */
  goto L_114cc2da;
L_114cc097:;
  /* 114cc097 jmp 0x114cc0bc */
  goto L_114cc0bc;
L_114cc099:;
  /* 114cc099 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cc09c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc09f push edx */
  push32((uint32_t)(EDX));
  /* 114cc0a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cc0a3 push eax */
  push32((uint32_t)(EAX));
  /* 114cc0a4 call 0x114d3350 */
  push32(0x114cc0a9u); f_114d3350();
  /* 114cc0a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc0ac mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114cc0af cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc0b3 jne 0x114cc0bc */
  if (!C.zf) goto L_114cc0bc;
  /* 114cc0b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cc0b7 jmp 0x114cc2da */
  goto L_114cc2da;
L_114cc0bc:;
  /* 114cc0bc mov ecx, dword ptr [0x114fcf4c] */
  ECX = (r32((uint32_t)(0x114fcf4c)));
  /* 114cc0c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc0c5 mov dword ptr [0x114fcf4c], ecx */
  w32((uint32_t)(0x114fcf4c), (ECX));
  /* 114cc0cb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc0cf jne 0x114cc127 */
  if (!C.zf) goto L_114cc127;
  /* 114cc0d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114cc0d4 mov eax, dword ptr [0x114ff19c] */
  EAX = (r32((uint32_t)(0x114ff19c)));
  /* 114cc0d9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cc0dc mov dword ptr [0x114ff19c], eax */
  w32((uint32_t)(0x114ff19c), (EAX));
  /* 114cc0e1 mov ecx, dword ptr [0x114ff19c] */
  ECX = (r32((uint32_t)(0x114ff19c)));
  /* 114cc0e7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc0ea mov dword ptr [0x114ff19c], ecx */
  w32((uint32_t)(0x114ff19c), (ECX));
  /* 114cc0f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114cc0f3 mov eax, dword ptr [0x114ff1a4] */
  EAX = (r32((uint32_t)(0x114ff1a4)));
  /* 114cc0f8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cc0fb mov dword ptr [0x114ff1a4], eax */
  w32((uint32_t)(0x114ff1a4), (EAX));
  /* 114cc100 mov ecx, dword ptr [0x114ff1a4] */
  ECX = (r32((uint32_t)(0x114ff1a4)));
  /* 114cc106 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc109 mov dword ptr [0x114ff1a4], ecx */
  w32((uint32_t)(0x114ff1a4), (ECX));
  /* 114cc10f mov edx, dword ptr [0x114ff1a4] */
  EDX = (r32((uint32_t)(0x114ff1a4)));
  /* 114cc115 cmp edx, dword ptr [0x114ff1a8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x114ff1a8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc11b jbe 0x114cc127 */
  if ((C.cf||C.zf)) goto L_114cc127;
  /* 114cc11d mov eax, dword ptr [0x114ff1a4] */
  EAX = (r32((uint32_t)(0x114ff1a4)));
  /* 114cc122 mov dword ptr [0x114ff1a8], eax */
  w32((uint32_t)(0x114ff1a8), (EAX));
L_114cc127:;
  /* 114cc127 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114cc12a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc12d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114cc130 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114cc133 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cc136 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc139 jbe 0x114cc15f */
  if ((C.cf||C.zf)) goto L_114cc15f;
  /* 114cc13b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114cc13e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cc141 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cc144 push edx */
  push32((uint32_t)(EDX));
  /* 114cc145 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cc147 mov al, byte ptr [0x114fcf56] */
  AL = (r8((uint32_t)(0x114fcf56)));
  /* 114cc14c push eax */
  push32((uint32_t)(EAX));
  /* 114cc14d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114cc150 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc153 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc156 push edx */
  push32((uint32_t)(EDX));
  /* 114cc157 call 0x114d2e30 */
  push32(0x114cc15cu); f_114d2e30();
  /* 114cc15c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114cc15f:;
  /* 114cc15f push 4 */
  push32((uint32_t)(0x4u));
  /* 114cc161 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cc163 mov al, byte ptr [0x114fcf54] */
  AL = (r8((uint32_t)(0x114fcf54)));
  /* 114cc168 push eax */
  push32((uint32_t)(EAX));
  /* 114cc169 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc16c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc16f push ecx */
  push32((uint32_t)(ECX));
  /* 114cc170 call 0x114d2e30 */
  push32(0x114cc175u); f_114d2e30();
  /* 114cc175 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc178 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc17c jne 0x114cc199 */
  if (!C.zf) goto L_114cc199;
  /* 114cc17e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114cc181 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114cc184 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 114cc187 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114cc18a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114cc18d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 114cc190 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114cc193 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114cc196 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_114cc199:;
  /* 114cc199 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114cc19c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cc19f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_114cc1a2:;
  /* 114cc1a2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc1a6 jne 0x114cc1d7 */
  if (!C.zf) goto L_114cc1d7;
  /* 114cc1a8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc1ac jne 0x114cc1b6 */
  if (!C.zf) goto L_114cc1b6;
  /* 114cc1ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114cc1b1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc1b4 je 0x114cc1d7 */
  if (C.zf) goto L_114cc1d7;
L_114cc1b6:;
  /* 114cc1b6 push 0x114f9874 */
  push32((uint32_t)(0x114f9874u));
  /* 114cc1bb push 0 */
  push32((uint32_t)(0x0u));
  /* 114cc1bd push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 114cc1c2 push 0x114f981c */
  push32((uint32_t)(0x114f981cu));
  /* 114cc1c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 114cc1c9 call 0x114ca4c0 */
  push32(0x114cc1ceu); f_114ca4c0();
  /* 114cc1ce add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc1d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc1d4 jne 0x114cc1d7 */
  if (!C.zf) goto L_114cc1d7;
  /* 114cc1d6 int3  */
  x86_unimpl("int3 @ 0x114cc1d6");
L_114cc1d7:;
  /* 114cc1d7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114cc1d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cc1db jne 0x114cc1a2 */
  if (!C.zf) goto L_114cc1a2;
  /* 114cc1dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114cc1e0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc1e3 je 0x114cc1eb */
  if (C.zf) goto L_114cc1eb;
  /* 114cc1e5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc1e9 je 0x114cc1f3 */
  if (C.zf) goto L_114cc1f3;
L_114cc1eb:;
  /* 114cc1eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc1ee jmp 0x114cc2da */
  goto L_114cc2da;
L_114cc1f3:;
  /* 114cc1f3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114cc1f6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc1f9 je 0x114cc20b */
  if (C.zf) goto L_114cc20b;
  /* 114cc1fb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114cc1fe mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114cc200 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114cc203 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114cc206 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 114cc209 jmp 0x114cc247 */
  goto L_114cc247;
L_114cc20b:;
  /* 114cc20b mov eax, dword ptr [0x114ff198] */
  EAX = (r32((uint32_t)(0x114ff198)));
  /* 114cc210 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc213 je 0x114cc236 */
  if (C.zf) goto L_114cc236;
  /* 114cc215 push 0x114f9858 */
  push32((uint32_t)(0x114f9858u));
  /* 114cc21a push 0 */
  push32((uint32_t)(0x0u));
  /* 114cc21c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 114cc221 push 0x114f981c */
  push32((uint32_t)(0x114f981cu));
  /* 114cc226 push 2 */
  push32((uint32_t)(0x2u));
  /* 114cc228 call 0x114ca4c0 */
  push32(0x114cc22du); f_114ca4c0();
  /* 114cc22d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc230 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc233 jne 0x114cc236 */
  if (!C.zf) goto L_114cc236;
  /* 114cc235 int3  */
  x86_unimpl("int3 @ 0x114cc235");
L_114cc236:;
  /* 114cc236 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114cc238 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114cc23a jne 0x114cc20b */
  if (!C.zf) goto L_114cc20b;
  /* 114cc23c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114cc23f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 114cc242 mov dword ptr [0x114ff198], eax */
  w32((uint32_t)(0x114ff198), (EAX));
L_114cc247:;
  /* 114cc247 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114cc24a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc24e je 0x114cc25f */
  if (C.zf) goto L_114cc25f;
  /* 114cc250 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114cc253 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 114cc256 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114cc259 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114cc25b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 114cc25d jmp 0x114cc29a */
  goto L_114cc29a;
L_114cc25f:;
  /* 114cc25f mov eax, dword ptr [0x114ff1a0] */
  EAX = (r32((uint32_t)(0x114ff1a0)));
  /* 114cc264 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc267 je 0x114cc28a */
  if (C.zf) goto L_114cc28a;
  /* 114cc269 push 0x114f983c */
  push32((uint32_t)(0x114f983cu));
  /* 114cc26e push 0 */
  push32((uint32_t)(0x0u));
  /* 114cc270 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 114cc275 push 0x114f981c */
  push32((uint32_t)(0x114f981cu));
  /* 114cc27a push 2 */
  push32((uint32_t)(0x2u));
  /* 114cc27c call 0x114ca4c0 */
  push32(0x114cc281u); f_114ca4c0();
  /* 114cc281 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc284 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc287 jne 0x114cc28a */
  if (!C.zf) goto L_114cc28a;
  /* 114cc289 int3  */
  x86_unimpl("int3 @ 0x114cc289");
L_114cc28a:;
  /* 114cc28a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114cc28c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114cc28e jne 0x114cc25f */
  if (!C.zf) goto L_114cc25f;
  /* 114cc290 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114cc293 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114cc295 mov dword ptr [0x114ff1a0], eax */
  w32((uint32_t)(0x114ff1a0), (EAX));
L_114cc29a:;
  /* 114cc29a cmp dword ptr [0x114ff1a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff1a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc2a1 je 0x114cc2b1 */
  if (C.zf) goto L_114cc2b1;
  /* 114cc2a3 mov ecx, dword ptr [0x114ff1a0] */
  ECX = (r32((uint32_t)(0x114ff1a0)));
  /* 114cc2a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114cc2ac mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 114cc2af jmp 0x114cc2b9 */
  goto L_114cc2b9;
L_114cc2b1:;
  /* 114cc2b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114cc2b4 mov dword ptr [0x114ff198], eax */
  w32((uint32_t)(0x114ff198), (EAX));
L_114cc2b9:;
  /* 114cc2b9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114cc2bc mov edx, dword ptr [0x114ff1a0] */
  EDX = (r32((uint32_t)(0x114ff1a0)));
  /* 114cc2c2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 114cc2c4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114cc2c7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 114cc2ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114cc2d1 mov dword ptr [0x114ff1a0], ecx */
  w32((uint32_t)(0x114ff1a0), (ECX));
  /* 114cc2d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_114cc2da:;
  /* 114cc2da pop edi */
  EDI = (pop32());
  /* 114cc2db pop esi */
  ESI = (pop32());
  /* 114cc2dc pop ebx */
  EBX = (pop32());
  /* 114cc2dd mov esp, ebp */
  ESP = (EBP);
  /* 114cc2df pop ebp */
  EBP = (pop32());
  /* 114cc2e0 ret  */
  ESPCHK(0x114cbdd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2f0 @ 0x114cc2f0 (27 bytes, 13 insns) */
void f_114cc2f0(void) {
  FTRACE(0x114cc2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cc2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 114cc2f1 mov ebp, esp */
  EBP = (ESP);
  /* 114cc2f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cc2f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cc2f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 114cc2f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cc2fc push eax */
  push32((uint32_t)(EAX));
  /* 114cc2fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cc300 push ecx */
  push32((uint32_t)(ECX));
  /* 114cc301 call 0x114cc310 */
  push32(0x114cc306u); f_114cc310();
  /* 114cc306 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc309 pop ebp */
  EBP = (pop32());
  /* 114cc30a ret  */
  ESPCHK(0x114cc2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c310 @ 0x114cc310 (64 bytes, 27 insns) */
void f_114cc310(void) {
  FTRACE(0x114cc310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cc310 push ebp */
  push32((uint32_t)(EBP));
  /* 114cc311 mov ebp, esp */
  EBP = (ESP);
  /* 114cc313 push ecx */
  push32((uint32_t)(ECX));
  /* 114cc314 push 9 */
  push32((uint32_t)(0x9u));
  /* 114cc316 call 0x114cb800 */
  push32(0x114cc31bu); f_114cb800();
  /* 114cc31b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc31e push 0 */
  push32((uint32_t)(0x0u));
  /* 114cc320 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114cc323 push eax */
  push32((uint32_t)(EAX));
  /* 114cc324 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114cc327 push ecx */
  push32((uint32_t)(ECX));
  /* 114cc328 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cc32b push edx */
  push32((uint32_t)(EDX));
  /* 114cc32c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cc32f push eax */
  push32((uint32_t)(EAX));
  /* 114cc330 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cc333 push ecx */
  push32((uint32_t)(ECX));
  /* 114cc334 call 0x114cbdd0 */
  push32(0x114cc339u); f_114cbdd0();
  /* 114cc339 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc33c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114cc33f push 9 */
  push32((uint32_t)(0x9u));
  /* 114cc341 call 0x114cb8a0 */
  push32(0x114cc346u); f_114cb8a0();
  /* 114cc346 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc349 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc34c mov esp, ebp */
  ESP = (EBP);
  /* 114cc34e pop ebp */
  EBP = (pop32());
  /* 114cc34f ret  */
  ESPCHK(0x114cc310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c350 @ 0x114cc350 (19 bytes, 9 insns) */
void f_114cc350(void) {
  FTRACE(0x114cc350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cc350 push ebp */
  push32((uint32_t)(EBP));
  /* 114cc351 mov ebp, esp */
  EBP = (ESP);
  /* 114cc353 push 1 */
  push32((uint32_t)(0x1u));
  /* 114cc355 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cc358 push eax */
  push32((uint32_t)(EAX));
  /* 114cc359 call 0x114cc390 */
  push32(0x114cc35eu); f_114cc390();
  /* 114cc35e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc361 pop ebp */
  EBP = (pop32());
  /* 114cc362 ret  */
  ESPCHK(0x114cc350u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c370 @ 0x114cc370 (19 bytes, 9 insns) */
void f_114cc370(void) {
  FTRACE(0x114cc370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cc370 push ebp */
  push32((uint32_t)(EBP));
  /* 114cc371 mov ebp, esp */
  EBP = (ESP);
  /* 114cc373 push 1 */
  push32((uint32_t)(0x1u));
  /* 114cc375 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cc378 push eax */
  push32((uint32_t)(EAX));
  /* 114cc379 call 0x114cc3c0 */
  push32(0x114cc37eu); f_114cc3c0();
  /* 114cc37e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc381 pop ebp */
  EBP = (pop32());
  /* 114cc382 ret  */
  ESPCHK(0x114cc370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c390 @ 0x114cc390 (41 bytes, 16 insns) */
void f_114cc390(void) {
  FTRACE(0x114cc390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cc390 push ebp */
  push32((uint32_t)(EBP));
  /* 114cc391 mov ebp, esp */
  EBP = (ESP);
  /* 114cc393 push 9 */
  push32((uint32_t)(0x9u));
  /* 114cc395 call 0x114cb800 */
  push32(0x114cc39au); f_114cb800();
  /* 114cc39a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc39d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cc3a0 push eax */
  push32((uint32_t)(EAX));
  /* 114cc3a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cc3a4 push ecx */
  push32((uint32_t)(ECX));
  /* 114cc3a5 call 0x114cc3c0 */
  push32(0x114cc3aau); f_114cc3c0();
  /* 114cc3aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc3ad push 9 */
  push32((uint32_t)(0x9u));
  /* 114cc3af call 0x114cb8a0 */
  push32(0x114cc3b4u); f_114cb8a0();
  /* 114cc3b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc3b7 pop ebp */
  EBP = (pop32());
  /* 114cc3b8 ret  */
  ESPCHK(0x114cc390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3c0 @ 0x114cc3c0 (1004 bytes, 342 insns) */
void f_114cc3c0(void) {
  FTRACE(0x114cc3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cc3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 114cc3c1 mov ebp, esp */
  EBP = (ESP);
  /* 114cc3c3 push ecx */
  push32((uint32_t)(ECX));
  /* 114cc3c4 push ebx */
  push32((uint32_t)(EBX));
  /* 114cc3c5 push esi */
  push32((uint32_t)(ESI));
  /* 114cc3c6 push edi */
  push32((uint32_t)(EDI));
  /* 114cc3c7 mov eax, dword ptr [0x114fcf48] */
  EAX = (r32((uint32_t)(0x114fcf48)));
  /* 114cc3cc and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 114cc3cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cc3d1 je 0x114cc403 */
  if (C.zf) goto L_114cc403;
L_114cc3d3:;
  /* 114cc3d3 call 0x114ccaa0 */
  push32(0x114cc3d8u); f_114ccaa0();
  /* 114cc3d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cc3da jne 0x114cc3fd */
  if (!C.zf) goto L_114cc3fd;
  /* 114cc3dc push 0x114f9828 */
  push32((uint32_t)(0x114f9828u));
  /* 114cc3e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cc3e3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 114cc3e8 push 0x114f981c */
  push32((uint32_t)(0x114f981cu));
  /* 114cc3ed push 2 */
  push32((uint32_t)(0x2u));
  /* 114cc3ef call 0x114ca4c0 */
  push32(0x114cc3f4u); f_114ca4c0();
  /* 114cc3f4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc3f7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc3fa jne 0x114cc3fd */
  if (!C.zf) goto L_114cc3fd;
  /* 114cc3fc int3  */
  x86_unimpl("int3 @ 0x114cc3fc");
L_114cc3fd:;
  /* 114cc3fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114cc3ff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114cc401 jne 0x114cc3d3 */
  if (!C.zf) goto L_114cc3d3;
L_114cc403:;
  /* 114cc403 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc407 jne 0x114cc40e */
  if (!C.zf) goto L_114cc40e;
  /* 114cc409 jmp 0x114cc7a5 */
  goto L_114cc7a5;
L_114cc40e:;
  /* 114cc40e push 0 */
  push32((uint32_t)(0x0u));
  /* 114cc410 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cc412 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cc414 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cc417 push edx */
  push32((uint32_t)(EDX));
  /* 114cc418 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cc41a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cc41d push eax */
  push32((uint32_t)(EAX));
  /* 114cc41e push 3 */
  push32((uint32_t)(0x3u));
  /* 114cc420 call dword ptr [0x114fd290] */
  call_ind((uint32_t)(r32((uint32_t)(0x114fd290))), 0x114cc426u);
  /* 114cc426 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc429 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cc42b jne 0x114cc458 */
  if (!C.zf) goto L_114cc458;
L_114cc42d:;
  /* 114cc42d push 0x114f9ac4 */
  push32((uint32_t)(0x114f9ac4u));
  /* 114cc432 push 0x114f97bc */
  push32((uint32_t)(0x114f97bcu));
  /* 114cc437 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cc439 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cc43b push 0 */
  push32((uint32_t)(0x0u));
  /* 114cc43d push 0 */
  push32((uint32_t)(0x0u));
  /* 114cc43f call 0x114ca4c0 */
  push32(0x114cc444u); f_114ca4c0();
  /* 114cc444 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc447 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc44a jne 0x114cc44d */
  if (!C.zf) goto L_114cc44d;
  /* 114cc44c int3  */
  x86_unimpl("int3 @ 0x114cc44c");
L_114cc44d:;
  /* 114cc44d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114cc44f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114cc451 jne 0x114cc42d */
  if (!C.zf) goto L_114cc42d;
  /* 114cc453 jmp 0x114cc7a5 */
  goto L_114cc7a5;
L_114cc458:;
  /* 114cc458 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cc45b push edx */
  push32((uint32_t)(EDX));
  /* 114cc45c call 0x114ccf00 */
  push32(0x114cc461u); f_114ccf00();
  /* 114cc461 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc464 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cc466 jne 0x114cc489 */
  if (!C.zf) goto L_114cc489;
  /* 114cc468 push 0x114f992c */
  push32((uint32_t)(0x114f992cu));
  /* 114cc46d push 0 */
  push32((uint32_t)(0x0u));
  /* 114cc46f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 114cc474 push 0x114f981c */
  push32((uint32_t)(0x114f981cu));
  /* 114cc479 push 2 */
  push32((uint32_t)(0x2u));
  /* 114cc47b call 0x114ca4c0 */
  push32(0x114cc480u); f_114ca4c0();
  /* 114cc480 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc483 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc486 jne 0x114cc489 */
  if (!C.zf) goto L_114cc489;
  /* 114cc488 int3  */
  x86_unimpl("int3 @ 0x114cc488");
L_114cc489:;
  /* 114cc489 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cc48b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cc48d jne 0x114cc458 */
  if (!C.zf) goto L_114cc458;
  /* 114cc48f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cc492 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cc495 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114cc498:;
  /* 114cc498 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc49b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 114cc49e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114cc4a3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc4a6 je 0x114cc4eb */
  if (C.zf) goto L_114cc4eb;
  /* 114cc4a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc4ab cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc4af je 0x114cc4eb */
  if (C.zf) goto L_114cc4eb;
  /* 114cc4b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc4b4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 114cc4b7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114cc4bc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc4bf je 0x114cc4eb */
  if (C.zf) goto L_114cc4eb;
  /* 114cc4c1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc4c4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc4c8 je 0x114cc4eb */
  if (C.zf) goto L_114cc4eb;
  /* 114cc4ca push 0x114f9410 */
  push32((uint32_t)(0x114f9410u));
  /* 114cc4cf push 0 */
  push32((uint32_t)(0x0u));
  /* 114cc4d1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 114cc4d6 push 0x114f981c */
  push32((uint32_t)(0x114f981cu));
  /* 114cc4db push 2 */
  push32((uint32_t)(0x2u));
  /* 114cc4dd call 0x114ca4c0 */
  push32(0x114cc4e2u); f_114ca4c0();
  /* 114cc4e2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc4e5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc4e8 jne 0x114cc4eb */
  if (!C.zf) goto L_114cc4eb;
  /* 114cc4ea int3  */
  x86_unimpl("int3 @ 0x114cc4ea");
L_114cc4eb:;
  /* 114cc4eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114cc4ed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cc4ef jne 0x114cc498 */
  if (!C.zf) goto L_114cc498;
  /* 114cc4f1 mov eax, dword ptr [0x114fcf48] */
  EAX = (r32((uint32_t)(0x114fcf48)));
  /* 114cc4f6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 114cc4f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cc4fb jne 0x114cc5c6 */
  if (!C.zf) goto L_114cc5c6;
  /* 114cc501 push 4 */
  push32((uint32_t)(0x4u));
  /* 114cc503 mov cl, byte ptr [0x114fcf54] */
  CL = (r8((uint32_t)(0x114fcf54)));
  /* 114cc509 push ecx */
  push32((uint32_t)(ECX));
  /* 114cc50a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc50d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc510 push edx */
  push32((uint32_t)(EDX));
  /* 114cc511 call 0x114cca10 */
  push32(0x114cc516u); f_114cca10();
  /* 114cc516 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc519 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cc51b jne 0x114cc560 */
  if (!C.zf) goto L_114cc560;
L_114cc51d:;
  /* 114cc51d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc520 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc523 push eax */
  push32((uint32_t)(EAX));
  /* 114cc524 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc527 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 114cc52a push edx */
  push32((uint32_t)(EDX));
  /* 114cc52b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc52e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 114cc531 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114cc537 mov edx, dword ptr [ecx*4 + 0x114fcf58] */
  EDX = (r32((uint32_t)(ECX*4 + 0x114fcf58)));
  /* 114cc53e push edx */
  push32((uint32_t)(EDX));
  /* 114cc53f push 0x114f9a98 */
  push32((uint32_t)(0x114f9a98u));
  /* 114cc544 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cc546 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cc548 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cc54a push 1 */
  push32((uint32_t)(0x1u));
  /* 114cc54c call 0x114ca4c0 */
  push32(0x114cc551u); f_114ca4c0();
  /* 114cc551 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc554 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc557 jne 0x114cc55a */
  if (!C.zf) goto L_114cc55a;
  /* 114cc559 int3  */
  x86_unimpl("int3 @ 0x114cc559");
L_114cc55a:;
  /* 114cc55a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cc55c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cc55e jne 0x114cc51d */
  if (!C.zf) goto L_114cc51d;
L_114cc560:;
  /* 114cc560 push 4 */
  push32((uint32_t)(0x4u));
  /* 114cc562 mov cl, byte ptr [0x114fcf54] */
  CL = (r8((uint32_t)(0x114fcf54)));
  /* 114cc568 push ecx */
  push32((uint32_t)(ECX));
  /* 114cc569 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc56c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 114cc56f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc572 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 114cc576 push edx */
  push32((uint32_t)(EDX));
  /* 114cc577 call 0x114cca10 */
  push32(0x114cc57cu); f_114cca10();
  /* 114cc57c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc57f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cc581 jne 0x114cc5c6 */
  if (!C.zf) goto L_114cc5c6;
L_114cc583:;
  /* 114cc583 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc586 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc589 push eax */
  push32((uint32_t)(EAX));
  /* 114cc58a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc58d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 114cc590 push edx */
  push32((uint32_t)(EDX));
  /* 114cc591 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc594 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 114cc597 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114cc59d mov edx, dword ptr [ecx*4 + 0x114fcf58] */
  EDX = (r32((uint32_t)(ECX*4 + 0x114fcf58)));
  /* 114cc5a4 push edx */
  push32((uint32_t)(EDX));
  /* 114cc5a5 push 0x114f9a6c */
  push32((uint32_t)(0x114f9a6cu));
  /* 114cc5aa push 0 */
  push32((uint32_t)(0x0u));
  /* 114cc5ac push 0 */
  push32((uint32_t)(0x0u));
  /* 114cc5ae push 0 */
  push32((uint32_t)(0x0u));
  /* 114cc5b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 114cc5b2 call 0x114ca4c0 */
  push32(0x114cc5b7u); f_114ca4c0();
  /* 114cc5b7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc5ba cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc5bd jne 0x114cc5c0 */
  if (!C.zf) goto L_114cc5c0;
  /* 114cc5bf int3  */
  x86_unimpl("int3 @ 0x114cc5bf");
L_114cc5c0:;
  /* 114cc5c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cc5c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cc5c4 jne 0x114cc583 */
  if (!C.zf) goto L_114cc583;
L_114cc5c6:;
  /* 114cc5c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc5c9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc5cd jne 0x114cc63b */
  if (!C.zf) goto L_114cc63b;
L_114cc5cf:;
  /* 114cc5cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc5d2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc5d9 jne 0x114cc5e4 */
  if (!C.zf) goto L_114cc5e4;
  /* 114cc5db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc5de cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc5e2 je 0x114cc605 */
  if (C.zf) goto L_114cc605;
L_114cc5e4:;
  /* 114cc5e4 push 0x114f9a2c */
  push32((uint32_t)(0x114f9a2cu));
  /* 114cc5e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cc5eb push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 114cc5f0 push 0x114f981c */
  push32((uint32_t)(0x114f981cu));
  /* 114cc5f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 114cc5f7 call 0x114ca4c0 */
  push32(0x114cc5fcu); f_114ca4c0();
  /* 114cc5fc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc5ff cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc602 jne 0x114cc605 */
  if (!C.zf) goto L_114cc605;
  /* 114cc604 int3  */
  x86_unimpl("int3 @ 0x114cc604");
L_114cc605:;
  /* 114cc605 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114cc607 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114cc609 jne 0x114cc5cf */
  if (!C.zf) goto L_114cc5cf;
  /* 114cc60b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc60e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 114cc611 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc614 push eax */
  push32((uint32_t)(EAX));
  /* 114cc615 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114cc617 mov cl, byte ptr [0x114fcf55] */
  CL = (r8((uint32_t)(0x114fcf55)));
  /* 114cc61d push ecx */
  push32((uint32_t)(ECX));
  /* 114cc61e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc621 push edx */
  push32((uint32_t)(EDX));
  /* 114cc622 call 0x114d2e30 */
  push32(0x114cc627u); f_114d2e30();
  /* 114cc627 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc62a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc62d push eax */
  push32((uint32_t)(EAX));
  /* 114cc62e call 0x114d35f0 */
  push32(0x114cc633u); f_114d35f0();
  /* 114cc633 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc636 jmp 0x114cc7a5 */
  goto L_114cc7a5;
L_114cc63b:;
  /* 114cc63b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc63e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc642 jne 0x114cc651 */
  if (!C.zf) goto L_114cc651;
  /* 114cc644 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc648 jne 0x114cc651 */
  if (!C.zf) goto L_114cc651;
  /* 114cc64a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_114cc651:;
  /* 114cc651 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc654 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 114cc657 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc65a je 0x114cc67d */
  if (C.zf) goto L_114cc67d;
  /* 114cc65c push 0x114f9a0c */
  push32((uint32_t)(0x114f9a0cu));
  /* 114cc661 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cc663 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 114cc668 push 0x114f981c */
  push32((uint32_t)(0x114f981cu));
  /* 114cc66d push 2 */
  push32((uint32_t)(0x2u));
  /* 114cc66f call 0x114ca4c0 */
  push32(0x114cc674u); f_114ca4c0();
  /* 114cc674 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc677 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc67a jne 0x114cc67d */
  if (!C.zf) goto L_114cc67d;
  /* 114cc67c int3  */
  x86_unimpl("int3 @ 0x114cc67c");
L_114cc67d:;
  /* 114cc67d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114cc67f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114cc681 jne 0x114cc651 */
  if (!C.zf) goto L_114cc651;
  /* 114cc683 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc686 mov eax, dword ptr [0x114ff1a4] */
  EAX = (r32((uint32_t)(0x114ff1a4)));
  /* 114cc68b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cc68e mov dword ptr [0x114ff1a4], eax */
  w32((uint32_t)(0x114ff1a4), (EAX));
  /* 114cc693 mov ecx, dword ptr [0x114fcf48] */
  ECX = (r32((uint32_t)(0x114fcf48)));
  /* 114cc699 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 114cc69c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114cc69e jne 0x114cc77c */
  if (!C.zf) goto L_114cc77c;
  /* 114cc6a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc6a7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc6aa je 0x114cc6bc */
  if (C.zf) goto L_114cc6bc;
  /* 114cc6ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc6af mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114cc6b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc6b4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 114cc6b7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 114cc6ba jmp 0x114cc6fa */
  goto L_114cc6fa;
L_114cc6bc:;
  /* 114cc6bc mov ecx, dword ptr [0x114ff198] */
  ECX = (r32((uint32_t)(0x114ff198)));
  /* 114cc6c2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc6c5 je 0x114cc6e8 */
  if (C.zf) goto L_114cc6e8;
  /* 114cc6c7 push 0x114f99f4 */
  push32((uint32_t)(0x114f99f4u));
  /* 114cc6cc push 0 */
  push32((uint32_t)(0x0u));
  /* 114cc6ce push 0x42a */
  push32((uint32_t)(0x42au));
  /* 114cc6d3 push 0x114f981c */
  push32((uint32_t)(0x114f981cu));
  /* 114cc6d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 114cc6da call 0x114ca4c0 */
  push32(0x114cc6dfu); f_114ca4c0();
  /* 114cc6df add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc6e2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc6e5 jne 0x114cc6e8 */
  if (!C.zf) goto L_114cc6e8;
  /* 114cc6e7 int3  */
  x86_unimpl("int3 @ 0x114cc6e7");
L_114cc6e8:;
  /* 114cc6e8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114cc6ea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cc6ec jne 0x114cc6bc */
  if (!C.zf) goto L_114cc6bc;
  /* 114cc6ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc6f1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114cc6f4 mov dword ptr [0x114ff198], ecx */
  w32((uint32_t)(0x114ff198), (ECX));
L_114cc6fa:;
  /* 114cc6fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc6fd cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc701 je 0x114cc712 */
  if (C.zf) goto L_114cc712;
  /* 114cc703 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc706 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114cc709 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc70c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114cc70e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 114cc710 jmp 0x114cc74f */
  goto L_114cc74f;
L_114cc712:;
  /* 114cc712 mov ecx, dword ptr [0x114ff1a0] */
  ECX = (r32((uint32_t)(0x114ff1a0)));
  /* 114cc718 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc71b je 0x114cc73e */
  if (C.zf) goto L_114cc73e;
  /* 114cc71d push 0x114f99dc */
  push32((uint32_t)(0x114f99dcu));
  /* 114cc722 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cc724 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 114cc729 push 0x114f981c */
  push32((uint32_t)(0x114f981cu));
  /* 114cc72e push 2 */
  push32((uint32_t)(0x2u));
  /* 114cc730 call 0x114ca4c0 */
  push32(0x114cc735u); f_114ca4c0();
  /* 114cc735 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc738 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc73b jne 0x114cc73e */
  if (!C.zf) goto L_114cc73e;
  /* 114cc73d int3  */
  x86_unimpl("int3 @ 0x114cc73d");
L_114cc73e:;
  /* 114cc73e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114cc740 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cc742 jne 0x114cc712 */
  if (!C.zf) goto L_114cc712;
  /* 114cc744 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc747 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114cc749 mov dword ptr [0x114ff1a0], ecx */
  w32((uint32_t)(0x114ff1a0), (ECX));
L_114cc74f:;
  /* 114cc74f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc752 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 114cc755 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc758 push eax */
  push32((uint32_t)(EAX));
  /* 114cc759 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114cc75b mov cl, byte ptr [0x114fcf55] */
  CL = (r8((uint32_t)(0x114fcf55)));
  /* 114cc761 push ecx */
  push32((uint32_t)(ECX));
  /* 114cc762 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc765 push edx */
  push32((uint32_t)(EDX));
  /* 114cc766 call 0x114d2e30 */
  push32(0x114cc76bu); f_114d2e30();
  /* 114cc76b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc76e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc771 push eax */
  push32((uint32_t)(EAX));
  /* 114cc772 call 0x114d35f0 */
  push32(0x114cc777u); f_114d35f0();
  /* 114cc777 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc77a jmp 0x114cc7a5 */
  goto L_114cc7a5;
L_114cc77c:;
  /* 114cc77c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc77f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 114cc786 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc789 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 114cc78c push eax */
  push32((uint32_t)(EAX));
  /* 114cc78d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114cc78f mov cl, byte ptr [0x114fcf55] */
  CL = (r8((uint32_t)(0x114fcf55)));
  /* 114cc795 push ecx */
  push32((uint32_t)(ECX));
  /* 114cc796 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc799 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc79c push edx */
  push32((uint32_t)(EDX));
  /* 114cc79d call 0x114d2e30 */
  push32(0x114cc7a2u); f_114d2e30();
  /* 114cc7a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114cc7a5:;
  /* 114cc7a5 pop edi */
  EDI = (pop32());
  /* 114cc7a6 pop esi */
  ESI = (pop32());
  /* 114cc7a7 pop ebx */
  EBX = (pop32());
  /* 114cc7a8 mov esp, ebp */
  ESP = (EBP);
  /* 114cc7aa pop ebp */
  EBP = (pop32());
  /* 114cc7ab ret  */
  ESPCHK(0x114cc3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7b0 @ 0x114cc7b0 (19 bytes, 9 insns) */
void f_114cc7b0(void) {
  FTRACE(0x114cc7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cc7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 114cc7b1 mov ebp, esp */
  EBP = (ESP);
  /* 114cc7b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 114cc7b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cc7b8 push eax */
  push32((uint32_t)(EAX));
  /* 114cc7b9 call 0x114cc7d0 */
  push32(0x114cc7beu); f_114cc7d0();
  /* 114cc7be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc7c1 pop ebp */
  EBP = (pop32());
  /* 114cc7c2 ret  */
  ESPCHK(0x114cc7b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7d0 @ 0x114cc7d0 (342 bytes, 119 insns) */
void f_114cc7d0(void) {
  FTRACE(0x114cc7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cc7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114cc7d1 mov ebp, esp */
  EBP = (ESP);
  /* 114cc7d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cc7d6 push ebx */
  push32((uint32_t)(EBX));
  /* 114cc7d7 push esi */
  push32((uint32_t)(ESI));
  /* 114cc7d8 push edi */
  push32((uint32_t)(EDI));
  /* 114cc7d9 mov eax, dword ptr [0x114fcf48] */
  EAX = (r32((uint32_t)(0x114fcf48)));
  /* 114cc7de and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 114cc7e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cc7e3 je 0x114cc815 */
  if (C.zf) goto L_114cc815;
L_114cc7e5:;
  /* 114cc7e5 call 0x114ccaa0 */
  push32(0x114cc7eau); f_114ccaa0();
  /* 114cc7ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cc7ec jne 0x114cc80f */
  if (!C.zf) goto L_114cc80f;
  /* 114cc7ee push 0x114f9828 */
  push32((uint32_t)(0x114f9828u));
  /* 114cc7f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cc7f5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 114cc7fa push 0x114f981c */
  push32((uint32_t)(0x114f981cu));
  /* 114cc7ff push 2 */
  push32((uint32_t)(0x2u));
  /* 114cc801 call 0x114ca4c0 */
  push32(0x114cc806u); f_114ca4c0();
  /* 114cc806 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc809 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc80c jne 0x114cc80f */
  if (!C.zf) goto L_114cc80f;
  /* 114cc80e int3  */
  x86_unimpl("int3 @ 0x114cc80e");
L_114cc80f:;
  /* 114cc80f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114cc811 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114cc813 jne 0x114cc7e5 */
  if (!C.zf) goto L_114cc7e5;
L_114cc815:;
  /* 114cc815 push 9 */
  push32((uint32_t)(0x9u));
  /* 114cc817 call 0x114cb800 */
  push32(0x114cc81cu); f_114cb800();
  /* 114cc81c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114cc81f:;
  /* 114cc81f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cc822 push edx */
  push32((uint32_t)(EDX));
  /* 114cc823 call 0x114ccf00 */
  push32(0x114cc828u); f_114ccf00();
  /* 114cc828 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc82b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cc82d jne 0x114cc850 */
  if (!C.zf) goto L_114cc850;
  /* 114cc82f push 0x114f992c */
  push32((uint32_t)(0x114f992cu));
  /* 114cc834 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cc836 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 114cc83b push 0x114f981c */
  push32((uint32_t)(0x114f981cu));
  /* 114cc840 push 2 */
  push32((uint32_t)(0x2u));
  /* 114cc842 call 0x114ca4c0 */
  push32(0x114cc847u); f_114ca4c0();
  /* 114cc847 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc84a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc84d jne 0x114cc850 */
  if (!C.zf) goto L_114cc850;
  /* 114cc84f int3  */
  x86_unimpl("int3 @ 0x114cc84f");
L_114cc850:;
  /* 114cc850 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cc852 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cc854 jne 0x114cc81f */
  if (!C.zf) goto L_114cc81f;
  /* 114cc856 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cc859 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cc85c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_114cc85f:;
  /* 114cc85f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cc862 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 114cc865 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114cc86a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc86d je 0x114cc8b2 */
  if (C.zf) goto L_114cc8b2;
  /* 114cc86f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cc872 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc876 je 0x114cc8b2 */
  if (C.zf) goto L_114cc8b2;
  /* 114cc878 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cc87b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 114cc87e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114cc883 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc886 je 0x114cc8b2 */
  if (C.zf) goto L_114cc8b2;
  /* 114cc888 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cc88b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc88f je 0x114cc8b2 */
  if (C.zf) goto L_114cc8b2;
  /* 114cc891 push 0x114f9410 */
  push32((uint32_t)(0x114f9410u));
  /* 114cc896 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cc898 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 114cc89d push 0x114f981c */
  push32((uint32_t)(0x114f981cu));
  /* 114cc8a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 114cc8a4 call 0x114ca4c0 */
  push32(0x114cc8a9u); f_114ca4c0();
  /* 114cc8a9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc8ac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc8af jne 0x114cc8b2 */
  if (!C.zf) goto L_114cc8b2;
  /* 114cc8b1 int3  */
  x86_unimpl("int3 @ 0x114cc8b1");
L_114cc8b2:;
  /* 114cc8b2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114cc8b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cc8b6 jne 0x114cc85f */
  if (!C.zf) goto L_114cc85f;
  /* 114cc8b8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cc8bb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc8bf jne 0x114cc8ce */
  if (!C.zf) goto L_114cc8ce;
  /* 114cc8c1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc8c5 jne 0x114cc8ce */
  if (!C.zf) goto L_114cc8ce;
  /* 114cc8c7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_114cc8ce:;
  /* 114cc8ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cc8d1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc8d5 je 0x114cc909 */
  if (C.zf) goto L_114cc909;
L_114cc8d7:;
  /* 114cc8d7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cc8da mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 114cc8dd cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc8e0 je 0x114cc903 */
  if (C.zf) goto L_114cc903;
  /* 114cc8e2 push 0x114f9a0c */
  push32((uint32_t)(0x114f9a0cu));
  /* 114cc8e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cc8e9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 114cc8ee push 0x114f981c */
  push32((uint32_t)(0x114f981cu));
  /* 114cc8f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 114cc8f5 call 0x114ca4c0 */
  push32(0x114cc8fau); f_114ca4c0();
  /* 114cc8fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc8fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc900 jne 0x114cc903 */
  if (!C.zf) goto L_114cc903;
  /* 114cc902 int3  */
  x86_unimpl("int3 @ 0x114cc902");
L_114cc903:;
  /* 114cc903 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114cc905 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114cc907 jne 0x114cc8d7 */
  if (!C.zf) goto L_114cc8d7;
L_114cc909:;
  /* 114cc909 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cc90c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 114cc90f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114cc912 push 9 */
  push32((uint32_t)(0x9u));
  /* 114cc914 call 0x114cb8a0 */
  push32(0x114cc919u); f_114cb8a0();
  /* 114cc919 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc91c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc91f pop edi */
  EDI = (pop32());
  /* 114cc920 pop esi */
  ESI = (pop32());
  /* 114cc921 pop ebx */
  EBX = (pop32());
  /* 114cc922 mov esp, ebp */
  ESP = (EBP);
  /* 114cc924 pop ebp */
  EBP = (pop32());
  /* 114cc925 ret  */
  ESPCHK(0x114cc7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c930 @ 0x114cc930 (28 bytes, 11 insns) */
void f_114cc930(void) {
  FTRACE(0x114cc930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cc930 push ebp */
  push32((uint32_t)(EBP));
  /* 114cc931 mov ebp, esp */
  EBP = (ESP);
  /* 114cc933 push ecx */
  push32((uint32_t)(ECX));
  /* 114cc934 mov eax, dword ptr [0x114fcf50] */
  EAX = (r32((uint32_t)(0x114fcf50)));
  /* 114cc939 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114cc93c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cc93f mov dword ptr [0x114fcf50], ecx */
  w32((uint32_t)(0x114fcf50), (ECX));
  /* 114cc945 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc948 mov esp, ebp */
  ESP = (EBP);
  /* 114cc94a pop ebp */
  EBP = (pop32());
  /* 114cc94b ret  */
  ESPCHK(0x114cc930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c950 @ 0x114cc950 (157 bytes, 59 insns) */
void f_114cc950(void) {
  FTRACE(0x114cc950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cc950 push ebp */
  push32((uint32_t)(EBP));
  /* 114cc951 mov ebp, esp */
  EBP = (ESP);
  /* 114cc953 push ecx */
  push32((uint32_t)(ECX));
  /* 114cc954 push ebx */
  push32((uint32_t)(EBX));
  /* 114cc955 push esi */
  push32((uint32_t)(ESI));
  /* 114cc956 push edi */
  push32((uint32_t)(EDI));
  /* 114cc957 push 9 */
  push32((uint32_t)(0x9u));
  /* 114cc959 call 0x114cb800 */
  push32(0x114cc95eu); f_114cb800();
  /* 114cc95e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc961 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cc964 push eax */
  push32((uint32_t)(EAX));
  /* 114cc965 call 0x114ccf00 */
  push32(0x114cc96au); f_114ccf00();
  /* 114cc96a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc96d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cc96f je 0x114cc9dc */
  if (C.zf) goto L_114cc9dc;
  /* 114cc971 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cc974 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cc977 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114cc97a:;
  /* 114cc97a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc97d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 114cc980 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114cc985 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc988 je 0x114cc9cd */
  if (C.zf) goto L_114cc9cd;
  /* 114cc98a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc98d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc991 je 0x114cc9cd */
  if (C.zf) goto L_114cc9cd;
  /* 114cc993 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc996 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 114cc999 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114cc99e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc9a1 je 0x114cc9cd */
  if (C.zf) goto L_114cc9cd;
  /* 114cc9a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc9a6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc9aa je 0x114cc9cd */
  if (C.zf) goto L_114cc9cd;
  /* 114cc9ac push 0x114f9410 */
  push32((uint32_t)(0x114f9410u));
  /* 114cc9b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cc9b3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 114cc9b8 push 0x114f981c */
  push32((uint32_t)(0x114f981cu));
  /* 114cc9bd push 2 */
  push32((uint32_t)(0x2u));
  /* 114cc9bf call 0x114ca4c0 */
  push32(0x114cc9c4u); f_114ca4c0();
  /* 114cc9c4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc9c7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cc9ca jne 0x114cc9cd */
  if (!C.zf) goto L_114cc9cd;
  /* 114cc9cc int3  */
  x86_unimpl("int3 @ 0x114cc9cc");
L_114cc9cd:;
  /* 114cc9cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114cc9cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cc9d1 jne 0x114cc97a */
  if (!C.zf) goto L_114cc97a;
  /* 114cc9d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cc9d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cc9d9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_114cc9dc:;
  /* 114cc9dc push 9 */
  push32((uint32_t)(0x9u));
  /* 114cc9de call 0x114cb8a0 */
  push32(0x114cc9e3u); f_114cb8a0();
  /* 114cc9e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cc9e6 pop edi */
  EDI = (pop32());
  /* 114cc9e7 pop esi */
  ESI = (pop32());
  /* 114cc9e8 pop ebx */
  EBX = (pop32());
  /* 114cc9e9 mov esp, ebp */
  ESP = (EBP);
  /* 114cc9eb pop ebp */
  EBP = (pop32());
  /* 114cc9ec ret  */
  ESPCHK(0x114cc950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9f0 @ 0x114cc9f0 (28 bytes, 11 insns) */
void f_114cc9f0(void) {
  FTRACE(0x114cc9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cc9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 114cc9f1 mov ebp, esp */
  EBP = (ESP);
  /* 114cc9f3 push ecx */
  push32((uint32_t)(ECX));
  /* 114cc9f4 mov eax, dword ptr [0x114fd290] */
  EAX = (r32((uint32_t)(0x114fd290)));
  /* 114cc9f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114cc9fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cc9ff mov dword ptr [0x114fd290], ecx */
  w32((uint32_t)(0x114fd290), (ECX));
  /* 114cca05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cca08 mov esp, ebp */
  ESP = (EBP);
  /* 114cca0a pop ebp */
  EBP = (pop32());
  /* 114cca0b ret  */
  ESPCHK(0x114cc9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca10 @ 0x114cca10 (136 bytes, 55 insns) */
void f_114cca10(void) {
  FTRACE(0x114cca10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cca10 push ebp */
  push32((uint32_t)(EBP));
  /* 114cca11 mov ebp, esp */
  EBP = (ESP);
  /* 114cca13 push ecx */
  push32((uint32_t)(ECX));
  /* 114cca14 push ebx */
  push32((uint32_t)(EBX));
  /* 114cca15 push esi */
  push32((uint32_t)(ESI));
  /* 114cca16 push edi */
  push32((uint32_t)(EDI));
  /* 114cca17 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_114cca1e:;
  /* 114cca1e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cca21 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cca24 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cca27 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 114cca2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cca2c je 0x114cca8e */
  if (C.zf) goto L_114cca8e;
  /* 114cca2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cca31 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cca33 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114cca35 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cca38 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 114cca3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cca41 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cca44 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 114cca47 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cca49 je 0x114cca8c */
  if (C.zf) goto L_114cca8c;
L_114cca4b:;
  /* 114cca4b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cca4e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114cca53 push eax */
  push32((uint32_t)(EAX));
  /* 114cca54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cca57 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114cca59 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 114cca5c push edx */
  push32((uint32_t)(EDX));
  /* 114cca5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cca60 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cca63 push eax */
  push32((uint32_t)(EAX));
  /* 114cca64 push 0x114f9ae0 */
  push32((uint32_t)(0x114f9ae0u));
  /* 114cca69 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cca6b push 0 */
  push32((uint32_t)(0x0u));
  /* 114cca6d push 0 */
  push32((uint32_t)(0x0u));
  /* 114cca6f push 0 */
  push32((uint32_t)(0x0u));
  /* 114cca71 call 0x114ca4c0 */
  push32(0x114cca76u); f_114ca4c0();
  /* 114cca76 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cca79 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cca7c jne 0x114cca7f */
  if (!C.zf) goto L_114cca7f;
  /* 114cca7e int3  */
  x86_unimpl("int3 @ 0x114cca7e");
L_114cca7f:;
  /* 114cca7f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114cca81 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114cca83 jne 0x114cca4b */
  if (!C.zf) goto L_114cca4b;
  /* 114cca85 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_114cca8c:;
  /* 114cca8c jmp 0x114cca1e */
  goto L_114cca1e;
L_114cca8e:;
  /* 114cca8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cca91 pop edi */
  EDI = (pop32());
  /* 114cca92 pop esi */
  ESI = (pop32());
  /* 114cca93 pop ebx */
  EBX = (pop32());
  /* 114cca94 mov esp, ebp */
  ESP = (EBP);
  /* 114cca96 pop ebp */
  EBP = (pop32());
  /* 114cca97 ret  */
  ESPCHK(0x114cca10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000caa0 @ 0x114ccaa0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_114ccaa0(void) {
  FTRACE(0x114ccaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ccaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 114ccaa1 mov ebp, esp */
  EBP = (ESP);
  /* 114ccaa3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114ccaa6 push ebx */
  push32((uint32_t)(EBX));
  /* 114ccaa7 push esi */
  push32((uint32_t)(ESI));
  /* 114ccaa8 push edi */
  push32((uint32_t)(EDI));
  /* 114ccaa9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 114ccab0 mov eax, dword ptr [0x114fcf48] */
  EAX = (r32((uint32_t)(0x114fcf48)));
  /* 114ccab5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 114ccab8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ccaba jne 0x114ccac6 */
  if (!C.zf) goto L_114ccac6;
  /* 114ccabc mov eax, 1 */
  EAX = (0x1u);
  /* 114ccac1 jmp 0x114ccdf8 */
  goto L_114ccdf8;
L_114ccac6:;
  /* 114ccac6 push 9 */
  push32((uint32_t)(0x9u));
  /* 114ccac8 call 0x114cb800 */
  push32(0x114ccacdu); f_114cb800();
  /* 114ccacd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ccad0 call 0x114d3660 */
  push32(0x114ccad5u); f_114d3660();
  /* 114ccad5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114ccad8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ccadc je 0x114ccbe9 */
  if (C.zf) goto L_114ccbe9;
  /* 114ccae2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ccae6 je 0x114ccbe9 */
  if (C.zf) goto L_114ccbe9;
  /* 114ccaec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114ccaef mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 114ccaf2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 114ccaf5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114ccaf8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 114ccafb cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ccaff ja 0x114ccbb2 */
  if ((!C.cf&&!C.zf)) goto L_114ccbb2;
  /* 114ccb05 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114ccb08 jmp dword ptr [eax*4 + 0x114ccdff] */
  switch (EAX) {
    case 0: goto L_114ccb8a;
    case 1: goto L_114ccb62;
    case 2: goto L_114ccb3a;
    case 3: goto L_114ccb0f;
    default: x86_unimpl("switch@0x114ccb08 out of table"); return;
  }
L_114ccb0f:;
  /* 114ccb0f push 0x114f9c34 */
  push32((uint32_t)(0x114f9c34u));
  /* 114ccb14 push 0x114f97bc */
  push32((uint32_t)(0x114f97bcu));
  /* 114ccb19 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ccb1b push 0 */
  push32((uint32_t)(0x0u));
  /* 114ccb1d push 0 */
  push32((uint32_t)(0x0u));
  /* 114ccb1f push 0 */
  push32((uint32_t)(0x0u));
  /* 114ccb21 call 0x114ca4c0 */
  push32(0x114ccb26u); f_114ca4c0();
  /* 114ccb26 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ccb29 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ccb2c jne 0x114ccb2f */
  if (!C.zf) goto L_114ccb2f;
  /* 114ccb2e int3  */
  x86_unimpl("int3 @ 0x114ccb2e");
L_114ccb2f:;
  /* 114ccb2f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114ccb31 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114ccb33 jne 0x114ccb0f */
  if (!C.zf) goto L_114ccb0f;
  /* 114ccb35 jmp 0x114ccbd8 */
  goto L_114ccbd8;
L_114ccb3a:;
  /* 114ccb3a push 0x114f9c10 */
  push32((uint32_t)(0x114f9c10u));
  /* 114ccb3f push 0x114f97bc */
  push32((uint32_t)(0x114f97bcu));
  /* 114ccb44 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ccb46 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ccb48 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ccb4a push 0 */
  push32((uint32_t)(0x0u));
  /* 114ccb4c call 0x114ca4c0 */
  push32(0x114ccb51u); f_114ca4c0();
  /* 114ccb51 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ccb54 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ccb57 jne 0x114ccb5a */
  if (!C.zf) goto L_114ccb5a;
  /* 114ccb59 int3  */
  x86_unimpl("int3 @ 0x114ccb59");
L_114ccb5a:;
  /* 114ccb5a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114ccb5c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114ccb5e jne 0x114ccb3a */
  if (!C.zf) goto L_114ccb3a;
  /* 114ccb60 jmp 0x114ccbd8 */
  goto L_114ccbd8;
L_114ccb62:;
  /* 114ccb62 push 0x114f9bec */
  push32((uint32_t)(0x114f9becu));
  /* 114ccb67 push 0x114f97bc */
  push32((uint32_t)(0x114f97bcu));
  /* 114ccb6c push 0 */
  push32((uint32_t)(0x0u));
  /* 114ccb6e push 0 */
  push32((uint32_t)(0x0u));
  /* 114ccb70 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ccb72 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ccb74 call 0x114ca4c0 */
  push32(0x114ccb79u); f_114ca4c0();
  /* 114ccb79 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ccb7c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ccb7f jne 0x114ccb82 */
  if (!C.zf) goto L_114ccb82;
  /* 114ccb81 int3  */
  x86_unimpl("int3 @ 0x114ccb81");
L_114ccb82:;
  /* 114ccb82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114ccb84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ccb86 jne 0x114ccb62 */
  if (!C.zf) goto L_114ccb62;
  /* 114ccb88 jmp 0x114ccbd8 */
  goto L_114ccbd8;
L_114ccb8a:;
  /* 114ccb8a push 0x114f9bc8 */
  push32((uint32_t)(0x114f9bc8u));
  /* 114ccb8f push 0x114f97bc */
  push32((uint32_t)(0x114f97bcu));
  /* 114ccb94 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ccb96 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ccb98 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ccb9a push 0 */
  push32((uint32_t)(0x0u));
  /* 114ccb9c call 0x114ca4c0 */
  push32(0x114ccba1u); f_114ca4c0();
  /* 114ccba1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ccba4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ccba7 jne 0x114ccbaa */
  if (!C.zf) goto L_114ccbaa;
  /* 114ccba9 int3  */
  x86_unimpl("int3 @ 0x114ccba9");
L_114ccbaa:;
  /* 114ccbaa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114ccbac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114ccbae jne 0x114ccb8a */
  if (!C.zf) goto L_114ccb8a;
  /* 114ccbb0 jmp 0x114ccbd8 */
  goto L_114ccbd8;
L_114ccbb2:;
  /* 114ccbb2 push 0x114f9b9c */
  push32((uint32_t)(0x114f9b9cu));
  /* 114ccbb7 push 0x114f97bc */
  push32((uint32_t)(0x114f97bcu));
  /* 114ccbbc push 0 */
  push32((uint32_t)(0x0u));
  /* 114ccbbe push 0 */
  push32((uint32_t)(0x0u));
  /* 114ccbc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ccbc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ccbc4 call 0x114ca4c0 */
  push32(0x114ccbc9u); f_114ca4c0();
  /* 114ccbc9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ccbcc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ccbcf jne 0x114ccbd2 */
  if (!C.zf) goto L_114ccbd2;
  /* 114ccbd1 int3  */
  x86_unimpl("int3 @ 0x114ccbd1");
L_114ccbd2:;
  /* 114ccbd2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114ccbd4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114ccbd6 jne 0x114ccbb2 */
  if (!C.zf) goto L_114ccbb2;
L_114ccbd8:;
  /* 114ccbd8 push 9 */
  push32((uint32_t)(0x9u));
  /* 114ccbda call 0x114cb8a0 */
  push32(0x114ccbdfu); f_114cb8a0();
  /* 114ccbdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ccbe2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114ccbe4 jmp 0x114ccdf8 */
  goto L_114ccdf8;
L_114ccbe9:;
  /* 114ccbe9 mov eax, dword ptr [0x114ff1a0] */
  EAX = (r32((uint32_t)(0x114ff1a0)));
  /* 114ccbee mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114ccbf1 jmp 0x114ccbfb */
  goto L_114ccbfb;
L_114ccbf3:;
  /* 114ccbf3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114ccbf6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114ccbf8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_114ccbfb:;
  /* 114ccbfb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ccbff je 0x114ccdeb */
  if (C.zf) goto L_114ccdeb;
  /* 114ccc05 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 114ccc0c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114ccc0f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 114ccc12 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114ccc18 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ccc1b je 0x114ccc40 */
  if (C.zf) goto L_114ccc40;
  /* 114ccc1d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114ccc20 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ccc24 je 0x114ccc40 */
  if (C.zf) goto L_114ccc40;
  /* 114ccc26 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114ccc29 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 114ccc2c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114ccc32 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ccc35 je 0x114ccc40 */
  if (C.zf) goto L_114ccc40;
  /* 114ccc37 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114ccc3a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ccc3e jne 0x114ccc58 */
  if (!C.zf) goto L_114ccc58;
L_114ccc40:;
  /* 114ccc40 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114ccc43 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 114ccc46 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114ccc4c mov edx, dword ptr [ecx*4 + 0x114fcf58] */
  EDX = (r32((uint32_t)(ECX*4 + 0x114fcf58)));
  /* 114ccc53 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 114ccc56 jmp 0x114ccc5f */
  goto L_114ccc5f;
L_114ccc58:;
  /* 114ccc58 mov dword ptr [ebp - 0x14], 0x114f9b94 */
  w32((uint32_t)(EBP + -0x14), (0x114f9b94u));
L_114ccc5f:;
  /* 114ccc5f push 4 */
  push32((uint32_t)(0x4u));
  /* 114ccc61 mov al, byte ptr [0x114fcf54] */
  AL = (r8((uint32_t)(0x114fcf54)));
  /* 114ccc66 push eax */
  push32((uint32_t)(EAX));
  /* 114ccc67 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114ccc6a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114ccc6d push ecx */
  push32((uint32_t)(ECX));
  /* 114ccc6e call 0x114cca10 */
  push32(0x114ccc73u); f_114cca10();
  /* 114ccc73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ccc76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ccc78 jne 0x114cccb4 */
  if (!C.zf) goto L_114cccb4;
L_114ccc7a:;
  /* 114ccc7a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114ccc7d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114ccc80 push edx */
  push32((uint32_t)(EDX));
  /* 114ccc81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114ccc84 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 114ccc87 push ecx */
  push32((uint32_t)(ECX));
  /* 114ccc88 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114ccc8b push edx */
  push32((uint32_t)(EDX));
  /* 114ccc8c push 0x114f9a98 */
  push32((uint32_t)(0x114f9a98u));
  /* 114ccc91 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ccc93 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ccc95 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ccc97 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ccc99 call 0x114ca4c0 */
  push32(0x114ccc9eu); f_114ca4c0();
  /* 114ccc9e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ccca1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ccca4 jne 0x114ccca7 */
  if (!C.zf) goto L_114ccca7;
  /* 114ccca6 int3  */
  x86_unimpl("int3 @ 0x114ccca6");
L_114ccca7:;
  /* 114ccca7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114ccca9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cccab jne 0x114ccc7a */
  if (!C.zf) goto L_114ccc7a;
  /* 114cccad mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_114cccb4:;
  /* 114cccb4 push 4 */
  push32((uint32_t)(0x4u));
  /* 114cccb6 mov cl, byte ptr [0x114fcf54] */
  CL = (r8((uint32_t)(0x114fcf54)));
  /* 114cccbc push ecx */
  push32((uint32_t)(ECX));
  /* 114cccbd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cccc0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 114cccc3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cccc6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 114cccca push edx */
  push32((uint32_t)(EDX));
  /* 114ccccb call 0x114cca10 */
  push32(0x114cccd0u); f_114cca10();
  /* 114cccd0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cccd3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cccd5 jne 0x114ccd11 */
  if (!C.zf) goto L_114ccd11;
L_114cccd7:;
  /* 114cccd7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cccda add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cccdd push eax */
  push32((uint32_t)(EAX));
  /* 114cccde mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114ccce1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 114ccce4 push edx */
  push32((uint32_t)(EDX));
  /* 114ccce5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114ccce8 push eax */
  push32((uint32_t)(EAX));
  /* 114ccce9 push 0x114f9a6c */
  push32((uint32_t)(0x114f9a6cu));
  /* 114cccee push 0 */
  push32((uint32_t)(0x0u));
  /* 114cccf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cccf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cccf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cccf6 call 0x114ca4c0 */
  push32(0x114cccfbu); f_114ca4c0();
  /* 114cccfb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cccfe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ccd01 jne 0x114ccd04 */
  if (!C.zf) goto L_114ccd04;
  /* 114ccd03 int3  */
  x86_unimpl("int3 @ 0x114ccd03");
L_114ccd04:;
  /* 114ccd04 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114ccd06 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114ccd08 jne 0x114cccd7 */
  if (!C.zf) goto L_114cccd7;
  /* 114ccd0a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_114ccd11:;
  /* 114ccd11 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114ccd14 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ccd18 jne 0x114ccd6a */
  if (!C.zf) goto L_114ccd6a;
  /* 114ccd1a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114ccd1d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 114ccd20 push ecx */
  push32((uint32_t)(ECX));
  /* 114ccd21 mov dl, byte ptr [0x114fcf55] */
  DL = (r8((uint32_t)(0x114fcf55)));
  /* 114ccd27 push edx */
  push32((uint32_t)(EDX));
  /* 114ccd28 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114ccd2b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114ccd2e push eax */
  push32((uint32_t)(EAX));
  /* 114ccd2f call 0x114cca10 */
  push32(0x114ccd34u); f_114cca10();
  /* 114ccd34 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ccd37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ccd39 jne 0x114ccd6a */
  if (!C.zf) goto L_114ccd6a;
L_114ccd3b:;
  /* 114ccd3b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114ccd3e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114ccd41 push ecx */
  push32((uint32_t)(ECX));
  /* 114ccd42 push 0x114f9b68 */
  push32((uint32_t)(0x114f9b68u));
  /* 114ccd47 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ccd49 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ccd4b push 0 */
  push32((uint32_t)(0x0u));
  /* 114ccd4d push 0 */
  push32((uint32_t)(0x0u));
  /* 114ccd4f call 0x114ca4c0 */
  push32(0x114ccd54u); f_114ca4c0();
  /* 114ccd54 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ccd57 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ccd5a jne 0x114ccd5d */
  if (!C.zf) goto L_114ccd5d;
  /* 114ccd5c int3  */
  x86_unimpl("int3 @ 0x114ccd5c");
L_114ccd5d:;
  /* 114ccd5d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114ccd5f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114ccd61 jne 0x114ccd3b */
  if (!C.zf) goto L_114ccd3b;
  /* 114ccd63 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_114ccd6a:;
  /* 114ccd6a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ccd6e jne 0x114ccde6 */
  if (!C.zf) goto L_114ccde6;
  /* 114ccd70 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114ccd73 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ccd77 je 0x114ccdac */
  if (C.zf) goto L_114ccdac;
L_114ccd79:;
  /* 114ccd79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114ccd7c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114ccd7f push edx */
  push32((uint32_t)(EDX));
  /* 114ccd80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114ccd83 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 114ccd86 push ecx */
  push32((uint32_t)(ECX));
  /* 114ccd87 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114ccd8a push edx */
  push32((uint32_t)(EDX));
  /* 114ccd8b push 0x114f9b48 */
  push32((uint32_t)(0x114f9b48u));
  /* 114ccd90 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ccd92 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ccd94 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ccd96 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ccd98 call 0x114ca4c0 */
  push32(0x114ccd9du); f_114ca4c0();
  /* 114ccd9d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ccda0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ccda3 jne 0x114ccda6 */
  if (!C.zf) goto L_114ccda6;
  /* 114ccda5 int3  */
  x86_unimpl("int3 @ 0x114ccda5");
L_114ccda6:;
  /* 114ccda6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114ccda8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ccdaa jne 0x114ccd79 */
  if (!C.zf) goto L_114ccd79;
L_114ccdac:;
  /* 114ccdac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114ccdaf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 114ccdb2 push edx */
  push32((uint32_t)(EDX));
  /* 114ccdb3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114ccdb6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114ccdb9 push eax */
  push32((uint32_t)(EAX));
  /* 114ccdba mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114ccdbd push ecx */
  push32((uint32_t)(ECX));
  /* 114ccdbe push 0x114f9b1c */
  push32((uint32_t)(0x114f9b1cu));
  /* 114ccdc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ccdc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ccdc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ccdc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ccdcb call 0x114ca4c0 */
  push32(0x114ccdd0u); f_114ca4c0();
  /* 114ccdd0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ccdd3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ccdd6 jne 0x114ccdd9 */
  if (!C.zf) goto L_114ccdd9;
  /* 114ccdd8 int3  */
  x86_unimpl("int3 @ 0x114ccdd8");
L_114ccdd9:;
  /* 114ccdd9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114ccddb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114ccddd jne 0x114ccdac */
  if (!C.zf) goto L_114ccdac;
  /* 114ccddf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_114ccde6:;
  /* 114ccde6 jmp 0x114ccbf3 */
  goto L_114ccbf3;
L_114ccdeb:;
  /* 114ccdeb push 9 */
  push32((uint32_t)(0x9u));
  /* 114ccded call 0x114cb8a0 */
  push32(0x114ccdf2u); f_114cb8a0();
  /* 114ccdf2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ccdf5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_114ccdf8:;
  /* 114ccdf8 pop edi */
  EDI = (pop32());
  /* 114ccdf9 pop esi */
  ESI = (pop32());
  /* 114ccdfa pop ebx */
  EBX = (pop32());
  /* 114ccdfb mov esp, ebp */
  ESP = (EBP);
  /* 114ccdfd pop ebp */
  EBP = (pop32());
  /* 114ccdfe ret  */
  ESPCHK(0x114ccaa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce10 @ 0x114cce10 (34 bytes, 13 insns) */
void f_114cce10(void) {
  FTRACE(0x114cce10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cce10 push ebp */
  push32((uint32_t)(EBP));
  /* 114cce11 mov ebp, esp */
  EBP = (ESP);
  /* 114cce13 push ecx */
  push32((uint32_t)(ECX));
  /* 114cce14 mov eax, dword ptr [0x114fcf48] */
  EAX = (r32((uint32_t)(0x114fcf48)));
  /* 114cce19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114cce1c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cce20 je 0x114cce2b */
  if (C.zf) goto L_114cce2b;
  /* 114cce22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cce25 mov dword ptr [0x114fcf48], ecx */
  w32((uint32_t)(0x114fcf48), (ECX));
L_114cce2b:;
  /* 114cce2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cce2e mov esp, ebp */
  ESP = (EBP);
  /* 114cce30 pop ebp */
  EBP = (pop32());
  /* 114cce31 ret  */
  ESPCHK(0x114cce10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce40 @ 0x114cce40 (103 bytes, 38 insns) */
void f_114cce40(void) {
  FTRACE(0x114cce40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cce40 push ebp */
  push32((uint32_t)(EBP));
  /* 114cce41 mov ebp, esp */
  EBP = (ESP);
  /* 114cce43 push ecx */
  push32((uint32_t)(ECX));
  /* 114cce44 mov eax, dword ptr [0x114fcf48] */
  EAX = (r32((uint32_t)(0x114fcf48)));
  /* 114cce49 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 114cce4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cce4e jne 0x114cce52 */
  if (!C.zf) goto L_114cce52;
  /* 114cce50 jmp 0x114ccea3 */
  goto L_114ccea3;
L_114cce52:;
  /* 114cce52 push 9 */
  push32((uint32_t)(0x9u));
  /* 114cce54 call 0x114cb800 */
  push32(0x114cce59u); f_114cb800();
  /* 114cce59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cce5c mov ecx, dword ptr [0x114ff1a0] */
  ECX = (r32((uint32_t)(0x114ff1a0)));
  /* 114cce62 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114cce65 jmp 0x114cce6f */
  goto L_114cce6f;
L_114cce67:;
  /* 114cce67 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cce6a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114cce6c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114cce6f:;
  /* 114cce6f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cce73 je 0x114cce99 */
  if (C.zf) goto L_114cce99;
  /* 114cce75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cce78 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 114cce7b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114cce81 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cce84 jne 0x114cce97 */
  if (!C.zf) goto L_114cce97;
  /* 114cce86 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cce89 push eax */
  push32((uint32_t)(EAX));
  /* 114cce8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cce8d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cce90 push ecx */
  push32((uint32_t)(ECX));
  /* 114cce91 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x114cce94u);
  /* 114cce94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114cce97:;
  /* 114cce97 jmp 0x114cce67 */
  goto L_114cce67;
L_114cce99:;
  /* 114cce99 push 9 */
  push32((uint32_t)(0x9u));
  /* 114cce9b call 0x114cb8a0 */
  push32(0x114ccea0u); f_114cb8a0();
  /* 114ccea0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114ccea3:;
  /* 114ccea3 mov esp, ebp */
  ESP = (EBP);
  /* 114ccea5 pop ebp */
  EBP = (pop32());
  /* 114ccea6 ret  */
  ESPCHK(0x114cce40u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x114cceb0 (75 bytes, 28 insns) */
void f_114cceb0(void) {
  FTRACE(0x114cceb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cceb0 push ebp */
  push32((uint32_t)(EBP));
  /* 114cceb1 mov ebp, esp */
  EBP = (ESP);
  /* 114cceb3 push ecx */
  push32((uint32_t)(ECX));
  /* 114cceb4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cceb8 je 0x114cceed */
  if (C.zf) goto L_114cceed;
  /* 114cceba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114ccebd push eax */
  push32((uint32_t)(EAX));
  /* 114ccebe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ccec1 push ecx */
  push32((uint32_t)(ECX));
  /* 114ccec2 call dword ptr [0x115013f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013f4))), 0x114ccec8u);
  /* 114ccec8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cceca jne 0x114cceed */
  if (!C.zf) goto L_114cceed;
  /* 114ccecc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cced0 je 0x114ccee4 */
  if (C.zf) goto L_114ccee4;
  /* 114cced2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cced5 push edx */
  push32((uint32_t)(EDX));
  /* 114cced6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cced9 push eax */
  push32((uint32_t)(EAX));
  /* 114cceda call dword ptr [0x115013f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013f8))), 0x114ccee0u);
  /* 114ccee0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ccee2 jne 0x114cceed */
  if (!C.zf) goto L_114cceed;
L_114ccee4:;
  /* 114ccee4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 114cceeb jmp 0x114ccef4 */
  goto L_114ccef4;
L_114cceed:;
  /* 114cceed mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_114ccef4:;
  /* 114ccef4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114ccef7 mov esp, ebp */
  ESP = (EBP);
  /* 114ccef9 pop ebp */
  EBP = (pop32());
  /* 114ccefa ret  */
  ESPCHK(0x114cceb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf00 @ 0x114ccf00 (134 bytes, 50 insns) */
void f_114ccf00(void) {
  FTRACE(0x114ccf00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ccf00 push ebp */
  push32((uint32_t)(EBP));
  /* 114ccf01 mov ebp, esp */
  EBP = (ESP);
  /* 114ccf03 push ecx */
  push32((uint32_t)(ECX));
  /* 114ccf04 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ccf08 jne 0x114ccf0e */
  if (!C.zf) goto L_114ccf0e;
  /* 114ccf0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114ccf0c jmp 0x114ccf82 */
  goto L_114ccf82;
L_114ccf0e:;
  /* 114ccf0e push 1 */
  push32((uint32_t)(0x1u));
  /* 114ccf10 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 114ccf12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ccf15 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114ccf18 push eax */
  push32((uint32_t)(EAX));
  /* 114ccf19 call 0x114cceb0 */
  push32(0x114ccf1eu); f_114cceb0();
  /* 114ccf1e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ccf21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ccf23 jne 0x114ccf29 */
  if (!C.zf) goto L_114ccf29;
  /* 114ccf25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114ccf27 jmp 0x114ccf82 */
  goto L_114ccf82;
L_114ccf29:;
  /* 114ccf29 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ccf2c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114ccf2f push ecx */
  push32((uint32_t)(ECX));
  /* 114ccf30 call 0x114d3780 */
  push32(0x114ccf35u); f_114d3780();
  /* 114ccf35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ccf38 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114ccf3b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ccf3f je 0x114ccf56 */
  if (C.zf) goto L_114ccf56;
  /* 114ccf41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ccf44 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114ccf47 push edx */
  push32((uint32_t)(EDX));
  /* 114ccf48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114ccf4b push eax */
  push32((uint32_t)(EAX));
  /* 114ccf4c call 0x114d37e0 */
  push32(0x114ccf51u); f_114d37e0();
  /* 114ccf51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ccf54 jmp 0x114ccf82 */
  goto L_114ccf82;
L_114ccf56:;
  /* 114ccf56 mov ecx, dword ptr [0x114ff1b0] */
  ECX = (r32((uint32_t)(0x114ff1b0)));
  /* 114ccf5c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 114ccf62 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114ccf64 je 0x114ccf6d */
  if (C.zf) goto L_114ccf6d;
  /* 114ccf66 mov eax, 1 */
  EAX = (0x1u);
  /* 114ccf6b jmp 0x114ccf82 */
  goto L_114ccf82;
L_114ccf6d:;
  /* 114ccf6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ccf70 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114ccf73 push edx */
  push32((uint32_t)(EDX));
  /* 114ccf74 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ccf76 mov eax, dword ptr [0x11500ae8] */
  EAX = (r32((uint32_t)(0x11500ae8)));
  /* 114ccf7b push eax */
  push32((uint32_t)(EAX));
  /* 114ccf7c call dword ptr [0x11501428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501428))), 0x114ccf82u);
L_114ccf82:;
  /* 114ccf82 mov esp, ebp */
  ESP = (EBP);
  /* 114ccf84 pop ebp */
  EBP = (pop32());
  /* 114ccf85 ret  */
  ESPCHK(0x114ccf00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf90 @ 0x114ccf90 (227 bytes, 80 insns) */
void f_114ccf90(void) {
  FTRACE(0x114ccf90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ccf90 push ebp */
  push32((uint32_t)(EBP));
  /* 114ccf91 mov ebp, esp */
  EBP = (ESP);
  /* 114ccf93 push ecx */
  push32((uint32_t)(ECX));
  /* 114ccf94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ccf97 push eax */
  push32((uint32_t)(EAX));
  /* 114ccf98 call 0x114ccf00 */
  push32(0x114ccf9du); f_114ccf00();
  /* 114ccf9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ccfa0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ccfa2 jne 0x114ccfab */
  if (!C.zf) goto L_114ccfab;
  /* 114ccfa4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114ccfa6 jmp 0x114cd06f */
  goto L_114cd06f;
L_114ccfab:;
  /* 114ccfab push 9 */
  push32((uint32_t)(0x9u));
  /* 114ccfad call 0x114cb800 */
  push32(0x114ccfb2u); f_114cb800();
  /* 114ccfb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ccfb5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ccfb8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114ccfbb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114ccfbe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114ccfc1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 114ccfc4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114ccfc9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ccfcc je 0x114ccff0 */
  if (C.zf) goto L_114ccff0;
  /* 114ccfce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114ccfd1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ccfd5 je 0x114ccff0 */
  if (C.zf) goto L_114ccff0;
  /* 114ccfd7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114ccfda mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 114ccfdd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114ccfe2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ccfe5 je 0x114ccff0 */
  if (C.zf) goto L_114ccff0;
  /* 114ccfe7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114ccfea cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ccfee jne 0x114cd063 */
  if (!C.zf) goto L_114cd063;
L_114ccff0:;
  /* 114ccff0 push 1 */
  push32((uint32_t)(0x1u));
  /* 114ccff2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114ccff5 push edx */
  push32((uint32_t)(EDX));
  /* 114ccff6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ccff9 push eax */
  push32((uint32_t)(EAX));
  /* 114ccffa call 0x114cceb0 */
  push32(0x114ccfffu); f_114cceb0();
  /* 114ccfff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd002 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cd004 je 0x114cd063 */
  if (C.zf) goto L_114cd063;
  /* 114cd006 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd009 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 114cd00c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd00f jne 0x114cd063 */
  if (!C.zf) goto L_114cd063;
  /* 114cd011 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd014 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 114cd017 cmp ecx, dword ptr [0x114fcf4c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x114fcf4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd01d jg 0x114cd063 */
  if ((!C.zf&&C.sf==C.of)) goto L_114cd063;
  /* 114cd01f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd023 je 0x114cd030 */
  if (C.zf) goto L_114cd030;
  /* 114cd025 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cd028 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd02b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 114cd02e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_114cd030:;
  /* 114cd030 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd034 je 0x114cd041 */
  if (C.zf) goto L_114cd041;
  /* 114cd036 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114cd039 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd03c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 114cd03f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_114cd041:;
  /* 114cd041 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd045 je 0x114cd052 */
  if (C.zf) goto L_114cd052;
  /* 114cd047 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114cd04a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd04d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 114cd050 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_114cd052:;
  /* 114cd052 push 9 */
  push32((uint32_t)(0x9u));
  /* 114cd054 call 0x114cb8a0 */
  push32(0x114cd059u); f_114cb8a0();
  /* 114cd059 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd05c mov eax, 1 */
  EAX = (0x1u);
  /* 114cd061 jmp 0x114cd06f */
  goto L_114cd06f;
L_114cd063:;
  /* 114cd063 push 9 */
  push32((uint32_t)(0x9u));
  /* 114cd065 call 0x114cb8a0 */
  push32(0x114cd06au); f_114cb8a0();
  /* 114cd06a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd06d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114cd06f:;
  /* 114cd06f mov esp, ebp */
  ESP = (EBP);
  /* 114cd071 pop ebp */
  EBP = (pop32());
  /* 114cd072 ret  */
  ESPCHK(0x114ccf90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d080 @ 0x114cd080 (28 bytes, 11 insns) */
void f_114cd080(void) {
  FTRACE(0x114cd080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cd080 push ebp */
  push32((uint32_t)(EBP));
  /* 114cd081 mov ebp, esp */
  EBP = (ESP);
  /* 114cd083 push ecx */
  push32((uint32_t)(ECX));
  /* 114cd084 mov eax, dword ptr [0x11500c5c] */
  EAX = (r32((uint32_t)(0x11500c5c)));
  /* 114cd089 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114cd08c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cd08f mov dword ptr [0x11500c5c], ecx */
  w32((uint32_t)(0x11500c5c), (ECX));
  /* 114cd095 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd098 mov esp, ebp */
  ESP = (EBP);
  /* 114cd09a pop ebp */
  EBP = (pop32());
  /* 114cd09b ret  */
  ESPCHK(0x114cd080u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d0a0 @ 0x114cd0a0 (362 bytes, 116 insns) */
void f_114cd0a0(void) {
  FTRACE(0x114cd0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cd0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 114cd0a1 mov ebp, esp */
  EBP = (ESP);
  /* 114cd0a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cd0a6 push ebx */
  push32((uint32_t)(EBX));
  /* 114cd0a7 push esi */
  push32((uint32_t)(ESI));
  /* 114cd0a8 push edi */
  push32((uint32_t)(EDI));
  /* 114cd0a9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd0ad jne 0x114cd0da */
  if (!C.zf) goto L_114cd0da;
L_114cd0af:;
  /* 114cd0af push 0x114f9c7c */
  push32((uint32_t)(0x114f9c7cu));
  /* 114cd0b4 push 0x114f97bc */
  push32((uint32_t)(0x114f97bcu));
  /* 114cd0b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd0bb push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd0bd push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd0bf push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd0c1 call 0x114ca4c0 */
  push32(0x114cd0c6u); f_114ca4c0();
  /* 114cd0c6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd0c9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd0cc jne 0x114cd0cf */
  if (!C.zf) goto L_114cd0cf;
  /* 114cd0ce int3  */
  x86_unimpl("int3 @ 0x114cd0ce");
L_114cd0cf:;
  /* 114cd0cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cd0d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cd0d3 jne 0x114cd0af */
  if (!C.zf) goto L_114cd0af;
  /* 114cd0d5 jmp 0x114cd203 */
  goto L_114cd203;
L_114cd0da:;
  /* 114cd0da push 9 */
  push32((uint32_t)(0x9u));
  /* 114cd0dc call 0x114cb800 */
  push32(0x114cd0e1u); f_114cb800();
  /* 114cd0e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd0e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cd0e7 mov edx, dword ptr [0x114ff1a0] */
  EDX = (r32((uint32_t)(0x114ff1a0)));
  /* 114cd0ed mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 114cd0ef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114cd0f6 jmp 0x114cd101 */
  goto L_114cd101;
L_114cd0f8:;
  /* 114cd0f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd0fb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd0fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114cd101:;
  /* 114cd101 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd105 jge 0x114cd125 */
  if ((C.sf==C.of)) goto L_114cd125;
  /* 114cd107 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd10a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cd10d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 114cd115 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd118 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cd11b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 114cd123 jmp 0x114cd0f8 */
  goto L_114cd0f8;
L_114cd125:;
  /* 114cd125 mov edx, dword ptr [0x114ff1a0] */
  EDX = (r32((uint32_t)(0x114ff1a0)));
  /* 114cd12b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 114cd12e jmp 0x114cd138 */
  goto L_114cd138;
L_114cd130:;
  /* 114cd130 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cd133 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114cd135 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_114cd138:;
  /* 114cd138 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd13c je 0x114cd1e1 */
  if (C.zf) goto L_114cd1e1;
  /* 114cd142 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cd145 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 114cd148 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114cd14d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cd14f jl 0x114cd1b7 */
  if ((C.sf!=C.of)) goto L_114cd1b7;
  /* 114cd151 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cd154 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 114cd157 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114cd15d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd160 jge 0x114cd1b7 */
  if ((C.sf==C.of)) goto L_114cd1b7;
  /* 114cd162 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cd165 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 114cd168 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114cd16e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cd171 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 114cd175 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd178 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cd17b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 114cd17e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114cd184 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cd187 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 114cd18b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cd18e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 114cd191 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114cd196 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cd199 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 114cd19d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cd1a0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd1a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cd1a6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 114cd1a9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114cd1ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cd1b1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 114cd1b5 jmp 0x114cd1dc */
  goto L_114cd1dc;
L_114cd1b7:;
  /* 114cd1b7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cd1ba push edx */
  push32((uint32_t)(EDX));
  /* 114cd1bb push 0x114f9c58 */
  push32((uint32_t)(0x114f9c58u));
  /* 114cd1c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd1c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd1c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd1c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd1c8 call 0x114ca4c0 */
  push32(0x114cd1cdu); f_114ca4c0();
  /* 114cd1cd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd1d0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd1d3 jne 0x114cd1d6 */
  if (!C.zf) goto L_114cd1d6;
  /* 114cd1d5 int3  */
  x86_unimpl("int3 @ 0x114cd1d5");
L_114cd1d6:;
  /* 114cd1d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cd1d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cd1da jne 0x114cd1b7 */
  if (!C.zf) goto L_114cd1b7;
L_114cd1dc:;
  /* 114cd1dc jmp 0x114cd130 */
  goto L_114cd130;
L_114cd1e1:;
  /* 114cd1e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cd1e4 mov edx, dword ptr [0x114ff1a8] */
  EDX = (r32((uint32_t)(0x114ff1a8)));
  /* 114cd1ea mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 114cd1ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cd1f0 mov ecx, dword ptr [0x114ff19c] */
  ECX = (r32((uint32_t)(0x114ff19c)));
  /* 114cd1f6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 114cd1f9 push 9 */
  push32((uint32_t)(0x9u));
  /* 114cd1fb call 0x114cb8a0 */
  push32(0x114cd200u); f_114cb8a0();
  /* 114cd200 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114cd203:;
  /* 114cd203 pop edi */
  EDI = (pop32());
  /* 114cd204 pop esi */
  ESI = (pop32());
  /* 114cd205 pop ebx */
  EBX = (pop32());
  /* 114cd206 mov esp, ebp */
  ESP = (EBP);
  /* 114cd208 pop ebp */
  EBP = (pop32());
  /* 114cd209 ret  */
  ESPCHK(0x114cd0a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d210 @ 0x114cd210 (291 bytes, 95 insns) */
void f_114cd210(void) {
  FTRACE(0x114cd210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cd210 push ebp */
  push32((uint32_t)(EBP));
  /* 114cd211 mov ebp, esp */
  EBP = (ESP);
  /* 114cd213 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cd216 push ebx */
  push32((uint32_t)(EBX));
  /* 114cd217 push esi */
  push32((uint32_t)(ESI));
  /* 114cd218 push edi */
  push32((uint32_t)(EDI));
  /* 114cd219 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 114cd220 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd224 je 0x114cd232 */
  if (C.zf) goto L_114cd232;
  /* 114cd226 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd22a je 0x114cd232 */
  if (C.zf) goto L_114cd232;
  /* 114cd22c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd230 jne 0x114cd260 */
  if (!C.zf) goto L_114cd260;
L_114cd232:;
  /* 114cd232 push 0x114f9ca4 */
  push32((uint32_t)(0x114f9ca4u));
  /* 114cd237 push 0x114f97bc */
  push32((uint32_t)(0x114f97bcu));
  /* 114cd23c push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd23e push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd240 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd242 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd244 call 0x114ca4c0 */
  push32(0x114cd249u); f_114ca4c0();
  /* 114cd249 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd24c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd24f jne 0x114cd252 */
  if (!C.zf) goto L_114cd252;
  /* 114cd251 int3  */
  x86_unimpl("int3 @ 0x114cd251");
L_114cd252:;
  /* 114cd252 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cd254 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cd256 jne 0x114cd232 */
  if (!C.zf) goto L_114cd232;
  /* 114cd258 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cd25b jmp 0x114cd32c */
  goto L_114cd32c;
L_114cd260:;
  /* 114cd260 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114cd267 jmp 0x114cd272 */
  goto L_114cd272;
L_114cd269:;
  /* 114cd269 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd26c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd26f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114cd272:;
  /* 114cd272 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd276 jge 0x114cd2fc */
  if ((C.sf==C.of)) goto L_114cd2fc;
  /* 114cd27c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd27f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cd282 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd285 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 114cd288 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 114cd28c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cd290 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd293 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cd296 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 114cd29a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd29d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cd2a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd2a3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 114cd2a6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 114cd2aa sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cd2ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd2b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cd2b4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 114cd2b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd2bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cd2be cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd2c3 jne 0x114cd2d2 */
  if (!C.zf) goto L_114cd2d2;
  /* 114cd2c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd2c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cd2cb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd2d0 je 0x114cd2f7 */
  if (C.zf) goto L_114cd2f7;
L_114cd2d2:;
  /* 114cd2d2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd2d6 je 0x114cd2f7 */
  if (C.zf) goto L_114cd2f7;
  /* 114cd2d8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd2dc jne 0x114cd2f0 */
  if (!C.zf) goto L_114cd2f0;
  /* 114cd2de cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd2e2 jne 0x114cd2f7 */
  if (!C.zf) goto L_114cd2f7;
  /* 114cd2e4 mov eax, dword ptr [0x114fcf48] */
  EAX = (r32((uint32_t)(0x114fcf48)));
  /* 114cd2e9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 114cd2ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cd2ee je 0x114cd2f7 */
  if (C.zf) goto L_114cd2f7;
L_114cd2f0:;
  /* 114cd2f0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_114cd2f7:;
  /* 114cd2f7 jmp 0x114cd269 */
  goto L_114cd269;
L_114cd2fc:;
  /* 114cd2fc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cd2ff mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cd302 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 114cd305 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cd308 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cd30b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 114cd30e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cd311 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cd314 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 114cd317 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cd31a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cd31d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 114cd320 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cd323 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 114cd329 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_114cd32c:;
  /* 114cd32c pop edi */
  EDI = (pop32());
  /* 114cd32d pop esi */
  ESI = (pop32());
  /* 114cd32e pop ebx */
  EBX = (pop32());
  /* 114cd32f mov esp, ebp */
  ESP = (EBP);
  /* 114cd331 pop ebp */
  EBP = (pop32());
  /* 114cd332 ret  */
  ESPCHK(0x114cd210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d340 @ 0x114cd340 (697 bytes, 253 insns) */
void f_114cd340(void) {
  FTRACE(0x114cd340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cd340 push ebp */
  push32((uint32_t)(EBP));
  /* 114cd341 mov ebp, esp */
  EBP = (ESP);
  /* 114cd343 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cd346 push ebx */
  push32((uint32_t)(EBX));
  /* 114cd347 push esi */
  push32((uint32_t)(ESI));
  /* 114cd348 push edi */
  push32((uint32_t)(EDI));
  /* 114cd349 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 114cd350 push 9 */
  push32((uint32_t)(0x9u));
  /* 114cd352 call 0x114cb800 */
  push32(0x114cd357u); f_114cb800();
  /* 114cd357 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114cd35a:;
  /* 114cd35a push 0x114f9d9c */
  push32((uint32_t)(0x114f9d9cu));
  /* 114cd35f push 0x114f97bc */
  push32((uint32_t)(0x114f97bcu));
  /* 114cd364 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd366 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd368 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd36a push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd36c call 0x114ca4c0 */
  push32(0x114cd371u); f_114ca4c0();
  /* 114cd371 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd374 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd377 jne 0x114cd37a */
  if (!C.zf) goto L_114cd37a;
  /* 114cd379 int3  */
  x86_unimpl("int3 @ 0x114cd379");
L_114cd37a:;
  /* 114cd37a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cd37c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cd37e jne 0x114cd35a */
  if (!C.zf) goto L_114cd35a;
  /* 114cd380 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd384 je 0x114cd38e */
  if (C.zf) goto L_114cd38e;
  /* 114cd386 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cd389 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114cd38b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_114cd38e:;
  /* 114cd38e mov eax, dword ptr [0x114ff1a0] */
  EAX = (r32((uint32_t)(0x114ff1a0)));
  /* 114cd393 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114cd396 jmp 0x114cd3a0 */
  goto L_114cd3a0;
L_114cd398:;
  /* 114cd398 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd39b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114cd39d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_114cd3a0:;
  /* 114cd3a0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd3a4 je 0x114cd5c2 */
  if (C.zf) goto L_114cd5c2;
  /* 114cd3aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd3ad cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd3b0 je 0x114cd5c2 */
  if (C.zf) goto L_114cd5c2;
  /* 114cd3b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd3b9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 114cd3bc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114cd3c2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd3c5 je 0x114cd3f4 */
  if (C.zf) goto L_114cd3f4;
  /* 114cd3c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd3ca mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 114cd3cd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114cd3d3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114cd3d5 je 0x114cd3f4 */
  if (C.zf) goto L_114cd3f4;
  /* 114cd3d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd3da mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 114cd3dd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114cd3e2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd3e5 jne 0x114cd3f9 */
  if (!C.zf) goto L_114cd3f9;
  /* 114cd3e7 mov ecx, dword ptr [0x114fcf48] */
  ECX = (r32((uint32_t)(0x114fcf48)));
  /* 114cd3ed and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 114cd3f0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114cd3f2 jne 0x114cd3f9 */
  if (!C.zf) goto L_114cd3f9;
L_114cd3f4:;
  /* 114cd3f4 jmp 0x114cd5bd */
  goto L_114cd5bd;
L_114cd3f9:;
  /* 114cd3f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd3fc cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd400 je 0x114cd472 */
  if (C.zf) goto L_114cd472;
  /* 114cd402 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd404 push 1 */
  push32((uint32_t)(0x1u));
  /* 114cd406 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd409 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 114cd40c push ecx */
  push32((uint32_t)(ECX));
  /* 114cd40d call 0x114cceb0 */
  push32(0x114cd412u); f_114cceb0();
  /* 114cd412 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd415 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cd417 jne 0x114cd443 */
  if (!C.zf) goto L_114cd443;
L_114cd419:;
  /* 114cd419 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd41c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 114cd41f push eax */
  push32((uint32_t)(EAX));
  /* 114cd420 push 0x114f9d88 */
  push32((uint32_t)(0x114f9d88u));
  /* 114cd425 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd427 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd429 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd42b push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd42d call 0x114ca4c0 */
  push32(0x114cd432u); f_114ca4c0();
  /* 114cd432 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd435 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd438 jne 0x114cd43b */
  if (!C.zf) goto L_114cd43b;
  /* 114cd43a int3  */
  x86_unimpl("int3 @ 0x114cd43a");
L_114cd43b:;
  /* 114cd43b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114cd43d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114cd43f jne 0x114cd419 */
  if (!C.zf) goto L_114cd419;
  /* 114cd441 jmp 0x114cd472 */
  goto L_114cd472;
L_114cd443:;
  /* 114cd443 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd446 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 114cd449 push eax */
  push32((uint32_t)(EAX));
  /* 114cd44a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd44d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 114cd450 push edx */
  push32((uint32_t)(EDX));
  /* 114cd451 push 0x114f9d7c */
  push32((uint32_t)(0x114f9d7cu));
  /* 114cd456 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd458 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd45a push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd45c push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd45e call 0x114ca4c0 */
  push32(0x114cd463u); f_114ca4c0();
  /* 114cd463 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd466 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd469 jne 0x114cd46c */
  if (!C.zf) goto L_114cd46c;
  /* 114cd46b int3  */
  x86_unimpl("int3 @ 0x114cd46b");
L_114cd46c:;
  /* 114cd46c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cd46e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cd470 jne 0x114cd443 */
  if (!C.zf) goto L_114cd443;
L_114cd472:;
  /* 114cd472 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd475 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 114cd478 push edx */
  push32((uint32_t)(EDX));
  /* 114cd479 push 0x114f9d74 */
  push32((uint32_t)(0x114f9d74u));
  /* 114cd47e push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd480 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd482 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd484 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd486 call 0x114ca4c0 */
  push32(0x114cd48bu); f_114ca4c0();
  /* 114cd48b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd48e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd491 jne 0x114cd494 */
  if (!C.zf) goto L_114cd494;
  /* 114cd493 int3  */
  x86_unimpl("int3 @ 0x114cd493");
L_114cd494:;
  /* 114cd494 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cd496 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cd498 jne 0x114cd472 */
  if (!C.zf) goto L_114cd472;
  /* 114cd49a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd49d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 114cd4a0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114cd4a6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd4a9 jne 0x114cd51c */
  if (!C.zf) goto L_114cd51c;
L_114cd4ab:;
  /* 114cd4ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd4ae mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 114cd4b1 push ecx */
  push32((uint32_t)(ECX));
  /* 114cd4b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd4b5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 114cd4b8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 114cd4bb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114cd4c0 push eax */
  push32((uint32_t)(EAX));
  /* 114cd4c1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd4c4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd4c7 push ecx */
  push32((uint32_t)(ECX));
  /* 114cd4c8 push 0x114f9d40 */
  push32((uint32_t)(0x114f9d40u));
  /* 114cd4cd push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd4cf push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd4d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd4d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd4d5 call 0x114ca4c0 */
  push32(0x114cd4dau); f_114ca4c0();
  /* 114cd4da add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd4dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd4e0 jne 0x114cd4e3 */
  if (!C.zf) goto L_114cd4e3;
  /* 114cd4e2 int3  */
  x86_unimpl("int3 @ 0x114cd4e2");
L_114cd4e3:;
  /* 114cd4e3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114cd4e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cd4e7 jne 0x114cd4ab */
  if (!C.zf) goto L_114cd4ab;
  /* 114cd4e9 cmp dword ptr [0x11500c5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11500c5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd4f0 je 0x114cd50b */
  if (C.zf) goto L_114cd50b;
  /* 114cd4f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd4f5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 114cd4f8 push ecx */
  push32((uint32_t)(ECX));
  /* 114cd4f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd4fc add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd4ff push edx */
  push32((uint32_t)(EDX));
  /* 114cd500 call dword ptr [0x11500c5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11500c5c))), 0x114cd506u);
  /* 114cd506 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd509 jmp 0x114cd517 */
  goto L_114cd517;
L_114cd50b:;
  /* 114cd50b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd50e push eax */
  push32((uint32_t)(EAX));
  /* 114cd50f call 0x114cd600 */
  push32(0x114cd514u); f_114cd600();
  /* 114cd514 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114cd517:;
  /* 114cd517 jmp 0x114cd5bd */
  goto L_114cd5bd;
L_114cd51c:;
  /* 114cd51c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd51f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd523 jne 0x114cd562 */
  if (!C.zf) goto L_114cd562;
L_114cd525:;
  /* 114cd525 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd528 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 114cd52b push eax */
  push32((uint32_t)(EAX));
  /* 114cd52c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd52f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd532 push ecx */
  push32((uint32_t)(ECX));
  /* 114cd533 push 0x114f9d18 */
  push32((uint32_t)(0x114f9d18u));
  /* 114cd538 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd53a push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd53c push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd53e push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd540 call 0x114ca4c0 */
  push32(0x114cd545u); f_114ca4c0();
  /* 114cd545 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd548 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd54b jne 0x114cd54e */
  if (!C.zf) goto L_114cd54e;
  /* 114cd54d int3  */
  x86_unimpl("int3 @ 0x114cd54d");
L_114cd54e:;
  /* 114cd54e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114cd550 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cd552 jne 0x114cd525 */
  if (!C.zf) goto L_114cd525;
  /* 114cd554 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd557 push eax */
  push32((uint32_t)(EAX));
  /* 114cd558 call 0x114cd600 */
  push32(0x114cd55du); f_114cd600();
  /* 114cd55d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd560 jmp 0x114cd5bd */
  goto L_114cd5bd;
L_114cd562:;
  /* 114cd562 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd565 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 114cd568 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114cd56e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd571 jne 0x114cd5bd */
  if (!C.zf) goto L_114cd5bd;
L_114cd573:;
  /* 114cd573 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd576 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 114cd579 push ecx */
  push32((uint32_t)(ECX));
  /* 114cd57a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd57d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 114cd580 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 114cd583 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114cd588 push eax */
  push32((uint32_t)(EAX));
  /* 114cd589 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd58c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd58f push ecx */
  push32((uint32_t)(ECX));
  /* 114cd590 push 0x114f9ce4 */
  push32((uint32_t)(0x114f9ce4u));
  /* 114cd595 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd597 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd599 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd59b push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd59d call 0x114ca4c0 */
  push32(0x114cd5a2u); f_114ca4c0();
  /* 114cd5a2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd5a5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd5a8 jne 0x114cd5ab */
  if (!C.zf) goto L_114cd5ab;
  /* 114cd5aa int3  */
  x86_unimpl("int3 @ 0x114cd5aa");
L_114cd5ab:;
  /* 114cd5ab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114cd5ad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cd5af jne 0x114cd573 */
  if (!C.zf) goto L_114cd573;
  /* 114cd5b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd5b4 push eax */
  push32((uint32_t)(EAX));
  /* 114cd5b5 call 0x114cd600 */
  push32(0x114cd5bau); f_114cd600();
  /* 114cd5ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114cd5bd:;
  /* 114cd5bd jmp 0x114cd398 */
  goto L_114cd398;
L_114cd5c2:;
  /* 114cd5c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 114cd5c4 call 0x114cb8a0 */
  push32(0x114cd5c9u); f_114cb8a0();
  /* 114cd5c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114cd5cc:;
  /* 114cd5cc push 0x114f9ccc */
  push32((uint32_t)(0x114f9cccu));
  /* 114cd5d1 push 0x114f97bc */
  push32((uint32_t)(0x114f97bcu));
  /* 114cd5d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd5d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd5da push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd5dc push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd5de call 0x114ca4c0 */
  push32(0x114cd5e3u); f_114ca4c0();
  /* 114cd5e3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd5e6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd5e9 jne 0x114cd5ec */
  if (!C.zf) goto L_114cd5ec;
  /* 114cd5eb int3  */
  x86_unimpl("int3 @ 0x114cd5eb");
L_114cd5ec:;
  /* 114cd5ec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114cd5ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114cd5f0 jne 0x114cd5cc */
  if (!C.zf) goto L_114cd5cc;
  /* 114cd5f2 pop edi */
  EDI = (pop32());
  /* 114cd5f3 pop esi */
  ESI = (pop32());
  /* 114cd5f4 pop ebx */
  EBX = (pop32());
  /* 114cd5f5 mov esp, ebp */
  ESP = (EBP);
  /* 114cd5f7 pop ebp */
  EBP = (pop32());
  /* 114cd5f8 ret  */
  ESPCHK(0x114cd340u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d600 @ 0x114cd600 (276 bytes, 89 insns) */
void f_114cd600(void) {
  FTRACE(0x114cd600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cd600 push ebp */
  push32((uint32_t)(EBP));
  /* 114cd601 mov ebp, esp */
  EBP = (ESP);
  /* 114cd603 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cd606 push ebx */
  push32((uint32_t)(EBX));
  /* 114cd607 push esi */
  push32((uint32_t)(ESI));
  /* 114cd608 push edi */
  push32((uint32_t)(EDI));
  /* 114cd609 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 114cd610 jmp 0x114cd61b */
  goto L_114cd61b;
L_114cd612:;
  /* 114cd612 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 114cd615 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd618 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_114cd61b:;
  /* 114cd61b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cd61e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd622 jge 0x114cd62f */
  if ((C.sf==C.of)) goto L_114cd62f;
  /* 114cd624 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cd627 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 114cd62a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 114cd62d jmp 0x114cd636 */
  goto L_114cd636;
L_114cd62f:;
  /* 114cd62f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_114cd636:;
  /* 114cd636 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 114cd639 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd63c jge 0x114cd6dc */
  if ((C.sf==C.of)) goto L_114cd6dc;
  /* 114cd642 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cd645 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd648 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 114cd64b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 114cd64e cmp dword ptr [0x114fd040], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114fd040))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd655 jle 0x114cd673 */
  if ((C.zf||C.sf!=C.of)) goto L_114cd673;
  /* 114cd657 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 114cd65c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 114cd65f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 114cd665 push ecx */
  push32((uint32_t)(ECX));
  /* 114cd666 call 0x114d20c0 */
  push32(0x114cd66bu); f_114d20c0();
  /* 114cd66b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd66e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 114cd671 jmp 0x114cd690 */
  goto L_114cd690;
L_114cd673:;
  /* 114cd673 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 114cd676 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 114cd67c mov eax, dword ptr [0x114fd04c] */
  EAX = (r32((uint32_t)(0x114fd04c)));
  /* 114cd681 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114cd683 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 114cd687 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 114cd68d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_114cd690:;
  /* 114cd690 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd694 je 0x114cd6a4 */
  if (C.zf) goto L_114cd6a4;
  /* 114cd696 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 114cd699 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 114cd69f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 114cd6a2 jmp 0x114cd6ab */
  goto L_114cd6ab;
L_114cd6a4:;
  /* 114cd6a4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_114cd6ab:;
  /* 114cd6ab mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 114cd6ae mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 114cd6b1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 114cd6b5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 114cd6b8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 114cd6be push edx */
  push32((uint32_t)(EDX));
  /* 114cd6bf push 0x114f9dc0 */
  push32((uint32_t)(0x114f9dc0u));
  /* 114cd6c4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 114cd6c7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114cd6ca lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 114cd6ce push ecx */
  push32((uint32_t)(ECX));
  /* 114cd6cf call 0x114c9e50 */
  push32(0x114cd6d4u); f_114c9e50();
  /* 114cd6d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd6d7 jmp 0x114cd612 */
  goto L_114cd612;
L_114cd6dc:;
  /* 114cd6dc mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 114cd6df mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_114cd6e4:;
  /* 114cd6e4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 114cd6e7 push eax */
  push32((uint32_t)(EAX));
  /* 114cd6e8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 114cd6eb push ecx */
  push32((uint32_t)(ECX));
  /* 114cd6ec push 0x114f9db0 */
  push32((uint32_t)(0x114f9db0u));
  /* 114cd6f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd6f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd6f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd6f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd6f9 call 0x114ca4c0 */
  push32(0x114cd6feu); f_114ca4c0();
  /* 114cd6fe add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd701 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd704 jne 0x114cd707 */
  if (!C.zf) goto L_114cd707;
  /* 114cd706 int3  */
  x86_unimpl("int3 @ 0x114cd706");
L_114cd707:;
  /* 114cd707 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114cd709 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cd70b jne 0x114cd6e4 */
  if (!C.zf) goto L_114cd6e4;
  /* 114cd70d pop edi */
  EDI = (pop32());
  /* 114cd70e pop esi */
  ESI = (pop32());
  /* 114cd70f pop ebx */
  EBX = (pop32());
  /* 114cd710 mov esp, ebp */
  ESP = (EBP);
  /* 114cd712 pop ebp */
  EBP = (pop32());
  /* 114cd713 ret  */
  ESPCHK(0x114cd600u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d720 @ 0x114cd720 (116 bytes, 46 insns) */
void f_114cd720(void) {
  FTRACE(0x114cd720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cd720 push ebp */
  push32((uint32_t)(EBP));
  /* 114cd721 mov ebp, esp */
  EBP = (ESP);
  /* 114cd723 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cd726 push ebx */
  push32((uint32_t)(EBX));
  /* 114cd727 push esi */
  push32((uint32_t)(ESI));
  /* 114cd728 push edi */
  push32((uint32_t)(EDI));
  /* 114cd729 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 114cd72c push eax */
  push32((uint32_t)(EAX));
  /* 114cd72d call 0x114cd0a0 */
  push32(0x114cd732u); f_114cd0a0();
  /* 114cd732 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd735 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd739 jne 0x114cd754 */
  if (!C.zf) goto L_114cd754;
  /* 114cd73b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd73f jne 0x114cd754 */
  if (!C.zf) goto L_114cd754;
  /* 114cd741 mov ecx, dword ptr [0x114fcf48] */
  ECX = (r32((uint32_t)(0x114fcf48)));
  /* 114cd747 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 114cd74a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114cd74c je 0x114cd78b */
  if (C.zf) goto L_114cd78b;
  /* 114cd74e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd752 je 0x114cd78b */
  if (C.zf) goto L_114cd78b;
L_114cd754:;
  /* 114cd754 push 0x114f9dc8 */
  push32((uint32_t)(0x114f9dc8u));
  /* 114cd759 push 0x114f97bc */
  push32((uint32_t)(0x114f97bcu));
  /* 114cd75e push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd760 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd762 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd764 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd766 call 0x114ca4c0 */
  push32(0x114cd76bu); f_114ca4c0();
  /* 114cd76b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd76e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd771 jne 0x114cd774 */
  if (!C.zf) goto L_114cd774;
  /* 114cd773 int3  */
  x86_unimpl("int3 @ 0x114cd773");
L_114cd774:;
  /* 114cd774 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114cd776 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cd778 jne 0x114cd754 */
  if (!C.zf) goto L_114cd754;
  /* 114cd77a push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd77c call 0x114cd340 */
  push32(0x114cd781u); f_114cd340();
  /* 114cd781 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd784 mov eax, 1 */
  EAX = (0x1u);
  /* 114cd789 jmp 0x114cd78d */
  goto L_114cd78d;
L_114cd78b:;
  /* 114cd78b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114cd78d:;
  /* 114cd78d pop edi */
  EDI = (pop32());
  /* 114cd78e pop esi */
  ESI = (pop32());
  /* 114cd78f pop ebx */
  EBX = (pop32());
  /* 114cd790 mov esp, ebp */
  ESP = (EBP);
  /* 114cd792 pop ebp */
  EBP = (pop32());
  /* 114cd793 ret  */
  ESPCHK(0x114cd720u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d7a0 @ 0x114cd7a0 (197 bytes, 79 insns) */
void f_114cd7a0(void) {
  FTRACE(0x114cd7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cd7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 114cd7a1 mov ebp, esp */
  EBP = (ESP);
  /* 114cd7a3 push ecx */
  push32((uint32_t)(ECX));
  /* 114cd7a4 push ebx */
  push32((uint32_t)(EBX));
  /* 114cd7a5 push esi */
  push32((uint32_t)(ESI));
  /* 114cd7a6 push edi */
  push32((uint32_t)(EDI));
  /* 114cd7a7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd7ab jne 0x114cd7b2 */
  if (!C.zf) goto L_114cd7b2;
  /* 114cd7ad jmp 0x114cd85e */
  goto L_114cd85e;
L_114cd7b2:;
  /* 114cd7b2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114cd7b9 jmp 0x114cd7c4 */
  goto L_114cd7c4;
L_114cd7bb:;
  /* 114cd7bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd7be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd7c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114cd7c4:;
  /* 114cd7c4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd7c8 jge 0x114cd80e */
  if ((C.sf==C.of)) goto L_114cd80e;
L_114cd7ca:;
  /* 114cd7ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd7cd mov edx, dword ptr [ecx*4 + 0x114fcf58] */
  EDX = (r32((uint32_t)(ECX*4 + 0x114fcf58)));
  /* 114cd7d4 push edx */
  push32((uint32_t)(EDX));
  /* 114cd7d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd7d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cd7db mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 114cd7df push edx */
  push32((uint32_t)(EDX));
  /* 114cd7e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd7e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cd7e6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 114cd7ea push edx */
  push32((uint32_t)(EDX));
  /* 114cd7eb push 0x114f9e24 */
  push32((uint32_t)(0x114f9e24u));
  /* 114cd7f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd7f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd7f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd7f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd7f8 call 0x114ca4c0 */
  push32(0x114cd7fdu); f_114ca4c0();
  /* 114cd7fd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd800 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd803 jne 0x114cd806 */
  if (!C.zf) goto L_114cd806;
  /* 114cd805 int3  */
  x86_unimpl("int3 @ 0x114cd805");
L_114cd806:;
  /* 114cd806 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cd808 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cd80a jne 0x114cd7ca */
  if (!C.zf) goto L_114cd7ca;
  /* 114cd80c jmp 0x114cd7bb */
  goto L_114cd7bb;
L_114cd80e:;
  /* 114cd80e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cd811 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 114cd814 push edx */
  push32((uint32_t)(EDX));
  /* 114cd815 push 0x114f9e00 */
  push32((uint32_t)(0x114f9e00u));
  /* 114cd81a push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd81c push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd81e push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd820 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd822 call 0x114ca4c0 */
  push32(0x114cd827u); f_114ca4c0();
  /* 114cd827 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd82a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd82d jne 0x114cd830 */
  if (!C.zf) goto L_114cd830;
  /* 114cd82f int3  */
  x86_unimpl("int3 @ 0x114cd82f");
L_114cd830:;
  /* 114cd830 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cd832 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cd834 jne 0x114cd80e */
  if (!C.zf) goto L_114cd80e;
L_114cd836:;
  /* 114cd836 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cd839 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 114cd83c push edx */
  push32((uint32_t)(EDX));
  /* 114cd83d push 0x114f9de0 */
  push32((uint32_t)(0x114f9de0u));
  /* 114cd842 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd844 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd846 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd848 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cd84a call 0x114ca4c0 */
  push32(0x114cd84fu); f_114ca4c0();
  /* 114cd84f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd852 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd855 jne 0x114cd858 */
  if (!C.zf) goto L_114cd858;
  /* 114cd857 int3  */
  x86_unimpl("int3 @ 0x114cd857");
L_114cd858:;
  /* 114cd858 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cd85a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cd85c jne 0x114cd836 */
  if (!C.zf) goto L_114cd836;
L_114cd85e:;
  /* 114cd85e pop edi */
  EDI = (pop32());
  /* 114cd85f pop esi */
  ESI = (pop32());
  /* 114cd860 pop ebx */
  EBX = (pop32());
  /* 114cd861 mov esp, ebp */
  ESP = (EBP);
  /* 114cd863 pop ebp */
  EBP = (pop32());
  /* 114cd864 ret  */
  ESPCHK(0x114cd7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d870 @ 0x114cd870 (239 bytes, 88 insns) */
void f_114cd870(void) {
  FTRACE(0x114cd870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cd870 push ebp */
  push32((uint32_t)(EBP));
  /* 114cd871 mov ebp, esp */
  EBP = (ESP);
  /* 114cd873 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cd876 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114cd879 cmp dword ptr [eax], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd87f jne 0x114cd88a */
  if (!C.zf) goto L_114cd88a;
  /* 114cd881 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 114cd888 jmp 0x114cd892 */
  goto L_114cd892;
L_114cd88a:;
  /* 114cd88a call 0x114ce880 */
  push32(0x114cd88fu); f_114ce880();
  /* 114cd88f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_114cd892:;
  /* 114cd892 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cd895 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114cd898 and edx, 0x66 */
  { uint32_t _r=(EDX)&(0x66u); EDX = (_r); fl_logic(_r,32); }
  /* 114cd89b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cd89d je 0x114cd8ce */
  if (C.zf) goto L_114cd8ce;
  /* 114cd89f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114cd8a2 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd8a6 je 0x114cd8c4 */
  if (C.zf) goto L_114cd8c4;
  /* 114cd8a8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd8ac jne 0x114cd8c4 */
  if (!C.zf) goto L_114cd8c4;
  /* 114cd8ae push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 114cd8b0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114cd8b3 push ecx */
  push32((uint32_t)(ECX));
  /* 114cd8b4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114cd8b7 push edx */
  push32((uint32_t)(EDX));
  /* 114cd8b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cd8bb push eax */
  push32((uint32_t)(EAX));
  /* 114cd8bc call 0x114cdde0 */
  push32(0x114cd8c1u); f_114cdde0();
  /* 114cd8c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114cd8c4:;
  /* 114cd8c4 mov eax, 1 */
  EAX = (0x1u);
  /* 114cd8c9 jmp 0x114cd95b */
  goto L_114cd95b;
L_114cd8ce:;
  /* 114cd8ce mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114cd8d1 cmp dword ptr [ecx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd8d5 je 0x114cd956 */
  if (C.zf) goto L_114cd956;
  /* 114cd8d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cd8da cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd8e0 jne 0x114cd92e */
  if (!C.zf) goto L_114cd92e;
  /* 114cd8e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cd8e5 cmp dword ptr [eax + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd8ec jbe 0x114cd92e */
  if ((C.cf||C.zf)) goto L_114cd92e;
  /* 114cd8ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cd8f1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 114cd8f4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 114cd8f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114cd8fa cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd8fe je 0x114cd92e */
  if (C.zf) goto L_114cd92e;
  /* 114cd900 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 114cd903 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 114cd909 push ecx */
  push32((uint32_t)(ECX));
  /* 114cd90a mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 114cd90d push edx */
  push32((uint32_t)(EDX));
  /* 114cd90e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114cd911 push eax */
  push32((uint32_t)(EAX));
  /* 114cd912 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114cd915 push ecx */
  push32((uint32_t)(ECX));
  /* 114cd916 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114cd919 push edx */
  push32((uint32_t)(EDX));
  /* 114cd91a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cd91d push eax */
  push32((uint32_t)(EAX));
  /* 114cd91e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cd921 push ecx */
  push32((uint32_t)(ECX));
  /* 114cd922 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cd925 push edx */
  push32((uint32_t)(EDX));
  /* 114cd926 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x114cd929u);
  /* 114cd929 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cd92c jmp 0x114cd95b */
  goto L_114cd95b;
L_114cd92e:;
  /* 114cd92e mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 114cd931 push eax */
  push32((uint32_t)(EAX));
  /* 114cd932 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114cd935 push ecx */
  push32((uint32_t)(ECX));
  /* 114cd936 mov dl, byte ptr [ebp + 0x24] */
  DL = (r8((uint32_t)(EBP + 0x24)));
  /* 114cd939 push edx */
  push32((uint32_t)(EDX));
  /* 114cd93a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114cd93d push eax */
  push32((uint32_t)(EAX));
  /* 114cd93e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114cd941 push ecx */
  push32((uint32_t)(ECX));
  /* 114cd942 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cd945 push edx */
  push32((uint32_t)(EDX));
  /* 114cd946 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cd949 push eax */
  push32((uint32_t)(EAX));
  /* 114cd94a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cd94d push ecx */
  push32((uint32_t)(ECX));
  /* 114cd94e call 0x114cd960 */
  push32(0x114cd953u); f_114cd960();
  /* 114cd953 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114cd956:;
  /* 114cd956 mov eax, 1 */
  EAX = (0x1u);
L_114cd95b:;
  /* 114cd95b mov esp, ebp */
  ESP = (EBP);
  /* 114cd95d pop ebp */
  EBP = (pop32());
  /* 114cd95e ret  */
  ESPCHK(0x114cd870u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d960 @ 0x114cd960 (672 bytes, 222 insns) */
void f_114cd960(void) {
  FTRACE(0x114cd960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cd960 push ebp */
  push32((uint32_t)(EBP));
  /* 114cd961 mov ebp, esp */
  EBP = (ESP);
  /* 114cd963 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cd966 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 114cd96a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cd96d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 114cd970 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114cd973 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd977 jl 0x114cd98d */
  if ((C.sf!=C.of)) goto L_114cd98d;
  /* 114cd979 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114cd97c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cd97f cmp eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd982 jge 0x114cd98d */
  if ((C.sf==C.of)) goto L_114cd98d;
  /* 114cd984 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 114cd98b jmp 0x114cd995 */
  goto L_114cd995;
L_114cd98d:;
  /* 114cd98d call 0x114ce880 */
  push32(0x114cd992u); f_114ce880();
  /* 114cd992 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
L_114cd995:;
  /* 114cd995 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cd998 cmp dword ptr [ecx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd99e jne 0x114cda55 */
  if (!C.zf) goto L_114cda55;
  /* 114cd9a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cd9a7 cmp dword ptr [edx + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd9ab jne 0x114cda55 */
  if (!C.zf) goto L_114cda55;
  /* 114cd9b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cd9b4 cmp dword ptr [eax + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd9bb jne 0x114cda55 */
  if (!C.zf) goto L_114cda55;
  /* 114cd9c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cd9c4 cmp dword ptr [ecx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd9c8 jne 0x114cda55 */
  if (!C.zf) goto L_114cda55;
  /* 114cd9ce call 0x114ce600 */
  push32(0x114cd9d3u); f_114ce600();
  /* 114cd9d3 cmp dword ptr [eax + 0x6c], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cd9d7 jne 0x114cd9de */
  if (!C.zf) goto L_114cd9de;
  /* 114cd9d9 jmp 0x114cdbfc */
  goto L_114cdbfc;
L_114cd9de:;
  /* 114cd9de call 0x114ce600 */
  push32(0x114cd9e3u); f_114ce600();
  /* 114cd9e3 mov edx, dword ptr [eax + 0x6c] */
  EDX = (r32((uint32_t)(EAX + 0x6c)));
  /* 114cd9e6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 114cd9e9 call 0x114ce600 */
  push32(0x114cd9eeu); f_114ce600();
  /* 114cd9ee mov eax, dword ptr [eax + 0x70] */
  EAX = (r32((uint32_t)(EAX + 0x70)));
  /* 114cd9f1 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 114cd9f4 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
  /* 114cd9f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 114cd9fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cd9fd push ecx */
  push32((uint32_t)(ECX));
  /* 114cd9fe call 0x114d5430 */
  push32(0x114cda03u); f_114d5430();
  /* 114cda03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cda06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cda08 je 0x114cda13 */
  if (C.zf) goto L_114cda13;
  /* 114cda0a mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 114cda11 jmp 0x114cda1b */
  goto L_114cda1b;
L_114cda13:;
  /* 114cda13 call 0x114ce880 */
  push32(0x114cda18u); f_114ce880();
  /* 114cda18 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_114cda1b:;
  /* 114cda1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cda1e cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cda24 jne 0x114cda4e */
  if (!C.zf) goto L_114cda4e;
  /* 114cda26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cda29 cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cda2d jne 0x114cda4e */
  if (!C.zf) goto L_114cda4e;
  /* 114cda2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cda32 cmp dword ptr [ecx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cda39 jne 0x114cda4e */
  if (!C.zf) goto L_114cda4e;
  /* 114cda3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cda3e cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cda42 jne 0x114cda4e */
  if (!C.zf) goto L_114cda4e;
  /* 114cda44 call 0x114ce880 */
  push32(0x114cda49u); f_114ce880();
  /* 114cda49 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 114cda4c jmp 0x114cda55 */
  goto L_114cda55;
L_114cda4e:;
  /* 114cda4e mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_114cda55:;
  /* 114cda55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cda58 cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cda5e jne 0x114cdbbc */
  if (!C.zf) goto L_114cdbbc;
  /* 114cda64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cda67 cmp dword ptr [ecx + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cda6b jne 0x114cdbbc */
  if (!C.zf) goto L_114cdbbc;
  /* 114cda71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cda74 cmp dword ptr [edx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cda7b jne 0x114cdbbc */
  if (!C.zf) goto L_114cdbbc;
  /* 114cda81 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 114cda84 push eax */
  push32((uint32_t)(EAX));
  /* 114cda85 lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 114cda88 push ecx */
  push32((uint32_t)(ECX));
  /* 114cda89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cda8c push edx */
  push32((uint32_t)(EDX));
  /* 114cda8d mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 114cda90 push eax */
  push32((uint32_t)(EAX));
  /* 114cda91 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114cda94 push ecx */
  push32((uint32_t)(ECX));
  /* 114cda95 call 0x114c9ba0 */
  push32(0x114cda9au); f_114c9ba0();
  /* 114cda9a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cda9d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 114cdaa0 jmp 0x114cdab4 */
  goto L_114cdab4;
L_114cdaa2:;
  /* 114cdaa2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114cdaa5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cdaa8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 114cdaab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114cdaae add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cdab1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_114cdab4:;
  /* 114cdab4 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114cdab7 cmp ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cdaba jae 0x114cdb9f */
  if (!C.cf) goto L_114cdb9f;
  /* 114cdac0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114cdac3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114cdac5 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cdac8 jg 0x114cdad5 */
  if ((!C.zf&&C.sf==C.of)) goto L_114cdad5;
  /* 114cdaca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114cdacd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cdad0 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cdad3 jle 0x114cdad7 */
  if ((C.zf||C.sf!=C.of)) goto L_114cdad7;
L_114cdad5:;
  /* 114cdad5 jmp 0x114cdaa2 */
  goto L_114cdaa2;
L_114cdad7:;
  /* 114cdad7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114cdada mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 114cdadd mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 114cdae0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114cdae3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 114cdae6 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 114cdae9 jmp 0x114cdafd */
  goto L_114cdafd;
L_114cdaeb:;
  /* 114cdaeb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114cdaee sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cdaf1 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 114cdaf4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114cdaf7 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cdafa mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_114cdafd:;
  /* 114cdafd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cdb01 jle 0x114cdb9a */
  if ((C.zf||C.sf!=C.of)) goto L_114cdb9a;
  /* 114cdb07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cdb0a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 114cdb0d mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114cdb10 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cdb13 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 114cdb16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cdb19 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 114cdb1c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114cdb1f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114cdb21 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 114cdb24 jmp 0x114cdb38 */
  goto L_114cdb38;
L_114cdb26:;
  /* 114cdb26 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114cdb29 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cdb2c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 114cdb2f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 114cdb32 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cdb35 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_114cdb38:;
  /* 114cdb38 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cdb3c jle 0x114cdb95 */
  if ((C.zf||C.sf!=C.of)) goto L_114cdb95;
  /* 114cdb3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cdb41 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 114cdb44 push ecx */
  push32((uint32_t)(ECX));
  /* 114cdb45 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 114cdb48 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114cdb4a push eax */
  push32((uint32_t)(EAX));
  /* 114cdb4b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114cdb4e push ecx */
  push32((uint32_t)(ECX));
  /* 114cdb4f call 0x114cdd20 */
  push32(0x114cdb54u); f_114cdd20();
  /* 114cdb54 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cdb57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cdb59 jne 0x114cdb5d */
  if (!C.zf) goto L_114cdb5d;
  /* 114cdb5b jmp 0x114cdb26 */
  goto L_114cdb26;
L_114cdb5d:;
  /* 114cdb5d mov dl, byte ptr [ebp - 8] */
  DL = (r8((uint32_t)(EBP + -0x8)));
  /* 114cdb60 push edx */
  push32((uint32_t)(EDX));
  /* 114cdb61 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 114cdb64 push eax */
  push32((uint32_t)(EAX));
  /* 114cdb65 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 114cdb68 push ecx */
  push32((uint32_t)(ECX));
  /* 114cdb69 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114cdb6c push edx */
  push32((uint32_t)(EDX));
  /* 114cdb6d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114cdb70 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114cdb72 push ecx */
  push32((uint32_t)(ECX));
  /* 114cdb73 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114cdb76 push edx */
  push32((uint32_t)(EDX));
  /* 114cdb77 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114cdb7a push eax */
  push32((uint32_t)(EAX));
  /* 114cdb7b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114cdb7e push ecx */
  push32((uint32_t)(ECX));
  /* 114cdb7f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cdb82 push edx */
  push32((uint32_t)(EDX));
  /* 114cdb83 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cdb86 push eax */
  push32((uint32_t)(EAX));
  /* 114cdb87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cdb8a push ecx */
  push32((uint32_t)(ECX));
  /* 114cdb8b call 0x114cdf10 */
  push32(0x114cdb90u); f_114cdf10();
  /* 114cdb90 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cdb93 jmp 0x114cdbfa */
  goto L_114cdbfa;
L_114cdb95:;
  /* 114cdb95 jmp 0x114cdaeb */
  goto L_114cdaeb;
L_114cdb9a:;
  /* 114cdb9a jmp 0x114cdaa2 */
  goto L_114cdaa2;
L_114cdb9f:;
  /* 114cdb9f mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114cdba2 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 114cdba8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cdbaa je 0x114cdbba */
  if (C.zf) goto L_114cdbba;
  /* 114cdbac push 1 */
  push32((uint32_t)(0x1u));
  /* 114cdbae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cdbb1 push eax */
  push32((uint32_t)(EAX));
  /* 114cdbb2 call 0x114ce3f0 */
  push32(0x114cdbb7u); f_114ce3f0();
  /* 114cdbb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114cdbba:;
  /* 114cdbba jmp 0x114cdbf8 */
  goto L_114cdbf8;
L_114cdbbc:;
  /* 114cdbbc mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114cdbbf and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 114cdbc5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114cdbc7 jne 0x114cdbf3 */
  if (!C.zf) goto L_114cdbf3;
  /* 114cdbc9 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 114cdbcc push edx */
  push32((uint32_t)(EDX));
  /* 114cdbcd mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 114cdbd0 push eax */
  push32((uint32_t)(EAX));
  /* 114cdbd1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cdbd4 push ecx */
  push32((uint32_t)(ECX));
  /* 114cdbd5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114cdbd8 push edx */
  push32((uint32_t)(EDX));
  /* 114cdbd9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114cdbdc push eax */
  push32((uint32_t)(EAX));
  /* 114cdbdd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cdbe0 push ecx */
  push32((uint32_t)(ECX));
  /* 114cdbe1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cdbe4 push edx */
  push32((uint32_t)(EDX));
  /* 114cdbe5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cdbe8 push eax */
  push32((uint32_t)(EAX));
  /* 114cdbe9 call 0x114cdc00 */
  push32(0x114cdbeeu); f_114cdc00();
  /* 114cdbee add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cdbf1 jmp 0x114cdbf8 */
  goto L_114cdbf8;
L_114cdbf3:;
  /* 114cdbf3 call 0x114ce7d0 */
  push32(0x114cdbf8u); f_114ce7d0();
L_114cdbf8:;
  /* 114cdbf8 jmp 0x114cdbfc */
  goto L_114cdbfc;
L_114cdbfa:;
  /* 114cdbfa jmp 0x114cdb9a */
  goto L_114cdb9a;
L_114cdbfc:;
  /* 114cdbfc mov esp, ebp */
  ESP = (EBP);
  /* 114cdbfe pop ebp */
  EBP = (pop32());
  /* 114cdbff ret  */
  ESPCHK(0x114cd960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc00 @ 0x114cdc00 (277 bytes, 107 insns) */
void f_114cdc00(void) {
  FTRACE(0x114cdc00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cdc00 push ebp */
  push32((uint32_t)(EBP));
  /* 114cdc01 mov ebp, esp */
  EBP = (ESP);
  /* 114cdc03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cdc06 call 0x114ce600 */
  push32(0x114cdc0bu); f_114ce600();
  /* 114cdc0b cmp dword ptr [eax + 0x68], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cdc0f je 0x114cdc3e */
  if (C.zf) goto L_114cdc3e;
  /* 114cdc11 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 114cdc14 push eax */
  push32((uint32_t)(EAX));
  /* 114cdc15 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 114cdc18 push ecx */
  push32((uint32_t)(ECX));
  /* 114cdc19 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114cdc1c push edx */
  push32((uint32_t)(EDX));
  /* 114cdc1d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114cdc20 push eax */
  push32((uint32_t)(EAX));
  /* 114cdc21 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cdc24 push ecx */
  push32((uint32_t)(ECX));
  /* 114cdc25 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cdc28 push edx */
  push32((uint32_t)(EDX));
  /* 114cdc29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cdc2c push eax */
  push32((uint32_t)(EAX));
  /* 114cdc2d call 0x114c9a40 */
  push32(0x114cdc32u); f_114c9a40();
  /* 114cdc32 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cdc35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cdc37 je 0x114cdc3e */
  if (C.zf) goto L_114cdc3e;
  /* 114cdc39 jmp 0x114cdd11 */
  goto L_114cdd11;
L_114cdc3e:;
  /* 114cdc3e lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 114cdc41 push ecx */
  push32((uint32_t)(ECX));
  /* 114cdc42 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 114cdc45 push edx */
  push32((uint32_t)(EDX));
  /* 114cdc46 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114cdc49 push eax */
  push32((uint32_t)(EAX));
  /* 114cdc4a mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 114cdc4d push ecx */
  push32((uint32_t)(ECX));
  /* 114cdc4e mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114cdc51 push edx */
  push32((uint32_t)(EDX));
  /* 114cdc52 call 0x114c9ba0 */
  push32(0x114cdc57u); f_114c9ba0();
  /* 114cdc57 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cdc5a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114cdc5d jmp 0x114cdc71 */
  goto L_114cdc71;
L_114cdc5f:;
  /* 114cdc5f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114cdc62 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cdc65 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114cdc68 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cdc6b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cdc6e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_114cdc71:;
  /* 114cdc71 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114cdc74 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cdc77 jae 0x114cdd11 */
  if (!C.cf) goto L_114cdd11;
  /* 114cdc7d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cdc80 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114cdc83 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cdc85 jl 0x114cdcc9 */
  if ((C.sf!=C.of)) goto L_114cdcc9;
  /* 114cdc87 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cdc8a mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114cdc8d cmp eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cdc90 jg 0x114cdcc9 */
  if ((!C.zf&&C.sf==C.of)) goto L_114cdcc9;
  /* 114cdc92 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cdc95 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114cdc98 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cdc9b shl edx, 4 */
  EDX = (sh_shl((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 114cdc9e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cdca1 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 114cdca4 cmp dword ptr [ecx + edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + EDX*1 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cdca9 je 0x114cdccb */
  if (C.zf) goto L_114cdccb;
  /* 114cdcab mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cdcae mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 114cdcb1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cdcb4 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 114cdcb7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cdcba mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 114cdcbd mov eax, dword ptr [edx + eax + 4] */
  EAX = (r32((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 114cdcc1 movsx ecx, byte ptr [eax + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x8))));
  /* 114cdcc5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114cdcc7 je 0x114cdccb */
  if (C.zf) goto L_114cdccb;
L_114cdcc9:;
  /* 114cdcc9 jmp 0x114cdc5f */
  goto L_114cdc5f;
L_114cdccb:;
  /* 114cdccb push 1 */
  push32((uint32_t)(0x1u));
  /* 114cdccd mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 114cdcd0 push edx */
  push32((uint32_t)(EDX));
  /* 114cdcd1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 114cdcd4 push eax */
  push32((uint32_t)(EAX));
  /* 114cdcd5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cdcd8 push ecx */
  push32((uint32_t)(ECX));
  /* 114cdcd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cdcdb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cdcde mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 114cdce1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cdce4 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 114cdce7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cdcea mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 114cdced add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cdcef push edx */
  push32((uint32_t)(EDX));
  /* 114cdcf0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114cdcf3 push eax */
  push32((uint32_t)(EAX));
  /* 114cdcf4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114cdcf7 push ecx */
  push32((uint32_t)(ECX));
  /* 114cdcf8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cdcfb push edx */
  push32((uint32_t)(EDX));
  /* 114cdcfc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cdcff push eax */
  push32((uint32_t)(EAX));
  /* 114cdd00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cdd03 push ecx */
  push32((uint32_t)(ECX));
  /* 114cdd04 call 0x114cdf10 */
  push32(0x114cdd09u); f_114cdf10();
  /* 114cdd09 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cdd0c jmp 0x114cdc5f */
  goto L_114cdc5f;
L_114cdd11:;
  /* 114cdd11 mov esp, ebp */
  ESP = (EBP);
  /* 114cdd13 pop ebp */
  EBP = (pop32());
  /* 114cdd14 ret  */
  ESPCHK(0x114cdc00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd20 @ 0x114cdd20 (182 bytes, 69 insns) */
void f_114cdd20(void) {
  FTRACE(0x114cdd20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cdd20 push ebp */
  push32((uint32_t)(EBP));
  /* 114cdd21 mov ebp, esp */
  EBP = (ESP);
  /* 114cdd23 push ecx */
  push32((uint32_t)(ECX));
  /* 114cdd24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cdd27 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cdd2b je 0x114cdd3b */
  if (C.zf) goto L_114cdd3b;
  /* 114cdd2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cdd30 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114cdd33 movsx eax, byte ptr [edx + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x8))));
  /* 114cdd37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cdd39 jne 0x114cdd45 */
  if (!C.zf) goto L_114cdd45;
L_114cdd3b:;
  /* 114cdd3b mov eax, 1 */
  EAX = (0x1u);
  /* 114cdd40 jmp 0x114cddd2 */
  goto L_114cddd2;
L_114cdd45:;
  /* 114cdd45 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cdd48 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cdd4b mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 114cdd4e cmp eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cdd51 je 0x114cdd77 */
  if (C.zf) goto L_114cdd77;
  /* 114cdd53 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cdd56 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114cdd59 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cdd5c push edx */
  push32((uint32_t)(EDX));
  /* 114cdd5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cdd60 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114cdd63 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cdd66 push ecx */
  push32((uint32_t)(ECX));
  /* 114cdd67 call 0x114d54c0 */
  push32(0x114cdd6cu); f_114d54c0();
  /* 114cdd6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cdd6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cdd71 je 0x114cdd77 */
  if (C.zf) goto L_114cdd77;
  /* 114cdd73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cdd75 jmp 0x114cddd2 */
  goto L_114cddd2;
L_114cdd77:;
  /* 114cdd77 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cdd7a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114cdd7c and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 114cdd7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cdd81 je 0x114cdd8f */
  if (C.zf) goto L_114cdd8f;
  /* 114cdd83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cdd86 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114cdd88 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 114cdd8b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cdd8d je 0x114cddc8 */
  if (C.zf) goto L_114cddc8;
L_114cdd8f:;
  /* 114cdd8f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cdd92 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114cdd94 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 114cdd97 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114cdd99 je 0x114cdda7 */
  if (C.zf) goto L_114cdda7;
  /* 114cdd9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cdd9e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114cdda0 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 114cdda3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cdda5 je 0x114cddc8 */
  if (C.zf) goto L_114cddc8;
L_114cdda7:;
  /* 114cdda7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cddaa mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114cddac and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 114cddaf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cddb1 je 0x114cddbf */
  if (C.zf) goto L_114cddbf;
  /* 114cddb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cddb6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114cddb8 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 114cddbb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114cddbd je 0x114cddc8 */
  if (C.zf) goto L_114cddc8;
L_114cddbf:;
  /* 114cddbf mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 114cddc6 jmp 0x114cddcf */
  goto L_114cddcf;
L_114cddc8:;
  /* 114cddc8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_114cddcf:;
  /* 114cddcf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_114cddd2:;
  /* 114cddd2 mov esp, ebp */
  ESP = (EBP);
  /* 114cddd4 pop ebp */
  EBP = (pop32());
  /* 114cddd5 ret  */
  ESPCHK(0x114cdd20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dde0 @ 0x114cdde0 (224 bytes, 77 insns) */
void f_114cdde0(void) {
  FTRACE(0x114cdde0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cdde0 push ebp */
  push32((uint32_t)(EBP));
  /* 114cdde1 mov ebp, esp */
  EBP = (ESP);
  /* 114cdde3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 114cdde5 push 0x114f9e48 */
  push32((uint32_t)(0x114f9e48u));
  /* 114cddea push 0x114d554c */
  push32((uint32_t)(0x114d554cu));
  /* 114cddef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 114cddf5 push eax */
  push32((uint32_t)(EAX));
  /* 114cddf6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 114cddfd add esp, -0x14 */
  { uint32_t _a=(ESP),_b=(0xffffffecu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cde00 push ebx */
  push32((uint32_t)(EBX));
  /* 114cde01 push esi */
  push32((uint32_t)(ESI));
  /* 114cde02 push edi */
  push32((uint32_t)(EDI));
  /* 114cde03 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 114cde06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cde09 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 114cde0c mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
L_114cde0f:;
  /* 114cde0f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114cde12 cmp edx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cde15 je 0x114cdea4 */
  if (C.zf) goto L_114cdea4;
  /* 114cde1b cmp dword ptr [ebp - 0x1c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cde1f jle 0x114cde35 */
  if ((C.zf||C.sf!=C.of)) goto L_114cde35;
  /* 114cde21 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cde24 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114cde27 cmp ecx, dword ptr [eax + 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cde2a jge 0x114cde35 */
  if ((C.sf==C.of)) goto L_114cde35;
  /* 114cde2c mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 114cde33 jmp 0x114cde3d */
  goto L_114cde3d;
L_114cde35:;
  /* 114cde35 call 0x114ce880 */
  push32(0x114cde3au); f_114ce880();
  /* 114cde3a mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_114cde3d:;
  /* 114cde3d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114cde44 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cde47 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 114cde4a mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114cde4d cmp dword ptr [eax + ecx*8 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + ECX*8 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cde52 je 0x114cde70 */
  if (C.zf) goto L_114cde70;
  /* 114cde54 push 0x103 */
  push32((uint32_t)(0x103u));
  /* 114cde59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cde5c push edx */
  push32((uint32_t)(EDX));
  /* 114cde5d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cde60 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 114cde63 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114cde66 mov eax, dword ptr [ecx + edx*8 + 4] */
  EAX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 114cde6a push eax */
  push32((uint32_t)(EAX));
  /* 114cde6b call 0x114ce4d0 */
  push32(0x114cde70u); f_114ce4d0();
L_114cde70:;
  /* 114cde70 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 114cde77 jmp 0x114cde90 */
  goto L_114cde90;
  /* 114cde79 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114cde7c push ecx */
  push32((uint32_t)(ECX));
  /* 114cde7d call 0x114cdee0 */
  push32(0x114cde82u); f_114cdee0();
  /* 114cde82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cde85 ret  */
  ESPCHK(0x114cdde0u, _esp0);
  ESP += 4; return;
  /* 114cde86 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 114cde89 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_114cde90:;
  /* 114cde90 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cde93 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 114cde96 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114cde99 mov edx, dword ptr [eax + ecx*8] */
  EDX = (r32((uint32_t)(EAX + ECX*8)));
  /* 114cde9c mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 114cde9f jmp 0x114cde0f */
  goto L_114cde0f;
L_114cdea4:;
  /* 114cdea4 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114cdea7 cmp eax, dword ptr [ebp + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cdeaa jne 0x114cdeb5 */
  if (!C.zf) goto L_114cdeb5;
  /* 114cdeac mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 114cdeb3 jmp 0x114cdebd */
  goto L_114cdebd;
L_114cdeb5:;
  /* 114cdeb5 call 0x114ce880 */
  push32(0x114cdebau); f_114ce880();
  /* 114cdeba mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_114cdebd:;
  /* 114cdebd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cdec0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114cdec3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 114cdec6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114cdec9 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 114cded0 pop edi */
  EDI = (pop32());
  /* 114cded1 pop esi */
  ESI = (pop32());
  /* 114cded2 pop ebx */
  EBX = (pop32());
  /* 114cded3 mov esp, ebp */
  ESP = (EBP);
  /* 114cded5 pop ebp */
  EBP = (pop32());
  /* 114cded6 ret  */
  ESPCHK(0x114cdde0u, _esp0);
  ESP += 4; return;
}

/* ArrayUnwindFilter @ 0x114cdee0 (44 bytes, 17 insns) */
void f_114cdee0(void) {
  FTRACE(0x114cdee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cdee0 push ebp */
  push32((uint32_t)(EBP));
  /* 114cdee1 mov ebp, esp */
  EBP = (ESP);
  /* 114cdee3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cdee6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cdee9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114cdeeb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114cdeee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cdef1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114cdef3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114cdef6 cmp dword ptr [ebp - 8], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cdefd je 0x114cdf01 */
  if (C.zf) goto L_114cdf01;
  /* 114cdeff jmp 0x114cdf06 */
  goto L_114cdf06;
L_114cdf01:;
  /* 114cdf01 call 0x114ce7d0 */
  push32(0x114cdf06u); f_114ce7d0();
L_114cdf06:;
  /* 114cdf06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cdf08 mov esp, ebp */
  ESP = (EBP);
  /* 114cdf0a pop ebp */
  EBP = (pop32());
  /* 114cdf0b ret  */
  ESPCHK(0x114cdee0u, _esp0);
  ESP += 4; return;
}

/* CatchIt @ 0x114cdf10 (183 bytes, 73 insns) */
void f_114cdf10(void) {
  FTRACE(0x114cdf10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cdf10 push ebp */
  push32((uint32_t)(EBP));
  /* 114cdf11 mov ebp, esp */
  EBP = (ESP);
  /* 114cdf13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cdf16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cdf19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114cdf1c cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cdf20 je 0x114cdf3a */
  if (C.zf) goto L_114cdf3a;
  /* 114cdf22 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 114cdf25 push ecx */
  push32((uint32_t)(ECX));
  /* 114cdf26 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114cdf29 push edx */
  push32((uint32_t)(EDX));
  /* 114cdf2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cdf2d push eax */
  push32((uint32_t)(EAX));
  /* 114cdf2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cdf31 push ecx */
  push32((uint32_t)(ECX));
  /* 114cdf32 call 0x114ce170 */
  push32(0x114cdf37u); f_114ce170();
  /* 114cdf37 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114cdf3a:;
  /* 114cdf3a cmp dword ptr [ebp + 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cdf3e jne 0x114cdf4f */
  if (!C.zf) goto L_114cdf4f;
  /* 114cdf40 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cdf43 push edx */
  push32((uint32_t)(EDX));
  /* 114cdf44 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cdf47 push eax */
  push32((uint32_t)(EAX));
  /* 114cdf48 call 0x114c98c0 */
  push32(0x114cdf4du); f_114c98c0();
  /* 114cdf4d jmp 0x114cdf5c */
  goto L_114cdf5c;
L_114cdf4f:;
  /* 114cdf4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cdf52 push ecx */
  push32((uint32_t)(ECX));
  /* 114cdf53 mov edx, dword ptr [ebp + 0x2c] */
  EDX = (r32((uint32_t)(EBP + 0x2c)));
  /* 114cdf56 push edx */
  push32((uint32_t)(EDX));
  /* 114cdf57 call 0x114c98c0 */
  push32(0x114cdf5cu); f_114c98c0();
L_114cdf5c:;
  /* 114cdf5c mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 114cdf5f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114cdf61 push ecx */
  push32((uint32_t)(ECX));
  /* 114cdf62 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114cdf65 push edx */
  push32((uint32_t)(EDX));
  /* 114cdf66 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114cdf69 push eax */
  push32((uint32_t)(EAX));
  /* 114cdf6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cdf6d push ecx */
  push32((uint32_t)(ECX));
  /* 114cdf6e call 0x114cdde0 */
  push32(0x114cdf73u); f_114cdde0();
  /* 114cdf73 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cdf76 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 114cdf79 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 114cdf7c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cdf7f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cdf82 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 114cdf85 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 114cdf8a mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 114cdf8d push edx */
  push32((uint32_t)(EDX));
  /* 114cdf8e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114cdf91 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 114cdf94 push ecx */
  push32((uint32_t)(ECX));
  /* 114cdf95 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114cdf98 push edx */
  push32((uint32_t)(EDX));
  /* 114cdf99 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cdf9c push eax */
  push32((uint32_t)(EAX));
  /* 114cdf9d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cdfa0 push ecx */
  push32((uint32_t)(ECX));
  /* 114cdfa1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cdfa4 push edx */
  push32((uint32_t)(EDX));
  /* 114cdfa5 call 0x114cdfd0 */
  push32(0x114cdfaau); f_114cdfd0();
  /* 114cdfaa add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cdfad mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114cdfb0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cdfb4 je 0x114cdfc3 */
  if (C.zf) goto L_114cdfc3;
  /* 114cdfb6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cdfb9 push eax */
  push32((uint32_t)(EAX));
  /* 114cdfba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cdfbd push ecx */
  push32((uint32_t)(ECX));
  /* 114cdfbe call 0x114c9850 */
  push32(0x114cdfc3u); f_114c9850();
L_114cdfc3:;
  /* 114cdfc3 mov esp, ebp */
  ESP = (EBP);
  /* 114cdfc5 pop ebp */
  EBP = (pop32());
  /* 114cdfc6 ret  */
  ESPCHK(0x114cdf10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dfd0 @ 0x114cdfd0 (172 bytes, 66 insns) */
void f_114cdfd0(void) {
  FTRACE(0x114cdfd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cdfd0 push ebp */
  push32((uint32_t)(EBP));
  /* 114cdfd1 mov ebp, esp */
  EBP = (ESP);
  /* 114cdfd3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 114cdfd5 push 0x114f9e58 */
  push32((uint32_t)(0x114f9e58u));
  /* 114cdfda push 0x114d554c */
  push32((uint32_t)(0x114d554cu));
  /* 114cdfdf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 114cdfe5 push eax */
  push32((uint32_t)(EAX));
  /* 114cdfe6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 114cdfed add esp, -0x20 */
  { uint32_t _a=(ESP),_b=(0xffffffe0u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cdff0 push ebx */
  push32((uint32_t)(EBX));
  /* 114cdff1 push esi */
  push32((uint32_t)(ESI));
  /* 114cdff2 push edi */
  push32((uint32_t)(EDI));
  /* 114cdff3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 114cdff6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114cdff9 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 114cdffc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 114ce003 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114ce006 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 114ce009 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 114ce00c call 0x114ce600 */
  push32(0x114ce011u); f_114ce600();
  /* 114ce011 mov eax, dword ptr [eax + 0x6c] */
  EAX = (r32((uint32_t)(EAX + 0x6c)));
  /* 114ce014 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 114ce017 call 0x114ce600 */
  push32(0x114ce01cu); f_114ce600();
  /* 114ce01c mov ecx, dword ptr [eax + 0x70] */
  ECX = (r32((uint32_t)(EAX + 0x70)));
  /* 114ce01f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 114ce022 call 0x114ce600 */
  push32(0x114ce027u); f_114ce600();
  /* 114ce027 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce02a mov dword ptr [eax + 0x6c], edx */
  w32((uint32_t)(EAX + 0x6c), (EDX));
  /* 114ce02d call 0x114ce600 */
  push32(0x114ce032u); f_114ce600();
  /* 114ce032 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114ce035 mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 114ce038 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114ce03f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 114ce046 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 114ce049 push edx */
  push32((uint32_t)(EDX));
  /* 114ce04a mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114ce04d push eax */
  push32((uint32_t)(EAX));
  /* 114ce04e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114ce051 push ecx */
  push32((uint32_t)(ECX));
  /* 114ce052 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114ce055 push edx */
  push32((uint32_t)(EDX));
  /* 114ce056 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114ce059 push eax */
  push32((uint32_t)(EAX));
  /* 114ce05a call 0x114c9990 */
  push32(0x114ce05fu); f_114c9990();
  /* 114ce05f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce062 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 114ce065 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114ce06c jmp 0x114ce09f */
  goto L_114ce09f;
  /* 114ce06e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114ce071 push ecx */
  push32((uint32_t)(ECX));
  /* 114ce072 call 0x114ce120 */
  push32(0x114ce077u); f_114ce120();
  /* 114ce077 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce07a ret  */
  ESPCHK(0x114cdfd0u, _esp0);
  ESP += 4; return;
  /* 114ce07b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 114ce07e mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 114ce085 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 114ce087 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
  /* 114ce08e lea edx, [ebp - 0x10] */
  EDX = ((uint32_t)(EBP + -0x10));
  /* 114ce091 push edx */
  push32((uint32_t)(EDX));
  /* 114ce092 call 0x114c9c72 */
  push32(0x114ce097u); f_114c9c72();
  /* 114ce097 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce09a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 114ce09d jmp 0x114ce10e */
  jmp_ind(0x114ce10eu); return;
L_114ce09f:;
  /* 114ce09f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 114ce0a6 call 0x114ce0ad */
  push32(0x114ce0abu); f_114ce0ad();
  /* 114ce0ab jmp 0x114ce10b */
  f_114ce10b(); return;
}

/* FUN_1000e0ad @ 0x114ce0ad (94 bytes, 29 insns) */
void f_114ce0ad(void) {
  FTRACE(0x114ce0adu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ce0ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114ce0b0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 114ce0b3 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 114ce0b6 call 0x114ce600 */
  push32(0x114ce0bbu); f_114ce600();
  /* 114ce0bb mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114ce0be mov dword ptr [eax + 0x6c], edx */
  w32((uint32_t)(EAX + 0x6c), (EDX));
  /* 114ce0c1 call 0x114ce600 */
  push32(0x114ce0c6u); f_114ce600();
  /* 114ce0c6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114ce0c9 mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 114ce0cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce0cf cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce0d5 jne 0x114ce10a */
  if (!C.zf) goto L_114ce10a;
  /* 114ce0d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce0da cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce0de jne 0x114ce10a */
  if (!C.zf) goto L_114ce10a;
  /* 114ce0e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce0e3 cmp dword ptr [ecx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce0ea jne 0x114ce10a */
  if (!C.zf) goto L_114ce10a;
  /* 114ce0ec cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce0f0 jne 0x114ce10a */
  if (!C.zf) goto L_114ce10a;
  /* 114ce0f2 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce0f6 je 0x114ce10a */
  if (C.zf) goto L_114ce10a;
  /* 114ce0f8 call 0x114c9cda */
  push32(0x114ce0fdu); f_114c9cda();
  /* 114ce0fd push eax */
  push32((uint32_t)(EAX));
  /* 114ce0fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce101 push edx */
  push32((uint32_t)(EDX));
  /* 114ce102 call 0x114ce3f0 */
  push32(0x114ce107u); f_114ce3f0();
  /* 114ce107 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114ce10a:;
  /* 114ce10a ret  */
  ESPCHK(0x114ce0adu, _esp0);
  ESP += 4; return;
}

/* FUN_1000e10b @ 0x114ce10b (20 bytes, 9 insns) */
void f_114ce10b(void) {
  FTRACE(0x114ce10bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ce10b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114ce10e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114ce111 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 114ce118 pop edi */
  EDI = (pop32());
  /* 114ce119 pop esi */
  ESI = (pop32());
  /* 114ce11a pop ebx */
  EBX = (pop32());
  /* 114ce11b mov esp, ebp */
  ESP = (EBP);
  /* 114ce11d pop ebp */
  EBP = (pop32());
  /* 114ce11e ret  */
  ESPCHK(0x114ce10bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000e120 @ 0x114ce120 (66 bytes, 24 insns) */
void f_114ce120(void) {
  FTRACE(0x114ce120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ce120 push ebp */
  push32((uint32_t)(EBP));
  /* 114ce121 mov ebp, esp */
  EBP = (ESP);
  /* 114ce123 push ecx */
  push32((uint32_t)(ECX));
  /* 114ce124 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce127 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114ce129 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114ce12c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114ce12f cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce135 jne 0x114ce15c */
  if (!C.zf) goto L_114ce15c;
  /* 114ce137 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114ce13a cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce13e jne 0x114ce15c */
  if (!C.zf) goto L_114ce15c;
  /* 114ce140 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114ce143 cmp dword ptr [ecx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce14a jne 0x114ce15c */
  if (!C.zf) goto L_114ce15c;
  /* 114ce14c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114ce14f cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce153 jne 0x114ce15c */
  if (!C.zf) goto L_114ce15c;
  /* 114ce155 mov eax, 1 */
  EAX = (0x1u);
  /* 114ce15a jmp 0x114ce15e */
  goto L_114ce15e;
L_114ce15c:;
  /* 114ce15c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114ce15e:;
  /* 114ce15e mov esp, ebp */
  ESP = (EBP);
  /* 114ce160 pop ebp */
  EBP = (pop32());
  /* 114ce161 ret  */
  ESPCHK(0x114ce120u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e170 @ 0x114ce170 (621 bytes, 229 insns) */
void f_114ce170(void) {
  FTRACE(0x114ce170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ce170 push ebp */
  push32((uint32_t)(EBP));
  /* 114ce171 mov ebp, esp */
  EBP = (ESP);
  /* 114ce173 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 114ce175 push 0x114f9e70 */
  push32((uint32_t)(0x114f9e70u));
  /* 114ce17a push 0x114d554c */
  push32((uint32_t)(0x114d554cu));
  /* 114ce17f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 114ce185 push eax */
  push32((uint32_t)(EAX));
  /* 114ce186 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 114ce18d add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce190 push ebx */
  push32((uint32_t)(EBX));
  /* 114ce191 push esi */
  push32((uint32_t)(ESI));
  /* 114ce192 push edi */
  push32((uint32_t)(EDI));
  /* 114ce193 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 114ce196 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114ce199 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce19d je 0x114ce1b6 */
  if (C.zf) goto L_114ce1b6;
  /* 114ce19f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114ce1a2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114ce1a5 movsx eax, byte ptr [edx + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x8))));
  /* 114ce1a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ce1ab je 0x114ce1b6 */
  if (C.zf) goto L_114ce1b6;
  /* 114ce1ad mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114ce1b0 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce1b4 jne 0x114ce1bb */
  if (!C.zf) goto L_114ce1bb;
L_114ce1b6:;
  /* 114ce1b6 jmp 0x114ce3da */
  goto L_114ce3da;
L_114ce1bb:;
  /* 114ce1bb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114ce1be mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 114ce1c1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114ce1c4 lea edx, [ecx + eax + 0xc] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0xc));
  /* 114ce1c8 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 114ce1cb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114ce1d2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114ce1d5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114ce1d7 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 114ce1da test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114ce1dc je 0x114ce236 */
  if (C.zf) goto L_114ce236;
  /* 114ce1de push 1 */
  push32((uint32_t)(0x1u));
  /* 114ce1e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce1e3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 114ce1e6 push eax */
  push32((uint32_t)(EAX));
  /* 114ce1e7 call 0x114d5430 */
  push32(0x114ce1ecu); f_114d5430();
  /* 114ce1ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce1ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ce1f1 je 0x114ce22c */
  if (C.zf) goto L_114ce22c;
  /* 114ce1f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 114ce1f5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114ce1f8 push ecx */
  push32((uint32_t)(ECX));
  /* 114ce1f9 call 0x114d5460 */
  push32(0x114ce1feu); f_114d5460();
  /* 114ce1fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce201 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ce203 je 0x114ce22c */
  if (C.zf) goto L_114ce22c;
  /* 114ce205 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114ce208 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce20b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 114ce20e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 114ce210 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114ce213 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce216 push edx */
  push32((uint32_t)(EDX));
  /* 114ce217 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114ce21a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114ce21c push ecx */
  push32((uint32_t)(ECX));
  /* 114ce21d call 0x114ce480 */
  push32(0x114ce222u); f_114ce480();
  /* 114ce222 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce225 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114ce228 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 114ce22a jmp 0x114ce231 */
  goto L_114ce231;
L_114ce22c:;
  /* 114ce22c call 0x114ce880 */
  push32(0x114ce231u); f_114ce880();
L_114ce231:;
  /* 114ce231 jmp 0x114ce3c3 */
  goto L_114ce3c3;
L_114ce236:;
  /* 114ce236 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114ce239 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114ce23b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 114ce23e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114ce240 je 0x114ce2ba */
  if (C.zf) goto L_114ce2ba;
  /* 114ce242 push 1 */
  push32((uint32_t)(0x1u));
  /* 114ce244 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce247 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 114ce24a push eax */
  push32((uint32_t)(EAX));
  /* 114ce24b call 0x114d5430 */
  push32(0x114ce250u); f_114d5430();
  /* 114ce250 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce253 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ce255 je 0x114ce2b0 */
  if (C.zf) goto L_114ce2b0;
  /* 114ce257 push 1 */
  push32((uint32_t)(0x1u));
  /* 114ce259 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114ce25c push ecx */
  push32((uint32_t)(ECX));
  /* 114ce25d call 0x114d5460 */
  push32(0x114ce262u); f_114d5460();
  /* 114ce262 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce265 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ce267 je 0x114ce2b0 */
  if (C.zf) goto L_114ce2b0;
  /* 114ce269 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114ce26c mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 114ce26f push eax */
  push32((uint32_t)(EAX));
  /* 114ce270 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce273 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 114ce276 push edx */
  push32((uint32_t)(EDX));
  /* 114ce277 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114ce27a push eax */
  push32((uint32_t)(EAX));
  /* 114ce27b call 0x114d2e90 */
  push32(0x114ce280u); f_114d2e90();
  /* 114ce280 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce283 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114ce286 cmp dword ptr [ecx + 0x14], 4 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce28a jne 0x114ce2ae */
  if (!C.zf) goto L_114ce2ae;
  /* 114ce28c mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114ce28f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce292 je 0x114ce2ae */
  if (C.zf) goto L_114ce2ae;
  /* 114ce294 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114ce297 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce29a push eax */
  push32((uint32_t)(EAX));
  /* 114ce29b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114ce29e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114ce2a0 push edx */
  push32((uint32_t)(EDX));
  /* 114ce2a1 call 0x114ce480 */
  push32(0x114ce2a6u); f_114ce480();
  /* 114ce2a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce2a9 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114ce2ac mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_114ce2ae:;
  /* 114ce2ae jmp 0x114ce2b5 */
  goto L_114ce2b5;
L_114ce2b0:;
  /* 114ce2b0 call 0x114ce880 */
  push32(0x114ce2b5u); f_114ce880();
L_114ce2b5:;
  /* 114ce2b5 jmp 0x114ce3c3 */
  goto L_114ce3c3;
L_114ce2ba:;
  /* 114ce2ba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114ce2bd cmp dword ptr [edx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce2c1 jne 0x114ce320 */
  if (!C.zf) goto L_114ce320;
  /* 114ce2c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 114ce2c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce2c8 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 114ce2cb push ecx */
  push32((uint32_t)(ECX));
  /* 114ce2cc call 0x114d5430 */
  push32(0x114ce2d1u); f_114d5430();
  /* 114ce2d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce2d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ce2d6 je 0x114ce316 */
  if (C.zf) goto L_114ce316;
  /* 114ce2d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 114ce2da mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114ce2dd push edx */
  push32((uint32_t)(EDX));
  /* 114ce2de call 0x114d5460 */
  push32(0x114ce2e3u); f_114d5460();
  /* 114ce2e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce2e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ce2e8 je 0x114ce316 */
  if (C.zf) goto L_114ce316;
  /* 114ce2ea mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114ce2ed mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 114ce2f0 push ecx */
  push32((uint32_t)(ECX));
  /* 114ce2f1 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114ce2f4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce2f7 push edx */
  push32((uint32_t)(EDX));
  /* 114ce2f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce2fb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 114ce2fe push ecx */
  push32((uint32_t)(ECX));
  /* 114ce2ff call 0x114ce480 */
  push32(0x114ce304u); f_114ce480();
  /* 114ce304 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce307 push eax */
  push32((uint32_t)(EAX));
  /* 114ce308 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114ce30b push edx */
  push32((uint32_t)(EDX));
  /* 114ce30c call 0x114d2e90 */
  push32(0x114ce311u); f_114d2e90();
  /* 114ce311 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce314 jmp 0x114ce31b */
  goto L_114ce31b;
L_114ce316:;
  /* 114ce316 call 0x114ce880 */
  push32(0x114ce31bu); f_114ce880();
L_114ce31b:;
  /* 114ce31b jmp 0x114ce3c3 */
  goto L_114ce3c3;
L_114ce320:;
  /* 114ce320 push 1 */
  push32((uint32_t)(0x1u));
  /* 114ce322 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce325 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 114ce328 push ecx */
  push32((uint32_t)(ECX));
  /* 114ce329 call 0x114d5430 */
  push32(0x114ce32eu); f_114d5430();
  /* 114ce32e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce331 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ce333 je 0x114ce3be */
  if (C.zf) goto L_114ce3be;
  /* 114ce339 push 1 */
  push32((uint32_t)(0x1u));
  /* 114ce33b mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114ce33e push edx */
  push32((uint32_t)(EDX));
  /* 114ce33f call 0x114d5460 */
  push32(0x114ce344u); f_114d5460();
  /* 114ce344 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce347 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ce349 je 0x114ce3be */
  if (C.zf) goto L_114ce3be;
  /* 114ce34b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114ce34e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 114ce351 push ecx */
  push32((uint32_t)(ECX));
  /* 114ce352 call 0x114d5490 */
  push32(0x114ce357u); f_114d5490();
  /* 114ce357 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce35a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ce35c je 0x114ce3be */
  if (C.zf) goto L_114ce3be;
  /* 114ce35e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114ce361 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114ce363 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 114ce366 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ce368 je 0x114ce395 */
  if (C.zf) goto L_114ce395;
  /* 114ce36a push 1 */
  push32((uint32_t)(0x1u));
  /* 114ce36c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114ce36f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce372 push ecx */
  push32((uint32_t)(ECX));
  /* 114ce373 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce376 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 114ce379 push eax */
  push32((uint32_t)(EAX));
  /* 114ce37a call 0x114ce480 */
  push32(0x114ce37fu); f_114ce480();
  /* 114ce37f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce382 push eax */
  push32((uint32_t)(EAX));
  /* 114ce383 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114ce386 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 114ce389 push edx */
  push32((uint32_t)(EDX));
  /* 114ce38a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114ce38d push eax */
  push32((uint32_t)(EAX));
  /* 114ce38e call 0x114c98b0 */
  push32(0x114ce393u); f_114c98b0();
  /* 114ce393 jmp 0x114ce3bc */
  goto L_114ce3bc;
L_114ce395:;
  /* 114ce395 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114ce398 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce39b push ecx */
  push32((uint32_t)(ECX));
  /* 114ce39c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce39f mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 114ce3a2 push eax */
  push32((uint32_t)(EAX));
  /* 114ce3a3 call 0x114ce480 */
  push32(0x114ce3a8u); f_114ce480();
  /* 114ce3a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce3ab push eax */
  push32((uint32_t)(EAX));
  /* 114ce3ac mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114ce3af mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 114ce3b2 push edx */
  push32((uint32_t)(EDX));
  /* 114ce3b3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114ce3b6 push eax */
  push32((uint32_t)(EAX));
  /* 114ce3b7 call 0x114c98a0 */
  push32(0x114ce3bcu); f_114c98a0();
L_114ce3bc:;
  /* 114ce3bc jmp 0x114ce3c3 */
  goto L_114ce3c3;
L_114ce3be:;
  /* 114ce3be call 0x114ce880 */
  push32(0x114ce3c3u); f_114ce880();
L_114ce3c3:;
  /* 114ce3c3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 114ce3ca jmp 0x114ce3da */
  goto L_114ce3da;
  /* 114ce3cc mov eax, 1 */
  EAX = (0x1u);
  /* 114ce3d1 ret  */
  ESPCHK(0x114ce170u, _esp0);
  ESP += 4; return;
  /* 114ce3d2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 114ce3d5 call 0x114ce7d0 */
  push32(0x114ce3dau); f_114ce7d0();
L_114ce3da:;
  /* 114ce3da mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114ce3dd mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 114ce3e4 pop edi */
  EDI = (pop32());
  /* 114ce3e5 pop esi */
  ESI = (pop32());
  /* 114ce3e6 pop ebx */
  EBX = (pop32());
  /* 114ce3e7 mov esp, ebp */
  ESP = (EBP);
  /* 114ce3e9 pop ebp */
  EBP = (pop32());
  /* 114ce3ea ret  */
  ESPCHK(0x114ce170u, _esp0);
  ESP += 4; return;
}

/* ___DestructExceptionObject @ 0x114ce3f0 (111 bytes, 46 insns) */
void f_114ce3f0(void) {
  FTRACE(0x114ce3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ce3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 114ce3f1 mov ebp, esp */
  EBP = (ESP);
  /* 114ce3f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 114ce3f5 push 0x114f9e80 */
  push32((uint32_t)(0x114f9e80u));
  /* 114ce3fa push 0x114d554c */
  push32((uint32_t)(0x114d554cu));
  /* 114ce3ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 114ce405 push eax */
  push32((uint32_t)(EAX));
  /* 114ce406 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 114ce40d sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114ce410 push ebx */
  push32((uint32_t)(EBX));
  /* 114ce411 push esi */
  push32((uint32_t)(ESI));
  /* 114ce412 push edi */
  push32((uint32_t)(EDI));
  /* 114ce413 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 114ce416 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce41a je 0x114ce465 */
  if (C.zf) goto L_114ce465;
  /* 114ce41c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce41f mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 114ce422 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce426 je 0x114ce465 */
  if (C.zf) goto L_114ce465;
  /* 114ce428 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114ce42f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce432 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 114ce435 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114ce438 push ecx */
  push32((uint32_t)(ECX));
  /* 114ce439 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce43c mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 114ce43f push eax */
  push32((uint32_t)(EAX));
  /* 114ce440 call 0x114c9890 */
  push32(0x114ce445u); f_114c9890();
  /* 114ce445 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 114ce44c jmp 0x114ce465 */
  goto L_114ce465;
  /* 114ce44e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114ce451 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114ce456 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 114ce458 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114ce45a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 114ce45c ret  */
  ESPCHK(0x114ce3f0u, _esp0);
  ESP += 4; return;
  /* 114ce45d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 114ce460 call 0x114ce7d0 */
  push32(0x114ce465u); f_114ce7d0();
L_114ce465:;
  /* 114ce465 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114ce468 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 114ce46f pop edi */
  EDI = (pop32());
  /* 114ce470 pop esi */
  ESI = (pop32());
  /* 114ce471 pop ebx */
  EBX = (pop32());
  /* 114ce472 mov esp, ebp */
  ESP = (EBP);
  /* 114ce474 pop ebp */
  EBP = (pop32());
  /* 114ce475 ret  */
  ESPCHK(0x114ce3f0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:___AdjustPointer @ 0x114ce480 (70 bytes, 27 insns) */
void f_114ce480(void) {
  FTRACE(0x114ce480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ce480 push ebp */
  push32((uint32_t)(EBP));
  /* 114ce481 mov ebp, esp */
  EBP = (ESP);
  /* 114ce483 push ecx */
  push32((uint32_t)(ECX));
  /* 114ce484 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114ce487 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce48a add ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce48c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114ce48f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114ce492 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce496 jl 0x114ce4bf */
  if ((C.sf!=C.of)) goto L_114ce4bf;
  /* 114ce498 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114ce49b mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114ce49e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce4a1 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 114ce4a4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114ce4a7 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 114ce4aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114ce4ad add ecx, dword ptr [eax + edx] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*1))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce4b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114ce4b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114ce4b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114ce4b9 add eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce4bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114ce4bf:;
  /* 114ce4bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114ce4c2 mov esp, ebp */
  ESP = (EBP);
  /* 114ce4c4 pop ebp */
  EBP = (pop32());
  /* 114ce4c5 ret  */
  ESPCHK(0x114ce480u, _esp0);
  ESP += 4; return;
}

/* __CallSettingFrame@12 @ 0x114ce4d0 (76 bytes, 34 insns) */
void f_114ce4d0(void) {
  FTRACE(0x114ce4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ce4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114ce4d1 mov ebp, esp */
  EBP = (ESP);
  /* 114ce4d3 sub esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114ce4d6 push ebx */
  push32((uint32_t)(EBX));
  /* 114ce4d7 push ecx */
  push32((uint32_t)(ECX));
  /* 114ce4d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114ce4db add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce4de mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114ce4e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce4e4 push ebp */
  push32((uint32_t)(EBP));
  /* 114ce4e5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 114ce4e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114ce4eb mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 114ce4ee call 0x114c9cfd */
  push32(0x114ce4f3u); f_114c9cfd();
  /* 114ce4f3 push esi */
  push32((uint32_t)(ESI));
  /* 114ce4f4 push edi */
  push32((uint32_t)(EDI));
  /* 114ce4f5 call eax */
  call_ind((uint32_t)(EAX), 0x114ce4f7u);
  /* 114ce4f7 pop edi */
  EDI = (pop32());
  /* 114ce4f8 pop esi */
  ESI = (pop32());
  /* 114ce4f9 mov ebx, ebp */
  EBX = (EBP);
  /* 114ce4fb pop ebp */
  EBP = (pop32());
  /* 114ce4fc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114ce4ff push ebp */
  push32((uint32_t)(EBP));
  /* 114ce500 mov ebp, ebx */
  EBP = (EBX);
  /* 114ce502 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce508 jne 0x114ce50f */
  if (!C.zf) goto L_114ce50f;
  /* 114ce50a mov ecx, 2 */
  ECX = (0x2u);
L_114ce50f:;
  /* 114ce50f push ecx */
  push32((uint32_t)(ECX));
  /* 114ce510 call 0x114c9cfd */
  push32(0x114ce515u); f_114c9cfd();
  /* 114ce515 pop ebp */
  EBP = (pop32());
  /* 114ce516 pop ecx */
  ECX = (pop32());
  /* 114ce517 pop ebx */
  EBX = (pop32());
  /* 114ce518 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114ce519 ret 0xc */
  ESPCHK(0x114ce4d0u, _esp0);
  ESP += 16; return;
}

/* FUN_1000e520 @ 0x114ce520 (130 bytes, 42 insns) */
void f_114ce520(void) {
  FTRACE(0x114ce520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ce520 push ebp */
  push32((uint32_t)(EBP));
  /* 114ce521 mov ebp, esp */
  EBP = (ESP);
  /* 114ce523 push ecx */
  push32((uint32_t)(ECX));
  /* 114ce524 call 0x114cb720 */
  push32(0x114ce529u); f_114cb720();
  /* 114ce529 call dword ptr [0x115013f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013f0))), 0x114ce52fu);
  /* 114ce52f mov dword ptr [0x114fcf70], eax */
  w32((uint32_t)(0x114fcf70), (EAX));
  /* 114ce534 cmp dword ptr [0x114fcf70], -1 */
  { uint32_t _a=(r32((uint32_t)(0x114fcf70))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce53b jne 0x114ce541 */
  if (!C.zf) goto L_114ce541;
  /* 114ce53d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114ce53f jmp 0x114ce59e */
  goto L_114ce59e;
L_114ce541:;
  /* 114ce541 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 114ce543 push 0x114f9e8c */
  push32((uint32_t)(0x114f9e8cu));
  /* 114ce548 push 2 */
  push32((uint32_t)(0x2u));
  /* 114ce54a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 114ce54c push 1 */
  push32((uint32_t)(0x1u));
  /* 114ce54e call 0x114cbd10 */
  push32(0x114ce553u); f_114cbd10();
  /* 114ce553 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce556 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114ce559 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce55d je 0x114ce574 */
  if (C.zf) goto L_114ce574;
  /* 114ce55f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114ce562 push eax */
  push32((uint32_t)(EAX));
  /* 114ce563 mov ecx, dword ptr [0x114fcf70] */
  ECX = (r32((uint32_t)(0x114fcf70)));
  /* 114ce569 push ecx */
  push32((uint32_t)(ECX));
  /* 114ce56a call dword ptr [0x115013e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013e8))), 0x114ce570u);
  /* 114ce570 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ce572 jne 0x114ce578 */
  if (!C.zf) goto L_114ce578;
L_114ce574:;
  /* 114ce574 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114ce576 jmp 0x114ce59e */
  goto L_114ce59e;
L_114ce578:;
  /* 114ce578 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114ce57b push edx */
  push32((uint32_t)(EDX));
  /* 114ce57c call 0x114ce5e0 */
  push32(0x114ce581u); f_114ce5e0();
  /* 114ce581 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce584 call dword ptr [0x115013ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013ec))), 0x114ce58au);
  /* 114ce58a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114ce58d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 114ce58f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114ce592 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 114ce599 mov eax, 1 */
  EAX = (0x1u);
L_114ce59e:;
  /* 114ce59e mov esp, ebp */
  ESP = (EBP);
  /* 114ce5a0 pop ebp */
  EBP = (pop32());
  /* 114ce5a1 ret  */
  ESPCHK(0x114ce520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5b0 @ 0x114ce5b0 (41 bytes, 11 insns) */
void f_114ce5b0(void) {
  FTRACE(0x114ce5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ce5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 114ce5b1 mov ebp, esp */
  EBP = (ESP);
  /* 114ce5b3 call 0x114cb760 */
  push32(0x114ce5b8u); f_114cb760();
  /* 114ce5b8 cmp dword ptr [0x114fcf70], -1 */
  { uint32_t _a=(r32((uint32_t)(0x114fcf70))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce5bf je 0x114ce5d7 */
  if (C.zf) goto L_114ce5d7;
  /* 114ce5c1 mov eax, dword ptr [0x114fcf70] */
  EAX = (r32((uint32_t)(0x114fcf70)));
  /* 114ce5c6 push eax */
  push32((uint32_t)(EAX));
  /* 114ce5c7 call dword ptr [0x115013e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013e0))), 0x114ce5cdu);
  /* 114ce5cd mov dword ptr [0x114fcf70], 0xffffffff */
  w32((uint32_t)(0x114fcf70), (0xffffffffu));
L_114ce5d7:;
  /* 114ce5d7 pop ebp */
  EBP = (pop32());
  /* 114ce5d8 ret  */
  ESPCHK(0x114ce5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5e0 @ 0x114ce5e0 (25 bytes, 8 insns) */
void f_114ce5e0(void) {
  FTRACE(0x114ce5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ce5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 114ce5e1 mov ebp, esp */
  EBP = (ESP);
  /* 114ce5e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce5e6 mov dword ptr [eax + 0x50], 0x114fd2a0 */
  w32((uint32_t)(EAX + 0x50), (0x114fd2a0u));
  /* 114ce5ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce5f0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 114ce5f7 pop ebp */
  EBP = (pop32());
  /* 114ce5f8 ret  */
  ESPCHK(0x114ce5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e600 @ 0x114ce600 (152 bytes, 48 insns) */
void f_114ce600(void) {
  FTRACE(0x114ce600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ce600 push ebp */
  push32((uint32_t)(EBP));
  /* 114ce601 mov ebp, esp */
  EBP = (ESP);
  /* 114ce603 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114ce606 call dword ptr [0x115013d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013d4))), 0x114ce60cu);
  /* 114ce60c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114ce60f mov eax, dword ptr [0x114fcf70] */
  EAX = (r32((uint32_t)(0x114fcf70)));
  /* 114ce614 push eax */
  push32((uint32_t)(EAX));
  /* 114ce615 call dword ptr [0x115013e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013e4))), 0x114ce61bu);
  /* 114ce61b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114ce61e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce622 jne 0x114ce687 */
  if (!C.zf) goto L_114ce687;
  /* 114ce624 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 114ce629 push 0x114f9e8c */
  push32((uint32_t)(0x114f9e8cu));
  /* 114ce62e push 2 */
  push32((uint32_t)(0x2u));
  /* 114ce630 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 114ce632 push 1 */
  push32((uint32_t)(0x1u));
  /* 114ce634 call 0x114cbd10 */
  push32(0x114ce639u); f_114cbd10();
  /* 114ce639 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce63c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114ce63f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce643 je 0x114ce67d */
  if (C.zf) goto L_114ce67d;
  /* 114ce645 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114ce648 push ecx */
  push32((uint32_t)(ECX));
  /* 114ce649 mov edx, dword ptr [0x114fcf70] */
  EDX = (r32((uint32_t)(0x114fcf70)));
  /* 114ce64f push edx */
  push32((uint32_t)(EDX));
  /* 114ce650 call dword ptr [0x115013e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013e8))), 0x114ce656u);
  /* 114ce656 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ce658 je 0x114ce67d */
  if (C.zf) goto L_114ce67d;
  /* 114ce65a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114ce65d push eax */
  push32((uint32_t)(EAX));
  /* 114ce65e call 0x114ce5e0 */
  push32(0x114ce663u); f_114ce5e0();
  /* 114ce663 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce666 call dword ptr [0x115013ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013ec))), 0x114ce66cu);
  /* 114ce66c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114ce66f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 114ce671 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114ce674 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 114ce67b jmp 0x114ce687 */
  goto L_114ce687;
L_114ce67d:;
  /* 114ce67d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 114ce67f call 0x114ca370 */
  push32(0x114ce684u); f_114ca370();
  /* 114ce684 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114ce687:;
  /* 114ce687 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114ce68a push eax */
  push32((uint32_t)(EAX));
  /* 114ce68b call dword ptr [0x115013dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013dc))), 0x114ce691u);
  /* 114ce691 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114ce694 mov esp, ebp */
  ESP = (EBP);
  /* 114ce696 pop ebp */
  EBP = (pop32());
  /* 114ce697 ret  */
  ESPCHK(0x114ce600u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e6a0 @ 0x114ce6a0 (263 bytes, 86 insns) */
void f_114ce6a0(void) {
  FTRACE(0x114ce6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ce6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 114ce6a1 mov ebp, esp */
  EBP = (ESP);
  /* 114ce6a3 cmp dword ptr [0x114fcf70], -1 */
  { uint32_t _a=(r32((uint32_t)(0x114fcf70))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce6aa je 0x114ce7a5 */
  if (C.zf) goto L_114ce7a5;
  /* 114ce6b0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce6b4 jne 0x114ce6c5 */
  if (!C.zf) goto L_114ce6c5;
  /* 114ce6b6 mov eax, dword ptr [0x114fcf70] */
  EAX = (r32((uint32_t)(0x114fcf70)));
  /* 114ce6bb push eax */
  push32((uint32_t)(EAX));
  /* 114ce6bc call dword ptr [0x115013e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013e4))), 0x114ce6c2u);
  /* 114ce6c2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_114ce6c5:;
  /* 114ce6c5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce6c9 je 0x114ce796 */
  if (C.zf) goto L_114ce796;
  /* 114ce6cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce6d2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce6d6 je 0x114ce6e9 */
  if (C.zf) goto L_114ce6e9;
  /* 114ce6d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 114ce6da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce6dd mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 114ce6e0 push eax */
  push32((uint32_t)(EAX));
  /* 114ce6e1 call 0x114cc390 */
  push32(0x114ce6e6u); f_114cc390();
  /* 114ce6e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114ce6e9:;
  /* 114ce6e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce6ec cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce6f0 je 0x114ce703 */
  if (C.zf) goto L_114ce703;
  /* 114ce6f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 114ce6f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce6f7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 114ce6fa push eax */
  push32((uint32_t)(EAX));
  /* 114ce6fb call 0x114cc390 */
  push32(0x114ce700u); f_114cc390();
  /* 114ce700 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114ce703:;
  /* 114ce703 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce706 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce70a je 0x114ce71d */
  if (C.zf) goto L_114ce71d;
  /* 114ce70c push 2 */
  push32((uint32_t)(0x2u));
  /* 114ce70e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce711 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 114ce714 push eax */
  push32((uint32_t)(EAX));
  /* 114ce715 call 0x114cc390 */
  push32(0x114ce71au); f_114cc390();
  /* 114ce71a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114ce71d:;
  /* 114ce71d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce720 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce724 je 0x114ce737 */
  if (C.zf) goto L_114ce737;
  /* 114ce726 push 2 */
  push32((uint32_t)(0x2u));
  /* 114ce728 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce72b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 114ce72e push eax */
  push32((uint32_t)(EAX));
  /* 114ce72f call 0x114cc390 */
  push32(0x114ce734u); f_114cc390();
  /* 114ce734 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114ce737:;
  /* 114ce737 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce73a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce73e je 0x114ce751 */
  if (C.zf) goto L_114ce751;
  /* 114ce740 push 2 */
  push32((uint32_t)(0x2u));
  /* 114ce742 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce745 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 114ce748 push eax */
  push32((uint32_t)(EAX));
  /* 114ce749 call 0x114cc390 */
  push32(0x114ce74eu); f_114cc390();
  /* 114ce74e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114ce751:;
  /* 114ce751 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce754 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce758 je 0x114ce76b */
  if (C.zf) goto L_114ce76b;
  /* 114ce75a push 2 */
  push32((uint32_t)(0x2u));
  /* 114ce75c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce75f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 114ce762 push eax */
  push32((uint32_t)(EAX));
  /* 114ce763 call 0x114cc390 */
  push32(0x114ce768u); f_114cc390();
  /* 114ce768 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114ce76b:;
  /* 114ce76b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce76e cmp dword ptr [ecx + 0x50], 0x114fd2a0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x114fd2a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce775 je 0x114ce788 */
  if (C.zf) goto L_114ce788;
  /* 114ce777 push 2 */
  push32((uint32_t)(0x2u));
  /* 114ce779 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce77c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 114ce77f push eax */
  push32((uint32_t)(EAX));
  /* 114ce780 call 0x114cc390 */
  push32(0x114ce785u); f_114cc390();
  /* 114ce785 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114ce788:;
  /* 114ce788 push 2 */
  push32((uint32_t)(0x2u));
  /* 114ce78a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce78d push ecx */
  push32((uint32_t)(ECX));
  /* 114ce78e call 0x114cc390 */
  push32(0x114ce793u); f_114cc390();
  /* 114ce793 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114ce796:;
  /* 114ce796 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ce798 mov edx, dword ptr [0x114fcf70] */
  EDX = (r32((uint32_t)(0x114fcf70)));
  /* 114ce79e push edx */
  push32((uint32_t)(EDX));
  /* 114ce79f call dword ptr [0x115013e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013e8))), 0x114ce7a5u);
L_114ce7a5:;
  /* 114ce7a5 pop ebp */
  EBP = (pop32());
  /* 114ce7a6 ret  */
  ESPCHK(0x114ce6a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7b0 @ 0x114ce7b0 (11 bytes, 5 insns) */
void f_114ce7b0(void) {
  FTRACE(0x114ce7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ce7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 114ce7b1 mov ebp, esp */
  EBP = (ESP);
  /* 114ce7b3 call dword ptr [0x115013ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013ec))), 0x114ce7b9u);
  /* 114ce7b9 pop ebp */
  EBP = (pop32());
  /* 114ce7ba ret  */
  ESPCHK(0x114ce7b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7c0 @ 0x114ce7c0 (11 bytes, 5 insns) */
void f_114ce7c0(void) {
  FTRACE(0x114ce7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ce7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 114ce7c1 mov ebp, esp */
  EBP = (ESP);
  /* 114ce7c3 call dword ptr [0x115013d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013d0))), 0x114ce7c9u);
  /* 114ce7c9 pop ebp */
  EBP = (pop32());
  /* 114ce7ca ret  */
  ESPCHK(0x114ce7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7d0 @ 0x114ce7d0 (92 bytes, 29 insns) */
void f_114ce7d0(void) {
  FTRACE(0x114ce7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ce7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114ce7d1 mov ebp, esp */
  EBP = (ESP);
  /* 114ce7d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 114ce7d5 push 0x114f9e98 */
  push32((uint32_t)(0x114f9e98u));
  /* 114ce7da push 0x114d554c */
  push32((uint32_t)(0x114d554cu));
  /* 114ce7df mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 114ce7e5 push eax */
  push32((uint32_t)(EAX));
  /* 114ce7e6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 114ce7ed sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114ce7f0 push ebx */
  push32((uint32_t)(EBX));
  /* 114ce7f1 push esi */
  push32((uint32_t)(ESI));
  /* 114ce7f2 push edi */
  push32((uint32_t)(EDI));
  /* 114ce7f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 114ce7f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114ce7fd call 0x114ce600 */
  push32(0x114ce802u); f_114ce600();
  /* 114ce802 cmp dword ptr [eax + 0x60], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce806 je 0x114ce830 */
  if (C.zf) goto L_114ce830;
  /* 114ce808 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 114ce80f call 0x114ce600 */
  push32(0x114ce814u); f_114ce600();
  /* 114ce814 call dword ptr [eax + 0x60] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x60))), 0x114ce817u);
  /* 114ce817 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114ce81e jmp 0x114ce830 */
  goto L_114ce830;
  /* 114ce820 mov eax, 1 */
  EAX = (0x1u);
  /* 114ce825 ret  */
  ESPCHK(0x114ce7d0u, _esp0);
  ESP += 4; return;
  /* 114ce826 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 114ce829 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_114ce830:;
  /* 114ce830 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 114ce837 call 0x114ce83e */
  push32(0x114ce83cu); f_114ce83e();
  /* 114ce83c jmp 0x114ce844 */
  jmp_ind(0x114ce844u); return;
}

/* _abort @ 0x114ce83e (5 bytes, 2 insns) */
void f_114ce83e(void) {
  FTRACE(0x114ce83eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ce83e call 0x114d5850 */
  push32(0x114ce843u); f_114d5850();
  /* 114ce843 ret  */
  ESPCHK(0x114ce83eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000e860 @ 0x114ce860 (29 bytes, 10 insns) */
void f_114ce860(void) {
  FTRACE(0x114ce860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ce860 push ebp */
  push32((uint32_t)(EBP));
  /* 114ce861 mov ebp, esp */
  EBP = (ESP);
  /* 114ce863 call 0x114ce600 */
  push32(0x114ce868u); f_114ce600();
  /* 114ce868 cmp dword ptr [eax + 0x64], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce86c je 0x114ce876 */
  if (C.zf) goto L_114ce876;
  /* 114ce86e call 0x114ce600 */
  push32(0x114ce873u); f_114ce600();
  /* 114ce873 call dword ptr [eax + 0x64] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x64))), 0x114ce876u);
L_114ce876:;
  /* 114ce876 call 0x114ce7d0 */
  push32(0x114ce87bu); f_114ce7d0();
  /* 114ce87b pop ebp */
  EBP = (pop32());
  /* 114ce87c ret  */
  ESPCHK(0x114ce860u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e880 @ 0x114ce880 (90 bytes, 27 insns) */
void f_114ce880(void) {
  FTRACE(0x114ce880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ce880 push ebp */
  push32((uint32_t)(EBP));
  /* 114ce881 mov ebp, esp */
  EBP = (ESP);
  /* 114ce883 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 114ce885 push 0x114f9eb0 */
  push32((uint32_t)(0x114f9eb0u));
  /* 114ce88a push 0x114d554c */
  push32((uint32_t)(0x114d554cu));
  /* 114ce88f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 114ce895 push eax */
  push32((uint32_t)(EAX));
  /* 114ce896 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 114ce89d sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114ce8a0 push ebx */
  push32((uint32_t)(EBX));
  /* 114ce8a1 push esi */
  push32((uint32_t)(ESI));
  /* 114ce8a2 push edi */
  push32((uint32_t)(EDI));
  /* 114ce8a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 114ce8a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114ce8ad cmp dword ptr [0x114fcf74], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114fcf74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce8b4 je 0x114ce8dc */
  if (C.zf) goto L_114ce8dc;
  /* 114ce8b6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 114ce8bd call dword ptr [0x114fcf74] */
  call_ind((uint32_t)(r32((uint32_t)(0x114fcf74))), 0x114ce8c3u);
  /* 114ce8c3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114ce8ca jmp 0x114ce8dc */
  goto L_114ce8dc;
  /* 114ce8cc mov eax, 1 */
  EAX = (0x1u);
  /* 114ce8d1 ret  */
  ESPCHK(0x114ce880u, _esp0);
  ESP += 4; return;
  /* 114ce8d2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 114ce8d5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_114ce8dc:;
  /* 114ce8dc mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 114ce8e3 call 0x114ce8ea */
  push32(0x114ce8e8u); f_114ce8ea();
  /* 114ce8e8 jmp 0x114ce8f0 */
  f_114ce8f0(); return;
}

/* FUN_1000e8ea @ 0x114ce8ea (6 bytes, 2 insns) */
void f_114ce8ea(void) {
  FTRACE(0x114ce8eau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ce8ea call 0x114ce7d0 */
  push32(0x114ce8efu); f_114ce7d0();
  /* 114ce8ef ret  */
  ESPCHK(0x114ce8eau, _esp0);
  ESP += 4; return;
}

/* FUN_1000e8f0 @ 0x114ce8f0 (17 bytes, 8 insns) */
void f_114ce8f0(void) {
  FTRACE(0x114ce8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ce8f0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114ce8f3 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 114ce8fa pop edi */
  EDI = (pop32());
  /* 114ce8fb pop esi */
  ESI = (pop32());
  /* 114ce8fc pop ebx */
  EBX = (pop32());
  /* 114ce8fd mov esp, ebp */
  ESP = (EBP);
  /* 114ce8ff pop ebp */
  EBP = (pop32());
  /* 114ce900 ret  */
  ESPCHK(0x114ce8f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e910 @ 0x114ce910 (56 bytes, 15 insns) */
void f_114ce910(void) {
  FTRACE(0x114ce910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ce910 push ebp */
  push32((uint32_t)(EBP));
  /* 114ce911 mov ebp, esp */
  EBP = (ESP);
  /* 114ce913 cmp dword ptr [0x114fcdf0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114fcdf0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce91a je 0x114ce922 */
  if (C.zf) goto L_114ce922;
  /* 114ce91c call dword ptr [0x114fcdf0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114fcdf0))), 0x114ce922u);
L_114ce922:;
  /* 114ce922 push 0x114fc630 */
  push32((uint32_t)(0x114fc630u));
  /* 114ce927 push 0x114fc318 */
  push32((uint32_t)(0x114fc318u));
  /* 114ce92c call 0x114ceae0 */
  push32(0x114ce931u); f_114ceae0();
  /* 114ce931 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce934 push 0x114fc214 */
  push32((uint32_t)(0x114fc214u));
  /* 114ce939 push 0x114fc000 */
  push32((uint32_t)(0x114fc000u));
  /* 114ce93e call 0x114ceae0 */
  push32(0x114ce943u); f_114ceae0();
  /* 114ce943 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce946 pop ebp */
  EBP = (pop32());
  /* 114ce947 ret  */
  ESPCHK(0x114ce910u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e950 @ 0x114ce950 (21 bytes, 10 insns) */
void f_114ce950(void) {
  FTRACE(0x114ce950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ce950 push ebp */
  push32((uint32_t)(EBP));
  /* 114ce951 mov ebp, esp */
  EBP = (ESP);
  /* 114ce953 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ce955 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ce957 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce95a push eax */
  push32((uint32_t)(EAX));
  /* 114ce95b call 0x114ce9d0 */
  push32(0x114ce960u); f_114ce9d0();
  /* 114ce960 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce963 pop ebp */
  EBP = (pop32());
  /* 114ce964 ret  */
  ESPCHK(0x114ce950u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x114ce970 (21 bytes, 10 insns) */
void f_114ce970(void) {
  FTRACE(0x114ce970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ce970 push ebp */
  push32((uint32_t)(EBP));
  /* 114ce971 mov ebp, esp */
  EBP = (ESP);
  /* 114ce973 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ce975 push 1 */
  push32((uint32_t)(0x1u));
  /* 114ce977 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce97a push eax */
  push32((uint32_t)(EAX));
  /* 114ce97b call 0x114ce9d0 */
  push32(0x114ce980u); f_114ce9d0();
  /* 114ce980 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce983 pop ebp */
  EBP = (pop32());
  /* 114ce984 ret  */
  ESPCHK(0x114ce970u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e990 @ 0x114ce990 (19 bytes, 9 insns) */
void f_114ce990(void) {
  FTRACE(0x114ce990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ce990 push ebp */
  push32((uint32_t)(EBP));
  /* 114ce991 mov ebp, esp */
  EBP = (ESP);
  /* 114ce993 push 1 */
  push32((uint32_t)(0x1u));
  /* 114ce995 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ce997 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ce999 call 0x114ce9d0 */
  push32(0x114ce99eu); f_114ce9d0();
  /* 114ce99e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce9a1 pop ebp */
  EBP = (pop32());
  /* 114ce9a2 ret  */
  ESPCHK(0x114ce990u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e9b0 @ 0x114ce9b0 (19 bytes, 9 insns) */
void f_114ce9b0(void) {
  FTRACE(0x114ce9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ce9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 114ce9b1 mov ebp, esp */
  EBP = (ESP);
  /* 114ce9b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 114ce9b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 114ce9b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ce9b9 call 0x114ce9d0 */
  push32(0x114ce9beu); f_114ce9d0();
  /* 114ce9be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ce9c1 pop ebp */
  EBP = (pop32());
  /* 114ce9c2 ret  */
  ESPCHK(0x114ce9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e9d0 @ 0x114ce9d0 (227 bytes, 61 insns) */
void f_114ce9d0(void) {
  FTRACE(0x114ce9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ce9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114ce9d1 mov ebp, esp */
  EBP = (ESP);
  /* 114ce9d3 push ecx */
  push32((uint32_t)(ECX));
  /* 114ce9d4 call 0x114ceac0 */
  push32(0x114ce9d9u); f_114ceac0();
  /* 114ce9d9 cmp dword ptr [0x114ff1ec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114ff1ec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ce9e0 jne 0x114ce9f3 */
  if (!C.zf) goto L_114ce9f3;
  /* 114ce9e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ce9e5 push eax */
  push32((uint32_t)(EAX));
  /* 114ce9e6 call dword ptr [0x115013c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013c8))), 0x114ce9ecu);
  /* 114ce9ec push eax */
  push32((uint32_t)(EAX));
  /* 114ce9ed call dword ptr [0x115013d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013d8))), 0x114ce9f3u);
L_114ce9f3:;
  /* 114ce9f3 mov dword ptr [0x114ff1e8], 1 */
  w32((uint32_t)(0x114ff1e8), (0x1u));
  /* 114ce9fd mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 114cea00 mov byte ptr [0x114ff1e4], cl */
  w8((uint32_t)(0x114ff1e4), (CL));
  /* 114cea06 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cea0a jne 0x114cea53 */
  if (!C.zf) goto L_114cea53;
  /* 114cea0c cmp dword ptr [0x11500c58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11500c58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cea13 je 0x114cea41 */
  if (C.zf) goto L_114cea41;
  /* 114cea15 mov edx, dword ptr [0x11500c54] */
  EDX = (r32((uint32_t)(0x11500c54)));
  /* 114cea1b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_114cea1e:;
  /* 114cea1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cea21 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cea24 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114cea27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cea2a cmp ecx, dword ptr [0x11500c58] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11500c58))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cea30 jb 0x114cea41 */
  if (C.cf) goto L_114cea41;
  /* 114cea32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cea35 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cea38 je 0x114cea3f */
  if (C.zf) goto L_114cea3f;
  /* 114cea3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cea3d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x114cea3fu);
L_114cea3f:;
  /* 114cea3f jmp 0x114cea1e */
  goto L_114cea1e;
L_114cea41:;
  /* 114cea41 push 0x114fc93c */
  push32((uint32_t)(0x114fc93cu));
  /* 114cea46 push 0x114fc734 */
  push32((uint32_t)(0x114fc734u));
  /* 114cea4b call 0x114ceae0 */
  push32(0x114cea50u); f_114ceae0();
  /* 114cea50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114cea53:;
  /* 114cea53 push 0x114fcc48 */
  push32((uint32_t)(0x114fcc48u));
  /* 114cea58 push 0x114fca40 */
  push32((uint32_t)(0x114fca40u));
  /* 114cea5d call 0x114ceae0 */
  push32(0x114cea62u); f_114ceae0();
  /* 114cea62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cea65 cmp dword ptr [0x114ff1f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff1f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cea6c jne 0x114cea8e */
  if (!C.zf) goto L_114cea8e;
  /* 114cea6e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 114cea70 call 0x114cce10 */
  push32(0x114cea75u); f_114cce10();
  /* 114cea75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cea78 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 114cea7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cea7d je 0x114cea8e */
  if (C.zf) goto L_114cea8e;
  /* 114cea7f mov dword ptr [0x114ff1f0], 1 */
  w32((uint32_t)(0x114ff1f0), (0x1u));
  /* 114cea89 call 0x114cd720 */
  push32(0x114cea8eu); f_114cd720();
L_114cea8e:;
  /* 114cea8e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cea92 je 0x114cea9b */
  if (C.zf) goto L_114cea9b;
  /* 114cea94 call 0x114cead0 */
  push32(0x114cea99u); f_114cead0();
  /* 114cea99 jmp 0x114ceaaf */
  goto L_114ceaaf;
L_114cea9b:;
  /* 114cea9b mov dword ptr [0x114ff1ec], 1 */
  w32((uint32_t)(0x114ff1ec), (0x1u));
  /* 114ceaa5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ceaa8 push ecx */
  push32((uint32_t)(ECX));
  /* 114ceaa9 call dword ptr [0x11501448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501448))), 0x114ceaafu);
L_114ceaaf:;
  /* 114ceaaf mov esp, ebp */
  ESP = (EBP);
  /* 114ceab1 pop ebp */
  EBP = (pop32());
  /* 114ceab2 ret  */
  ESPCHK(0x114ce9d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eac0 @ 0x114ceac0 (15 bytes, 7 insns) */
void f_114ceac0(void) {
  FTRACE(0x114ceac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ceac0 push ebp */
  push32((uint32_t)(EBP));
  /* 114ceac1 mov ebp, esp */
  EBP = (ESP);
  /* 114ceac3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 114ceac5 call 0x114cb800 */
  push32(0x114ceacau); f_114cb800();
  /* 114ceaca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ceacd pop ebp */
  EBP = (pop32());
  /* 114ceace ret  */
  ESPCHK(0x114ceac0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ead0 @ 0x114cead0 (15 bytes, 7 insns) */
void f_114cead0(void) {
  FTRACE(0x114cead0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cead0 push ebp */
  push32((uint32_t)(EBP));
  /* 114cead1 mov ebp, esp */
  EBP = (ESP);
  /* 114cead3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 114cead5 call 0x114cb8a0 */
  push32(0x114ceadau); f_114cb8a0();
  /* 114ceada add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ceadd pop ebp */
  EBP = (pop32());
  /* 114ceade ret  */
  ESPCHK(0x114cead0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x114ceae0 (37 bytes, 16 insns) */
void f_114ceae0(void) {
  FTRACE(0x114ceae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ceae0 push ebp */
  push32((uint32_t)(EBP));
  /* 114ceae1 mov ebp, esp */
  EBP = (ESP);
L_114ceae3:;
  /* 114ceae3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ceae6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ceae9 jae 0x114ceb03 */
  if (!C.cf) goto L_114ceb03;
  /* 114ceaeb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ceaee cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ceaf1 je 0x114ceaf8 */
  if (C.zf) goto L_114ceaf8;
  /* 114ceaf3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ceaf6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x114ceaf8u);
L_114ceaf8:;
  /* 114ceaf8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ceafb add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114ceafe mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 114ceb01 jmp 0x114ceae3 */
  goto L_114ceae3;
L_114ceb03:;
  /* 114ceb03 pop ebp */
  EBP = (pop32());
  /* 114ceb04 ret  */
  ESPCHK(0x114ceae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb10 @ 0x114ceb10 (628 bytes, 214 insns) */
void f_114ceb10(void) {
  FTRACE(0x114ceb10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ceb10 push ebp */
  push32((uint32_t)(EBP));
  /* 114ceb11 mov ebp, esp */
  EBP = (ESP);
  /* 114ceb13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114ceb16 push ebx */
  push32((uint32_t)(EBX));
  /* 114ceb17 push esi */
  push32((uint32_t)(ESI));
  /* 114ceb18 push edi */
  push32((uint32_t)(EDI));
L_114ceb19:;
  /* 114ceb19 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ceb1d jne 0x114ceb3d */
  if (!C.zf) goto L_114ceb3d;
  /* 114ceb1f push 0x114f9f14 */
  push32((uint32_t)(0x114f9f14u));
  /* 114ceb24 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ceb26 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 114ceb28 push 0x114f9f08 */
  push32((uint32_t)(0x114f9f08u));
  /* 114ceb2d push 2 */
  push32((uint32_t)(0x2u));
  /* 114ceb2f call 0x114ca4c0 */
  push32(0x114ceb34u); f_114ca4c0();
  /* 114ceb34 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ceb37 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ceb3a jne 0x114ceb3d */
  if (!C.zf) goto L_114ceb3d;
  /* 114ceb3c int3  */
  x86_unimpl("int3 @ 0x114ceb3c");
L_114ceb3d:;
  /* 114ceb3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114ceb3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ceb41 jne 0x114ceb19 */
  if (!C.zf) goto L_114ceb19;
  /* 114ceb43 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114ceb46 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114ceb49 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114ceb4c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 114ceb4f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 114ceb52 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114ceb55 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114ceb58 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 114ceb5e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114ceb60 je 0x114ceb6f */
  if (C.zf) goto L_114ceb6f;
  /* 114ceb62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114ceb65 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 114ceb68 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 114ceb6b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114ceb6d je 0x114ceb85 */
  if (C.zf) goto L_114ceb85;
L_114ceb6f:;
  /* 114ceb6f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114ceb72 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 114ceb75 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 114ceb77 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114ceb7a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 114ceb7d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114ceb80 jmp 0x114ced7d */
  goto L_114ced7d;
L_114ceb85:;
  /* 114ceb85 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114ceb88 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 114ceb8b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 114ceb8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ceb90 je 0x114cebdc */
  if (C.zf) goto L_114cebdc;
  /* 114ceb92 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114ceb95 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 114ceb9c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114ceb9f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 114ceba2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 114ceba5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ceba7 je 0x114cebc5 */
  if (C.zf) goto L_114cebc5;
  /* 114ceba9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cebac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cebaf mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 114cebb2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 114cebb4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cebb7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114cebba and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 114cebbd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cebc0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 114cebc3 jmp 0x114cebdc */
  goto L_114cebdc;
L_114cebc5:;
  /* 114cebc5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cebc8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114cebcb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 114cebce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cebd1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 114cebd4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114cebd7 jmp 0x114ced7d */
  goto L_114ced7d;
L_114cebdc:;
  /* 114cebdc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cebdf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114cebe2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 114cebe5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cebe8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 114cebeb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cebee mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114cebf1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 114cebf4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cebf7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 114cebfa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cebfd mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 114cec04 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114cec0b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cec0e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 114cec11 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cec14 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 114cec17 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 114cec1d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114cec1f jne 0x114cec4f */
  if (!C.zf) goto L_114cec4f;
  /* 114cec21 cmp dword ptr [ebp - 8], 0x114fd348 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x114fd348u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cec28 je 0x114cec33 */
  if (C.zf) goto L_114cec33;
  /* 114cec2a cmp dword ptr [ebp - 8], 0x114fd368 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x114fd368u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cec31 jne 0x114cec43 */
  if (!C.zf) goto L_114cec43;
L_114cec33:;
  /* 114cec33 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114cec36 push edx */
  push32((uint32_t)(EDX));
  /* 114cec37 call 0x114d5da0 */
  push32(0x114cec3cu); f_114d5da0();
  /* 114cec3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cec3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cec41 jne 0x114cec4f */
  if (!C.zf) goto L_114cec4f;
L_114cec43:;
  /* 114cec43 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cec46 push eax */
  push32((uint32_t)(EAX));
  /* 114cec47 call 0x114d5cd0 */
  push32(0x114cec4cu); f_114d5cd0();
  /* 114cec4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114cec4f:;
  /* 114cec4f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cec52 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114cec55 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 114cec5b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cec5d je 0x114ced3b */
  if (C.zf) goto L_114ced3b;
L_114cec63:;
  /* 114cec63 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cec66 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cec69 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 114cec6b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cec6e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cec70 jge 0x114cec93 */
  if ((C.sf==C.of)) goto L_114cec93;
  /* 114cec72 push 0x114f9ec8 */
  push32((uint32_t)(0x114f9ec8u));
  /* 114cec77 push 0 */
  push32((uint32_t)(0x0u));
  /* 114cec79 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 114cec7e push 0x114f9f08 */
  push32((uint32_t)(0x114f9f08u));
  /* 114cec83 push 2 */
  push32((uint32_t)(0x2u));
  /* 114cec85 call 0x114ca4c0 */
  push32(0x114cec8au); f_114ca4c0();
  /* 114cec8a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cec8d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cec90 jne 0x114cec93 */
  if (!C.zf) goto L_114cec93;
  /* 114cec92 int3  */
  x86_unimpl("int3 @ 0x114cec92");
L_114cec93:;
  /* 114cec93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cec95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cec97 jne 0x114cec63 */
  if (!C.zf) goto L_114cec63;
  /* 114cec99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cec9c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cec9f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 114ceca1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114ceca4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114ceca7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cecaa mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 114cecad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cecb0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cecb3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 114cecb5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cecb8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 114cecbb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cecbe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cecc1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 114cecc4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cecc8 jle 0x114cece6 */
  if ((C.zf||C.sf!=C.of)) goto L_114cece6;
  /* 114cecca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114ceccd push ecx */
  push32((uint32_t)(ECX));
  /* 114cecce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cecd1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 114cecd4 push eax */
  push32((uint32_t)(EAX));
  /* 114cecd5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114cecd8 push ecx */
  push32((uint32_t)(ECX));
  /* 114cecd9 call 0x114d59c0 */
  push32(0x114cecdeu); f_114d59c0();
  /* 114cecde add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cece1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114cece4 jmp 0x114ced2e */
  goto L_114ced2e;
L_114cece6:;
  /* 114cece6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cecea je 0x114ced09 */
  if (C.zf) goto L_114ced09;
  /* 114cecec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114cecef sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 114cecf2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114cecf5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 114cecf8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114cecfb mov ecx, dword ptr [edx*4 + 0x11500b00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11500b00)));
  /* 114ced02 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114ced04 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 114ced07 jmp 0x114ced10 */
  goto L_114ced10;
L_114ced09:;
  /* 114ced09 mov dword ptr [ebp - 0x14], 0x114fcf80 */
  w32((uint32_t)(EBP + -0x14), (0x114fcf80u));
L_114ced10:;
  /* 114ced10 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114ced13 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 114ced17 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 114ced1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ced1c je 0x114ced2e */
  if (C.zf) goto L_114ced2e;
  /* 114ced1e push 2 */
  push32((uint32_t)(0x2u));
  /* 114ced20 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ced22 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114ced25 push ecx */
  push32((uint32_t)(ECX));
  /* 114ced26 call 0x114d5870 */
  push32(0x114ced2bu); f_114d5870();
  /* 114ced2b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114ced2e:;
  /* 114ced2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114ced31 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 114ced34 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 114ced37 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 114ced39 jmp 0x114ced59 */
  goto L_114ced59;
L_114ced3b:;
  /* 114ced3b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 114ced42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114ced45 push edx */
  push32((uint32_t)(EDX));
  /* 114ced46 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 114ced49 push eax */
  push32((uint32_t)(EAX));
  /* 114ced4a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114ced4d push ecx */
  push32((uint32_t)(ECX));
  /* 114ced4e call 0x114d59c0 */
  push32(0x114ced53u); f_114d59c0();
  /* 114ced53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ced56 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_114ced59:;
  /* 114ced59 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114ced5c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ced5f je 0x114ced75 */
  if (C.zf) goto L_114ced75;
  /* 114ced61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114ced64 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 114ced67 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 114ced6a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114ced6d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 114ced70 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114ced73 jmp 0x114ced7d */
  goto L_114ced7d;
L_114ced75:;
  /* 114ced75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ced78 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_114ced7d:;
  /* 114ced7d pop edi */
  EDI = (pop32());
  /* 114ced7e pop esi */
  ESI = (pop32());
  /* 114ced7f pop ebx */
  EBX = (pop32());
  /* 114ced80 mov esp, ebp */
  ESP = (EBP);
  /* 114ced82 pop ebp */
  EBP = (pop32());
  /* 114ced83 ret  */
  ESPCHK(0x114ceb10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed90 @ 0x114ced90 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_114ced90(void) {
  FTRACE(0x114ced90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ced90 push ebp */
  push32((uint32_t)(EBP));
  /* 114ced91 mov ebp, esp */
  EBP = (ESP);
  /* 114ced93 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114ced99 push ebx */
  push32((uint32_t)(EBX));
  /* 114ced9a push esi */
  push32((uint32_t)(ESI));
  /* 114ced9b push edi */
  push32((uint32_t)(EDI));
  /* 114ced9c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 114ceda3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 114cedad mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_114cedb4:;
  /* 114cedb4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cedb7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 114cedb9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 114cedbc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 114cedc0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cedc3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cedc6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 114cedc9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cedcb je 0x114cf9a7 */
  if (C.zf) goto L_114cf9a7;
  /* 114cedd1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cedd8 jl 0x114cf9a7 */
  if ((C.sf!=C.of)) goto L_114cf9a7;
  /* 114cedde movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 114cede2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cede5 jl 0x114cee06 */
  if ((C.sf!=C.of)) goto L_114cee06;
  /* 114cede7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 114cedeb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cedee jg 0x114cee06 */
  if ((!C.zf&&C.sf==C.of)) goto L_114cee06;
  /* 114cedf0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 114cedf4 movsx ecx, byte ptr [eax + 0x114f9f00] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x114f9f00))));
  /* 114cedfb and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 114cedfe mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 114cee04 jmp 0x114cee10 */
  goto L_114cee10;
L_114cee06:;
  /* 114cee06 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_114cee10:;
  /* 114cee10 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 114cee16 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 114cee19 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114cee1c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114cee1f movsx edx, byte ptr [ecx + eax*8 + 0x114f9f20] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x114f9f20))));
  /* 114cee27 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 114cee2a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 114cee2d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114cee30 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 114cee36 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cee3d ja 0x114cf9a2 */
  if ((!C.cf&&!C.zf)) goto L_114cf9a2;
  /* 114cee43 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 114cee49 jmp dword ptr [ecx*4 + 0x114cf9b4] */
  switch (ECX) {
    case 0: goto L_114cee50;
    case 1: goto L_114ceeea;
    case 2: goto L_114cef2c;
    case 3: goto L_114cef9b;
    case 4: goto L_114ceff3;
    case 5: goto L_114cf002;
    case 6: goto L_114cf04e;
    case 7: goto L_114cf0e1;
    case 8: goto L_114cef78;
    case 9: goto L_114cef83;
    case 10: goto L_114cef6e;
    case 11: goto L_114cef63;
    case 12: goto L_114cef8e;
    case 13: goto L_114cef96;
    default: x86_unimpl("switch@0x114cee49 out of table"); return;
  }
L_114cee50:;
  /* 114cee50 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 114cee57 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 114cee5a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 114cee60 mov eax, dword ptr [0x114fd04c] */
  EAX = (r32((uint32_t)(0x114fd04c)));
  /* 114cee65 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114cee67 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 114cee6b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 114cee71 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114cee73 je 0x114ceecd */
  if (C.zf) goto L_114ceecd;
  /* 114cee75 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 114cee7b push edx */
  push32((uint32_t)(EDX));
  /* 114cee7c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cee7f push eax */
  push32((uint32_t)(EAX));
  /* 114cee80 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 114cee84 push ecx */
  push32((uint32_t)(ECX));
  /* 114cee85 call 0x114cfac0 */
  push32(0x114cee8au); f_114cfac0();
  /* 114cee8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cee8d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cee90 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114cee92 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 114cee95 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cee98 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cee9b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_114cee9e:;
  /* 114cee9e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 114ceea2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114ceea4 jne 0x114ceec7 */
  if (!C.zf) goto L_114ceec7;
  /* 114ceea6 push 0x114f9fa0 */
  push32((uint32_t)(0x114f9fa0u));
  /* 114ceeab push 0 */
  push32((uint32_t)(0x0u));
  /* 114ceead push 0x186 */
  push32((uint32_t)(0x186u));
  /* 114ceeb2 push 0x114f9f94 */
  push32((uint32_t)(0x114f9f94u));
  /* 114ceeb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 114ceeb9 call 0x114ca4c0 */
  push32(0x114ceebeu); f_114ca4c0();
  /* 114ceebe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ceec1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ceec4 jne 0x114ceec7 */
  if (!C.zf) goto L_114ceec7;
  /* 114ceec6 int3  */
  x86_unimpl("int3 @ 0x114ceec6");
L_114ceec7:;
  /* 114ceec7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114ceec9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ceecb jne 0x114cee9e */
  if (!C.zf) goto L_114cee9e;
L_114ceecd:;
  /* 114ceecd lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 114ceed3 push ecx */
  push32((uint32_t)(ECX));
  /* 114ceed4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ceed7 push edx */
  push32((uint32_t)(EDX));
  /* 114ceed8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 114ceedc push eax */
  push32((uint32_t)(EAX));
  /* 114ceedd call 0x114cfac0 */
  push32(0x114ceee2u); f_114cfac0();
  /* 114ceee2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ceee5 jmp 0x114cf9a2 */
  goto L_114cf9a2;
L_114ceeea:;
  /* 114ceeea mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 114ceef1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114ceef4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 114ceefa mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 114cef00 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 114cef06 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 114cef0c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 114cef0f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114cef16 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 114cef20 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 114cef27 jmp 0x114cf9a2 */
  goto L_114cf9a2;
L_114cef2c:;
  /* 114cef2c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 114cef30 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 114cef36 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 114cef3c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cef3f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 114cef45 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cef4c ja 0x114cef96 */
  if ((!C.cf&&!C.zf)) goto L_114cef96;
  /* 114cef4e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 114cef54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cef56 mov al, byte ptr [ecx + 0x114cf9ec] */
  AL = (r8((uint32_t)(ECX + 0x114cf9ec)));
  /* 114cef5c jmp dword ptr [eax*4 + 0x114cf9d4] */
  switch (EAX) {
    case 0: goto L_114cef78;
    case 1: goto L_114cef83;
    case 2: goto L_114cef6e;
    case 3: goto L_114cef63;
    case 4: goto L_114cef8e;
    case 5: goto L_114cef96;
    default: x86_unimpl("switch@0x114cef5c out of table"); return;
  }
L_114cef63:;
  /* 114cef63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cef66 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 114cef69 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114cef6c jmp 0x114cef96 */
  goto L_114cef96;
L_114cef6e:;
  /* 114cef6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cef71 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 114cef73 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114cef76 jmp 0x114cef96 */
  goto L_114cef96;
L_114cef78:;
  /* 114cef78 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cef7b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 114cef7e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114cef81 jmp 0x114cef96 */
  goto L_114cef96;
L_114cef83:;
  /* 114cef83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cef86 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 114cef89 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114cef8c jmp 0x114cef96 */
  goto L_114cef96;
L_114cef8e:;
  /* 114cef8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cef91 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 114cef93 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114cef96:;
  /* 114cef96 jmp 0x114cf9a2 */
  goto L_114cf9a2;
L_114cef9b:;
  /* 114cef9b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 114cef9f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cefa2 jne 0x114cefd7 */
  if (!C.zf) goto L_114cefd7;
  /* 114cefa4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 114cefa7 push edx */
  push32((uint32_t)(EDX));
  /* 114cefa8 call 0x114cfbd0 */
  push32(0x114cefadu); f_114cfbd0();
  /* 114cefad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cefb0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 114cefb6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cefbd jge 0x114cefd5 */
  if ((C.sf==C.of)) goto L_114cefd5;
  /* 114cefbf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cefc2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 114cefc4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114cefc7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 114cefcd neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 114cefcf mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_114cefd5:;
  /* 114cefd5 jmp 0x114cefee */
  goto L_114cefee;
L_114cefd7:;
  /* 114cefd7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 114cefdd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114cefe0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 114cefe4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 114cefe8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_114cefee:;
  /* 114cefee jmp 0x114cf9a2 */
  goto L_114cf9a2;
L_114ceff3:;
  /* 114ceff3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 114ceffd jmp 0x114cf9a2 */
  goto L_114cf9a2;
L_114cf002:;
  /* 114cf002 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 114cf006 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cf009 jne 0x114cf032 */
  if (!C.zf) goto L_114cf032;
  /* 114cf00b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 114cf00e push eax */
  push32((uint32_t)(EAX));
  /* 114cf00f call 0x114cfbd0 */
  push32(0x114cf014u); f_114cfbd0();
  /* 114cf014 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cf017 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 114cf01d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cf024 jge 0x114cf030 */
  if ((C.sf==C.of)) goto L_114cf030;
  /* 114cf026 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_114cf030:;
  /* 114cf030 jmp 0x114cf049 */
  goto L_114cf049;
L_114cf032:;
  /* 114cf032 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 114cf038 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114cf03b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 114cf03f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 114cf043 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_114cf049:;
  /* 114cf049 jmp 0x114cf9a2 */
  goto L_114cf9a2;
L_114cf04e:;
  /* 114cf04e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 114cf052 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 114cf058 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 114cf05e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cf061 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 114cf067 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cf06e ja 0x114cf0dc */
  if ((!C.cf&&!C.zf)) goto L_114cf0dc;
  /* 114cf070 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 114cf076 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cf078 mov al, byte ptr [ecx + 0x114cfa11] */
  AL = (r8((uint32_t)(ECX + 0x114cfa11)));
  /* 114cf07e jmp dword ptr [eax*4 + 0x114cf9fd] */
  switch (EAX) {
    case 0: goto L_114cf090;
    case 1: goto L_114cf0c9;
    case 2: goto L_114cf085;
    case 3: goto L_114cf0d3;
    case 4: goto L_114cf0dc;
    default: x86_unimpl("switch@0x114cf07e out of table"); return;
  }
L_114cf085:;
  /* 114cf085 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cf088 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 114cf08b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114cf08e jmp 0x114cf0dc */
  goto L_114cf0dc;
L_114cf090:;
  /* 114cf090 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cf093 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114cf096 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cf099 jne 0x114cf0bb */
  if (!C.zf) goto L_114cf0bb;
  /* 114cf09b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cf09e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 114cf0a2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cf0a5 jne 0x114cf0bb */
  if (!C.zf) goto L_114cf0bb;
  /* 114cf0a7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cf0aa add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cf0ad mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 114cf0b0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cf0b3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 114cf0b6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114cf0b9 jmp 0x114cf0c7 */
  goto L_114cf0c7;
L_114cf0bb:;
  /* 114cf0bb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 114cf0c2 jmp 0x114cee50 */
  goto L_114cee50;
L_114cf0c7:;
  /* 114cf0c7 jmp 0x114cf0dc */
  goto L_114cf0dc;
L_114cf0c9:;
  /* 114cf0c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cf0cc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 114cf0ce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114cf0d1 jmp 0x114cf0dc */
  goto L_114cf0dc;
L_114cf0d3:;
  /* 114cf0d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cf0d6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 114cf0d9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114cf0dc:;
  /* 114cf0dc jmp 0x114cf9a2 */
  goto L_114cf9a2;
L_114cf0e1:;
  /* 114cf0e1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 114cf0e5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 114cf0eb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 114cf0f1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cf0f4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 114cf0fa cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cf101 ja 0x114cf7c7 */
  if ((!C.cf&&!C.zf)) goto L_114cf7c7;
  /* 114cf107 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 114cf10d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114cf10f mov cl, byte ptr [edx + 0x114cfa7c] */
  CL = (r8((uint32_t)(EDX + 0x114cfa7c)));
  /* 114cf115 jmp dword ptr [ecx*4 + 0x114cfa40] */
  switch (ECX) {
    case 0: goto L_114cf11c;
    case 1: goto L_114cf3b0;
    case 2: goto L_114cf240;
    case 3: goto L_114cf4e9;
    case 4: goto L_114cf1ab;
    case 5: goto L_114cf131;
    case 6: goto L_114cf4bb;
    case 7: goto L_114cf3c0;
    case 8: goto L_114cf365;
    case 9: goto L_114cf535;
    case 10: goto L_114cf4df;
    case 11: goto L_114cf256;
    case 12: goto L_114cf4d3;
    case 13: goto L_114cf4f5;
    case 14: goto L_114cf7c7;
    default: x86_unimpl("switch@0x114cf115 out of table"); return;
  }
L_114cf11c:;
  /* 114cf11c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cf11f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 114cf124 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cf126 jne 0x114cf131 */
  if (!C.zf) goto L_114cf131;
  /* 114cf128 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cf12b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 114cf12e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114cf131:;
  /* 114cf131 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cf134 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 114cf13a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cf13c je 0x114cf177 */
  if (C.zf) goto L_114cf177;
  /* 114cf13e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 114cf141 push eax */
  push32((uint32_t)(EAX));
  /* 114cf142 call 0x114cfc10 */
  push32(0x114cf147u); f_114cfc10();
  /* 114cf147 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cf14a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 114cf14e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 114cf152 push ecx */
  push32((uint32_t)(ECX));
  /* 114cf153 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 114cf159 push edx */
  push32((uint32_t)(EDX));
  /* 114cf15a call 0x114d6010 */
  push32(0x114cf15fu); f_114d6010();
  /* 114cf15f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cf162 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 114cf165 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cf169 jge 0x114cf175 */
  if ((C.sf==C.of)) goto L_114cf175;
  /* 114cf16b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_114cf175:;
  /* 114cf175 jmp 0x114cf19d */
  goto L_114cf19d;
L_114cf177:;
  /* 114cf177 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 114cf17a push eax */
  push32((uint32_t)(EAX));
  /* 114cf17b call 0x114cfbd0 */
  push32(0x114cf180u); f_114cfbd0();
  /* 114cf180 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cf183 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 114cf18a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 114cf190 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 114cf196 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_114cf19d:;
  /* 114cf19d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 114cf1a3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 114cf1a6 jmp 0x114cf7c7 */
  goto L_114cf7c7;
L_114cf1ab:;
  /* 114cf1ab lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 114cf1ae push eax */
  push32((uint32_t)(EAX));
  /* 114cf1af call 0x114cfbd0 */
  push32(0x114cf1b4u); f_114cfbd0();
  /* 114cf1b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cf1b7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 114cf1bd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cf1c4 je 0x114cf1d2 */
  if (C.zf) goto L_114cf1d2;
  /* 114cf1c6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 114cf1cc cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cf1d0 jne 0x114cf1ec */
  if (!C.zf) goto L_114cf1ec;
L_114cf1d2:;
  /* 114cf1d2 mov edx, dword ptr [0x114fcf78] */
  EDX = (r32((uint32_t)(0x114fcf78)));
  /* 114cf1d8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 114cf1db mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 114cf1de push eax */
  push32((uint32_t)(EAX));
  /* 114cf1df call 0x114d0fb0 */
  push32(0x114cf1e4u); f_114d0fb0();
  /* 114cf1e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cf1e7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 114cf1ea jmp 0x114cf23b */
  goto L_114cf23b;
L_114cf1ec:;
  /* 114cf1ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cf1ef and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 114cf1f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114cf1f7 je 0x114cf21c */
  if (C.zf) goto L_114cf21c;
  /* 114cf1f9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 114cf1ff mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 114cf202 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 114cf205 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 114cf20b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 114cf20e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 114cf210 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 114cf213 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 114cf21a jmp 0x114cf23b */
  goto L_114cf23b;
L_114cf21c:;
  /* 114cf21c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 114cf223 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 114cf229 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114cf22c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 114cf22f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 114cf235 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 114cf238 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_114cf23b:;
  /* 114cf23b jmp 0x114cf7c7 */
  goto L_114cf7c7;
L_114cf240:;
  /* 114cf240 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cf243 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 114cf249 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114cf24b jne 0x114cf256 */
  if (!C.zf) goto L_114cf256;
  /* 114cf24d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cf250 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 114cf253 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_114cf256:;
  /* 114cf256 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cf25d jne 0x114cf26b */
  if (!C.zf) goto L_114cf26b;
  /* 114cf25f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 114cf269 jmp 0x114cf277 */
  goto L_114cf277;
L_114cf26b:;
  /* 114cf26b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 114cf271 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_114cf277:;
  /* 114cf277 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 114cf27d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 114cf283 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 114cf286 push edx */
  push32((uint32_t)(EDX));
  /* 114cf287 call 0x114cfbd0 */
  push32(0x114cf28cu); f_114cfbd0();
  /* 114cf28c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cf28f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 114cf292 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cf295 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 114cf29a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cf29c je 0x114cf306 */
  if (C.zf) goto L_114cf306;
  /* 114cf29e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cf2a2 jne 0x114cf2ad */
  if (!C.zf) goto L_114cf2ad;
  /* 114cf2a4 mov ecx, dword ptr [0x114fcf7c] */
  ECX = (r32((uint32_t)(0x114fcf7c)));
  /* 114cf2aa mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_114cf2ad:;
  /* 114cf2ad mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 114cf2b4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 114cf2b7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_114cf2bd:;
  /* 114cf2bd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 114cf2c3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 114cf2c9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cf2cc mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 114cf2d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cf2d4 je 0x114cf2f6 */
  if (C.zf) goto L_114cf2f6;
  /* 114cf2d6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 114cf2dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114cf2de mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 114cf2e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cf2e3 je 0x114cf2f6 */
  if (C.zf) goto L_114cf2f6;
  /* 114cf2e5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 114cf2eb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cf2ee mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 114cf2f4 jmp 0x114cf2bd */
  goto L_114cf2bd;
L_114cf2f6:;
  /* 114cf2f6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 114cf2fc sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cf2ff sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 114cf301 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 114cf304 jmp 0x114cf360 */
  goto L_114cf360;
L_114cf306:;
  /* 114cf306 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cf30a jne 0x114cf314 */
  if (!C.zf) goto L_114cf314;
  /* 114cf30c mov eax, dword ptr [0x114fcf78] */
  EAX = (r32((uint32_t)(0x114fcf78)));
  /* 114cf311 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_114cf314:;
  /* 114cf314 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114cf317 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_114cf31d:;
  /* 114cf31d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 114cf323 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 114cf329 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cf32c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 114cf332 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cf334 je 0x114cf354 */
  if (C.zf) goto L_114cf354;
  /* 114cf336 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 114cf33c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114cf33f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cf341 je 0x114cf354 */
  if (C.zf) goto L_114cf354;
  /* 114cf343 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 114cf349 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cf34c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 114cf352 jmp 0x114cf31d */
  goto L_114cf31d;
L_114cf354:;
  /* 114cf354 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 114cf35a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cf35d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_114cf360:;
  /* 114cf360 jmp 0x114cf7c7 */
  goto L_114cf7c7;
L_114cf365:;
  /* 114cf365 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 114cf368 push edx */
  push32((uint32_t)(EDX));
  /* 114cf369 call 0x114cfbd0 */
  push32(0x114cf36eu); f_114cfbd0();
  /* 114cf36e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cf371 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 114cf377 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cf37a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 114cf37d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cf37f je 0x114cf393 */
  if (C.zf) goto L_114cf393;
  /* 114cf381 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 114cf387 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 114cf38e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 114cf391 jmp 0x114cf3a1 */
  goto L_114cf3a1;
L_114cf393:;
  /* 114cf393 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 114cf399 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 114cf39f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_114cf3a1:;
  /* 114cf3a1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 114cf3ab jmp 0x114cf7c7 */
  goto L_114cf7c7;
L_114cf3b0:;
  /* 114cf3b0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 114cf3b7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 114cf3ba add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 114cf3bd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_114cf3c0:;
  /* 114cf3c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cf3c3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 114cf3c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114cf3c8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 114cf3ce mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 114cf3d1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cf3d8 jge 0x114cf3e6 */
  if ((C.sf==C.of)) goto L_114cf3e6;
  /* 114cf3da mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 114cf3e4 jmp 0x114cf402 */
  goto L_114cf402;
L_114cf3e6:;
  /* 114cf3e6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cf3ed jne 0x114cf402 */
  if (!C.zf) goto L_114cf402;
  /* 114cf3ef movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 114cf3f3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cf3f6 jne 0x114cf402 */
  if (!C.zf) goto L_114cf402;
  /* 114cf3f8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_114cf402:;
  /* 114cf402 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cf405 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cf408 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 114cf40b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cf40e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cf411 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114cf413 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 114cf416 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 114cf41c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 114cf422 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114cf425 push ecx */
  push32((uint32_t)(ECX));
  /* 114cf426 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 114cf42c push edx */
  push32((uint32_t)(EDX));
  /* 114cf42d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 114cf431 push eax */
  push32((uint32_t)(EAX));
  /* 114cf432 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114cf435 push ecx */
  push32((uint32_t)(ECX));
  /* 114cf436 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 114cf43c push edx */
  push32((uint32_t)(EDX));
  /* 114cf43d call dword ptr [0x114fce70] */
  call_ind((uint32_t)(r32((uint32_t)(0x114fce70))), 0x114cf443u);
  /* 114cf443 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cf446 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cf449 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 114cf44e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cf450 je 0x114cf468 */
  if (C.zf) goto L_114cf468;
  /* 114cf452 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cf459 jne 0x114cf468 */
  if (!C.zf) goto L_114cf468;
  /* 114cf45b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114cf45e push ecx */
  push32((uint32_t)(ECX));
  /* 114cf45f call dword ptr [0x114fce7c] */
  call_ind((uint32_t)(r32((uint32_t)(0x114fce7c))), 0x114cf465u);
  /* 114cf465 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114cf468:;
  /* 114cf468 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 114cf46c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cf46f jne 0x114cf48a */
  if (!C.zf) goto L_114cf48a;
  /* 114cf471 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cf474 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 114cf479 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cf47b jne 0x114cf48a */
  if (!C.zf) goto L_114cf48a;
  /* 114cf47d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114cf480 push ecx */
  push32((uint32_t)(ECX));
  /* 114cf481 call dword ptr [0x114fce74] */
  call_ind((uint32_t)(r32((uint32_t)(0x114fce74))), 0x114cf487u);
  /* 114cf487 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114cf48a:;
  /* 114cf48a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 114cf48d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114cf490 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cf493 jne 0x114cf4a7 */
  if (!C.zf) goto L_114cf4a7;
  /* 114cf495 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cf498 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 114cf49b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114cf49e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 114cf4a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cf4a4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_114cf4a7:;
  /* 114cf4a7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 114cf4aa push eax */
  push32((uint32_t)(EAX));
  /* 114cf4ab call 0x114d0fb0 */
  push32(0x114cf4b0u); f_114d0fb0();
  /* 114cf4b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cf4b3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 114cf4b6 jmp 0x114cf7c7 */
  goto L_114cf7c7;
L_114cf4bb:;
  /* 114cf4bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cf4be or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 114cf4c1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114cf4c4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 114cf4ce jmp 0x114cf555 */
  goto L_114cf555;
L_114cf4d3:;
  /* 114cf4d3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 114cf4dd jmp 0x114cf555 */
  goto L_114cf555;
L_114cf4df:;
  /* 114cf4df mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_114cf4e9:;
  /* 114cf4e9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 114cf4f3 jmp 0x114cf4ff */
  goto L_114cf4ff;
L_114cf4f5:;
  /* 114cf4f5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_114cf4ff:;
  /* 114cf4ff mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 114cf509 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cf50c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 114cf512 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cf514 je 0x114cf533 */
  if (C.zf) goto L_114cf533;
  /* 114cf516 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 114cf51d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 114cf523 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cf526 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 114cf52c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_114cf533:;
  /* 114cf533 jmp 0x114cf555 */
  goto L_114cf555;
L_114cf535:;
  /* 114cf535 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 114cf53f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cf542 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 114cf548 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114cf54a je 0x114cf555 */
  if (C.zf) goto L_114cf555;
  /* 114cf54c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cf54f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 114cf552 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_114cf555:;
  /* 114cf555 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cf558 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 114cf55d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cf55f je 0x114cf57e */
  if (C.zf) goto L_114cf57e;
  /* 114cf561 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 114cf564 push ecx */
  push32((uint32_t)(ECX));
  /* 114cf565 call 0x114cfbf0 */
  push32(0x114cf56au); f_114cfbf0();
  /* 114cf56a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cf56d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 114cf573 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 114cf579 jmp 0x114cf60f */
  goto L_114cf60f;
L_114cf57e:;
  /* 114cf57e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cf581 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 114cf584 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cf586 je 0x114cf5d0 */
  if (C.zf) goto L_114cf5d0;
  /* 114cf588 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cf58b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 114cf58e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cf590 je 0x114cf5b0 */
  if (C.zf) goto L_114cf5b0;
  /* 114cf592 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 114cf595 push ecx */
  push32((uint32_t)(ECX));
  /* 114cf596 call 0x114cfbd0 */
  push32(0x114cf59bu); f_114cfbd0();
  /* 114cf59b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cf59e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 114cf5a1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114cf5a2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 114cf5a8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 114cf5ae jmp 0x114cf5ce */
  goto L_114cf5ce;
L_114cf5b0:;
  /* 114cf5b0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 114cf5b3 push edx */
  push32((uint32_t)(EDX));
  /* 114cf5b4 call 0x114cfbd0 */
  push32(0x114cf5b9u); f_114cfbd0();
  /* 114cf5b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cf5bc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114cf5c1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114cf5c2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 114cf5c8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_114cf5ce:;
  /* 114cf5ce jmp 0x114cf60f */
  goto L_114cf60f;
L_114cf5d0:;
  /* 114cf5d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cf5d3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 114cf5d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cf5d8 je 0x114cf5f5 */
  if (C.zf) goto L_114cf5f5;
  /* 114cf5da lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 114cf5dd push ecx */
  push32((uint32_t)(ECX));
  /* 114cf5de call 0x114cfbd0 */
  push32(0x114cf5e3u); f_114cfbd0();
  /* 114cf5e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cf5e6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114cf5e7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 114cf5ed mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 114cf5f3 jmp 0x114cf60f */
  goto L_114cf60f;
L_114cf5f5:;
  /* 114cf5f5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 114cf5f8 push edx */
  push32((uint32_t)(EDX));
  /* 114cf5f9 call 0x114cfbd0 */
  push32(0x114cf5feu); f_114cfbd0();
  /* 114cf5fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cf601 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114cf603 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 114cf609 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_114cf60f:;
  /* 114cf60f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cf612 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 114cf615 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cf617 je 0x114cf657 */
  if (C.zf) goto L_114cf657;
  /* 114cf619 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cf620 jg 0x114cf657 */
  if ((!C.zf&&C.sf==C.of)) goto L_114cf657;
  /* 114cf622 jl 0x114cf62d */
  if ((C.sf!=C.of)) goto L_114cf62d;
  /* 114cf624 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cf62b jae 0x114cf657 */
  if (!C.cf) goto L_114cf657;
L_114cf62d:;
  /* 114cf62d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 114cf633 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 114cf635 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 114cf63b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cf63e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 114cf640 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 114cf646 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 114cf64c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cf64f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 114cf652 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114cf655 jmp 0x114cf66f */
  goto L_114cf66f;
L_114cf657:;
  /* 114cf657 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 114cf65d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 114cf663 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 114cf669 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_114cf66f:;
  /* 114cf66f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cf672 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 114cf678 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cf67a jne 0x114cf697 */
  if (!C.zf) goto L_114cf697;
  /* 114cf67c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 114cf682 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 114cf688 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 114cf68b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 114cf691 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_114cf697:;
  /* 114cf697 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cf69e jge 0x114cf6ac */
  if ((C.sf==C.of)) goto L_114cf6ac;
  /* 114cf6a0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 114cf6aa jmp 0x114cf6b5 */
  goto L_114cf6b5;
L_114cf6ac:;
  /* 114cf6ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cf6af and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 114cf6b2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_114cf6b5:;
  /* 114cf6b5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 114cf6bb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 114cf6c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cf6c3 jne 0x114cf6cc */
  if (!C.zf) goto L_114cf6cc;
  /* 114cf6c5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_114cf6cc:;
  /* 114cf6cc lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 114cf6cf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_114cf6d2:;
  /* 114cf6d2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 114cf6d8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 114cf6de sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cf6e1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 114cf6e7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cf6e9 jg 0x114cf6ff */
  if ((!C.zf&&C.sf==C.of)) goto L_114cf6ff;
  /* 114cf6eb mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 114cf6f1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 114cf6f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114cf6f9 je 0x114cf780 */
  if (C.zf) goto L_114cf780;
L_114cf6ff:;
  /* 114cf6ff mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 114cf705 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114cf706 push edx */
  push32((uint32_t)(EDX));
  /* 114cf707 push eax */
  push32((uint32_t)(EAX));
  /* 114cf708 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 114cf70e push edx */
  push32((uint32_t)(EDX));
  /* 114cf70f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 114cf715 push eax */
  push32((uint32_t)(EAX));
  /* 114cf716 call 0x114d61a0 */
  push32(0x114cf71bu); f_114d61a0();
  /* 114cf71b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cf71e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 114cf724 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 114cf72a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114cf72b push edx */
  push32((uint32_t)(EDX));
  /* 114cf72c push eax */
  push32((uint32_t)(EAX));
  /* 114cf72d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 114cf733 push ecx */
  push32((uint32_t)(ECX));
  /* 114cf734 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 114cf73a push edx */
  push32((uint32_t)(EDX));
  /* 114cf73b call 0x114d6130 */
  push32(0x114cf740u); f_114d6130();
  /* 114cf740 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 114cf746 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 114cf74c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cf753 jle 0x114cf767 */
  if ((C.zf||C.sf!=C.of)) goto L_114cf767;
  /* 114cf755 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 114cf75b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cf761 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_114cf767:;
  /* 114cf767 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114cf76a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 114cf770 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 114cf772 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 114cf775 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cf778 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 114cf77b jmp 0x114cf6d2 */
  goto L_114cf6d2;
L_114cf780:;
  /* 114cf780 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 114cf783 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cf786 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 114cf789 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 114cf78c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cf78f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 114cf792 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cf795 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 114cf79a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cf79c je 0x114cf7c7 */
  if (C.zf) goto L_114cf7c7;
  /* 114cf79e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114cf7a1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114cf7a4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cf7a7 jne 0x114cf7af */
  if (!C.zf) goto L_114cf7af;
  /* 114cf7a9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cf7ad jne 0x114cf7c7 */
  if (!C.zf) goto L_114cf7c7;
L_114cf7af:;
  /* 114cf7af mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 114cf7b2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cf7b5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 114cf7b8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114cf7bb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 114cf7be mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 114cf7c1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cf7c4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_114cf7c7:;
  /* 114cf7c7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cf7ce jne 0x114cf9a2 */
  if (!C.zf) goto L_114cf9a2;
  /* 114cf7d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cf7d7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 114cf7da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cf7dc je 0x114cf82d */
  if (C.zf) goto L_114cf82d;
  /* 114cf7de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cf7e1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 114cf7e7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114cf7e9 je 0x114cf7fb */
  if (C.zf) goto L_114cf7fb;
  /* 114cf7eb mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 114cf7f2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 114cf7f9 jmp 0x114cf82d */
  goto L_114cf82d;
L_114cf7fb:;
  /* 114cf7fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cf7fe and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 114cf801 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cf803 je 0x114cf815 */
  if (C.zf) goto L_114cf815;
  /* 114cf805 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 114cf80c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 114cf813 jmp 0x114cf82d */
  goto L_114cf82d;
L_114cf815:;
  /* 114cf815 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cf818 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 114cf81b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cf81d je 0x114cf82d */
  if (C.zf) goto L_114cf82d;
  /* 114cf81f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 114cf826 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_114cf82d:;
  /* 114cf82d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 114cf833 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cf836 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cf839 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 114cf83f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cf842 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 114cf845 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cf847 jne 0x114cf865 */
  if (!C.zf) goto L_114cf865;
  /* 114cf849 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 114cf84f push eax */
  push32((uint32_t)(EAX));
  /* 114cf850 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cf853 push ecx */
  push32((uint32_t)(ECX));
  /* 114cf854 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 114cf85a push edx */
  push32((uint32_t)(EDX));
  /* 114cf85b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 114cf85d call 0x114cfb40 */
  push32(0x114cf862u); f_114cfb40();
  /* 114cf862 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114cf865:;
  /* 114cf865 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 114cf86b push eax */
  push32((uint32_t)(EAX));
  /* 114cf86c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cf86f push ecx */
  push32((uint32_t)(ECX));
  /* 114cf870 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114cf873 push edx */
  push32((uint32_t)(EDX));
  /* 114cf874 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 114cf87a push eax */
  push32((uint32_t)(EAX));
  /* 114cf87b call 0x114cfb80 */
  push32(0x114cf880u); f_114cfb80();
  /* 114cf880 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cf883 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cf886 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 114cf889 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114cf88b je 0x114cf8b3 */
  if (C.zf) goto L_114cf8b3;
  /* 114cf88d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cf890 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 114cf893 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cf895 jne 0x114cf8b3 */
  if (!C.zf) goto L_114cf8b3;
  /* 114cf897 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 114cf89d push eax */
  push32((uint32_t)(EAX));
  /* 114cf89e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cf8a1 push ecx */
  push32((uint32_t)(ECX));
  /* 114cf8a2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 114cf8a8 push edx */
  push32((uint32_t)(EDX));
  /* 114cf8a9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 114cf8ab call 0x114cfb40 */
  push32(0x114cf8b0u); f_114cfb40();
  /* 114cf8b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114cf8b3:;
  /* 114cf8b3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cf8b7 je 0x114cf961 */
  if (C.zf) goto L_114cf961;
  /* 114cf8bd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cf8c1 jle 0x114cf961 */
  if ((C.zf||C.sf!=C.of)) goto L_114cf961;
  /* 114cf8c7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 114cf8ca mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 114cf8d0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114cf8d3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_114cf8d9:;
  /* 114cf8d9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 114cf8df mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 114cf8e5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cf8e8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 114cf8ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cf8f0 je 0x114cf95f */
  if (C.zf) goto L_114cf95f;
  /* 114cf8f2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 114cf8f8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 114cf8fb mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 114cf902 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 114cf909 push eax */
  push32((uint32_t)(EAX));
  /* 114cf90a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 114cf910 push ecx */
  push32((uint32_t)(ECX));
  /* 114cf911 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 114cf917 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cf91a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 114cf920 call 0x114d6010 */
  push32(0x114cf925u); f_114d6010();
  /* 114cf925 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cf928 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 114cf92e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cf935 jg 0x114cf939 */
  if ((!C.zf&&C.sf==C.of)) goto L_114cf939;
  /* 114cf937 jmp 0x114cf95f */
  goto L_114cf95f;
L_114cf939:;
  /* 114cf939 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 114cf93f push eax */
  push32((uint32_t)(EAX));
  /* 114cf940 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cf943 push ecx */
  push32((uint32_t)(ECX));
  /* 114cf944 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 114cf94a push edx */
  push32((uint32_t)(EDX));
  /* 114cf94b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 114cf951 push eax */
  push32((uint32_t)(EAX));
  /* 114cf952 call 0x114cfb80 */
  push32(0x114cf957u); f_114cfb80();
  /* 114cf957 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cf95a jmp 0x114cf8d9 */
  goto L_114cf8d9;
L_114cf95f:;
  /* 114cf95f jmp 0x114cf97c */
  goto L_114cf97c;
L_114cf961:;
  /* 114cf961 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 114cf967 push ecx */
  push32((uint32_t)(ECX));
  /* 114cf968 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cf96b push edx */
  push32((uint32_t)(EDX));
  /* 114cf96c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 114cf96f push eax */
  push32((uint32_t)(EAX));
  /* 114cf970 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114cf973 push ecx */
  push32((uint32_t)(ECX));
  /* 114cf974 call 0x114cfb80 */
  push32(0x114cf979u); f_114cfb80();
  /* 114cf979 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114cf97c:;
  /* 114cf97c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cf97f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 114cf982 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114cf984 je 0x114cf9a2 */
  if (C.zf) goto L_114cf9a2;
  /* 114cf986 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 114cf98c push eax */
  push32((uint32_t)(EAX));
  /* 114cf98d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cf990 push ecx */
  push32((uint32_t)(ECX));
  /* 114cf991 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 114cf997 push edx */
  push32((uint32_t)(EDX));
  /* 114cf998 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 114cf99a call 0x114cfb40 */
  push32(0x114cf99fu); f_114cfb40();
  /* 114cf99f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114cf9a2:;
  /* 114cf9a2 jmp 0x114cedb4 */
  goto L_114cedb4;
L_114cf9a7:;
  /* 114cf9a7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 114cf9ad pop edi */
  EDI = (pop32());
  /* 114cf9ae pop esi */
  ESI = (pop32());
  /* 114cf9af pop ebx */
  EBX = (pop32());
  /* 114cf9b0 mov esp, ebp */
  ESP = (EBP);
  /* 114cf9b2 pop ebp */
  EBP = (pop32());
  /* 114cf9b3 ret  */
  ESPCHK(0x114ced90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fac0 @ 0x114cfac0 (119 bytes, 44 insns) */
void f_114cfac0(void) {
  FTRACE(0x114cfac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cfac0 push ebp */
  push32((uint32_t)(EBP));
  /* 114cfac1 mov ebp, esp */
  EBP = (ESP);
  /* 114cfac3 push ecx */
  push32((uint32_t)(ECX));
  /* 114cfac4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cfac7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114cfaca sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cfacd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cfad0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 114cfad3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cfad6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cfada jl 0x114cfb02 */
  if ((C.sf!=C.of)) goto L_114cfb02;
  /* 114cfadc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cfadf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114cfae1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 114cfae4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 114cfae6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 114cfaea and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 114cfaf0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114cfaf3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cfaf6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114cfaf8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cfafb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cfafe mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 114cfb00 jmp 0x114cfb15 */
  goto L_114cfb15;
L_114cfb02:;
  /* 114cfb02 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cfb05 push edx */
  push32((uint32_t)(EDX));
  /* 114cfb06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cfb09 push eax */
  push32((uint32_t)(EAX));
  /* 114cfb0a call 0x114ceb10 */
  push32(0x114cfb0fu); f_114ceb10();
  /* 114cfb0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cfb12 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114cfb15:;
  /* 114cfb15 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cfb19 jne 0x114cfb26 */
  if (!C.zf) goto L_114cfb26;
  /* 114cfb1b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cfb1e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 114cfb24 jmp 0x114cfb33 */
  goto L_114cfb33;
L_114cfb26:;
  /* 114cfb26 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cfb29 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114cfb2b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cfb2e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cfb31 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_114cfb33:;
  /* 114cfb33 mov esp, ebp */
  ESP = (EBP);
  /* 114cfb35 pop ebp */
  EBP = (pop32());
  /* 114cfb36 ret  */
  ESPCHK(0x114cfac0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb40 @ 0x114cfb40 (53 bytes, 23 insns) */
void f_114cfb40(void) {
  FTRACE(0x114cfb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cfb40 push ebp */
  push32((uint32_t)(EBP));
  /* 114cfb41 mov ebp, esp */
  EBP = (ESP);
L_114cfb43:;
  /* 114cfb43 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cfb46 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cfb49 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cfb4c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 114cfb4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cfb51 jle 0x114cfb73 */
  if ((C.zf||C.sf!=C.of)) goto L_114cfb73;
  /* 114cfb53 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114cfb56 push edx */
  push32((uint32_t)(EDX));
  /* 114cfb57 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cfb5a push eax */
  push32((uint32_t)(EAX));
  /* 114cfb5b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cfb5e push ecx */
  push32((uint32_t)(ECX));
  /* 114cfb5f call 0x114cfac0 */
  push32(0x114cfb64u); f_114cfac0();
  /* 114cfb64 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cfb67 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114cfb6a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cfb6d jne 0x114cfb71 */
  if (!C.zf) goto L_114cfb71;
  /* 114cfb6f jmp 0x114cfb73 */
  goto L_114cfb73;
L_114cfb71:;
  /* 114cfb71 jmp 0x114cfb43 */
  goto L_114cfb43;
L_114cfb73:;
  /* 114cfb73 pop ebp */
  EBP = (pop32());
  /* 114cfb74 ret  */
  ESPCHK(0x114cfb40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb80 @ 0x114cfb80 (74 bytes, 31 insns) */
void f_114cfb80(void) {
  FTRACE(0x114cfb80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114cfb80 push ebp */
  push32((uint32_t)(EBP));
  /* 114cfb81 mov ebp, esp */
  EBP = (ESP);
  /* 114cfb83 push ecx */
  push32((uint32_t)(ECX));
L_114cfb84:;
  /* 114cfb84 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cfb87 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114cfb8a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114cfb8d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 114cfb90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114cfb92 jle 0x114cfbc6 */
  if ((C.zf||C.sf!=C.of)) goto L_114cfbc6;
  /* 114cfb94 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114cfb97 push edx */
  push32((uint32_t)(EDX));
  /* 114cfb98 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114cfb9b push eax */
  push32((uint32_t)(EAX));
  /* 114cfb9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cfb9f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114cfba2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114cfba5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114cfba8 push eax */
  push32((uint32_t)(EAX));
  /* 114cfba9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114cfbac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114cfbaf mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 114cfbb2 call 0x114cfac0 */
  push32(0x114cfbb7u); f_114cfac0();
  /* 114cfbb7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114cfbba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114cfbbd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114cfbc0 jne 0x114cfbc4 */
  if (!C.zf) goto L_114cfbc4;
  /* 114cfbc2 jmp 0x114cfbc6 */
  goto L_114cfbc6;
L_114cfbc4:;
  /* 114cfbc4 jmp 0x114cfb84 */
  goto L_114cfb84;
L_114cfbc6:;
  /* 114cfbc6 mov esp, ebp */
  ESP = (EBP);
  /* 114cfbc8 pop ebp */
  EBP = (pop32());
  /* 114cfbc9 ret  */
  ESPCHK(0x114cfb80u, _esp0);
  ESP += 4; return;
}

