#include "recomp.h"

/* FUN_10014c40 @ 0x116a4c40 (43 bytes, 16 insns) */
void f_116a4c40(void) {
  FTRACE(0x116a4c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a4c40 push ebp */
  push32((uint32_t)(EBP));
  /* 116a4c41 mov ebp, esp */
  EBP = (ESP);
  /* 116a4c43 push ecx */
  push32((uint32_t)(ECX));
  /* 116a4c44 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 116a4c4b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a4c4e push eax */
  push32((uint32_t)(EAX));
  /* 116a4c4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a4c52 push ecx */
  push32((uint32_t)(ECX));
  /* 116a4c53 call dword ptr [0x116d3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3408))), 0x116a4c59u);
  /* 116a4c59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a4c5b je 0x116a4c64 */
  if (C.zf) goto L_116a4c64;
  /* 116a4c5d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_116a4c64:;
  /* 116a4c64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a4c67 mov esp, ebp */
  ESP = (EBP);
  /* 116a4c69 pop ebp */
  EBP = (pop32());
  /* 116a4c6a ret  */
  ESPCHK(0x116a4c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10014c70 @ 0x116a4c70 (43 bytes, 16 insns) */
void f_116a4c70(void) {
  FTRACE(0x116a4c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a4c70 push ebp */
  push32((uint32_t)(EBP));
  /* 116a4c71 mov ebp, esp */
  EBP = (ESP);
  /* 116a4c73 push ecx */
  push32((uint32_t)(ECX));
  /* 116a4c74 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 116a4c7b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a4c7e push eax */
  push32((uint32_t)(EAX));
  /* 116a4c7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a4c82 push ecx */
  push32((uint32_t)(ECX));
  /* 116a4c83 call dword ptr [0x116d340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d340c))), 0x116a4c89u);
  /* 116a4c89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a4c8b je 0x116a4c94 */
  if (C.zf) goto L_116a4c94;
  /* 116a4c8d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_116a4c94:;
  /* 116a4c94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a4c97 mov esp, ebp */
  ESP = (EBP);
  /* 116a4c99 pop ebp */
  EBP = (pop32());
  /* 116a4c9a ret  */
  ESPCHK(0x116a4c70u, _esp0);
  ESP += 4; return;
}

/* _ValidateExecute @ 0x116a4ca0 (39 bytes, 14 insns) */
void f_116a4ca0(void) {
  FTRACE(0x116a4ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a4ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a4ca1 mov ebp, esp */
  EBP = (ESP);
  /* 116a4ca3 push ecx */
  push32((uint32_t)(ECX));
  /* 116a4ca4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 116a4cab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a4cae push eax */
  push32((uint32_t)(EAX));
  /* 116a4caf call dword ptr [0x116d3394] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3394))), 0x116a4cb5u);
  /* 116a4cb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a4cb7 je 0x116a4cc0 */
  if (C.zf) goto L_116a4cc0;
  /* 116a4cb9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_116a4cc0:;
  /* 116a4cc0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a4cc3 mov esp, ebp */
  ESP = (EBP);
  /* 116a4cc5 pop ebp */
  EBP = (pop32());
  /* 116a4cc6 ret  */
  ESPCHK(0x116a4ca0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x116a4cd0 (129 bytes, 56 insns) */
void f_116a4cd0(void) {
  FTRACE(0x116a4cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a4cd0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 116a4cd4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 116a4cd8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 116a4cde jne 0x116a4d1c */
  if (!C.zf) goto L_116a4d1c;
L_116a4ce0:;
  /* 116a4ce0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116a4ce2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116a4ce4 jne 0x116a4d14 */
  if (!C.zf) goto L_116a4d14;
  /* 116a4ce6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 116a4ce8 je 0x116a4d10 */
  if (C.zf) goto L_116a4d10;
  /* 116a4cea cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116a4ced jne 0x116a4d14 */
  if (!C.zf) goto L_116a4d14;
  /* 116a4cef or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 116a4cf1 je 0x116a4d10 */
  if (C.zf) goto L_116a4d10;
  /* 116a4cf3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 116a4cf6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116a4cf9 jne 0x116a4d14 */
  if (!C.zf) goto L_116a4d14;
  /* 116a4cfb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 116a4cfd je 0x116a4d10 */
  if (C.zf) goto L_116a4d10;
  /* 116a4cff cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116a4d02 jne 0x116a4d14 */
  if (!C.zf) goto L_116a4d14;
  /* 116a4d04 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4d07 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4d0a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 116a4d0c jne 0x116a4ce0 */
  if (!C.zf) goto L_116a4ce0;
  /* 116a4d0e mov edi, edi */
  EDI = (EDI);
L_116a4d10:;
  /* 116a4d10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a4d12 ret  */
  ESPCHK(0x116a4cd0u, _esp0);
  ESP += 4; return;
  /* 116a4d13 nop  */
  /* nop */
L_116a4d14:;
  /* 116a4d14 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a4d16 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 116a4d18 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 116a4d19 ret  */
  ESPCHK(0x116a4cd0u, _esp0);
  ESP += 4; return;
  /* 116a4d1a mov edi, edi */
  EDI = (EDI);
L_116a4d1c:;
  /* 116a4d1c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 116a4d22 je 0x116a4d38 */
  if (C.zf) goto L_116a4d38;
  /* 116a4d24 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116a4d26 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 116a4d27 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116a4d29 jne 0x116a4d14 */
  if (!C.zf) goto L_116a4d14;
  /* 116a4d2b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 116a4d2c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 116a4d2e je 0x116a4d10 */
  if (C.zf) goto L_116a4d10;
  /* 116a4d30 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 116a4d36 je 0x116a4ce0 */
  if (C.zf) goto L_116a4ce0;
L_116a4d38:;
  /* 116a4d38 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 116a4d3b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4d3e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116a4d40 jne 0x116a4d14 */
  if (!C.zf) goto L_116a4d14;
  /* 116a4d42 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 116a4d44 je 0x116a4d10 */
  if (C.zf) goto L_116a4d10;
  /* 116a4d46 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116a4d49 jne 0x116a4d14 */
  if (!C.zf) goto L_116a4d14;
  /* 116a4d4b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 116a4d4d je 0x116a4d10 */
  if (C.zf) goto L_116a4d10;
  /* 116a4d4f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4d52 jmp 0x116a4ce0 */
  goto L_116a4ce0;
}

/* FUN_10014e19 @ 0x116a4e19 (27 bytes, 11 insns) */
void f_116a4e19(void) {
  FTRACE(0x116a4e19u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a4e19 push ebp */
  push32((uint32_t)(EBP));
  /* 116a4e1a mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 116a4e1e mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 116a4e20 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 116a4e23 push eax */
  push32((uint32_t)(EAX));
  /* 116a4e24 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 116a4e27 push eax */
  push32((uint32_t)(EAX));
  /* 116a4e28 call 0x1169a5a2 */
  push32(0x116a4e2du); f_1169a5a2();
  /* 116a4e2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4e30 pop ebp */
  EBP = (pop32());
  /* 116a4e31 ret 4 */
  ESPCHK(0x116a4e19u, _esp0);
  ESP += 8; return;
}

/* __XcptFilter @ 0x116a4e40 (446 bytes, 130 insns) */
void f_116a4e40(void) {
  FTRACE(0x116a4e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a4e40 push ebp */
  push32((uint32_t)(EBP));
  /* 116a4e41 mov ebp, esp */
  EBP = (ESP);
  /* 116a4e43 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a4e46 call 0x1169ef20 */
  push32(0x116a4e4bu); f_1169ef20();
  /* 116a4e4b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116a4e4e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a4e51 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 116a4e54 push ecx */
  push32((uint32_t)(ECX));
  /* 116a4e55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a4e58 push edx */
  push32((uint32_t)(EDX));
  /* 116a4e59 call 0x116a5000 */
  push32(0x116a4e5eu); f_116a5000();
  /* 116a4e5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4e61 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116a4e64 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4e68 je 0x116a4e73 */
  if (C.zf) goto L_116a4e73;
  /* 116a4e6a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a4e6d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4e71 jne 0x116a4e82 */
  if (!C.zf) goto L_116a4e82;
L_116a4e73:;
  /* 116a4e73 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a4e76 push ecx */
  push32((uint32_t)(ECX));
  /* 116a4e77 call dword ptr [0x116d3390] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3390))), 0x116a4e7du);
  /* 116a4e7d jmp 0x116a4ffa */
  goto L_116a4ffa;
L_116a4e82:;
  /* 116a4e82 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a4e85 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4e89 jne 0x116a4e9f */
  if (!C.zf) goto L_116a4e9f;
  /* 116a4e8b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a4e8e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 116a4e95 mov eax, 1 */
  EAX = (0x1u);
  /* 116a4e9a jmp 0x116a4ffa */
  goto L_116a4ffa;
L_116a4e9f:;
  /* 116a4e9f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a4ea2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4ea6 jne 0x116a4eb0 */
  if (!C.zf) goto L_116a4eb0;
  /* 116a4ea8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116a4eab jmp 0x116a4ffa */
  goto L_116a4ffa;
L_116a4eb0:;
  /* 116a4eb0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a4eb3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 116a4eb6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a4eb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a4ebc mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 116a4ebf mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 116a4ec2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a4ec5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a4ec8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 116a4ecb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a4ece cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4ed2 jne 0x116a4fd7 */
  if (!C.zf) goto L_116a4fd7;
  /* 116a4ed8 mov eax, dword ptr [0x116ce538] */
  EAX = (r32((uint32_t)(0x116ce538)));
  /* 116a4edd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116a4ee0 jmp 0x116a4eeb */
  goto L_116a4eeb;
L_116a4ee2:;
  /* 116a4ee2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a4ee5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4ee8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_116a4eeb:;
  /* 116a4eeb mov edx, dword ptr [0x116ce538] */
  EDX = (r32((uint32_t)(0x116ce538)));
  /* 116a4ef1 add edx, dword ptr [0x116ce53c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x116ce53c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4ef7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4efa jge 0x116a4f12 */
  if ((C.sf==C.of)) goto L_116a4f12;
  /* 116a4efc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a4eff imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a4f02 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a4f05 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 116a4f08 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 116a4f10 jmp 0x116a4ee2 */
  goto L_116a4ee2;
L_116a4f12:;
  /* 116a4f12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a4f15 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 116a4f18 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116a4f1b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a4f1e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4f24 jne 0x116a4f35 */
  if (!C.zf) goto L_116a4f35;
  /* 116a4f26 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a4f29 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 116a4f30 jmp 0x116a4fbd */
  goto L_116a4fbd;
L_116a4f35:;
  /* 116a4f35 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a4f38 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4f3e jne 0x116a4f4c */
  if (!C.zf) goto L_116a4f4c;
  /* 116a4f40 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a4f43 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 116a4f4a jmp 0x116a4fbd */
  goto L_116a4fbd;
L_116a4f4c:;
  /* 116a4f4c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a4f4f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4f55 jne 0x116a4f63 */
  if (!C.zf) goto L_116a4f63;
  /* 116a4f57 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a4f5a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 116a4f61 jmp 0x116a4fbd */
  goto L_116a4fbd;
L_116a4f63:;
  /* 116a4f63 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a4f66 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4f6c jne 0x116a4f7a */
  if (!C.zf) goto L_116a4f7a;
  /* 116a4f6e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a4f71 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 116a4f78 jmp 0x116a4fbd */
  goto L_116a4fbd;
L_116a4f7a:;
  /* 116a4f7a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a4f7d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4f83 jne 0x116a4f91 */
  if (!C.zf) goto L_116a4f91;
  /* 116a4f85 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a4f88 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 116a4f8f jmp 0x116a4fbd */
  goto L_116a4fbd;
L_116a4f91:;
  /* 116a4f91 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a4f94 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4f9a jne 0x116a4fa8 */
  if (!C.zf) goto L_116a4fa8;
  /* 116a4f9c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a4f9f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 116a4fa6 jmp 0x116a4fbd */
  goto L_116a4fbd;
L_116a4fa8:;
  /* 116a4fa8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a4fab cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4fb1 jne 0x116a4fbd */
  if (!C.zf) goto L_116a4fbd;
  /* 116a4fb3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a4fb6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_116a4fbd:;
  /* 116a4fbd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a4fc0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 116a4fc3 push edx */
  push32((uint32_t)(EDX));
  /* 116a4fc4 push 8 */
  push32((uint32_t)(0x8u));
  /* 116a4fc6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x116a4fc9u);
  /* 116a4fc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4fcc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a4fcf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a4fd2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 116a4fd5 jmp 0x116a4fee */
  goto L_116a4fee;
L_116a4fd7:;
  /* 116a4fd7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a4fda mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 116a4fe1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a4fe4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116a4fe7 push ecx */
  push32((uint32_t)(ECX));
  /* 116a4fe8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x116a4febu);
  /* 116a4feb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a4fee:;
  /* 116a4fee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a4ff1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a4ff4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 116a4ff7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_116a4ffa:;
  /* 116a4ffa mov esp, ebp */
  ESP = (EBP);
  /* 116a4ffc pop ebp */
  EBP = (pop32());
  /* 116a4ffd ret  */
  ESPCHK(0x116a4e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10015000 @ 0x116a5000 (89 bytes, 35 insns) */
void f_116a5000(void) {
  FTRACE(0x116a5000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a5000 push ebp */
  push32((uint32_t)(EBP));
  /* 116a5001 mov ebp, esp */
  EBP = (ESP);
  /* 116a5003 push ecx */
  push32((uint32_t)(ECX));
  /* 116a5004 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a5007 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116a500a:;
  /* 116a500a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a500d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a500f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5012 je 0x116a5032 */
  if (C.zf) goto L_116a5032;
  /* 116a5014 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a5017 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a501a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a501d mov ecx, dword ptr [0x116ce544] */
  ECX = (r32((uint32_t)(0x116ce544)));
  /* 116a5023 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a5026 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a5029 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a502b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a502e jae 0x116a5032 */
  if (!C.cf) goto L_116a5032;
  /* 116a5030 jmp 0x116a500a */
  goto L_116a500a;
L_116a5032:;
  /* 116a5032 mov eax, dword ptr [0x116ce544] */
  EAX = (r32((uint32_t)(0x116ce544)));
  /* 116a5037 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a503a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a503d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a503f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5042 jae 0x116a504e */
  if (!C.cf) goto L_116a504e;
  /* 116a5044 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a5047 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116a5049 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a504c je 0x116a5052 */
  if (C.zf) goto L_116a5052;
L_116a504e:;
  /* 116a504e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a5050 jmp 0x116a5055 */
  goto L_116a5055;
L_116a5052:;
  /* 116a5052 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_116a5055:;
  /* 116a5055 mov esp, ebp */
  ESP = (EBP);
  /* 116a5057 pop ebp */
  EBP = (pop32());
  /* 116a5058 ret  */
  ESPCHK(0x116a5000u, _esp0);
  ESP += 4; return;
}

/* _abort @ 0x116a5060 (30 bytes, 12 insns) */
void f_116a5060(void) {
  FTRACE(0x116a5060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a5060 push ebp */
  push32((uint32_t)(EBP));
  /* 116a5061 mov ebp, esp */
  EBP = (ESP);
  /* 116a5063 push 0xa */
  push32((uint32_t)(0xau));
  /* 116a5065 call 0x116a02b0 */
  push32(0x116a506au); f_116a02b0();
  /* 116a506a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a506d push 0x16 */
  push32((uint32_t)(0x16u));
  /* 116a506f call 0x116a0d30 */
  push32(0x116a5074u); f_116a0d30();
  /* 116a5074 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5077 push 3 */
  push32((uint32_t)(0x3u));
  /* 116a5079 call 0x1169f290 */
  push32(0x116a507eu); f_1169f290();
  /* 116a507e pop ebp */
  EBP = (pop32());
  /* 116a507f ret  */
  ESPCHK(0x116a5060u, _esp0);
  ESP += 4; return;
}

/* FUN_10015080 @ 0x116a5080 (61 bytes, 18 insns) */
void f_116a5080(void) {
  FTRACE(0x116a5080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a5080 push ebp */
  push32((uint32_t)(EBP));
  /* 116a5081 mov ebp, esp */
  EBP = (ESP);
  /* 116a5083 cmp dword ptr [0x116d0808], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0808))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a508a jne 0x116a50bb */
  if (!C.zf) goto L_116a50bb;
  /* 116a508c push 0xb */
  push32((uint32_t)(0xbu));
  /* 116a508e call 0x1169c120 */
  push32(0x116a5093u); f_1169c120();
  /* 116a5093 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5096 cmp dword ptr [0x116d0808], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0808))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a509d jne 0x116a50b1 */
  if (!C.zf) goto L_116a50b1;
  /* 116a509f call 0x116a50e0 */
  push32(0x116a50a4u); f_116a50e0();
  /* 116a50a4 mov eax, dword ptr [0x116d0808] */
  EAX = (r32((uint32_t)(0x116d0808)));
  /* 116a50a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a50ac mov dword ptr [0x116d0808], eax */
  w32((uint32_t)(0x116d0808), (EAX));
L_116a50b1:;
  /* 116a50b1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 116a50b3 call 0x1169c1c0 */
  push32(0x116a50b8u); f_1169c1c0();
  /* 116a50b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a50bb:;
  /* 116a50bb pop ebp */
  EBP = (pop32());
  /* 116a50bc ret  */
  ESPCHK(0x116a5080u, _esp0);
  ESP += 4; return;
}

/* FUN_100150c0 @ 0x116a50c0 (30 bytes, 11 insns) */
void f_116a50c0(void) {
  FTRACE(0x116a50c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a50c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a50c1 mov ebp, esp */
  EBP = (ESP);
  /* 116a50c3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 116a50c5 call 0x1169c120 */
  push32(0x116a50cau); f_1169c120();
  /* 116a50ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a50cd call 0x116a50e0 */
  push32(0x116a50d2u); f_116a50e0();
  /* 116a50d2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 116a50d4 call 0x1169c1c0 */
  push32(0x116a50d9u); f_1169c1c0();
  /* 116a50d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a50dc pop ebp */
  EBP = (pop32());
  /* 116a50dd ret  */
  ESPCHK(0x116a50c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100150e0 @ 0x116a50e0 (939 bytes, 266 insns) */
void f_116a50e0(void) {
  FTRACE(0x116a50e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a50e0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a50e1 mov ebp, esp */
  EBP = (ESP);
  /* 116a50e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a50e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116a50ed push 0xc */
  push32((uint32_t)(0xcu));
  /* 116a50ef call 0x1169c120 */
  push32(0x116a50f4u); f_1169c120();
  /* 116a50f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a50f7 mov dword ptr [0x116d0750], 0 */
  w32((uint32_t)(0x116d0750), (0x0u));
  /* 116a5101 mov dword ptr [0x116ce5f0], 0xffffffff */
  w32((uint32_t)(0x116ce5f0), (0xffffffffu));
  /* 116a510b mov eax, dword ptr [0x116ce5f0] */
  EAX = (r32((uint32_t)(0x116ce5f0)));
  /* 116a5110 mov dword ptr [0x116ce5e0], eax */
  w32((uint32_t)(0x116ce5e0), (EAX));
  /* 116a5115 push 0x116cb7a0 */
  push32((uint32_t)(0x116cb7a0u));
  /* 116a511a call 0x116aaad0 */
  push32(0x116a511fu); f_116aaad0();
  /* 116a511f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5122 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116a5125 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5129 jne 0x116a5263 */
  if (!C.zf) goto L_116a5263;
  /* 116a512f push 0xc */
  push32((uint32_t)(0xcu));
  /* 116a5131 call 0x1169c1c0 */
  push32(0x116a5136u); f_1169c1c0();
  /* 116a5136 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5139 push 0x116d0758 */
  push32((uint32_t)(0x116d0758u));
  /* 116a513e call dword ptr [0x116d341c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d341c))), 0x116a5144u);
  /* 116a5144 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5147 je 0x116a525e */
  if (C.zf) goto L_116a525e;
  /* 116a514d mov dword ptr [0x116d0750], 1 */
  w32((uint32_t)(0x116d0750), (0x1u));
  /* 116a5157 mov ecx, dword ptr [0x116d0758] */
  ECX = (r32((uint32_t)(0x116d0758)));
  /* 116a515d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a5160 mov dword ptr [0x116ce548], ecx */
  w32((uint32_t)(0x116ce548), (ECX));
  /* 116a5166 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116a5168 mov dx, word ptr [0x116d079e] */
  DX = (r16((uint32_t)(0x116d079e)));
  /* 116a516f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a5171 je 0x116a5189 */
  if (C.zf) goto L_116a5189;
  /* 116a5173 mov eax, dword ptr [0x116d07ac] */
  EAX = (r32((uint32_t)(0x116d07ac)));
  /* 116a5178 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a517b mov ecx, dword ptr [0x116ce548] */
  ECX = (r32((uint32_t)(0x116ce548)));
  /* 116a5181 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5183 mov dword ptr [0x116ce548], ecx */
  w32((uint32_t)(0x116ce548), (ECX));
L_116a5189:;
  /* 116a5189 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116a518b mov dx, word ptr [0x116d07f2] */
  DX = (r16((uint32_t)(0x116d07f2)));
  /* 116a5192 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a5194 je 0x116a51be */
  if (C.zf) goto L_116a51be;
  /* 116a5196 cmp dword ptr [0x116d0800], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0800))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a519d je 0x116a51be */
  if (C.zf) goto L_116a51be;
  /* 116a519f mov dword ptr [0x116ce54c], 1 */
  w32((uint32_t)(0x116ce54c), (0x1u));
  /* 116a51a9 mov eax, dword ptr [0x116d0800] */
  EAX = (r32((uint32_t)(0x116d0800)));
  /* 116a51ae sub eax, dword ptr [0x116d07ac] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x116d07ac))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a51b4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a51b7 mov dword ptr [0x116ce550], eax */
  w32((uint32_t)(0x116ce550), (EAX));
  /* 116a51bc jmp 0x116a51d2 */
  goto L_116a51d2;
L_116a51be:;
  /* 116a51be mov dword ptr [0x116ce54c], 0 */
  w32((uint32_t)(0x116ce54c), (0x0u));
  /* 116a51c8 mov dword ptr [0x116ce550], 0 */
  w32((uint32_t)(0x116ce550), (0x0u));
L_116a51d2:;
  /* 116a51d2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 116a51d5 push ecx */
  push32((uint32_t)(ECX));
  /* 116a51d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a51d8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 116a51da mov edx, dword ptr [0x116ce5d4] */
  EDX = (r32((uint32_t)(0x116ce5d4)));
  /* 116a51e0 push edx */
  push32((uint32_t)(EDX));
  /* 116a51e1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 116a51e3 push 0x116d075c */
  push32((uint32_t)(0x116d075cu));
  /* 116a51e8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 116a51ed mov eax, dword ptr [0x116d0838] */
  EAX = (r32((uint32_t)(0x116d0838)));
  /* 116a51f2 push eax */
  push32((uint32_t)(EAX));
  /* 116a51f3 call dword ptr [0x116d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33c4))), 0x116a51f9u);
  /* 116a51f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a51fb je 0x116a520f */
  if (C.zf) goto L_116a520f;
  /* 116a51fd cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5201 jne 0x116a520f */
  if (!C.zf) goto L_116a520f;
  /* 116a5203 mov ecx, dword ptr [0x116ce5d4] */
  ECX = (r32((uint32_t)(0x116ce5d4)));
  /* 116a5209 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 116a520d jmp 0x116a5218 */
  goto L_116a5218;
L_116a520f:;
  /* 116a520f mov edx, dword ptr [0x116ce5d4] */
  EDX = (r32((uint32_t)(0x116ce5d4)));
  /* 116a5215 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_116a5218:;
  /* 116a5218 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 116a521b push eax */
  push32((uint32_t)(EAX));
  /* 116a521c push 0 */
  push32((uint32_t)(0x0u));
  /* 116a521e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 116a5220 mov ecx, dword ptr [0x116ce5d8] */
  ECX = (r32((uint32_t)(0x116ce5d8)));
  /* 116a5226 push ecx */
  push32((uint32_t)(ECX));
  /* 116a5227 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 116a5229 push 0x116d07b0 */
  push32((uint32_t)(0x116d07b0u));
  /* 116a522e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 116a5233 mov edx, dword ptr [0x116d0838] */
  EDX = (r32((uint32_t)(0x116d0838)));
  /* 116a5239 push edx */
  push32((uint32_t)(EDX));
  /* 116a523a call dword ptr [0x116d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33c4))), 0x116a5240u);
  /* 116a5240 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a5242 je 0x116a5255 */
  if (C.zf) goto L_116a5255;
  /* 116a5244 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5248 jne 0x116a5255 */
  if (!C.zf) goto L_116a5255;
  /* 116a524a mov eax, dword ptr [0x116ce5d8] */
  EAX = (r32((uint32_t)(0x116ce5d8)));
  /* 116a524f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 116a5253 jmp 0x116a525e */
  goto L_116a525e;
L_116a5255:;
  /* 116a5255 mov ecx, dword ptr [0x116ce5d8] */
  ECX = (r32((uint32_t)(0x116ce5d8)));
  /* 116a525b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_116a525e:;
  /* 116a525e jmp 0x116a5487 */
  goto L_116a5487;
L_116a5263:;
  /* 116a5263 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a5266 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116a5269 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a526b je 0x116a528d */
  if (C.zf) goto L_116a528d;
  /* 116a526d cmp dword ptr [0x116d0804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5274 je 0x116a529c */
  if (C.zf) goto L_116a529c;
  /* 116a5276 mov ecx, dword ptr [0x116d0804] */
  ECX = (r32((uint32_t)(0x116d0804)));
  /* 116a527c push ecx */
  push32((uint32_t)(ECX));
  /* 116a527d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a5280 push edx */
  push32((uint32_t)(EDX));
  /* 116a5281 call 0x116a4cd0 */
  push32(0x116a5286u); f_116a4cd0();
  /* 116a5286 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5289 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a528b jne 0x116a529c */
  if (!C.zf) goto L_116a529c;
L_116a528d:;
  /* 116a528d push 0xc */
  push32((uint32_t)(0xcu));
  /* 116a528f call 0x1169c1c0 */
  push32(0x116a5294u); f_1169c1c0();
  /* 116a5294 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5297 jmp 0x116a5487 */
  goto L_116a5487;
L_116a529c:;
  /* 116a529c push 2 */
  push32((uint32_t)(0x2u));
  /* 116a529e mov eax, dword ptr [0x116d0804] */
  EAX = (r32((uint32_t)(0x116d0804)));
  /* 116a52a3 push eax */
  push32((uint32_t)(EAX));
  /* 116a52a4 call 0x1169ccb0 */
  push32(0x116a52a9u); f_1169ccb0();
  /* 116a52a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a52ac push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 116a52b1 push 0x116cb798 */
  push32((uint32_t)(0x116cb798u));
  /* 116a52b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 116a52b8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a52bb push ecx */
  push32((uint32_t)(ECX));
  /* 116a52bc call 0x116a07b0 */
  push32(0x116a52c1u); f_116a07b0();
  /* 116a52c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a52c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a52c7 push eax */
  push32((uint32_t)(EAX));
  /* 116a52c8 call 0x1169c220 */
  push32(0x116a52cdu); f_1169c220();
  /* 116a52cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a52d0 mov dword ptr [0x116d0804], eax */
  w32((uint32_t)(0x116d0804), (EAX));
  /* 116a52d5 cmp dword ptr [0x116d0804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a52dc jne 0x116a52ed */
  if (!C.zf) goto L_116a52ed;
  /* 116a52de push 0xc */
  push32((uint32_t)(0xcu));
  /* 116a52e0 call 0x1169c1c0 */
  push32(0x116a52e5u); f_1169c1c0();
  /* 116a52e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a52e8 jmp 0x116a5487 */
  goto L_116a5487;
L_116a52ed:;
  /* 116a52ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a52f0 push edx */
  push32((uint32_t)(EDX));
  /* 116a52f1 mov eax, dword ptr [0x116d0804] */
  EAX = (r32((uint32_t)(0x116d0804)));
  /* 116a52f6 push eax */
  push32((uint32_t)(EAX));
  /* 116a52f7 call 0x1169a7d0 */
  push32(0x116a52fcu); f_1169a7d0();
  /* 116a52fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a52ff push 0xc */
  push32((uint32_t)(0xcu));
  /* 116a5301 call 0x1169c1c0 */
  push32(0x116a5306u); f_1169c1c0();
  /* 116a5306 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5309 push 3 */
  push32((uint32_t)(0x3u));
  /* 116a530b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a530e push ecx */
  push32((uint32_t)(ECX));
  /* 116a530f mov edx, dword ptr [0x116ce5d4] */
  EDX = (r32((uint32_t)(0x116ce5d4)));
  /* 116a5315 push edx */
  push32((uint32_t)(EDX));
  /* 116a5316 call 0x116a10b0 */
  push32(0x116a531bu); f_116a10b0();
  /* 116a531b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a531e mov eax, dword ptr [0x116ce5d4] */
  EAX = (r32((uint32_t)(0x116ce5d4)));
  /* 116a5323 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 116a5327 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a532a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a532d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116a5330 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a5333 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116a5336 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5339 jne 0x116a534d */
  if (!C.zf) goto L_116a534d;
  /* 116a533b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a533e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5341 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116a5344 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a5347 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a534a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_116a534d:;
  /* 116a534d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a5350 push eax */
  push32((uint32_t)(EAX));
  /* 116a5351 call 0x116aa850 */
  push32(0x116a5356u); f_116aa850();
  /* 116a5356 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5359 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a535f mov dword ptr [0x116ce548], eax */
  w32((uint32_t)(0x116ce548), (EAX));
L_116a5364:;
  /* 116a5364 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a5367 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116a536a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a536d je 0x116a5385 */
  if (C.zf) goto L_116a5385;
  /* 116a536f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a5372 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116a5375 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5378 jl 0x116a5390 */
  if ((C.sf!=C.of)) goto L_116a5390;
  /* 116a537a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a537d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116a5380 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5383 jg 0x116a5390 */
  if ((!C.zf&&C.sf==C.of)) goto L_116a5390;
L_116a5385:;
  /* 116a5385 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a5388 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a538b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116a538e jmp 0x116a5364 */
  goto L_116a5364;
L_116a5390:;
  /* 116a5390 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a5393 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116a5396 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5399 jne 0x116a5435 */
  if (!C.zf) goto L_116a5435;
  /* 116a539f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a53a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a53a5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116a53a8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a53ab push edx */
  push32((uint32_t)(EDX));
  /* 116a53ac call 0x116aa850 */
  push32(0x116a53b1u); f_116aa850();
  /* 116a53b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a53b4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a53b7 mov ecx, dword ptr [0x116ce548] */
  ECX = (r32((uint32_t)(0x116ce548)));
  /* 116a53bd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a53bf mov dword ptr [0x116ce548], ecx */
  w32((uint32_t)(0x116ce548), (ECX));
L_116a53c5:;
  /* 116a53c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a53c8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116a53cb cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a53ce jl 0x116a53e6 */
  if ((C.sf!=C.of)) goto L_116a53e6;
  /* 116a53d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a53d3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116a53d6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a53d9 jg 0x116a53e6 */
  if ((!C.zf&&C.sf==C.of)) goto L_116a53e6;
  /* 116a53db mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a53de add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a53e1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116a53e4 jmp 0x116a53c5 */
  goto L_116a53c5;
L_116a53e6:;
  /* 116a53e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a53e9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116a53ec cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a53ef jne 0x116a5435 */
  if (!C.zf) goto L_116a5435;
  /* 116a53f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a53f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a53f7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116a53fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a53fd push ecx */
  push32((uint32_t)(ECX));
  /* 116a53fe call 0x116aa850 */
  push32(0x116a5403u); f_116aa850();
  /* 116a5403 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5406 mov edx, dword ptr [0x116ce548] */
  EDX = (r32((uint32_t)(0x116ce548)));
  /* 116a540c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a540e mov dword ptr [0x116ce548], edx */
  w32((uint32_t)(0x116ce548), (EDX));
L_116a5414:;
  /* 116a5414 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a5417 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116a541a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a541d jl 0x116a5435 */
  if ((C.sf!=C.of)) goto L_116a5435;
  /* 116a541f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a5422 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116a5425 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5428 jg 0x116a5435 */
  if ((!C.zf&&C.sf==C.of)) goto L_116a5435;
  /* 116a542a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a542d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5430 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116a5433 jmp 0x116a5414 */
  goto L_116a5414;
L_116a5435:;
  /* 116a5435 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5439 je 0x116a5449 */
  if (C.zf) goto L_116a5449;
  /* 116a543b mov edx, dword ptr [0x116ce548] */
  EDX = (r32((uint32_t)(0x116ce548)));
  /* 116a5441 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 116a5443 mov dword ptr [0x116ce548], edx */
  w32((uint32_t)(0x116ce548), (EDX));
L_116a5449:;
  /* 116a5449 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a544c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116a544f mov dword ptr [0x116ce54c], ecx */
  w32((uint32_t)(0x116ce54c), (ECX));
  /* 116a5455 cmp dword ptr [0x116ce54c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116ce54c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a545c je 0x116a547e */
  if (C.zf) goto L_116a547e;
  /* 116a545e push 3 */
  push32((uint32_t)(0x3u));
  /* 116a5460 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a5463 push edx */
  push32((uint32_t)(EDX));
  /* 116a5464 mov eax, dword ptr [0x116ce5d8] */
  EAX = (r32((uint32_t)(0x116ce5d8)));
  /* 116a5469 push eax */
  push32((uint32_t)(EAX));
  /* 116a546a call 0x116a10b0 */
  push32(0x116a546fu); f_116a10b0();
  /* 116a546f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5472 mov ecx, dword ptr [0x116ce5d8] */
  ECX = (r32((uint32_t)(0x116ce5d8)));
  /* 116a5478 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 116a547c jmp 0x116a5487 */
  goto L_116a5487;
L_116a547e:;
  /* 116a547e mov edx, dword ptr [0x116ce5d8] */
  EDX = (r32((uint32_t)(0x116ce5d8)));
  /* 116a5484 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_116a5487:;
  /* 116a5487 mov esp, ebp */
  ESP = (EBP);
  /* 116a5489 pop ebp */
  EBP = (pop32());
  /* 116a548a ret  */
  ESPCHK(0x116a50e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015490 @ 0x116a5490 (46 bytes, 18 insns) */
void f_116a5490(void) {
  FTRACE(0x116a5490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a5490 push ebp */
  push32((uint32_t)(EBP));
  /* 116a5491 mov ebp, esp */
  EBP = (ESP);
  /* 116a5493 push ecx */
  push32((uint32_t)(ECX));
  /* 116a5494 push 0xb */
  push32((uint32_t)(0xbu));
  /* 116a5496 call 0x1169c120 */
  push32(0x116a549bu); f_1169c120();
  /* 116a549b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a549e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a54a1 push eax */
  push32((uint32_t)(EAX));
  /* 116a54a2 call 0x116a54c0 */
  push32(0x116a54a7u); f_116a54c0();
  /* 116a54a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a54aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a54ad push 0xb */
  push32((uint32_t)(0xbu));
  /* 116a54af call 0x1169c1c0 */
  push32(0x116a54b4u); f_1169c1c0();
  /* 116a54b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a54b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a54ba mov esp, ebp */
  ESP = (EBP);
  /* 116a54bc pop ebp */
  EBP = (pop32());
  /* 116a54bd ret  */
  ESPCHK(0x116a5490u, _esp0);
  ESP += 4; return;
}

/* FUN_100154c0 @ 0x116a54c0 (762 bytes, 246 insns) */
void f_116a54c0(void) {
  FTRACE(0x116a54c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a54c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a54c1 mov ebp, esp */
  EBP = (ESP);
  /* 116a54c3 push ecx */
  push32((uint32_t)(ECX));
  /* 116a54c4 cmp dword ptr [0x116ce54c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116ce54c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a54cb jne 0x116a54d4 */
  if (!C.zf) goto L_116a54d4;
  /* 116a54cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a54cf jmp 0x116a57b6 */
  goto L_116a57b6;
L_116a54d4:;
  /* 116a54d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a54d7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 116a54da cmp ecx, dword ptr [0x116ce5e0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x116ce5e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a54e0 jne 0x116a54f4 */
  if (!C.zf) goto L_116a54f4;
  /* 116a54e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a54e5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 116a54e8 cmp eax, dword ptr [0x116ce5f0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x116ce5f0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a54ee je 0x116a56bb */
  if (C.zf) goto L_116a56bb;
L_116a54f4:;
  /* 116a54f4 cmp dword ptr [0x116d0750], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0750))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a54fb je 0x116a5675 */
  if (C.zf) goto L_116a5675;
  /* 116a5501 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116a5503 mov cx, word ptr [0x116d07f0] */
  CX = (r16((uint32_t)(0x116d07f0)));
  /* 116a550a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a550c jne 0x116a5569 */
  if (!C.zf) goto L_116a5569;
  /* 116a550e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116a5510 mov dx, word ptr [0x116d07fe] */
  DX = (r16((uint32_t)(0x116d07fe)));
  /* 116a5517 push edx */
  push32((uint32_t)(EDX));
  /* 116a5518 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a551a mov ax, word ptr [0x116d07fc] */
  AX = (r16((uint32_t)(0x116d07fc)));
  /* 116a5520 push eax */
  push32((uint32_t)(EAX));
  /* 116a5521 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116a5523 mov cx, word ptr [0x116d07fa] */
  CX = (r16((uint32_t)(0x116d07fa)));
  /* 116a552a push ecx */
  push32((uint32_t)(ECX));
  /* 116a552b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116a552d mov dx, word ptr [0x116d07f8] */
  DX = (r16((uint32_t)(0x116d07f8)));
  /* 116a5534 push edx */
  push32((uint32_t)(EDX));
  /* 116a5535 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a5537 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a5539 mov ax, word ptr [0x116d07f4] */
  AX = (r16((uint32_t)(0x116d07f4)));
  /* 116a553f push eax */
  push32((uint32_t)(EAX));
  /* 116a5540 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116a5542 mov cx, word ptr [0x116d07f6] */
  CX = (r16((uint32_t)(0x116d07f6)));
  /* 116a5549 push ecx */
  push32((uint32_t)(ECX));
  /* 116a554a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116a554c mov dx, word ptr [0x116d07f2] */
  DX = (r16((uint32_t)(0x116d07f2)));
  /* 116a5553 push edx */
  push32((uint32_t)(EDX));
  /* 116a5554 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a5557 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 116a555a push ecx */
  push32((uint32_t)(ECX));
  /* 116a555b push 1 */
  push32((uint32_t)(0x1u));
  /* 116a555d push 1 */
  push32((uint32_t)(0x1u));
  /* 116a555f call 0x116a57c0 */
  push32(0x116a5564u); f_116a57c0();
  /* 116a5564 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5567 jmp 0x116a55ba */
  goto L_116a55ba;
L_116a5569:;
  /* 116a5569 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116a556b mov dx, word ptr [0x116d07fe] */
  DX = (r16((uint32_t)(0x116d07fe)));
  /* 116a5572 push edx */
  push32((uint32_t)(EDX));
  /* 116a5573 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a5575 mov ax, word ptr [0x116d07fc] */
  AX = (r16((uint32_t)(0x116d07fc)));
  /* 116a557b push eax */
  push32((uint32_t)(EAX));
  /* 116a557c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116a557e mov cx, word ptr [0x116d07fa] */
  CX = (r16((uint32_t)(0x116d07fa)));
  /* 116a5585 push ecx */
  push32((uint32_t)(ECX));
  /* 116a5586 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116a5588 mov dx, word ptr [0x116d07f8] */
  DX = (r16((uint32_t)(0x116d07f8)));
  /* 116a558f push edx */
  push32((uint32_t)(EDX));
  /* 116a5590 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a5592 mov ax, word ptr [0x116d07f6] */
  AX = (r16((uint32_t)(0x116d07f6)));
  /* 116a5598 push eax */
  push32((uint32_t)(EAX));
  /* 116a5599 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a559b push 0 */
  push32((uint32_t)(0x0u));
  /* 116a559d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116a559f mov cx, word ptr [0x116d07f2] */
  CX = (r16((uint32_t)(0x116d07f2)));
  /* 116a55a6 push ecx */
  push32((uint32_t)(ECX));
  /* 116a55a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a55aa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 116a55ad push eax */
  push32((uint32_t)(EAX));
  /* 116a55ae push 0 */
  push32((uint32_t)(0x0u));
  /* 116a55b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 116a55b2 call 0x116a57c0 */
  push32(0x116a55b7u); f_116a57c0();
  /* 116a55b7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a55ba:;
  /* 116a55ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116a55bc mov cx, word ptr [0x116d079c] */
  CX = (r16((uint32_t)(0x116d079c)));
  /* 116a55c3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a55c5 jne 0x116a5622 */
  if (!C.zf) goto L_116a5622;
  /* 116a55c7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116a55c9 mov dx, word ptr [0x116d07aa] */
  DX = (r16((uint32_t)(0x116d07aa)));
  /* 116a55d0 push edx */
  push32((uint32_t)(EDX));
  /* 116a55d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a55d3 mov ax, word ptr [0x116d07a8] */
  AX = (r16((uint32_t)(0x116d07a8)));
  /* 116a55d9 push eax */
  push32((uint32_t)(EAX));
  /* 116a55da xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116a55dc mov cx, word ptr [0x116d07a6] */
  CX = (r16((uint32_t)(0x116d07a6)));
  /* 116a55e3 push ecx */
  push32((uint32_t)(ECX));
  /* 116a55e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116a55e6 mov dx, word ptr [0x116d07a4] */
  DX = (r16((uint32_t)(0x116d07a4)));
  /* 116a55ed push edx */
  push32((uint32_t)(EDX));
  /* 116a55ee push 0 */
  push32((uint32_t)(0x0u));
  /* 116a55f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a55f2 mov ax, word ptr [0x116d07a0] */
  AX = (r16((uint32_t)(0x116d07a0)));
  /* 116a55f8 push eax */
  push32((uint32_t)(EAX));
  /* 116a55f9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116a55fb mov cx, word ptr [0x116d07a2] */
  CX = (r16((uint32_t)(0x116d07a2)));
  /* 116a5602 push ecx */
  push32((uint32_t)(ECX));
  /* 116a5603 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116a5605 mov dx, word ptr [0x116d079e] */
  DX = (r16((uint32_t)(0x116d079e)));
  /* 116a560c push edx */
  push32((uint32_t)(EDX));
  /* 116a560d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a5610 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 116a5613 push ecx */
  push32((uint32_t)(ECX));
  /* 116a5614 push 1 */
  push32((uint32_t)(0x1u));
  /* 116a5616 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a5618 call 0x116a57c0 */
  push32(0x116a561du); f_116a57c0();
  /* 116a561d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5620 jmp 0x116a5673 */
  goto L_116a5673;
L_116a5622:;
  /* 116a5622 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116a5624 mov dx, word ptr [0x116d07aa] */
  DX = (r16((uint32_t)(0x116d07aa)));
  /* 116a562b push edx */
  push32((uint32_t)(EDX));
  /* 116a562c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a562e mov ax, word ptr [0x116d07a8] */
  AX = (r16((uint32_t)(0x116d07a8)));
  /* 116a5634 push eax */
  push32((uint32_t)(EAX));
  /* 116a5635 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116a5637 mov cx, word ptr [0x116d07a6] */
  CX = (r16((uint32_t)(0x116d07a6)));
  /* 116a563e push ecx */
  push32((uint32_t)(ECX));
  /* 116a563f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116a5641 mov dx, word ptr [0x116d07a4] */
  DX = (r16((uint32_t)(0x116d07a4)));
  /* 116a5648 push edx */
  push32((uint32_t)(EDX));
  /* 116a5649 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a564b mov ax, word ptr [0x116d07a2] */
  AX = (r16((uint32_t)(0x116d07a2)));
  /* 116a5651 push eax */
  push32((uint32_t)(EAX));
  /* 116a5652 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a5654 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a5656 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116a5658 mov cx, word ptr [0x116d079e] */
  CX = (r16((uint32_t)(0x116d079e)));
  /* 116a565f push ecx */
  push32((uint32_t)(ECX));
  /* 116a5660 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a5663 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 116a5666 push eax */
  push32((uint32_t)(EAX));
  /* 116a5667 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a5669 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a566b call 0x116a57c0 */
  push32(0x116a5670u); f_116a57c0();
  /* 116a5670 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a5673:;
  /* 116a5673 jmp 0x116a56bb */
  goto L_116a56bb;
L_116a5675:;
  /* 116a5675 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a5677 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a5679 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a567b push 2 */
  push32((uint32_t)(0x2u));
  /* 116a567d push 0 */
  push32((uint32_t)(0x0u));
  /* 116a567f push 0 */
  push32((uint32_t)(0x0u));
  /* 116a5681 push 1 */
  push32((uint32_t)(0x1u));
  /* 116a5683 push 4 */
  push32((uint32_t)(0x4u));
  /* 116a5685 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a5688 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 116a568b push edx */
  push32((uint32_t)(EDX));
  /* 116a568c push 1 */
  push32((uint32_t)(0x1u));
  /* 116a568e push 1 */
  push32((uint32_t)(0x1u));
  /* 116a5690 call 0x116a57c0 */
  push32(0x116a5695u); f_116a57c0();
  /* 116a5695 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5698 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a569a push 0 */
  push32((uint32_t)(0x0u));
  /* 116a569c push 0 */
  push32((uint32_t)(0x0u));
  /* 116a569e push 2 */
  push32((uint32_t)(0x2u));
  /* 116a56a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a56a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a56a4 push 5 */
  push32((uint32_t)(0x5u));
  /* 116a56a6 push 0xa */
  push32((uint32_t)(0xau));
  /* 116a56a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a56ab mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 116a56ae push ecx */
  push32((uint32_t)(ECX));
  /* 116a56af push 1 */
  push32((uint32_t)(0x1u));
  /* 116a56b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a56b3 call 0x116a57c0 */
  push32(0x116a56b8u); f_116a57c0();
  /* 116a56b8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a56bb:;
  /* 116a56bb mov edx, dword ptr [0x116ce5e4] */
  EDX = (r32((uint32_t)(0x116ce5e4)));
  /* 116a56c1 cmp edx, dword ptr [0x116ce5f4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x116ce5f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a56c7 jge 0x116a5714 */
  if ((C.sf==C.of)) goto L_116a5714;
  /* 116a56c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a56cc mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 116a56cf cmp ecx, dword ptr [0x116ce5e4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x116ce5e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a56d5 jl 0x116a56e5 */
  if ((C.sf!=C.of)) goto L_116a56e5;
  /* 116a56d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a56da mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 116a56dd cmp eax, dword ptr [0x116ce5f4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x116ce5f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a56e3 jle 0x116a56ec */
  if ((C.zf||C.sf!=C.of)) goto L_116a56ec;
L_116a56e5:;
  /* 116a56e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a56e7 jmp 0x116a57b6 */
  goto L_116a57b6;
L_116a56ec:;
  /* 116a56ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a56ef mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 116a56f2 cmp edx, dword ptr [0x116ce5e4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x116ce5e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a56f8 jle 0x116a5712 */
  if ((C.zf||C.sf!=C.of)) goto L_116a5712;
  /* 116a56fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a56fd mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 116a5700 cmp ecx, dword ptr [0x116ce5f4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x116ce5f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5706 jge 0x116a5712 */
  if ((C.sf==C.of)) goto L_116a5712;
  /* 116a5708 mov eax, 1 */
  EAX = (0x1u);
  /* 116a570d jmp 0x116a57b6 */
  goto L_116a57b6;
L_116a5712:;
  /* 116a5712 jmp 0x116a5757 */
  goto L_116a5757;
L_116a5714:;
  /* 116a5714 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a5717 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 116a571a cmp eax, dword ptr [0x116ce5f4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x116ce5f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5720 jl 0x116a5730 */
  if ((C.sf!=C.of)) goto L_116a5730;
  /* 116a5722 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a5725 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 116a5728 cmp edx, dword ptr [0x116ce5e4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x116ce5e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a572e jle 0x116a5737 */
  if ((C.zf||C.sf!=C.of)) goto L_116a5737;
L_116a5730:;
  /* 116a5730 mov eax, 1 */
  EAX = (0x1u);
  /* 116a5735 jmp 0x116a57b6 */
  goto L_116a57b6;
L_116a5737:;
  /* 116a5737 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a573a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 116a573d cmp ecx, dword ptr [0x116ce5f4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x116ce5f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5743 jle 0x116a5757 */
  if ((C.zf||C.sf!=C.of)) goto L_116a5757;
  /* 116a5745 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a5748 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 116a574b cmp eax, dword ptr [0x116ce5e4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x116ce5e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5751 jge 0x116a5757 */
  if ((C.sf==C.of)) goto L_116a5757;
  /* 116a5753 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a5755 jmp 0x116a57b6 */
  goto L_116a57b6;
L_116a5757:;
  /* 116a5757 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a575a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116a575d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a5760 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a5763 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116a5765 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5767 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a576a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 116a576d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a5773 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5775 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a577b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116a577e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a5781 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 116a5784 cmp edx, dword ptr [0x116ce5e4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x116ce5e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a578a jne 0x116a57a2 */
  if (!C.zf) goto L_116a57a2;
  /* 116a578c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a578f cmp eax, dword ptr [0x116ce5e8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x116ce5e8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5795 jl 0x116a579e */
  if ((C.sf!=C.of)) goto L_116a579e;
  /* 116a5797 mov eax, 1 */
  EAX = (0x1u);
  /* 116a579c jmp 0x116a57b6 */
  goto L_116a57b6;
L_116a579e:;
  /* 116a579e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a57a0 jmp 0x116a57b6 */
  goto L_116a57b6;
L_116a57a2:;
  /* 116a57a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a57a5 cmp ecx, dword ptr [0x116ce5f8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x116ce5f8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a57ab jge 0x116a57b4 */
  if ((C.sf==C.of)) goto L_116a57b4;
  /* 116a57ad mov eax, 1 */
  EAX = (0x1u);
  /* 116a57b2 jmp 0x116a57b6 */
  goto L_116a57b6;
L_116a57b4:;
  /* 116a57b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116a57b6:;
  /* 116a57b6 mov esp, ebp */
  ESP = (EBP);
  /* 116a57b8 pop ebp */
  EBP = (pop32());
  /* 116a57b9 ret  */
  ESPCHK(0x116a54c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100157c0 @ 0x116a57c0 (504 bytes, 145 insns) */
void f_116a57c0(void) {
  FTRACE(0x116a57c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a57c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a57c1 mov ebp, esp */
  EBP = (ESP);
  /* 116a57c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a57c6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a57ca jne 0x116a589c */
  if (!C.zf) goto L_116a589c;
  /* 116a57d0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a57d3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 116a57d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a57d8 jne 0x116a57e9 */
  if (!C.zf) goto L_116a57e9;
  /* 116a57da mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116a57dd mov edx, dword ptr [ecx*4 + 0x116ce5f8] */
  EDX = (r32((uint32_t)(ECX*4 + 0x116ce5f8)));
  /* 116a57e4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 116a57e7 jmp 0x116a57f6 */
  goto L_116a57f6;
L_116a57e9:;
  /* 116a57e9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116a57ec mov ecx, dword ptr [eax*4 + 0x116ce62c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x116ce62c)));
  /* 116a57f3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_116a57f6:;
  /* 116a57f6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a57f9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a57fc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116a57ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a5802 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a5805 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a580b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a580e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5810 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a5813 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a5816 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 116a5819 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 116a581d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116a581e mov ecx, 7 */
  ECX = (0x7u);
  /* 116a5823 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116a5825 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116a5828 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a582b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a582e jge 0x116a5849 */
  if ((C.sf==C.of)) goto L_116a5849;
  /* 116a5830 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116a5833 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a5836 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116a5839 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a583c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a583f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5842 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5844 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116a5847 jmp 0x116a585d */
  goto L_116a585d;
L_116a5849:;
  /* 116a5849 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116a584c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a584f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116a5852 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a5855 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5858 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a585a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_116a585d:;
  /* 116a585d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5861 jne 0x116a589a */
  if (!C.zf) goto L_116a589a;
  /* 116a5863 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a5866 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 116a5869 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a586b jne 0x116a587c */
  if (!C.zf) goto L_116a587c;
  /* 116a586d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116a5870 mov eax, dword ptr [edx*4 + 0x116ce5fc] */
  EAX = (r32((uint32_t)(EDX*4 + 0x116ce5fc)));
  /* 116a5877 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116a587a jmp 0x116a5889 */
  goto L_116a5889;
L_116a587c:;
  /* 116a587c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116a587f mov edx, dword ptr [ecx*4 + 0x116ce630] */
  EDX = (r32((uint32_t)(ECX*4 + 0x116ce630)));
  /* 116a5886 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_116a5889:;
  /* 116a5889 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a588c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a588f jle 0x116a589a */
  if ((C.zf||C.sf!=C.of)) goto L_116a589a;
  /* 116a5891 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a5894 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a5897 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_116a589a:;
  /* 116a589a jmp 0x116a58d1 */
  goto L_116a58d1;
L_116a589c:;
  /* 116a589c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a589f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 116a58a2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a58a4 jne 0x116a58b5 */
  if (!C.zf) goto L_116a58b5;
  /* 116a58a6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116a58a9 mov ecx, dword ptr [eax*4 + 0x116ce5f8] */
  ECX = (r32((uint32_t)(EAX*4 + 0x116ce5f8)));
  /* 116a58b0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 116a58b3 jmp 0x116a58c2 */
  goto L_116a58c2;
L_116a58b5:;
  /* 116a58b5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116a58b8 mov eax, dword ptr [edx*4 + 0x116ce62c] */
  EAX = (r32((uint32_t)(EDX*4 + 0x116ce62c)));
  /* 116a58bf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_116a58c2:;
  /* 116a58c2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a58c5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116a58c8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a58cb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a58ce mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_116a58d1:;
  /* 116a58d1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a58d5 jne 0x116a5911 */
  if (!C.zf) goto L_116a5911;
  /* 116a58d7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a58da mov dword ptr [0x116ce5e4], eax */
  w32((uint32_t)(0x116ce5e4), (EAX));
  /* 116a58df mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 116a58e2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a58e5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 116a58e8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a58ea imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a58ed mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 116a58f0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a58f2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a58f8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 116a58fb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a58fd mov dword ptr [0x116ce5e8], ecx */
  w32((uint32_t)(0x116ce5e8), (ECX));
  /* 116a5903 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a5906 mov dword ptr [0x116ce5e0], edx */
  w32((uint32_t)(0x116ce5e0), (EDX));
  /* 116a590c jmp 0x116a59b4 */
  goto L_116a59b4;
L_116a5911:;
  /* 116a5911 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a5914 mov dword ptr [0x116ce5f4], eax */
  w32((uint32_t)(0x116ce5f4), (EAX));
  /* 116a5919 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 116a591c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a591f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 116a5922 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5924 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a5927 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 116a592a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a592c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a5932 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 116a5935 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5937 mov dword ptr [0x116ce5f8], ecx */
  w32((uint32_t)(0x116ce5f8), (ECX));
  /* 116a593d mov edx, dword ptr [0x116ce550] */
  EDX = (r32((uint32_t)(0x116ce550)));
  /* 116a5943 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a5949 mov eax, dword ptr [0x116ce5f8] */
  EAX = (r32((uint32_t)(0x116ce5f8)));
  /* 116a594e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5950 mov dword ptr [0x116ce5f8], eax */
  w32((uint32_t)(0x116ce5f8), (EAX));
  /* 116a5955 cmp dword ptr [0x116ce5f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116ce5f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a595c jge 0x116a5981 */
  if ((C.sf==C.of)) goto L_116a5981;
  /* 116a595e mov ecx, dword ptr [0x116ce5f8] */
  ECX = (r32((uint32_t)(0x116ce5f8)));
  /* 116a5964 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a596a mov dword ptr [0x116ce5f8], ecx */
  w32((uint32_t)(0x116ce5f8), (ECX));
  /* 116a5970 mov edx, dword ptr [0x116ce5f4] */
  EDX = (r32((uint32_t)(0x116ce5f4)));
  /* 116a5976 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a5979 mov dword ptr [0x116ce5f4], edx */
  w32((uint32_t)(0x116ce5f4), (EDX));
  /* 116a597f jmp 0x116a59ab */
  goto L_116a59ab;
L_116a5981:;
  /* 116a5981 cmp dword ptr [0x116ce5f8], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x116ce5f8))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a598b jl 0x116a59ab */
  if ((C.sf!=C.of)) goto L_116a59ab;
  /* 116a598d mov eax, dword ptr [0x116ce5f8] */
  EAX = (r32((uint32_t)(0x116ce5f8)));
  /* 116a5992 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a5997 mov dword ptr [0x116ce5f8], eax */
  w32((uint32_t)(0x116ce5f8), (EAX));
  /* 116a599c mov ecx, dword ptr [0x116ce5f4] */
  ECX = (r32((uint32_t)(0x116ce5f4)));
  /* 116a59a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a59a5 mov dword ptr [0x116ce5f4], ecx */
  w32((uint32_t)(0x116ce5f4), (ECX));
L_116a59ab:;
  /* 116a59ab mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a59ae mov dword ptr [0x116ce5f0], edx */
  w32((uint32_t)(0x116ce5f0), (EDX));
L_116a59b4:;
  /* 116a59b4 mov esp, ebp */
  ESP = (EBP);
  /* 116a59b6 pop ebp */
  EBP = (pop32());
  /* 116a59b7 ret  */
  ESPCHK(0x116a57c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100159c0 @ 0x116a59c0 (836 bytes, 238 insns) */
void f_116a59c0(void) {
  FTRACE(0x116a59c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a59c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a59c1 mov ebp, esp */
  EBP = (ESP);
  /* 116a59c3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a59c6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 116a59c8 call 0x1169c120 */
  push32(0x116a59cdu); f_1169c120();
  /* 116a59cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a59d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a59d3 push eax */
  push32((uint32_t)(EAX));
  /* 116a59d4 call 0x116a5d10 */
  push32(0x116a59d9u); f_116a5d10();
  /* 116a59d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a59dc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116a59df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a59e2 cmp ecx, dword ptr [0x116d1c38] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x116d1c38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a59e8 jne 0x116a59fb */
  if (!C.zf) goto L_116a59fb;
  /* 116a59ea push 0x19 */
  push32((uint32_t)(0x19u));
  /* 116a59ec call 0x1169c1c0 */
  push32(0x116a59f1u); f_1169c1c0();
  /* 116a59f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a59f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a59f6 jmp 0x116a5d00 */
  goto L_116a5d00;
L_116a59fb:;
  /* 116a59fb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a59ff jne 0x116a5a1c */
  if (!C.zf) goto L_116a5a1c;
  /* 116a5a01 call 0x116a5df0 */
  push32(0x116a5a06u); f_116a5df0();
  /* 116a5a06 call 0x116a5e70 */
  push32(0x116a5a0bu); f_116a5e70();
  /* 116a5a0b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 116a5a0d call 0x1169c1c0 */
  push32(0x116a5a12u); f_1169c1c0();
  /* 116a5a12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5a15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a5a17 jmp 0x116a5d00 */
  goto L_116a5d00;
L_116a5a1c:;
  /* 116a5a1c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116a5a23 jmp 0x116a5a2e */
  goto L_116a5a2e;
L_116a5a25:;
  /* 116a5a25 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a5a28 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5a2b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116a5a2e:;
  /* 116a5a2e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5a32 jae 0x116a5b7f */
  if (!C.cf) goto L_116a5b7f;
  /* 116a5a38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a5a3b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a5a3e mov ecx, dword ptr [eax + 0x116ce670] */
  ECX = (r32((uint32_t)(EAX + 0x116ce670)));
  /* 116a5a44 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5a47 jne 0x116a5b7a */
  if (!C.zf) goto L_116a5b7a;
  /* 116a5a4d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 116a5a54 jmp 0x116a5a5f */
  goto L_116a5a5f;
L_116a5a56:;
  /* 116a5a56 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a5a59 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5a5c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_116a5a5f:;
  /* 116a5a5f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5a66 jae 0x116a5a74 */
  if (!C.cf) goto L_116a5a74;
  /* 116a5a68 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a5a6b mov byte ptr [eax + 0x116d1dc0], 0 */
  w8((uint32_t)(EAX + 0x116d1dc0), (0x0u));
  /* 116a5a72 jmp 0x116a5a56 */
  goto L_116a5a56;
L_116a5a74:;
  /* 116a5a74 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 116a5a7b jmp 0x116a5a86 */
  goto L_116a5a86;
L_116a5a7d:;
  /* 116a5a7d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a5a80 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5a83 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_116a5a86:;
  /* 116a5a86 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5a8a jae 0x116a5b07 */
  if (!C.cf) goto L_116a5b07;
  /* 116a5a8c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a5a8f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a5a92 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a5a95 lea ecx, [edx + eax*8 + 0x116ce680] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x116ce680));
  /* 116a5a9c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116a5a9f jmp 0x116a5aaa */
  goto L_116a5aaa;
L_116a5aa1:;
  /* 116a5aa1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a5aa4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5aa7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_116a5aaa:;
  /* 116a5aaa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a5aad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116a5aaf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116a5ab1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a5ab3 je 0x116a5b02 */
  if (C.zf) goto L_116a5b02;
  /* 116a5ab5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a5ab8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a5aba mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 116a5abd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a5abf je 0x116a5b02 */
  if (C.zf) goto L_116a5b02;
  /* 116a5ac1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a5ac4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116a5ac6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116a5ac8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 116a5acb jmp 0x116a5ad6 */
  goto L_116a5ad6;
L_116a5acd:;
  /* 116a5acd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a5ad0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5ad3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_116a5ad6:;
  /* 116a5ad6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a5ad9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116a5adb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 116a5ade cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5ae1 ja 0x116a5b00 */
  if ((!C.cf&&!C.zf)) goto L_116a5b00;
  /* 116a5ae3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a5ae6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a5ae9 mov dl, byte ptr [eax + 0x116d1dc1] */
  DL = (r8((uint32_t)(EAX + 0x116d1dc1)));
  /* 116a5aef or dl, byte ptr [ecx + 0x116ce668] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x116ce668))); DL = (_r); fl_logic(_r,8); }
  /* 116a5af5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a5af8 mov byte ptr [eax + 0x116d1dc1], dl */
  w8((uint32_t)(EAX + 0x116d1dc1), (DL));
  /* 116a5afe jmp 0x116a5acd */
  goto L_116a5acd;
L_116a5b00:;
  /* 116a5b00 jmp 0x116a5aa1 */
  goto L_116a5aa1;
L_116a5b02:;
  /* 116a5b02 jmp 0x116a5a7d */
  goto L_116a5a7d;
L_116a5b07:;
  /* 116a5b07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a5b0a mov dword ptr [0x116d1c38], ecx */
  w32((uint32_t)(0x116d1c38), (ECX));
  /* 116a5b10 mov dword ptr [0x116d1cbc], 1 */
  w32((uint32_t)(0x116d1cbc), (0x1u));
  /* 116a5b1a mov edx, dword ptr [0x116d1c38] */
  EDX = (r32((uint32_t)(0x116d1c38)));
  /* 116a5b20 push edx */
  push32((uint32_t)(EDX));
  /* 116a5b21 call 0x116a5d70 */
  push32(0x116a5b26u); f_116a5d70();
  /* 116a5b26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5b29 mov dword ptr [0x116d1ec4], eax */
  w32((uint32_t)(0x116d1ec4), (EAX));
  /* 116a5b2e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 116a5b35 jmp 0x116a5b40 */
  goto L_116a5b40;
L_116a5b37:;
  /* 116a5b37 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a5b3a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5b3d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_116a5b40:;
  /* 116a5b40 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5b44 jae 0x116a5b64 */
  if (!C.cf) goto L_116a5b64;
  /* 116a5b46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a5b49 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a5b4c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a5b4f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a5b52 mov cx, word ptr [ecx + eax*2 + 0x116ce674] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x116ce674)));
  /* 116a5b5a mov word ptr [edx*2 + 0x116d1cb0], cx */
  w16((uint32_t)(EDX*2 + 0x116d1cb0), (CX));
  /* 116a5b62 jmp 0x116a5b37 */
  goto L_116a5b37;
L_116a5b64:;
  /* 116a5b64 call 0x116a5e70 */
  push32(0x116a5b69u); f_116a5e70();
  /* 116a5b69 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 116a5b6b call 0x1169c1c0 */
  push32(0x116a5b70u); f_1169c1c0();
  /* 116a5b70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5b73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a5b75 jmp 0x116a5d00 */
  goto L_116a5d00;
L_116a5b7a:;
  /* 116a5b7a jmp 0x116a5a25 */
  goto L_116a5a25;
L_116a5b7f:;
  /* 116a5b7f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 116a5b82 push edx */
  push32((uint32_t)(EDX));
  /* 116a5b83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a5b86 push eax */
  push32((uint32_t)(EAX));
  /* 116a5b87 call dword ptr [0x116d338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d338c))), 0x116a5b8du);
  /* 116a5b8d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5b90 jne 0x116a5cd2 */
  if (!C.zf) goto L_116a5cd2;
  /* 116a5b96 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 116a5b9d jmp 0x116a5ba8 */
  goto L_116a5ba8;
L_116a5b9f:;
  /* 116a5b9f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a5ba2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5ba5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_116a5ba8:;
  /* 116a5ba8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5baf jae 0x116a5bbd */
  if (!C.cf) goto L_116a5bbd;
  /* 116a5bb1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a5bb4 mov byte ptr [edx + 0x116d1dc0], 0 */
  w8((uint32_t)(EDX + 0x116d1dc0), (0x0u));
  /* 116a5bbb jmp 0x116a5b9f */
  goto L_116a5b9f;
L_116a5bbd:;
  /* 116a5bbd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a5bc0 mov dword ptr [0x116d1c38], eax */
  w32((uint32_t)(0x116d1c38), (EAX));
  /* 116a5bc5 mov dword ptr [0x116d1ec4], 0 */
  w32((uint32_t)(0x116d1ec4), (0x0u));
  /* 116a5bcf cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5bd3 jbe 0x116a5c8e */
  if ((C.cf||C.zf)) goto L_116a5c8e;
  /* 116a5bd9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 116a5bdc mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 116a5bdf jmp 0x116a5bea */
  goto L_116a5bea;
L_116a5be1:;
  /* 116a5be1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 116a5be4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5be7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_116a5bea:;
  /* 116a5bea mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116a5bed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116a5bef mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116a5bf1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a5bf3 je 0x116a5c3c */
  if (C.zf) goto L_116a5c3c;
  /* 116a5bf5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 116a5bf8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a5bfa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 116a5bfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a5bff je 0x116a5c3c */
  if (C.zf) goto L_116a5c3c;
  /* 116a5c01 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116a5c04 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116a5c06 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116a5c08 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 116a5c0b jmp 0x116a5c16 */
  goto L_116a5c16;
L_116a5c0d:;
  /* 116a5c0d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a5c10 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5c13 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_116a5c16:;
  /* 116a5c16 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116a5c19 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116a5c1b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 116a5c1e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5c21 ja 0x116a5c3a */
  if ((!C.cf&&!C.zf)) goto L_116a5c3a;
  /* 116a5c23 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a5c26 mov cl, byte ptr [eax + 0x116d1dc1] */
  CL = (r8((uint32_t)(EAX + 0x116d1dc1)));
  /* 116a5c2c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 116a5c2f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a5c32 mov byte ptr [edx + 0x116d1dc1], cl */
  w8((uint32_t)(EDX + 0x116d1dc1), (CL));
  /* 116a5c38 jmp 0x116a5c0d */
  goto L_116a5c0d;
L_116a5c3a:;
  /* 116a5c3a jmp 0x116a5be1 */
  goto L_116a5be1;
L_116a5c3c:;
  /* 116a5c3c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 116a5c43 jmp 0x116a5c4e */
  goto L_116a5c4e;
L_116a5c45:;
  /* 116a5c45 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a5c48 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5c4b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_116a5c4e:;
  /* 116a5c4e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5c55 jae 0x116a5c6e */
  if (!C.cf) goto L_116a5c6e;
  /* 116a5c57 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a5c5a mov dl, byte ptr [ecx + 0x116d1dc1] */
  DL = (r8((uint32_t)(ECX + 0x116d1dc1)));
  /* 116a5c60 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 116a5c63 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a5c66 mov byte ptr [eax + 0x116d1dc1], dl */
  w8((uint32_t)(EAX + 0x116d1dc1), (DL));
  /* 116a5c6c jmp 0x116a5c45 */
  goto L_116a5c45;
L_116a5c6e:;
  /* 116a5c6e mov ecx, dword ptr [0x116d1c38] */
  ECX = (r32((uint32_t)(0x116d1c38)));
  /* 116a5c74 push ecx */
  push32((uint32_t)(ECX));
  /* 116a5c75 call 0x116a5d70 */
  push32(0x116a5c7au); f_116a5d70();
  /* 116a5c7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5c7d mov dword ptr [0x116d1ec4], eax */
  w32((uint32_t)(0x116d1ec4), (EAX));
  /* 116a5c82 mov dword ptr [0x116d1cbc], 1 */
  w32((uint32_t)(0x116d1cbc), (0x1u));
  /* 116a5c8c jmp 0x116a5c98 */
  goto L_116a5c98;
L_116a5c8e:;
  /* 116a5c8e mov dword ptr [0x116d1cbc], 0 */
  w32((uint32_t)(0x116d1cbc), (0x0u));
L_116a5c98:;
  /* 116a5c98 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 116a5c9f jmp 0x116a5caa */
  goto L_116a5caa;
L_116a5ca1:;
  /* 116a5ca1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a5ca4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5ca7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_116a5caa:;
  /* 116a5caa cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5cae jae 0x116a5cbf */
  if (!C.cf) goto L_116a5cbf;
  /* 116a5cb0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a5cb3 mov word ptr [eax*2 + 0x116d1cb0], 0 */
  w16((uint32_t)(EAX*2 + 0x116d1cb0), (0x0u));
  /* 116a5cbd jmp 0x116a5ca1 */
  goto L_116a5ca1;
L_116a5cbf:;
  /* 116a5cbf call 0x116a5e70 */
  push32(0x116a5cc4u); f_116a5e70();
  /* 116a5cc4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 116a5cc6 call 0x1169c1c0 */
  push32(0x116a5ccbu); f_1169c1c0();
  /* 116a5ccb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5cce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a5cd0 jmp 0x116a5d00 */
  goto L_116a5d00;
L_116a5cd2:;
  /* 116a5cd2 cmp dword ptr [0x116d080c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d080c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5cd9 je 0x116a5cf3 */
  if (C.zf) goto L_116a5cf3;
  /* 116a5cdb call 0x116a5df0 */
  push32(0x116a5ce0u); f_116a5df0();
  /* 116a5ce0 call 0x116a5e70 */
  push32(0x116a5ce5u); f_116a5e70();
  /* 116a5ce5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 116a5ce7 call 0x1169c1c0 */
  push32(0x116a5cecu); f_1169c1c0();
  /* 116a5cec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5cef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a5cf1 jmp 0x116a5d00 */
  goto L_116a5d00;
L_116a5cf3:;
  /* 116a5cf3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 116a5cf5 call 0x1169c1c0 */
  push32(0x116a5cfau); f_1169c1c0();
  /* 116a5cfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5cfd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_116a5d00:;
  /* 116a5d00 mov esp, ebp */
  ESP = (EBP);
  /* 116a5d02 pop ebp */
  EBP = (pop32());
  /* 116a5d03 ret  */
  ESPCHK(0x116a59c0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x116a5d10 (89 bytes, 21 insns) */
void f_116a5d10(void) {
  FTRACE(0x116a5d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a5d10 push ebp */
  push32((uint32_t)(EBP));
  /* 116a5d11 mov ebp, esp */
  EBP = (ESP);
  /* 116a5d13 mov dword ptr [0x116d080c], 0 */
  w32((uint32_t)(0x116d080c), (0x0u));
  /* 116a5d1d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5d21 jne 0x116a5d35 */
  if (!C.zf) goto L_116a5d35;
  /* 116a5d23 mov dword ptr [0x116d080c], 1 */
  w32((uint32_t)(0x116d080c), (0x1u));
  /* 116a5d2d call dword ptr [0x116d3384] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3384))), 0x116a5d33u);
  /* 116a5d33 jmp 0x116a5d67 */
  goto L_116a5d67;
L_116a5d35:;
  /* 116a5d35 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5d39 jne 0x116a5d4d */
  if (!C.zf) goto L_116a5d4d;
  /* 116a5d3b mov dword ptr [0x116d080c], 1 */
  w32((uint32_t)(0x116d080c), (0x1u));
  /* 116a5d45 call dword ptr [0x116d3388] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3388))), 0x116a5d4bu);
  /* 116a5d4b jmp 0x116a5d67 */
  goto L_116a5d67;
L_116a5d4d:;
  /* 116a5d4d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5d51 jne 0x116a5d64 */
  if (!C.zf) goto L_116a5d64;
  /* 116a5d53 mov dword ptr [0x116d080c], 1 */
  w32((uint32_t)(0x116d080c), (0x1u));
  /* 116a5d5d mov eax, dword ptr [0x116d0838] */
  EAX = (r32((uint32_t)(0x116d0838)));
  /* 116a5d62 jmp 0x116a5d67 */
  goto L_116a5d67;
L_116a5d64:;
  /* 116a5d64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_116a5d67:;
  /* 116a5d67 pop ebp */
  EBP = (pop32());
  /* 116a5d68 ret  */
  ESPCHK(0x116a5d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10015d70 @ 0x116a5d70 (80 bytes, 26 insns) [1 switch table(s)] */
void f_116a5d70(void) {
  FTRACE(0x116a5d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a5d70 push ebp */
  push32((uint32_t)(EBP));
  /* 116a5d71 mov ebp, esp */
  EBP = (ESP);
  /* 116a5d73 push ecx */
  push32((uint32_t)(ECX));
  /* 116a5d74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a5d77 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a5d7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a5d7d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a5d83 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116a5d86 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5d8a ja 0x116a5dba */
  if ((!C.cf&&!C.zf)) goto L_116a5dba;
  /* 116a5d8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a5d8f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116a5d91 mov dl, byte ptr [eax + 0x116a5dd4] */
  DL = (r8((uint32_t)(EAX + 0x116a5dd4)));
  /* 116a5d97 jmp dword ptr [edx*4 + 0x116a5dc0] */
  switch (EDX) {
    case 0: goto L_116a5d9e;
    case 1: goto L_116a5da5;
    case 2: goto L_116a5dac;
    case 3: goto L_116a5db3;
    case 4: goto L_116a5dba;
    default: x86_unimpl("switch@0x116a5d97 out of table"); return;
  }
L_116a5d9e:;
  /* 116a5d9e mov eax, 0x411 */
  EAX = (0x411u);
  /* 116a5da3 jmp 0x116a5dbc */
  goto L_116a5dbc;
L_116a5da5:;
  /* 116a5da5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 116a5daa jmp 0x116a5dbc */
  goto L_116a5dbc;
L_116a5dac:;
  /* 116a5dac mov eax, 0x412 */
  EAX = (0x412u);
  /* 116a5db1 jmp 0x116a5dbc */
  goto L_116a5dbc;
L_116a5db3:;
  /* 116a5db3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 116a5db8 jmp 0x116a5dbc */
  goto L_116a5dbc;
L_116a5dba:;
  /* 116a5dba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116a5dbc:;
  /* 116a5dbc mov esp, ebp */
  ESP = (EBP);
  /* 116a5dbe pop ebp */
  EBP = (pop32());
  /* 116a5dbf ret  */
  ESPCHK(0x116a5d70u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x116a5df0 (116 bytes, 29 insns) */
void f_116a5df0(void) {
  FTRACE(0x116a5df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a5df0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a5df1 mov ebp, esp */
  EBP = (ESP);
  /* 116a5df3 push ecx */
  push32((uint32_t)(ECX));
  /* 116a5df4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116a5dfb jmp 0x116a5e06 */
  goto L_116a5e06;
L_116a5dfd:;
  /* 116a5dfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a5e00 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5e03 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116a5e06:;
  /* 116a5e06 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5e0d jge 0x116a5e1b */
  if ((C.sf==C.of)) goto L_116a5e1b;
  /* 116a5e0f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a5e12 mov byte ptr [ecx + 0x116d1dc0], 0 */
  w8((uint32_t)(ECX + 0x116d1dc0), (0x0u));
  /* 116a5e19 jmp 0x116a5dfd */
  goto L_116a5dfd;
L_116a5e1b:;
  /* 116a5e1b mov dword ptr [0x116d1c38], 0 */
  w32((uint32_t)(0x116d1c38), (0x0u));
  /* 116a5e25 mov dword ptr [0x116d1cbc], 0 */
  w32((uint32_t)(0x116d1cbc), (0x0u));
  /* 116a5e2f mov dword ptr [0x116d1ec4], 0 */
  w32((uint32_t)(0x116d1ec4), (0x0u));
  /* 116a5e39 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116a5e40 jmp 0x116a5e4b */
  goto L_116a5e4b;
L_116a5e42:;
  /* 116a5e42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a5e45 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5e48 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116a5e4b:;
  /* 116a5e4b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5e4f jge 0x116a5e60 */
  if ((C.sf==C.of)) goto L_116a5e60;
  /* 116a5e51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a5e54 mov word ptr [eax*2 + 0x116d1cb0], 0 */
  w16((uint32_t)(EAX*2 + 0x116d1cb0), (0x0u));
  /* 116a5e5e jmp 0x116a5e42 */
  goto L_116a5e42;
L_116a5e60:;
  /* 116a5e60 mov esp, ebp */
  ESP = (EBP);
  /* 116a5e62 pop ebp */
  EBP = (pop32());
  /* 116a5e63 ret  */
  ESPCHK(0x116a5df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015e70 @ 0x116a5e70 (770 bytes, 175 insns) */
void f_116a5e70(void) {
  FTRACE(0x116a5e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a5e70 push ebp */
  push32((uint32_t)(EBP));
  /* 116a5e71 mov ebp, esp */
  EBP = (ESP);
  /* 116a5e73 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a5e79 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 116a5e7f push eax */
  push32((uint32_t)(EAX));
  /* 116a5e80 mov ecx, dword ptr [0x116d1c38] */
  ECX = (r32((uint32_t)(0x116d1c38)));
  /* 116a5e86 push ecx */
  push32((uint32_t)(ECX));
  /* 116a5e87 call dword ptr [0x116d338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d338c))), 0x116a5e8du);
  /* 116a5e8d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5e90 jne 0x116a60a9 */
  if (!C.zf) goto L_116a60a9;
  /* 116a5e96 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 116a5ea0 jmp 0x116a5eb1 */
  goto L_116a5eb1;
L_116a5ea2:;
  /* 116a5ea2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116a5ea8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5eab mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_116a5eb1:;
  /* 116a5eb1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5ebb jae 0x116a5ed2 */
  if (!C.cf) goto L_116a5ed2;
  /* 116a5ebd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116a5ec3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 116a5ec9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 116a5ed0 jmp 0x116a5ea2 */
  goto L_116a5ea2;
L_116a5ed2:;
  /* 116a5ed2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 116a5ed9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 116a5edf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116a5ee2 jmp 0x116a5eed */
  goto L_116a5eed;
L_116a5ee4:;
  /* 116a5ee4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a5ee7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5eea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116a5eed:;
  /* 116a5eed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a5ef0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116a5ef2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116a5ef4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a5ef6 je 0x116a5f38 */
  if (C.zf) goto L_116a5f38;
  /* 116a5ef8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a5efb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116a5efd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116a5eff mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 116a5f05 jmp 0x116a5f16 */
  goto L_116a5f16;
L_116a5f07:;
  /* 116a5f07 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116a5f0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5f10 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_116a5f16:;
  /* 116a5f16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a5f19 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116a5f1b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 116a5f1e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5f24 ja 0x116a5f36 */
  if ((!C.cf&&!C.zf)) goto L_116a5f36;
  /* 116a5f26 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116a5f2c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 116a5f34 jmp 0x116a5f07 */
  goto L_116a5f07;
L_116a5f36:;
  /* 116a5f36 jmp 0x116a5ee4 */
  goto L_116a5ee4;
L_116a5f38:;
  /* 116a5f38 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a5f3a mov eax, dword ptr [0x116d1ec4] */
  EAX = (r32((uint32_t)(0x116d1ec4)));
  /* 116a5f3f push eax */
  push32((uint32_t)(EAX));
  /* 116a5f40 mov ecx, dword ptr [0x116d1c38] */
  ECX = (r32((uint32_t)(0x116d1c38)));
  /* 116a5f46 push ecx */
  push32((uint32_t)(ECX));
  /* 116a5f47 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 116a5f4d push edx */
  push32((uint32_t)(EDX));
  /* 116a5f4e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 116a5f53 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 116a5f59 push eax */
  push32((uint32_t)(EAX));
  /* 116a5f5a push 1 */
  push32((uint32_t)(0x1u));
  /* 116a5f5c call 0x116a8540 */
  push32(0x116a5f61u); f_116a8540();
  /* 116a5f61 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5f64 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a5f66 mov ecx, dword ptr [0x116d1c38] */
  ECX = (r32((uint32_t)(0x116d1c38)));
  /* 116a5f6c push ecx */
  push32((uint32_t)(ECX));
  /* 116a5f6d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 116a5f72 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 116a5f78 push edx */
  push32((uint32_t)(EDX));
  /* 116a5f79 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 116a5f7e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 116a5f84 push eax */
  push32((uint32_t)(EAX));
  /* 116a5f85 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 116a5f8a mov ecx, dword ptr [0x116d1ec4] */
  ECX = (r32((uint32_t)(0x116d1ec4)));
  /* 116a5f90 push ecx */
  push32((uint32_t)(ECX));
  /* 116a5f91 call 0x116a9150 */
  push32(0x116a5f96u); f_116a9150();
  /* 116a5f96 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5f99 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a5f9b mov edx, dword ptr [0x116d1c38] */
  EDX = (r32((uint32_t)(0x116d1c38)));
  /* 116a5fa1 push edx */
  push32((uint32_t)(EDX));
  /* 116a5fa2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 116a5fa7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 116a5fad push eax */
  push32((uint32_t)(EAX));
  /* 116a5fae push 0x100 */
  push32((uint32_t)(0x100u));
  /* 116a5fb3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 116a5fb9 push ecx */
  push32((uint32_t)(ECX));
  /* 116a5fba push 0x200 */
  push32((uint32_t)(0x200u));
  /* 116a5fbf mov edx, dword ptr [0x116d1ec4] */
  EDX = (r32((uint32_t)(0x116d1ec4)));
  /* 116a5fc5 push edx */
  push32((uint32_t)(EDX));
  /* 116a5fc6 call 0x116a9150 */
  push32(0x116a5fcbu); f_116a9150();
  /* 116a5fcb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5fce mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 116a5fd8 jmp 0x116a5fe9 */
  goto L_116a5fe9;
L_116a5fda:;
  /* 116a5fda mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116a5fe0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a5fe3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_116a5fe9:;
  /* 116a5fe9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a5ff3 jae 0x116a60a4 */
  if (!C.cf) goto L_116a60a4;
  /* 116a5ff9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116a5fff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116a6001 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 116a6009 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 116a600c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a600e je 0x116a6046 */
  if (C.zf) goto L_116a6046;
  /* 116a6010 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116a6016 mov cl, byte ptr [eax + 0x116d1dc1] */
  CL = (r8((uint32_t)(EAX + 0x116d1dc1)));
  /* 116a601c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 116a601f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116a6025 mov byte ptr [edx + 0x116d1dc1], cl */
  w8((uint32_t)(EDX + 0x116d1dc1), (CL));
  /* 116a602b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116a6031 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116a6037 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 116a603e mov byte ptr [eax + 0x116d1cc0], dl */
  w8((uint32_t)(EAX + 0x116d1cc0), (DL));
  /* 116a6044 jmp 0x116a609f */
  goto L_116a609f;
L_116a6046:;
  /* 116a6046 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116a604c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116a604e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 116a6056 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 116a6059 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a605b je 0x116a6092 */
  if (C.zf) goto L_116a6092;
  /* 116a605d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116a6063 mov al, byte ptr [edx + 0x116d1dc1] */
  AL = (r8((uint32_t)(EDX + 0x116d1dc1)));
  /* 116a6069 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 116a606b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116a6071 mov byte ptr [ecx + 0x116d1dc1], al */
  w8((uint32_t)(ECX + 0x116d1dc1), (AL));
  /* 116a6077 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116a607d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116a6083 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 116a608a mov byte ptr [edx + 0x116d1cc0], cl */
  w8((uint32_t)(EDX + 0x116d1cc0), (CL));
  /* 116a6090 jmp 0x116a609f */
  goto L_116a609f;
L_116a6092:;
  /* 116a6092 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116a6098 mov byte ptr [edx + 0x116d1cc0], 0 */
  w8((uint32_t)(EDX + 0x116d1cc0), (0x0u));
L_116a609f:;
  /* 116a609f jmp 0x116a5fda */
  goto L_116a5fda;
L_116a60a4:;
  /* 116a60a4 jmp 0x116a616e */
  goto L_116a616e;
L_116a60a9:;
  /* 116a60a9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 116a60b3 jmp 0x116a60c4 */
  goto L_116a60c4;
L_116a60b5:;
  /* 116a60b5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116a60bb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a60be mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_116a60c4:;
  /* 116a60c4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a60ce jae 0x116a616e */
  if (!C.cf) goto L_116a616e;
  /* 116a60d4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a60db jb 0x116a6118 */
  if (C.cf) goto L_116a6118;
  /* 116a60dd cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a60e4 ja 0x116a6118 */
  if ((!C.cf&&!C.zf)) goto L_116a6118;
  /* 116a60e6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116a60ec mov dl, byte ptr [ecx + 0x116d1dc1] */
  DL = (r8((uint32_t)(ECX + 0x116d1dc1)));
  /* 116a60f2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 116a60f5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116a60fb mov byte ptr [eax + 0x116d1dc1], dl */
  w8((uint32_t)(EAX + 0x116d1dc1), (DL));
  /* 116a6101 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116a6107 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a610a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116a6110 mov byte ptr [edx + 0x116d1cc0], cl */
  w8((uint32_t)(EDX + 0x116d1cc0), (CL));
  /* 116a6116 jmp 0x116a6169 */
  goto L_116a6169;
L_116a6118:;
  /* 116a6118 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a611f jb 0x116a615c */
  if (C.cf) goto L_116a615c;
  /* 116a6121 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a6128 ja 0x116a615c */
  if ((!C.cf&&!C.zf)) goto L_116a615c;
  /* 116a612a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116a6130 mov cl, byte ptr [eax + 0x116d1dc1] */
  CL = (r8((uint32_t)(EAX + 0x116d1dc1)));
  /* 116a6136 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 116a6139 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116a613f mov byte ptr [edx + 0x116d1dc1], cl */
  w8((uint32_t)(EDX + 0x116d1dc1), (CL));
  /* 116a6145 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116a614b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a614e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116a6154 mov byte ptr [ecx + 0x116d1cc0], al */
  w8((uint32_t)(ECX + 0x116d1cc0), (AL));
  /* 116a615a jmp 0x116a6169 */
  goto L_116a6169;
L_116a615c:;
  /* 116a615c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116a6162 mov byte ptr [edx + 0x116d1cc0], 0 */
  w8((uint32_t)(EDX + 0x116d1cc0), (0x0u));
L_116a6169:;
  /* 116a6169 jmp 0x116a60b5 */
  goto L_116a60b5;
L_116a616e:;
  /* 116a616e mov esp, ebp */
  ESP = (EBP);
  /* 116a6170 pop ebp */
  EBP = (pop32());
  /* 116a6171 ret  */
  ESPCHK(0x116a5e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10016180 @ 0x116a6180 (23 bytes, 9 insns) */
void f_116a6180(void) {
  FTRACE(0x116a6180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a6180 push ebp */
  push32((uint32_t)(EBP));
  /* 116a6181 mov ebp, esp */
  EBP = (ESP);
  /* 116a6183 cmp dword ptr [0x116d1cbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d1cbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a618a je 0x116a6193 */
  if (C.zf) goto L_116a6193;
  /* 116a618c mov eax, dword ptr [0x116d1c38] */
  EAX = (r32((uint32_t)(0x116d1c38)));
  /* 116a6191 jmp 0x116a6195 */
  goto L_116a6195;
L_116a6193:;
  /* 116a6193 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116a6195:;
  /* 116a6195 pop ebp */
  EBP = (pop32());
  /* 116a6196 ret  */
  ESPCHK(0x116a6180u, _esp0);
  ESP += 4; return;
}

/* FUN_100161a0 @ 0x116a61a0 (34 bytes, 10 insns) */
void f_116a61a0(void) {
  FTRACE(0x116a61a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a61a0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a61a1 mov ebp, esp */
  EBP = (ESP);
  /* 116a61a3 cmp dword ptr [0x116d2050], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d2050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a61aa jne 0x116a61c0 */
  if (!C.zf) goto L_116a61c0;
  /* 116a61ac push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 116a61ae call 0x116a59c0 */
  push32(0x116a61b3u); f_116a59c0();
  /* 116a61b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a61b6 mov dword ptr [0x116d2050], 1 */
  w32((uint32_t)(0x116d2050), (0x1u));
L_116a61c0:;
  /* 116a61c0 pop ebp */
  EBP = (pop32());
  /* 116a61c1 ret  */
  ESPCHK(0x116a61a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100161d0 @ 0x116a61d0 (664 bytes, 262 insns) [15 switch table(s)] */
void f_116a61d0(void) {
  FTRACE(0x116a61d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a61d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a61d1 mov ebp, esp */
  EBP = (ESP);
  /* 116a61d3 push edi */
  push32((uint32_t)(EDI));
  /* 116a61d4 push esi */
  push32((uint32_t)(ESI));
  /* 116a61d5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 116a61d8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a61db mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 116a61de mov eax, ecx */
  EAX = (ECX);
  /* 116a61e0 mov edx, ecx */
  EDX = (ECX);
  /* 116a61e2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a61e4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a61e6 jbe 0x116a61f0 */
  if ((C.cf||C.zf)) goto L_116a61f0;
  /* 116a61e8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a61ea jb 0x116a6368 */
  if (C.cf) goto L_116a6368;
L_116a61f0:;
  /* 116a61f0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 116a61f6 jne 0x116a620c */
  if (!C.zf) goto L_116a620c;
  /* 116a61f8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116a61fb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 116a61fe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a6201 jb 0x116a622c */
  if (C.cf) goto L_116a622c;
  /* 116a6203 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 116a6205 jmp dword ptr [edx*4 + 0x116a6318] */
  switch (EDX) {
    case 0: goto L_116a6328;
    case 1: goto L_116a6330;
    case 2: goto L_116a633c;
    case 3: goto L_116a6350;
    default: x86_unimpl("switch@0x116a6205 out of table"); return;
  }
L_116a620c:;
  /* 116a620c mov eax, edi */
  EAX = (EDI);
  /* 116a620e mov edx, 3 */
  EDX = (0x3u);
  /* 116a6213 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a6216 jb 0x116a6224 */
  if (C.cf) goto L_116a6224;
  /* 116a6218 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 116a621b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a621d jmp dword ptr [eax*4 + 0x116a6230] */
  switch (EAX) {
    case 1: goto L_116a6240;
    case 2: goto L_116a626c;
    case 3: goto L_116a6290;
    default: x86_unimpl("switch@0x116a621d out of table"); return;
  }
L_116a6224:;
  /* 116a6224 jmp dword ptr [ecx*4 + 0x116a6328] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x116a6328)))); return;
  /* 116a622b nop  */
  /* nop */
L_116a622c:;
  /* 116a622c jmp dword ptr [ecx*4 + 0x116a62ac] */
  switch (ECX) {
    case 0: goto L_116a630f;
    case 1: goto L_116a62fc;
    case 2: goto L_116a62f4;
    case 3: goto L_116a62ec;
    case 4: goto L_116a62e4;
    case 5: goto L_116a62dc;
    case 6: goto L_116a62d4;
    case 7: goto L_116a62cc;
    default: x86_unimpl("switch@0x116a622c out of table"); return;
  }
  /* 116a6233 nop  */
  /* nop */
L_116a6240:;
  /* 116a6240 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 116a6242 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116a6244 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116a6246 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 116a6249 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 116a624c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 116a624f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116a6252 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 116a6255 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 116a6258 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 116a625b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a625e jb 0x116a622c */
  if (C.cf) goto L_116a622c;
  /* 116a6260 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 116a6262 jmp dword ptr [edx*4 + 0x116a6318] */
  switch (EDX) {
    case 0: goto L_116a6328;
    case 1: goto L_116a6330;
    case 2: goto L_116a633c;
    case 3: goto L_116a6350;
    default: x86_unimpl("switch@0x116a6262 out of table"); return;
  }
  /* 116a6269 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_116a626c:;
  /* 116a626c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 116a626e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116a6270 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116a6272 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 116a6275 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116a6278 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 116a627b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 116a627e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 116a6281 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a6284 jb 0x116a622c */
  if (C.cf) goto L_116a622c;
  /* 116a6286 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 116a6288 jmp dword ptr [edx*4 + 0x116a6318] */
  switch (EDX) {
    case 0: goto L_116a6328;
    case 1: goto L_116a6330;
    case 2: goto L_116a633c;
    case 3: goto L_116a6350;
    default: x86_unimpl("switch@0x116a6288 out of table"); return;
  }
  /* 116a628f nop  */
  /* nop */
L_116a6290:;
  /* 116a6290 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 116a6292 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116a6294 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116a6296 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 116a6297 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116a629a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 116a629b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a629e jb 0x116a622c */
  if (C.cf) goto L_116a622c;
  /* 116a62a0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 116a62a2 jmp dword ptr [edx*4 + 0x116a6318] */
  switch (EDX) {
    case 0: goto L_116a6328;
    case 1: goto L_116a6330;
    case 2: goto L_116a633c;
    case 3: goto L_116a6350;
    default: x86_unimpl("switch@0x116a62a2 out of table"); return;
  }
  /* 116a62a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_116a62cc:;
  /* 116a62cc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 116a62d0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_116a62d4:;
  /* 116a62d4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 116a62d8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_116a62dc:;
  /* 116a62dc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 116a62e0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_116a62e4:;
  /* 116a62e4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 116a62e8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_116a62ec:;
  /* 116a62ec mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 116a62f0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_116a62f4:;
  /* 116a62f4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 116a62f8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_116a62fc:;
  /* 116a62fc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 116a6300 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 116a6304 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 116a630b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 116a630d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_116a630f:;
  /* 116a630f jmp dword ptr [edx*4 + 0x116a6318] */
  switch (EDX) {
    case 0: goto L_116a6328;
    case 1: goto L_116a6330;
    case 2: goto L_116a633c;
    case 3: goto L_116a6350;
    default: x86_unimpl("switch@0x116a630f out of table"); return;
  }
  /* 116a6316 mov edi, edi */
  EDI = (EDI);
L_116a6328:;
  /* 116a6328 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a632b pop esi */
  ESI = (pop32());
  /* 116a632c pop edi */
  EDI = (pop32());
  /* 116a632d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116a632e ret  */
  ESPCHK(0x116a61d0u, _esp0);
  ESP += 4; return;
  /* 116a632f nop  */
  /* nop */
L_116a6330:;
  /* 116a6330 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116a6332 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116a6334 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a6337 pop esi */
  ESI = (pop32());
  /* 116a6338 pop edi */
  EDI = (pop32());
  /* 116a6339 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116a633a ret  */
  ESPCHK(0x116a61d0u, _esp0);
  ESP += 4; return;
  /* 116a633b nop  */
  /* nop */
L_116a633c:;
  /* 116a633c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116a633e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116a6340 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 116a6343 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 116a6346 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a6349 pop esi */
  ESI = (pop32());
  /* 116a634a pop edi */
  EDI = (pop32());
  /* 116a634b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116a634c ret  */
  ESPCHK(0x116a61d0u, _esp0);
  ESP += 4; return;
  /* 116a634d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_116a6350:;
  /* 116a6350 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116a6352 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116a6354 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 116a6357 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 116a635a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 116a635d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 116a6360 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a6363 pop esi */
  ESI = (pop32());
  /* 116a6364 pop edi */
  EDI = (pop32());
  /* 116a6365 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116a6366 ret  */
  ESPCHK(0x116a61d0u, _esp0);
  ESP += 4; return;
  /* 116a6367 nop  */
  /* nop */
L_116a6368:;
  /* 116a6368 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 116a636c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 116a6370 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 116a6376 jne 0x116a639c */
  if (!C.zf) goto L_116a639c;
  /* 116a6378 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116a637b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 116a637e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a6381 jb 0x116a6390 */
  if (C.cf) goto L_116a6390;
  /* 116a6383 std  */
  C.df=1;
  /* 116a6384 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 116a6386 cld  */
  C.df=0;
  /* 116a6387 jmp dword ptr [edx*4 + 0x116a64b0] */
  switch (EDX) {
    case 0: goto L_116a64c0;
    case 1: goto L_116a64c8;
    case 2: goto L_116a64d8;
    case 3: goto L_116a64ec;
    default: x86_unimpl("switch@0x116a6387 out of table"); return;
  }
  /* 116a638e mov edi, edi */
  EDI = (EDI);
L_116a6390:;
  /* 116a6390 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 116a6392 jmp dword ptr [ecx*4 + 0x116a6460] */
  switch (ECX) {
    case 0: goto L_116a64a7;
    default: x86_unimpl("switch@0x116a6392 out of table"); return;
  }
  /* 116a6399 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_116a639c:;
  /* 116a639c mov eax, edi */
  EAX = (EDI);
  /* 116a639e mov edx, 3 */
  EDX = (0x3u);
  /* 116a63a3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a63a6 jb 0x116a63b4 */
  if (C.cf) goto L_116a63b4;
  /* 116a63a8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 116a63ab sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a63ad jmp dword ptr [eax*4 + 0x116a63b8] */
  switch (EAX) {
    case 1: goto L_116a63c8;
    case 2: goto L_116a63e8;
    case 3: goto L_116a6410;
    default: x86_unimpl("switch@0x116a63ad out of table"); return;
  }
L_116a63b4:;
  /* 116a63b4 jmp dword ptr [ecx*4 + 0x116a64b0] */
  switch (ECX) {
    case 0: goto L_116a64c0;
    case 1: goto L_116a64c8;
    case 2: goto L_116a64d8;
    case 3: goto L_116a64ec;
    default: x86_unimpl("switch@0x116a63b4 out of table"); return;
  }
  /* 116a63bb nop  */
  /* nop */
L_116a63c8:;
  /* 116a63c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 116a63cb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 116a63cd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 116a63d0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 116a63d1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116a63d4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 116a63d5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a63d8 jb 0x116a6390 */
  if (C.cf) goto L_116a6390;
  /* 116a63da std  */
  C.df=1;
  /* 116a63db rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 116a63dd cld  */
  C.df=0;
  /* 116a63de jmp dword ptr [edx*4 + 0x116a64b0] */
  switch (EDX) {
    case 0: goto L_116a64c0;
    case 1: goto L_116a64c8;
    case 2: goto L_116a64d8;
    case 3: goto L_116a64ec;
    default: x86_unimpl("switch@0x116a63de out of table"); return;
  }
  /* 116a63e5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_116a63e8:;
  /* 116a63e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 116a63eb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 116a63ed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 116a63f0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 116a63f3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116a63f6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 116a63f9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a63fc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a63ff cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a6402 jb 0x116a6390 */
  if (C.cf) goto L_116a6390;
  /* 116a6404 std  */
  C.df=1;
  /* 116a6405 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 116a6407 cld  */
  C.df=0;
  /* 116a6408 jmp dword ptr [edx*4 + 0x116a64b0] */
  switch (EDX) {
    case 0: goto L_116a64c0;
    case 1: goto L_116a64c8;
    case 2: goto L_116a64d8;
    case 3: goto L_116a64ec;
    default: x86_unimpl("switch@0x116a6408 out of table"); return;
  }
  /* 116a640f nop  */
  /* nop */
L_116a6410:;
  /* 116a6410 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 116a6413 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 116a6415 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 116a6418 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 116a641b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 116a641e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 116a6421 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116a6424 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 116a6427 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a642a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a642d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a6430 jb 0x116a6390 */
  if (C.cf) goto L_116a6390;
  /* 116a6436 std  */
  C.df=1;
  /* 116a6437 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 116a6439 cld  */
  C.df=0;
  /* 116a643a jmp dword ptr [edx*4 + 0x116a64b0] */
  switch (EDX) {
    case 0: goto L_116a64c0;
    case 1: goto L_116a64c8;
    case 2: goto L_116a64d8;
    case 3: goto L_116a64ec;
    default: x86_unimpl("switch@0x116a643a out of table"); return;
  }
  /* 116a6441 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 116a6444 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 116a6448 insb byte ptr es:[edi], dx */
  x86_unimpl("insb @ 0x116a6448");
  /* 116a6449 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 116a644c je 0x116a64b2 */
  if (C.zf) goto L_116a64b2;
  /* 116a644e push 0x11 */
  push32((uint32_t)(0x11u));
  /* 116a6450 jl 0x116a64b6 */
  if ((C.sf!=C.of)) goto L_116a64b6;
  /* 116a6452 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 116a6454 test byte ptr [edx + ebp*2 + 0x11], ah */
  { uint32_t _r=(r8((uint32_t)(EDX + EBP*2 + 0x11)))&(AH); fl_logic(_r,8); }
  /* 116a6458 mov word ptr [edx + ebp*2 + 0x11], fs */
  w16((uint32_t)(EDX + EBP*2 + 0x11), (C.seg_fs));
  /* 116a645c xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 116a645d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 116a6464 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 116a6468 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 116a646c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 116a6470 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 116a6474 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 116a6478 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 116a647c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 116a6480 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 116a6484 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 116a6488 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 116a648c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 116a6490 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 116a6494 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 116a6498 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 116a649c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 116a64a3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 116a64a5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_116a64a7:;
  /* 116a64a7 jmp dword ptr [edx*4 + 0x116a64b0] */
  switch (EDX) {
    case 0: goto L_116a64c0;
    case 1: goto L_116a64c8;
    case 2: goto L_116a64d8;
    case 3: goto L_116a64ec;
    default: x86_unimpl("switch@0x116a64a7 out of table"); return;
  }
  /* 116a64ae mov edi, edi */
  EDI = (EDI);
L_116a64c0:;
  /* 116a64c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a64c3 pop esi */
  ESI = (pop32());
  /* 116a64c4 pop edi */
  EDI = (pop32());
  /* 116a64c5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116a64c6 ret  */
  ESPCHK(0x116a61d0u, _esp0);
  ESP += 4; return;
  /* 116a64c7 nop  */
  /* nop */
L_116a64c8:;
  /* 116a64c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 116a64cb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 116a64ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a64d1 pop esi */
  ESI = (pop32());
  /* 116a64d2 pop edi */
  EDI = (pop32());
  /* 116a64d3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116a64d4 ret  */
  ESPCHK(0x116a61d0u, _esp0);
  ESP += 4; return;
  /* 116a64d5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_116a64d8:;
  /* 116a64d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 116a64db mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 116a64de mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 116a64e1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 116a64e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a64e7 pop esi */
  ESI = (pop32());
  /* 116a64e8 pop edi */
  EDI = (pop32());
  /* 116a64e9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116a64ea ret  */
  ESPCHK(0x116a61d0u, _esp0);
  ESP += 4; return;
  /* 116a64eb nop  */
  /* nop */
L_116a64ec:;
  /* 116a64ec mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 116a64ef mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 116a64f2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 116a64f5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 116a64f8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 116a64fb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 116a64fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a6501 pop esi */
  ESI = (pop32());
  /* 116a6502 pop edi */
  EDI = (pop32());
  /* 116a6503 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116a6504 ret  */
  ESPCHK(0x116a61d0u, _esp0);
  ESP += 4; return;
L_116a64b2: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x116a64b2 (unresolved jump table)"); return;
L_116a64b6: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x116a64b6 (unresolved jump table)"); return;
}

/* __aulldiv @ 0x116a6510 (104 bytes, 43 insns) */
void f_116a6510(void) {
  FTRACE(0x116a6510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a6510 push ebx */
  push32((uint32_t)(EBX));
  /* 116a6511 push esi */
  push32((uint32_t)(ESI));
  /* 116a6512 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 116a6516 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a6518 jne 0x116a6532 */
  if (!C.zf) goto L_116a6532;
  /* 116a651a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 116a651e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 116a6522 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116a6524 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116a6526 mov ebx, eax */
  EBX = (EAX);
  /* 116a6528 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 116a652c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116a652e mov edx, ebx */
  EDX = (EBX);
  /* 116a6530 jmp 0x116a6573 */
  goto L_116a6573;
L_116a6532:;
  /* 116a6532 mov ecx, eax */
  ECX = (EAX);
  /* 116a6534 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 116a6538 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 116a653c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_116a6540:;
  /* 116a6540 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 116a6542 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 116a6544 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 116a6546 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 116a6548 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116a654a jne 0x116a6540 */
  if (!C.zf) goto L_116a6540;
  /* 116a654c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116a654e mov esi, eax */
  ESI = (EAX);
  /* 116a6550 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 116a6554 mov ecx, eax */
  ECX = (EAX);
  /* 116a6556 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 116a655a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 116a655c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a655e jb 0x116a656e */
  if (C.cf) goto L_116a656e;
  /* 116a6560 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a6564 ja 0x116a656e */
  if ((!C.cf&&!C.zf)) goto L_116a656e;
  /* 116a6566 jb 0x116a656f */
  if (C.cf) goto L_116a656f;
  /* 116a6568 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a656c jbe 0x116a656f */
  if ((C.cf||C.zf)) goto L_116a656f;
L_116a656e:;
  /* 116a656e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_116a656f:;
  /* 116a656f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116a6571 mov eax, esi */
  EAX = (ESI);
L_116a6573:;
  /* 116a6573 pop esi */
  ESI = (pop32());
  /* 116a6574 pop ebx */
  EBX = (pop32());
  /* 116a6575 ret 0x10 */
  ESPCHK(0x116a6510u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x116a6580 (117 bytes, 44 insns) */
void f_116a6580(void) {
  FTRACE(0x116a6580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a6580 push ebx */
  push32((uint32_t)(EBX));
  /* 116a6581 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 116a6585 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a6587 jne 0x116a65a1 */
  if (!C.zf) goto L_116a65a1;
  /* 116a6589 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 116a658d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 116a6591 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116a6593 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116a6595 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 116a6599 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116a659b mov eax, edx */
  EAX = (EDX);
  /* 116a659d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116a659f jmp 0x116a65f1 */
  goto L_116a65f1;
L_116a65a1:;
  /* 116a65a1 mov ecx, eax */
  ECX = (EAX);
  /* 116a65a3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 116a65a7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 116a65ab mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_116a65af:;
  /* 116a65af shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 116a65b1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 116a65b3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 116a65b5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 116a65b7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116a65b9 jne 0x116a65af */
  if (!C.zf) goto L_116a65af;
  /* 116a65bb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116a65bd mov ecx, eax */
  ECX = (EAX);
  /* 116a65bf mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 116a65c3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 116a65c4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 116a65c8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a65ca jb 0x116a65da */
  if (C.cf) goto L_116a65da;
  /* 116a65cc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a65d0 ja 0x116a65da */
  if ((!C.cf&&!C.zf)) goto L_116a65da;
  /* 116a65d2 jb 0x116a65e2 */
  if (C.cf) goto L_116a65e2;
  /* 116a65d4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a65d8 jbe 0x116a65e2 */
  if ((C.cf||C.zf)) goto L_116a65e2;
L_116a65da:;
  /* 116a65da sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a65de sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_116a65e2:;
  /* 116a65e2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a65e6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a65ea neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 116a65ec neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116a65ee sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_116a65f1:;
  /* 116a65f1 pop ebx */
  EBX = (pop32());
  /* 116a65f2 ret 0x10 */
  ESPCHK(0x116a6580u, _esp0);
  ESP += 20; return;
}

/* FUN_10016600 @ 0x116a6600 (628 bytes, 214 insns) */
void f_116a6600(void) {
  FTRACE(0x116a6600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a6600 push ebp */
  push32((uint32_t)(EBP));
  /* 116a6601 mov ebp, esp */
  EBP = (ESP);
  /* 116a6603 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a6606 push ebx */
  push32((uint32_t)(EBX));
  /* 116a6607 push esi */
  push32((uint32_t)(ESI));
  /* 116a6608 push edi */
  push32((uint32_t)(EDI));
L_116a6609:;
  /* 116a6609 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a660d jne 0x116a662d */
  if (!C.zf) goto L_116a662d;
  /* 116a660f push 0x116cb7f0 */
  push32((uint32_t)(0x116cb7f0u));
  /* 116a6614 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a6616 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 116a6618 push 0x116cb7e4 */
  push32((uint32_t)(0x116cb7e4u));
  /* 116a661d push 2 */
  push32((uint32_t)(0x2u));
  /* 116a661f call 0x1169ade0 */
  push32(0x116a6624u); f_1169ade0();
  /* 116a6624 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a6627 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a662a jne 0x116a662d */
  if (!C.zf) goto L_116a662d;
  /* 116a662c int3  */
  x86_unimpl("int3 @ 0x116a662c");
L_116a662d:;
  /* 116a662d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a662f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a6631 jne 0x116a6609 */
  if (!C.zf) goto L_116a6609;
  /* 116a6633 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a6636 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116a6639 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a663c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 116a663f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116a6642 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a6645 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116a6648 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 116a664e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a6650 je 0x116a665f */
  if (C.zf) goto L_116a665f;
  /* 116a6652 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a6655 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 116a6658 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 116a665b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a665d je 0x116a6675 */
  if (C.zf) goto L_116a6675;
L_116a665f:;
  /* 116a665f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a6662 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 116a6665 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 116a6667 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a666a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 116a666d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116a6670 jmp 0x116a686d */
  goto L_116a686d;
L_116a6675:;
  /* 116a6675 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a6678 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 116a667b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 116a667e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a6680 je 0x116a66cc */
  if (C.zf) goto L_116a66cc;
  /* 116a6682 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a6685 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 116a668c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a668f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 116a6692 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 116a6695 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a6697 je 0x116a66b5 */
  if (C.zf) goto L_116a66b5;
  /* 116a6699 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a669c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a669f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 116a66a2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116a66a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a66a7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116a66aa and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 116a66ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a66b0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 116a66b3 jmp 0x116a66cc */
  goto L_116a66cc;
L_116a66b5:;
  /* 116a66b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a66b8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116a66bb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 116a66be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a66c1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 116a66c4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116a66c7 jmp 0x116a686d */
  goto L_116a686d;
L_116a66cc:;
  /* 116a66cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a66cf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116a66d2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 116a66d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a66d8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 116a66db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a66de mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116a66e1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 116a66e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a66e7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 116a66ea mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a66ed mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 116a66f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116a66fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a66fe mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 116a6701 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a6704 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 116a6707 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 116a670d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a670f jne 0x116a673f */
  if (!C.zf) goto L_116a673f;
  /* 116a6711 cmp dword ptr [ebp - 8], 0x116ceb38 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x116ceb38u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a6718 je 0x116a6723 */
  if (C.zf) goto L_116a6723;
  /* 116a671a cmp dword ptr [ebp - 8], 0x116ceb58 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x116ceb58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a6721 jne 0x116a6733 */
  if (!C.zf) goto L_116a6733;
L_116a6723:;
  /* 116a6723 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a6726 push edx */
  push32((uint32_t)(EDX));
  /* 116a6727 call 0x116ab0d0 */
  push32(0x116a672cu); f_116ab0d0();
  /* 116a672c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a672f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a6731 jne 0x116a673f */
  if (!C.zf) goto L_116a673f;
L_116a6733:;
  /* 116a6733 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a6736 push eax */
  push32((uint32_t)(EAX));
  /* 116a6737 call 0x116ab000 */
  push32(0x116a673cu); f_116ab000();
  /* 116a673c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a673f:;
  /* 116a673f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a6742 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116a6745 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 116a674b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a674d je 0x116a682b */
  if (C.zf) goto L_116a682b;
L_116a6753:;
  /* 116a6753 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a6756 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a6759 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 116a675b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a675e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a6760 jge 0x116a6783 */
  if ((C.sf==C.of)) goto L_116a6783;
  /* 116a6762 push 0x116cb7a4 */
  push32((uint32_t)(0x116cb7a4u));
  /* 116a6767 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a6769 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 116a676e push 0x116cb7e4 */
  push32((uint32_t)(0x116cb7e4u));
  /* 116a6773 push 2 */
  push32((uint32_t)(0x2u));
  /* 116a6775 call 0x1169ade0 */
  push32(0x116a677au); f_1169ade0();
  /* 116a677a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a677d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a6780 jne 0x116a6783 */
  if (!C.zf) goto L_116a6783;
  /* 116a6782 int3  */
  x86_unimpl("int3 @ 0x116a6782");
L_116a6783:;
  /* 116a6783 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a6785 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a6787 jne 0x116a6753 */
  if (!C.zf) goto L_116a6753;
  /* 116a6789 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a678c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a678f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 116a6791 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a6794 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a6797 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a679a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 116a679d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a67a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a67a3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116a67a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a67a8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 116a67ab sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a67ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a67b1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 116a67b4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a67b8 jle 0x116a67d6 */
  if ((C.zf||C.sf!=C.of)) goto L_116a67d6;
  /* 116a67ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a67bd push ecx */
  push32((uint32_t)(ECX));
  /* 116a67be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a67c1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 116a67c4 push eax */
  push32((uint32_t)(EAX));
  /* 116a67c5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a67c8 push ecx */
  push32((uint32_t)(ECX));
  /* 116a67c9 call 0x116aacf0 */
  push32(0x116a67ceu); f_116aacf0();
  /* 116a67ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a67d1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116a67d4 jmp 0x116a681e */
  goto L_116a681e;
L_116a67d6:;
  /* 116a67d6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a67da je 0x116a67f9 */
  if (C.zf) goto L_116a67f9;
  /* 116a67dc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a67df sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 116a67e2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a67e5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 116a67e8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a67eb mov ecx, dword ptr [edx*4 + 0x116d1f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x116d1f00)));
  /* 116a67f2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a67f4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 116a67f7 jmp 0x116a6800 */
  goto L_116a6800;
L_116a67f9:;
  /* 116a67f9 mov dword ptr [ebp - 0x14], 0x116ce1a8 */
  w32((uint32_t)(EBP + -0x14), (0x116ce1a8u));
L_116a6800:;
  /* 116a6800 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a6803 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 116a6807 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 116a680a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a680c je 0x116a681e */
  if (C.zf) goto L_116a681e;
  /* 116a680e push 2 */
  push32((uint32_t)(0x2u));
  /* 116a6810 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a6812 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a6815 push ecx */
  push32((uint32_t)(ECX));
  /* 116a6816 call 0x116aaba0 */
  push32(0x116a681bu); f_116aaba0();
  /* 116a681b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a681e:;
  /* 116a681e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a6821 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 116a6824 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 116a6827 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 116a6829 jmp 0x116a6849 */
  goto L_116a6849;
L_116a682b:;
  /* 116a682b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 116a6832 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a6835 push edx */
  push32((uint32_t)(EDX));
  /* 116a6836 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 116a6839 push eax */
  push32((uint32_t)(EAX));
  /* 116a683a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a683d push ecx */
  push32((uint32_t)(ECX));
  /* 116a683e call 0x116aacf0 */
  push32(0x116a6843u); f_116aacf0();
  /* 116a6843 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a6846 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_116a6849:;
  /* 116a6849 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a684c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a684f je 0x116a6865 */
  if (C.zf) goto L_116a6865;
  /* 116a6851 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a6854 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 116a6857 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 116a685a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a685d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 116a6860 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116a6863 jmp 0x116a686d */
  goto L_116a686d;
L_116a6865:;
  /* 116a6865 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a6868 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_116a686d:;
  /* 116a686d pop edi */
  EDI = (pop32());
  /* 116a686e pop esi */
  ESI = (pop32());
  /* 116a686f pop ebx */
  EBX = (pop32());
  /* 116a6870 mov esp, ebp */
  ESP = (EBP);
  /* 116a6872 pop ebp */
  EBP = (pop32());
  /* 116a6873 ret  */
  ESPCHK(0x116a6600u, _esp0);
  ESP += 4; return;
}

/* FUN_10016880 @ 0x116a6880 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_116a6880(void) {
  FTRACE(0x116a6880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a6880 push ebp */
  push32((uint32_t)(EBP));
  /* 116a6881 mov ebp, esp */
  EBP = (ESP);
  /* 116a6883 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a6889 push ebx */
  push32((uint32_t)(EBX));
  /* 116a688a push esi */
  push32((uint32_t)(ESI));
  /* 116a688b push edi */
  push32((uint32_t)(EDI));
  /* 116a688c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 116a6893 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 116a689d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_116a68a4:;
  /* 116a68a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a68a7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116a68a9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 116a68ac movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 116a68b0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a68b3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a68b6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 116a68b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a68bb je 0x116a7497 */
  if (C.zf) goto L_116a7497;
  /* 116a68c1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a68c8 jl 0x116a7497 */
  if ((C.sf!=C.of)) goto L_116a7497;
  /* 116a68ce movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 116a68d2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a68d5 jl 0x116a68f6 */
  if ((C.sf!=C.of)) goto L_116a68f6;
  /* 116a68d7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 116a68db cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a68de jg 0x116a68f6 */
  if ((!C.zf&&C.sf==C.of)) goto L_116a68f6;
  /* 116a68e0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 116a68e4 movsx ecx, byte ptr [eax + 0x116cb7dc] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x116cb7dc))));
  /* 116a68eb and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 116a68ee mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 116a68f4 jmp 0x116a6900 */
  goto L_116a6900;
L_116a68f6:;
  /* 116a68f6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_116a6900:;
  /* 116a6900 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 116a6906 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 116a6909 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a690c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a690f movsx edx, byte ptr [ecx + eax*8 + 0x116cb7fc] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x116cb7fc))));
  /* 116a6917 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 116a691a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 116a691d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a6920 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 116a6926 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a692d ja 0x116a7492 */
  if ((!C.cf&&!C.zf)) goto L_116a7492;
  /* 116a6933 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 116a6939 jmp dword ptr [ecx*4 + 0x116a74a4] */
  switch (ECX) {
    case 0: goto L_116a6940;
    case 1: goto L_116a69da;
    case 2: goto L_116a6a1c;
    case 3: goto L_116a6a8b;
    case 4: goto L_116a6ae3;
    case 5: goto L_116a6af2;
    case 6: goto L_116a6b3e;
    case 7: goto L_116a6bd1;
    case 8: goto L_116a6a68;
    case 9: goto L_116a6a73;
    case 10: goto L_116a6a5e;
    case 11: goto L_116a6a53;
    case 12: goto L_116a6a7e;
    case 13: goto L_116a6a86;
    default: x86_unimpl("switch@0x116a6939 out of table"); return;
  }
L_116a6940:;
  /* 116a6940 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 116a6947 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 116a694a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 116a6950 mov eax, dword ptr [0x116ce26c] */
  EAX = (r32((uint32_t)(0x116ce26c)));
  /* 116a6955 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116a6957 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 116a695b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 116a6961 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a6963 je 0x116a69bd */
  if (C.zf) goto L_116a69bd;
  /* 116a6965 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 116a696b push edx */
  push32((uint32_t)(EDX));
  /* 116a696c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a696f push eax */
  push32((uint32_t)(EAX));
  /* 116a6970 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 116a6974 push ecx */
  push32((uint32_t)(ECX));
  /* 116a6975 call 0x116a75b0 */
  push32(0x116a697au); f_116a75b0();
  /* 116a697a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a697d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a6980 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116a6982 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 116a6985 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a6988 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a698b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_116a698e:;
  /* 116a698e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 116a6992 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a6994 jne 0x116a69b7 */
  if (!C.zf) goto L_116a69b7;
  /* 116a6996 push 0x116cb87c */
  push32((uint32_t)(0x116cb87cu));
  /* 116a699b push 0 */
  push32((uint32_t)(0x0u));
  /* 116a699d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 116a69a2 push 0x116cb870 */
  push32((uint32_t)(0x116cb870u));
  /* 116a69a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 116a69a9 call 0x1169ade0 */
  push32(0x116a69aeu); f_1169ade0();
  /* 116a69ae add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a69b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a69b4 jne 0x116a69b7 */
  if (!C.zf) goto L_116a69b7;
  /* 116a69b6 int3  */
  x86_unimpl("int3 @ 0x116a69b6");
L_116a69b7:;
  /* 116a69b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a69b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a69bb jne 0x116a698e */
  if (!C.zf) goto L_116a698e;
L_116a69bd:;
  /* 116a69bd lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 116a69c3 push ecx */
  push32((uint32_t)(ECX));
  /* 116a69c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a69c7 push edx */
  push32((uint32_t)(EDX));
  /* 116a69c8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 116a69cc push eax */
  push32((uint32_t)(EAX));
  /* 116a69cd call 0x116a75b0 */
  push32(0x116a69d2u); f_116a75b0();
  /* 116a69d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a69d5 jmp 0x116a7492 */
  goto L_116a7492;
L_116a69da:;
  /* 116a69da mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116a69e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a69e4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 116a69ea mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 116a69f0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 116a69f6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 116a69fc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116a69ff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116a6a06 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 116a6a10 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 116a6a17 jmp 0x116a7492 */
  goto L_116a7492;
L_116a6a1c:;
  /* 116a6a1c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 116a6a20 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 116a6a26 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 116a6a2c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a6a2f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 116a6a35 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a6a3c ja 0x116a6a86 */
  if ((!C.cf&&!C.zf)) goto L_116a6a86;
  /* 116a6a3e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 116a6a44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a6a46 mov al, byte ptr [ecx + 0x116a74dc] */
  AL = (r8((uint32_t)(ECX + 0x116a74dc)));
  /* 116a6a4c jmp dword ptr [eax*4 + 0x116a74c4] */
  switch (EAX) {
    case 0: goto L_116a6a68;
    case 1: goto L_116a6a73;
    case 2: goto L_116a6a5e;
    case 3: goto L_116a6a53;
    case 4: goto L_116a6a7e;
    case 5: goto L_116a6a86;
    default: x86_unimpl("switch@0x116a6a4c out of table"); return;
  }
L_116a6a53:;
  /* 116a6a53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a6a56 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 116a6a59 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116a6a5c jmp 0x116a6a86 */
  goto L_116a6a86;
L_116a6a5e:;
  /* 116a6a5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a6a61 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 116a6a63 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a6a66 jmp 0x116a6a86 */
  goto L_116a6a86;
L_116a6a68:;
  /* 116a6a68 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a6a6b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 116a6a6e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116a6a71 jmp 0x116a6a86 */
  goto L_116a6a86;
L_116a6a73:;
  /* 116a6a73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a6a76 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 116a6a79 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116a6a7c jmp 0x116a6a86 */
  goto L_116a6a86;
L_116a6a7e:;
  /* 116a6a7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a6a81 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 116a6a83 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116a6a86:;
  /* 116a6a86 jmp 0x116a7492 */
  goto L_116a7492;
L_116a6a8b:;
  /* 116a6a8b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 116a6a8f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a6a92 jne 0x116a6ac7 */
  if (!C.zf) goto L_116a6ac7;
  /* 116a6a94 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 116a6a97 push edx */
  push32((uint32_t)(EDX));
  /* 116a6a98 call 0x116a76c0 */
  push32(0x116a6a9du); f_116a76c0();
  /* 116a6a9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a6aa0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 116a6aa6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a6aad jge 0x116a6ac5 */
  if ((C.sf==C.of)) goto L_116a6ac5;
  /* 116a6aaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a6ab2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 116a6ab4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a6ab7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 116a6abd neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 116a6abf mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_116a6ac5:;
  /* 116a6ac5 jmp 0x116a6ade */
  goto L_116a6ade;
L_116a6ac7:;
  /* 116a6ac7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 116a6acd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a6ad0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 116a6ad4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 116a6ad8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_116a6ade:;
  /* 116a6ade jmp 0x116a7492 */
  goto L_116a7492;
L_116a6ae3:;
  /* 116a6ae3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 116a6aed jmp 0x116a7492 */
  goto L_116a7492;
L_116a6af2:;
  /* 116a6af2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 116a6af6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a6af9 jne 0x116a6b22 */
  if (!C.zf) goto L_116a6b22;
  /* 116a6afb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 116a6afe push eax */
  push32((uint32_t)(EAX));
  /* 116a6aff call 0x116a76c0 */
  push32(0x116a6b04u); f_116a76c0();
  /* 116a6b04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a6b07 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 116a6b0d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a6b14 jge 0x116a6b20 */
  if ((C.sf==C.of)) goto L_116a6b20;
  /* 116a6b16 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_116a6b20:;
  /* 116a6b20 jmp 0x116a6b39 */
  goto L_116a6b39;
L_116a6b22:;
  /* 116a6b22 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 116a6b28 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a6b2b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 116a6b2f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 116a6b33 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_116a6b39:;
  /* 116a6b39 jmp 0x116a7492 */
  goto L_116a7492;
L_116a6b3e:;
  /* 116a6b3e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 116a6b42 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 116a6b48 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 116a6b4e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a6b51 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 116a6b57 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a6b5e ja 0x116a6bcc */
  if ((!C.cf&&!C.zf)) goto L_116a6bcc;
  /* 116a6b60 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 116a6b66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a6b68 mov al, byte ptr [ecx + 0x116a7501] */
  AL = (r8((uint32_t)(ECX + 0x116a7501)));
  /* 116a6b6e jmp dword ptr [eax*4 + 0x116a74ed] */
  switch (EAX) {
    case 0: goto L_116a6b80;
    case 1: goto L_116a6bb9;
    case 2: goto L_116a6b75;
    case 3: goto L_116a6bc3;
    case 4: goto L_116a6bcc;
    default: x86_unimpl("switch@0x116a6b6e out of table"); return;
  }
L_116a6b75:;
  /* 116a6b75 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a6b78 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 116a6b7b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116a6b7e jmp 0x116a6bcc */
  goto L_116a6bcc;
L_116a6b80:;
  /* 116a6b80 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a6b83 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116a6b86 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a6b89 jne 0x116a6bab */
  if (!C.zf) goto L_116a6bab;
  /* 116a6b8b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a6b8e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 116a6b92 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a6b95 jne 0x116a6bab */
  if (!C.zf) goto L_116a6bab;
  /* 116a6b97 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a6b9a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a6b9d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 116a6ba0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a6ba3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 116a6ba6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116a6ba9 jmp 0x116a6bb7 */
  goto L_116a6bb7;
L_116a6bab:;
  /* 116a6bab mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 116a6bb2 jmp 0x116a6940 */
  goto L_116a6940;
L_116a6bb7:;
  /* 116a6bb7 jmp 0x116a6bcc */
  goto L_116a6bcc;
L_116a6bb9:;
  /* 116a6bb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a6bbc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 116a6bbe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a6bc1 jmp 0x116a6bcc */
  goto L_116a6bcc;
L_116a6bc3:;
  /* 116a6bc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a6bc6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 116a6bc9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116a6bcc:;
  /* 116a6bcc jmp 0x116a7492 */
  goto L_116a7492;
L_116a6bd1:;
  /* 116a6bd1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 116a6bd5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 116a6bdb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 116a6be1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a6be4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 116a6bea cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a6bf1 ja 0x116a72b7 */
  if ((!C.cf&&!C.zf)) goto L_116a72b7;
  /* 116a6bf7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 116a6bfd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116a6bff mov cl, byte ptr [edx + 0x116a756c] */
  CL = (r8((uint32_t)(EDX + 0x116a756c)));
  /* 116a6c05 jmp dword ptr [ecx*4 + 0x116a7530] */
  switch (ECX) {
    case 0: goto L_116a6c0c;
    case 1: goto L_116a6ea0;
    case 2: goto L_116a6d30;
    case 3: goto L_116a6fd9;
    case 4: goto L_116a6c9b;
    case 5: goto L_116a6c21;
    case 6: goto L_116a6fab;
    case 7: goto L_116a6eb0;
    case 8: goto L_116a6e55;
    case 9: goto L_116a7025;
    case 10: goto L_116a6fcf;
    case 11: goto L_116a6d46;
    case 12: goto L_116a6fc3;
    case 13: goto L_116a6fe5;
    case 14: goto L_116a72b7;
    default: x86_unimpl("switch@0x116a6c05 out of table"); return;
  }
L_116a6c0c:;
  /* 116a6c0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a6c0f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 116a6c14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a6c16 jne 0x116a6c21 */
  if (!C.zf) goto L_116a6c21;
  /* 116a6c18 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a6c1b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 116a6c1e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116a6c21:;
  /* 116a6c21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a6c24 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 116a6c2a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a6c2c je 0x116a6c67 */
  if (C.zf) goto L_116a6c67;
  /* 116a6c2e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 116a6c31 push eax */
  push32((uint32_t)(EAX));
  /* 116a6c32 call 0x116a7700 */
  push32(0x116a6c37u); f_116a7700();
  /* 116a6c37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a6c3a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 116a6c3e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 116a6c42 push ecx */
  push32((uint32_t)(ECX));
  /* 116a6c43 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 116a6c49 push edx */
  push32((uint32_t)(EDX));
  /* 116a6c4a call 0x116ab340 */
  push32(0x116a6c4fu); f_116ab340();
  /* 116a6c4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a6c52 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 116a6c55 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a6c59 jge 0x116a6c65 */
  if ((C.sf==C.of)) goto L_116a6c65;
  /* 116a6c5b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_116a6c65:;
  /* 116a6c65 jmp 0x116a6c8d */
  goto L_116a6c8d;
L_116a6c67:;
  /* 116a6c67 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 116a6c6a push eax */
  push32((uint32_t)(EAX));
  /* 116a6c6b call 0x116a76c0 */
  push32(0x116a6c70u); f_116a76c0();
  /* 116a6c70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a6c73 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 116a6c7a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 116a6c80 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 116a6c86 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_116a6c8d:;
  /* 116a6c8d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 116a6c93 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 116a6c96 jmp 0x116a72b7 */
  goto L_116a72b7;
L_116a6c9b:;
  /* 116a6c9b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 116a6c9e push eax */
  push32((uint32_t)(EAX));
  /* 116a6c9f call 0x116a76c0 */
  push32(0x116a6ca4u); f_116a76c0();
  /* 116a6ca4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a6ca7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 116a6cad cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a6cb4 je 0x116a6cc2 */
  if (C.zf) goto L_116a6cc2;
  /* 116a6cb6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 116a6cbc cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a6cc0 jne 0x116a6cdc */
  if (!C.zf) goto L_116a6cdc;
L_116a6cc2:;
  /* 116a6cc2 mov edx, dword ptr [0x116ce760] */
  EDX = (r32((uint32_t)(0x116ce760)));
  /* 116a6cc8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 116a6ccb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a6cce push eax */
  push32((uint32_t)(EAX));
  /* 116a6ccf call 0x116a07b0 */
  push32(0x116a6cd4u); f_116a07b0();
  /* 116a6cd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a6cd7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 116a6cda jmp 0x116a6d2b */
  goto L_116a6d2b;
L_116a6cdc:;
  /* 116a6cdc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a6cdf and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 116a6ce5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a6ce7 je 0x116a6d0c */
  if (C.zf) goto L_116a6d0c;
  /* 116a6ce9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 116a6cef mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 116a6cf2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 116a6cf5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 116a6cfb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 116a6cfe shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 116a6d00 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 116a6d03 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 116a6d0a jmp 0x116a6d2b */
  goto L_116a6d2b;
L_116a6d0c:;
  /* 116a6d0c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 116a6d13 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 116a6d19 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116a6d1c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 116a6d1f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 116a6d25 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 116a6d28 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_116a6d2b:;
  /* 116a6d2b jmp 0x116a72b7 */
  goto L_116a72b7;
L_116a6d30:;
  /* 116a6d30 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a6d33 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 116a6d39 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a6d3b jne 0x116a6d46 */
  if (!C.zf) goto L_116a6d46;
  /* 116a6d3d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a6d40 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 116a6d43 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116a6d46:;
  /* 116a6d46 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a6d4d jne 0x116a6d5b */
  if (!C.zf) goto L_116a6d5b;
  /* 116a6d4f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 116a6d59 jmp 0x116a6d67 */
  goto L_116a6d67;
L_116a6d5b:;
  /* 116a6d5b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 116a6d61 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_116a6d67:;
  /* 116a6d67 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 116a6d6d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 116a6d73 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 116a6d76 push edx */
  push32((uint32_t)(EDX));
  /* 116a6d77 call 0x116a76c0 */
  push32(0x116a6d7cu); f_116a76c0();
  /* 116a6d7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a6d7f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 116a6d82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a6d85 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 116a6d8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a6d8c je 0x116a6df6 */
  if (C.zf) goto L_116a6df6;
  /* 116a6d8e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a6d92 jne 0x116a6d9d */
  if (!C.zf) goto L_116a6d9d;
  /* 116a6d94 mov ecx, dword ptr [0x116ce764] */
  ECX = (r32((uint32_t)(0x116ce764)));
  /* 116a6d9a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_116a6d9d:;
  /* 116a6d9d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 116a6da4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a6da7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_116a6dad:;
  /* 116a6dad mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 116a6db3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 116a6db9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a6dbc mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 116a6dc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a6dc4 je 0x116a6de6 */
  if (C.zf) goto L_116a6de6;
  /* 116a6dc6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 116a6dcc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a6dce mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 116a6dd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a6dd3 je 0x116a6de6 */
  if (C.zf) goto L_116a6de6;
  /* 116a6dd5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 116a6ddb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a6dde mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 116a6de4 jmp 0x116a6dad */
  goto L_116a6dad;
L_116a6de6:;
  /* 116a6de6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 116a6dec sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a6def sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 116a6df1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 116a6df4 jmp 0x116a6e50 */
  goto L_116a6e50;
L_116a6df6:;
  /* 116a6df6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a6dfa jne 0x116a6e04 */
  if (!C.zf) goto L_116a6e04;
  /* 116a6dfc mov eax, dword ptr [0x116ce760] */
  EAX = (r32((uint32_t)(0x116ce760)));
  /* 116a6e01 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_116a6e04:;
  /* 116a6e04 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a6e07 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_116a6e0d:;
  /* 116a6e0d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 116a6e13 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 116a6e19 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a6e1c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 116a6e22 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a6e24 je 0x116a6e44 */
  if (C.zf) goto L_116a6e44;
  /* 116a6e26 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 116a6e2c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116a6e2f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a6e31 je 0x116a6e44 */
  if (C.zf) goto L_116a6e44;
  /* 116a6e33 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 116a6e39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a6e3c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 116a6e42 jmp 0x116a6e0d */
  goto L_116a6e0d;
L_116a6e44:;
  /* 116a6e44 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 116a6e4a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a6e4d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_116a6e50:;
  /* 116a6e50 jmp 0x116a72b7 */
  goto L_116a72b7;
L_116a6e55:;
  /* 116a6e55 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 116a6e58 push edx */
  push32((uint32_t)(EDX));
  /* 116a6e59 call 0x116a76c0 */
  push32(0x116a6e5eu); f_116a76c0();
  /* 116a6e5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a6e61 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 116a6e67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a6e6a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 116a6e6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a6e6f je 0x116a6e83 */
  if (C.zf) goto L_116a6e83;
  /* 116a6e71 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 116a6e77 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 116a6e7e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 116a6e81 jmp 0x116a6e91 */
  goto L_116a6e91;
L_116a6e83:;
  /* 116a6e83 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 116a6e89 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 116a6e8f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_116a6e91:;
  /* 116a6e91 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 116a6e9b jmp 0x116a72b7 */
  goto L_116a72b7;
L_116a6ea0:;
  /* 116a6ea0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 116a6ea7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 116a6eaa add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 116a6ead mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_116a6eb0:;
  /* 116a6eb0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a6eb3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 116a6eb5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a6eb8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 116a6ebe mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 116a6ec1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a6ec8 jge 0x116a6ed6 */
  if ((C.sf==C.of)) goto L_116a6ed6;
  /* 116a6eca mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 116a6ed4 jmp 0x116a6ef2 */
  goto L_116a6ef2;
L_116a6ed6:;
  /* 116a6ed6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a6edd jne 0x116a6ef2 */
  if (!C.zf) goto L_116a6ef2;
  /* 116a6edf movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 116a6ee3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a6ee6 jne 0x116a6ef2 */
  if (!C.zf) goto L_116a6ef2;
  /* 116a6ee8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_116a6ef2:;
  /* 116a6ef2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a6ef5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a6ef8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 116a6efb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a6efe sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a6f01 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a6f03 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 116a6f06 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 116a6f0c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 116a6f12 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a6f15 push ecx */
  push32((uint32_t)(ECX));
  /* 116a6f16 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 116a6f1c push edx */
  push32((uint32_t)(EDX));
  /* 116a6f1d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 116a6f21 push eax */
  push32((uint32_t)(EAX));
  /* 116a6f22 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a6f25 push ecx */
  push32((uint32_t)(ECX));
  /* 116a6f26 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 116a6f2c push edx */
  push32((uint32_t)(EDX));
  /* 116a6f2d call dword ptr [0x116ce0a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116ce0a0))), 0x116a6f33u);
  /* 116a6f33 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a6f36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a6f39 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 116a6f3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a6f40 je 0x116a6f58 */
  if (C.zf) goto L_116a6f58;
  /* 116a6f42 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a6f49 jne 0x116a6f58 */
  if (!C.zf) goto L_116a6f58;
  /* 116a6f4b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a6f4e push ecx */
  push32((uint32_t)(ECX));
  /* 116a6f4f call dword ptr [0x116ce0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x116ce0ac))), 0x116a6f55u);
  /* 116a6f55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a6f58:;
  /* 116a6f58 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 116a6f5c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a6f5f jne 0x116a6f7a */
  if (!C.zf) goto L_116a6f7a;
  /* 116a6f61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a6f64 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 116a6f69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a6f6b jne 0x116a6f7a */
  if (!C.zf) goto L_116a6f7a;
  /* 116a6f6d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a6f70 push ecx */
  push32((uint32_t)(ECX));
  /* 116a6f71 call dword ptr [0x116ce0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116ce0a4))), 0x116a6f77u);
  /* 116a6f77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a6f7a:;
  /* 116a6f7a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a6f7d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116a6f80 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a6f83 jne 0x116a6f97 */
  if (!C.zf) goto L_116a6f97;
  /* 116a6f85 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a6f88 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 116a6f8b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116a6f8e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a6f91 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a6f94 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_116a6f97:;
  /* 116a6f97 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a6f9a push eax */
  push32((uint32_t)(EAX));
  /* 116a6f9b call 0x116a07b0 */
  push32(0x116a6fa0u); f_116a07b0();
  /* 116a6fa0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a6fa3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 116a6fa6 jmp 0x116a72b7 */
  goto L_116a72b7;
L_116a6fab:;
  /* 116a6fab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a6fae or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 116a6fb1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116a6fb4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 116a6fbe jmp 0x116a7045 */
  goto L_116a7045;
L_116a6fc3:;
  /* 116a6fc3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 116a6fcd jmp 0x116a7045 */
  goto L_116a7045;
L_116a6fcf:;
  /* 116a6fcf mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_116a6fd9:;
  /* 116a6fd9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 116a6fe3 jmp 0x116a6fef */
  goto L_116a6fef;
L_116a6fe5:;
  /* 116a6fe5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_116a6fef:;
  /* 116a6fef mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 116a6ff9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a6ffc and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 116a7002 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a7004 je 0x116a7023 */
  if (C.zf) goto L_116a7023;
  /* 116a7006 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 116a700d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 116a7013 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a7016 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 116a701c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_116a7023:;
  /* 116a7023 jmp 0x116a7045 */
  goto L_116a7045;
L_116a7025:;
  /* 116a7025 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 116a702f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a7032 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 116a7038 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a703a je 0x116a7045 */
  if (C.zf) goto L_116a7045;
  /* 116a703c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a703f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 116a7042 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116a7045:;
  /* 116a7045 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a7048 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 116a704d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a704f je 0x116a706e */
  if (C.zf) goto L_116a706e;
  /* 116a7051 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 116a7054 push ecx */
  push32((uint32_t)(ECX));
  /* 116a7055 call 0x116a76e0 */
  push32(0x116a705au); f_116a76e0();
  /* 116a705a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a705d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 116a7063 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 116a7069 jmp 0x116a70ff */
  goto L_116a70ff;
L_116a706e:;
  /* 116a706e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a7071 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 116a7074 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a7076 je 0x116a70c0 */
  if (C.zf) goto L_116a70c0;
  /* 116a7078 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a707b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 116a707e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a7080 je 0x116a70a0 */
  if (C.zf) goto L_116a70a0;
  /* 116a7082 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 116a7085 push ecx */
  push32((uint32_t)(ECX));
  /* 116a7086 call 0x116a76c0 */
  push32(0x116a708bu); f_116a76c0();
  /* 116a708b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a708e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 116a7091 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116a7092 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 116a7098 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 116a709e jmp 0x116a70be */
  goto L_116a70be;
L_116a70a0:;
  /* 116a70a0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 116a70a3 push edx */
  push32((uint32_t)(EDX));
  /* 116a70a4 call 0x116a76c0 */
  push32(0x116a70a9u); f_116a76c0();
  /* 116a70a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a70ac and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116a70b1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116a70b2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 116a70b8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_116a70be:;
  /* 116a70be jmp 0x116a70ff */
  goto L_116a70ff;
L_116a70c0:;
  /* 116a70c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a70c3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 116a70c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a70c8 je 0x116a70e5 */
  if (C.zf) goto L_116a70e5;
  /* 116a70ca lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 116a70cd push ecx */
  push32((uint32_t)(ECX));
  /* 116a70ce call 0x116a76c0 */
  push32(0x116a70d3u); f_116a76c0();
  /* 116a70d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a70d6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116a70d7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 116a70dd mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 116a70e3 jmp 0x116a70ff */
  goto L_116a70ff;
L_116a70e5:;
  /* 116a70e5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 116a70e8 push edx */
  push32((uint32_t)(EDX));
  /* 116a70e9 call 0x116a76c0 */
  push32(0x116a70eeu); f_116a76c0();
  /* 116a70ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a70f1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116a70f3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 116a70f9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_116a70ff:;
  /* 116a70ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a7102 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 116a7105 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a7107 je 0x116a7147 */
  if (C.zf) goto L_116a7147;
  /* 116a7109 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a7110 jg 0x116a7147 */
  if ((!C.zf&&C.sf==C.of)) goto L_116a7147;
  /* 116a7112 jl 0x116a711d */
  if ((C.sf!=C.of)) goto L_116a711d;
  /* 116a7114 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a711b jae 0x116a7147 */
  if (!C.cf) goto L_116a7147;
L_116a711d:;
  /* 116a711d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 116a7123 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116a7125 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 116a712b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a712e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 116a7130 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 116a7136 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 116a713c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a713f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 116a7142 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116a7145 jmp 0x116a715f */
  goto L_116a715f;
L_116a7147:;
  /* 116a7147 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 116a714d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 116a7153 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 116a7159 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_116a715f:;
  /* 116a715f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a7162 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 116a7168 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a716a jne 0x116a7187 */
  if (!C.zf) goto L_116a7187;
  /* 116a716c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 116a7172 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 116a7178 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 116a717b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 116a7181 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_116a7187:;
  /* 116a7187 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a718e jge 0x116a719c */
  if ((C.sf==C.of)) goto L_116a719c;
  /* 116a7190 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 116a719a jmp 0x116a71a5 */
  goto L_116a71a5;
L_116a719c:;
  /* 116a719c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a719f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 116a71a2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116a71a5:;
  /* 116a71a5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 116a71ab or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 116a71b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a71b3 jne 0x116a71bc */
  if (!C.zf) goto L_116a71bc;
  /* 116a71b5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_116a71bc:;
  /* 116a71bc lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 116a71bf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_116a71c2:;
  /* 116a71c2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 116a71c8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 116a71ce sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a71d1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 116a71d7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a71d9 jg 0x116a71ef */
  if ((!C.zf&&C.sf==C.of)) goto L_116a71ef;
  /* 116a71db mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 116a71e1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 116a71e7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a71e9 je 0x116a7270 */
  if (C.zf) goto L_116a7270;
L_116a71ef:;
  /* 116a71ef mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 116a71f5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116a71f6 push edx */
  push32((uint32_t)(EDX));
  /* 116a71f7 push eax */
  push32((uint32_t)(EAX));
  /* 116a71f8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 116a71fe push edx */
  push32((uint32_t)(EDX));
  /* 116a71ff mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 116a7205 push eax */
  push32((uint32_t)(EAX));
  /* 116a7206 call 0x116a6580 */
  push32(0x116a720bu); f_116a6580();
  /* 116a720b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a720e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 116a7214 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 116a721a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116a721b push edx */
  push32((uint32_t)(EDX));
  /* 116a721c push eax */
  push32((uint32_t)(EAX));
  /* 116a721d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 116a7223 push ecx */
  push32((uint32_t)(ECX));
  /* 116a7224 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 116a722a push edx */
  push32((uint32_t)(EDX));
  /* 116a722b call 0x116a6510 */
  push32(0x116a7230u); f_116a6510();
  /* 116a7230 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 116a7236 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 116a723c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a7243 jle 0x116a7257 */
  if ((C.zf||C.sf!=C.of)) goto L_116a7257;
  /* 116a7245 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 116a724b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a7251 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_116a7257:;
  /* 116a7257 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a725a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 116a7260 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 116a7262 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a7265 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a7268 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 116a726b jmp 0x116a71c2 */
  goto L_116a71c2;
L_116a7270:;
  /* 116a7270 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 116a7273 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a7276 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 116a7279 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a727c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a727f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 116a7282 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a7285 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 116a728a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a728c je 0x116a72b7 */
  if (C.zf) goto L_116a72b7;
  /* 116a728e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a7291 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116a7294 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a7297 jne 0x116a729f */
  if (!C.zf) goto L_116a729f;
  /* 116a7299 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a729d jne 0x116a72b7 */
  if (!C.zf) goto L_116a72b7;
L_116a729f:;
  /* 116a729f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a72a2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a72a5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 116a72a8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a72ab mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 116a72ae mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a72b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a72b4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_116a72b7:;
  /* 116a72b7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a72be jne 0x116a7492 */
  if (!C.zf) goto L_116a7492;
  /* 116a72c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a72c7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 116a72ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a72cc je 0x116a731d */
  if (C.zf) goto L_116a731d;
  /* 116a72ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a72d1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 116a72d7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a72d9 je 0x116a72eb */
  if (C.zf) goto L_116a72eb;
  /* 116a72db mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 116a72e2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 116a72e9 jmp 0x116a731d */
  goto L_116a731d;
L_116a72eb:;
  /* 116a72eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a72ee and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 116a72f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a72f3 je 0x116a7305 */
  if (C.zf) goto L_116a7305;
  /* 116a72f5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 116a72fc mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 116a7303 jmp 0x116a731d */
  goto L_116a731d;
L_116a7305:;
  /* 116a7305 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a7308 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 116a730b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a730d je 0x116a731d */
  if (C.zf) goto L_116a731d;
  /* 116a730f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 116a7316 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_116a731d:;
  /* 116a731d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 116a7323 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a7326 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a7329 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 116a732f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a7332 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 116a7335 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a7337 jne 0x116a7355 */
  if (!C.zf) goto L_116a7355;
  /* 116a7339 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 116a733f push eax */
  push32((uint32_t)(EAX));
  /* 116a7340 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7343 push ecx */
  push32((uint32_t)(ECX));
  /* 116a7344 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 116a734a push edx */
  push32((uint32_t)(EDX));
  /* 116a734b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 116a734d call 0x116a7630 */
  push32(0x116a7352u); f_116a7630();
  /* 116a7352 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a7355:;
  /* 116a7355 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 116a735b push eax */
  push32((uint32_t)(EAX));
  /* 116a735c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a735f push ecx */
  push32((uint32_t)(ECX));
  /* 116a7360 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a7363 push edx */
  push32((uint32_t)(EDX));
  /* 116a7364 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 116a736a push eax */
  push32((uint32_t)(EAX));
  /* 116a736b call 0x116a7670 */
  push32(0x116a7370u); f_116a7670();
  /* 116a7370 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a7373 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a7376 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 116a7379 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a737b je 0x116a73a3 */
  if (C.zf) goto L_116a73a3;
  /* 116a737d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a7380 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 116a7383 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a7385 jne 0x116a73a3 */
  if (!C.zf) goto L_116a73a3;
  /* 116a7387 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 116a738d push eax */
  push32((uint32_t)(EAX));
  /* 116a738e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7391 push ecx */
  push32((uint32_t)(ECX));
  /* 116a7392 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 116a7398 push edx */
  push32((uint32_t)(EDX));
  /* 116a7399 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 116a739b call 0x116a7630 */
  push32(0x116a73a0u); f_116a7630();
  /* 116a73a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a73a3:;
  /* 116a73a3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a73a7 je 0x116a7451 */
  if (C.zf) goto L_116a7451;
  /* 116a73ad cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a73b1 jle 0x116a7451 */
  if ((C.zf||C.sf!=C.of)) goto L_116a7451;
  /* 116a73b7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a73ba mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 116a73c0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a73c3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_116a73c9:;
  /* 116a73c9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 116a73cf mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 116a73d5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a73d8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 116a73de test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a73e0 je 0x116a744f */
  if (C.zf) goto L_116a744f;
  /* 116a73e2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 116a73e8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 116a73eb mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 116a73f2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 116a73f9 push eax */
  push32((uint32_t)(EAX));
  /* 116a73fa lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 116a7400 push ecx */
  push32((uint32_t)(ECX));
  /* 116a7401 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 116a7407 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a740a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 116a7410 call 0x116ab340 */
  push32(0x116a7415u); f_116ab340();
  /* 116a7415 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a7418 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 116a741e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a7425 jg 0x116a7429 */
  if ((!C.zf&&C.sf==C.of)) goto L_116a7429;
  /* 116a7427 jmp 0x116a744f */
  goto L_116a744f;
L_116a7429:;
  /* 116a7429 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 116a742f push eax */
  push32((uint32_t)(EAX));
  /* 116a7430 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7433 push ecx */
  push32((uint32_t)(ECX));
  /* 116a7434 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 116a743a push edx */
  push32((uint32_t)(EDX));
  /* 116a743b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 116a7441 push eax */
  push32((uint32_t)(EAX));
  /* 116a7442 call 0x116a7670 */
  push32(0x116a7447u); f_116a7670();
  /* 116a7447 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a744a jmp 0x116a73c9 */
  goto L_116a73c9;
L_116a744f:;
  /* 116a744f jmp 0x116a746c */
  goto L_116a746c;
L_116a7451:;
  /* 116a7451 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 116a7457 push ecx */
  push32((uint32_t)(ECX));
  /* 116a7458 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a745b push edx */
  push32((uint32_t)(EDX));
  /* 116a745c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a745f push eax */
  push32((uint32_t)(EAX));
  /* 116a7460 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a7463 push ecx */
  push32((uint32_t)(ECX));
  /* 116a7464 call 0x116a7670 */
  push32(0x116a7469u); f_116a7670();
  /* 116a7469 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a746c:;
  /* 116a746c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a746f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 116a7472 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a7474 je 0x116a7492 */
  if (C.zf) goto L_116a7492;
  /* 116a7476 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 116a747c push eax */
  push32((uint32_t)(EAX));
  /* 116a747d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7480 push ecx */
  push32((uint32_t)(ECX));
  /* 116a7481 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 116a7487 push edx */
  push32((uint32_t)(EDX));
  /* 116a7488 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 116a748a call 0x116a7630 */
  push32(0x116a748fu); f_116a7630();
  /* 116a748f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a7492:;
  /* 116a7492 jmp 0x116a68a4 */
  goto L_116a68a4;
L_116a7497:;
  /* 116a7497 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 116a749d pop edi */
  EDI = (pop32());
  /* 116a749e pop esi */
  ESI = (pop32());
  /* 116a749f pop ebx */
  EBX = (pop32());
  /* 116a74a0 mov esp, ebp */
  ESP = (EBP);
  /* 116a74a2 pop ebp */
  EBP = (pop32());
  /* 116a74a3 ret  */
  ESPCHK(0x116a6880u, _esp0);
  ESP += 4; return;
}

/* FUN_100175b0 @ 0x116a75b0 (119 bytes, 44 insns) */
void f_116a75b0(void) {
  FTRACE(0x116a75b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a75b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a75b1 mov ebp, esp */
  EBP = (ESP);
  /* 116a75b3 push ecx */
  push32((uint32_t)(ECX));
  /* 116a75b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a75b7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116a75ba sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a75bd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a75c0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 116a75c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a75c6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a75ca jl 0x116a75f2 */
  if ((C.sf!=C.of)) goto L_116a75f2;
  /* 116a75cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a75cf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a75d1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 116a75d4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 116a75d6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 116a75da and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 116a75e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116a75e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a75e6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116a75e8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a75eb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a75ee mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116a75f0 jmp 0x116a7605 */
  goto L_116a7605;
L_116a75f2:;
  /* 116a75f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a75f5 push edx */
  push32((uint32_t)(EDX));
  /* 116a75f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a75f9 push eax */
  push32((uint32_t)(EAX));
  /* 116a75fa call 0x116a6600 */
  push32(0x116a75ffu); f_116a6600();
  /* 116a75ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a7602 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116a7605:;
  /* 116a7605 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a7609 jne 0x116a7616 */
  if (!C.zf) goto L_116a7616;
  /* 116a760b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a760e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 116a7614 jmp 0x116a7623 */
  goto L_116a7623;
L_116a7616:;
  /* 116a7616 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a7619 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116a761b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a761e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a7621 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_116a7623:;
  /* 116a7623 mov esp, ebp */
  ESP = (EBP);
  /* 116a7625 pop ebp */
  EBP = (pop32());
  /* 116a7626 ret  */
  ESPCHK(0x116a75b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017630 @ 0x116a7630 (53 bytes, 23 insns) */
void f_116a7630(void) {
  FTRACE(0x116a7630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a7630 push ebp */
  push32((uint32_t)(EBP));
  /* 116a7631 mov ebp, esp */
  EBP = (ESP);
L_116a7633:;
  /* 116a7633 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7636 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7639 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a763c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 116a763f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a7641 jle 0x116a7663 */
  if ((C.zf||C.sf!=C.of)) goto L_116a7663;
  /* 116a7643 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116a7646 push edx */
  push32((uint32_t)(EDX));
  /* 116a7647 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a764a push eax */
  push32((uint32_t)(EAX));
  /* 116a764b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a764e push ecx */
  push32((uint32_t)(ECX));
  /* 116a764f call 0x116a75b0 */
  push32(0x116a7654u); f_116a75b0();
  /* 116a7654 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a7657 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116a765a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a765d jne 0x116a7661 */
  if (!C.zf) goto L_116a7661;
  /* 116a765f jmp 0x116a7663 */
  goto L_116a7663;
L_116a7661:;
  /* 116a7661 jmp 0x116a7633 */
  goto L_116a7633;
L_116a7663:;
  /* 116a7663 pop ebp */
  EBP = (pop32());
  /* 116a7664 ret  */
  ESPCHK(0x116a7630u, _esp0);
  ESP += 4; return;
}

/* FUN_10017670 @ 0x116a7670 (74 bytes, 31 insns) */
void f_116a7670(void) {
  FTRACE(0x116a7670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a7670 push ebp */
  push32((uint32_t)(EBP));
  /* 116a7671 mov ebp, esp */
  EBP = (ESP);
  /* 116a7673 push ecx */
  push32((uint32_t)(ECX));
L_116a7674:;
  /* 116a7674 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7677 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a767a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a767d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 116a7680 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a7682 jle 0x116a76b6 */
  if ((C.zf||C.sf!=C.of)) goto L_116a76b6;
  /* 116a7684 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116a7687 push edx */
  push32((uint32_t)(EDX));
  /* 116a7688 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a768b push eax */
  push32((uint32_t)(EAX));
  /* 116a768c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a768f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116a7692 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116a7695 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a7698 push eax */
  push32((uint32_t)(EAX));
  /* 116a7699 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a769c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a769f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 116a76a2 call 0x116a75b0 */
  push32(0x116a76a7u); f_116a75b0();
  /* 116a76a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a76aa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116a76ad cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a76b0 jne 0x116a76b4 */
  if (!C.zf) goto L_116a76b4;
  /* 116a76b2 jmp 0x116a76b6 */
  goto L_116a76b6;
L_116a76b4:;
  /* 116a76b4 jmp 0x116a7674 */
  goto L_116a7674;
L_116a76b6:;
  /* 116a76b6 mov esp, ebp */
  ESP = (EBP);
  /* 116a76b8 pop ebp */
  EBP = (pop32());
  /* 116a76b9 ret  */
  ESPCHK(0x116a7670u, _esp0);
  ESP += 4; return;
}

/* FUN_100176c0 @ 0x116a76c0 (26 bytes, 12 insns) */
void f_116a76c0(void) {
  FTRACE(0x116a76c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a76c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a76c1 mov ebp, esp */
  EBP = (ESP);
  /* 116a76c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a76c6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116a76c8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a76cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a76ce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 116a76d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a76d3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116a76d5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 116a76d8 pop ebp */
  EBP = (pop32());
  /* 116a76d9 ret  */
  ESPCHK(0x116a76c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100176e0 @ 0x116a76e0 (31 bytes, 14 insns) */
void f_116a76e0(void) {
  FTRACE(0x116a76e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a76e0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a76e1 mov ebp, esp */
  EBP = (ESP);
  /* 116a76e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a76e6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116a76e8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a76eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a76ee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 116a76f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a76f3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116a76f5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a76f8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 116a76fa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116a76fd pop ebp */
  EBP = (pop32());
  /* 116a76fe ret  */
  ESPCHK(0x116a76e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017700 @ 0x116a7700 (27 bytes, 12 insns) */
void f_116a7700(void) {
  FTRACE(0x116a7700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a7700 push ebp */
  push32((uint32_t)(EBP));
  /* 116a7701 mov ebp, esp */
  EBP = (ESP);
  /* 116a7703 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7706 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116a7708 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a770b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a770e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 116a7710 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7713 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116a7715 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 116a7719 pop ebp */
  EBP = (pop32());
  /* 116a771a ret  */
  ESPCHK(0x116a7700u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x116a7720 (145 bytes, 42 insns) */
void f_116a7720(void) {
  FTRACE(0x116a7720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a7720 push ebp */
  push32((uint32_t)(EBP));
  /* 116a7721 mov ebp, esp */
  EBP = (ESP);
  /* 116a7723 push ecx */
  push32((uint32_t)(ECX));
  /* 116a7724 call 0x116a77d0 */
  push32(0x116a7729u); f_116a77d0();
  /* 116a7729 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a772c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 116a772e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116a7735 jmp 0x116a7740 */
  goto L_116a7740;
L_116a7737:;
  /* 116a7737 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a773a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a773d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116a7740:;
  /* 116a7740 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a7744 jae 0x116a776a */
  if (!C.cf) goto L_116a776a;
  /* 116a7746 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a7749 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a774c cmp ecx, dword ptr [eax*8 + 0x116ce768] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x116ce768))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a7753 jne 0x116a7768 */
  if (!C.zf) goto L_116a7768;
  /* 116a7755 call 0x116a77c0 */
  push32(0x116a775au); f_116a77c0();
  /* 116a775a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a775d mov ecx, dword ptr [edx*8 + 0x116ce76c] */
  ECX = (r32((uint32_t)(EDX*8 + 0x116ce76c)));
  /* 116a7764 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 116a7766 jmp 0x116a77ad */
  goto L_116a77ad;
L_116a7768:;
  /* 116a7768 jmp 0x116a7737 */
  goto L_116a7737;
L_116a776a:;
  /* 116a776a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a776e jb 0x116a7783 */
  if (C.cf) goto L_116a7783;
  /* 116a7770 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a7774 ja 0x116a7783 */
  if ((!C.cf&&!C.zf)) goto L_116a7783;
  /* 116a7776 call 0x116a77c0 */
  push32(0x116a777bu); f_116a77c0();
  /* 116a777b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 116a7781 jmp 0x116a77ad */
  goto L_116a77ad;
L_116a7783:;
  /* 116a7783 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a778a jb 0x116a77a2 */
  if (C.cf) goto L_116a77a2;
  /* 116a778c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a7793 ja 0x116a77a2 */
  if ((!C.cf&&!C.zf)) goto L_116a77a2;
  /* 116a7795 call 0x116a77c0 */
  push32(0x116a779au); f_116a77c0();
  /* 116a779a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 116a77a0 jmp 0x116a77ad */
  goto L_116a77ad;
L_116a77a2:;
  /* 116a77a2 call 0x116a77c0 */
  push32(0x116a77a7u); f_116a77c0();
  /* 116a77a7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_116a77ad:;
  /* 116a77ad mov esp, ebp */
  ESP = (EBP);
  /* 116a77af pop ebp */
  EBP = (pop32());
  /* 116a77b0 ret  */
  ESPCHK(0x116a7720u, _esp0);
  ESP += 4; return;
}

/* FUN_100177c0 @ 0x116a77c0 (13 bytes, 6 insns) */
void f_116a77c0(void) {
  FTRACE(0x116a77c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a77c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a77c1 mov ebp, esp */
  EBP = (ESP);
  /* 116a77c3 call 0x1169ef20 */
  push32(0x116a77c8u); f_1169ef20();
  /* 116a77c8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a77cb pop ebp */
  EBP = (pop32());
  /* 116a77cc ret  */
  ESPCHK(0x116a77c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100177d0 @ 0x116a77d0 (13 bytes, 6 insns) */
void f_116a77d0(void) {
  FTRACE(0x116a77d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a77d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a77d1 mov ebp, esp */
  EBP = (ESP);
  /* 116a77d3 call 0x1169ef20 */
  push32(0x116a77d8u); f_1169ef20();
  /* 116a77d8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a77db pop ebp */
  EBP = (pop32());
  /* 116a77dc ret  */
  ESPCHK(0x116a77d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100177e0 @ 0x116a77e0 (85 bytes, 32 insns) */
void f_116a77e0(void) {
  FTRACE(0x116a77e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a77e0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a77e1 mov ebp, esp */
  EBP = (ESP);
  /* 116a77e3 cmp dword ptr [0x116ce9a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116ce9a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a77ea jne 0x116a7814 */
  if (!C.zf) goto L_116a7814;
  /* 116a77ec mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116a77ef push eax */
  push32((uint32_t)(EAX));
  /* 116a77f0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a77f3 push ecx */
  push32((uint32_t)(ECX));
  /* 116a77f4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a77f7 push edx */
  push32((uint32_t)(EDX));
  /* 116a77f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a77fa push 0 */
  push32((uint32_t)(0x0u));
  /* 116a77fc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a77ff push eax */
  push32((uint32_t)(EAX));
  /* 116a7800 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7803 push ecx */
  push32((uint32_t)(ECX));
  /* 116a7804 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7807 push edx */
  push32((uint32_t)(EDX));
  /* 116a7808 push 1 */
  push32((uint32_t)(0x1u));
  /* 116a780a call 0x116a8290 */
  push32(0x116a780fu); f_116a8290();
  /* 116a780f add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a7812 jmp 0x116a7833 */
  goto L_116a7833;
L_116a7814:;
  /* 116a7814 call 0x116a77c0 */
  push32(0x116a7819u); f_116a77c0();
  /* 116a7819 mov dword ptr [eax], 0x21 */
  w32((uint32_t)(EAX), (0x21u));
  /* 116a781f push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 116a7824 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116a7827 push eax */
  push32((uint32_t)(EAX));
  /* 116a7828 call 0x116a8480 */
  push32(0x116a782du); f_116a8480();
  /* 116a782d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a7830 fld qword ptr [ebp + 0xc] */
  fpu_push(rf64((uint32_t)(EBP + 0xc)));
L_116a7833:;
  /* 116a7833 pop ebp */
  EBP = (pop32());
  /* 116a7834 ret  */
  ESPCHK(0x116a77e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017840 @ 0x116a7840 (103 bytes, 39 insns) */
void f_116a7840(void) {
  FTRACE(0x116a7840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a7840 push ebp */
  push32((uint32_t)(EBP));
  /* 116a7841 mov ebp, esp */
  EBP = (ESP);
  /* 116a7843 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a7846 fld qword ptr [ebp + 0xc] */
  fpu_push(rf64((uint32_t)(EBP + 0xc)));
  /* 116a7849 fadd qword ptr [ebp + 0x14] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(EBP + 0x14)));
  /* 116a784c fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 116a784f cmp dword ptr [0x116ce9a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116ce9a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a7856 jne 0x116a7884 */
  if (!C.zf) goto L_116a7884;
  /* 116a7858 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116a785b push eax */
  push32((uint32_t)(EAX));
  /* 116a785c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a785f push ecx */
  push32((uint32_t)(ECX));
  /* 116a7860 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a7863 push edx */
  push32((uint32_t)(EDX));
  /* 116a7864 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116a7867 push eax */
  push32((uint32_t)(EAX));
  /* 116a7868 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116a786b push ecx */
  push32((uint32_t)(ECX));
  /* 116a786c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a786f push edx */
  push32((uint32_t)(EDX));
  /* 116a7870 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7873 push eax */
  push32((uint32_t)(EAX));
  /* 116a7874 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7877 push ecx */
  push32((uint32_t)(ECX));
  /* 116a7878 push 1 */
  push32((uint32_t)(0x1u));
  /* 116a787a call 0x116a8290 */
  push32(0x116a787fu); f_116a8290();
  /* 116a787f add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a7882 jmp 0x116a78a3 */
  goto L_116a78a3;
L_116a7884:;
  /* 116a7884 call 0x116a77c0 */
  push32(0x116a7889u); f_116a77c0();
  /* 116a7889 mov dword ptr [eax], 0x21 */
  w32((uint32_t)(EAX), (0x21u));
  /* 116a788f push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 116a7894 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116a7897 push edx */
  push32((uint32_t)(EDX));
  /* 116a7898 call 0x116a8480 */
  push32(0x116a789du); f_116a8480();
  /* 116a789d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a78a0 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
L_116a78a3:;
  /* 116a78a3 mov esp, ebp */
  ESP = (EBP);
  /* 116a78a5 pop ebp */
  EBP = (pop32());
  /* 116a78a6 ret  */
  ESPCHK(0x116a7840u, _esp0);
  ESP += 4; return;
}

/* FUN_100178b0 @ 0x116a78b0 (178 bytes, 71 insns) */
void f_116a78b0(void) {
  FTRACE(0x116a78b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a78b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a78b1 mov ebp, esp */
  EBP = (ESP);
  /* 116a78b3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a78b6 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 116a78b9 push eax */
  push32((uint32_t)(EAX));
  /* 116a78ba lea ecx, [ebp + 0x18] */
  ECX = ((uint32_t)(EBP + 0x18));
  /* 116a78bd push ecx */
  push32((uint32_t)(ECX));
  /* 116a78be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a78c1 push edx */
  push32((uint32_t)(EDX));
  /* 116a78c2 call 0x116a7f10 */
  push32(0x116a78c7u); f_116a7f10();
  /* 116a78c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a78ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a78cc jne 0x116a78f6 */
  if (!C.zf) goto L_116a78f6;
  /* 116a78ce mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a78d1 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 116a78d3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 116a78d6 lea ecx, [ebp + 0x18] */
  ECX = ((uint32_t)(EBP + 0x18));
  /* 116a78d9 push ecx */
  push32((uint32_t)(ECX));
  /* 116a78da lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 116a78dd push edx */
  push32((uint32_t)(EDX));
  /* 116a78de mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a78e1 push eax */
  push32((uint32_t)(EAX));
  /* 116a78e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a78e5 push ecx */
  push32((uint32_t)(ECX));
  /* 116a78e6 lea edx, [ebp + 0x20] */
  EDX = ((uint32_t)(EBP + 0x20));
  /* 116a78e9 push edx */
  push32((uint32_t)(EDX));
  /* 116a78ea lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 116a78ed push eax */
  push32((uint32_t)(EAX));
  /* 116a78ee call 0x116a7a40 */
  push32(0x116a78f3u); f_116a7a40();
  /* 116a78f3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a78f6:;
  /* 116a78f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a78f9 push ecx */
  push32((uint32_t)(ECX));
  /* 116a78fa call 0x116a83b0 */
  push32(0x116a78ffu); f_116a83b0();
  /* 116a78ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a7902 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a7905 cmp dword ptr [0x116ce9a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116ce9a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a790c jne 0x116a793e */
  if (!C.zf) goto L_116a793e;
  /* 116a790e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a7912 je 0x116a793e */
  if (C.zf) goto L_116a793e;
  /* 116a7914 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 116a7917 push edx */
  push32((uint32_t)(EDX));
  /* 116a7918 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116a791b push eax */
  push32((uint32_t)(EAX));
  /* 116a791c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116a791f push ecx */
  push32((uint32_t)(ECX));
  /* 116a7920 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a7922 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a7924 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116a7927 push edx */
  push32((uint32_t)(EDX));
  /* 116a7928 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a792b push eax */
  push32((uint32_t)(EAX));
  /* 116a792c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a792f push ecx */
  push32((uint32_t)(ECX));
  /* 116a7930 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a7933 push edx */
  push32((uint32_t)(EDX));
  /* 116a7934 call 0x116a8290 */
  push32(0x116a7939u); f_116a8290();
  /* 116a7939 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a793c jmp 0x116a795e */
  goto L_116a795e;
L_116a793e:;
  /* 116a793e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a7941 push eax */
  push32((uint32_t)(EAX));
  /* 116a7942 call 0x116a8330 */
  push32(0x116a7947u); f_116a8330();
  /* 116a7947 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a794a push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 116a794f mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 116a7952 push ecx */
  push32((uint32_t)(ECX));
  /* 116a7953 call 0x116a8480 */
  push32(0x116a7958u); f_116a8480();
  /* 116a7958 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a795b fld qword ptr [ebp + 0x18] */
  fpu_push(rf64((uint32_t)(EBP + 0x18)));
L_116a795e:;
  /* 116a795e mov esp, ebp */
  ESP = (EBP);
  /* 116a7960 pop ebp */
  EBP = (pop32());
  /* 116a7961 ret  */
  ESPCHK(0x116a78b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017970 @ 0x116a7970 (206 bytes, 81 insns) */
void f_116a7970(void) {
  FTRACE(0x116a7970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a7970 push ebp */
  push32((uint32_t)(EBP));
  /* 116a7971 mov ebp, esp */
  EBP = (ESP);
  /* 116a7973 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a7976 mov eax, dword ptr [ebp + 0x28] */
  EAX = (r32((uint32_t)(EBP + 0x28)));
  /* 116a7979 push eax */
  push32((uint32_t)(EAX));
  /* 116a797a lea ecx, [ebp + 0x20] */
  ECX = ((uint32_t)(EBP + 0x20));
  /* 116a797d push ecx */
  push32((uint32_t)(ECX));
  /* 116a797e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7981 push edx */
  push32((uint32_t)(EDX));
  /* 116a7982 call 0x116a7f10 */
  push32(0x116a7987u); f_116a7f10();
  /* 116a7987 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a798a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a798c jne 0x116a79ce */
  if (!C.zf) goto L_116a79ce;
  /* 116a798e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a7991 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 116a7993 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 116a7996 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a7999 and ecx, 0xffffffe1 */
  { uint32_t _r=(ECX)&(0xffffffe1u); ECX = (_r); fl_logic(_r,32); }
  /* 116a799c or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 116a799f mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 116a79a2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116a79a5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 116a79a8 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116a79ab mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 116a79ae lea ecx, [ebp + 0x20] */
  ECX = ((uint32_t)(EBP + 0x20));
  /* 116a79b1 push ecx */
  push32((uint32_t)(ECX));
  /* 116a79b2 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 116a79b5 push edx */
  push32((uint32_t)(EDX));
  /* 116a79b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a79b9 push eax */
  push32((uint32_t)(EAX));
  /* 116a79ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a79bd push ecx */
  push32((uint32_t)(ECX));
  /* 116a79be lea edx, [ebp + 0x28] */
  EDX = ((uint32_t)(EBP + 0x28));
  /* 116a79c1 push edx */
  push32((uint32_t)(EDX));
  /* 116a79c2 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 116a79c5 push eax */
  push32((uint32_t)(EAX));
  /* 116a79c6 call 0x116a7a40 */
  push32(0x116a79cbu); f_116a7a40();
  /* 116a79cb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a79ce:;
  /* 116a79ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a79d1 push ecx */
  push32((uint32_t)(ECX));
  /* 116a79d2 call 0x116a83b0 */
  push32(0x116a79d7u); f_116a83b0();
  /* 116a79d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a79da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a79dd cmp dword ptr [0x116ce9a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116ce9a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a79e4 jne 0x116a7a1a */
  if (!C.zf) goto L_116a7a1a;
  /* 116a79e6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a79ea je 0x116a7a1a */
  if (C.zf) goto L_116a7a1a;
  /* 116a79ec mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 116a79ef push edx */
  push32((uint32_t)(EDX));
  /* 116a79f0 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 116a79f3 push eax */
  push32((uint32_t)(EAX));
  /* 116a79f4 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 116a79f7 push ecx */
  push32((uint32_t)(ECX));
  /* 116a79f8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116a79fb push edx */
  push32((uint32_t)(EDX));
  /* 116a79fc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116a79ff push eax */
  push32((uint32_t)(EAX));
  /* 116a7a00 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116a7a03 push ecx */
  push32((uint32_t)(ECX));
  /* 116a7a04 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a7a07 push edx */
  push32((uint32_t)(EDX));
  /* 116a7a08 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7a0b push eax */
  push32((uint32_t)(EAX));
  /* 116a7a0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a7a0f push ecx */
  push32((uint32_t)(ECX));
  /* 116a7a10 call 0x116a8290 */
  push32(0x116a7a15u); f_116a8290();
  /* 116a7a15 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a7a18 jmp 0x116a7a3a */
  goto L_116a7a3a;
L_116a7a1a:;
  /* 116a7a1a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a7a1d push edx */
  push32((uint32_t)(EDX));
  /* 116a7a1e call 0x116a8330 */
  push32(0x116a7a23u); f_116a8330();
  /* 116a7a23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a7a26 push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 116a7a2b mov eax, dword ptr [ebp + 0x28] */
  EAX = (r32((uint32_t)(EBP + 0x28)));
  /* 116a7a2e push eax */
  push32((uint32_t)(EAX));
  /* 116a7a2f call 0x116a8480 */
  push32(0x116a7a34u); f_116a8480();
  /* 116a7a34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a7a37 fld qword ptr [ebp + 0x20] */
  fpu_push(rf64((uint32_t)(EBP + 0x20)));
L_116a7a3a:;
  /* 116a7a3a mov esp, ebp */
  ESP = (EBP);
  /* 116a7a3c pop ebp */
  EBP = (pop32());
  /* 116a7a3d ret  */
  ESPCHK(0x116a7970u, _esp0);
  ESP += 4; return;
}

/* FUN_10017a40 @ 0x116a7a40 (1201 bytes, 425 insns) [1 switch table(s)] */
void f_116a7a40(void) {
  FTRACE(0x116a7a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a7a40 push ebp */
  push32((uint32_t)(EBP));
  /* 116a7a41 mov ebp, esp */
  EBP = (ESP);
  /* 116a7a43 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a7a46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7a49 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 116a7a50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7a53 mov dword ptr [ecx + 8], 0 */
  w32((uint32_t)(ECX + 0x8), (0x0u));
  /* 116a7a5a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7a5d mov dword ptr [edx + 0xc], 0 */
  w32((uint32_t)(EDX + 0xc), (0x0u));
  /* 116a7a64 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a7a67 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 116a7a6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a7a6c je 0x116a7a84 */
  if (C.zf) goto L_116a7a84;
  /* 116a7a6e mov dword ptr [ebp - 4], 0xc000008f */
  w32((uint32_t)(EBP + -0x4), (0xc000008fu));
  /* 116a7a75 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7a78 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116a7a7b or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 116a7a7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7a81 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_116a7a84:;
  /* 116a7a84 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a7a87 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 116a7a8a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a7a8c je 0x116a7aa3 */
  if (C.zf) goto L_116a7aa3;
  /* 116a7a8e mov dword ptr [ebp - 4], 0xc0000093 */
  w32((uint32_t)(EBP + -0x4), (0xc0000093u));
  /* 116a7a95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7a98 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 116a7a9b or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 116a7a9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7aa0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_116a7aa3:;
  /* 116a7aa3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a7aa6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 116a7aa9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a7aab je 0x116a7ac3 */
  if (C.zf) goto L_116a7ac3;
  /* 116a7aad mov dword ptr [ebp - 4], 0xc0000091 */
  w32((uint32_t)(EBP + -0x4), (0xc0000091u));
  /* 116a7ab4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7ab7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116a7aba or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 116a7abd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7ac0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_116a7ac3:;
  /* 116a7ac3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a7ac6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 116a7ac9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a7acb je 0x116a7ae3 */
  if (C.zf) goto L_116a7ae3;
  /* 116a7acd mov dword ptr [ebp - 4], 0xc000008e */
  w32((uint32_t)(EBP + -0x4), (0xc000008eu));
  /* 116a7ad4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7ad7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116a7ada or edx, 8 */
  { uint32_t _r=(EDX)|(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 116a7add mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7ae0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_116a7ae3:;
  /* 116a7ae3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a7ae6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 116a7ae9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a7aeb je 0x116a7b02 */
  if (C.zf) goto L_116a7b02;
  /* 116a7aed mov dword ptr [ebp - 4], 0xc0000090 */
  w32((uint32_t)(EBP + -0x4), (0xc0000090u));
  /* 116a7af4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7af7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 116a7afa or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
  /* 116a7afc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7aff mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_116a7b02:;
  /* 116a7b02 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7b05 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116a7b07 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 116a7b0a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116a7b0c sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a7b0e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 116a7b0f and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 116a7b12 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 116a7b15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7b18 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 116a7b1b and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 116a7b1e or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 116a7b20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7b23 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 116a7b26 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7b29 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a7b2b and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 116a7b2e neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 116a7b30 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a7b32 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 116a7b33 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 116a7b36 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 116a7b39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7b3c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116a7b3f and ecx, 0xfffffff7 */
  { uint32_t _r=(ECX)&(0xfffffff7u); ECX = (_r); fl_logic(_r,32); }
  /* 116a7b42 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 116a7b44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7b47 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 116a7b4a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7b4d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116a7b4f and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 116a7b52 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 116a7b54 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a7b56 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 116a7b57 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116a7b5a shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116a7b5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7b60 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 116a7b63 and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
  /* 116a7b65 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 116a7b67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7b6a mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 116a7b6d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7b70 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116a7b72 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 116a7b75 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116a7b77 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a7b79 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 116a7b7a and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 116a7b7d shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 116a7b7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7b82 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 116a7b85 and edx, 0xfffffffd */
  { uint32_t _r=(EDX)&(0xfffffffdu); EDX = (_r); fl_logic(_r,32); }
  /* 116a7b88 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 116a7b8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7b8d mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 116a7b90 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7b93 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a7b95 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 116a7b98 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 116a7b9a sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a7b9c inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 116a7b9d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 116a7ba0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7ba3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116a7ba6 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 116a7ba9 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 116a7bab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7bae mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 116a7bb1 call 0x116a8440 */
  push32(0x116a7bb6u); f_116a8440();
  /* 116a7bb6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116a7bb9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a7bbc and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 116a7bbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a7bc1 je 0x116a7bd2 */
  if (C.zf) goto L_116a7bd2;
  /* 116a7bc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7bc6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116a7bc9 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 116a7bcc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7bcf mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
L_116a7bd2:;
  /* 116a7bd2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a7bd5 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 116a7bd8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a7bda je 0x116a7bea */
  if (C.zf) goto L_116a7bea;
  /* 116a7bdc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7bdf mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 116a7be2 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 116a7be4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7be7 mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
L_116a7bea:;
  /* 116a7bea mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a7bed and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 116a7bf0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a7bf2 je 0x116a7c03 */
  if (C.zf) goto L_116a7c03;
  /* 116a7bf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7bf7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 116a7bfa or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 116a7bfd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7c00 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_116a7c03:;
  /* 116a7c03 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a7c06 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 116a7c09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a7c0b je 0x116a7c1c */
  if (C.zf) goto L_116a7c1c;
  /* 116a7c0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7c10 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116a7c13 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 116a7c16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7c19 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
L_116a7c1c:;
  /* 116a7c1c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a7c1f and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 116a7c22 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a7c24 je 0x116a7c34 */
  if (C.zf) goto L_116a7c34;
  /* 116a7c26 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7c29 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 116a7c2c or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 116a7c2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7c31 mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
L_116a7c34:;
  /* 116a7c34 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7c37 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116a7c39 and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 116a7c3e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116a7c41 cmp dword ptr [ebp - 0xc], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a7c48 ja 0x116a7c64 */
  if ((!C.cf&&!C.zf)) goto L_116a7c64;
  /* 116a7c4a cmp dword ptr [ebp - 0xc], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a7c51 je 0x116a7c7e */
  if (C.zf) goto L_116a7c7e;
  /* 116a7c53 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a7c57 je 0x116a7ca2 */
  if (C.zf) goto L_116a7ca2;
  /* 116a7c59 cmp dword ptr [ebp - 0xc], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a7c60 je 0x116a7c90 */
  if (C.zf) goto L_116a7c90;
  /* 116a7c62 jmp 0x116a7caf */
  goto L_116a7caf;
L_116a7c64:;
  /* 116a7c64 cmp dword ptr [ebp - 0xc], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a7c6b je 0x116a7c6f */
  if (C.zf) goto L_116a7c6f;
  /* 116a7c6d jmp 0x116a7caf */
  goto L_116a7caf;
L_116a7c6f:;
  /* 116a7c6f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7c72 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a7c74 or edx, 3 */
  { uint32_t _r=(EDX)|(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 116a7c77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7c7a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116a7c7c jmp 0x116a7caf */
  goto L_116a7caf;
L_116a7c7e:;
  /* 116a7c7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7c81 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a7c83 and edx, 0xfffffffc */
  { uint32_t _r=(EDX)&(0xfffffffcu); EDX = (_r); fl_logic(_r,32); }
  /* 116a7c86 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 116a7c89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7c8c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116a7c8e jmp 0x116a7caf */
  goto L_116a7caf;
L_116a7c90:;
  /* 116a7c90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7c93 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a7c95 and edx, 0xfffffffc */
  { uint32_t _r=(EDX)&(0xfffffffcu); EDX = (_r); fl_logic(_r,32); }
  /* 116a7c98 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 116a7c9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7c9e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116a7ca0 jmp 0x116a7caf */
  goto L_116a7caf;
L_116a7ca2:;
  /* 116a7ca2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7ca5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a7ca7 and edx, 0xfffffffc */
  { uint32_t _r=(EDX)&(0xfffffffcu); EDX = (_r); fl_logic(_r,32); }
  /* 116a7caa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7cad mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_116a7caf:;
  /* 116a7caf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7cb2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a7cb4 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 116a7cba mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 116a7cbd cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a7cc1 je 0x116a7cf8 */
  if (C.zf) goto L_116a7cf8;
  /* 116a7cc3 cmp dword ptr [ebp - 0x10], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a7cca je 0x116a7ce6 */
  if (C.zf) goto L_116a7ce6;
  /* 116a7ccc cmp dword ptr [ebp - 0x10], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a7cd3 je 0x116a7cd7 */
  if (C.zf) goto L_116a7cd7;
  /* 116a7cd5 jmp 0x116a7d08 */
  goto L_116a7d08;
L_116a7cd7:;
  /* 116a7cd7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7cda mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116a7cdc and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 116a7cdf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7ce2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 116a7ce4 jmp 0x116a7d08 */
  goto L_116a7d08;
L_116a7ce6:;
  /* 116a7ce6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7ce9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116a7ceb and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 116a7cee or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 116a7cf1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7cf4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 116a7cf6 jmp 0x116a7d08 */
  goto L_116a7d08;
L_116a7cf8:;
  /* 116a7cf8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7cfb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116a7cfd and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 116a7d00 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 116a7d03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7d06 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_116a7d08:;
  /* 116a7d08 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116a7d0b and eax, 0xfff */
  { uint32_t _r=(EAX)&(0xfffu); EAX = (_r); fl_logic(_r,32); }
  /* 116a7d10 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116a7d13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7d16 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a7d18 and edx, 0xfffe001f */
  { uint32_t _r=(EDX)&(0xfffe001fu); EDX = (_r); fl_logic(_r,32); }
  /* 116a7d1e or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 116a7d20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7d23 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116a7d25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7d28 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 116a7d2b or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 116a7d2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7d31 mov dword ptr [eax + 0x20], edx */
  w32((uint32_t)(EAX + 0x20), (EDX));
  /* 116a7d34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7d37 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 116a7d3a and edx, 0xffffffe1 */
  { uint32_t _r=(EDX)&(0xffffffe1u); EDX = (_r); fl_logic(_r,32); }
  /* 116a7d3d or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 116a7d40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7d43 mov dword ptr [eax + 0x20], edx */
  w32((uint32_t)(EAX + 0x20), (EDX));
  /* 116a7d46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7d49 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116a7d4c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116a7d4e mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 116a7d51 mov edx, dword ptr [edx + 4] */
  EDX = (r32((uint32_t)(EDX + 0x4)));
  /* 116a7d54 mov dword ptr [ecx + 0x14], edx */
  w32((uint32_t)(ECX + 0x14), (EDX));
  /* 116a7d57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7d5a mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 116a7d5d or ecx, 1 */
  { uint32_t _r=(ECX)|(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116a7d60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7d63 mov dword ptr [edx + 0x50], ecx */
  w32((uint32_t)(EDX + 0x50), (ECX));
  /* 116a7d66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7d69 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 116a7d6c and ecx, 0xffffffe1 */
  { uint32_t _r=(ECX)&(0xffffffe1u); ECX = (_r); fl_logic(_r,32); }
  /* 116a7d6f or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 116a7d72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7d75 mov dword ptr [edx + 0x50], ecx */
  w32((uint32_t)(EDX + 0x50), (ECX));
  /* 116a7d78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7d7b mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116a7d7e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a7d80 mov dword ptr [eax + 0x40], edx */
  w32((uint32_t)(EAX + 0x40), (EDX));
  /* 116a7d83 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 116a7d86 mov dword ptr [eax + 0x44], ecx */
  w32((uint32_t)(EAX + 0x44), (ECX));
  /* 116a7d89 call 0x116a8460 */
  push32(0x116a7d8eu); f_116a8460();
  /* 116a7d8e lea edx, [ebp + 8] */
  EDX = ((uint32_t)(EBP + 0x8));
  /* 116a7d91 push edx */
  push32((uint32_t)(EDX));
  /* 116a7d92 push 1 */
  push32((uint32_t)(0x1u));
  /* 116a7d94 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a7d96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a7d99 push eax */
  push32((uint32_t)(EAX));
  /* 116a7d9a call dword ptr [0x116d3380] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3380))), 0x116a7da0u);
  /* 116a7da0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7da3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 116a7da6 shr edx, 4 */
  EDX = (sh_shr((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 116a7da9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 116a7dac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a7dae je 0x116a7dbd */
  if (C.zf) goto L_116a7dbd;
  /* 116a7db0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7db3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116a7db5 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 116a7db8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7dbb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_116a7dbd:;
  /* 116a7dbd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7dc0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116a7dc3 shr ecx, 3 */
  ECX = (sh_shr((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 116a7dc6 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116a7dc9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a7dcb je 0x116a7dd9 */
  if (C.zf) goto L_116a7dd9;
  /* 116a7dcd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7dd0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116a7dd2 and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
  /* 116a7dd4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7dd7 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_116a7dd9:;
  /* 116a7dd9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7ddc mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 116a7ddf shr eax, 2 */
  EAX = (sh_shr((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 116a7de2 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 116a7de5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a7de7 je 0x116a7df6 */
  if (C.zf) goto L_116a7df6;
  /* 116a7de9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7dec mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a7dee and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 116a7df1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7df4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_116a7df6:;
  /* 116a7df6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7df9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 116a7dfc shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 116a7dfe and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 116a7e01 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a7e03 je 0x116a7e12 */
  if (C.zf) goto L_116a7e12;
  /* 116a7e05 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7e08 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116a7e0a and ecx, 0xffffffef */
  { uint32_t _r=(ECX)&(0xffffffefu); ECX = (_r); fl_logic(_r,32); }
  /* 116a7e0d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7e10 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_116a7e12:;
  /* 116a7e12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7e15 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116a7e18 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116a7e1b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a7e1d je 0x116a7e2b */
  if (C.zf) goto L_116a7e2b;
  /* 116a7e1f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7e22 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116a7e24 and al, 0xdf */
  { uint32_t _r=(AL)&(0xdfu); AL = (_r); fl_logic(_r,8); }
  /* 116a7e26 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7e29 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_116a7e2b:;
  /* 116a7e2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7e2e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116a7e30 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 116a7e33 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116a7e36 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a7e3a ja 0x116a7e89 */
  if ((!C.cf&&!C.zf)) goto L_116a7e89;
  /* 116a7e3c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a7e3f jmp dword ptr [ecx*4 + 0x116a7ef1] */
  switch (ECX) {
    case 0: goto L_116a7e7c;
    case 1: goto L_116a7e6a;
    case 2: goto L_116a7e58;
    case 3: goto L_116a7e46;
    default: x86_unimpl("switch@0x116a7e3f out of table"); return;
  }
L_116a7e46:;
  /* 116a7e46 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7e49 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116a7e4b and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 116a7e4e or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 116a7e51 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7e54 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116a7e56 jmp 0x116a7e89 */
  goto L_116a7e89;
L_116a7e58:;
  /* 116a7e58 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7e5b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116a7e5d and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 116a7e60 or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 116a7e63 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7e66 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116a7e68 jmp 0x116a7e89 */
  goto L_116a7e89;
L_116a7e6a:;
  /* 116a7e6a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7e6d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116a7e6f and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 116a7e72 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 116a7e75 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7e78 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116a7e7a jmp 0x116a7e89 */
  goto L_116a7e89;
L_116a7e7c:;
  /* 116a7e7c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7e7f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116a7e81 and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 116a7e84 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7e87 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_116a7e89:;
  /* 116a7e89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7e8c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116a7e8e shr eax, 2 */
  EAX = (sh_shr((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 116a7e91 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 116a7e94 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116a7e97 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a7e9b je 0x116a7eab */
  if (C.zf) goto L_116a7eab;
  /* 116a7e9d cmp dword ptr [ebp - 0x18], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a7ea1 je 0x116a7ebd */
  if (C.zf) goto L_116a7ebd;
  /* 116a7ea3 cmp dword ptr [ebp - 0x18], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a7ea7 je 0x116a7ecf */
  if (C.zf) goto L_116a7ecf;
  /* 116a7ea9 jmp 0x116a7edc */
  goto L_116a7edc;
L_116a7eab:;
  /* 116a7eab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7eae mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a7eb0 and dh, 0xf3 */
  { uint32_t _r=(C.d.b.h)&(0xf3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 116a7eb3 or dh, 3 */
  { uint32_t _r=(C.d.b.h)|(0x3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 116a7eb6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7eb9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116a7ebb jmp 0x116a7edc */
  goto L_116a7edc;
L_116a7ebd:;
  /* 116a7ebd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7ec0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a7ec2 and dh, 0xf3 */
  { uint32_t _r=(C.d.b.h)&(0xf3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 116a7ec5 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 116a7ec8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7ecb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116a7ecd jmp 0x116a7edc */
  goto L_116a7edc;
L_116a7ecf:;
  /* 116a7ecf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7ed2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a7ed4 and dh, 0xf3 */
  { uint32_t _r=(C.d.b.h)&(0xf3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 116a7ed7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7eda mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_116a7edc:;
  /* 116a7edc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7edf mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116a7ee2 mov eax, dword ptr [ecx + 0x40] */
  EAX = (r32((uint32_t)(ECX + 0x40)));
  /* 116a7ee5 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 116a7ee7 mov ecx, dword ptr [ecx + 0x44] */
  ECX = (r32((uint32_t)(ECX + 0x44)));
  /* 116a7eea mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 116a7eed mov esp, ebp */
  ESP = (EBP);
  /* 116a7eef pop ebp */
  EBP = (pop32());
  /* 116a7ef0 ret  */
  ESPCHK(0x116a7a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10017f10 @ 0x116a7f10 (882 bytes, 268 insns) */
void f_116a7f10(void) {
  FTRACE(0x116a7f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a7f10 push ebp */
  push32((uint32_t)(EBP));
  /* 116a7f11 mov ebp, esp */
  EBP = (ESP);
  /* 116a7f13 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a7f16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7f19 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 116a7f1c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a7f1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7f22 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 116a7f25 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a7f27 je 0x116a7f4a */
  if (C.zf) goto L_116a7f4a;
  /* 116a7f29 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a7f2c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 116a7f2f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a7f31 je 0x116a7f4a */
  if (C.zf) goto L_116a7f4a;
  /* 116a7f33 push 1 */
  push32((uint32_t)(0x1u));
  /* 116a7f35 call 0x116a84c0 */
  push32(0x116a7f3au); f_116a84c0();
  /* 116a7f3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a7f3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a7f40 and al, 0xf7 */
  { uint32_t _r=(AL)&(0xf7u); AL = (_r); fl_logic(_r,8); }
  /* 116a7f42 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a7f45 jmp 0x116a824e */
  goto L_116a824e;
L_116a7f4a:;
  /* 116a7f4a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7f4d and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 116a7f50 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a7f52 je 0x116a7f75 */
  if (C.zf) goto L_116a7f75;
  /* 116a7f54 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a7f57 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 116a7f5a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a7f5c je 0x116a7f75 */
  if (C.zf) goto L_116a7f75;
  /* 116a7f5e push 4 */
  push32((uint32_t)(0x4u));
  /* 116a7f60 call 0x116a84c0 */
  push32(0x116a7f65u); f_116a84c0();
  /* 116a7f65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a7f68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a7f6b and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
  /* 116a7f6d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a7f70 jmp 0x116a824e */
  goto L_116a824e;
L_116a7f75:;
  /* 116a7f75 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a7f78 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116a7f7b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a7f7d je 0x116a80f1 */
  if (C.zf) goto L_116a80f1;
  /* 116a7f83 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a7f86 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 116a7f89 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a7f8b je 0x116a80f1 */
  if (C.zf) goto L_116a80f1;
  /* 116a7f91 push 8 */
  push32((uint32_t)(0x8u));
  /* 116a7f93 call 0x116a84c0 */
  push32(0x116a7f98u); f_116a84c0();
  /* 116a7f98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a7f9b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a7f9e and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 116a7fa3 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 116a7fa6 cmp dword ptr [ebp - 0x20], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a7fad ja 0x116a7fd0 */
  if ((!C.cf&&!C.zf)) goto L_116a7fd0;
  /* 116a7faf cmp dword ptr [ebp - 0x20], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a7fb6 je 0x116a8025 */
  if (C.zf) goto L_116a8025;
  /* 116a7fb8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a7fbc je 0x116a7fe2 */
  if (C.zf) goto L_116a7fe2;
  /* 116a7fbe cmp dword ptr [ebp - 0x20], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a7fc5 je 0x116a8065 */
  if (C.zf) goto L_116a8065;
  /* 116a7fcb jmp 0x116a80e3 */
  goto L_116a80e3;
L_116a7fd0:;
  /* 116a7fd0 cmp dword ptr [ebp - 0x20], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a7fd7 je 0x116a80a5 */
  if (C.zf) goto L_116a80a5;
  /* 116a7fdd jmp 0x116a80e3 */
  goto L_116a80e3;
L_116a7fe2:;
  /* 116a7fe2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a7fe5 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 116a7fe7 fcomp qword ptr [0x116cac48] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x116cac48)));
  (void)fpu_pop();
  /* 116a7fed fnstsw ax */
  AX = fpu_status();
  /* 116a7fef test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 116a7ff2 jne 0x116a8007 */
  if (!C.zf) goto L_116a8007;
  /* 116a7ff4 mov edx, dword ptr [0x116ced98] */
  EDX = (r32((uint32_t)(0x116ced98)));
  /* 116a7ffa mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 116a7ffd mov eax, dword ptr [0x116ced9c] */
  EAX = (r32((uint32_t)(0x116ced9c)));
  /* 116a8002 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 116a8005 jmp 0x116a8012 */
  goto L_116a8012;
L_116a8007:;
  /* 116a8007 fld qword ptr [0x116ced98] */
  fpu_push(rf64((uint32_t)(0x116ced98)));
  /* 116a800d fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 116a800f fstp qword ptr [ebp - 0x28] */
  wf64((uint32_t)(EBP + -0x28), FPU_ST(0));
  (void)fpu_pop();
L_116a8012:;
  /* 116a8012 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a8015 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 116a8018 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 116a801a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a801d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 116a8020 jmp 0x116a80e3 */
  goto L_116a80e3;
L_116a8025:;
  /* 116a8025 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a8028 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 116a802a fcomp qword ptr [0x116cac48] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x116cac48)));
  (void)fpu_pop();
  /* 116a8030 fnstsw ax */
  AX = fpu_status();
  /* 116a8032 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 116a8035 jne 0x116a804a */
  if (!C.zf) goto L_116a804a;
  /* 116a8037 mov edx, dword ptr [0x116ced98] */
  EDX = (r32((uint32_t)(0x116ced98)));
  /* 116a803d mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 116a8040 mov eax, dword ptr [0x116ced9c] */
  EAX = (r32((uint32_t)(0x116ced9c)));
  /* 116a8045 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 116a8048 jmp 0x116a8055 */
  goto L_116a8055;
L_116a804a:;
  /* 116a804a fld qword ptr [0x116ceda8] */
  fpu_push(rf64((uint32_t)(0x116ceda8)));
  /* 116a8050 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 116a8052 fstp qword ptr [ebp - 0x30] */
  wf64((uint32_t)(EBP + -0x30), FPU_ST(0));
  (void)fpu_pop();
L_116a8055:;
  /* 116a8055 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a8058 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a805b mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 116a805d mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a8060 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 116a8063 jmp 0x116a80e3 */
  goto L_116a80e3;
L_116a8065:;
  /* 116a8065 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a8068 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 116a806a fcomp qword ptr [0x116cac48] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x116cac48)));
  (void)fpu_pop();
  /* 116a8070 fnstsw ax */
  AX = fpu_status();
  /* 116a8072 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 116a8075 jne 0x116a808a */
  if (!C.zf) goto L_116a808a;
  /* 116a8077 mov edx, dword ptr [0x116ceda8] */
  EDX = (r32((uint32_t)(0x116ceda8)));
  /* 116a807d mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 116a8080 mov eax, dword ptr [0x116cedac] */
  EAX = (r32((uint32_t)(0x116cedac)));
  /* 116a8085 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 116a8088 jmp 0x116a8095 */
  goto L_116a8095;
L_116a808a:;
  /* 116a808a fld qword ptr [0x116ced98] */
  fpu_push(rf64((uint32_t)(0x116ced98)));
  /* 116a8090 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 116a8092 fstp qword ptr [ebp - 0x38] */
  wf64((uint32_t)(EBP + -0x38), FPU_ST(0));
  (void)fpu_pop();
L_116a8095:;
  /* 116a8095 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a8098 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 116a809b mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 116a809d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 116a80a0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 116a80a3 jmp 0x116a80e3 */
  goto L_116a80e3;
L_116a80a5:;
  /* 116a80a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a80a8 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 116a80aa fcomp qword ptr [0x116cac48] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x116cac48)));
  (void)fpu_pop();
  /* 116a80b0 fnstsw ax */
  AX = fpu_status();
  /* 116a80b2 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 116a80b5 jne 0x116a80ca */
  if (!C.zf) goto L_116a80ca;
  /* 116a80b7 mov edx, dword ptr [0x116ceda8] */
  EDX = (r32((uint32_t)(0x116ceda8)));
  /* 116a80bd mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 116a80c0 mov eax, dword ptr [0x116cedac] */
  EAX = (r32((uint32_t)(0x116cedac)));
  /* 116a80c5 mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 116a80c8 jmp 0x116a80d5 */
  goto L_116a80d5;
L_116a80ca:;
  /* 116a80ca fld qword ptr [0x116ceda8] */
  fpu_push(rf64((uint32_t)(0x116ceda8)));
  /* 116a80d0 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 116a80d2 fstp qword ptr [ebp - 0x40] */
  wf64((uint32_t)(EBP + -0x40), FPU_ST(0));
  (void)fpu_pop();
L_116a80d5:;
  /* 116a80d5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a80d8 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 116a80db mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 116a80dd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a80e0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_116a80e3:;
  /* 116a80e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a80e6 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 116a80e9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116a80ec jmp 0x116a824e */
  goto L_116a824e;
L_116a80f1:;
  /* 116a80f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a80f4 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 116a80f7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a80f9 je 0x116a824e */
  if (C.zf) goto L_116a824e;
  /* 116a80ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a8102 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 116a8105 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a8107 je 0x116a824e */
  if (C.zf) goto L_116a824e;
  /* 116a810d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116a8114 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a8117 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 116a811a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a811c je 0x116a8125 */
  if (C.zf) goto L_116a8125;
  /* 116a811e mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_116a8125:;
  /* 116a8125 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a8128 fld qword ptr [edx] */
  fpu_push(rf64((uint32_t)(EDX)));
  /* 116a812a fcomp qword ptr [0x116cac48] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x116cac48)));
  (void)fpu_pop();
  /* 116a8130 fnstsw ax */
  AX = fpu_status();
  /* 116a8132 test ah, 0x40 */
  { uint32_t _r=(AH)&(0x40u); fl_logic(_r,8); }
  /* 116a8135 jne 0x116a822e */
  if (!C.zf) goto L_116a822e;
  /* 116a813b lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 116a813e push eax */
  push32((uint32_t)(EAX));
  /* 116a813f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a8142 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116a8145 push edx */
  push32((uint32_t)(EDX));
  /* 116a8146 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 116a8148 push eax */
  push32((uint32_t)(EAX));
  /* 116a8149 call 0x116ab5d0 */
  push32(0x116a814eu); f_116ab5d0();
  /* 116a814e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8151 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 116a8154 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a8157 sub ecx, 0x600 */
  { uint32_t _a=(ECX),_b=(0x600u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a815d mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 116a8160 cmp dword ptr [ebp - 0x14], 0xfffffbce */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xfffffbceu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a8167 jge 0x116a8181 */
  if ((C.sf==C.of)) goto L_116a8181;
  /* 116a8169 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 116a816c fmul qword ptr [0x116cac48] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x116cac48)));
  /* 116a8172 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 116a8175 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 116a817c jmp 0x116a821e */
  goto L_116a821e;
L_116a8181:;
  /* 116a8181 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 116a8184 fcomp qword ptr [0x116cac48] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x116cac48)));
  (void)fpu_pop();
  /* 116a818a fnstsw ax */
  AX = fpu_status();
  /* 116a818c test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 116a818f je 0x116a819a */
  if (C.zf) goto L_116a819a;
  /* 116a8191 mov dword ptr [ebp - 0x44], 1 */
  w32((uint32_t)(EBP + -0x44), (0x1u));
  /* 116a8198 jmp 0x116a81a1 */
  goto L_116a81a1;
L_116a819a:;
  /* 116a819a mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
L_116a81a1:;
  /* 116a81a1 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 116a81a4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 116a81a7 mov ax, word ptr [ebp - 0xa] */
  AX = (r16((uint32_t)(EBP + -0xa)));
  /* 116a81ab and ax, 0xf */
  { uint32_t _r=(AX)&(0xfu); AX = (_r); fl_logic(_r,16); }
  /* 116a81af mov word ptr [ebp - 0xa], ax */
  w16((uint32_t)(EBP + -0xa), (AX));
  /* 116a81b3 mov cx, word ptr [ebp - 0xa] */
  CX = (r16((uint32_t)(EBP + -0xa)));
  /* 116a81b7 or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 116a81ba mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
  /* 116a81be jmp 0x116a81c9 */
  goto L_116a81c9;
L_116a81c0:;
  /* 116a81c0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a81c3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a81c6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_116a81c9:;
  /* 116a81c9 cmp dword ptr [ebp - 0x14], 0xfffffc03 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xfffffc03u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a81d0 jge 0x116a8210 */
  if ((C.sf==C.of)) goto L_116a8210;
  /* 116a81d2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a81d5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 116a81d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a81da je 0x116a81e9 */
  if (C.zf) goto L_116a81e9;
  /* 116a81dc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a81e0 jne 0x116a81e9 */
  if (!C.zf) goto L_116a81e9;
  /* 116a81e2 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_116a81e9:;
  /* 116a81e9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a81ec shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 116a81ee mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 116a81f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a81f4 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 116a81f7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a81f9 je 0x116a8206 */
  if (C.zf) goto L_116a8206;
  /* 116a81fb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a81fe or eax, 0x80000000 */
  { uint32_t _r=(EAX)|(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 116a8203 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_116a8206:;
  /* 116a8206 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a8209 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 116a820b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116a820e jmp 0x116a81c0 */
  goto L_116a81c0;
L_116a8210:;
  /* 116a8210 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a8214 je 0x116a821e */
  if (C.zf) goto L_116a821e;
  /* 116a8216 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 116a8219 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 116a821b fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
L_116a821e:;
  /* 116a821e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a8221 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a8224 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 116a8226 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a8229 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 116a822c jmp 0x116a8235 */
  goto L_116a8235;
L_116a822e:;
  /* 116a822e mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_116a8235:;
  /* 116a8235 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a8239 je 0x116a8245 */
  if (C.zf) goto L_116a8245;
  /* 116a823b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 116a823d call 0x116a84c0 */
  push32(0x116a8242u); f_116a84c0();
  /* 116a8242 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a8245:;
  /* 116a8245 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a8248 and edx, 0xfffffffd */
  { uint32_t _r=(EDX)&(0xfffffffdu); EDX = (_r); fl_logic(_r,32); }
  /* 116a824b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116a824e:;
  /* 116a824e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a8251 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 116a8254 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a8256 je 0x116a8275 */
  if (C.zf) goto L_116a8275;
  /* 116a8258 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a825b and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 116a825e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a8260 je 0x116a8275 */
  if (C.zf) goto L_116a8275;
  /* 116a8262 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 116a8264 call 0x116a84c0 */
  push32(0x116a8269u); f_116a84c0();
  /* 116a8269 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a826c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a826f and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 116a8272 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116a8275:;
  /* 116a8275 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a8277 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a827b sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 116a827e mov esp, ebp */
  ESP = (EBP);
  /* 116a8280 pop ebp */
  EBP = (pop32());
  /* 116a8281 ret  */
  ESPCHK(0x116a7f10u, _esp0);
  ESP += 4; return;
}

/* __umatherr @ 0x116a8290 (155 bytes, 54 insns) */
void f_116a8290(void) {
  FTRACE(0x116a8290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a8290 push ebp */
  push32((uint32_t)(EBP));
  /* 116a8291 mov ebp, esp */
  EBP = (ESP);
  /* 116a8293 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a8296 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a8299 push eax */
  push32((uint32_t)(EAX));
  /* 116a829a call 0x116a8370 */
  push32(0x116a829fu); f_116a8370();
  /* 116a829f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a82a2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 116a82a5 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a82a9 je 0x116a8307 */
  if (C.zf) goto L_116a8307;
  /* 116a82ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a82ae mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 116a82b1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a82b4 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 116a82b7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116a82ba mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116a82bd mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116a82c0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 116a82c3 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116a82c6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 116a82c9 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 116a82cc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116a82cf mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 116a82d2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116a82d5 push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 116a82da mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 116a82dd push edx */
  push32((uint32_t)(EDX));
  /* 116a82de call 0x116a8480 */
  push32(0x116a82e3u); f_116a8480();
  /* 116a82e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a82e6 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 116a82e9 push eax */
  push32((uint32_t)(EAX));
  /* 116a82ea call 0x116a8430 */
  push32(0x116a82efu); f_116a8430();
  /* 116a82ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a82f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a82f4 jne 0x116a8302 */
  if (!C.zf) goto L_116a8302;
  /* 116a82f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a82f9 push ecx */
  push32((uint32_t)(ECX));
  /* 116a82fa call 0x116a8330 */
  push32(0x116a82ffu); f_116a8330();
  /* 116a82ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a8302:;
  /* 116a8302 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 116a8305 jmp 0x116a8327 */
  goto L_116a8327;
L_116a8307:;
  /* 116a8307 push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 116a830c mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 116a830f push edx */
  push32((uint32_t)(EDX));
  /* 116a8310 call 0x116a8480 */
  push32(0x116a8315u); f_116a8480();
  /* 116a8315 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8318 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a831b push eax */
  push32((uint32_t)(EAX));
  /* 116a831c call 0x116a8330 */
  push32(0x116a8321u); f_116a8330();
  /* 116a8321 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8324 fld qword ptr [ebp + 0x20] */
  fpu_push(rf64((uint32_t)(EBP + 0x20)));
L_116a8327:;
  /* 116a8327 mov esp, ebp */
  ESP = (EBP);
  /* 116a8329 pop ebp */
  EBP = (pop32());
  /* 116a832a ret  */
  ESPCHK(0x116a8290u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__set_errno_from_matherr @ 0x116a8330 (58 bytes, 20 insns) */
void f_116a8330(void) {
  FTRACE(0x116a8330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a8330 push ebp */
  push32((uint32_t)(EBP));
  /* 116a8331 mov ebp, esp */
  EBP = (ESP);
  /* 116a8333 push ecx */
  push32((uint32_t)(ECX));
  /* 116a8334 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a8337 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a833a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a833e je 0x116a834e */
  if (C.zf) goto L_116a834e;
  /* 116a8340 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a8344 jle 0x116a8366 */
  if ((C.zf||C.sf!=C.of)) goto L_116a8366;
  /* 116a8346 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a834a jle 0x116a835b */
  if ((C.zf||C.sf!=C.of)) goto L_116a835b;
  /* 116a834c jmp 0x116a8366 */
  goto L_116a8366;
L_116a834e:;
  /* 116a834e call 0x116a77c0 */
  push32(0x116a8353u); f_116a77c0();
  /* 116a8353 mov dword ptr [eax], 0x21 */
  w32((uint32_t)(EAX), (0x21u));
  /* 116a8359 jmp 0x116a8366 */
  goto L_116a8366;
L_116a835b:;
  /* 116a835b call 0x116a77c0 */
  push32(0x116a8360u); f_116a77c0();
  /* 116a8360 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
L_116a8366:;
  /* 116a8366 mov esp, ebp */
  ESP = (EBP);
  /* 116a8368 pop ebp */
  EBP = (pop32());
  /* 116a8369 ret  */
  ESPCHK(0x116a8330u, _esp0);
  ESP += 4; return;
}

/* __get_fname @ 0x116a8370 (63 bytes, 22 insns) */
void f_116a8370(void) {
  FTRACE(0x116a8370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a8370 push ebp */
  push32((uint32_t)(EBP));
  /* 116a8371 mov ebp, esp */
  EBP = (ESP);
  /* 116a8373 push ecx */
  push32((uint32_t)(ECX));
  /* 116a8374 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116a837b jmp 0x116a8386 */
  goto L_116a8386;
L_116a837d:;
  /* 116a837d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a8380 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8383 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116a8386:;
  /* 116a8386 cmp dword ptr [ebp - 4], 0x1b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a838a jge 0x116a83a9 */
  if ((C.sf==C.of)) goto L_116a83a9;
  /* 116a838c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a838f mov edx, dword ptr [ecx*8 + 0x116ce8d0] */
  EDX = (r32((uint32_t)(ECX*8 + 0x116ce8d0)));
  /* 116a8396 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a8399 jne 0x116a83a7 */
  if (!C.zf) goto L_116a83a7;
  /* 116a839b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a839e mov eax, dword ptr [eax*8 + 0x116ce8d4] */
  EAX = (r32((uint32_t)(EAX*8 + 0x116ce8d4)));
  /* 116a83a5 jmp 0x116a83ab */
  goto L_116a83ab;
L_116a83a7:;
  /* 116a83a7 jmp 0x116a837d */
  goto L_116a837d;
L_116a83a9:;
  /* 116a83a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116a83ab:;
  /* 116a83ab mov esp, ebp */
  ESP = (EBP);
  /* 116a83ad pop ebp */
  EBP = (pop32());
  /* 116a83ae ret  */
  ESPCHK(0x116a8370u, _esp0);
  ESP += 4; return;
}

/* FUN_100183b0 @ 0x116a83b0 (113 bytes, 38 insns) */
void f_116a83b0(void) {
  FTRACE(0x116a83b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a83b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a83b1 mov ebp, esp */
  EBP = (ESP);
  /* 116a83b3 push ecx */
  push32((uint32_t)(ECX));
  /* 116a83b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a83b7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 116a83ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a83bc je 0x116a83c7 */
  if (C.zf) goto L_116a83c7;
  /* 116a83be mov dword ptr [ebp - 4], 5 */
  w32((uint32_t)(EBP + -0x4), (0x5u));
  /* 116a83c5 jmp 0x116a841a */
  goto L_116a841a;
L_116a83c7:;
  /* 116a83c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a83ca and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 116a83cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a83cf je 0x116a83da */
  if (C.zf) goto L_116a83da;
  /* 116a83d1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 116a83d8 jmp 0x116a841a */
  goto L_116a841a;
L_116a83da:;
  /* 116a83da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a83dd and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 116a83e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a83e2 je 0x116a83ed */
  if (C.zf) goto L_116a83ed;
  /* 116a83e4 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 116a83eb jmp 0x116a841a */
  goto L_116a841a;
L_116a83ed:;
  /* 116a83ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a83f0 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 116a83f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a83f5 je 0x116a8400 */
  if (C.zf) goto L_116a8400;
  /* 116a83f7 mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 116a83fe jmp 0x116a841a */
  goto L_116a841a;
L_116a8400:;
  /* 116a8400 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a8403 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 116a8406 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a8408 je 0x116a8413 */
  if (C.zf) goto L_116a8413;
  /* 116a840a mov dword ptr [ebp - 4], 4 */
  w32((uint32_t)(EBP + -0x4), (0x4u));
  /* 116a8411 jmp 0x116a841a */
  goto L_116a841a;
L_116a8413:;
  /* 116a8413 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_116a841a:;
  /* 116a841a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a841d mov esp, ebp */
  ESP = (EBP);
  /* 116a841f pop ebp */
  EBP = (pop32());
  /* 116a8420 ret  */
  ESPCHK(0x116a83b0u, _esp0);
  ESP += 4; return;
}

/* __matherr @ 0x116a8430 (7 bytes, 5 insns) */
void f_116a8430(void) {
  FTRACE(0x116a8430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a8430 push ebp */
  push32((uint32_t)(EBP));
  /* 116a8431 mov ebp, esp */
  EBP = (ESP);
  /* 116a8433 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a8435 pop ebp */
  EBP = (pop32());
  /* 116a8436 ret  */
  ESPCHK(0x116a8430u, _esp0);
  ESP += 4; return;
}

/* FUN_10018440 @ 0x116a8440 (22 bytes, 15 insns) */
void f_116a8440(void) {
  FTRACE(0x116a8440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a8440 push ebp */
  push32((uint32_t)(EBP));
  /* 116a8441 mov ebp, esp */
  EBP = (ESP);
  /* 116a8443 push ecx */
  push32((uint32_t)(ECX));
  /* 116a8444 push ebx */
  push32((uint32_t)(EBX));
  /* 116a8445 push esi */
  push32((uint32_t)(ESI));
  /* 116a8446 push edi */
  push32((uint32_t)(EDI));
  /* 116a8447 wait  */
  /* wait (no observable integer/reg state) */
  /* 116a8448 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 116a844b movsx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x4))));
  /* 116a844f pop edi */
  EDI = (pop32());
  /* 116a8450 pop esi */
  ESI = (pop32());
  /* 116a8451 pop ebx */
  EBX = (pop32());
  /* 116a8452 mov esp, ebp */
  ESP = (EBP);
  /* 116a8454 pop ebp */
  EBP = (pop32());
  /* 116a8455 ret  */
  ESPCHK(0x116a8440u, _esp0);
  ESP += 4; return;
}

/* FUN_10018460 @ 0x116a8460 (23 bytes, 15 insns) */
void f_116a8460(void) {
  FTRACE(0x116a8460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a8460 push ebp */
  push32((uint32_t)(EBP));
  /* 116a8461 mov ebp, esp */
  EBP = (ESP);
  /* 116a8463 push ecx */
  push32((uint32_t)(ECX));
  /* 116a8464 push ebx */
  push32((uint32_t)(EBX));
  /* 116a8465 push esi */
  push32((uint32_t)(ESI));
  /* 116a8466 push edi */
  push32((uint32_t)(EDI));
  /* 116a8467 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 116a846a fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 116a846c movsx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x4))));
  /* 116a8470 pop edi */
  EDI = (pop32());
  /* 116a8471 pop esi */
  ESI = (pop32());
  /* 116a8472 pop ebx */
  EBX = (pop32());
  /* 116a8473 mov esp, ebp */
  ESP = (EBP);
  /* 116a8475 pop ebp */
  EBP = (pop32());
  /* 116a8476 ret  */
  ESPCHK(0x116a8460u, _esp0);
  ESP += 4; return;
}

/* FUN_10018480 @ 0x116a8480 (50 bytes, 24 insns) */
void f_116a8480(void) {
  FTRACE(0x116a8480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a8480 push ebp */
  push32((uint32_t)(EBP));
  /* 116a8481 mov ebp, esp */
  EBP = (ESP);
  /* 116a8483 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a8486 push ebx */
  push32((uint32_t)(EBX));
  /* 116a8487 push esi */
  push32((uint32_t)(ESI));
  /* 116a8488 push edi */
  push32((uint32_t)(EDI));
  /* 116a8489 wait  */
  /* wait (no observable integer/reg state) */
  /* 116a848a fnstcw word ptr [ebp - 8] */
  w16((uint32_t)(EBP + -0x8), C.fcw);
  /* 116a848d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a8490 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 116a8493 movsx ecx, word ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x8))));
  /* 116a8497 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a849a not edx */
  EDX = (~(EDX));
  /* 116a849c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 116a849e or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 116a84a0 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 116a84a4 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 116a84a7 movsx eax, word ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x8))));
  /* 116a84ab pop edi */
  EDI = (pop32());
  /* 116a84ac pop esi */
  ESI = (pop32());
  /* 116a84ad pop ebx */
  EBX = (pop32());
  /* 116a84ae mov esp, ebp */
  ESP = (EBP);
  /* 116a84b0 pop ebp */
  EBP = (pop32());
  /* 116a84b1 ret  */
  ESPCHK(0x116a8480u, _esp0);
  ESP += 4; return;
}

/* FUN_100184c0 @ 0x116a84c0 (117 bytes, 53 insns) */
void f_116a84c0(void) {
  FTRACE(0x116a84c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a84c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a84c1 mov ebp, esp */
  EBP = (ESP);
  /* 116a84c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a84c6 push ebx */
  push32((uint32_t)(EBX));
  /* 116a84c7 push esi */
  push32((uint32_t)(ESI));
  /* 116a84c8 push edi */
  push32((uint32_t)(EDI));
  /* 116a84c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a84cc and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 116a84cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a84d1 je 0x116a84dd */
  if (C.zf) goto L_116a84dd;
  /* 116a84d3 fld xword ptr [0x116ce9ac] */
  fpu_push(rf80((uint32_t)(0x116ce9ac)));
  /* 116a84d9 fistp dword ptr [ebp - 0xc] */
  w32((uint32_t)(EBP + -0xc), (uint32_t)fpu_to_i32(FPU_ST(0)));
  (void)fpu_pop();
  /* 116a84dc wait  */
  /* wait (no observable integer/reg state) */
L_116a84dd:;
  /* 116a84dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a84e0 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 116a84e3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a84e5 je 0x116a84f7 */
  if (C.zf) goto L_116a84f7;
  /* 116a84e7 wait  */
  /* wait (no observable integer/reg state) */
  /* 116a84e8 fnstsw ax */
  AX = fpu_status();
  /* 116a84ea fld xword ptr [0x116ce9ac] */
  fpu_push(rf80((uint32_t)(0x116ce9ac)));
  /* 116a84f0 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 116a84f3 wait  */
  /* wait (no observable integer/reg state) */
  /* 116a84f4 wait  */
  /* wait (no observable integer/reg state) */
  /* 116a84f5 fnstsw ax */
  AX = fpu_status();
L_116a84f7:;
  /* 116a84f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a84fa and edx, 0x10 */
  { uint32_t _r=(EDX)&(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 116a84fd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a84ff je 0x116a850b */
  if (C.zf) goto L_116a850b;
  /* 116a8501 fld xword ptr [0x116ce9b8] */
  fpu_push(rf80((uint32_t)(0x116ce9b8)));
  /* 116a8507 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 116a850a wait  */
  /* wait (no observable integer/reg state) */
L_116a850b:;
  /* 116a850b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a850e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 116a8511 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a8513 je 0x116a851e */
  if (C.zf) goto L_116a851e;
  /* 116a8515 fldz  */
  fpu_push(0.0);
  /* 116a8517 fld1  */
  fpu_push(1.0);
  /* 116a8519 fdivrp st(1) */
  FPU_ST(1) = FPU_ST(0) / FPU_ST(1);
  (void)fpu_pop();
  /* 116a851b fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 116a851d wait  */
  /* wait (no observable integer/reg state) */
L_116a851e:;
  /* 116a851e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a8521 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 116a8524 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a8526 je 0x116a852e */
  if (C.zf) goto L_116a852e;
  /* 116a8528 fldpi  */
  fpu_push(3.14159265358979311599796346854);
  /* 116a852a fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 116a852d wait  */
  /* wait (no observable integer/reg state) */
L_116a852e:;
  /* 116a852e pop edi */
  EDI = (pop32());
  /* 116a852f pop esi */
  ESI = (pop32());
  /* 116a8530 pop ebx */
  EBX = (pop32());
  /* 116a8531 mov esp, ebp */
  ESP = (EBP);
  /* 116a8533 pop ebp */
  EBP = (pop32());
  /* 116a8534 ret  */
  ESPCHK(0x116a84c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018540 @ 0x116a8540 (421 bytes, 148 insns) */
void f_116a8540(void) {
  FTRACE(0x116a8540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a8540 push ebp */
  push32((uint32_t)(EBP));
  /* 116a8541 mov ebp, esp */
  EBP = (ESP);
  /* 116a8543 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 116a8545 push 0x116cb948 */
  push32((uint32_t)(0x116cb948u));
  /* 116a854a push 0x116a4d5c */
  push32((uint32_t)(0x116a4d5cu));
  /* 116a854f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 116a8555 push eax */
  push32((uint32_t)(EAX));
  /* 116a8556 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 116a855d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8560 push ebx */
  push32((uint32_t)(EBX));
  /* 116a8561 push esi */
  push32((uint32_t)(ESI));
  /* 116a8562 push edi */
  push32((uint32_t)(EDI));
  /* 116a8563 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 116a8566 cmp dword ptr [0x116d0810], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0810))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a856d jne 0x116a85be */
  if (!C.zf) goto L_116a85be;
  /* 116a856f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 116a8572 push eax */
  push32((uint32_t)(EAX));
  /* 116a8573 push 1 */
  push32((uint32_t)(0x1u));
  /* 116a8575 push 0x116cb944 */
  push32((uint32_t)(0x116cb944u));
  /* 116a857a push 1 */
  push32((uint32_t)(0x1u));
  /* 116a857c call dword ptr [0x116d3374] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3374))), 0x116a8582u);
  /* 116a8582 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a8584 je 0x116a8592 */
  if (C.zf) goto L_116a8592;
  /* 116a8586 mov dword ptr [0x116d0810], 1 */
  w32((uint32_t)(0x116d0810), (0x1u));
  /* 116a8590 jmp 0x116a85be */
  goto L_116a85be;
L_116a8592:;
  /* 116a8592 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 116a8595 push ecx */
  push32((uint32_t)(ECX));
  /* 116a8596 push 1 */
  push32((uint32_t)(0x1u));
  /* 116a8598 push 0x116cb940 */
  push32((uint32_t)(0x116cb940u));
  /* 116a859d push 1 */
  push32((uint32_t)(0x1u));
  /* 116a859f push 0 */
  push32((uint32_t)(0x0u));
  /* 116a85a1 call dword ptr [0x116d3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3378))), 0x116a85a7u);
  /* 116a85a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a85a9 je 0x116a85b7 */
  if (C.zf) goto L_116a85b7;
  /* 116a85ab mov dword ptr [0x116d0810], 2 */
  w32((uint32_t)(0x116d0810), (0x2u));
  /* 116a85b5 jmp 0x116a85be */
  goto L_116a85be;
L_116a85b7:;
  /* 116a85b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a85b9 jmp 0x116a86e8 */
  goto L_116a86e8;
L_116a85be:;
  /* 116a85be cmp dword ptr [0x116d0810], 2 */
  { uint32_t _a=(r32((uint32_t)(0x116d0810))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a85c5 jne 0x116a85f5 */
  if (!C.zf) goto L_116a85f5;
  /* 116a85c7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a85cb jne 0x116a85d6 */
  if (!C.zf) goto L_116a85d6;
  /* 116a85cd mov edx, dword ptr [0x116d0828] */
  EDX = (r32((uint32_t)(0x116d0828)));
  /* 116a85d3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_116a85d6:;
  /* 116a85d6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116a85d9 push eax */
  push32((uint32_t)(EAX));
  /* 116a85da mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a85dd push ecx */
  push32((uint32_t)(ECX));
  /* 116a85de mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a85e1 push edx */
  push32((uint32_t)(EDX));
  /* 116a85e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a85e5 push eax */
  push32((uint32_t)(EAX));
  /* 116a85e6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116a85e9 push ecx */
  push32((uint32_t)(ECX));
  /* 116a85ea call dword ptr [0x116d3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3378))), 0x116a85f0u);
  /* 116a85f0 jmp 0x116a86e8 */
  goto L_116a86e8;
L_116a85f5:;
  /* 116a85f5 cmp dword ptr [0x116d0810], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116d0810))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a85fc jne 0x116a86e6 */
  if (!C.zf) goto L_116a86e6;
  /* 116a8602 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a8606 jne 0x116a8611 */
  if (!C.zf) goto L_116a8611;
  /* 116a8608 mov edx, dword ptr [0x116d0838] */
  EDX = (r32((uint32_t)(0x116d0838)));
  /* 116a860e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_116a8611:;
  /* 116a8611 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a8613 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a8615 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a8618 push eax */
  push32((uint32_t)(EAX));
  /* 116a8619 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a861c push ecx */
  push32((uint32_t)(ECX));
  /* 116a861d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 116a8620 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 116a8622 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a8624 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 116a8627 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a862a push edx */
  push32((uint32_t)(EDX));
  /* 116a862b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116a862e push eax */
  push32((uint32_t)(EAX));
  /* 116a862f call dword ptr [0x116d337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d337c))), 0x116a8635u);
  /* 116a8635 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 116a8638 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a863c jne 0x116a8645 */
  if (!C.zf) goto L_116a8645;
  /* 116a863e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a8640 jmp 0x116a86e8 */
  goto L_116a86e8;
L_116a8645:;
  /* 116a8645 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116a864c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a864f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 116a8651 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8654 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 116a8656 call 0x116a0a30 */
  push32(0x116a865bu); f_116a0a30();
  /* 116a865b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 116a865e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 116a8661 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a8664 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 116a8667 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a866a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 116a866c push edx */
  push32((uint32_t)(EDX));
  /* 116a866d push 0 */
  push32((uint32_t)(0x0u));
  /* 116a866f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a8672 push eax */
  push32((uint32_t)(EAX));
  /* 116a8673 call 0x116a2540 */
  push32(0x116a8678u); f_116a2540();
  /* 116a8678 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a867b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 116a8682 jmp 0x116a869b */
  goto L_116a869b;
  /* 116a8684 mov eax, 1 */
  EAX = (0x1u);
  /* 116a8689 ret  */
  ESPCHK(0x116a8540u, _esp0);
  ESP += 4; return;
  /* 116a868a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 116a868d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 116a8694 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_116a869b:;
  /* 116a869b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a869f jne 0x116a86a5 */
  if (!C.zf) goto L_116a86a5;
  /* 116a86a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a86a3 jmp 0x116a86e8 */
  goto L_116a86e8;
L_116a86a5:;
  /* 116a86a5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a86a8 push ecx */
  push32((uint32_t)(ECX));
  /* 116a86a9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a86ac push edx */
  push32((uint32_t)(EDX));
  /* 116a86ad mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a86b0 push eax */
  push32((uint32_t)(EAX));
  /* 116a86b1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a86b4 push ecx */
  push32((uint32_t)(ECX));
  /* 116a86b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 116a86b7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116a86ba push edx */
  push32((uint32_t)(EDX));
  /* 116a86bb call dword ptr [0x116d337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d337c))), 0x116a86c1u);
  /* 116a86c1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 116a86c4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a86c8 jne 0x116a86ce */
  if (!C.zf) goto L_116a86ce;
  /* 116a86ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a86cc jmp 0x116a86e8 */
  goto L_116a86e8;
L_116a86ce:;
  /* 116a86ce mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116a86d1 push eax */
  push32((uint32_t)(EAX));
  /* 116a86d2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116a86d5 push ecx */
  push32((uint32_t)(ECX));
  /* 116a86d6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a86d9 push edx */
  push32((uint32_t)(EDX));
  /* 116a86da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a86dd push eax */
  push32((uint32_t)(EAX));
  /* 116a86de call dword ptr [0x116d3374] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3374))), 0x116a86e4u);
  /* 116a86e4 jmp 0x116a86e8 */
  goto L_116a86e8;
L_116a86e6:;
  /* 116a86e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116a86e8:;
  /* 116a86e8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 116a86eb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a86ee mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 116a86f5 pop edi */
  EDI = (pop32());
  /* 116a86f6 pop esi */
  ESI = (pop32());
  /* 116a86f7 pop ebx */
  EBX = (pop32());
  /* 116a86f8 mov esp, ebp */
  ESP = (EBP);
  /* 116a86fa pop ebp */
  EBP = (pop32());
  /* 116a86fb ret  */
  ESPCHK(0x116a8540u, _esp0);
  ESP += 4; return;
}

/* FUN_10018700 @ 0x116a8700 (1007 bytes, 269 insns) */
void f_116a8700(void) {
  FTRACE(0x116a8700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a8700 push ebp */
  push32((uint32_t)(EBP));
  /* 116a8701 mov ebp, esp */
  EBP = (ESP);
  /* 116a8703 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a8709 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a870d jl 0x116a8715 */
  if ((C.sf!=C.of)) goto L_116a8715;
  /* 116a870f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a8713 jle 0x116a871c */
  if ((C.zf||C.sf!=C.of)) goto L_116a871c;
L_116a8715:;
  /* 116a8715 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a8717 jmp 0x116a8aeb */
  goto L_116a8aeb;
L_116a871c:;
  /* 116a871c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 116a871e call 0x1169c120 */
  push32(0x116a8723u); f_1169c120();
  /* 116a8723 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8726 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 116a872d mov eax, dword ptr [0x116d1c24] */
  EAX = (r32((uint32_t)(0x116d1c24)));
  /* 116a8732 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8735 mov dword ptr [0x116d1c24], eax */
  w32((uint32_t)(0x116d1c24), (EAX));
L_116a873a:;
  /* 116a873a cmp dword ptr [0x116d1c34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d1c34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a8741 je 0x116a874d */
  if (C.zf) goto L_116a874d;
  /* 116a8743 push 1 */
  push32((uint32_t)(0x1u));
  /* 116a8745 call dword ptr [0x116d3370] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3370))), 0x116a874bu);
  /* 116a874b jmp 0x116a873a */
  goto L_116a873a;
L_116a874d:;
  /* 116a874d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a8751 je 0x116a8791 */
  if (C.zf) goto L_116a8791;
  /* 116a8753 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a8757 je 0x116a8771 */
  if (C.zf) goto L_116a8771;
  /* 116a8759 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a875c push ecx */
  push32((uint32_t)(ECX));
  /* 116a875d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a8760 push edx */
  push32((uint32_t)(EDX));
  /* 116a8761 call 0x116a8af0 */
  push32(0x116a8766u); f_116a8af0();
  /* 116a8766 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8769 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 116a876f jmp 0x116a8783 */
  goto L_116a8783;
L_116a8771:;
  /* 116a8771 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a8774 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a8777 mov ecx, dword ptr [eax + 0x116cead4] */
  ECX = (r32((uint32_t)(EAX + 0x116cead4)));
  /* 116a877d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_116a8783:;
  /* 116a8783 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 116a8789 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116a878c jmp 0x116a8acb */
  goto L_116a8acb;
L_116a8791:;
  /* 116a8791 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 116a8798 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 116a879f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a87a3 je 0x116a8ac3 */
  if (C.zf) goto L_116a8ac3;
  /* 116a87a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a87ac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116a87af cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a87b2 jne 0x116a89d4 */
  if (!C.zf) goto L_116a89d4;
  /* 116a87b8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a87bb movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 116a87bf cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a87c2 jne 0x116a89d4 */
  if (!C.zf) goto L_116a89d4;
  /* 116a87c8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a87cb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 116a87cf cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a87d2 jne 0x116a89d4 */
  if (!C.zf) goto L_116a89d4;
  /* 116a87d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a87db mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_116a87e1:;
  /* 116a87e1 push 0x116cb998 */
  push32((uint32_t)(0x116cb998u));
  /* 116a87e6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 116a87ec push ecx */
  push32((uint32_t)(ECX));
  /* 116a87ed call 0x116acc50 */
  push32(0x116a87f2u); f_116acc50();
  /* 116a87f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a87f5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 116a87fb cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a8802 je 0x116a882d */
  if (C.zf) goto L_116a882d;
  /* 116a8804 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 116a880a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a8810 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 116a8816 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a881d je 0x116a882d */
  if (C.zf) goto L_116a882d;
  /* 116a881f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 116a8825 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116a8828 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a882b jne 0x116a8853 */
  if (!C.zf) goto L_116a8853;
L_116a882d:;
  /* 116a882d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a8831 je 0x116a884c */
  if (C.zf) goto L_116a884c;
  /* 116a8833 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 116a8835 call 0x1169c1c0 */
  push32(0x116a883au); f_1169c1c0();
  /* 116a883a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a883d mov edx, dword ptr [0x116d1c24] */
  EDX = (r32((uint32_t)(0x116d1c24)));
  /* 116a8843 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a8846 mov dword ptr [0x116d1c24], edx */
  w32((uint32_t)(0x116d1c24), (EDX));
L_116a884c:;
  /* 116a884c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a884e jmp 0x116a8aeb */
  goto L_116a8aeb;
L_116a8853:;
  /* 116a8853 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 116a885a jmp 0x116a8865 */
  goto L_116a8865;
L_116a885c:;
  /* 116a885c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a885f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8862 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_116a8865:;
  /* 116a8865 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a8869 jg 0x116a88b3 */
  if ((!C.zf&&C.sf==C.of)) goto L_116a88b3;
  /* 116a886b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 116a8871 push ecx */
  push32((uint32_t)(ECX));
  /* 116a8872 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 116a8878 push edx */
  push32((uint32_t)(EDX));
  /* 116a8879 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a887c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a887f mov ecx, dword ptr [eax + 0x116cead0] */
  ECX = (r32((uint32_t)(EAX + 0x116cead0)));
  /* 116a8885 push ecx */
  push32((uint32_t)(ECX));
  /* 116a8886 call 0x116acc10 */
  push32(0x116a888bu); f_116acc10();
  /* 116a888b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a888e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a8890 jne 0x116a88b1 */
  if (!C.zf) goto L_116a88b1;
  /* 116a8892 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a8895 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a8898 mov eax, dword ptr [edx + 0x116cead0] */
  EAX = (r32((uint32_t)(EDX + 0x116cead0)));
  /* 116a889e push eax */
  push32((uint32_t)(EAX));
  /* 116a889f call 0x116a07b0 */
  push32(0x116a88a4u); f_116a07b0();
  /* 116a88a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a88a7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a88ad jne 0x116a88b1 */
  if (!C.zf) goto L_116a88b1;
  /* 116a88af jmp 0x116a88b3 */
  goto L_116a88b3;
L_116a88b1:;
  /* 116a88b1 jmp 0x116a885c */
  goto L_116a885c;
L_116a88b3:;
  /* 116a88b3 push 0x116cb994 */
  push32((uint32_t)(0x116cb994u));
  /* 116a88b8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 116a88be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a88c1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 116a88c7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 116a88cd push edx */
  push32((uint32_t)(EDX));
  /* 116a88ce call 0x116acbd0 */
  push32(0x116a88d3u); f_116acbd0();
  /* 116a88d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a88d6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 116a88dc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a88e3 jne 0x116a8919 */
  if (!C.zf) goto L_116a8919;
  /* 116a88e5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 116a88eb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116a88ee cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a88f1 je 0x116a8919 */
  if (C.zf) goto L_116a8919;
  /* 116a88f3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a88f7 je 0x116a8912 */
  if (C.zf) goto L_116a8912;
  /* 116a88f9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 116a88fb call 0x1169c1c0 */
  push32(0x116a8900u); f_1169c1c0();
  /* 116a8900 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8903 mov edx, dword ptr [0x116d1c24] */
  EDX = (r32((uint32_t)(0x116d1c24)));
  /* 116a8909 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a890c mov dword ptr [0x116d1c24], edx */
  w32((uint32_t)(0x116d1c24), (EDX));
L_116a8912:;
  /* 116a8912 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a8914 jmp 0x116a8aeb */
  goto L_116a8aeb;
L_116a8919:;
  /* 116a8919 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a891d jg 0x116a896a */
  if ((!C.zf&&C.sf==C.of)) goto L_116a896a;
  /* 116a891f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 116a8925 push eax */
  push32((uint32_t)(EAX));
  /* 116a8926 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 116a892c push ecx */
  push32((uint32_t)(ECX));
  /* 116a892d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 116a8933 push edx */
  push32((uint32_t)(EDX));
  /* 116a8934 call 0x116a10b0 */
  push32(0x116a8939u); f_116a10b0();
  /* 116a8939 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a893c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 116a8942 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 116a894a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 116a8950 push ecx */
  push32((uint32_t)(ECX));
  /* 116a8951 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a8954 push edx */
  push32((uint32_t)(EDX));
  /* 116a8955 call 0x116a8af0 */
  push32(0x116a895au); f_116a8af0();
  /* 116a895a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a895d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a895f je 0x116a896a */
  if (C.zf) goto L_116a896a;
  /* 116a8961 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a8964 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8967 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_116a896a:;
  /* 116a896a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 116a8970 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8976 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 116a897c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 116a8982 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116a8985 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a8987 je 0x116a8998 */
  if (C.zf) goto L_116a8998;
  /* 116a8989 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 116a898f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8992 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_116a8998:;
  /* 116a8998 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 116a899e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116a89a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a89a3 jne 0x116a87e1 */
  if (!C.zf) goto L_116a87e1;
  /* 116a89a9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a89ad je 0x116a89bc */
  if (C.zf) goto L_116a89bc;
  /* 116a89af call 0x116a8c90 */
  push32(0x116a89b4u); f_116a8c90();
  /* 116a89b4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 116a89ba jmp 0x116a89c6 */
  goto L_116a89c6;
L_116a89bc:;
  /* 116a89bc mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_116a89c6:;
  /* 116a89c6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 116a89cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116a89cf jmp 0x116a8ac1 */
  goto L_116a8ac1;
L_116a89d4:;
  /* 116a89d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a89d7 push edx */
  push32((uint32_t)(EDX));
  /* 116a89d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a89da push 0 */
  push32((uint32_t)(0x0u));
  /* 116a89dc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 116a89e2 push eax */
  push32((uint32_t)(EAX));
  /* 116a89e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a89e6 push ecx */
  push32((uint32_t)(ECX));
  /* 116a89e7 call 0x116a8d90 */
  push32(0x116a89ecu); f_116a8d90();
  /* 116a89ec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a89ef mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116a89f2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a89f6 je 0x116a8ac1 */
  if (C.zf) goto L_116a8ac1;
  /* 116a89fc mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 116a8a03 jmp 0x116a8a0e */
  goto L_116a8a0e;
L_116a8a05:;
  /* 116a8a05 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a8a08 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8a0b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_116a8a0e:;
  /* 116a8a0e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a8a12 jg 0x116a8a70 */
  if ((!C.zf&&C.sf==C.of)) goto L_116a8a70;
  /* 116a8a14 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a8a18 je 0x116a8a6e */
  if (C.zf) goto L_116a8a6e;
  /* 116a8a1a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a8a1d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a8a20 mov ecx, dword ptr [eax + 0x116cead4] */
  ECX = (r32((uint32_t)(EAX + 0x116cead4)));
  /* 116a8a26 push ecx */
  push32((uint32_t)(ECX));
  /* 116a8a27 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 116a8a2d push edx */
  push32((uint32_t)(EDX));
  /* 116a8a2e call 0x116a4cd0 */
  push32(0x116a8a33u); f_116a4cd0();
  /* 116a8a33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8a36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a8a38 je 0x116a8a65 */
  if (C.zf) goto L_116a8a65;
  /* 116a8a3a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 116a8a40 push eax */
  push32((uint32_t)(EAX));
  /* 116a8a41 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a8a44 push ecx */
  push32((uint32_t)(ECX));
  /* 116a8a45 call 0x116a8af0 */
  push32(0x116a8a4au); f_116a8af0();
  /* 116a8a4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8a4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a8a4f je 0x116a8a5c */
  if (C.zf) goto L_116a8a5c;
  /* 116a8a51 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a8a54 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8a57 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 116a8a5a jmp 0x116a8a63 */
  goto L_116a8a63;
L_116a8a5c:;
  /* 116a8a5c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_116a8a63:;
  /* 116a8a63 jmp 0x116a8a6e */
  goto L_116a8a6e;
L_116a8a65:;
  /* 116a8a65 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a8a68 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8a6b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_116a8a6e:;
  /* 116a8a6e jmp 0x116a8a05 */
  goto L_116a8a05;
L_116a8a70:;
  /* 116a8a70 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a8a74 je 0x116a8a9b */
  if (C.zf) goto L_116a8a9b;
  /* 116a8a76 call 0x116a8c90 */
  push32(0x116a8a7bu); f_116a8c90();
  /* 116a8a7b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116a8a7e push 2 */
  push32((uint32_t)(0x2u));
  /* 116a8a80 mov ecx, dword ptr [0x116cead4] */
  ECX = (r32((uint32_t)(0x116cead4)));
  /* 116a8a86 push ecx */
  push32((uint32_t)(ECX));
  /* 116a8a87 call 0x1169ccb0 */
  push32(0x116a8a8cu); f_1169ccb0();
  /* 116a8a8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8a8f mov dword ptr [0x116cead4], 0 */
  w32((uint32_t)(0x116cead4), (0x0u));
  /* 116a8a99 jmp 0x116a8ac1 */
  goto L_116a8ac1;
L_116a8a9b:;
  /* 116a8a9b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a8a9f je 0x116a8aae */
  if (C.zf) goto L_116a8aae;
  /* 116a8aa1 call 0x116a8c90 */
  push32(0x116a8aa6u); f_116a8c90();
  /* 116a8aa6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 116a8aac jmp 0x116a8ab8 */
  goto L_116a8ab8;
L_116a8aae:;
  /* 116a8aae mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_116a8ab8:;
  /* 116a8ab8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 116a8abe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_116a8ac1:;
  /* 116a8ac1 jmp 0x116a8acb */
  goto L_116a8acb;
L_116a8ac3:;
  /* 116a8ac3 call 0x116a8c90 */
  push32(0x116a8ac8u); f_116a8c90();
  /* 116a8ac8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_116a8acb:;
  /* 116a8acb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a8acf je 0x116a8ae8 */
  if (C.zf) goto L_116a8ae8;
  /* 116a8ad1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 116a8ad3 call 0x1169c1c0 */
  push32(0x116a8ad8u); f_1169c1c0();
  /* 116a8ad8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8adb mov eax, dword ptr [0x116d1c24] */
  EAX = (r32((uint32_t)(0x116d1c24)));
  /* 116a8ae0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a8ae3 mov dword ptr [0x116d1c24], eax */
  w32((uint32_t)(0x116d1c24), (EAX));
L_116a8ae8:;
  /* 116a8ae8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_116a8aeb:;
  /* 116a8aeb mov esp, ebp */
  ESP = (EBP);
  /* 116a8aed pop ebp */
  EBP = (pop32());
  /* 116a8aee ret  */
  ESPCHK(0x116a8700u, _esp0);
  ESP += 4; return;
}

/* FUN_10018af0 @ 0x116a8af0 (403 bytes, 117 insns) */
void f_116a8af0(void) {
  FTRACE(0x116a8af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a8af0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a8af1 mov ebp, esp */
  EBP = (ESP);
  /* 116a8af3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a8af9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a8afc push eax */
  push32((uint32_t)(EAX));
  /* 116a8afd lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 116a8b03 push ecx */
  push32((uint32_t)(ECX));
  /* 116a8b04 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 116a8b0a push edx */
  push32((uint32_t)(EDX));
  /* 116a8b0b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 116a8b11 push eax */
  push32((uint32_t)(EAX));
  /* 116a8b12 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a8b15 push ecx */
  push32((uint32_t)(ECX));
  /* 116a8b16 call 0x116a8d90 */
  push32(0x116a8b1bu); f_116a8d90();
  /* 116a8b1b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8b1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a8b20 jne 0x116a8b29 */
  if (!C.zf) goto L_116a8b29;
  /* 116a8b22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a8b24 jmp 0x116a8c7f */
  goto L_116a8c7f;
L_116a8b29:;
  /* 116a8b29 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 116a8b2e push 0x116cb99c */
  push32((uint32_t)(0x116cb99cu));
  /* 116a8b33 push 2 */
  push32((uint32_t)(0x2u));
  /* 116a8b35 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 116a8b3b push edx */
  push32((uint32_t)(EDX));
  /* 116a8b3c call 0x116a07b0 */
  push32(0x116a8b41u); f_116a07b0();
  /* 116a8b41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8b44 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8b47 push eax */
  push32((uint32_t)(EAX));
  /* 116a8b48 call 0x1169c220 */
  push32(0x116a8b4du); f_1169c220();
  /* 116a8b4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8b50 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116a8b53 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a8b57 jne 0x116a8b60 */
  if (!C.zf) goto L_116a8b60;
  /* 116a8b59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a8b5b jmp 0x116a8c7f */
  goto L_116a8c7f;
L_116a8b60:;
  /* 116a8b60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a8b63 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a8b66 mov ecx, dword ptr [eax + 0x116cead4] */
  ECX = (r32((uint32_t)(EAX + 0x116cead4)));
  /* 116a8b6c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116a8b6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a8b72 mov eax, dword ptr [edx*4 + 0x116d0820] */
  EAX = (r32((uint32_t)(EDX*4 + 0x116d0820)));
  /* 116a8b79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a8b7c push 6 */
  push32((uint32_t)(0x6u));
  /* 116a8b7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a8b81 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a8b84 add ecx, 0x116d0864 */
  { uint32_t _a=(ECX),_b=(0x116d0864u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8b8a push ecx */
  push32((uint32_t)(ECX));
  /* 116a8b8b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 116a8b8e push edx */
  push32((uint32_t)(EDX));
  /* 116a8b8f call 0x116a61d0 */
  push32(0x116a8b94u); f_116a61d0();
  /* 116a8b94 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8b97 mov eax, dword ptr [0x116d0838] */
  EAX = (r32((uint32_t)(0x116d0838)));
  /* 116a8b9c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116a8b9f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 116a8ba5 push ecx */
  push32((uint32_t)(ECX));
  /* 116a8ba6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a8ba9 push edx */
  push32((uint32_t)(EDX));
  /* 116a8baa call 0x1169a7d0 */
  push32(0x116a8bafu); f_1169a7d0();
  /* 116a8baf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8bb2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a8bb5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a8bb8 mov dword ptr [ecx + 0x116cead4], eax */
  w32((uint32_t)(ECX + 0x116cead4), (EAX));
  /* 116a8bbe mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 116a8bc4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116a8bca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a8bcd mov dword ptr [eax*4 + 0x116d0820], edx */
  w32((uint32_t)(EAX*4 + 0x116d0820), (EDX));
  /* 116a8bd4 push 6 */
  push32((uint32_t)(0x6u));
  /* 116a8bd6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 116a8bdc push ecx */
  push32((uint32_t)(ECX));
  /* 116a8bdd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a8be0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a8be3 add edx, 0x116d0864 */
  { uint32_t _a=(EDX),_b=(0x116d0864u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8be9 push edx */
  push32((uint32_t)(EDX));
  /* 116a8bea call 0x116a61d0 */
  push32(0x116a8befu); f_116a61d0();
  /* 116a8bef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8bf2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a8bf6 jne 0x116a8c03 */
  if (!C.zf) goto L_116a8c03;
  /* 116a8bf8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 116a8bfe mov dword ptr [0x116d0838], eax */
  w32((uint32_t)(0x116d0838), (EAX));
L_116a8c03:;
  /* 116a8c03 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a8c07 jne 0x116a8c15 */
  if (!C.zf) goto L_116a8c15;
  /* 116a8c09 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 116a8c0f mov dword ptr [0x116d083c], ecx */
  w32((uint32_t)(0x116d083c), (ECX));
L_116a8c15:;
  /* 116a8c15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a8c18 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a8c1b call dword ptr [edx + 0x116cead8] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x116cead8))), 0x116a8c21u);
  /* 116a8c21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a8c23 je 0x116a8c5c */
  if (C.zf) goto L_116a8c5c;
  /* 116a8c25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a8c28 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a8c2b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a8c2e mov dword ptr [eax + 0x116cead4], ecx */
  w32((uint32_t)(EAX + 0x116cead4), (ECX));
  /* 116a8c34 push 2 */
  push32((uint32_t)(0x2u));
  /* 116a8c36 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a8c39 push edx */
  push32((uint32_t)(EDX));
  /* 116a8c3a call 0x1169ccb0 */
  push32(0x116a8c3fu); f_1169ccb0();
  /* 116a8c3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8c42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a8c45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a8c48 mov dword ptr [eax*4 + 0x116d0820], ecx */
  w32((uint32_t)(EAX*4 + 0x116d0820), (ECX));
  /* 116a8c4f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a8c52 mov dword ptr [0x116d0838], edx */
  w32((uint32_t)(0x116d0838), (EDX));
  /* 116a8c58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a8c5a jmp 0x116a8c7f */
  goto L_116a8c7f;
L_116a8c5c:;
  /* 116a8c5c cmp dword ptr [ebp - 0xc], 0x116ce9c4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x116ce9c4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a8c63 je 0x116a8c73 */
  if (C.zf) goto L_116a8c73;
  /* 116a8c65 push 2 */
  push32((uint32_t)(0x2u));
  /* 116a8c67 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a8c6a push eax */
  push32((uint32_t)(EAX));
  /* 116a8c6b call 0x1169ccb0 */
  push32(0x116a8c70u); f_1169ccb0();
  /* 116a8c70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a8c73:;
  /* 116a8c73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a8c76 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a8c79 mov eax, dword ptr [ecx + 0x116cead4] */
  EAX = (r32((uint32_t)(ECX + 0x116cead4)));
L_116a8c7f:;
  /* 116a8c7f mov esp, ebp */
  ESP = (EBP);
  /* 116a8c81 pop ebp */
  EBP = (pop32());
  /* 116a8c82 ret  */
  ESPCHK(0x116a8af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018c90 @ 0x116a8c90 (256 bytes, 72 insns) */
void f_116a8c90(void) {
  FTRACE(0x116a8c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a8c90 push ebp */
  push32((uint32_t)(EBP));
  /* 116a8c91 mov ebp, esp */
  EBP = (ESP);
  /* 116a8c93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a8c96 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 116a8c9d cmp dword ptr [0x116cead4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116cead4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a8ca4 jne 0x116a8cc4 */
  if (!C.zf) goto L_116a8cc4;
  /* 116a8ca6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 116a8cab push 0x116cb99c */
  push32((uint32_t)(0x116cb99cu));
  /* 116a8cb0 push 2 */
  push32((uint32_t)(0x2u));
  /* 116a8cb2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 116a8cb7 call 0x1169c220 */
  push32(0x116a8cbcu); f_1169c220();
  /* 116a8cbc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8cbf mov dword ptr [0x116cead4], eax */
  w32((uint32_t)(0x116cead4), (EAX));
L_116a8cc4:;
  /* 116a8cc4 mov eax, dword ptr [0x116cead4] */
  EAX = (r32((uint32_t)(0x116cead4)));
  /* 116a8cc9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 116a8ccc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 116a8cd3 jmp 0x116a8cde */
  goto L_116a8cde;
L_116a8cd5:;
  /* 116a8cd5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a8cd8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8cdb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116a8cde:;
  /* 116a8cde mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a8ce1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a8ce4 mov eax, dword ptr [edx + 0x116cead4] */
  EAX = (r32((uint32_t)(EDX + 0x116cead4)));
  /* 116a8cea push eax */
  push32((uint32_t)(EAX));
  /* 116a8ceb push 0x116cb9a8 */
  push32((uint32_t)(0x116cb9a8u));
  /* 116a8cf0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a8cf3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a8cf6 mov edx, dword ptr [ecx + 0x116cead0] */
  EDX = (r32((uint32_t)(ECX + 0x116cead0)));
  /* 116a8cfc push edx */
  push32((uint32_t)(EDX));
  /* 116a8cfd push 3 */
  push32((uint32_t)(0x3u));
  /* 116a8cff mov eax, dword ptr [0x116cead4] */
  EAX = (r32((uint32_t)(0x116cead4)));
  /* 116a8d04 push eax */
  push32((uint32_t)(EAX));
  /* 116a8d05 call 0x116a8f30 */
  push32(0x116a8d0au); f_116a8f30();
  /* 116a8d0a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8d0d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a8d11 jge 0x116a8d59 */
  if ((C.sf==C.of)) goto L_116a8d59;
  /* 116a8d13 push 0x116cb994 */
  push32((uint32_t)(0x116cb994u));
  /* 116a8d18 mov ecx, dword ptr [0x116cead4] */
  ECX = (r32((uint32_t)(0x116cead4)));
  /* 116a8d1e push ecx */
  push32((uint32_t)(ECX));
  /* 116a8d1f call 0x1169a7e0 */
  push32(0x116a8d24u); f_1169a7e0();
  /* 116a8d24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8d27 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a8d2a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8d2d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a8d30 mov eax, dword ptr [edx + 0x116cead4] */
  EAX = (r32((uint32_t)(EDX + 0x116cead4)));
  /* 116a8d36 push eax */
  push32((uint32_t)(EAX));
  /* 116a8d37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a8d3a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a8d3d mov edx, dword ptr [ecx + 0x116cead4] */
  EDX = (r32((uint32_t)(ECX + 0x116cead4)));
  /* 116a8d43 push edx */
  push32((uint32_t)(EDX));
  /* 116a8d44 call 0x116a4cd0 */
  push32(0x116a8d49u); f_116a4cd0();
  /* 116a8d49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8d4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a8d4e je 0x116a8d57 */
  if (C.zf) goto L_116a8d57;
  /* 116a8d50 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_116a8d57:;
  /* 116a8d57 jmp 0x116a8d87 */
  goto L_116a8d87;
L_116a8d59:;
  /* 116a8d59 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a8d5d jne 0x116a8d66 */
  if (!C.zf) goto L_116a8d66;
  /* 116a8d5f mov eax, dword ptr [0x116cead4] */
  EAX = (r32((uint32_t)(0x116cead4)));
  /* 116a8d64 jmp 0x116a8d8c */
  goto L_116a8d8c;
L_116a8d66:;
  /* 116a8d66 push 2 */
  push32((uint32_t)(0x2u));
  /* 116a8d68 mov eax, dword ptr [0x116cead4] */
  EAX = (r32((uint32_t)(0x116cead4)));
  /* 116a8d6d push eax */
  push32((uint32_t)(EAX));
  /* 116a8d6e call 0x1169ccb0 */
  push32(0x116a8d73u); f_1169ccb0();
  /* 116a8d73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8d76 mov dword ptr [0x116cead4], 0 */
  w32((uint32_t)(0x116cead4), (0x0u));
  /* 116a8d80 mov eax, dword ptr [0x116ceaec] */
  EAX = (r32((uint32_t)(0x116ceaec)));
  /* 116a8d85 jmp 0x116a8d8c */
  goto L_116a8d8c;
L_116a8d87:;
  /* 116a8d87 jmp 0x116a8cd5 */
  goto L_116a8cd5;
L_116a8d8c:;
  /* 116a8d8c mov esp, ebp */
  ESP = (EBP);
  /* 116a8d8e pop ebp */
  EBP = (pop32());
  /* 116a8d8f ret  */
  ESPCHK(0x116a8c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10018d90 @ 0x116a8d90 (388 bytes, 115 insns) */
void f_116a8d90(void) {
  FTRACE(0x116a8d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a8d90 push ebp */
  push32((uint32_t)(EBP));
  /* 116a8d91 mov ebp, esp */
  EBP = (ESP);
  /* 116a8d93 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a8d99 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a8d9d jne 0x116a8da6 */
  if (!C.zf) goto L_116a8da6;
  /* 116a8d9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a8da1 jmp 0x116a8f10 */
  goto L_116a8f10;
L_116a8da6:;
  /* 116a8da6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a8da9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116a8dac cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a8daf jne 0x116a8e00 */
  if (!C.zf) goto L_116a8e00;
  /* 116a8db1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a8db4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 116a8db8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a8dba jne 0x116a8e00 */
  if (!C.zf) goto L_116a8e00;
  /* 116a8dbc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a8dbf mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 116a8dc2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a8dc5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 116a8dc9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a8dcd je 0x116a8de9 */
  if (C.zf) goto L_116a8de9;
  /* 116a8dcf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a8dd2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 116a8dd7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a8dda mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 116a8de0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a8de3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_116a8de9:;
  /* 116a8de9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a8ded je 0x116a8df8 */
  if (C.zf) goto L_116a8df8;
  /* 116a8def mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116a8df2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_116a8df8:;
  /* 116a8df8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a8dfb jmp 0x116a8f10 */
  goto L_116a8f10;
L_116a8e00:;
  /* 116a8e00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a8e03 push ecx */
  push32((uint32_t)(ECX));
  /* 116a8e04 push 0x116cea4c */
  push32((uint32_t)(0x116cea4cu));
  /* 116a8e09 call 0x116a4cd0 */
  push32(0x116a8e0eu); f_116a4cd0();
  /* 116a8e0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8e11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a8e13 je 0x116a8ec8 */
  if (C.zf) goto L_116a8ec8;
  /* 116a8e19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a8e1c push edx */
  push32((uint32_t)(EDX));
  /* 116a8e1d push 0x116ce9c8 */
  push32((uint32_t)(0x116ce9c8u));
  /* 116a8e22 call 0x116a4cd0 */
  push32(0x116a8e27u); f_116a4cd0();
  /* 116a8e27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8e2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a8e2c je 0x116a8ec8 */
  if (C.zf) goto L_116a8ec8;
  /* 116a8e32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a8e35 push eax */
  push32((uint32_t)(EAX));
  /* 116a8e36 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 116a8e3c push ecx */
  push32((uint32_t)(ECX));
  /* 116a8e3d call 0x116a8f80 */
  push32(0x116a8e42u); f_116a8f80();
  /* 116a8e42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8e45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a8e47 je 0x116a8e50 */
  if (C.zf) goto L_116a8e50;
  /* 116a8e49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a8e4b jmp 0x116a8f10 */
  goto L_116a8f10;
L_116a8e50:;
  /* 116a8e50 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 116a8e56 push edx */
  push32((uint32_t)(EDX));
  /* 116a8e57 push 0x116d0814 */
  push32((uint32_t)(0x116d0814u));
  /* 116a8e5c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 116a8e62 push eax */
  push32((uint32_t)(EAX));
  /* 116a8e63 call 0x116acc90 */
  push32(0x116a8e68u); f_116acc90();
  /* 116a8e68 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8e6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a8e6d jne 0x116a8e76 */
  if (!C.zf) goto L_116a8e76;
  /* 116a8e6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a8e71 jmp 0x116a8f10 */
  goto L_116a8f10;
L_116a8e76:;
  /* 116a8e76 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116a8e78 mov cx, word ptr [0x116d0818] */
  CX = (r16((uint32_t)(0x116d0818)));
  /* 116a8e7f mov dword ptr [0x116d081c], ecx */
  w32((uint32_t)(0x116d081c), (ECX));
  /* 116a8e85 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 116a8e8b push edx */
  push32((uint32_t)(EDX));
  /* 116a8e8c push 0x116cea4c */
  push32((uint32_t)(0x116cea4cu));
  /* 116a8e91 call 0x116a90e0 */
  push32(0x116a8e96u); f_116a90e0();
  /* 116a8e96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8e99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a8e9c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116a8e9f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a8ea1 je 0x116a8eb6 */
  if (C.zf) goto L_116a8eb6;
  /* 116a8ea3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a8ea6 push edx */
  push32((uint32_t)(EDX));
  /* 116a8ea7 push 0x116ce9c8 */
  push32((uint32_t)(0x116ce9c8u));
  /* 116a8eac call 0x1169a7d0 */
  push32(0x116a8eb1u); f_1169a7d0();
  /* 116a8eb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8eb4 jmp 0x116a8ec8 */
  goto L_116a8ec8;
L_116a8eb6:;
  /* 116a8eb6 push 0x116cea4c */
  push32((uint32_t)(0x116cea4cu));
  /* 116a8ebb push 0x116ce9c8 */
  push32((uint32_t)(0x116ce9c8u));
  /* 116a8ec0 call 0x1169a7d0 */
  push32(0x116a8ec5u); f_1169a7d0();
  /* 116a8ec5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a8ec8:;
  /* 116a8ec8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a8ecc je 0x116a8ee1 */
  if (C.zf) goto L_116a8ee1;
  /* 116a8ece push 6 */
  push32((uint32_t)(0x6u));
  /* 116a8ed0 push 0x116d0814 */
  push32((uint32_t)(0x116d0814u));
  /* 116a8ed5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a8ed8 push eax */
  push32((uint32_t)(EAX));
  /* 116a8ed9 call 0x116a61d0 */
  push32(0x116a8edeu); f_116a61d0();
  /* 116a8ede add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a8ee1:;
  /* 116a8ee1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a8ee5 je 0x116a8efa */
  if (C.zf) goto L_116a8efa;
  /* 116a8ee7 push 4 */
  push32((uint32_t)(0x4u));
  /* 116a8ee9 push 0x116d081c */
  push32((uint32_t)(0x116d081cu));
  /* 116a8eee mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116a8ef1 push ecx */
  push32((uint32_t)(ECX));
  /* 116a8ef2 call 0x116a61d0 */
  push32(0x116a8ef7u); f_116a61d0();
  /* 116a8ef7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a8efa:;
  /* 116a8efa push 0x116cea4c */
  push32((uint32_t)(0x116cea4cu));
  /* 116a8eff mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a8f02 push edx */
  push32((uint32_t)(EDX));
  /* 116a8f03 call 0x1169a7d0 */
  push32(0x116a8f08u); f_1169a7d0();
  /* 116a8f08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8f0b mov eax, 0x116cea4c */
  EAX = (0x116cea4cu);
L_116a8f10:;
  /* 116a8f10 mov esp, ebp */
  ESP = (EBP);
  /* 116a8f12 pop ebp */
  EBP = (pop32());
  /* 116a8f13 ret  */
  ESPCHK(0x116a8d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10018f20 @ 0x116a8f20 (7 bytes, 5 insns) */
void f_116a8f20(void) {
  FTRACE(0x116a8f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a8f20 push ebp */
  push32((uint32_t)(EBP));
  /* 116a8f21 mov ebp, esp */
  EBP = (ESP);
  /* 116a8f23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a8f25 pop ebp */
  EBP = (pop32());
  /* 116a8f26 ret  */
  ESPCHK(0x116a8f20u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x116a8f30 (79 bytes, 28 insns) */
void f_116a8f30(void) {
  FTRACE(0x116a8f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a8f30 push ebp */
  push32((uint32_t)(EBP));
  /* 116a8f31 mov ebp, esp */
  EBP = (ESP);
  /* 116a8f33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a8f36 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 116a8f39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a8f3c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116a8f43 jmp 0x116a8f4e */
  goto L_116a8f4e;
L_116a8f45:;
  /* 116a8f45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a8f48 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8f4b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_116a8f4e:;
  /* 116a8f4e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a8f51 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a8f54 jge 0x116a8f74 */
  if ((C.sf==C.of)) goto L_116a8f74;
  /* 116a8f56 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a8f59 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8f5c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a8f5f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a8f62 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 116a8f65 push edx */
  push32((uint32_t)(EDX));
  /* 116a8f66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a8f69 push eax */
  push32((uint32_t)(EAX));
  /* 116a8f6a call 0x1169a7e0 */
  push32(0x116a8f6fu); f_1169a7e0();
  /* 116a8f6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8f72 jmp 0x116a8f45 */
  goto L_116a8f45;
L_116a8f74:;
  /* 116a8f74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116a8f7b mov esp, ebp */
  ESP = (EBP);
  /* 116a8f7d pop ebp */
  EBP = (pop32());
  /* 116a8f7e ret  */
  ESPCHK(0x116a8f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10018f80 @ 0x116a8f80 (349 bytes, 122 insns) */
void f_116a8f80(void) {
  FTRACE(0x116a8f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a8f80 push ebp */
  push32((uint32_t)(EBP));
  /* 116a8f81 mov ebp, esp */
  EBP = (ESP);
  /* 116a8f83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a8f86 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 116a8f8b push 0 */
  push32((uint32_t)(0x0u));
  /* 116a8f8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a8f90 push eax */
  push32((uint32_t)(EAX));
  /* 116a8f91 call 0x116a2540 */
  push32(0x116a8f96u); f_116a2540();
  /* 116a8f96 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8f99 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a8f9c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116a8f9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a8fa1 jne 0x116a8faa */
  if (!C.zf) goto L_116a8faa;
  /* 116a8fa3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a8fa5 jmp 0x116a90d9 */
  goto L_116a90d9;
L_116a8faa:;
  /* 116a8faa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a8fad movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116a8fb0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a8fb3 jne 0x116a8fe0 */
  if (!C.zf) goto L_116a8fe0;
  /* 116a8fb5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a8fb8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 116a8fbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a8fbe je 0x116a8fe0 */
  if (C.zf) goto L_116a8fe0;
  /* 116a8fc0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a8fc3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8fc6 push ecx */
  push32((uint32_t)(ECX));
  /* 116a8fc7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a8fca add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8fd0 push edx */
  push32((uint32_t)(EDX));
  /* 116a8fd1 call 0x1169a7d0 */
  push32(0x116a8fd6u); f_1169a7d0();
  /* 116a8fd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8fd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a8fdb jmp 0x116a90d9 */
  goto L_116a90d9;
L_116a8fe0:;
  /* 116a8fe0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116a8fe7 jmp 0x116a8ff2 */
  goto L_116a8ff2;
L_116a8fe9:;
  /* 116a8fe9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a8fec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a8fef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116a8ff2:;
  /* 116a8ff2 push 0x116cb9ac */
  push32((uint32_t)(0x116cb9acu));
  /* 116a8ff7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a8ffa push ecx */
  push32((uint32_t)(ECX));
  /* 116a8ffb call 0x116acbd0 */
  push32(0x116a9000u); f_116acbd0();
  /* 116a9000 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a9003 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116a9006 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a900a jne 0x116a9014 */
  if (!C.zf) goto L_116a9014;
  /* 116a900c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116a900f jmp 0x116a90d9 */
  goto L_116a90d9;
L_116a9014:;
  /* 116a9014 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a9017 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a901a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116a901c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 116a901f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9023 jne 0x116a904a */
  if (!C.zf) goto L_116a904a;
  /* 116a9025 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9029 jge 0x116a904a */
  if ((C.sf==C.of)) goto L_116a904a;
  /* 116a902b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 116a902f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9032 je 0x116a904a */
  if (C.zf) goto L_116a904a;
  /* 116a9034 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a9037 push edx */
  push32((uint32_t)(EDX));
  /* 116a9038 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a903b push eax */
  push32((uint32_t)(EAX));
  /* 116a903c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a903f push ecx */
  push32((uint32_t)(ECX));
  /* 116a9040 call 0x116a10b0 */
  push32(0x116a9045u); f_116a10b0();
  /* 116a9045 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a9048 jmp 0x116a90b0 */
  goto L_116a90b0;
L_116a904a:;
  /* 116a904a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a904e jne 0x116a9078 */
  if (!C.zf) goto L_116a9078;
  /* 116a9050 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9054 jge 0x116a9078 */
  if ((C.sf==C.of)) goto L_116a9078;
  /* 116a9056 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 116a905a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a905d je 0x116a9078 */
  if (C.zf) goto L_116a9078;
  /* 116a905f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a9062 push eax */
  push32((uint32_t)(EAX));
  /* 116a9063 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a9066 push ecx */
  push32((uint32_t)(ECX));
  /* 116a9067 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a906a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a906d push edx */
  push32((uint32_t)(EDX));
  /* 116a906e call 0x116a10b0 */
  push32(0x116a9073u); f_116a10b0();
  /* 116a9073 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a9076 jmp 0x116a90b0 */
  goto L_116a90b0;
L_116a9078:;
  /* 116a9078 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a907c jne 0x116a90ab */
  if (!C.zf) goto L_116a90ab;
  /* 116a907e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 116a9082 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a9084 je 0x116a908f */
  if (C.zf) goto L_116a908f;
  /* 116a9086 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 116a908a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a908d jne 0x116a90ab */
  if (!C.zf) goto L_116a90ab;
L_116a908f:;
  /* 116a908f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a9092 push edx */
  push32((uint32_t)(EDX));
  /* 116a9093 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a9096 push eax */
  push32((uint32_t)(EAX));
  /* 116a9097 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a909a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a90a0 push ecx */
  push32((uint32_t)(ECX));
  /* 116a90a1 call 0x116a10b0 */
  push32(0x116a90a6u); f_116a10b0();
  /* 116a90a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a90a9 jmp 0x116a90b0 */
  goto L_116a90b0;
L_116a90ab:;
  /* 116a90ab or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116a90ae jmp 0x116a90d9 */
  goto L_116a90d9;
L_116a90b0:;
  /* 116a90b0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 116a90b4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a90b7 jne 0x116a90bb */
  if (!C.zf) goto L_116a90bb;
  /* 116a90b9 jmp 0x116a90d7 */
  goto L_116a90d7;
L_116a90bb:;
  /* 116a90bb movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 116a90bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a90c1 jne 0x116a90c5 */
  if (!C.zf) goto L_116a90c5;
  /* 116a90c3 jmp 0x116a90d7 */
  goto L_116a90d7;
L_116a90c5:;
  /* 116a90c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a90c8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a90cb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 116a90cf mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 116a90d2 jmp 0x116a8fe9 */
  goto L_116a8fe9;
L_116a90d7:;
  /* 116a90d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116a90d9:;
  /* 116a90d9 mov esp, ebp */
  ESP = (EBP);
  /* 116a90db pop ebp */
  EBP = (pop32());
  /* 116a90dc ret  */
  ESPCHK(0x116a8f80u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x116a90e0 (101 bytes, 36 insns) */
void f_116a90e0(void) {
  FTRACE(0x116a90e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a90e0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a90e1 mov ebp, esp */
  EBP = (ESP);
  /* 116a90e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a90e6 push eax */
  push32((uint32_t)(EAX));
  /* 116a90e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a90ea push ecx */
  push32((uint32_t)(ECX));
  /* 116a90eb call 0x1169a7d0 */
  push32(0x116a90f0u); f_1169a7d0();
  /* 116a90f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a90f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a90f6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 116a90fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a90fc je 0x116a9118 */
  if (C.zf) goto L_116a9118;
  /* 116a90fe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a9101 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a9104 push ecx */
  push32((uint32_t)(ECX));
  /* 116a9105 push 0x116cb9b4 */
  push32((uint32_t)(0x116cb9b4u));
  /* 116a910a push 2 */
  push32((uint32_t)(0x2u));
  /* 116a910c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a910f push edx */
  push32((uint32_t)(EDX));
  /* 116a9110 call 0x116a8f30 */
  push32(0x116a9115u); f_116a8f30();
  /* 116a9115 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a9118:;
  /* 116a9118 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a911b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 116a9122 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a9124 je 0x116a9143 */
  if (C.zf) goto L_116a9143;
  /* 116a9126 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a9129 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a912f push edx */
  push32((uint32_t)(EDX));
  /* 116a9130 push 0x116cb9b0 */
  push32((uint32_t)(0x116cb9b0u));
  /* 116a9135 push 2 */
  push32((uint32_t)(0x2u));
  /* 116a9137 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a913a push eax */
  push32((uint32_t)(EAX));
  /* 116a913b call 0x116a8f30 */
  push32(0x116a9140u); f_116a8f30();
  /* 116a9140 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a9143:;
  /* 116a9143 pop ebp */
  EBP = (pop32());
  /* 116a9144 ret  */
  ESPCHK(0x116a90e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019150 @ 0x116a9150 (727 bytes, 263 insns) */
void f_116a9150(void) {
  FTRACE(0x116a9150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a9150 push ebp */
  push32((uint32_t)(EBP));
  /* 116a9151 mov ebp, esp */
  EBP = (ESP);
  /* 116a9153 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 116a9155 push 0x116cb9b8 */
  push32((uint32_t)(0x116cb9b8u));
  /* 116a915a push 0x116a4d5c */
  push32((uint32_t)(0x116a4d5cu));
  /* 116a915f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 116a9165 push eax */
  push32((uint32_t)(EAX));
  /* 116a9166 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 116a916d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a9170 push ebx */
  push32((uint32_t)(EBX));
  /* 116a9171 push esi */
  push32((uint32_t)(ESI));
  /* 116a9172 push edi */
  push32((uint32_t)(EDI));
  /* 116a9173 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 116a9176 cmp dword ptr [0x116d0840], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0840))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a917d jne 0x116a91d6 */
  if (!C.zf) goto L_116a91d6;
  /* 116a917f push 0 */
  push32((uint32_t)(0x0u));
  /* 116a9181 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a9183 push 1 */
  push32((uint32_t)(0x1u));
  /* 116a9185 push 0x116cb944 */
  push32((uint32_t)(0x116cb944u));
  /* 116a918a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 116a918f push 0 */
  push32((uint32_t)(0x0u));
  /* 116a9191 call dword ptr [0x116d3368] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3368))), 0x116a9197u);
  /* 116a9197 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a9199 je 0x116a91a7 */
  if (C.zf) goto L_116a91a7;
  /* 116a919b mov dword ptr [0x116d0840], 1 */
  w32((uint32_t)(0x116d0840), (0x1u));
  /* 116a91a5 jmp 0x116a91d6 */
  goto L_116a91d6;
L_116a91a7:;
  /* 116a91a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a91a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a91ab push 1 */
  push32((uint32_t)(0x1u));
  /* 116a91ad push 0x116cb940 */
  push32((uint32_t)(0x116cb940u));
  /* 116a91b2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 116a91b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a91b9 call dword ptr [0x116d336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d336c))), 0x116a91bfu);
  /* 116a91bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a91c1 je 0x116a91cf */
  if (C.zf) goto L_116a91cf;
  /* 116a91c3 mov dword ptr [0x116d0840], 2 */
  w32((uint32_t)(0x116d0840), (0x2u));
  /* 116a91cd jmp 0x116a91d6 */
  goto L_116a91d6;
L_116a91cf:;
  /* 116a91cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a91d1 jmp 0x116a9441 */
  goto L_116a9441;
L_116a91d6:;
  /* 116a91d6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a91da jle 0x116a91ef */
  if ((C.zf||C.sf!=C.of)) goto L_116a91ef;
  /* 116a91dc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116a91df push eax */
  push32((uint32_t)(EAX));
  /* 116a91e0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a91e3 push ecx */
  push32((uint32_t)(ECX));
  /* 116a91e4 call 0x116a9460 */
  push32(0x116a91e9u); f_116a9460();
  /* 116a91e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a91ec mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_116a91ef:;
  /* 116a91ef cmp dword ptr [0x116d0840], 2 */
  { uint32_t _a=(r32((uint32_t)(0x116d0840))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a91f6 jne 0x116a921b */
  if (!C.zf) goto L_116a921b;
  /* 116a91f8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116a91fb push edx */
  push32((uint32_t)(EDX));
  /* 116a91fc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116a91ff push eax */
  push32((uint32_t)(EAX));
  /* 116a9200 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116a9203 push ecx */
  push32((uint32_t)(ECX));
  /* 116a9204 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a9207 push edx */
  push32((uint32_t)(EDX));
  /* 116a9208 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a920b push eax */
  push32((uint32_t)(EAX));
  /* 116a920c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a920f push ecx */
  push32((uint32_t)(ECX));
  /* 116a9210 call dword ptr [0x116d336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d336c))), 0x116a9216u);
  /* 116a9216 jmp 0x116a9441 */
  goto L_116a9441;
L_116a921b:;
  /* 116a921b cmp dword ptr [0x116d0840], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116d0840))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9222 jne 0x116a943f */
  if (!C.zf) goto L_116a943f;
  /* 116a9228 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a922c jne 0x116a9237 */
  if (!C.zf) goto L_116a9237;
  /* 116a922e mov edx, dword ptr [0x116d0838] */
  EDX = (r32((uint32_t)(0x116d0838)));
  /* 116a9234 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_116a9237:;
  /* 116a9237 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a9239 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a923b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116a923e push eax */
  push32((uint32_t)(EAX));
  /* 116a923f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a9242 push ecx */
  push32((uint32_t)(ECX));
  /* 116a9243 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 116a9246 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 116a9248 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a924a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 116a924d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a9250 push edx */
  push32((uint32_t)(EDX));
  /* 116a9251 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 116a9254 push eax */
  push32((uint32_t)(EAX));
  /* 116a9255 call dword ptr [0x116d337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d337c))), 0x116a925bu);
  /* 116a925b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 116a925e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9262 jne 0x116a926b */
  if (!C.zf) goto L_116a926b;
  /* 116a9264 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a9266 jmp 0x116a9441 */
  goto L_116a9441;
L_116a926b:;
  /* 116a926b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116a9272 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116a9275 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 116a9277 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a927a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 116a927c call 0x116a0a30 */
  push32(0x116a9281u); f_116a0a30();
  /* 116a9281 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 116a9284 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 116a9287 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a928a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 116a928d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 116a9294 jmp 0x116a92ad */
  goto L_116a92ad;
  /* 116a9296 mov eax, 1 */
  EAX = (0x1u);
  /* 116a929b ret  */
  ESPCHK(0x116a9150u, _esp0);
  ESP += 4; return;
  /* 116a929c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 116a929f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 116a92a6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_116a92ad:;
  /* 116a92ad cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a92b1 jne 0x116a92ba */
  if (!C.zf) goto L_116a92ba;
  /* 116a92b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a92b5 jmp 0x116a9441 */
  goto L_116a9441;
L_116a92ba:;
  /* 116a92ba mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116a92bd push edx */
  push32((uint32_t)(EDX));
  /* 116a92be mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a92c1 push eax */
  push32((uint32_t)(EAX));
  /* 116a92c2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116a92c5 push ecx */
  push32((uint32_t)(ECX));
  /* 116a92c6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a92c9 push edx */
  push32((uint32_t)(EDX));
  /* 116a92ca push 1 */
  push32((uint32_t)(0x1u));
  /* 116a92cc mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 116a92cf push eax */
  push32((uint32_t)(EAX));
  /* 116a92d0 call dword ptr [0x116d337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d337c))), 0x116a92d6u);
  /* 116a92d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a92d8 jne 0x116a92e1 */
  if (!C.zf) goto L_116a92e1;
  /* 116a92da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a92dc jmp 0x116a9441 */
  goto L_116a9441;
L_116a92e1:;
  /* 116a92e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a92e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a92e5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116a92e8 push ecx */
  push32((uint32_t)(ECX));
  /* 116a92e9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a92ec push edx */
  push32((uint32_t)(EDX));
  /* 116a92ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a92f0 push eax */
  push32((uint32_t)(EAX));
  /* 116a92f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a92f4 push ecx */
  push32((uint32_t)(ECX));
  /* 116a92f5 call dword ptr [0x116d3368] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3368))), 0x116a92fbu);
  /* 116a92fb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 116a92fe cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9302 jne 0x116a930b */
  if (!C.zf) goto L_116a930b;
  /* 116a9304 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a9306 jmp 0x116a9441 */
  goto L_116a9441;
L_116a930b:;
  /* 116a930b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a930e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 116a9314 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a9316 je 0x116a935b */
  if (C.zf) goto L_116a935b;
  /* 116a9318 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a931c je 0x116a9356 */
  if (C.zf) goto L_116a9356;
  /* 116a931e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116a9321 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9324 jle 0x116a932d */
  if ((C.zf||C.sf!=C.of)) goto L_116a932d;
  /* 116a9326 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a9328 jmp 0x116a9441 */
  goto L_116a9441;
L_116a932d:;
  /* 116a932d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116a9330 push ecx */
  push32((uint32_t)(ECX));
  /* 116a9331 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116a9334 push edx */
  push32((uint32_t)(EDX));
  /* 116a9335 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116a9338 push eax */
  push32((uint32_t)(EAX));
  /* 116a9339 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a933c push ecx */
  push32((uint32_t)(ECX));
  /* 116a933d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a9340 push edx */
  push32((uint32_t)(EDX));
  /* 116a9341 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a9344 push eax */
  push32((uint32_t)(EAX));
  /* 116a9345 call dword ptr [0x116d3368] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3368))), 0x116a934bu);
  /* 116a934b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a934d jne 0x116a9356 */
  if (!C.zf) goto L_116a9356;
  /* 116a934f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a9351 jmp 0x116a9441 */
  goto L_116a9441;
L_116a9356:;
  /* 116a9356 jmp 0x116a943a */
  goto L_116a943a;
L_116a935b:;
  /* 116a935b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116a935e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 116a9361 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 116a9368 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a936b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 116a936d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a9370 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 116a9372 call 0x116a0a30 */
  push32(0x116a9377u); f_116a0a30();
  /* 116a9377 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 116a937a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 116a937d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 116a9380 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 116a9383 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 116a938a jmp 0x116a93a3 */
  goto L_116a93a3;
  /* 116a938c mov eax, 1 */
  EAX = (0x1u);
  /* 116a9391 ret  */
  ESPCHK(0x116a9150u, _esp0);
  ESP += 4; return;
  /* 116a9392 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 116a9395 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 116a939c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_116a93a3:;
  /* 116a93a3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a93a7 jne 0x116a93b0 */
  if (!C.zf) goto L_116a93b0;
  /* 116a93a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a93ab jmp 0x116a9441 */
  goto L_116a9441;
L_116a93b0:;
  /* 116a93b0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a93b3 push eax */
  push32((uint32_t)(EAX));
  /* 116a93b4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a93b7 push ecx */
  push32((uint32_t)(ECX));
  /* 116a93b8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116a93bb push edx */
  push32((uint32_t)(EDX));
  /* 116a93bc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a93bf push eax */
  push32((uint32_t)(EAX));
  /* 116a93c0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a93c3 push ecx */
  push32((uint32_t)(ECX));
  /* 116a93c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a93c7 push edx */
  push32((uint32_t)(EDX));
  /* 116a93c8 call dword ptr [0x116d3368] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3368))), 0x116a93ceu);
  /* 116a93ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a93d0 jne 0x116a93d6 */
  if (!C.zf) goto L_116a93d6;
  /* 116a93d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a93d4 jmp 0x116a9441 */
  goto L_116a9441;
L_116a93d6:;
  /* 116a93d6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a93da jne 0x116a940a */
  if (!C.zf) goto L_116a940a;
  /* 116a93dc push 0 */
  push32((uint32_t)(0x0u));
  /* 116a93de push 0 */
  push32((uint32_t)(0x0u));
  /* 116a93e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a93e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a93e4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a93e7 push eax */
  push32((uint32_t)(EAX));
  /* 116a93e8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a93eb push ecx */
  push32((uint32_t)(ECX));
  /* 116a93ec push 0x220 */
  push32((uint32_t)(0x220u));
  /* 116a93f1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 116a93f4 push edx */
  push32((uint32_t)(EDX));
  /* 116a93f5 call dword ptr [0x116d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33c4))), 0x116a93fbu);
  /* 116a93fb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 116a93fe cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9402 jne 0x116a9408 */
  if (!C.zf) goto L_116a9408;
  /* 116a9404 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a9406 jmp 0x116a9441 */
  goto L_116a9441;
L_116a9408:;
  /* 116a9408 jmp 0x116a943a */
  goto L_116a943a;
L_116a940a:;
  /* 116a940a push 0 */
  push32((uint32_t)(0x0u));
  /* 116a940c push 0 */
  push32((uint32_t)(0x0u));
  /* 116a940e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116a9411 push eax */
  push32((uint32_t)(EAX));
  /* 116a9412 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116a9415 push ecx */
  push32((uint32_t)(ECX));
  /* 116a9416 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a9419 push edx */
  push32((uint32_t)(EDX));
  /* 116a941a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a941d push eax */
  push32((uint32_t)(EAX));
  /* 116a941e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 116a9423 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 116a9426 push ecx */
  push32((uint32_t)(ECX));
  /* 116a9427 call dword ptr [0x116d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33c4))), 0x116a942du);
  /* 116a942d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 116a9430 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9434 jne 0x116a943a */
  if (!C.zf) goto L_116a943a;
  /* 116a9436 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a9438 jmp 0x116a9441 */
  goto L_116a9441;
L_116a943a:;
  /* 116a943a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116a943d jmp 0x116a9441 */
  goto L_116a9441;
L_116a943f:;
  /* 116a943f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116a9441:;
  /* 116a9441 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 116a9444 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a9447 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 116a944e pop edi */
  EDI = (pop32());
  /* 116a944f pop esi */
  ESI = (pop32());
  /* 116a9450 pop ebx */
  EBX = (pop32());
  /* 116a9451 mov esp, ebp */
  ESP = (EBP);
  /* 116a9453 pop ebp */
  EBP = (pop32());
  /* 116a9454 ret  */
  ESPCHK(0x116a9150u, _esp0);
  ESP += 4; return;
}

/* FUN_10019460 @ 0x116a9460 (80 bytes, 32 insns) */
void f_116a9460(void) {
  FTRACE(0x116a9460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a9460 push ebp */
  push32((uint32_t)(EBP));
  /* 116a9461 mov ebp, esp */
  EBP = (ESP);
  /* 116a9463 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a9466 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a9469 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116a946c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a946f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116a9472:;
  /* 116a9472 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a9475 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a9478 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a947b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116a947e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a9480 je 0x116a9497 */
  if (C.zf) goto L_116a9497;
  /* 116a9482 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a9485 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116a9488 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a948a je 0x116a9497 */
  if (C.zf) goto L_116a9497;
  /* 116a948c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a948f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a9492 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a9495 jmp 0x116a9472 */
  goto L_116a9472;
L_116a9497:;
  /* 116a9497 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a949a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116a949d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a949f jne 0x116a94a9 */
  if (!C.zf) goto L_116a94a9;
  /* 116a94a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a94a4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a94a7 jmp 0x116a94ac */
  goto L_116a94ac;
L_116a94a9:;
  /* 116a94a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_116a94ac:;
  /* 116a94ac mov esp, ebp */
  ESP = (EBP);
  /* 116a94ae pop ebp */
  EBP = (pop32());
  /* 116a94af ret  */
  ESPCHK(0x116a9460u, _esp0);
  ESP += 4; return;
}

/* ___addl @ 0x116a94b0 (62 bytes, 23 insns) */
void f_116a94b0(void) {
  FTRACE(0x116a94b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a94b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a94b1 mov ebp, esp */
  EBP = (ESP);
  /* 116a94b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a94b6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116a94bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a94c0 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a94c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a94c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a94c9 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a94cc jb 0x116a94d6 */
  if (C.cf) goto L_116a94d6;
  /* 116a94ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a94d1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a94d4 jae 0x116a94df */
  if (!C.cf) goto L_116a94df;
L_116a94d6:;
  /* 116a94d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a94d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a94dc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_116a94df:;
  /* 116a94df mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a94e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a94e5 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 116a94e7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a94ea mov esp, ebp */
  ESP = (EBP);
  /* 116a94ec pop ebp */
  EBP = (pop32());
  /* 116a94ed ret  */
  ESPCHK(0x116a94b0u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x116a94f0 (173 bytes, 66 insns) */
void f_116a94f0(void) {
  FTRACE(0x116a94f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a94f0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a94f1 mov ebp, esp */
  EBP = (ESP);
  /* 116a94f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a94f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a94f9 push eax */
  push32((uint32_t)(EAX));
  /* 116a94fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a94fd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a94ff push edx */
  push32((uint32_t)(EDX));
  /* 116a9500 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a9503 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116a9505 push ecx */
  push32((uint32_t)(ECX));
  /* 116a9506 call 0x116a94b0 */
  push32(0x116a950bu); f_116a94b0();
  /* 116a950b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a950e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a9511 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9515 je 0x116a9547 */
  if (C.zf) goto L_116a9547;
  /* 116a9517 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a951a add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a951d push edx */
  push32((uint32_t)(EDX));
  /* 116a951e push 1 */
  push32((uint32_t)(0x1u));
  /* 116a9520 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a9523 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116a9526 push ecx */
  push32((uint32_t)(ECX));
  /* 116a9527 call 0x116a94b0 */
  push32(0x116a952cu); f_116a94b0();
  /* 116a952c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a952f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116a9532 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9536 je 0x116a9547 */
  if (C.zf) goto L_116a9547;
  /* 116a9538 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a953b mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 116a953e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a9541 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a9544 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
L_116a9547:;
  /* 116a9547 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a954a add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a954d push edx */
  push32((uint32_t)(EDX));
  /* 116a954e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a9551 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116a9554 push ecx */
  push32((uint32_t)(ECX));
  /* 116a9555 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a9558 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 116a955b push eax */
  push32((uint32_t)(EAX));
  /* 116a955c call 0x116a94b0 */
  push32(0x116a9561u); f_116a94b0();
  /* 116a9561 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a9564 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116a9567 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a956b je 0x116a957c */
  if (C.zf) goto L_116a957c;
  /* 116a956d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a9570 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 116a9573 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a9576 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a9579 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_116a957c:;
  /* 116a957c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a957f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a9582 push ecx */
  push32((uint32_t)(ECX));
  /* 116a9583 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a9586 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 116a9589 push eax */
  push32((uint32_t)(EAX));
  /* 116a958a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a958d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 116a9590 push edx */
  push32((uint32_t)(EDX));
  /* 116a9591 call 0x116a94b0 */
  push32(0x116a9596u); f_116a94b0();
  /* 116a9596 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a9599 mov esp, ebp */
  ESP = (EBP);
  /* 116a959b pop ebp */
  EBP = (pop32());
  /* 116a959c ret  */
  ESPCHK(0x116a94f0u, _esp0);
  ESP += 4; return;
}

/* ___shl_12 @ 0x116a95a0 (96 bytes, 37 insns) */
void f_116a95a0(void) {
  FTRACE(0x116a95a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a95a0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a95a1 mov ebp, esp */
  EBP = (ESP);
  /* 116a95a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a95a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a95a9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116a95ab and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 116a95b1 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 116a95b3 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a95b5 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 116a95b7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116a95ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a95bd mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 116a95c0 and eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 116a95c5 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116a95c7 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a95c9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116a95cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116a95ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a95d1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a95d3 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 116a95d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a95d8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116a95da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a95dd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116a95e0 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 116a95e2 or edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 116a95e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a95e8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 116a95eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a95ee mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 116a95f1 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 116a95f3 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 116a95f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a95f9 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 116a95fc mov esp, ebp */
  ESP = (EBP);
  /* 116a95fe pop ebp */
  EBP = (pop32());
  /* 116a95ff ret  */
  ESPCHK(0x116a95a0u, _esp0);
  ESP += 4; return;
}

/* ___shr_12 @ 0x116a9600 (99 bytes, 37 insns) */
void f_116a9600(void) {
  FTRACE(0x116a9600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a9600 push ebp */
  push32((uint32_t)(EBP));
  /* 116a9601 mov ebp, esp */
  EBP = (ESP);
  /* 116a9603 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a9606 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a9609 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116a960c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116a960f neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 116a9611 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a9613 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 116a9619 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116a961c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a961f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 116a9622 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 116a9625 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116a9627 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a9629 and eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 116a962e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a9631 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a9634 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 116a9637 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 116a9639 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a963c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 116a963f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a9642 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116a9645 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 116a9647 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 116a964a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a964d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 116a9650 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a9653 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a9655 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 116a9657 or edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 116a965a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a965d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116a965f mov esp, ebp */
  ESP = (EBP);
  /* 116a9661 pop ebp */
  EBP = (pop32());
  /* 116a9662 ret  */
  ESPCHK(0x116a9600u, _esp0);
  ESP += 4; return;
}

/* FUN_10019670 @ 0x116a9670 (315 bytes, 101 insns) */
void f_116a9670(void) {
  FTRACE(0x116a9670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a9670 push ebp */
  push32((uint32_t)(EBP));
  /* 116a9671 mov ebp, esp */
  EBP = (ESP);
  /* 116a9673 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a9676 mov word ptr [ebp - 0x10], 0x404e */
  w16((uint32_t)(EBP + -0x10), (0x404eu));
  /* 116a967c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a967f mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 116a9685 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a9688 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 116a968f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a9692 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 116a9699 jmp 0x116a96ad */
  goto L_116a96ad;
L_116a969b:;
  /* 116a969b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a969e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a96a1 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 116a96a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a96a7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a96aa mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_116a96ad:;
  /* 116a96ad cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a96b1 jbe 0x116a9727 */
  if ((C.cf||C.zf)) goto L_116a9727;
  /* 116a96b3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a96b6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116a96b8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116a96bb mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 116a96be mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116a96c1 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 116a96c4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116a96c7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a96ca push eax */
  push32((uint32_t)(EAX));
  /* 116a96cb call 0x116a95a0 */
  push32(0x116a96d0u); f_116a95a0();
  /* 116a96d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a96d3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a96d6 push ecx */
  push32((uint32_t)(ECX));
  /* 116a96d7 call 0x116a95a0 */
  push32(0x116a96dcu); f_116a95a0();
  /* 116a96dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a96df lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 116a96e2 push edx */
  push32((uint32_t)(EDX));
  /* 116a96e3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a96e6 push eax */
  push32((uint32_t)(EAX));
  /* 116a96e7 call 0x116a94f0 */
  push32(0x116a96ecu); f_116a94f0();
  /* 116a96ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a96ef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a96f2 push ecx */
  push32((uint32_t)(ECX));
  /* 116a96f3 call 0x116a95a0 */
  push32(0x116a96f8u); f_116a95a0();
  /* 116a96f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a96fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a96fe movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116a9701 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116a9704 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116a970b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116a9712 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 116a9715 push ecx */
  push32((uint32_t)(ECX));
  /* 116a9716 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a9719 push edx */
  push32((uint32_t)(EDX));
  /* 116a971a call 0x116a94f0 */
  push32(0x116a971fu); f_116a94f0();
  /* 116a971f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a9722 jmp 0x116a969b */
  goto L_116a969b;
L_116a9727:;
  /* 116a9727 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a972a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a972e jne 0x116a9773 */
  if (!C.zf) goto L_116a9773;
  /* 116a9730 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a9733 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116a9736 shr edx, 0x10 */
  EDX = (sh_shr((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 116a9739 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a973c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 116a973f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a9742 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116a9745 shl edx, 0x10 */
  EDX = (sh_shl((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 116a9748 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a974b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116a974d shr ecx, 0x10 */
  ECX = (sh_shr((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 116a9750 or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 116a9752 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a9755 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 116a9758 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a975b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a975d shl edx, 0x10 */
  EDX = (sh_shl((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 116a9760 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a9763 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116a9765 mov cx, word ptr [ebp - 0x10] */
  CX = (r16((uint32_t)(EBP + -0x10)));
  /* 116a9769 sub cx, 0x10 */
  { uint32_t _a=(CX),_b=(0x10u),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 116a976d mov word ptr [ebp - 0x10], cx */
  w16((uint32_t)(EBP + -0x10), (CX));
  /* 116a9771 jmp 0x116a9727 */
  goto L_116a9727;
L_116a9773:;
  /* 116a9773 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a9776 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 116a9779 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 116a977e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a9780 jne 0x116a979c */
  if (!C.zf) goto L_116a979c;
  /* 116a9782 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a9785 push ecx */
  push32((uint32_t)(ECX));
  /* 116a9786 call 0x116a95a0 */
  push32(0x116a978bu); f_116a95a0();
  /* 116a978b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a978e mov dx, word ptr [ebp - 0x10] */
  DX = (r16((uint32_t)(EBP + -0x10)));
  /* 116a9792 sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 116a9796 mov word ptr [ebp - 0x10], dx */
  w16((uint32_t)(EBP + -0x10), (DX));
  /* 116a979a jmp 0x116a9773 */
  goto L_116a9773;
L_116a979c:;
  /* 116a979c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a979f mov cx, word ptr [ebp - 0x10] */
  CX = (r16((uint32_t)(EBP + -0x10)));
  /* 116a97a3 mov word ptr [eax + 0xa], cx */
  w16((uint32_t)(EAX + 0xa), (CX));
  /* 116a97a7 mov esp, ebp */
  ESP = (EBP);
  /* 116a97a9 pop ebp */
  EBP = (pop32());
  /* 116a97aa ret  */
  ESPCHK(0x116a9670u, _esp0);
  ESP += 4; return;
}

/* FUN_100197b0 @ 0x116a97b0 (2586 bytes, 690 insns) [4 switch table(s)] */
void f_116a97b0(void) {
  FTRACE(0x116a97b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a97b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a97b1 mov ebp, esp */
  EBP = (ESP);
  /* 116a97b3 sub esp, 0xb4 */
  { uint32_t _a=(ESP),_b=(0xb4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a97b9 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 116a97bc mov dword ptr [ebp - 0x68], eax */
  w32((uint32_t)(EBP + -0x68), (EAX));
  /* 116a97bf mov word ptr [ebp - 0x1c], 0 */
  w16((uint32_t)(EBP + -0x1c), (0x0u));
  /* 116a97c5 mov dword ptr [ebp - 0x74], 1 */
  w32((uint32_t)(EBP + -0x74), (0x1u));
  /* 116a97cc mov dword ptr [ebp - 0x70], 0 */
  w32((uint32_t)(EBP + -0x70), (0x0u));
  /* 116a97d3 mov dword ptr [ebp - 0x54], 0 */
  w32((uint32_t)(EBP + -0x54), (0x0u));
  /* 116a97da mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 116a97e1 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 116a97e8 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 116a97ef mov dword ptr [ebp - 0x78], 0 */
  w32((uint32_t)(EBP + -0x78), (0x0u));
  /* 116a97f6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 116a97fd mov dword ptr [ebp - 0x6c], 0 */
  w32((uint32_t)(EBP + -0x6c), (0x0u));
  /* 116a9804 mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 116a980b mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 116a9812 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a9815 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116a9818 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a981b mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 116a981e jmp 0x116a9829 */
  goto L_116a9829;
L_116a9820:;
  /* 116a9820 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a9823 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a9826 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116a9829:;
  /* 116a9829 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a982c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116a982f cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9832 je 0x116a9855 */
  if (C.zf) goto L_116a9855;
  /* 116a9834 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a9837 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116a983a cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a983d je 0x116a9855 */
  if (C.zf) goto L_116a9855;
  /* 116a983f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a9842 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116a9845 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9848 je 0x116a9855 */
  if (C.zf) goto L_116a9855;
  /* 116a984a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a984d movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116a9850 cmp edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9853 jne 0x116a9857 */
  if (!C.zf) goto L_116a9857;
L_116a9855:;
  /* 116a9855 jmp 0x116a9820 */
  goto L_116a9820;
L_116a9857:;
  /* 116a9857 cmp dword ptr [ebp - 0x4c], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a985b je 0x116a9fb8 */
  if (C.zf) goto L_116a9fb8;
  /* 116a9861 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a9864 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116a9866 mov byte ptr [ebp - 0x3c], cl */
  w8((uint32_t)(EBP + -0x3c), (CL));
  /* 116a9869 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a986c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a986f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116a9872 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 116a9875 mov dword ptr [ebp - 0x80], eax */
  w32((uint32_t)(EBP + -0x80), (EAX));
  /* 116a9878 cmp dword ptr [ebp - 0x80], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x80))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a987c ja 0x116a9fb3 */
  if ((!C.cf&&!C.zf)) goto L_116a9fb3;
  /* 116a9882 mov ecx, dword ptr [ebp - 0x80] */
  ECX = (r32((uint32_t)(EBP + -0x80)));
  /* 116a9885 jmp dword ptr [ecx*4 + 0x116aa1ca] */
  switch (ECX) {
    case 0: goto L_116a988c;
    case 1: goto L_116a992a;
    case 2: goto L_116a99e0;
    case 3: goto L_116a9a4b;
    case 4: goto L_116a9b63;
    case 5: goto L_116a9c95;
    case 6: goto L_116a9d0b;
    case 7: goto L_116a9df0;
    case 8: goto L_116a9d92;
    case 9: goto L_116a9e43;
    case 10: goto L_116a9fb3;
    case 11: goto L_116a9f4f;
    case 12: goto L_116a99b9;
    case 13: goto L_116a99a7;
    case 14: goto L_116a99b0;
    case 15: goto L_116a99cb;
    default: x86_unimpl("switch@0x116a9885 out of table"); return;
  }
L_116a988c:;
  /* 116a988c movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 116a9890 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9893 jl 0x116a98b0 */
  if ((C.sf!=C.of)) goto L_116a98b0;
  /* 116a9895 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 116a9899 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a989c jg 0x116a98b0 */
  if ((!C.zf&&C.sf==C.of)) goto L_116a98b0;
  /* 116a989e mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 116a98a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a98a8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a98ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116a98ae jmp 0x116a9925 */
  goto L_116a9925;
L_116a98b0:;
  /* 116a98b0 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 116a98b4 movsx eax, byte ptr [0x116ce264] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x116ce264))));
  /* 116a98bb cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a98bd jne 0x116a98c8 */
  if (!C.zf) goto L_116a98c8;
  /* 116a98bf mov dword ptr [ebp - 0x4c], 5 */
  w32((uint32_t)(EBP + -0x4c), (0x5u));
  /* 116a98c6 jmp 0x116a9925 */
  goto L_116a9925;
L_116a98c8:;
  /* 116a98c8 mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 116a98cb mov byte ptr [ebp - 0x84], cl */
  w8((uint32_t)(EBP + -0x84), (CL));
  /* 116a98d1 cmp byte ptr [ebp - 0x84], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116a98d8 je 0x116a98f7 */
  if (C.zf) goto L_116a98f7;
  /* 116a98da cmp byte ptr [ebp - 0x84], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116a98e1 je 0x116a9906 */
  if (C.zf) goto L_116a9906;
  /* 116a98e3 cmp byte ptr [ebp - 0x84], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116a98ea je 0x116a98ee */
  if (C.zf) goto L_116a98ee;
  /* 116a98ec jmp 0x116a9915 */
  goto L_116a9915;
L_116a98ee:;
  /* 116a98ee mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 116a98f5 jmp 0x116a9925 */
  goto L_116a9925;
L_116a98f7:;
  /* 116a98f7 mov dword ptr [ebp - 0x4c], 2 */
  w32((uint32_t)(EBP + -0x4c), (0x2u));
  /* 116a98fe mov word ptr [ebp - 0x1c], 0 */
  w16((uint32_t)(EBP + -0x1c), (0x0u));
  /* 116a9904 jmp 0x116a9925 */
  goto L_116a9925;
L_116a9906:;
  /* 116a9906 mov dword ptr [ebp - 0x4c], 2 */
  w32((uint32_t)(EBP + -0x4c), (0x2u));
  /* 116a990d mov word ptr [ebp - 0x1c], 0x8000 */
  w16((uint32_t)(EBP + -0x1c), (0x8000u));
  /* 116a9913 jmp 0x116a9925 */
  goto L_116a9925;
L_116a9915:;
  /* 116a9915 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 116a991c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a991f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a9922 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116a9925:;
  /* 116a9925 jmp 0x116a9fb3 */
  goto L_116a9fb3;
L_116a992a:;
  /* 116a992a mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 116a9931 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 116a9935 cmp eax, 0x31 */
  { uint32_t _a=(EAX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9938 jl 0x116a9958 */
  if ((C.sf!=C.of)) goto L_116a9958;
  /* 116a993a movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 116a993e cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9941 jg 0x116a9958 */
  if ((!C.zf&&C.sf==C.of)) goto L_116a9958;
  /* 116a9943 mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 116a994a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a994d sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a9950 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116a9953 jmp 0x116a99db */
  goto L_116a99db;
L_116a9958:;
  /* 116a9958 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 116a995c movsx ecx, byte ptr [0x116ce264] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x116ce264))));
  /* 116a9963 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9965 jne 0x116a9970 */
  if (!C.zf) goto L_116a9970;
  /* 116a9967 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 116a996e jmp 0x116a99db */
  goto L_116a99db;
L_116a9970:;
  /* 116a9970 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 116a9974 mov dword ptr [ebp - 0x88], edx */
  w32((uint32_t)(EBP + -0x88), (EDX));
  /* 116a997a mov eax, dword ptr [ebp - 0x88] */
  EAX = (r32((uint32_t)(EBP + -0x88)));
  /* 116a9980 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a9983 mov dword ptr [ebp - 0x88], eax */
  w32((uint32_t)(EBP + -0x88), (EAX));
  /* 116a9989 cmp dword ptr [ebp - 0x88], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9990 ja 0x116a99cb */
  if ((!C.cf&&!C.zf)) goto L_116a99cb;
  /* 116a9992 mov edx, dword ptr [ebp - 0x88] */
  EDX = (r32((uint32_t)(EBP + -0x88)));
  /* 116a9998 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116a999a mov cl, byte ptr [edx + 0x116aa20a] */
  CL = (r8((uint32_t)(EDX + 0x116aa20a)));
  /* 116a99a0 jmp dword ptr [ecx*4 + 0x116aa1fa] */
  switch (ECX) {
    case 0: goto L_116a99b9;
    case 1: goto L_116a99a7;
    case 2: goto L_116a99b0;
    case 3: goto L_116a99cb;
    default: x86_unimpl("switch@0x116a99a0 out of table"); return;
  }
L_116a99a7:;
  /* 116a99a7 mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 116a99ae jmp 0x116a99db */
  goto L_116a99db;
L_116a99b0:;
  /* 116a99b0 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 116a99b7 jmp 0x116a99db */
  goto L_116a99db;
L_116a99b9:;
  /* 116a99b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a99bc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a99bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a99c2 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 116a99c9 jmp 0x116a99db */
  goto L_116a99db;
L_116a99cb:;
  /* 116a99cb mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 116a99d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a99d5 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a99d8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116a99db:;
  /* 116a99db jmp 0x116a9fb3 */
  goto L_116a9fb3;
L_116a99e0:;
  /* 116a99e0 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 116a99e4 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a99e7 jl 0x116a9a04 */
  if ((C.sf!=C.of)) goto L_116a9a04;
  /* 116a99e9 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 116a99ed cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a99f0 jg 0x116a9a04 */
  if ((!C.zf&&C.sf==C.of)) goto L_116a9a04;
  /* 116a99f2 mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 116a99f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a99fc sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a99ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116a9a02 jmp 0x116a9a46 */
  goto L_116a9a46;
L_116a9a04:;
  /* 116a9a04 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 116a9a08 movsx eax, byte ptr [0x116ce264] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x116ce264))));
  /* 116a9a0f cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9a11 jne 0x116a9a1c */
  if (!C.zf) goto L_116a9a1c;
  /* 116a9a13 mov dword ptr [ebp - 0x4c], 5 */
  w32((uint32_t)(EBP + -0x4c), (0x5u));
  /* 116a9a1a jmp 0x116a9a46 */
  goto L_116a9a46;
L_116a9a1c:;
  /* 116a9a1c mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 116a9a1f mov byte ptr [ebp - 0x8c], cl */
  w8((uint32_t)(EBP + -0x8c), (CL));
  /* 116a9a25 cmp byte ptr [ebp - 0x8c], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8c))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116a9a2c je 0x116a9a30 */
  if (C.zf) goto L_116a9a30;
  /* 116a9a2e jmp 0x116a9a39 */
  goto L_116a9a39;
L_116a9a30:;
  /* 116a9a30 mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 116a9a37 jmp 0x116a9a46 */
  goto L_116a9a46;
L_116a9a39:;
  /* 116a9a39 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 116a9a40 mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 116a9a43 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116a9a46:;
  /* 116a9a46 jmp 0x116a9fb3 */
  goto L_116a9fb3;
L_116a9a4b:;
  /* 116a9a4b mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 116a9a52 jmp 0x116a9a65 */
  goto L_116a9a65;
L_116a9a54:;
  /* 116a9a54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a9a57 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116a9a59 mov byte ptr [ebp - 0x3c], cl */
  w8((uint32_t)(EBP + -0x3c), (CL));
  /* 116a9a5c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a9a5f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a9a62 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116a9a65:;
  /* 116a9a65 cmp dword ptr [0x116ce260], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116ce260))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9a6c jle 0x116a9a89 */
  if ((C.zf||C.sf!=C.of)) goto L_116a9a89;
  /* 116a9a6e push 4 */
  push32((uint32_t)(0x4u));
  /* 116a9a70 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a9a73 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116a9a78 push eax */
  push32((uint32_t)(EAX));
  /* 116a9a79 call 0x116a17d0 */
  push32(0x116a9a7eu); f_116a17d0();
  /* 116a9a7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a9a81 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 116a9a87 jmp 0x116a9aa7 */
  goto L_116a9aa7;
L_116a9a89:;
  /* 116a9a89 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a9a8c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 116a9a92 mov edx, dword ptr [0x116ce26c] */
  EDX = (r32((uint32_t)(0x116ce26c)));
  /* 116a9a98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a9a9a mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 116a9a9e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 116a9aa1 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
L_116a9aa7:;
  /* 116a9aa7 cmp dword ptr [ebp - 0x90], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9aae je 0x116a9ae4 */
  if (C.zf) goto L_116a9ae4;
  /* 116a9ab0 cmp dword ptr [ebp - 0x70], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9ab4 jae 0x116a9ad6 */
  if (!C.cf) goto L_116a9ad6;
  /* 116a9ab6 mov ecx, dword ptr [ebp - 0x70] */
  ECX = (r32((uint32_t)(EBP + -0x70)));
  /* 116a9ab9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a9abc mov dword ptr [ebp - 0x70], ecx */
  w32((uint32_t)(EBP + -0x70), (ECX));
  /* 116a9abf movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 116a9ac3 sub edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a9ac6 mov eax, dword ptr [ebp - 0x68] */
  EAX = (r32((uint32_t)(EBP + -0x68)));
  /* 116a9ac9 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 116a9acb mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 116a9ace add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a9ad1 mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 116a9ad4 jmp 0x116a9adf */
  goto L_116a9adf;
L_116a9ad6:;
  /* 116a9ad6 mov edx, dword ptr [ebp - 0x6c] */
  EDX = (r32((uint32_t)(EBP + -0x6c)));
  /* 116a9ad9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a9adc mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_116a9adf:;
  /* 116a9adf jmp 0x116a9a54 */
  goto L_116a9a54;
L_116a9ae4:;
  /* 116a9ae4 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 116a9ae8 movsx ecx, byte ptr [0x116ce264] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x116ce264))));
  /* 116a9aef cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9af1 jne 0x116a9afc */
  if (!C.zf) goto L_116a9afc;
  /* 116a9af3 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 116a9afa jmp 0x116a9b5e */
  goto L_116a9b5e;
L_116a9afc:;
  /* 116a9afc movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 116a9b00 mov dword ptr [ebp - 0x94], edx */
  w32((uint32_t)(EBP + -0x94), (EDX));
  /* 116a9b06 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 116a9b0c sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a9b0f mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 116a9b15 cmp dword ptr [ebp - 0x94], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9b1c ja 0x116a9b4e */
  if ((!C.cf&&!C.zf)) goto L_116a9b4e;
  /* 116a9b1e mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 116a9b24 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116a9b26 mov cl, byte ptr [edx + 0x116aa251] */
  CL = (r8((uint32_t)(EDX + 0x116aa251)));
  /* 116a9b2c jmp dword ptr [ecx*4 + 0x116aa245] */
  switch (ECX) {
    case 0: goto L_116a9b3c;
    case 1: goto L_116a9b33;
    case 2: goto L_116a9b4e;
    default: x86_unimpl("switch@0x116a9b2c out of table"); return;
  }
L_116a9b33:;
  /* 116a9b33 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 116a9b3a jmp 0x116a9b5e */
  goto L_116a9b5e;
L_116a9b3c:;
  /* 116a9b3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a9b3f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a9b42 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a9b45 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 116a9b4c jmp 0x116a9b5e */
  goto L_116a9b5e;
L_116a9b4e:;
  /* 116a9b4e mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 116a9b55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a9b58 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a9b5b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116a9b5e:;
  /* 116a9b5e jmp 0x116a9fb3 */
  goto L_116a9fb3;
L_116a9b63:;
  /* 116a9b63 mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 116a9b6a mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 116a9b71 cmp dword ptr [ebp - 0x70], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9b75 jne 0x116a9b9e */
  if (!C.zf) goto L_116a9b9e;
  /* 116a9b77 jmp 0x116a9b8a */
  goto L_116a9b8a;
L_116a9b79:;
  /* 116a9b79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a9b7c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116a9b7e mov byte ptr [ebp - 0x3c], al */
  w8((uint32_t)(EBP + -0x3c), (AL));
  /* 116a9b81 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a9b84 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a9b87 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116a9b8a:;
  /* 116a9b8a movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 116a9b8e cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9b91 jne 0x116a9b9e */
  if (!C.zf) goto L_116a9b9e;
  /* 116a9b93 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 116a9b96 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a9b99 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
  /* 116a9b9c jmp 0x116a9b79 */
  goto L_116a9b79;
L_116a9b9e:;
  /* 116a9b9e jmp 0x116a9bb1 */
  goto L_116a9bb1;
L_116a9ba0:;
  /* 116a9ba0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a9ba3 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116a9ba5 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 116a9ba8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a9bab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a9bae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116a9bb1:;
  /* 116a9bb1 cmp dword ptr [0x116ce260], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116ce260))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9bb8 jle 0x116a9bd6 */
  if ((C.zf||C.sf!=C.of)) goto L_116a9bd6;
  /* 116a9bba push 4 */
  push32((uint32_t)(0x4u));
  /* 116a9bbc mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a9bbf and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 116a9bc5 push ecx */
  push32((uint32_t)(ECX));
  /* 116a9bc6 call 0x116a17d0 */
  push32(0x116a9bcbu); f_116a17d0();
  /* 116a9bcb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a9bce mov dword ptr [ebp - 0x98], eax */
  w32((uint32_t)(EBP + -0x98), (EAX));
  /* 116a9bd4 jmp 0x116a9bf3 */
  goto L_116a9bf3;
L_116a9bd6:;
  /* 116a9bd6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a9bd9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 116a9bdf mov eax, dword ptr [0x116ce26c] */
  EAX = (r32((uint32_t)(0x116ce26c)));
  /* 116a9be4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116a9be6 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 116a9bea and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 116a9bed mov dword ptr [ebp - 0x98], ecx */
  w32((uint32_t)(EBP + -0x98), (ECX));
L_116a9bf3:;
  /* 116a9bf3 cmp dword ptr [ebp - 0x98], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9bfa je 0x116a9c2e */
  if (C.zf) goto L_116a9c2e;
  /* 116a9bfc cmp dword ptr [ebp - 0x70], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9c00 jae 0x116a9c29 */
  if (!C.cf) goto L_116a9c29;
  /* 116a9c02 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 116a9c05 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a9c08 mov dword ptr [ebp - 0x70], edx */
  w32((uint32_t)(EBP + -0x70), (EDX));
  /* 116a9c0b movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 116a9c0f sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a9c12 mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 116a9c15 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 116a9c17 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 116a9c1a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a9c1d mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
  /* 116a9c20 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 116a9c23 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a9c26 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
L_116a9c29:;
  /* 116a9c29 jmp 0x116a9ba0 */
  goto L_116a9ba0;
L_116a9c2e:;
  /* 116a9c2e movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 116a9c32 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 116a9c38 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 116a9c3e sub edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a9c41 mov dword ptr [ebp - 0x9c], edx */
  w32((uint32_t)(EBP + -0x9c), (EDX));
  /* 116a9c47 cmp dword ptr [ebp - 0x9c], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x9c))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9c4e ja 0x116a9c80 */
  if ((!C.cf&&!C.zf)) goto L_116a9c80;
  /* 116a9c50 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 116a9c56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a9c58 mov al, byte ptr [ecx + 0x116aa298] */
  AL = (r8((uint32_t)(ECX + 0x116aa298)));
  /* 116a9c5e jmp dword ptr [eax*4 + 0x116aa28c] */
  switch (EAX) {
    case 0: goto L_116a9c6e;
    case 1: goto L_116a9c65;
    case 2: goto L_116a9c80;
    default: x86_unimpl("switch@0x116a9c5e out of table"); return;
  }
L_116a9c65:;
  /* 116a9c65 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 116a9c6c jmp 0x116a9c90 */
  goto L_116a9c90;
L_116a9c6e:;
  /* 116a9c6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a9c71 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a9c74 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116a9c77 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 116a9c7e jmp 0x116a9c90 */
  goto L_116a9c90;
L_116a9c80:;
  /* 116a9c80 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 116a9c87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a9c8a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a9c8d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116a9c90:;
  /* 116a9c90 jmp 0x116a9fb3 */
  goto L_116a9fb3;
L_116a9c95:;
  /* 116a9c95 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 116a9c9c cmp dword ptr [0x116ce260], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116ce260))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9ca3 jle 0x116a9cc1 */
  if ((C.zf||C.sf!=C.of)) goto L_116a9cc1;
  /* 116a9ca5 push 4 */
  push32((uint32_t)(0x4u));
  /* 116a9ca7 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a9caa and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 116a9cb0 push ecx */
  push32((uint32_t)(ECX));
  /* 116a9cb1 call 0x116a17d0 */
  push32(0x116a9cb6u); f_116a17d0();
  /* 116a9cb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a9cb9 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 116a9cbf jmp 0x116a9cde */
  goto L_116a9cde;
L_116a9cc1:;
  /* 116a9cc1 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a9cc4 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 116a9cca mov eax, dword ptr [0x116ce26c] */
  EAX = (r32((uint32_t)(0x116ce26c)));
  /* 116a9ccf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116a9cd1 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 116a9cd5 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 116a9cd8 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
L_116a9cde:;
  /* 116a9cde cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9ce5 je 0x116a9cf9 */
  if (C.zf) goto L_116a9cf9;
  /* 116a9ce7 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 116a9cee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a9cf1 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a9cf4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116a9cf7 jmp 0x116a9d06 */
  goto L_116a9d06;
L_116a9cf9:;
  /* 116a9cf9 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 116a9d00 mov eax, dword ptr [ebp - 0x64] */
  EAX = (r32((uint32_t)(EBP + -0x64)));
  /* 116a9d03 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116a9d06:;
  /* 116a9d06 jmp 0x116a9fb3 */
  goto L_116a9fb3;
L_116a9d0b:;
  /* 116a9d0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a9d0e sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a9d11 mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 116a9d14 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 116a9d18 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9d1b jl 0x116a9d38 */
  if ((C.sf!=C.of)) goto L_116a9d38;
  /* 116a9d1d movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 116a9d21 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9d24 jg 0x116a9d38 */
  if ((!C.zf&&C.sf==C.of)) goto L_116a9d38;
  /* 116a9d26 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 116a9d2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a9d30 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a9d33 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116a9d36 jmp 0x116a9d8d */
  goto L_116a9d8d;
L_116a9d38:;
  /* 116a9d38 mov dl, byte ptr [ebp - 0x3c] */
  DL = (r8((uint32_t)(EBP + -0x3c)));
  /* 116a9d3b mov byte ptr [ebp - 0xa4], dl */
  w8((uint32_t)(EBP + -0xa4), (DL));
  /* 116a9d41 cmp byte ptr [ebp - 0xa4], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116a9d48 je 0x116a9d77 */
  if (C.zf) goto L_116a9d77;
  /* 116a9d4a cmp byte ptr [ebp - 0xa4], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116a9d51 je 0x116a9d67 */
  if (C.zf) goto L_116a9d67;
  /* 116a9d53 cmp byte ptr [ebp - 0xa4], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116a9d5a je 0x116a9d5e */
  if (C.zf) goto L_116a9d5e;
  /* 116a9d5c jmp 0x116a9d80 */
  goto L_116a9d80;
L_116a9d5e:;
  /* 116a9d5e mov dword ptr [ebp - 0x4c], 8 */
  w32((uint32_t)(EBP + -0x4c), (0x8u));
  /* 116a9d65 jmp 0x116a9d8d */
  goto L_116a9d8d;
L_116a9d67:;
  /* 116a9d67 mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 116a9d6e mov dword ptr [ebp - 0x74], 0xffffffff */
  w32((uint32_t)(EBP + -0x74), (0xffffffffu));
  /* 116a9d75 jmp 0x116a9d8d */
  goto L_116a9d8d;
L_116a9d77:;
  /* 116a9d77 mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 116a9d7e jmp 0x116a9d8d */
  goto L_116a9d8d;
L_116a9d80:;
  /* 116a9d80 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 116a9d87 mov eax, dword ptr [ebp - 0x64] */
  EAX = (r32((uint32_t)(EBP + -0x64)));
  /* 116a9d8a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116a9d8d:;
  /* 116a9d8d jmp 0x116a9fb3 */
  goto L_116a9fb3;
L_116a9d92:;
  /* 116a9d92 mov dword ptr [ebp - 0x18], 1 */
  w32((uint32_t)(EBP + -0x18), (0x1u));
  /* 116a9d99 jmp 0x116a9dac */
  goto L_116a9dac;
L_116a9d9b:;
  /* 116a9d9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a9d9e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116a9da0 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 116a9da3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a9da6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a9da9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116a9dac:;
  /* 116a9dac movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 116a9db0 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9db3 jne 0x116a9db7 */
  if (!C.zf) goto L_116a9db7;
  /* 116a9db5 jmp 0x116a9d9b */
  goto L_116a9d9b;
L_116a9db7:;
  /* 116a9db7 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 116a9dbb cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9dbe jl 0x116a9ddb */
  if ((C.sf!=C.of)) goto L_116a9ddb;
  /* 116a9dc0 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 116a9dc4 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9dc7 jg 0x116a9ddb */
  if ((!C.zf&&C.sf==C.of)) goto L_116a9ddb;
  /* 116a9dc9 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 116a9dd0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a9dd3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a9dd6 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116a9dd9 jmp 0x116a9deb */
  goto L_116a9deb;
L_116a9ddb:;
  /* 116a9ddb mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 116a9de2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a9de5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a9de8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116a9deb:;
  /* 116a9deb jmp 0x116a9fb3 */
  goto L_116a9fb3;
L_116a9df0:;
  /* 116a9df0 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 116a9df4 cmp eax, 0x31 */
  { uint32_t _a=(EAX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9df7 jl 0x116a9e14 */
  if ((C.sf!=C.of)) goto L_116a9e14;
  /* 116a9df9 movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 116a9dfd cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9e00 jg 0x116a9e14 */
  if ((!C.zf&&C.sf==C.of)) goto L_116a9e14;
  /* 116a9e02 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 116a9e09 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a9e0c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a9e0f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116a9e12 jmp 0x116a9e3e */
  goto L_116a9e3e;
L_116a9e14:;
  /* 116a9e14 mov al, byte ptr [ebp - 0x3c] */
  AL = (r8((uint32_t)(EBP + -0x3c)));
  /* 116a9e17 mov byte ptr [ebp - 0xa8], al */
  w8((uint32_t)(EBP + -0xa8), (AL));
  /* 116a9e1d cmp byte ptr [ebp - 0xa8], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa8))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116a9e24 je 0x116a9e28 */
  if (C.zf) goto L_116a9e28;
  /* 116a9e26 jmp 0x116a9e31 */
  goto L_116a9e31;
L_116a9e28:;
  /* 116a9e28 mov dword ptr [ebp - 0x4c], 8 */
  w32((uint32_t)(EBP + -0x4c), (0x8u));
  /* 116a9e2f jmp 0x116a9e3e */
  goto L_116a9e3e;
L_116a9e31:;
  /* 116a9e31 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 116a9e38 mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 116a9e3b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116a9e3e:;
  /* 116a9e3e jmp 0x116a9fb3 */
  goto L_116a9fb3;
L_116a9e43:;
  /* 116a9e43 mov dword ptr [ebp - 0x18], 1 */
  w32((uint32_t)(EBP + -0x18), (0x1u));
  /* 116a9e4a mov dword ptr [ebp - 0x7c], 0 */
  w32((uint32_t)(EBP + -0x7c), (0x0u));
  /* 116a9e51 jmp 0x116a9e64 */
  goto L_116a9e64;
L_116a9e53:;
  /* 116a9e53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a9e56 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116a9e58 mov byte ptr [ebp - 0x3c], al */
  w8((uint32_t)(EBP + -0x3c), (AL));
  /* 116a9e5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a9e5e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a9e61 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116a9e64:;
  /* 116a9e64 cmp dword ptr [0x116ce260], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116ce260))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9e6b jle 0x116a9e89 */
  if ((C.zf||C.sf!=C.of)) goto L_116a9e89;
  /* 116a9e6d push 4 */
  push32((uint32_t)(0x4u));
  /* 116a9e6f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a9e72 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 116a9e78 push edx */
  push32((uint32_t)(EDX));
  /* 116a9e79 call 0x116a17d0 */
  push32(0x116a9e7eu); f_116a17d0();
  /* 116a9e7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a9e81 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 116a9e87 jmp 0x116a9ea6 */
  goto L_116a9ea6;
L_116a9e89:;
  /* 116a9e89 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a9e8c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116a9e91 mov ecx, dword ptr [0x116ce26c] */
  ECX = (r32((uint32_t)(0x116ce26c)));
  /* 116a9e97 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116a9e99 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 116a9e9d and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 116a9ea0 mov dword ptr [ebp - 0xac], edx */
  w32((uint32_t)(EBP + -0xac), (EDX));
L_116a9ea6:;
  /* 116a9ea6 cmp dword ptr [ebp - 0xac], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9ead je 0x116a9ed7 */
  if (C.zf) goto L_116a9ed7;
  /* 116a9eaf mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116a9eb2 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a9eb5 movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 116a9eb9 lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 116a9ebd mov dword ptr [ebp - 0x7c], edx */
  w32((uint32_t)(EBP + -0x7c), (EDX));
  /* 116a9ec0 cmp dword ptr [ebp - 0x7c], 0x1450 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x7c))),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9ec7 jle 0x116a9ed2 */
  if ((C.zf||C.sf!=C.of)) goto L_116a9ed2;
  /* 116a9ec9 mov dword ptr [ebp - 0x7c], 0x1451 */
  w32((uint32_t)(EBP + -0x7c), (0x1451u));
  /* 116a9ed0 jmp 0x116a9ed7 */
  goto L_116a9ed7;
L_116a9ed2:;
  /* 116a9ed2 jmp 0x116a9e53 */
  goto L_116a9e53;
L_116a9ed7:;
  /* 116a9ed7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116a9eda mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116a9edd jmp 0x116a9ef0 */
  goto L_116a9ef0;
L_116a9edf:;
  /* 116a9edf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a9ee2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116a9ee4 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 116a9ee7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a9eea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a9eed mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116a9ef0:;
  /* 116a9ef0 cmp dword ptr [0x116ce260], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116ce260))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9ef7 jle 0x116a9f15 */
  if ((C.zf||C.sf!=C.of)) goto L_116a9f15;
  /* 116a9ef9 push 4 */
  push32((uint32_t)(0x4u));
  /* 116a9efb mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a9efe and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 116a9f04 push ecx */
  push32((uint32_t)(ECX));
  /* 116a9f05 call 0x116a17d0 */
  push32(0x116a9f0au); f_116a17d0();
  /* 116a9f0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a9f0d mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 116a9f13 jmp 0x116a9f32 */
  goto L_116a9f32;
L_116a9f15:;
  /* 116a9f15 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a9f18 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 116a9f1e mov eax, dword ptr [0x116ce26c] */
  EAX = (r32((uint32_t)(0x116ce26c)));
  /* 116a9f23 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116a9f25 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 116a9f29 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 116a9f2c mov dword ptr [ebp - 0xb0], ecx */
  w32((uint32_t)(EBP + -0xb0), (ECX));
L_116a9f32:;
  /* 116a9f32 cmp dword ptr [ebp - 0xb0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9f39 je 0x116a9f3d */
  if (C.zf) goto L_116a9f3d;
  /* 116a9f3b jmp 0x116a9edf */
  goto L_116a9edf;
L_116a9f3d:;
  /* 116a9f3d mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 116a9f44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a9f47 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a9f4a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116a9f4d jmp 0x116a9fb3 */
  goto L_116a9fb3;
L_116a9f4f:;
  /* 116a9f4f cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9f53 je 0x116a9fa3 */
  if (C.zf) goto L_116a9fa3;
  /* 116a9f55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a9f58 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a9f5b mov dword ptr [ebp - 0x64], eax */
  w32((uint32_t)(EBP + -0x64), (EAX));
  /* 116a9f5e mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 116a9f61 mov byte ptr [ebp - 0xb4], cl */
  w8((uint32_t)(EBP + -0xb4), (CL));
  /* 116a9f67 cmp byte ptr [ebp - 0xb4], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xb4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116a9f6e je 0x116a9f8b */
  if (C.zf) goto L_116a9f8b;
  /* 116a9f70 cmp byte ptr [ebp - 0xb4], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xb4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116a9f77 je 0x116a9f7b */
  if (C.zf) goto L_116a9f7b;
  /* 116a9f79 jmp 0x116a9f94 */
  goto L_116a9f94;
L_116a9f7b:;
  /* 116a9f7b mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 116a9f82 mov dword ptr [ebp - 0x74], 0xffffffff */
  w32((uint32_t)(EBP + -0x74), (0xffffffffu));
  /* 116a9f89 jmp 0x116a9fa1 */
  goto L_116a9fa1;
L_116a9f8b:;
  /* 116a9f8b mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 116a9f92 jmp 0x116a9fa1 */
  goto L_116a9fa1;
L_116a9f94:;
  /* 116a9f94 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 116a9f9b mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 116a9f9e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116a9fa1:;
  /* 116a9fa1 jmp 0x116a9fb3 */
  goto L_116a9fb3;
L_116a9fa3:;
  /* 116a9fa3 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 116a9faa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a9fad sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a9fb0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116a9fb3:;
  /* 116a9fb3 jmp 0x116a9857 */
  goto L_116a9857;
L_116a9fb8:;
  /* 116a9fb8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a9fbb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a9fbe mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 116a9fc0 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9fc4 je 0x116aa107 */
  if (C.zf) goto L_116aa107;
  /* 116a9fca cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9fce jne 0x116aa107 */
  if (!C.zf) goto L_116aa107;
  /* 116a9fd4 cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9fd8 jne 0x116aa107 */
  if (!C.zf) goto L_116aa107;
  /* 116a9fde cmp dword ptr [ebp - 0x70], 0x18 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x18u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9fe2 jbe 0x116aa00f */
  if ((C.cf||C.zf)) goto L_116aa00f;
  /* 116a9fe4 movsx eax, byte ptr [ebp - 0x21] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x21))));
  /* 116a9fe8 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a9feb jl 0x116a9ff6 */
  if ((C.sf!=C.of)) goto L_116a9ff6;
  /* 116a9fed mov cl, byte ptr [ebp - 0x21] */
  CL = (r8((uint32_t)(EBP + -0x21)));
  /* 116a9ff0 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 116a9ff3 mov byte ptr [ebp - 0x21], cl */
  w8((uint32_t)(EBP + -0x21), (CL));
L_116a9ff6:;
  /* 116a9ff6 mov dword ptr [ebp - 0x70], 0x18 */
  w32((uint32_t)(EBP + -0x70), (0x18u));
  /* 116a9ffd mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 116aa000 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116aa003 mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
  /* 116aa006 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 116aa009 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa00c mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
L_116aa00f:;
  /* 116aa00f cmp dword ptr [ebp - 0x70], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa013 jbe 0x116aa0ea */
  if ((C.cf||C.zf)) goto L_116aa0ea;
  /* 116aa019 mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 116aa01c sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116aa01f mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 116aa022 jmp 0x116aa02d */
  goto L_116aa02d;
L_116aa024:;
  /* 116aa024 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 116aa027 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116aa02a mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
L_116aa02d:;
  /* 116aa02d mov eax, dword ptr [ebp - 0x68] */
  EAX = (r32((uint32_t)(EBP + -0x68)));
  /* 116aa030 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116aa033 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116aa035 jne 0x116aa04b */
  if (!C.zf) goto L_116aa04b;
  /* 116aa037 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 116aa03a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116aa03d mov dword ptr [ebp - 0x70], edx */
  w32((uint32_t)(EBP + -0x70), (EDX));
  /* 116aa040 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 116aa043 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa046 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
  /* 116aa049 jmp 0x116aa024 */
  goto L_116aa024;
L_116aa04b:;
  /* 116aa04b lea ecx, [ebp - 0x60] */
  ECX = ((uint32_t)(EBP + -0x60));
  /* 116aa04e push ecx */
  push32((uint32_t)(ECX));
  /* 116aa04f mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 116aa052 push edx */
  push32((uint32_t)(EDX));
  /* 116aa053 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 116aa056 push eax */
  push32((uint32_t)(EAX));
  /* 116aa057 call 0x116a9670 */
  push32(0x116aa05cu); f_116a9670();
  /* 116aa05c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa05f cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa063 jge 0x116aa06d */
  if ((C.sf==C.of)) goto L_116aa06d;
  /* 116aa065 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aa068 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 116aa06a mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_116aa06d:;
  /* 116aa06d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aa070 add edx, dword ptr [ebp - 0x6c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x6c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa073 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 116aa076 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa07a jne 0x116aa085 */
  if (!C.zf) goto L_116aa085;
  /* 116aa07c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aa07f add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa082 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_116aa085:;
  /* 116aa085 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa089 jne 0x116aa094 */
  if (!C.zf) goto L_116aa094;
  /* 116aa08b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aa08e sub ecx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116aa091 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_116aa094:;
  /* 116aa094 cmp dword ptr [ebp - 0x14], 0x1450 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa09b jle 0x116aa0a6 */
  if ((C.zf||C.sf!=C.of)) goto L_116aa0a6;
  /* 116aa09d mov dword ptr [ebp - 0x40], 1 */
  w32((uint32_t)(EBP + -0x40), (0x1u));
  /* 116aa0a4 jmp 0x116aa0e8 */
  goto L_116aa0e8;
L_116aa0a6:;
  /* 116aa0a6 cmp dword ptr [ebp - 0x14], 0xffffebb0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa0ad jge 0x116aa0b8 */
  if ((C.sf==C.of)) goto L_116aa0b8;
  /* 116aa0af mov dword ptr [ebp - 0x78], 1 */
  w32((uint32_t)(EBP + -0x78), (0x1u));
  /* 116aa0b6 jmp 0x116aa0e8 */
  goto L_116aa0e8;
L_116aa0b8:;
  /* 116aa0b8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116aa0bb push edx */
  push32((uint32_t)(EDX));
  /* 116aa0bc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aa0bf push eax */
  push32((uint32_t)(EAX));
  /* 116aa0c0 lea ecx, [ebp - 0x60] */
  ECX = ((uint32_t)(EBP + -0x60));
  /* 116aa0c3 push ecx */
  push32((uint32_t)(ECX));
  /* 116aa0c4 call 0x116ade70 */
  push32(0x116aa0c9u); f_116ade70();
  /* 116aa0c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa0cc mov dx, word ptr [ebp - 0x60] */
  DX = (r16((uint32_t)(EBP + -0x60)));
  /* 116aa0d0 mov word ptr [ebp - 0x48], dx */
  w16((uint32_t)(EBP + -0x48), (DX));
  /* 116aa0d4 mov eax, dword ptr [ebp - 0x5e] */
  EAX = (r32((uint32_t)(EBP + -0x5e)));
  /* 116aa0d7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116aa0da mov ecx, dword ptr [ebp - 0x5a] */
  ECX = (r32((uint32_t)(EBP + -0x5a)));
  /* 116aa0dd mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 116aa0e0 mov dx, word ptr [ebp - 0x56] */
  DX = (r16((uint32_t)(EBP + -0x56)));
  /* 116aa0e4 mov word ptr [ebp - 0x50], dx */
  w16((uint32_t)(EBP + -0x50), (DX));
L_116aa0e8:;
  /* 116aa0e8 jmp 0x116aa107 */
  goto L_116aa107;
L_116aa0ea:;
  /* 116aa0ea mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 116aa0f0 mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 116aa0f6 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 116aa0f9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116aa0fe mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116aa101 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116aa104 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_116aa107:;
  /* 116aa107 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa10b jne 0x116aa136 */
  if (!C.zf) goto L_116aa136;
  /* 116aa10d mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 116aa113 mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 116aa119 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 116aa11c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116aa122 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 116aa125 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116aa128 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116aa12b mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 116aa12e or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 116aa131 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 116aa134 jmp 0x116aa18d */
  goto L_116aa18d;
L_116aa136:;
  /* 116aa136 cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa13a je 0x116aa161 */
  if (C.zf) goto L_116aa161;
  /* 116aa13c mov word ptr [ebp - 0x50], 0x7fff */
  w16((uint32_t)(EBP + -0x50), (0x7fffu));
  /* 116aa142 mov dword ptr [ebp - 0x10], 0x80000000 */
  w32((uint32_t)(EBP + -0x10), (0x80000000u));
  /* 116aa149 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116aa150 mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 116aa156 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 116aa159 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 116aa15c mov dword ptr [ebp - 0x44], edx */
  w32((uint32_t)(EBP + -0x44), (EDX));
  /* 116aa15f jmp 0x116aa18d */
  goto L_116aa18d;
L_116aa161:;
  /* 116aa161 cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa165 je 0x116aa18d */
  if (C.zf) goto L_116aa18d;
  /* 116aa167 mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 116aa16d mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 116aa173 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 116aa176 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116aa17b mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116aa17e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116aa181 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116aa184 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 116aa187 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 116aa18a mov dword ptr [ebp - 0x44], edx */
  w32((uint32_t)(EBP + -0x44), (EDX));
L_116aa18d:;
  /* 116aa18d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aa190 mov cx, word ptr [ebp - 0x48] */
  CX = (r16((uint32_t)(EBP + -0x48)));
  /* 116aa194 mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 116aa197 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aa19a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116aa19d mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 116aa1a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aa1a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116aa1a6 mov dword ptr [ecx + 6], edx */
  w32((uint32_t)(ECX + 0x6), (EDX));
  /* 116aa1a9 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 116aa1ac and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116aa1b1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116aa1b4 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116aa1ba or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 116aa1bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aa1bf mov word ptr [edx + 0xa], ax */
  w16((uint32_t)(EDX + 0xa), (AX));
  /* 116aa1c3 mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 116aa1c6 mov esp, ebp */
  ESP = (EBP);
  /* 116aa1c8 pop ebp */
  EBP = (pop32());
  /* 116aa1c9 ret  */
  ESPCHK(0x116a97b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a2e0 @ 0x116aa2e0 (79 bytes, 33 insns) */
void f_116aa2e0(void) {
  FTRACE(0x116aa2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116aa2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 116aa2e1 mov ebp, esp */
  EBP = (ESP);
  /* 116aa2e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116aa2e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 116aa2e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 116aa2ea push 0 */
  push32((uint32_t)(0x0u));
  /* 116aa2ec mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116aa2ef push eax */
  push32((uint32_t)(EAX));
  /* 116aa2f0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116aa2f3 push ecx */
  push32((uint32_t)(ECX));
  /* 116aa2f4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116aa2f7 push edx */
  push32((uint32_t)(EDX));
  /* 116aa2f8 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 116aa2fb push eax */
  push32((uint32_t)(EAX));
  /* 116aa2fc call 0x116a97b0 */
  push32(0x116aa301u); f_116a97b0();
  /* 116aa301 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa304 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116aa307 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aa30a push ecx */
  push32((uint32_t)(ECX));
  /* 116aa30b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 116aa30e push edx */
  push32((uint32_t)(EDX));
  /* 116aa30f call 0x116a20d0 */
  push32(0x116aa314u); f_116a20d0();
  /* 116aa314 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa317 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116aa31a cmp dword ptr [ebp - 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa31e jne 0x116aa328 */
  if (!C.zf) goto L_116aa328;
  /* 116aa320 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aa323 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 116aa325 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_116aa328:;
  /* 116aa328 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116aa32b mov esp, ebp */
  ESP = (EBP);
  /* 116aa32d pop ebp */
  EBP = (pop32());
  /* 116aa32e ret  */
  ESPCHK(0x116aa2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a330 @ 0x116aa330 (1302 bytes, 386 insns) */
void f_116aa330(void) {
  FTRACE(0x116aa330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116aa330 push ebp */
  push32((uint32_t)(EBP));
  /* 116aa331 mov ebp, esp */
  EBP = (ESP);
  /* 116aa333 sub esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116aa336 mov word ptr [ebp - 0x64], 0x4d10 */
  w16((uint32_t)(EBP + -0x64), (0x4d10u));
  /* 116aa33c mov word ptr [ebp - 0x3c], 0x4d */
  w16((uint32_t)(EBP + -0x3c), (0x4du));
  /* 116aa342 mov word ptr [ebp - 0x60], 0x9a */
  w16((uint32_t)(EBP + -0x60), (0x9au));
  /* 116aa348 mov dword ptr [ebp - 0x20], 0x134312f4 */
  w32((uint32_t)(EBP + -0x20), (0x134312f4u));
  /* 116aa34f mov byte ptr [ebp - 0x54], 0xcc */
  w8((uint32_t)(EBP + -0x54), (0xccu));
  /* 116aa353 mov byte ptr [ebp - 0x53], 0xcc */
  w8((uint32_t)(EBP + -0x53), (0xccu));
  /* 116aa357 mov byte ptr [ebp - 0x52], 0xcc */
  w8((uint32_t)(EBP + -0x52), (0xccu));
  /* 116aa35b mov byte ptr [ebp - 0x51], 0xcc */
  w8((uint32_t)(EBP + -0x51), (0xccu));
  /* 116aa35f mov byte ptr [ebp - 0x50], 0xcc */
  w8((uint32_t)(EBP + -0x50), (0xccu));
  /* 116aa363 mov byte ptr [ebp - 0x4f], 0xcc */
  w8((uint32_t)(EBP + -0x4f), (0xccu));
  /* 116aa367 mov byte ptr [ebp - 0x4e], 0xcc */
  w8((uint32_t)(EBP + -0x4e), (0xccu));
  /* 116aa36b mov byte ptr [ebp - 0x4d], 0xcc */
  w8((uint32_t)(EBP + -0x4d), (0xccu));
  /* 116aa36f mov byte ptr [ebp - 0x4c], 0xcc */
  w8((uint32_t)(EBP + -0x4c), (0xccu));
  /* 116aa373 mov byte ptr [ebp - 0x4b], 0xcc */
  w8((uint32_t)(EBP + -0x4b), (0xccu));
  /* 116aa377 mov byte ptr [ebp - 0x4a], 0xfb */
  w8((uint32_t)(EBP + -0x4a), (0xfbu));
  /* 116aa37b mov byte ptr [ebp - 0x49], 0x3f */
  w8((uint32_t)(EBP + -0x49), (0x3fu));
  /* 116aa37f mov dword ptr [ebp - 0x58], 1 */
  w32((uint32_t)(EBP + -0x58), (0x1u));
  /* 116aa386 mov ax, word ptr [ebp + 0x10] */
  AX = (r16((uint32_t)(EBP + 0x10)));
  /* 116aa38a mov word ptr [ebp - 0x70], ax */
  w16((uint32_t)(EBP + -0x70), (AX));
  /* 116aa38e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116aa391 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 116aa394 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aa397 mov dword ptr [ebp - 0x48], edx */
  w32((uint32_t)(EBP + -0x48), (EDX));
  /* 116aa39a mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 116aa39d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116aa3a2 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 116aa3a7 mov word ptr [ebp - 0x68], ax */
  w16((uint32_t)(EBP + -0x68), (AX));
  /* 116aa3ab mov cx, word ptr [ebp - 0x70] */
  CX = (r16((uint32_t)(EBP + -0x70)));
  /* 116aa3af and cx, 0x7fff */
  { uint32_t _r=(CX)&(0x7fffu); CX = (_r); fl_logic(_r,16); }
  /* 116aa3b4 mov word ptr [ebp - 0x70], cx */
  w16((uint32_t)(EBP + -0x70), (CX));
  /* 116aa3b8 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 116aa3bb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116aa3c1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116aa3c3 je 0x116aa3ce */
  if (C.zf) goto L_116aa3ce;
  /* 116aa3c5 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa3c8 mov byte ptr [eax + 2], 0x2d */
  w8((uint32_t)(EAX + 0x2), (0x2du));
  /* 116aa3cc jmp 0x116aa3d5 */
  goto L_116aa3d5;
L_116aa3ce:;
  /* 116aa3ce mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa3d1 mov byte ptr [ecx + 2], 0x20 */
  w8((uint32_t)(ECX + 0x2), (0x20u));
L_116aa3d5:;
  /* 116aa3d5 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 116aa3d8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116aa3de test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116aa3e0 jne 0x116aa41c */
  if (!C.zf) goto L_116aa41c;
  /* 116aa3e2 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa3e6 jne 0x116aa41c */
  if (!C.zf) goto L_116aa41c;
  /* 116aa3e8 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa3ec jne 0x116aa41c */
  if (!C.zf) goto L_116aa41c;
  /* 116aa3ee mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa3f1 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 116aa3f6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa3f9 mov byte ptr [ecx + 2], 0x20 */
  w8((uint32_t)(ECX + 0x2), (0x20u));
  /* 116aa3fd mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa400 mov byte ptr [edx + 3], 1 */
  w8((uint32_t)(EDX + 0x3), (0x1u));
  /* 116aa404 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa407 mov byte ptr [eax + 4], 0x30 */
  w8((uint32_t)(EAX + 0x4), (0x30u));
  /* 116aa40b mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa40e mov byte ptr [ecx + 5], 0 */
  w8((uint32_t)(ECX + 0x5), (0x0u));
  /* 116aa412 mov eax, 1 */
  EAX = (0x1u);
  /* 116aa417 jmp 0x116aa842 */
  goto L_116aa842;
L_116aa41c:;
  /* 116aa41c mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 116aa41f and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116aa425 cmp edx, 0x7fff */
  { uint32_t _a=(EDX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa42b jne 0x116aa516 */
  if (!C.zf) goto L_116aa516;
  /* 116aa431 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa434 mov word ptr [eax], 1 */
  w16((uint32_t)(EAX), (0x1u));
  /* 116aa439 cmp dword ptr [ebp - 0x24], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa440 jne 0x116aa448 */
  if (!C.zf) goto L_116aa448;
  /* 116aa442 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa446 je 0x116aa47c */
  if (C.zf) goto L_116aa47c;
L_116aa448:;
  /* 116aa448 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116aa44b and ecx, 0x40000000 */
  { uint32_t _r=(ECX)&(0x40000000u); ECX = (_r); fl_logic(_r,32); }
  /* 116aa451 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116aa453 jne 0x116aa47c */
  if (!C.zf) goto L_116aa47c;
  /* 116aa455 push 0x116cb9e8 */
  push32((uint32_t)(0x116cb9e8u));
  /* 116aa45a mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa45d add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa460 push edx */
  push32((uint32_t)(EDX));
  /* 116aa461 call 0x1169a7d0 */
  push32(0x116aa466u); f_1169a7d0();
  /* 116aa466 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa469 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa46c mov byte ptr [eax + 3], 6 */
  w8((uint32_t)(EAX + 0x3), (0x6u));
  /* 116aa470 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 116aa477 jmp 0x116aa511 */
  goto L_116aa511;
L_116aa47c:;
  /* 116aa47c mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 116aa47f and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116aa485 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116aa487 je 0x116aa4bc */
  if (C.zf) goto L_116aa4bc;
  /* 116aa489 cmp dword ptr [ebp - 0x24], 0xc0000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa490 jne 0x116aa4bc */
  if (!C.zf) goto L_116aa4bc;
  /* 116aa492 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa496 jne 0x116aa4bc */
  if (!C.zf) goto L_116aa4bc;
  /* 116aa498 push 0x116cb9e0 */
  push32((uint32_t)(0x116cb9e0u));
  /* 116aa49d mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa4a0 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa4a3 push edx */
  push32((uint32_t)(EDX));
  /* 116aa4a4 call 0x1169a7d0 */
  push32(0x116aa4a9u); f_1169a7d0();
  /* 116aa4a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa4ac mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa4af mov byte ptr [eax + 3], 5 */
  w8((uint32_t)(EAX + 0x3), (0x5u));
  /* 116aa4b3 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 116aa4ba jmp 0x116aa511 */
  goto L_116aa511;
L_116aa4bc:;
  /* 116aa4bc cmp dword ptr [ebp - 0x24], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa4c3 jne 0x116aa4ef */
  if (!C.zf) goto L_116aa4ef;
  /* 116aa4c5 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa4c9 jne 0x116aa4ef */
  if (!C.zf) goto L_116aa4ef;
  /* 116aa4cb push 0x116cb9d8 */
  push32((uint32_t)(0x116cb9d8u));
  /* 116aa4d0 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa4d3 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa4d6 push ecx */
  push32((uint32_t)(ECX));
  /* 116aa4d7 call 0x1169a7d0 */
  push32(0x116aa4dcu); f_1169a7d0();
  /* 116aa4dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa4df mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa4e2 mov byte ptr [edx + 3], 5 */
  w8((uint32_t)(EDX + 0x3), (0x5u));
  /* 116aa4e6 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 116aa4ed jmp 0x116aa511 */
  goto L_116aa511;
L_116aa4ef:;
  /* 116aa4ef push 0x116cb9d0 */
  push32((uint32_t)(0x116cb9d0u));
  /* 116aa4f4 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa4f7 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa4fa push eax */
  push32((uint32_t)(EAX));
  /* 116aa4fb call 0x1169a7d0 */
  push32(0x116aa500u); f_1169a7d0();
  /* 116aa500 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa503 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa506 mov byte ptr [ecx + 3], 6 */
  w8((uint32_t)(ECX + 0x3), (0x6u));
  /* 116aa50a mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
L_116aa511:;
  /* 116aa511 jmp 0x116aa83f */
  goto L_116aa83f;
L_116aa516:;
  /* 116aa516 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 116aa519 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116aa51f sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 116aa522 mov word ptr [ebp - 0x6c], dx */
  w16((uint32_t)(EBP + -0x6c), (DX));
  /* 116aa526 mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 116aa529 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116aa52e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116aa533 mov word ptr [ebp - 0xc], ax */
  w16((uint32_t)(EBP + -0xc), (AX));
  /* 116aa537 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116aa53a shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 116aa53d mov word ptr [ebp - 0x40], cx */
  w16((uint32_t)(EBP + -0x40), (CX));
  /* 116aa541 mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 116aa544 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116aa54a mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 116aa54d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116aa552 imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116aa555 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116aa558 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116aa55e mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 116aa561 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116aa566 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116aa569 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa56b mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 116aa56e and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116aa574 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 116aa577 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116aa57c imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116aa57f add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa581 sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116aa584 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116aa587 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116aa58a sar ecx, 0x10 */
  ECX = (sh_sar((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 116aa58d mov word ptr [ebp - 0x5c], cx */
  w16((uint32_t)(EBP + -0x5c), (CX));
  /* 116aa591 mov dx, word ptr [ebp - 0x70] */
  DX = (r16((uint32_t)(EBP + -0x70)));
  /* 116aa595 mov word ptr [ebp - 0x2e], dx */
  w16((uint32_t)(EBP + -0x2e), (DX));
  /* 116aa599 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116aa59c mov dword ptr [ebp - 0x32], eax */
  w32((uint32_t)(EBP + -0x32), (EAX));
  /* 116aa59f mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 116aa5a2 mov dword ptr [ebp - 0x36], ecx */
  w32((uint32_t)(EBP + -0x36), (ECX));
  /* 116aa5a5 mov word ptr [ebp - 0x38], 0 */
  w16((uint32_t)(EBP + -0x38), (0x0u));
  /* 116aa5ab push 1 */
  push32((uint32_t)(0x1u));
  /* 116aa5ad movsx edx, word ptr [ebp - 0x5c] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x5c))));
  /* 116aa5b1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 116aa5b3 push edx */
  push32((uint32_t)(EDX));
  /* 116aa5b4 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 116aa5b7 push eax */
  push32((uint32_t)(EAX));
  /* 116aa5b8 call 0x116ade70 */
  push32(0x116aa5bdu); f_116ade70();
  /* 116aa5bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa5c0 mov ecx, dword ptr [ebp - 0x2e] */
  ECX = (r32((uint32_t)(EBP + -0x2e)));
  /* 116aa5c3 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116aa5c9 cmp ecx, 0x3fff */
  { uint32_t _a=(ECX),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa5cf jl 0x116aa5ed */
  if ((C.sf!=C.of)) goto L_116aa5ed;
  /* 116aa5d1 mov dx, word ptr [ebp - 0x5c] */
  DX = (r16((uint32_t)(EBP + -0x5c)));
  /* 116aa5d5 add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 116aa5d9 mov word ptr [ebp - 0x5c], dx */
  w16((uint32_t)(EBP + -0x5c), (DX));
  /* 116aa5dd lea eax, [ebp - 0x54] */
  EAX = ((uint32_t)(EBP + -0x54));
  /* 116aa5e0 push eax */
  push32((uint32_t)(EAX));
  /* 116aa5e1 lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 116aa5e4 push ecx */
  push32((uint32_t)(ECX));
  /* 116aa5e5 call 0x116ada30 */
  push32(0x116aa5eau); f_116ada30();
  /* 116aa5ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116aa5ed:;
  /* 116aa5ed mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa5f0 mov ax, word ptr [ebp - 0x5c] */
  AX = (r16((uint32_t)(EBP + -0x5c)));
  /* 116aa5f4 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 116aa5f7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116aa5fa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116aa5fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116aa5ff je 0x116aa641 */
  if (C.zf) goto L_116aa641;
  /* 116aa601 movsx edx, word ptr [ebp - 0x5c] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x5c))));
  /* 116aa605 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116aa608 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa60a mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
  /* 116aa60d cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa611 jg 0x116aa641 */
  if ((!C.zf&&C.sf==C.of)) goto L_116aa641;
  /* 116aa613 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa616 mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 116aa61b mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa61e mov byte ptr [edx + 2], 0x20 */
  w8((uint32_t)(EDX + 0x2), (0x20u));
  /* 116aa622 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa625 mov byte ptr [eax + 3], 1 */
  w8((uint32_t)(EAX + 0x3), (0x1u));
  /* 116aa629 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa62c mov byte ptr [ecx + 4], 0x30 */
  w8((uint32_t)(ECX + 0x4), (0x30u));
  /* 116aa630 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa633 mov byte ptr [edx + 5], 0 */
  w8((uint32_t)(EDX + 0x5), (0x0u));
  /* 116aa637 mov eax, 1 */
  EAX = (0x1u);
  /* 116aa63c jmp 0x116aa842 */
  goto L_116aa842;
L_116aa641:;
  /* 116aa641 cmp dword ptr [ebp + 0x14], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa645 jle 0x116aa64e */
  if ((C.zf||C.sf!=C.of)) goto L_116aa64e;
  /* 116aa647 mov dword ptr [ebp + 0x14], 0x15 */
  w32((uint32_t)(EBP + 0x14), (0x15u));
L_116aa64e:;
  /* 116aa64e mov eax, dword ptr [ebp - 0x2e] */
  EAX = (r32((uint32_t)(EBP + -0x2e)));
  /* 116aa651 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116aa656 sub eax, 0x3ffe */
  { uint32_t _a=(EAX),_b=(0x3ffeu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116aa65b mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 116aa65e mov word ptr [ebp - 0x2e], 0 */
  w16((uint32_t)(EBP + -0x2e), (0x0u));
  /* 116aa664 mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 116aa66b jmp 0x116aa676 */
  goto L_116aa676;
L_116aa66d:;
  /* 116aa66d mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 116aa670 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa673 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
L_116aa676:;
  /* 116aa676 cmp dword ptr [ebp - 0x44], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x44))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa67a jge 0x116aa68a */
  if ((C.sf==C.of)) goto L_116aa68a;
  /* 116aa67c lea edx, [ebp - 0x38] */
  EDX = ((uint32_t)(EBP + -0x38));
  /* 116aa67f push edx */
  push32((uint32_t)(EDX));
  /* 116aa680 call 0x116a95a0 */
  push32(0x116aa685u); f_116a95a0();
  /* 116aa685 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa688 jmp 0x116aa66d */
  goto L_116aa66d;
L_116aa68a:;
  /* 116aa68a cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa68e jge 0x116aa6bc */
  if ((C.sf==C.of)) goto L_116aa6bc;
  /* 116aa690 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116aa693 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116aa695 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116aa69a mov dword ptr [ebp - 0x74], eax */
  w32((uint32_t)(EBP + -0x74), (EAX));
  /* 116aa69d jmp 0x116aa6a8 */
  goto L_116aa6a8;
L_116aa69f:;
  /* 116aa69f mov ecx, dword ptr [ebp - 0x74] */
  ECX = (r32((uint32_t)(EBP + -0x74)));
  /* 116aa6a2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116aa6a5 mov dword ptr [ebp - 0x74], ecx */
  w32((uint32_t)(EBP + -0x74), (ECX));
L_116aa6a8:;
  /* 116aa6a8 cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa6ac jle 0x116aa6bc */
  if ((C.zf||C.sf!=C.of)) goto L_116aa6bc;
  /* 116aa6ae lea edx, [ebp - 0x38] */
  EDX = ((uint32_t)(EBP + -0x38));
  /* 116aa6b1 push edx */
  push32((uint32_t)(EDX));
  /* 116aa6b2 call 0x116a9600 */
  push32(0x116aa6b7u); f_116a9600();
  /* 116aa6b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa6ba jmp 0x116aa69f */
  goto L_116aa69f;
L_116aa6bc:;
  /* 116aa6bc mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa6bf add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa6c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116aa6c5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116aa6c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa6cb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 116aa6ce jmp 0x116aa6d9 */
  goto L_116aa6d9;
L_116aa6d0:;
  /* 116aa6d0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116aa6d3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116aa6d6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_116aa6d9:;
  /* 116aa6d9 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa6dd jle 0x116aa745 */
  if ((C.zf||C.sf!=C.of)) goto L_116aa745;
  /* 116aa6df mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 116aa6e2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 116aa6e5 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 116aa6e8 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 116aa6eb mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116aa6ee mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 116aa6f1 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 116aa6f4 push eax */
  push32((uint32_t)(EAX));
  /* 116aa6f5 call 0x116a95a0 */
  push32(0x116aa6fau); f_116a95a0();
  /* 116aa6fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa6fd lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 116aa700 push ecx */
  push32((uint32_t)(ECX));
  /* 116aa701 call 0x116a95a0 */
  push32(0x116aa706u); f_116a95a0();
  /* 116aa706 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa709 lea edx, [ebp - 0x1c] */
  EDX = ((uint32_t)(EBP + -0x1c));
  /* 116aa70c push edx */
  push32((uint32_t)(EDX));
  /* 116aa70d lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 116aa710 push eax */
  push32((uint32_t)(EAX));
  /* 116aa711 call 0x116a94f0 */
  push32(0x116aa716u); f_116a94f0();
  /* 116aa716 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa719 lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 116aa71c push ecx */
  push32((uint32_t)(ECX));
  /* 116aa71d call 0x116a95a0 */
  push32(0x116aa722u); f_116a95a0();
  /* 116aa722 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa725 mov edx, dword ptr [ebp - 0x2d] */
  EDX = (r32((uint32_t)(EBP + -0x2d)));
  /* 116aa728 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 116aa72e add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa731 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aa734 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 116aa736 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aa739 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa73c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116aa73f mov byte ptr [ebp - 0x2d], 0 */
  w8((uint32_t)(EBP + -0x2d), (0x0u));
  /* 116aa743 jmp 0x116aa6d0 */
  goto L_116aa6d0;
L_116aa745:;
  /* 116aa745 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aa748 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116aa74b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116aa74e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aa751 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116aa753 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 116aa756 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aa759 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116aa75c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116aa75f movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 116aa763 cmp eax, 0x35 */
  { uint32_t _a=(EAX),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa766 jl 0x116aa7c3 */
  if ((C.sf!=C.of)) goto L_116aa7c3;
  /* 116aa768 jmp 0x116aa773 */
  goto L_116aa773;
L_116aa76a:;
  /* 116aa76a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aa76d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116aa770 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116aa773:;
  /* 116aa773 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa776 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa779 cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa77c jb 0x116aa791 */
  if (C.cf) goto L_116aa791;
  /* 116aa77e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aa781 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116aa784 cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa787 jne 0x116aa791 */
  if (!C.zf) goto L_116aa791;
  /* 116aa789 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aa78c mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 116aa78f jmp 0x116aa76a */
  goto L_116aa76a;
L_116aa791:;
  /* 116aa791 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa794 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa797 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa79a jae 0x116aa7b5 */
  if (!C.cf) goto L_116aa7b5;
  /* 116aa79c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aa79f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa7a2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116aa7a5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa7a8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 116aa7ab add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 116aa7af mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa7b2 mov word ptr [ecx], ax */
  w16((uint32_t)(ECX), (AX));
L_116aa7b5:;
  /* 116aa7b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aa7b8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116aa7ba add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 116aa7bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aa7bf mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 116aa7c1 jmp 0x116aa81c */
  goto L_116aa81c;
L_116aa7c3:;
  /* 116aa7c3 jmp 0x116aa7ce */
  goto L_116aa7ce;
L_116aa7c5:;
  /* 116aa7c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aa7c8 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116aa7cb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116aa7ce:;
  /* 116aa7ce mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa7d1 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa7d4 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa7d7 jb 0x116aa7e6 */
  if (C.cf) goto L_116aa7e6;
  /* 116aa7d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aa7dc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116aa7df cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa7e2 jne 0x116aa7e6 */
  if (!C.zf) goto L_116aa7e6;
  /* 116aa7e4 jmp 0x116aa7c5 */
  goto L_116aa7c5;
L_116aa7e6:;
  /* 116aa7e6 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa7e9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa7ec cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa7ef jae 0x116aa81c */
  if (!C.cf) goto L_116aa81c;
  /* 116aa7f1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa7f4 mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 116aa7f9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa7fc mov byte ptr [edx + 2], 0x20 */
  w8((uint32_t)(EDX + 0x2), (0x20u));
  /* 116aa800 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa803 mov byte ptr [eax + 3], 1 */
  w8((uint32_t)(EAX + 0x3), (0x1u));
  /* 116aa807 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa80a mov byte ptr [ecx + 4], 0x30 */
  w8((uint32_t)(ECX + 0x4), (0x30u));
  /* 116aa80e mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa811 mov byte ptr [edx + 5], 0 */
  w8((uint32_t)(EDX + 0x5), (0x0u));
  /* 116aa815 mov eax, 1 */
  EAX = (0x1u);
  /* 116aa81a jmp 0x116aa842 */
  goto L_116aa842;
L_116aa81c:;
  /* 116aa81c mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa81f add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa822 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aa825 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116aa827 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa82a mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa82d mov byte ptr [edx + 3], cl */
  w8((uint32_t)(EDX + 0x3), (CL));
  /* 116aa830 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa833 movsx ecx, byte ptr [eax + 3] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x3))));
  /* 116aa837 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116aa83a mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
L_116aa83f:;
  /* 116aa83f mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
L_116aa842:;
  /* 116aa842 mov esp, ebp */
  ESP = (EBP);
  /* 116aa844 pop ebp */
  EBP = (pop32());
  /* 116aa845 ret  */
  ESPCHK(0x116aa330u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a850 @ 0x116aa850 (255 bytes, 88 insns) */
void f_116aa850(void) {
  FTRACE(0x116aa850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116aa850 push ebp */
  push32((uint32_t)(EBP));
  /* 116aa851 mov ebp, esp */
  EBP = (ESP);
  /* 116aa853 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_116aa856:;
  /* 116aa856 cmp dword ptr [0x116ce260], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116ce260))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa85d jle 0x116aa876 */
  if ((C.zf||C.sf!=C.of)) goto L_116aa876;
  /* 116aa85f push 8 */
  push32((uint32_t)(0x8u));
  /* 116aa861 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aa864 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116aa866 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116aa868 push ecx */
  push32((uint32_t)(ECX));
  /* 116aa869 call 0x116a17d0 */
  push32(0x116aa86eu); f_116a17d0();
  /* 116aa86e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa871 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116aa874 jmp 0x116aa88f */
  goto L_116aa88f;
L_116aa876:;
  /* 116aa876 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aa879 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116aa87b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116aa87d mov ecx, dword ptr [0x116ce26c] */
  ECX = (r32((uint32_t)(0x116ce26c)));
  /* 116aa883 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116aa885 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 116aa889 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 116aa88c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_116aa88f:;
  /* 116aa88f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa893 je 0x116aa8a0 */
  if (C.zf) goto L_116aa8a0;
  /* 116aa895 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aa898 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa89b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116aa89e jmp 0x116aa856 */
  goto L_116aa856;
L_116aa8a0:;
  /* 116aa8a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aa8a3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116aa8a5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116aa8a7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116aa8aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aa8ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa8b0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116aa8b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aa8b6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116aa8b9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa8bd je 0x116aa8c5 */
  if (C.zf) goto L_116aa8c5;
  /* 116aa8bf cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa8c3 jne 0x116aa8d8 */
  if (!C.zf) goto L_116aa8d8;
L_116aa8c5:;
  /* 116aa8c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aa8c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116aa8ca mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116aa8cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116aa8cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aa8d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa8d5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_116aa8d8:;
  /* 116aa8d8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_116aa8df:;
  /* 116aa8df cmp dword ptr [0x116ce260], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116ce260))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa8e6 jle 0x116aa8fb */
  if ((C.zf||C.sf!=C.of)) goto L_116aa8fb;
  /* 116aa8e8 push 4 */
  push32((uint32_t)(0x4u));
  /* 116aa8ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aa8ed push edx */
  push32((uint32_t)(EDX));
  /* 116aa8ee call 0x116a17d0 */
  push32(0x116aa8f3u); f_116a17d0();
  /* 116aa8f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa8f6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116aa8f9 jmp 0x116aa910 */
  goto L_116aa910;
L_116aa8fb:;
  /* 116aa8fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aa8fe mov ecx, dword ptr [0x116ce26c] */
  ECX = (r32((uint32_t)(0x116ce26c)));
  /* 116aa904 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116aa906 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 116aa90a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 116aa90d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_116aa910:;
  /* 116aa910 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa914 je 0x116aa93b */
  if (C.zf) goto L_116aa93b;
  /* 116aa916 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116aa919 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116aa91c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aa91f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 116aa923 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116aa926 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aa929 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116aa92b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116aa92d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116aa930 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aa933 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa936 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 116aa939 jmp 0x116aa8df */
  goto L_116aa8df;
L_116aa93b:;
  /* 116aa93b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa93f jne 0x116aa948 */
  if (!C.zf) goto L_116aa948;
  /* 116aa941 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116aa944 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116aa946 jmp 0x116aa94b */
  goto L_116aa94b;
L_116aa948:;
  /* 116aa948 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_116aa94b:;
  /* 116aa94b mov esp, ebp */
  ESP = (EBP);
  /* 116aa94d pop ebp */
  EBP = (pop32());
  /* 116aa94e ret  */
  ESPCHK(0x116aa850u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a950 @ 0x116aa950 (17 bytes, 8 insns) */
void f_116aa950(void) {
  FTRACE(0x116aa950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116aa950 push ebp */
  push32((uint32_t)(EBP));
  /* 116aa951 mov ebp, esp */
  EBP = (ESP);
  /* 116aa953 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aa956 push eax */
  push32((uint32_t)(EAX));
  /* 116aa957 call 0x116aa850 */
  push32(0x116aa95cu); f_116aa850();
  /* 116aa95c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa95f pop ebp */
  EBP = (pop32());
  /* 116aa960 ret  */
  ESPCHK(0x116aa950u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a970 @ 0x116aa970 (297 bytes, 106 insns) */
void f_116aa970(void) {
  FTRACE(0x116aa970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116aa970 push ebp */
  push32((uint32_t)(EBP));
  /* 116aa971 mov ebp, esp */
  EBP = (ESP);
  /* 116aa973 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116aa976 push esi */
  push32((uint32_t)(ESI));
L_116aa977:;
  /* 116aa977 cmp dword ptr [0x116ce260], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116ce260))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa97e jle 0x116aa997 */
  if ((C.zf||C.sf!=C.of)) goto L_116aa997;
  /* 116aa980 push 8 */
  push32((uint32_t)(0x8u));
  /* 116aa982 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aa985 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116aa987 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116aa989 push ecx */
  push32((uint32_t)(ECX));
  /* 116aa98a call 0x116a17d0 */
  push32(0x116aa98fu); f_116a17d0();
  /* 116aa98f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa992 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116aa995 jmp 0x116aa9b0 */
  goto L_116aa9b0;
L_116aa997:;
  /* 116aa997 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aa99a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116aa99c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116aa99e mov ecx, dword ptr [0x116ce26c] */
  ECX = (r32((uint32_t)(0x116ce26c)));
  /* 116aa9a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116aa9a6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 116aa9aa and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 116aa9ad mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_116aa9b0:;
  /* 116aa9b0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa9b4 je 0x116aa9c1 */
  if (C.zf) goto L_116aa9c1;
  /* 116aa9b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aa9b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa9bc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116aa9bf jmp 0x116aa977 */
  goto L_116aa977;
L_116aa9c1:;
  /* 116aa9c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aa9c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116aa9c6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116aa9c8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116aa9cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aa9ce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa9d1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116aa9d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aa9d7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 116aa9da cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa9de je 0x116aa9e6 */
  if (C.zf) goto L_116aa9e6;
  /* 116aa9e0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aa9e4 jne 0x116aa9f9 */
  if (!C.zf) goto L_116aa9f9;
L_116aa9e6:;
  /* 116aa9e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aa9e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116aa9eb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116aa9ed mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116aa9f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aa9f3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aa9f6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_116aa9f9:;
  /* 116aa9f9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 116aaa00 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_116aaa07:;
  /* 116aaa07 cmp dword ptr [0x116ce260], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116ce260))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aaa0e jle 0x116aaa23 */
  if ((C.zf||C.sf!=C.of)) goto L_116aaa23;
  /* 116aaa10 push 4 */
  push32((uint32_t)(0x4u));
  /* 116aaa12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aaa15 push edx */
  push32((uint32_t)(EDX));
  /* 116aaa16 call 0x116a17d0 */
  push32(0x116aaa1bu); f_116a17d0();
  /* 116aaa1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aaa1e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116aaa21 jmp 0x116aaa38 */
  goto L_116aaa38;
L_116aaa23:;
  /* 116aaa23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aaa26 mov ecx, dword ptr [0x116ce26c] */
  ECX = (r32((uint32_t)(0x116ce26c)));
  /* 116aaa2c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116aaa2e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 116aaa32 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 116aaa35 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_116aaa38:;
  /* 116aaa38 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aaa3c je 0x116aaa79 */
  if (C.zf) goto L_116aaa79;
  /* 116aaa3e push 0 */
  push32((uint32_t)(0x0u));
  /* 116aaa40 push 0xa */
  push32((uint32_t)(0xau));
  /* 116aaa42 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116aaa45 push eax */
  push32((uint32_t)(EAX));
  /* 116aaa46 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aaa49 push ecx */
  push32((uint32_t)(ECX));
  /* 116aaa4a call 0x116adf40 */
  push32(0x116aaa4fu); f_116adf40();
  /* 116aaa4f mov ecx, eax */
  ECX = (EAX);
  /* 116aaa51 mov esi, edx */
  ESI = (EDX);
  /* 116aaa53 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aaa56 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116aaa59 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116aaa5a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aaa5c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 116aaa5e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116aaa61 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 116aaa64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aaa67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116aaa69 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116aaa6b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116aaa6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aaa71 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aaa74 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 116aaa77 jmp 0x116aaa07 */
  goto L_116aaa07;
L_116aaa79:;
  /* 116aaa79 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aaa7d jne 0x116aaa8e */
  if (!C.zf) goto L_116aaa8e;
  /* 116aaa7f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aaa82 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116aaa84 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116aaa87 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aaa8a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 116aaa8c jmp 0x116aaa94 */
  goto L_116aaa94;
L_116aaa8e:;
  /* 116aaa8e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aaa91 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_116aaa94:;
  /* 116aaa94 pop esi */
  ESI = (pop32());
  /* 116aaa95 mov esp, ebp */
  ESP = (EBP);
  /* 116aaa97 pop ebp */
  EBP = (pop32());
  /* 116aaa98 ret  */
  ESPCHK(0x116aa970u, _esp0);
  ESP += 4; return;
}

/* FUN_1001aaa0 @ 0x116aaaa0 (46 bytes, 18 insns) */
void f_116aaaa0(void) {
  FTRACE(0x116aaaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116aaaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 116aaaa1 mov ebp, esp */
  EBP = (ESP);
  /* 116aaaa3 push ecx */
  push32((uint32_t)(ECX));
  /* 116aaaa4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 116aaaa6 call 0x1169c120 */
  push32(0x116aaaabu); f_1169c120();
  /* 116aaaab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aaaae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aaab1 push eax */
  push32((uint32_t)(EAX));
  /* 116aaab2 call 0x116aaad0 */
  push32(0x116aaab7u); f_116aaad0();
  /* 116aaab7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aaaba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116aaabd push 0xc */
  push32((uint32_t)(0xcu));
  /* 116aaabf call 0x1169c1c0 */
  push32(0x116aaac4u); f_1169c1c0();
  /* 116aaac4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aaac7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aaaca mov esp, ebp */
  ESP = (EBP);
  /* 116aaacc pop ebp */
  EBP = (pop32());
  /* 116aaacd ret  */
  ESPCHK(0x116aaaa0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x116aaad0 (198 bytes, 69 insns) */
void f_116aaad0(void) {
  FTRACE(0x116aaad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116aaad0 push ebp */
  push32((uint32_t)(EBP));
  /* 116aaad1 mov ebp, esp */
  EBP = (ESP);
  /* 116aaad3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116aaad6 mov eax, dword ptr [0x116d05ec] */
  EAX = (r32((uint32_t)(0x116d05ec)));
  /* 116aaadb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116aaade cmp dword ptr [0x116d2040], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d2040))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aaae5 jne 0x116aaaee */
  if (!C.zf) goto L_116aaaee;
  /* 116aaae7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116aaae9 jmp 0x116aab92 */
  goto L_116aab92;
L_116aaaee:;
  /* 116aaaee cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aaaf2 jne 0x116aab16 */
  if (!C.zf) goto L_116aab16;
  /* 116aaaf4 cmp dword ptr [0x116d05f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d05f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aaafb je 0x116aab16 */
  if (C.zf) goto L_116aab16;
  /* 116aaafd call 0x116adfd0 */
  push32(0x116aab02u); f_116adfd0();
  /* 116aab02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116aab04 je 0x116aab0d */
  if (C.zf) goto L_116aab0d;
  /* 116aab06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116aab08 jmp 0x116aab92 */
  goto L_116aab92;
L_116aab0d:;
  /* 116aab0d mov ecx, dword ptr [0x116d05ec] */
  ECX = (r32((uint32_t)(0x116d05ec)));
  /* 116aab13 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_116aab16:;
  /* 116aab16 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aab1a je 0x116aab90 */
  if (C.zf) goto L_116aab90;
  /* 116aab1c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aab20 je 0x116aab90 */
  if (C.zf) goto L_116aab90;
  /* 116aab22 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aab25 push edx */
  push32((uint32_t)(EDX));
  /* 116aab26 call 0x116a07b0 */
  push32(0x116aab2bu); f_116a07b0();
  /* 116aab2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aab2e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116aab31:;
  /* 116aab31 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116aab34 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aab37 je 0x116aab90 */
  if (C.zf) goto L_116aab90;
  /* 116aab39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116aab3c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116aab3e push edx */
  push32((uint32_t)(EDX));
  /* 116aab3f call 0x116a07b0 */
  push32(0x116aab44u); f_116a07b0();
  /* 116aab44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aab47 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aab4a jbe 0x116aab85 */
  if ((C.cf||C.zf)) goto L_116aab85;
  /* 116aab4c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116aab4f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116aab51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aab54 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 116aab58 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aab5b jne 0x116aab85 */
  if (!C.zf) goto L_116aab85;
  /* 116aab5d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aab60 push ecx */
  push32((uint32_t)(ECX));
  /* 116aab61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aab64 push edx */
  push32((uint32_t)(EDX));
  /* 116aab65 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116aab68 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116aab6a push ecx */
  push32((uint32_t)(ECX));
  /* 116aab6b call 0x116adf80 */
  push32(0x116aab70u); f_116adf80();
  /* 116aab70 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aab73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116aab75 jne 0x116aab85 */
  if (!C.zf) goto L_116aab85;
  /* 116aab77 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116aab7a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116aab7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aab7f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 116aab83 jmp 0x116aab92 */
  goto L_116aab92;
L_116aab85:;
  /* 116aab85 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116aab88 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aab8b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116aab8e jmp 0x116aab31 */
  goto L_116aab31;
L_116aab90:;
  /* 116aab90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116aab92:;
  /* 116aab92 mov esp, ebp */
  ESP = (EBP);
  /* 116aab94 pop ebp */
  EBP = (pop32());
  /* 116aab95 ret  */
  ESPCHK(0x116aaad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001aba0 @ 0x116aaba0 (130 bytes, 43 insns) */
void f_116aaba0(void) {
  FTRACE(0x116aaba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116aaba0 push ebp */
  push32((uint32_t)(EBP));
  /* 116aaba1 mov ebp, esp */
  EBP = (ESP);
  /* 116aaba3 push ecx */
  push32((uint32_t)(ECX));
  /* 116aaba4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aaba7 cmp eax, dword ptr [0x116d203c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x116d203c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aabad jae 0x116aabd1 */
  if (!C.cf) goto L_116aabd1;
  /* 116aabaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aabb2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116aabb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aabb8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 116aabbb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116aabbe mov eax, dword ptr [ecx*4 + 0x116d1f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x116d1f00)));
  /* 116aabc5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 116aabca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116aabcd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116aabcf jne 0x116aabec */
  if (!C.zf) goto L_116aabec;
L_116aabd1:;
  /* 116aabd1 call 0x116a77c0 */
  push32(0x116aabd6u); f_116a77c0();
  /* 116aabd6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 116aabdc call 0x116a77d0 */
  push32(0x116aabe1u); f_116a77d0();
  /* 116aabe1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 116aabe7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116aabea jmp 0x116aac1e */
  goto L_116aac1e;
L_116aabec:;
  /* 116aabec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aabef push edx */
  push32((uint32_t)(EDX));
  /* 116aabf0 call 0x116ae590 */
  push32(0x116aabf5u); f_116ae590();
  /* 116aabf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aabf8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116aabfb push eax */
  push32((uint32_t)(EAX));
  /* 116aabfc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116aabff push ecx */
  push32((uint32_t)(ECX));
  /* 116aac00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aac03 push edx */
  push32((uint32_t)(EDX));
  /* 116aac04 call 0x116aac30 */
  push32(0x116aac09u); f_116aac30();
  /* 116aac09 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aac0c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116aac0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aac12 push eax */
  push32((uint32_t)(EAX));
  /* 116aac13 call 0x116ae620 */
  push32(0x116aac18u); f_116ae620();
  /* 116aac18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aac1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_116aac1e:;
  /* 116aac1e mov esp, ebp */
  ESP = (EBP);
  /* 116aac20 pop ebp */
  EBP = (pop32());
  /* 116aac21 ret  */
  ESPCHK(0x116aaba0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ac30 @ 0x116aac30 (178 bytes, 56 insns) */
void f_116aac30(void) {
  FTRACE(0x116aac30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116aac30 push ebp */
  push32((uint32_t)(EBP));
  /* 116aac31 mov ebp, esp */
  EBP = (ESP);
  /* 116aac33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116aac36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aac39 push eax */
  push32((uint32_t)(EAX));
  /* 116aac3a call 0x116ae410 */
  push32(0x116aac3fu); f_116ae410();
  /* 116aac3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aac42 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116aac45 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aac49 jne 0x116aac5e */
  if (!C.zf) goto L_116aac5e;
  /* 116aac4b call 0x116a77c0 */
  push32(0x116aac50u); f_116a77c0();
  /* 116aac50 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 116aac56 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116aac59 jmp 0x116aacde */
  goto L_116aacde;
L_116aac5e:;
  /* 116aac5e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116aac61 push ecx */
  push32((uint32_t)(ECX));
  /* 116aac62 push 0 */
  push32((uint32_t)(0x0u));
  /* 116aac64 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116aac67 push edx */
  push32((uint32_t)(EDX));
  /* 116aac68 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aac6b push eax */
  push32((uint32_t)(EAX));
  /* 116aac6c call dword ptr [0x116d3364] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3364))), 0x116aac72u);
  /* 116aac72 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116aac75 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aac79 jne 0x116aac86 */
  if (!C.zf) goto L_116aac86;
  /* 116aac7b call dword ptr [0x116d33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33e8))), 0x116aac81u);
  /* 116aac81 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116aac84 jmp 0x116aac8d */
  goto L_116aac8d;
L_116aac86:;
  /* 116aac86 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_116aac8d:;
  /* 116aac8d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aac91 je 0x116aaca4 */
  if (C.zf) goto L_116aaca4;
  /* 116aac93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aac96 push ecx */
  push32((uint32_t)(ECX));
  /* 116aac97 call 0x116a7720 */
  push32(0x116aac9cu); f_116a7720();
  /* 116aac9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aac9f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116aaca2 jmp 0x116aacde */
  goto L_116aacde;
L_116aaca4:;
  /* 116aaca4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aaca7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 116aacaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aacad and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 116aacb0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116aacb3 mov ecx, dword ptr [edx*4 + 0x116d1f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x116d1f00)));
  /* 116aacba mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 116aacbe and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 116aacc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aacc4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116aacc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aacca and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 116aaccd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116aacd0 mov eax, dword ptr [eax*4 + 0x116d1f00] */
  EAX = (r32((uint32_t)(EAX*4 + 0x116d1f00)));
  /* 116aacd7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 116aacdb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_116aacde:;
  /* 116aacde mov esp, ebp */
  ESP = (EBP);
  /* 116aace0 pop ebp */
  EBP = (pop32());
  /* 116aace1 ret  */
  ESPCHK(0x116aac30u, _esp0);
  ESP += 4; return;
}

/* FUN_1001acf0 @ 0x116aacf0 (130 bytes, 43 insns) */
void f_116aacf0(void) {
  FTRACE(0x116aacf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116aacf0 push ebp */
  push32((uint32_t)(EBP));
  /* 116aacf1 mov ebp, esp */
  EBP = (ESP);
  /* 116aacf3 push ecx */
  push32((uint32_t)(ECX));
  /* 116aacf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aacf7 cmp eax, dword ptr [0x116d203c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x116d203c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aacfd jae 0x116aad21 */
  if (!C.cf) goto L_116aad21;
  /* 116aacff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aad02 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116aad05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aad08 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 116aad0b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116aad0e mov eax, dword ptr [ecx*4 + 0x116d1f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x116d1f00)));
  /* 116aad15 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 116aad1a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116aad1d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116aad1f jne 0x116aad3c */
  if (!C.zf) goto L_116aad3c;
L_116aad21:;
  /* 116aad21 call 0x116a77c0 */
  push32(0x116aad26u); f_116a77c0();
  /* 116aad26 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 116aad2c call 0x116a77d0 */
  push32(0x116aad31u); f_116a77d0();
  /* 116aad31 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 116aad37 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116aad3a jmp 0x116aad6e */
  goto L_116aad6e;
L_116aad3c:;
  /* 116aad3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aad3f push edx */
  push32((uint32_t)(EDX));
  /* 116aad40 call 0x116ae590 */
  push32(0x116aad45u); f_116ae590();
  /* 116aad45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aad48 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116aad4b push eax */
  push32((uint32_t)(EAX));
  /* 116aad4c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116aad4f push ecx */
  push32((uint32_t)(ECX));
  /* 116aad50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aad53 push edx */
  push32((uint32_t)(EDX));
  /* 116aad54 call 0x116aad80 */
  push32(0x116aad59u); f_116aad80();
  /* 116aad59 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aad5c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116aad5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aad62 push eax */
  push32((uint32_t)(EAX));
  /* 116aad63 call 0x116ae620 */
  push32(0x116aad68u); f_116ae620();
  /* 116aad68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aad6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_116aad6e:;
  /* 116aad6e mov esp, ebp */
  ESP = (EBP);
  /* 116aad70 pop ebp */
  EBP = (pop32());
  /* 116aad71 ret  */
  ESPCHK(0x116aacf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ad80 @ 0x116aad80 (627 bytes, 182 insns) */
void f_116aad80(void) {
  FTRACE(0x116aad80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116aad80 push ebp */
  push32((uint32_t)(EBP));
  /* 116aad81 mov ebp, esp */
  EBP = (ESP);
  /* 116aad83 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116aad89 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 116aad90 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116aad93 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 116aad99 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aad9d jne 0x116aada6 */
  if (!C.zf) goto L_116aada6;
  /* 116aad9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116aada1 jmp 0x116aafef */
  goto L_116aafef;
L_116aada6:;
  /* 116aada6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aada9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116aadac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aadaf and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 116aadb2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116aadb5 mov eax, dword ptr [ecx*4 + 0x116d1f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x116d1f00)));
  /* 116aadbc movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 116aadc1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 116aadc4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116aadc6 je 0x116aadd8 */
  if (C.zf) goto L_116aadd8;
  /* 116aadc8 push 2 */
  push32((uint32_t)(0x2u));
  /* 116aadca push 0 */
  push32((uint32_t)(0x0u));
  /* 116aadcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aadcf push edx */
  push32((uint32_t)(EDX));
  /* 116aadd0 call 0x116aac30 */
  push32(0x116aadd5u); f_116aac30();
  /* 116aadd5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116aadd8:;
  /* 116aadd8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aaddb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116aadde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aade1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 116aade4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116aade7 mov edx, dword ptr [eax*4 + 0x116d1f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x116d1f00)));
  /* 116aadee movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 116aadf3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 116aadf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116aadfa je 0x116aaf0c */
  if (C.zf) goto L_116aaf0c;
  /* 116aae00 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116aae03 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116aae06 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_116aae0d:;
  /* 116aae0d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aae10 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116aae13 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aae16 jae 0x116aaf0a */
  if (!C.cf) goto L_116aaf0a;
  /* 116aae1c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 116aae22 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_116aae25:;
  /* 116aae25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116aae28 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 116aae2e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116aae30 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aae36 jge 0x116aae97 */
  if ((C.sf==C.of)) goto L_116aae97;
  /* 116aae38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aae3b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116aae3e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aae41 jae 0x116aae97 */
  if (!C.cf) goto L_116aae97;
  /* 116aae43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aae46 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116aae48 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 116aae4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aae51 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aae54 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116aae57 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 116aae5e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aae61 jne 0x116aae81 */
  if (!C.zf) goto L_116aae81;
  /* 116aae63 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 116aae69 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aae6c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 116aae72 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116aae75 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 116aae78 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116aae7b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aae7e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_116aae81:;
  /* 116aae81 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116aae84 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 116aae8a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 116aae8c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116aae8f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aae92 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116aae95 jmp 0x116aae25 */
  goto L_116aae25;
L_116aae97:;
  /* 116aae97 push 0 */
  push32((uint32_t)(0x0u));
  /* 116aae99 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 116aae9f push edx */
  push32((uint32_t)(EDX));
  /* 116aaea0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116aaea3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 116aaea9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116aaeab push eax */
  push32((uint32_t)(EAX));
  /* 116aaeac lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 116aaeb2 push edx */
  push32((uint32_t)(EDX));
  /* 116aaeb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aaeb6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116aaeb9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aaebc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 116aaebf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116aaec2 mov edx, dword ptr [eax*4 + 0x116d1f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x116d1f00)));
  /* 116aaec9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 116aaecc push eax */
  push32((uint32_t)(EAX));
  /* 116aaecd call dword ptr [0x116d332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d332c))), 0x116aaed3u);
  /* 116aaed3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116aaed5 je 0x116aaefa */
  if (C.zf) goto L_116aaefa;
  /* 116aaed7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116aaeda add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aaee0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 116aaee3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116aaee6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 116aaeec sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116aaeee cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aaef4 jge 0x116aaef8 */
  if ((C.sf==C.of)) goto L_116aaef8;
  /* 116aaef6 jmp 0x116aaf0a */
  goto L_116aaf0a;
L_116aaef8:;
  /* 116aaef8 jmp 0x116aaf05 */
  goto L_116aaf05;
L_116aaefa:;
  /* 116aaefa call dword ptr [0x116d33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33e8))), 0x116aaf00u);
  /* 116aaf00 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116aaf03 jmp 0x116aaf0a */
  goto L_116aaf0a;
L_116aaf05:;
  /* 116aaf05 jmp 0x116aae0d */
  goto L_116aae0d;
L_116aaf0a:;
  /* 116aaf0a jmp 0x116aaf5c */
  goto L_116aaf5c;
L_116aaf0c:;
  /* 116aaf0c push 0 */
  push32((uint32_t)(0x0u));
  /* 116aaf0e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 116aaf14 push ecx */
  push32((uint32_t)(ECX));
  /* 116aaf15 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116aaf18 push edx */
  push32((uint32_t)(EDX));
  /* 116aaf19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116aaf1c push eax */
  push32((uint32_t)(EAX));
  /* 116aaf1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aaf20 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116aaf23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aaf26 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 116aaf29 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116aaf2c mov eax, dword ptr [ecx*4 + 0x116d1f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x116d1f00)));
  /* 116aaf33 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 116aaf36 push ecx */
  push32((uint32_t)(ECX));
  /* 116aaf37 call dword ptr [0x116d332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d332c))), 0x116aaf3du);
  /* 116aaf3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116aaf3f je 0x116aaf53 */
  if (C.zf) goto L_116aaf53;
  /* 116aaf41 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 116aaf48 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 116aaf4e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 116aaf51 jmp 0x116aaf5c */
  goto L_116aaf5c;
L_116aaf53:;
  /* 116aaf53 call dword ptr [0x116d33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33e8))), 0x116aaf59u);
  /* 116aaf59 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_116aaf5c:;
  /* 116aaf5c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aaf60 jne 0x116aafe6 */
  if (!C.zf) goto L_116aafe6;
  /* 116aaf66 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aaf6a je 0x116aaf9a */
  if (C.zf) goto L_116aaf9a;
  /* 116aaf6c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aaf70 jne 0x116aaf89 */
  if (!C.zf) goto L_116aaf89;
  /* 116aaf72 call 0x116a77c0 */
  push32(0x116aaf77u); f_116a77c0();
  /* 116aaf77 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 116aaf7d call 0x116a77d0 */
  push32(0x116aaf82u); f_116a77d0();
  /* 116aaf82 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aaf85 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 116aaf87 jmp 0x116aaf95 */
  goto L_116aaf95;
L_116aaf89:;
  /* 116aaf89 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aaf8c push edx */
  push32((uint32_t)(EDX));
  /* 116aaf8d call 0x116a7720 */
  push32(0x116aaf92u); f_116a7720();
  /* 116aaf92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116aaf95:;
  /* 116aaf95 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116aaf98 jmp 0x116aafef */
  goto L_116aafef;
L_116aaf9a:;
  /* 116aaf9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aaf9d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116aafa0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aafa3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 116aafa6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116aafa9 mov edx, dword ptr [eax*4 + 0x116d1f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x116d1f00)));
  /* 116aafb0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 116aafb5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 116aafb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116aafba je 0x116aafcb */
  if (C.zf) goto L_116aafcb;
  /* 116aafbc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116aafbf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116aafc2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aafc5 jne 0x116aafcb */
  if (!C.zf) goto L_116aafcb;
  /* 116aafc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116aafc9 jmp 0x116aafef */
  goto L_116aafef;
L_116aafcb:;
  /* 116aafcb call 0x116a77c0 */
  push32(0x116aafd0u); f_116a77c0();
  /* 116aafd0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 116aafd6 call 0x116a77d0 */
  push32(0x116aafdbu); f_116a77d0();
  /* 116aafdb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 116aafe1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116aafe4 jmp 0x116aafef */
  goto L_116aafef;
L_116aafe6:;
  /* 116aafe6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116aafe9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_116aafef:;
  /* 116aafef mov esp, ebp */
  ESP = (EBP);
  /* 116aaff1 pop ebp */
  EBP = (pop32());
  /* 116aaff2 ret  */
  ESPCHK(0x116aad80u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b000 @ 0x116ab000 (199 bytes, 68 insns) */
void f_116ab000(void) {
  FTRACE(0x116ab000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ab000 push ebp */
  push32((uint32_t)(EBP));
  /* 116ab001 mov ebp, esp */
  EBP = (ESP);
  /* 116ab003 push ecx */
  push32((uint32_t)(ECX));
  /* 116ab004 push ebx */
  push32((uint32_t)(EBX));
  /* 116ab005 push esi */
  push32((uint32_t)(ESI));
  /* 116ab006 push edi */
  push32((uint32_t)(EDI));
L_116ab007:;
  /* 116ab007 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ab00b jne 0x116ab02b */
  if (!C.zf) goto L_116ab02b;
  /* 116ab00d push 0x116cb7f0 */
  push32((uint32_t)(0x116cb7f0u));
  /* 116ab012 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ab014 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 116ab016 push 0x116cb9f0 */
  push32((uint32_t)(0x116cb9f0u));
  /* 116ab01b push 2 */
  push32((uint32_t)(0x2u));
  /* 116ab01d call 0x1169ade0 */
  push32(0x116ab022u); f_1169ade0();
  /* 116ab022 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab025 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ab028 jne 0x116ab02b */
  if (!C.zf) goto L_116ab02b;
  /* 116ab02a int3  */
  x86_unimpl("int3 @ 0x116ab02a");
L_116ab02b:;
  /* 116ab02b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ab02d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ab02f jne 0x116ab007 */
  if (!C.zf) goto L_116ab007;
  /* 116ab031 mov ecx, dword ptr [0x116d0844] */
  ECX = (r32((uint32_t)(0x116d0844)));
  /* 116ab037 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab03a mov dword ptr [0x116d0844], ecx */
  w32((uint32_t)(0x116d0844), (ECX));
  /* 116ab040 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ab043 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116ab046 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 116ab048 push 0x116cb9f0 */
  push32((uint32_t)(0x116cb9f0u));
  /* 116ab04d push 2 */
  push32((uint32_t)(0x2u));
  /* 116ab04f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 116ab054 call 0x1169c220 */
  push32(0x116ab059u); f_1169c220();
  /* 116ab059 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab05c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab05f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 116ab062 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab065 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ab069 je 0x116ab086 */
  if (C.zf) goto L_116ab086;
  /* 116ab06b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab06e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 116ab071 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 116ab074 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab077 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 116ab07a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab07d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 116ab084 jmp 0x116ab0ab */
  goto L_116ab0ab;
L_116ab086:;
  /* 116ab086 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab089 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116ab08c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 116ab08f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab092 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 116ab095 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab098 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab09b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab09e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 116ab0a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab0a4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_116ab0ab:;
  /* 116ab0ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab0ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab0b1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 116ab0b4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116ab0b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab0b9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 116ab0c0 pop edi */
  EDI = (pop32());
  /* 116ab0c1 pop esi */
  ESI = (pop32());
  /* 116ab0c2 pop ebx */
  EBX = (pop32());
  /* 116ab0c3 mov esp, ebp */
  ESP = (EBP);
  /* 116ab0c5 pop ebp */
  EBP = (pop32());
  /* 116ab0c6 ret  */
  ESPCHK(0x116ab000u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x116ab0d0 (50 bytes, 17 insns) */
void f_116ab0d0(void) {
  FTRACE(0x116ab0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ab0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ab0d1 mov ebp, esp */
  EBP = (ESP);
  /* 116ab0d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ab0d6 cmp eax, dword ptr [0x116d203c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x116d203c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ab0dc jb 0x116ab0e2 */
  if (C.cf) goto L_116ab0e2;
  /* 116ab0de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ab0e0 jmp 0x116ab100 */
  goto L_116ab100;
L_116ab0e2:;
  /* 116ab0e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ab0e5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116ab0e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ab0eb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 116ab0ee imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ab0f1 mov eax, dword ptr [ecx*4 + 0x116d1f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x116d1f00)));
  /* 116ab0f8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 116ab0fd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_116ab100:;
  /* 116ab100 pop ebp */
  EBP = (pop32());
  /* 116ab101 ret  */
  ESPCHK(0x116ab0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b110 @ 0x116ab110 (300 bytes, 80 insns) */
void f_116ab110(void) {
  FTRACE(0x116ab110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ab110 push ebp */
  push32((uint32_t)(EBP));
  /* 116ab111 mov ebp, esp */
  EBP = (ESP);
  /* 116ab113 push ecx */
  push32((uint32_t)(ECX));
  /* 116ab114 cmp dword ptr [0x116d1c20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d1c20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ab11b jne 0x116ab129 */
  if (!C.zf) goto L_116ab129;
  /* 116ab11d mov dword ptr [0x116d1c20], 0x200 */
  w32((uint32_t)(0x116d1c20), (0x200u));
  /* 116ab127 jmp 0x116ab13c */
  goto L_116ab13c;
L_116ab129:;
  /* 116ab129 cmp dword ptr [0x116d1c20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x116d1c20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ab130 jge 0x116ab13c */
  if ((C.sf==C.of)) goto L_116ab13c;
  /* 116ab132 mov dword ptr [0x116d1c20], 0x14 */
  w32((uint32_t)(0x116d1c20), (0x14u));
L_116ab13c:;
  /* 116ab13c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 116ab141 push 0x116cb9fc */
  push32((uint32_t)(0x116cb9fcu));
  /* 116ab146 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ab148 push 4 */
  push32((uint32_t)(0x4u));
  /* 116ab14a mov eax, dword ptr [0x116d1c20] */
  EAX = (r32((uint32_t)(0x116d1c20)));
  /* 116ab14f push eax */
  push32((uint32_t)(EAX));
  /* 116ab150 call 0x1169c630 */
  push32(0x116ab155u); f_1169c630();
  /* 116ab155 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab158 mov dword ptr [0x116d08dc], eax */
  w32((uint32_t)(0x116d08dc), (EAX));
  /* 116ab15d cmp dword ptr [0x116d08dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d08dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ab164 jne 0x116ab1a5 */
  if (!C.zf) goto L_116ab1a5;
  /* 116ab166 mov dword ptr [0x116d1c20], 0x14 */
  w32((uint32_t)(0x116d1c20), (0x14u));
  /* 116ab170 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 116ab175 push 0x116cb9fc */
  push32((uint32_t)(0x116cb9fcu));
  /* 116ab17a push 2 */
  push32((uint32_t)(0x2u));
  /* 116ab17c push 4 */
  push32((uint32_t)(0x4u));
  /* 116ab17e mov ecx, dword ptr [0x116d1c20] */
  ECX = (r32((uint32_t)(0x116d1c20)));
  /* 116ab184 push ecx */
  push32((uint32_t)(ECX));
  /* 116ab185 call 0x1169c630 */
  push32(0x116ab18au); f_1169c630();
  /* 116ab18a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab18d mov dword ptr [0x116d08dc], eax */
  w32((uint32_t)(0x116d08dc), (EAX));
  /* 116ab192 cmp dword ptr [0x116d08dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d08dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ab199 jne 0x116ab1a5 */
  if (!C.zf) goto L_116ab1a5;
  /* 116ab19b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 116ab19d call 0x1169ac90 */
  push32(0x116ab1a2u); f_1169ac90();
  /* 116ab1a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116ab1a5:;
  /* 116ab1a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116ab1ac jmp 0x116ab1b7 */
  goto L_116ab1b7;
L_116ab1ae:;
  /* 116ab1ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab1b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab1b4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116ab1b7:;
  /* 116ab1b7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ab1bb jge 0x116ab1d6 */
  if ((C.sf==C.of)) goto L_116ab1d6;
  /* 116ab1bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab1c0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116ab1c3 add eax, 0x116ceb18 */
  { uint32_t _a=(EAX),_b=(0x116ceb18u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab1c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab1cb mov edx, dword ptr [0x116d08dc] */
  EDX = (r32((uint32_t)(0x116d08dc)));
  /* 116ab1d1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 116ab1d4 jmp 0x116ab1ae */
  goto L_116ab1ae;
L_116ab1d6:;
  /* 116ab1d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116ab1dd jmp 0x116ab1e8 */
  goto L_116ab1e8;
L_116ab1df:;
  /* 116ab1df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab1e2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab1e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116ab1e8:;
  /* 116ab1e8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ab1ec jge 0x116ab238 */
  if ((C.sf==C.of)) goto L_116ab238;
  /* 116ab1ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab1f1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116ab1f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab1f7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 116ab1fa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ab1fd mov eax, dword ptr [ecx*4 + 0x116d1f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x116d1f00)));
  /* 116ab204 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ab208 je 0x116ab226 */
  if (C.zf) goto L_116ab226;
  /* 116ab20a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab20d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116ab210 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab213 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 116ab216 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ab219 mov eax, dword ptr [ecx*4 + 0x116d1f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x116d1f00)));
  /* 116ab220 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ab224 jne 0x116ab236 */
  if (!C.zf) goto L_116ab236;
L_116ab226:;
  /* 116ab226 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab229 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116ab22c mov dword ptr [ecx + 0x116ceb28], 0xffffffff */
  w32((uint32_t)(ECX + 0x116ceb28), (0xffffffffu));
L_116ab236:;
  /* 116ab236 jmp 0x116ab1df */
  goto L_116ab1df;
L_116ab238:;
  /* 116ab238 mov esp, ebp */
  ESP = (EBP);
  /* 116ab23a pop ebp */
  EBP = (pop32());
  /* 116ab23b ret  */
  ESPCHK(0x116ab110u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b240 @ 0x116ab240 (26 bytes, 9 insns) */
void f_116ab240(void) {
  FTRACE(0x116ab240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ab240 push ebp */
  push32((uint32_t)(EBP));
  /* 116ab241 mov ebp, esp */
  EBP = (ESP);
  /* 116ab243 call 0x116ae890 */
  push32(0x116ab248u); f_116ae890();
  /* 116ab248 movsx eax, byte ptr [0x116d0604] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x116d0604))));
  /* 116ab24f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ab251 je 0x116ab258 */
  if (C.zf) goto L_116ab258;
  /* 116ab253 call 0x116ae650 */
  push32(0x116ab258u); f_116ae650();
L_116ab258:;
  /* 116ab258 pop ebp */
  EBP = (pop32());
  /* 116ab259 ret  */
  ESPCHK(0x116ab240u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b260 @ 0x116ab260 (61 bytes, 20 insns) */
void f_116ab260(void) {
  FTRACE(0x116ab260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ab260 push ebp */
  push32((uint32_t)(EBP));
  /* 116ab261 mov ebp, esp */
  EBP = (ESP);
  /* 116ab263 cmp dword ptr [ebp + 8], 0x116ceb18 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x116ceb18u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ab26a jb 0x116ab28e */
  if (C.cf) goto L_116ab28e;
  /* 116ab26c cmp dword ptr [ebp + 8], 0x116ced78 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x116ced78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ab273 ja 0x116ab28e */
  if ((!C.cf&&!C.zf)) goto L_116ab28e;
  /* 116ab275 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ab278 sub eax, 0x116ceb18 */
  { uint32_t _a=(EAX),_b=(0x116ceb18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ab27d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116ab280 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab283 push eax */
  push32((uint32_t)(EAX));
  /* 116ab284 call 0x1169c120 */
  push32(0x116ab289u); f_1169c120();
  /* 116ab289 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab28c jmp 0x116ab29b */
  goto L_116ab29b;
L_116ab28e:;
  /* 116ab28e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ab291 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab294 push ecx */
  push32((uint32_t)(ECX));
  /* 116ab295 call dword ptr [0x116d345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d345c))), 0x116ab29bu);
L_116ab29b:;
  /* 116ab29b pop ebp */
  EBP = (pop32());
  /* 116ab29c ret  */
  ESPCHK(0x116ab260u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b2a0 @ 0x116ab2a0 (41 bytes, 16 insns) */
void f_116ab2a0(void) {
  FTRACE(0x116ab2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ab2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ab2a1 mov ebp, esp */
  EBP = (ESP);
  /* 116ab2a3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ab2a7 jge 0x116ab2ba */
  if ((C.sf==C.of)) goto L_116ab2ba;
  /* 116ab2a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ab2ac add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab2af push eax */
  push32((uint32_t)(EAX));
  /* 116ab2b0 call 0x1169c120 */
  push32(0x116ab2b5u); f_1169c120();
  /* 116ab2b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab2b8 jmp 0x116ab2c7 */
  goto L_116ab2c7;
L_116ab2ba:;
  /* 116ab2ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ab2bd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab2c0 push ecx */
  push32((uint32_t)(ECX));
  /* 116ab2c1 call dword ptr [0x116d345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d345c))), 0x116ab2c7u);
L_116ab2c7:;
  /* 116ab2c7 pop ebp */
  EBP = (pop32());
  /* 116ab2c8 ret  */
  ESPCHK(0x116ab2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b2d0 @ 0x116ab2d0 (61 bytes, 20 insns) */
void f_116ab2d0(void) {
  FTRACE(0x116ab2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ab2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ab2d1 mov ebp, esp */
  EBP = (ESP);
  /* 116ab2d3 cmp dword ptr [ebp + 8], 0x116ceb18 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x116ceb18u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ab2da jb 0x116ab2fe */
  if (C.cf) goto L_116ab2fe;
  /* 116ab2dc cmp dword ptr [ebp + 8], 0x116ced78 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x116ced78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ab2e3 ja 0x116ab2fe */
  if ((!C.cf&&!C.zf)) goto L_116ab2fe;
  /* 116ab2e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ab2e8 sub eax, 0x116ceb18 */
  { uint32_t _a=(EAX),_b=(0x116ceb18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ab2ed sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116ab2f0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab2f3 push eax */
  push32((uint32_t)(EAX));
  /* 116ab2f4 call 0x1169c1c0 */
  push32(0x116ab2f9u); f_1169c1c0();
  /* 116ab2f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab2fc jmp 0x116ab30b */
  goto L_116ab30b;
L_116ab2fe:;
  /* 116ab2fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ab301 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab304 push ecx */
  push32((uint32_t)(ECX));
  /* 116ab305 call dword ptr [0x116d3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3438))), 0x116ab30bu);
L_116ab30b:;
  /* 116ab30b pop ebp */
  EBP = (pop32());
  /* 116ab30c ret  */
  ESPCHK(0x116ab2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b310 @ 0x116ab310 (41 bytes, 16 insns) */
void f_116ab310(void) {
  FTRACE(0x116ab310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ab310 push ebp */
  push32((uint32_t)(EBP));
  /* 116ab311 mov ebp, esp */
  EBP = (ESP);
  /* 116ab313 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ab317 jge 0x116ab32a */
  if ((C.sf==C.of)) goto L_116ab32a;
  /* 116ab319 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ab31c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab31f push eax */
  push32((uint32_t)(EAX));
  /* 116ab320 call 0x1169c1c0 */
  push32(0x116ab325u); f_1169c1c0();
  /* 116ab325 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab328 jmp 0x116ab337 */
  goto L_116ab337;
L_116ab32a:;
  /* 116ab32a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ab32d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab330 push ecx */
  push32((uint32_t)(ECX));
  /* 116ab331 call dword ptr [0x116d3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3438))), 0x116ab337u);
L_116ab337:;
  /* 116ab337 pop ebp */
  EBP = (pop32());
  /* 116ab338 ret  */
  ESPCHK(0x116ab310u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b340 @ 0x116ab340 (119 bytes, 34 insns) */
void f_116ab340(void) {
  FTRACE(0x116ab340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ab340 push ebp */
  push32((uint32_t)(EBP));
  /* 116ab341 mov ebp, esp */
  EBP = (ESP);
  /* 116ab343 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ab346 push 0x116d1c34 */
  push32((uint32_t)(0x116d1c34u));
  /* 116ab34b call dword ptr [0x116d344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d344c))), 0x116ab351u);
  /* 116ab351 cmp dword ptr [0x116d1c24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d1c24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ab358 je 0x116ab378 */
  if (C.zf) goto L_116ab378;
  /* 116ab35a push 0x116d1c34 */
  push32((uint32_t)(0x116d1c34u));
  /* 116ab35f call dword ptr [0x116d3328] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3328))), 0x116ab365u);
  /* 116ab365 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 116ab367 call 0x1169c120 */
  push32(0x116ab36cu); f_1169c120();
  /* 116ab36c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab36f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 116ab376 jmp 0x116ab37f */
  goto L_116ab37f;
L_116ab378:;
  /* 116ab378 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_116ab37f:;
  /* 116ab37f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 116ab383 push eax */
  push32((uint32_t)(EAX));
  /* 116ab384 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ab387 push ecx */
  push32((uint32_t)(ECX));
  /* 116ab388 call 0x116ab3c0 */
  push32(0x116ab38du); f_116ab3c0();
  /* 116ab38d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab390 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116ab393 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ab397 je 0x116ab3a5 */
  if (C.zf) goto L_116ab3a5;
  /* 116ab399 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 116ab39b call 0x1169c1c0 */
  push32(0x116ab3a0u); f_1169c1c0();
  /* 116ab3a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab3a3 jmp 0x116ab3b0 */
  goto L_116ab3b0;
L_116ab3a5:;
  /* 116ab3a5 push 0x116d1c34 */
  push32((uint32_t)(0x116d1c34u));
  /* 116ab3aa call dword ptr [0x116d3328] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3328))), 0x116ab3b0u);
L_116ab3b0:;
  /* 116ab3b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ab3b3 mov esp, ebp */
  ESP = (EBP);
  /* 116ab3b5 pop ebp */
  EBP = (pop32());
  /* 116ab3b6 ret  */
  ESPCHK(0x116ab340u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b3c0 @ 0x116ab3c0 (160 bytes, 50 insns) */
void f_116ab3c0(void) {
  FTRACE(0x116ab3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ab3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ab3c1 mov ebp, esp */
  EBP = (ESP);
  /* 116ab3c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ab3c6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ab3ca jne 0x116ab3d3 */
  if (!C.zf) goto L_116ab3d3;
  /* 116ab3cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ab3ce jmp 0x116ab45c */
  goto L_116ab45c;
L_116ab3d3:;
  /* 116ab3d3 cmp dword ptr [0x116d0828], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0828))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ab3da jne 0x116ab40a */
  if (!C.zf) goto L_116ab40a;
  /* 116ab3dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ab3df and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ab3e4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ab3e9 jle 0x116ab3fb */
  if ((C.zf||C.sf!=C.of)) goto L_116ab3fb;
  /* 116ab3eb call 0x116a77c0 */
  push32(0x116ab3f0u); f_116a77c0();
  /* 116ab3f0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 116ab3f6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ab3f9 jmp 0x116ab45c */
  goto L_116ab45c;
L_116ab3fb:;
  /* 116ab3fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ab3fe mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 116ab401 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 116ab403 mov eax, 1 */
  EAX = (0x1u);
  /* 116ab408 jmp 0x116ab45c */
  goto L_116ab45c;
L_116ab40a:;
  /* 116ab40a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116ab411 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 116ab414 push eax */
  push32((uint32_t)(EAX));
  /* 116ab415 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ab417 mov ecx, dword ptr [0x116ce260] */
  ECX = (r32((uint32_t)(0x116ce260)));
  /* 116ab41d push ecx */
  push32((uint32_t)(ECX));
  /* 116ab41e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ab421 push edx */
  push32((uint32_t)(EDX));
  /* 116ab422 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ab424 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 116ab427 push eax */
  push32((uint32_t)(EAX));
  /* 116ab428 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 116ab42d mov ecx, dword ptr [0x116d0838] */
  ECX = (r32((uint32_t)(0x116d0838)));
  /* 116ab433 push ecx */
  push32((uint32_t)(ECX));
  /* 116ab434 call dword ptr [0x116d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33c4))), 0x116ab43au);
  /* 116ab43a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116ab43d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ab441 je 0x116ab449 */
  if (C.zf) goto L_116ab449;
  /* 116ab443 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ab447 je 0x116ab459 */
  if (C.zf) goto L_116ab459;
L_116ab449:;
  /* 116ab449 call 0x116a77c0 */
  push32(0x116ab44eu); f_116a77c0();
  /* 116ab44e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 116ab454 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ab457 jmp 0x116ab45c */
  goto L_116ab45c;
L_116ab459:;
  /* 116ab459 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_116ab45c:;
  /* 116ab45c mov esp, ebp */
  ESP = (EBP);
  /* 116ab45e pop ebp */
  EBP = (pop32());
  /* 116ab45f ret  */
  ESPCHK(0x116ab3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b460 @ 0x116ab460 (62 bytes, 21 insns) */
void f_116ab460(void) {
  FTRACE(0x116ab460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ab460 push ebp */
  push32((uint32_t)(EBP));
  /* 116ab461 mov ebp, esp */
  EBP = (ESP);
  /* 116ab463 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ab466 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ab469 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116ab46c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ab46f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ab472 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116ab475 add edx, 0x3fe */
  { uint32_t _a=(EDX),_b=(0x3feu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab47b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116ab47e mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 116ab481 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ab486 and eax, 0x800f */
  { uint32_t _r=(EAX)&(0x800fu); EAX = (_r); fl_logic(_r,32); }
  /* 116ab48b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab48e shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 116ab491 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 116ab493 mov word ptr [ebp - 6], ax */
  w16((uint32_t)(EBP + -0x6), (AX));
  /* 116ab497 fld qword ptr [ebp - 0xc] */
  fpu_push(rf64((uint32_t)(EBP + -0xc)));
  /* 116ab49a mov esp, ebp */
  ESP = (EBP);
  /* 116ab49c pop ebp */
  EBP = (pop32());
  /* 116ab49d ret  */
  ESPCHK(0x116ab460u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b4a0 @ 0x116ab4a0 (45 bytes, 15 insns) */
void f_116ab4a0(void) {
  FTRACE(0x116ab4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ab4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ab4a1 mov ebp, esp */
  EBP = (ESP);
  /* 116ab4a3 push ecx */
  push32((uint32_t)(ECX));
  /* 116ab4a4 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 116ab4a7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ab4ac and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 116ab4b1 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 116ab4b4 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 116ab4b8 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 116ab4bc sub cx, 0x3fe */
  { uint32_t _a=(CX),_b=(0x3feu),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 116ab4c1 mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 116ab4c5 movsx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x4))));
  /* 116ab4c9 mov esp, ebp */
  ESP = (EBP);
  /* 116ab4cb pop ebp */
  EBP = (pop32());
  /* 116ab4cc ret  */
  ESPCHK(0x116ab4a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b4d0 @ 0x116ab4d0 (51 bytes, 18 insns) */
void f_116ab4d0(void) {
  FTRACE(0x116ab4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ab4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ab4d1 mov ebp, esp */
  EBP = (ESP);
  /* 116ab4d3 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 116ab4d6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ab4db and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 116ab4e0 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 116ab4e3 movsx ecx, ax */
  ECX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 116ab4e6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116ab4e9 lea eax, [ecx + edx - 0x3fe] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x3fe));
  /* 116ab4f0 push eax */
  push32((uint32_t)(EAX));
  /* 116ab4f1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ab4f4 push ecx */
  push32((uint32_t)(ECX));
  /* 116ab4f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ab4f8 push edx */
  push32((uint32_t)(EDX));
  /* 116ab4f9 call 0x116ab460 */
  push32(0x116ab4feu); f_116ab460();
  /* 116ab4fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab501 pop ebp */
  EBP = (pop32());
  /* 116ab502 ret  */
  ESPCHK(0x116ab4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b510 @ 0x116ab510 (52 bytes, 18 insns) */
void f_116ab510(void) {
  FTRACE(0x116ab510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ab510 push ebp */
  push32((uint32_t)(EBP));
  /* 116ab511 mov ebp, esp */
  EBP = (ESP);
  /* 116ab513 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ab516 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ab519 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116ab51c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ab51f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116ab522 mov edx, dword ptr [ebp + 0xe] */
  EDX = (r32((uint32_t)(EBP + 0xe)));
  /* 116ab525 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116ab52b and edx, 0x800f */
  { uint32_t _r=(EDX)&(0x800fu); EDX = (_r); fl_logic(_r,32); }
  /* 116ab531 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116ab534 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 116ab537 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 116ab539 mov word ptr [ebp - 2], dx */
  w16((uint32_t)(EBP + -0x2), (DX));
  /* 116ab53d fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 116ab540 mov esp, ebp */
  ESP = (EBP);
  /* 116ab542 pop ebp */
  EBP = (pop32());
  /* 116ab543 ret  */
  ESPCHK(0x116ab510u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b550 @ 0x116ab550 (124 bytes, 37 insns) */
void f_116ab550(void) {
  FTRACE(0x116ab550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ab550 push ebp */
  push32((uint32_t)(EBP));
  /* 116ab551 mov ebp, esp */
  EBP = (ESP);
  /* 116ab553 cmp dword ptr [ebp + 0xc], 0x7ff00000 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x7ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ab55a jne 0x116ab569 */
  if (!C.zf) goto L_116ab569;
  /* 116ab55c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ab560 jne 0x116ab569 */
  if (!C.zf) goto L_116ab569;
  /* 116ab562 mov eax, 1 */
  EAX = (0x1u);
  /* 116ab567 jmp 0x116ab5ca */
  goto L_116ab5ca;
L_116ab569:;
  /* 116ab569 cmp dword ptr [ebp + 0xc], 0xfff00000 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ab570 jne 0x116ab57f */
  if (!C.zf) goto L_116ab57f;
  /* 116ab572 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ab576 jne 0x116ab57f */
  if (!C.zf) goto L_116ab57f;
  /* 116ab578 mov eax, 2 */
  EAX = (0x2u);
  /* 116ab57d jmp 0x116ab5ca */
  goto L_116ab5ca;
L_116ab57f:;
  /* 116ab57f mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 116ab582 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ab587 and eax, 0x7ff8 */
  { uint32_t _r=(EAX)&(0x7ff8u); EAX = (_r); fl_logic(_r,32); }
  /* 116ab58c cmp eax, 0x7ff8 */
  { uint32_t _a=(EAX),_b=(0x7ff8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ab591 jne 0x116ab59a */
  if (!C.zf) goto L_116ab59a;
  /* 116ab593 mov eax, 3 */
  EAX = (0x3u);
  /* 116ab598 jmp 0x116ab5ca */
  goto L_116ab5ca;
L_116ab59a:;
  /* 116ab59a mov ecx, dword ptr [ebp + 0xe] */
  ECX = (r32((uint32_t)(EBP + 0xe)));
  /* 116ab59d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116ab5a3 and ecx, 0x7ff8 */
  { uint32_t _r=(ECX)&(0x7ff8u); ECX = (_r); fl_logic(_r,32); }
  /* 116ab5a9 cmp ecx, 0x7ff0 */
  { uint32_t _a=(ECX),_b=(0x7ff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ab5af jne 0x116ab5c8 */
  if (!C.zf) goto L_116ab5c8;
  /* 116ab5b1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ab5b4 shl edx, 0xd */
  EDX = (sh_shl((uint32_t)(EDX), (0xdu)&0x1f, 32));
  /* 116ab5b7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116ab5b9 jne 0x116ab5c1 */
  if (!C.zf) goto L_116ab5c1;
  /* 116ab5bb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ab5bf je 0x116ab5c8 */
  if (C.zf) goto L_116ab5c8;
L_116ab5c1:;
  /* 116ab5c1 mov eax, 4 */
  EAX = (0x4u);
  /* 116ab5c6 jmp 0x116ab5ca */
  goto L_116ab5ca;
L_116ab5c8:;
  /* 116ab5c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116ab5ca:;
  /* 116ab5ca pop ebp */
  EBP = (pop32());
  /* 116ab5cb ret  */
  ESPCHK(0x116ab550u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b5d0 @ 0x116ab5d0 (313 bytes, 95 insns) */
void f_116ab5d0(void) {
  FTRACE(0x116ab5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ab5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ab5d1 mov ebp, esp */
  EBP = (ESP);
  /* 116ab5d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ab5d6 fld qword ptr [ebp + 8] */
  fpu_push(rf64((uint32_t)(EBP + 0x8)));
  /* 116ab5d9 fcomp qword ptr [0x116cac48] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x116cac48)));
  (void)fpu_pop();
  /* 116ab5df fnstsw ax */
  AX = fpu_status();
  /* 116ab5e1 test ah, 0x40 */
  { uint32_t _r=(AH)&(0x40u); fl_logic(_r,8); }
  /* 116ab5e4 je 0x116ab600 */
  if (C.zf) goto L_116ab600;
  /* 116ab5e6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 116ab5ed mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116ab5f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116ab5fb jmp 0x116ab6fa */
  goto L_116ab6fa;
L_116ab600:;
  /* 116ab600 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 116ab603 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ab608 and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 116ab60d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ab60f jne 0x116ab6c9 */
  if (!C.zf) goto L_116ab6c9;
  /* 116ab615 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ab618 shl ecx, 0xc */
  ECX = (sh_shl((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 116ab61b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116ab61d jne 0x116ab629 */
  if (!C.zf) goto L_116ab629;
  /* 116ab61f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ab623 je 0x116ab6c9 */
  if (C.zf) goto L_116ab6c9;
L_116ab629:;
  /* 116ab629 mov dword ptr [ebp - 4], 0xfffffc03 */
  w32((uint32_t)(EBP + -0x4), (0xfffffc03u));
  /* 116ab630 fld qword ptr [ebp + 8] */
  fpu_push(rf64((uint32_t)(EBP + 0x8)));
  /* 116ab633 fcomp qword ptr [0x116cac48] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x116cac48)));
  (void)fpu_pop();
  /* 116ab639 fnstsw ax */
  AX = fpu_status();
  /* 116ab63b test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 116ab63e je 0x116ab649 */
  if (C.zf) goto L_116ab649;
  /* 116ab640 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 116ab647 jmp 0x116ab650 */
  goto L_116ab650;
L_116ab649:;
  /* 116ab649 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_116ab650:;
  /* 116ab650 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116ab653 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_116ab656:;
  /* 116ab656 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 116ab659 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ab65e and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 116ab661 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ab663 jne 0x116ab695 */
  if (!C.zf) goto L_116ab695;
  /* 116ab665 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ab668 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 116ab66a mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 116ab66d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ab670 and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 116ab676 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116ab678 je 0x116ab682 */
  if (C.zf) goto L_116ab682;
  /* 116ab67a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ab67d or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 116ab67f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_116ab682:;
  /* 116ab682 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ab685 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 116ab687 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 116ab68a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab68d sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ab690 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116ab693 jmp 0x116ab656 */
  goto L_116ab656;
L_116ab695:;
  /* 116ab695 mov ax, word ptr [ebp + 0xe] */
  AX = (r16((uint32_t)(EBP + 0xe)));
  /* 116ab699 and ax, 0xffef */
  { uint32_t _r=(AX)&(0xffefu); AX = (_r); fl_logic(_r,16); }
  /* 116ab69d mov word ptr [ebp + 0xe], ax */
  w16((uint32_t)(EBP + 0xe), (AX));
  /* 116ab6a1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ab6a5 je 0x116ab6b2 */
  if (C.zf) goto L_116ab6b2;
  /* 116ab6a7 mov cx, word ptr [ebp + 0xe] */
  CX = (r16((uint32_t)(EBP + 0xe)));
  /* 116ab6ab or ch, 0x80 */
  { uint32_t _r=(C.c.b.h)|(0x80u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 116ab6ae mov word ptr [ebp + 0xe], cx */
  w16((uint32_t)(EBP + 0xe), (CX));
L_116ab6b2:;
  /* 116ab6b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ab6b4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ab6b7 push edx */
  push32((uint32_t)(EDX));
  /* 116ab6b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ab6bb push eax */
  push32((uint32_t)(EAX));
  /* 116ab6bc call 0x116ab460 */
  push32(0x116ab6c1u); f_116ab460();
  /* 116ab6c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab6c4 fstp qword ptr [ebp - 0xc] */
  wf64((uint32_t)(EBP + -0xc), FPU_ST(0));
  (void)fpu_pop();
  /* 116ab6c7 jmp 0x116ab6fa */
  goto L_116ab6fa;
L_116ab6c9:;
  /* 116ab6c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ab6cb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ab6ce push ecx */
  push32((uint32_t)(ECX));
  /* 116ab6cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ab6d2 push edx */
  push32((uint32_t)(EDX));
  /* 116ab6d3 call 0x116ab460 */
  push32(0x116ab6d8u); f_116ab460();
  /* 116ab6d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab6db fstp qword ptr [ebp - 0xc] */
  wf64((uint32_t)(EBP + -0xc), FPU_ST(0));
  (void)fpu_pop();
  /* 116ab6de mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 116ab6e1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ab6e6 and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 116ab6eb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 116ab6ee movsx ecx, ax */
  ECX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 116ab6f1 sub ecx, 0x3fe */
  { uint32_t _a=(ECX),_b=(0x3feu),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ab6f7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116ab6fa:;
  /* 116ab6fa mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116ab6fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab700 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 116ab702 fld qword ptr [ebp - 0xc] */
  fpu_push(rf64((uint32_t)(EBP + -0xc)));
  /* 116ab705 mov esp, ebp */
  ESP = (EBP);
  /* 116ab707 pop ebp */
  EBP = (pop32());
  /* 116ab708 ret  */
  ESPCHK(0x116ab5d0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x116ab710 (219 bytes, 64 insns) */
void f_116ab710(void) {
  FTRACE(0x116ab710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ab710 push ebp */
  push32((uint32_t)(EBP));
  /* 116ab711 mov ebp, esp */
  EBP = (ESP);
  /* 116ab713 push ecx */
  push32((uint32_t)(ECX));
  /* 116ab714 cmp dword ptr [0x116d0834], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0834))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ab71b je 0x116ab7b1 */
  if (C.zf) goto L_116ab7b1;
  /* 116ab721 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 116ab723 push 0x116cba04 */
  push32((uint32_t)(0x116cba04u));
  /* 116ab728 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ab72a push 0xac */
  push32((uint32_t)(0xacu));
  /* 116ab72f push 1 */
  push32((uint32_t)(0x1u));
  /* 116ab731 call 0x1169c630 */
  push32(0x116ab736u); f_1169c630();
  /* 116ab736 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab739 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116ab73c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ab740 jne 0x116ab74c */
  if (!C.zf) goto L_116ab74c;
  /* 116ab742 mov eax, 1 */
  EAX = (0x1u);
  /* 116ab747 jmp 0x116ab7e7 */
  goto L_116ab7e7;
L_116ab74c:;
  /* 116ab74c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab74f push eax */
  push32((uint32_t)(EAX));
  /* 116ab750 call 0x116ab7f0 */
  push32(0x116ab755u); f_116ab7f0();
  /* 116ab755 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab758 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ab75a je 0x116ab77d */
  if (C.zf) goto L_116ab77d;
  /* 116ab75c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab75f push ecx */
  push32((uint32_t)(ECX));
  /* 116ab760 call 0x116abd80 */
  push32(0x116ab765u); f_116abd80();
  /* 116ab765 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab768 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ab76a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab76d push edx */
  push32((uint32_t)(EDX));
  /* 116ab76e call 0x1169ccb0 */
  push32(0x116ab773u); f_1169ccb0();
  /* 116ab773 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab776 mov eax, 1 */
  EAX = (0x1u);
  /* 116ab77b jmp 0x116ab7e7 */
  goto L_116ab7e7;
L_116ab77d:;
  /* 116ab77d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab780 mov dword ptr [0x116cf540], eax */
  w32((uint32_t)(0x116cf540), (EAX));
  /* 116ab785 mov ecx, dword ptr [0x116d0848] */
  ECX = (r32((uint32_t)(0x116d0848)));
  /* 116ab78b push ecx */
  push32((uint32_t)(ECX));
  /* 116ab78c call 0x116abd80 */
  push32(0x116ab791u); f_116abd80();
  /* 116ab791 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab794 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ab796 mov edx, dword ptr [0x116d0848] */
  EDX = (r32((uint32_t)(0x116d0848)));
  /* 116ab79c push edx */
  push32((uint32_t)(EDX));
  /* 116ab79d call 0x1169ccb0 */
  push32(0x116ab7a2u); f_1169ccb0();
  /* 116ab7a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab7a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab7a8 mov dword ptr [0x116d0848], eax */
  w32((uint32_t)(0x116d0848), (EAX));
  /* 116ab7ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ab7af jmp 0x116ab7e7 */
  goto L_116ab7e7;
L_116ab7b1:;
  /* 116ab7b1 mov dword ptr [0x116cf540], 0x116cf548 */
  w32((uint32_t)(0x116cf540), (0x116cf548u));
  /* 116ab7bb mov ecx, dword ptr [0x116d0848] */
  ECX = (r32((uint32_t)(0x116d0848)));
  /* 116ab7c1 push ecx */
  push32((uint32_t)(ECX));
  /* 116ab7c2 call 0x116abd80 */
  push32(0x116ab7c7u); f_116abd80();
  /* 116ab7c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab7ca push 2 */
  push32((uint32_t)(0x2u));
  /* 116ab7cc mov edx, dword ptr [0x116d0848] */
  EDX = (r32((uint32_t)(0x116d0848)));
  /* 116ab7d2 push edx */
  push32((uint32_t)(EDX));
  /* 116ab7d3 call 0x1169ccb0 */
  push32(0x116ab7d8u); f_1169ccb0();
  /* 116ab7d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab7db mov dword ptr [0x116d0848], 0 */
  w32((uint32_t)(0x116d0848), (0x0u));
  /* 116ab7e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116ab7e7:;
  /* 116ab7e7 mov esp, ebp */
  ESP = (EBP);
  /* 116ab7e9 pop ebp */
  EBP = (pop32());
  /* 116ab7ea ret  */
  ESPCHK(0x116ab710u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b7f0 @ 0x116ab7f0 (1423 bytes, 533 insns) */
void f_116ab7f0(void) {
  FTRACE(0x116ab7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ab7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ab7f1 mov ebp, esp */
  EBP = (ESP);
  /* 116ab7f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ab7f6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 116ab7fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ab7ff mov ax, word ptr [0x116d0882] */
  AX = (r16((uint32_t)(0x116d0882)));
  /* 116ab805 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116ab808 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116ab80a mov cx, word ptr [0x116d0884] */
  CX = (r16((uint32_t)(0x116d0884)));
  /* 116ab811 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ab814 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ab818 jne 0x116ab822 */
  if (!C.zf) goto L_116ab822;
  /* 116ab81a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ab81d jmp 0x116abd7b */
  goto L_116abd7b;
L_116ab822:;
  /* 116ab822 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ab825 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab828 push edx */
  push32((uint32_t)(EDX));
  /* 116ab829 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 116ab82b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab82e push eax */
  push32((uint32_t)(EAX));
  /* 116ab82f push 1 */
  push32((uint32_t)(0x1u));
  /* 116ab831 call 0x116afe50 */
  push32(0x116ab836u); f_116afe50();
  /* 116ab836 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab839 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ab83c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ab83e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ab841 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ab844 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab847 push edx */
  push32((uint32_t)(EDX));
  /* 116ab848 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 116ab84a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab84d push eax */
  push32((uint32_t)(EAX));
  /* 116ab84e push 1 */
  push32((uint32_t)(0x1u));
  /* 116ab850 call 0x116afe50 */
  push32(0x116ab855u); f_116afe50();
  /* 116ab855 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab858 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ab85b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ab85d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ab860 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ab863 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab866 push edx */
  push32((uint32_t)(EDX));
  /* 116ab867 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 116ab869 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab86c push eax */
  push32((uint32_t)(EAX));
  /* 116ab86d push 1 */
  push32((uint32_t)(0x1u));
  /* 116ab86f call 0x116afe50 */
  push32(0x116ab874u); f_116afe50();
  /* 116ab874 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab877 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ab87a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ab87c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ab87f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ab882 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab885 push edx */
  push32((uint32_t)(EDX));
  /* 116ab886 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 116ab888 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab88b push eax */
  push32((uint32_t)(EAX));
  /* 116ab88c push 1 */
  push32((uint32_t)(0x1u));
  /* 116ab88e call 0x116afe50 */
  push32(0x116ab893u); f_116afe50();
  /* 116ab893 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab896 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ab899 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ab89b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ab89e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ab8a1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab8a4 push edx */
  push32((uint32_t)(EDX));
  /* 116ab8a5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 116ab8a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab8aa push eax */
  push32((uint32_t)(EAX));
  /* 116ab8ab push 1 */
  push32((uint32_t)(0x1u));
  /* 116ab8ad call 0x116afe50 */
  push32(0x116ab8b2u); f_116afe50();
  /* 116ab8b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab8b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ab8b8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ab8ba mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ab8bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ab8c0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab8c3 push edx */
  push32((uint32_t)(EDX));
  /* 116ab8c4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 116ab8c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab8c9 push eax */
  push32((uint32_t)(EAX));
  /* 116ab8ca push 1 */
  push32((uint32_t)(0x1u));
  /* 116ab8cc call 0x116afe50 */
  push32(0x116ab8d1u); f_116afe50();
  /* 116ab8d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab8d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ab8d7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ab8d9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ab8dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ab8df push edx */
  push32((uint32_t)(EDX));
  /* 116ab8e0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 116ab8e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab8e5 push eax */
  push32((uint32_t)(EAX));
  /* 116ab8e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ab8e8 call 0x116afe50 */
  push32(0x116ab8edu); f_116afe50();
  /* 116ab8ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab8f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ab8f3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ab8f5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ab8f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ab8fb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab8fe push edx */
  push32((uint32_t)(EDX));
  /* 116ab8ff push 0x2a */
  push32((uint32_t)(0x2au));
  /* 116ab901 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab904 push eax */
  push32((uint32_t)(EAX));
  /* 116ab905 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ab907 call 0x116afe50 */
  push32(0x116ab90cu); f_116afe50();
  /* 116ab90c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab90f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ab912 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ab914 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ab917 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ab91a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab91d push edx */
  push32((uint32_t)(EDX));
  /* 116ab91e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 116ab920 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab923 push eax */
  push32((uint32_t)(EAX));
  /* 116ab924 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ab926 call 0x116afe50 */
  push32(0x116ab92bu); f_116afe50();
  /* 116ab92b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab92e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ab931 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ab933 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ab936 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ab939 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab93c push edx */
  push32((uint32_t)(EDX));
  /* 116ab93d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 116ab93f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab942 push eax */
  push32((uint32_t)(EAX));
  /* 116ab943 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ab945 call 0x116afe50 */
  push32(0x116ab94au); f_116afe50();
  /* 116ab94a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab94d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ab950 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ab952 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ab955 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ab958 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab95b push edx */
  push32((uint32_t)(EDX));
  /* 116ab95c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 116ab95e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab961 push eax */
  push32((uint32_t)(EAX));
  /* 116ab962 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ab964 call 0x116afe50 */
  push32(0x116ab969u); f_116afe50();
  /* 116ab969 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab96c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ab96f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ab971 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ab974 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ab977 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab97a push edx */
  push32((uint32_t)(EDX));
  /* 116ab97b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 116ab97d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab980 push eax */
  push32((uint32_t)(EAX));
  /* 116ab981 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ab983 call 0x116afe50 */
  push32(0x116ab988u); f_116afe50();
  /* 116ab988 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab98b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ab98e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ab990 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ab993 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ab996 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab999 push edx */
  push32((uint32_t)(EDX));
  /* 116ab99a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 116ab99c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab99f push eax */
  push32((uint32_t)(EAX));
  /* 116ab9a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ab9a2 call 0x116afe50 */
  push32(0x116ab9a7u); f_116afe50();
  /* 116ab9a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab9aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ab9ad or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ab9af mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ab9b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ab9b5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab9b8 push edx */
  push32((uint32_t)(EDX));
  /* 116ab9b9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 116ab9bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab9be push eax */
  push32((uint32_t)(EAX));
  /* 116ab9bf push 1 */
  push32((uint32_t)(0x1u));
  /* 116ab9c1 call 0x116afe50 */
  push32(0x116ab9c6u); f_116afe50();
  /* 116ab9c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab9c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ab9cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ab9ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ab9d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ab9d4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab9d7 push edx */
  push32((uint32_t)(EDX));
  /* 116ab9d8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 116ab9da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab9dd push eax */
  push32((uint32_t)(EAX));
  /* 116ab9de push 1 */
  push32((uint32_t)(0x1u));
  /* 116ab9e0 call 0x116afe50 */
  push32(0x116ab9e5u); f_116afe50();
  /* 116ab9e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab9e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ab9eb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ab9ed mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ab9f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ab9f3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ab9f6 push edx */
  push32((uint32_t)(EDX));
  /* 116ab9f7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 116ab9f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ab9fc push eax */
  push32((uint32_t)(EAX));
  /* 116ab9fd push 1 */
  push32((uint32_t)(0x1u));
  /* 116ab9ff call 0x116afe50 */
  push32(0x116aba04u); f_116afe50();
  /* 116aba04 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aba07 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aba0a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116aba0c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116aba0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aba12 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aba15 push edx */
  push32((uint32_t)(EDX));
  /* 116aba16 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 116aba18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aba1b push eax */
  push32((uint32_t)(EAX));
  /* 116aba1c push 1 */
  push32((uint32_t)(0x1u));
  /* 116aba1e call 0x116afe50 */
  push32(0x116aba23u); f_116afe50();
  /* 116aba23 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aba26 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aba29 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116aba2b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116aba2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aba31 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aba34 push edx */
  push32((uint32_t)(EDX));
  /* 116aba35 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 116aba37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aba3a push eax */
  push32((uint32_t)(EAX));
  /* 116aba3b push 1 */
  push32((uint32_t)(0x1u));
  /* 116aba3d call 0x116afe50 */
  push32(0x116aba42u); f_116afe50();
  /* 116aba42 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aba45 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aba48 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116aba4a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116aba4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aba50 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aba53 push edx */
  push32((uint32_t)(EDX));
  /* 116aba54 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 116aba56 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aba59 push eax */
  push32((uint32_t)(EAX));
  /* 116aba5a push 1 */
  push32((uint32_t)(0x1u));
  /* 116aba5c call 0x116afe50 */
  push32(0x116aba61u); f_116afe50();
  /* 116aba61 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aba64 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aba67 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116aba69 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116aba6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aba6f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aba72 push edx */
  push32((uint32_t)(EDX));
  /* 116aba73 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 116aba75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aba78 push eax */
  push32((uint32_t)(EAX));
  /* 116aba79 push 1 */
  push32((uint32_t)(0x1u));
  /* 116aba7b call 0x116afe50 */
  push32(0x116aba80u); f_116afe50();
  /* 116aba80 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aba83 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aba86 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116aba88 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116aba8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116aba8e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aba91 push edx */
  push32((uint32_t)(EDX));
  /* 116aba92 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 116aba94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116aba97 push eax */
  push32((uint32_t)(EAX));
  /* 116aba98 push 1 */
  push32((uint32_t)(0x1u));
  /* 116aba9a call 0x116afe50 */
  push32(0x116aba9fu); f_116afe50();
  /* 116aba9f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abaa2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116abaa5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116abaa7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116abaaa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abaad add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116abab0 push edx */
  push32((uint32_t)(EDX));
  /* 116abab1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 116abab3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116abab6 push eax */
  push32((uint32_t)(EAX));
  /* 116abab7 push 1 */
  push32((uint32_t)(0x1u));
  /* 116abab9 call 0x116afe50 */
  push32(0x116ababeu); f_116afe50();
  /* 116ababe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abac1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116abac4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116abac6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116abac9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abacc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116abacf push edx */
  push32((uint32_t)(EDX));
  /* 116abad0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 116abad2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116abad5 push eax */
  push32((uint32_t)(EAX));
  /* 116abad6 push 1 */
  push32((uint32_t)(0x1u));
  /* 116abad8 call 0x116afe50 */
  push32(0x116abaddu); f_116afe50();
  /* 116abadd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abae0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116abae3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116abae5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116abae8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abaeb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116abaee push edx */
  push32((uint32_t)(EDX));
  /* 116abaef push 0x4d */
  push32((uint32_t)(0x4du));
  /* 116abaf1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116abaf4 push eax */
  push32((uint32_t)(EAX));
  /* 116abaf5 push 1 */
  push32((uint32_t)(0x1u));
  /* 116abaf7 call 0x116afe50 */
  push32(0x116abafcu); f_116afe50();
  /* 116abafc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abaff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116abb02 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116abb04 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116abb07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abb0a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116abb0d push edx */
  push32((uint32_t)(EDX));
  /* 116abb0e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 116abb10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116abb13 push eax */
  push32((uint32_t)(EAX));
  /* 116abb14 push 1 */
  push32((uint32_t)(0x1u));
  /* 116abb16 call 0x116afe50 */
  push32(0x116abb1bu); f_116afe50();
  /* 116abb1b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abb1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116abb21 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116abb23 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116abb26 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abb29 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116abb2c push edx */
  push32((uint32_t)(EDX));
  /* 116abb2d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 116abb2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116abb32 push eax */
  push32((uint32_t)(EAX));
  /* 116abb33 push 1 */
  push32((uint32_t)(0x1u));
  /* 116abb35 call 0x116afe50 */
  push32(0x116abb3au); f_116afe50();
  /* 116abb3a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abb3d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116abb40 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116abb42 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116abb45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abb48 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116abb4b push edx */
  push32((uint32_t)(EDX));
  /* 116abb4c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 116abb4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116abb51 push eax */
  push32((uint32_t)(EAX));
  /* 116abb52 push 1 */
  push32((uint32_t)(0x1u));
  /* 116abb54 call 0x116afe50 */
  push32(0x116abb59u); f_116afe50();
  /* 116abb59 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abb5c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116abb5f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116abb61 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116abb64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abb67 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116abb6a push edx */
  push32((uint32_t)(EDX));
  /* 116abb6b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 116abb6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116abb70 push eax */
  push32((uint32_t)(EAX));
  /* 116abb71 push 1 */
  push32((uint32_t)(0x1u));
  /* 116abb73 call 0x116afe50 */
  push32(0x116abb78u); f_116afe50();
  /* 116abb78 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abb7b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116abb7e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116abb80 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116abb83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abb86 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116abb89 push edx */
  push32((uint32_t)(EDX));
  /* 116abb8a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 116abb8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116abb8f push eax */
  push32((uint32_t)(EAX));
  /* 116abb90 push 1 */
  push32((uint32_t)(0x1u));
  /* 116abb92 call 0x116afe50 */
  push32(0x116abb97u); f_116afe50();
  /* 116abb97 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abb9a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116abb9d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116abb9f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116abba2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abba5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116abba8 push edx */
  push32((uint32_t)(EDX));
  /* 116abba9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 116abbab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116abbae push eax */
  push32((uint32_t)(EAX));
  /* 116abbaf push 1 */
  push32((uint32_t)(0x1u));
  /* 116abbb1 call 0x116afe50 */
  push32(0x116abbb6u); f_116afe50();
  /* 116abbb6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abbb9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116abbbc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116abbbe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116abbc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abbc4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116abbc7 push edx */
  push32((uint32_t)(EDX));
  /* 116abbc8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 116abbca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116abbcd push eax */
  push32((uint32_t)(EAX));
  /* 116abbce push 1 */
  push32((uint32_t)(0x1u));
  /* 116abbd0 call 0x116afe50 */
  push32(0x116abbd5u); f_116afe50();
  /* 116abbd5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abbd8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116abbdb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116abbdd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116abbe0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abbe3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116abbe6 push edx */
  push32((uint32_t)(EDX));
  /* 116abbe7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 116abbe9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116abbec push eax */
  push32((uint32_t)(EAX));
  /* 116abbed push 1 */
  push32((uint32_t)(0x1u));
  /* 116abbef call 0x116afe50 */
  push32(0x116abbf4u); f_116afe50();
  /* 116abbf4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abbf7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116abbfa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116abbfc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116abbff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abc02 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116abc08 push edx */
  push32((uint32_t)(EDX));
  /* 116abc09 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 116abc0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116abc0e push eax */
  push32((uint32_t)(EAX));
  /* 116abc0f push 1 */
  push32((uint32_t)(0x1u));
  /* 116abc11 call 0x116afe50 */
  push32(0x116abc16u); f_116afe50();
  /* 116abc16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abc19 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116abc1c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116abc1e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116abc21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abc24 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116abc2a push edx */
  push32((uint32_t)(EDX));
  /* 116abc2b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 116abc2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116abc30 push eax */
  push32((uint32_t)(EAX));
  /* 116abc31 push 1 */
  push32((uint32_t)(0x1u));
  /* 116abc33 call 0x116afe50 */
  push32(0x116abc38u); f_116afe50();
  /* 116abc38 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abc3b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116abc3e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116abc40 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116abc43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abc46 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116abc4c push edx */
  push32((uint32_t)(EDX));
  /* 116abc4d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 116abc4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116abc52 push eax */
  push32((uint32_t)(EAX));
  /* 116abc53 push 1 */
  push32((uint32_t)(0x1u));
  /* 116abc55 call 0x116afe50 */
  push32(0x116abc5au); f_116afe50();
  /* 116abc5a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abc5d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116abc60 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116abc62 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116abc65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abc68 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116abc6e push edx */
  push32((uint32_t)(EDX));
  /* 116abc6f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 116abc71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116abc74 push eax */
  push32((uint32_t)(EAX));
  /* 116abc75 push 1 */
  push32((uint32_t)(0x1u));
  /* 116abc77 call 0x116afe50 */
  push32(0x116abc7cu); f_116afe50();
  /* 116abc7c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abc7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116abc82 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116abc84 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116abc87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abc8a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116abc90 push edx */
  push32((uint32_t)(EDX));
  /* 116abc91 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 116abc93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116abc96 push eax */
  push32((uint32_t)(EAX));
  /* 116abc97 push 1 */
  push32((uint32_t)(0x1u));
  /* 116abc99 call 0x116afe50 */
  push32(0x116abc9eu); f_116afe50();
  /* 116abc9e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abca1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116abca4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116abca6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116abca9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abcac add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116abcb2 push edx */
  push32((uint32_t)(EDX));
  /* 116abcb3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 116abcb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116abcb8 push eax */
  push32((uint32_t)(EAX));
  /* 116abcb9 push 1 */
  push32((uint32_t)(0x1u));
  /* 116abcbb call 0x116afe50 */
  push32(0x116abcc0u); f_116afe50();
  /* 116abcc0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abcc3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116abcc6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116abcc8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116abccb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abcce add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116abcd4 push edx */
  push32((uint32_t)(EDX));
  /* 116abcd5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 116abcd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116abcda push eax */
  push32((uint32_t)(EAX));
  /* 116abcdb push 1 */
  push32((uint32_t)(0x1u));
  /* 116abcdd call 0x116afe50 */
  push32(0x116abce2u); f_116afe50();
  /* 116abce2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abce5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116abce8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116abcea mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116abced mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abcf0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116abcf6 push edx */
  push32((uint32_t)(EDX));
  /* 116abcf7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 116abcf9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116abcfc push eax */
  push32((uint32_t)(EAX));
  /* 116abcfd push 1 */
  push32((uint32_t)(0x1u));
  /* 116abcff call 0x116afe50 */
  push32(0x116abd04u); f_116afe50();
  /* 116abd04 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abd07 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116abd0a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116abd0c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116abd0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abd12 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116abd18 push edx */
  push32((uint32_t)(EDX));
  /* 116abd19 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 116abd1b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116abd1e push eax */
  push32((uint32_t)(EAX));
  /* 116abd1f push 1 */
  push32((uint32_t)(0x1u));
  /* 116abd21 call 0x116afe50 */
  push32(0x116abd26u); f_116afe50();
  /* 116abd26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abd29 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116abd2c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116abd2e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116abd31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abd34 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116abd3a push edx */
  push32((uint32_t)(EDX));
  /* 116abd3b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 116abd3d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116abd40 push eax */
  push32((uint32_t)(EAX));
  /* 116abd41 push 1 */
  push32((uint32_t)(0x1u));
  /* 116abd43 call 0x116afe50 */
  push32(0x116abd48u); f_116afe50();
  /* 116abd48 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abd4b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116abd4e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116abd50 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116abd53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abd56 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116abd5c push edx */
  push32((uint32_t)(EDX));
  /* 116abd5d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 116abd62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116abd65 push eax */
  push32((uint32_t)(EAX));
  /* 116abd66 push 1 */
  push32((uint32_t)(0x1u));
  /* 116abd68 call 0x116afe50 */
  push32(0x116abd6du); f_116afe50();
  /* 116abd6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abd70 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116abd73 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116abd75 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116abd78 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_116abd7b:;
  /* 116abd7b mov esp, ebp */
  ESP = (EBP);
  /* 116abd7d pop ebp */
  EBP = (pop32());
  /* 116abd7e ret  */
  ESPCHK(0x116ab7f0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x116abd80 (779 bytes, 265 insns) */
void f_116abd80(void) {
  FTRACE(0x116abd80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116abd80 push ebp */
  push32((uint32_t)(EBP));
  /* 116abd81 mov ebp, esp */
  EBP = (ESP);
  /* 116abd83 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116abd87 jne 0x116abd8e */
  if (!C.zf) goto L_116abd8e;
  /* 116abd89 jmp 0x116ac089 */
  goto L_116ac089;
L_116abd8e:;
  /* 116abd8e push 2 */
  push32((uint32_t)(0x2u));
  /* 116abd90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abd93 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116abd96 push ecx */
  push32((uint32_t)(ECX));
  /* 116abd97 call 0x1169ccb0 */
  push32(0x116abd9cu); f_1169ccb0();
  /* 116abd9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abd9f push 2 */
  push32((uint32_t)(0x2u));
  /* 116abda1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abda4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 116abda7 push eax */
  push32((uint32_t)(EAX));
  /* 116abda8 call 0x1169ccb0 */
  push32(0x116abdadu); f_1169ccb0();
  /* 116abdad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abdb0 push 2 */
  push32((uint32_t)(0x2u));
  /* 116abdb2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abdb5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116abdb8 push edx */
  push32((uint32_t)(EDX));
  /* 116abdb9 call 0x1169ccb0 */
  push32(0x116abdbeu); f_1169ccb0();
  /* 116abdbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abdc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 116abdc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abdc6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116abdc9 push ecx */
  push32((uint32_t)(ECX));
  /* 116abdca call 0x1169ccb0 */
  push32(0x116abdcfu); f_1169ccb0();
  /* 116abdcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abdd2 push 2 */
  push32((uint32_t)(0x2u));
  /* 116abdd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abdd7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 116abdda push eax */
  push32((uint32_t)(EAX));
  /* 116abddb call 0x1169ccb0 */
  push32(0x116abde0u); f_1169ccb0();
  /* 116abde0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abde3 push 2 */
  push32((uint32_t)(0x2u));
  /* 116abde5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abde8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 116abdeb push edx */
  push32((uint32_t)(EDX));
  /* 116abdec call 0x1169ccb0 */
  push32(0x116abdf1u); f_1169ccb0();
  /* 116abdf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abdf4 push 2 */
  push32((uint32_t)(0x2u));
  /* 116abdf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abdf9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116abdfb push ecx */
  push32((uint32_t)(ECX));
  /* 116abdfc call 0x1169ccb0 */
  push32(0x116abe01u); f_1169ccb0();
  /* 116abe01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abe04 push 2 */
  push32((uint32_t)(0x2u));
  /* 116abe06 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abe09 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 116abe0c push eax */
  push32((uint32_t)(EAX));
  /* 116abe0d call 0x1169ccb0 */
  push32(0x116abe12u); f_1169ccb0();
  /* 116abe12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abe15 push 2 */
  push32((uint32_t)(0x2u));
  /* 116abe17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abe1a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 116abe1d push edx */
  push32((uint32_t)(EDX));
  /* 116abe1e call 0x1169ccb0 */
  push32(0x116abe23u); f_1169ccb0();
  /* 116abe23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abe26 push 2 */
  push32((uint32_t)(0x2u));
  /* 116abe28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abe2b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 116abe2e push ecx */
  push32((uint32_t)(ECX));
  /* 116abe2f call 0x1169ccb0 */
  push32(0x116abe34u); f_1169ccb0();
  /* 116abe34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abe37 push 2 */
  push32((uint32_t)(0x2u));
  /* 116abe39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abe3c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 116abe3f push eax */
  push32((uint32_t)(EAX));
  /* 116abe40 call 0x1169ccb0 */
  push32(0x116abe45u); f_1169ccb0();
  /* 116abe45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abe48 push 2 */
  push32((uint32_t)(0x2u));
  /* 116abe4a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abe4d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 116abe50 push edx */
  push32((uint32_t)(EDX));
  /* 116abe51 call 0x1169ccb0 */
  push32(0x116abe56u); f_1169ccb0();
  /* 116abe56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abe59 push 2 */
  push32((uint32_t)(0x2u));
  /* 116abe5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abe5e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 116abe61 push ecx */
  push32((uint32_t)(ECX));
  /* 116abe62 call 0x1169ccb0 */
  push32(0x116abe67u); f_1169ccb0();
  /* 116abe67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abe6a push 2 */
  push32((uint32_t)(0x2u));
  /* 116abe6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abe6f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 116abe72 push eax */
  push32((uint32_t)(EAX));
  /* 116abe73 call 0x1169ccb0 */
  push32(0x116abe78u); f_1169ccb0();
  /* 116abe78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abe7b push 2 */
  push32((uint32_t)(0x2u));
  /* 116abe7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abe80 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 116abe83 push edx */
  push32((uint32_t)(EDX));
  /* 116abe84 call 0x1169ccb0 */
  push32(0x116abe89u); f_1169ccb0();
  /* 116abe89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abe8c push 2 */
  push32((uint32_t)(0x2u));
  /* 116abe8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abe91 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 116abe94 push ecx */
  push32((uint32_t)(ECX));
  /* 116abe95 call 0x1169ccb0 */
  push32(0x116abe9au); f_1169ccb0();
  /* 116abe9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abe9d push 2 */
  push32((uint32_t)(0x2u));
  /* 116abe9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abea2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 116abea5 push eax */
  push32((uint32_t)(EAX));
  /* 116abea6 call 0x1169ccb0 */
  push32(0x116abeabu); f_1169ccb0();
  /* 116abeab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abeae push 2 */
  push32((uint32_t)(0x2u));
  /* 116abeb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abeb3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 116abeb6 push edx */
  push32((uint32_t)(EDX));
  /* 116abeb7 call 0x1169ccb0 */
  push32(0x116abebcu); f_1169ccb0();
  /* 116abebc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abebf push 2 */
  push32((uint32_t)(0x2u));
  /* 116abec1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abec4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 116abec7 push ecx */
  push32((uint32_t)(ECX));
  /* 116abec8 call 0x1169ccb0 */
  push32(0x116abecdu); f_1169ccb0();
  /* 116abecd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abed0 push 2 */
  push32((uint32_t)(0x2u));
  /* 116abed2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abed5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 116abed8 push eax */
  push32((uint32_t)(EAX));
  /* 116abed9 call 0x1169ccb0 */
  push32(0x116abedeu); f_1169ccb0();
  /* 116abede add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abee1 push 2 */
  push32((uint32_t)(0x2u));
  /* 116abee3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abee6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 116abee9 push edx */
  push32((uint32_t)(EDX));
  /* 116abeea call 0x1169ccb0 */
  push32(0x116abeefu); f_1169ccb0();
  /* 116abeef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abef2 push 2 */
  push32((uint32_t)(0x2u));
  /* 116abef4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abef7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 116abefa push ecx */
  push32((uint32_t)(ECX));
  /* 116abefb call 0x1169ccb0 */
  push32(0x116abf00u); f_1169ccb0();
  /* 116abf00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abf03 push 2 */
  push32((uint32_t)(0x2u));
  /* 116abf05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abf08 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 116abf0b push eax */
  push32((uint32_t)(EAX));
  /* 116abf0c call 0x1169ccb0 */
  push32(0x116abf11u); f_1169ccb0();
  /* 116abf11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abf14 push 2 */
  push32((uint32_t)(0x2u));
  /* 116abf16 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abf19 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 116abf1c push edx */
  push32((uint32_t)(EDX));
  /* 116abf1d call 0x1169ccb0 */
  push32(0x116abf22u); f_1169ccb0();
  /* 116abf22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abf25 push 2 */
  push32((uint32_t)(0x2u));
  /* 116abf27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abf2a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 116abf2d push ecx */
  push32((uint32_t)(ECX));
  /* 116abf2e call 0x1169ccb0 */
  push32(0x116abf33u); f_1169ccb0();
  /* 116abf33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abf36 push 2 */
  push32((uint32_t)(0x2u));
  /* 116abf38 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abf3b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 116abf3e push eax */
  push32((uint32_t)(EAX));
  /* 116abf3f call 0x1169ccb0 */
  push32(0x116abf44u); f_1169ccb0();
  /* 116abf44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abf47 push 2 */
  push32((uint32_t)(0x2u));
  /* 116abf49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abf4c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 116abf4f push edx */
  push32((uint32_t)(EDX));
  /* 116abf50 call 0x1169ccb0 */
  push32(0x116abf55u); f_1169ccb0();
  /* 116abf55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abf58 push 2 */
  push32((uint32_t)(0x2u));
  /* 116abf5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abf5d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 116abf60 push ecx */
  push32((uint32_t)(ECX));
  /* 116abf61 call 0x1169ccb0 */
  push32(0x116abf66u); f_1169ccb0();
  /* 116abf66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abf69 push 2 */
  push32((uint32_t)(0x2u));
  /* 116abf6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abf6e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 116abf71 push eax */
  push32((uint32_t)(EAX));
  /* 116abf72 call 0x1169ccb0 */
  push32(0x116abf77u); f_1169ccb0();
  /* 116abf77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abf7a push 2 */
  push32((uint32_t)(0x2u));
  /* 116abf7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abf7f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 116abf82 push edx */
  push32((uint32_t)(EDX));
  /* 116abf83 call 0x1169ccb0 */
  push32(0x116abf88u); f_1169ccb0();
  /* 116abf88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abf8b push 2 */
  push32((uint32_t)(0x2u));
  /* 116abf8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abf90 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 116abf93 push ecx */
  push32((uint32_t)(ECX));
  /* 116abf94 call 0x1169ccb0 */
  push32(0x116abf99u); f_1169ccb0();
  /* 116abf99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abf9c push 2 */
  push32((uint32_t)(0x2u));
  /* 116abf9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abfa1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 116abfa4 push eax */
  push32((uint32_t)(EAX));
  /* 116abfa5 call 0x1169ccb0 */
  push32(0x116abfaau); f_1169ccb0();
  /* 116abfaa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abfad push 2 */
  push32((uint32_t)(0x2u));
  /* 116abfaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abfb2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 116abfb8 push edx */
  push32((uint32_t)(EDX));
  /* 116abfb9 call 0x1169ccb0 */
  push32(0x116abfbeu); f_1169ccb0();
  /* 116abfbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abfc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 116abfc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abfc6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 116abfcc push ecx */
  push32((uint32_t)(ECX));
  /* 116abfcd call 0x1169ccb0 */
  push32(0x116abfd2u); f_1169ccb0();
  /* 116abfd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abfd5 push 2 */
  push32((uint32_t)(0x2u));
  /* 116abfd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abfda mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 116abfe0 push eax */
  push32((uint32_t)(EAX));
  /* 116abfe1 call 0x1169ccb0 */
  push32(0x116abfe6u); f_1169ccb0();
  /* 116abfe6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abfe9 push 2 */
  push32((uint32_t)(0x2u));
  /* 116abfeb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116abfee mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 116abff4 push edx */
  push32((uint32_t)(EDX));
  /* 116abff5 call 0x1169ccb0 */
  push32(0x116abffau); f_1169ccb0();
  /* 116abffa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116abffd push 2 */
  push32((uint32_t)(0x2u));
  /* 116abfff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac002 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 116ac008 push ecx */
  push32((uint32_t)(ECX));
  /* 116ac009 call 0x1169ccb0 */
  push32(0x116ac00eu); f_1169ccb0();
  /* 116ac00e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac011 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ac013 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac016 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 116ac01c push eax */
  push32((uint32_t)(EAX));
  /* 116ac01d call 0x1169ccb0 */
  push32(0x116ac022u); f_1169ccb0();
  /* 116ac022 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac025 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ac027 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac02a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 116ac030 push edx */
  push32((uint32_t)(EDX));
  /* 116ac031 call 0x1169ccb0 */
  push32(0x116ac036u); f_1169ccb0();
  /* 116ac036 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac039 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ac03b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac03e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 116ac044 push ecx */
  push32((uint32_t)(ECX));
  /* 116ac045 call 0x1169ccb0 */
  push32(0x116ac04au); f_1169ccb0();
  /* 116ac04a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac04d push 2 */
  push32((uint32_t)(0x2u));
  /* 116ac04f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac052 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 116ac058 push eax */
  push32((uint32_t)(EAX));
  /* 116ac059 call 0x1169ccb0 */
  push32(0x116ac05eu); f_1169ccb0();
  /* 116ac05e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac061 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ac063 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac066 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 116ac06c push edx */
  push32((uint32_t)(EDX));
  /* 116ac06d call 0x1169ccb0 */
  push32(0x116ac072u); f_1169ccb0();
  /* 116ac072 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac075 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ac077 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac07a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 116ac080 push ecx */
  push32((uint32_t)(ECX));
  /* 116ac081 call 0x1169ccb0 */
  push32(0x116ac086u); f_1169ccb0();
  /* 116ac086 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116ac089:;
  /* 116ac089 pop ebp */
  EBP = (pop32());
  /* 116ac08a ret  */
  ESPCHK(0x116abd80u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c090 @ 0x116ac090 (678 bytes, 180 insns) */
void f_116ac090(void) {
  FTRACE(0x116ac090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ac090 push ebp */
  push32((uint32_t)(EBP));
  /* 116ac091 mov ebp, esp */
  EBP = (ESP);
  /* 116ac093 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ac096 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116ac09d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ac09f mov ax, word ptr [0x116d087e] */
  AX = (r16((uint32_t)(0x116d087e)));
  /* 116ac0a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116ac0a8 cmp dword ptr [0x116d0830], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0830))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ac0af je 0x116ac20a */
  if (C.zf) goto L_116ac20a;
  /* 116ac0b5 push 0x116d084c */
  push32((uint32_t)(0x116d084cu));
  /* 116ac0ba push 0xe */
  push32((uint32_t)(0xeu));
  /* 116ac0bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ac0bf push ecx */
  push32((uint32_t)(ECX));
  /* 116ac0c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ac0c2 call 0x116afe50 */
  push32(0x116ac0c7u); f_116afe50();
  /* 116ac0c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac0ca mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ac0cd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 116ac0cf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116ac0d2 push 0x116d0850 */
  push32((uint32_t)(0x116d0850u));
  /* 116ac0d7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 116ac0d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ac0dc push eax */
  push32((uint32_t)(EAX));
  /* 116ac0dd push 1 */
  push32((uint32_t)(0x1u));
  /* 116ac0df call 0x116afe50 */
  push32(0x116ac0e4u); f_116afe50();
  /* 116ac0e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac0e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ac0ea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ac0ec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ac0ef push 0x116d0854 */
  push32((uint32_t)(0x116d0854u));
  /* 116ac0f4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 116ac0f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ac0f9 push edx */
  push32((uint32_t)(EDX));
  /* 116ac0fa push 1 */
  push32((uint32_t)(0x1u));
  /* 116ac0fc call 0x116afe50 */
  push32(0x116ac101u); f_116afe50();
  /* 116ac101 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac104 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ac107 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ac109 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ac10c mov edx, dword ptr [0x116d0854] */
  EDX = (r32((uint32_t)(0x116d0854)));
  /* 116ac112 push edx */
  push32((uint32_t)(EDX));
  /* 116ac113 call 0x116ac340 */
  push32(0x116ac118u); f_116ac340();
  /* 116ac118 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac11b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ac11f je 0x116ac179 */
  if (C.zf) goto L_116ac179;
  /* 116ac121 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ac123 mov eax, dword ptr [0x116d084c] */
  EAX = (r32((uint32_t)(0x116d084c)));
  /* 116ac128 push eax */
  push32((uint32_t)(EAX));
  /* 116ac129 call 0x1169ccb0 */
  push32(0x116ac12eu); f_1169ccb0();
  /* 116ac12e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac131 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ac133 mov ecx, dword ptr [0x116d0850] */
  ECX = (r32((uint32_t)(0x116d0850)));
  /* 116ac139 push ecx */
  push32((uint32_t)(ECX));
  /* 116ac13a call 0x1169ccb0 */
  push32(0x116ac13fu); f_1169ccb0();
  /* 116ac13f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac142 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ac144 mov edx, dword ptr [0x116d0854] */
  EDX = (r32((uint32_t)(0x116d0854)));
  /* 116ac14a push edx */
  push32((uint32_t)(EDX));
  /* 116ac14b call 0x1169ccb0 */
  push32(0x116ac150u); f_1169ccb0();
  /* 116ac150 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac153 mov dword ptr [0x116d084c], 0 */
  w32((uint32_t)(0x116d084c), (0x0u));
  /* 116ac15d mov dword ptr [0x116d0850], 0 */
  w32((uint32_t)(0x116d0850), (0x0u));
  /* 116ac167 mov dword ptr [0x116d0854], 0 */
  w32((uint32_t)(0x116d0854), (0x0u));
  /* 116ac171 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ac174 jmp 0x116ac332 */
  goto L_116ac332;
L_116ac179:;
  /* 116ac179 mov eax, dword ptr [0x116cf630] */
  EAX = (r32((uint32_t)(0x116cf630)));
  /* 116ac17e cmp dword ptr [eax], 0x116cf5f8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x116cf5f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ac184 je 0x116ac1c0 */
  if (C.zf) goto L_116ac1c0;
  /* 116ac186 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ac188 mov ecx, dword ptr [0x116cf630] */
  ECX = (r32((uint32_t)(0x116cf630)));
  /* 116ac18e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116ac190 push edx */
  push32((uint32_t)(EDX));
  /* 116ac191 call 0x1169ccb0 */
  push32(0x116ac196u); f_1169ccb0();
  /* 116ac196 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac199 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ac19b mov eax, dword ptr [0x116cf630] */
  EAX = (r32((uint32_t)(0x116cf630)));
  /* 116ac1a0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116ac1a3 push ecx */
  push32((uint32_t)(ECX));
  /* 116ac1a4 call 0x1169ccb0 */
  push32(0x116ac1a9u); f_1169ccb0();
  /* 116ac1a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac1ac push 2 */
  push32((uint32_t)(0x2u));
  /* 116ac1ae mov edx, dword ptr [0x116cf630] */
  EDX = (r32((uint32_t)(0x116cf630)));
  /* 116ac1b4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 116ac1b7 push eax */
  push32((uint32_t)(EAX));
  /* 116ac1b8 call 0x1169ccb0 */
  push32(0x116ac1bdu); f_1169ccb0();
  /* 116ac1bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116ac1c0:;
  /* 116ac1c0 mov ecx, dword ptr [0x116cf630] */
  ECX = (r32((uint32_t)(0x116cf630)));
  /* 116ac1c6 mov edx, dword ptr [0x116d084c] */
  EDX = (r32((uint32_t)(0x116d084c)));
  /* 116ac1cc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 116ac1ce mov eax, dword ptr [0x116cf630] */
  EAX = (r32((uint32_t)(0x116cf630)));
  /* 116ac1d3 mov ecx, dword ptr [0x116d0850] */
  ECX = (r32((uint32_t)(0x116d0850)));
  /* 116ac1d9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 116ac1dc mov edx, dword ptr [0x116cf630] */
  EDX = (r32((uint32_t)(0x116cf630)));
  /* 116ac1e2 mov eax, dword ptr [0x116d0854] */
  EAX = (r32((uint32_t)(0x116d0854)));
  /* 116ac1e7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 116ac1ea mov ecx, dword ptr [0x116cf630] */
  ECX = (r32((uint32_t)(0x116cf630)));
  /* 116ac1f0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116ac1f2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116ac1f4 mov byte ptr [0x116ce264], al */
  w8((uint32_t)(0x116ce264), (AL));
  /* 116ac1f9 mov dword ptr [0x116ce268], 1 */
  w32((uint32_t)(0x116ce268), (0x1u));
  /* 116ac203 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ac205 jmp 0x116ac332 */
  goto L_116ac332;
L_116ac20a:;
  /* 116ac20a push 2 */
  push32((uint32_t)(0x2u));
  /* 116ac20c mov ecx, dword ptr [0x116d084c] */
  ECX = (r32((uint32_t)(0x116d084c)));
  /* 116ac212 push ecx */
  push32((uint32_t)(ECX));
  /* 116ac213 call 0x1169ccb0 */
  push32(0x116ac218u); f_1169ccb0();
  /* 116ac218 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac21b push 2 */
  push32((uint32_t)(0x2u));
  /* 116ac21d mov edx, dword ptr [0x116d0850] */
  EDX = (r32((uint32_t)(0x116d0850)));
  /* 116ac223 push edx */
  push32((uint32_t)(EDX));
  /* 116ac224 call 0x1169ccb0 */
  push32(0x116ac229u); f_1169ccb0();
  /* 116ac229 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac22c push 2 */
  push32((uint32_t)(0x2u));
  /* 116ac22e mov eax, dword ptr [0x116d0854] */
  EAX = (r32((uint32_t)(0x116d0854)));
  /* 116ac233 push eax */
  push32((uint32_t)(EAX));
  /* 116ac234 call 0x1169ccb0 */
  push32(0x116ac239u); f_1169ccb0();
  /* 116ac239 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac23c mov dword ptr [0x116d084c], 0 */
  w32((uint32_t)(0x116d084c), (0x0u));
  /* 116ac246 mov dword ptr [0x116d0850], 0 */
  w32((uint32_t)(0x116d0850), (0x0u));
  /* 116ac250 mov dword ptr [0x116d0854], 0 */
  w32((uint32_t)(0x116d0854), (0x0u));
  /* 116ac25a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 116ac25f push 0x116cba10 */
  push32((uint32_t)(0x116cba10u));
  /* 116ac264 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ac266 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ac268 call 0x1169c220 */
  push32(0x116ac26du); f_1169c220();
  /* 116ac26d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac270 mov ecx, dword ptr [0x116cf630] */
  ECX = (r32((uint32_t)(0x116cf630)));
  /* 116ac276 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116ac278 mov edx, dword ptr [0x116cf630] */
  EDX = (r32((uint32_t)(0x116cf630)));
  /* 116ac27e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ac281 jne 0x116ac28b */
  if (!C.zf) goto L_116ac28b;
  /* 116ac283 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ac286 jmp 0x116ac332 */
  goto L_116ac332;
L_116ac28b:;
  /* 116ac28b push 0x116cb9b0 */
  push32((uint32_t)(0x116cb9b0u));
  /* 116ac290 mov eax, dword ptr [0x116cf630] */
  EAX = (r32((uint32_t)(0x116cf630)));
  /* 116ac295 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116ac297 push ecx */
  push32((uint32_t)(ECX));
  /* 116ac298 call 0x1169a7d0 */
  push32(0x116ac29du); f_1169a7d0();
  /* 116ac29d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac2a0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 116ac2a5 push 0x116cba10 */
  push32((uint32_t)(0x116cba10u));
  /* 116ac2aa push 2 */
  push32((uint32_t)(0x2u));
  /* 116ac2ac push 2 */
  push32((uint32_t)(0x2u));
  /* 116ac2ae call 0x1169c220 */
  push32(0x116ac2b3u); f_1169c220();
  /* 116ac2b3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac2b6 mov edx, dword ptr [0x116cf630] */
  EDX = (r32((uint32_t)(0x116cf630)));
  /* 116ac2bc mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 116ac2bf mov eax, dword ptr [0x116cf630] */
  EAX = (r32((uint32_t)(0x116cf630)));
  /* 116ac2c4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ac2c8 jne 0x116ac2cf */
  if (!C.zf) goto L_116ac2cf;
  /* 116ac2ca or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ac2cd jmp 0x116ac332 */
  goto L_116ac332;
L_116ac2cf:;
  /* 116ac2cf mov ecx, dword ptr [0x116cf630] */
  ECX = (r32((uint32_t)(0x116cf630)));
  /* 116ac2d5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116ac2d8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 116ac2db push 0x92 */
  push32((uint32_t)(0x92u));
  /* 116ac2e0 push 0x116cba10 */
  push32((uint32_t)(0x116cba10u));
  /* 116ac2e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ac2e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ac2e9 call 0x1169c220 */
  push32(0x116ac2eeu); f_1169c220();
  /* 116ac2ee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac2f1 mov ecx, dword ptr [0x116cf630] */
  ECX = (r32((uint32_t)(0x116cf630)));
  /* 116ac2f7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 116ac2fa mov edx, dword ptr [0x116cf630] */
  EDX = (r32((uint32_t)(0x116cf630)));
  /* 116ac300 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ac304 jne 0x116ac30b */
  if (!C.zf) goto L_116ac30b;
  /* 116ac306 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ac309 jmp 0x116ac332 */
  goto L_116ac332;
L_116ac30b:;
  /* 116ac30b mov eax, dword ptr [0x116cf630] */
  EAX = (r32((uint32_t)(0x116cf630)));
  /* 116ac310 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116ac313 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 116ac316 mov edx, dword ptr [0x116cf630] */
  EDX = (r32((uint32_t)(0x116cf630)));
  /* 116ac31c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116ac31e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116ac320 mov byte ptr [0x116ce264], cl */
  w8((uint32_t)(0x116ce264), (CL));
  /* 116ac326 mov dword ptr [0x116ce268], 1 */
  w32((uint32_t)(0x116ce268), (0x1u));
  /* 116ac330 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116ac332:;
  /* 116ac332 mov esp, ebp */
  ESP = (EBP);
  /* 116ac334 pop ebp */
  EBP = (pop32());
  /* 116ac335 ret  */
  ESPCHK(0x116ac090u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x116ac340 (125 bytes, 49 insns) */
void f_116ac340(void) {
  FTRACE(0x116ac340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ac340 push ebp */
  push32((uint32_t)(EBP));
  /* 116ac341 mov ebp, esp */
  EBP = (ESP);
  /* 116ac343 push ecx */
  push32((uint32_t)(ECX));
L_116ac344:;
  /* 116ac344 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac347 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116ac34a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116ac34c je 0x116ac3b9 */
  if (C.zf) goto L_116ac3b9;
  /* 116ac34e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac351 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116ac354 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ac357 jl 0x116ac37d */
  if ((C.sf!=C.of)) goto L_116ac37d;
  /* 116ac359 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac35c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116ac35f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ac362 jg 0x116ac37d */
  if ((!C.zf&&C.sf==C.of)) goto L_116ac37d;
  /* 116ac364 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac367 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116ac36a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ac36d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac370 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 116ac372 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac375 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac378 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116ac37b jmp 0x116ac3b7 */
  goto L_116ac3b7;
L_116ac37d:;
  /* 116ac37d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac380 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116ac383 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ac386 jne 0x116ac3ae */
  if (!C.zf) goto L_116ac3ae;
  /* 116ac388 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac38b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116ac38e:;
  /* 116ac38e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ac391 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ac394 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 116ac397 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 116ac399 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ac39c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac39f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116ac3a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ac3a5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116ac3a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ac3aa jne 0x116ac38e */
  if (!C.zf) goto L_116ac38e;
  /* 116ac3ac jmp 0x116ac3b7 */
  goto L_116ac3b7;
L_116ac3ae:;
  /* 116ac3ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac3b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac3b4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_116ac3b7:;
  /* 116ac3b7 jmp 0x116ac344 */
  goto L_116ac344;
L_116ac3b9:;
  /* 116ac3b9 mov esp, ebp */
  ESP = (EBP);
  /* 116ac3bb pop ebp */
  EBP = (pop32());
  /* 116ac3bc ret  */
  ESPCHK(0x116ac340u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c3c0 @ 0x116ac3c0 (304 bytes, 85 insns) */
void f_116ac3c0(void) {
  FTRACE(0x116ac3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ac3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ac3c1 mov ebp, esp */
  EBP = (ESP);
  /* 116ac3c3 push ecx */
  push32((uint32_t)(ECX));
  /* 116ac3c4 cmp dword ptr [0x116d082c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d082c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ac3cb je 0x116ac48c */
  if (C.zf) goto L_116ac48c;
  /* 116ac3d1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 116ac3d3 push 0x116cba1c */
  push32((uint32_t)(0x116cba1cu));
  /* 116ac3d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ac3da push 0x30 */
  push32((uint32_t)(0x30u));
  /* 116ac3dc push 1 */
  push32((uint32_t)(0x1u));
  /* 116ac3de call 0x1169c630 */
  push32(0x116ac3e3u); f_1169c630();
  /* 116ac3e3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac3e6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116ac3e9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ac3ed jne 0x116ac3f9 */
  if (!C.zf) goto L_116ac3f9;
  /* 116ac3ef mov eax, 1 */
  EAX = (0x1u);
  /* 116ac3f4 jmp 0x116ac4ec */
  goto L_116ac4ec;
L_116ac3f9:;
  /* 116ac3f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ac3fc push eax */
  push32((uint32_t)(EAX));
  /* 116ac3fd call 0x116ac4f0 */
  push32(0x116ac402u); f_116ac4f0();
  /* 116ac402 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac405 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ac407 je 0x116ac42d */
  if (C.zf) goto L_116ac42d;
  /* 116ac409 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ac40c push ecx */
  push32((uint32_t)(ECX));
  /* 116ac40d call 0x116ac780 */
  push32(0x116ac412u); f_116ac780();
  /* 116ac412 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac415 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ac417 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ac41a push edx */
  push32((uint32_t)(EDX));
  /* 116ac41b call 0x1169ccb0 */
  push32(0x116ac420u); f_1169ccb0();
  /* 116ac420 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac423 mov eax, 1 */
  EAX = (0x1u);
  /* 116ac428 jmp 0x116ac4ec */
  goto L_116ac4ec;
L_116ac42d:;
  /* 116ac42d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ac430 mov ecx, dword ptr [0x116cf630] */
  ECX = (r32((uint32_t)(0x116cf630)));
  /* 116ac436 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116ac438 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116ac43a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ac43d mov ecx, dword ptr [0x116cf630] */
  ECX = (r32((uint32_t)(0x116cf630)));
  /* 116ac443 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116ac446 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 116ac449 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ac44c mov ecx, dword ptr [0x116cf630] */
  ECX = (r32((uint32_t)(0x116cf630)));
  /* 116ac452 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 116ac455 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 116ac458 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ac45b mov dword ptr [0x116cf630], eax */
  w32((uint32_t)(0x116cf630), (EAX));
  /* 116ac460 mov ecx, dword ptr [0x116d0858] */
  ECX = (r32((uint32_t)(0x116d0858)));
  /* 116ac466 push ecx */
  push32((uint32_t)(ECX));
  /* 116ac467 call 0x116ac780 */
  push32(0x116ac46cu); f_116ac780();
  /* 116ac46c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac46f push 2 */
  push32((uint32_t)(0x2u));
  /* 116ac471 mov edx, dword ptr [0x116d0858] */
  EDX = (r32((uint32_t)(0x116d0858)));
  /* 116ac477 push edx */
  push32((uint32_t)(EDX));
  /* 116ac478 call 0x1169ccb0 */
  push32(0x116ac47du); f_1169ccb0();
  /* 116ac47d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac480 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ac483 mov dword ptr [0x116d0858], eax */
  w32((uint32_t)(0x116d0858), (EAX));
  /* 116ac488 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ac48a jmp 0x116ac4ec */
  goto L_116ac4ec;
L_116ac48c:;
  /* 116ac48c mov ecx, dword ptr [0x116cf630] */
  ECX = (r32((uint32_t)(0x116cf630)));
  /* 116ac492 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116ac494 mov dword ptr [0x116cf600], edx */
  w32((uint32_t)(0x116cf600), (EDX));
  /* 116ac49a mov eax, dword ptr [0x116cf630] */
  EAX = (r32((uint32_t)(0x116cf630)));
  /* 116ac49f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116ac4a2 mov dword ptr [0x116cf604], ecx */
  w32((uint32_t)(0x116cf604), (ECX));
  /* 116ac4a8 mov edx, dword ptr [0x116cf630] */
  EDX = (r32((uint32_t)(0x116cf630)));
  /* 116ac4ae mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 116ac4b1 mov dword ptr [0x116cf608], eax */
  w32((uint32_t)(0x116cf608), (EAX));
  /* 116ac4b6 mov dword ptr [0x116cf630], 0x116cf600 */
  w32((uint32_t)(0x116cf630), (0x116cf600u));
  /* 116ac4c0 mov ecx, dword ptr [0x116d0858] */
  ECX = (r32((uint32_t)(0x116d0858)));
  /* 116ac4c6 push ecx */
  push32((uint32_t)(ECX));
  /* 116ac4c7 call 0x116ac780 */
  push32(0x116ac4ccu); f_116ac780();
  /* 116ac4cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac4cf push 2 */
  push32((uint32_t)(0x2u));
  /* 116ac4d1 mov edx, dword ptr [0x116d0858] */
  EDX = (r32((uint32_t)(0x116d0858)));
  /* 116ac4d7 push edx */
  push32((uint32_t)(EDX));
  /* 116ac4d8 call 0x1169ccb0 */
  push32(0x116ac4ddu); f_1169ccb0();
  /* 116ac4dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac4e0 mov dword ptr [0x116d0858], 0 */
  w32((uint32_t)(0x116d0858), (0x0u));
  /* 116ac4ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116ac4ec:;
  /* 116ac4ec mov esp, ebp */
  ESP = (EBP);
  /* 116ac4ee pop ebp */
  EBP = (pop32());
  /* 116ac4ef ret  */
  ESPCHK(0x116ac3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c4f0 @ 0x116ac4f0 (525 bytes, 200 insns) */
void f_116ac4f0(void) {
  FTRACE(0x116ac4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ac4f0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ac4f1 mov ebp, esp */
  EBP = (ESP);
  /* 116ac4f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ac4f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116ac4fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ac4ff mov ax, word ptr [0x116d0878] */
  AX = (r16((uint32_t)(0x116d0878)));
  /* 116ac505 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116ac508 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ac50c jne 0x116ac516 */
  if (!C.zf) goto L_116ac516;
  /* 116ac50e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ac511 jmp 0x116ac6f9 */
  goto L_116ac6f9;
L_116ac516:;
  /* 116ac516 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac519 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac51c push ecx */
  push32((uint32_t)(ECX));
  /* 116ac51d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 116ac51f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ac522 push edx */
  push32((uint32_t)(EDX));
  /* 116ac523 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ac525 call 0x116afe50 */
  push32(0x116ac52au); f_116afe50();
  /* 116ac52a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac52d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ac530 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ac532 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ac535 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac538 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac53b push edx */
  push32((uint32_t)(EDX));
  /* 116ac53c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 116ac53e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ac541 push eax */
  push32((uint32_t)(EAX));
  /* 116ac542 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ac544 call 0x116afe50 */
  push32(0x116ac549u); f_116afe50();
  /* 116ac549 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac54c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ac54f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ac551 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ac554 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac557 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac55a push edx */
  push32((uint32_t)(EDX));
  /* 116ac55b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 116ac55d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ac560 push eax */
  push32((uint32_t)(EAX));
  /* 116ac561 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ac563 call 0x116afe50 */
  push32(0x116ac568u); f_116afe50();
  /* 116ac568 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac56b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ac56e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ac570 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ac573 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac576 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac579 push edx */
  push32((uint32_t)(EDX));
  /* 116ac57a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 116ac57c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ac57f push eax */
  push32((uint32_t)(EAX));
  /* 116ac580 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ac582 call 0x116afe50 */
  push32(0x116ac587u); f_116afe50();
  /* 116ac587 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac58a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ac58d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ac58f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ac592 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac595 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac598 push edx */
  push32((uint32_t)(EDX));
  /* 116ac599 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 116ac59b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ac59e push eax */
  push32((uint32_t)(EAX));
  /* 116ac59f push 1 */
  push32((uint32_t)(0x1u));
  /* 116ac5a1 call 0x116afe50 */
  push32(0x116ac5a6u); f_116afe50();
  /* 116ac5a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac5a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ac5ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ac5ae mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ac5b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac5b4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 116ac5b7 push eax */
  push32((uint32_t)(EAX));
  /* 116ac5b8 call 0x116ac700 */
  push32(0x116ac5bdu); f_116ac700();
  /* 116ac5bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac5c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac5c3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac5c6 push ecx */
  push32((uint32_t)(ECX));
  /* 116ac5c7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 116ac5c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ac5cc push edx */
  push32((uint32_t)(EDX));
  /* 116ac5cd push 1 */
  push32((uint32_t)(0x1u));
  /* 116ac5cf call 0x116afe50 */
  push32(0x116ac5d4u); f_116afe50();
  /* 116ac5d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac5d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ac5da or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ac5dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ac5df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac5e2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac5e5 push edx */
  push32((uint32_t)(EDX));
  /* 116ac5e6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 116ac5e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ac5eb push eax */
  push32((uint32_t)(EAX));
  /* 116ac5ec push 1 */
  push32((uint32_t)(0x1u));
  /* 116ac5ee call 0x116afe50 */
  push32(0x116ac5f3u); f_116afe50();
  /* 116ac5f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac5f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ac5f9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ac5fb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ac5fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac601 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac604 push edx */
  push32((uint32_t)(EDX));
  /* 116ac605 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 116ac607 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ac60a push eax */
  push32((uint32_t)(EAX));
  /* 116ac60b push 0 */
  push32((uint32_t)(0x0u));
  /* 116ac60d call 0x116afe50 */
  push32(0x116ac612u); f_116afe50();
  /* 116ac612 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac615 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ac618 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ac61a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ac61d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac620 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac623 push edx */
  push32((uint32_t)(EDX));
  /* 116ac624 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 116ac626 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ac629 push eax */
  push32((uint32_t)(EAX));
  /* 116ac62a push 0 */
  push32((uint32_t)(0x0u));
  /* 116ac62c call 0x116afe50 */
  push32(0x116ac631u); f_116afe50();
  /* 116ac631 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac634 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ac637 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ac639 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ac63c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac63f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac642 push edx */
  push32((uint32_t)(EDX));
  /* 116ac643 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 116ac645 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ac648 push eax */
  push32((uint32_t)(EAX));
  /* 116ac649 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ac64b call 0x116afe50 */
  push32(0x116ac650u); f_116afe50();
  /* 116ac650 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac653 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ac656 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ac658 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ac65b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac65e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac661 push edx */
  push32((uint32_t)(EDX));
  /* 116ac662 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 116ac664 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ac667 push eax */
  push32((uint32_t)(EAX));
  /* 116ac668 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ac66a call 0x116afe50 */
  push32(0x116ac66fu); f_116afe50();
  /* 116ac66f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac672 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ac675 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ac677 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ac67a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac67d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac680 push edx */
  push32((uint32_t)(EDX));
  /* 116ac681 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 116ac683 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ac686 push eax */
  push32((uint32_t)(EAX));
  /* 116ac687 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ac689 call 0x116afe50 */
  push32(0x116ac68eu); f_116afe50();
  /* 116ac68e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac691 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ac694 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ac696 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ac699 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac69c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac69f push edx */
  push32((uint32_t)(EDX));
  /* 116ac6a0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 116ac6a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ac6a5 push eax */
  push32((uint32_t)(EAX));
  /* 116ac6a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ac6a8 call 0x116afe50 */
  push32(0x116ac6adu); f_116afe50();
  /* 116ac6ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac6b0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ac6b3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ac6b5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ac6b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac6bb add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac6be push edx */
  push32((uint32_t)(EDX));
  /* 116ac6bf push 0x52 */
  push32((uint32_t)(0x52u));
  /* 116ac6c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ac6c4 push eax */
  push32((uint32_t)(EAX));
  /* 116ac6c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ac6c7 call 0x116afe50 */
  push32(0x116ac6ccu); f_116afe50();
  /* 116ac6cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac6cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ac6d2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ac6d4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ac6d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac6da add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac6dd push edx */
  push32((uint32_t)(EDX));
  /* 116ac6de push 0x53 */
  push32((uint32_t)(0x53u));
  /* 116ac6e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ac6e3 push eax */
  push32((uint32_t)(EAX));
  /* 116ac6e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ac6e6 call 0x116afe50 */
  push32(0x116ac6ebu); f_116afe50();
  /* 116ac6eb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac6ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ac6f1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ac6f3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ac6f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_116ac6f9:;
  /* 116ac6f9 mov esp, ebp */
  ESP = (EBP);
  /* 116ac6fb pop ebp */
  EBP = (pop32());
  /* 116ac6fc ret  */
  ESPCHK(0x116ac4f0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x116ac700 (125 bytes, 49 insns) */
void f_116ac700(void) {
  FTRACE(0x116ac700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ac700 push ebp */
  push32((uint32_t)(EBP));
  /* 116ac701 mov ebp, esp */
  EBP = (ESP);
  /* 116ac703 push ecx */
  push32((uint32_t)(ECX));
L_116ac704:;
  /* 116ac704 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac707 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116ac70a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116ac70c je 0x116ac779 */
  if (C.zf) goto L_116ac779;
  /* 116ac70e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac711 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116ac714 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ac717 jl 0x116ac73d */
  if ((C.sf!=C.of)) goto L_116ac73d;
  /* 116ac719 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac71c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116ac71f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ac722 jg 0x116ac73d */
  if ((!C.zf&&C.sf==C.of)) goto L_116ac73d;
  /* 116ac724 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac727 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116ac72a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ac72d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac730 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 116ac732 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac735 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac738 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116ac73b jmp 0x116ac777 */
  goto L_116ac777;
L_116ac73d:;
  /* 116ac73d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac740 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116ac743 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ac746 jne 0x116ac76e */
  if (!C.zf) goto L_116ac76e;
  /* 116ac748 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac74b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116ac74e:;
  /* 116ac74e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ac751 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ac754 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 116ac757 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 116ac759 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ac75c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac75f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116ac762 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ac765 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116ac768 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ac76a jne 0x116ac74e */
  if (!C.zf) goto L_116ac74e;
  /* 116ac76c jmp 0x116ac777 */
  goto L_116ac777;
L_116ac76e:;
  /* 116ac76e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac771 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac774 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_116ac777:;
  /* 116ac777 jmp 0x116ac704 */
  goto L_116ac704;
L_116ac779:;
  /* 116ac779 mov esp, ebp */
  ESP = (EBP);
  /* 116ac77b pop ebp */
  EBP = (pop32());
  /* 116ac77c ret  */
  ESPCHK(0x116ac700u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c780 @ 0x116ac780 (147 bytes, 52 insns) */
void f_116ac780(void) {
  FTRACE(0x116ac780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ac780 push ebp */
  push32((uint32_t)(EBP));
  /* 116ac781 mov ebp, esp */
  EBP = (ESP);
  /* 116ac783 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ac787 jne 0x116ac78e */
  if (!C.zf) goto L_116ac78e;
  /* 116ac789 jmp 0x116ac811 */
  goto L_116ac811;
L_116ac78e:;
  /* 116ac78e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac791 cmp dword ptr [eax + 0xc], 0x116d08b4 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x116d08b4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ac798 je 0x116ac811 */
  if (C.zf) goto L_116ac811;
  /* 116ac79a push 2 */
  push32((uint32_t)(0x2u));
  /* 116ac79c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac79f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116ac7a2 push edx */
  push32((uint32_t)(EDX));
  /* 116ac7a3 call 0x1169ccb0 */
  push32(0x116ac7a8u); f_1169ccb0();
  /* 116ac7a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac7ab push 2 */
  push32((uint32_t)(0x2u));
  /* 116ac7ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac7b0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116ac7b3 push ecx */
  push32((uint32_t)(ECX));
  /* 116ac7b4 call 0x1169ccb0 */
  push32(0x116ac7b9u); f_1169ccb0();
  /* 116ac7b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac7bc push 2 */
  push32((uint32_t)(0x2u));
  /* 116ac7be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac7c1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 116ac7c4 push eax */
  push32((uint32_t)(EAX));
  /* 116ac7c5 call 0x1169ccb0 */
  push32(0x116ac7cau); f_1169ccb0();
  /* 116ac7ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac7cd push 2 */
  push32((uint32_t)(0x2u));
  /* 116ac7cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac7d2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 116ac7d5 push edx */
  push32((uint32_t)(EDX));
  /* 116ac7d6 call 0x1169ccb0 */
  push32(0x116ac7dbu); f_1169ccb0();
  /* 116ac7db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac7de push 2 */
  push32((uint32_t)(0x2u));
  /* 116ac7e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac7e3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 116ac7e6 push ecx */
  push32((uint32_t)(ECX));
  /* 116ac7e7 call 0x1169ccb0 */
  push32(0x116ac7ecu); f_1169ccb0();
  /* 116ac7ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac7ef push 2 */
  push32((uint32_t)(0x2u));
  /* 116ac7f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac7f4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 116ac7f7 push eax */
  push32((uint32_t)(EAX));
  /* 116ac7f8 call 0x1169ccb0 */
  push32(0x116ac7fdu); f_1169ccb0();
  /* 116ac7fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac800 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ac802 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ac805 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 116ac808 push edx */
  push32((uint32_t)(EDX));
  /* 116ac809 call 0x1169ccb0 */
  push32(0x116ac80eu); f_1169ccb0();
  /* 116ac80e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116ac811:;
  /* 116ac811 pop ebp */
  EBP = (pop32());
  /* 116ac812 ret  */
  ESPCHK(0x116ac780u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c820 @ 0x116ac820 (928 bytes, 284 insns) */
void f_116ac820(void) {
  FTRACE(0x116ac820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ac820 push ebp */
  push32((uint32_t)(EBP));
  /* 116ac821 mov ebp, esp */
  EBP = (ESP);
  /* 116ac823 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ac826 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 116ac82d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 116ac834 cmp dword ptr [0x116d0828], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0828))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ac83b je 0x116acb71 */
  if (C.zf) goto L_116acb71;
  /* 116ac841 cmp dword ptr [0x116d0838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ac848 jne 0x116ac870 */
  if (!C.zf) goto L_116ac870;
  /* 116ac84a push 0x116d0838 */
  push32((uint32_t)(0x116d0838u));
  /* 116ac84f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 116ac854 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ac856 mov ax, word ptr [0x116d0870] */
  AX = (r16((uint32_t)(0x116d0870)));
  /* 116ac85c push eax */
  push32((uint32_t)(EAX));
  /* 116ac85d push 0 */
  push32((uint32_t)(0x0u));
  /* 116ac85f call 0x116afe50 */
  push32(0x116ac864u); f_116afe50();
  /* 116ac864 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac867 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ac869 je 0x116ac870 */
  if (C.zf) goto L_116ac870;
  /* 116ac86b jmp 0x116acb32 */
  goto L_116acb32;
L_116ac870:;
  /* 116ac870 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 116ac872 push 0x116cba28 */
  push32((uint32_t)(0x116cba28u));
  /* 116ac877 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ac879 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 116ac87e call 0x1169c220 */
  push32(0x116ac883u); f_1169c220();
  /* 116ac883 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac886 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 116ac889 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 116ac88b push 0x116cba28 */
  push32((uint32_t)(0x116cba28u));
  /* 116ac890 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ac892 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 116ac897 call 0x1169c220 */
  push32(0x116ac89cu); f_1169c220();
  /* 116ac89c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac89f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 116ac8a2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 116ac8a4 push 0x116cba28 */
  push32((uint32_t)(0x116cba28u));
  /* 116ac8a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ac8ab push 0x101 */
  push32((uint32_t)(0x101u));
  /* 116ac8b0 call 0x1169c220 */
  push32(0x116ac8b5u); f_1169c220();
  /* 116ac8b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac8b8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 116ac8bb push 0x62 */
  push32((uint32_t)(0x62u));
  /* 116ac8bd push 0x116cba28 */
  push32((uint32_t)(0x116cba28u));
  /* 116ac8c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ac8c4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 116ac8c9 call 0x1169c220 */
  push32(0x116ac8ceu); f_1169c220();
  /* 116ac8ce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac8d1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 116ac8d4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ac8d8 je 0x116ac8ec */
  if (C.zf) goto L_116ac8ec;
  /* 116ac8da cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ac8de je 0x116ac8ec */
  if (C.zf) goto L_116ac8ec;
  /* 116ac8e0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ac8e4 je 0x116ac8ec */
  if (C.zf) goto L_116ac8ec;
  /* 116ac8e6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ac8ea jne 0x116ac8f1 */
  if (!C.zf) goto L_116ac8f1;
L_116ac8ec:;
  /* 116ac8ec jmp 0x116acb32 */
  goto L_116acb32;
L_116ac8f1:;
  /* 116ac8f1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116ac8f4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 116ac8f7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 116ac8fe jmp 0x116ac909 */
  goto L_116ac909;
L_116ac900:;
  /* 116ac900 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 116ac903 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac906 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_116ac909:;
  /* 116ac909 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ac910 jge 0x116ac925 */
  if ((C.sf==C.of)) goto L_116ac925;
  /* 116ac912 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116ac915 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 116ac918 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 116ac91a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116ac91d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac920 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 116ac923 jmp 0x116ac900 */
  goto L_116ac900;
L_116ac925:;
  /* 116ac925 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 116ac928 push eax */
  push32((uint32_t)(EAX));
  /* 116ac929 mov ecx, dword ptr [0x116d0838] */
  ECX = (r32((uint32_t)(0x116d0838)));
  /* 116ac92f push ecx */
  push32((uint32_t)(ECX));
  /* 116ac930 call dword ptr [0x116d338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d338c))), 0x116ac936u);
  /* 116ac936 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ac938 jne 0x116ac93f */
  if (!C.zf) goto L_116ac93f;
  /* 116ac93a jmp 0x116acb32 */
  goto L_116acb32;
L_116ac93f:;
  /* 116ac93f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ac943 jbe 0x116ac94a */
  if ((C.cf||C.zf)) goto L_116ac94a;
  /* 116ac945 jmp 0x116acb32 */
  goto L_116acb32;
L_116ac94a:;
  /* 116ac94a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116ac94d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116ac953 mov dword ptr [0x116ce260], edx */
  w32((uint32_t)(0x116ce260), (EDX));
  /* 116ac959 cmp dword ptr [0x116ce260], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116ce260))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ac960 jle 0x116ac9b9 */
  if ((C.zf||C.sf!=C.of)) goto L_116ac9b9;
  /* 116ac962 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 116ac965 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116ac968 jmp 0x116ac973 */
  goto L_116ac973;
L_116ac96a:;
  /* 116ac96a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116ac96d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac970 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_116ac973:;
  /* 116ac973 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116ac976 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ac978 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116ac97a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ac97c je 0x116ac9b9 */
  if (C.zf) goto L_116ac9b9;
  /* 116ac97e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116ac981 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116ac983 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 116ac986 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116ac988 je 0x116ac9b9 */
  if (C.zf) goto L_116ac9b9;
  /* 116ac98a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116ac98d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116ac98f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116ac991 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 116ac994 jmp 0x116ac99f */
  goto L_116ac99f;
L_116ac996:;
  /* 116ac996 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 116ac999 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac99c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_116ac99f:;
  /* 116ac99f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116ac9a2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116ac9a4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 116ac9a7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ac9aa jg 0x116ac9b7 */
  if ((!C.zf&&C.sf==C.of)) goto L_116ac9b7;
  /* 116ac9ac mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116ac9af add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac9b2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 116ac9b5 jmp 0x116ac996 */
  goto L_116ac996;
L_116ac9b7:;
  /* 116ac9b7 jmp 0x116ac96a */
  goto L_116ac96a;
L_116ac9b9:;
  /* 116ac9b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ac9bb push 0 */
  push32((uint32_t)(0x0u));
  /* 116ac9bd push 0 */
  push32((uint32_t)(0x0u));
  /* 116ac9bf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116ac9c2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac9c5 push eax */
  push32((uint32_t)(EAX));
  /* 116ac9c6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 116ac9cb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116ac9ce push ecx */
  push32((uint32_t)(ECX));
  /* 116ac9cf push 1 */
  push32((uint32_t)(0x1u));
  /* 116ac9d1 call 0x116a8540 */
  push32(0x116ac9d6u); f_116a8540();
  /* 116ac9d6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac9d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ac9db jne 0x116ac9e2 */
  if (!C.zf) goto L_116ac9e2;
  /* 116ac9dd jmp 0x116acb32 */
  goto L_116acb32;
L_116ac9e2:;
  /* 116ac9e2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116ac9e5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 116ac9ea mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116ac9ed mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 116ac9f0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 116ac9f7 jmp 0x116aca02 */
  goto L_116aca02;
L_116ac9f9:;
  /* 116ac9f9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116ac9fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ac9ff mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_116aca02:;
  /* 116aca02 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aca09 jge 0x116aca20 */
  if ((C.sf==C.of)) goto L_116aca20;
  /* 116aca0b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116aca0e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 116aca12 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 116aca15 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116aca18 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aca1b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 116aca1e jmp 0x116ac9f9 */
  goto L_116ac9f9;
L_116aca20:;
  /* 116aca20 push 0 */
  push32((uint32_t)(0x0u));
  /* 116aca22 push 0 */
  push32((uint32_t)(0x0u));
  /* 116aca24 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116aca27 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aca2a push edx */
  push32((uint32_t)(EDX));
  /* 116aca2b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 116aca30 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116aca33 push eax */
  push32((uint32_t)(EAX));
  /* 116aca34 push 1 */
  push32((uint32_t)(0x1u));
  /* 116aca36 call 0x116b00f0 */
  push32(0x116aca3bu); f_116b00f0();
  /* 116aca3b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aca3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116aca40 jne 0x116aca47 */
  if (!C.zf) goto L_116aca47;
  /* 116aca42 jmp 0x116acb32 */
  goto L_116acb32;
L_116aca47:;
  /* 116aca47 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116aca4a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 116aca4f cmp dword ptr [0x116ce260], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116ce260))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aca56 jle 0x116acab3 */
  if ((C.zf||C.sf!=C.of)) goto L_116acab3;
  /* 116aca58 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 116aca5b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 116aca5e jmp 0x116aca69 */
  goto L_116aca69;
L_116aca60:;
  /* 116aca60 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116aca63 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aca66 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_116aca69:;
  /* 116aca69 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116aca6c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116aca6e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116aca70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116aca72 je 0x116acab3 */
  if (C.zf) goto L_116acab3;
  /* 116aca74 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116aca77 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116aca79 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 116aca7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116aca7e je 0x116acab3 */
  if (C.zf) goto L_116acab3;
  /* 116aca80 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116aca83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116aca85 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116aca87 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 116aca8a jmp 0x116aca95 */
  goto L_116aca95;
L_116aca8c:;
  /* 116aca8c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116aca8f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aca92 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_116aca95:;
  /* 116aca95 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116aca98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116aca9a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 116aca9d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116acaa0 jg 0x116acab1 */
  if ((!C.zf&&C.sf==C.of)) goto L_116acab1;
  /* 116acaa2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116acaa5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116acaa8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 116acaaf jmp 0x116aca8c */
  goto L_116aca8c;
L_116acab1:;
  /* 116acab1 jmp 0x116aca60 */
  goto L_116aca60;
L_116acab3:;
  /* 116acab3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116acab6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116acab9 mov dword ptr [0x116ce26c], eax */
  w32((uint32_t)(0x116ce26c), (EAX));
  /* 116acabe mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116acac1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116acac4 mov dword ptr [0x116ce270], ecx */
  w32((uint32_t)(0x116ce270), (ECX));
  /* 116acaca cmp dword ptr [0x116d085c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d085c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116acad1 je 0x116acae4 */
  if (C.zf) goto L_116acae4;
  /* 116acad3 push 2 */
  push32((uint32_t)(0x2u));
  /* 116acad5 mov edx, dword ptr [0x116d085c] */
  EDX = (r32((uint32_t)(0x116d085c)));
  /* 116acadb push edx */
  push32((uint32_t)(EDX));
  /* 116acadc call 0x1169ccb0 */
  push32(0x116acae1u); f_1169ccb0();
  /* 116acae1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116acae4:;
  /* 116acae4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116acae7 mov dword ptr [0x116d085c], eax */
  w32((uint32_t)(0x116d085c), (EAX));
  /* 116acaec cmp dword ptr [0x116d0860], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0860))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116acaf3 je 0x116acb06 */
  if (C.zf) goto L_116acb06;
  /* 116acaf5 push 2 */
  push32((uint32_t)(0x2u));
  /* 116acaf7 mov ecx, dword ptr [0x116d0860] */
  ECX = (r32((uint32_t)(0x116d0860)));
  /* 116acafd push ecx */
  push32((uint32_t)(ECX));
  /* 116acafe call 0x1169ccb0 */
  push32(0x116acb03u); f_1169ccb0();
  /* 116acb03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116acb06:;
  /* 116acb06 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116acb09 mov dword ptr [0x116d0860], edx */
  w32((uint32_t)(0x116d0860), (EDX));
  /* 116acb0f push 2 */
  push32((uint32_t)(0x2u));
  /* 116acb11 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116acb14 push eax */
  push32((uint32_t)(EAX));
  /* 116acb15 call 0x1169ccb0 */
  push32(0x116acb1au); f_1169ccb0();
  /* 116acb1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116acb1d push 2 */
  push32((uint32_t)(0x2u));
  /* 116acb1f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116acb22 push ecx */
  push32((uint32_t)(ECX));
  /* 116acb23 call 0x1169ccb0 */
  push32(0x116acb28u); f_1169ccb0();
  /* 116acb28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116acb2b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116acb2d jmp 0x116acbbc */
  goto L_116acbbc;
L_116acb32:;
  /* 116acb32 push 2 */
  push32((uint32_t)(0x2u));
  /* 116acb34 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116acb37 push edx */
  push32((uint32_t)(EDX));
  /* 116acb38 call 0x1169ccb0 */
  push32(0x116acb3du); f_1169ccb0();
  /* 116acb3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116acb40 push 2 */
  push32((uint32_t)(0x2u));
  /* 116acb42 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116acb45 push eax */
  push32((uint32_t)(EAX));
  /* 116acb46 call 0x1169ccb0 */
  push32(0x116acb4bu); f_1169ccb0();
  /* 116acb4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116acb4e push 2 */
  push32((uint32_t)(0x2u));
  /* 116acb50 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116acb53 push ecx */
  push32((uint32_t)(ECX));
  /* 116acb54 call 0x1169ccb0 */
  push32(0x116acb59u); f_1169ccb0();
  /* 116acb59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116acb5c push 2 */
  push32((uint32_t)(0x2u));
  /* 116acb5e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 116acb61 push edx */
  push32((uint32_t)(EDX));
  /* 116acb62 call 0x1169ccb0 */
  push32(0x116acb67u); f_1169ccb0();
  /* 116acb67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116acb6a mov eax, 1 */
  EAX = (0x1u);
  /* 116acb6f jmp 0x116acbbc */
  goto L_116acbbc;
L_116acb71:;
  /* 116acb71 mov dword ptr [0x116ce26c], 0x116ce276 */
  w32((uint32_t)(0x116ce26c), (0x116ce276u));
  /* 116acb7b mov dword ptr [0x116ce270], 0x116ce276 */
  w32((uint32_t)(0x116ce270), (0x116ce276u));
  /* 116acb85 push 2 */
  push32((uint32_t)(0x2u));
  /* 116acb87 mov eax, dword ptr [0x116d085c] */
  EAX = (r32((uint32_t)(0x116d085c)));
  /* 116acb8c push eax */
  push32((uint32_t)(EAX));
  /* 116acb8d call 0x1169ccb0 */
  push32(0x116acb92u); f_1169ccb0();
  /* 116acb92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116acb95 push 2 */
  push32((uint32_t)(0x2u));
  /* 116acb97 mov ecx, dword ptr [0x116d0860] */
  ECX = (r32((uint32_t)(0x116d0860)));
  /* 116acb9d push ecx */
  push32((uint32_t)(ECX));
  /* 116acb9e call 0x1169ccb0 */
  push32(0x116acba3u); f_1169ccb0();
  /* 116acba3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116acba6 mov dword ptr [0x116d085c], 0 */
  w32((uint32_t)(0x116d085c), (0x0u));
  /* 116acbb0 mov dword ptr [0x116d0860], 0 */
  w32((uint32_t)(0x116d0860), (0x0u));
  /* 116acbba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116acbbc:;
  /* 116acbbc mov esp, ebp */
  ESP = (EBP);
  /* 116acbbe pop ebp */
  EBP = (pop32());
  /* 116acbbf ret  */
  ESPCHK(0x116ac820u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cbc0 @ 0x116acbc0 (7 bytes, 5 insns) */
void f_116acbc0(void) {
  FTRACE(0x116acbc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116acbc0 push ebp */
  push32((uint32_t)(EBP));
  /* 116acbc1 mov ebp, esp */
  EBP = (ESP);
  /* 116acbc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116acbc5 pop ebp */
  EBP = (pop32());
  /* 116acbc6 ret  */
  ESPCHK(0x116acbc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cbd0 @ 0x116acbd0 (62 bytes, 35 insns) */
void f_116acbd0(void) {
  FTRACE(0x116acbd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116acbd0 push ebp */
  push32((uint32_t)(EBP));
  /* 116acbd1 mov ebp, esp */
  EBP = (ESP);
  /* 116acbd3 push esi */
  push32((uint32_t)(ESI));
  /* 116acbd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116acbd6 push eax */
  push32((uint32_t)(EAX));
  /* 116acbd7 push eax */
  push32((uint32_t)(EAX));
  /* 116acbd8 push eax */
  push32((uint32_t)(EAX));
  /* 116acbd9 push eax */
  push32((uint32_t)(EAX));
  /* 116acbda push eax */
  push32((uint32_t)(EAX));
  /* 116acbdb push eax */
  push32((uint32_t)(EAX));
  /* 116acbdc push eax */
  push32((uint32_t)(EAX));
  /* 116acbdd push eax */
  push32((uint32_t)(EAX));
  /* 116acbde mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116acbe1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_116acbe4:;
  /* 116acbe4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116acbe6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 116acbe8 je 0x116acbf1 */
  if (C.zf) goto L_116acbf1;
  /* 116acbea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 116acbeb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x116acbeb");
  /* 116acbef jmp 0x116acbe4 */
  goto L_116acbe4;
L_116acbf1:;
  /* 116acbf1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 116acbf4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116acbf7 nop  */
  /* nop */
L_116acbf8:;
  /* 116acbf8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 116acbf9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116acbfb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 116acbfd je 0x116acc06 */
  if (C.zf) goto L_116acc06;
  /* 116acbff inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 116acc00 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x116acc00");
  /* 116acc04 jae 0x116acbf8 */
  if (!C.cf) goto L_116acbf8;
L_116acc06:;
  /* 116acc06 mov eax, ecx */
  EAX = (ECX);
  /* 116acc08 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116acc0b pop esi */
  ESI = (pop32());
  /* 116acc0c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116acc0d ret  */
  ESPCHK(0x116acbd0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x116acc10 (56 bytes, 31 insns) */
void f_116acc10(void) {
  FTRACE(0x116acc10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116acc10 push ebp */
  push32((uint32_t)(EBP));
  /* 116acc11 mov ebp, esp */
  EBP = (ESP);
  /* 116acc13 push edi */
  push32((uint32_t)(EDI));
  /* 116acc14 push esi */
  push32((uint32_t)(ESI));
  /* 116acc15 push ebx */
  push32((uint32_t)(EBX));
  /* 116acc16 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116acc19 jecxz 0x116acc41 */
  x86_unimpl("jecxz @ 0x116acc19");
  /* 116acc1b mov ebx, ecx */
  EBX = (ECX);
  /* 116acc1d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 116acc20 mov esi, edi */
  ESI = (EDI);
  /* 116acc22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116acc24 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 116acc26 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 116acc28 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116acc2a mov edi, esi */
  EDI = (ESI);
  /* 116acc2c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 116acc2f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 116acc31 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 116acc34 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116acc36 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116acc39 ja 0x116acc3f */
  if ((!C.cf&&!C.zf)) goto L_116acc3f;
  /* 116acc3b je 0x116acc41 */
  if (C.zf) goto L_116acc41;
  /* 116acc3d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 116acc3e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_116acc3f:;
  /* 116acc3f not ecx */
  ECX = (~(ECX));
L_116acc41:;
  /* 116acc41 mov eax, ecx */
  EAX = (ECX);
  /* 116acc43 pop ebx */
  EBX = (pop32());
  /* 116acc44 pop esi */
  ESI = (pop32());
  /* 116acc45 pop edi */
  EDI = (pop32());
  /* 116acc46 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116acc47 ret  */
  ESPCHK(0x116acc10u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cc50 @ 0x116acc50 (58 bytes, 32 insns) */
void f_116acc50(void) {
  FTRACE(0x116acc50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116acc50 push ebp */
  push32((uint32_t)(EBP));
  /* 116acc51 mov ebp, esp */
  EBP = (ESP);
  /* 116acc53 push esi */
  push32((uint32_t)(ESI));
  /* 116acc54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116acc56 push eax */
  push32((uint32_t)(EAX));
  /* 116acc57 push eax */
  push32((uint32_t)(EAX));
  /* 116acc58 push eax */
  push32((uint32_t)(EAX));
  /* 116acc59 push eax */
  push32((uint32_t)(EAX));
  /* 116acc5a push eax */
  push32((uint32_t)(EAX));
  /* 116acc5b push eax */
  push32((uint32_t)(EAX));
  /* 116acc5c push eax */
  push32((uint32_t)(EAX));
  /* 116acc5d push eax */
  push32((uint32_t)(EAX));
  /* 116acc5e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116acc61 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_116acc64:;
  /* 116acc64 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116acc66 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 116acc68 je 0x116acc71 */
  if (C.zf) goto L_116acc71;
  /* 116acc6a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 116acc6b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x116acc6b");
  /* 116acc6f jmp 0x116acc64 */
  goto L_116acc64;
L_116acc71:;
  /* 116acc71 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_116acc74:;
  /* 116acc74 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116acc76 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 116acc78 je 0x116acc84 */
  if (C.zf) goto L_116acc84;
  /* 116acc7a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 116acc7b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x116acc7b");
  /* 116acc7f jae 0x116acc74 */
  if (!C.cf) goto L_116acc74;
  /* 116acc81 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_116acc84:;
  /* 116acc84 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116acc87 pop esi */
  ESI = (pop32());
  /* 116acc88 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116acc89 ret  */
  ESPCHK(0x116acc50u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cc90 @ 0x116acc90 (512 bytes, 147 insns) */
void f_116acc90(void) {
  FTRACE(0x116acc90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116acc90 push ebp */
  push32((uint32_t)(EBP));
  /* 116acc91 mov ebp, esp */
  EBP = (ESP);
  /* 116acc93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116acc96 cmp dword ptr [0x116d08a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d08a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116acc9d jne 0x116accc2 */
  if (!C.zf) goto L_116accc2;
  /* 116acc9f call 0x116ad760 */
  push32(0x116acca4u); f_116ad760();
  /* 116acca4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116acca6 je 0x116accb2 */
  if (C.zf) goto L_116accb2;
  /* 116acca8 mov eax, dword ptr [0x116d3358] */
  EAX = (r32((uint32_t)(0x116d3358)));
  /* 116accad mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116accb0 jmp 0x116accb9 */
  goto L_116accb9;
L_116accb2:;
  /* 116accb2 mov dword ptr [ebp - 8], 0x116ad7b0 */
  w32((uint32_t)(EBP + -0x8), (0x116ad7b0u));
L_116accb9:;
  /* 116accb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116accbc mov dword ptr [0x116d08a8], ecx */
  w32((uint32_t)(0x116d08a8), (ECX));
L_116accc2:;
  /* 116accc2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116accc6 jne 0x116accd2 */
  if (!C.zf) goto L_116accd2;
  /* 116accc8 call 0x116ad5b0 */
  push32(0x116acccdu); f_116ad5b0();
  /* 116acccd jmp 0x116acd9e */
  goto L_116acd9e;
L_116accd2:;
  /* 116accd2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116accd5 mov dword ptr [0x116d0898], edx */
  w32((uint32_t)(0x116d0898), (EDX));
  /* 116accdb cmp dword ptr [0x116d0898], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0898))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116acce2 je 0x116acd04 */
  if (C.zf) goto L_116acd04;
  /* 116acce4 mov eax, dword ptr [0x116d0898] */
  EAX = (r32((uint32_t)(0x116d0898)));
  /* 116acce9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116accec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116accee je 0x116acd04 */
  if (C.zf) goto L_116acd04;
  /* 116accf0 push 0x116d0898 */
  push32((uint32_t)(0x116d0898u));
  /* 116accf5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 116accf7 push 0x116cf330 */
  push32((uint32_t)(0x116cf330u));
  /* 116accfc call 0x116ace90 */
  push32(0x116acd01u); f_116ace90();
  /* 116acd01 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116acd04:;
  /* 116acd04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116acd07 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116acd0a mov dword ptr [0x116d089c], edx */
  w32((uint32_t)(0x116d089c), (EDX));
  /* 116acd10 cmp dword ptr [0x116d089c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d089c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116acd17 je 0x116acd39 */
  if (C.zf) goto L_116acd39;
  /* 116acd19 mov eax, dword ptr [0x116d089c] */
  EAX = (r32((uint32_t)(0x116d089c)));
  /* 116acd1e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116acd21 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116acd23 je 0x116acd39 */
  if (C.zf) goto L_116acd39;
  /* 116acd25 push 0x116d089c */
  push32((uint32_t)(0x116d089cu));
  /* 116acd2a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 116acd2c push 0x116cf278 */
  push32((uint32_t)(0x116cf278u));
  /* 116acd31 call 0x116ace90 */
  push32(0x116acd36u); f_116ace90();
  /* 116acd36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116acd39:;
  /* 116acd39 mov dword ptr [0x116d08a0], 0 */
  w32((uint32_t)(0x116d08a0), (0x0u));
  /* 116acd43 cmp dword ptr [0x116d0898], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0898))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116acd4a je 0x116acd7d */
  if (C.zf) goto L_116acd7d;
  /* 116acd4c mov edx, dword ptr [0x116d0898] */
  EDX = (r32((uint32_t)(0x116d0898)));
  /* 116acd52 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116acd55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116acd57 je 0x116acd7d */
  if (C.zf) goto L_116acd7d;
  /* 116acd59 cmp dword ptr [0x116d089c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d089c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116acd60 je 0x116acd76 */
  if (C.zf) goto L_116acd76;
  /* 116acd62 mov ecx, dword ptr [0x116d089c] */
  ECX = (r32((uint32_t)(0x116d089c)));
  /* 116acd68 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116acd6b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116acd6d je 0x116acd76 */
  if (C.zf) goto L_116acd76;
  /* 116acd6f call 0x116acf20 */
  push32(0x116acd74u); f_116acf20();
  /* 116acd74 jmp 0x116acd7b */
  goto L_116acd7b;
L_116acd76:;
  /* 116acd76 call 0x116ad310 */
  push32(0x116acd7bu); f_116ad310();
L_116acd7b:;
  /* 116acd7b jmp 0x116acd9e */
  goto L_116acd9e;
L_116acd7d:;
  /* 116acd7d cmp dword ptr [0x116d089c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d089c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116acd84 je 0x116acd99 */
  if (C.zf) goto L_116acd99;
  /* 116acd86 mov eax, dword ptr [0x116d089c] */
  EAX = (r32((uint32_t)(0x116d089c)));
  /* 116acd8b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116acd8e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116acd90 je 0x116acd99 */
  if (C.zf) goto L_116acd99;
  /* 116acd92 call 0x116ad4b0 */
  push32(0x116acd97u); f_116ad4b0();
  /* 116acd97 jmp 0x116acd9e */
  goto L_116acd9e;
L_116acd99:;
  /* 116acd99 call 0x116ad5b0 */
  push32(0x116acd9eu); f_116ad5b0();
L_116acd9e:;
  /* 116acd9e cmp dword ptr [0x116d08a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d08a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116acda5 jne 0x116acdae */
  if (!C.zf) goto L_116acdae;
  /* 116acda7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116acda9 jmp 0x116ace8c */
  goto L_116ace8c;
L_116acdae:;
  /* 116acdae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116acdb1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116acdb7 push edx */
  push32((uint32_t)(EDX));
  /* 116acdb8 call 0x116ad5e0 */
  push32(0x116acdbdu); f_116ad5e0();
  /* 116acdbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116acdc0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116acdc3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116acdc7 je 0x116acddc */
  if (C.zf) goto L_116acddc;
  /* 116acdc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116acdcc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116acdd1 push eax */
  push32((uint32_t)(EAX));
  /* 116acdd2 call dword ptr [0x116d335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d335c))), 0x116acdd8u);
  /* 116acdd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116acdda jne 0x116acde3 */
  if (!C.zf) goto L_116acde3;
L_116acddc:;
  /* 116acddc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116acdde jmp 0x116ace8c */
  goto L_116ace8c;
L_116acde3:;
  /* 116acde3 push 1 */
  push32((uint32_t)(0x1u));
  /* 116acde5 mov ecx, dword ptr [0x116d0888] */
  ECX = (r32((uint32_t)(0x116d0888)));
  /* 116acdeb push ecx */
  push32((uint32_t)(ECX));
  /* 116acdec call dword ptr [0x116d3360] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3360))), 0x116acdf2u);
  /* 116acdf2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116acdf4 jne 0x116acdfd */
  if (!C.zf) goto L_116acdfd;
  /* 116acdf6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116acdf8 jmp 0x116ace8c */
  goto L_116ace8c;
L_116acdfd:;
  /* 116acdfd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ace01 je 0x116ace28 */
  if (C.zf) goto L_116ace28;
  /* 116ace03 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ace06 mov ax, word ptr [0x116d0888] */
  AX = (r16((uint32_t)(0x116d0888)));
  /* 116ace0c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 116ace0f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ace12 mov dx, word ptr [0x116d08a4] */
  DX = (r16((uint32_t)(0x116d08a4)));
  /* 116ace19 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 116ace1d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ace20 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 116ace24 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_116ace28:;
  /* 116ace28 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ace2c je 0x116ace87 */
  if (C.zf) goto L_116ace87;
  /* 116ace2e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 116ace30 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116ace33 push edx */
  push32((uint32_t)(EDX));
  /* 116ace34 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 116ace39 mov eax, dword ptr [0x116d0888] */
  EAX = (r32((uint32_t)(0x116d0888)));
  /* 116ace3e push eax */
  push32((uint32_t)(EAX));
  /* 116ace3f call dword ptr [0x116d08a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d08a8))), 0x116ace45u);
  /* 116ace45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ace47 jne 0x116ace4d */
  if (!C.zf) goto L_116ace4d;
  /* 116ace49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ace4b jmp 0x116ace8c */
  goto L_116ace8c;
L_116ace4d:;
  /* 116ace4d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 116ace4f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116ace52 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ace55 push ecx */
  push32((uint32_t)(ECX));
  /* 116ace56 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 116ace5b mov edx, dword ptr [0x116d08a4] */
  EDX = (r32((uint32_t)(0x116d08a4)));
  /* 116ace61 push edx */
  push32((uint32_t)(EDX));
  /* 116ace62 call dword ptr [0x116d08a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d08a8))), 0x116ace68u);
  /* 116ace68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ace6a jne 0x116ace70 */
  if (!C.zf) goto L_116ace70;
  /* 116ace6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ace6e jmp 0x116ace8c */
  goto L_116ace8c;
L_116ace70:;
  /* 116ace70 push 0xa */
  push32((uint32_t)(0xau));
  /* 116ace72 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116ace75 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ace7a push eax */
  push32((uint32_t)(EAX));
  /* 116ace7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ace7e push ecx */
  push32((uint32_t)(ECX));
  /* 116ace7f call 0x116a04c0 */
  push32(0x116ace84u); f_116a04c0();
  /* 116ace84 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116ace87:;
  /* 116ace87 mov eax, 1 */
  EAX = (0x1u);
L_116ace8c:;
  /* 116ace8c mov esp, ebp */
  ESP = (EBP);
  /* 116ace8e pop ebp */
  EBP = (pop32());
  /* 116ace8f ret  */
  ESPCHK(0x116acc90u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ce90 @ 0x116ace90 (130 bytes, 47 insns) */
void f_116ace90(void) {
  FTRACE(0x116ace90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ace90 push ebp */
  push32((uint32_t)(EBP));
  /* 116ace91 mov ebp, esp */
  EBP = (ESP);
  /* 116ace93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ace96 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 116ace9d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_116acea4:;
  /* 116acea4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116acea7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aceaa jg 0x116acf0e */
  if ((!C.zf&&C.sf==C.of)) goto L_116acf0e;
  /* 116aceac cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116aceb0 je 0x116acf0e */
  if (C.zf) goto L_116acf0e;
  /* 116aceb2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116aceb5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116aceb8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116aceb9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116acebb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 116acebd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116acec0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116acec3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116acec6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 116acec9 push eax */
  push32((uint32_t)(EAX));
  /* 116aceca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116acecd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116acecf push edx */
  push32((uint32_t)(EDX));
  /* 116aced0 call 0x116b0360 */
  push32(0x116aced5u); f_116b0360();
  /* 116aced5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116aced8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116acedb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116acedf jne 0x116acef2 */
  if (!C.zf) goto L_116acef2;
  /* 116acee1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116acee4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116acee7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 116aceeb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116aceee mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116acef0 jmp 0x116acf0c */
  goto L_116acf0c;
L_116acef2:;
  /* 116acef2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116acef6 jge 0x116acf03 */
  if ((C.sf==C.of)) goto L_116acf03;
  /* 116acef8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116acefb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116acefe mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 116acf01 jmp 0x116acf0c */
  goto L_116acf0c;
L_116acf03:;
  /* 116acf03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116acf06 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116acf09 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_116acf0c:;
  /* 116acf0c jmp 0x116acea4 */
  goto L_116acea4;
L_116acf0e:;
  /* 116acf0e mov esp, ebp */
  ESP = (EBP);
  /* 116acf10 pop ebp */
  EBP = (pop32());
  /* 116acf11 ret  */
  ESPCHK(0x116ace90u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cf20 @ 0x116acf20 (186 bytes, 50 insns) */
void f_116acf20(void) {
  FTRACE(0x116acf20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116acf20 push ebp */
  push32((uint32_t)(EBP));
  /* 116acf21 mov ebp, esp */
  EBP = (ESP);
  /* 116acf23 push ecx */
  push32((uint32_t)(ECX));
  /* 116acf24 mov eax, dword ptr [0x116d0898] */
  EAX = (r32((uint32_t)(0x116d0898)));
  /* 116acf29 push eax */
  push32((uint32_t)(EAX));
  /* 116acf2a call 0x116a07b0 */
  push32(0x116acf2fu); f_116a07b0();
  /* 116acf2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116acf32 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116acf34 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116acf37 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 116acf3a mov dword ptr [0x116d0894], ecx */
  w32((uint32_t)(0x116d0894), (ECX));
  /* 116acf40 mov edx, dword ptr [0x116d089c] */
  EDX = (r32((uint32_t)(0x116d089c)));
  /* 116acf46 push edx */
  push32((uint32_t)(EDX));
  /* 116acf47 call 0x116a07b0 */
  push32(0x116acf4cu); f_116a07b0();
  /* 116acf4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116acf4f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116acf51 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116acf54 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 116acf57 mov dword ptr [0x116d088c], ecx */
  w32((uint32_t)(0x116d088c), (ECX));
  /* 116acf5d mov dword ptr [0x116d0888], 0 */
  w32((uint32_t)(0x116d0888), (0x0u));
  /* 116acf67 cmp dword ptr [0x116d0894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116acf6e je 0x116acf79 */
  if (C.zf) goto L_116acf79;
  /* 116acf70 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 116acf77 jmp 0x116acf8b */
  goto L_116acf8b;
L_116acf79:;
  /* 116acf79 mov edx, dword ptr [0x116d0898] */
  EDX = (r32((uint32_t)(0x116d0898)));
  /* 116acf7f push edx */
  push32((uint32_t)(EDX));
  /* 116acf80 call 0x116ad9c0 */
  push32(0x116acf85u); f_116ad9c0();
  /* 116acf85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116acf88 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116acf8b:;
  /* 116acf8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116acf8e mov dword ptr [0x116d0890], eax */
  w32((uint32_t)(0x116d0890), (EAX));
  /* 116acf93 push 1 */
  push32((uint32_t)(0x1u));
  /* 116acf95 push 0x116acfe0 */
  push32((uint32_t)(0x116acfe0u));
  /* 116acf9a call dword ptr [0x116d3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3354))), 0x116acfa0u);
  /* 116acfa0 mov ecx, dword ptr [0x116d08a0] */
  ECX = (r32((uint32_t)(0x116d08a0)));
  /* 116acfa6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 116acfac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116acfae je 0x116acfcc */
  if (C.zf) goto L_116acfcc;
  /* 116acfb0 mov edx, dword ptr [0x116d08a0] */
  EDX = (r32((uint32_t)(0x116d08a0)));
  /* 116acfb6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 116acfbc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116acfbe je 0x116acfcc */
  if (C.zf) goto L_116acfcc;
  /* 116acfc0 mov eax, dword ptr [0x116d08a0] */
  EAX = (r32((uint32_t)(0x116d08a0)));
  /* 116acfc5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 116acfc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116acfca jne 0x116acfd6 */
  if (!C.zf) goto L_116acfd6;
L_116acfcc:;
  /* 116acfcc mov dword ptr [0x116d08a0], 0 */
  w32((uint32_t)(0x116d08a0), (0x0u));
L_116acfd6:;
  /* 116acfd6 mov esp, ebp */
  ESP = (EBP);
  /* 116acfd8 pop ebp */
  EBP = (pop32());
  /* 116acfd9 ret  */
  ESPCHK(0x116acf20u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cfe0 @ 0x116acfe0 (804 bytes, 220 insns) */
void f_116acfe0(void) {
  FTRACE(0x116acfe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116acfe0 push ebp */
  push32((uint32_t)(EBP));
  /* 116acfe1 mov ebp, esp */
  EBP = (ESP);
  /* 116acfe3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116acfe6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116acfe9 push eax */
  push32((uint32_t)(EAX));
  /* 116acfea call 0x116ad940 */
  push32(0x116acfefu); f_116ad940();
  /* 116acfef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116acff2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 116acff5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 116acff7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 116acffa push ecx */
  push32((uint32_t)(ECX));
  /* 116acffb mov edx, dword ptr [0x116d088c] */
  EDX = (r32((uint32_t)(0x116d088c)));
  /* 116ad001 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 116ad003 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ad005 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 116ad00b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad011 push edx */
  push32((uint32_t)(EDX));
  /* 116ad012 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116ad015 push eax */
  push32((uint32_t)(EAX));
  /* 116ad016 call dword ptr [0x116d08a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d08a8))), 0x116ad01cu);
  /* 116ad01c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ad01e jne 0x116ad034 */
  if (!C.zf) goto L_116ad034;
  /* 116ad020 mov dword ptr [0x116d08a0], 0 */
  w32((uint32_t)(0x116d08a0), (0x0u));
  /* 116ad02a mov eax, 1 */
  EAX = (0x1u);
  /* 116ad02f jmp 0x116ad2fe */
  goto L_116ad2fe;
L_116ad034:;
  /* 116ad034 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 116ad037 push ecx */
  push32((uint32_t)(ECX));
  /* 116ad038 mov edx, dword ptr [0x116d089c] */
  EDX = (r32((uint32_t)(0x116d089c)));
  /* 116ad03e push edx */
  push32((uint32_t)(EDX));
  /* 116ad03f call 0x116b0360 */
  push32(0x116ad044u); f_116b0360();
  /* 116ad044 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad047 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ad049 jne 0x116ad16f */
  if (!C.zf) goto L_116ad16f;
  /* 116ad04f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 116ad051 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 116ad054 push eax */
  push32((uint32_t)(EAX));
  /* 116ad055 mov ecx, dword ptr [0x116d0894] */
  ECX = (r32((uint32_t)(0x116d0894)));
  /* 116ad05b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 116ad05d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ad05f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 116ad065 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad06b push ecx */
  push32((uint32_t)(ECX));
  /* 116ad06c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116ad06f push edx */
  push32((uint32_t)(EDX));
  /* 116ad070 call dword ptr [0x116d08a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d08a8))), 0x116ad076u);
  /* 116ad076 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ad078 jne 0x116ad08e */
  if (!C.zf) goto L_116ad08e;
  /* 116ad07a mov dword ptr [0x116d08a0], 0 */
  w32((uint32_t)(0x116d08a0), (0x0u));
  /* 116ad084 mov eax, 1 */
  EAX = (0x1u);
  /* 116ad089 jmp 0x116ad2fe */
  goto L_116ad2fe;
L_116ad08e:;
  /* 116ad08e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 116ad091 push eax */
  push32((uint32_t)(EAX));
  /* 116ad092 mov ecx, dword ptr [0x116d0898] */
  ECX = (r32((uint32_t)(0x116d0898)));
  /* 116ad098 push ecx */
  push32((uint32_t)(ECX));
  /* 116ad099 call 0x116b0360 */
  push32(0x116ad09eu); f_116b0360();
  /* 116ad09e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad0a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ad0a3 jne 0x116ad0d0 */
  if (!C.zf) goto L_116ad0d0;
  /* 116ad0a5 mov edx, dword ptr [0x116d08a0] */
  EDX = (r32((uint32_t)(0x116d08a0)));
  /* 116ad0ab or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 116ad0b1 mov dword ptr [0x116d08a0], edx */
  w32((uint32_t)(0x116d08a0), (EDX));
  /* 116ad0b7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116ad0ba mov dword ptr [0x116d08a4], eax */
  w32((uint32_t)(0x116d08a4), (EAX));
  /* 116ad0bf mov ecx, dword ptr [0x116d08a4] */
  ECX = (r32((uint32_t)(0x116d08a4)));
  /* 116ad0c5 mov dword ptr [0x116d0888], ecx */
  w32((uint32_t)(0x116d0888), (ECX));
  /* 116ad0cb jmp 0x116ad16f */
  goto L_116ad16f;
L_116ad0d0:;
  /* 116ad0d0 mov edx, dword ptr [0x116d08a0] */
  EDX = (r32((uint32_t)(0x116d08a0)));
  /* 116ad0d6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 116ad0d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116ad0db jne 0x116ad16f */
  if (!C.zf) goto L_116ad16f;
  /* 116ad0e1 cmp dword ptr [0x116d0890], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0890))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad0e8 je 0x116ad13d */
  if (C.zf) goto L_116ad13d;
  /* 116ad0ea mov eax, dword ptr [0x116d0890] */
  EAX = (r32((uint32_t)(0x116d0890)));
  /* 116ad0ef push eax */
  push32((uint32_t)(EAX));
  /* 116ad0f0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 116ad0f3 push ecx */
  push32((uint32_t)(ECX));
  /* 116ad0f4 mov edx, dword ptr [0x116d0898] */
  EDX = (r32((uint32_t)(0x116d0898)));
  /* 116ad0fa push edx */
  push32((uint32_t)(EDX));
  /* 116ad0fb call 0x116b0430 */
  push32(0x116ad100u); f_116b0430();
  /* 116ad100 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad103 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ad105 jne 0x116ad13d */
  if (!C.zf) goto L_116ad13d;
  /* 116ad107 mov eax, dword ptr [0x116d08a0] */
  EAX = (r32((uint32_t)(0x116d08a0)));
  /* 116ad10c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 116ad10e mov dword ptr [0x116d08a0], eax */
  w32((uint32_t)(0x116d08a0), (EAX));
  /* 116ad113 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116ad116 mov dword ptr [0x116d08a4], ecx */
  w32((uint32_t)(0x116d08a4), (ECX));
  /* 116ad11c mov edx, dword ptr [0x116d0898] */
  EDX = (r32((uint32_t)(0x116d0898)));
  /* 116ad122 push edx */
  push32((uint32_t)(EDX));
  /* 116ad123 call 0x116a07b0 */
  push32(0x116ad128u); f_116a07b0();
  /* 116ad128 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad12b cmp eax, dword ptr [0x116d0890] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x116d0890))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad131 jne 0x116ad13b */
  if (!C.zf) goto L_116ad13b;
  /* 116ad133 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116ad136 mov dword ptr [0x116d0888], eax */
  w32((uint32_t)(0x116d0888), (EAX));
L_116ad13b:;
  /* 116ad13b jmp 0x116ad16f */
  goto L_116ad16f;
L_116ad13d:;
  /* 116ad13d mov ecx, dword ptr [0x116d08a0] */
  ECX = (r32((uint32_t)(0x116d08a0)));
  /* 116ad143 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116ad146 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116ad148 jne 0x116ad16f */
  if (!C.zf) goto L_116ad16f;
  /* 116ad14a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116ad14d push edx */
  push32((uint32_t)(EDX));
  /* 116ad14e call 0x116ad680 */
  push32(0x116ad153u); f_116ad680();
  /* 116ad153 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad156 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ad158 je 0x116ad16f */
  if (C.zf) goto L_116ad16f;
  /* 116ad15a mov eax, dword ptr [0x116d08a0] */
  EAX = (r32((uint32_t)(0x116d08a0)));
  /* 116ad15f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 116ad161 mov dword ptr [0x116d08a0], eax */
  w32((uint32_t)(0x116d08a0), (EAX));
  /* 116ad166 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116ad169 mov dword ptr [0x116d08a4], ecx */
  w32((uint32_t)(0x116d08a4), (ECX));
L_116ad16f:;
  /* 116ad16f mov edx, dword ptr [0x116d08a0] */
  EDX = (r32((uint32_t)(0x116d08a0)));
  /* 116ad175 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 116ad17b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad181 je 0x116ad2f1 */
  if (C.zf) goto L_116ad2f1;
  /* 116ad187 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 116ad189 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 116ad18c push eax */
  push32((uint32_t)(EAX));
  /* 116ad18d mov ecx, dword ptr [0x116d0894] */
  ECX = (r32((uint32_t)(0x116d0894)));
  /* 116ad193 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 116ad195 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ad197 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 116ad19d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad1a3 push ecx */
  push32((uint32_t)(ECX));
  /* 116ad1a4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116ad1a7 push edx */
  push32((uint32_t)(EDX));
  /* 116ad1a8 call dword ptr [0x116d08a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d08a8))), 0x116ad1aeu);
  /* 116ad1ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ad1b0 jne 0x116ad1c6 */
  if (!C.zf) goto L_116ad1c6;
  /* 116ad1b2 mov dword ptr [0x116d08a0], 0 */
  w32((uint32_t)(0x116d08a0), (0x0u));
  /* 116ad1bc mov eax, 1 */
  EAX = (0x1u);
  /* 116ad1c1 jmp 0x116ad2fe */
  goto L_116ad2fe;
L_116ad1c6:;
  /* 116ad1c6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 116ad1c9 push eax */
  push32((uint32_t)(EAX));
  /* 116ad1ca mov ecx, dword ptr [0x116d0898] */
  ECX = (r32((uint32_t)(0x116d0898)));
  /* 116ad1d0 push ecx */
  push32((uint32_t)(ECX));
  /* 116ad1d1 call 0x116b0360 */
  push32(0x116ad1d6u); f_116b0360();
  /* 116ad1d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad1d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ad1db jne 0x116ad290 */
  if (!C.zf) goto L_116ad290;
  /* 116ad1e1 mov edx, dword ptr [0x116d08a0] */
  EDX = (r32((uint32_t)(0x116d08a0)));
  /* 116ad1e7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 116ad1ea mov dword ptr [0x116d08a0], edx */
  w32((uint32_t)(0x116d08a0), (EDX));
  /* 116ad1f0 cmp dword ptr [0x116d0894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad1f7 je 0x116ad21a */
  if (C.zf) goto L_116ad21a;
  /* 116ad1f9 mov eax, dword ptr [0x116d08a0] */
  EAX = (r32((uint32_t)(0x116d08a0)));
  /* 116ad1fe or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 116ad201 mov dword ptr [0x116d08a0], eax */
  w32((uint32_t)(0x116d08a0), (EAX));
  /* 116ad206 cmp dword ptr [0x116d0888], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0888))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad20d jne 0x116ad218 */
  if (!C.zf) goto L_116ad218;
  /* 116ad20f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116ad212 mov dword ptr [0x116d0888], ecx */
  w32((uint32_t)(0x116d0888), (ECX));
L_116ad218:;
  /* 116ad218 jmp 0x116ad28e */
  goto L_116ad28e;
L_116ad21a:;
  /* 116ad21a cmp dword ptr [0x116d0890], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0890))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad221 je 0x116ad26f */
  if (C.zf) goto L_116ad26f;
  /* 116ad223 mov edx, dword ptr [0x116d0898] */
  EDX = (r32((uint32_t)(0x116d0898)));
  /* 116ad229 push edx */
  push32((uint32_t)(EDX));
  /* 116ad22a call 0x116a07b0 */
  push32(0x116ad22fu); f_116a07b0();
  /* 116ad22f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad232 cmp eax, dword ptr [0x116d0890] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x116d0890))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad238 jne 0x116ad26f */
  if (!C.zf) goto L_116ad26f;
  /* 116ad23a push 1 */
  push32((uint32_t)(0x1u));
  /* 116ad23c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116ad23f push eax */
  push32((uint32_t)(EAX));
  /* 116ad240 call 0x116ad6d0 */
  push32(0x116ad245u); f_116ad6d0();
  /* 116ad245 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad248 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ad24a je 0x116ad26d */
  if (C.zf) goto L_116ad26d;
  /* 116ad24c mov ecx, dword ptr [0x116d08a0] */
  ECX = (r32((uint32_t)(0x116d08a0)));
  /* 116ad252 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 116ad255 mov dword ptr [0x116d08a0], ecx */
  w32((uint32_t)(0x116d08a0), (ECX));
  /* 116ad25b cmp dword ptr [0x116d0888], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0888))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad262 jne 0x116ad26d */
  if (!C.zf) goto L_116ad26d;
  /* 116ad264 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116ad267 mov dword ptr [0x116d0888], edx */
  w32((uint32_t)(0x116d0888), (EDX));
L_116ad26d:;
  /* 116ad26d jmp 0x116ad28e */
  goto L_116ad28e;
L_116ad26f:;
  /* 116ad26f mov eax, dword ptr [0x116d08a0] */
  EAX = (r32((uint32_t)(0x116d08a0)));
  /* 116ad274 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 116ad277 mov dword ptr [0x116d08a0], eax */
  w32((uint32_t)(0x116d08a0), (EAX));
  /* 116ad27c cmp dword ptr [0x116d0888], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0888))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad283 jne 0x116ad28e */
  if (!C.zf) goto L_116ad28e;
  /* 116ad285 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116ad288 mov dword ptr [0x116d0888], ecx */
  w32((uint32_t)(0x116d0888), (ECX));
L_116ad28e:;
  /* 116ad28e jmp 0x116ad2f1 */
  goto L_116ad2f1;
L_116ad290:;
  /* 116ad290 cmp dword ptr [0x116d0894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad297 jne 0x116ad2f1 */
  if (!C.zf) goto L_116ad2f1;
  /* 116ad299 cmp dword ptr [0x116d0890], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0890))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad2a0 je 0x116ad2f1 */
  if (C.zf) goto L_116ad2f1;
  /* 116ad2a2 mov edx, dword ptr [0x116d0890] */
  EDX = (r32((uint32_t)(0x116d0890)));
  /* 116ad2a8 push edx */
  push32((uint32_t)(EDX));
  /* 116ad2a9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 116ad2ac push eax */
  push32((uint32_t)(EAX));
  /* 116ad2ad mov ecx, dword ptr [0x116d0898] */
  ECX = (r32((uint32_t)(0x116d0898)));
  /* 116ad2b3 push ecx */
  push32((uint32_t)(ECX));
  /* 116ad2b4 call 0x116b0430 */
  push32(0x116ad2b9u); f_116b0430();
  /* 116ad2b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad2bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ad2be jne 0x116ad2f1 */
  if (!C.zf) goto L_116ad2f1;
  /* 116ad2c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ad2c2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116ad2c5 push edx */
  push32((uint32_t)(EDX));
  /* 116ad2c6 call 0x116ad6d0 */
  push32(0x116ad2cbu); f_116ad6d0();
  /* 116ad2cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad2ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ad2d0 je 0x116ad2f1 */
  if (C.zf) goto L_116ad2f1;
  /* 116ad2d2 mov eax, dword ptr [0x116d08a0] */
  EAX = (r32((uint32_t)(0x116d08a0)));
  /* 116ad2d7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 116ad2da mov dword ptr [0x116d08a0], eax */
  w32((uint32_t)(0x116d08a0), (EAX));
  /* 116ad2df cmp dword ptr [0x116d0888], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0888))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad2e6 jne 0x116ad2f1 */
  if (!C.zf) goto L_116ad2f1;
  /* 116ad2e8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116ad2eb mov dword ptr [0x116d0888], ecx */
  w32((uint32_t)(0x116d0888), (ECX));
L_116ad2f1:;
  /* 116ad2f1 mov eax, dword ptr [0x116d08a0] */
  EAX = (r32((uint32_t)(0x116d08a0)));
  /* 116ad2f6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 116ad2f9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116ad2fb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ad2fd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_116ad2fe:;
  /* 116ad2fe mov esp, ebp */
  ESP = (EBP);
  /* 116ad300 pop ebp */
  EBP = (pop32());
  /* 116ad301 ret 4 */
  ESPCHK(0x116acfe0u, _esp0);
  ESP += 8; return;
}

/* FUN_1001d310 @ 0x116ad310 (116 bytes, 33 insns) */
void f_116ad310(void) {
  FTRACE(0x116ad310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ad310 push ebp */
  push32((uint32_t)(EBP));
  /* 116ad311 mov ebp, esp */
  EBP = (ESP);
  /* 116ad313 push ecx */
  push32((uint32_t)(ECX));
  /* 116ad314 mov eax, dword ptr [0x116d0898] */
  EAX = (r32((uint32_t)(0x116d0898)));
  /* 116ad319 push eax */
  push32((uint32_t)(EAX));
  /* 116ad31a call 0x116a07b0 */
  push32(0x116ad31fu); f_116a07b0();
  /* 116ad31f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad322 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116ad324 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad327 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 116ad32a mov dword ptr [0x116d0894], ecx */
  w32((uint32_t)(0x116d0894), (ECX));
  /* 116ad330 cmp dword ptr [0x116d0894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad337 je 0x116ad342 */
  if (C.zf) goto L_116ad342;
  /* 116ad339 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 116ad340 jmp 0x116ad354 */
  goto L_116ad354;
L_116ad342:;
  /* 116ad342 mov edx, dword ptr [0x116d0898] */
  EDX = (r32((uint32_t)(0x116d0898)));
  /* 116ad348 push edx */
  push32((uint32_t)(EDX));
  /* 116ad349 call 0x116ad9c0 */
  push32(0x116ad34eu); f_116ad9c0();
  /* 116ad34e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad351 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116ad354:;
  /* 116ad354 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ad357 mov dword ptr [0x116d0890], eax */
  w32((uint32_t)(0x116d0890), (EAX));
  /* 116ad35c push 1 */
  push32((uint32_t)(0x1u));
  /* 116ad35e push 0x116ad390 */
  push32((uint32_t)(0x116ad390u));
  /* 116ad363 call dword ptr [0x116d3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3354))), 0x116ad369u);
  /* 116ad369 mov ecx, dword ptr [0x116d08a0] */
  ECX = (r32((uint32_t)(0x116d08a0)));
  /* 116ad36f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 116ad372 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116ad374 jne 0x116ad380 */
  if (!C.zf) goto L_116ad380;
  /* 116ad376 mov dword ptr [0x116d08a0], 0 */
  w32((uint32_t)(0x116d08a0), (0x0u));
L_116ad380:;
  /* 116ad380 mov esp, ebp */
  ESP = (EBP);
  /* 116ad382 pop ebp */
  EBP = (pop32());
  /* 116ad383 ret  */
  ESPCHK(0x116ad310u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d390 @ 0x116ad390 (287 bytes, 86 insns) */
void f_116ad390(void) {
  FTRACE(0x116ad390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ad390 push ebp */
  push32((uint32_t)(EBP));
  /* 116ad391 mov ebp, esp */
  EBP = (ESP);
  /* 116ad393 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ad396 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ad399 push eax */
  push32((uint32_t)(EAX));
  /* 116ad39a call 0x116ad940 */
  push32(0x116ad39fu); f_116ad940();
  /* 116ad39f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad3a2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 116ad3a5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 116ad3a7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 116ad3aa push ecx */
  push32((uint32_t)(ECX));
  /* 116ad3ab mov edx, dword ptr [0x116d0894] */
  EDX = (r32((uint32_t)(0x116d0894)));
  /* 116ad3b1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 116ad3b3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ad3b5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 116ad3bb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad3c1 push edx */
  push32((uint32_t)(EDX));
  /* 116ad3c2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116ad3c5 push eax */
  push32((uint32_t)(EAX));
  /* 116ad3c6 call dword ptr [0x116d08a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d08a8))), 0x116ad3ccu);
  /* 116ad3cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ad3ce jne 0x116ad3e4 */
  if (!C.zf) goto L_116ad3e4;
  /* 116ad3d0 mov dword ptr [0x116d08a0], 0 */
  w32((uint32_t)(0x116d08a0), (0x0u));
  /* 116ad3da mov eax, 1 */
  EAX = (0x1u);
  /* 116ad3df jmp 0x116ad4a9 */
  goto L_116ad4a9;
L_116ad3e4:;
  /* 116ad3e4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 116ad3e7 push ecx */
  push32((uint32_t)(ECX));
  /* 116ad3e8 mov edx, dword ptr [0x116d0898] */
  EDX = (r32((uint32_t)(0x116d0898)));
  /* 116ad3ee push edx */
  push32((uint32_t)(EDX));
  /* 116ad3ef call 0x116b0360 */
  push32(0x116ad3f4u); f_116b0360();
  /* 116ad3f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad3f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ad3f9 jne 0x116ad439 */
  if (!C.zf) goto L_116ad439;
  /* 116ad3fb cmp dword ptr [0x116d0894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad402 jne 0x116ad416 */
  if (!C.zf) goto L_116ad416;
  /* 116ad404 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ad406 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116ad409 push eax */
  push32((uint32_t)(EAX));
  /* 116ad40a call 0x116ad6d0 */
  push32(0x116ad40fu); f_116ad6d0();
  /* 116ad40f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad412 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ad414 je 0x116ad437 */
  if (C.zf) goto L_116ad437;
L_116ad416:;
  /* 116ad416 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116ad419 mov dword ptr [0x116d08a4], ecx */
  w32((uint32_t)(0x116d08a4), (ECX));
  /* 116ad41f mov edx, dword ptr [0x116d08a4] */
  EDX = (r32((uint32_t)(0x116d08a4)));
  /* 116ad425 mov dword ptr [0x116d0888], edx */
  w32((uint32_t)(0x116d0888), (EDX));
  /* 116ad42b mov eax, dword ptr [0x116d08a0] */
  EAX = (r32((uint32_t)(0x116d08a0)));
  /* 116ad430 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 116ad432 mov dword ptr [0x116d08a0], eax */
  w32((uint32_t)(0x116d08a0), (EAX));
L_116ad437:;
  /* 116ad437 jmp 0x116ad49c */
  goto L_116ad49c;
L_116ad439:;
  /* 116ad439 cmp dword ptr [0x116d0894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad440 jne 0x116ad49c */
  if (!C.zf) goto L_116ad49c;
  /* 116ad442 cmp dword ptr [0x116d0890], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0890))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad449 je 0x116ad49c */
  if (C.zf) goto L_116ad49c;
  /* 116ad44b mov ecx, dword ptr [0x116d0890] */
  ECX = (r32((uint32_t)(0x116d0890)));
  /* 116ad451 push ecx */
  push32((uint32_t)(ECX));
  /* 116ad452 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 116ad455 push edx */
  push32((uint32_t)(EDX));
  /* 116ad456 mov eax, dword ptr [0x116d0898] */
  EAX = (r32((uint32_t)(0x116d0898)));
  /* 116ad45b push eax */
  push32((uint32_t)(EAX));
  /* 116ad45c call 0x116b0430 */
  push32(0x116ad461u); f_116b0430();
  /* 116ad461 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad464 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ad466 jne 0x116ad49c */
  if (!C.zf) goto L_116ad49c;
  /* 116ad468 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ad46a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116ad46d push ecx */
  push32((uint32_t)(ECX));
  /* 116ad46e call 0x116ad6d0 */
  push32(0x116ad473u); f_116ad6d0();
  /* 116ad473 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad476 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ad478 je 0x116ad49c */
  if (C.zf) goto L_116ad49c;
  /* 116ad47a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116ad47d mov dword ptr [0x116d08a4], edx */
  w32((uint32_t)(0x116d08a4), (EDX));
  /* 116ad483 mov eax, dword ptr [0x116d08a4] */
  EAX = (r32((uint32_t)(0x116d08a4)));
  /* 116ad488 mov dword ptr [0x116d0888], eax */
  w32((uint32_t)(0x116d0888), (EAX));
  /* 116ad48d mov ecx, dword ptr [0x116d08a0] */
  ECX = (r32((uint32_t)(0x116d08a0)));
  /* 116ad493 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 116ad496 mov dword ptr [0x116d08a0], ecx */
  w32((uint32_t)(0x116d08a0), (ECX));
L_116ad49c:;
  /* 116ad49c mov eax, dword ptr [0x116d08a0] */
  EAX = (r32((uint32_t)(0x116d08a0)));
  /* 116ad4a1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 116ad4a4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116ad4a6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ad4a8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_116ad4a9:;
  /* 116ad4a9 mov esp, ebp */
  ESP = (EBP);
  /* 116ad4ab pop ebp */
  EBP = (pop32());
  /* 116ad4ac ret 4 */
  ESPCHK(0x116ad390u, _esp0);
  ESP += 8; return;
}

/* FUN_1001d4b0 @ 0x116ad4b0 (69 bytes, 20 insns) */
void f_116ad4b0(void) {
  FTRACE(0x116ad4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ad4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ad4b1 mov ebp, esp */
  EBP = (ESP);
  /* 116ad4b3 mov eax, dword ptr [0x116d089c] */
  EAX = (r32((uint32_t)(0x116d089c)));
  /* 116ad4b8 push eax */
  push32((uint32_t)(EAX));
  /* 116ad4b9 call 0x116a07b0 */
  push32(0x116ad4beu); f_116a07b0();
  /* 116ad4be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad4c1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116ad4c3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad4c6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 116ad4c9 mov dword ptr [0x116d088c], ecx */
  w32((uint32_t)(0x116d088c), (ECX));
  /* 116ad4cf push 1 */
  push32((uint32_t)(0x1u));
  /* 116ad4d1 push 0x116ad500 */
  push32((uint32_t)(0x116ad500u));
  /* 116ad4d6 call dword ptr [0x116d3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3354))), 0x116ad4dcu);
  /* 116ad4dc mov edx, dword ptr [0x116d08a0] */
  EDX = (r32((uint32_t)(0x116d08a0)));
  /* 116ad4e2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 116ad4e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116ad4e7 jne 0x116ad4f3 */
  if (!C.zf) goto L_116ad4f3;
  /* 116ad4e9 mov dword ptr [0x116d08a0], 0 */
  w32((uint32_t)(0x116d08a0), (0x0u));
L_116ad4f3:;
  /* 116ad4f3 pop ebp */
  EBP = (pop32());
  /* 116ad4f4 ret  */
  ESPCHK(0x116ad4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d500 @ 0x116ad500 (172 bytes, 54 insns) */
void f_116ad500(void) {
  FTRACE(0x116ad500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ad500 push ebp */
  push32((uint32_t)(EBP));
  /* 116ad501 mov ebp, esp */
  EBP = (ESP);
  /* 116ad503 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ad506 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ad509 push eax */
  push32((uint32_t)(EAX));
  /* 116ad50a call 0x116ad940 */
  push32(0x116ad50fu); f_116ad940();
  /* 116ad50f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad512 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 116ad515 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 116ad517 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 116ad51a push ecx */
  push32((uint32_t)(ECX));
  /* 116ad51b mov edx, dword ptr [0x116d088c] */
  EDX = (r32((uint32_t)(0x116d088c)));
  /* 116ad521 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 116ad523 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ad525 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 116ad52b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad531 push edx */
  push32((uint32_t)(EDX));
  /* 116ad532 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116ad535 push eax */
  push32((uint32_t)(EAX));
  /* 116ad536 call dword ptr [0x116d08a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d08a8))), 0x116ad53cu);
  /* 116ad53c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ad53e jne 0x116ad551 */
  if (!C.zf) goto L_116ad551;
  /* 116ad540 mov dword ptr [0x116d08a0], 0 */
  w32((uint32_t)(0x116d08a0), (0x0u));
  /* 116ad54a mov eax, 1 */
  EAX = (0x1u);
  /* 116ad54f jmp 0x116ad5a6 */
  goto L_116ad5a6;
L_116ad551:;
  /* 116ad551 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 116ad554 push ecx */
  push32((uint32_t)(ECX));
  /* 116ad555 mov edx, dword ptr [0x116d089c] */
  EDX = (r32((uint32_t)(0x116d089c)));
  /* 116ad55b push edx */
  push32((uint32_t)(EDX));
  /* 116ad55c call 0x116b0360 */
  push32(0x116ad561u); f_116b0360();
  /* 116ad561 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad564 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ad566 jne 0x116ad599 */
  if (!C.zf) goto L_116ad599;
  /* 116ad568 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116ad56b push eax */
  push32((uint32_t)(EAX));
  /* 116ad56c call 0x116ad680 */
  push32(0x116ad571u); f_116ad680();
  /* 116ad571 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad574 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ad576 je 0x116ad599 */
  if (C.zf) goto L_116ad599;
  /* 116ad578 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116ad57b mov dword ptr [0x116d08a4], ecx */
  w32((uint32_t)(0x116d08a4), (ECX));
  /* 116ad581 mov edx, dword ptr [0x116d08a4] */
  EDX = (r32((uint32_t)(0x116d08a4)));
  /* 116ad587 mov dword ptr [0x116d0888], edx */
  w32((uint32_t)(0x116d0888), (EDX));
  /* 116ad58d mov eax, dword ptr [0x116d08a0] */
  EAX = (r32((uint32_t)(0x116d08a0)));
  /* 116ad592 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 116ad594 mov dword ptr [0x116d08a0], eax */
  w32((uint32_t)(0x116d08a0), (EAX));
L_116ad599:;
  /* 116ad599 mov eax, dword ptr [0x116d08a0] */
  EAX = (r32((uint32_t)(0x116d08a0)));
  /* 116ad59e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 116ad5a1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116ad5a3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ad5a5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_116ad5a6:;
  /* 116ad5a6 mov esp, ebp */
  ESP = (EBP);
  /* 116ad5a8 pop ebp */
  EBP = (pop32());
  /* 116ad5a9 ret 4 */
  ESPCHK(0x116ad500u, _esp0);
  ESP += 8; return;
}

/* FUN_1001d5b0 @ 0x116ad5b0 (43 bytes, 11 insns) */
void f_116ad5b0(void) {
  FTRACE(0x116ad5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ad5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ad5b1 mov ebp, esp */
  EBP = (ESP);
  /* 116ad5b3 mov eax, dword ptr [0x116d08a0] */
  EAX = (r32((uint32_t)(0x116d08a0)));
  /* 116ad5b8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 116ad5bd mov dword ptr [0x116d08a0], eax */
  w32((uint32_t)(0x116d08a0), (EAX));
  /* 116ad5c2 call dword ptr [0x116d3350] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3350))), 0x116ad5c8u);
  /* 116ad5c8 mov dword ptr [0x116d08a4], eax */
  w32((uint32_t)(0x116d08a4), (EAX));
  /* 116ad5cd mov ecx, dword ptr [0x116d08a4] */
  ECX = (r32((uint32_t)(0x116d08a4)));
  /* 116ad5d3 mov dword ptr [0x116d0888], ecx */
  w32((uint32_t)(0x116d0888), (ECX));
  /* 116ad5d9 pop ebp */
  EBP = (pop32());
  /* 116ad5da ret  */
  ESPCHK(0x116ad5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d5e0 @ 0x116ad5e0 (155 bytes, 57 insns) */
void f_116ad5e0(void) {
  FTRACE(0x116ad5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ad5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ad5e1 mov ebp, esp */
  EBP = (ESP);
  /* 116ad5e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ad5e6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad5ea je 0x116ad60b */
  if (C.zf) goto L_116ad60b;
  /* 116ad5ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ad5ef movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116ad5f2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116ad5f4 je 0x116ad60b */
  if (C.zf) goto L_116ad60b;
  /* 116ad5f6 push 0x116cc0b8 */
  push32((uint32_t)(0x116cc0b8u));
  /* 116ad5fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ad5fe push edx */
  push32((uint32_t)(EDX));
  /* 116ad5ff call 0x116a4cd0 */
  push32(0x116ad604u); f_116a4cd0();
  /* 116ad604 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad607 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ad609 jne 0x116ad633 */
  if (!C.zf) goto L_116ad633;
L_116ad60b:;
  /* 116ad60b push 8 */
  push32((uint32_t)(0x8u));
  /* 116ad60d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 116ad610 push eax */
  push32((uint32_t)(EAX));
  /* 116ad611 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 116ad616 mov ecx, dword ptr [0x116d08a4] */
  ECX = (r32((uint32_t)(0x116d08a4)));
  /* 116ad61c push ecx */
  push32((uint32_t)(ECX));
  /* 116ad61d call dword ptr [0x116d08a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d08a8))), 0x116ad623u);
  /* 116ad623 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ad625 jne 0x116ad62b */
  if (!C.zf) goto L_116ad62b;
  /* 116ad627 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ad629 jmp 0x116ad677 */
  goto L_116ad677;
L_116ad62b:;
  /* 116ad62b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 116ad62e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 116ad631 jmp 0x116ad66b */
  goto L_116ad66b;
L_116ad633:;
  /* 116ad633 push 0x116cc0b4 */
  push32((uint32_t)(0x116cc0b4u));
  /* 116ad638 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ad63b push eax */
  push32((uint32_t)(EAX));
  /* 116ad63c call 0x116a4cd0 */
  push32(0x116ad641u); f_116a4cd0();
  /* 116ad641 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad644 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ad646 jne 0x116ad66b */
  if (!C.zf) goto L_116ad66b;
  /* 116ad648 push 8 */
  push32((uint32_t)(0x8u));
  /* 116ad64a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 116ad64d push ecx */
  push32((uint32_t)(ECX));
  /* 116ad64e push 0xb */
  push32((uint32_t)(0xbu));
  /* 116ad650 mov edx, dword ptr [0x116d08a4] */
  EDX = (r32((uint32_t)(0x116d08a4)));
  /* 116ad656 push edx */
  push32((uint32_t)(EDX));
  /* 116ad657 call dword ptr [0x116d08a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d08a8))), 0x116ad65du);
  /* 116ad65d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ad65f jne 0x116ad665 */
  if (!C.zf) goto L_116ad665;
  /* 116ad661 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ad663 jmp 0x116ad677 */
  goto L_116ad677;
L_116ad665:;
  /* 116ad665 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 116ad668 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_116ad66b:;
  /* 116ad66b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ad66e push ecx */
  push32((uint32_t)(ECX));
  /* 116ad66f call 0x116aa850 */
  push32(0x116ad674u); f_116aa850();
  /* 116ad674 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116ad677:;
  /* 116ad677 mov esp, ebp */
  ESP = (EBP);
  /* 116ad679 pop ebp */
  EBP = (pop32());
  /* 116ad67a ret  */
  ESPCHK(0x116ad5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d680 @ 0x116ad680 (79 bytes, 26 insns) */
void f_116ad680(void) {
  FTRACE(0x116ad680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ad680 push ebp */
  push32((uint32_t)(EBP));
  /* 116ad681 mov ebp, esp */
  EBP = (ESP);
  /* 116ad683 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ad686 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 116ad68a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 116ad68e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116ad695 jmp 0x116ad6a0 */
  goto L_116ad6a0;
L_116ad697:;
  /* 116ad697 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ad69a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad69d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_116ad6a0:;
  /* 116ad6a0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad6a4 jae 0x116ad6c6 */
  if (!C.cf) goto L_116ad6c6;
  /* 116ad6a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ad6a9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116ad6af mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ad6b2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116ad6b4 mov cx, word ptr [eax*2 + 0x116cf264] */
  CX = (r16((uint32_t)(EAX*2 + 0x116cf264)));
  /* 116ad6bc cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad6be jne 0x116ad6c4 */
  if (!C.zf) goto L_116ad6c4;
  /* 116ad6c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ad6c2 jmp 0x116ad6cb */
  goto L_116ad6cb;
L_116ad6c4:;
  /* 116ad6c4 jmp 0x116ad697 */
  goto L_116ad697;
L_116ad6c6:;
  /* 116ad6c6 mov eax, 1 */
  EAX = (0x1u);
L_116ad6cb:;
  /* 116ad6cb mov esp, ebp */
  ESP = (EBP);
  /* 116ad6cd pop ebp */
  EBP = (pop32());
  /* 116ad6ce ret  */
  ESPCHK(0x116ad680u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d6d0 @ 0x116ad6d0 (135 bytes, 48 insns) */
void f_116ad6d0(void) {
  FTRACE(0x116ad6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ad6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ad6d1 mov ebp, esp */
  EBP = (ESP);
  /* 116ad6d3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ad6d6 push esi */
  push32((uint32_t)(ESI));
  /* 116ad6d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ad6da and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ad6df and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ad6e4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ad6e9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 116ad6ec and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ad6f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116ad6f4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 116ad6f6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 116ad6f9 push ecx */
  push32((uint32_t)(ECX));
  /* 116ad6fa push 1 */
  push32((uint32_t)(0x1u));
  /* 116ad6fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ad6ff push edx */
  push32((uint32_t)(EDX));
  /* 116ad700 call dword ptr [0x116d08a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d08a8))), 0x116ad706u);
  /* 116ad706 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ad708 jne 0x116ad70e */
  if (!C.zf) goto L_116ad70e;
  /* 116ad70a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ad70c jmp 0x116ad752 */
  goto L_116ad752;
L_116ad70e:;
  /* 116ad70e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 116ad711 push eax */
  push32((uint32_t)(EAX));
  /* 116ad712 call 0x116ad940 */
  push32(0x116ad717u); f_116ad940();
  /* 116ad717 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad71a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad71d je 0x116ad74d */
  if (C.zf) goto L_116ad74d;
  /* 116ad71f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad723 je 0x116ad74d */
  if (C.zf) goto L_116ad74d;
  /* 116ad725 mov ecx, dword ptr [0x116d0898] */
  ECX = (r32((uint32_t)(0x116d0898)));
  /* 116ad72b push ecx */
  push32((uint32_t)(ECX));
  /* 116ad72c call 0x116ad9c0 */
  push32(0x116ad731u); f_116ad9c0();
  /* 116ad731 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad734 mov esi, eax */
  ESI = (EAX);
  /* 116ad736 mov edx, dword ptr [0x116d0898] */
  EDX = (r32((uint32_t)(0x116d0898)));
  /* 116ad73c push edx */
  push32((uint32_t)(EDX));
  /* 116ad73d call 0x116a07b0 */
  push32(0x116ad742u); f_116a07b0();
  /* 116ad742 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ad745 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ad747 jne 0x116ad74d */
  if (!C.zf) goto L_116ad74d;
  /* 116ad749 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ad74b jmp 0x116ad752 */
  goto L_116ad752;
L_116ad74d:;
  /* 116ad74d mov eax, 1 */
  EAX = (0x1u);
L_116ad752:;
  /* 116ad752 pop esi */
  ESI = (pop32());
  /* 116ad753 mov esp, ebp */
  ESP = (EBP);
  /* 116ad755 pop ebp */
  EBP = (pop32());
  /* 116ad756 ret  */
  ESPCHK(0x116ad6d0u, _esp0);
  ESP += 4; return;
}

