#include "recomp.h"

/* FUN_10006a17 @ 0x111e6a17 (21 bytes, 7 insns) */
void f_111e6a17(void) {
  FTRACE(0x111e6a17u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e6a17 push ebp */
  push32((uint32_t)(EBP));
  /* 111e6a18 mov ebp, esp */
  EBP = (ESP);
  /* 111e6a1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e6a1d push dword ptr [eax*4 + 0x111eca60] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x111eca60))));
  /* 111e6a24 call dword ptr [0x111e907c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e907c))), 0x111e6a2au);
  /* 111e6a2a pop ebp */
  EBP = (pop32());
  /* 111e6a2b ret  */
  ESPCHK(0x111e6a17u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x111e6a2c (32 bytes, 18 insns) */
void f_111e6a2c(void) {
  FTRACE(0x111e6a2cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e6a2c push ebp */
  push32((uint32_t)(EBP));
  /* 111e6a2d mov ebp, esp */
  EBP = (ESP);
  /* 111e6a2f push ebx */
  push32((uint32_t)(EBX));
  /* 111e6a30 push esi */
  push32((uint32_t)(ESI));
  /* 111e6a31 push edi */
  push32((uint32_t)(EDI));
  /* 111e6a32 push ebp */
  push32((uint32_t)(EBP));
  /* 111e6a33 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e6a35 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e6a37 push 0x111e6a44 */
  push32((uint32_t)(0x111e6a44u));
  /* 111e6a3c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 111e6a3f call 0x111e8dd4 */
  push32(0x111e6a44u); f_111e8dd4();
  /* 111e6a44 pop ebp */
  EBP = (pop32());
  /* 111e6a45 pop edi */
  EDI = (pop32());
  /* 111e6a46 pop esi */
  ESI = (pop32());
  /* 111e6a47 pop ebx */
  EBX = (pop32());
  /* 111e6a48 mov esp, ebp */
  ESP = (EBP);
  /* 111e6a4a pop ebp */
  EBP = (pop32());
  /* 111e6a4b ret  */
  ESPCHK(0x111e6a2cu, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x111e6a6e (104 bytes, 33 insns) */
void f_111e6a6e(void) {
  FTRACE(0x111e6a6eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e6a6e push ebx */
  push32((uint32_t)(EBX));
  /* 111e6a6f push esi */
  push32((uint32_t)(ESI));
  /* 111e6a70 push edi */
  push32((uint32_t)(EDI));
  /* 111e6a71 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 111e6a75 push eax */
  push32((uint32_t)(EAX));
  /* 111e6a76 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 111e6a78 push 0x111e6a4c */
  push32((uint32_t)(0x111e6a4cu));
  /* 111e6a7d push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 111e6a84 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_111e6a8b:;
  /* 111e6a8b mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 111e6a8f mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 111e6a92 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 111e6a95 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6a98 je 0x111e6ac8 */
  if (C.zf) goto L_111e6ac8;
  /* 111e6a9a cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6a9e je 0x111e6ac8 */
  if (C.zf) goto L_111e6ac8;
  /* 111e6aa0 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 111e6aa3 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 111e6aa6 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 111e6aaa mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 111e6aad cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6ab2 jne 0x111e6ac6 */
  if (!C.zf) goto L_111e6ac6;
  /* 111e6ab4 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 111e6ab9 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 111e6abd call 0x111e6b02 */
  push32(0x111e6ac2u); f_111e6b02();
  /* 111e6ac2 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x111e6ac6u);
L_111e6ac6:;
  /* 111e6ac6 jmp 0x111e6a8b */
  goto L_111e6a8b;
L_111e6ac8:;
  /* 111e6ac8 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 111e6acf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e6ad2 pop edi */
  EDI = (pop32());
  /* 111e6ad3 pop esi */
  ESI = (pop32());
  /* 111e6ad4 pop ebx */
  EBX = (pop32());
  /* 111e6ad5 ret  */
  ESPCHK(0x111e6a6eu, _esp0);
  ESP += 4; return;
}

/* FUN_10006b02 @ 0x111e6b02 (24 bytes, 10 insns) */
void f_111e6b02(void) {
  FTRACE(0x111e6b02u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e6b02 push ebx */
  push32((uint32_t)(EBX));
  /* 111e6b03 push ecx */
  push32((uint32_t)(ECX));
  /* 111e6b04 mov ebx, 0x111ecb20 */
  EBX = (0x111ecb20u);
  /* 111e6b09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e6b0c mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 111e6b0f mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 111e6b12 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 111e6b15 pop ecx */
  ECX = (pop32());
  /* 111e6b16 pop ebx */
  EBX = (pop32());
  /* 111e6b17 ret 4 */
  ESPCHK(0x111e6b02u, _esp0);
  ESP += 8; return;
}

/* FUN_10006be1 @ 0x111e6be1 (27 bytes, 11 insns) */
void f_111e6be1(void) {
  FTRACE(0x111e6be1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e6be1 push ebp */
  push32((uint32_t)(EBP));
  /* 111e6be2 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 111e6be6 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 111e6be8 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 111e6beb push eax */
  push32((uint32_t)(EAX));
  /* 111e6bec mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 111e6bef push eax */
  push32((uint32_t)(EAX));
  /* 111e6bf0 call 0x111e6a6e */
  push32(0x111e6bf5u); f_111e6a6e();
  /* 111e6bf5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e6bf8 pop ebp */
  EBP = (pop32());
  /* 111e6bf9 ret 4 */
  ESPCHK(0x111e6be1u, _esp0);
  ESP += 8; return;
}

/* FUN_10006bfc @ 0x111e6bfc (289 bytes, 98 insns) */
void f_111e6bfc(void) {
  FTRACE(0x111e6bfcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e6bfc push ebp */
  push32((uint32_t)(EBP));
  /* 111e6bfd mov ebp, esp */
  EBP = (ESP);
  /* 111e6bff push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 111e6c01 push 0x111e94e0 */
  push32((uint32_t)(0x111e94e0u));
  /* 111e6c06 push 0x111e6b24 */
  push32((uint32_t)(0x111e6b24u));
  /* 111e6c0b mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 111e6c11 push eax */
  push32((uint32_t)(EAX));
  /* 111e6c12 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 111e6c19 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e6c1c push ebx */
  push32((uint32_t)(EBX));
  /* 111e6c1d push esi */
  push32((uint32_t)(ESI));
  /* 111e6c1e push edi */
  push32((uint32_t)(EDI));
  /* 111e6c1f mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 111e6c22 imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111e6c26 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 111e6c29 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 111e6c2c cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6c2f ja 0x111e6c45 */
  if ((!C.cf&&!C.zf)) goto L_111e6c45;
  /* 111e6c31 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 111e6c33 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6c35 jne 0x111e6c3a */
  if (!C.zf) goto L_111e6c3a;
  /* 111e6c37 push 1 */
  push32((uint32_t)(0x1u));
  /* 111e6c39 pop esi */
  ESI = (pop32());
L_111e6c3a:;
  /* 111e6c3a add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e6c3d and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 111e6c40 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 111e6c43 jmp 0x111e6c47 */
  goto L_111e6c47;
L_111e6c45:;
  /* 111e6c45 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_111e6c47:;
  /* 111e6c47 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 111e6c4a cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6c4d ja 0x111e6cfb */
  if ((!C.cf&&!C.zf)) goto L_111e6cfb;
  /* 111e6c53 mov eax, dword ptr [0x111ee3a8] */
  EAX = (r32((uint32_t)(0x111ee3a8)));
  /* 111e6c58 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6c5b jne 0x111e6c9e */
  if (!C.zf) goto L_111e6c9e;
  /* 111e6c5d mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 111e6c60 cmp edi, dword ptr [0x111ee3a0] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x111ee3a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6c66 ja 0x111e6ce4 */
  if ((!C.cf&&!C.zf)) goto L_111e6ce4;
  /* 111e6c68 push 9 */
  push32((uint32_t)(0x9u));
  /* 111e6c6a call 0x111e69b6 */
  push32(0x111e6c6fu); f_111e69b6();
  /* 111e6c6f pop ecx */
  ECX = (pop32());
  /* 111e6c70 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 111e6c73 push edi */
  push32((uint32_t)(EDI));
  /* 111e6c74 call 0x111e5e48 */
  push32(0x111e6c79u); f_111e5e48();
  /* 111e6c79 pop ecx */
  ECX = (pop32());
  /* 111e6c7a mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 111e6c7d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 111e6c81 call 0x111e6c95 */
  push32(0x111e6c86u); f_111e6c95();
  /* 111e6c86 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6c89 je 0x111e6ce9 */
  if (C.zf) goto L_111e6ce9;
  /* 111e6c8b push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 111e6c8e jmp 0x111e6cd8 */
  goto L_111e6cd8;
  /* 111e6c90 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 111e6c92 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 111e6c95 push 9 */
  push32((uint32_t)(0x9u));
  /* 111e6c97 call 0x111e6a17 */
  push32(0x111e6c9cu); f_111e6a17();
  /* 111e6c9c pop ecx */
  ECX = (pop32());
  /* 111e6c9d ret  */
  ESPCHK(0x111e6bfcu, _esp0);
  ESP += 4; return;
L_111e6c9e:;
  /* 111e6c9e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6ca1 jne 0x111e6ce4 */
  if (!C.zf) goto L_111e6ce4;
  /* 111e6ca3 cmp esi, dword ptr [0x111eca5c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x111eca5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6ca9 ja 0x111e6ce4 */
  if ((!C.cf&&!C.zf)) goto L_111e6ce4;
  /* 111e6cab push 9 */
  push32((uint32_t)(0x9u));
  /* 111e6cad call 0x111e69b6 */
  push32(0x111e6cb2u); f_111e69b6();
  /* 111e6cb2 pop ecx */
  ECX = (pop32());
  /* 111e6cb3 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 111e6cba mov eax, esi */
  EAX = (ESI);
  /* 111e6cbc shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 111e6cbf push eax */
  push32((uint32_t)(EAX));
  /* 111e6cc0 call 0x111e65f5 */
  push32(0x111e6cc5u); f_111e65f5();
  /* 111e6cc5 pop ecx */
  ECX = (pop32());
  /* 111e6cc6 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 111e6cc9 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 111e6ccd call 0x111e6d1e */
  push32(0x111e6cd2u); f_111e6d1e();
  /* 111e6cd2 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6cd5 je 0x111e6ce9 */
  if (C.zf) goto L_111e6ce9;
  /* 111e6cd7 push esi */
  push32((uint32_t)(ESI));
L_111e6cd8:;
  /* 111e6cd8 push ebx */
  push32((uint32_t)(EBX));
  /* 111e6cd9 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 111e6cdc call 0x111e8210 */
  push32(0x111e6ce1u); f_111e8210();
  /* 111e6ce1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111e6ce4:;
  /* 111e6ce4 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6ce7 jne 0x111e6d27 */
  if (!C.zf) { jmp_ind(0x111e6d27u); return; }
L_111e6ce9:;
  /* 111e6ce9 push esi */
  push32((uint32_t)(ESI));
  /* 111e6cea push 8 */
  push32((uint32_t)(0x8u));
  /* 111e6cec push dword ptr [0x111ee3a4] */
  push32((uint32_t)(r32((uint32_t)(0x111ee3a4))));
  /* 111e6cf2 call dword ptr [0x111e908c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e908c))), 0x111e6cf8u);
  /* 111e6cf8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_111e6cfb:;
  /* 111e6cfb cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6cfe jne 0x111e6d27 */
  if (!C.zf) { jmp_ind(0x111e6d27u); return; }
  /* 111e6d00 cmp dword ptr [0x111edfc8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x111edfc8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6d06 je 0x111e6d27 */
  if (C.zf) { jmp_ind(0x111e6d27u); return; }
  /* 111e6d08 push esi */
  push32((uint32_t)(ESI));
  /* 111e6d09 call 0x111e7362 */
  push32(0x111e6d0eu); f_111e7362();
  /* 111e6d0e pop ecx */
  ECX = (pop32());
  /* 111e6d0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e6d11 jne 0x111e6c47 */
  if (!C.zf) goto L_111e6c47;
  /* 111e6d17 jmp 0x111e6d2a */
  jmp_ind(0x111e6d2au); return;
  /* 111e6d19 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_10006c95 @ 0x111e6c95 (9 bytes, 4 insns) */
void f_111e6c95(void) {
  FTRACE(0x111e6c95u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e6c95 push 9 */
  push32((uint32_t)(0x9u));
  /* 111e6c97 call 0x111e6a17 */
  push32(0x111e6c9cu); f_111e6a17();
  /* 111e6c9c pop ecx */
  ECX = (pop32());
  /* 111e6c9d ret  */
  ESPCHK(0x111e6c95u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d1e @ 0x111e6d1e (9 bytes, 4 insns) */
void f_111e6d1e(void) {
  FTRACE(0x111e6d1eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e6d1e push 9 */
  push32((uint32_t)(0x9u));
  /* 111e6d20 call 0x111e6a17 */
  push32(0x111e6d25u); f_111e6a17();
  /* 111e6d25 pop ecx */
  ECX = (pop32());
  /* 111e6d26 ret  */
  ESPCHK(0x111e6d1eu, _esp0);
  ESP += 4; return;
}

/* FUN_10006dba @ 0x111e6dba (291 bytes, 103 insns) */
void f_111e6dba(void) {
  FTRACE(0x111e6dbau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e6dba push ecx */
  push32((uint32_t)(ECX));
  /* 111e6dbb push ecx */
  push32((uint32_t)(ECX));
  /* 111e6dbc push ebx */
  push32((uint32_t)(EBX));
  /* 111e6dbd push ebp */
  push32((uint32_t)(EBP));
  /* 111e6dbe push esi */
  push32((uint32_t)(ESI));
  /* 111e6dbf push edi */
  push32((uint32_t)(EDI));
  /* 111e6dc0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 111e6dc2 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 111e6dc5 call 0x111e69b6 */
  push32(0x111e6dcau); f_111e69b6();
  /* 111e6dca xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 111e6dcc pop ecx */
  ECX = (pop32());
  /* 111e6dcd mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
  /* 111e6dd1 mov dword ptr [esp + 0x14], ebx */
  w32((uint32_t)(ESP + 0x14), (EBX));
  /* 111e6dd5 mov ebp, 0x111ee3c0 */
  EBP = (0x111ee3c0u);
L_111e6dda:;
  /* 111e6dda mov esi, dword ptr [ebp] */
  ESI = (r32((uint32_t)(EBP)));
  /* 111e6ddd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 111e6ddf je 0x111e6e7e */
  if (C.zf) goto L_111e6e7e;
  /* 111e6de5 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_111e6deb:;
  /* 111e6deb cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6ded jae 0x111e6e63 */
  if (!C.cf) goto L_111e6e63;
  /* 111e6def test byte ptr [esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 111e6df3 jne 0x111e6e39 */
  if (!C.zf) goto L_111e6e39;
  /* 111e6df5 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6df9 jne 0x111e6e1e */
  if (!C.zf) goto L_111e6e1e;
  /* 111e6dfb push 0x11 */
  push32((uint32_t)(0x11u));
  /* 111e6dfd call 0x111e69b6 */
  push32(0x111e6e02u); f_111e69b6();
  /* 111e6e02 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6e06 pop ecx */
  ECX = (pop32());
  /* 111e6e07 jne 0x111e6e16 */
  if (!C.zf) goto L_111e6e16;
  /* 111e6e09 lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 111e6e0c push eax */
  push32((uint32_t)(EAX));
  /* 111e6e0d call dword ptr [0x111e9000] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9000))), 0x111e6e13u);
  /* 111e6e13 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_111e6e16:;
  /* 111e6e16 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 111e6e18 call 0x111e6a17 */
  push32(0x111e6e1du); f_111e6a17();
  /* 111e6e1d pop ecx */
  ECX = (pop32());
L_111e6e1e:;
  /* 111e6e1e lea ebx, [esi + 0xc] */
  EBX = ((uint32_t)(ESI + 0xc));
  /* 111e6e21 push ebx */
  push32((uint32_t)(EBX));
  /* 111e6e22 call dword ptr [0x111e9078] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9078))), 0x111e6e28u);
  /* 111e6e28 test byte ptr [esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 111e6e2c je 0x111e6e46 */
  if (C.zf) goto L_111e6e46;
  /* 111e6e2e push ebx */
  push32((uint32_t)(EBX));
  /* 111e6e2f call dword ptr [0x111e907c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e907c))), 0x111e6e35u);
  /* 111e6e35 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_111e6e39:;
  /* 111e6e39 mov eax, dword ptr [ebp] */
  EAX = (r32((uint32_t)(EBP)));
  /* 111e6e3c add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e6e3f add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e6e44 jmp 0x111e6deb */
  goto L_111e6deb;
L_111e6e46:;
  /* 111e6e46 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 111e6e49 mov eax, esi */
  EAX = (ESI);
  /* 111e6e4b sub eax, dword ptr [ebp] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e6e4e push 0x24 */
  push32((uint32_t)(0x24u));
  /* 111e6e50 pop ecx */
  ECX = (pop32());
  /* 111e6e51 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 111e6e52 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 111e6e54 mov edi, eax */
  EDI = (EAX);
  /* 111e6e56 add edi, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e6e5a cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6e5d jne 0x111e6ecc */
  if (!C.zf) goto L_111e6ecc;
  /* 111e6e5f mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_111e6e63:;
  /* 111e6e63 add dword ptr [esp + 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(ESP + 0x14), (_r)); fl_add(_a,_b,_r,32); }
  /* 111e6e68 add ebp, 4 */
  { uint32_t _a=(EBP),_b=(0x4u),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e6e6b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 111e6e6c cmp ebp, 0x111ee4c0 */
  { uint32_t _a=(EBP),_b=(0x111ee4c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6e72 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
  /* 111e6e76 jl 0x111e6dda */
  if ((C.sf!=C.of)) goto L_111e6dda;
  /* 111e6e7c jmp 0x111e6ecc */
  goto L_111e6ecc;
L_111e6e7e:;
  /* 111e6e7e mov esi, 0x480 */
  ESI = (0x480u);
  /* 111e6e83 push esi */
  push32((uint32_t)(ESI));
  /* 111e6e84 call 0x111e48e5 */
  push32(0x111e6e89u); f_111e48e5();
  /* 111e6e89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e6e8b pop ecx */
  ECX = (pop32());
  /* 111e6e8c je 0x111e6ecc */
  if (C.zf) goto L_111e6ecc;
  /* 111e6e8e add dword ptr [0x111ee4c0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x111ee4c0))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x111ee4c0), (_r)); fl_add(_a,_b,_r,32); }
  /* 111e6e95 lea ecx, [ebx*4 + 0x111ee3c0] */
  ECX = ((uint32_t)(EBX*4 + 0x111ee3c0));
  /* 111e6e9c lea edx, [eax + 0x480] */
  EDX = ((uint32_t)(EAX + 0x480));
  /* 111e6ea2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_111e6ea4:;
  /* 111e6ea4 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6ea6 jae 0x111e6ec0 */
  if (!C.cf) goto L_111e6ec0;
  /* 111e6ea8 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 111e6eac or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 111e6eaf and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 111e6eb3 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 111e6eb7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111e6eb9 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e6ebc add edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e6ebe jmp 0x111e6ea4 */
  goto L_111e6ea4;
L_111e6ec0:;
  /* 111e6ec0 shl ebx, 5 */
  EBX = (sh_shl((uint32_t)(EBX), (0x5u)&0x1f, 32));
  /* 111e6ec3 mov edi, ebx */
  EDI = (EBX);
  /* 111e6ec5 push edi */
  push32((uint32_t)(EDI));
  /* 111e6ec6 call 0x111e701a */
  push32(0x111e6ecbu); f_111e701a();
  /* 111e6ecb pop ecx */
  ECX = (pop32());
L_111e6ecc:;
  /* 111e6ecc push 0x12 */
  push32((uint32_t)(0x12u));
  /* 111e6ece call 0x111e6a17 */
  push32(0x111e6ed3u); f_111e6a17();
  /* 111e6ed3 pop ecx */
  ECX = (pop32());
  /* 111e6ed4 mov eax, edi */
  EAX = (EDI);
  /* 111e6ed6 pop edi */
  EDI = (pop32());
  /* 111e6ed7 pop esi */
  ESI = (pop32());
  /* 111e6ed8 pop ebp */
  EBP = (pop32());
  /* 111e6ed9 pop ebx */
  EBX = (pop32());
  /* 111e6eda pop ecx */
  ECX = (pop32());
  /* 111e6edb pop ecx */
  ECX = (pop32());
  /* 111e6edc ret  */
  ESPCHK(0x111e6dbau, _esp0);
  ESP += 4; return;
}

/* FUN_10006edd @ 0x111e6edd (124 bytes, 47 insns) */
void f_111e6edd(void) {
  FTRACE(0x111e6eddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e6edd mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 111e6ee1 push esi */
  push32((uint32_t)(ESI));
  /* 111e6ee2 cmp ecx, dword ptr [0x111ee4c0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x111ee4c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6ee8 push edi */
  push32((uint32_t)(EDI));
  /* 111e6ee9 jae 0x111e6f40 */
  if (!C.cf) goto L_111e6f40;
  /* 111e6eeb mov eax, ecx */
  EAX = (ECX);
  /* 111e6eed sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 111e6ef0 lea edi, [eax*4 + 0x111ee3c0] */
  EDI = ((uint32_t)(EAX*4 + 0x111ee3c0));
  /* 111e6ef7 mov eax, ecx */
  EAX = (ECX);
  /* 111e6ef9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 111e6efc lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 111e6eff mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 111e6f01 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 111e6f04 cmp dword ptr [eax + esi], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + ESI*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6f08 jne 0x111e6f40 */
  if (!C.zf) goto L_111e6f40;
  /* 111e6f0a cmp dword ptr [0x111ede08], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111ede08))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6f11 push ebx */
  push32((uint32_t)(EBX));
  /* 111e6f12 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 111e6f16 jne 0x111e6f36 */
  if (!C.zf) goto L_111e6f36;
  /* 111e6f18 sub ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e6f1b je 0x111e6f2d */
  if (C.zf) goto L_111e6f2d;
  /* 111e6f1d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 111e6f1e je 0x111e6f28 */
  if (C.zf) goto L_111e6f28;
  /* 111e6f20 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 111e6f21 jne 0x111e6f36 */
  if (!C.zf) goto L_111e6f36;
  /* 111e6f23 push ebx */
  push32((uint32_t)(EBX));
  /* 111e6f24 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 111e6f26 jmp 0x111e6f30 */
  goto L_111e6f30;
L_111e6f28:;
  /* 111e6f28 push ebx */
  push32((uint32_t)(EBX));
  /* 111e6f29 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 111e6f2b jmp 0x111e6f30 */
  goto L_111e6f30;
L_111e6f2d:;
  /* 111e6f2d push ebx */
  push32((uint32_t)(EBX));
  /* 111e6f2e push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_111e6f30:;
  /* 111e6f30 call dword ptr [0x111e9040] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9040))), 0x111e6f36u);
L_111e6f36:;
  /* 111e6f36 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 111e6f38 mov dword ptr [eax + esi], ebx */
  w32((uint32_t)(EAX + ESI*1), (EBX));
  /* 111e6f3b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e6f3d pop ebx */
  EBX = (pop32());
  /* 111e6f3e jmp 0x111e6f56 */
  goto L_111e6f56;
L_111e6f40:;
  /* 111e6f40 call 0x111e4a92 */
  push32(0x111e6f45u); f_111e4a92();
  /* 111e6f45 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 111e6f4b call 0x111e4a9b */
  push32(0x111e6f50u); f_111e4a9b();
  /* 111e6f50 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 111e6f53 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_111e6f56:;
  /* 111e6f56 pop edi */
  EDI = (pop32());
  /* 111e6f57 pop esi */
  ESI = (pop32());
  /* 111e6f58 ret  */
  ESPCHK(0x111e6eddu, _esp0);
  ESP += 4; return;
}

/* FUN_10006f59 @ 0x111e6f59 (127 bytes, 48 insns) */
void f_111e6f59(void) {
  FTRACE(0x111e6f59u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e6f59 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 111e6f5d push esi */
  push32((uint32_t)(ESI));
  /* 111e6f5e cmp ecx, dword ptr [0x111ee4c0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x111ee4c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6f64 push edi */
  push32((uint32_t)(EDI));
  /* 111e6f65 jae 0x111e6fbf */
  if (!C.cf) goto L_111e6fbf;
  /* 111e6f67 mov eax, ecx */
  EAX = (ECX);
  /* 111e6f69 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 111e6f6c lea edi, [eax*4 + 0x111ee3c0] */
  EDI = ((uint32_t)(EAX*4 + 0x111ee3c0));
  /* 111e6f73 mov eax, ecx */
  EAX = (ECX);
  /* 111e6f75 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 111e6f78 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 111e6f7b mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 111e6f7d shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 111e6f80 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e6f82 test byte ptr [eax + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 111e6f86 je 0x111e6fbf */
  if (C.zf) goto L_111e6fbf;
  /* 111e6f88 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6f8b je 0x111e6fbf */
  if (C.zf) goto L_111e6fbf;
  /* 111e6f8d cmp dword ptr [0x111ede08], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111ede08))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6f94 jne 0x111e6fb5 */
  if (!C.zf) goto L_111e6fb5;
  /* 111e6f96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e6f98 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e6f9a je 0x111e6fac */
  if (C.zf) goto L_111e6fac;
  /* 111e6f9c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 111e6f9d je 0x111e6fa7 */
  if (C.zf) goto L_111e6fa7;
  /* 111e6f9f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 111e6fa0 jne 0x111e6fb5 */
  if (!C.zf) goto L_111e6fb5;
  /* 111e6fa2 push eax */
  push32((uint32_t)(EAX));
  /* 111e6fa3 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 111e6fa5 jmp 0x111e6faf */
  goto L_111e6faf;
L_111e6fa7:;
  /* 111e6fa7 push eax */
  push32((uint32_t)(EAX));
  /* 111e6fa8 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 111e6faa jmp 0x111e6faf */
  goto L_111e6faf;
L_111e6fac:;
  /* 111e6fac push eax */
  push32((uint32_t)(EAX));
  /* 111e6fad push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_111e6faf:;
  /* 111e6faf call dword ptr [0x111e9040] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9040))), 0x111e6fb5u);
L_111e6fb5:;
  /* 111e6fb5 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 111e6fb7 or dword ptr [eax + esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1)))|(0xffffffffu); w32((uint32_t)(EAX + ESI*1), (_r)); fl_logic(_r,32); }
  /* 111e6fbb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e6fbd jmp 0x111e6fd5 */
  goto L_111e6fd5;
L_111e6fbf:;
  /* 111e6fbf call 0x111e4a92 */
  push32(0x111e6fc4u); f_111e4a92();
  /* 111e6fc4 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 111e6fca call 0x111e4a9b */
  push32(0x111e6fcfu); f_111e4a9b();
  /* 111e6fcf and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 111e6fd2 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_111e6fd5:;
  /* 111e6fd5 pop edi */
  EDI = (pop32());
  /* 111e6fd6 pop esi */
  ESI = (pop32());
  /* 111e6fd7 ret  */
  ESPCHK(0x111e6f59u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fd8 @ 0x111e6fd8 (66 bytes, 19 insns) */
void f_111e6fd8(void) {
  FTRACE(0x111e6fd8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e6fd8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 111e6fdc cmp eax, dword ptr [0x111ee4c0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x111ee4c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6fe2 jae 0x111e7003 */
  if (!C.cf) goto L_111e7003;
  /* 111e6fe4 mov ecx, eax */
  ECX = (EAX);
  /* 111e6fe6 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 111e6fe9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 111e6fec lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 111e6fef mov ecx, dword ptr [ecx*4 + 0x111ee3c0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x111ee3c0)));
  /* 111e6ff6 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 111e6ffb lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 111e6ffe je 0x111e7003 */
  if (C.zf) goto L_111e7003;
  /* 111e7000 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 111e7002 ret  */
  ESPCHK(0x111e6fd8u, _esp0);
  ESP += 4; return;
L_111e7003:;
  /* 111e7003 call 0x111e4a92 */
  push32(0x111e7008u); f_111e4a92();
  /* 111e7008 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 111e700e call 0x111e4a9b */
  push32(0x111e7013u); f_111e4a9b();
  /* 111e7013 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 111e7016 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111e7019 ret  */
  ESPCHK(0x111e6fd8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000701a @ 0x111e701a (95 bytes, 34 insns) */
void f_111e701a(void) {
  FTRACE(0x111e701au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e701a mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 111e701e push ebx */
  push32((uint32_t)(EBX));
  /* 111e701f mov ecx, eax */
  ECX = (EAX);
  /* 111e7021 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 111e7024 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 111e7027 push esi */
  push32((uint32_t)(ESI));
  /* 111e7028 push edi */
  push32((uint32_t)(EDI));
  /* 111e7029 mov esi, dword ptr [ecx*4 + 0x111ee3c0] */
  ESI = (r32((uint32_t)(ECX*4 + 0x111ee3c0)));
  /* 111e7030 lea ebx, [ecx*4 + 0x111ee3c0] */
  EBX = ((uint32_t)(ECX*4 + 0x111ee3c0));
  /* 111e7037 lea edi, [eax + eax*8] */
  EDI = ((uint32_t)(EAX + EAX*8));
  /* 111e703a shl edi, 2 */
  EDI = (sh_shl((uint32_t)(EDI), (0x2u)&0x1f, 32));
  /* 111e703d add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e703f cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7043 jne 0x111e7068 */
  if (!C.zf) goto L_111e7068;
  /* 111e7045 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 111e7047 call 0x111e69b6 */
  push32(0x111e704cu); f_111e69b6();
  /* 111e704c cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7050 pop ecx */
  ECX = (pop32());
  /* 111e7051 jne 0x111e7060 */
  if (!C.zf) goto L_111e7060;
  /* 111e7053 lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 111e7056 push eax */
  push32((uint32_t)(EAX));
  /* 111e7057 call dword ptr [0x111e9000] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9000))), 0x111e705du);
  /* 111e705d inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_111e7060:;
  /* 111e7060 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 111e7062 call 0x111e6a17 */
  push32(0x111e7067u); f_111e6a17();
  /* 111e7067 pop ecx */
  ECX = (pop32());
L_111e7068:;
  /* 111e7068 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 111e706a lea eax, [eax + edi + 0xc] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0xc));
  /* 111e706e push eax */
  push32((uint32_t)(EAX));
  /* 111e706f call dword ptr [0x111e9078] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9078))), 0x111e7075u);
  /* 111e7075 pop edi */
  EDI = (pop32());
  /* 111e7076 pop esi */
  ESI = (pop32());
  /* 111e7077 pop ebx */
  EBX = (pop32());
  /* 111e7078 ret  */
  ESPCHK(0x111e701au, _esp0);
  ESP += 4; return;
}

/* FUN_10007079 @ 0x111e7079 (34 bytes, 10 insns) */
void f_111e7079(void) {
  FTRACE(0x111e7079u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e7079 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 111e707d mov ecx, eax */
  ECX = (EAX);
  /* 111e707f and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 111e7082 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 111e7085 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 111e7088 mov ecx, dword ptr [ecx*4 + 0x111ee3c0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x111ee3c0)));
  /* 111e708f lea eax, [ecx + eax*4 + 0xc] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0xc));
  /* 111e7093 push eax */
  push32((uint32_t)(EAX));
  /* 111e7094 call dword ptr [0x111e907c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e907c))), 0x111e709au);
  /* 111e709a ret  */
  ESPCHK(0x111e7079u, _esp0);
  ESP += 4; return;
}

/* FUN_1000709b @ 0x111e709b (147 bytes, 52 insns) */
void f_111e709b(void) {
  FTRACE(0x111e709bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e709b push ebx */
  push32((uint32_t)(EBX));
  /* 111e709c mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 111e70a0 cmp ebx, dword ptr [0x111ee4c0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x111ee4c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e70a6 push esi */
  push32((uint32_t)(ESI));
  /* 111e70a7 push edi */
  push32((uint32_t)(EDI));
  /* 111e70a8 jae 0x111e711c */
  if (!C.cf) goto L_111e711c;
  /* 111e70aa mov eax, ebx */
  EAX = (EBX);
  /* 111e70ac sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 111e70af lea edi, [eax*4 + 0x111ee3c0] */
  EDI = ((uint32_t)(EAX*4 + 0x111ee3c0));
  /* 111e70b6 mov eax, ebx */
  EAX = (EBX);
  /* 111e70b8 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 111e70bb lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 111e70be mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 111e70c0 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 111e70c3 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 111e70c8 je 0x111e711c */
  if (C.zf) goto L_111e711c;
  /* 111e70ca push ebx */
  push32((uint32_t)(EBX));
  /* 111e70cb call 0x111e701a */
  push32(0x111e70d0u); f_111e701a();
  /* 111e70d0 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 111e70d2 pop ecx */
  ECX = (pop32());
  /* 111e70d3 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 111e70d8 je 0x111e7103 */
  if (C.zf) goto L_111e7103;
  /* 111e70da push ebx */
  push32((uint32_t)(EBX));
  /* 111e70db call 0x111e6fd8 */
  push32(0x111e70e0u); f_111e6fd8();
  /* 111e70e0 pop ecx */
  ECX = (pop32());
  /* 111e70e1 push eax */
  push32((uint32_t)(EAX));
  /* 111e70e2 call dword ptr [0x111e9048] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9048))), 0x111e70e8u);
  /* 111e70e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e70ea jne 0x111e70f6 */
  if (!C.zf) goto L_111e70f6;
  /* 111e70ec call dword ptr [0x111e9080] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9080))), 0x111e70f2u);
  /* 111e70f2 mov esi, eax */
  ESI = (EAX);
  /* 111e70f4 jmp 0x111e70f8 */
  goto L_111e70f8;
L_111e70f6:;
  /* 111e70f6 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_111e70f8:;
  /* 111e70f8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 111e70fa je 0x111e7111 */
  if (C.zf) goto L_111e7111;
  /* 111e70fc call 0x111e4a9b */
  push32(0x111e7101u); f_111e4a9b();
  /* 111e7101 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_111e7103:;
  /* 111e7103 call 0x111e4a92 */
  push32(0x111e7108u); f_111e4a92();
  /* 111e7108 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 111e710e or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_111e7111:;
  /* 111e7111 push ebx */
  push32((uint32_t)(EBX));
  /* 111e7112 call 0x111e7079 */
  push32(0x111e7117u); f_111e7079();
  /* 111e7117 pop ecx */
  ECX = (pop32());
  /* 111e7118 mov eax, esi */
  EAX = (ESI);
  /* 111e711a jmp 0x111e712a */
  goto L_111e712a;
L_111e711c:;
  /* 111e711c call 0x111e4a92 */
  push32(0x111e7121u); f_111e4a92();
  /* 111e7121 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 111e7127 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_111e712a:;
  /* 111e712a pop edi */
  EDI = (pop32());
  /* 111e712b pop esi */
  ESI = (pop32());
  /* 111e712c pop ebx */
  EBX = (pop32());
  /* 111e712d ret  */
  ESPCHK(0x111e709bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000712e @ 0x111e712e (101 bytes, 34 insns) */
void f_111e712e(void) {
  FTRACE(0x111e712eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e712e push esi */
  push32((uint32_t)(ESI));
  /* 111e712f mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 111e7133 cmp esi, dword ptr [0x111ee4c0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x111ee4c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7139 jae 0x111e717b */
  if (!C.cf) goto L_111e717b;
  /* 111e713b mov ecx, esi */
  ECX = (ESI);
  /* 111e713d mov eax, esi */
  EAX = (ESI);
  /* 111e713f sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 111e7142 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 111e7145 mov ecx, dword ptr [ecx*4 + 0x111ee3c0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x111ee3c0)));
  /* 111e714c lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 111e714f test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 111e7154 je 0x111e717b */
  if (C.zf) goto L_111e717b;
  /* 111e7156 push edi */
  push32((uint32_t)(EDI));
  /* 111e7157 push esi */
  push32((uint32_t)(ESI));
  /* 111e7158 call 0x111e701a */
  push32(0x111e715du); f_111e701a();
  /* 111e715d push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 111e7161 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 111e7165 push esi */
  push32((uint32_t)(ESI));
  /* 111e7166 call 0x111e7193 */
  push32(0x111e716bu); f_111e7193();
  /* 111e716b push esi */
  push32((uint32_t)(ESI));
  /* 111e716c mov edi, eax */
  EDI = (EAX);
  /* 111e716e call 0x111e7079 */
  push32(0x111e7173u); f_111e7079();
  /* 111e7173 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e7176 mov eax, edi */
  EAX = (EDI);
  /* 111e7178 pop edi */
  EDI = (pop32());
  /* 111e7179 pop esi */
  ESI = (pop32());
  /* 111e717a ret  */
  ESPCHK(0x111e712eu, _esp0);
  ESP += 4; return;
L_111e717b:;
  /* 111e717b call 0x111e4a92 */
  push32(0x111e7180u); f_111e4a92();
  /* 111e7180 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 111e7186 call 0x111e4a9b */
  push32(0x111e718bu); f_111e4a9b();
  /* 111e718b and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 111e718e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111e7191 pop esi */
  ESI = (pop32());
  /* 111e7192 ret  */
  ESPCHK(0x111e712eu, _esp0);
  ESP += 4; return;
}

/* FUN_10007193 @ 0x111e7193 (395 bytes, 135 insns) */
void f_111e7193(void) {
  FTRACE(0x111e7193u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e7193 push ebp */
  push32((uint32_t)(EBP));
  /* 111e7194 mov ebp, esp */
  EBP = (ESP);
  /* 111e7196 sub esp, 0x414 */
  { uint32_t _a=(ESP),_b=(0x414u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e719c push ebx */
  push32((uint32_t)(EBX));
  /* 111e719d push esi */
  push32((uint32_t)(ESI));
  /* 111e719e push edi */
  push32((uint32_t)(EDI));
  /* 111e719f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 111e71a1 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e71a4 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 111e71a7 mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 111e71aa jne 0x111e71b3 */
  if (!C.zf) goto L_111e71b3;
L_111e71ac:;
  /* 111e71ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e71ae jmp 0x111e7319 */
  goto L_111e7319;
L_111e71b3:;
  /* 111e71b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e71b6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 111e71b9 lea ebx, [eax*4 + 0x111ee3c0] */
  EBX = ((uint32_t)(EAX*4 + 0x111ee3c0));
  /* 111e71c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e71c3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 111e71c6 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 111e71c9 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 111e71cb shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 111e71ce test byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 111e71d3 je 0x111e71e3 */
  if (C.zf) goto L_111e71e3;
  /* 111e71d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e71d7 push edi */
  push32((uint32_t)(EDI));
  /* 111e71d8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 111e71db call 0x111e4d19 */
  push32(0x111e71e0u); f_111e4d19();
  /* 111e71e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111e71e3:;
  /* 111e71e3 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 111e71e5 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e71e7 test byte ptr [eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 111e71eb je 0x111e72b2 */
  if (C.zf) goto L_111e72b2;
  /* 111e71f1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111e71f4 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e71f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111e71fa mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 111e71fd jbe 0x111e72ed */
  if ((C.cf||C.zf)) goto L_111e72ed;
L_111e7203:;
  /* 111e7203 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
L_111e7209:;
  /* 111e7209 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111e720c sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e720f cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7212 jae 0x111e723d */
  if (!C.cf) goto L_111e723d;
  /* 111e7214 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111e7217 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 111e721a mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 111e721c cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e721f jne 0x111e7228 */
  if (!C.zf) goto L_111e7228;
  /* 111e7221 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 111e7224 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 111e7227 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_111e7228:;
  /* 111e7228 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 111e722a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111e722b mov ecx, eax */
  ECX = (EAX);
  /* 111e722d lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 111e7233 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e7235 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e723b jl 0x111e7209 */
  if ((C.sf!=C.of)) goto L_111e7209;
L_111e723d:;
  /* 111e723d mov edi, eax */
  EDI = (EAX);
  /* 111e723f lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 111e7245 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e7247 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 111e724a push 0 */
  push32((uint32_t)(0x0u));
  /* 111e724c push eax */
  push32((uint32_t)(EAX));
  /* 111e724d lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 111e7253 push edi */
  push32((uint32_t)(EDI));
  /* 111e7254 push eax */
  push32((uint32_t)(EAX));
  /* 111e7255 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 111e7257 push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 111e725a call dword ptr [0x111e9050] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9050))), 0x111e7260u);
  /* 111e7260 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e7262 je 0x111e72a7 */
  if (C.zf) goto L_111e72a7;
  /* 111e7264 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111e7267 add dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 111e726a cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e726c jl 0x111e7279 */
  if ((C.sf!=C.of)) goto L_111e7279;
  /* 111e726e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111e7271 sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e7274 cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7277 jb 0x111e7203 */
  if (C.cf) goto L_111e7203;
L_111e7279:;
  /* 111e7279 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_111e727b:;
  /* 111e727b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111e727e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7280 jne 0x111e7316 */
  if (!C.zf) goto L_111e7316;
  /* 111e7286 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7289 je 0x111e72ed */
  if (C.zf) goto L_111e72ed;
  /* 111e728b push 5 */
  push32((uint32_t)(0x5u));
  /* 111e728d pop esi */
  ESI = (pop32());
  /* 111e728e cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7291 jne 0x111e72df */
  if (!C.zf) goto L_111e72df;
  /* 111e7293 call 0x111e4a92 */
  push32(0x111e7298u); f_111e4a92();
  /* 111e7298 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 111e729e call 0x111e4a9b */
  push32(0x111e72a3u); f_111e4a9b();
  /* 111e72a3 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 111e72a5 jmp 0x111e72e8 */
  goto L_111e72e8;
L_111e72a7:;
  /* 111e72a7 call dword ptr [0x111e9080] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9080))), 0x111e72adu);
  /* 111e72ad mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 111e72b0 jmp 0x111e7279 */
  goto L_111e7279;
L_111e72b2:;
  /* 111e72b2 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 111e72b5 push edi */
  push32((uint32_t)(EDI));
  /* 111e72b6 push ecx */
  push32((uint32_t)(ECX));
  /* 111e72b7 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 111e72ba push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 111e72bd push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 111e72bf call dword ptr [0x111e9050] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9050))), 0x111e72c5u);
  /* 111e72c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e72c7 je 0x111e72d4 */
  if (C.zf) goto L_111e72d4;
  /* 111e72c9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111e72cc mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 111e72cf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111e72d2 jmp 0x111e727b */
  goto L_111e727b;
L_111e72d4:;
  /* 111e72d4 call dword ptr [0x111e9080] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9080))), 0x111e72dau);
  /* 111e72da mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 111e72dd jmp 0x111e727b */
  goto L_111e727b;
L_111e72df:;
  /* 111e72df push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 111e72e2 call 0x111e4a1f */
  push32(0x111e72e7u); f_111e4a1f();
  /* 111e72e7 pop ecx */
  ECX = (pop32());
L_111e72e8:;
  /* 111e72e8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111e72eb jmp 0x111e7319 */
  goto L_111e7319;
L_111e72ed:;
  /* 111e72ed mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 111e72ef test byte ptr [eax + esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x40u); fl_logic(_r,8); }
  /* 111e72f4 je 0x111e7302 */
  if (C.zf) goto L_111e7302;
  /* 111e72f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111e72f9 cmp byte ptr [eax], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e72fc je 0x111e71ac */
  if (C.zf) goto L_111e71ac;
L_111e7302:;
  /* 111e7302 call 0x111e4a92 */
  push32(0x111e7307u); f_111e4a92();
  /* 111e7307 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 111e730d call 0x111e4a9b */
  push32(0x111e7312u); f_111e4a9b();
  /* 111e7312 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 111e7314 jmp 0x111e72e8 */
  goto L_111e72e8;
L_111e7316:;
  /* 111e7316 sub eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_111e7319:;
  /* 111e7319 pop edi */
  EDI = (pop32());
  /* 111e731a pop esi */
  ESI = (pop32());
  /* 111e731b pop ebx */
  EBX = (pop32());
  /* 111e731c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e731d ret  */
  ESPCHK(0x111e7193u, _esp0);
  ESP += 4; return;
}

/* FUN_1000731e @ 0x111e731e (68 bytes, 19 insns) */
void f_111e731e(void) {
  FTRACE(0x111e731eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e731e inc dword ptr [0x111ede0c] */
  { uint32_t _r=(r32((uint32_t)(0x111ede0c)))+1; w32((uint32_t)(0x111ede0c), (_r)); fl_inc(_r,32); }
  /* 111e7324 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 111e7329 call 0x111e48e5 */
  push32(0x111e732eu); f_111e48e5();
  /* 111e732e pop ecx */
  ECX = (pop32());
  /* 111e732f mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 111e7333 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e7335 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 111e7338 je 0x111e7347 */
  if (C.zf) goto L_111e7347;
  /* 111e733a or dword ptr [ecx + 0xc], 8 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x8u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 111e733e mov dword ptr [ecx + 0x18], 0x1000 */
  w32((uint32_t)(ECX + 0x18), (0x1000u));
  /* 111e7345 jmp 0x111e7358 */
  goto L_111e7358;
L_111e7347:;
  /* 111e7347 or dword ptr [ecx + 0xc], 4 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x4u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 111e734b lea eax, [ecx + 0x14] */
  EAX = ((uint32_t)(ECX + 0x14));
  /* 111e734e mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 111e7351 mov dword ptr [ecx + 0x18], 2 */
  w32((uint32_t)(ECX + 0x18), (0x2u));
L_111e7358:;
  /* 111e7358 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 111e735b and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 111e735f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 111e7361 ret  */
  ESPCHK(0x111e731eu, _esp0);
  ESP += 4; return;
}

/* FUN_10007362 @ 0x111e7362 (27 bytes, 13 insns) */
void f_111e7362(void) {
  FTRACE(0x111e7362u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e7362 mov eax, dword ptr [0x111edfcc] */
  EAX = (r32((uint32_t)(0x111edfcc)));
  /* 111e7367 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e7369 je 0x111e737a */
  if (C.zf) goto L_111e737a;
  /* 111e736b push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 111e736f call eax */
  call_ind((uint32_t)(EAX), 0x111e7371u);
  /* 111e7371 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e7373 pop ecx */
  ECX = (pop32());
  /* 111e7374 je 0x111e737a */
  if (C.zf) goto L_111e737a;
  /* 111e7376 push 1 */
  push32((uint32_t)(0x1u));
  /* 111e7378 pop eax */
  EAX = (pop32());
  /* 111e7379 ret  */
  ESPCHK(0x111e7362u, _esp0);
  ESP += 4; return;
L_111e737a:;
  /* 111e737a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e737c ret  */
  ESPCHK(0x111e7362u, _esp0);
  ESP += 4; return;
}

/* FUN_1000737d @ 0x111e737d (719 bytes, 241 insns) */
void f_111e737d(void) {
  FTRACE(0x111e737du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e737d push ebp */
  push32((uint32_t)(EBP));
  /* 111e737e mov ebp, esp */
  EBP = (ESP);
  /* 111e7380 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e7383 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111e7386 push ebx */
  push32((uint32_t)(EBX));
  /* 111e7387 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 111e7389 push esi */
  push32((uint32_t)(ESI));
  /* 111e738a test cl, 0x80 */
  { uint32_t _r=(CL)&(0x80u); fl_logic(_r,8); }
  /* 111e738d push edi */
  push32((uint32_t)(EDI));
  /* 111e738e mov dword ptr [ebp - 0x1c], 0xc */
  w32((uint32_t)(EBP + -0x1c), (0xcu));
  /* 111e7395 mov dword ptr [ebp - 0x18], ebx */
  w32((uint32_t)(EBP + -0x18), (EBX));
  /* 111e7398 je 0x111e73a3 */
  if (C.zf) goto L_111e73a3;
  /* 111e739a mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 111e739d mov byte ptr [ebp - 1], 0x10 */
  w8((uint32_t)(EBP + -0x1), (0x10u));
  /* 111e73a1 jmp 0x111e73ae */
  goto L_111e73ae;
L_111e73a3:;
  /* 111e73a3 and byte ptr [ebp - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x1)))&(0x0u); w8((uint32_t)(EBP + -0x1), (_r)); fl_logic(_r,8); }
  /* 111e73a7 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_111e73ae:;
  /* 111e73ae mov eax, 0x8000 */
  EAX = (0x8000u);
  /* 111e73b3 test eax, ecx */
  { uint32_t _r=(EAX)&(ECX); fl_logic(_r,32); }
  /* 111e73b5 jne 0x111e73c8 */
  if (!C.zf) goto L_111e73c8;
  /* 111e73b7 test ch, 0x40 */
  { uint32_t _r=(C.c.b.h)&(0x40u); fl_logic(_r,8); }
  /* 111e73ba jne 0x111e73c4 */
  if (!C.zf) goto L_111e73c4;
  /* 111e73bc cmp dword ptr [0x111edfe4], eax */
  { uint32_t _a=(r32((uint32_t)(0x111edfe4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e73c2 je 0x111e73c8 */
  if (C.zf) goto L_111e73c8;
L_111e73c4:;
  /* 111e73c4 or byte ptr [ebp - 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x1)))|(0x80u); w8((uint32_t)(EBP + -0x1), (_r)); fl_logic(_r,8); }
L_111e73c8:;
  /* 111e73c8 push 3 */
  push32((uint32_t)(0x3u));
  /* 111e73ca mov eax, ecx */
  EAX = (ECX);
  /* 111e73cc pop esi */
  ESI = (pop32());
  /* 111e73cd and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 111e73cf sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e73d1 je 0x111e73ef */
  if (C.zf) goto L_111e73ef;
  /* 111e73d3 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 111e73d4 je 0x111e73e6 */
  if (C.zf) goto L_111e73e6;
  /* 111e73d6 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 111e73d7 jne 0x111e7481 */
  if (!C.zf) goto L_111e7481;
  /* 111e73dd mov dword ptr [ebp - 0xc], 0xc0000000 */
  w32((uint32_t)(EBP + -0xc), (0xc0000000u));
  /* 111e73e4 jmp 0x111e73f6 */
  goto L_111e73f6;
L_111e73e6:;
  /* 111e73e6 mov dword ptr [ebp - 0xc], 0x40000000 */
  w32((uint32_t)(EBP + -0xc), (0x40000000u));
  /* 111e73ed jmp 0x111e73f6 */
  goto L_111e73f6;
L_111e73ef:;
  /* 111e73ef mov dword ptr [ebp - 0xc], 0x80000000 */
  w32((uint32_t)(EBP + -0xc), (0x80000000u));
L_111e73f6:;
  /* 111e73f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111e73f9 cmp eax, 0x10 */
  { uint32_t _a=(EAX),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e73fc je 0x111e7424 */
  if (C.zf) goto L_111e7424;
  /* 111e73fe cmp eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7401 je 0x111e741b */
  if (C.zf) goto L_111e741b;
  /* 111e7403 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7406 je 0x111e7412 */
  if (C.zf) goto L_111e7412;
  /* 111e7408 cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e740b jne 0x111e7481 */
  if (!C.zf) goto L_111e7481;
  /* 111e740d mov dword ptr [ebp - 0x10], esi */
  w32((uint32_t)(EBP + -0x10), (ESI));
  /* 111e7410 jmp 0x111e7427 */
  goto L_111e7427;
L_111e7412:;
  /* 111e7412 mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
  /* 111e7419 jmp 0x111e7427 */
  goto L_111e7427;
L_111e741b:;
  /* 111e741b mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 111e7422 jmp 0x111e7427 */
  goto L_111e7427;
L_111e7424:;
  /* 111e7424 mov dword ptr [ebp - 0x10], ebx */
  w32((uint32_t)(EBP + -0x10), (EBX));
L_111e7427:;
  /* 111e7427 mov edx, 0x700 */
  EDX = (0x700u);
  /* 111e742c mov eax, 0x400 */
  EAX = (0x400u);
  /* 111e7431 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 111e7433 mov edi, 0x100 */
  EDI = (0x100u);
  /* 111e7438 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e743a jg 0x111e746d */
  if ((!C.zf&&C.sf==C.of)) goto L_111e746d;
  /* 111e743c je 0x111e7468 */
  if (C.zf) goto L_111e7468;
  /* 111e743e cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7440 je 0x111e7468 */
  if (C.zf) goto L_111e7468;
  /* 111e7442 cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7444 je 0x111e745f */
  if (C.zf) goto L_111e745f;
  /* 111e7446 cmp ecx, 0x200 */
  { uint32_t _a=(ECX),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e744c je 0x111e749b */
  if (C.zf) goto L_111e749b;
  /* 111e744e cmp ecx, 0x300 */
  { uint32_t _a=(ECX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7454 jne 0x111e7481 */
  if (!C.zf) goto L_111e7481;
  /* 111e7456 mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 111e745d jmp 0x111e74ab */
  goto L_111e74ab;
L_111e745f:;
  /* 111e745f mov dword ptr [ebp - 8], 4 */
  w32((uint32_t)(EBP + -0x8), (0x4u));
  /* 111e7466 jmp 0x111e74ab */
  goto L_111e74ab;
L_111e7468:;
  /* 111e7468 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 111e746b jmp 0x111e74ab */
  goto L_111e74ab;
L_111e746d:;
  /* 111e746d cmp ecx, 0x500 */
  { uint32_t _a=(ECX),_b=(0x500u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7473 je 0x111e74a4 */
  if (C.zf) goto L_111e74a4;
  /* 111e7475 cmp ecx, 0x600 */
  { uint32_t _a=(ECX),_b=(0x600u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e747b je 0x111e749b */
  if (C.zf) goto L_111e749b;
  /* 111e747d cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e747f je 0x111e74a4 */
  if (C.zf) goto L_111e74a4;
L_111e7481:;
  /* 111e7481 call 0x111e4a92 */
  push32(0x111e7486u); f_111e4a92();
  /* 111e7486 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 111e748c call 0x111e4a9b */
  push32(0x111e7491u); f_111e4a9b();
  /* 111e7491 mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 111e7493 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111e7496 jmp 0x111e7647 */
  goto L_111e7647;
L_111e749b:;
  /* 111e749b mov dword ptr [ebp - 8], 5 */
  w32((uint32_t)(EBP + -0x8), (0x5u));
  /* 111e74a2 jmp 0x111e74ab */
  goto L_111e74ab;
L_111e74a4:;
  /* 111e74a4 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_111e74ab:;
  /* 111e74ab mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111e74ae mov esi, 0x80 */
  ESI = (0x80u);
  /* 111e74b3 test edi, eax */
  { uint32_t _r=(EDI)&(EAX); fl_logic(_r,32); }
  /* 111e74b5 je 0x111e74ca */
  if (C.zf) goto L_111e74ca;
  /* 111e74b7 mov ecx, dword ptr [0x111ede10] */
  ECX = (r32((uint32_t)(0x111ede10)));
  /* 111e74bd not ecx */
  ECX = (~(ECX));
  /* 111e74bf and ecx, dword ptr [ebp + 0x14] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + 0x14))); ECX = (_r); fl_logic(_r,32); }
  /* 111e74c2 test cl, 0x80 */
  { uint32_t _r=(CL)&(0x80u); fl_logic(_r,8); }
  /* 111e74c5 jne 0x111e74ca */
  if (!C.zf) goto L_111e74ca;
  /* 111e74c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 111e74c9 pop esi */
  ESI = (pop32());
L_111e74ca:;
  /* 111e74ca test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 111e74cc je 0x111e74d8 */
  if (C.zf) goto L_111e74d8;
  /* 111e74ce or esi, 0x4000000 */
  { uint32_t _r=(ESI)|(0x4000000u); ESI = (_r); fl_logic(_r,32); }
  /* 111e74d4 or byte ptr [ebp - 0xa], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0xa)))|(0x1u); w8((uint32_t)(EBP + -0xa), (_r)); fl_logic(_r,8); }
L_111e74d8:;
  /* 111e74d8 test ah, 0x10 */
  { uint32_t _r=(AH)&(0x10u); fl_logic(_r,8); }
  /* 111e74db je 0x111e74df */
  if (C.zf) goto L_111e74df;
  /* 111e74dd or esi, edi */
  { uint32_t _r=(ESI)|(EDI); ESI = (_r); fl_logic(_r,32); }
L_111e74df:;
  /* 111e74df test al, 0x20 */
  { uint32_t _r=(AL)&(0x20u); fl_logic(_r,8); }
  /* 111e74e1 je 0x111e74eb */
  if (C.zf) goto L_111e74eb;
  /* 111e74e3 or esi, 0x8000000 */
  { uint32_t _r=(ESI)|(0x8000000u); ESI = (_r); fl_logic(_r,32); }
  /* 111e74e9 jmp 0x111e74f5 */
  goto L_111e74f5;
L_111e74eb:;
  /* 111e74eb test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 111e74ed je 0x111e74f5 */
  if (C.zf) goto L_111e74f5;
  /* 111e74ef or esi, 0x10000000 */
  { uint32_t _r=(ESI)|(0x10000000u); ESI = (_r); fl_logic(_r,32); }
L_111e74f5:;
  /* 111e74f5 call 0x111e6dba */
  push32(0x111e74fau); f_111e6dba();
  /* 111e74fa mov ebx, eax */
  EBX = (EAX);
  /* 111e74fc or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 111e74ff cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7501 jne 0x111e751d */
  if (!C.zf) goto L_111e751d;
  /* 111e7503 call 0x111e4a92 */
  push32(0x111e7508u); f_111e4a92();
  /* 111e7508 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 111e750e call 0x111e4a9b */
  push32(0x111e7513u); f_111e4a9b();
  /* 111e7513 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 111e7516 mov eax, edi */
  EAX = (EDI);
  /* 111e7518 jmp 0x111e7647 */
  goto L_111e7647;
L_111e751d:;
  /* 111e751d push 0 */
  push32((uint32_t)(0x0u));
  /* 111e751f push esi */
  push32((uint32_t)(ESI));
  /* 111e7520 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 111e7523 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 111e7526 push eax */
  push32((uint32_t)(EAX));
  /* 111e7527 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 111e752a push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 111e752d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 111e7530 call dword ptr [0x111e9038] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9038))), 0x111e7536u);
  /* 111e7536 mov esi, eax */
  ESI = (EAX);
  /* 111e7538 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e753a jne 0x111e7550 */
  if (!C.zf) goto L_111e7550;
L_111e753c:;
  /* 111e753c call dword ptr [0x111e9080] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9080))), 0x111e7542u);
  /* 111e7542 push eax */
  push32((uint32_t)(EAX));
  /* 111e7543 call 0x111e4a1f */
  push32(0x111e7548u); f_111e4a1f();
  /* 111e7548 pop ecx */
  ECX = (pop32());
  /* 111e7549 mov esi, edi */
  ESI = (EDI);
  /* 111e754b jmp 0x111e763e */
  goto L_111e763e;
L_111e7550:;
  /* 111e7550 push esi */
  push32((uint32_t)(ESI));
  /* 111e7551 call dword ptr [0x111e9098] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9098))), 0x111e7557u);
  /* 111e7557 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e7559 jne 0x111e7564 */
  if (!C.zf) goto L_111e7564;
  /* 111e755b push esi */
  push32((uint32_t)(ESI));
  /* 111e755c call dword ptr [0x111e9084] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9084))), 0x111e7562u);
  /* 111e7562 jmp 0x111e753c */
  goto L_111e753c;
L_111e7564:;
  /* 111e7564 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7567 jne 0x111e756f */
  if (!C.zf) goto L_111e756f;
  /* 111e7569 or byte ptr [ebp - 1], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x1)))|(0x40u); w8((uint32_t)(EBP + -0x1), (_r)); fl_logic(_r,8); }
  /* 111e756d jmp 0x111e7578 */
  goto L_111e7578;
L_111e756f:;
  /* 111e756f cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7572 jne 0x111e7578 */
  if (!C.zf) goto L_111e7578;
  /* 111e7574 or byte ptr [ebp - 1], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x1)))|(0x8u); w8((uint32_t)(EBP + -0x1), (_r)); fl_logic(_r,8); }
L_111e7578:;
  /* 111e7578 push esi */
  push32((uint32_t)(ESI));
  /* 111e7579 push ebx */
  push32((uint32_t)(EBX));
  /* 111e757a call 0x111e6edd */
  push32(0x111e757fu); f_111e6edd();
  /* 111e757f mov eax, ebx */
  EAX = (EBX);
  /* 111e7581 pop ecx */
  ECX = (pop32());
  /* 111e7582 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 111e7585 pop ecx */
  ECX = (pop32());
  /* 111e7586 mov cl, byte ptr [ebp - 1] */
  CL = (r8((uint32_t)(EBP + -0x1)));
  /* 111e7589 lea edi, [eax*4 + 0x111ee3c0] */
  EDI = ((uint32_t)(EAX*4 + 0x111ee3c0));
  /* 111e7590 mov eax, ebx */
  EAX = (EBX);
  /* 111e7592 or cl, 1 */
  { uint32_t _r=(CL)|(0x1u); CL = (_r); fl_logic(_r,8); }
  /* 111e7595 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 111e7598 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 111e759b lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 111e759e mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 111e75a0 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 111e75a3 and byte ptr [ebp + 0xb], 0x48 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xb)))&(0x48u); w8((uint32_t)(EBP + 0xb), (_r)); fl_logic(_r,8); }
  /* 111e75a7 mov byte ptr [eax + esi + 4], cl */
  w8((uint32_t)(EAX + ESI*1 + 0x4), (CL));
  /* 111e75ab jne 0x111e7625 */
  if (!C.zf) goto L_111e7625;
  /* 111e75ad test cl, 0x80 */
  { uint32_t _r=(CL)&(0x80u); fl_logic(_r,8); }
  /* 111e75b0 je 0x111e7625 */
  if (C.zf) goto L_111e7625;
  /* 111e75b2 test byte ptr [ebp + 0xc], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xc)))&(0x2u); fl_logic(_r,8); }
  /* 111e75b6 je 0x111e7625 */
  if (C.zf) goto L_111e7625;
  /* 111e75b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e75ba push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 111e75bc push ebx */
  push32((uint32_t)(EBX));
  /* 111e75bd call 0x111e4d19 */
  push32(0x111e75c2u); f_111e4d19();
  /* 111e75c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e75c5 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e75c8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 111e75cb jne 0x111e75e6 */
  if (!C.zf) goto L_111e75e6;
  /* 111e75cd call 0x111e4a9b */
  push32(0x111e75d2u); f_111e4a9b();
  /* 111e75d2 cmp dword ptr [eax], 0x83 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x83u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e75d8 je 0x111e7625 */
  if (C.zf) goto L_111e7625;
L_111e75da:;
  /* 111e75da push ebx */
  push32((uint32_t)(EBX));
  /* 111e75db call 0x111e404c */
  push32(0x111e75e0u); f_111e404c();
  /* 111e75e0 pop ecx */
  ECX = (pop32());
  /* 111e75e1 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 111e75e4 jmp 0x111e763e */
  goto L_111e763e;
L_111e75e6:;
  /* 111e75e6 and byte ptr [ebp + 0x13], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x13)))&(0x0u); w8((uint32_t)(EBP + 0x13), (_r)); fl_logic(_r,8); }
  /* 111e75ea lea eax, [ebp + 0x13] */
  EAX = ((uint32_t)(EBP + 0x13));
  /* 111e75ed push 1 */
  push32((uint32_t)(0x1u));
  /* 111e75ef push eax */
  push32((uint32_t)(EAX));
  /* 111e75f0 push ebx */
  push32((uint32_t)(EBX));
  /* 111e75f1 call 0x111e43cf */
  push32(0x111e75f6u); f_111e43cf();
  /* 111e75f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e75f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e75fb jne 0x111e7613 */
  if (!C.zf) goto L_111e7613;
  /* 111e75fd cmp byte ptr [ebp + 0x13], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x13))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e7601 jne 0x111e7613 */
  if (!C.zf) goto L_111e7613;
  /* 111e7603 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 111e7606 push ebx */
  push32((uint32_t)(EBX));
  /* 111e7607 call 0x111e8268 */
  push32(0x111e760cu); f_111e8268();
  /* 111e760c pop ecx */
  ECX = (pop32());
  /* 111e760d cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7610 pop ecx */
  ECX = (pop32());
  /* 111e7611 je 0x111e75da */
  if (C.zf) goto L_111e75da;
L_111e7613:;
  /* 111e7613 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e7615 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e7617 push ebx */
  push32((uint32_t)(EBX));
  /* 111e7618 call 0x111e4d19 */
  push32(0x111e761du); f_111e4d19();
  /* 111e761d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e7620 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7623 je 0x111e75da */
  if (C.zf) goto L_111e75da;
L_111e7625:;
  /* 111e7625 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e7629 jne 0x111e763c */
  if (!C.zf) goto L_111e763c;
  /* 111e762b test byte ptr [ebp + 0xc], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xc)))&(0x8u); fl_logic(_r,8); }
  /* 111e762f je 0x111e763c */
  if (C.zf) goto L_111e763c;
  /* 111e7631 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 111e7633 or byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))|(0x20u); w8((uint32_t)(EAX + ESI*1 + 0x4), (_r)); fl_logic(_r,8); }
  /* 111e7638 lea eax, [eax + esi + 4] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x4));
L_111e763c:;
  /* 111e763c mov esi, ebx */
  ESI = (EBX);
L_111e763e:;
  /* 111e763e push ebx */
  push32((uint32_t)(EBX));
  /* 111e763f call 0x111e7079 */
  push32(0x111e7644u); f_111e7079();
  /* 111e7644 pop ecx */
  ECX = (pop32());
  /* 111e7645 mov eax, esi */
  EAX = (ESI);
L_111e7647:;
  /* 111e7647 pop edi */
  EDI = (pop32());
  /* 111e7648 pop esi */
  ESI = (pop32());
  /* 111e7649 pop ebx */
  EBX = (pop32());
  /* 111e764a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e764b ret  */
  ESPCHK(0x111e737du, _esp0);
  ESP += 4; return;
}

/* FUN_10007650 @ 0x111e7650 (7 bytes, 3 insns) */
void f_111e7650(void) {
  FTRACE(0x111e7650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e7650 push edi */
  push32((uint32_t)(EDI));
  /* 111e7651 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 111e7655 jmp 0x111e76c1 */
  jmp_ind(0x111e76c1u); return;
}

/* FUN_10007660 @ 0x111e7660 (224 bytes, 84 insns) */
void f_111e7660(void) {
  FTRACE(0x111e7660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e7660 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 111e7664 push edi */
  push32((uint32_t)(EDI));
  /* 111e7665 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 111e766b je 0x111e767c */
  if (C.zf) goto L_111e767c;
L_111e766d:;
  /* 111e766d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 111e766f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 111e7670 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e7672 je 0x111e76af */
  if (C.zf) goto L_111e76af;
  /* 111e7674 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 111e767a jne 0x111e766d */
  if (!C.zf) goto L_111e766d;
L_111e767c:;
  /* 111e767c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 111e767e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 111e7683 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e7685 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111e7688 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 111e768a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e768d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 111e7692 je 0x111e767c */
  if (C.zf) goto L_111e767c;
  /* 111e7694 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 111e7697 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e7699 je 0x111e76be */
  if (C.zf) goto L_111e76be;
  /* 111e769b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 111e769d je 0x111e76b9 */
  if (C.zf) goto L_111e76b9;
  /* 111e769f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 111e76a4 je 0x111e76b4 */
  if (C.zf) goto L_111e76b4;
  /* 111e76a6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 111e76ab je 0x111e76af */
  if (C.zf) goto L_111e76af;
  /* 111e76ad jmp 0x111e767c */
  goto L_111e767c;
L_111e76af:;
  /* 111e76af lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 111e76b2 jmp 0x111e76c1 */
  goto L_111e76c1;
L_111e76b4:;
  /* 111e76b4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 111e76b7 jmp 0x111e76c1 */
  goto L_111e76c1;
L_111e76b9:;
  /* 111e76b9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 111e76bc jmp 0x111e76c1 */
  goto L_111e76c1;
L_111e76be:;
  /* 111e76be lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_111e76c1:;
  /* 111e76c1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 111e76c5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 111e76cb je 0x111e76e6 */
  if (C.zf) goto L_111e76e6;
L_111e76cd:;
  /* 111e76cd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 111e76cf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 111e76d0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 111e76d2 je 0x111e7738 */
  if (C.zf) goto L_111e7738;
  /* 111e76d4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 111e76d6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 111e76d7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 111e76dd jne 0x111e76cd */
  if (!C.zf) goto L_111e76cd;
  /* 111e76df jmp 0x111e76e6 */
  goto L_111e76e6;
L_111e76e1:;
  /* 111e76e1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 111e76e3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_111e76e6:;
  /* 111e76e6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 111e76eb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 111e76ed add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e76ef xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111e76f2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 111e76f4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111e76f6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e76f9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 111e76fe je 0x111e76e1 */
  if (C.zf) goto L_111e76e1;
  /* 111e7700 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 111e7702 je 0x111e7738 */
  if (C.zf) goto L_111e7738;
  /* 111e7704 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 111e7706 je 0x111e772f */
  if (C.zf) goto L_111e772f;
  /* 111e7708 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 111e770e je 0x111e7722 */
  if (C.zf) goto L_111e7722;
  /* 111e7710 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 111e7716 je 0x111e771a */
  if (C.zf) goto L_111e771a;
  /* 111e7718 jmp 0x111e76e1 */
  goto L_111e76e1;
L_111e771a:;
  /* 111e771a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 111e771c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 111e7720 pop edi */
  EDI = (pop32());
  /* 111e7721 ret  */
  ESPCHK(0x111e7660u, _esp0);
  ESP += 4; return;
L_111e7722:;
  /* 111e7722 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 111e7725 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 111e7729 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 111e772d pop edi */
  EDI = (pop32());
  /* 111e772e ret  */
  ESPCHK(0x111e7660u, _esp0);
  ESP += 4; return;
L_111e772f:;
  /* 111e772f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 111e7732 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 111e7736 pop edi */
  EDI = (pop32());
  /* 111e7737 ret  */
  ESPCHK(0x111e7660u, _esp0);
  ESP += 4; return;
L_111e7738:;
  /* 111e7738 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 111e773a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 111e773e pop edi */
  EDI = (pop32());
  /* 111e773f ret  */
  ESPCHK(0x111e7660u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x111e7740 (123 bytes, 44 insns) */
void f_111e7740(void) {
  FTRACE(0x111e7740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e7740 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 111e7744 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 111e774a je 0x111e7760 */
  if (C.zf) goto L_111e7760;
L_111e774c:;
  /* 111e774c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 111e774e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 111e774f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e7751 je 0x111e7793 */
  if (C.zf) goto L_111e7793;
  /* 111e7753 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 111e7759 jne 0x111e774c */
  if (!C.zf) goto L_111e774c;
  /* 111e775b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_111e7760:;
  /* 111e7760 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 111e7762 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 111e7767 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e7769 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111e776c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 111e776e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e7771 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 111e7776 je 0x111e7760 */
  if (C.zf) goto L_111e7760;
  /* 111e7778 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 111e777b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e777d je 0x111e77b1 */
  if (C.zf) goto L_111e77b1;
  /* 111e777f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 111e7781 je 0x111e77a7 */
  if (C.zf) goto L_111e77a7;
  /* 111e7783 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 111e7788 je 0x111e779d */
  if (C.zf) goto L_111e779d;
  /* 111e778a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 111e778f je 0x111e7793 */
  if (C.zf) goto L_111e7793;
  /* 111e7791 jmp 0x111e7760 */
  goto L_111e7760;
L_111e7793:;
  /* 111e7793 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 111e7796 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 111e779a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e779c ret  */
  ESPCHK(0x111e7740u, _esp0);
  ESP += 4; return;
L_111e779d:;
  /* 111e779d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 111e77a0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 111e77a4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e77a6 ret  */
  ESPCHK(0x111e7740u, _esp0);
  ESP += 4; return;
L_111e77a7:;
  /* 111e77a7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 111e77aa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 111e77ae sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e77b0 ret  */
  ESPCHK(0x111e7740u, _esp0);
  ESP += 4; return;
L_111e77b1:;
  /* 111e77b1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 111e77b4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 111e77b8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e77ba ret  */
  ESPCHK(0x111e7740u, _esp0);
  ESP += 4; return;
}

/* FUN_100077bb @ 0x111e77bb (429 bytes, 143 insns) */
void f_111e77bb(void) {
  FTRACE(0x111e77bbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e77bb push ebp */
  push32((uint32_t)(EBP));
  /* 111e77bc mov ebp, esp */
  EBP = (ESP);
  /* 111e77be sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e77c1 push ebx */
  push32((uint32_t)(EBX));
  /* 111e77c2 push esi */
  push32((uint32_t)(ESI));
  /* 111e77c3 push edi */
  push32((uint32_t)(EDI));
  /* 111e77c4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 111e77c6 call 0x111e69b6 */
  push32(0x111e77cbu); f_111e69b6();
  /* 111e77cb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 111e77ce call 0x111e7968 */
  push32(0x111e77d3u); f_111e7968();
  /* 111e77d3 mov ebx, eax */
  EBX = (EAX);
  /* 111e77d5 pop ecx */
  ECX = (pop32());
  /* 111e77d6 cmp ebx, dword ptr [0x111ee160] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x111ee160))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e77dc pop ecx */
  ECX = (pop32());
  /* 111e77dd mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 111e77e0 jne 0x111e77e9 */
  if (!C.zf) goto L_111e77e9;
L_111e77e2:;
  /* 111e77e2 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 111e77e4 jmp 0x111e7959 */
  goto L_111e7959;
L_111e77e9:;
  /* 111e77e9 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 111e77eb je 0x111e7947 */
  if (C.zf) goto L_111e7947;
  /* 111e77f1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111e77f3 mov eax, 0x111ecbc8 */
  EAX = (0x111ecbc8u);
L_111e77f8:;
  /* 111e77f8 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e77fa je 0x111e7870 */
  if (C.zf) goto L_111e7870;
  /* 111e77fc add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e77ff inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 111e7800 cmp eax, 0x111eccb8 */
  { uint32_t _a=(EAX),_b=(0x111eccb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7805 jl 0x111e77f8 */
  if ((C.sf!=C.of)) goto L_111e77f8;
  /* 111e7807 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 111e780a push eax */
  push32((uint32_t)(EAX));
  /* 111e780b push ebx */
  push32((uint32_t)(EBX));
  /* 111e780c call dword ptr [0x111e903c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e903c))), 0x111e7812u);
  /* 111e7812 push 1 */
  push32((uint32_t)(0x1u));
  /* 111e7814 pop esi */
  ESI = (pop32());
  /* 111e7815 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7817 jne 0x111e793e */
  if (!C.zf) goto L_111e793e;
  /* 111e781d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 111e781f and dword ptr [0x111ee384], 0 */
  { uint32_t _r=(r32((uint32_t)(0x111ee384)))&(0x0u); w32((uint32_t)(0x111ee384), (_r)); fl_logic(_r,32); }
  /* 111e7826 pop ecx */
  ECX = (pop32());
  /* 111e7827 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e7829 mov edi, 0x111ee280 */
  EDI = (0x111ee280u);
  /* 111e782e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7831 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 111e7833 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 111e7834 mov dword ptr [0x111ee160], ebx */
  w32((uint32_t)(0x111ee160), (EBX));
  /* 111e783a jbe 0x111e792b */
  if ((C.cf||C.zf)) goto L_111e792b;
  /* 111e7840 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e7844 je 0x111e7906 */
  if (C.zf) goto L_111e7906;
  /* 111e784a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_111e784d:;
  /* 111e784d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 111e784f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 111e7851 je 0x111e7906 */
  if (C.zf) goto L_111e7906;
  /* 111e7857 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 111e785b movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_111e785e:;
  /* 111e785e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7860 ja 0x111e78fa */
  if ((!C.cf&&!C.zf)) goto L_111e78fa;
  /* 111e7866 or byte ptr [eax + 0x111ee281], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x111ee281)))|(0x4u); w8((uint32_t)(EAX + 0x111ee281), (_r)); fl_logic(_r,8); }
  /* 111e786d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111e786e jmp 0x111e785e */
  goto L_111e785e;
L_111e7870:;
  /* 111e7870 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 111e7874 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 111e7876 pop ecx */
  ECX = (pop32());
  /* 111e7877 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e7879 mov edi, 0x111ee280 */
  EDI = (0x111ee280u);
  /* 111e787e lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 111e7881 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 111e7883 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 111e7886 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 111e7887 lea ebx, [esi + 0x111ecbd8] */
  EBX = ((uint32_t)(ESI + 0x111ecbd8));
L_111e788d:;
  /* 111e788d cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e7890 mov ecx, ebx */
  ECX = (EBX);
  /* 111e7892 je 0x111e78c0 */
  if (C.zf) goto L_111e78c0;
L_111e7894:;
  /* 111e7894 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 111e7897 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 111e7899 je 0x111e78c0 */
  if (C.zf) goto L_111e78c0;
  /* 111e789b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 111e789e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 111e78a1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e78a3 ja 0x111e78b9 */
  if ((!C.cf&&!C.zf)) goto L_111e78b9;
  /* 111e78a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111e78a8 mov dl, byte ptr [edx + 0x111ecbc0] */
  DL = (r8((uint32_t)(EDX + 0x111ecbc0)));
L_111e78ae:;
  /* 111e78ae or byte ptr [eax + 0x111ee281], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x111ee281)))|(DL); w8((uint32_t)(EAX + 0x111ee281), (_r)); fl_logic(_r,8); }
  /* 111e78b4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111e78b5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e78b7 jbe 0x111e78ae */
  if ((C.cf||C.zf)) goto L_111e78ae;
L_111e78b9:;
  /* 111e78b9 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 111e78ba inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 111e78bb cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e78be jne 0x111e7894 */
  if (!C.zf) goto L_111e7894;
L_111e78c0:;
  /* 111e78c0 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 111e78c3 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e78c6 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e78ca jb 0x111e788d */
  if (C.cf) goto L_111e788d;
  /* 111e78cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e78cf mov dword ptr [0x111ee17c], 1 */
  w32((uint32_t)(0x111ee17c), (0x1u));
  /* 111e78d9 push eax */
  push32((uint32_t)(EAX));
  /* 111e78da mov dword ptr [0x111ee160], eax */
  w32((uint32_t)(0x111ee160), (EAX));
  /* 111e78df call 0x111e79b2 */
  push32(0x111e78e4u); f_111e79b2();
  /* 111e78e4 lea esi, [esi + 0x111ecbcc] */
  ESI = ((uint32_t)(ESI + 0x111ecbcc));
  /* 111e78ea mov edi, 0x111ee170 */
  EDI = (0x111ee170u);
  /* 111e78ef movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 111e78f0 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 111e78f1 pop ecx */
  ECX = (pop32());
  /* 111e78f2 mov dword ptr [0x111ee384], eax */
  w32((uint32_t)(0x111ee384), (EAX));
  /* 111e78f7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 111e78f8 jmp 0x111e794c */
  goto L_111e794c;
L_111e78fa:;
  /* 111e78fa inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 111e78fb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 111e78fc cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e7900 jne 0x111e784d */
  if (!C.zf) goto L_111e784d;
L_111e7906:;
  /* 111e7906 mov eax, esi */
  EAX = (ESI);
L_111e7908:;
  /* 111e7908 or byte ptr [eax + 0x111ee281], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x111ee281)))|(0x8u); w8((uint32_t)(EAX + 0x111ee281), (_r)); fl_logic(_r,8); }
  /* 111e790f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111e7910 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7915 jb 0x111e7908 */
  if (C.cf) goto L_111e7908;
  /* 111e7917 push ebx */
  push32((uint32_t)(EBX));
  /* 111e7918 call 0x111e79b2 */
  push32(0x111e791du); f_111e79b2();
  /* 111e791d pop ecx */
  ECX = (pop32());
  /* 111e791e mov dword ptr [0x111ee384], eax */
  w32((uint32_t)(0x111ee384), (EAX));
  /* 111e7923 mov dword ptr [0x111ee17c], esi */
  w32((uint32_t)(0x111ee17c), (ESI));
  /* 111e7929 jmp 0x111e7932 */
  goto L_111e7932;
L_111e792b:;
  /* 111e792b and dword ptr [0x111ee17c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x111ee17c)))&(0x0u); w32((uint32_t)(0x111ee17c), (_r)); fl_logic(_r,32); }
L_111e7932:;
  /* 111e7932 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e7934 mov edi, 0x111ee170 */
  EDI = (0x111ee170u);
  /* 111e7939 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 111e793a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 111e793b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 111e793c jmp 0x111e794c */
  goto L_111e794c;
L_111e793e:;
  /* 111e793e cmp dword ptr [0x111edfd4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111edfd4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7945 je 0x111e7956 */
  if (C.zf) goto L_111e7956;
L_111e7947:;
  /* 111e7947 call 0x111e79e5 */
  push32(0x111e794cu); f_111e79e5();
L_111e794c:;
  /* 111e794c call 0x111e7a0e */
  push32(0x111e7951u); f_111e7a0e();
  /* 111e7951 jmp 0x111e77e2 */
  goto L_111e77e2;
L_111e7956:;
  /* 111e7956 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_111e7959:;
  /* 111e7959 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 111e795b call 0x111e6a17 */
  push32(0x111e7960u); f_111e6a17();
  /* 111e7960 pop ecx */
  ECX = (pop32());
  /* 111e7961 mov eax, esi */
  EAX = (ESI);
  /* 111e7963 pop edi */
  EDI = (pop32());
  /* 111e7964 pop esi */
  ESI = (pop32());
  /* 111e7965 pop ebx */
  EBX = (pop32());
  /* 111e7966 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e7967 ret  */
  ESPCHK(0x111e77bbu, _esp0);
  ESP += 4; return;
}

/* FUN_10007968 @ 0x111e7968 (74 bytes, 15 insns) */
void f_111e7968(void) {
  FTRACE(0x111e7968u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e7968 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 111e796c and dword ptr [0x111edfd4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x111edfd4)))&(0x0u); w32((uint32_t)(0x111edfd4), (_r)); fl_logic(_r,32); }
  /* 111e7973 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7976 jne 0x111e7988 */
  if (!C.zf) goto L_111e7988;
  /* 111e7978 mov dword ptr [0x111edfd4], 1 */
  w32((uint32_t)(0x111edfd4), (0x1u));
  /* 111e7982 jmp dword ptr [0x111e902c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x111e902c)))); return;
L_111e7988:;
  /* 111e7988 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e798b jne 0x111e799d */
  if (!C.zf) goto L_111e799d;
  /* 111e798d mov dword ptr [0x111edfd4], 1 */
  w32((uint32_t)(0x111edfd4), (0x1u));
  /* 111e7997 jmp dword ptr [0x111e9030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x111e9030)))); return;
L_111e799d:;
  /* 111e799d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e79a0 jne 0x111e79b1 */
  if (!C.zf) goto L_111e79b1;
  /* 111e79a2 mov eax, dword ptr [0x111ee000] */
  EAX = (r32((uint32_t)(0x111ee000)));
  /* 111e79a7 mov dword ptr [0x111edfd4], 1 */
  w32((uint32_t)(0x111edfd4), (0x1u));
L_111e79b1:;
  /* 111e79b1 ret  */
  ESPCHK(0x111e7968u, _esp0);
  ESP += 4; return;
}

/* FUN_100079b2 @ 0x111e79b2 (51 bytes, 19 insns) */
void f_111e79b2(void) {
  FTRACE(0x111e79b2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e79b2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 111e79b6 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e79bb je 0x111e79df */
  if (C.zf) goto L_111e79df;
  /* 111e79bd sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e79c0 je 0x111e79d9 */
  if (C.zf) goto L_111e79d9;
  /* 111e79c2 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e79c5 je 0x111e79d3 */
  if (C.zf) goto L_111e79d3;
  /* 111e79c7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 111e79c8 je 0x111e79cd */
  if (C.zf) goto L_111e79cd;
  /* 111e79ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e79cc ret  */
  ESPCHK(0x111e79b2u, _esp0);
  ESP += 4; return;
L_111e79cd:;
  /* 111e79cd mov eax, 0x404 */
  EAX = (0x404u);
  /* 111e79d2 ret  */
  ESPCHK(0x111e79b2u, _esp0);
  ESP += 4; return;
L_111e79d3:;
  /* 111e79d3 mov eax, 0x412 */
  EAX = (0x412u);
  /* 111e79d8 ret  */
  ESPCHK(0x111e79b2u, _esp0);
  ESP += 4; return;
L_111e79d9:;
  /* 111e79d9 mov eax, 0x804 */
  EAX = (0x804u);
  /* 111e79de ret  */
  ESPCHK(0x111e79b2u, _esp0);
  ESP += 4; return;
L_111e79df:;
  /* 111e79df mov eax, 0x411 */
  EAX = (0x411u);
  /* 111e79e4 ret  */
  ESPCHK(0x111e79b2u, _esp0);
  ESP += 4; return;
}

/* FUN_100079e5 @ 0x111e79e5 (41 bytes, 17 insns) */
void f_111e79e5(void) {
  FTRACE(0x111e79e5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e79e5 push edi */
  push32((uint32_t)(EDI));
  /* 111e79e6 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 111e79e8 pop ecx */
  ECX = (pop32());
  /* 111e79e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e79eb mov edi, 0x111ee280 */
  EDI = (0x111ee280u);
  /* 111e79f0 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 111e79f2 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 111e79f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e79f5 mov edi, 0x111ee170 */
  EDI = (0x111ee170u);
  /* 111e79fa mov dword ptr [0x111ee160], eax */
  w32((uint32_t)(0x111ee160), (EAX));
  /* 111e79ff mov dword ptr [0x111ee17c], eax */
  w32((uint32_t)(0x111ee17c), (EAX));
  /* 111e7a04 mov dword ptr [0x111ee384], eax */
  w32((uint32_t)(0x111ee384), (EAX));
  /* 111e7a09 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 111e7a0a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 111e7a0b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 111e7a0c pop edi */
  EDI = (pop32());
  /* 111e7a0d ret  */
  ESPCHK(0x111e79e5u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a0e @ 0x111e7a0e (389 bytes, 124 insns) */
void f_111e7a0e(void) {
  FTRACE(0x111e7a0eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e7a0e push ebp */
  push32((uint32_t)(EBP));
  /* 111e7a0f mov ebp, esp */
  EBP = (ESP);
  /* 111e7a11 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e7a17 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 111e7a1a push esi */
  push32((uint32_t)(ESI));
  /* 111e7a1b push eax */
  push32((uint32_t)(EAX));
  /* 111e7a1c push dword ptr [0x111ee160] */
  push32((uint32_t)(r32((uint32_t)(0x111ee160))));
  /* 111e7a22 call dword ptr [0x111e903c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e903c))), 0x111e7a28u);
  /* 111e7a28 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7a2b jne 0x111e7b47 */
  if (!C.zf) goto L_111e7b47;
  /* 111e7a31 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e7a33 mov esi, 0x100 */
  ESI = (0x100u);
L_111e7a38:;
  /* 111e7a38 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 111e7a3f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111e7a40 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7a42 jb 0x111e7a38 */
  if (C.cf) goto L_111e7a38;
  /* 111e7a44 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 111e7a47 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 111e7a4e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e7a50 je 0x111e7a89 */
  if (C.zf) goto L_111e7a89;
  /* 111e7a52 push ebx */
  push32((uint32_t)(EBX));
  /* 111e7a53 push edi */
  push32((uint32_t)(EDI));
  /* 111e7a54 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_111e7a57:;
  /* 111e7a57 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 111e7a5a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 111e7a5d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7a5f ja 0x111e7a7e */
  if ((!C.cf&&!C.zf)) goto L_111e7a7e;
  /* 111e7a61 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e7a63 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 111e7a6a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 111e7a6b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 111e7a70 mov ebx, ecx */
  EBX = (ECX);
  /* 111e7a72 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111e7a75 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 111e7a77 mov ecx, ebx */
  ECX = (EBX);
  /* 111e7a79 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 111e7a7c rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_111e7a7e:;
  /* 111e7a7e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 111e7a7f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 111e7a80 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 111e7a83 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e7a85 jne 0x111e7a57 */
  if (!C.zf) goto L_111e7a57;
  /* 111e7a87 pop edi */
  EDI = (pop32());
  /* 111e7a88 pop ebx */
  EBX = (pop32());
L_111e7a89:;
  /* 111e7a89 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e7a8b lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 111e7a91 push dword ptr [0x111ee384] */
  push32((uint32_t)(r32((uint32_t)(0x111ee384))));
  /* 111e7a97 push dword ptr [0x111ee160] */
  push32((uint32_t)(r32((uint32_t)(0x111ee160))));
  /* 111e7a9d push eax */
  push32((uint32_t)(EAX));
  /* 111e7a9e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 111e7aa4 push esi */
  push32((uint32_t)(ESI));
  /* 111e7aa5 push eax */
  push32((uint32_t)(EAX));
  /* 111e7aa6 push 1 */
  push32((uint32_t)(0x1u));
  /* 111e7aa8 call 0x111e85dc */
  push32(0x111e7aadu); f_111e85dc();
  /* 111e7aad push 0 */
  push32((uint32_t)(0x0u));
  /* 111e7aaf lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 111e7ab5 push dword ptr [0x111ee160] */
  push32((uint32_t)(r32((uint32_t)(0x111ee160))));
  /* 111e7abb push esi */
  push32((uint32_t)(ESI));
  /* 111e7abc push eax */
  push32((uint32_t)(EAX));
  /* 111e7abd lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 111e7ac3 push esi */
  push32((uint32_t)(ESI));
  /* 111e7ac4 push eax */
  push32((uint32_t)(EAX));
  /* 111e7ac5 push esi */
  push32((uint32_t)(ESI));
  /* 111e7ac6 push dword ptr [0x111ee384] */
  push32((uint32_t)(r32((uint32_t)(0x111ee384))));
  /* 111e7acc call 0x111e838d */
  push32(0x111e7ad1u); f_111e838d();
  /* 111e7ad1 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e7ad3 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 111e7ad9 push dword ptr [0x111ee160] */
  push32((uint32_t)(r32((uint32_t)(0x111ee160))));
  /* 111e7adf push esi */
  push32((uint32_t)(ESI));
  /* 111e7ae0 push eax */
  push32((uint32_t)(EAX));
  /* 111e7ae1 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 111e7ae7 push esi */
  push32((uint32_t)(ESI));
  /* 111e7ae8 push eax */
  push32((uint32_t)(EAX));
  /* 111e7ae9 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 111e7aee push dword ptr [0x111ee384] */
  push32((uint32_t)(r32((uint32_t)(0x111ee384))));
  /* 111e7af4 call 0x111e838d */
  push32(0x111e7af9u); f_111e838d();
  /* 111e7af9 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e7afc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e7afe lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_111e7b04:;
  /* 111e7b04 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 111e7b07 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 111e7b0a je 0x111e7b22 */
  if (C.zf) goto L_111e7b22;
  /* 111e7b0c or byte ptr [eax + 0x111ee281], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x111ee281)))|(0x10u); w8((uint32_t)(EAX + 0x111ee281), (_r)); fl_logic(_r,8); }
  /* 111e7b13 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_111e7b1a:;
  /* 111e7b1a mov byte ptr [eax + 0x111ee180], dl */
  w8((uint32_t)(EAX + 0x111ee180), (DL));
  /* 111e7b20 jmp 0x111e7b3e */
  goto L_111e7b3e;
L_111e7b22:;
  /* 111e7b22 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 111e7b25 je 0x111e7b37 */
  if (C.zf) goto L_111e7b37;
  /* 111e7b27 or byte ptr [eax + 0x111ee281], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x111ee281)))|(0x20u); w8((uint32_t)(EAX + 0x111ee281), (_r)); fl_logic(_r,8); }
  /* 111e7b2e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 111e7b35 jmp 0x111e7b1a */
  goto L_111e7b1a;
L_111e7b37:;
  /* 111e7b37 and byte ptr [eax + 0x111ee180], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x111ee180)))&(0x0u); w8((uint32_t)(EAX + 0x111ee180), (_r)); fl_logic(_r,8); }
L_111e7b3e:;
  /* 111e7b3e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111e7b3f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 111e7b40 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 111e7b41 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7b43 jb 0x111e7b04 */
  if (C.cf) goto L_111e7b04;
  /* 111e7b45 jmp 0x111e7b90 */
  goto L_111e7b90;
L_111e7b47:;
  /* 111e7b47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e7b49 mov esi, 0x100 */
  ESI = (0x100u);
L_111e7b4e:;
  /* 111e7b4e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7b51 jb 0x111e7b6c */
  if (C.cf) goto L_111e7b6c;
  /* 111e7b53 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7b56 ja 0x111e7b6c */
  if ((!C.cf&&!C.zf)) goto L_111e7b6c;
  /* 111e7b58 or byte ptr [eax + 0x111ee281], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x111ee281)))|(0x10u); w8((uint32_t)(EAX + 0x111ee281), (_r)); fl_logic(_r,8); }
  /* 111e7b5f mov cl, al */
  CL = (AL);
  /* 111e7b61 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_111e7b64:;
  /* 111e7b64 mov byte ptr [eax + 0x111ee180], cl */
  w8((uint32_t)(EAX + 0x111ee180), (CL));
  /* 111e7b6a jmp 0x111e7b8b */
  goto L_111e7b8b;
L_111e7b6c:;
  /* 111e7b6c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7b6f jb 0x111e7b84 */
  if (C.cf) goto L_111e7b84;
  /* 111e7b71 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7b74 ja 0x111e7b84 */
  if ((!C.cf&&!C.zf)) goto L_111e7b84;
  /* 111e7b76 or byte ptr [eax + 0x111ee281], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x111ee281)))|(0x20u); w8((uint32_t)(EAX + 0x111ee281), (_r)); fl_logic(_r,8); }
  /* 111e7b7d mov cl, al */
  CL = (AL);
  /* 111e7b7f sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 111e7b82 jmp 0x111e7b64 */
  goto L_111e7b64;
L_111e7b84:;
  /* 111e7b84 and byte ptr [eax + 0x111ee180], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x111ee180)))&(0x0u); w8((uint32_t)(EAX + 0x111ee180), (_r)); fl_logic(_r,8); }
L_111e7b8b:;
  /* 111e7b8b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111e7b8c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7b8e jb 0x111e7b4e */
  if (C.cf) goto L_111e7b4e;
L_111e7b90:;
  /* 111e7b90 pop esi */
  ESI = (pop32());
  /* 111e7b91 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e7b92 ret  */
  ESPCHK(0x111e7a0eu, _esp0);
  ESP += 4; return;
}

/* FUN_10007b93 @ 0x111e7b93 (28 bytes, 7 insns) */
void f_111e7b93(void) {
  FTRACE(0x111e7b93u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e7b93 cmp dword ptr [0x111ee3b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111ee3b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7b9a jne 0x111e7bae */
  if (!C.zf) goto L_111e7bae;
  /* 111e7b9c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 111e7b9e call 0x111e77bb */
  push32(0x111e7ba3u); f_111e77bb();
  /* 111e7ba3 pop ecx */
  ECX = (pop32());
  /* 111e7ba4 mov dword ptr [0x111ee3b0], 1 */
  w32((uint32_t)(0x111ee3b0), (0x1u));
L_111e7bae:;
  /* 111e7bae ret  */
  ESPCHK(0x111e7b93u, _esp0);
  ESP += 4; return;
}

/* FUN_10007baf @ 0x111e7baf (23 bytes, 7 insns) */
void f_111e7baf(void) {
  FTRACE(0x111e7bafu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e7baf push 0 */
  push32((uint32_t)(0x0u));
  /* 111e7bb1 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 111e7bb5 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 111e7bb9 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 111e7bbd call 0x111e7bc6 */
  push32(0x111e7bc2u); f_111e7bc6();
  /* 111e7bc2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e7bc5 ret  */
  ESPCHK(0x111e7bafu, _esp0);
  ESP += 4; return;
}

/* FUN_10007bc6 @ 0x111e7bc6 (517 bytes, 195 insns) */
void f_111e7bc6(void) {
  FTRACE(0x111e7bc6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e7bc6 push ebp */
  push32((uint32_t)(EBP));
  /* 111e7bc7 mov ebp, esp */
  EBP = (ESP);
  /* 111e7bc9 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e7bcc push ebx */
  push32((uint32_t)(EBX));
  /* 111e7bcd and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 111e7bd1 push esi */
  push32((uint32_t)(ESI));
  /* 111e7bd2 push edi */
  push32((uint32_t)(EDI));
  /* 111e7bd3 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 111e7bd6 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 111e7bd8 lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 111e7bdb mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_111e7bde:;
  /* 111e7bde cmp dword ptr [0x111ececc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111ececc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7be5 jle 0x111e7bf6 */
  if ((C.zf||C.sf!=C.of)) goto L_111e7bf6;
  /* 111e7be7 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 111e7bea push 8 */
  push32((uint32_t)(0x8u));
  /* 111e7bec push eax */
  push32((uint32_t)(EAX));
  /* 111e7bed call 0x111e8860 */
  push32(0x111e7bf2u); f_111e8860();
  /* 111e7bf2 pop ecx */
  ECX = (pop32());
  /* 111e7bf3 pop ecx */
  ECX = (pop32());
  /* 111e7bf4 jmp 0x111e7c05 */
  goto L_111e7c05;
L_111e7bf6:;
  /* 111e7bf6 mov ecx, dword ptr [0x111eccc0] */
  ECX = (r32((uint32_t)(0x111eccc0)));
  /* 111e7bfc movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 111e7bff mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 111e7c02 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_111e7c05:;
  /* 111e7c05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e7c07 je 0x111e7c0e */
  if (C.zf) goto L_111e7c0e;
  /* 111e7c09 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 111e7c0b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111e7c0c jmp 0x111e7bde */
  goto L_111e7bde;
L_111e7c0e:;
  /* 111e7c0e cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e7c11 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 111e7c14 jne 0x111e7c1c */
  if (!C.zf) goto L_111e7c1c;
  /* 111e7c16 or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 111e7c1a jmp 0x111e7c21 */
  goto L_111e7c21;
L_111e7c1c:;
  /* 111e7c1c cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e7c1f jne 0x111e7c27 */
  if (!C.zf) goto L_111e7c27;
L_111e7c21:;
  /* 111e7c21 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 111e7c23 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111e7c24 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_111e7c27:;
  /* 111e7c27 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111e7c2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e7c2c jl 0x111e7dbb */
  if ((C.sf!=C.of)) goto L_111e7dbb;
  /* 111e7c32 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7c35 je 0x111e7dbb */
  if (C.zf) goto L_111e7dbb;
  /* 111e7c3b cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7c3e jg 0x111e7dbb */
  if ((!C.zf&&C.sf==C.of)) goto L_111e7dbb;
  /* 111e7c44 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 111e7c46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e7c48 pop ecx */
  ECX = (pop32());
  /* 111e7c49 jne 0x111e7c6f */
  if (!C.zf) goto L_111e7c6f;
  /* 111e7c4b cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e7c4e je 0x111e7c59 */
  if (C.zf) goto L_111e7c59;
  /* 111e7c50 mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 111e7c57 jmp 0x111e7c8b */
  goto L_111e7c8b;
L_111e7c59:;
  /* 111e7c59 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111e7c5b cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e7c5d je 0x111e7c6c */
  if (C.zf) goto L_111e7c6c;
  /* 111e7c5f cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e7c61 je 0x111e7c6c */
  if (C.zf) goto L_111e7c6c;
  /* 111e7c63 mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 111e7c6a jmp 0x111e7c8b */
  goto L_111e7c8b;
L_111e7c6c:;
  /* 111e7c6c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_111e7c6f:;
  /* 111e7c6f cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7c72 jne 0x111e7c8b */
  if (!C.zf) goto L_111e7c8b;
  /* 111e7c74 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e7c77 jne 0x111e7c8b */
  if (!C.zf) goto L_111e7c8b;
  /* 111e7c79 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111e7c7b cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e7c7d je 0x111e7c83 */
  if (C.zf) goto L_111e7c83;
  /* 111e7c7f cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e7c81 jne 0x111e7c8b */
  if (!C.zf) goto L_111e7c8b;
L_111e7c83:;
  /* 111e7c83 mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 111e7c86 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111e7c87 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111e7c88 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_111e7c8b:;
  /* 111e7c8b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111e7c8e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111e7c90 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 111e7c93 mov edi, 0x103 */
  EDI = (0x103u);
  /* 111e7c98 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_111e7c9b:;
  /* 111e7c9b cmp dword ptr [0x111ececc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111ececc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7ca2 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 111e7ca5 jle 0x111e7cb3 */
  if ((C.zf||C.sf!=C.of)) goto L_111e7cb3;
  /* 111e7ca7 push 4 */
  push32((uint32_t)(0x4u));
  /* 111e7ca9 push esi */
  push32((uint32_t)(ESI));
  /* 111e7caa call 0x111e8860 */
  push32(0x111e7cafu); f_111e8860();
  /* 111e7caf pop ecx */
  ECX = (pop32());
  /* 111e7cb0 pop ecx */
  ECX = (pop32());
  /* 111e7cb1 jmp 0x111e7cbe */
  goto L_111e7cbe;
L_111e7cb3:;
  /* 111e7cb3 mov eax, dword ptr [0x111eccc0] */
  EAX = (r32((uint32_t)(0x111eccc0)));
  /* 111e7cb8 mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 111e7cbb and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_111e7cbe:;
  /* 111e7cbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e7cc0 je 0x111e7cca */
  if (C.zf) goto L_111e7cca;
  /* 111e7cc2 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 111e7cc5 sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e7cc8 jmp 0x111e7cfc */
  goto L_111e7cfc;
L_111e7cca:;
  /* 111e7cca cmp dword ptr [0x111ececc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111ececc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7cd1 jle 0x111e7cde */
  if ((C.zf||C.sf!=C.of)) goto L_111e7cde;
  /* 111e7cd3 push edi */
  push32((uint32_t)(EDI));
  /* 111e7cd4 push esi */
  push32((uint32_t)(ESI));
  /* 111e7cd5 call 0x111e8860 */
  push32(0x111e7cdau); f_111e8860();
  /* 111e7cda pop ecx */
  ECX = (pop32());
  /* 111e7cdb pop ecx */
  ECX = (pop32());
  /* 111e7cdc jmp 0x111e7ce9 */
  goto L_111e7ce9;
L_111e7cde:;
  /* 111e7cde mov eax, dword ptr [0x111eccc0] */
  EAX = (r32((uint32_t)(0x111eccc0)));
  /* 111e7ce3 mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 111e7ce7 and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_111e7ce9:;
  /* 111e7ce9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e7ceb je 0x111e7d37 */
  if (C.zf) goto L_111e7d37;
  /* 111e7ced movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 111e7cf0 push eax */
  push32((uint32_t)(EAX));
  /* 111e7cf1 call 0x111e8725 */
  push32(0x111e7cf6u); f_111e8725();
  /* 111e7cf6 pop ecx */
  ECX = (pop32());
  /* 111e7cf7 mov ecx, eax */
  ECX = (EAX);
  /* 111e7cf9 sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_111e7cfc:;
  /* 111e7cfc cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7cff jae 0x111e7d37 */
  if (!C.cf) goto L_111e7d37;
  /* 111e7d01 mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 111e7d04 or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 111e7d08 cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7d0b jb 0x111e7d21 */
  if (C.cf) goto L_111e7d21;
  /* 111e7d0d jne 0x111e7d1b */
  if (!C.zf) goto L_111e7d1b;
  /* 111e7d0f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111e7d12 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111e7d14 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 111e7d17 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7d19 jbe 0x111e7d21 */
  if ((C.cf||C.zf)) goto L_111e7d21;
L_111e7d1b:;
  /* 111e7d1b or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 111e7d1f jmp 0x111e7d2a */
  goto L_111e7d2a;
L_111e7d21:;
  /* 111e7d21 imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111e7d25 add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e7d27 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_111e7d2a:;
  /* 111e7d2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111e7d2d inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 111e7d30 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 111e7d32 jmp 0x111e7c9b */
  goto L_111e7c9b;
L_111e7d37:;
  /* 111e7d37 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111e7d3a dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 111e7d3d mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 111e7d40 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 111e7d42 jne 0x111e7d54 */
  if (!C.zf) goto L_111e7d54;
  /* 111e7d44 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 111e7d46 je 0x111e7d4e */
  if (C.zf) goto L_111e7d4e;
  /* 111e7d48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e7d4b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111e7d4e:;
  /* 111e7d4e and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 111e7d52 jmp 0x111e7d9f */
  goto L_111e7d9f;
L_111e7d54:;
  /* 111e7d54 test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 111e7d56 mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 111e7d5b jne 0x111e7d78 */
  if (!C.zf) goto L_111e7d78;
  /* 111e7d5d test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 111e7d5f jne 0x111e7d9f */
  if (!C.zf) goto L_111e7d9f;
  /* 111e7d61 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 111e7d64 je 0x111e7d6f */
  if (C.zf) goto L_111e7d6f;
  /* 111e7d66 cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7d6d ja 0x111e7d78 */
  if ((!C.cf&&!C.zf)) goto L_111e7d78;
L_111e7d6f:;
  /* 111e7d6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e7d71 jne 0x111e7d9f */
  if (!C.zf) goto L_111e7d9f;
  /* 111e7d73 cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7d76 jbe 0x111e7d9f */
  if ((C.cf||C.zf)) goto L_111e7d9f;
L_111e7d78:;
  /* 111e7d78 call 0x111e4a92 */
  push32(0x111e7d7du); f_111e4a92();
  /* 111e7d7d test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 111e7d81 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 111e7d87 je 0x111e7d8f */
  if (C.zf) goto L_111e7d8f;
  /* 111e7d89 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 111e7d8d jmp 0x111e7d9f */
  goto L_111e7d9f;
L_111e7d8f:;
  /* 111e7d8f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111e7d92 and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 111e7d94 neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 111e7d96 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e7d98 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 111e7d9a add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e7d9c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_111e7d9f:;
  /* 111e7d9f test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 111e7da1 je 0x111e7da8 */
  if (C.zf) goto L_111e7da8;
  /* 111e7da3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111e7da6 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_111e7da8:;
  /* 111e7da8 test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 111e7dac je 0x111e7db6 */
  if (C.zf) goto L_111e7db6;
  /* 111e7dae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111e7db1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 111e7db3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_111e7db6:;
  /* 111e7db6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111e7db9 jmp 0x111e7dc6 */
  goto L_111e7dc6;
L_111e7dbb:;
  /* 111e7dbb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111e7dbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e7dc0 je 0x111e7dc4 */
  if (C.zf) goto L_111e7dc4;
  /* 111e7dc2 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_111e7dc4:;
  /* 111e7dc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111e7dc6:;
  /* 111e7dc6 pop edi */
  EDI = (pop32());
  /* 111e7dc7 pop esi */
  ESI = (pop32());
  /* 111e7dc8 pop ebx */
  EBX = (pop32());
  /* 111e7dc9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e7dca ret  */
  ESPCHK(0x111e7bc6u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x111e7dd0 (56 bytes, 31 insns) */
void f_111e7dd0(void) {
  FTRACE(0x111e7dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e7dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 111e7dd1 mov ebp, esp */
  EBP = (ESP);
  /* 111e7dd3 push edi */
  push32((uint32_t)(EDI));
  /* 111e7dd4 push esi */
  push32((uint32_t)(ESI));
  /* 111e7dd5 push ebx */
  push32((uint32_t)(EBX));
  /* 111e7dd6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111e7dd9 jecxz 0x111e7e01 */
  x86_unimpl("jecxz @ 0x111e7dd9");
  /* 111e7ddb mov ebx, ecx */
  EBX = (ECX);
  /* 111e7ddd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 111e7de0 mov esi, edi */
  ESI = (EDI);
  /* 111e7de2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e7de4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 111e7de6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 111e7de8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e7dea mov edi, esi */
  EDI = (ESI);
  /* 111e7dec mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 111e7def repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 111e7df1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 111e7df4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111e7df6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e7df9 ja 0x111e7dff */
  if ((!C.cf&&!C.zf)) goto L_111e7dff;
  /* 111e7dfb je 0x111e7e01 */
  if (C.zf) goto L_111e7e01;
  /* 111e7dfd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 111e7dfe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_111e7dff:;
  /* 111e7dff not ecx */
  ECX = (~(ECX));
L_111e7e01:;
  /* 111e7e01 mov eax, ecx */
  EAX = (ECX);
  /* 111e7e03 pop ebx */
  EBX = (pop32());
  /* 111e7e04 pop esi */
  ESI = (pop32());
  /* 111e7e05 pop edi */
  EDI = (pop32());
  /* 111e7e06 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e7e07 ret  */
  ESPCHK(0x111e7dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e10 @ 0x111e7e10 (47 bytes, 17 insns) */
void f_111e7e10(void) {
  FTRACE(0x111e7e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e7e10 push ecx */
  push32((uint32_t)(ECX));
  /* 111e7e11 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7e16 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 111e7e1a jb 0x111e7e30 */
  if (C.cf) goto L_111e7e30;
L_111e7e1c:;
  /* 111e7e1c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e7e22 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e7e27 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 111e7e29 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7e2e jae 0x111e7e1c */
  if (!C.cf) goto L_111e7e1c;
L_111e7e30:;
  /* 111e7e30 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e7e32 mov eax, esp */
  EAX = (ESP);
  /* 111e7e34 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 111e7e36 mov esp, ecx */
  ESP = (ECX);
  /* 111e7e38 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111e7e3a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 111e7e3d push eax */
  push32((uint32_t)(EAX));
  /* 111e7e3e ret  */
  ESPCHK(0x111e7e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e3f @ 0x111e7e3f (137 bytes, 50 insns) */
void f_111e7e3f(void) {
  FTRACE(0x111e7e3fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e7e3f push ebx */
  push32((uint32_t)(EBX));
  /* 111e7e40 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 111e7e42 cmp dword ptr [0x111edfd8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x111edfd8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7e48 push esi */
  push32((uint32_t)(ESI));
  /* 111e7e49 push edi */
  push32((uint32_t)(EDI));
  /* 111e7e4a jne 0x111e7e8e */
  if (!C.zf) goto L_111e7e8e;
  /* 111e7e4c push 0x111e9528 */
  push32((uint32_t)(0x111e9528u));
  /* 111e7e51 call dword ptr [0x111e9024] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9024))), 0x111e7e57u);
  /* 111e7e57 mov edi, eax */
  EDI = (EAX);
  /* 111e7e59 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7e5b je 0x111e7ec4 */
  if (C.zf) goto L_111e7ec4;
  /* 111e7e5d mov esi, dword ptr [0x111e9034] */
  ESI = (r32((uint32_t)(0x111e9034)));
  /* 111e7e63 push 0x111e951c */
  push32((uint32_t)(0x111e951cu));
  /* 111e7e68 push edi */
  push32((uint32_t)(EDI));
  /* 111e7e69 call esi */
  call_ind((uint32_t)(ESI), 0x111e7e6bu);
  /* 111e7e6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e7e6d mov dword ptr [0x111edfd8], eax */
  w32((uint32_t)(0x111edfd8), (EAX));
  /* 111e7e72 je 0x111e7ec4 */
  if (C.zf) goto L_111e7ec4;
  /* 111e7e74 push 0x111e950c */
  push32((uint32_t)(0x111e950cu));
  /* 111e7e79 push edi */
  push32((uint32_t)(EDI));
  /* 111e7e7a call esi */
  call_ind((uint32_t)(ESI), 0x111e7e7cu);
  /* 111e7e7c push 0x111e94f8 */
  push32((uint32_t)(0x111e94f8u));
  /* 111e7e81 push edi */
  push32((uint32_t)(EDI));
  /* 111e7e82 mov dword ptr [0x111edfdc], eax */
  w32((uint32_t)(0x111edfdc), (EAX));
  /* 111e7e87 call esi */
  call_ind((uint32_t)(ESI), 0x111e7e89u);
  /* 111e7e89 mov dword ptr [0x111edfe0], eax */
  w32((uint32_t)(0x111edfe0), (EAX));
L_111e7e8e:;
  /* 111e7e8e mov eax, dword ptr [0x111edfdc] */
  EAX = (r32((uint32_t)(0x111edfdc)));
  /* 111e7e93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e7e95 je 0x111e7ead */
  if (C.zf) goto L_111e7ead;
  /* 111e7e97 call eax */
  call_ind((uint32_t)(EAX), 0x111e7e99u);
  /* 111e7e99 mov ebx, eax */
  EBX = (EAX);
  /* 111e7e9b test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 111e7e9d je 0x111e7ead */
  if (C.zf) goto L_111e7ead;
  /* 111e7e9f mov eax, dword ptr [0x111edfe0] */
  EAX = (r32((uint32_t)(0x111edfe0)));
  /* 111e7ea4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e7ea6 je 0x111e7ead */
  if (C.zf) goto L_111e7ead;
  /* 111e7ea8 push ebx */
  push32((uint32_t)(EBX));
  /* 111e7ea9 call eax */
  call_ind((uint32_t)(EAX), 0x111e7eabu);
  /* 111e7eab mov ebx, eax */
  EBX = (EAX);
L_111e7ead:;
  /* 111e7ead push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 111e7eb1 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 111e7eb5 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 111e7eb9 push ebx */
  push32((uint32_t)(EBX));
  /* 111e7eba call dword ptr [0x111edfd8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111edfd8))), 0x111e7ec0u);
L_111e7ec0:;
  /* 111e7ec0 pop edi */
  EDI = (pop32());
  /* 111e7ec1 pop esi */
  ESI = (pop32());
  /* 111e7ec2 pop ebx */
  EBX = (pop32());
  /* 111e7ec3 ret  */
  ESPCHK(0x111e7e3fu, _esp0);
  ESP += 4; return;
L_111e7ec4:;
  /* 111e7ec4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e7ec6 jmp 0x111e7ec0 */
  goto L_111e7ec0;
}

/* FUN_10007ed0 @ 0x111e7ed0 (664 bytes, 258 insns) [15 switch table(s)] */
void f_111e7ed0(void) {
  FTRACE(0x111e7ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e7ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 111e7ed1 mov ebp, esp */
  EBP = (ESP);
  /* 111e7ed3 push edi */
  push32((uint32_t)(EDI));
  /* 111e7ed4 push esi */
  push32((uint32_t)(ESI));
  /* 111e7ed5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 111e7ed8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111e7edb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 111e7ede mov eax, ecx */
  EAX = (ECX);
  /* 111e7ee0 mov edx, ecx */
  EDX = (ECX);
  /* 111e7ee2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e7ee4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7ee6 jbe 0x111e7ef0 */
  if ((C.cf||C.zf)) goto L_111e7ef0;
  /* 111e7ee8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7eea jb 0x111e8068 */
  if (C.cf) goto L_111e8068;
L_111e7ef0:;
  /* 111e7ef0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 111e7ef6 jne 0x111e7f0c */
  if (!C.zf) goto L_111e7f0c;
  /* 111e7ef8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111e7efb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 111e7efe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7f01 jb 0x111e7f2c */
  if (C.cf) goto L_111e7f2c;
  /* 111e7f03 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111e7f05 jmp dword ptr [edx*4 + 0x111e8018] */
  switch (EDX) {
    case 0: goto L_111e8028;
    case 1: goto L_111e8030;
    case 2: goto L_111e803c;
    case 3: goto L_111e8050;
    default: x86_unimpl("switch@0x111e7f05 out of table"); return;
  }
L_111e7f0c:;
  /* 111e7f0c mov eax, edi */
  EAX = (EDI);
  /* 111e7f0e mov edx, 3 */
  EDX = (0x3u);
  /* 111e7f13 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e7f16 jb 0x111e7f24 */
  if (C.cf) goto L_111e7f24;
  /* 111e7f18 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 111e7f1b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e7f1d jmp dword ptr [eax*4 + 0x111e7f30] */
  switch (EAX) {
    case 1: goto L_111e7f40;
    case 2: goto L_111e7f6c;
    case 3: goto L_111e7f90;
    default: x86_unimpl("switch@0x111e7f1d out of table"); return;
  }
L_111e7f24:;
  /* 111e7f24 jmp dword ptr [ecx*4 + 0x111e8028] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x111e8028)))); return;
  /* 111e7f2b nop  */
  /* nop */
L_111e7f2c:;
  /* 111e7f2c jmp dword ptr [ecx*4 + 0x111e7fac] */
  switch (ECX) {
    case 0: goto L_111e800f;
    case 1: goto L_111e7ffc;
    case 2: goto L_111e7ff4;
    case 3: goto L_111e7fec;
    case 4: goto L_111e7fe4;
    case 5: goto L_111e7fdc;
    case 6: goto L_111e7fd4;
    case 7: goto L_111e7fcc;
    default: x86_unimpl("switch@0x111e7f2c out of table"); return;
  }
  /* 111e7f33 nop  */
  /* nop */
L_111e7f40:;
  /* 111e7f40 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 111e7f42 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111e7f44 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111e7f46 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 111e7f49 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 111e7f4c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 111e7f4f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111e7f52 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 111e7f55 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e7f58 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e7f5b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7f5e jb 0x111e7f2c */
  if (C.cf) goto L_111e7f2c;
  /* 111e7f60 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111e7f62 jmp dword ptr [edx*4 + 0x111e8018] */
  switch (EDX) {
    case 0: goto L_111e8028;
    case 1: goto L_111e8030;
    case 2: goto L_111e803c;
    case 3: goto L_111e8050;
    default: x86_unimpl("switch@0x111e7f62 out of table"); return;
  }
  /* 111e7f69 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111e7f6c:;
  /* 111e7f6c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 111e7f6e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111e7f70 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111e7f72 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 111e7f75 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111e7f78 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 111e7f7b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e7f7e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e7f81 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7f84 jb 0x111e7f2c */
  if (C.cf) goto L_111e7f2c;
  /* 111e7f86 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111e7f88 jmp dword ptr [edx*4 + 0x111e8018] */
  switch (EDX) {
    case 0: goto L_111e8028;
    case 1: goto L_111e8030;
    case 2: goto L_111e803c;
    case 3: goto L_111e8050;
    default: x86_unimpl("switch@0x111e7f88 out of table"); return;
  }
  /* 111e7f8f nop  */
  /* nop */
L_111e7f90:;
  /* 111e7f90 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 111e7f92 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111e7f94 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111e7f96 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111e7f97 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111e7f9a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 111e7f9b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e7f9e jb 0x111e7f2c */
  if (C.cf) goto L_111e7f2c;
  /* 111e7fa0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111e7fa2 jmp dword ptr [edx*4 + 0x111e8018] */
  switch (EDX) {
    case 0: goto L_111e8028;
    case 1: goto L_111e8030;
    case 2: goto L_111e803c;
    case 3: goto L_111e8050;
    default: x86_unimpl("switch@0x111e7fa2 out of table"); return;
  }
  /* 111e7fa9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111e7fcc:;
  /* 111e7fcc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 111e7fd0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_111e7fd4:;
  /* 111e7fd4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 111e7fd8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_111e7fdc:;
  /* 111e7fdc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 111e7fe0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_111e7fe4:;
  /* 111e7fe4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 111e7fe8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_111e7fec:;
  /* 111e7fec mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 111e7ff0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_111e7ff4:;
  /* 111e7ff4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 111e7ff8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_111e7ffc:;
  /* 111e7ffc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 111e8000 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 111e8004 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 111e800b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e800d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_111e800f:;
  /* 111e800f jmp dword ptr [edx*4 + 0x111e8018] */
  switch (EDX) {
    case 0: goto L_111e8028;
    case 1: goto L_111e8030;
    case 2: goto L_111e803c;
    case 3: goto L_111e8050;
    default: x86_unimpl("switch@0x111e800f out of table"); return;
  }
  /* 111e8016 mov edi, edi */
  EDI = (EDI);
L_111e8028:;
  /* 111e8028 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e802b pop esi */
  ESI = (pop32());
  /* 111e802c pop edi */
  EDI = (pop32());
  /* 111e802d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e802e ret  */
  ESPCHK(0x111e7ed0u, _esp0);
  ESP += 4; return;
  /* 111e802f nop  */
  /* nop */
L_111e8030:;
  /* 111e8030 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111e8032 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111e8034 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e8037 pop esi */
  ESI = (pop32());
  /* 111e8038 pop edi */
  EDI = (pop32());
  /* 111e8039 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e803a ret  */
  ESPCHK(0x111e7ed0u, _esp0);
  ESP += 4; return;
  /* 111e803b nop  */
  /* nop */
L_111e803c:;
  /* 111e803c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111e803e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111e8040 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 111e8043 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 111e8046 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e8049 pop esi */
  ESI = (pop32());
  /* 111e804a pop edi */
  EDI = (pop32());
  /* 111e804b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e804c ret  */
  ESPCHK(0x111e7ed0u, _esp0);
  ESP += 4; return;
  /* 111e804d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111e8050:;
  /* 111e8050 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111e8052 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111e8054 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 111e8057 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 111e805a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 111e805d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 111e8060 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e8063 pop esi */
  ESI = (pop32());
  /* 111e8064 pop edi */
  EDI = (pop32());
  /* 111e8065 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e8066 ret  */
  ESPCHK(0x111e7ed0u, _esp0);
  ESP += 4; return;
  /* 111e8067 nop  */
  /* nop */
L_111e8068:;
  /* 111e8068 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 111e806c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 111e8070 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 111e8076 jne 0x111e809c */
  if (!C.zf) goto L_111e809c;
  /* 111e8078 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111e807b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 111e807e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e8081 jb 0x111e8090 */
  if (C.cf) goto L_111e8090;
  /* 111e8083 std  */
  C.df=1;
  /* 111e8084 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111e8086 cld  */
  C.df=0;
  /* 111e8087 jmp dword ptr [edx*4 + 0x111e81b0] */
  switch (EDX) {
    case 0: goto L_111e81c0;
    case 1: goto L_111e81c8;
    case 2: goto L_111e81d8;
    case 3: goto L_111e81ec;
    default: x86_unimpl("switch@0x111e8087 out of table"); return;
  }
  /* 111e808e mov edi, edi */
  EDI = (EDI);
L_111e8090:;
  /* 111e8090 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 111e8092 jmp dword ptr [ecx*4 + 0x111e8160] */
  switch (ECX) {
    case 0: goto L_111e81a7;
    default: x86_unimpl("switch@0x111e8092 out of table"); return;
  }
  /* 111e8099 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111e809c:;
  /* 111e809c mov eax, edi */
  EAX = (EDI);
  /* 111e809e mov edx, 3 */
  EDX = (0x3u);
  /* 111e80a3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e80a6 jb 0x111e80b4 */
  if (C.cf) goto L_111e80b4;
  /* 111e80a8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 111e80ab sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e80ad jmp dword ptr [eax*4 + 0x111e80b8] */
  switch (EAX) {
    case 1: goto L_111e80c8;
    case 2: goto L_111e80e8;
    case 3: goto L_111e8110;
    default: x86_unimpl("switch@0x111e80ad out of table"); return;
  }
L_111e80b4:;
  /* 111e80b4 jmp dword ptr [ecx*4 + 0x111e81b0] */
  switch (ECX) {
    case 0: goto L_111e81c0;
    case 1: goto L_111e81c8;
    case 2: goto L_111e81d8;
    case 3: goto L_111e81ec;
    default: x86_unimpl("switch@0x111e80b4 out of table"); return;
  }
  /* 111e80bb nop  */
  /* nop */
L_111e80c8:;
  /* 111e80c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 111e80cb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 111e80cd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 111e80d0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 111e80d1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111e80d4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 111e80d5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e80d8 jb 0x111e8090 */
  if (C.cf) goto L_111e8090;
  /* 111e80da std  */
  C.df=1;
  /* 111e80db rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111e80dd cld  */
  C.df=0;
  /* 111e80de jmp dword ptr [edx*4 + 0x111e81b0] */
  switch (EDX) {
    case 0: goto L_111e81c0;
    case 1: goto L_111e81c8;
    case 2: goto L_111e81d8;
    case 3: goto L_111e81ec;
    default: x86_unimpl("switch@0x111e80de out of table"); return;
  }
  /* 111e80e5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111e80e8:;
  /* 111e80e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 111e80eb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 111e80ed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 111e80f0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 111e80f3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111e80f6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 111e80f9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e80fc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e80ff cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e8102 jb 0x111e8090 */
  if (C.cf) goto L_111e8090;
  /* 111e8104 std  */
  C.df=1;
  /* 111e8105 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111e8107 cld  */
  C.df=0;
  /* 111e8108 jmp dword ptr [edx*4 + 0x111e81b0] */
  switch (EDX) {
    case 0: goto L_111e81c0;
    case 1: goto L_111e81c8;
    case 2: goto L_111e81d8;
    case 3: goto L_111e81ec;
    default: x86_unimpl("switch@0x111e8108 out of table"); return;
  }
  /* 111e810f nop  */
  /* nop */
L_111e8110:;
  /* 111e8110 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 111e8113 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 111e8115 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 111e8118 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 111e811b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 111e811e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 111e8121 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111e8124 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 111e8127 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e812a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e812d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e8130 jb 0x111e8090 */
  if (C.cf) goto L_111e8090;
  /* 111e8136 std  */
  C.df=1;
  /* 111e8137 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111e8139 cld  */
  C.df=0;
  /* 111e813a jmp dword ptr [edx*4 + 0x111e81b0] */
  switch (EDX) {
    case 0: goto L_111e81c0;
    case 1: goto L_111e81c8;
    case 2: goto L_111e81d8;
    case 3: goto L_111e81ec;
    default: x86_unimpl("switch@0x111e813a out of table"); return;
  }
  /* 111e8141 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 111e8144 sbb dword ptr fs:[esi], 0x1e816c11 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x1e816c11u),_r=_a-_b-C.cf; w32((uint32_t)(ESI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 111e814b adc dword ptr [ecx + eax*4 + 0x1e], esi */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4 + 0x1e))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EAX*4 + 0x1e), (_r)); fl_add(_a,_b,_r,32); }
  /* 111e814f adc dword ptr [ecx + eax*4 + 0x1e], edi */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4 + 0x1e))),_b=(EDI),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EAX*4 + 0x1e), (_r)); fl_add(_a,_b,_r,32); }
  /* 111e8153 adc dword ptr [ecx + eax*4 - 0x7e73eee2], eax */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4 + -0x7e73eee2))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EAX*4 + -0x7e73eee2), (_r)); fl_add(_a,_b,_r,32); }
  /* 111e815a push ds */
  push32((uint32_t)(C.seg_ds));
  /* 111e815c xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 111e815e push ds */
  push32((uint32_t)(C.seg_ds));
  /* 111e8164 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 111e8168 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 111e816c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 111e8170 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 111e8174 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 111e8178 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 111e817c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 111e8180 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 111e8184 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 111e8188 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 111e818c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 111e8190 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 111e8194 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 111e8198 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 111e819c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 111e81a3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e81a5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_111e81a7:;
  /* 111e81a7 jmp dword ptr [edx*4 + 0x111e81b0] */
  switch (EDX) {
    case 0: goto L_111e81c0;
    case 1: goto L_111e81c8;
    case 2: goto L_111e81d8;
    case 3: goto L_111e81ec;
    default: x86_unimpl("switch@0x111e81a7 out of table"); return;
  }
  /* 111e81ae mov edi, edi */
  EDI = (EDI);
L_111e81c0:;
  /* 111e81c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e81c3 pop esi */
  ESI = (pop32());
  /* 111e81c4 pop edi */
  EDI = (pop32());
  /* 111e81c5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e81c6 ret  */
  ESPCHK(0x111e7ed0u, _esp0);
  ESP += 4; return;
  /* 111e81c7 nop  */
  /* nop */
L_111e81c8:;
  /* 111e81c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 111e81cb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 111e81ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e81d1 pop esi */
  ESI = (pop32());
  /* 111e81d2 pop edi */
  EDI = (pop32());
  /* 111e81d3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e81d4 ret  */
  ESPCHK(0x111e7ed0u, _esp0);
  ESP += 4; return;
  /* 111e81d5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111e81d8:;
  /* 111e81d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 111e81db mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 111e81de mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 111e81e1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 111e81e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e81e7 pop esi */
  ESI = (pop32());
  /* 111e81e8 pop edi */
  EDI = (pop32());
  /* 111e81e9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e81ea ret  */
  ESPCHK(0x111e7ed0u, _esp0);
  ESP += 4; return;
  /* 111e81eb nop  */
  /* nop */
L_111e81ec:;
  /* 111e81ec mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 111e81ef mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 111e81f2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 111e81f5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 111e81f8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 111e81fb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 111e81fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e8201 pop esi */
  ESI = (pop32());
  /* 111e8202 pop edi */
  EDI = (pop32());
  /* 111e8203 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e8204 ret  */
  ESPCHK(0x111e7ed0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x111e8210 (88 bytes, 40 insns) */
void f_111e8210(void) {
  FTRACE(0x111e8210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e8210 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 111e8214 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 111e8218 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111e821a je 0x111e8263 */
  if (C.zf) goto L_111e8263;
  /* 111e821c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e821e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 111e8222 push edi */
  push32((uint32_t)(EDI));
  /* 111e8223 mov edi, ecx */
  EDI = (ECX);
  /* 111e8225 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e8228 jb 0x111e8257 */
  if (C.cf) goto L_111e8257;
  /* 111e822a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 111e822c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 111e822f je 0x111e8239 */
  if (C.zf) goto L_111e8239;
  /* 111e8231 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_111e8233:;
  /* 111e8233 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111e8235 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 111e8236 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 111e8237 jne 0x111e8233 */
  if (!C.zf) goto L_111e8233;
L_111e8239:;
  /* 111e8239 mov ecx, eax */
  ECX = (EAX);
  /* 111e823b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 111e823e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e8240 mov ecx, eax */
  ECX = (EAX);
  /* 111e8242 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 111e8245 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e8247 mov ecx, edx */
  ECX = (EDX);
  /* 111e8249 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 111e824c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111e824f je 0x111e8257 */
  if (C.zf) goto L_111e8257;
  /* 111e8251 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 111e8253 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111e8255 je 0x111e825d */
  if (C.zf) goto L_111e825d;
L_111e8257:;
  /* 111e8257 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111e8259 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 111e825a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 111e825b jne 0x111e8257 */
  if (!C.zf) goto L_111e8257;
L_111e825d:;
  /* 111e825d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 111e8261 pop edi */
  EDI = (pop32());
  /* 111e8262 ret  */
  ESPCHK(0x111e8210u, _esp0);
  ESP += 4; return;
L_111e8263:;
  /* 111e8263 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 111e8267 ret  */
  ESPCHK(0x111e8210u, _esp0);
  ESP += 4; return;
}

/* FUN_10008268 @ 0x111e8268 (293 bytes, 103 insns) */
void f_111e8268(void) {
  FTRACE(0x111e8268u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e8268 push ebp */
  push32((uint32_t)(EBP));
  /* 111e8269 mov ebp, esp */
  EBP = (ESP);
  /* 111e826b mov eax, 0x1004 */
  EAX = (0x1004u);
  /* 111e8270 call 0x111e7e10 */
  push32(0x111e8275u); f_111e7e10();
  /* 111e8275 push ebx */
  push32((uint32_t)(EBX));
  /* 111e8276 push esi */
  push32((uint32_t)(ESI));
  /* 111e8277 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 111e8279 push 1 */
  push32((uint32_t)(0x1u));
  /* 111e827b push esi */
  push32((uint32_t)(ESI));
  /* 111e827c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 111e827f call 0x111e4d19 */
  push32(0x111e8284u); f_111e4d19();
  /* 111e8284 or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
  /* 111e8287 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e828a cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e828c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111e828f je 0x111e8387 */
  if (C.zf) goto L_111e8387;
  /* 111e8295 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e8297 push esi */
  push32((uint32_t)(ESI));
  /* 111e8298 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 111e829b call 0x111e4d19 */
  push32(0x111e82a0u); f_111e4d19();
  /* 111e82a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e82a3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e82a5 je 0x111e8387 */
  if (C.zf) goto L_111e8387;
  /* 111e82ab push edi */
  push32((uint32_t)(EDI));
  /* 111e82ac mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 111e82af sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e82b1 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 111e82b3 jle 0x111e832a */
  if ((C.zf||C.sf!=C.of)) goto L_111e832a;
  /* 111e82b5 mov ebx, 0x1000 */
  EBX = (0x1000u);
  /* 111e82ba lea eax, [ebp - 0x1004] */
  EAX = ((uint32_t)(EBP + -0x1004));
  /* 111e82c0 push ebx */
  push32((uint32_t)(EBX));
  /* 111e82c1 push esi */
  push32((uint32_t)(ESI));
  /* 111e82c2 push eax */
  push32((uint32_t)(EAX));
  /* 111e82c3 call 0x111e8210 */
  push32(0x111e82c8u); f_111e8210();
  /* 111e82c8 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 111e82cd push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 111e82d0 call 0x111e88d5 */
  push32(0x111e82d5u); f_111e88d5();
  /* 111e82d5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e82d8 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_111e82db:;
  /* 111e82db cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e82dd mov eax, ebx */
  EAX = (EBX);
  /* 111e82df jge 0x111e82e3 */
  if ((C.sf==C.of)) goto L_111e82e3;
  /* 111e82e1 mov eax, edi */
  EAX = (EDI);
L_111e82e3:;
  /* 111e82e3 push eax */
  push32((uint32_t)(EAX));
  /* 111e82e4 lea eax, [ebp - 0x1004] */
  EAX = ((uint32_t)(EBP + -0x1004));
  /* 111e82ea push eax */
  push32((uint32_t)(EAX));
  /* 111e82eb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 111e82ee call 0x111e7193 */
  push32(0x111e82f3u); f_111e7193();
  /* 111e82f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e82f6 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e82f9 je 0x111e8303 */
  if (C.zf) goto L_111e8303;
  /* 111e82fb sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e82fd test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 111e82ff jle 0x111e831b */
  if ((C.zf||C.sf!=C.of)) goto L_111e831b;
  /* 111e8301 jmp 0x111e82db */
  goto L_111e82db;
L_111e8303:;
  /* 111e8303 call 0x111e4a9b */
  push32(0x111e8308u); f_111e4a9b();
  /* 111e8308 cmp dword ptr [eax], 5 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e830b jne 0x111e8318 */
  if (!C.zf) goto L_111e8318;
  /* 111e830d call 0x111e4a92 */
  push32(0x111e8312u); f_111e4a92();
  /* 111e8312 mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
L_111e8318:;
  /* 111e8318 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_111e831b:;
  /* 111e831b push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 111e831e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 111e8321 call 0x111e88d5 */
  push32(0x111e8326u); f_111e88d5();
  /* 111e8326 pop ecx */
  ECX = (pop32());
  /* 111e8327 pop ecx */
  ECX = (pop32());
  /* 111e8328 jmp 0x111e8372 */
  goto L_111e8372;
L_111e832a:;
  /* 111e832a jge 0x111e8372 */
  if ((C.sf==C.of)) goto L_111e8372;
  /* 111e832c push 0 */
  push32((uint32_t)(0x0u));
  /* 111e832e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 111e8331 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 111e8334 call 0x111e4d19 */
  push32(0x111e8339u); f_111e4d19();
  /* 111e8339 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 111e833c call 0x111e6fd8 */
  push32(0x111e8341u); f_111e6fd8();
  /* 111e8341 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e8344 push eax */
  push32((uint32_t)(EAX));
  /* 111e8345 call dword ptr [0x111e9020] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9020))), 0x111e834bu);
  /* 111e834b mov esi, eax */
  ESI = (EAX);
  /* 111e834d neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 111e834f sbb esi, esi */
  { uint32_t _a=(ESI),_b=(ESI),_r=_a-_b-C.cf; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e8351 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 111e8353 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 111e8354 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e8356 jne 0x111e8372 */
  if (!C.zf) goto L_111e8372;
  /* 111e8358 call 0x111e4a92 */
  push32(0x111e835du); f_111e4a92();
  /* 111e835d mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 111e8363 call dword ptr [0x111e9080] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9080))), 0x111e8369u);
  /* 111e8369 mov edi, eax */
  EDI = (EAX);
  /* 111e836b call 0x111e4a9b */
  push32(0x111e8370u); f_111e4a9b();
  /* 111e8370 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_111e8372:;
  /* 111e8372 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e8374 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 111e8377 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 111e837a call 0x111e4d19 */
  push32(0x111e837fu); f_111e4d19();
  /* 111e837f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e8382 mov eax, esi */
  EAX = (ESI);
  /* 111e8384 pop edi */
  EDI = (pop32());
  /* 111e8385 jmp 0x111e8389 */
  goto L_111e8389;
L_111e8387:;
  /* 111e8387 mov eax, ebx */
  EAX = (EBX);
L_111e8389:;
  /* 111e8389 pop esi */
  ESI = (pop32());
  /* 111e838a pop ebx */
  EBX = (pop32());
  /* 111e838b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e838c ret  */
  ESPCHK(0x111e8268u, _esp0);
  ESP += 4; return;
}

/* FUN_1000838d @ 0x111e838d (511 bytes, 193 insns) */
void f_111e838d(void) {
  FTRACE(0x111e838du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e838d push ebp */
  push32((uint32_t)(EBP));
  /* 111e838e mov ebp, esp */
  EBP = (ESP);
  /* 111e8390 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 111e8392 push 0x111e9540 */
  push32((uint32_t)(0x111e9540u));
  /* 111e8397 push 0x111e6b24 */
  push32((uint32_t)(0x111e6b24u));
  /* 111e839c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 111e83a2 push eax */
  push32((uint32_t)(EAX));
  /* 111e83a3 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 111e83aa sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e83ad push ebx */
  push32((uint32_t)(EBX));
  /* 111e83ae push esi */
  push32((uint32_t)(ESI));
  /* 111e83af push edi */
  push32((uint32_t)(EDI));
  /* 111e83b0 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 111e83b3 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 111e83b5 cmp dword ptr [0x111ee008], edi */
  { uint32_t _a=(r32((uint32_t)(0x111ee008))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e83bb jne 0x111e8403 */
  if (!C.zf) goto L_111e8403;
  /* 111e83bd push edi */
  push32((uint32_t)(EDI));
  /* 111e83be push edi */
  push32((uint32_t)(EDI));
  /* 111e83bf push 1 */
  push32((uint32_t)(0x1u));
  /* 111e83c1 pop ebx */
  EBX = (pop32());
  /* 111e83c2 push ebx */
  push32((uint32_t)(EBX));
  /* 111e83c3 push 0x111e9538 */
  push32((uint32_t)(0x111e9538u));
  /* 111e83c8 mov esi, 0x100 */
  ESI = (0x100u);
  /* 111e83cd push esi */
  push32((uint32_t)(ESI));
  /* 111e83ce push edi */
  push32((uint32_t)(EDI));
  /* 111e83cf call dword ptr [0x111e9014] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9014))), 0x111e83d5u);
  /* 111e83d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e83d7 je 0x111e83e1 */
  if (C.zf) goto L_111e83e1;
  /* 111e83d9 mov dword ptr [0x111ee008], ebx */
  w32((uint32_t)(0x111ee008), (EBX));
  /* 111e83df jmp 0x111e8403 */
  goto L_111e8403;
L_111e83e1:;
  /* 111e83e1 push edi */
  push32((uint32_t)(EDI));
  /* 111e83e2 push edi */
  push32((uint32_t)(EDI));
  /* 111e83e3 push ebx */
  push32((uint32_t)(EBX));
  /* 111e83e4 push 0x111e9534 */
  push32((uint32_t)(0x111e9534u));
  /* 111e83e9 push esi */
  push32((uint32_t)(ESI));
  /* 111e83ea push edi */
  push32((uint32_t)(EDI));
  /* 111e83eb call dword ptr [0x111e9018] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9018))), 0x111e83f1u);
  /* 111e83f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e83f3 je 0x111e851b */
  if (C.zf) goto L_111e851b;
  /* 111e83f9 mov dword ptr [0x111ee008], 2 */
  w32((uint32_t)(0x111ee008), (0x2u));
L_111e8403:;
  /* 111e8403 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e8406 jle 0x111e8418 */
  if ((C.zf||C.sf!=C.of)) goto L_111e8418;
  /* 111e8408 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 111e840b push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 111e840e call 0x111e85b1 */
  push32(0x111e8413u); f_111e85b1();
  /* 111e8413 pop ecx */
  ECX = (pop32());
  /* 111e8414 pop ecx */
  ECX = (pop32());
  /* 111e8415 mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_111e8418:;
  /* 111e8418 mov eax, dword ptr [0x111ee008] */
  EAX = (r32((uint32_t)(0x111ee008)));
  /* 111e841d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e8420 jne 0x111e843f */
  if (!C.zf) goto L_111e843f;
  /* 111e8422 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 111e8425 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 111e8428 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 111e842b push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 111e842e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 111e8431 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 111e8434 call dword ptr [0x111e9018] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9018))), 0x111e843au);
  /* 111e843a jmp 0x111e851d */
  goto L_111e851d;
L_111e843f:;
  /* 111e843f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e8442 jne 0x111e851b */
  if (!C.zf) goto L_111e851b;
  /* 111e8448 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e844b jne 0x111e8455 */
  if (!C.zf) goto L_111e8455;
  /* 111e844d mov eax, dword ptr [0x111ee000] */
  EAX = (r32((uint32_t)(0x111ee000)));
  /* 111e8452 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_111e8455:;
  /* 111e8455 push edi */
  push32((uint32_t)(EDI));
  /* 111e8456 push edi */
  push32((uint32_t)(EDI));
  /* 111e8457 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 111e845a push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 111e845d mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 111e8460 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 111e8462 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e8464 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 111e8467 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111e8468 push eax */
  push32((uint32_t)(EAX));
  /* 111e8469 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 111e846c call dword ptr [0x111e9028] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9028))), 0x111e8472u);
  /* 111e8472 mov ebx, eax */
  EBX = (EAX);
  /* 111e8474 mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 111e8477 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e8479 je 0x111e851b */
  if (C.zf) goto L_111e851b;
  /* 111e847f mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 111e8482 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 111e8485 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e8488 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 111e848a call 0x111e7e10 */
  push32(0x111e848fu); f_111e7e10();
  /* 111e848f mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 111e8492 mov eax, esp */
  EAX = (ESP);
  /* 111e8494 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 111e8497 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 111e849b jmp 0x111e84b0 */
  goto L_111e84b0;
  /* 111e849d push 1 */
  push32((uint32_t)(0x1u));
  /* 111e849f pop eax */
  EAX = (pop32());
  /* 111e84a0 ret  */
  ESPCHK(0x111e838du, _esp0);
  ESP += 4; return;
  /* 111e84a1 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 111e84a4 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 111e84a6 mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 111e84a9 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 111e84ad mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_111e84b0:;
  /* 111e84b0 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e84b3 je 0x111e851b */
  if (C.zf) goto L_111e851b;
  /* 111e84b5 push ebx */
  push32((uint32_t)(EBX));
  /* 111e84b6 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 111e84b9 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 111e84bc push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 111e84bf push 1 */
  push32((uint32_t)(0x1u));
  /* 111e84c1 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 111e84c4 call dword ptr [0x111e9028] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9028))), 0x111e84cau);
  /* 111e84ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e84cc je 0x111e851b */
  if (C.zf) goto L_111e851b;
  /* 111e84ce push edi */
  push32((uint32_t)(EDI));
  /* 111e84cf push edi */
  push32((uint32_t)(EDI));
  /* 111e84d0 push ebx */
  push32((uint32_t)(EBX));
  /* 111e84d1 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 111e84d4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 111e84d7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 111e84da call dword ptr [0x111e9014] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9014))), 0x111e84e0u);
  /* 111e84e0 mov esi, eax */
  ESI = (EAX);
  /* 111e84e2 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 111e84e5 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e84e7 je 0x111e851b */
  if (C.zf) goto L_111e851b;
  /* 111e84e9 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 111e84ed je 0x111e852f */
  if (C.zf) goto L_111e852f;
  /* 111e84ef cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e84f2 je 0x111e85aa */
  if (C.zf) goto L_111e85aa;
  /* 111e84f8 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e84fb jg 0x111e851b */
  if ((!C.zf&&C.sf==C.of)) goto L_111e851b;
  /* 111e84fd push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 111e8500 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 111e8503 push ebx */
  push32((uint32_t)(EBX));
  /* 111e8504 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 111e8507 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 111e850a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 111e850d call dword ptr [0x111e9014] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9014))), 0x111e8513u);
  /* 111e8513 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e8515 jne 0x111e85aa */
  if (!C.zf) goto L_111e85aa;
L_111e851b:;
  /* 111e851b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111e851d:;
  /* 111e851d lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 111e8520 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111e8523 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 111e852a pop edi */
  EDI = (pop32());
  /* 111e852b pop esi */
  ESI = (pop32());
  /* 111e852c pop ebx */
  EBX = (pop32());
  /* 111e852d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e852e ret  */
  ESPCHK(0x111e838du, _esp0);
  ESP += 4; return;
L_111e852f:;
  /* 111e852f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 111e8536 lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 111e8539 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e853c and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 111e853e call 0x111e7e10 */
  push32(0x111e8543u); f_111e7e10();
  /* 111e8543 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 111e8546 mov ebx, esp */
  EBX = (ESP);
  /* 111e8548 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 111e854b or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 111e854f jmp 0x111e8563 */
  goto L_111e8563;
  /* 111e8551 push 1 */
  push32((uint32_t)(0x1u));
  /* 111e8553 pop eax */
  EAX = (pop32());
  /* 111e8554 ret  */
  ESPCHK(0x111e838du, _esp0);
  ESP += 4; return;
  /* 111e8555 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 111e8558 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 111e855a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 111e855c or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 111e8560 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_111e8563:;
  /* 111e8563 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e8565 je 0x111e851b */
  if (C.zf) goto L_111e851b;
  /* 111e8567 push esi */
  push32((uint32_t)(ESI));
  /* 111e8568 push ebx */
  push32((uint32_t)(EBX));
  /* 111e8569 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 111e856c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 111e856f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 111e8572 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 111e8575 call dword ptr [0x111e9014] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9014))), 0x111e857bu);
  /* 111e857b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e857d je 0x111e851b */
  if (C.zf) goto L_111e851b;
  /* 111e857f cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e8582 push edi */
  push32((uint32_t)(EDI));
  /* 111e8583 push edi */
  push32((uint32_t)(EDI));
  /* 111e8584 jne 0x111e858a */
  if (!C.zf) goto L_111e858a;
  /* 111e8586 push edi */
  push32((uint32_t)(EDI));
  /* 111e8587 push edi */
  push32((uint32_t)(EDI));
  /* 111e8588 jmp 0x111e8590 */
  goto L_111e8590;
L_111e858a:;
  /* 111e858a push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 111e858d push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_111e8590:;
  /* 111e8590 push esi */
  push32((uint32_t)(ESI));
  /* 111e8591 push ebx */
  push32((uint32_t)(EBX));
  /* 111e8592 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 111e8597 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 111e859a call dword ptr [0x111e90dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e90dc))), 0x111e85a0u);
  /* 111e85a0 mov esi, eax */
  ESI = (EAX);
  /* 111e85a2 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e85a4 je 0x111e851b */
  if (C.zf) goto L_111e851b;
L_111e85aa:;
  /* 111e85aa mov eax, esi */
  EAX = (ESI);
  /* 111e85ac jmp 0x111e851d */
  goto L_111e851d;
}

/* FUN_100085b1 @ 0x111e85b1 (43 bytes, 20 insns) */
void f_111e85b1(void) {
  FTRACE(0x111e85b1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e85b1 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 111e85b5 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 111e85b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111e85bb push esi */
  push32((uint32_t)(ESI));
  /* 111e85bc lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 111e85bf je 0x111e85ce */
  if (C.zf) goto L_111e85ce;
L_111e85c1:;
  /* 111e85c1 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e85c4 je 0x111e85ce */
  if (C.zf) goto L_111e85ce;
  /* 111e85c6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111e85c7 mov esi, ecx */
  ESI = (ECX);
  /* 111e85c9 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 111e85ca test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 111e85cc jne 0x111e85c1 */
  if (!C.zf) goto L_111e85c1;
L_111e85ce:;
  /* 111e85ce cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e85d1 pop esi */
  ESI = (pop32());
  /* 111e85d2 jne 0x111e85d9 */
  if (!C.zf) goto L_111e85d9;
  /* 111e85d4 sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e85d8 ret  */
  ESPCHK(0x111e85b1u, _esp0);
  ESP += 4; return;
L_111e85d9:;
  /* 111e85d9 mov eax, edx */
  EAX = (EDX);
  /* 111e85db ret  */
  ESPCHK(0x111e85b1u, _esp0);
  ESP += 4; return;
}

/* FUN_100085dc @ 0x111e85dc (318 bytes, 123 insns) */
void f_111e85dc(void) {
  FTRACE(0x111e85dcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e85dc push ebp */
  push32((uint32_t)(EBP));
  /* 111e85dd mov ebp, esp */
  EBP = (ESP);
  /* 111e85df push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 111e85e1 push 0x111e9558 */
  push32((uint32_t)(0x111e9558u));
  /* 111e85e6 push 0x111e6b24 */
  push32((uint32_t)(0x111e6b24u));
  /* 111e85eb mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 111e85f1 push eax */
  push32((uint32_t)(EAX));
  /* 111e85f2 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 111e85f9 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e85fc push ebx */
  push32((uint32_t)(EBX));
  /* 111e85fd push esi */
  push32((uint32_t)(ESI));
  /* 111e85fe push edi */
  push32((uint32_t)(EDI));
  /* 111e85ff mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 111e8602 mov eax, dword ptr [0x111ee00c] */
  EAX = (r32((uint32_t)(0x111ee00c)));
  /* 111e8607 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 111e8609 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e860b jne 0x111e864b */
  if (!C.zf) goto L_111e864b;
  /* 111e860d lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 111e8610 push eax */
  push32((uint32_t)(EAX));
  /* 111e8611 push 1 */
  push32((uint32_t)(0x1u));
  /* 111e8613 pop esi */
  ESI = (pop32());
  /* 111e8614 push esi */
  push32((uint32_t)(ESI));
  /* 111e8615 push 0x111e9538 */
  push32((uint32_t)(0x111e9538u));
  /* 111e861a push esi */
  push32((uint32_t)(ESI));
  /* 111e861b call dword ptr [0x111e900c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e900c))), 0x111e8621u);
  /* 111e8621 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e8623 je 0x111e8629 */
  if (C.zf) goto L_111e8629;
  /* 111e8625 mov eax, esi */
  EAX = (ESI);
  /* 111e8627 jmp 0x111e8646 */
  goto L_111e8646;
L_111e8629:;
  /* 111e8629 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 111e862c push eax */
  push32((uint32_t)(EAX));
  /* 111e862d push esi */
  push32((uint32_t)(ESI));
  /* 111e862e push 0x111e9534 */
  push32((uint32_t)(0x111e9534u));
  /* 111e8633 push esi */
  push32((uint32_t)(ESI));
  /* 111e8634 push ebx */
  push32((uint32_t)(EBX));
  /* 111e8635 call dword ptr [0x111e901c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e901c))), 0x111e863bu);
  /* 111e863b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e863d je 0x111e8711 */
  if (C.zf) goto L_111e8711;
  /* 111e8643 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e8645 pop eax */
  EAX = (pop32());
L_111e8646:;
  /* 111e8646 mov dword ptr [0x111ee00c], eax */
  w32((uint32_t)(0x111ee00c), (EAX));
L_111e864b:;
  /* 111e864b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e864e jne 0x111e8674 */
  if (!C.zf) goto L_111e8674;
  /* 111e8650 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 111e8653 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e8655 jne 0x111e865c */
  if (!C.zf) goto L_111e865c;
  /* 111e8657 mov eax, dword ptr [0x111edff0] */
  EAX = (r32((uint32_t)(0x111edff0)));
L_111e865c:;
  /* 111e865c push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 111e865f push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 111e8662 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 111e8665 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 111e8668 push eax */
  push32((uint32_t)(EAX));
  /* 111e8669 call dword ptr [0x111e901c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e901c))), 0x111e866fu);
  /* 111e866f jmp 0x111e8713 */
  goto L_111e8713;
L_111e8674:;
  /* 111e8674 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e8677 jne 0x111e8711 */
  if (!C.zf) goto L_111e8711;
  /* 111e867d cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e8680 jne 0x111e868a */
  if (!C.zf) goto L_111e868a;
  /* 111e8682 mov eax, dword ptr [0x111ee000] */
  EAX = (r32((uint32_t)(0x111ee000)));
  /* 111e8687 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_111e868a:;
  /* 111e868a push ebx */
  push32((uint32_t)(EBX));
  /* 111e868b push ebx */
  push32((uint32_t)(EBX));
  /* 111e868c push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 111e868f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 111e8692 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 111e8695 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 111e8697 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e8699 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 111e869c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111e869d push eax */
  push32((uint32_t)(EAX));
  /* 111e869e push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 111e86a1 call dword ptr [0x111e9028] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9028))), 0x111e86a7u);
  /* 111e86a7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 111e86aa cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e86ac je 0x111e8711 */
  if (C.zf) goto L_111e8711;
  /* 111e86ae mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 111e86b1 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 111e86b4 mov eax, edi */
  EAX = (EDI);
  /* 111e86b6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e86b9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 111e86bb call 0x111e7e10 */
  push32(0x111e86c0u); f_111e7e10();
  /* 111e86c0 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 111e86c3 mov esi, esp */
  ESI = (ESP);
  /* 111e86c5 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 111e86c8 push edi */
  push32((uint32_t)(EDI));
  /* 111e86c9 push ebx */
  push32((uint32_t)(EBX));
  /* 111e86ca push esi */
  push32((uint32_t)(ESI));
  /* 111e86cb call 0x111e8210 */
  push32(0x111e86d0u); f_111e8210();
  /* 111e86d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e86d3 jmp 0x111e86e0 */
  goto L_111e86e0;
  /* 111e86d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 111e86d7 pop eax */
  EAX = (pop32());
  /* 111e86d8 ret  */
  ESPCHK(0x111e85dcu, _esp0);
  ESP += 4; return;
  /* 111e86d9 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 111e86dc xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 111e86de xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_111e86e0:;
  /* 111e86e0 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 111e86e4 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e86e6 je 0x111e8711 */
  if (C.zf) goto L_111e8711;
  /* 111e86e8 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 111e86eb push esi */
  push32((uint32_t)(ESI));
  /* 111e86ec push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 111e86ef push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 111e86f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 111e86f4 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 111e86f7 call dword ptr [0x111e9028] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9028))), 0x111e86fdu);
  /* 111e86fd cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e86ff je 0x111e8711 */
  if (C.zf) goto L_111e8711;
  /* 111e8701 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 111e8704 push eax */
  push32((uint32_t)(EAX));
  /* 111e8705 push esi */
  push32((uint32_t)(ESI));
  /* 111e8706 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 111e8709 call dword ptr [0x111e900c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e900c))), 0x111e870fu);
  /* 111e870f jmp 0x111e8713 */
  goto L_111e8713;
L_111e8711:;
  /* 111e8711 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111e8713:;
  /* 111e8713 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 111e8716 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111e8719 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 111e8720 pop edi */
  EDI = (pop32());
  /* 111e8721 pop esi */
  ESI = (pop32());
  /* 111e8722 pop ebx */
  EBX = (pop32());
  /* 111e8723 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e8724 ret  */
  ESPCHK(0x111e85dcu, _esp0);
  ESP += 4; return;
}

/* FUN_10008725 @ 0x111e8725 (111 bytes, 44 insns) */
void f_111e8725(void) {
  FTRACE(0x111e8725u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e8725 push ebx */
  push32((uint32_t)(EBX));
  /* 111e8726 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 111e8728 cmp dword ptr [0x111edff0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x111edff0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e872e jne 0x111e8743 */
  if (!C.zf) goto L_111e8743;
  /* 111e8730 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 111e8734 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e8737 jl 0x111e8792 */
  if ((C.sf!=C.of)) goto L_111e8792;
  /* 111e8739 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e873c jg 0x111e8792 */
  if ((!C.zf&&C.sf==C.of)) goto L_111e8792;
  /* 111e873e sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e8741 pop ebx */
  EBX = (pop32());
  /* 111e8742 ret  */
  ESPCHK(0x111e8725u, _esp0);
  ESP += 4; return;
L_111e8743:;
  /* 111e8743 push esi */
  push32((uint32_t)(ESI));
  /* 111e8744 mov esi, 0x111ee15c */
  ESI = (0x111ee15cu);
  /* 111e8749 push edi */
  push32((uint32_t)(EDI));
  /* 111e874a push esi */
  push32((uint32_t)(ESI));
  /* 111e874b call dword ptr [0x111e9010] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9010))), 0x111e8751u);
  /* 111e8751 cmp dword ptr [0x111ee158], ebx */
  { uint32_t _a=(r32((uint32_t)(0x111ee158))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e8757 mov edi, dword ptr [0x111e9008] */
  EDI = (r32((uint32_t)(0x111e9008)));
  /* 111e875d je 0x111e876d */
  if (C.zf) goto L_111e876d;
  /* 111e875f push esi */
  push32((uint32_t)(ESI));
  /* 111e8760 call edi */
  call_ind((uint32_t)(EDI), 0x111e8762u);
  /* 111e8762 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 111e8764 call 0x111e69b6 */
  push32(0x111e8769u); f_111e69b6();
  /* 111e8769 pop ecx */
  ECX = (pop32());
  /* 111e876a push 1 */
  push32((uint32_t)(0x1u));
  /* 111e876c pop ebx */
  EBX = (pop32());
L_111e876d:;
  /* 111e876d push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 111e8771 call 0x111e8794 */
  push32(0x111e8776u); f_111e8794();
  /* 111e8776 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 111e8778 pop ecx */
  ECX = (pop32());
  /* 111e8779 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 111e877d je 0x111e8789 */
  if (C.zf) goto L_111e8789;
  /* 111e877f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 111e8781 call 0x111e6a17 */
  push32(0x111e8786u); f_111e6a17();
  /* 111e8786 pop ecx */
  ECX = (pop32());
  /* 111e8787 jmp 0x111e878c */
  goto L_111e878c;
L_111e8789:;
  /* 111e8789 push esi */
  push32((uint32_t)(ESI));
  /* 111e878a call edi */
  call_ind((uint32_t)(EDI), 0x111e878cu);
L_111e878c:;
  /* 111e878c mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 111e8790 pop edi */
  EDI = (pop32());
  /* 111e8791 pop esi */
  ESI = (pop32());
L_111e8792:;
  /* 111e8792 pop ebx */
  EBX = (pop32());
  /* 111e8793 ret  */
  ESPCHK(0x111e8725u, _esp0);
  ESP += 4; return;
}

/* FUN_10008794 @ 0x111e8794 (204 bytes, 71 insns) */
void f_111e8794(void) {
  FTRACE(0x111e8794u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e8794 push ebp */
  push32((uint32_t)(EBP));
  /* 111e8795 mov ebp, esp */
  EBP = (ESP);
  /* 111e8797 push ecx */
  push32((uint32_t)(ECX));
  /* 111e8798 cmp dword ptr [0x111edff0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111edff0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e879f push ebx */
  push32((uint32_t)(EBX));
  /* 111e87a0 jne 0x111e87bf */
  if (!C.zf) goto L_111e87bf;
  /* 111e87a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e87a5 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e87a8 jl 0x111e885d */
  if ((C.sf!=C.of)) goto L_111e885d;
  /* 111e87ae cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e87b1 jg 0x111e885d */
  if ((!C.zf&&C.sf==C.of)) goto L_111e885d;
  /* 111e87b7 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e87ba jmp 0x111e885d */
  goto L_111e885d;
L_111e87bf:;
  /* 111e87bf mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e87c2 cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e87c8 jge 0x111e87f2 */
  if ((C.sf==C.of)) goto L_111e87f2;
  /* 111e87ca cmp dword ptr [0x111ececc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111ececc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e87d1 jle 0x111e87df */
  if ((C.zf||C.sf!=C.of)) goto L_111e87df;
  /* 111e87d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e87d5 push ebx */
  push32((uint32_t)(EBX));
  /* 111e87d6 call 0x111e8860 */
  push32(0x111e87dbu); f_111e8860();
  /* 111e87db pop ecx */
  ECX = (pop32());
  /* 111e87dc pop ecx */
  ECX = (pop32());
  /* 111e87dd jmp 0x111e87ea */
  goto L_111e87ea;
L_111e87df:;
  /* 111e87df mov eax, dword ptr [0x111eccc0] */
  EAX = (r32((uint32_t)(0x111eccc0)));
  /* 111e87e4 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 111e87e7 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_111e87ea:;
  /* 111e87ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e87ec jne 0x111e87f2 */
  if (!C.zf) goto L_111e87f2;
L_111e87ee:;
  /* 111e87ee mov eax, ebx */
  EAX = (EBX);
  /* 111e87f0 jmp 0x111e885d */
  goto L_111e885d;
L_111e87f2:;
  /* 111e87f2 mov edx, dword ptr [0x111eccc0] */
  EDX = (r32((uint32_t)(0x111eccc0)));
  /* 111e87f8 mov eax, ebx */
  EAX = (EBX);
  /* 111e87fa sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 111e87fd movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 111e8800 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 111e8805 je 0x111e8815 */
  if (C.zf) goto L_111e8815;
  /* 111e8807 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 111e880b mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 111e880e mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 111e8811 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e8813 jmp 0x111e881e */
  goto L_111e881e;
L_111e8815:;
  /* 111e8815 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 111e8819 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 111e881c push 1 */
  push32((uint32_t)(0x1u));
L_111e881e:;
  /* 111e881e pop eax */
  EAX = (pop32());
  /* 111e881f lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 111e8822 push 1 */
  push32((uint32_t)(0x1u));
  /* 111e8824 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e8826 push 3 */
  push32((uint32_t)(0x3u));
  /* 111e8828 push ecx */
  push32((uint32_t)(ECX));
  /* 111e8829 push eax */
  push32((uint32_t)(EAX));
  /* 111e882a lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 111e882d push eax */
  push32((uint32_t)(EAX));
  /* 111e882e push 0x200 */
  push32((uint32_t)(0x200u));
  /* 111e8833 push dword ptr [0x111edff0] */
  push32((uint32_t)(r32((uint32_t)(0x111edff0))));
  /* 111e8839 call 0x111e838d */
  push32(0x111e883eu); f_111e838d();
  /* 111e883e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e8841 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e8843 je 0x111e87ee */
  if (C.zf) goto L_111e87ee;
  /* 111e8845 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e8848 jne 0x111e8850 */
  if (!C.zf) goto L_111e8850;
  /* 111e884a movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 111e884e jmp 0x111e885d */
  goto L_111e885d;
L_111e8850:;
  /* 111e8850 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 111e8854 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 111e8858 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 111e885b or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_111e885d:;
  /* 111e885d pop ebx */
  EBX = (pop32());
  /* 111e885e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e885f ret  */
  ESPCHK(0x111e8794u, _esp0);
  ESP += 4; return;
}

/* FUN_10008860 @ 0x111e8860 (117 bytes, 46 insns) */
void f_111e8860(void) {
  FTRACE(0x111e8860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e8860 push ebp */
  push32((uint32_t)(EBP));
  /* 111e8861 mov ebp, esp */
  EBP = (ESP);
  /* 111e8863 push ecx */
  push32((uint32_t)(ECX));
  /* 111e8864 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e8867 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 111e886a cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e8870 ja 0x111e887e */
  if ((!C.cf&&!C.zf)) goto L_111e887e;
  /* 111e8872 mov ecx, dword ptr [0x111eccc0] */
  ECX = (r32((uint32_t)(0x111eccc0)));
  /* 111e8878 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 111e887c jmp 0x111e88d0 */
  goto L_111e88d0;
L_111e887e:;
  /* 111e887e mov ecx, eax */
  ECX = (EAX);
  /* 111e8880 push esi */
  push32((uint32_t)(ESI));
  /* 111e8881 mov esi, dword ptr [0x111eccc0] */
  ESI = (r32((uint32_t)(0x111eccc0)));
  /* 111e8887 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 111e888a movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 111e888d test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 111e8892 pop esi */
  ESI = (pop32());
  /* 111e8893 je 0x111e88a3 */
  if (C.zf) goto L_111e88a3;
  /* 111e8895 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 111e8899 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 111e889c mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 111e889f push 2 */
  push32((uint32_t)(0x2u));
  /* 111e88a1 jmp 0x111e88ac */
  goto L_111e88ac;
L_111e88a3:;
  /* 111e88a3 and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 111e88a7 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 111e88aa push 1 */
  push32((uint32_t)(0x1u));
L_111e88ac:;
  /* 111e88ac pop eax */
  EAX = (pop32());
  /* 111e88ad lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 111e88b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 111e88b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e88b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e88b6 push ecx */
  push32((uint32_t)(ECX));
  /* 111e88b7 push eax */
  push32((uint32_t)(EAX));
  /* 111e88b8 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 111e88bb push eax */
  push32((uint32_t)(EAX));
  /* 111e88bc push 1 */
  push32((uint32_t)(0x1u));
  /* 111e88be call 0x111e85dc */
  push32(0x111e88c3u); f_111e85dc();
  /* 111e88c3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e88c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e88c8 jne 0x111e88cc */
  if (!C.zf) goto L_111e88cc;
  /* 111e88ca leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e88cb ret  */
  ESPCHK(0x111e8860u, _esp0);
  ESP += 4; return;
L_111e88cc:;
  /* 111e88cc movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_111e88d0:;
  /* 111e88d0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 111e88d3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e88d4 ret  */
  ESPCHK(0x111e8860u, _esp0);
  ESP += 4; return;
}

/* FUN_100088d5 @ 0x111e88d5 (97 bytes, 31 insns) */
void f_111e88d5(void) {
  FTRACE(0x111e88d5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e88d5 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 111e88d9 push esi */
  push32((uint32_t)(ESI));
  /* 111e88da mov ecx, eax */
  ECX = (EAX);
  /* 111e88dc and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 111e88df sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 111e88e2 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 111e88e5 mov esi, 0x8000 */
  ESI = (0x8000u);
  /* 111e88ea mov ecx, dword ptr [ecx*4 + 0x111ee3c0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x111ee3c0)));
  /* 111e88f1 lea edx, [ecx + eax*4 + 4] */
  EDX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 111e88f5 mov cl, byte ptr [ecx + eax*4 + 4] */
  CL = (r8((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 111e88f9 mov al, cl */
  AL = (CL);
  /* 111e88fb and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 111e8900 cmp dword ptr [esp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e8904 jne 0x111e890b */
  if (!C.zf) goto L_111e890b;
  /* 111e8906 and cl, 0x7f */
  { uint32_t _r=(CL)&(0x7fu); CL = (_r); fl_logic(_r,8); }
  /* 111e8909 jmp 0x111e8918 */
  goto L_111e8918;
L_111e890b:;
  /* 111e890b cmp dword ptr [esp + 0xc], 0x4000 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x4000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e8913 jne 0x111e8926 */
  if (!C.zf) goto L_111e8926;
  /* 111e8915 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
L_111e8918:;
  /* 111e8918 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 111e891a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e891c mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 111e891e and ax, 0xc000 */
  { uint32_t _r=(AX)&(0xc000u); AX = (_r); fl_logic(_r,16); }
  /* 111e8922 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e8924 pop esi */
  ESI = (pop32());
  /* 111e8925 ret  */
  ESPCHK(0x111e88d5u, _esp0);
  ESP += 4; return;
L_111e8926:;
  /* 111e8926 call 0x111e4a92 */
  push32(0x111e892bu); f_111e4a92();
  /* 111e892b mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 111e8931 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111e8934 pop esi */
  ESI = (pop32());
  /* 111e8935 ret  */
  ESPCHK(0x111e88d5u, _esp0);
  ESP += 4; return;
}

/* FUN_100089d0 @ 0x111e89d0 (58 bytes, 32 insns) */
void f_111e89d0(void) {
  FTRACE(0x111e89d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e89d0 push ebp */
  push32((uint32_t)(EBP));
  /* 111e89d1 mov ebp, esp */
  EBP = (ESP);
  /* 111e89d3 push esi */
  push32((uint32_t)(ESI));
  /* 111e89d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e89d6 push eax */
  push32((uint32_t)(EAX));
  /* 111e89d7 push eax */
  push32((uint32_t)(EAX));
  /* 111e89d8 push eax */
  push32((uint32_t)(EAX));
  /* 111e89d9 push eax */
  push32((uint32_t)(EAX));
  /* 111e89da push eax */
  push32((uint32_t)(EAX));
  /* 111e89db push eax */
  push32((uint32_t)(EAX));
  /* 111e89dc push eax */
  push32((uint32_t)(EAX));
  /* 111e89dd push eax */
  push32((uint32_t)(EAX));
  /* 111e89de mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111e89e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111e89e4:;
  /* 111e89e4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111e89e6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 111e89e8 je 0x111e89f1 */
  if (C.zf) goto L_111e89f1;
  /* 111e89ea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 111e89eb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x111e89eb");
  /* 111e89ef jmp 0x111e89e4 */
  goto L_111e89e4;
L_111e89f1:;
  /* 111e89f1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_111e89f4:;
  /* 111e89f4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111e89f6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 111e89f8 je 0x111e8a04 */
  if (C.zf) goto L_111e8a04;
  /* 111e89fa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111e89fb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x111e89fb");
  /* 111e89ff jae 0x111e89f4 */
  if (!C.cf) goto L_111e89f4;
  /* 111e8a01 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_111e8a04:;
  /* 111e8a04 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e8a07 pop esi */
  ESI = (pop32());
  /* 111e8a08 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e8a09 ret  */
  ESPCHK(0x111e89d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a10 @ 0x111e8a10 (208 bytes, 85 insns) */
void f_111e8a10(void) {
  FTRACE(0x111e8a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e8a10 push ebp */
  push32((uint32_t)(EBP));
  /* 111e8a11 mov ebp, esp */
  EBP = (ESP);
  /* 111e8a13 push edi */
  push32((uint32_t)(EDI));
  /* 111e8a14 push esi */
  push32((uint32_t)(ESI));
  /* 111e8a15 push ebx */
  push32((uint32_t)(EBX));
  /* 111e8a16 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 111e8a19 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 111e8a1c lea eax, [0x111edfe8] */
  EAX = ((uint32_t)(0x111edfe8));
  /* 111e8a22 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e8a26 jne 0x111e8a63 */
  if (!C.zf) goto L_111e8a63;
  /* 111e8a28 mov al, 0xff */
  AL = (0xffu);
  /* 111e8a2a mov edi, edi */
  EDI = (EDI);
L_111e8a2c:;
  /* 111e8a2c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 111e8a2e je 0x111e8a5e */
  if (C.zf) goto L_111e8a5e;
  /* 111e8a30 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111e8a32 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111e8a33 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 111e8a35 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 111e8a36 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e8a38 je 0x111e8a2c */
  if (C.zf) goto L_111e8a2c;
  /* 111e8a3a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 111e8a3c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e8a3e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 111e8a40 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 111e8a43 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 111e8a45 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 111e8a47 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 111e8a49 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 111e8a4b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e8a4d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 111e8a4f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 111e8a52 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 111e8a54 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 111e8a56 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e8a58 je 0x111e8a2c */
  if (C.zf) goto L_111e8a2c;
  /* 111e8a5a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 111e8a5c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_111e8a5e:;
  /* 111e8a5e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 111e8a61 jmp 0x111e8adb */
  goto L_111e8adb;
L_111e8a63:;
  /* 111e8a63 lock inc dword ptr [0x111ee15c] */
  x86_unimpl("lock inc @ 0x111e8a63");
  /* 111e8a6a cmp dword ptr [0x111ee158], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111ee158))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e8a71 jg 0x111e8a77 */
  if ((!C.zf&&C.sf==C.of)) goto L_111e8a77;
  /* 111e8a73 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e8a75 jmp 0x111e8a8c */
  goto L_111e8a8c;
L_111e8a77:;
  /* 111e8a77 lock dec dword ptr [0x111ee15c] */
  x86_unimpl("lock dec @ 0x111e8a77");
  /* 111e8a7e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 111e8a80 call 0x111e69b6 */
  push32(0x111e8a85u); f_111e69b6();
  /* 111e8a85 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_111e8a8c:;
  /* 111e8a8c mov eax, 0xff */
  EAX = (0xffu);
  /* 111e8a91 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 111e8a93 nop  */
  /* nop */
L_111e8a94:;
  /* 111e8a94 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 111e8a96 je 0x111e8abf */
  if (C.zf) goto L_111e8abf;
  /* 111e8a98 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111e8a9a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111e8a9b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 111e8a9d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 111e8a9e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e8aa0 je 0x111e8a94 */
  if (C.zf) goto L_111e8a94;
  /* 111e8aa2 push eax */
  push32((uint32_t)(EAX));
  /* 111e8aa3 push ebx */
  push32((uint32_t)(EBX));
  /* 111e8aa4 call 0x111e8cd5 */
  push32(0x111e8aa9u); f_111e8cd5();
  /* 111e8aa9 mov ebx, eax */
  EBX = (EAX);
  /* 111e8aab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e8aae call 0x111e8cd5 */
  push32(0x111e8ab3u); f_111e8cd5();
  /* 111e8ab3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e8ab6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e8ab8 je 0x111e8a94 */
  if (C.zf) goto L_111e8a94;
  /* 111e8aba sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e8abc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_111e8abf:;
  /* 111e8abf mov ebx, eax */
  EBX = (EAX);
  /* 111e8ac1 pop eax */
  EAX = (pop32());
  /* 111e8ac2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e8ac4 jne 0x111e8acf */
  if (!C.zf) goto L_111e8acf;
  /* 111e8ac6 lock dec dword ptr [0x111ee15c] */
  x86_unimpl("lock dec @ 0x111e8ac6");
  /* 111e8acd jmp 0x111e8ad9 */
  goto L_111e8ad9;
L_111e8acf:;
  /* 111e8acf push 0x13 */
  push32((uint32_t)(0x13u));
  /* 111e8ad1 call 0x111e6a17 */
  push32(0x111e8ad6u); f_111e6a17();
  /* 111e8ad6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111e8ad9:;
  /* 111e8ad9 mov eax, ebx */
  EAX = (EBX);
L_111e8adb:;
  /* 111e8adb pop ebx */
  EBX = (pop32());
  /* 111e8adc pop esi */
  ESI = (pop32());
  /* 111e8add pop edi */
  EDI = (pop32());
  /* 111e8ade leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e8adf ret  */
  ESPCHK(0x111e8a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ae0 @ 0x111e8ae0 (257 bytes, 103 insns) */
void f_111e8ae0(void) {
  FTRACE(0x111e8ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e8ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 111e8ae1 mov ebp, esp */
  EBP = (ESP);
  /* 111e8ae3 push edi */
  push32((uint32_t)(EDI));
  /* 111e8ae4 push esi */
  push32((uint32_t)(ESI));
  /* 111e8ae5 push ebx */
  push32((uint32_t)(EBX));
  /* 111e8ae6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111e8ae9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111e8aeb je 0x111e8bda */
  if (C.zf) goto L_111e8bda;
  /* 111e8af1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 111e8af4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 111e8af7 lea eax, [0x111edfe8] */
  EAX = ((uint32_t)(0x111edfe8));
  /* 111e8afd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e8b01 jne 0x111e8b51 */
  if (!C.zf) goto L_111e8b51;
  /* 111e8b03 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 111e8b05 mov bl, 0x5a */
  BL = (0x5au);
  /* 111e8b07 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 111e8b09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111e8b0c:;
  /* 111e8b0c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 111e8b0e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 111e8b10 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 111e8b12 je 0x111e8b35 */
  if (C.zf) goto L_111e8b35;
  /* 111e8b14 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 111e8b16 je 0x111e8b35 */
  if (C.zf) goto L_111e8b35;
  /* 111e8b18 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111e8b19 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 111e8b1a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e8b1c jb 0x111e8b24 */
  if (C.cf) goto L_111e8b24;
  /* 111e8b1e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e8b20 ja 0x111e8b24 */
  if ((!C.cf&&!C.zf)) goto L_111e8b24;
  /* 111e8b22 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_111e8b24:;
  /* 111e8b24 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e8b26 jb 0x111e8b2e */
  if (C.cf) goto L_111e8b2e;
  /* 111e8b28 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e8b2a ja 0x111e8b2e */
  if ((!C.cf&&!C.zf)) goto L_111e8b2e;
  /* 111e8b2c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_111e8b2e:;
  /* 111e8b2e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e8b30 jne 0x111e8b3f */
  if (!C.zf) goto L_111e8b3f;
  /* 111e8b32 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 111e8b33 jne 0x111e8b0c */
  if (!C.zf) goto L_111e8b0c;
L_111e8b35:;
  /* 111e8b35 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111e8b37 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e8b39 je 0x111e8bda */
  if (C.zf) goto L_111e8bda;
L_111e8b3f:;
  /* 111e8b3f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 111e8b44 jb 0x111e8bda */
  if (C.cf) goto L_111e8bda;
  /* 111e8b4a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 111e8b4c jmp 0x111e8bda */
  goto L_111e8bda;
L_111e8b51:;
  /* 111e8b51 lock inc dword ptr [0x111ee15c] */
  x86_unimpl("lock inc @ 0x111e8b51");
  /* 111e8b58 cmp dword ptr [0x111ee158], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111ee158))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e8b5f jg 0x111e8b65 */
  if ((!C.zf&&C.sf==C.of)) goto L_111e8b65;
  /* 111e8b61 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e8b63 jmp 0x111e8b7e */
  goto L_111e8b7e;
L_111e8b65:;
  /* 111e8b65 lock dec dword ptr [0x111ee15c] */
  x86_unimpl("lock dec @ 0x111e8b65");
  /* 111e8b6c mov ebx, ecx */
  EBX = (ECX);
  /* 111e8b6e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 111e8b70 call 0x111e69b6 */
  push32(0x111e8b75u); f_111e69b6();
  /* 111e8b75 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 111e8b7c mov ecx, ebx */
  ECX = (EBX);
L_111e8b7e:;
  /* 111e8b7e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e8b80 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 111e8b82 mov edi, edi */
  EDI = (EDI);
L_111e8b84:;
  /* 111e8b84 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111e8b86 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e8b88 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 111e8b8a je 0x111e8baf */
  if (C.zf) goto L_111e8baf;
  /* 111e8b8c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 111e8b8e je 0x111e8baf */
  if (C.zf) goto L_111e8baf;
  /* 111e8b90 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111e8b91 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 111e8b92 push ecx */
  push32((uint32_t)(ECX));
  /* 111e8b93 push eax */
  push32((uint32_t)(EAX));
  /* 111e8b94 push ebx */
  push32((uint32_t)(EBX));
  /* 111e8b95 call 0x111e8cd5 */
  push32(0x111e8b9au); f_111e8cd5();
  /* 111e8b9a mov ebx, eax */
  EBX = (EAX);
  /* 111e8b9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e8b9f call 0x111e8cd5 */
  push32(0x111e8ba4u); f_111e8cd5();
  /* 111e8ba4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e8ba7 pop ecx */
  ECX = (pop32());
  /* 111e8ba8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e8baa jne 0x111e8bb5 */
  if (!C.zf) goto L_111e8bb5;
  /* 111e8bac dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 111e8bad jne 0x111e8b84 */
  if (!C.zf) goto L_111e8b84;
L_111e8baf:;
  /* 111e8baf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111e8bb1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e8bb3 je 0x111e8bbe */
  if (C.zf) goto L_111e8bbe;
L_111e8bb5:;
  /* 111e8bb5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 111e8bba jb 0x111e8bbe */
  if (C.cf) goto L_111e8bbe;
  /* 111e8bbc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_111e8bbe:;
  /* 111e8bbe pop eax */
  EAX = (pop32());
  /* 111e8bbf or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e8bc1 jne 0x111e8bcc */
  if (!C.zf) goto L_111e8bcc;
  /* 111e8bc3 lock dec dword ptr [0x111ee15c] */
  x86_unimpl("lock dec @ 0x111e8bc3");
  /* 111e8bca jmp 0x111e8bda */
  goto L_111e8bda;
L_111e8bcc:;
  /* 111e8bcc mov ebx, ecx */
  EBX = (ECX);
  /* 111e8bce push 0x13 */
  push32((uint32_t)(0x13u));
  /* 111e8bd0 call 0x111e6a17 */
  push32(0x111e8bd5u); f_111e6a17();
  /* 111e8bd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e8bd8 mov ecx, ebx */
  ECX = (EBX);
L_111e8bda:;
  /* 111e8bda mov eax, ecx */
  EAX = (ECX);
  /* 111e8bdc pop ebx */
  EBX = (pop32());
  /* 111e8bdd pop esi */
  ESI = (pop32());
  /* 111e8bde pop edi */
  EDI = (pop32());
  /* 111e8bdf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e8be0 ret  */
  ESPCHK(0x111e8ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cd5 @ 0x111e8cd5 (203 bytes, 78 insns) */
void f_111e8cd5(void) {
  FTRACE(0x111e8cd5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e8cd5 push ebp */
  push32((uint32_t)(EBP));
  /* 111e8cd6 mov ebp, esp */
  EBP = (ESP);
  /* 111e8cd8 push ecx */
  push32((uint32_t)(ECX));
  /* 111e8cd9 cmp dword ptr [0x111edff0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111edff0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e8ce0 push ebx */
  push32((uint32_t)(EBX));
  /* 111e8ce1 push esi */
  push32((uint32_t)(ESI));
  /* 111e8ce2 push edi */
  push32((uint32_t)(EDI));
  /* 111e8ce3 jne 0x111e8d02 */
  if (!C.zf) goto L_111e8d02;
  /* 111e8ce5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e8ce8 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e8ceb jl 0x111e8d9b */
  if ((C.sf!=C.of)) goto L_111e8d9b;
  /* 111e8cf1 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e8cf4 jg 0x111e8d9b */
  if ((!C.zf&&C.sf==C.of)) goto L_111e8d9b;
  /* 111e8cfa add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e8cfd jmp 0x111e8d9b */
  goto L_111e8d9b;
L_111e8d02:;
  /* 111e8d02 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e8d05 mov edi, 0x100 */
  EDI = (0x100u);
  /* 111e8d0a push 1 */
  push32((uint32_t)(0x1u));
  /* 111e8d0c cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e8d0e pop esi */
  ESI = (pop32());
  /* 111e8d0f jge 0x111e8d36 */
  if ((C.sf==C.of)) goto L_111e8d36;
  /* 111e8d11 cmp dword ptr [0x111ececc], esi */
  { uint32_t _a=(r32((uint32_t)(0x111ececc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e8d17 jle 0x111e8d24 */
  if ((C.zf||C.sf!=C.of)) goto L_111e8d24;
  /* 111e8d19 push esi */
  push32((uint32_t)(ESI));
  /* 111e8d1a push ebx */
  push32((uint32_t)(EBX));
  /* 111e8d1b call 0x111e8860 */
  push32(0x111e8d20u); f_111e8860();
  /* 111e8d20 pop ecx */
  ECX = (pop32());
  /* 111e8d21 pop ecx */
  ECX = (pop32());
  /* 111e8d22 jmp 0x111e8d2e */
  goto L_111e8d2e;
L_111e8d24:;
  /* 111e8d24 mov eax, dword ptr [0x111eccc0] */
  EAX = (r32((uint32_t)(0x111eccc0)));
  /* 111e8d29 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 111e8d2c and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_111e8d2e:;
  /* 111e8d2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e8d30 jne 0x111e8d36 */
  if (!C.zf) goto L_111e8d36;
L_111e8d32:;
  /* 111e8d32 mov eax, ebx */
  EAX = (EBX);
  /* 111e8d34 jmp 0x111e8d9b */
  goto L_111e8d9b;
L_111e8d36:;
  /* 111e8d36 mov edx, dword ptr [0x111eccc0] */
  EDX = (r32((uint32_t)(0x111eccc0)));
  /* 111e8d3c mov eax, ebx */
  EAX = (EBX);
  /* 111e8d3e sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 111e8d41 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 111e8d44 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 111e8d49 je 0x111e8d5a */
  if (C.zf) goto L_111e8d5a;
  /* 111e8d4b and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 111e8d4f push 2 */
  push32((uint32_t)(0x2u));
  /* 111e8d51 mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 111e8d54 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 111e8d57 pop eax */
  EAX = (pop32());
  /* 111e8d58 jmp 0x111e8d63 */
  goto L_111e8d63;
L_111e8d5a:;
  /* 111e8d5a and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 111e8d5e mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 111e8d61 mov eax, esi */
  EAX = (ESI);
L_111e8d63:;
  /* 111e8d63 push esi */
  push32((uint32_t)(ESI));
  /* 111e8d64 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e8d66 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 111e8d69 push 3 */
  push32((uint32_t)(0x3u));
  /* 111e8d6b push ecx */
  push32((uint32_t)(ECX));
  /* 111e8d6c push eax */
  push32((uint32_t)(EAX));
  /* 111e8d6d lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 111e8d70 push eax */
  push32((uint32_t)(EAX));
  /* 111e8d71 push edi */
  push32((uint32_t)(EDI));
  /* 111e8d72 push dword ptr [0x111edff0] */
  push32((uint32_t)(r32((uint32_t)(0x111edff0))));
  /* 111e8d78 call 0x111e838d */
  push32(0x111e8d7du); f_111e838d();
  /* 111e8d7d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e8d80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e8d82 je 0x111e8d32 */
  if (C.zf) goto L_111e8d32;
  /* 111e8d84 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e8d86 jne 0x111e8d8e */
  if (!C.zf) goto L_111e8d8e;
  /* 111e8d88 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 111e8d8c jmp 0x111e8d9b */
  goto L_111e8d9b;
L_111e8d8e:;
  /* 111e8d8e movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 111e8d92 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 111e8d96 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 111e8d99 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_111e8d9b:;
  /* 111e8d9b pop edi */
  EDI = (pop32());
  /* 111e8d9c pop esi */
  ESI = (pop32());
  /* 111e8d9d pop ebx */
  EBX = (pop32());
  /* 111e8d9e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e8d9f ret  */
  ESPCHK(0x111e8cd5u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x111e8dd4 (6 bytes, 1 insns) */
void f_111e8dd4(void) {
  FTRACE(0x111e8dd4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e8dd4 jmp dword ptr [0x111e9044] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x111e9044)))); return;
}

