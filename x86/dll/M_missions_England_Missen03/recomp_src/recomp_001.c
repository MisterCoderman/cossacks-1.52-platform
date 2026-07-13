#include "recomp.h"

/* FUN_10009bc0 @ 0x10429bc0 (116 bytes, 34 insns) */
void f_10429bc0(void) {
  FTRACE(0x10429bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10429bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10429bc1 mov ebp, esp */
  EBP = (ESP);
  /* 10429bc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10429bc4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 10429bcb push 9 */
  push32((uint32_t)(0x9u));
  /* 10429bcd call 0x104293e0 */
  push32(0x10429bd2u); f_104293e0();
  /* 10429bd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10429bd5 call 0x1042b2d0 */
  push32(0x10429bdau); f_1042b2d0();
  /* 10429bda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10429bdc jge 0x10429be5 */
  if ((C.sf==C.of)) goto L_10429be5;
  /* 10429bde mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10429be5:;
  /* 10429be5 push 9 */
  push32((uint32_t)(0x9u));
  /* 10429be7 call 0x10429480 */
  push32(0x10429becu); f_10429480();
  /* 10429bec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10429bef push 0 */
  push32((uint32_t)(0x0u));
  /* 10429bf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10429bf3 mov eax, dword ptr [0x10452f2c] */
  EAX = (r32((uint32_t)(0x10452f2c)));
  /* 10429bf8 push eax */
  push32((uint32_t)(EAX));
  /* 10429bf9 call dword ptr [0x10454358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454358))), 0x10429bffu);
  /* 10429bff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10429c01 jne 0x10429c2d */
  if (!C.zf) goto L_10429c2d;
  /* 10429c03 call dword ptr [0x10454338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454338))), 0x10429c09u);
  /* 10429c09 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429c0c jne 0x10429c26 */
  if (!C.zf) goto L_10429c26;
  /* 10429c0e call 0x1042d8c0 */
  push32(0x10429c13u); f_1042d8c0();
  /* 10429c13 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 10429c19 call 0x1042d8b0 */
  push32(0x10429c1eu); f_1042d8b0();
  /* 10429c1e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 10429c24 jmp 0x10429c2d */
  goto L_10429c2d;
L_10429c26:;
  /* 10429c26 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10429c2d:;
  /* 10429c2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10429c30 mov esp, ebp */
  ESP = (EBP);
  /* 10429c32 pop ebp */
  EBP = (pop32());
  /* 10429c33 ret  */
  ESPCHK(0x10429bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c40 @ 0x10429c40 (10 bytes, 5 insns) */
void f_10429c40(void) {
  FTRACE(0x10429c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10429c40 push ebp */
  push32((uint32_t)(EBP));
  /* 10429c41 mov ebp, esp */
  EBP = (ESP);
  /* 10429c43 call 0x10429bc0 */
  push32(0x10429c48u); f_10429bc0();
  /* 10429c48 pop ebp */
  EBP = (pop32());
  /* 10429c49 ret  */
  ESPCHK(0x10429c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c50 @ 0x10429c50 (10 bytes, 5 insns) */
void f_10429c50(void) {
  FTRACE(0x10429c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10429c50 push ebp */
  push32((uint32_t)(EBP));
  /* 10429c51 mov ebp, esp */
  EBP = (ESP);
  /* 10429c53 mov eax, dword ptr [0x1044fc94] */
  EAX = (r32((uint32_t)(0x1044fc94)));
  /* 10429c58 pop ebp */
  EBP = (pop32());
  /* 10429c59 ret  */
  ESPCHK(0x10429c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c60 @ 0x10429c60 (31 bytes, 11 insns) */
void f_10429c60(void) {
  FTRACE(0x10429c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10429c60 push ebp */
  push32((uint32_t)(EBP));
  /* 10429c61 mov ebp, esp */
  EBP = (ESP);
  /* 10429c63 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429c6a jbe 0x10429c70 */
  if ((C.cf||C.zf)) goto L_10429c70;
  /* 10429c6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10429c6e jmp 0x10429c7d */
  goto L_10429c7d;
L_10429c70:;
  /* 10429c70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10429c73 mov dword ptr [0x1044fc94], eax */
  w32((uint32_t)(0x1044fc94), (EAX));
  /* 10429c78 mov eax, 1 */
  EAX = (0x1u);
L_10429c7d:;
  /* 10429c7d pop ebp */
  EBP = (pop32());
  /* 10429c7e ret  */
  ESPCHK(0x10429c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c80 @ 0x10429c80 (89 bytes, 20 insns) */
void f_10429c80(void) {
  FTRACE(0x10429c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10429c80 push ebp */
  push32((uint32_t)(EBP));
  /* 10429c81 mov ebp, esp */
  EBP = (ESP);
  /* 10429c83 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10429c88 push 0 */
  push32((uint32_t)(0x0u));
  /* 10429c8a mov eax, dword ptr [0x10452f2c] */
  EAX = (r32((uint32_t)(0x10452f2c)));
  /* 10429c8f push eax */
  push32((uint32_t)(EAX));
  /* 10429c90 call dword ptr [0x104542e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542e4))), 0x10429c96u);
  /* 10429c96 mov dword ptr [0x10452f28], eax */
  w32((uint32_t)(0x10452f28), (EAX));
  /* 10429c9b cmp dword ptr [0x10452f28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10452f28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429ca2 jne 0x10429ca8 */
  if (!C.zf) goto L_10429ca8;
  /* 10429ca4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10429ca6 jmp 0x10429cd7 */
  goto L_10429cd7;
L_10429ca8:;
  /* 10429ca8 mov ecx, dword ptr [0x10452f28] */
  ECX = (r32((uint32_t)(0x10452f28)));
  /* 10429cae mov dword ptr [0x10452f1c], ecx */
  w32((uint32_t)(0x10452f1c), (ECX));
  /* 10429cb4 mov dword ptr [0x10452f20], 0 */
  w32((uint32_t)(0x10452f20), (0x0u));
  /* 10429cbe mov dword ptr [0x10452f24], 0 */
  w32((uint32_t)(0x10452f24), (0x0u));
  /* 10429cc8 mov dword ptr [0x10452f08], 0x10 */
  w32((uint32_t)(0x10452f08), (0x10u));
  /* 10429cd2 mov eax, 1 */
  EAX = (0x1u);
L_10429cd7:;
  /* 10429cd7 pop ebp */
  EBP = (pop32());
  /* 10429cd8 ret  */
  ESPCHK(0x10429c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ce0 @ 0x10429ce0 (85 bytes, 29 insns) */
void f_10429ce0(void) {
  FTRACE(0x10429ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10429ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 10429ce1 mov ebp, esp */
  EBP = (ESP);
  /* 10429ce3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10429ce6 mov eax, dword ptr [0x10452f24] */
  EAX = (r32((uint32_t)(0x10452f24)));
  /* 10429ceb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10429cee mov ecx, dword ptr [0x10452f28] */
  ECX = (r32((uint32_t)(0x10452f28)));
  /* 10429cf4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10429cf6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10429cf9 mov edx, dword ptr [0x10452f28] */
  EDX = (r32((uint32_t)(0x10452f28)));
  /* 10429cff mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10429d02:;
  /* 10429d02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10429d05 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429d08 jae 0x10429d2f */
  if (!C.cf) goto L_10429d2f;
  /* 10429d0a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10429d0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10429d10 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10429d13 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10429d16 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429d1d jae 0x10429d24 */
  if (!C.cf) goto L_10429d24;
  /* 10429d1f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10429d22 jmp 0x10429d31 */
  goto L_10429d31;
L_10429d24:;
  /* 10429d24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10429d27 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10429d2a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10429d2d jmp 0x10429d02 */
  goto L_10429d02;
L_10429d2f:;
  /* 10429d2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10429d31:;
  /* 10429d31 mov esp, ebp */
  ESP = (EBP);
  /* 10429d33 pop ebp */
  EBP = (pop32());
  /* 10429d34 ret  */
  ESPCHK(0x10429ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d40 @ 0x10429d40 (95 bytes, 33 insns) */
void f_10429d40(void) {
  FTRACE(0x10429d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10429d40 push ebp */
  push32((uint32_t)(EBP));
  /* 10429d41 mov ebp, esp */
  EBP = (ESP);
  /* 10429d43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10429d46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10429d49 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10429d4c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10429d4f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10429d52 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10429d55 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10429d58 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10429d5b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10429d60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10429d63 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10429d65 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10429d68 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10429d6b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10429d6d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10429d6f jne 0x10429d91 */
  if (!C.zf) goto L_10429d91;
  /* 10429d71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10429d74 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10429d77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10429d79 jne 0x10429d91 */
  if (!C.zf) goto L_10429d91;
  /* 10429d7b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10429d7e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 10429d84 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10429d86 je 0x10429d91 */
  if (C.zf) goto L_10429d91;
  /* 10429d88 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 10429d8f jmp 0x10429d98 */
  goto L_10429d98;
L_10429d91:;
  /* 10429d91 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10429d98:;
  /* 10429d98 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10429d9b mov esp, ebp */
  ESP = (EBP);
  /* 10429d9d pop ebp */
  EBP = (pop32());
  /* 10429d9e ret  */
  ESPCHK(0x10429d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10009da0 @ 0x10429da0 (1485 bytes, 453 insns) */
void f_10429da0(void) {
  FTRACE(0x10429da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10429da0 push ebp */
  push32((uint32_t)(EBP));
  /* 10429da1 mov ebp, esp */
  EBP = (ESP);
  /* 10429da3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10429da6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10429da9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10429dac mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 10429daf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10429db2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10429db5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10429db8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10429dbb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10429dbe shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10429dc1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10429dc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10429dc7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10429dcd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10429dd0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 10429dd7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10429dda mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10429ddd sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10429de0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10429de3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10429de6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10429de8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10429deb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10429dee mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10429df1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10429df4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 10429df7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10429dfa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10429dfc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10429dff mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10429e02 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10429e05 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10429e08 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10429e0b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10429e0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10429e10 jne 0x10429f38 */
  if (!C.zf) goto L_10429f38;
  /* 10429e16 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10429e19 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10429e1c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10429e1f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10429e22 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429e26 jbe 0x10429e2f */
  if ((C.cf||C.zf)) goto L_10429e2f;
  /* 10429e28 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10429e2f:;
  /* 10429e2f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10429e32 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10429e35 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10429e38 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429e3b jne 0x10429f11 */
  if (!C.zf) goto L_10429f11;
  /* 10429e41 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429e45 jae 0x10429ea6 */
  if (!C.cf) goto L_10429ea6;
  /* 10429e47 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10429e4c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10429e4f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10429e51 not eax */
  EAX = (~(EAX));
  /* 10429e53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10429e56 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10429e59 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10429e5d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10429e5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10429e62 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10429e65 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10429e69 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10429e6c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10429e6f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10429e72 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10429e75 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10429e78 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10429e7b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10429e7e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10429e81 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10429e84 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10429e88 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10429e8a jne 0x10429ea4 */
  if (!C.zf) goto L_10429ea4;
  /* 10429e8c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10429e91 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10429e94 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10429e96 not eax */
  EAX = (~(EAX));
  /* 10429e98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10429e9b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10429e9d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10429e9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10429ea2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10429ea4:;
  /* 10429ea4 jmp 0x10429f11 */
  goto L_10429f11;
L_10429ea6:;
  /* 10429ea6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10429ea9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10429eac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10429eb1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10429eb3 not edx */
  EDX = (~(EDX));
  /* 10429eb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10429eb8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10429ebb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10429ec2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10429ec4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10429ec7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10429eca mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10429ed1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10429ed4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10429ed7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10429eda sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10429edd mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10429ee0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10429ee3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10429ee6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10429ee9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10429eec movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10429ef0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10429ef2 jne 0x10429f11 */
  if (!C.zf) goto L_10429f11;
  /* 10429ef4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10429ef7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10429efa mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10429eff shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10429f01 not edx */
  EDX = (~(EDX));
  /* 10429f03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10429f06 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10429f09 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10429f0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10429f0e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10429f11:;
  /* 10429f11 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10429f14 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10429f17 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10429f1a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10429f1d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10429f20 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10429f23 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10429f26 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10429f29 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10429f2c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10429f2f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10429f32 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10429f35 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_10429f38:;
  /* 10429f38 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10429f3b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10429f3e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10429f41 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10429f44 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429f48 jbe 0x10429f51 */
  if ((C.cf||C.zf)) goto L_10429f51;
  /* 10429f4a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10429f51:;
  /* 10429f51 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10429f54 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10429f57 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10429f59 jne 0x1042a0b5 */
  if (!C.zf) goto L_1042a0b5;
  /* 10429f5f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10429f62 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10429f65 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10429f68 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10429f6b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10429f6e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10429f71 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10429f74 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429f78 jbe 0x10429f81 */
  if ((C.cf||C.zf)) goto L_10429f81;
  /* 10429f7a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_10429f81:;
  /* 10429f81 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10429f84 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10429f87 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10429f8a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10429f8d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10429f90 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10429f93 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10429f96 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429f9a jbe 0x10429fa3 */
  if ((C.cf||C.zf)) goto L_10429fa3;
  /* 10429f9c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10429fa3:;
  /* 10429fa3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10429fa6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429fa9 je 0x1042a0af */
  if (C.zf) goto L_1042a0af;
  /* 10429faf mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10429fb2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10429fb5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10429fb8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429fbb jne 0x1042a091 */
  if (!C.zf) goto L_1042a091;
  /* 10429fc1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429fc5 jae 0x1042a026 */
  if (!C.cf) goto L_1042a026;
  /* 10429fc7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10429fcc mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10429fcf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10429fd1 not edx */
  EDX = (~(EDX));
  /* 10429fd3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10429fd6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10429fd9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10429fdd and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10429fdf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10429fe2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10429fe5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10429fe9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10429fec add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10429fef mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10429ff2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10429ff5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10429ff8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10429ffb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10429ffe mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1042a001 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a004 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1042a008 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042a00a jne 0x1042a024 */
  if (!C.zf) goto L_1042a024;
  /* 1042a00c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1042a011 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042a014 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1042a016 not edx */
  EDX = (~(EDX));
  /* 1042a018 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042a01b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1042a01d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1042a01f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042a022 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1042a024:;
  /* 1042a024 jmp 0x1042a091 */
  goto L_1042a091;
L_1042a026:;
  /* 1042a026 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042a029 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042a02c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1042a031 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1042a033 not eax */
  EAX = (~(EAX));
  /* 1042a035 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042a038 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1042a03b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1042a042 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1042a044 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042a047 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1042a04a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1042a051 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1042a054 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a057 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1042a05a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1042a05d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1042a060 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a063 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1042a066 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1042a069 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a06c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1042a070 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042a072 jne 0x1042a091 */
  if (!C.zf) goto L_1042a091;
  /* 1042a074 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042a077 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042a07a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1042a07f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1042a081 not eax */
  EAX = (~(EAX));
  /* 1042a083 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042a086 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1042a089 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1042a08b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042a08e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1042a091:;
  /* 1042a091 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1042a094 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1042a097 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1042a09a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1042a09d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1042a0a0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1042a0a3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1042a0a6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1042a0a9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1042a0ac mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_1042a0af:;
  /* 1042a0af mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1042a0b2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_1042a0b5:;
  /* 1042a0b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042a0b8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1042a0bb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042a0bd jne 0x1042a0cb */
  if (!C.zf) goto L_1042a0cb;
  /* 1042a0bf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042a0c2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a0c5 je 0x1042a1db */
  if (C.zf) goto L_1042a1db;
L_1042a0cb:;
  /* 1042a0cb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1042a0ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042a0d1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1042a0d4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1042a0d7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1042a0da mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042a0dd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1042a0e0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1042a0e3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1042a0e6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042a0e9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1042a0ec mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042a0ef mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1042a0f2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1042a0f5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1042a0f8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1042a0fb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1042a0fe mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1042a101 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1042a104 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1042a107 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1042a10a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a10d jne 0x1042a1db */
  if (!C.zf) goto L_1042a1db;
  /* 1042a113 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a117 jae 0x1042a174 */
  if (!C.cf) goto L_1042a174;
  /* 1042a119 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1042a11c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a11f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1042a123 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1042a126 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a129 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1042a12c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1042a12f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1042a132 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a135 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1042a138 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042a13a jne 0x1042a152 */
  if (!C.zf) goto L_1042a152;
  /* 1042a13c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1042a141 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1042a144 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1042a146 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042a149 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1042a14b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1042a14d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042a150 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1042a152:;
  /* 1042a152 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1042a157 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1042a15a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1042a15c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042a15f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1042a162 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1042a166 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1042a168 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042a16b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1042a16e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1042a172 jmp 0x1042a1db */
  goto L_1042a1db;
L_1042a174:;
  /* 1042a174 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1042a177 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a17a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1042a17e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1042a181 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a184 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1042a187 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1042a18a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1042a18d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a190 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1042a193 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042a195 jne 0x1042a1b2 */
  if (!C.zf) goto L_1042a1b2;
  /* 1042a197 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1042a19a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042a19d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1042a1a2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1042a1a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042a1a7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1042a1aa or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1042a1ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042a1af mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1042a1b2:;
  /* 1042a1b2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1042a1b5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042a1b8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1042a1bd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1042a1bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042a1c2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1042a1c5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1042a1cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1042a1ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042a1d1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1042a1d4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1042a1db:;
  /* 1042a1db mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1042a1de mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042a1e1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1042a1e3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1042a1e6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a1e9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042a1ec mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1042a1ef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042a1f2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1042a1f4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042a1f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042a1fa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1042a1fc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042a1ff cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a202 jne 0x1042a369 */
  if (!C.zf) goto L_1042a369;
  /* 1042a208 cmp dword ptr [0x10452f20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10452f20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a20f je 0x1042a358 */
  if (C.zf) goto L_1042a358;
  /* 1042a215 mov eax, dword ptr [0x10452f18] */
  EAX = (r32((uint32_t)(0x10452f18)));
  /* 1042a21a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1042a21d mov ecx, dword ptr [0x10452f20] */
  ECX = (r32((uint32_t)(0x10452f20)));
  /* 1042a223 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1042a226 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a228 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1042a22b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1042a230 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1042a235 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042a238 push eax */
  push32((uint32_t)(EAX));
  /* 1042a239 call dword ptr [0x1045437c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045437c))), 0x1042a23fu);
  /* 1042a23f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1042a244 mov ecx, dword ptr [0x10452f18] */
  ECX = (r32((uint32_t)(0x10452f18)));
  /* 1042a24a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1042a24c mov eax, dword ptr [0x10452f20] */
  EAX = (r32((uint32_t)(0x10452f20)));
  /* 1042a251 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1042a254 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1042a256 mov edx, dword ptr [0x10452f20] */
  EDX = (r32((uint32_t)(0x10452f20)));
  /* 1042a25c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1042a25f mov eax, dword ptr [0x10452f20] */
  EAX = (r32((uint32_t)(0x10452f20)));
  /* 1042a264 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1042a267 mov edx, dword ptr [0x10452f18] */
  EDX = (r32((uint32_t)(0x10452f18)));
  /* 1042a26d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1042a278 mov eax, dword ptr [0x10452f20] */
  EAX = (r32((uint32_t)(0x10452f20)));
  /* 1042a27d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1042a280 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1042a283 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1042a286 mov eax, dword ptr [0x10452f20] */
  EAX = (r32((uint32_t)(0x10452f20)));
  /* 1042a28b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1042a28e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1042a291 mov edx, dword ptr [0x10452f20] */
  EDX = (r32((uint32_t)(0x10452f20)));
  /* 1042a297 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1042a29a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1042a29e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042a2a0 jne 0x1042a2b6 */
  if (!C.zf) goto L_1042a2b6;
  /* 1042a2a2 mov edx, dword ptr [0x10452f20] */
  EDX = (r32((uint32_t)(0x10452f20)));
  /* 1042a2a8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1042a2ab and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1042a2ad mov ecx, dword ptr [0x10452f20] */
  ECX = (r32((uint32_t)(0x10452f20)));
  /* 1042a2b3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1042a2b6:;
  /* 1042a2b6 mov edx, dword ptr [0x10452f20] */
  EDX = (r32((uint32_t)(0x10452f20)));
  /* 1042a2bc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a2c0 jne 0x1042a358 */
  if (!C.zf) goto L_1042a358;
  /* 1042a2c6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1042a2cb push 0 */
  push32((uint32_t)(0x0u));
  /* 1042a2cd mov eax, dword ptr [0x10452f20] */
  EAX = (r32((uint32_t)(0x10452f20)));
  /* 1042a2d2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1042a2d5 push ecx */
  push32((uint32_t)(ECX));
  /* 1042a2d6 call dword ptr [0x1045437c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045437c))), 0x1042a2dcu);
  /* 1042a2dc mov edx, dword ptr [0x10452f20] */
  EDX = (r32((uint32_t)(0x10452f20)));
  /* 1042a2e2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1042a2e5 push eax */
  push32((uint32_t)(EAX));
  /* 1042a2e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042a2e8 mov ecx, dword ptr [0x10452f2c] */
  ECX = (r32((uint32_t)(0x10452f2c)));
  /* 1042a2ee push ecx */
  push32((uint32_t)(ECX));
  /* 1042a2ef call dword ptr [0x10454378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454378))), 0x1042a2f5u);
  /* 1042a2f5 mov edx, dword ptr [0x10452f24] */
  EDX = (r32((uint32_t)(0x10452f24)));
  /* 1042a2fb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042a2fe mov eax, dword ptr [0x10452f28] */
  EAX = (r32((uint32_t)(0x10452f28)));
  /* 1042a303 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a305 mov ecx, dword ptr [0x10452f20] */
  ECX = (r32((uint32_t)(0x10452f20)));
  /* 1042a30b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a30e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042a310 push eax */
  push32((uint32_t)(EAX));
  /* 1042a311 mov edx, dword ptr [0x10452f20] */
  EDX = (r32((uint32_t)(0x10452f20)));
  /* 1042a317 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a31a push edx */
  push32((uint32_t)(EDX));
  /* 1042a31b mov eax, dword ptr [0x10452f20] */
  EAX = (r32((uint32_t)(0x10452f20)));
  /* 1042a320 push eax */
  push32((uint32_t)(EAX));
  /* 1042a321 call 0x1042d8d0 */
  push32(0x1042a326u); f_1042d8d0();
  /* 1042a326 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a329 mov ecx, dword ptr [0x10452f24] */
  ECX = (r32((uint32_t)(0x10452f24)));
  /* 1042a32f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042a332 mov dword ptr [0x10452f24], ecx */
  w32((uint32_t)(0x10452f24), (ECX));
  /* 1042a338 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042a33b cmp edx, dword ptr [0x10452f20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10452f20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a341 jbe 0x1042a34c */
  if ((C.cf||C.zf)) goto L_1042a34c;
  /* 1042a343 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042a346 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042a349 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1042a34c:;
  /* 1042a34c mov ecx, dword ptr [0x10452f28] */
  ECX = (r32((uint32_t)(0x10452f28)));
  /* 1042a352 mov dword ptr [0x10452f1c], ecx */
  w32((uint32_t)(0x10452f1c), (ECX));
L_1042a358:;
  /* 1042a358 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042a35b mov dword ptr [0x10452f20], edx */
  w32((uint32_t)(0x10452f20), (EDX));
  /* 1042a361 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042a364 mov dword ptr [0x10452f18], eax */
  w32((uint32_t)(0x10452f18), (EAX));
L_1042a369:;
  /* 1042a369 mov esp, ebp */
  ESP = (EBP);
  /* 1042a36b pop ebp */
  EBP = (pop32());
  /* 1042a36c ret  */
  ESPCHK(0x10429da0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a370 @ 0x1042a370 (1334 bytes, 427 insns) */
void f_1042a370(void) {
  FTRACE(0x1042a370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042a370 push ebp */
  push32((uint32_t)(EBP));
  /* 1042a371 mov ebp, esp */
  EBP = (ESP);
  /* 1042a373 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042a376 push esi */
  push32((uint32_t)(ESI));
  /* 1042a377 mov eax, dword ptr [0x10452f24] */
  EAX = (r32((uint32_t)(0x10452f24)));
  /* 1042a37c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042a37f mov ecx, dword ptr [0x10452f28] */
  ECX = (r32((uint32_t)(0x10452f28)));
  /* 1042a385 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a387 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1042a38a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042a38d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a390 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1042a393 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1042a396 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1042a399 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1042a39c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042a39f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1042a3a2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a3a6 jge 0x1042a3bc */
  if ((C.sf==C.of)) goto L_1042a3bc;
  /* 1042a3a8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1042a3ab mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042a3ae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1042a3b0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1042a3b3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1042a3ba jmp 0x1042a3d1 */
  goto L_1042a3d1;
L_1042a3bc:;
  /* 1042a3bc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1042a3c3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042a3c6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042a3c9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042a3cc shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1042a3ce mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_1042a3d1:;
  /* 1042a3d1 mov ecx, dword ptr [0x10452f1c] */
  ECX = (r32((uint32_t)(0x10452f1c)));
  /* 1042a3d7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1042a3da:;
  /* 1042a3da mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042a3dd cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a3e0 jae 0x1042a406 */
  if (!C.cf) goto L_1042a406;
  /* 1042a3e2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042a3e5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042a3e8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1042a3ea mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042a3ed mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1042a3f0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 1042a3f3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1042a3f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042a3f7 je 0x1042a3fb */
  if (C.zf) goto L_1042a3fb;
  /* 1042a3f9 jmp 0x1042a406 */
  goto L_1042a406;
L_1042a3fb:;
  /* 1042a3fb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042a3fe add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a401 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1042a404 jmp 0x1042a3da */
  goto L_1042a3da;
L_1042a406:;
  /* 1042a406 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042a409 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a40c jne 0x1042a4ed */
  if (!C.zf) goto L_1042a4ed;
  /* 1042a412 mov eax, dword ptr [0x10452f28] */
  EAX = (r32((uint32_t)(0x10452f28)));
  /* 1042a417 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1042a41a:;
  /* 1042a41a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042a41d cmp ecx, dword ptr [0x10452f1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10452f1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a423 jae 0x1042a449 */
  if (!C.cf) goto L_1042a449;
  /* 1042a425 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042a428 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042a42b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1042a42d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042a430 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1042a433 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 1042a436 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1042a438 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042a43a je 0x1042a43e */
  if (C.zf) goto L_1042a43e;
  /* 1042a43c jmp 0x1042a449 */
  goto L_1042a449;
L_1042a43e:;
  /* 1042a43e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042a441 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a444 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1042a447 jmp 0x1042a41a */
  goto L_1042a41a;
L_1042a449:;
  /* 1042a449 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042a44c cmp ecx, dword ptr [0x10452f1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10452f1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a452 jne 0x1042a4ed */
  if (!C.zf) goto L_1042a4ed;
L_1042a458:;
  /* 1042a458 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042a45b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a45e jae 0x1042a476 */
  if (!C.cf) goto L_1042a476;
  /* 1042a460 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042a463 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a467 je 0x1042a46b */
  if (C.zf) goto L_1042a46b;
  /* 1042a469 jmp 0x1042a476 */
  goto L_1042a476;
L_1042a46b:;
  /* 1042a46b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042a46e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a471 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1042a474 jmp 0x1042a458 */
  goto L_1042a458;
L_1042a476:;
  /* 1042a476 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042a479 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a47c jne 0x1042a4c7 */
  if (!C.zf) goto L_1042a4c7;
  /* 1042a47e mov eax, dword ptr [0x10452f28] */
  EAX = (r32((uint32_t)(0x10452f28)));
  /* 1042a483 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1042a486:;
  /* 1042a486 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042a489 cmp ecx, dword ptr [0x10452f1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10452f1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a48f jae 0x1042a4a7 */
  if (!C.cf) goto L_1042a4a7;
  /* 1042a491 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042a494 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a498 je 0x1042a49c */
  if (C.zf) goto L_1042a49c;
  /* 1042a49a jmp 0x1042a4a7 */
  goto L_1042a4a7;
L_1042a49c:;
  /* 1042a49c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042a49f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a4a2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1042a4a5 jmp 0x1042a486 */
  goto L_1042a486;
L_1042a4a7:;
  /* 1042a4a7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042a4aa cmp ecx, dword ptr [0x10452f1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10452f1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a4b0 jne 0x1042a4c7 */
  if (!C.zf) goto L_1042a4c7;
  /* 1042a4b2 call 0x1042a8b0 */
  push32(0x1042a4b7u); f_1042a8b0();
  /* 1042a4b7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1042a4ba cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a4be jne 0x1042a4c7 */
  if (!C.zf) goto L_1042a4c7;
  /* 1042a4c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042a4c2 jmp 0x1042a8a1 */
  goto L_1042a8a1;
L_1042a4c7:;
  /* 1042a4c7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042a4ca push edx */
  push32((uint32_t)(EDX));
  /* 1042a4cb call 0x1042a9c0 */
  push32(0x1042a4d0u); f_1042a9c0();
  /* 1042a4d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a4d3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042a4d6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1042a4d9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1042a4db mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042a4de mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1042a4e1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a4e4 jne 0x1042a4ed */
  if (!C.zf) goto L_1042a4ed;
  /* 1042a4e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042a4e8 jmp 0x1042a8a1 */
  goto L_1042a8a1;
L_1042a4ed:;
  /* 1042a4ed mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042a4f0 mov dword ptr [0x10452f1c], edx */
  w32((uint32_t)(0x10452f1c), (EDX));
  /* 1042a4f6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042a4f9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1042a4fc mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1042a4ff mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1042a502 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1042a504 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1042a507 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a50b je 0x1042a530 */
  if (C.zf) goto L_1042a530;
  /* 1042a50d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042a510 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1042a513 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042a516 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1042a51a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042a51d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1042a520 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1042a523 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1042a52a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1042a52c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042a52e jne 0x1042a565 */
  if (!C.zf) goto L_1042a565;
L_1042a530:;
  /* 1042a530 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_1042a537:;
  /* 1042a537 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042a53a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1042a53d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042a540 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1042a544 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042a547 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1042a54a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1042a54d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1042a554 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1042a556 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042a558 jne 0x1042a565 */
  if (!C.zf) goto L_1042a565;
  /* 1042a55a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042a55d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a560 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1042a563 jmp 0x1042a537 */
  goto L_1042a537;
L_1042a565:;
  /* 1042a565 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042a568 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042a56e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1042a571 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1042a578 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1042a57b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1042a582 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042a585 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1042a588 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042a58b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1042a58f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1042a592 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a596 jne 0x1042a5b2 */
  if (!C.zf) goto L_1042a5b2;
  /* 1042a598 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1042a59f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042a5a2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1042a5a5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1042a5a8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1042a5af mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_1042a5b2:;
  /* 1042a5b2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a5b6 jl 0x1042a5cb */
  if ((C.sf!=C.of)) goto L_1042a5cb;
  /* 1042a5b8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1042a5bb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1042a5bd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1042a5c0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042a5c3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a5c6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1042a5c9 jmp 0x1042a5b2 */
  goto L_1042a5b2;
L_1042a5cb:;
  /* 1042a5cb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042a5ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042a5d1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 1042a5d5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1042a5d8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042a5db mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1042a5dd sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042a5e0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1042a5e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042a5e6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1042a5e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042a5ec mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1042a5ef cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a5f3 jle 0x1042a5fc */
  if ((C.zf||C.sf!=C.of)) goto L_1042a5fc;
  /* 1042a5f5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1042a5fc:;
  /* 1042a5fc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042a5ff cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a602 je 0x1042a820 */
  if (C.zf) goto L_1042a820;
  /* 1042a608 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042a60b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042a60e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1042a611 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a614 jne 0x1042a6ea */
  if (!C.zf) goto L_1042a6ea;
  /* 1042a61a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a61e jge 0x1042a67f */
  if ((C.sf==C.of)) goto L_1042a67f;
  /* 1042a620 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1042a625 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042a628 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1042a62a not eax */
  EAX = (~(EAX));
  /* 1042a62c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042a62f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1042a632 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1042a636 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1042a638 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042a63b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1042a63e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1042a642 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1042a645 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a648 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1042a64b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1042a64e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1042a651 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a654 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1042a657 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1042a65a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a65d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1042a661 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042a663 jne 0x1042a67d */
  if (!C.zf) goto L_1042a67d;
  /* 1042a665 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1042a66a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042a66d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1042a66f not eax */
  EAX = (~(EAX));
  /* 1042a671 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042a674 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1042a676 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1042a678 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042a67b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1042a67d:;
  /* 1042a67d jmp 0x1042a6ea */
  goto L_1042a6ea;
L_1042a67f:;
  /* 1042a67f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042a682 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042a685 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1042a68a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1042a68c not edx */
  EDX = (~(EDX));
  /* 1042a68e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042a691 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1042a694 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1042a69b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1042a69d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042a6a0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1042a6a3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1042a6aa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1042a6ad add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a6b0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1042a6b3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1042a6b6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1042a6b9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a6bc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1042a6bf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1042a6c2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a6c5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1042a6c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042a6cb jne 0x1042a6ea */
  if (!C.zf) goto L_1042a6ea;
  /* 1042a6cd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042a6d0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042a6d3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1042a6d8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1042a6da not edx */
  EDX = (~(EDX));
  /* 1042a6dc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042a6df mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1042a6e2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1042a6e4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042a6e7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1042a6ea:;
  /* 1042a6ea mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042a6ed mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1042a6f0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042a6f3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1042a6f6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1042a6f9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042a6fc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1042a6ff mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042a702 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1042a705 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1042a708 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a70c je 0x1042a820 */
  if (C.zf) goto L_1042a820;
  /* 1042a712 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042a715 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042a718 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1042a71b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1042a71e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042a721 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042a724 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1042a727 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1042a72a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042a72d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042a730 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1042a733 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042a736 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042a739 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1042a73c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042a73f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1042a742 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042a745 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1042a748 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042a74b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042a74e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1042a751 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a754 jne 0x1042a820 */
  if (!C.zf) goto L_1042a820;
  /* 1042a75a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a75e jge 0x1042a7ba */
  if ((C.sf==C.of)) goto L_1042a7ba;
  /* 1042a760 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1042a763 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a766 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1042a76a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1042a76d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a770 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1042a773 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1042a775 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1042a778 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a77b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1042a77e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042a780 jne 0x1042a798 */
  if (!C.zf) goto L_1042a798;
  /* 1042a782 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1042a787 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042a78a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1042a78c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042a78f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1042a791 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1042a793 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042a796 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1042a798:;
  /* 1042a798 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1042a79d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042a7a0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1042a7a2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042a7a5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1042a7a8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1042a7ac or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1042a7ae mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042a7b1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1042a7b4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1042a7b8 jmp 0x1042a820 */
  goto L_1042a820;
L_1042a7ba:;
  /* 1042a7ba mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1042a7bd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a7c0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1042a7c4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1042a7c7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a7ca mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1042a7cd add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1042a7cf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1042a7d2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a7d5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1042a7d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042a7da jne 0x1042a7f7 */
  if (!C.zf) goto L_1042a7f7;
  /* 1042a7dc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042a7df sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042a7e2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1042a7e7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1042a7e9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042a7ec mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1042a7ef or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1042a7f1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042a7f4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1042a7f7:;
  /* 1042a7f7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042a7fa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042a7fd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1042a802 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1042a804 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042a807 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1042a80a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1042a811 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1042a813 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042a816 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1042a819 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1042a820:;
  /* 1042a820 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a824 je 0x1042a83a */
  if (C.zf) goto L_1042a83a;
  /* 1042a826 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042a829 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042a82c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1042a82e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042a831 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a834 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042a837 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1042a83a:;
  /* 1042a83a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042a83d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a840 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1042a843 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1042a846 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a849 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042a84c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1042a84e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1042a851 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a854 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042a857 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a85a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1042a85d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042a860 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1042a862 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042a865 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1042a867 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a86a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042a86d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1042a86f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042a871 jne 0x1042a893 */
  if (!C.zf) goto L_1042a893;
  /* 1042a873 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042a876 cmp eax, dword ptr [0x10452f20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10452f20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a87c jne 0x1042a893 */
  if (!C.zf) goto L_1042a893;
  /* 1042a87e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042a881 cmp ecx, dword ptr [0x10452f18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10452f18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a887 jne 0x1042a893 */
  if (!C.zf) goto L_1042a893;
  /* 1042a889 mov dword ptr [0x10452f20], 0 */
  w32((uint32_t)(0x10452f20), (0x0u));
L_1042a893:;
  /* 1042a893 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1042a896 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042a899 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1042a89b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042a89e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1042a8a1:;
  /* 1042a8a1 pop esi */
  ESI = (pop32());
  /* 1042a8a2 mov esp, ebp */
  ESP = (EBP);
  /* 1042a8a4 pop ebp */
  EBP = (pop32());
  /* 1042a8a5 ret  */
  ESPCHK(0x1042a370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a8b0 @ 0x1042a8b0 (271 bytes, 78 insns) */
void f_1042a8b0(void) {
  FTRACE(0x1042a8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042a8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1042a8b1 mov ebp, esp */
  EBP = (ESP);
  /* 1042a8b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1042a8b4 mov eax, dword ptr [0x10452f24] */
  EAX = (r32((uint32_t)(0x10452f24)));
  /* 1042a8b9 cmp eax, dword ptr [0x10452f08] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10452f08))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a8bf jne 0x1042a90b */
  if (!C.zf) goto L_1042a90b;
  /* 1042a8c1 mov ecx, dword ptr [0x10452f08] */
  ECX = (r32((uint32_t)(0x10452f08)));
  /* 1042a8c7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a8ca imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042a8cd push ecx */
  push32((uint32_t)(ECX));
  /* 1042a8ce mov edx, dword ptr [0x10452f28] */
  EDX = (r32((uint32_t)(0x10452f28)));
  /* 1042a8d4 push edx */
  push32((uint32_t)(EDX));
  /* 1042a8d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042a8d7 mov eax, dword ptr [0x10452f2c] */
  EAX = (r32((uint32_t)(0x10452f2c)));
  /* 1042a8dc push eax */
  push32((uint32_t)(EAX));
  /* 1042a8dd call dword ptr [0x10454340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454340))), 0x1042a8e3u);
  /* 1042a8e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1042a8e6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a8ea jne 0x1042a8f3 */
  if (!C.zf) goto L_1042a8f3;
  /* 1042a8ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042a8ee jmp 0x1042a9bb */
  goto L_1042a9bb;
L_1042a8f3:;
  /* 1042a8f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042a8f6 mov dword ptr [0x10452f28], ecx */
  w32((uint32_t)(0x10452f28), (ECX));
  /* 1042a8fc mov edx, dword ptr [0x10452f08] */
  EDX = (r32((uint32_t)(0x10452f08)));
  /* 1042a902 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a905 mov dword ptr [0x10452f08], edx */
  w32((uint32_t)(0x10452f08), (EDX));
L_1042a90b:;
  /* 1042a90b mov eax, dword ptr [0x10452f24] */
  EAX = (r32((uint32_t)(0x10452f24)));
  /* 1042a910 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042a913 mov ecx, dword ptr [0x10452f28] */
  ECX = (r32((uint32_t)(0x10452f28)));
  /* 1042a919 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a91b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1042a91e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1042a923 push 8 */
  push32((uint32_t)(0x8u));
  /* 1042a925 mov edx, dword ptr [0x10452f2c] */
  EDX = (r32((uint32_t)(0x10452f2c)));
  /* 1042a92b push edx */
  push32((uint32_t)(EDX));
  /* 1042a92c call dword ptr [0x104542e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542e4))), 0x1042a932u);
  /* 1042a932 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042a935 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 1042a938 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042a93b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a93f jne 0x1042a945 */
  if (!C.zf) goto L_1042a945;
  /* 1042a941 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042a943 jmp 0x1042a9bb */
  goto L_1042a9bb;
L_1042a945:;
  /* 1042a945 push 4 */
  push32((uint32_t)(0x4u));
  /* 1042a947 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1042a94c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1042a951 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042a953 call dword ptr [0x104542dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542dc))), 0x1042a959u);
  /* 1042a959 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042a95c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1042a95f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042a962 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a966 jne 0x1042a982 */
  if (!C.zf) goto L_1042a982;
  /* 1042a968 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042a96b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1042a96e push ecx */
  push32((uint32_t)(ECX));
  /* 1042a96f push 0 */
  push32((uint32_t)(0x0u));
  /* 1042a971 mov edx, dword ptr [0x10452f2c] */
  EDX = (r32((uint32_t)(0x10452f2c)));
  /* 1042a977 push edx */
  push32((uint32_t)(EDX));
  /* 1042a978 call dword ptr [0x10454378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454378))), 0x1042a97eu);
  /* 1042a97e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042a980 jmp 0x1042a9bb */
  goto L_1042a9bb;
L_1042a982:;
  /* 1042a982 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042a985 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1042a98b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042a98e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1042a995 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042a998 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1042a99f mov eax, dword ptr [0x10452f24] */
  EAX = (r32((uint32_t)(0x10452f24)));
  /* 1042a9a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a9a7 mov dword ptr [0x10452f24], eax */
  w32((uint32_t)(0x10452f24), (EAX));
  /* 1042a9ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042a9af mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1042a9b2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 1042a9b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1042a9bb:;
  /* 1042a9bb mov esp, ebp */
  ESP = (EBP);
  /* 1042a9bd pop ebp */
  EBP = (pop32());
  /* 1042a9be ret  */
  ESPCHK(0x1042a8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a9c0 @ 0x1042a9c0 (494 bytes, 149 insns) */
void f_1042a9c0(void) {
  FTRACE(0x1042a9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042a9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1042a9c1 mov ebp, esp */
  EBP = (ESP);
  /* 1042a9c3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042a9c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042a9c9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1042a9cc mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1042a9cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042a9d2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1042a9d5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1042a9d8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1042a9df:;
  /* 1042a9df cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042a9e3 jl 0x1042a9f8 */
  if ((C.sf!=C.of)) goto L_1042a9f8;
  /* 1042a9e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042a9e8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1042a9ea mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1042a9ed mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1042a9f0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042a9f3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1042a9f6 jmp 0x1042a9df */
  goto L_1042a9df;
L_1042a9f8:;
  /* 1042a9f8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1042a9fb imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042aa01 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042aa04 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1042aa0b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1042aa0e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1042aa15 jmp 0x1042aa20 */
  goto L_1042aa20;
L_1042aa17:;
  /* 1042aa17 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042aa1a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042aa1d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1042aa20:;
  /* 1042aa20 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042aa24 jge 0x1042aa46 */
  if ((C.sf==C.of)) goto L_1042aa46;
  /* 1042aa26 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042aa29 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042aa2c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1042aa2f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1042aa32 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042aa35 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042aa38 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1042aa3b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042aa3e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042aa41 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1042aa44 jmp 0x1042aa17 */
  goto L_1042aa17;
L_1042aa46:;
  /* 1042aa46 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1042aa49 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1042aa4c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042aa4f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1042aa52 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042aa54 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1042aa57 push 4 */
  push32((uint32_t)(0x4u));
  /* 1042aa59 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1042aa5e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1042aa63 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042aa66 push edx */
  push32((uint32_t)(EDX));
  /* 1042aa67 call dword ptr [0x104542dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542dc))), 0x1042aa6du);
  /* 1042aa6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042aa6f jne 0x1042aa79 */
  if (!C.zf) goto L_1042aa79;
  /* 1042aa71 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042aa74 jmp 0x1042abaa */
  goto L_1042abaa;
L_1042aa79:;
  /* 1042aa79 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042aa7c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042aa81 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1042aa84 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042aa87 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1042aa8a jmp 0x1042aa98 */
  goto L_1042aa98;
L_1042aa8c:;
  /* 1042aa8c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042aa8f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042aa95 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1042aa98:;
  /* 1042aa98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042aa9b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042aa9e ja 0x1042aafd */
  if ((!C.cf&&!C.zf)) goto L_1042aafd;
  /* 1042aaa0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042aaa3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1042aaaa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042aaad mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 1042aab7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042aaba add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042aabd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1042aac0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042aac3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1042aac9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042aacc add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042aad2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042aad5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1042aad8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042aadb sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042aae1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042aae4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1042aae7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042aaea add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042aaef mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1042aaf2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042aaf5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1042aafb jmp 0x1042aa8c */
  goto L_1042aa8c;
L_1042aafd:;
  /* 1042aafd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042ab00 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ab06 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1042ab09 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042ab0c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ab0f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042ab12 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1042ab15 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042ab18 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1042ab1b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1042ab1e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042ab21 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042ab24 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1042ab27 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1042ab2a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ab2d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042ab30 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1042ab33 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042ab36 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1042ab39 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1042ab3c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042ab3f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042ab42 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1042ab45 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1042ab48 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042ab4b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 1042ab53 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1042ab56 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042ab59 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 1042ab64 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042ab67 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1042ab6b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042ab6e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 1042ab71 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1042ab74 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042ab77 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1042ab7a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042ab7c jne 0x1042ab8d */
  if (!C.zf) goto L_1042ab8d;
  /* 1042ab7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042ab81 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1042ab84 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1042ab87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042ab8a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1042ab8d:;
  /* 1042ab8d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1042ab92 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1042ab95 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1042ab97 not edx */
  EDX = (~(EDX));
  /* 1042ab99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042ab9c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1042ab9f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1042aba1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042aba4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1042aba7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1042abaa:;
  /* 1042abaa mov esp, ebp */
  ESP = (EBP);
  /* 1042abac pop ebp */
  EBP = (pop32());
  /* 1042abad ret  */
  ESPCHK(0x1042a9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000abb0 @ 0x1042abb0 (1515 bytes, 489 insns) */
void f_1042abb0(void) {
  FTRACE(0x1042abb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042abb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1042abb1 mov ebp, esp */
  EBP = (ESP);
  /* 1042abb3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042abb6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1042abb9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042abbc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1042abbe mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1042abc1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042abc4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1042abc7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1042abca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042abcd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042abd0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042abd3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1042abd6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042abd9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1042abdc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1042abdf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042abe2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042abe8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042abeb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1042abf2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1042abf5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042abf8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042abfb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1042abfe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042ac01 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1042ac03 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042ac06 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1042ac09 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042ac0c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ac0f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1042ac12 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042ac15 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1042ac17 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1042ac1a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1042ac1d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042ac20 jle 0x1042aed6 */
  if ((C.zf||C.sf!=C.of)) goto L_1042aed6;
  /* 1042ac26 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042ac29 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1042ac2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042ac2e jne 0x1042ac3b */
  if (!C.zf) goto L_1042ac3b;
  /* 1042ac30 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1042ac33 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ac36 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042ac39 jle 0x1042ac42 */
  if ((C.zf||C.sf!=C.of)) goto L_1042ac42;
L_1042ac3b:;
  /* 1042ac3b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042ac3d jmp 0x1042b197 */
  goto L_1042b197;
L_1042ac42:;
  /* 1042ac42 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042ac45 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1042ac48 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042ac4b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1042ac4e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042ac52 jbe 0x1042ac5b */
  if ((C.cf||C.zf)) goto L_1042ac5b;
  /* 1042ac54 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1042ac5b:;
  /* 1042ac5b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042ac5e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042ac61 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1042ac64 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042ac67 jne 0x1042ad3d */
  if (!C.zf) goto L_1042ad3d;
  /* 1042ac6d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042ac71 jae 0x1042acd2 */
  if (!C.cf) goto L_1042acd2;
  /* 1042ac73 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1042ac78 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042ac7b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1042ac7d not edx */
  EDX = (~(EDX));
  /* 1042ac7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042ac82 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042ac85 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1042ac89 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1042ac8b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042ac8e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042ac91 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1042ac95 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042ac98 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ac9b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1042ac9e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1042aca1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042aca4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042aca7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1042acaa mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042acad add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042acb0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1042acb4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042acb6 jne 0x1042acd0 */
  if (!C.zf) goto L_1042acd0;
  /* 1042acb8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1042acbd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042acc0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1042acc2 not edx */
  EDX = (~(EDX));
  /* 1042acc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042acc7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1042acc9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1042accb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042acce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1042acd0:;
  /* 1042acd0 jmp 0x1042ad3d */
  goto L_1042ad3d;
L_1042acd2:;
  /* 1042acd2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042acd5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042acd8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1042acdd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1042acdf not eax */
  EAX = (~(EAX));
  /* 1042ace1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042ace4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042ace7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1042acee and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1042acf0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042acf3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042acf6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1042acfd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042ad00 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ad03 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1042ad06 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1042ad09 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042ad0c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ad0f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1042ad12 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042ad15 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ad18 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1042ad1c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042ad1e jne 0x1042ad3d */
  if (!C.zf) goto L_1042ad3d;
  /* 1042ad20 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042ad23 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042ad26 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1042ad2b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1042ad2d not eax */
  EAX = (~(EAX));
  /* 1042ad2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042ad32 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1042ad35 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1042ad37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042ad3a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1042ad3d:;
  /* 1042ad3d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042ad40 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1042ad43 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042ad46 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1042ad49 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1042ad4c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042ad4f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1042ad52 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042ad55 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1042ad58 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1042ad5b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1042ad5e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ad61 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042ad64 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1042ad67 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042ad6b jle 0x1042aeb7 */
  if ((C.zf||C.sf!=C.of)) goto L_1042aeb7;
  /* 1042ad71 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042ad74 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ad77 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1042ad7a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042ad7d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1042ad80 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042ad83 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1042ad86 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042ad8a jbe 0x1042ad93 */
  if ((C.cf||C.zf)) goto L_1042ad93;
  /* 1042ad8c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1042ad93:;
  /* 1042ad93 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042ad96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042ad99 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1042ad9c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1042ad9f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042ada2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042ada5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1042ada8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1042adab mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042adae mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042adb1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1042adb4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042adb7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042adba mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1042adbd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042adc0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1042adc3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042adc6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1042adc9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042adcc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042adcf mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1042add2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042add5 jne 0x1042aea3 */
  if (!C.zf) goto L_1042aea3;
  /* 1042addb cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042addf jae 0x1042ae3c */
  if (!C.cf) goto L_1042ae3c;
  /* 1042ade1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042ade4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ade7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1042adeb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042adee add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042adf1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1042adf4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1042adf7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042adfa add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042adfd mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1042ae00 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042ae02 jne 0x1042ae1a */
  if (!C.zf) goto L_1042ae1a;
  /* 1042ae04 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1042ae09 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042ae0c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1042ae0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042ae11 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1042ae13 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1042ae15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042ae18 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1042ae1a:;
  /* 1042ae1a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1042ae1f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042ae22 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1042ae24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042ae27 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042ae2a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1042ae2e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1042ae30 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042ae33 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042ae36 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1042ae3a jmp 0x1042aea3 */
  goto L_1042aea3;
L_1042ae3c:;
  /* 1042ae3c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042ae3f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ae42 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1042ae46 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042ae49 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ae4c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1042ae4f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1042ae52 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042ae55 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ae58 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1042ae5b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042ae5d jne 0x1042ae7a */
  if (!C.zf) goto L_1042ae7a;
  /* 1042ae5f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042ae62 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042ae65 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1042ae6a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1042ae6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042ae6f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1042ae72 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1042ae74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042ae77 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1042ae7a:;
  /* 1042ae7a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042ae7d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042ae80 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1042ae85 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1042ae87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042ae8a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042ae8d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1042ae94 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1042ae96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042ae99 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042ae9c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1042aea3:;
  /* 1042aea3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042aea6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042aea9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1042aeab mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042aeae add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042aeb1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042aeb4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_1042aeb7:;
  /* 1042aeb7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1042aeba add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042aebd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042aec0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1042aec2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1042aec5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042aec8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042aecb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042aece mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1042aed1 jmp 0x1042b192 */
  goto L_1042b192;
L_1042aed6:;
  /* 1042aed6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1042aed9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042aedc jge 0x1042b192 */
  if ((C.sf==C.of)) goto L_1042b192;
  /* 1042aee2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1042aee5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042aee8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042aeeb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1042aeed mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1042aef0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042aef3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042aef6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042aef9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1042aefc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042aeff add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042af02 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1042af05 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1042af08 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042af0b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1042af0e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1042af11 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1042af14 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042af17 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1042af1a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042af1e jbe 0x1042af27 */
  if ((C.cf||C.zf)) goto L_1042af27;
  /* 1042af20 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1042af27:;
  /* 1042af27 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042af2a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1042af2d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042af2f jne 0x1042b070 */
  if (!C.zf) goto L_1042b070;
  /* 1042af35 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042af38 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1042af3b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042af3e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1042af41 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042af45 jbe 0x1042af4e */
  if ((C.cf||C.zf)) goto L_1042af4e;
  /* 1042af47 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1042af4e:;
  /* 1042af4e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042af51 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042af54 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1042af57 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042af5a jne 0x1042b030 */
  if (!C.zf) goto L_1042b030;
  /* 1042af60 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042af64 jae 0x1042afc5 */
  if (!C.cf) goto L_1042afc5;
  /* 1042af66 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1042af6b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042af6e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1042af70 not edx */
  EDX = (~(EDX));
  /* 1042af72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042af75 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042af78 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1042af7c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1042af7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042af81 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042af84 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1042af88 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042af8b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042af8e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1042af91 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1042af94 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042af97 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042af9a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1042af9d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042afa0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042afa3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1042afa7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042afa9 jne 0x1042afc3 */
  if (!C.zf) goto L_1042afc3;
  /* 1042afab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1042afb0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042afb3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1042afb5 not edx */
  EDX = (~(EDX));
  /* 1042afb7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042afba mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1042afbc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1042afbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042afc1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1042afc3:;
  /* 1042afc3 jmp 0x1042b030 */
  goto L_1042b030;
L_1042afc5:;
  /* 1042afc5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042afc8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042afcb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1042afd0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1042afd2 not eax */
  EAX = (~(EAX));
  /* 1042afd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042afd7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042afda mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1042afe1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1042afe3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042afe6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042afe9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1042aff0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042aff3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042aff6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1042aff9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1042affc mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042afff add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b002 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1042b005 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042b008 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b00b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1042b00f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042b011 jne 0x1042b030 */
  if (!C.zf) goto L_1042b030;
  /* 1042b013 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042b016 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042b019 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1042b01e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1042b020 not eax */
  EAX = (~(EAX));
  /* 1042b022 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042b025 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1042b028 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1042b02a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042b02d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1042b030:;
  /* 1042b030 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042b033 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1042b036 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042b039 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1042b03c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1042b03f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042b042 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1042b045 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042b048 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1042b04b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1042b04e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1042b051 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b054 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1042b057 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1042b05a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1042b05d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042b060 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1042b063 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b067 jbe 0x1042b070 */
  if ((C.cf||C.zf)) goto L_1042b070;
  /* 1042b069 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1042b070:;
  /* 1042b070 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042b073 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042b076 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1042b079 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1042b07c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042b07f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042b082 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1042b085 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1042b088 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042b08b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042b08e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1042b091 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042b094 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042b097 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1042b09a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042b09d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1042b0a0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042b0a3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1042b0a6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042b0a9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042b0ac mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1042b0af cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b0b2 jne 0x1042b17e */
  if (!C.zf) goto L_1042b17e;
  /* 1042b0b8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b0bc jae 0x1042b118 */
  if (!C.cf) goto L_1042b118;
  /* 1042b0be mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042b0c1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b0c4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1042b0c8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042b0cb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b0ce mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1042b0d1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1042b0d3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042b0d6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b0d9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1042b0dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042b0de jne 0x1042b0f6 */
  if (!C.zf) goto L_1042b0f6;
  /* 1042b0e0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1042b0e5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042b0e8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1042b0ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042b0ed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1042b0ef or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1042b0f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042b0f4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1042b0f6:;
  /* 1042b0f6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1042b0fb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042b0fe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1042b100 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042b103 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042b106 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1042b10a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1042b10c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042b10f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042b112 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1042b116 jmp 0x1042b17e */
  goto L_1042b17e;
L_1042b118:;
  /* 1042b118 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042b11b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b11e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1042b122 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042b125 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b128 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1042b12b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1042b12d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042b130 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b133 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1042b136 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042b138 jne 0x1042b155 */
  if (!C.zf) goto L_1042b155;
  /* 1042b13a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042b13d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042b140 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1042b145 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1042b147 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042b14a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1042b14d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1042b14f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042b152 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1042b155:;
  /* 1042b155 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042b158 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042b15b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1042b160 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1042b162 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042b165 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042b168 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1042b16f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1042b171 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042b174 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042b177 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1042b17e:;
  /* 1042b17e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042b181 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1042b184 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1042b186 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042b189 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b18c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1042b18f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1042b192:;
  /* 1042b192 mov eax, 1 */
  EAX = (0x1u);
L_1042b197:;
  /* 1042b197 mov esp, ebp */
  ESP = (EBP);
  /* 1042b199 pop ebp */
  EBP = (pop32());
  /* 1042b19a ret  */
  ESPCHK(0x1042abb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1a0 @ 0x1042b1a0 (304 bytes, 79 insns) */
void f_1042b1a0(void) {
  FTRACE(0x1042b1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042b1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1042b1a1 mov ebp, esp */
  EBP = (ESP);
  /* 1042b1a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1042b1a4 cmp dword ptr [0x10452f20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10452f20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b1ab je 0x1042b2cc */
  if (C.zf) goto L_1042b2cc;
  /* 1042b1b1 mov eax, dword ptr [0x10452f18] */
  EAX = (r32((uint32_t)(0x10452f18)));
  /* 1042b1b6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1042b1b9 mov ecx, dword ptr [0x10452f20] */
  ECX = (r32((uint32_t)(0x10452f20)));
  /* 1042b1bf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1042b1c2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b1c4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1042b1c7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1042b1cc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1042b1d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042b1d4 push eax */
  push32((uint32_t)(EAX));
  /* 1042b1d5 call dword ptr [0x1045437c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045437c))), 0x1042b1dbu);
  /* 1042b1db mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1042b1e0 mov ecx, dword ptr [0x10452f18] */
  ECX = (r32((uint32_t)(0x10452f18)));
  /* 1042b1e6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1042b1e8 mov eax, dword ptr [0x10452f20] */
  EAX = (r32((uint32_t)(0x10452f20)));
  /* 1042b1ed mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1042b1f0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1042b1f2 mov edx, dword ptr [0x10452f20] */
  EDX = (r32((uint32_t)(0x10452f20)));
  /* 1042b1f8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1042b1fb mov eax, dword ptr [0x10452f20] */
  EAX = (r32((uint32_t)(0x10452f20)));
  /* 1042b200 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1042b203 mov edx, dword ptr [0x10452f18] */
  EDX = (r32((uint32_t)(0x10452f18)));
  /* 1042b209 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1042b214 mov eax, dword ptr [0x10452f20] */
  EAX = (r32((uint32_t)(0x10452f20)));
  /* 1042b219 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1042b21c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1042b21f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1042b222 mov eax, dword ptr [0x10452f20] */
  EAX = (r32((uint32_t)(0x10452f20)));
  /* 1042b227 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1042b22a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1042b22d mov edx, dword ptr [0x10452f20] */
  EDX = (r32((uint32_t)(0x10452f20)));
  /* 1042b233 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1042b236 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1042b23a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042b23c jne 0x1042b252 */
  if (!C.zf) goto L_1042b252;
  /* 1042b23e mov edx, dword ptr [0x10452f20] */
  EDX = (r32((uint32_t)(0x10452f20)));
  /* 1042b244 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1042b247 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1042b249 mov ecx, dword ptr [0x10452f20] */
  ECX = (r32((uint32_t)(0x10452f20)));
  /* 1042b24f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1042b252:;
  /* 1042b252 mov edx, dword ptr [0x10452f20] */
  EDX = (r32((uint32_t)(0x10452f20)));
  /* 1042b258 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b25c jne 0x1042b2c2 */
  if (!C.zf) goto L_1042b2c2;
  /* 1042b25e cmp dword ptr [0x10452f24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10452f24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b265 jle 0x1042b2c2 */
  if ((C.zf||C.sf!=C.of)) goto L_1042b2c2;
  /* 1042b267 mov eax, dword ptr [0x10452f20] */
  EAX = (r32((uint32_t)(0x10452f20)));
  /* 1042b26c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1042b26f push ecx */
  push32((uint32_t)(ECX));
  /* 1042b270 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042b272 mov edx, dword ptr [0x10452f2c] */
  EDX = (r32((uint32_t)(0x10452f2c)));
  /* 1042b278 push edx */
  push32((uint32_t)(EDX));
  /* 1042b279 call dword ptr [0x10454378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454378))), 0x1042b27fu);
  /* 1042b27f mov eax, dword ptr [0x10452f24] */
  EAX = (r32((uint32_t)(0x10452f24)));
  /* 1042b284 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042b287 mov ecx, dword ptr [0x10452f28] */
  ECX = (r32((uint32_t)(0x10452f28)));
  /* 1042b28d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b28f mov edx, dword ptr [0x10452f20] */
  EDX = (r32((uint32_t)(0x10452f20)));
  /* 1042b295 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b298 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042b29a push ecx */
  push32((uint32_t)(ECX));
  /* 1042b29b mov eax, dword ptr [0x10452f20] */
  EAX = (r32((uint32_t)(0x10452f20)));
  /* 1042b2a0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b2a3 push eax */
  push32((uint32_t)(EAX));
  /* 1042b2a4 mov ecx, dword ptr [0x10452f20] */
  ECX = (r32((uint32_t)(0x10452f20)));
  /* 1042b2aa push ecx */
  push32((uint32_t)(ECX));
  /* 1042b2ab call 0x1042d8d0 */
  push32(0x1042b2b0u); f_1042d8d0();
  /* 1042b2b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b2b3 mov edx, dword ptr [0x10452f24] */
  EDX = (r32((uint32_t)(0x10452f24)));
  /* 1042b2b9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042b2bc mov dword ptr [0x10452f24], edx */
  w32((uint32_t)(0x10452f24), (EDX));
L_1042b2c2:;
  /* 1042b2c2 mov dword ptr [0x10452f20], 0 */
  w32((uint32_t)(0x10452f20), (0x0u));
L_1042b2cc:;
  /* 1042b2cc mov esp, ebp */
  ESP = (EBP);
  /* 1042b2ce pop ebp */
  EBP = (pop32());
  /* 1042b2cf ret  */
  ESPCHK(0x1042b1a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2d0 @ 0x1042b2d0 (1565 bytes, 343 insns) */
void f_1042b2d0(void) {
  FTRACE(0x1042b2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042b2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1042b2d1 mov ebp, esp */
  EBP = (ESP);
  /* 1042b2d3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042b2d9 mov eax, dword ptr [0x10452f24] */
  EAX = (r32((uint32_t)(0x10452f24)));
  /* 1042b2de imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042b2e1 push eax */
  push32((uint32_t)(EAX));
  /* 1042b2e2 mov ecx, dword ptr [0x10452f28] */
  ECX = (r32((uint32_t)(0x10452f28)));
  /* 1042b2e8 push ecx */
  push32((uint32_t)(ECX));
  /* 1042b2e9 call dword ptr [0x10454350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454350))), 0x1042b2efu);
  /* 1042b2ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042b2f1 je 0x1042b2fb */
  if (C.zf) goto L_1042b2fb;
  /* 1042b2f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042b2f6 jmp 0x1042b8e9 */
  goto L_1042b8e9;
L_1042b2fb:;
  /* 1042b2fb mov edx, dword ptr [0x10452f28] */
  EDX = (r32((uint32_t)(0x10452f28)));
  /* 1042b301 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1042b307 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1042b311 jmp 0x1042b322 */
  goto L_1042b322;
L_1042b313:;
  /* 1042b313 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1042b319 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b31c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1042b322:;
  /* 1042b322 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1042b328 cmp ecx, dword ptr [0x10452f24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10452f24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b32e jge 0x1042b8e7 */
  if ((C.sf==C.of)) goto L_1042b8e7;
  /* 1042b334 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1042b33a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1042b33d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1042b343 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1042b348 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1042b34e push ecx */
  push32((uint32_t)(ECX));
  /* 1042b34f call dword ptr [0x10454350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454350))), 0x1042b355u);
  /* 1042b355 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042b357 je 0x1042b363 */
  if (C.zf) goto L_1042b363;
  /* 1042b359 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1042b35e jmp 0x1042b8e9 */
  goto L_1042b8e9;
L_1042b363:;
  /* 1042b363 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1042b369 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1042b36c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1042b372 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1042b378 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b37e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1042b381 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1042b387 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1042b38a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1042b38d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1042b397 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1042b3a1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1042b3a8 jmp 0x1042b3b3 */
  goto L_1042b3b3;
L_1042b3aa:;
  /* 1042b3aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042b3ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b3b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1042b3b3:;
  /* 1042b3b3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b3b7 jge 0x1042b8ab */
  if ((C.sf==C.of)) goto L_1042b8ab;
  /* 1042b3bd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1042b3c7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1042b3d1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1042b3db mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 1042b3e5 jmp 0x1042b3f6 */
  goto L_1042b3f6;
L_1042b3e7:;
  /* 1042b3e7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1042b3ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b3f0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_1042b3f6:;
  /* 1042b3f6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b3fd jge 0x1042b412 */
  if ((C.sf==C.of)) goto L_1042b412;
  /* 1042b3ff mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1042b405 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 1042b410 jmp 0x1042b3e7 */
  goto L_1042b3e7;
L_1042b412:;
  /* 1042b412 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b416 jl 0x1042b84d */
  if ((C.sf!=C.of)) goto L_1042b84d;
  /* 1042b41c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1042b421 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 1042b427 push ecx */
  push32((uint32_t)(ECX));
  /* 1042b428 call dword ptr [0x10454350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454350))), 0x1042b42eu);
  /* 1042b42e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042b430 je 0x1042b43c */
  if (C.zf) goto L_1042b43c;
  /* 1042b432 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 1042b437 jmp 0x1042b8e9 */
  goto L_1042b8e9;
L_1042b43c:;
  /* 1042b43c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1042b442 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1042b445 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1042b44f jmp 0x1042b460 */
  goto L_1042b460;
L_1042b451:;
  /* 1042b451 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1042b457 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b45a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1042b460:;
  /* 1042b460 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b467 jge 0x1042b5e4 */
  if ((C.sf==C.of)) goto L_1042b5e4;
  /* 1042b46d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042b470 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b473 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1042b479 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1042b47f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b485 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1042b48b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1042b491 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b495 jne 0x1042b4a2 */
  if (!C.zf) goto L_1042b4a2;
  /* 1042b497 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1042b49d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b4a0 je 0x1042b4ac */
  if (C.zf) goto L_1042b4ac;
L_1042b4a2:;
  /* 1042b4a2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1042b4a7 jmp 0x1042b8e9 */
  goto L_1042b8e9;
L_1042b4ac:;
  /* 1042b4ac mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1042b4b2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1042b4b4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1042b4ba mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1042b4c0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1042b4c6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1042b4cc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1042b4cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042b4d1 je 0x1042b509 */
  if (C.zf) goto L_1042b509;
  /* 1042b4d3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1042b4d9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042b4dc mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1042b4e2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b4ec jle 0x1042b4f8 */
  if ((C.zf||C.sf!=C.of)) goto L_1042b4f8;
  /* 1042b4ee mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1042b4f3 jmp 0x1042b8e9 */
  goto L_1042b8e9;
L_1042b4f8:;
  /* 1042b4f8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1042b4fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b501 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1042b507 jmp 0x1042b54b */
  goto L_1042b54b;
L_1042b509:;
  /* 1042b509 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1042b50f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1042b512 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042b515 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1042b51b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b522 jle 0x1042b52e */
  if ((C.zf||C.sf!=C.of)) goto L_1042b52e;
  /* 1042b524 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1042b52e:;
  /* 1042b52e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1042b534 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1042b53b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b53e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1042b544 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1042b54b:;
  /* 1042b54b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b552 jl 0x1042b56d */
  if ((C.sf!=C.of)) goto L_1042b56d;
  /* 1042b554 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1042b55a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1042b55d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042b55f jne 0x1042b56d */
  if (!C.zf) goto L_1042b56d;
  /* 1042b561 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b56b jle 0x1042b577 */
  if ((C.zf||C.sf!=C.of)) goto L_1042b577;
L_1042b56d:;
  /* 1042b56d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1042b572 jmp 0x1042b8e9 */
  goto L_1042b8e9;
L_1042b577:;
  /* 1042b577 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1042b57d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b583 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1042b586 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b58c je 0x1042b598 */
  if (C.zf) goto L_1042b598;
  /* 1042b58e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1042b593 jmp 0x1042b8e9 */
  goto L_1042b8e9;
L_1042b598:;
  /* 1042b598 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1042b59e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b5a4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1042b5aa mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1042b5b0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b5b6 jb 0x1042b4ac */
  if (C.cf) goto L_1042b4ac;
  /* 1042b5bc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1042b5c2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b5c8 je 0x1042b5d4 */
  if (C.zf) goto L_1042b5d4;
  /* 1042b5ca mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1042b5cf jmp 0x1042b8e9 */
  goto L_1042b8e9;
L_1042b5d4:;
  /* 1042b5d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042b5d7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b5dc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1042b5df jmp 0x1042b451 */
  goto L_1042b451;
L_1042b5e4:;
  /* 1042b5e4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042b5e7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1042b5e9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b5ef je 0x1042b5fb */
  if (C.zf) goto L_1042b5fb;
  /* 1042b5f1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1042b5f6 jmp 0x1042b8e9 */
  goto L_1042b8e9;
L_1042b5fb:;
  /* 1042b5fb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042b5fe mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1042b604 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1042b60b jmp 0x1042b616 */
  goto L_1042b616;
L_1042b60d:;
  /* 1042b60d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042b610 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b613 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1042b616:;
  /* 1042b616 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b61a jge 0x1042b84d */
  if ((C.sf==C.of)) goto L_1042b84d;
  /* 1042b620 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1042b62a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1042b630 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1042b636:;
  /* 1042b636 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1042b63c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1042b63f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1042b645 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1042b64b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b651 je 0x1042b77a */
  if (C.zf) goto L_1042b77a;
  /* 1042b657 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042b65a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1042b660 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b667 je 0x1042b77a */
  if (C.zf) goto L_1042b77a;
  /* 1042b66d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1042b673 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b679 jb 0x1042b68e */
  if (C.cf) goto L_1042b68e;
  /* 1042b67b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1042b681 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b686 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b68c jb 0x1042b698 */
  if (C.cf) goto L_1042b698;
L_1042b68e:;
  /* 1042b68e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1042b693 jmp 0x1042b8e9 */
  goto L_1042b8e9;
L_1042b698:;
  /* 1042b698 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1042b69e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1042b6a4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1042b6aa mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1042b6b0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b6b3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1042b6b6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042b6b9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b6be mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1042b6c4:;
  /* 1042b6c4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042b6c7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b6cd je 0x1042b6ee */
  if (C.zf) goto L_1042b6ee;
  /* 1042b6cf mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042b6d2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b6d8 jne 0x1042b6dc */
  if (!C.zf) goto L_1042b6dc;
  /* 1042b6da jmp 0x1042b6ee */
  goto L_1042b6ee;
L_1042b6dc:;
  /* 1042b6dc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042b6df mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1042b6e1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1042b6e4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042b6e7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b6e9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1042b6ec jmp 0x1042b6c4 */
  goto L_1042b6c4;
L_1042b6ee:;
  /* 1042b6ee mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042b6f1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b6f7 jne 0x1042b703 */
  if (!C.zf) goto L_1042b703;
  /* 1042b6f9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1042b6fe jmp 0x1042b8e9 */
  goto L_1042b8e9;
L_1042b703:;
  /* 1042b703 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1042b709 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1042b70b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1042b70e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042b711 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1042b717 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b71e jle 0x1042b72a */
  if ((C.zf||C.sf!=C.of)) goto L_1042b72a;
  /* 1042b720 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1042b72a:;
  /* 1042b72a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1042b730 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b733 je 0x1042b73f */
  if (C.zf) goto L_1042b73f;
  /* 1042b735 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1042b73a jmp 0x1042b8e9 */
  goto L_1042b8e9;
L_1042b73f:;
  /* 1042b73f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1042b745 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1042b748 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b74e je 0x1042b75a */
  if (C.zf) goto L_1042b75a;
  /* 1042b750 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1042b755 jmp 0x1042b8e9 */
  goto L_1042b8e9;
L_1042b75a:;
  /* 1042b75a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1042b760 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1042b766 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1042b76c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b76f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1042b775 jmp 0x1042b636 */
  goto L_1042b636;
L_1042b77a:;
  /* 1042b77a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b781 je 0x1042b7f1 */
  if (C.zf) goto L_1042b7f1;
  /* 1042b783 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b787 jge 0x1042b7bb */
  if ((C.sf==C.of)) goto L_1042b7bb;
  /* 1042b789 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1042b78e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042b791 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1042b793 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1042b799 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1042b79b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1042b7a1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1042b7a6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042b7a9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1042b7ab mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1042b7b1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1042b7b3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1042b7b9 jmp 0x1042b7f1 */
  goto L_1042b7f1;
L_1042b7bb:;
  /* 1042b7bb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042b7be sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042b7c1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1042b7c6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1042b7c8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1042b7ce or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1042b7d0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1042b7d6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042b7d9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042b7dc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1042b7e1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1042b7e3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1042b7e9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1042b7eb mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1042b7f1:;
  /* 1042b7f1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1042b7f7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1042b7fa cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b800 jne 0x1042b814 */
  if (!C.zf) goto L_1042b814;
  /* 1042b802 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042b805 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1042b80b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b812 je 0x1042b81e */
  if (C.zf) goto L_1042b81e;
L_1042b814:;
  /* 1042b814 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1042b819 jmp 0x1042b8e9 */
  goto L_1042b8e9;
L_1042b81e:;
  /* 1042b81e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1042b824 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1042b827 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b82d je 0x1042b839 */
  if (C.zf) goto L_1042b839;
  /* 1042b82f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1042b834 jmp 0x1042b8e9 */
  goto L_1042b8e9;
L_1042b839:;
  /* 1042b839 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1042b83f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b842 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1042b848 jmp 0x1042b60d */
  goto L_1042b60d;
L_1042b84d:;
  /* 1042b84d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042b850 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1042b856 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1042b85c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b860 jne 0x1042b87a */
  if (!C.zf) goto L_1042b87a;
  /* 1042b862 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042b865 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1042b86b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1042b871 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b878 je 0x1042b881 */
  if (C.zf) goto L_1042b881;
L_1042b87a:;
  /* 1042b87a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1042b87f jmp 0x1042b8e9 */
  goto L_1042b8e9;
L_1042b881:;
  /* 1042b881 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1042b887 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b88d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1042b893 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042b896 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b89b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1042b89e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042b8a1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1042b8a3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1042b8a6 jmp 0x1042b3aa */
  goto L_1042b3aa;
L_1042b8ab:;
  /* 1042b8ab mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1042b8b1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1042b8b7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b8b9 jne 0x1042b8cc */
  if (!C.zf) goto L_1042b8cc;
  /* 1042b8bb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1042b8c1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1042b8c7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b8ca je 0x1042b8d3 */
  if (C.zf) goto L_1042b8d3;
L_1042b8cc:;
  /* 1042b8cc mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1042b8d1 jmp 0x1042b8e9 */
  goto L_1042b8e9;
L_1042b8d3:;
  /* 1042b8d3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1042b8d9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b8dc mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1042b8e2 jmp 0x1042b313 */
  goto L_1042b313;
L_1042b8e7:;
  /* 1042b8e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1042b8e9:;
  /* 1042b8e9 mov esp, ebp */
  ESP = (EBP);
  /* 1042b8eb pop ebp */
  EBP = (pop32());
  /* 1042b8ec ret  */
  ESPCHK(0x1042b2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8f0 @ 0x1042b8f0 (250 bytes, 92 insns) */
void f_1042b8f0(void) {
  FTRACE(0x1042b8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042b8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1042b8f1 mov ebp, esp */
  EBP = (ESP);
  /* 1042b8f3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042b8f6 push ebx */
  push32((uint32_t)(EBX));
  /* 1042b8f7 push esi */
  push32((uint32_t)(ESI));
  /* 1042b8f8 push edi */
  push32((uint32_t)(EDI));
  /* 1042b8f9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1042b8fc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1042b8ff lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1042b902 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1042b905:;
  /* 1042b905 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b909 jne 0x1042b929 */
  if (!C.zf) goto L_1042b929;
  /* 1042b90b push 0x1044cff8 */
  push32((uint32_t)(0x1044cff8u));
  /* 1042b910 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042b912 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1042b914 push 0x1044cfec */
  push32((uint32_t)(0x1044cfecu));
  /* 1042b919 push 2 */
  push32((uint32_t)(0x2u));
  /* 1042b91b call 0x10424aa0 */
  push32(0x1042b920u); f_10424aa0();
  /* 1042b920 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b923 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b926 jne 0x1042b929 */
  if (!C.zf) goto L_1042b929;
  /* 1042b928 int3  */
  x86_unimpl("int3 @ 0x1042b928");
L_1042b929:;
  /* 1042b929 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1042b92b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042b92d jne 0x1042b905 */
  if (!C.zf) goto L_1042b905;
L_1042b92f:;
  /* 1042b92f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b933 jne 0x1042b953 */
  if (!C.zf) goto L_1042b953;
  /* 1042b935 push 0x1044cfdc */
  push32((uint32_t)(0x1044cfdcu));
  /* 1042b93a push 0 */
  push32((uint32_t)(0x0u));
  /* 1042b93c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1042b93e push 0x1044cfec */
  push32((uint32_t)(0x1044cfecu));
  /* 1042b943 push 2 */
  push32((uint32_t)(0x2u));
  /* 1042b945 call 0x10424aa0 */
  push32(0x1042b94au); f_10424aa0();
  /* 1042b94a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b94d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b950 jne 0x1042b953 */
  if (!C.zf) goto L_1042b953;
  /* 1042b952 int3  */
  x86_unimpl("int3 @ 0x1042b952");
L_1042b953:;
  /* 1042b953 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042b955 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042b957 jne 0x1042b92f */
  if (!C.zf) goto L_1042b92f;
  /* 1042b959 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042b95c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1042b963 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042b966 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042b969 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1042b96c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042b96f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042b972 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1042b974 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042b977 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1042b97e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042b981 push ecx */
  push32((uint32_t)(ECX));
  /* 1042b982 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042b985 push edx */
  push32((uint32_t)(EDX));
  /* 1042b986 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042b989 push eax */
  push32((uint32_t)(EAX));
  /* 1042b98a call 0x1042c970 */
  push32(0x1042b98fu); f_1042c970();
  /* 1042b98f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b992 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1042b995 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042b998 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1042b99b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042b99e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042b9a1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1042b9a4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042b9a7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042b9ab jl 0x1042b9cf */
  if ((C.sf!=C.of)) goto L_1042b9cf;
  /* 1042b9ad mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042b9b0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1042b9b2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1042b9b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1042b9b7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1042b9bd mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1042b9c0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042b9c3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1042b9c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b9c8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042b9cb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1042b9cd jmp 0x1042b9e0 */
  goto L_1042b9e0;
L_1042b9cf:;
  /* 1042b9cf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042b9d2 push edx */
  push32((uint32_t)(EDX));
  /* 1042b9d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042b9d5 call 0x1042c6f0 */
  push32(0x1042b9dau); f_1042c6f0();
  /* 1042b9da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b9dd mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1042b9e0:;
  /* 1042b9e0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1042b9e3 pop edi */
  EDI = (pop32());
  /* 1042b9e4 pop esi */
  ESI = (pop32());
  /* 1042b9e5 pop ebx */
  EBX = (pop32());
  /* 1042b9e6 mov esp, ebp */
  ESP = (EBP);
  /* 1042b9e8 pop ebp */
  EBP = (pop32());
  /* 1042b9e9 ret  */
  ESPCHK(0x1042b8f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9f0 @ 0x1042b9f0 (183 bytes, 58 insns) */
void f_1042b9f0(void) {
  FTRACE(0x1042b9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042b9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1042b9f1 mov ebp, esp */
  EBP = (ESP);
  /* 1042b9f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042b9f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042b9f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042b9fc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042ba01 ja 0x1042ba1a */
  if ((!C.cf&&!C.zf)) goto L_1042ba1a;
  /* 1042ba03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042ba06 mov edx, dword ptr [0x1044fc98] */
  EDX = (r32((uint32_t)(0x1044fc98)));
  /* 1042ba0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042ba0e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1042ba12 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1042ba15 jmp 0x1042baa3 */
  goto L_1042baa3;
L_1042ba1a:;
  /* 1042ba1a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042ba1d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1042ba20 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1042ba26 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1042ba2c mov edx, dword ptr [0x1044fc98] */
  EDX = (r32((uint32_t)(0x1044fc98)));
  /* 1042ba32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042ba34 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1042ba38 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1042ba3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042ba3f je 0x1042ba63 */
  if (C.zf) goto L_1042ba63;
  /* 1042ba41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042ba44 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1042ba47 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1042ba4d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1042ba50 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1042ba53 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1042ba56 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1042ba5a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1042ba61 jmp 0x1042ba74 */
  goto L_1042ba74;
L_1042ba63:;
  /* 1042ba63 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1042ba66 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1042ba69 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1042ba6d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1042ba74:;
  /* 1042ba74 push 1 */
  push32((uint32_t)(0x1u));
  /* 1042ba76 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042ba78 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042ba7a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1042ba7d push ecx */
  push32((uint32_t)(ECX));
  /* 1042ba7e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042ba81 push edx */
  push32((uint32_t)(EDX));
  /* 1042ba82 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1042ba85 push eax */
  push32((uint32_t)(EAX));
  /* 1042ba86 push 1 */
  push32((uint32_t)(0x1u));
  /* 1042ba88 call 0x1042dc10 */
  push32(0x1042ba8du); f_1042dc10();
  /* 1042ba8d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ba90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042ba92 jne 0x1042ba98 */
  if (!C.zf) goto L_1042ba98;
  /* 1042ba94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042ba96 jmp 0x1042baa3 */
  goto L_1042baa3;
L_1042ba98:;
  /* 1042ba98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042ba9b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042baa0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1042baa3:;
  /* 1042baa3 mov esp, ebp */
  ESP = (EBP);
  /* 1042baa5 pop ebp */
  EBP = (pop32());
  /* 1042baa6 ret  */
  ESPCHK(0x1042b9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bab0 @ 0x1042bab0 (836 bytes, 238 insns) */
void f_1042bab0(void) {
  FTRACE(0x1042bab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042bab0 push ebp */
  push32((uint32_t)(EBP));
  /* 1042bab1 mov ebp, esp */
  EBP = (ESP);
  /* 1042bab3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042bab6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1042bab8 call 0x104293e0 */
  push32(0x1042babdu); f_104293e0();
  /* 1042babd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042bac0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042bac3 push eax */
  push32((uint32_t)(EAX));
  /* 1042bac4 call 0x1042be00 */
  push32(0x1042bac9u); f_1042be00();
  /* 1042bac9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042bacc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1042bacf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042bad2 cmp ecx, dword ptr [0x10452c64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10452c64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042bad8 jne 0x1042baeb */
  if (!C.zf) goto L_1042baeb;
  /* 1042bada push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1042badc call 0x10429480 */
  push32(0x1042bae1u); f_10429480();
  /* 1042bae1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042bae4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042bae6 jmp 0x1042bdf0 */
  goto L_1042bdf0;
L_1042baeb:;
  /* 1042baeb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042baef jne 0x1042bb0c */
  if (!C.zf) goto L_1042bb0c;
  /* 1042baf1 call 0x1042bee0 */
  push32(0x1042baf6u); f_1042bee0();
  /* 1042baf6 call 0x1042bf60 */
  push32(0x1042bafbu); f_1042bf60();
  /* 1042bafb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1042bafd call 0x10429480 */
  push32(0x1042bb02u); f_10429480();
  /* 1042bb02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042bb05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042bb07 jmp 0x1042bdf0 */
  goto L_1042bdf0;
L_1042bb0c:;
  /* 1042bb0c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1042bb13 jmp 0x1042bb1e */
  goto L_1042bb1e;
L_1042bb15:;
  /* 1042bb15 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042bb18 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042bb1b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1042bb1e:;
  /* 1042bb1e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042bb22 jae 0x1042bc6f */
  if (!C.cf) goto L_1042bc6f;
  /* 1042bb28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042bb2b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042bb2e mov ecx, dword ptr [eax + 0x1044feb8] */
  ECX = (r32((uint32_t)(EAX + 0x1044feb8)));
  /* 1042bb34 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042bb37 jne 0x1042bc6a */
  if (!C.zf) goto L_1042bc6a;
  /* 1042bb3d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1042bb44 jmp 0x1042bb4f */
  goto L_1042bb4f;
L_1042bb46:;
  /* 1042bb46 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042bb49 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042bb4c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1042bb4f:;
  /* 1042bb4f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042bb56 jae 0x1042bb64 */
  if (!C.cf) goto L_1042bb64;
  /* 1042bb58 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042bb5b mov byte ptr [eax + 0x10452e00], 0 */
  w8((uint32_t)(EAX + 0x10452e00), (0x0u));
  /* 1042bb62 jmp 0x1042bb46 */
  goto L_1042bb46;
L_1042bb64:;
  /* 1042bb64 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1042bb6b jmp 0x1042bb76 */
  goto L_1042bb76;
L_1042bb6d:;
  /* 1042bb6d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042bb70 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042bb73 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1042bb76:;
  /* 1042bb76 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042bb7a jae 0x1042bbf7 */
  if (!C.cf) goto L_1042bbf7;
  /* 1042bb7c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042bb7f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042bb82 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042bb85 lea ecx, [edx + eax*8 + 0x1044fec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1044fec8));
  /* 1042bb8c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1042bb8f jmp 0x1042bb9a */
  goto L_1042bb9a;
L_1042bb91:;
  /* 1042bb91 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042bb94 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042bb97 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1042bb9a:;
  /* 1042bb9a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042bb9d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1042bb9f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1042bba1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042bba3 je 0x1042bbf2 */
  if (C.zf) goto L_1042bbf2;
  /* 1042bba5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042bba8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042bbaa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1042bbad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042bbaf je 0x1042bbf2 */
  if (C.zf) goto L_1042bbf2;
  /* 1042bbb1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042bbb4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1042bbb6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1042bbb8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1042bbbb jmp 0x1042bbc6 */
  goto L_1042bbc6;
L_1042bbbd:;
  /* 1042bbbd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042bbc0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042bbc3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1042bbc6:;
  /* 1042bbc6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042bbc9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1042bbcb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1042bbce cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042bbd1 ja 0x1042bbf0 */
  if ((!C.cf&&!C.zf)) goto L_1042bbf0;
  /* 1042bbd3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042bbd6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042bbd9 mov dl, byte ptr [eax + 0x10452e01] */
  DL = (r8((uint32_t)(EAX + 0x10452e01)));
  /* 1042bbdf or dl, byte ptr [ecx + 0x1044feb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1044feb0))); DL = (_r); fl_logic(_r,8); }
  /* 1042bbe5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042bbe8 mov byte ptr [eax + 0x10452e01], dl */
  w8((uint32_t)(EAX + 0x10452e01), (DL));
  /* 1042bbee jmp 0x1042bbbd */
  goto L_1042bbbd;
L_1042bbf0:;
  /* 1042bbf0 jmp 0x1042bb91 */
  goto L_1042bb91;
L_1042bbf2:;
  /* 1042bbf2 jmp 0x1042bb6d */
  goto L_1042bb6d;
L_1042bbf7:;
  /* 1042bbf7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042bbfa mov dword ptr [0x10452c64], ecx */
  w32((uint32_t)(0x10452c64), (ECX));
  /* 1042bc00 mov dword ptr [0x10452cec], 1 */
  w32((uint32_t)(0x10452cec), (0x1u));
  /* 1042bc0a mov edx, dword ptr [0x10452c64] */
  EDX = (r32((uint32_t)(0x10452c64)));
  /* 1042bc10 push edx */
  push32((uint32_t)(EDX));
  /* 1042bc11 call 0x1042be60 */
  push32(0x1042bc16u); f_1042be60();
  /* 1042bc16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042bc19 mov dword ptr [0x10452f04], eax */
  w32((uint32_t)(0x10452f04), (EAX));
  /* 1042bc1e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1042bc25 jmp 0x1042bc30 */
  goto L_1042bc30;
L_1042bc27:;
  /* 1042bc27 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042bc2a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042bc2d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1042bc30:;
  /* 1042bc30 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042bc34 jae 0x1042bc54 */
  if (!C.cf) goto L_1042bc54;
  /* 1042bc36 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042bc39 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042bc3c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042bc3f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042bc42 mov cx, word ptr [ecx + eax*2 + 0x1044febc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1044febc)));
  /* 1042bc4a mov word ptr [edx*2 + 0x10452ce0], cx */
  w16((uint32_t)(EDX*2 + 0x10452ce0), (CX));
  /* 1042bc52 jmp 0x1042bc27 */
  goto L_1042bc27;
L_1042bc54:;
  /* 1042bc54 call 0x1042bf60 */
  push32(0x1042bc59u); f_1042bf60();
  /* 1042bc59 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1042bc5b call 0x10429480 */
  push32(0x1042bc60u); f_10429480();
  /* 1042bc60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042bc63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042bc65 jmp 0x1042bdf0 */
  goto L_1042bdf0;
L_1042bc6a:;
  /* 1042bc6a jmp 0x1042bb15 */
  goto L_1042bb15;
L_1042bc6f:;
  /* 1042bc6f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1042bc72 push edx */
  push32((uint32_t)(EDX));
  /* 1042bc73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042bc76 push eax */
  push32((uint32_t)(EAX));
  /* 1042bc77 call dword ptr [0x104542d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542d8))), 0x1042bc7du);
  /* 1042bc7d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042bc80 jne 0x1042bdc2 */
  if (!C.zf) goto L_1042bdc2;
  /* 1042bc86 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1042bc8d jmp 0x1042bc98 */
  goto L_1042bc98;
L_1042bc8f:;
  /* 1042bc8f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042bc92 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042bc95 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1042bc98:;
  /* 1042bc98 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042bc9f jae 0x1042bcad */
  if (!C.cf) goto L_1042bcad;
  /* 1042bca1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042bca4 mov byte ptr [edx + 0x10452e00], 0 */
  w8((uint32_t)(EDX + 0x10452e00), (0x0u));
  /* 1042bcab jmp 0x1042bc8f */
  goto L_1042bc8f;
L_1042bcad:;
  /* 1042bcad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042bcb0 mov dword ptr [0x10452c64], eax */
  w32((uint32_t)(0x10452c64), (EAX));
  /* 1042bcb5 mov dword ptr [0x10452f04], 0 */
  w32((uint32_t)(0x10452f04), (0x0u));
  /* 1042bcbf cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042bcc3 jbe 0x1042bd7e */
  if ((C.cf||C.zf)) goto L_1042bd7e;
  /* 1042bcc9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1042bccc mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1042bccf jmp 0x1042bcda */
  goto L_1042bcda;
L_1042bcd1:;
  /* 1042bcd1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1042bcd4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042bcd7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1042bcda:;
  /* 1042bcda mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1042bcdd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1042bcdf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1042bce1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042bce3 je 0x1042bd2c */
  if (C.zf) goto L_1042bd2c;
  /* 1042bce5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1042bce8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042bcea mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1042bced test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042bcef je 0x1042bd2c */
  if (C.zf) goto L_1042bd2c;
  /* 1042bcf1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1042bcf4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1042bcf6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1042bcf8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1042bcfb jmp 0x1042bd06 */
  goto L_1042bd06;
L_1042bcfd:;
  /* 1042bcfd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042bd00 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042bd03 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1042bd06:;
  /* 1042bd06 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1042bd09 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1042bd0b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1042bd0e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042bd11 ja 0x1042bd2a */
  if ((!C.cf&&!C.zf)) goto L_1042bd2a;
  /* 1042bd13 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042bd16 mov cl, byte ptr [eax + 0x10452e01] */
  CL = (r8((uint32_t)(EAX + 0x10452e01)));
  /* 1042bd1c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1042bd1f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042bd22 mov byte ptr [edx + 0x10452e01], cl */
  w8((uint32_t)(EDX + 0x10452e01), (CL));
  /* 1042bd28 jmp 0x1042bcfd */
  goto L_1042bcfd;
L_1042bd2a:;
  /* 1042bd2a jmp 0x1042bcd1 */
  goto L_1042bcd1;
L_1042bd2c:;
  /* 1042bd2c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1042bd33 jmp 0x1042bd3e */
  goto L_1042bd3e;
L_1042bd35:;
  /* 1042bd35 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042bd38 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042bd3b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1042bd3e:;
  /* 1042bd3e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042bd45 jae 0x1042bd5e */
  if (!C.cf) goto L_1042bd5e;
  /* 1042bd47 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042bd4a mov dl, byte ptr [ecx + 0x10452e01] */
  DL = (r8((uint32_t)(ECX + 0x10452e01)));
  /* 1042bd50 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1042bd53 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042bd56 mov byte ptr [eax + 0x10452e01], dl */
  w8((uint32_t)(EAX + 0x10452e01), (DL));
  /* 1042bd5c jmp 0x1042bd35 */
  goto L_1042bd35;
L_1042bd5e:;
  /* 1042bd5e mov ecx, dword ptr [0x10452c64] */
  ECX = (r32((uint32_t)(0x10452c64)));
  /* 1042bd64 push ecx */
  push32((uint32_t)(ECX));
  /* 1042bd65 call 0x1042be60 */
  push32(0x1042bd6au); f_1042be60();
  /* 1042bd6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042bd6d mov dword ptr [0x10452f04], eax */
  w32((uint32_t)(0x10452f04), (EAX));
  /* 1042bd72 mov dword ptr [0x10452cec], 1 */
  w32((uint32_t)(0x10452cec), (0x1u));
  /* 1042bd7c jmp 0x1042bd88 */
  goto L_1042bd88;
L_1042bd7e:;
  /* 1042bd7e mov dword ptr [0x10452cec], 0 */
  w32((uint32_t)(0x10452cec), (0x0u));
L_1042bd88:;
  /* 1042bd88 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1042bd8f jmp 0x1042bd9a */
  goto L_1042bd9a;
L_1042bd91:;
  /* 1042bd91 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042bd94 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042bd97 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1042bd9a:;
  /* 1042bd9a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042bd9e jae 0x1042bdaf */
  if (!C.cf) goto L_1042bdaf;
  /* 1042bda0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042bda3 mov word ptr [eax*2 + 0x10452ce0], 0 */
  w16((uint32_t)(EAX*2 + 0x10452ce0), (0x0u));
  /* 1042bdad jmp 0x1042bd91 */
  goto L_1042bd91;
L_1042bdaf:;
  /* 1042bdaf call 0x1042bf60 */
  push32(0x1042bdb4u); f_1042bf60();
  /* 1042bdb4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1042bdb6 call 0x10429480 */
  push32(0x1042bdbbu); f_10429480();
  /* 1042bdbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042bdbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042bdc0 jmp 0x1042bdf0 */
  goto L_1042bdf0;
L_1042bdc2:;
  /* 1042bdc2 cmp dword ptr [0x10451768], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10451768))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042bdc9 je 0x1042bde3 */
  if (C.zf) goto L_1042bde3;
  /* 1042bdcb call 0x1042bee0 */
  push32(0x1042bdd0u); f_1042bee0();
  /* 1042bdd0 call 0x1042bf60 */
  push32(0x1042bdd5u); f_1042bf60();
  /* 1042bdd5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1042bdd7 call 0x10429480 */
  push32(0x1042bddcu); f_10429480();
  /* 1042bddc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042bddf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042bde1 jmp 0x1042bdf0 */
  goto L_1042bdf0;
L_1042bde3:;
  /* 1042bde3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1042bde5 call 0x10429480 */
  push32(0x1042bdeau); f_10429480();
  /* 1042bdea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042bded or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1042bdf0:;
  /* 1042bdf0 mov esp, ebp */
  ESP = (EBP);
  /* 1042bdf2 pop ebp */
  EBP = (pop32());
  /* 1042bdf3 ret  */
  ESPCHK(0x1042bab0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1042be00 (89 bytes, 21 insns) */
void f_1042be00(void) {
  FTRACE(0x1042be00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042be00 push ebp */
  push32((uint32_t)(EBP));
  /* 1042be01 mov ebp, esp */
  EBP = (ESP);
  /* 1042be03 mov dword ptr [0x10451768], 0 */
  w32((uint32_t)(0x10451768), (0x0u));
  /* 1042be0d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042be11 jne 0x1042be25 */
  if (!C.zf) goto L_1042be25;
  /* 1042be13 mov dword ptr [0x10451768], 1 */
  w32((uint32_t)(0x10451768), (0x1u));
  /* 1042be1d call dword ptr [0x104542d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542d0))), 0x1042be23u);
  /* 1042be23 jmp 0x1042be57 */
  goto L_1042be57;
L_1042be25:;
  /* 1042be25 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042be29 jne 0x1042be3d */
  if (!C.zf) goto L_1042be3d;
  /* 1042be2b mov dword ptr [0x10451768], 1 */
  w32((uint32_t)(0x10451768), (0x1u));
  /* 1042be35 call dword ptr [0x104542e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542e0))), 0x1042be3bu);
  /* 1042be3b jmp 0x1042be57 */
  goto L_1042be57;
L_1042be3d:;
  /* 1042be3d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042be41 jne 0x1042be54 */
  if (!C.zf) goto L_1042be54;
  /* 1042be43 mov dword ptr [0x10451768], 1 */
  w32((uint32_t)(0x10451768), (0x1u));
  /* 1042be4d mov eax, dword ptr [0x10451788] */
  EAX = (r32((uint32_t)(0x10451788)));
  /* 1042be52 jmp 0x1042be57 */
  goto L_1042be57;
L_1042be54:;
  /* 1042be54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1042be57:;
  /* 1042be57 pop ebp */
  EBP = (pop32());
  /* 1042be58 ret  */
  ESPCHK(0x1042be00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be60 @ 0x1042be60 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1042be60(void) {
  FTRACE(0x1042be60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042be60 push ebp */
  push32((uint32_t)(EBP));
  /* 1042be61 mov ebp, esp */
  EBP = (ESP);
  /* 1042be63 push ecx */
  push32((uint32_t)(ECX));
  /* 1042be64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042be67 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1042be6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042be6d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042be73 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1042be76 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042be7a ja 0x1042beaa */
  if ((!C.cf&&!C.zf)) goto L_1042beaa;
  /* 1042be7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042be7f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1042be81 mov dl, byte ptr [eax + 0x1042bec4] */
  DL = (r8((uint32_t)(EAX + 0x1042bec4)));
  /* 1042be87 jmp dword ptr [edx*4 + 0x1042beb0] */
  switch (EDX) {
    case 0: goto L_1042be8e;
    case 1: goto L_1042be95;
    case 2: goto L_1042be9c;
    case 3: goto L_1042bea3;
    case 4: goto L_1042beaa;
    default: x86_unimpl("switch@0x1042be87 out of table"); return;
  }
L_1042be8e:;
  /* 1042be8e mov eax, 0x411 */
  EAX = (0x411u);
  /* 1042be93 jmp 0x1042beac */
  goto L_1042beac;
L_1042be95:;
  /* 1042be95 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1042be9a jmp 0x1042beac */
  goto L_1042beac;
L_1042be9c:;
  /* 1042be9c mov eax, 0x412 */
  EAX = (0x412u);
  /* 1042bea1 jmp 0x1042beac */
  goto L_1042beac;
L_1042bea3:;
  /* 1042bea3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1042bea8 jmp 0x1042beac */
  goto L_1042beac;
L_1042beaa:;
  /* 1042beaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1042beac:;
  /* 1042beac mov esp, ebp */
  ESP = (EBP);
  /* 1042beae pop ebp */
  EBP = (pop32());
  /* 1042beaf ret  */
  ESPCHK(0x1042be60u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1042bee0 (116 bytes, 29 insns) */
void f_1042bee0(void) {
  FTRACE(0x1042bee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042bee0 push ebp */
  push32((uint32_t)(EBP));
  /* 1042bee1 mov ebp, esp */
  EBP = (ESP);
  /* 1042bee3 push ecx */
  push32((uint32_t)(ECX));
  /* 1042bee4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1042beeb jmp 0x1042bef6 */
  goto L_1042bef6;
L_1042beed:;
  /* 1042beed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042bef0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042bef3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1042bef6:;
  /* 1042bef6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042befd jge 0x1042bf0b */
  if ((C.sf==C.of)) goto L_1042bf0b;
  /* 1042beff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042bf02 mov byte ptr [ecx + 0x10452e00], 0 */
  w8((uint32_t)(ECX + 0x10452e00), (0x0u));
  /* 1042bf09 jmp 0x1042beed */
  goto L_1042beed;
L_1042bf0b:;
  /* 1042bf0b mov dword ptr [0x10452c64], 0 */
  w32((uint32_t)(0x10452c64), (0x0u));
  /* 1042bf15 mov dword ptr [0x10452cec], 0 */
  w32((uint32_t)(0x10452cec), (0x0u));
  /* 1042bf1f mov dword ptr [0x10452f04], 0 */
  w32((uint32_t)(0x10452f04), (0x0u));
  /* 1042bf29 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1042bf30 jmp 0x1042bf3b */
  goto L_1042bf3b;
L_1042bf32:;
  /* 1042bf32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042bf35 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042bf38 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1042bf3b:;
  /* 1042bf3b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042bf3f jge 0x1042bf50 */
  if ((C.sf==C.of)) goto L_1042bf50;
  /* 1042bf41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042bf44 mov word ptr [eax*2 + 0x10452ce0], 0 */
  w16((uint32_t)(EAX*2 + 0x10452ce0), (0x0u));
  /* 1042bf4e jmp 0x1042bf32 */
  goto L_1042bf32;
L_1042bf50:;
  /* 1042bf50 mov esp, ebp */
  ESP = (EBP);
  /* 1042bf52 pop ebp */
  EBP = (pop32());
  /* 1042bf53 ret  */
  ESPCHK(0x1042bee0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf60 @ 0x1042bf60 (770 bytes, 175 insns) */
void f_1042bf60(void) {
  FTRACE(0x1042bf60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042bf60 push ebp */
  push32((uint32_t)(EBP));
  /* 1042bf61 mov ebp, esp */
  EBP = (ESP);
  /* 1042bf63 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042bf69 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1042bf6f push eax */
  push32((uint32_t)(EAX));
  /* 1042bf70 mov ecx, dword ptr [0x10452c64] */
  ECX = (r32((uint32_t)(0x10452c64)));
  /* 1042bf76 push ecx */
  push32((uint32_t)(ECX));
  /* 1042bf77 call dword ptr [0x104542d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542d8))), 0x1042bf7du);
  /* 1042bf7d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042bf80 jne 0x1042c199 */
  if (!C.zf) goto L_1042c199;
  /* 1042bf86 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1042bf90 jmp 0x1042bfa1 */
  goto L_1042bfa1;
L_1042bf92:;
  /* 1042bf92 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1042bf98 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042bf9b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1042bfa1:;
  /* 1042bfa1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042bfab jae 0x1042bfc2 */
  if (!C.cf) goto L_1042bfc2;
  /* 1042bfad mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1042bfb3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1042bfb9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1042bfc0 jmp 0x1042bf92 */
  goto L_1042bf92;
L_1042bfc2:;
  /* 1042bfc2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1042bfc9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1042bfcf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1042bfd2 jmp 0x1042bfdd */
  goto L_1042bfdd;
L_1042bfd4:;
  /* 1042bfd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042bfd7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042bfda mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1042bfdd:;
  /* 1042bfdd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042bfe0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1042bfe2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1042bfe4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042bfe6 je 0x1042c028 */
  if (C.zf) goto L_1042c028;
  /* 1042bfe8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042bfeb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1042bfed mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1042bfef mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1042bff5 jmp 0x1042c006 */
  goto L_1042c006;
L_1042bff7:;
  /* 1042bff7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1042bffd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042c000 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1042c006:;
  /* 1042c006 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042c009 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1042c00b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1042c00e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042c014 ja 0x1042c026 */
  if ((!C.cf&&!C.zf)) goto L_1042c026;
  /* 1042c016 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1042c01c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1042c024 jmp 0x1042bff7 */
  goto L_1042bff7;
L_1042c026:;
  /* 1042c026 jmp 0x1042bfd4 */
  goto L_1042bfd4;
L_1042c028:;
  /* 1042c028 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042c02a mov eax, dword ptr [0x10452f04] */
  EAX = (r32((uint32_t)(0x10452f04)));
  /* 1042c02f push eax */
  push32((uint32_t)(EAX));
  /* 1042c030 mov ecx, dword ptr [0x10452c64] */
  ECX = (r32((uint32_t)(0x10452c64)));
  /* 1042c036 push ecx */
  push32((uint32_t)(ECX));
  /* 1042c037 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1042c03d push edx */
  push32((uint32_t)(EDX));
  /* 1042c03e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1042c043 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1042c049 push eax */
  push32((uint32_t)(EAX));
  /* 1042c04a push 1 */
  push32((uint32_t)(0x1u));
  /* 1042c04c call 0x1042dc10 */
  push32(0x1042c051u); f_1042dc10();
  /* 1042c051 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042c054 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042c056 mov ecx, dword ptr [0x10452c64] */
  ECX = (r32((uint32_t)(0x10452c64)));
  /* 1042c05c push ecx */
  push32((uint32_t)(ECX));
  /* 1042c05d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1042c062 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1042c068 push edx */
  push32((uint32_t)(EDX));
  /* 1042c069 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1042c06e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1042c074 push eax */
  push32((uint32_t)(EAX));
  /* 1042c075 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1042c07a mov ecx, dword ptr [0x10452f04] */
  ECX = (r32((uint32_t)(0x10452f04)));
  /* 1042c080 push ecx */
  push32((uint32_t)(ECX));
  /* 1042c081 call 0x1042ddd0 */
  push32(0x1042c086u); f_1042ddd0();
  /* 1042c086 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042c089 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042c08b mov edx, dword ptr [0x10452c64] */
  EDX = (r32((uint32_t)(0x10452c64)));
  /* 1042c091 push edx */
  push32((uint32_t)(EDX));
  /* 1042c092 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1042c097 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1042c09d push eax */
  push32((uint32_t)(EAX));
  /* 1042c09e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1042c0a3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1042c0a9 push ecx */
  push32((uint32_t)(ECX));
  /* 1042c0aa push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1042c0af mov edx, dword ptr [0x10452f04] */
  EDX = (r32((uint32_t)(0x10452f04)));
  /* 1042c0b5 push edx */
  push32((uint32_t)(EDX));
  /* 1042c0b6 call 0x1042ddd0 */
  push32(0x1042c0bbu); f_1042ddd0();
  /* 1042c0bb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042c0be mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1042c0c8 jmp 0x1042c0d9 */
  goto L_1042c0d9;
L_1042c0ca:;
  /* 1042c0ca mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1042c0d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042c0d3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1042c0d9:;
  /* 1042c0d9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042c0e3 jae 0x1042c194 */
  if (!C.cf) goto L_1042c194;
  /* 1042c0e9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1042c0ef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1042c0f1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1042c0f9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1042c0fc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042c0fe je 0x1042c136 */
  if (C.zf) goto L_1042c136;
  /* 1042c100 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1042c106 mov cl, byte ptr [eax + 0x10452e01] */
  CL = (r8((uint32_t)(EAX + 0x10452e01)));
  /* 1042c10c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1042c10f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1042c115 mov byte ptr [edx + 0x10452e01], cl */
  w8((uint32_t)(EDX + 0x10452e01), (CL));
  /* 1042c11b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1042c121 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1042c127 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1042c12e mov byte ptr [eax + 0x10452d00], dl */
  w8((uint32_t)(EAX + 0x10452d00), (DL));
  /* 1042c134 jmp 0x1042c18f */
  goto L_1042c18f;
L_1042c136:;
  /* 1042c136 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1042c13c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1042c13e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1042c146 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1042c149 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042c14b je 0x1042c182 */
  if (C.zf) goto L_1042c182;
  /* 1042c14d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1042c153 mov al, byte ptr [edx + 0x10452e01] */
  AL = (r8((uint32_t)(EDX + 0x10452e01)));
  /* 1042c159 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1042c15b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1042c161 mov byte ptr [ecx + 0x10452e01], al */
  w8((uint32_t)(ECX + 0x10452e01), (AL));
  /* 1042c167 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1042c16d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1042c173 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1042c17a mov byte ptr [edx + 0x10452d00], cl */
  w8((uint32_t)(EDX + 0x10452d00), (CL));
  /* 1042c180 jmp 0x1042c18f */
  goto L_1042c18f;
L_1042c182:;
  /* 1042c182 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1042c188 mov byte ptr [edx + 0x10452d00], 0 */
  w8((uint32_t)(EDX + 0x10452d00), (0x0u));
L_1042c18f:;
  /* 1042c18f jmp 0x1042c0ca */
  goto L_1042c0ca;
L_1042c194:;
  /* 1042c194 jmp 0x1042c25e */
  goto L_1042c25e;
L_1042c199:;
  /* 1042c199 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1042c1a3 jmp 0x1042c1b4 */
  goto L_1042c1b4;
L_1042c1a5:;
  /* 1042c1a5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1042c1ab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042c1ae mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1042c1b4:;
  /* 1042c1b4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042c1be jae 0x1042c25e */
  if (!C.cf) goto L_1042c25e;
  /* 1042c1c4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042c1cb jb 0x1042c208 */
  if (C.cf) goto L_1042c208;
  /* 1042c1cd cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042c1d4 ja 0x1042c208 */
  if ((!C.cf&&!C.zf)) goto L_1042c208;
  /* 1042c1d6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1042c1dc mov dl, byte ptr [ecx + 0x10452e01] */
  DL = (r8((uint32_t)(ECX + 0x10452e01)));
  /* 1042c1e2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1042c1e5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1042c1eb mov byte ptr [eax + 0x10452e01], dl */
  w8((uint32_t)(EAX + 0x10452e01), (DL));
  /* 1042c1f1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1042c1f7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042c1fa mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1042c200 mov byte ptr [edx + 0x10452d00], cl */
  w8((uint32_t)(EDX + 0x10452d00), (CL));
  /* 1042c206 jmp 0x1042c259 */
  goto L_1042c259;
L_1042c208:;
  /* 1042c208 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042c20f jb 0x1042c24c */
  if (C.cf) goto L_1042c24c;
  /* 1042c211 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042c218 ja 0x1042c24c */
  if ((!C.cf&&!C.zf)) goto L_1042c24c;
  /* 1042c21a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1042c220 mov cl, byte ptr [eax + 0x10452e01] */
  CL = (r8((uint32_t)(EAX + 0x10452e01)));
  /* 1042c226 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1042c229 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1042c22f mov byte ptr [edx + 0x10452e01], cl */
  w8((uint32_t)(EDX + 0x10452e01), (CL));
  /* 1042c235 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1042c23b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042c23e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1042c244 mov byte ptr [ecx + 0x10452d00], al */
  w8((uint32_t)(ECX + 0x10452d00), (AL));
  /* 1042c24a jmp 0x1042c259 */
  goto L_1042c259;
L_1042c24c:;
  /* 1042c24c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1042c252 mov byte ptr [edx + 0x10452d00], 0 */
  w8((uint32_t)(EDX + 0x10452d00), (0x0u));
L_1042c259:;
  /* 1042c259 jmp 0x1042c1a5 */
  goto L_1042c1a5;
L_1042c25e:;
  /* 1042c25e mov esp, ebp */
  ESP = (EBP);
  /* 1042c260 pop ebp */
  EBP = (pop32());
  /* 1042c261 ret  */
  ESPCHK(0x1042bf60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c270 @ 0x1042c270 (23 bytes, 9 insns) */
void f_1042c270(void) {
  FTRACE(0x1042c270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042c270 push ebp */
  push32((uint32_t)(EBP));
  /* 1042c271 mov ebp, esp */
  EBP = (ESP);
  /* 1042c273 cmp dword ptr [0x10452cec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10452cec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042c27a je 0x1042c283 */
  if (C.zf) goto L_1042c283;
  /* 1042c27c mov eax, dword ptr [0x10452c64] */
  EAX = (r32((uint32_t)(0x10452c64)));
  /* 1042c281 jmp 0x1042c285 */
  goto L_1042c285;
L_1042c283:;
  /* 1042c283 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1042c285:;
  /* 1042c285 pop ebp */
  EBP = (pop32());
  /* 1042c286 ret  */
  ESPCHK(0x1042c270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c290 @ 0x1042c290 (34 bytes, 10 insns) */
void f_1042c290(void) {
  FTRACE(0x1042c290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042c290 push ebp */
  push32((uint32_t)(EBP));
  /* 1042c291 mov ebp, esp */
  EBP = (ESP);
  /* 1042c293 cmp dword ptr [0x104530b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104530b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042c29a jne 0x1042c2b0 */
  if (!C.zf) goto L_1042c2b0;
  /* 1042c29c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1042c29e call 0x1042bab0 */
  push32(0x1042c2a3u); f_1042bab0();
  /* 1042c2a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042c2a6 mov dword ptr [0x104530b0], 1 */
  w32((uint32_t)(0x104530b0), (0x1u));
L_1042c2b0:;
  /* 1042c2b0 pop ebp */
  EBP = (pop32());
  /* 1042c2b1 ret  */
  ESPCHK(0x1042c290u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2c0 @ 0x1042c2c0 (664 bytes, 263 insns) [15 switch table(s)] */
void f_1042c2c0(void) {
  FTRACE(0x1042c2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042c2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1042c2c1 mov ebp, esp */
  EBP = (ESP);
  /* 1042c2c3 push edi */
  push32((uint32_t)(EDI));
  /* 1042c2c4 push esi */
  push32((uint32_t)(ESI));
  /* 1042c2c5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1042c2c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1042c2cb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1042c2ce mov eax, ecx */
  EAX = (ECX);
  /* 1042c2d0 mov edx, ecx */
  EDX = (ECX);
  /* 1042c2d2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042c2d4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042c2d6 jbe 0x1042c2e0 */
  if ((C.cf||C.zf)) goto L_1042c2e0;
  /* 1042c2d8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042c2da jb 0x1042c458 */
  if (C.cf) goto L_1042c458;
L_1042c2e0:;
  /* 1042c2e0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1042c2e6 jne 0x1042c2fc */
  if (!C.zf) goto L_1042c2fc;
  /* 1042c2e8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1042c2eb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1042c2ee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042c2f1 jb 0x1042c31c */
  if (C.cf) goto L_1042c31c;
  /* 1042c2f3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1042c2f5 jmp dword ptr [edx*4 + 0x1042c408] */
  switch (EDX) {
    case 0: goto L_1042c418;
    case 1: goto L_1042c420;
    case 2: goto L_1042c42c;
    case 3: goto L_1042c440;
    default: x86_unimpl("switch@0x1042c2f5 out of table"); return;
  }
L_1042c2fc:;
  /* 1042c2fc mov eax, edi */
  EAX = (EDI);
  /* 1042c2fe mov edx, 3 */
  EDX = (0x3u);
  /* 1042c303 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042c306 jb 0x1042c314 */
  if (C.cf) goto L_1042c314;
  /* 1042c308 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1042c30b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042c30d jmp dword ptr [eax*4 + 0x1042c320] */
  switch (EAX) {
    case 1: goto L_1042c330;
    case 2: goto L_1042c35c;
    case 3: goto L_1042c380;
    default: x86_unimpl("switch@0x1042c30d out of table"); return;
  }
L_1042c314:;
  /* 1042c314 jmp dword ptr [ecx*4 + 0x1042c418] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1042c418)))); return;
  /* 1042c31b nop  */
  /* nop */
L_1042c31c:;
  /* 1042c31c jmp dword ptr [ecx*4 + 0x1042c39c] */
  switch (ECX) {
    case 0: goto L_1042c3ff;
    case 1: goto L_1042c3ec;
    case 2: goto L_1042c3e4;
    case 3: goto L_1042c3dc;
    case 4: goto L_1042c3d4;
    case 5: goto L_1042c3cc;
    case 6: goto L_1042c3c4;
    case 7: goto L_1042c3bc;
    default: x86_unimpl("switch@0x1042c31c out of table"); return;
  }
  /* 1042c323 nop  */
  /* nop */
L_1042c330:;
  /* 1042c330 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1042c332 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1042c334 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1042c336 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1042c339 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1042c33c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1042c33f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1042c342 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1042c345 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1042c348 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1042c34b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042c34e jb 0x1042c31c */
  if (C.cf) goto L_1042c31c;
  /* 1042c350 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1042c352 jmp dword ptr [edx*4 + 0x1042c408] */
  switch (EDX) {
    case 0: goto L_1042c418;
    case 1: goto L_1042c420;
    case 2: goto L_1042c42c;
    case 3: goto L_1042c440;
    default: x86_unimpl("switch@0x1042c352 out of table"); return;
  }
  /* 1042c359 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1042c35c:;
  /* 1042c35c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1042c35e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1042c360 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1042c362 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1042c365 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1042c368 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1042c36b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1042c36e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1042c371 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042c374 jb 0x1042c31c */
  if (C.cf) goto L_1042c31c;
  /* 1042c376 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1042c378 jmp dword ptr [edx*4 + 0x1042c408] */
  switch (EDX) {
    case 0: goto L_1042c418;
    case 1: goto L_1042c420;
    case 2: goto L_1042c42c;
    case 3: goto L_1042c440;
    default: x86_unimpl("switch@0x1042c378 out of table"); return;
  }
  /* 1042c37f nop  */
  /* nop */
L_1042c380:;
  /* 1042c380 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1042c382 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1042c384 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1042c386 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1042c387 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1042c38a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1042c38b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042c38e jb 0x1042c31c */
  if (C.cf) goto L_1042c31c;
  /* 1042c390 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1042c392 jmp dword ptr [edx*4 + 0x1042c408] */
  switch (EDX) {
    case 0: goto L_1042c418;
    case 1: goto L_1042c420;
    case 2: goto L_1042c42c;
    case 3: goto L_1042c440;
    default: x86_unimpl("switch@0x1042c392 out of table"); return;
  }
  /* 1042c399 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1042c3bc:;
  /* 1042c3bc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1042c3c0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1042c3c4:;
  /* 1042c3c4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1042c3c8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1042c3cc:;
  /* 1042c3cc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1042c3d0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1042c3d4:;
  /* 1042c3d4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1042c3d8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1042c3dc:;
  /* 1042c3dc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1042c3e0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1042c3e4:;
  /* 1042c3e4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1042c3e8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1042c3ec:;
  /* 1042c3ec mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1042c3f0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1042c3f4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1042c3fb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1042c3fd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1042c3ff:;
  /* 1042c3ff jmp dword ptr [edx*4 + 0x1042c408] */
  switch (EDX) {
    case 0: goto L_1042c418;
    case 1: goto L_1042c420;
    case 2: goto L_1042c42c;
    case 3: goto L_1042c440;
    default: x86_unimpl("switch@0x1042c3ff out of table"); return;
  }
  /* 1042c406 mov edi, edi */
  EDI = (EDI);
L_1042c418:;
  /* 1042c418 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042c41b pop esi */
  ESI = (pop32());
  /* 1042c41c pop edi */
  EDI = (pop32());
  /* 1042c41d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1042c41e ret  */
  ESPCHK(0x1042c2c0u, _esp0);
  ESP += 4; return;
  /* 1042c41f nop  */
  /* nop */
L_1042c420:;
  /* 1042c420 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1042c422 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1042c424 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042c427 pop esi */
  ESI = (pop32());
  /* 1042c428 pop edi */
  EDI = (pop32());
  /* 1042c429 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1042c42a ret  */
  ESPCHK(0x1042c2c0u, _esp0);
  ESP += 4; return;
  /* 1042c42b nop  */
  /* nop */
L_1042c42c:;
  /* 1042c42c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1042c42e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1042c430 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1042c433 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1042c436 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042c439 pop esi */
  ESI = (pop32());
  /* 1042c43a pop edi */
  EDI = (pop32());
  /* 1042c43b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1042c43c ret  */
  ESPCHK(0x1042c2c0u, _esp0);
  ESP += 4; return;
  /* 1042c43d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1042c440:;
  /* 1042c440 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1042c442 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1042c444 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1042c447 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1042c44a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1042c44d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1042c450 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042c453 pop esi */
  ESI = (pop32());
  /* 1042c454 pop edi */
  EDI = (pop32());
  /* 1042c455 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1042c456 ret  */
  ESPCHK(0x1042c2c0u, _esp0);
  ESP += 4; return;
  /* 1042c457 nop  */
  /* nop */
L_1042c458:;
  /* 1042c458 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1042c45c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1042c460 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1042c466 jne 0x1042c48c */
  if (!C.zf) goto L_1042c48c;
  /* 1042c468 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1042c46b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1042c46e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042c471 jb 0x1042c480 */
  if (C.cf) goto L_1042c480;
  /* 1042c473 std  */
  C.df=1;
  /* 1042c474 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1042c476 cld  */
  C.df=0;
  /* 1042c477 jmp dword ptr [edx*4 + 0x1042c5a0] */
  switch (EDX) {
    case 0: goto L_1042c5b0;
    case 1: goto L_1042c5b8;
    case 2: goto L_1042c5c8;
    case 3: goto L_1042c5dc;
    default: x86_unimpl("switch@0x1042c477 out of table"); return;
  }
  /* 1042c47e mov edi, edi */
  EDI = (EDI);
L_1042c480:;
  /* 1042c480 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1042c482 jmp dword ptr [ecx*4 + 0x1042c550] */
  switch (ECX) {
    case 0: goto L_1042c597;
    default: x86_unimpl("switch@0x1042c482 out of table"); return;
  }
  /* 1042c489 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1042c48c:;
  /* 1042c48c mov eax, edi */
  EAX = (EDI);
  /* 1042c48e mov edx, 3 */
  EDX = (0x3u);
  /* 1042c493 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042c496 jb 0x1042c4a4 */
  if (C.cf) goto L_1042c4a4;
  /* 1042c498 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1042c49b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042c49d jmp dword ptr [eax*4 + 0x1042c4a8] */
  switch (EAX) {
    case 1: goto L_1042c4b8;
    case 2: goto L_1042c4d8;
    case 3: goto L_1042c500;
    default: x86_unimpl("switch@0x1042c49d out of table"); return;
  }
L_1042c4a4:;
  /* 1042c4a4 jmp dword ptr [ecx*4 + 0x1042c5a0] */
  switch (ECX) {
    case 0: goto L_1042c5b0;
    case 1: goto L_1042c5b8;
    case 2: goto L_1042c5c8;
    case 3: goto L_1042c5dc;
    default: x86_unimpl("switch@0x1042c4a4 out of table"); return;
  }
  /* 1042c4ab nop  */
  /* nop */
L_1042c4b8:;
  /* 1042c4b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1042c4bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1042c4bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1042c4c0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1042c4c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1042c4c4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1042c4c5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042c4c8 jb 0x1042c480 */
  if (C.cf) goto L_1042c480;
  /* 1042c4ca std  */
  C.df=1;
  /* 1042c4cb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1042c4cd cld  */
  C.df=0;
  /* 1042c4ce jmp dword ptr [edx*4 + 0x1042c5a0] */
  switch (EDX) {
    case 0: goto L_1042c5b0;
    case 1: goto L_1042c5b8;
    case 2: goto L_1042c5c8;
    case 3: goto L_1042c5dc;
    default: x86_unimpl("switch@0x1042c4ce out of table"); return;
  }
  /* 1042c4d5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1042c4d8:;
  /* 1042c4d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1042c4db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1042c4dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1042c4e0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1042c4e3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1042c4e6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1042c4e9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042c4ec sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042c4ef cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042c4f2 jb 0x1042c480 */
  if (C.cf) goto L_1042c480;
  /* 1042c4f4 std  */
  C.df=1;
  /* 1042c4f5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1042c4f7 cld  */
  C.df=0;
  /* 1042c4f8 jmp dword ptr [edx*4 + 0x1042c5a0] */
  switch (EDX) {
    case 0: goto L_1042c5b0;
    case 1: goto L_1042c5b8;
    case 2: goto L_1042c5c8;
    case 3: goto L_1042c5dc;
    default: x86_unimpl("switch@0x1042c4f8 out of table"); return;
  }
  /* 1042c4ff nop  */
  /* nop */
L_1042c500:;
  /* 1042c500 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1042c503 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1042c505 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1042c508 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
L_1042c50b:;
  /* 1042c50b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1042c50e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1042c511 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1042c514 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1042c517 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042c51a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042c51d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042c520 jb 0x1042c480 */
  if (C.cf) goto L_1042c480;
  /* 1042c526 std  */
  C.df=1;
  /* 1042c527 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1042c529 cld  */
  C.df=0;
  /* 1042c52a jmp dword ptr [edx*4 + 0x1042c5a0] */
  switch (EDX) {
    case 0: goto L_1042c5b0;
    case 1: goto L_1042c5b8;
    case 2: goto L_1042c5c8;
    case 3: goto L_1042c5dc;
    default: x86_unimpl("switch@0x1042c52a out of table"); return;
  }
  /* 1042c531 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1042c534 push esp */
  push32((uint32_t)(ESP));
  /* 1042c535 lds eax, ptr [edx + 0x10] */
  x86_unimpl("lds @ 0x1042c535");
  /* 1042c538 pop esp */
  ESP = (pop32());
  /* 1042c539 lds eax, ptr [edx + 0x10] */
  x86_unimpl("lds @ 0x1042c539");
  /* 1042c53c lds eax, ptr fs:[edx + 0x10] */
  x86_unimpl("lds @ 0x1042c53c");
  /* 1042c540 insb byte ptr es:[edi], dx */
  x86_unimpl("insb @ 0x1042c540");
  /* 1042c541 lds eax, ptr [edx + 0x10] */
  x86_unimpl("lds @ 0x1042c541");
  /* 1042c544 je 0x1042c50b */
  if (C.zf) goto L_1042c50b;
  /* 1042c546 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1042c547 adc byte ptr [ebp + eax*8 + 0x42], bh */
  { uint32_t _a=(r8((uint32_t)(EBP + EAX*8 + 0x42))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EBP + EAX*8 + 0x42), (_r)); fl_add(_a,_b,_r,8); }
  /* 1042c54c test ch, al */
  { uint32_t _r=(C.c.b.h)&(AL); fl_logic(_r,8); }
  /* 1042c54e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1042c554 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1042c558 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1042c55c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1042c560 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1042c564 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1042c568 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1042c56c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1042c570 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1042c574 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1042c578 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1042c57c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1042c580 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1042c584 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1042c588 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1042c58c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1042c593 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1042c595 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1042c597:;
  /* 1042c597 jmp dword ptr [edx*4 + 0x1042c5a0] */
  switch (EDX) {
    case 0: goto L_1042c5b0;
    case 1: goto L_1042c5b8;
    case 2: goto L_1042c5c8;
    case 3: goto L_1042c5dc;
    default: x86_unimpl("switch@0x1042c597 out of table"); return;
  }
  /* 1042c59e mov edi, edi */
  EDI = (EDI);
L_1042c5b0:;
  /* 1042c5b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042c5b3 pop esi */
  ESI = (pop32());
  /* 1042c5b4 pop edi */
  EDI = (pop32());
  /* 1042c5b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1042c5b6 ret  */
  ESPCHK(0x1042c2c0u, _esp0);
  ESP += 4; return;
  /* 1042c5b7 nop  */
  /* nop */
L_1042c5b8:;
  /* 1042c5b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1042c5bb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1042c5be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042c5c1 pop esi */
  ESI = (pop32());
  /* 1042c5c2 pop edi */
  EDI = (pop32());
  /* 1042c5c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1042c5c4 ret  */
  ESPCHK(0x1042c2c0u, _esp0);
  ESP += 4; return;
  /* 1042c5c5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1042c5c8:;
  /* 1042c5c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1042c5cb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1042c5ce mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1042c5d1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1042c5d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042c5d7 pop esi */
  ESI = (pop32());
  /* 1042c5d8 pop edi */
  EDI = (pop32());
  /* 1042c5d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1042c5da ret  */
  ESPCHK(0x1042c2c0u, _esp0);
  ESP += 4; return;
  /* 1042c5db nop  */
  /* nop */
L_1042c5dc:;
  /* 1042c5dc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1042c5df mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1042c5e2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1042c5e5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1042c5e8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1042c5eb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1042c5ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042c5f1 pop esi */
  ESI = (pop32());
  /* 1042c5f2 pop edi */
  EDI = (pop32());
  /* 1042c5f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1042c5f4 ret  */
  ESPCHK(0x1042c2c0u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1042c600 (104 bytes, 43 insns) */
void f_1042c600(void) {
  FTRACE(0x1042c600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042c600 push ebx */
  push32((uint32_t)(EBX));
  /* 1042c601 push esi */
  push32((uint32_t)(ESI));
  /* 1042c602 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1042c606 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042c608 jne 0x1042c622 */
  if (!C.zf) goto L_1042c622;
  /* 1042c60a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1042c60e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1042c612 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1042c614 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1042c616 mov ebx, eax */
  EBX = (EAX);
  /* 1042c618 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1042c61c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1042c61e mov edx, ebx */
  EDX = (EBX);
  /* 1042c620 jmp 0x1042c663 */
  goto L_1042c663;
L_1042c622:;
  /* 1042c622 mov ecx, eax */
  ECX = (EAX);
  /* 1042c624 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1042c628 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1042c62c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1042c630:;
  /* 1042c630 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1042c632 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1042c634 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1042c636 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1042c638 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1042c63a jne 0x1042c630 */
  if (!C.zf) goto L_1042c630;
  /* 1042c63c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1042c63e mov esi, eax */
  ESI = (EAX);
  /* 1042c640 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1042c644 mov ecx, eax */
  ECX = (EAX);
  /* 1042c646 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1042c64a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1042c64c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042c64e jb 0x1042c65e */
  if (C.cf) goto L_1042c65e;
  /* 1042c650 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042c654 ja 0x1042c65e */
  if ((!C.cf&&!C.zf)) goto L_1042c65e;
  /* 1042c656 jb 0x1042c65f */
  if (C.cf) goto L_1042c65f;
  /* 1042c658 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042c65c jbe 0x1042c65f */
  if ((C.cf||C.zf)) goto L_1042c65f;
L_1042c65e:;
  /* 1042c65e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1042c65f:;
  /* 1042c65f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1042c661 mov eax, esi */
  EAX = (ESI);
L_1042c663:;
  /* 1042c663 pop esi */
  ESI = (pop32());
  /* 1042c664 pop ebx */
  EBX = (pop32());
  /* 1042c665 ret 0x10 */
  ESPCHK(0x1042c600u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1042c670 (117 bytes, 44 insns) */
void f_1042c670(void) {
  FTRACE(0x1042c670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042c670 push ebx */
  push32((uint32_t)(EBX));
  /* 1042c671 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1042c675 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042c677 jne 0x1042c691 */
  if (!C.zf) goto L_1042c691;
  /* 1042c679 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1042c67d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1042c681 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1042c683 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1042c685 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1042c689 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1042c68b mov eax, edx */
  EAX = (EDX);
  /* 1042c68d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1042c68f jmp 0x1042c6e1 */
  goto L_1042c6e1;
L_1042c691:;
  /* 1042c691 mov ecx, eax */
  ECX = (EAX);
  /* 1042c693 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1042c697 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1042c69b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1042c69f:;
  /* 1042c69f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1042c6a1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1042c6a3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1042c6a5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1042c6a7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1042c6a9 jne 0x1042c69f */
  if (!C.zf) goto L_1042c69f;
  /* 1042c6ab div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1042c6ad mov ecx, eax */
  ECX = (EAX);
  /* 1042c6af mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1042c6b3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1042c6b4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1042c6b8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042c6ba jb 0x1042c6ca */
  if (C.cf) goto L_1042c6ca;
  /* 1042c6bc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042c6c0 ja 0x1042c6ca */
  if ((!C.cf&&!C.zf)) goto L_1042c6ca;
  /* 1042c6c2 jb 0x1042c6d2 */
  if (C.cf) goto L_1042c6d2;
  /* 1042c6c4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042c6c8 jbe 0x1042c6d2 */
  if ((C.cf||C.zf)) goto L_1042c6d2;
L_1042c6ca:;
  /* 1042c6ca sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042c6ce sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1042c6d2:;
  /* 1042c6d2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042c6d6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042c6da neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1042c6dc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1042c6de sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1042c6e1:;
  /* 1042c6e1 pop ebx */
  EBX = (pop32());
  /* 1042c6e2 ret 0x10 */
  ESPCHK(0x1042c670u, _esp0);
  ESP += 20; return;
}

/* FUN_1000c6f0 @ 0x1042c6f0 (628 bytes, 214 insns) */
void f_1042c6f0(void) {
  FTRACE(0x1042c6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042c6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1042c6f1 mov ebp, esp */
  EBP = (ESP);
  /* 1042c6f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042c6f6 push ebx */
  push32((uint32_t)(EBX));
  /* 1042c6f7 push esi */
  push32((uint32_t)(ESI));
  /* 1042c6f8 push edi */
  push32((uint32_t)(EDI));
L_1042c6f9:;
  /* 1042c6f9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042c6fd jne 0x1042c71d */
  if (!C.zf) goto L_1042c71d;
  /* 1042c6ff push 0x1044d0a4 */
  push32((uint32_t)(0x1044d0a4u));
  /* 1042c704 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042c706 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1042c708 push 0x1044d098 */
  push32((uint32_t)(0x1044d098u));
  /* 1042c70d push 2 */
  push32((uint32_t)(0x2u));
  /* 1042c70f call 0x10424aa0 */
  push32(0x1042c714u); f_10424aa0();
  /* 1042c714 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042c717 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042c71a jne 0x1042c71d */
  if (!C.zf) goto L_1042c71d;
  /* 1042c71c int3  */
  x86_unimpl("int3 @ 0x1042c71c");
L_1042c71d:;
  /* 1042c71d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042c71f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042c721 jne 0x1042c6f9 */
  if (!C.zf) goto L_1042c6f9;
  /* 1042c723 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042c726 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1042c729 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042c72c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1042c72f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1042c732 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042c735 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1042c738 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1042c73e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042c740 je 0x1042c74f */
  if (C.zf) goto L_1042c74f;
  /* 1042c742 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042c745 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1042c748 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1042c74b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042c74d je 0x1042c765 */
  if (C.zf) goto L_1042c765;
L_1042c74f:;
  /* 1042c74f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042c752 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1042c755 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1042c757 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042c75a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1042c75d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042c760 jmp 0x1042c95d */
  goto L_1042c95d;
L_1042c765:;
  /* 1042c765 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042c768 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1042c76b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1042c76e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042c770 je 0x1042c7bc */
  if (C.zf) goto L_1042c7bc;
  /* 1042c772 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042c775 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1042c77c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042c77f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1042c782 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1042c785 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042c787 je 0x1042c7a5 */
  if (C.zf) goto L_1042c7a5;
  /* 1042c789 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042c78c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042c78f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1042c792 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1042c794 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042c797 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1042c79a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1042c79d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042c7a0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1042c7a3 jmp 0x1042c7bc */
  goto L_1042c7bc;
L_1042c7a5:;
  /* 1042c7a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042c7a8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1042c7ab or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1042c7ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042c7b1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1042c7b4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042c7b7 jmp 0x1042c95d */
  goto L_1042c95d;
L_1042c7bc:;
  /* 1042c7bc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042c7bf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1042c7c2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1042c7c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042c7c8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1042c7cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042c7ce mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1042c7d1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1042c7d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042c7d7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1042c7da mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042c7dd mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1042c7e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1042c7eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042c7ee mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1042c7f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042c7f4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1042c7f7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1042c7fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042c7ff jne 0x1042c82f */
  if (!C.zf) goto L_1042c82f;
  /* 1042c801 cmp dword ptr [ebp - 8], 0x10450140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10450140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042c808 je 0x1042c813 */
  if (C.zf) goto L_1042c813;
  /* 1042c80a cmp dword ptr [ebp - 8], 0x10450160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10450160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042c811 jne 0x1042c823 */
  if (!C.zf) goto L_1042c823;
L_1042c813:;
  /* 1042c813 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042c816 push edx */
  push32((uint32_t)(EDX));
  /* 1042c817 call 0x1042e660 */
  push32(0x1042c81cu); f_1042e660();
  /* 1042c81c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042c81f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042c821 jne 0x1042c82f */
  if (!C.zf) goto L_1042c82f;
L_1042c823:;
  /* 1042c823 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042c826 push eax */
  push32((uint32_t)(EAX));
  /* 1042c827 call 0x1042e590 */
  push32(0x1042c82cu); f_1042e590();
  /* 1042c82c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1042c82f:;
  /* 1042c82f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042c832 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1042c835 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1042c83b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042c83d je 0x1042c91b */
  if (C.zf) goto L_1042c91b;
L_1042c843:;
  /* 1042c843 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042c846 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042c849 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1042c84b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042c84e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042c850 jge 0x1042c873 */
  if ((C.sf==C.of)) goto L_1042c873;
  /* 1042c852 push 0x1044d058 */
  push32((uint32_t)(0x1044d058u));
  /* 1042c857 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042c859 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1042c85e push 0x1044d098 */
  push32((uint32_t)(0x1044d098u));
  /* 1042c863 push 2 */
  push32((uint32_t)(0x2u));
  /* 1042c865 call 0x10424aa0 */
  push32(0x1042c86au); f_10424aa0();
  /* 1042c86a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042c86d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042c870 jne 0x1042c873 */
  if (!C.zf) goto L_1042c873;
  /* 1042c872 int3  */
  x86_unimpl("int3 @ 0x1042c872");
L_1042c873:;
  /* 1042c873 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042c875 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042c877 jne 0x1042c843 */
  if (!C.zf) goto L_1042c843;
  /* 1042c879 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042c87c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042c87f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1042c881 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042c884 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1042c887 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042c88a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1042c88d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042c890 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042c893 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1042c895 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042c898 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1042c89b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042c89e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042c8a1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1042c8a4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042c8a8 jle 0x1042c8c6 */
  if ((C.zf||C.sf!=C.of)) goto L_1042c8c6;
  /* 1042c8aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042c8ad push ecx */
  push32((uint32_t)(ECX));
  /* 1042c8ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042c8b1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1042c8b4 push eax */
  push32((uint32_t)(EAX));
  /* 1042c8b5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042c8b8 push ecx */
  push32((uint32_t)(ECX));
  /* 1042c8b9 call 0x1042e280 */
  push32(0x1042c8beu); f_1042e280();
  /* 1042c8be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042c8c1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1042c8c4 jmp 0x1042c90e */
  goto L_1042c90e;
L_1042c8c6:;
  /* 1042c8c6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042c8ca je 0x1042c8e9 */
  if (C.zf) goto L_1042c8e9;
  /* 1042c8cc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042c8cf sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1042c8d2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042c8d5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1042c8d8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042c8db mov ecx, dword ptr [edx*4 + 0x10452f60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10452f60)));
  /* 1042c8e2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042c8e4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1042c8e7 jmp 0x1042c8f0 */
  goto L_1042c8f0;
L_1042c8e9:;
  /* 1042c8e9 mov dword ptr [ebp - 0x14], 0x1044fa60 */
  w32((uint32_t)(EBP + -0x14), (0x1044fa60u));
L_1042c8f0:;
  /* 1042c8f0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042c8f3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1042c8f7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1042c8fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042c8fc je 0x1042c90e */
  if (C.zf) goto L_1042c90e;
  /* 1042c8fe push 2 */
  push32((uint32_t)(0x2u));
  /* 1042c900 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042c902 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042c905 push ecx */
  push32((uint32_t)(ECX));
  /* 1042c906 call 0x1042e130 */
  push32(0x1042c90bu); f_1042e130();
  /* 1042c90b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1042c90e:;
  /* 1042c90e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042c911 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1042c914 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1042c917 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1042c919 jmp 0x1042c939 */
  goto L_1042c939;
L_1042c91b:;
  /* 1042c91b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1042c922 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042c925 push edx */
  push32((uint32_t)(EDX));
  /* 1042c926 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1042c929 push eax */
  push32((uint32_t)(EAX));
  /* 1042c92a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042c92d push ecx */
  push32((uint32_t)(ECX));
  /* 1042c92e call 0x1042e280 */
  push32(0x1042c933u); f_1042e280();
  /* 1042c933 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042c936 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1042c939:;
  /* 1042c939 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042c93c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042c93f je 0x1042c955 */
  if (C.zf) goto L_1042c955;
  /* 1042c941 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042c944 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1042c947 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1042c94a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042c94d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1042c950 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042c953 jmp 0x1042c95d */
  goto L_1042c95d;
L_1042c955:;
  /* 1042c955 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042c958 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1042c95d:;
  /* 1042c95d pop edi */
  EDI = (pop32());
  /* 1042c95e pop esi */
  ESI = (pop32());
  /* 1042c95f pop ebx */
  EBX = (pop32());
  /* 1042c960 mov esp, ebp */
  ESP = (EBP);
  /* 1042c962 pop ebp */
  EBP = (pop32());
  /* 1042c963 ret  */
  ESPCHK(0x1042c6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c970 @ 0x1042c970 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1042c970(void) {
  FTRACE(0x1042c970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042c970 push ebp */
  push32((uint32_t)(EBP));
  /* 1042c971 mov ebp, esp */
  EBP = (ESP);
  /* 1042c973 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042c979 push ebx */
  push32((uint32_t)(EBX));
  /* 1042c97a push esi */
  push32((uint32_t)(ESI));
  /* 1042c97b push edi */
  push32((uint32_t)(EDI));
  /* 1042c97c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1042c983 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1042c98d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1042c994:;
  /* 1042c994 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042c997 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1042c999 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1042c99c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1042c9a0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042c9a3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042c9a6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1042c9a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042c9ab je 0x1042d587 */
  if (C.zf) goto L_1042d587;
  /* 1042c9b1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042c9b8 jl 0x1042d587 */
  if ((C.sf!=C.of)) goto L_1042d587;
  /* 1042c9be movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1042c9c2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042c9c5 jl 0x1042c9e6 */
  if ((C.sf!=C.of)) goto L_1042c9e6;
  /* 1042c9c7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1042c9cb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042c9ce jg 0x1042c9e6 */
  if ((!C.zf&&C.sf==C.of)) goto L_1042c9e6;
  /* 1042c9d0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1042c9d4 movsx ecx, byte ptr [eax + 0x1044d090] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1044d090))));
  /* 1042c9db and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1042c9de mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1042c9e4 jmp 0x1042c9f0 */
  goto L_1042c9f0;
L_1042c9e6:;
  /* 1042c9e6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1042c9f0:;
  /* 1042c9f0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1042c9f6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1042c9f9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042c9fc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042c9ff movsx edx, byte ptr [ecx + eax*8 + 0x1044d0b0] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1044d0b0))));
  /* 1042ca07 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1042ca0a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1042ca0d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042ca10 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1042ca16 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042ca1d ja 0x1042d582 */
  if ((!C.cf&&!C.zf)) goto L_1042d582;
  /* 1042ca23 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1042ca29 jmp dword ptr [ecx*4 + 0x1042d594] */
  switch (ECX) {
    case 0: goto L_1042ca30;
    case 1: goto L_1042caca;
    case 2: goto L_1042cb0c;
    case 3: goto L_1042cb7b;
    case 4: goto L_1042cbd3;
    case 5: goto L_1042cbe2;
    case 6: goto L_1042cc2e;
    case 7: goto L_1042ccc1;
    case 8: goto L_1042cb58;
    case 9: goto L_1042cb63;
    case 10: goto L_1042cb4e;
    case 11: goto L_1042cb43;
    case 12: goto L_1042cb6e;
    case 13: goto L_1042cb76;
    default: x86_unimpl("switch@0x1042ca29 out of table"); return;
  }
L_1042ca30:;
  /* 1042ca30 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1042ca37 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1042ca3a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1042ca40 mov eax, dword ptr [0x1044fc98] */
  EAX = (r32((uint32_t)(0x1044fc98)));
  /* 1042ca45 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1042ca47 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1042ca4b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1042ca51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042ca53 je 0x1042caad */
  if (C.zf) goto L_1042caad;
  /* 1042ca55 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1042ca5b push edx */
  push32((uint32_t)(EDX));
  /* 1042ca5c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042ca5f push eax */
  push32((uint32_t)(EAX));
  /* 1042ca60 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1042ca64 push ecx */
  push32((uint32_t)(ECX));
  /* 1042ca65 call 0x1042d6a0 */
  push32(0x1042ca6au); f_1042d6a0();
  /* 1042ca6a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ca6d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042ca70 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1042ca72 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1042ca75 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042ca78 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ca7b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1042ca7e:;
  /* 1042ca7e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1042ca82 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042ca84 jne 0x1042caa7 */
  if (!C.zf) goto L_1042caa7;
  /* 1042ca86 push 0x1044d130 */
  push32((uint32_t)(0x1044d130u));
  /* 1042ca8b push 0 */
  push32((uint32_t)(0x0u));
  /* 1042ca8d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1042ca92 push 0x1044d124 */
  push32((uint32_t)(0x1044d124u));
  /* 1042ca97 push 2 */
  push32((uint32_t)(0x2u));
  /* 1042ca99 call 0x10424aa0 */
  push32(0x1042ca9eu); f_10424aa0();
  /* 1042ca9e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042caa1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042caa4 jne 0x1042caa7 */
  if (!C.zf) goto L_1042caa7;
  /* 1042caa6 int3  */
  x86_unimpl("int3 @ 0x1042caa6");
L_1042caa7:;
  /* 1042caa7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042caa9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042caab jne 0x1042ca7e */
  if (!C.zf) goto L_1042ca7e;
L_1042caad:;
  /* 1042caad lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1042cab3 push ecx */
  push32((uint32_t)(ECX));
  /* 1042cab4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042cab7 push edx */
  push32((uint32_t)(EDX));
  /* 1042cab8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1042cabc push eax */
  push32((uint32_t)(EAX));
  /* 1042cabd call 0x1042d6a0 */
  push32(0x1042cac2u); f_1042d6a0();
  /* 1042cac2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042cac5 jmp 0x1042d582 */
  goto L_1042d582;
L_1042caca:;
  /* 1042caca mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1042cad1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042cad4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1042cada mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1042cae0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1042cae6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1042caec mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1042caef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1042caf6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1042cb00 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1042cb07 jmp 0x1042d582 */
  goto L_1042d582;
L_1042cb0c:;
  /* 1042cb0c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1042cb10 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1042cb16 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1042cb1c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042cb1f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1042cb25 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042cb2c ja 0x1042cb76 */
  if ((!C.cf&&!C.zf)) goto L_1042cb76;
  /* 1042cb2e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1042cb34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042cb36 mov al, byte ptr [ecx + 0x1042d5cc] */
  AL = (r8((uint32_t)(ECX + 0x1042d5cc)));
  /* 1042cb3c jmp dword ptr [eax*4 + 0x1042d5b4] */
  switch (EAX) {
    case 0: goto L_1042cb58;
    case 1: goto L_1042cb63;
    case 2: goto L_1042cb4e;
    case 3: goto L_1042cb43;
    case 4: goto L_1042cb6e;
    case 5: goto L_1042cb76;
    default: x86_unimpl("switch@0x1042cb3c out of table"); return;
  }
L_1042cb43:;
  /* 1042cb43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042cb46 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1042cb49 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1042cb4c jmp 0x1042cb76 */
  goto L_1042cb76;
L_1042cb4e:;
  /* 1042cb4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042cb51 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1042cb53 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1042cb56 jmp 0x1042cb76 */
  goto L_1042cb76;
L_1042cb58:;
  /* 1042cb58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042cb5b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1042cb5e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1042cb61 jmp 0x1042cb76 */
  goto L_1042cb76;
L_1042cb63:;
  /* 1042cb63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042cb66 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1042cb69 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1042cb6c jmp 0x1042cb76 */
  goto L_1042cb76;
L_1042cb6e:;
  /* 1042cb6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042cb71 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1042cb73 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1042cb76:;
  /* 1042cb76 jmp 0x1042d582 */
  goto L_1042d582;
L_1042cb7b:;
  /* 1042cb7b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1042cb7f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042cb82 jne 0x1042cbb7 */
  if (!C.zf) goto L_1042cbb7;
  /* 1042cb84 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1042cb87 push edx */
  push32((uint32_t)(EDX));
  /* 1042cb88 call 0x1042d7b0 */
  push32(0x1042cb8du); f_1042d7b0();
  /* 1042cb8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042cb90 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1042cb96 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042cb9d jge 0x1042cbb5 */
  if ((C.sf==C.of)) goto L_1042cbb5;
  /* 1042cb9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042cba2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1042cba4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1042cba7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1042cbad neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1042cbaf mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1042cbb5:;
  /* 1042cbb5 jmp 0x1042cbce */
  goto L_1042cbce;
L_1042cbb7:;
  /* 1042cbb7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1042cbbd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042cbc0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1042cbc4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1042cbc8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1042cbce:;
  /* 1042cbce jmp 0x1042d582 */
  goto L_1042d582;
L_1042cbd3:;
  /* 1042cbd3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1042cbdd jmp 0x1042d582 */
  goto L_1042d582;
L_1042cbe2:;
  /* 1042cbe2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1042cbe6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042cbe9 jne 0x1042cc12 */
  if (!C.zf) goto L_1042cc12;
  /* 1042cbeb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1042cbee push eax */
  push32((uint32_t)(EAX));
  /* 1042cbef call 0x1042d7b0 */
  push32(0x1042cbf4u); f_1042d7b0();
  /* 1042cbf4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042cbf7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1042cbfd cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042cc04 jge 0x1042cc10 */
  if ((C.sf==C.of)) goto L_1042cc10;
  /* 1042cc06 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1042cc10:;
  /* 1042cc10 jmp 0x1042cc29 */
  goto L_1042cc29;
L_1042cc12:;
  /* 1042cc12 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1042cc18 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042cc1b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1042cc1f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1042cc23 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1042cc29:;
  /* 1042cc29 jmp 0x1042d582 */
  goto L_1042d582;
L_1042cc2e:;
  /* 1042cc2e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1042cc32 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1042cc38 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1042cc3e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042cc41 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1042cc47 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042cc4e ja 0x1042ccbc */
  if ((!C.cf&&!C.zf)) goto L_1042ccbc;
  /* 1042cc50 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1042cc56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042cc58 mov al, byte ptr [ecx + 0x1042d5f1] */
  AL = (r8((uint32_t)(ECX + 0x1042d5f1)));
  /* 1042cc5e jmp dword ptr [eax*4 + 0x1042d5dd] */
  switch (EAX) {
    case 0: goto L_1042cc70;
    case 1: goto L_1042cca9;
    case 2: goto L_1042cc65;
    case 3: goto L_1042ccb3;
    case 4: goto L_1042ccbc;
    default: x86_unimpl("switch@0x1042cc5e out of table"); return;
  }
L_1042cc65:;
  /* 1042cc65 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042cc68 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1042cc6b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1042cc6e jmp 0x1042ccbc */
  goto L_1042ccbc;
L_1042cc70:;
  /* 1042cc70 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042cc73 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1042cc76 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042cc79 jne 0x1042cc9b */
  if (!C.zf) goto L_1042cc9b;
  /* 1042cc7b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042cc7e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1042cc82 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042cc85 jne 0x1042cc9b */
  if (!C.zf) goto L_1042cc9b;
  /* 1042cc87 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042cc8a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042cc8d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1042cc90 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042cc93 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1042cc96 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1042cc99 jmp 0x1042cca7 */
  goto L_1042cca7;
L_1042cc9b:;
  /* 1042cc9b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1042cca2 jmp 0x1042ca30 */
  goto L_1042ca30;
L_1042cca7:;
  /* 1042cca7 jmp 0x1042ccbc */
  goto L_1042ccbc;
L_1042cca9:;
  /* 1042cca9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042ccac or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1042ccae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1042ccb1 jmp 0x1042ccbc */
  goto L_1042ccbc;
L_1042ccb3:;
  /* 1042ccb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042ccb6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1042ccb9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1042ccbc:;
  /* 1042ccbc jmp 0x1042d582 */
  goto L_1042d582;
L_1042ccc1:;
  /* 1042ccc1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1042ccc5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1042cccb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1042ccd1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042ccd4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1042ccda cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042cce1 ja 0x1042d3a7 */
  if ((!C.cf&&!C.zf)) goto L_1042d3a7;
  /* 1042cce7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1042cced xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1042ccef mov cl, byte ptr [edx + 0x1042d65c] */
  CL = (r8((uint32_t)(EDX + 0x1042d65c)));
  /* 1042ccf5 jmp dword ptr [ecx*4 + 0x1042d620] */
  switch (ECX) {
    case 0: goto L_1042ccfc;
    case 1: goto L_1042cf90;
    case 2: goto L_1042ce20;
    case 3: goto L_1042d0c9;
    case 4: goto L_1042cd8b;
    case 5: goto L_1042cd11;
    case 6: goto L_1042d09b;
    case 7: goto L_1042cfa0;
    case 8: goto L_1042cf45;
    case 9: goto L_1042d115;
    case 10: goto L_1042d0bf;
    case 11: goto L_1042ce36;
    case 12: goto L_1042d0b3;
    case 13: goto L_1042d0d5;
    case 14: goto L_1042d3a7;
    default: x86_unimpl("switch@0x1042ccf5 out of table"); return;
  }
L_1042ccfc:;
  /* 1042ccfc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042ccff and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1042cd04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042cd06 jne 0x1042cd11 */
  if (!C.zf) goto L_1042cd11;
  /* 1042cd08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042cd0b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1042cd0e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1042cd11:;
  /* 1042cd11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042cd14 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1042cd1a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042cd1c je 0x1042cd57 */
  if (C.zf) goto L_1042cd57;
  /* 1042cd1e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1042cd21 push eax */
  push32((uint32_t)(EAX));
  /* 1042cd22 call 0x1042d7f0 */
  push32(0x1042cd27u); f_1042d7f0();
  /* 1042cd27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042cd2a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1042cd2e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1042cd32 push ecx */
  push32((uint32_t)(ECX));
  /* 1042cd33 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1042cd39 push edx */
  push32((uint32_t)(EDX));
  /* 1042cd3a call 0x1042e8d0 */
  push32(0x1042cd3fu); f_1042e8d0();
  /* 1042cd3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042cd42 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1042cd45 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042cd49 jge 0x1042cd55 */
  if ((C.sf==C.of)) goto L_1042cd55;
  /* 1042cd4b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1042cd55:;
  /* 1042cd55 jmp 0x1042cd7d */
  goto L_1042cd7d;
L_1042cd57:;
  /* 1042cd57 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1042cd5a push eax */
  push32((uint32_t)(EAX));
  /* 1042cd5b call 0x1042d7b0 */
  push32(0x1042cd60u); f_1042d7b0();
  /* 1042cd60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042cd63 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1042cd6a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1042cd70 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1042cd76 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1042cd7d:;
  /* 1042cd7d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1042cd83 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1042cd86 jmp 0x1042d3a7 */
  goto L_1042d3a7;
L_1042cd8b:;
  /* 1042cd8b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1042cd8e push eax */
  push32((uint32_t)(EAX));
  /* 1042cd8f call 0x1042d7b0 */
  push32(0x1042cd94u); f_1042d7b0();
  /* 1042cd94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042cd97 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1042cd9d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042cda4 je 0x1042cdb2 */
  if (C.zf) goto L_1042cdb2;
  /* 1042cda6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1042cdac cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042cdb0 jne 0x1042cdcc */
  if (!C.zf) goto L_1042cdcc;
L_1042cdb2:;
  /* 1042cdb2 mov edx, dword ptr [0x1044ffb0] */
  EDX = (r32((uint32_t)(0x1044ffb0)));
  /* 1042cdb8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1042cdbb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042cdbe push eax */
  push32((uint32_t)(EAX));
  /* 1042cdbf call 0x10428810 */
  push32(0x1042cdc4u); f_10428810();
  /* 1042cdc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042cdc7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1042cdca jmp 0x1042ce1b */
  goto L_1042ce1b;
L_1042cdcc:;
  /* 1042cdcc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042cdcf and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1042cdd5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042cdd7 je 0x1042cdfc */
  if (C.zf) goto L_1042cdfc;
  /* 1042cdd9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1042cddf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1042cde2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1042cde5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1042cdeb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1042cdee shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1042cdf0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1042cdf3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1042cdfa jmp 0x1042ce1b */
  goto L_1042ce1b;
L_1042cdfc:;
  /* 1042cdfc mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1042ce03 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1042ce09 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1042ce0c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1042ce0f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1042ce15 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1042ce18 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1042ce1b:;
  /* 1042ce1b jmp 0x1042d3a7 */
  goto L_1042d3a7;
L_1042ce20:;
  /* 1042ce20 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042ce23 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1042ce29 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042ce2b jne 0x1042ce36 */
  if (!C.zf) goto L_1042ce36;
  /* 1042ce2d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042ce30 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1042ce33 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1042ce36:;
  /* 1042ce36 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042ce3d jne 0x1042ce4b */
  if (!C.zf) goto L_1042ce4b;
  /* 1042ce3f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1042ce49 jmp 0x1042ce57 */
  goto L_1042ce57;
L_1042ce4b:;
  /* 1042ce4b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1042ce51 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1042ce57:;
  /* 1042ce57 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1042ce5d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1042ce63 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1042ce66 push edx */
  push32((uint32_t)(EDX));
  /* 1042ce67 call 0x1042d7b0 */
  push32(0x1042ce6cu); f_1042d7b0();
  /* 1042ce6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ce6f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1042ce72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042ce75 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1042ce7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042ce7c je 0x1042cee6 */
  if (C.zf) goto L_1042cee6;
  /* 1042ce7e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042ce82 jne 0x1042ce8d */
  if (!C.zf) goto L_1042ce8d;
  /* 1042ce84 mov ecx, dword ptr [0x1044ffb4] */
  ECX = (r32((uint32_t)(0x1044ffb4)));
  /* 1042ce8a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1042ce8d:;
  /* 1042ce8d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1042ce94 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042ce97 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1042ce9d:;
  /* 1042ce9d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1042cea3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1042cea9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042ceac mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1042ceb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042ceb4 je 0x1042ced6 */
  if (C.zf) goto L_1042ced6;
  /* 1042ceb6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1042cebc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042cebe mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1042cec1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042cec3 je 0x1042ced6 */
  if (C.zf) goto L_1042ced6;
  /* 1042cec5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1042cecb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042cece mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1042ced4 jmp 0x1042ce9d */
  goto L_1042ce9d;
L_1042ced6:;
  /* 1042ced6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1042cedc sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042cedf sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1042cee1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1042cee4 jmp 0x1042cf40 */
  goto L_1042cf40;
L_1042cee6:;
  /* 1042cee6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042ceea jne 0x1042cef4 */
  if (!C.zf) goto L_1042cef4;
  /* 1042ceec mov eax, dword ptr [0x1044ffb0] */
  EAX = (r32((uint32_t)(0x1044ffb0)));
  /* 1042cef1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1042cef4:;
  /* 1042cef4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042cef7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1042cefd:;
  /* 1042cefd mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1042cf03 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1042cf09 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042cf0c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1042cf12 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042cf14 je 0x1042cf34 */
  if (C.zf) goto L_1042cf34;
  /* 1042cf16 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1042cf1c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1042cf1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042cf21 je 0x1042cf34 */
  if (C.zf) goto L_1042cf34;
  /* 1042cf23 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1042cf29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042cf2c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1042cf32 jmp 0x1042cefd */
  goto L_1042cefd;
L_1042cf34:;
  /* 1042cf34 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1042cf3a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042cf3d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1042cf40:;
  /* 1042cf40 jmp 0x1042d3a7 */
  goto L_1042d3a7;
L_1042cf45:;
  /* 1042cf45 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1042cf48 push edx */
  push32((uint32_t)(EDX));
  /* 1042cf49 call 0x1042d7b0 */
  push32(0x1042cf4eu); f_1042d7b0();
  /* 1042cf4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042cf51 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1042cf57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042cf5a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1042cf5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042cf5f je 0x1042cf73 */
  if (C.zf) goto L_1042cf73;
  /* 1042cf61 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1042cf67 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1042cf6e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1042cf71 jmp 0x1042cf81 */
  goto L_1042cf81;
L_1042cf73:;
  /* 1042cf73 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1042cf79 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1042cf7f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1042cf81:;
  /* 1042cf81 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1042cf8b jmp 0x1042d3a7 */
  goto L_1042d3a7;
L_1042cf90:;
  /* 1042cf90 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1042cf97 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1042cf9a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1042cf9d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1042cfa0:;
  /* 1042cfa0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042cfa3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1042cfa5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1042cfa8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1042cfae mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1042cfb1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042cfb8 jge 0x1042cfc6 */
  if ((C.sf==C.of)) goto L_1042cfc6;
  /* 1042cfba mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1042cfc4 jmp 0x1042cfe2 */
  goto L_1042cfe2;
L_1042cfc6:;
  /* 1042cfc6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042cfcd jne 0x1042cfe2 */
  if (!C.zf) goto L_1042cfe2;
  /* 1042cfcf movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1042cfd3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042cfd6 jne 0x1042cfe2 */
  if (!C.zf) goto L_1042cfe2;
  /* 1042cfd8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1042cfe2:;
  /* 1042cfe2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1042cfe5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042cfe8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1042cfeb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1042cfee sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042cff1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1042cff3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1042cff6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1042cffc mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1042d002 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042d005 push ecx */
  push32((uint32_t)(ECX));
  /* 1042d006 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1042d00c push edx */
  push32((uint32_t)(EDX));
  /* 1042d00d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1042d011 push eax */
  push32((uint32_t)(EAX));
  /* 1042d012 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042d015 push ecx */
  push32((uint32_t)(ECX));
  /* 1042d016 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1042d01c push edx */
  push32((uint32_t)(EDX));
  /* 1042d01d call dword ptr [0x104503a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104503a0))), 0x1042d023u);
  /* 1042d023 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042d026 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042d029 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1042d02e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042d030 je 0x1042d048 */
  if (C.zf) goto L_1042d048;
  /* 1042d032 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042d039 jne 0x1042d048 */
  if (!C.zf) goto L_1042d048;
  /* 1042d03b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042d03e push ecx */
  push32((uint32_t)(ECX));
  /* 1042d03f call dword ptr [0x104503ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x104503ac))), 0x1042d045u);
  /* 1042d045 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1042d048:;
  /* 1042d048 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1042d04c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042d04f jne 0x1042d06a */
  if (!C.zf) goto L_1042d06a;
  /* 1042d051 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042d054 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1042d059 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042d05b jne 0x1042d06a */
  if (!C.zf) goto L_1042d06a;
  /* 1042d05d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042d060 push ecx */
  push32((uint32_t)(ECX));
  /* 1042d061 call dword ptr [0x104503a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104503a4))), 0x1042d067u);
  /* 1042d067 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1042d06a:;
  /* 1042d06a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042d06d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1042d070 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042d073 jne 0x1042d087 */
  if (!C.zf) goto L_1042d087;
  /* 1042d075 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042d078 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1042d07b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1042d07e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042d081 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042d084 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1042d087:;
  /* 1042d087 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042d08a push eax */
  push32((uint32_t)(EAX));
  /* 1042d08b call 0x10428810 */
  push32(0x1042d090u); f_10428810();
  /* 1042d090 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042d093 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1042d096 jmp 0x1042d3a7 */
  goto L_1042d3a7;
L_1042d09b:;
  /* 1042d09b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042d09e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1042d0a1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1042d0a4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1042d0ae jmp 0x1042d135 */
  goto L_1042d135;
L_1042d0b3:;
  /* 1042d0b3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1042d0bd jmp 0x1042d135 */
  goto L_1042d135;
L_1042d0bf:;
  /* 1042d0bf mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1042d0c9:;
  /* 1042d0c9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1042d0d3 jmp 0x1042d0df */
  goto L_1042d0df;
L_1042d0d5:;
  /* 1042d0d5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1042d0df:;
  /* 1042d0df mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1042d0e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042d0ec and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1042d0f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042d0f4 je 0x1042d113 */
  if (C.zf) goto L_1042d113;
  /* 1042d0f6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1042d0fd mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1042d103 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042d106 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1042d10c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1042d113:;
  /* 1042d113 jmp 0x1042d135 */
  goto L_1042d135;
L_1042d115:;
  /* 1042d115 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1042d11f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042d122 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1042d128 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042d12a je 0x1042d135 */
  if (C.zf) goto L_1042d135;
  /* 1042d12c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042d12f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1042d132 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1042d135:;
  /* 1042d135 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042d138 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1042d13d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042d13f je 0x1042d15e */
  if (C.zf) goto L_1042d15e;
  /* 1042d141 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1042d144 push ecx */
  push32((uint32_t)(ECX));
  /* 1042d145 call 0x1042d7d0 */
  push32(0x1042d14au); f_1042d7d0();
  /* 1042d14a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042d14d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1042d153 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1042d159 jmp 0x1042d1ef */
  goto L_1042d1ef;
L_1042d15e:;
  /* 1042d15e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042d161 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1042d164 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042d166 je 0x1042d1b0 */
  if (C.zf) goto L_1042d1b0;
  /* 1042d168 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042d16b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1042d16e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042d170 je 0x1042d190 */
  if (C.zf) goto L_1042d190;
  /* 1042d172 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1042d175 push ecx */
  push32((uint32_t)(ECX));
  /* 1042d176 call 0x1042d7b0 */
  push32(0x1042d17bu); f_1042d7b0();
  /* 1042d17b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042d17e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1042d181 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1042d182 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1042d188 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1042d18e jmp 0x1042d1ae */
  goto L_1042d1ae;
L_1042d190:;
  /* 1042d190 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1042d193 push edx */
  push32((uint32_t)(EDX));
  /* 1042d194 call 0x1042d7b0 */
  push32(0x1042d199u); f_1042d7b0();
  /* 1042d199 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042d19c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042d1a1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1042d1a2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1042d1a8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1042d1ae:;
  /* 1042d1ae jmp 0x1042d1ef */
  goto L_1042d1ef;
L_1042d1b0:;
  /* 1042d1b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042d1b3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1042d1b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042d1b8 je 0x1042d1d5 */
  if (C.zf) goto L_1042d1d5;
  /* 1042d1ba lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1042d1bd push ecx */
  push32((uint32_t)(ECX));
  /* 1042d1be call 0x1042d7b0 */
  push32(0x1042d1c3u); f_1042d7b0();
  /* 1042d1c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042d1c6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1042d1c7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1042d1cd mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1042d1d3 jmp 0x1042d1ef */
  goto L_1042d1ef;
L_1042d1d5:;
  /* 1042d1d5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1042d1d8 push edx */
  push32((uint32_t)(EDX));
  /* 1042d1d9 call 0x1042d7b0 */
  push32(0x1042d1deu); f_1042d7b0();
  /* 1042d1de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042d1e1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1042d1e3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1042d1e9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1042d1ef:;
  /* 1042d1ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042d1f2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1042d1f5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042d1f7 je 0x1042d237 */
  if (C.zf) goto L_1042d237;
  /* 1042d1f9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042d200 jg 0x1042d237 */
  if ((!C.zf&&C.sf==C.of)) goto L_1042d237;
  /* 1042d202 jl 0x1042d20d */
  if ((C.sf!=C.of)) goto L_1042d20d;
  /* 1042d204 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042d20b jae 0x1042d237 */
  if (!C.cf) goto L_1042d237;
L_1042d20d:;
  /* 1042d20d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1042d213 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1042d215 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1042d21b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042d21e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1042d220 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1042d226 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1042d22c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042d22f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1042d232 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1042d235 jmp 0x1042d24f */
  goto L_1042d24f;
L_1042d237:;
  /* 1042d237 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1042d23d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1042d243 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1042d249 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1042d24f:;
  /* 1042d24f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042d252 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1042d258 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042d25a jne 0x1042d277 */
  if (!C.zf) goto L_1042d277;
  /* 1042d25c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1042d262 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1042d268 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1042d26b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1042d271 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1042d277:;
  /* 1042d277 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042d27e jge 0x1042d28c */
  if ((C.sf==C.of)) goto L_1042d28c;
  /* 1042d280 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1042d28a jmp 0x1042d295 */
  goto L_1042d295;
L_1042d28c:;
  /* 1042d28c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042d28f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1042d292 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1042d295:;
  /* 1042d295 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1042d29b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1042d2a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042d2a3 jne 0x1042d2ac */
  if (!C.zf) goto L_1042d2ac;
  /* 1042d2a5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1042d2ac:;
  /* 1042d2ac lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1042d2af mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1042d2b2:;
  /* 1042d2b2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1042d2b8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1042d2be sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042d2c1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1042d2c7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042d2c9 jg 0x1042d2df */
  if ((!C.zf&&C.sf==C.of)) goto L_1042d2df;
  /* 1042d2cb mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1042d2d1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1042d2d7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042d2d9 je 0x1042d360 */
  if (C.zf) goto L_1042d360;
L_1042d2df:;
  /* 1042d2df mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1042d2e5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1042d2e6 push edx */
  push32((uint32_t)(EDX));
  /* 1042d2e7 push eax */
  push32((uint32_t)(EAX));
  /* 1042d2e8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1042d2ee push edx */
  push32((uint32_t)(EDX));
  /* 1042d2ef mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1042d2f5 push eax */
  push32((uint32_t)(EAX));
  /* 1042d2f6 call 0x1042c670 */
  push32(0x1042d2fbu); f_1042c670();
  /* 1042d2fb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042d2fe mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1042d304 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1042d30a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1042d30b push edx */
  push32((uint32_t)(EDX));
  /* 1042d30c push eax */
  push32((uint32_t)(EAX));
  /* 1042d30d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1042d313 push ecx */
  push32((uint32_t)(ECX));
  /* 1042d314 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1042d31a push edx */
  push32((uint32_t)(EDX));
  /* 1042d31b call 0x1042c600 */
  push32(0x1042d320u); f_1042c600();
  /* 1042d320 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1042d326 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1042d32c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042d333 jle 0x1042d347 */
  if ((C.zf||C.sf!=C.of)) goto L_1042d347;
  /* 1042d335 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1042d33b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042d341 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1042d347:;
  /* 1042d347 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042d34a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1042d350 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1042d352 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042d355 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042d358 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1042d35b jmp 0x1042d2b2 */
  goto L_1042d2b2;
L_1042d360:;
  /* 1042d360 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1042d363 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042d366 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1042d369 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042d36c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042d36f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1042d372 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042d375 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1042d37a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042d37c je 0x1042d3a7 */
  if (C.zf) goto L_1042d3a7;
  /* 1042d37e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042d381 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1042d384 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042d387 jne 0x1042d38f */
  if (!C.zf) goto L_1042d38f;
  /* 1042d389 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042d38d jne 0x1042d3a7 */
  if (!C.zf) goto L_1042d3a7;
L_1042d38f:;
  /* 1042d38f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042d392 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042d395 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1042d398 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042d39b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1042d39e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042d3a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042d3a4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1042d3a7:;
  /* 1042d3a7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042d3ae jne 0x1042d582 */
  if (!C.zf) goto L_1042d582;
  /* 1042d3b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042d3b7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1042d3ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042d3bc je 0x1042d40d */
  if (C.zf) goto L_1042d40d;
  /* 1042d3be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042d3c1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1042d3c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042d3c9 je 0x1042d3db */
  if (C.zf) goto L_1042d3db;
  /* 1042d3cb mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1042d3d2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1042d3d9 jmp 0x1042d40d */
  goto L_1042d40d;
L_1042d3db:;
  /* 1042d3db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042d3de and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1042d3e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042d3e3 je 0x1042d3f5 */
  if (C.zf) goto L_1042d3f5;
  /* 1042d3e5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1042d3ec mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1042d3f3 jmp 0x1042d40d */
  goto L_1042d40d;
L_1042d3f5:;
  /* 1042d3f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042d3f8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1042d3fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042d3fd je 0x1042d40d */
  if (C.zf) goto L_1042d40d;
  /* 1042d3ff mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1042d406 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1042d40d:;
  /* 1042d40d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1042d413 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042d416 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042d419 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1042d41f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042d422 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1042d425 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042d427 jne 0x1042d445 */
  if (!C.zf) goto L_1042d445;
  /* 1042d429 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1042d42f push eax */
  push32((uint32_t)(EAX));
  /* 1042d430 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042d433 push ecx */
  push32((uint32_t)(ECX));
  /* 1042d434 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1042d43a push edx */
  push32((uint32_t)(EDX));
  /* 1042d43b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1042d43d call 0x1042d720 */
  push32(0x1042d442u); f_1042d720();
  /* 1042d442 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1042d445:;
  /* 1042d445 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1042d44b push eax */
  push32((uint32_t)(EAX));
  /* 1042d44c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042d44f push ecx */
  push32((uint32_t)(ECX));
  /* 1042d450 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042d453 push edx */
  push32((uint32_t)(EDX));
  /* 1042d454 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1042d45a push eax */
  push32((uint32_t)(EAX));
  /* 1042d45b call 0x1042d760 */
  push32(0x1042d460u); f_1042d760();
  /* 1042d460 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042d463 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042d466 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1042d469 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042d46b je 0x1042d493 */
  if (C.zf) goto L_1042d493;
  /* 1042d46d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042d470 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1042d473 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042d475 jne 0x1042d493 */
  if (!C.zf) goto L_1042d493;
  /* 1042d477 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1042d47d push eax */
  push32((uint32_t)(EAX));
  /* 1042d47e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042d481 push ecx */
  push32((uint32_t)(ECX));
  /* 1042d482 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1042d488 push edx */
  push32((uint32_t)(EDX));
  /* 1042d489 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1042d48b call 0x1042d720 */
  push32(0x1042d490u); f_1042d720();
  /* 1042d490 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1042d493:;
  /* 1042d493 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042d497 je 0x1042d541 */
  if (C.zf) goto L_1042d541;
  /* 1042d49d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042d4a1 jle 0x1042d541 */
  if ((C.zf||C.sf!=C.of)) goto L_1042d541;
  /* 1042d4a7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042d4aa mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1042d4b0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042d4b3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1042d4b9:;
  /* 1042d4b9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1042d4bf mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1042d4c5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042d4c8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1042d4ce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042d4d0 je 0x1042d53f */
  if (C.zf) goto L_1042d53f;
  /* 1042d4d2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1042d4d8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1042d4db mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1042d4e2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1042d4e9 push eax */
  push32((uint32_t)(EAX));
  /* 1042d4ea lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1042d4f0 push ecx */
  push32((uint32_t)(ECX));
  /* 1042d4f1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1042d4f7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042d4fa mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1042d500 call 0x1042e8d0 */
  push32(0x1042d505u); f_1042e8d0();
  /* 1042d505 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042d508 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1042d50e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042d515 jg 0x1042d519 */
  if ((!C.zf&&C.sf==C.of)) goto L_1042d519;
  /* 1042d517 jmp 0x1042d53f */
  goto L_1042d53f;
L_1042d519:;
  /* 1042d519 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1042d51f push eax */
  push32((uint32_t)(EAX));
  /* 1042d520 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042d523 push ecx */
  push32((uint32_t)(ECX));
  /* 1042d524 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1042d52a push edx */
  push32((uint32_t)(EDX));
  /* 1042d52b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1042d531 push eax */
  push32((uint32_t)(EAX));
  /* 1042d532 call 0x1042d760 */
  push32(0x1042d537u); f_1042d760();
  /* 1042d537 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042d53a jmp 0x1042d4b9 */
  goto L_1042d4b9;
L_1042d53f:;
  /* 1042d53f jmp 0x1042d55c */
  goto L_1042d55c;
L_1042d541:;
  /* 1042d541 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1042d547 push ecx */
  push32((uint32_t)(ECX));
  /* 1042d548 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042d54b push edx */
  push32((uint32_t)(EDX));
  /* 1042d54c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042d54f push eax */
  push32((uint32_t)(EAX));
  /* 1042d550 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042d553 push ecx */
  push32((uint32_t)(ECX));
  /* 1042d554 call 0x1042d760 */
  push32(0x1042d559u); f_1042d760();
  /* 1042d559 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1042d55c:;
  /* 1042d55c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042d55f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1042d562 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042d564 je 0x1042d582 */
  if (C.zf) goto L_1042d582;
  /* 1042d566 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1042d56c push eax */
  push32((uint32_t)(EAX));
  /* 1042d56d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042d570 push ecx */
  push32((uint32_t)(ECX));
  /* 1042d571 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1042d577 push edx */
  push32((uint32_t)(EDX));
  /* 1042d578 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1042d57a call 0x1042d720 */
  push32(0x1042d57fu); f_1042d720();
  /* 1042d57f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1042d582:;
  /* 1042d582 jmp 0x1042c994 */
  goto L_1042c994;
L_1042d587:;
  /* 1042d587 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1042d58d pop edi */
  EDI = (pop32());
  /* 1042d58e pop esi */
  ESI = (pop32());
  /* 1042d58f pop ebx */
  EBX = (pop32());
  /* 1042d590 mov esp, ebp */
  ESP = (EBP);
  /* 1042d592 pop ebp */
  EBP = (pop32());
  /* 1042d593 ret  */
  ESPCHK(0x1042c970u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d6a0 @ 0x1042d6a0 (119 bytes, 44 insns) */
void f_1042d6a0(void) {
  FTRACE(0x1042d6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042d6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1042d6a1 mov ebp, esp */
  EBP = (ESP);
  /* 1042d6a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1042d6a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042d6a7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1042d6aa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042d6ad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042d6b0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1042d6b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042d6b6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042d6ba jl 0x1042d6e2 */
  if ((C.sf!=C.of)) goto L_1042d6e2;
  /* 1042d6bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042d6bf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1042d6c1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1042d6c4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1042d6c6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1042d6ca and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1042d6d0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1042d6d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042d6d6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1042d6d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042d6db mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042d6de mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1042d6e0 jmp 0x1042d6f5 */
  goto L_1042d6f5;
L_1042d6e2:;
  /* 1042d6e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042d6e5 push edx */
  push32((uint32_t)(EDX));
  /* 1042d6e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042d6e9 push eax */
  push32((uint32_t)(EAX));
  /* 1042d6ea call 0x1042c6f0 */
  push32(0x1042d6efu); f_1042c6f0();
  /* 1042d6ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042d6f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1042d6f5:;
  /* 1042d6f5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042d6f9 jne 0x1042d706 */
  if (!C.zf) goto L_1042d706;
  /* 1042d6fb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1042d6fe mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1042d704 jmp 0x1042d713 */
  goto L_1042d713;
L_1042d706:;
  /* 1042d706 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1042d709 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1042d70b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042d70e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1042d711 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1042d713:;
  /* 1042d713 mov esp, ebp */
  ESP = (EBP);
  /* 1042d715 pop ebp */
  EBP = (pop32());
  /* 1042d716 ret  */
  ESPCHK(0x1042d6a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d720 @ 0x1042d720 (53 bytes, 23 insns) */
void f_1042d720(void) {
  FTRACE(0x1042d720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042d720 push ebp */
  push32((uint32_t)(EBP));
  /* 1042d721 mov ebp, esp */
  EBP = (ESP);
L_1042d723:;
  /* 1042d723 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042d726 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042d729 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042d72c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1042d72f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042d731 jle 0x1042d753 */
  if ((C.zf||C.sf!=C.of)) goto L_1042d753;
  /* 1042d733 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1042d736 push edx */
  push32((uint32_t)(EDX));
  /* 1042d737 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1042d73a push eax */
  push32((uint32_t)(EAX));
  /* 1042d73b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042d73e push ecx */
  push32((uint32_t)(ECX));
  /* 1042d73f call 0x1042d6a0 */
  push32(0x1042d744u); f_1042d6a0();
  /* 1042d744 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042d747 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1042d74a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042d74d jne 0x1042d751 */
  if (!C.zf) goto L_1042d751;
  /* 1042d74f jmp 0x1042d753 */
  goto L_1042d753;
L_1042d751:;
  /* 1042d751 jmp 0x1042d723 */
  goto L_1042d723;
L_1042d753:;
  /* 1042d753 pop ebp */
  EBP = (pop32());
  /* 1042d754 ret  */
  ESPCHK(0x1042d720u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d760 @ 0x1042d760 (74 bytes, 31 insns) */
void f_1042d760(void) {
  FTRACE(0x1042d760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042d760 push ebp */
  push32((uint32_t)(EBP));
  /* 1042d761 mov ebp, esp */
  EBP = (ESP);
  /* 1042d763 push ecx */
  push32((uint32_t)(ECX));
L_1042d764:;
  /* 1042d764 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042d767 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042d76a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042d76d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1042d770 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042d772 jle 0x1042d7a6 */
  if ((C.zf||C.sf!=C.of)) goto L_1042d7a6;
  /* 1042d774 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1042d777 push edx */
  push32((uint32_t)(EDX));
  /* 1042d778 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1042d77b push eax */
  push32((uint32_t)(EAX));
  /* 1042d77c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042d77f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1042d782 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1042d785 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042d788 push eax */
  push32((uint32_t)(EAX));
  /* 1042d789 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042d78c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042d78f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1042d792 call 0x1042d6a0 */
  push32(0x1042d797u); f_1042d6a0();
  /* 1042d797 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042d79a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1042d79d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042d7a0 jne 0x1042d7a4 */
  if (!C.zf) goto L_1042d7a4;
  /* 1042d7a2 jmp 0x1042d7a6 */
  goto L_1042d7a6;
L_1042d7a4:;
  /* 1042d7a4 jmp 0x1042d764 */
  goto L_1042d764;
L_1042d7a6:;
  /* 1042d7a6 mov esp, ebp */
  ESP = (EBP);
  /* 1042d7a8 pop ebp */
  EBP = (pop32());
  /* 1042d7a9 ret  */
  ESPCHK(0x1042d760u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d7b0 @ 0x1042d7b0 (26 bytes, 12 insns) */
void f_1042d7b0(void) {
  FTRACE(0x1042d7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042d7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1042d7b1 mov ebp, esp */
  EBP = (ESP);
  /* 1042d7b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042d7b6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1042d7b8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042d7bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042d7be mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1042d7c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042d7c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1042d7c5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1042d7c8 pop ebp */
  EBP = (pop32());
  /* 1042d7c9 ret  */
  ESPCHK(0x1042d7b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d7d0 @ 0x1042d7d0 (31 bytes, 14 insns) */
void f_1042d7d0(void) {
  FTRACE(0x1042d7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042d7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1042d7d1 mov ebp, esp */
  EBP = (ESP);
  /* 1042d7d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042d7d6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1042d7d8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042d7db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042d7de mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1042d7e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042d7e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1042d7e5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042d7e8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1042d7ea mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1042d7ed pop ebp */
  EBP = (pop32());
  /* 1042d7ee ret  */
  ESPCHK(0x1042d7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d7f0 @ 0x1042d7f0 (27 bytes, 12 insns) */
void f_1042d7f0(void) {
  FTRACE(0x1042d7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042d7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1042d7f1 mov ebp, esp */
  EBP = (ESP);
  /* 1042d7f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042d7f6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1042d7f8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042d7fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042d7fe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1042d800 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042d803 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1042d805 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1042d809 pop ebp */
  EBP = (pop32());
  /* 1042d80a ret  */
  ESPCHK(0x1042d7f0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1042d810 (145 bytes, 42 insns) */
void f_1042d810(void) {
  FTRACE(0x1042d810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042d810 push ebp */
  push32((uint32_t)(EBP));
  /* 1042d811 mov ebp, esp */
  EBP = (ESP);
  /* 1042d813 push ecx */
  push32((uint32_t)(ECX));
  /* 1042d814 call 0x1042d8c0 */
  push32(0x1042d819u); f_1042d8c0();
  /* 1042d819 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042d81c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1042d81e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1042d825 jmp 0x1042d830 */
  goto L_1042d830;
L_1042d827:;
  /* 1042d827 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042d82a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042d82d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1042d830:;
  /* 1042d830 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042d834 jae 0x1042d85a */
  if (!C.cf) goto L_1042d85a;
  /* 1042d836 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042d839 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042d83c cmp ecx, dword ptr [eax*8 + 0x1044ffb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1044ffb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042d843 jne 0x1042d858 */
  if (!C.zf) goto L_1042d858;
  /* 1042d845 call 0x1042d8b0 */
  push32(0x1042d84au); f_1042d8b0();
  /* 1042d84a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042d84d mov ecx, dword ptr [edx*8 + 0x1044ffbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1044ffbc)));
  /* 1042d854 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1042d856 jmp 0x1042d89d */
  goto L_1042d89d;
L_1042d858:;
  /* 1042d858 jmp 0x1042d827 */
  goto L_1042d827;
L_1042d85a:;
  /* 1042d85a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042d85e jb 0x1042d873 */
  if (C.cf) goto L_1042d873;
  /* 1042d860 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042d864 ja 0x1042d873 */
  if ((!C.cf&&!C.zf)) goto L_1042d873;
  /* 1042d866 call 0x1042d8b0 */
  push32(0x1042d86bu); f_1042d8b0();
  /* 1042d86b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1042d871 jmp 0x1042d89d */
  goto L_1042d89d;
L_1042d873:;
  /* 1042d873 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042d87a jb 0x1042d892 */
  if (C.cf) goto L_1042d892;
  /* 1042d87c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042d883 ja 0x1042d892 */
  if ((!C.cf&&!C.zf)) goto L_1042d892;
  /* 1042d885 call 0x1042d8b0 */
  push32(0x1042d88au); f_1042d8b0();
  /* 1042d88a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1042d890 jmp 0x1042d89d */
  goto L_1042d89d;
L_1042d892:;
  /* 1042d892 call 0x1042d8b0 */
  push32(0x1042d897u); f_1042d8b0();
  /* 1042d897 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1042d89d:;
  /* 1042d89d mov esp, ebp */
  ESP = (EBP);
  /* 1042d89f pop ebp */
  EBP = (pop32());
  /* 1042d8a0 ret  */
  ESPCHK(0x1042d810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8b0 @ 0x1042d8b0 (13 bytes, 6 insns) */
void f_1042d8b0(void) {
  FTRACE(0x1042d8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042d8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1042d8b1 mov ebp, esp */
  EBP = (ESP);
  /* 1042d8b3 call 0x10425420 */
  push32(0x1042d8b8u); f_10425420();
  /* 1042d8b8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042d8bb pop ebp */
  EBP = (pop32());
  /* 1042d8bc ret  */
  ESPCHK(0x1042d8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8c0 @ 0x1042d8c0 (13 bytes, 6 insns) */
void f_1042d8c0(void) {
  FTRACE(0x1042d8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042d8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1042d8c1 mov ebp, esp */
  EBP = (ESP);
  /* 1042d8c3 call 0x10425420 */
  push32(0x1042d8c8u); f_10425420();
  /* 1042d8c8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042d8cb pop ebp */
  EBP = (pop32());
  /* 1042d8cc ret  */
  ESPCHK(0x1042d8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8d0 @ 0x1042d8d0 (664 bytes, 261 insns) [15 switch table(s)] */
void f_1042d8d0(void) {
  FTRACE(0x1042d8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042d8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1042d8d1 mov ebp, esp */
  EBP = (ESP);
  /* 1042d8d3 push edi */
  push32((uint32_t)(EDI));
  /* 1042d8d4 push esi */
  push32((uint32_t)(ESI));
  /* 1042d8d5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1042d8d8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1042d8db mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1042d8de mov eax, ecx */
  EAX = (ECX);
  /* 1042d8e0 mov edx, ecx */
  EDX = (ECX);
  /* 1042d8e2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042d8e4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042d8e6 jbe 0x1042d8f0 */
  if ((C.cf||C.zf)) goto L_1042d8f0;
  /* 1042d8e8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042d8ea jb 0x1042da68 */
  if (C.cf) goto L_1042da68;
L_1042d8f0:;
  /* 1042d8f0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1042d8f6 jne 0x1042d90c */
  if (!C.zf) goto L_1042d90c;
  /* 1042d8f8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1042d8fb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1042d8fe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042d901 jb 0x1042d92c */
  if (C.cf) goto L_1042d92c;
  /* 1042d903 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1042d905 jmp dword ptr [edx*4 + 0x1042da18] */
  switch (EDX) {
    case 0: goto L_1042da28;
    case 1: goto L_1042da30;
    case 2: goto L_1042da3c;
    case 3: goto L_1042da50;
    default: x86_unimpl("switch@0x1042d905 out of table"); return;
  }
L_1042d90c:;
  /* 1042d90c mov eax, edi */
  EAX = (EDI);
  /* 1042d90e mov edx, 3 */
  EDX = (0x3u);
  /* 1042d913 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042d916 jb 0x1042d924 */
  if (C.cf) goto L_1042d924;
  /* 1042d918 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1042d91b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042d91d jmp dword ptr [eax*4 + 0x1042d930] */
  switch (EAX) {
    case 1: goto L_1042d940;
    case 2: goto L_1042d96c;
    case 3: goto L_1042d990;
    default: x86_unimpl("switch@0x1042d91d out of table"); return;
  }
L_1042d924:;
  /* 1042d924 jmp dword ptr [ecx*4 + 0x1042da28] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1042da28)))); return;
  /* 1042d92b nop  */
  /* nop */
L_1042d92c:;
  /* 1042d92c jmp dword ptr [ecx*4 + 0x1042d9ac] */
  switch (ECX) {
    case 0: goto L_1042da0f;
    case 1: goto L_1042d9fc;
    case 2: goto L_1042d9f4;
    case 3: goto L_1042d9ec;
    case 4: goto L_1042d9e4;
    case 5: goto L_1042d9dc;
    case 6: goto L_1042d9d4;
    case 7: goto L_1042d9cc;
    default: x86_unimpl("switch@0x1042d92c out of table"); return;
  }
  /* 1042d933 nop  */
  /* nop */
L_1042d940:;
  /* 1042d940 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1042d942 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1042d944 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1042d946 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1042d949 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1042d94c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1042d94f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1042d952 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1042d955 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1042d958 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1042d95b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042d95e jb 0x1042d92c */
  if (C.cf) goto L_1042d92c;
  /* 1042d960 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1042d962 jmp dword ptr [edx*4 + 0x1042da18] */
  switch (EDX) {
    case 0: goto L_1042da28;
    case 1: goto L_1042da30;
    case 2: goto L_1042da3c;
    case 3: goto L_1042da50;
    default: x86_unimpl("switch@0x1042d962 out of table"); return;
  }
  /* 1042d969 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1042d96c:;
  /* 1042d96c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1042d96e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1042d970 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1042d972 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1042d975 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1042d978 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1042d97b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1042d97e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1042d981 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042d984 jb 0x1042d92c */
  if (C.cf) goto L_1042d92c;
  /* 1042d986 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1042d988 jmp dword ptr [edx*4 + 0x1042da18] */
  switch (EDX) {
    case 0: goto L_1042da28;
    case 1: goto L_1042da30;
    case 2: goto L_1042da3c;
    case 3: goto L_1042da50;
    default: x86_unimpl("switch@0x1042d988 out of table"); return;
  }
  /* 1042d98f nop  */
  /* nop */
L_1042d990:;
  /* 1042d990 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1042d992 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1042d994 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1042d996 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1042d997 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1042d99a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1042d99b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042d99e jb 0x1042d92c */
  if (C.cf) goto L_1042d92c;
  /* 1042d9a0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1042d9a2 jmp dword ptr [edx*4 + 0x1042da18] */
  switch (EDX) {
    case 0: goto L_1042da28;
    case 1: goto L_1042da30;
    case 2: goto L_1042da3c;
    case 3: goto L_1042da50;
    default: x86_unimpl("switch@0x1042d9a2 out of table"); return;
  }
  /* 1042d9a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1042d9cc:;
  /* 1042d9cc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1042d9d0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1042d9d4:;
  /* 1042d9d4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1042d9d8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1042d9dc:;
  /* 1042d9dc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1042d9e0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1042d9e4:;
  /* 1042d9e4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1042d9e8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1042d9ec:;
  /* 1042d9ec mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1042d9f0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1042d9f4:;
  /* 1042d9f4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1042d9f8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1042d9fc:;
  /* 1042d9fc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1042da00 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1042da04 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1042da0b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1042da0d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1042da0f:;
  /* 1042da0f jmp dword ptr [edx*4 + 0x1042da18] */
  switch (EDX) {
    case 0: goto L_1042da28;
    case 1: goto L_1042da30;
    case 2: goto L_1042da3c;
    case 3: goto L_1042da50;
    default: x86_unimpl("switch@0x1042da0f out of table"); return;
  }
  /* 1042da16 mov edi, edi */
  EDI = (EDI);
L_1042da28:;
  /* 1042da28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042da2b pop esi */
  ESI = (pop32());
  /* 1042da2c pop edi */
  EDI = (pop32());
  /* 1042da2d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1042da2e ret  */
  ESPCHK(0x1042d8d0u, _esp0);
  ESP += 4; return;
  /* 1042da2f nop  */
  /* nop */
L_1042da30:;
  /* 1042da30 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1042da32 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1042da34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042da37 pop esi */
  ESI = (pop32());
  /* 1042da38 pop edi */
  EDI = (pop32());
  /* 1042da39 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1042da3a ret  */
  ESPCHK(0x1042d8d0u, _esp0);
  ESP += 4; return;
  /* 1042da3b nop  */
  /* nop */
L_1042da3c:;
  /* 1042da3c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1042da3e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1042da40 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1042da43 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1042da46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042da49 pop esi */
  ESI = (pop32());
  /* 1042da4a pop edi */
  EDI = (pop32());
  /* 1042da4b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1042da4c ret  */
  ESPCHK(0x1042d8d0u, _esp0);
  ESP += 4; return;
  /* 1042da4d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1042da50:;
  /* 1042da50 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1042da52 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1042da54 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1042da57 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1042da5a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1042da5d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1042da60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042da63 pop esi */
  ESI = (pop32());
  /* 1042da64 pop edi */
  EDI = (pop32());
  /* 1042da65 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1042da66 ret  */
  ESPCHK(0x1042d8d0u, _esp0);
  ESP += 4; return;
  /* 1042da67 nop  */
  /* nop */
L_1042da68:;
  /* 1042da68 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1042da6c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1042da70 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1042da76 jne 0x1042da9c */
  if (!C.zf) goto L_1042da9c;
  /* 1042da78 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1042da7b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1042da7e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042da81 jb 0x1042da90 */
  if (C.cf) goto L_1042da90;
  /* 1042da83 std  */
  C.df=1;
  /* 1042da84 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1042da86 cld  */
  C.df=0;
  /* 1042da87 jmp dword ptr [edx*4 + 0x1042dbb0] */
  switch (EDX) {
    case 0: goto L_1042dbc0;
    case 1: goto L_1042dbc8;
    case 2: goto L_1042dbd8;
    case 3: goto L_1042dbec;
    default: x86_unimpl("switch@0x1042da87 out of table"); return;
  }
  /* 1042da8e mov edi, edi */
  EDI = (EDI);
L_1042da90:;
  /* 1042da90 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1042da92 jmp dword ptr [ecx*4 + 0x1042db60] */
  switch (ECX) {
    case 0: goto L_1042dba7;
    default: x86_unimpl("switch@0x1042da92 out of table"); return;
  }
  /* 1042da99 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1042da9c:;
  /* 1042da9c mov eax, edi */
  EAX = (EDI);
  /* 1042da9e mov edx, 3 */
  EDX = (0x3u);
  /* 1042daa3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042daa6 jb 0x1042dab4 */
  if (C.cf) goto L_1042dab4;
  /* 1042daa8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1042daab sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042daad jmp dword ptr [eax*4 + 0x1042dab8] */
  switch (EAX) {
    case 1: goto L_1042dac8;
    case 2: goto L_1042dae8;
    case 3: goto L_1042db10;
    default: x86_unimpl("switch@0x1042daad out of table"); return;
  }
L_1042dab4:;
  /* 1042dab4 jmp dword ptr [ecx*4 + 0x1042dbb0] */
  switch (ECX) {
    case 0: goto L_1042dbc0;
    case 1: goto L_1042dbc8;
    case 2: goto L_1042dbd8;
    case 3: goto L_1042dbec;
    default: x86_unimpl("switch@0x1042dab4 out of table"); return;
  }
  /* 1042dabb nop  */
  /* nop */
L_1042dac8:;
  /* 1042dac8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1042dacb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1042dacd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1042dad0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1042dad1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1042dad4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1042dad5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042dad8 jb 0x1042da90 */
  if (C.cf) goto L_1042da90;
  /* 1042dada std  */
  C.df=1;
  /* 1042dadb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1042dadd cld  */
  C.df=0;
  /* 1042dade jmp dword ptr [edx*4 + 0x1042dbb0] */
  switch (EDX) {
    case 0: goto L_1042dbc0;
    case 1: goto L_1042dbc8;
    case 2: goto L_1042dbd8;
    case 3: goto L_1042dbec;
    default: x86_unimpl("switch@0x1042dade out of table"); return;
  }
  /* 1042dae5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1042dae8:;
  /* 1042dae8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1042daeb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1042daed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1042daf0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1042daf3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1042daf6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1042daf9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042dafc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042daff cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042db02 jb 0x1042da90 */
  if (C.cf) goto L_1042da90;
  /* 1042db04 std  */
  C.df=1;
  /* 1042db05 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1042db07 cld  */
  C.df=0;
  /* 1042db08 jmp dword ptr [edx*4 + 0x1042dbb0] */
  switch (EDX) {
    case 0: goto L_1042dbc0;
    case 1: goto L_1042dbc8;
    case 2: goto L_1042dbd8;
    case 3: goto L_1042dbec;
    default: x86_unimpl("switch@0x1042db08 out of table"); return;
  }
  /* 1042db0f nop  */
  /* nop */
L_1042db10:;
  /* 1042db10 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1042db13 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1042db15 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1042db18 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1042db1b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1042db1e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1042db21 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1042db24 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1042db27 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042db2a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042db2d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042db30 jb 0x1042da90 */
  if (C.cf) goto L_1042da90;
  /* 1042db36 std  */
  C.df=1;
  /* 1042db37 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1042db39 cld  */
  C.df=0;
  /* 1042db3a jmp dword ptr [edx*4 + 0x1042dbb0] */
  switch (EDX) {
    case 0: goto L_1042dbc0;
    case 1: goto L_1042dbc8;
    case 2: goto L_1042dbd8;
    case 3: goto L_1042dbec;
    default: x86_unimpl("switch@0x1042db3a out of table"); return;
  }
  /* 1042db41 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1042db44 fild dword ptr fs:[edx + 0x10] */
  fpu_push((double)(int32_t)r32((uint32_t)(EDX + 0x10)));
  /* 1042db48 insb byte ptr es:[edi], dx */
  x86_unimpl("insb @ 0x1042db48");
  /* 1042db49 fild dword ptr [edx + 0x10] */
  fpu_push((double)(int32_t)r32((uint32_t)(EDX + 0x10)));
  /* 1042db4c je 0x1042db29 */
  if (C.zf) goto L_1042db29;
  /* 1042db4e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1042db4f adc byte ptr [ebx + ebx*8 + 0x42], bh */
  { uint32_t _a=(r8((uint32_t)(EBX + EBX*8 + 0x42))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EBX + EBX*8 + 0x42), (_r)); fl_add(_a,_b,_r,8); }
  /* 1042db53 adc byte ptr [ebx + ebx*8 - 0x2473efbe], al */
  { uint32_t _a=(r8((uint32_t)(EBX + EBX*8 + -0x2473efbe))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(EBX + EBX*8 + -0x2473efbe), (_r)); fl_add(_a,_b,_r,8); }
  /* 1042db5a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1042db5c xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 1042db5d fild dword ptr [edx + 0x10] */
  fpu_push((double)(int32_t)r32((uint32_t)(EDX + 0x10)));
  /* 1042db64 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1042db68 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1042db6c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1042db70 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1042db74 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1042db78 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1042db7c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1042db80 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1042db84 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1042db88 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1042db8c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1042db90 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1042db94 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1042db98 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1042db9c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1042dba3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1042dba5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1042dba7:;
  /* 1042dba7 jmp dword ptr [edx*4 + 0x1042dbb0] */
  switch (EDX) {
    case 0: goto L_1042dbc0;
    case 1: goto L_1042dbc8;
    case 2: goto L_1042dbd8;
    case 3: goto L_1042dbec;
    default: x86_unimpl("switch@0x1042dba7 out of table"); return;
  }
  /* 1042dbae mov edi, edi */
  EDI = (EDI);
L_1042dbc0:;
  /* 1042dbc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042dbc3 pop esi */
  ESI = (pop32());
  /* 1042dbc4 pop edi */
  EDI = (pop32());
  /* 1042dbc5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1042dbc6 ret  */
  ESPCHK(0x1042d8d0u, _esp0);
  ESP += 4; return;
  /* 1042dbc7 nop  */
  /* nop */
L_1042dbc8:;
  /* 1042dbc8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1042dbcb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1042dbce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042dbd1 pop esi */
  ESI = (pop32());
  /* 1042dbd2 pop edi */
  EDI = (pop32());
  /* 1042dbd3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1042dbd4 ret  */
  ESPCHK(0x1042d8d0u, _esp0);
  ESP += 4; return;
  /* 1042dbd5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1042dbd8:;
  /* 1042dbd8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1042dbdb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1042dbde mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1042dbe1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1042dbe4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042dbe7 pop esi */
  ESI = (pop32());
  /* 1042dbe8 pop edi */
  EDI = (pop32());
  /* 1042dbe9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1042dbea ret  */
  ESPCHK(0x1042d8d0u, _esp0);
  ESP += 4; return;
  /* 1042dbeb nop  */
  /* nop */
L_1042dbec:;
  /* 1042dbec mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1042dbef mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1042dbf2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1042dbf5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1042dbf8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1042dbfb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1042dbfe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042dc01 pop esi */
  ESI = (pop32());
  /* 1042dc02 pop edi */
  EDI = (pop32());
  /* 1042dc03 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1042dc04 ret  */
  ESPCHK(0x1042d8d0u, _esp0);
  ESP += 4; return;
L_1042db29: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1042db29 (unresolved jump table)"); return;
}

/* FUN_1000dc10 @ 0x1042dc10 (421 bytes, 148 insns) */
void f_1042dc10(void) {
  FTRACE(0x1042dc10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042dc10 push ebp */
  push32((uint32_t)(EBP));
  /* 1042dc11 mov ebp, esp */
  EBP = (ESP);
  /* 1042dc13 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1042dc15 push 0x1044d148 */
  push32((uint32_t)(0x1044d148u));
  /* 1042dc1a push 0x1042eae8 */
  push32((uint32_t)(0x1042eae8u));
  /* 1042dc1f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1042dc25 push eax */
  push32((uint32_t)(EAX));
  /* 1042dc26 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1042dc2d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042dc30 push ebx */
  push32((uint32_t)(EBX));
  /* 1042dc31 push esi */
  push32((uint32_t)(ESI));
  /* 1042dc32 push edi */
  push32((uint32_t)(EDI));
  /* 1042dc33 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1042dc36 cmp dword ptr [0x1045176c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1045176c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042dc3d jne 0x1042dc8e */
  if (!C.zf) goto L_1042dc8e;
  /* 1042dc3f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1042dc42 push eax */
  push32((uint32_t)(EAX));
  /* 1042dc43 push 1 */
  push32((uint32_t)(0x1u));
  /* 1042dc45 push 0x1044d144 */
  push32((uint32_t)(0x1044d144u));
  /* 1042dc4a push 1 */
  push32((uint32_t)(0x1u));
  /* 1042dc4c call dword ptr [0x104542c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542c4))), 0x1042dc52u);
  /* 1042dc52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042dc54 je 0x1042dc62 */
  if (C.zf) goto L_1042dc62;
  /* 1042dc56 mov dword ptr [0x1045176c], 1 */
  w32((uint32_t)(0x1045176c), (0x1u));
  /* 1042dc60 jmp 0x1042dc8e */
  goto L_1042dc8e;
L_1042dc62:;
  /* 1042dc62 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1042dc65 push ecx */
  push32((uint32_t)(ECX));
  /* 1042dc66 push 1 */
  push32((uint32_t)(0x1u));
  /* 1042dc68 push 0x1044d140 */
  push32((uint32_t)(0x1044d140u));
  /* 1042dc6d push 1 */
  push32((uint32_t)(0x1u));
  /* 1042dc6f push 0 */
  push32((uint32_t)(0x0u));
  /* 1042dc71 call dword ptr [0x104542d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542d4))), 0x1042dc77u);
  /* 1042dc77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042dc79 je 0x1042dc87 */
  if (C.zf) goto L_1042dc87;
  /* 1042dc7b mov dword ptr [0x1045176c], 2 */
  w32((uint32_t)(0x1045176c), (0x2u));
  /* 1042dc85 jmp 0x1042dc8e */
  goto L_1042dc8e;
L_1042dc87:;
  /* 1042dc87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042dc89 jmp 0x1042ddb8 */
  goto L_1042ddb8;
L_1042dc8e:;
  /* 1042dc8e cmp dword ptr [0x1045176c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1045176c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042dc95 jne 0x1042dcc5 */
  if (!C.zf) goto L_1042dcc5;
  /* 1042dc97 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042dc9b jne 0x1042dca6 */
  if (!C.zf) goto L_1042dca6;
  /* 1042dc9d mov edx, dword ptr [0x10451778] */
  EDX = (r32((uint32_t)(0x10451778)));
  /* 1042dca3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1042dca6:;
  /* 1042dca6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1042dca9 push eax */
  push32((uint32_t)(EAX));
  /* 1042dcaa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1042dcad push ecx */
  push32((uint32_t)(ECX));
  /* 1042dcae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042dcb1 push edx */
  push32((uint32_t)(EDX));
  /* 1042dcb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042dcb5 push eax */
  push32((uint32_t)(EAX));
  /* 1042dcb6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1042dcb9 push ecx */
  push32((uint32_t)(ECX));
  /* 1042dcba call dword ptr [0x104542d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542d4))), 0x1042dcc0u);
  /* 1042dcc0 jmp 0x1042ddb8 */
  goto L_1042ddb8;
L_1042dcc5:;
  /* 1042dcc5 cmp dword ptr [0x1045176c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1045176c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042dccc jne 0x1042ddb6 */
  if (!C.zf) goto L_1042ddb6;
  /* 1042dcd2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042dcd6 jne 0x1042dce1 */
  if (!C.zf) goto L_1042dce1;
  /* 1042dcd8 mov edx, dword ptr [0x10451788] */
  EDX = (r32((uint32_t)(0x10451788)));
  /* 1042dcde mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1042dce1:;
  /* 1042dce1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042dce3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042dce5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1042dce8 push eax */
  push32((uint32_t)(EAX));
  /* 1042dce9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042dcec push ecx */
  push32((uint32_t)(ECX));
  /* 1042dced mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1042dcf0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1042dcf2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042dcf4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1042dcf7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042dcfa push edx */
  push32((uint32_t)(EDX));
  /* 1042dcfb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1042dcfe push eax */
  push32((uint32_t)(EAX));
  /* 1042dcff call dword ptr [0x104542cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542cc))), 0x1042dd05u);
  /* 1042dd05 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1042dd08 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042dd0c jne 0x1042dd15 */
  if (!C.zf) goto L_1042dd15;
  /* 1042dd0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042dd10 jmp 0x1042ddb8 */
  goto L_1042ddb8;
L_1042dd15:;
  /* 1042dd15 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1042dd1c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042dd1f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1042dd21 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042dd24 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1042dd26 call 0x10428b80 */
  push32(0x1042dd2bu); f_10428b80();
  /* 1042dd2b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1042dd2e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1042dd31 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042dd34 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1042dd37 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042dd3a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1042dd3c push edx */
  push32((uint32_t)(EDX));
  /* 1042dd3d push 0 */
  push32((uint32_t)(0x0u));
  /* 1042dd3f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042dd42 push eax */
  push32((uint32_t)(EAX));
  /* 1042dd43 call 0x10429750 */
  push32(0x1042dd48u); f_10429750();
  /* 1042dd48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042dd4b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1042dd52 jmp 0x1042dd6b */
  goto L_1042dd6b;
  /* 1042dd54 mov eax, 1 */
  EAX = (0x1u);
  /* 1042dd59 ret  */
  ESPCHK(0x1042dc10u, _esp0);
  ESP += 4; return;
  /* 1042dd5a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1042dd5d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1042dd64 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1042dd6b:;
  /* 1042dd6b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042dd6f jne 0x1042dd75 */
  if (!C.zf) goto L_1042dd75;
  /* 1042dd71 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042dd73 jmp 0x1042ddb8 */
  goto L_1042ddb8;
L_1042dd75:;
  /* 1042dd75 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042dd78 push ecx */
  push32((uint32_t)(ECX));
  /* 1042dd79 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042dd7c push edx */
  push32((uint32_t)(EDX));
  /* 1042dd7d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1042dd80 push eax */
  push32((uint32_t)(EAX));
  /* 1042dd81 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042dd84 push ecx */
  push32((uint32_t)(ECX));
  /* 1042dd85 push 1 */
  push32((uint32_t)(0x1u));
  /* 1042dd87 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1042dd8a push edx */
  push32((uint32_t)(EDX));
  /* 1042dd8b call dword ptr [0x104542cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542cc))), 0x1042dd91u);
  /* 1042dd91 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1042dd94 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042dd98 jne 0x1042dd9e */
  if (!C.zf) goto L_1042dd9e;
  /* 1042dd9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042dd9c jmp 0x1042ddb8 */
  goto L_1042ddb8;
L_1042dd9e:;
  /* 1042dd9e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1042dda1 push eax */
  push32((uint32_t)(EAX));
  /* 1042dda2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1042dda5 push ecx */
  push32((uint32_t)(ECX));
  /* 1042dda6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042dda9 push edx */
  push32((uint32_t)(EDX));
  /* 1042ddaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042ddad push eax */
  push32((uint32_t)(EAX));
  /* 1042ddae call dword ptr [0x104542c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542c4))), 0x1042ddb4u);
  /* 1042ddb4 jmp 0x1042ddb8 */
  goto L_1042ddb8;
L_1042ddb6:;
  /* 1042ddb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1042ddb8:;
  /* 1042ddb8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1042ddbb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042ddbe mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1042ddc5 pop edi */
  EDI = (pop32());
  /* 1042ddc6 pop esi */
  ESI = (pop32());
  /* 1042ddc7 pop ebx */
  EBX = (pop32());
  /* 1042ddc8 mov esp, ebp */
  ESP = (EBP);
  /* 1042ddca pop ebp */
  EBP = (pop32());
  /* 1042ddcb ret  */
  ESPCHK(0x1042dc10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ddd0 @ 0x1042ddd0 (727 bytes, 263 insns) */
void f_1042ddd0(void) {
  FTRACE(0x1042ddd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042ddd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1042ddd1 mov ebp, esp */
  EBP = (ESP);
  /* 1042ddd3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1042ddd5 push 0x1044d158 */
  push32((uint32_t)(0x1044d158u));
  /* 1042ddda push 0x1042eae8 */
  push32((uint32_t)(0x1042eae8u));
  /* 1042dddf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1042dde5 push eax */
  push32((uint32_t)(EAX));
  /* 1042dde6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1042dded add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ddf0 push ebx */
  push32((uint32_t)(EBX));
  /* 1042ddf1 push esi */
  push32((uint32_t)(ESI));
  /* 1042ddf2 push edi */
  push32((uint32_t)(EDI));
  /* 1042ddf3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1042ddf6 cmp dword ptr [0x10451790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10451790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042ddfd jne 0x1042de56 */
  if (!C.zf) goto L_1042de56;
  /* 1042ddff push 0 */
  push32((uint32_t)(0x0u));
  /* 1042de01 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042de03 push 1 */
  push32((uint32_t)(0x1u));
  /* 1042de05 push 0x1044d144 */
  push32((uint32_t)(0x1044d144u));
  /* 1042de0a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1042de0f push 0 */
  push32((uint32_t)(0x0u));
  /* 1042de11 call dword ptr [0x104542c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542c8))), 0x1042de17u);
  /* 1042de17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042de19 je 0x1042de27 */
  if (C.zf) goto L_1042de27;
  /* 1042de1b mov dword ptr [0x10451790], 1 */
  w32((uint32_t)(0x10451790), (0x1u));
  /* 1042de25 jmp 0x1042de56 */
  goto L_1042de56;
L_1042de27:;
  /* 1042de27 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042de29 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042de2b push 1 */
  push32((uint32_t)(0x1u));
  /* 1042de2d push 0x1044d140 */
  push32((uint32_t)(0x1044d140u));
  /* 1042de32 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1042de37 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042de39 call dword ptr [0x104542c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542c0))), 0x1042de3fu);
  /* 1042de3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042de41 je 0x1042de4f */
  if (C.zf) goto L_1042de4f;
  /* 1042de43 mov dword ptr [0x10451790], 2 */
  w32((uint32_t)(0x10451790), (0x2u));
  /* 1042de4d jmp 0x1042de56 */
  goto L_1042de56;
L_1042de4f:;
  /* 1042de4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042de51 jmp 0x1042e0c1 */
  goto L_1042e0c1;
L_1042de56:;
  /* 1042de56 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042de5a jle 0x1042de6f */
  if ((C.zf||C.sf!=C.of)) goto L_1042de6f;
  /* 1042de5c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1042de5f push eax */
  push32((uint32_t)(EAX));
  /* 1042de60 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1042de63 push ecx */
  push32((uint32_t)(ECX));
  /* 1042de64 call 0x1042e0e0 */
  push32(0x1042de69u); f_1042e0e0();
  /* 1042de69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042de6c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1042de6f:;
  /* 1042de6f cmp dword ptr [0x10451790], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10451790))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042de76 jne 0x1042de9b */
  if (!C.zf) goto L_1042de9b;
  /* 1042de78 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1042de7b push edx */
  push32((uint32_t)(EDX));
  /* 1042de7c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1042de7f push eax */
  push32((uint32_t)(EAX));
  /* 1042de80 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1042de83 push ecx */
  push32((uint32_t)(ECX));
  /* 1042de84 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1042de87 push edx */
  push32((uint32_t)(EDX));
  /* 1042de88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042de8b push eax */
  push32((uint32_t)(EAX));
  /* 1042de8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042de8f push ecx */
  push32((uint32_t)(ECX));
  /* 1042de90 call dword ptr [0x104542c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542c0))), 0x1042de96u);
  /* 1042de96 jmp 0x1042e0c1 */
  goto L_1042e0c1;
L_1042de9b:;
  /* 1042de9b cmp dword ptr [0x10451790], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10451790))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042dea2 jne 0x1042e0bf */
  if (!C.zf) goto L_1042e0bf;
  /* 1042dea8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042deac jne 0x1042deb7 */
  if (!C.zf) goto L_1042deb7;
  /* 1042deae mov edx, dword ptr [0x10451788] */
  EDX = (r32((uint32_t)(0x10451788)));
  /* 1042deb4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1042deb7:;
  /* 1042deb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042deb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042debb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1042debe push eax */
  push32((uint32_t)(EAX));
  /* 1042debf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1042dec2 push ecx */
  push32((uint32_t)(ECX));
  /* 1042dec3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1042dec6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1042dec8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042deca and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1042decd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ded0 push edx */
  push32((uint32_t)(EDX));
  /* 1042ded1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1042ded4 push eax */
  push32((uint32_t)(EAX));
  /* 1042ded5 call dword ptr [0x104542cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542cc))), 0x1042dedbu);
  /* 1042dedb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1042dede cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042dee2 jne 0x1042deeb */
  if (!C.zf) goto L_1042deeb;
  /* 1042dee4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042dee6 jmp 0x1042e0c1 */
  goto L_1042e0c1;
L_1042deeb:;
  /* 1042deeb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1042def2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1042def5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1042def7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042defa and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1042defc call 0x10428b80 */
  push32(0x1042df01u); f_10428b80();
  /* 1042df01 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1042df04 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1042df07 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1042df0a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1042df0d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1042df14 jmp 0x1042df2d */
  goto L_1042df2d;
  /* 1042df16 mov eax, 1 */
  EAX = (0x1u);
  /* 1042df1b ret  */
  ESPCHK(0x1042ddd0u, _esp0);
  ESP += 4; return;
  /* 1042df1c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1042df1f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1042df26 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1042df2d:;
  /* 1042df2d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042df31 jne 0x1042df3a */
  if (!C.zf) goto L_1042df3a;
  /* 1042df33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042df35 jmp 0x1042e0c1 */
  goto L_1042e0c1;
L_1042df3a:;
  /* 1042df3a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1042df3d push edx */
  push32((uint32_t)(EDX));
  /* 1042df3e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042df41 push eax */
  push32((uint32_t)(EAX));
  /* 1042df42 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1042df45 push ecx */
  push32((uint32_t)(ECX));
  /* 1042df46 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1042df49 push edx */
  push32((uint32_t)(EDX));
  /* 1042df4a push 1 */
  push32((uint32_t)(0x1u));
  /* 1042df4c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1042df4f push eax */
  push32((uint32_t)(EAX));
  /* 1042df50 call dword ptr [0x104542cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542cc))), 0x1042df56u);
  /* 1042df56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042df58 jne 0x1042df61 */
  if (!C.zf) goto L_1042df61;
  /* 1042df5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042df5c jmp 0x1042e0c1 */
  goto L_1042e0c1;
L_1042df61:;
  /* 1042df61 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042df63 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042df65 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1042df68 push ecx */
  push32((uint32_t)(ECX));
  /* 1042df69 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042df6c push edx */
  push32((uint32_t)(EDX));
  /* 1042df6d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042df70 push eax */
  push32((uint32_t)(EAX));
  /* 1042df71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042df74 push ecx */
  push32((uint32_t)(ECX));
  /* 1042df75 call dword ptr [0x104542c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542c8))), 0x1042df7bu);
  /* 1042df7b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1042df7e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042df82 jne 0x1042df8b */
  if (!C.zf) goto L_1042df8b;
  /* 1042df84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042df86 jmp 0x1042e0c1 */
  goto L_1042e0c1;
L_1042df8b:;
  /* 1042df8b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042df8e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1042df94 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042df96 je 0x1042dfdb */
  if (C.zf) goto L_1042dfdb;
  /* 1042df98 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042df9c je 0x1042dfd6 */
  if (C.zf) goto L_1042dfd6;
  /* 1042df9e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1042dfa1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042dfa4 jle 0x1042dfad */
  if ((C.zf||C.sf!=C.of)) goto L_1042dfad;
  /* 1042dfa6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042dfa8 jmp 0x1042e0c1 */
  goto L_1042e0c1;
L_1042dfad:;
  /* 1042dfad mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1042dfb0 push ecx */
  push32((uint32_t)(ECX));
  /* 1042dfb1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1042dfb4 push edx */
  push32((uint32_t)(EDX));
  /* 1042dfb5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1042dfb8 push eax */
  push32((uint32_t)(EAX));
  /* 1042dfb9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042dfbc push ecx */
  push32((uint32_t)(ECX));
  /* 1042dfbd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042dfc0 push edx */
  push32((uint32_t)(EDX));
  /* 1042dfc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042dfc4 push eax */
  push32((uint32_t)(EAX));
  /* 1042dfc5 call dword ptr [0x104542c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542c8))), 0x1042dfcbu);
  /* 1042dfcb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042dfcd jne 0x1042dfd6 */
  if (!C.zf) goto L_1042dfd6;
  /* 1042dfcf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042dfd1 jmp 0x1042e0c1 */
  goto L_1042e0c1;
L_1042dfd6:;
  /* 1042dfd6 jmp 0x1042e0ba */
  goto L_1042e0ba;
L_1042dfdb:;
  /* 1042dfdb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1042dfde mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1042dfe1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1042dfe8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042dfeb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1042dfed add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042dff0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1042dff2 call 0x10428b80 */
  push32(0x1042dff7u); f_10428b80();
  /* 1042dff7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1042dffa mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1042dffd mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1042e000 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1042e003 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1042e00a jmp 0x1042e023 */
  goto L_1042e023;
  /* 1042e00c mov eax, 1 */
  EAX = (0x1u);
  /* 1042e011 ret  */
  ESPCHK(0x1042ddd0u, _esp0);
  ESP += 4; return;
  /* 1042e012 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1042e015 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1042e01c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1042e023:;
  /* 1042e023 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e027 jne 0x1042e030 */
  if (!C.zf) goto L_1042e030;
  /* 1042e029 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042e02b jmp 0x1042e0c1 */
  goto L_1042e0c1;
L_1042e030:;
  /* 1042e030 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042e033 push eax */
  push32((uint32_t)(EAX));
  /* 1042e034 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042e037 push ecx */
  push32((uint32_t)(ECX));
  /* 1042e038 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1042e03b push edx */
  push32((uint32_t)(EDX));
  /* 1042e03c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042e03f push eax */
  push32((uint32_t)(EAX));
  /* 1042e040 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042e043 push ecx */
  push32((uint32_t)(ECX));
  /* 1042e044 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e047 push edx */
  push32((uint32_t)(EDX));
  /* 1042e048 call dword ptr [0x104542c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542c8))), 0x1042e04eu);
  /* 1042e04e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042e050 jne 0x1042e056 */
  if (!C.zf) goto L_1042e056;
  /* 1042e052 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042e054 jmp 0x1042e0c1 */
  goto L_1042e0c1;
L_1042e056:;
  /* 1042e056 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e05a jne 0x1042e08a */
  if (!C.zf) goto L_1042e08a;
  /* 1042e05c push 0 */
  push32((uint32_t)(0x0u));
  /* 1042e05e push 0 */
  push32((uint32_t)(0x0u));
  /* 1042e060 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042e062 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042e064 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042e067 push eax */
  push32((uint32_t)(EAX));
  /* 1042e068 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042e06b push ecx */
  push32((uint32_t)(ECX));
  /* 1042e06c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1042e071 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1042e074 push edx */
  push32((uint32_t)(EDX));
  /* 1042e075 call dword ptr [0x10454364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454364))), 0x1042e07bu);
  /* 1042e07b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1042e07e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e082 jne 0x1042e088 */
  if (!C.zf) goto L_1042e088;
  /* 1042e084 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042e086 jmp 0x1042e0c1 */
  goto L_1042e0c1;
L_1042e088:;
  /* 1042e088 jmp 0x1042e0ba */
  goto L_1042e0ba;
L_1042e08a:;
  /* 1042e08a push 0 */
  push32((uint32_t)(0x0u));
  /* 1042e08c push 0 */
  push32((uint32_t)(0x0u));
  /* 1042e08e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1042e091 push eax */
  push32((uint32_t)(EAX));
  /* 1042e092 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1042e095 push ecx */
  push32((uint32_t)(ECX));
  /* 1042e096 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1042e099 push edx */
  push32((uint32_t)(EDX));
  /* 1042e09a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1042e09d push eax */
  push32((uint32_t)(EAX));
  /* 1042e09e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1042e0a3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1042e0a6 push ecx */
  push32((uint32_t)(ECX));
  /* 1042e0a7 call dword ptr [0x10454364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454364))), 0x1042e0adu);
  /* 1042e0ad mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1042e0b0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e0b4 jne 0x1042e0ba */
  if (!C.zf) goto L_1042e0ba;
  /* 1042e0b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042e0b8 jmp 0x1042e0c1 */
  goto L_1042e0c1;
L_1042e0ba:;
  /* 1042e0ba mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1042e0bd jmp 0x1042e0c1 */
  goto L_1042e0c1;
L_1042e0bf:;
  /* 1042e0bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1042e0c1:;
  /* 1042e0c1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1042e0c4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042e0c7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1042e0ce pop edi */
  EDI = (pop32());
  /* 1042e0cf pop esi */
  ESI = (pop32());
  /* 1042e0d0 pop ebx */
  EBX = (pop32());
  /* 1042e0d1 mov esp, ebp */
  ESP = (EBP);
  /* 1042e0d3 pop ebp */
  EBP = (pop32());
  /* 1042e0d4 ret  */
  ESPCHK(0x1042ddd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0e0 @ 0x1042e0e0 (80 bytes, 32 insns) */
void f_1042e0e0(void) {
  FTRACE(0x1042e0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042e0e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1042e0e1 mov ebp, esp */
  EBP = (ESP);
  /* 1042e0e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042e0e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042e0e9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1042e0ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e0ef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1042e0f2:;
  /* 1042e0f2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042e0f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042e0f8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042e0fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1042e0fe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042e100 je 0x1042e117 */
  if (C.zf) goto L_1042e117;
  /* 1042e102 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042e105 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1042e108 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042e10a je 0x1042e117 */
  if (C.zf) goto L_1042e117;
  /* 1042e10c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042e10f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e112 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1042e115 jmp 0x1042e0f2 */
  goto L_1042e0f2;
L_1042e117:;
  /* 1042e117 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042e11a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1042e11d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042e11f jne 0x1042e129 */
  if (!C.zf) goto L_1042e129;
  /* 1042e121 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042e124 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042e127 jmp 0x1042e12c */
  goto L_1042e12c;
L_1042e129:;
  /* 1042e129 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1042e12c:;
  /* 1042e12c mov esp, ebp */
  ESP = (EBP);
  /* 1042e12e pop ebp */
  EBP = (pop32());
  /* 1042e12f ret  */
  ESPCHK(0x1042e0e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e130 @ 0x1042e130 (130 bytes, 43 insns) */
void f_1042e130(void) {
  FTRACE(0x1042e130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042e130 push ebp */
  push32((uint32_t)(EBP));
  /* 1042e131 mov ebp, esp */
  EBP = (ESP);
  /* 1042e133 push ecx */
  push32((uint32_t)(ECX));
  /* 1042e134 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e137 cmp eax, dword ptr [0x1045309c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1045309c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e13d jae 0x1042e161 */
  if (!C.cf) goto L_1042e161;
  /* 1042e13f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e142 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1042e145 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e148 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1042e14b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042e14e mov eax, dword ptr [ecx*4 + 0x10452f60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10452f60)));
  /* 1042e155 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1042e15a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1042e15d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042e15f jne 0x1042e17c */
  if (!C.zf) goto L_1042e17c;
L_1042e161:;
  /* 1042e161 call 0x1042d8b0 */
  push32(0x1042e166u); f_1042d8b0();
  /* 1042e166 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1042e16c call 0x1042d8c0 */
  push32(0x1042e171u); f_1042d8c0();
  /* 1042e171 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1042e177 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042e17a jmp 0x1042e1ae */
  goto L_1042e1ae;
L_1042e17c:;
  /* 1042e17c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e17f push edx */
  push32((uint32_t)(EDX));
  /* 1042e180 call 0x1042f0d0 */
  push32(0x1042e185u); f_1042f0d0();
  /* 1042e185 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e188 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1042e18b push eax */
  push32((uint32_t)(EAX));
  /* 1042e18c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042e18f push ecx */
  push32((uint32_t)(ECX));
  /* 1042e190 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e193 push edx */
  push32((uint32_t)(EDX));
  /* 1042e194 call 0x1042e1c0 */
  push32(0x1042e199u); f_1042e1c0();
  /* 1042e199 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e19c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1042e19f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e1a2 push eax */
  push32((uint32_t)(EAX));
  /* 1042e1a3 call 0x1042f160 */
  push32(0x1042e1a8u); f_1042f160();
  /* 1042e1a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e1ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1042e1ae:;
  /* 1042e1ae mov esp, ebp */
  ESP = (EBP);
  /* 1042e1b0 pop ebp */
  EBP = (pop32());
  /* 1042e1b1 ret  */
  ESPCHK(0x1042e130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1c0 @ 0x1042e1c0 (178 bytes, 56 insns) */
void f_1042e1c0(void) {
  FTRACE(0x1042e1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042e1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1042e1c1 mov ebp, esp */
  EBP = (ESP);
  /* 1042e1c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042e1c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e1c9 push eax */
  push32((uint32_t)(EAX));
  /* 1042e1ca call 0x1042ef50 */
  push32(0x1042e1cfu); f_1042ef50();
  /* 1042e1cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e1d2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1042e1d5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e1d9 jne 0x1042e1ee */
  if (!C.zf) goto L_1042e1ee;
  /* 1042e1db call 0x1042d8b0 */
  push32(0x1042e1e0u); f_1042d8b0();
  /* 1042e1e0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1042e1e6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042e1e9 jmp 0x1042e26e */
  goto L_1042e26e;
L_1042e1ee:;
  /* 1042e1ee mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1042e1f1 push ecx */
  push32((uint32_t)(ECX));
  /* 1042e1f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042e1f4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042e1f7 push edx */
  push32((uint32_t)(EDX));
  /* 1042e1f8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042e1fb push eax */
  push32((uint32_t)(EAX));
  /* 1042e1fc call dword ptr [0x104542b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542b8))), 0x1042e202u);
  /* 1042e202 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1042e205 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e209 jne 0x1042e216 */
  if (!C.zf) goto L_1042e216;
  /* 1042e20b call dword ptr [0x10454338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454338))), 0x1042e211u);
  /* 1042e211 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1042e214 jmp 0x1042e21d */
  goto L_1042e21d;
L_1042e216:;
  /* 1042e216 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1042e21d:;
  /* 1042e21d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e221 je 0x1042e234 */
  if (C.zf) goto L_1042e234;
  /* 1042e223 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042e226 push ecx */
  push32((uint32_t)(ECX));
  /* 1042e227 call 0x1042d810 */
  push32(0x1042e22cu); f_1042d810();
  /* 1042e22c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e22f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042e232 jmp 0x1042e26e */
  goto L_1042e26e;
L_1042e234:;
  /* 1042e234 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e237 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1042e23a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e23d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1042e240 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042e243 mov ecx, dword ptr [edx*4 + 0x10452f60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10452f60)));
  /* 1042e24a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1042e24e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1042e251 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e254 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1042e257 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e25a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1042e25d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042e260 mov eax, dword ptr [eax*4 + 0x10452f60] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10452f60)));
  /* 1042e267 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1042e26b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1042e26e:;
  /* 1042e26e mov esp, ebp */
  ESP = (EBP);
  /* 1042e270 pop ebp */
  EBP = (pop32());
  /* 1042e271 ret  */
  ESPCHK(0x1042e1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e280 @ 0x1042e280 (130 bytes, 43 insns) */
void f_1042e280(void) {
  FTRACE(0x1042e280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042e280 push ebp */
  push32((uint32_t)(EBP));
  /* 1042e281 mov ebp, esp */
  EBP = (ESP);
  /* 1042e283 push ecx */
  push32((uint32_t)(ECX));
  /* 1042e284 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e287 cmp eax, dword ptr [0x1045309c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1045309c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e28d jae 0x1042e2b1 */
  if (!C.cf) goto L_1042e2b1;
  /* 1042e28f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e292 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1042e295 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e298 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1042e29b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042e29e mov eax, dword ptr [ecx*4 + 0x10452f60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10452f60)));
  /* 1042e2a5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1042e2aa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1042e2ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042e2af jne 0x1042e2cc */
  if (!C.zf) goto L_1042e2cc;
L_1042e2b1:;
  /* 1042e2b1 call 0x1042d8b0 */
  push32(0x1042e2b6u); f_1042d8b0();
  /* 1042e2b6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1042e2bc call 0x1042d8c0 */
  push32(0x1042e2c1u); f_1042d8c0();
  /* 1042e2c1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1042e2c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042e2ca jmp 0x1042e2fe */
  goto L_1042e2fe;
L_1042e2cc:;
  /* 1042e2cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e2cf push edx */
  push32((uint32_t)(EDX));
  /* 1042e2d0 call 0x1042f0d0 */
  push32(0x1042e2d5u); f_1042f0d0();
  /* 1042e2d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e2d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1042e2db push eax */
  push32((uint32_t)(EAX));
  /* 1042e2dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042e2df push ecx */
  push32((uint32_t)(ECX));
  /* 1042e2e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e2e3 push edx */
  push32((uint32_t)(EDX));
  /* 1042e2e4 call 0x1042e310 */
  push32(0x1042e2e9u); f_1042e310();
  /* 1042e2e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e2ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1042e2ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e2f2 push eax */
  push32((uint32_t)(EAX));
  /* 1042e2f3 call 0x1042f160 */
  push32(0x1042e2f8u); f_1042f160();
  /* 1042e2f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e2fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1042e2fe:;
  /* 1042e2fe mov esp, ebp */
  ESP = (EBP);
  /* 1042e300 pop ebp */
  EBP = (pop32());
  /* 1042e301 ret  */
  ESPCHK(0x1042e280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e310 @ 0x1042e310 (627 bytes, 182 insns) */
void f_1042e310(void) {
  FTRACE(0x1042e310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042e310 push ebp */
  push32((uint32_t)(EBP));
  /* 1042e311 mov ebp, esp */
  EBP = (ESP);
  /* 1042e313 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042e319 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1042e320 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042e323 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1042e329 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e32d jne 0x1042e336 */
  if (!C.zf) goto L_1042e336;
  /* 1042e32f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042e331 jmp 0x1042e57f */
  goto L_1042e57f;
L_1042e336:;
  /* 1042e336 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e339 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1042e33c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e33f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1042e342 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042e345 mov eax, dword ptr [ecx*4 + 0x10452f60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10452f60)));
  /* 1042e34c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1042e351 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1042e354 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042e356 je 0x1042e368 */
  if (C.zf) goto L_1042e368;
  /* 1042e358 push 2 */
  push32((uint32_t)(0x2u));
  /* 1042e35a push 0 */
  push32((uint32_t)(0x0u));
  /* 1042e35c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e35f push edx */
  push32((uint32_t)(EDX));
  /* 1042e360 call 0x1042e1c0 */
  push32(0x1042e365u); f_1042e1c0();
  /* 1042e365 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1042e368:;
  /* 1042e368 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e36b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1042e36e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e371 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1042e374 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042e377 mov edx, dword ptr [eax*4 + 0x10452f60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10452f60)));
  /* 1042e37e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1042e383 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1042e388 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042e38a je 0x1042e49c */
  if (C.zf) goto L_1042e49c;
  /* 1042e390 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042e393 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1042e396 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1042e39d:;
  /* 1042e39d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042e3a0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042e3a3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e3a6 jae 0x1042e49a */
  if (!C.cf) goto L_1042e49a;
  /* 1042e3ac lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1042e3b2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1042e3b5:;
  /* 1042e3b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042e3b8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1042e3be sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042e3c0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e3c6 jge 0x1042e427 */
  if ((C.sf==C.of)) goto L_1042e427;
  /* 1042e3c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042e3cb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042e3ce cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e3d1 jae 0x1042e427 */
  if (!C.cf) goto L_1042e427;
  /* 1042e3d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042e3d6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1042e3d8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1042e3de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042e3e1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e3e4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1042e3e7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1042e3ee cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e3f1 jne 0x1042e411 */
  if (!C.zf) goto L_1042e411;
  /* 1042e3f3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1042e3f9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e3fc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1042e402 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042e405 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1042e408 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042e40b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e40e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1042e411:;
  /* 1042e411 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042e414 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1042e41a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1042e41c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042e41f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e422 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1042e425 jmp 0x1042e3b5 */
  goto L_1042e3b5;
L_1042e427:;
  /* 1042e427 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042e429 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1042e42f push edx */
  push32((uint32_t)(EDX));
  /* 1042e430 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042e433 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1042e439 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042e43b push eax */
  push32((uint32_t)(EAX));
  /* 1042e43c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1042e442 push edx */
  push32((uint32_t)(EDX));
  /* 1042e443 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e446 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1042e449 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e44c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1042e44f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042e452 mov edx, dword ptr [eax*4 + 0x10452f60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10452f60)));
  /* 1042e459 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1042e45c push eax */
  push32((uint32_t)(EAX));
  /* 1042e45d call dword ptr [0x104542f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542f8))), 0x1042e463u);
  /* 1042e463 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042e465 je 0x1042e48a */
  if (C.zf) goto L_1042e48a;
  /* 1042e467 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042e46a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e470 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1042e473 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042e476 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1042e47c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042e47e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e484 jge 0x1042e488 */
  if ((C.sf==C.of)) goto L_1042e488;
  /* 1042e486 jmp 0x1042e49a */
  goto L_1042e49a;
L_1042e488:;
  /* 1042e488 jmp 0x1042e495 */
  goto L_1042e495;
L_1042e48a:;
  /* 1042e48a call dword ptr [0x10454338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454338))), 0x1042e490u);
  /* 1042e490 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1042e493 jmp 0x1042e49a */
  goto L_1042e49a;
L_1042e495:;
  /* 1042e495 jmp 0x1042e39d */
  goto L_1042e39d;
L_1042e49a:;
  /* 1042e49a jmp 0x1042e4ec */
  goto L_1042e4ec;
L_1042e49c:;
  /* 1042e49c push 0 */
  push32((uint32_t)(0x0u));
  /* 1042e49e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1042e4a4 push ecx */
  push32((uint32_t)(ECX));
  /* 1042e4a5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1042e4a8 push edx */
  push32((uint32_t)(EDX));
  /* 1042e4a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042e4ac push eax */
  push32((uint32_t)(EAX));
  /* 1042e4ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e4b0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1042e4b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e4b6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1042e4b9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042e4bc mov eax, dword ptr [ecx*4 + 0x10452f60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10452f60)));
  /* 1042e4c3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1042e4c6 push ecx */
  push32((uint32_t)(ECX));
  /* 1042e4c7 call dword ptr [0x104542f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542f8))), 0x1042e4cdu);
  /* 1042e4cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042e4cf je 0x1042e4e3 */
  if (C.zf) goto L_1042e4e3;
  /* 1042e4d1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1042e4d8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1042e4de mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1042e4e1 jmp 0x1042e4ec */
  goto L_1042e4ec;
L_1042e4e3:;
  /* 1042e4e3 call dword ptr [0x10454338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454338))), 0x1042e4e9u);
  /* 1042e4e9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1042e4ec:;
  /* 1042e4ec cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e4f0 jne 0x1042e576 */
  if (!C.zf) goto L_1042e576;
  /* 1042e4f6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e4fa je 0x1042e52a */
  if (C.zf) goto L_1042e52a;
  /* 1042e4fc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e500 jne 0x1042e519 */
  if (!C.zf) goto L_1042e519;
  /* 1042e502 call 0x1042d8b0 */
  push32(0x1042e507u); f_1042d8b0();
  /* 1042e507 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1042e50d call 0x1042d8c0 */
  push32(0x1042e512u); f_1042d8c0();
  /* 1042e512 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042e515 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1042e517 jmp 0x1042e525 */
  goto L_1042e525;
L_1042e519:;
  /* 1042e519 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042e51c push edx */
  push32((uint32_t)(EDX));
  /* 1042e51d call 0x1042d810 */
  push32(0x1042e522u); f_1042d810();
  /* 1042e522 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1042e525:;
  /* 1042e525 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042e528 jmp 0x1042e57f */
  goto L_1042e57f;
L_1042e52a:;
  /* 1042e52a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e52d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1042e530 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e533 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1042e536 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042e539 mov edx, dword ptr [eax*4 + 0x10452f60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10452f60)));
  /* 1042e540 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1042e545 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1042e548 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042e54a je 0x1042e55b */
  if (C.zf) goto L_1042e55b;
  /* 1042e54c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042e54f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1042e552 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e555 jne 0x1042e55b */
  if (!C.zf) goto L_1042e55b;
  /* 1042e557 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042e559 jmp 0x1042e57f */
  goto L_1042e57f;
L_1042e55b:;
  /* 1042e55b call 0x1042d8b0 */
  push32(0x1042e560u); f_1042d8b0();
  /* 1042e560 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1042e566 call 0x1042d8c0 */
  push32(0x1042e56bu); f_1042d8c0();
  /* 1042e56b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1042e571 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042e574 jmp 0x1042e57f */
  goto L_1042e57f;
L_1042e576:;
  /* 1042e576 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042e579 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1042e57f:;
  /* 1042e57f mov esp, ebp */
  ESP = (EBP);
  /* 1042e581 pop ebp */
  EBP = (pop32());
  /* 1042e582 ret  */
  ESPCHK(0x1042e310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e590 @ 0x1042e590 (199 bytes, 68 insns) */
void f_1042e590(void) {
  FTRACE(0x1042e590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042e590 push ebp */
  push32((uint32_t)(EBP));
  /* 1042e591 mov ebp, esp */
  EBP = (ESP);
  /* 1042e593 push ecx */
  push32((uint32_t)(ECX));
  /* 1042e594 push ebx */
  push32((uint32_t)(EBX));
  /* 1042e595 push esi */
  push32((uint32_t)(ESI));
  /* 1042e596 push edi */
  push32((uint32_t)(EDI));
L_1042e597:;
  /* 1042e597 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e59b jne 0x1042e5bb */
  if (!C.zf) goto L_1042e5bb;
  /* 1042e59d push 0x1044d0a4 */
  push32((uint32_t)(0x1044d0a4u));
  /* 1042e5a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042e5a4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1042e5a6 push 0x1044d170 */
  push32((uint32_t)(0x1044d170u));
  /* 1042e5ab push 2 */
  push32((uint32_t)(0x2u));
  /* 1042e5ad call 0x10424aa0 */
  push32(0x1042e5b2u); f_10424aa0();
  /* 1042e5b2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e5b5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e5b8 jne 0x1042e5bb */
  if (!C.zf) goto L_1042e5bb;
  /* 1042e5ba int3  */
  x86_unimpl("int3 @ 0x1042e5ba");
L_1042e5bb:;
  /* 1042e5bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042e5bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042e5bf jne 0x1042e597 */
  if (!C.zf) goto L_1042e597;
  /* 1042e5c1 mov ecx, dword ptr [0x10451794] */
  ECX = (r32((uint32_t)(0x10451794)));
  /* 1042e5c7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e5ca mov dword ptr [0x10451794], ecx */
  w32((uint32_t)(0x10451794), (ECX));
  /* 1042e5d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e5d3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1042e5d6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1042e5d8 push 0x1044d170 */
  push32((uint32_t)(0x1044d170u));
  /* 1042e5dd push 2 */
  push32((uint32_t)(0x2u));
  /* 1042e5df push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1042e5e4 call 0x104259e0 */
  push32(0x1042e5e9u); f_104259e0();
  /* 1042e5e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e5ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042e5ef mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1042e5f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042e5f5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e5f9 je 0x1042e616 */
  if (C.zf) goto L_1042e616;
  /* 1042e5fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042e5fe mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1042e601 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1042e604 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042e607 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1042e60a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042e60d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1042e614 jmp 0x1042e63b */
  goto L_1042e63b;
L_1042e616:;
  /* 1042e616 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042e619 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1042e61c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1042e61f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042e622 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1042e625 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042e628 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e62b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042e62e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1042e631 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042e634 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1042e63b:;
  /* 1042e63b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042e63e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042e641 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1042e644 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1042e646 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042e649 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1042e650 pop edi */
  EDI = (pop32());
  /* 1042e651 pop esi */
  ESI = (pop32());
  /* 1042e652 pop ebx */
  EBX = (pop32());
  /* 1042e653 mov esp, ebp */
  ESP = (EBP);
  /* 1042e655 pop ebp */
  EBP = (pop32());
  /* 1042e656 ret  */
  ESPCHK(0x1042e590u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1042e660 (50 bytes, 17 insns) */
void f_1042e660(void) {
  FTRACE(0x1042e660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042e660 push ebp */
  push32((uint32_t)(EBP));
  /* 1042e661 mov ebp, esp */
  EBP = (ESP);
  /* 1042e663 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e666 cmp eax, dword ptr [0x1045309c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1045309c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e66c jb 0x1042e672 */
  if (C.cf) goto L_1042e672;
  /* 1042e66e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042e670 jmp 0x1042e690 */
  goto L_1042e690;
L_1042e672:;
  /* 1042e672 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e675 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1042e678 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e67b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1042e67e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042e681 mov eax, dword ptr [ecx*4 + 0x10452f60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10452f60)));
  /* 1042e688 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1042e68d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1042e690:;
  /* 1042e690 pop ebp */
  EBP = (pop32());
  /* 1042e691 ret  */
  ESPCHK(0x1042e660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e6a0 @ 0x1042e6a0 (300 bytes, 80 insns) */
void f_1042e6a0(void) {
  FTRACE(0x1042e6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042e6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1042e6a1 mov ebp, esp */
  EBP = (ESP);
  /* 1042e6a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1042e6a4 cmp dword ptr [0x10452c60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10452c60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e6ab jne 0x1042e6b9 */
  if (!C.zf) goto L_1042e6b9;
  /* 1042e6ad mov dword ptr [0x10452c60], 0x200 */
  w32((uint32_t)(0x10452c60), (0x200u));
  /* 1042e6b7 jmp 0x1042e6cc */
  goto L_1042e6cc;
L_1042e6b9:;
  /* 1042e6b9 cmp dword ptr [0x10452c60], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10452c60))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e6c0 jge 0x1042e6cc */
  if ((C.sf==C.of)) goto L_1042e6cc;
  /* 1042e6c2 mov dword ptr [0x10452c60], 0x14 */
  w32((uint32_t)(0x10452c60), (0x14u));
L_1042e6cc:;
  /* 1042e6cc push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1042e6d1 push 0x1044d17c */
  push32((uint32_t)(0x1044d17cu));
  /* 1042e6d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1042e6d8 push 4 */
  push32((uint32_t)(0x4u));
  /* 1042e6da mov eax, dword ptr [0x10452c60] */
  EAX = (r32((uint32_t)(0x10452c60)));
  /* 1042e6df push eax */
  push32((uint32_t)(EAX));
  /* 1042e6e0 call 0x10425df0 */
  push32(0x1042e6e5u); f_10425df0();
  /* 1042e6e5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e6e8 mov dword ptr [0x10451908], eax */
  w32((uint32_t)(0x10451908), (EAX));
  /* 1042e6ed cmp dword ptr [0x10451908], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10451908))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e6f4 jne 0x1042e735 */
  if (!C.zf) goto L_1042e735;
  /* 1042e6f6 mov dword ptr [0x10452c60], 0x14 */
  w32((uint32_t)(0x10452c60), (0x14u));
  /* 1042e700 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1042e705 push 0x1044d17c */
  push32((uint32_t)(0x1044d17cu));
  /* 1042e70a push 2 */
  push32((uint32_t)(0x2u));
  /* 1042e70c push 4 */
  push32((uint32_t)(0x4u));
  /* 1042e70e mov ecx, dword ptr [0x10452c60] */
  ECX = (r32((uint32_t)(0x10452c60)));
  /* 1042e714 push ecx */
  push32((uint32_t)(ECX));
  /* 1042e715 call 0x10425df0 */
  push32(0x1042e71au); f_10425df0();
  /* 1042e71a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e71d mov dword ptr [0x10451908], eax */
  w32((uint32_t)(0x10451908), (EAX));
  /* 1042e722 cmp dword ptr [0x10451908], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10451908))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e729 jne 0x1042e735 */
  if (!C.zf) goto L_1042e735;
  /* 1042e72b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1042e72d call 0x10424950 */
  push32(0x1042e732u); f_10424950();
  /* 1042e732 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1042e735:;
  /* 1042e735 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1042e73c jmp 0x1042e747 */
  goto L_1042e747;
L_1042e73e:;
  /* 1042e73e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042e741 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e744 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1042e747:;
  /* 1042e747 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e74b jge 0x1042e766 */
  if ((C.sf==C.of)) goto L_1042e766;
  /* 1042e74d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042e750 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1042e753 add eax, 0x10450120 */
  { uint32_t _a=(EAX),_b=(0x10450120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e758 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042e75b mov edx, dword ptr [0x10451908] */
  EDX = (r32((uint32_t)(0x10451908)));
  /* 1042e761 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1042e764 jmp 0x1042e73e */
  goto L_1042e73e;
L_1042e766:;
  /* 1042e766 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1042e76d jmp 0x1042e778 */
  goto L_1042e778;
L_1042e76f:;
  /* 1042e76f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042e772 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e775 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1042e778:;
  /* 1042e778 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e77c jge 0x1042e7c8 */
  if ((C.sf==C.of)) goto L_1042e7c8;
  /* 1042e77e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042e781 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1042e784 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042e787 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1042e78a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042e78d mov eax, dword ptr [ecx*4 + 0x10452f60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10452f60)));
  /* 1042e794 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e798 je 0x1042e7b6 */
  if (C.zf) goto L_1042e7b6;
  /* 1042e79a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042e79d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1042e7a0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042e7a3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1042e7a6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042e7a9 mov eax, dword ptr [ecx*4 + 0x10452f60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10452f60)));
  /* 1042e7b0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e7b4 jne 0x1042e7c6 */
  if (!C.zf) goto L_1042e7c6;
L_1042e7b6:;
  /* 1042e7b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042e7b9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1042e7bc mov dword ptr [ecx + 0x10450130], 0xffffffff */
  w32((uint32_t)(ECX + 0x10450130), (0xffffffffu));
L_1042e7c6:;
  /* 1042e7c6 jmp 0x1042e76f */
  goto L_1042e76f;
L_1042e7c8:;
  /* 1042e7c8 mov esp, ebp */
  ESP = (EBP);
  /* 1042e7ca pop ebp */
  EBP = (pop32());
  /* 1042e7cb ret  */
  ESPCHK(0x1042e6a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7d0 @ 0x1042e7d0 (26 bytes, 9 insns) */
void f_1042e7d0(void) {
  FTRACE(0x1042e7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042e7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1042e7d1 mov ebp, esp */
  EBP = (ESP);
  /* 1042e7d3 call 0x1042f3d0 */
  push32(0x1042e7d8u); f_1042f3d0();
  /* 1042e7d8 movsx eax, byte ptr [0x104515ac] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x104515ac))));
  /* 1042e7df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042e7e1 je 0x1042e7e8 */
  if (C.zf) goto L_1042e7e8;
  /* 1042e7e3 call 0x1042f190 */
  push32(0x1042e7e8u); f_1042f190();
L_1042e7e8:;
  /* 1042e7e8 pop ebp */
  EBP = (pop32());
  /* 1042e7e9 ret  */
  ESPCHK(0x1042e7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7f0 @ 0x1042e7f0 (61 bytes, 20 insns) */
void f_1042e7f0(void) {
  FTRACE(0x1042e7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042e7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1042e7f1 mov ebp, esp */
  EBP = (ESP);
  /* 1042e7f3 cmp dword ptr [ebp + 8], 0x10450120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10450120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e7fa jb 0x1042e81e */
  if (C.cf) goto L_1042e81e;
  /* 1042e7fc cmp dword ptr [ebp + 8], 0x10450380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10450380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e803 ja 0x1042e81e */
  if ((!C.cf&&!C.zf)) goto L_1042e81e;
  /* 1042e805 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e808 sub eax, 0x10450120 */
  { uint32_t _a=(EAX),_b=(0x10450120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042e80d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1042e810 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e813 push eax */
  push32((uint32_t)(EAX));
  /* 1042e814 call 0x104293e0 */
  push32(0x1042e819u); f_104293e0();
  /* 1042e819 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e81c jmp 0x1042e82b */
  goto L_1042e82b;
L_1042e81e:;
  /* 1042e81e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e821 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e824 push ecx */
  push32((uint32_t)(ECX));
  /* 1042e825 call dword ptr [0x10454388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454388))), 0x1042e82bu);
L_1042e82b:;
  /* 1042e82b pop ebp */
  EBP = (pop32());
  /* 1042e82c ret  */
  ESPCHK(0x1042e7f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e830 @ 0x1042e830 (41 bytes, 16 insns) */
void f_1042e830(void) {
  FTRACE(0x1042e830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042e830 push ebp */
  push32((uint32_t)(EBP));
  /* 1042e831 mov ebp, esp */
  EBP = (ESP);
  /* 1042e833 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e837 jge 0x1042e84a */
  if ((C.sf==C.of)) goto L_1042e84a;
  /* 1042e839 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e83c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e83f push eax */
  push32((uint32_t)(EAX));
  /* 1042e840 call 0x104293e0 */
  push32(0x1042e845u); f_104293e0();
  /* 1042e845 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e848 jmp 0x1042e857 */
  goto L_1042e857;
L_1042e84a:;
  /* 1042e84a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042e84d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e850 push ecx */
  push32((uint32_t)(ECX));
  /* 1042e851 call dword ptr [0x10454388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454388))), 0x1042e857u);
L_1042e857:;
  /* 1042e857 pop ebp */
  EBP = (pop32());
  /* 1042e858 ret  */
  ESPCHK(0x1042e830u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e860 @ 0x1042e860 (61 bytes, 20 insns) */
void f_1042e860(void) {
  FTRACE(0x1042e860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042e860 push ebp */
  push32((uint32_t)(EBP));
  /* 1042e861 mov ebp, esp */
  EBP = (ESP);
  /* 1042e863 cmp dword ptr [ebp + 8], 0x10450120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10450120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e86a jb 0x1042e88e */
  if (C.cf) goto L_1042e88e;
  /* 1042e86c cmp dword ptr [ebp + 8], 0x10450380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10450380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e873 ja 0x1042e88e */
  if ((!C.cf&&!C.zf)) goto L_1042e88e;
  /* 1042e875 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e878 sub eax, 0x10450120 */
  { uint32_t _a=(EAX),_b=(0x10450120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042e87d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1042e880 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e883 push eax */
  push32((uint32_t)(EAX));
  /* 1042e884 call 0x10429480 */
  push32(0x1042e889u); f_10429480();
  /* 1042e889 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e88c jmp 0x1042e89b */
  goto L_1042e89b;
L_1042e88e:;
  /* 1042e88e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e891 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e894 push ecx */
  push32((uint32_t)(ECX));
  /* 1042e895 call dword ptr [0x1045438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045438c))), 0x1042e89bu);
L_1042e89b:;
  /* 1042e89b pop ebp */
  EBP = (pop32());
  /* 1042e89c ret  */
  ESPCHK(0x1042e860u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e8a0 @ 0x1042e8a0 (41 bytes, 16 insns) */
void f_1042e8a0(void) {
  FTRACE(0x1042e8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042e8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1042e8a1 mov ebp, esp */
  EBP = (ESP);
  /* 1042e8a3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e8a7 jge 0x1042e8ba */
  if ((C.sf==C.of)) goto L_1042e8ba;
  /* 1042e8a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e8ac add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e8af push eax */
  push32((uint32_t)(EAX));
  /* 1042e8b0 call 0x10429480 */
  push32(0x1042e8b5u); f_10429480();
  /* 1042e8b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e8b8 jmp 0x1042e8c7 */
  goto L_1042e8c7;
L_1042e8ba:;
  /* 1042e8ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042e8bd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e8c0 push ecx */
  push32((uint32_t)(ECX));
  /* 1042e8c1 call dword ptr [0x1045438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045438c))), 0x1042e8c7u);
L_1042e8c7:;
  /* 1042e8c7 pop ebp */
  EBP = (pop32());
  /* 1042e8c8 ret  */
  ESPCHK(0x1042e8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e8d0 @ 0x1042e8d0 (119 bytes, 34 insns) */
void f_1042e8d0(void) {
  FTRACE(0x1042e8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042e8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1042e8d1 mov ebp, esp */
  EBP = (ESP);
  /* 1042e8d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042e8d6 push 0x10451904 */
  push32((uint32_t)(0x10451904u));
  /* 1042e8db call dword ptr [0x1045430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045430c))), 0x1042e8e1u);
  /* 1042e8e1 cmp dword ptr [0x104518f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104518f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e8e8 je 0x1042e908 */
  if (C.zf) goto L_1042e908;
  /* 1042e8ea push 0x10451904 */
  push32((uint32_t)(0x10451904u));
  /* 1042e8ef call dword ptr [0x104542fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542fc))), 0x1042e8f5u);
  /* 1042e8f5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1042e8f7 call 0x104293e0 */
  push32(0x1042e8fcu); f_104293e0();
  /* 1042e8fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e8ff mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1042e906 jmp 0x1042e90f */
  goto L_1042e90f;
L_1042e908:;
  /* 1042e908 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1042e90f:;
  /* 1042e90f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1042e913 push eax */
  push32((uint32_t)(EAX));
  /* 1042e914 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e917 push ecx */
  push32((uint32_t)(ECX));
  /* 1042e918 call 0x1042e950 */
  push32(0x1042e91du); f_1042e950();
  /* 1042e91d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e920 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1042e923 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e927 je 0x1042e935 */
  if (C.zf) goto L_1042e935;
  /* 1042e929 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1042e92b call 0x10429480 */
  push32(0x1042e930u); f_10429480();
  /* 1042e930 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042e933 jmp 0x1042e940 */
  goto L_1042e940;
L_1042e935:;
  /* 1042e935 push 0x10451904 */
  push32((uint32_t)(0x10451904u));
  /* 1042e93a call dword ptr [0x104542fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542fc))), 0x1042e940u);
L_1042e940:;
  /* 1042e940 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042e943 mov esp, ebp */
  ESP = (EBP);
  /* 1042e945 pop ebp */
  EBP = (pop32());
  /* 1042e946 ret  */
  ESPCHK(0x1042e8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e950 @ 0x1042e950 (160 bytes, 50 insns) */
void f_1042e950(void) {
  FTRACE(0x1042e950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042e950 push ebp */
  push32((uint32_t)(EBP));
  /* 1042e951 mov ebp, esp */
  EBP = (ESP);
  /* 1042e953 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042e956 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e95a jne 0x1042e963 */
  if (!C.zf) goto L_1042e963;
  /* 1042e95c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042e95e jmp 0x1042e9ec */
  goto L_1042e9ec;
L_1042e963:;
  /* 1042e963 cmp dword ptr [0x10451778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10451778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e96a jne 0x1042e99a */
  if (!C.zf) goto L_1042e99a;
  /* 1042e96c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042e96f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042e974 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e979 jle 0x1042e98b */
  if ((C.zf||C.sf!=C.of)) goto L_1042e98b;
  /* 1042e97b call 0x1042d8b0 */
  push32(0x1042e980u); f_1042d8b0();
  /* 1042e980 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1042e986 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042e989 jmp 0x1042e9ec */
  goto L_1042e9ec;
L_1042e98b:;
  /* 1042e98b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e98e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1042e991 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1042e993 mov eax, 1 */
  EAX = (0x1u);
  /* 1042e998 jmp 0x1042e9ec */
  goto L_1042e9ec;
L_1042e99a:;
  /* 1042e99a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1042e9a1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1042e9a4 push eax */
  push32((uint32_t)(EAX));
  /* 1042e9a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042e9a7 mov ecx, dword ptr [0x1044fea4] */
  ECX = (r32((uint32_t)(0x1044fea4)));
  /* 1042e9ad push ecx */
  push32((uint32_t)(ECX));
  /* 1042e9ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042e9b1 push edx */
  push32((uint32_t)(EDX));
  /* 1042e9b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1042e9b4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1042e9b7 push eax */
  push32((uint32_t)(EAX));
  /* 1042e9b8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1042e9bd mov ecx, dword ptr [0x10451788] */
  ECX = (r32((uint32_t)(0x10451788)));
  /* 1042e9c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1042e9c4 call dword ptr [0x10454364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454364))), 0x1042e9cau);
  /* 1042e9ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1042e9cd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e9d1 je 0x1042e9d9 */
  if (C.zf) goto L_1042e9d9;
  /* 1042e9d3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042e9d7 je 0x1042e9e9 */
  if (C.zf) goto L_1042e9e9;
L_1042e9d9:;
  /* 1042e9d9 call 0x1042d8b0 */
  push32(0x1042e9deu); f_1042d8b0();
  /* 1042e9de mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1042e9e4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042e9e7 jmp 0x1042e9ec */
  goto L_1042e9ec;
L_1042e9e9:;
  /* 1042e9e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1042e9ec:;
  /* 1042e9ec mov esp, ebp */
  ESP = (EBP);
  /* 1042e9ee pop ebp */
  EBP = (pop32());
  /* 1042e9ef ret  */
  ESPCHK(0x1042e950u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1042e9f0 (32 bytes, 18 insns) */
void f_1042e9f0(void) {
  FTRACE(0x1042e9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042e9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1042e9f1 mov ebp, esp */
  EBP = (ESP);
  /* 1042e9f3 push ebx */
  push32((uint32_t)(EBX));
  /* 1042e9f4 push esi */
  push32((uint32_t)(ESI));
  /* 1042e9f5 push edi */
  push32((uint32_t)(EDI));
  /* 1042e9f6 push ebp */
  push32((uint32_t)(EBP));
  /* 1042e9f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042e9f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042e9fb push 0x1042ea08 */
  push32((uint32_t)(0x1042ea08u));
  /* 1042ea00 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1042ea03 call 0x1043613c */
  push32(0x1042ea08u); f_1043613c();
  /* 1042ea08 pop ebp */
  EBP = (pop32());
  /* 1042ea09 pop edi */
  EDI = (pop32());
  /* 1042ea0a pop esi */
  ESI = (pop32());
  /* 1042ea0b pop ebx */
  EBX = (pop32());
  /* 1042ea0c mov esp, ebp */
  ESP = (EBP);
  /* 1042ea0e pop ebp */
  EBP = (pop32());
  /* 1042ea0f ret  */
  ESPCHK(0x1042e9f0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1042ea32 (104 bytes, 33 insns) */
void f_1042ea32(void) {
  FTRACE(0x1042ea32u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042ea32 push ebx */
  push32((uint32_t)(EBX));
  /* 1042ea33 push esi */
  push32((uint32_t)(ESI));
  /* 1042ea34 push edi */
  push32((uint32_t)(EDI));
  /* 1042ea35 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1042ea39 push eax */
  push32((uint32_t)(EAX));
  /* 1042ea3a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1042ea3c push 0x1042ea10 */
  push32((uint32_t)(0x1042ea10u));
  /* 1042ea41 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1042ea48 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1042ea4f:;
  /* 1042ea4f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1042ea53 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1042ea56 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1042ea59 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042ea5c je 0x1042ea8c */
  if (C.zf) goto L_1042ea8c;
  /* 1042ea5e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042ea62 je 0x1042ea8c */
  if (C.zf) goto L_1042ea8c;
  /* 1042ea64 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1042ea67 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1042ea6a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1042ea6e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1042ea71 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042ea76 jne 0x1042ea8a */
  if (!C.zf) goto L_1042ea8a;
  /* 1042ea78 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1042ea7d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1042ea81 call 0x1042eac6 */
  push32(0x1042ea86u); f_1042eac6();
  /* 1042ea86 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1042ea8au);
L_1042ea8a:;
  /* 1042ea8a jmp 0x1042ea4f */
  goto L_1042ea4f;
L_1042ea8c:;
  /* 1042ea8c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1042ea93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ea96 pop edi */
  EDI = (pop32());
  /* 1042ea97 pop esi */
  ESI = (pop32());
  /* 1042ea98 pop ebx */
  EBX = (pop32());
  /* 1042ea99 ret  */
  ESPCHK(0x1042ea32u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eac6 @ 0x1042eac6 (24 bytes, 10 insns) */
void f_1042eac6(void) {
  FTRACE(0x1042eac6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042eac6 push ebx */
  push32((uint32_t)(EBX));
  /* 1042eac7 push ecx */
  push32((uint32_t)(ECX));
  /* 1042eac8 mov ebx, 0x104503b8 */
  EBX = (0x104503b8u);
  /* 1042eacd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042ead0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1042ead3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1042ead6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1042ead9 pop ecx */
  ECX = (pop32());
  /* 1042eada pop ebx */
  EBX = (pop32());
  /* 1042eadb ret 4 */
  ESPCHK(0x1042eac6u, _esp0);
  ESP += 8; return;
}

/* FUN_1000eba5 @ 0x1042eba5 (27 bytes, 11 insns) */
void f_1042eba5(void) {
  FTRACE(0x1042eba5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042eba5 push ebp */
  push32((uint32_t)(EBP));
  /* 1042eba6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1042ebaa mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1042ebac mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1042ebaf push eax */
  push32((uint32_t)(EAX));
  /* 1042ebb0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1042ebb3 push eax */
  push32((uint32_t)(EAX));
  /* 1042ebb4 call 0x1042ea32 */
  push32(0x1042ebb9u); f_1042ea32();
  /* 1042ebb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ebbc pop ebp */
  EBP = (pop32());
  /* 1042ebbd ret 4 */
  ESPCHK(0x1042eba5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ebc0 @ 0x1042ebc0 (482 bytes, 138 insns) */
void f_1042ebc0(void) {
  FTRACE(0x1042ebc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042ebc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1042ebc1 mov ebp, esp */
  EBP = (ESP);
  /* 1042ebc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042ebc6 push esi */
  push32((uint32_t)(ESI));
  /* 1042ebc7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1042ebce push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1042ebd0 call 0x104293e0 */
  push32(0x1042ebd5u); f_104293e0();
  /* 1042ebd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ebd8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1042ebdf jmp 0x1042ebea */
  goto L_1042ebea;
L_1042ebe1:;
  /* 1042ebe1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042ebe4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ebe7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1042ebea:;
  /* 1042ebea cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042ebee jge 0x1042ed90 */
  if ((C.sf==C.of)) goto L_1042ed90;
  /* 1042ebf4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042ebf7 cmp dword ptr [ecx*4 + 0x10452f60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10452f60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042ebff je 0x1042ecf6 */
  if (C.zf) goto L_1042ecf6;
  /* 1042ec05 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042ec08 mov eax, dword ptr [edx*4 + 0x10452f60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10452f60)));
  /* 1042ec0f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1042ec12 jmp 0x1042ec1d */
  goto L_1042ec1d;
L_1042ec14:;
  /* 1042ec14 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042ec17 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ec1a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1042ec1d:;
  /* 1042ec1d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042ec20 mov eax, dword ptr [edx*4 + 0x10452f60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10452f60)));
  /* 1042ec27 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ec2c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042ec2f jae 0x1042ece6 */
  if (!C.cf) goto L_1042ece6;
  /* 1042ec35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042ec38 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1042ec3c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1042ec3f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042ec41 jne 0x1042ece1 */
  if (!C.zf) goto L_1042ece1;
  /* 1042ec47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042ec4a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042ec4e jne 0x1042ec89 */
  if (!C.zf) goto L_1042ec89;
  /* 1042ec50 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1042ec52 call 0x104293e0 */
  push32(0x1042ec57u); f_104293e0();
  /* 1042ec57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ec5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042ec5d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042ec61 jne 0x1042ec7f */
  if (!C.zf) goto L_1042ec7f;
  /* 1042ec63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042ec66 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ec69 push edx */
  push32((uint32_t)(EDX));
  /* 1042ec6a call dword ptr [0x10454384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454384))), 0x1042ec70u);
  /* 1042ec70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042ec73 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1042ec76 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ec79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042ec7c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1042ec7f:;
  /* 1042ec7f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1042ec81 call 0x10429480 */
  push32(0x1042ec86u); f_10429480();
  /* 1042ec86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1042ec89:;
  /* 1042ec89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042ec8c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ec8f push eax */
  push32((uint32_t)(EAX));
  /* 1042ec90 call dword ptr [0x10454388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454388))), 0x1042ec96u);
  /* 1042ec96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042ec99 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1042ec9d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1042eca0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042eca2 je 0x1042ecb6 */
  if (C.zf) goto L_1042ecb6;
  /* 1042eca4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042eca7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ecaa push eax */
  push32((uint32_t)(EAX));
  /* 1042ecab call dword ptr [0x1045438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045438c))), 0x1042ecb1u);
  /* 1042ecb1 jmp 0x1042ec14 */
  goto L_1042ec14;
L_1042ecb6:;
  /* 1042ecb6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042ecb9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1042ecbf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042ecc2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1042ecc5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042ecc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042eccb sub eax, dword ptr [edx*4 + 0x10452f60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x10452f60))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042ecd2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1042ecd3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1042ecd8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1042ecda add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ecdc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1042ecdf jmp 0x1042ece6 */
  goto L_1042ece6;
L_1042ece1:;
  /* 1042ece1 jmp 0x1042ec14 */
  goto L_1042ec14;
L_1042ece6:;
  /* 1042ece6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042ecea je 0x1042ecf1 */
  if (C.zf) goto L_1042ecf1;
  /* 1042ecec jmp 0x1042ed90 */
  goto L_1042ed90;
L_1042ecf1:;
  /* 1042ecf1 jmp 0x1042ed8b */
  goto L_1042ed8b;
L_1042ecf6:;
  /* 1042ecf6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1042ecf8 push 0x1044d184 */
  push32((uint32_t)(0x1044d184u));
  /* 1042ecfd push 2 */
  push32((uint32_t)(0x2u));
  /* 1042ecff push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1042ed04 call 0x104259e0 */
  push32(0x1042ed09u); f_104259e0();
  /* 1042ed09 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ed0c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1042ed0f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042ed13 je 0x1042ed89 */
  if (C.zf) goto L_1042ed89;
  /* 1042ed15 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042ed18 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042ed1b mov dword ptr [eax*4 + 0x10452f60], ecx */
  w32((uint32_t)(EAX*4 + 0x10452f60), (ECX));
  /* 1042ed22 mov edx, dword ptr [0x1045309c] */
  EDX = (r32((uint32_t)(0x1045309c)));
  /* 1042ed28 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ed2b mov dword ptr [0x1045309c], edx */
  w32((uint32_t)(0x1045309c), (EDX));
  /* 1042ed31 jmp 0x1042ed3c */
  goto L_1042ed3c;
L_1042ed33:;
  /* 1042ed33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042ed36 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ed39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1042ed3c:;
  /* 1042ed3c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042ed3f mov edx, dword ptr [ecx*4 + 0x10452f60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10452f60)));
  /* 1042ed46 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ed4c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042ed4f jae 0x1042ed74 */
  if (!C.cf) goto L_1042ed74;
  /* 1042ed51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042ed54 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1042ed58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042ed5b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1042ed61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042ed64 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1042ed68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042ed6b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1042ed72 jmp 0x1042ed33 */
  goto L_1042ed33;
L_1042ed74:;
  /* 1042ed74 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042ed77 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1042ed7a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1042ed7d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042ed80 push edx */
  push32((uint32_t)(EDX));
  /* 1042ed81 call 0x1042f0d0 */
  push32(0x1042ed86u); f_1042f0d0();
  /* 1042ed86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1042ed89:;
  /* 1042ed89 jmp 0x1042ed90 */
  goto L_1042ed90;
L_1042ed8b:;
  /* 1042ed8b jmp 0x1042ebe1 */
  goto L_1042ebe1;
L_1042ed90:;
  /* 1042ed90 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1042ed92 call 0x10429480 */
  push32(0x1042ed97u); f_10429480();
  /* 1042ed97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ed9a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042ed9d pop esi */
  ESI = (pop32());
  /* 1042ed9e mov esp, ebp */
  ESP = (EBP);
  /* 1042eda0 pop ebp */
  EBP = (pop32());
  /* 1042eda1 ret  */
  ESPCHK(0x1042ebc0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1042edb0 (183 bytes, 57 insns) */
void f_1042edb0(void) {
  FTRACE(0x1042edb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042edb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1042edb1 mov ebp, esp */
  EBP = (ESP);
  /* 1042edb3 push ecx */
  push32((uint32_t)(ECX));
  /* 1042edb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042edb7 cmp eax, dword ptr [0x1045309c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1045309c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042edbd jae 0x1042ee4a */
  if (!C.cf) goto L_1042ee4a;
  /* 1042edc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042edc6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1042edc9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042edcc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1042edcf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042edd2 mov eax, dword ptr [ecx*4 + 0x10452f60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10452f60)));
  /* 1042edd9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042eddd jne 0x1042ee4a */
  if (!C.zf) goto L_1042ee4a;
  /* 1042eddf cmp dword ptr [0x1045156c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1045156c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042ede6 jne 0x1042ee2a */
  if (!C.zf) goto L_1042ee2a;
  /* 1042ede8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042edeb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1042edee cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042edf2 je 0x1042ee02 */
  if (C.zf) goto L_1042ee02;
  /* 1042edf4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042edf8 je 0x1042ee10 */
  if (C.zf) goto L_1042ee10;
  /* 1042edfa cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042edfe je 0x1042ee1e */
  if (C.zf) goto L_1042ee1e;
  /* 1042ee00 jmp 0x1042ee2a */
  goto L_1042ee2a;
L_1042ee02:;
  /* 1042ee02 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042ee05 push edx */
  push32((uint32_t)(EDX));
  /* 1042ee06 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1042ee08 call dword ptr [0x104542bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542bc))), 0x1042ee0eu);
  /* 1042ee0e jmp 0x1042ee2a */
  goto L_1042ee2a;
L_1042ee10:;
  /* 1042ee10 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042ee13 push eax */
  push32((uint32_t)(EAX));
  /* 1042ee14 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1042ee16 call dword ptr [0x104542bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542bc))), 0x1042ee1cu);
  /* 1042ee1c jmp 0x1042ee2a */
  goto L_1042ee2a;
L_1042ee1e:;
  /* 1042ee1e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042ee21 push ecx */
  push32((uint32_t)(ECX));
  /* 1042ee22 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1042ee24 call dword ptr [0x104542bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542bc))), 0x1042ee2au);
L_1042ee2a:;
  /* 1042ee2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042ee2d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1042ee30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042ee33 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1042ee36 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042ee39 mov ecx, dword ptr [edx*4 + 0x10452f60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10452f60)));
  /* 1042ee40 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042ee43 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1042ee46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042ee48 jmp 0x1042ee63 */
  goto L_1042ee63;
L_1042ee4a:;
  /* 1042ee4a call 0x1042d8b0 */
  push32(0x1042ee4fu); f_1042d8b0();
  /* 1042ee4f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1042ee55 call 0x1042d8c0 */
  push32(0x1042ee5au); f_1042d8c0();
  /* 1042ee5a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1042ee60 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1042ee63:;
  /* 1042ee63 mov esp, ebp */
  ESP = (EBP);
  /* 1042ee65 pop ebp */
  EBP = (pop32());
  /* 1042ee66 ret  */
  ESPCHK(0x1042edb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee70 @ 0x1042ee70 (216 bytes, 63 insns) */
void f_1042ee70(void) {
  FTRACE(0x1042ee70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042ee70 push ebp */
  push32((uint32_t)(EBP));
  /* 1042ee71 mov ebp, esp */
  EBP = (ESP);
  /* 1042ee73 push ecx */
  push32((uint32_t)(ECX));
  /* 1042ee74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042ee77 cmp eax, dword ptr [0x1045309c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1045309c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042ee7d jae 0x1042ef2b */
  if (!C.cf) goto L_1042ef2b;
  /* 1042ee83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042ee86 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1042ee89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042ee8c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1042ee8f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042ee92 mov eax, dword ptr [ecx*4 + 0x10452f60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10452f60)));
  /* 1042ee99 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1042ee9e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1042eea1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042eea3 je 0x1042ef2b */
  if (C.zf) goto L_1042ef2b;
  /* 1042eea9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042eeac sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1042eeaf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042eeb2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1042eeb5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042eeb8 mov ecx, dword ptr [edx*4 + 0x10452f60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10452f60)));
  /* 1042eebf cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042eec3 je 0x1042ef2b */
  if (C.zf) goto L_1042ef2b;
  /* 1042eec5 cmp dword ptr [0x1045156c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1045156c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042eecc jne 0x1042ef0a */
  if (!C.zf) goto L_1042ef0a;
  /* 1042eece mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042eed1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1042eed4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042eed8 je 0x1042eee8 */
  if (C.zf) goto L_1042eee8;
  /* 1042eeda cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042eede je 0x1042eef4 */
  if (C.zf) goto L_1042eef4;
  /* 1042eee0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042eee4 je 0x1042ef00 */
  if (C.zf) goto L_1042ef00;
  /* 1042eee6 jmp 0x1042ef0a */
  goto L_1042ef0a;
L_1042eee8:;
  /* 1042eee8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042eeea push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1042eeec call dword ptr [0x104542bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542bc))), 0x1042eef2u);
  /* 1042eef2 jmp 0x1042ef0a */
  goto L_1042ef0a;
L_1042eef4:;
  /* 1042eef4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042eef6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1042eef8 call dword ptr [0x104542bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542bc))), 0x1042eefeu);
  /* 1042eefe jmp 0x1042ef0a */
  goto L_1042ef0a;
L_1042ef00:;
  /* 1042ef00 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042ef02 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1042ef04 call dword ptr [0x104542bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542bc))), 0x1042ef0au);
L_1042ef0a:;
  /* 1042ef0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042ef0d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1042ef10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042ef13 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1042ef16 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042ef19 mov edx, dword ptr [eax*4 + 0x10452f60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10452f60)));
  /* 1042ef20 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1042ef27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042ef29 jmp 0x1042ef44 */
  goto L_1042ef44;
L_1042ef2b:;
  /* 1042ef2b call 0x1042d8b0 */
  push32(0x1042ef30u); f_1042d8b0();
  /* 1042ef30 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1042ef36 call 0x1042d8c0 */
  push32(0x1042ef3bu); f_1042d8c0();
  /* 1042ef3b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1042ef41 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1042ef44:;
  /* 1042ef44 mov esp, ebp */
  ESP = (EBP);
  /* 1042ef46 pop ebp */
  EBP = (pop32());
  /* 1042ef47 ret  */
  ESPCHK(0x1042ee70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef50 @ 0x1042ef50 (102 bytes, 30 insns) */
void f_1042ef50(void) {
  FTRACE(0x1042ef50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042ef50 push ebp */
  push32((uint32_t)(EBP));
  /* 1042ef51 mov ebp, esp */
  EBP = (ESP);
  /* 1042ef53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042ef56 cmp eax, dword ptr [0x1045309c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1045309c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042ef5c jae 0x1042ef9b */
  if (!C.cf) goto L_1042ef9b;
  /* 1042ef5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042ef61 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1042ef64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042ef67 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1042ef6a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042ef6d mov eax, dword ptr [ecx*4 + 0x10452f60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10452f60)));
  /* 1042ef74 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1042ef79 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1042ef7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042ef7e je 0x1042ef9b */
  if (C.zf) goto L_1042ef9b;
  /* 1042ef80 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042ef83 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1042ef86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042ef89 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1042ef8c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042ef8f mov ecx, dword ptr [edx*4 + 0x10452f60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10452f60)));
  /* 1042ef96 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1042ef99 jmp 0x1042efb4 */
  goto L_1042efb4;
L_1042ef9b:;
  /* 1042ef9b call 0x1042d8b0 */
  push32(0x1042efa0u); f_1042d8b0();
  /* 1042efa0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1042efa6 call 0x1042d8c0 */
  push32(0x1042efabu); f_1042d8c0();
  /* 1042efab mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1042efb1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1042efb4:;
  /* 1042efb4 pop ebp */
  EBP = (pop32());
  /* 1042efb5 ret  */
  ESPCHK(0x1042ef50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000efc0 @ 0x1042efc0 (260 bytes, 83 insns) */
void f_1042efc0(void) {
  FTRACE(0x1042efc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042efc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1042efc1 mov ebp, esp */
  EBP = (ESP);
  /* 1042efc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042efc6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1042efca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042efcd and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1042efd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042efd2 je 0x1042efdd */
  if (C.zf) goto L_1042efdd;
  /* 1042efd4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1042efd7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1042efda mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1042efdd:;
  /* 1042efdd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042efe0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1042efe6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042efe8 je 0x1042eff2 */
  if (C.zf) goto L_1042eff2;
  /* 1042efea mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1042efed or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1042efef mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1042eff2:;
  /* 1042eff2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042eff5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1042effb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042effd je 0x1042f008 */
  if (C.zf) goto L_1042f008;
  /* 1042efff mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1042f002 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1042f005 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1042f008:;
  /* 1042f008 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042f00b push eax */
  push32((uint32_t)(EAX));
  /* 1042f00c call dword ptr [0x10454344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454344))), 0x1042f012u);
  /* 1042f012 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1042f015 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f019 jne 0x1042f032 */
  if (!C.zf) goto L_1042f032;
  /* 1042f01b call dword ptr [0x10454338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454338))), 0x1042f021u);
  /* 1042f021 push eax */
  push32((uint32_t)(EAX));
  /* 1042f022 call 0x1042d810 */
  push32(0x1042f027u); f_1042d810();
  /* 1042f027 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f02a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042f02d jmp 0x1042f0c0 */
  goto L_1042f0c0;
L_1042f032:;
  /* 1042f032 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f036 jne 0x1042f043 */
  if (!C.zf) goto L_1042f043;
  /* 1042f038 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1042f03b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1042f03e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1042f041 jmp 0x1042f052 */
  goto L_1042f052;
L_1042f043:;
  /* 1042f043 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f047 jne 0x1042f052 */
  if (!C.zf) goto L_1042f052;
  /* 1042f049 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1042f04c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1042f04f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1042f052:;
  /* 1042f052 call 0x1042ebc0 */
  push32(0x1042f057u); f_1042ebc0();
  /* 1042f057 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1042f05a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f05e jne 0x1042f07b */
  if (!C.zf) goto L_1042f07b;
  /* 1042f060 call 0x1042d8b0 */
  push32(0x1042f065u); f_1042d8b0();
  /* 1042f065 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1042f06b call 0x1042d8c0 */
  push32(0x1042f070u); f_1042d8c0();
  /* 1042f070 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1042f076 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042f079 jmp 0x1042f0c0 */
  goto L_1042f0c0;
L_1042f07b:;
  /* 1042f07b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042f07e push eax */
  push32((uint32_t)(EAX));
  /* 1042f07f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042f082 push ecx */
  push32((uint32_t)(ECX));
  /* 1042f083 call 0x1042edb0 */
  push32(0x1042f088u); f_1042edb0();
  /* 1042f088 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f08b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1042f08e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1042f091 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1042f094 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042f097 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1042f09a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042f09d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1042f0a0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042f0a3 mov edx, dword ptr [eax*4 + 0x10452f60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10452f60)));
  /* 1042f0aa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1042f0ad mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1042f0b1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042f0b4 push ecx */
  push32((uint32_t)(ECX));
  /* 1042f0b5 call 0x1042f160 */
  push32(0x1042f0bau); f_1042f160();
  /* 1042f0ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f0bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1042f0c0:;
  /* 1042f0c0 mov esp, ebp */
  ESP = (EBP);
  /* 1042f0c2 pop ebp */
  EBP = (pop32());
  /* 1042f0c3 ret  */
  ESPCHK(0x1042efc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0d0 @ 0x1042f0d0 (134 bytes, 44 insns) */
void f_1042f0d0(void) {
  FTRACE(0x1042f0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042f0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1042f0d1 mov ebp, esp */
  EBP = (ESP);
  /* 1042f0d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1042f0d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042f0d7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1042f0da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042f0dd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1042f0e0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042f0e3 mov edx, dword ptr [eax*4 + 0x10452f60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10452f60)));
  /* 1042f0ea add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f0ec mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1042f0ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042f0f2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f0f6 jne 0x1042f131 */
  if (!C.zf) goto L_1042f131;
  /* 1042f0f8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1042f0fa call 0x104293e0 */
  push32(0x1042f0ffu); f_104293e0();
  /* 1042f0ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f102 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042f105 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f109 jne 0x1042f127 */
  if (!C.zf) goto L_1042f127;
  /* 1042f10b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042f10e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f111 push edx */
  push32((uint32_t)(EDX));
  /* 1042f112 call dword ptr [0x10454384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454384))), 0x1042f118u);
  /* 1042f118 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042f11b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1042f11e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f121 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042f124 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1042f127:;
  /* 1042f127 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1042f129 call 0x10429480 */
  push32(0x1042f12eu); f_10429480();
  /* 1042f12e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1042f131:;
  /* 1042f131 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042f134 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1042f137 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042f13a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1042f13d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042f140 mov edx, dword ptr [eax*4 + 0x10452f60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10452f60)));
  /* 1042f147 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1042f14b push eax */
  push32((uint32_t)(EAX));
  /* 1042f14c call dword ptr [0x10454388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454388))), 0x1042f152u);
  /* 1042f152 mov esp, ebp */
  ESP = (EBP);
  /* 1042f154 pop ebp */
  EBP = (pop32());
  /* 1042f155 ret  */
  ESPCHK(0x1042f0d0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1042f160 (38 bytes, 13 insns) */
void f_1042f160(void) {
  FTRACE(0x1042f160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042f160 push ebp */
  push32((uint32_t)(EBP));
  /* 1042f161 mov ebp, esp */
  EBP = (ESP);
  /* 1042f163 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042f166 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1042f169 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042f16c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1042f16f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042f172 mov edx, dword ptr [eax*4 + 0x10452f60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10452f60)));
  /* 1042f179 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1042f17d push eax */
  push32((uint32_t)(EAX));
  /* 1042f17e call dword ptr [0x1045438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045438c))), 0x1042f184u);
  /* 1042f184 pop ebp */
  EBP = (pop32());
  /* 1042f185 ret  */
  ESPCHK(0x1042f160u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f190 @ 0x1042f190 (218 bytes, 63 insns) */
void f_1042f190(void) {
  FTRACE(0x1042f190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042f190 push ebp */
  push32((uint32_t)(EBP));
  /* 1042f191 mov ebp, esp */
  EBP = (ESP);
  /* 1042f193 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042f196 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1042f19d push 2 */
  push32((uint32_t)(0x2u));
  /* 1042f19f call 0x104293e0 */
  push32(0x1042f1a4u); f_104293e0();
  /* 1042f1a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f1a7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1042f1ae jmp 0x1042f1b9 */
  goto L_1042f1b9;
L_1042f1b0:;
  /* 1042f1b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042f1b3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f1b6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1042f1b9:;
  /* 1042f1b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042f1bc cmp ecx, dword ptr [0x10452c60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10452c60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f1c2 jge 0x1042f259 */
  if ((C.sf==C.of)) goto L_1042f259;
  /* 1042f1c8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042f1cb mov eax, dword ptr [0x10451908] */
  EAX = (r32((uint32_t)(0x10451908)));
  /* 1042f1d0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f1d4 je 0x1042f254 */
  if (C.zf) goto L_1042f254;
  /* 1042f1d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042f1d9 mov edx, dword ptr [0x10451908] */
  EDX = (r32((uint32_t)(0x10451908)));
  /* 1042f1df mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1042f1e2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1042f1e5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1042f1eb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042f1ed je 0x1042f211 */
  if (C.zf) goto L_1042f211;
  /* 1042f1ef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042f1f2 mov eax, dword ptr [0x10451908] */
  EAX = (r32((uint32_t)(0x10451908)));
  /* 1042f1f7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1042f1fa push ecx */
  push32((uint32_t)(ECX));
  /* 1042f1fb call 0x1042ff80 */
  push32(0x1042f200u); f_1042ff80();
  /* 1042f200 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f203 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f206 je 0x1042f211 */
  if (C.zf) goto L_1042f211;
  /* 1042f208 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042f20b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f20e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1042f211:;
  /* 1042f211 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f215 jl 0x1042f254 */
  if ((C.sf!=C.of)) goto L_1042f254;
  /* 1042f217 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042f21a mov ecx, dword ptr [0x10451908] */
  ECX = (r32((uint32_t)(0x10451908)));
  /* 1042f220 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1042f223 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f226 push edx */
  push32((uint32_t)(EDX));
  /* 1042f227 call dword ptr [0x1045434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045434c))), 0x1042f22du);
  /* 1042f22d push 2 */
  push32((uint32_t)(0x2u));
  /* 1042f22f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042f232 mov ecx, dword ptr [0x10451908] */
  ECX = (r32((uint32_t)(0x10451908)));
  /* 1042f238 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1042f23b push edx */
  push32((uint32_t)(EDX));
  /* 1042f23c call 0x10426470 */
  push32(0x1042f241u); f_10426470();
  /* 1042f241 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f244 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042f247 mov ecx, dword ptr [0x10451908] */
  ECX = (r32((uint32_t)(0x10451908)));
  /* 1042f24d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1042f254:;
  /* 1042f254 jmp 0x1042f1b0 */
  goto L_1042f1b0;
L_1042f259:;
  /* 1042f259 push 2 */
  push32((uint32_t)(0x2u));
  /* 1042f25b call 0x10429480 */
  push32(0x1042f260u); f_10429480();
  /* 1042f260 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f263 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042f266 mov esp, ebp */
  ESP = (EBP);
  /* 1042f268 pop ebp */
  EBP = (pop32());
  /* 1042f269 ret  */
  ESPCHK(0x1042f190u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f270 @ 0x1042f270 (68 bytes, 26 insns) */
void f_1042f270(void) {
  FTRACE(0x1042f270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042f270 push ebp */
  push32((uint32_t)(EBP));
  /* 1042f271 mov ebp, esp */
  EBP = (ESP);
  /* 1042f273 push ecx */
  push32((uint32_t)(ECX));
  /* 1042f274 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f278 jne 0x1042f286 */
  if (!C.zf) goto L_1042f286;
  /* 1042f27a push 0 */
  push32((uint32_t)(0x0u));
  /* 1042f27c call 0x1042f3e0 */
  push32(0x1042f281u); f_1042f3e0();
  /* 1042f281 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f284 jmp 0x1042f2b0 */
  goto L_1042f2b0;
L_1042f286:;
  /* 1042f286 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042f289 push eax */
  push32((uint32_t)(EAX));
  /* 1042f28a call 0x1042e7f0 */
  push32(0x1042f28fu); f_1042e7f0();
  /* 1042f28f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f292 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042f295 push ecx */
  push32((uint32_t)(ECX));
  /* 1042f296 call 0x1042f2c0 */
  push32(0x1042f29bu); f_1042f2c0();
  /* 1042f29b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f29e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1042f2a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042f2a4 push edx */
  push32((uint32_t)(EDX));
  /* 1042f2a5 call 0x1042e860 */
  push32(0x1042f2aau); f_1042e860();
  /* 1042f2aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f2ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1042f2b0:;
  /* 1042f2b0 mov esp, ebp */
  ESP = (EBP);
  /* 1042f2b2 pop ebp */
  EBP = (pop32());
  /* 1042f2b3 ret  */
  ESPCHK(0x1042f270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f2c0 @ 0x1042f2c0 (65 bytes, 26 insns) */
void f_1042f2c0(void) {
  FTRACE(0x1042f2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042f2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1042f2c1 mov ebp, esp */
  EBP = (ESP);
  /* 1042f2c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042f2c6 push eax */
  push32((uint32_t)(EAX));
  /* 1042f2c7 call 0x1042f310 */
  push32(0x1042f2ccu); f_1042f310();
  /* 1042f2cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f2cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042f2d1 je 0x1042f2d8 */
  if (C.zf) goto L_1042f2d8;
  /* 1042f2d3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042f2d6 jmp 0x1042f2ff */
  goto L_1042f2ff;
L_1042f2d8:;
  /* 1042f2d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042f2db mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1042f2de and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1042f2e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042f2e6 je 0x1042f2fd */
  if (C.zf) goto L_1042f2fd;
  /* 1042f2e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042f2eb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1042f2ee push ecx */
  push32((uint32_t)(ECX));
  /* 1042f2ef call 0x104300d0 */
  push32(0x1042f2f4u); f_104300d0();
  /* 1042f2f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f2f7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1042f2f9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042f2fb jmp 0x1042f2ff */
  goto L_1042f2ff;
L_1042f2fd:;
  /* 1042f2fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1042f2ff:;
  /* 1042f2ff pop ebp */
  EBP = (pop32());
  /* 1042f300 ret  */
  ESPCHK(0x1042f2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f310 @ 0x1042f310 (183 bytes, 62 insns) */
void f_1042f310(void) {
  FTRACE(0x1042f310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042f310 push ebp */
  push32((uint32_t)(EBP));
  /* 1042f311 mov ebp, esp */
  EBP = (ESP);
  /* 1042f313 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042f316 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1042f31d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042f320 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1042f323 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042f326 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1042f329 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1042f32c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f32f jne 0x1042f3ab */
  if (!C.zf) goto L_1042f3ab;
  /* 1042f331 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042f334 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1042f337 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1042f33d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042f33f je 0x1042f3ab */
  if (C.zf) goto L_1042f3ab;
  /* 1042f341 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042f344 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042f347 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1042f349 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042f34c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1042f34f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f353 jle 0x1042f3ab */
  if ((C.zf||C.sf!=C.of)) goto L_1042f3ab;
  /* 1042f355 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042f358 push edx */
  push32((uint32_t)(EDX));
  /* 1042f359 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042f35c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1042f35f push ecx */
  push32((uint32_t)(ECX));
  /* 1042f360 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042f363 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1042f366 push eax */
  push32((uint32_t)(EAX));
  /* 1042f367 call 0x1042e280 */
  push32(0x1042f36cu); f_1042e280();
  /* 1042f36c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f36f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f372 jne 0x1042f395 */
  if (!C.zf) goto L_1042f395;
  /* 1042f374 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042f377 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1042f37a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1042f380 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042f382 je 0x1042f393 */
  if (C.zf) goto L_1042f393;
  /* 1042f384 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042f387 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1042f38a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1042f38d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042f390 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1042f393:;
  /* 1042f393 jmp 0x1042f3ab */
  goto L_1042f3ab;
L_1042f395:;
  /* 1042f395 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042f398 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1042f39b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1042f39e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042f3a1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1042f3a4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1042f3ab:;
  /* 1042f3ab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042f3ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042f3b1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1042f3b4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1042f3b6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042f3b9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1042f3c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042f3c3 mov esp, ebp */
  ESP = (EBP);
  /* 1042f3c5 pop ebp */
  EBP = (pop32());
  /* 1042f3c6 ret  */
  ESPCHK(0x1042f310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f3d0 @ 0x1042f3d0 (15 bytes, 7 insns) */
void f_1042f3d0(void) {
  FTRACE(0x1042f3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042f3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1042f3d1 mov ebp, esp */
  EBP = (ESP);
  /* 1042f3d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1042f3d5 call 0x1042f3e0 */
  push32(0x1042f3dau); f_1042f3e0();
  /* 1042f3da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f3dd pop ebp */
  EBP = (pop32());
  /* 1042f3de ret  */
  ESPCHK(0x1042f3d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f3e0 @ 0x1042f3e0 (319 bytes, 94 insns) */
void f_1042f3e0(void) {
  FTRACE(0x1042f3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042f3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1042f3e1 mov ebp, esp */
  EBP = (ESP);
  /* 1042f3e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042f3e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1042f3ed mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1042f3f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1042f3f6 call 0x104293e0 */
  push32(0x1042f3fbu); f_104293e0();
  /* 1042f3fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f3fe mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1042f405 jmp 0x1042f410 */
  goto L_1042f410;
L_1042f407:;
  /* 1042f407 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042f40a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f40d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1042f410:;
  /* 1042f410 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042f413 cmp ecx, dword ptr [0x10452c60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10452c60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f419 jge 0x1042f503 */
  if ((C.sf==C.of)) goto L_1042f503;
  /* 1042f41f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042f422 mov eax, dword ptr [0x10451908] */
  EAX = (r32((uint32_t)(0x10451908)));
  /* 1042f427 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f42b je 0x1042f4fe */
  if (C.zf) goto L_1042f4fe;
  /* 1042f431 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042f434 mov edx, dword ptr [0x10451908] */
  EDX = (r32((uint32_t)(0x10451908)));
  /* 1042f43a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1042f43d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1042f440 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1042f446 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042f448 je 0x1042f4fe */
  if (C.zf) goto L_1042f4fe;
  /* 1042f44e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042f451 mov eax, dword ptr [0x10451908] */
  EAX = (r32((uint32_t)(0x10451908)));
  /* 1042f456 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1042f459 push ecx */
  push32((uint32_t)(ECX));
  /* 1042f45a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042f45d push edx */
  push32((uint32_t)(EDX));
  /* 1042f45e call 0x1042e830 */
  push32(0x1042f463u); f_1042e830();
  /* 1042f463 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f466 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042f469 mov ecx, dword ptr [0x10451908] */
  ECX = (r32((uint32_t)(0x10451908)));
  /* 1042f46f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1042f472 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1042f475 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1042f47a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042f47c je 0x1042f4e5 */
  if (C.zf) goto L_1042f4e5;
  /* 1042f47e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f482 jne 0x1042f4a9 */
  if (!C.zf) goto L_1042f4a9;
  /* 1042f484 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042f487 mov edx, dword ptr [0x10451908] */
  EDX = (r32((uint32_t)(0x10451908)));
  /* 1042f48d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1042f490 push eax */
  push32((uint32_t)(EAX));
  /* 1042f491 call 0x1042f2c0 */
  push32(0x1042f496u); f_1042f2c0();
  /* 1042f496 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f499 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f49c je 0x1042f4a7 */
  if (C.zf) goto L_1042f4a7;
  /* 1042f49e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042f4a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f4a4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1042f4a7:;
  /* 1042f4a7 jmp 0x1042f4e5 */
  goto L_1042f4e5;
L_1042f4a9:;
  /* 1042f4a9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f4ad jne 0x1042f4e5 */
  if (!C.zf) goto L_1042f4e5;
  /* 1042f4af mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042f4b2 mov eax, dword ptr [0x10451908] */
  EAX = (r32((uint32_t)(0x10451908)));
  /* 1042f4b7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1042f4ba mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1042f4bd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1042f4c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042f4c2 je 0x1042f4e5 */
  if (C.zf) goto L_1042f4e5;
  /* 1042f4c4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042f4c7 mov ecx, dword ptr [0x10451908] */
  ECX = (r32((uint32_t)(0x10451908)));
  /* 1042f4cd mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1042f4d0 push edx */
  push32((uint32_t)(EDX));
  /* 1042f4d1 call 0x1042f2c0 */
  push32(0x1042f4d6u); f_1042f2c0();
  /* 1042f4d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f4d9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f4dc jne 0x1042f4e5 */
  if (!C.zf) goto L_1042f4e5;
  /* 1042f4de mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1042f4e5:;
  /* 1042f4e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042f4e8 mov ecx, dword ptr [0x10451908] */
  ECX = (r32((uint32_t)(0x10451908)));
  /* 1042f4ee mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1042f4f1 push edx */
  push32((uint32_t)(EDX));
  /* 1042f4f2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042f4f5 push eax */
  push32((uint32_t)(EAX));
  /* 1042f4f6 call 0x1042e8a0 */
  push32(0x1042f4fbu); f_1042e8a0();
  /* 1042f4fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1042f4fe:;
  /* 1042f4fe jmp 0x1042f407 */
  goto L_1042f407;
L_1042f503:;
  /* 1042f503 push 2 */
  push32((uint32_t)(0x2u));
  /* 1042f505 call 0x10429480 */
  push32(0x1042f50au); f_10429480();
  /* 1042f50a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f50d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f511 jne 0x1042f518 */
  if (!C.zf) goto L_1042f518;
  /* 1042f513 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042f516 jmp 0x1042f51b */
  goto L_1042f51b;
L_1042f518:;
  /* 1042f518 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1042f51b:;
  /* 1042f51b mov esp, ebp */
  ESP = (EBP);
  /* 1042f51d pop ebp */
  EBP = (pop32());
  /* 1042f51e ret  */
  ESPCHK(0x1042f3e0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1042f520 (15 bytes, 7 insns) */
void f_1042f520(void) {
  FTRACE(0x1042f520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042f520 push ebp */
  push32((uint32_t)(EBP));
  /* 1042f521 mov ebp, esp */
  EBP = (ESP);
  /* 1042f523 push 2 */
  push32((uint32_t)(0x2u));
  /* 1042f525 call 0x10424950 */
  push32(0x1042f52au); f_10424950();
  /* 1042f52a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f52d pop ebp */
  EBP = (pop32());
  /* 1042f52e ret  */
  ESPCHK(0x1042f520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f530 @ 0x1042f530 (1007 bytes, 269 insns) */
void f_1042f530(void) {
  FTRACE(0x1042f530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042f530 push ebp */
  push32((uint32_t)(EBP));
  /* 1042f531 mov ebp, esp */
  EBP = (ESP);
  /* 1042f533 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042f539 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f53d jl 0x1042f545 */
  if ((C.sf!=C.of)) goto L_1042f545;
  /* 1042f53f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f543 jle 0x1042f54c */
  if ((C.zf||C.sf!=C.of)) goto L_1042f54c;
L_1042f545:;
  /* 1042f545 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042f547 jmp 0x1042f91b */
  goto L_1042f91b;
L_1042f54c:;
  /* 1042f54c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1042f54e call 0x104293e0 */
  push32(0x1042f553u); f_104293e0();
  /* 1042f553 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f556 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1042f55d mov eax, dword ptr [0x104518f4] */
  EAX = (r32((uint32_t)(0x104518f4)));
  /* 1042f562 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f565 mov dword ptr [0x104518f4], eax */
  w32((uint32_t)(0x104518f4), (EAX));
L_1042f56a:;
  /* 1042f56a cmp dword ptr [0x10451904], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10451904))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f571 je 0x1042f57d */
  if (C.zf) goto L_1042f57d;
  /* 1042f573 push 1 */
  push32((uint32_t)(0x1u));
  /* 1042f575 call dword ptr [0x104542ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542ac))), 0x1042f57bu);
  /* 1042f57b jmp 0x1042f56a */
  goto L_1042f56a;
L_1042f57d:;
  /* 1042f57d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f581 je 0x1042f5c1 */
  if (C.zf) goto L_1042f5c1;
  /* 1042f583 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f587 je 0x1042f5a1 */
  if (C.zf) goto L_1042f5a1;
  /* 1042f589 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042f58c push ecx */
  push32((uint32_t)(ECX));
  /* 1042f58d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042f590 push edx */
  push32((uint32_t)(EDX));
  /* 1042f591 call 0x1042f920 */
  push32(0x1042f596u); f_1042f920();
  /* 1042f596 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f599 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1042f59f jmp 0x1042f5b3 */
  goto L_1042f5b3;
L_1042f5a1:;
  /* 1042f5a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042f5a4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042f5a7 mov ecx, dword ptr [eax + 0x104504dc] */
  ECX = (r32((uint32_t)(EAX + 0x104504dc)));
  /* 1042f5ad mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1042f5b3:;
  /* 1042f5b3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1042f5b9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1042f5bc jmp 0x1042f8fb */
  goto L_1042f8fb;
L_1042f5c1:;
  /* 1042f5c1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1042f5c8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1042f5cf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f5d3 je 0x1042f8f3 */
  if (C.zf) goto L_1042f8f3;
  /* 1042f5d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042f5dc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1042f5df cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f5e2 jne 0x1042f804 */
  if (!C.zf) goto L_1042f804;
  /* 1042f5e8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042f5eb movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1042f5ef cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f5f2 jne 0x1042f804 */
  if (!C.zf) goto L_1042f804;
  /* 1042f5f8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042f5fb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1042f5ff cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f602 jne 0x1042f804 */
  if (!C.zf) goto L_1042f804;
  /* 1042f608 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042f60b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1042f611:;
  /* 1042f611 push 0x1044d1d4 */
  push32((uint32_t)(0x1044d1d4u));
  /* 1042f616 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1042f61c push ecx */
  push32((uint32_t)(ECX));
  /* 1042f61d call 0x10431780 */
  push32(0x1042f622u); f_10431780();
  /* 1042f622 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f625 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1042f62b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f632 je 0x1042f65d */
  if (C.zf) goto L_1042f65d;
  /* 1042f634 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1042f63a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042f640 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1042f646 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f64d je 0x1042f65d */
  if (C.zf) goto L_1042f65d;
  /* 1042f64f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1042f655 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1042f658 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f65b jne 0x1042f683 */
  if (!C.zf) goto L_1042f683;
L_1042f65d:;
  /* 1042f65d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f661 je 0x1042f67c */
  if (C.zf) goto L_1042f67c;
  /* 1042f663 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1042f665 call 0x10429480 */
  push32(0x1042f66au); f_10429480();
  /* 1042f66a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f66d mov edx, dword ptr [0x104518f4] */
  EDX = (r32((uint32_t)(0x104518f4)));
  /* 1042f673 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042f676 mov dword ptr [0x104518f4], edx */
  w32((uint32_t)(0x104518f4), (EDX));
L_1042f67c:;
  /* 1042f67c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042f67e jmp 0x1042f91b */
  goto L_1042f91b;
L_1042f683:;
  /* 1042f683 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1042f68a jmp 0x1042f695 */
  goto L_1042f695;
L_1042f68c:;
  /* 1042f68c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042f68f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f692 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1042f695:;
  /* 1042f695 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f699 jg 0x1042f6e3 */
  if ((!C.zf&&C.sf==C.of)) goto L_1042f6e3;
  /* 1042f69b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1042f6a1 push ecx */
  push32((uint32_t)(ECX));
  /* 1042f6a2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1042f6a8 push edx */
  push32((uint32_t)(EDX));
  /* 1042f6a9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042f6ac imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042f6af mov ecx, dword ptr [eax + 0x104504d8] */
  ECX = (r32((uint32_t)(EAX + 0x104504d8)));
  /* 1042f6b5 push ecx */
  push32((uint32_t)(ECX));
  /* 1042f6b6 call 0x10431740 */
  push32(0x1042f6bbu); f_10431740();
  /* 1042f6bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f6be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042f6c0 jne 0x1042f6e1 */
  if (!C.zf) goto L_1042f6e1;
  /* 1042f6c2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042f6c5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042f6c8 mov eax, dword ptr [edx + 0x104504d8] */
  EAX = (r32((uint32_t)(EDX + 0x104504d8)));
  /* 1042f6ce push eax */
  push32((uint32_t)(EAX));
  /* 1042f6cf call 0x10428810 */
  push32(0x1042f6d4u); f_10428810();
  /* 1042f6d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f6d7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f6dd jne 0x1042f6e1 */
  if (!C.zf) goto L_1042f6e1;
  /* 1042f6df jmp 0x1042f6e3 */
  goto L_1042f6e3;
L_1042f6e1:;
  /* 1042f6e1 jmp 0x1042f68c */
  goto L_1042f68c;
L_1042f6e3:;
  /* 1042f6e3 push 0x1044d1d0 */
  push32((uint32_t)(0x1044d1d0u));
  /* 1042f6e8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1042f6ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f6f1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1042f6f7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1042f6fd push edx */
  push32((uint32_t)(EDX));
  /* 1042f6fe call 0x10431700 */
  push32(0x1042f703u); f_10431700();
  /* 1042f703 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f706 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1042f70c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f713 jne 0x1042f749 */
  if (!C.zf) goto L_1042f749;
  /* 1042f715 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1042f71b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1042f71e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f721 je 0x1042f749 */
  if (C.zf) goto L_1042f749;
  /* 1042f723 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f727 je 0x1042f742 */
  if (C.zf) goto L_1042f742;
  /* 1042f729 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1042f72b call 0x10429480 */
  push32(0x1042f730u); f_10429480();
  /* 1042f730 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f733 mov edx, dword ptr [0x104518f4] */
  EDX = (r32((uint32_t)(0x104518f4)));
  /* 1042f739 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042f73c mov dword ptr [0x104518f4], edx */
  w32((uint32_t)(0x104518f4), (EDX));
L_1042f742:;
  /* 1042f742 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042f744 jmp 0x1042f91b */
  goto L_1042f91b;
L_1042f749:;
  /* 1042f749 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f74d jg 0x1042f79a */
  if ((!C.zf&&C.sf==C.of)) goto L_1042f79a;
  /* 1042f74f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1042f755 push eax */
  push32((uint32_t)(EAX));
  /* 1042f756 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1042f75c push ecx */
  push32((uint32_t)(ECX));
  /* 1042f75d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1042f763 push edx */
  push32((uint32_t)(EDX));
  /* 1042f764 call 0x10429200 */
  push32(0x1042f769u); f_10429200();
  /* 1042f769 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f76c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1042f772 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1042f77a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1042f780 push ecx */
  push32((uint32_t)(ECX));
  /* 1042f781 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042f784 push edx */
  push32((uint32_t)(EDX));
  /* 1042f785 call 0x1042f920 */
  push32(0x1042f78au); f_1042f920();
  /* 1042f78a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f78d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042f78f je 0x1042f79a */
  if (C.zf) goto L_1042f79a;
  /* 1042f791 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042f794 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f797 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1042f79a:;
  /* 1042f79a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1042f7a0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f7a6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1042f7ac mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1042f7b2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1042f7b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042f7b7 je 0x1042f7c8 */
  if (C.zf) goto L_1042f7c8;
  /* 1042f7b9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1042f7bf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f7c2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1042f7c8:;
  /* 1042f7c8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1042f7ce movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1042f7d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042f7d3 jne 0x1042f611 */
  if (!C.zf) goto L_1042f611;
  /* 1042f7d9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f7dd je 0x1042f7ec */
  if (C.zf) goto L_1042f7ec;
  /* 1042f7df call 0x1042fac0 */
  push32(0x1042f7e4u); f_1042fac0();
  /* 1042f7e4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1042f7ea jmp 0x1042f7f6 */
  goto L_1042f7f6;
L_1042f7ec:;
  /* 1042f7ec mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1042f7f6:;
  /* 1042f7f6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1042f7fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1042f7ff jmp 0x1042f8f1 */
  goto L_1042f8f1;
L_1042f804:;
  /* 1042f804 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042f807 push edx */
  push32((uint32_t)(EDX));
  /* 1042f808 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042f80a push 0 */
  push32((uint32_t)(0x0u));
  /* 1042f80c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1042f812 push eax */
  push32((uint32_t)(EAX));
  /* 1042f813 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042f816 push ecx */
  push32((uint32_t)(ECX));
  /* 1042f817 call 0x1042fbc0 */
  push32(0x1042f81cu); f_1042fbc0();
  /* 1042f81c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f81f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1042f822 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f826 je 0x1042f8f1 */
  if (C.zf) goto L_1042f8f1;
  /* 1042f82c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1042f833 jmp 0x1042f83e */
  goto L_1042f83e;
L_1042f835:;
  /* 1042f835 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042f838 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f83b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1042f83e:;
  /* 1042f83e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f842 jg 0x1042f8a0 */
  if ((!C.zf&&C.sf==C.of)) goto L_1042f8a0;
  /* 1042f844 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f848 je 0x1042f89e */
  if (C.zf) goto L_1042f89e;
  /* 1042f84a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042f84d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042f850 mov ecx, dword ptr [eax + 0x104504dc] */
  ECX = (r32((uint32_t)(EAX + 0x104504dc)));
  /* 1042f856 push ecx */
  push32((uint32_t)(ECX));
  /* 1042f857 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1042f85d push edx */
  push32((uint32_t)(EDX));
  /* 1042f85e call 0x10431670 */
  push32(0x1042f863u); f_10431670();
  /* 1042f863 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f866 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042f868 je 0x1042f895 */
  if (C.zf) goto L_1042f895;
  /* 1042f86a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1042f870 push eax */
  push32((uint32_t)(EAX));
  /* 1042f871 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042f874 push ecx */
  push32((uint32_t)(ECX));
  /* 1042f875 call 0x1042f920 */
  push32(0x1042f87au); f_1042f920();
  /* 1042f87a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f87d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042f87f je 0x1042f88c */
  if (C.zf) goto L_1042f88c;
  /* 1042f881 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042f884 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f887 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1042f88a jmp 0x1042f893 */
  goto L_1042f893;
L_1042f88c:;
  /* 1042f88c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1042f893:;
  /* 1042f893 jmp 0x1042f89e */
  goto L_1042f89e;
L_1042f895:;
  /* 1042f895 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042f898 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f89b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1042f89e:;
  /* 1042f89e jmp 0x1042f835 */
  goto L_1042f835;
L_1042f8a0:;
  /* 1042f8a0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f8a4 je 0x1042f8cb */
  if (C.zf) goto L_1042f8cb;
  /* 1042f8a6 call 0x1042fac0 */
  push32(0x1042f8abu); f_1042fac0();
  /* 1042f8ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1042f8ae push 2 */
  push32((uint32_t)(0x2u));
  /* 1042f8b0 mov ecx, dword ptr [0x104504dc] */
  ECX = (r32((uint32_t)(0x104504dc)));
  /* 1042f8b6 push ecx */
  push32((uint32_t)(ECX));
  /* 1042f8b7 call 0x10426470 */
  push32(0x1042f8bcu); f_10426470();
  /* 1042f8bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f8bf mov dword ptr [0x104504dc], 0 */
  w32((uint32_t)(0x104504dc), (0x0u));
  /* 1042f8c9 jmp 0x1042f8f1 */
  goto L_1042f8f1;
L_1042f8cb:;
  /* 1042f8cb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f8cf je 0x1042f8de */
  if (C.zf) goto L_1042f8de;
  /* 1042f8d1 call 0x1042fac0 */
  push32(0x1042f8d6u); f_1042fac0();
  /* 1042f8d6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1042f8dc jmp 0x1042f8e8 */
  goto L_1042f8e8;
L_1042f8de:;
  /* 1042f8de mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_1042f8e8:;
  /* 1042f8e8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1042f8ee mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1042f8f1:;
  /* 1042f8f1 jmp 0x1042f8fb */
  goto L_1042f8fb;
L_1042f8f3:;
  /* 1042f8f3 call 0x1042fac0 */
  push32(0x1042f8f8u); f_1042fac0();
  /* 1042f8f8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1042f8fb:;
  /* 1042f8fb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f8ff je 0x1042f918 */
  if (C.zf) goto L_1042f918;
  /* 1042f901 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1042f903 call 0x10429480 */
  push32(0x1042f908u); f_10429480();
  /* 1042f908 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f90b mov eax, dword ptr [0x104518f4] */
  EAX = (r32((uint32_t)(0x104518f4)));
  /* 1042f910 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042f913 mov dword ptr [0x104518f4], eax */
  w32((uint32_t)(0x104518f4), (EAX));
L_1042f918:;
  /* 1042f918 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1042f91b:;
  /* 1042f91b mov esp, ebp */
  ESP = (EBP);
  /* 1042f91d pop ebp */
  EBP = (pop32());
  /* 1042f91e ret  */
  ESPCHK(0x1042f530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f920 @ 0x1042f920 (403 bytes, 117 insns) */
void f_1042f920(void) {
  FTRACE(0x1042f920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042f920 push ebp */
  push32((uint32_t)(EBP));
  /* 1042f921 mov ebp, esp */
  EBP = (ESP);
  /* 1042f923 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042f929 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042f92c push eax */
  push32((uint32_t)(EAX));
  /* 1042f92d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 1042f933 push ecx */
  push32((uint32_t)(ECX));
  /* 1042f934 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1042f93a push edx */
  push32((uint32_t)(EDX));
  /* 1042f93b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 1042f941 push eax */
  push32((uint32_t)(EAX));
  /* 1042f942 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042f945 push ecx */
  push32((uint32_t)(ECX));
  /* 1042f946 call 0x1042fbc0 */
  push32(0x1042f94bu); f_1042fbc0();
  /* 1042f94b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f94e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042f950 jne 0x1042f959 */
  if (!C.zf) goto L_1042f959;
  /* 1042f952 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042f954 jmp 0x1042faaf */
  goto L_1042faaf;
L_1042f959:;
  /* 1042f959 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1042f95e push 0x1044d1d8 */
  push32((uint32_t)(0x1044d1d8u));
  /* 1042f963 push 2 */
  push32((uint32_t)(0x2u));
  /* 1042f965 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1042f96b push edx */
  push32((uint32_t)(EDX));
  /* 1042f96c call 0x10428810 */
  push32(0x1042f971u); f_10428810();
  /* 1042f971 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f974 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f977 push eax */
  push32((uint32_t)(EAX));
  /* 1042f978 call 0x104259e0 */
  push32(0x1042f97du); f_104259e0();
  /* 1042f97d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f980 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1042f983 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042f987 jne 0x1042f990 */
  if (!C.zf) goto L_1042f990;
  /* 1042f989 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042f98b jmp 0x1042faaf */
  goto L_1042faaf;
L_1042f990:;
  /* 1042f990 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042f993 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042f996 mov ecx, dword ptr [eax + 0x104504dc] */
  ECX = (r32((uint32_t)(EAX + 0x104504dc)));
  /* 1042f99c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1042f99f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042f9a2 mov eax, dword ptr [edx*4 + 0x10451770] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10451770)));
  /* 1042f9a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1042f9ac push 6 */
  push32((uint32_t)(0x6u));
  /* 1042f9ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042f9b1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042f9b4 add ecx, 0x104517c0 */
  { uint32_t _a=(ECX),_b=(0x104517c0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f9ba push ecx */
  push32((uint32_t)(ECX));
  /* 1042f9bb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1042f9be push edx */
  push32((uint32_t)(EDX));
  /* 1042f9bf call 0x1042c2c0 */
  push32(0x1042f9c4u); f_1042c2c0();
  /* 1042f9c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f9c7 mov eax, dword ptr [0x10451788] */
  EAX = (r32((uint32_t)(0x10451788)));
  /* 1042f9cc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1042f9cf lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 1042f9d5 push ecx */
  push32((uint32_t)(ECX));
  /* 1042f9d6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042f9d9 push edx */
  push32((uint32_t)(EDX));
  /* 1042f9da call 0x10428990 */
  push32(0x1042f9dfu); f_10428990();
  /* 1042f9df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042f9e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042f9e5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042f9e8 mov dword ptr [ecx + 0x104504dc], eax */
  w32((uint32_t)(ECX + 0x104504dc), (EAX));
  /* 1042f9ee mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1042f9f4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1042f9fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042f9fd mov dword ptr [eax*4 + 0x10451770], edx */
  w32((uint32_t)(EAX*4 + 0x10451770), (EDX));
  /* 1042fa04 push 6 */
  push32((uint32_t)(0x6u));
  /* 1042fa06 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1042fa0c push ecx */
  push32((uint32_t)(ECX));
  /* 1042fa0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042fa10 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042fa13 add edx, 0x104517c0 */
  { uint32_t _a=(EDX),_b=(0x104517c0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042fa19 push edx */
  push32((uint32_t)(EDX));
  /* 1042fa1a call 0x1042c2c0 */
  push32(0x1042fa1fu); f_1042c2c0();
  /* 1042fa1f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042fa22 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042fa26 jne 0x1042fa33 */
  if (!C.zf) goto L_1042fa33;
  /* 1042fa28 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1042fa2e mov dword ptr [0x10451788], eax */
  w32((uint32_t)(0x10451788), (EAX));
L_1042fa33:;
  /* 1042fa33 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042fa37 jne 0x1042fa45 */
  if (!C.zf) goto L_1042fa45;
  /* 1042fa39 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1042fa3f mov dword ptr [0x1045178c], ecx */
  w32((uint32_t)(0x1045178c), (ECX));
L_1042fa45:;
  /* 1042fa45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042fa48 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042fa4b call dword ptr [edx + 0x104504e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x104504e0))), 0x1042fa51u);
  /* 1042fa51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042fa53 je 0x1042fa8c */
  if (C.zf) goto L_1042fa8c;
  /* 1042fa55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042fa58 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042fa5b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042fa5e mov dword ptr [eax + 0x104504dc], ecx */
  w32((uint32_t)(EAX + 0x104504dc), (ECX));
  /* 1042fa64 push 2 */
  push32((uint32_t)(0x2u));
  /* 1042fa66 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042fa69 push edx */
  push32((uint32_t)(EDX));
  /* 1042fa6a call 0x10426470 */
  push32(0x1042fa6fu); f_10426470();
  /* 1042fa6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042fa72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042fa75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042fa78 mov dword ptr [eax*4 + 0x10451770], ecx */
  w32((uint32_t)(EAX*4 + 0x10451770), (ECX));
  /* 1042fa7f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042fa82 mov dword ptr [0x10451788], edx */
  w32((uint32_t)(0x10451788), (EDX));
  /* 1042fa88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042fa8a jmp 0x1042faaf */
  goto L_1042faaf;
L_1042fa8c:;
  /* 1042fa8c cmp dword ptr [ebp - 0xc], 0x104503c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x104503c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042fa93 je 0x1042faa3 */
  if (C.zf) goto L_1042faa3;
  /* 1042fa95 push 2 */
  push32((uint32_t)(0x2u));
  /* 1042fa97 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042fa9a push eax */
  push32((uint32_t)(EAX));
  /* 1042fa9b call 0x10426470 */
  push32(0x1042faa0u); f_10426470();
  /* 1042faa0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1042faa3:;
  /* 1042faa3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042faa6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042faa9 mov eax, dword ptr [ecx + 0x104504dc] */
  EAX = (r32((uint32_t)(ECX + 0x104504dc)));
L_1042faaf:;
  /* 1042faaf mov esp, ebp */
  ESP = (EBP);
  /* 1042fab1 pop ebp */
  EBP = (pop32());
  /* 1042fab2 ret  */
  ESPCHK(0x1042f920u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fac0 @ 0x1042fac0 (256 bytes, 72 insns) */
void f_1042fac0(void) {
  FTRACE(0x1042fac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042fac0 push ebp */
  push32((uint32_t)(EBP));
  /* 1042fac1 mov ebp, esp */
  EBP = (ESP);
  /* 1042fac3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042fac6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1042facd cmp dword ptr [0x104504dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104504dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042fad4 jne 0x1042faf4 */
  if (!C.zf) goto L_1042faf4;
  /* 1042fad6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1042fadb push 0x1044d1d8 */
  push32((uint32_t)(0x1044d1d8u));
  /* 1042fae0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1042fae2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 1042fae7 call 0x104259e0 */
  push32(0x1042faecu); f_104259e0();
  /* 1042faec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042faef mov dword ptr [0x104504dc], eax */
  w32((uint32_t)(0x104504dc), (EAX));
L_1042faf4:;
  /* 1042faf4 mov eax, dword ptr [0x104504dc] */
  EAX = (r32((uint32_t)(0x104504dc)));
  /* 1042faf9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1042fafc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1042fb03 jmp 0x1042fb0e */
  goto L_1042fb0e;
L_1042fb05:;
  /* 1042fb05 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042fb08 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042fb0b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1042fb0e:;
  /* 1042fb0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042fb11 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042fb14 mov eax, dword ptr [edx + 0x104504dc] */
  EAX = (r32((uint32_t)(EDX + 0x104504dc)));
  /* 1042fb1a push eax */
  push32((uint32_t)(EAX));
  /* 1042fb1b push 0x1044d1e4 */
  push32((uint32_t)(0x1044d1e4u));
  /* 1042fb20 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042fb23 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042fb26 mov edx, dword ptr [ecx + 0x104504d8] */
  EDX = (r32((uint32_t)(ECX + 0x104504d8)));
  /* 1042fb2c push edx */
  push32((uint32_t)(EDX));
  /* 1042fb2d push 3 */
  push32((uint32_t)(0x3u));
  /* 1042fb2f mov eax, dword ptr [0x104504dc] */
  EAX = (r32((uint32_t)(0x104504dc)));
  /* 1042fb34 push eax */
  push32((uint32_t)(EAX));
  /* 1042fb35 call 0x1042fd60 */
  push32(0x1042fb3au); f_1042fd60();
  /* 1042fb3a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042fb3d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042fb41 jge 0x1042fb89 */
  if ((C.sf==C.of)) goto L_1042fb89;
  /* 1042fb43 push 0x1044d1d0 */
  push32((uint32_t)(0x1044d1d0u));
  /* 1042fb48 mov ecx, dword ptr [0x104504dc] */
  ECX = (r32((uint32_t)(0x104504dc)));
  /* 1042fb4e push ecx */
  push32((uint32_t)(ECX));
  /* 1042fb4f call 0x104289a0 */
  push32(0x1042fb54u); f_104289a0();
  /* 1042fb54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042fb57 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042fb5a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042fb5d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042fb60 mov eax, dword ptr [edx + 0x104504dc] */
  EAX = (r32((uint32_t)(EDX + 0x104504dc)));
  /* 1042fb66 push eax */
  push32((uint32_t)(EAX));
  /* 1042fb67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042fb6a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042fb6d mov edx, dword ptr [ecx + 0x104504dc] */
  EDX = (r32((uint32_t)(ECX + 0x104504dc)));
  /* 1042fb73 push edx */
  push32((uint32_t)(EDX));
  /* 1042fb74 call 0x10431670 */
  push32(0x1042fb79u); f_10431670();
  /* 1042fb79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042fb7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042fb7e je 0x1042fb87 */
  if (C.zf) goto L_1042fb87;
  /* 1042fb80 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1042fb87:;
  /* 1042fb87 jmp 0x1042fbb7 */
  goto L_1042fbb7;
L_1042fb89:;
  /* 1042fb89 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042fb8d jne 0x1042fb96 */
  if (!C.zf) goto L_1042fb96;
  /* 1042fb8f mov eax, dword ptr [0x104504dc] */
  EAX = (r32((uint32_t)(0x104504dc)));
  /* 1042fb94 jmp 0x1042fbbc */
  goto L_1042fbbc;
L_1042fb96:;
  /* 1042fb96 push 2 */
  push32((uint32_t)(0x2u));
  /* 1042fb98 mov eax, dword ptr [0x104504dc] */
  EAX = (r32((uint32_t)(0x104504dc)));
  /* 1042fb9d push eax */
  push32((uint32_t)(EAX));
  /* 1042fb9e call 0x10426470 */
  push32(0x1042fba3u); f_10426470();
  /* 1042fba3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042fba6 mov dword ptr [0x104504dc], 0 */
  w32((uint32_t)(0x104504dc), (0x0u));
  /* 1042fbb0 mov eax, dword ptr [0x104504f4] */
  EAX = (r32((uint32_t)(0x104504f4)));
  /* 1042fbb5 jmp 0x1042fbbc */
  goto L_1042fbbc;
L_1042fbb7:;
  /* 1042fbb7 jmp 0x1042fb05 */
  goto L_1042fb05;
L_1042fbbc:;
  /* 1042fbbc mov esp, ebp */
  ESP = (EBP);
  /* 1042fbbe pop ebp */
  EBP = (pop32());
  /* 1042fbbf ret  */
  ESPCHK(0x1042fac0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fbc0 @ 0x1042fbc0 (388 bytes, 115 insns) */
void f_1042fbc0(void) {
  FTRACE(0x1042fbc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042fbc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1042fbc1 mov ebp, esp */
  EBP = (ESP);
  /* 1042fbc3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042fbc9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042fbcd jne 0x1042fbd6 */
  if (!C.zf) goto L_1042fbd6;
  /* 1042fbcf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042fbd1 jmp 0x1042fd40 */
  goto L_1042fd40;
L_1042fbd6:;
  /* 1042fbd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042fbd9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1042fbdc cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042fbdf jne 0x1042fc30 */
  if (!C.zf) goto L_1042fc30;
  /* 1042fbe1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042fbe4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1042fbe8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042fbea jne 0x1042fc30 */
  if (!C.zf) goto L_1042fc30;
  /* 1042fbec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042fbef mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 1042fbf2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042fbf5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 1042fbf9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042fbfd je 0x1042fc19 */
  if (C.zf) goto L_1042fc19;
  /* 1042fbff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1042fc02 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 1042fc07 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1042fc0a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 1042fc10 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1042fc13 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_1042fc19:;
  /* 1042fc19 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042fc1d je 0x1042fc28 */
  if (C.zf) goto L_1042fc28;
  /* 1042fc1f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1042fc22 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1042fc28:;
  /* 1042fc28 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042fc2b jmp 0x1042fd40 */
  goto L_1042fd40;
L_1042fc30:;
  /* 1042fc30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042fc33 push ecx */
  push32((uint32_t)(ECX));
  /* 1042fc34 push 0x10450450 */
  push32((uint32_t)(0x10450450u));
  /* 1042fc39 call 0x10431670 */
  push32(0x1042fc3eu); f_10431670();
  /* 1042fc3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042fc41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042fc43 je 0x1042fcf8 */
  if (C.zf) goto L_1042fcf8;
  /* 1042fc49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042fc4c push edx */
  push32((uint32_t)(EDX));
  /* 1042fc4d push 0x104503cc */
  push32((uint32_t)(0x104503ccu));
  /* 1042fc52 call 0x10431670 */
  push32(0x1042fc57u); f_10431670();
  /* 1042fc57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042fc5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042fc5c je 0x1042fcf8 */
  if (C.zf) goto L_1042fcf8;
  /* 1042fc62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042fc65 push eax */
  push32((uint32_t)(EAX));
  /* 1042fc66 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1042fc6c push ecx */
  push32((uint32_t)(ECX));
  /* 1042fc6d call 0x1042fdb0 */
  push32(0x1042fc72u); f_1042fdb0();
  /* 1042fc72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042fc75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042fc77 je 0x1042fc80 */
  if (C.zf) goto L_1042fc80;
  /* 1042fc79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042fc7b jmp 0x1042fd40 */
  goto L_1042fd40;
L_1042fc80:;
  /* 1042fc80 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1042fc86 push edx */
  push32((uint32_t)(EDX));
  /* 1042fc87 push 0x10451798 */
  push32((uint32_t)(0x10451798u));
  /* 1042fc8c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 1042fc92 push eax */
  push32((uint32_t)(EAX));
  /* 1042fc93 call 0x104317c0 */
  push32(0x1042fc98u); f_104317c0();
  /* 1042fc98 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042fc9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042fc9d jne 0x1042fca6 */
  if (!C.zf) goto L_1042fca6;
  /* 1042fc9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042fca1 jmp 0x1042fd40 */
  goto L_1042fd40;
L_1042fca6:;
  /* 1042fca6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1042fca8 mov cx, word ptr [0x1045179c] */
  CX = (r16((uint32_t)(0x1045179c)));
  /* 1042fcaf mov dword ptr [0x104517a0], ecx */
  w32((uint32_t)(0x104517a0), (ECX));
  /* 1042fcb5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1042fcbb push edx */
  push32((uint32_t)(EDX));
  /* 1042fcbc push 0x10450450 */
  push32((uint32_t)(0x10450450u));
  /* 1042fcc1 call 0x1042ff10 */
  push32(0x1042fcc6u); f_1042ff10();
  /* 1042fcc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042fcc9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042fccc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1042fccf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042fcd1 je 0x1042fce6 */
  if (C.zf) goto L_1042fce6;
  /* 1042fcd3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042fcd6 push edx */
  push32((uint32_t)(EDX));
  /* 1042fcd7 push 0x104503cc */
  push32((uint32_t)(0x104503ccu));
  /* 1042fcdc call 0x10428990 */
  push32(0x1042fce1u); f_10428990();
  /* 1042fce1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042fce4 jmp 0x1042fcf8 */
  goto L_1042fcf8;
L_1042fce6:;
  /* 1042fce6 push 0x10450450 */
  push32((uint32_t)(0x10450450u));
  /* 1042fceb push 0x104503cc */
  push32((uint32_t)(0x104503ccu));
  /* 1042fcf0 call 0x10428990 */
  push32(0x1042fcf5u); f_10428990();
  /* 1042fcf5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1042fcf8:;
  /* 1042fcf8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042fcfc je 0x1042fd11 */
  if (C.zf) goto L_1042fd11;
  /* 1042fcfe push 6 */
  push32((uint32_t)(0x6u));
  /* 1042fd00 push 0x10451798 */
  push32((uint32_t)(0x10451798u));
  /* 1042fd05 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1042fd08 push eax */
  push32((uint32_t)(EAX));
  /* 1042fd09 call 0x1042c2c0 */
  push32(0x1042fd0eu); f_1042c2c0();
  /* 1042fd0e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1042fd11:;
  /* 1042fd11 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042fd15 je 0x1042fd2a */
  if (C.zf) goto L_1042fd2a;
  /* 1042fd17 push 4 */
  push32((uint32_t)(0x4u));
  /* 1042fd19 push 0x104517a0 */
  push32((uint32_t)(0x104517a0u));
  /* 1042fd1e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1042fd21 push ecx */
  push32((uint32_t)(ECX));
  /* 1042fd22 call 0x1042c2c0 */
  push32(0x1042fd27u); f_1042c2c0();
  /* 1042fd27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1042fd2a:;
  /* 1042fd2a push 0x10450450 */
  push32((uint32_t)(0x10450450u));
  /* 1042fd2f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042fd32 push edx */
  push32((uint32_t)(EDX));
  /* 1042fd33 call 0x10428990 */
  push32(0x1042fd38u); f_10428990();
  /* 1042fd38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042fd3b mov eax, 0x10450450 */
  EAX = (0x10450450u);
L_1042fd40:;
  /* 1042fd40 mov esp, ebp */
  ESP = (EBP);
  /* 1042fd42 pop ebp */
  EBP = (pop32());
  /* 1042fd43 ret  */
  ESPCHK(0x1042fbc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd50 @ 0x1042fd50 (7 bytes, 5 insns) */
void f_1042fd50(void) {
  FTRACE(0x1042fd50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042fd50 push ebp */
  push32((uint32_t)(EBP));
  /* 1042fd51 mov ebp, esp */
  EBP = (ESP);
  /* 1042fd53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042fd55 pop ebp */
  EBP = (pop32());
  /* 1042fd56 ret  */
  ESPCHK(0x1042fd50u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x1042fd60 (79 bytes, 28 insns) */
void f_1042fd60(void) {
  FTRACE(0x1042fd60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042fd60 push ebp */
  push32((uint32_t)(EBP));
  /* 1042fd61 mov ebp, esp */
  EBP = (ESP);
  /* 1042fd63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042fd66 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1042fd69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1042fd6c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1042fd73 jmp 0x1042fd7e */
  goto L_1042fd7e;
L_1042fd75:;
  /* 1042fd75 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042fd78 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042fd7b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1042fd7e:;
  /* 1042fd7e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042fd81 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042fd84 jge 0x1042fda4 */
  if ((C.sf==C.of)) goto L_1042fda4;
  /* 1042fd86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042fd89 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042fd8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1042fd8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042fd92 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1042fd95 push edx */
  push32((uint32_t)(EDX));
  /* 1042fd96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042fd99 push eax */
  push32((uint32_t)(EAX));
  /* 1042fd9a call 0x104289a0 */
  push32(0x1042fd9fu); f_104289a0();
  /* 1042fd9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042fda2 jmp 0x1042fd75 */
  goto L_1042fd75;
L_1042fda4:;
  /* 1042fda4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1042fdab mov esp, ebp */
  ESP = (EBP);
  /* 1042fdad pop ebp */
  EBP = (pop32());
  /* 1042fdae ret  */
  ESPCHK(0x1042fd60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fdb0 @ 0x1042fdb0 (349 bytes, 122 insns) */
void f_1042fdb0(void) {
  FTRACE(0x1042fdb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042fdb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1042fdb1 mov ebp, esp */
  EBP = (ESP);
  /* 1042fdb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042fdb6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1042fdbb push 0 */
  push32((uint32_t)(0x0u));
  /* 1042fdbd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042fdc0 push eax */
  push32((uint32_t)(EAX));
  /* 1042fdc1 call 0x10429750 */
  push32(0x1042fdc6u); f_10429750();
  /* 1042fdc6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042fdc9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042fdcc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1042fdcf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042fdd1 jne 0x1042fdda */
  if (!C.zf) goto L_1042fdda;
  /* 1042fdd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042fdd5 jmp 0x1042ff09 */
  goto L_1042ff09;
L_1042fdda:;
  /* 1042fdda mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042fddd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1042fde0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042fde3 jne 0x1042fe10 */
  if (!C.zf) goto L_1042fe10;
  /* 1042fde5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042fde8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1042fdec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042fdee je 0x1042fe10 */
  if (C.zf) goto L_1042fe10;
  /* 1042fdf0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042fdf3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042fdf6 push ecx */
  push32((uint32_t)(ECX));
  /* 1042fdf7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042fdfa add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042fe00 push edx */
  push32((uint32_t)(EDX));
  /* 1042fe01 call 0x10428990 */
  push32(0x1042fe06u); f_10428990();
  /* 1042fe06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042fe09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042fe0b jmp 0x1042ff09 */
  goto L_1042ff09;
L_1042fe10:;
  /* 1042fe10 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1042fe17 jmp 0x1042fe22 */
  goto L_1042fe22;
L_1042fe19:;
  /* 1042fe19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042fe1c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042fe1f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1042fe22:;
  /* 1042fe22 push 0x1044d1e8 */
  push32((uint32_t)(0x1044d1e8u));
  /* 1042fe27 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042fe2a push ecx */
  push32((uint32_t)(ECX));
  /* 1042fe2b call 0x10431700 */
  push32(0x1042fe30u); f_10431700();
  /* 1042fe30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042fe33 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1042fe36 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042fe3a jne 0x1042fe44 */
  if (!C.zf) goto L_1042fe44;
  /* 1042fe3c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042fe3f jmp 0x1042ff09 */
  goto L_1042ff09;
L_1042fe44:;
  /* 1042fe44 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042fe47 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042fe4a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1042fe4c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1042fe4f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042fe53 jne 0x1042fe7a */
  if (!C.zf) goto L_1042fe7a;
  /* 1042fe55 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042fe59 jge 0x1042fe7a */
  if ((C.sf==C.of)) goto L_1042fe7a;
  /* 1042fe5b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1042fe5f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042fe62 je 0x1042fe7a */
  if (C.zf) goto L_1042fe7a;
  /* 1042fe64 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042fe67 push edx */
  push32((uint32_t)(EDX));
  /* 1042fe68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042fe6b push eax */
  push32((uint32_t)(EAX));
  /* 1042fe6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042fe6f push ecx */
  push32((uint32_t)(ECX));
  /* 1042fe70 call 0x10429200 */
  push32(0x1042fe75u); f_10429200();
  /* 1042fe75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042fe78 jmp 0x1042fee0 */
  goto L_1042fee0;
L_1042fe7a:;
  /* 1042fe7a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042fe7e jne 0x1042fea8 */
  if (!C.zf) goto L_1042fea8;
  /* 1042fe80 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042fe84 jge 0x1042fea8 */
  if ((C.sf==C.of)) goto L_1042fea8;
  /* 1042fe86 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1042fe8a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042fe8d je 0x1042fea8 */
  if (C.zf) goto L_1042fea8;
  /* 1042fe8f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042fe92 push eax */
  push32((uint32_t)(EAX));
  /* 1042fe93 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042fe96 push ecx */
  push32((uint32_t)(ECX));
  /* 1042fe97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042fe9a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042fe9d push edx */
  push32((uint32_t)(EDX));
  /* 1042fe9e call 0x10429200 */
  push32(0x1042fea3u); f_10429200();
  /* 1042fea3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042fea6 jmp 0x1042fee0 */
  goto L_1042fee0;
L_1042fea8:;
  /* 1042fea8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042feac jne 0x1042fedb */
  if (!C.zf) goto L_1042fedb;
  /* 1042feae movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1042feb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042feb4 je 0x1042febf */
  if (C.zf) goto L_1042febf;
  /* 1042feb6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1042feba cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042febd jne 0x1042fedb */
  if (!C.zf) goto L_1042fedb;
L_1042febf:;
  /* 1042febf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042fec2 push edx */
  push32((uint32_t)(EDX));
  /* 1042fec3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042fec6 push eax */
  push32((uint32_t)(EAX));
  /* 1042fec7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042feca add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042fed0 push ecx */
  push32((uint32_t)(ECX));
  /* 1042fed1 call 0x10429200 */
  push32(0x1042fed6u); f_10429200();
  /* 1042fed6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042fed9 jmp 0x1042fee0 */
  goto L_1042fee0;
L_1042fedb:;
  /* 1042fedb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042fede jmp 0x1042ff09 */
  goto L_1042ff09;
L_1042fee0:;
  /* 1042fee0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1042fee4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042fee7 jne 0x1042feeb */
  if (!C.zf) goto L_1042feeb;
  /* 1042fee9 jmp 0x1042ff07 */
  goto L_1042ff07;
L_1042feeb:;
  /* 1042feeb movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1042feef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042fef1 jne 0x1042fef5 */
  if (!C.zf) goto L_1042fef5;
  /* 1042fef3 jmp 0x1042ff07 */
  goto L_1042ff07;
L_1042fef5:;
  /* 1042fef5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042fef8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042fefb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1042feff mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1042ff02 jmp 0x1042fe19 */
  goto L_1042fe19;
L_1042ff07:;
  /* 1042ff07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1042ff09:;
  /* 1042ff09 mov esp, ebp */
  ESP = (EBP);
  /* 1042ff0b pop ebp */
  EBP = (pop32());
  /* 1042ff0c ret  */
  ESPCHK(0x1042fdb0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x1042ff10 (101 bytes, 36 insns) */
void f_1042ff10(void) {
  FTRACE(0x1042ff10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042ff10 push ebp */
  push32((uint32_t)(EBP));
  /* 1042ff11 mov ebp, esp */
  EBP = (ESP);
  /* 1042ff13 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042ff16 push eax */
  push32((uint32_t)(EAX));
  /* 1042ff17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042ff1a push ecx */
  push32((uint32_t)(ECX));
  /* 1042ff1b call 0x10428990 */
  push32(0x1042ff20u); f_10428990();
  /* 1042ff20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ff23 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042ff26 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1042ff2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042ff2c je 0x1042ff48 */
  if (C.zf) goto L_1042ff48;
  /* 1042ff2e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042ff31 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ff34 push ecx */
  push32((uint32_t)(ECX));
  /* 1042ff35 push 0x1044d1f0 */
  push32((uint32_t)(0x1044d1f0u));
  /* 1042ff3a push 2 */
  push32((uint32_t)(0x2u));
  /* 1042ff3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042ff3f push edx */
  push32((uint32_t)(EDX));
  /* 1042ff40 call 0x1042fd60 */
  push32(0x1042ff45u); f_1042fd60();
  /* 1042ff45 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1042ff48:;
  /* 1042ff48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042ff4b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 1042ff52 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042ff54 je 0x1042ff73 */
  if (C.zf) goto L_1042ff73;
  /* 1042ff56 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042ff59 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ff5f push edx */
  push32((uint32_t)(EDX));
  /* 1042ff60 push 0x1044d1ec */
  push32((uint32_t)(0x1044d1ecu));
  /* 1042ff65 push 2 */
  push32((uint32_t)(0x2u));
  /* 1042ff67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042ff6a push eax */
  push32((uint32_t)(EAX));
  /* 1042ff6b call 0x1042fd60 */
  push32(0x1042ff70u); f_1042fd60();
  /* 1042ff70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1042ff73:;
  /* 1042ff73 pop ebp */
  EBP = (pop32());
  /* 1042ff74 ret  */
  ESPCHK(0x1042ff10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff80 @ 0x1042ff80 (130 bytes, 50 insns) */
void f_1042ff80(void) {
  FTRACE(0x1042ff80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042ff80 push ebp */
  push32((uint32_t)(EBP));
  /* 1042ff81 mov ebp, esp */
  EBP = (ESP);
  /* 1042ff83 push ecx */
  push32((uint32_t)(ECX));
  /* 1042ff84 push ebx */
  push32((uint32_t)(EBX));
  /* 1042ff85 push esi */
  push32((uint32_t)(ESI));
  /* 1042ff86 push edi */
  push32((uint32_t)(EDI));
  /* 1042ff87 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1042ff8e:;
  /* 1042ff8e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042ff92 jne 0x1042ffb2 */
  if (!C.zf) goto L_1042ffb2;
  /* 1042ff94 push 0x1044d200 */
  push32((uint32_t)(0x1044d200u));
  /* 1042ff99 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042ff9b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1042ff9d push 0x1044d1f4 */
  push32((uint32_t)(0x1044d1f4u));
  /* 1042ffa2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1042ffa4 call 0x10424aa0 */
  push32(0x1042ffa9u); f_10424aa0();
  /* 1042ffa9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ffac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042ffaf jne 0x1042ffb2 */
  if (!C.zf) goto L_1042ffb2;
  /* 1042ffb1 int3  */
  x86_unimpl("int3 @ 0x1042ffb1");
L_1042ffb2:;
  /* 1042ffb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042ffb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042ffb6 jne 0x1042ff8e */
  if (!C.zf) goto L_1042ff8e;
  /* 1042ffb8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042ffbb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1042ffbe and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1042ffc1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042ffc3 je 0x1042ffd1 */
  if (C.zf) goto L_1042ffd1;
  /* 1042ffc5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042ffc8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1042ffcf jmp 0x1042fff8 */
  goto L_1042fff8;
L_1042ffd1:;
  /* 1042ffd1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042ffd4 push ecx */
  push32((uint32_t)(ECX));
  /* 1042ffd5 call 0x1042e7f0 */
  push32(0x1042ffdau); f_1042e7f0();
  /* 1042ffda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ffdd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042ffe0 push edx */
  push32((uint32_t)(EDX));
  /* 1042ffe1 call 0x10430010 */
  push32(0x1042ffe6u); f_10430010();
  /* 1042ffe6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042ffe9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1042ffec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042ffef push eax */
  push32((uint32_t)(EAX));
  /* 1042fff0 call 0x1042e860 */
  push32(0x1042fff5u); f_1042e860();
  /* 1042fff5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1042fff8:;
  /* 1042fff8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042fffb pop edi */
  EDI = (pop32());
  /* 1042fffc pop esi */
  ESI = (pop32());
  /* 1042fffd pop ebx */
  EBX = (pop32());
  /* 1042fffe mov esp, ebp */
  ESP = (EBP);
  /* 10430000 pop ebp */
  EBP = (pop32());
  /* 10430001 ret  */
  ESPCHK(0x1042ff80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010010 @ 0x10430010 (190 bytes, 67 insns) */
void f_10430010(void) {
  FTRACE(0x10430010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10430010 push ebp */
  push32((uint32_t)(EBP));
  /* 10430011 mov ebp, esp */
  EBP = (ESP);
  /* 10430013 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10430016 push ebx */
  push32((uint32_t)(EBX));
  /* 10430017 push esi */
  push32((uint32_t)(ESI));
  /* 10430018 push edi */
  push32((uint32_t)(EDI));
  /* 10430019 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10430020 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430023 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10430026:;
  /* 10430026 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043002a jne 0x1043004a */
  if (!C.zf) goto L_1043004a;
  /* 1043002c push 0x1044d0a4 */
  push32((uint32_t)(0x1044d0a4u));
  /* 10430031 push 0 */
  push32((uint32_t)(0x0u));
  /* 10430033 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 10430035 push 0x1044d1f4 */
  push32((uint32_t)(0x1044d1f4u));
  /* 1043003a push 2 */
  push32((uint32_t)(0x2u));
  /* 1043003c call 0x10424aa0 */
  push32(0x10430041u); f_10424aa0();
  /* 10430041 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430044 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10430047 jne 0x1043004a */
  if (!C.zf) goto L_1043004a;
  /* 10430049 int3  */
  x86_unimpl("int3 @ 0x10430049");
L_1043004a:;
  /* 1043004a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1043004c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1043004e jne 0x10430026 */
  if (!C.zf) goto L_10430026;
  /* 10430050 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10430053 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10430056 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1043005b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1043005d je 0x104300ba */
  if (C.zf) goto L_104300ba;
  /* 1043005f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10430062 push ecx */
  push32((uint32_t)(ECX));
  /* 10430063 call 0x1042f310 */
  push32(0x10430068u); f_1042f310();
  /* 10430068 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043006b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1043006e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10430071 push edx */
  push32((uint32_t)(EDX));
  /* 10430072 call 0x10432690 */
  push32(0x10430077u); f_10432690();
  /* 10430077 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043007a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1043007d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10430080 push ecx */
  push32((uint32_t)(ECX));
  /* 10430081 call 0x10432560 */
  push32(0x10430086u); f_10432560();
  /* 10430086 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430089 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1043008b jge 0x10430096 */
  if ((C.sf==C.of)) goto L_10430096;
  /* 1043008d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10430094 jmp 0x104300ba */
  goto L_104300ba;
L_10430096:;
  /* 10430096 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10430099 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043009d je 0x104300ba */
  if (C.zf) goto L_104300ba;
  /* 1043009f push 2 */
  push32((uint32_t)(0x2u));
  /* 104300a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104300a4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 104300a7 push ecx */
  push32((uint32_t)(ECX));
  /* 104300a8 call 0x10426470 */
  push32(0x104300adu); f_10426470();
  /* 104300ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104300b0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104300b3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_104300ba:;
  /* 104300ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104300bd mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 104300c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104300c7 pop edi */
  EDI = (pop32());
  /* 104300c8 pop esi */
  ESI = (pop32());
  /* 104300c9 pop ebx */
  EBX = (pop32());
  /* 104300ca mov esp, ebp */
  ESP = (EBP);
  /* 104300cc pop ebp */
  EBP = (pop32());
  /* 104300cd ret  */
  ESPCHK(0x10430010u, _esp0);
  ESP += 4; return;
}

/* FUN_100100d0 @ 0x104300d0 (210 bytes, 63 insns) */
void f_104300d0(void) {
  FTRACE(0x104300d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104300d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104300d1 mov ebp, esp */
  EBP = (ESP);
  /* 104300d3 push ecx */
  push32((uint32_t)(ECX));
  /* 104300d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104300d7 cmp eax, dword ptr [0x1045309c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1045309c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104300dd jae 0x10430101 */
  if (!C.cf) goto L_10430101;
  /* 104300df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104300e2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 104300e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104300e8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 104300eb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104300ee mov eax, dword ptr [ecx*4 + 0x10452f60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10452f60)));
  /* 104300f5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 104300fa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 104300fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104300ff jne 0x10430114 */
  if (!C.zf) goto L_10430114;
L_10430101:;
  /* 10430101 call 0x1042d8b0 */
  push32(0x10430106u); f_1042d8b0();
  /* 10430106 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1043010c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1043010f jmp 0x1043019e */
  goto L_1043019e;
L_10430114:;
  /* 10430114 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430117 push edx */
  push32((uint32_t)(EDX));
  /* 10430118 call 0x1042f0d0 */
  push32(0x1043011du); f_1042f0d0();
  /* 1043011d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430120 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430123 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10430126 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430129 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1043012c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1043012f mov edx, dword ptr [eax*4 + 0x10452f60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10452f60)));
  /* 10430136 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1043013b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1043013e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10430140 je 0x1043017d */
  if (C.zf) goto L_1043017d;
  /* 10430142 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430145 push ecx */
  push32((uint32_t)(ECX));
  /* 10430146 call 0x1042ef50 */
  push32(0x1043014bu); f_1042ef50();
  /* 1043014b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043014e push eax */
  push32((uint32_t)(EAX));
  /* 1043014f call dword ptr [0x104542a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542a8))), 0x10430155u);
  /* 10430155 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10430157 jne 0x10430164 */
  if (!C.zf) goto L_10430164;
  /* 10430159 call dword ptr [0x10454338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454338))), 0x1043015fu);
  /* 1043015f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10430162 jmp 0x1043016b */
  goto L_1043016b;
L_10430164:;
  /* 10430164 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1043016b:;
  /* 1043016b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043016f jne 0x10430173 */
  if (!C.zf) goto L_10430173;
  /* 10430171 jmp 0x1043018f */
  goto L_1043018f;
L_10430173:;
  /* 10430173 call 0x1042d8c0 */
  push32(0x10430178u); f_1042d8c0();
  /* 10430178 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1043017b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1043017d:;
  /* 1043017d call 0x1042d8b0 */
  push32(0x10430182u); f_1042d8b0();
  /* 10430182 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10430188 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1043018f:;
  /* 1043018f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430192 push eax */
  push32((uint32_t)(EAX));
  /* 10430193 call 0x1042f160 */
  push32(0x10430198u); f_1042f160();
  /* 10430198 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043019b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1043019e:;
  /* 1043019e mov esp, ebp */
  ESP = (EBP);
  /* 104301a0 pop ebp */
  EBP = (pop32());
  /* 104301a1 ret  */
  ESPCHK(0x104300d0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x104301b0 (219 bytes, 64 insns) */
void f_104301b0(void) {
  FTRACE(0x104301b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104301b0 push ebp */
  push32((uint32_t)(EBP));
  /* 104301b1 mov ebp, esp */
  EBP = (ESP);
  /* 104301b3 push ecx */
  push32((uint32_t)(ECX));
  /* 104301b4 cmp dword ptr [0x10451784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10451784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104301bb je 0x10430251 */
  if (C.zf) goto L_10430251;
  /* 104301c1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 104301c3 push 0x1044d210 */
  push32((uint32_t)(0x1044d210u));
  /* 104301c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 104301ca push 0xac */
  push32((uint32_t)(0xacu));
  /* 104301cf push 1 */
  push32((uint32_t)(0x1u));
  /* 104301d1 call 0x10425df0 */
  push32(0x104301d6u); f_10425df0();
  /* 104301d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104301d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104301dc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104301e0 jne 0x104301ec */
  if (!C.zf) goto L_104301ec;
  /* 104301e2 mov eax, 1 */
  EAX = (0x1u);
  /* 104301e7 jmp 0x10430287 */
  goto L_10430287;
L_104301ec:;
  /* 104301ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104301ef push eax */
  push32((uint32_t)(EAX));
  /* 104301f0 call 0x10430290 */
  push32(0x104301f5u); f_10430290();
  /* 104301f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104301f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104301fa je 0x1043021d */
  if (C.zf) goto L_1043021d;
  /* 104301fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104301ff push ecx */
  push32((uint32_t)(ECX));
  /* 10430200 call 0x10430820 */
  push32(0x10430205u); f_10430820();
  /* 10430205 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430208 push 2 */
  push32((uint32_t)(0x2u));
  /* 1043020a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1043020d push edx */
  push32((uint32_t)(EDX));
  /* 1043020e call 0x10426470 */
  push32(0x10430213u); f_10426470();
  /* 10430213 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430216 mov eax, 1 */
  EAX = (0x1u);
  /* 1043021b jmp 0x10430287 */
  goto L_10430287;
L_1043021d:;
  /* 1043021d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10430220 mov dword ptr [0x10450c98], eax */
  w32((uint32_t)(0x10450c98), (EAX));
  /* 10430225 mov ecx, dword ptr [0x104517a4] */
  ECX = (r32((uint32_t)(0x104517a4)));
  /* 1043022b push ecx */
  push32((uint32_t)(ECX));
  /* 1043022c call 0x10430820 */
  push32(0x10430231u); f_10430820();
  /* 10430231 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430234 push 2 */
  push32((uint32_t)(0x2u));
  /* 10430236 mov edx, dword ptr [0x104517a4] */
  EDX = (r32((uint32_t)(0x104517a4)));
  /* 1043023c push edx */
  push32((uint32_t)(EDX));
  /* 1043023d call 0x10426470 */
  push32(0x10430242u); f_10426470();
  /* 10430242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430245 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10430248 mov dword ptr [0x104517a4], eax */
  w32((uint32_t)(0x104517a4), (EAX));
  /* 1043024d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1043024f jmp 0x10430287 */
  goto L_10430287;
L_10430251:;
  /* 10430251 mov dword ptr [0x10450c98], 0x10450ca0 */
  w32((uint32_t)(0x10450c98), (0x10450ca0u));
  /* 1043025b mov ecx, dword ptr [0x104517a4] */
  ECX = (r32((uint32_t)(0x104517a4)));
  /* 10430261 push ecx */
  push32((uint32_t)(ECX));
  /* 10430262 call 0x10430820 */
  push32(0x10430267u); f_10430820();
  /* 10430267 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043026a push 2 */
  push32((uint32_t)(0x2u));
  /* 1043026c mov edx, dword ptr [0x104517a4] */
  EDX = (r32((uint32_t)(0x104517a4)));
  /* 10430272 push edx */
  push32((uint32_t)(EDX));
  /* 10430273 call 0x10426470 */
  push32(0x10430278u); f_10426470();
  /* 10430278 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043027b mov dword ptr [0x104517a4], 0 */
  w32((uint32_t)(0x104517a4), (0x0u));
  /* 10430285 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10430287:;
  /* 10430287 mov esp, ebp */
  ESP = (EBP);
  /* 10430289 pop ebp */
  EBP = (pop32());
  /* 1043028a ret  */
  ESPCHK(0x104301b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010290 @ 0x10430290 (1423 bytes, 533 insns) */
void f_10430290(void) {
  FTRACE(0x10430290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10430290 push ebp */
  push32((uint32_t)(EBP));
  /* 10430291 mov ebp, esp */
  EBP = (ESP);
  /* 10430293 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10430296 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1043029d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1043029f mov ax, word ptr [0x104517de] */
  AX = (r16((uint32_t)(0x104517de)));
  /* 104302a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104302a8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104302aa mov cx, word ptr [0x104517e0] */
  CX = (r16((uint32_t)(0x104517e0)));
  /* 104302b1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104302b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104302b8 jne 0x104302c2 */
  if (!C.zf) goto L_104302c2;
  /* 104302ba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104302bd jmp 0x1043081b */
  goto L_1043081b;
L_104302c2:;
  /* 104302c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104302c5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104302c8 push edx */
  push32((uint32_t)(EDX));
  /* 104302c9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 104302cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104302ce push eax */
  push32((uint32_t)(EAX));
  /* 104302cf push 1 */
  push32((uint32_t)(0x1u));
  /* 104302d1 call 0x10433ba0 */
  push32(0x104302d6u); f_10433ba0();
  /* 104302d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104302d9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104302dc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104302de mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104302e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104302e4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104302e7 push edx */
  push32((uint32_t)(EDX));
  /* 104302e8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 104302ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104302ed push eax */
  push32((uint32_t)(EAX));
  /* 104302ee push 1 */
  push32((uint32_t)(0x1u));
  /* 104302f0 call 0x10433ba0 */
  push32(0x104302f5u); f_10433ba0();
  /* 104302f5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104302f8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104302fb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104302fd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10430300 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430303 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10430306 push edx */
  push32((uint32_t)(EDX));
  /* 10430307 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10430309 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1043030c push eax */
  push32((uint32_t)(EAX));
  /* 1043030d push 1 */
  push32((uint32_t)(0x1u));
  /* 1043030f call 0x10433ba0 */
  push32(0x10430314u); f_10433ba0();
  /* 10430314 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430317 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1043031a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1043031c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1043031f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430322 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10430325 push edx */
  push32((uint32_t)(EDX));
  /* 10430326 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10430328 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1043032b push eax */
  push32((uint32_t)(EAX));
  /* 1043032c push 1 */
  push32((uint32_t)(0x1u));
  /* 1043032e call 0x10433ba0 */
  push32(0x10430333u); f_10433ba0();
  /* 10430333 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430336 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10430339 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1043033b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1043033e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430341 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10430344 push edx */
  push32((uint32_t)(EDX));
  /* 10430345 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10430347 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1043034a push eax */
  push32((uint32_t)(EAX));
  /* 1043034b push 1 */
  push32((uint32_t)(0x1u));
  /* 1043034d call 0x10433ba0 */
  push32(0x10430352u); f_10433ba0();
  /* 10430352 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430355 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10430358 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1043035a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1043035d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430360 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10430363 push edx */
  push32((uint32_t)(EDX));
  /* 10430364 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10430366 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10430369 push eax */
  push32((uint32_t)(EAX));
  /* 1043036a push 1 */
  push32((uint32_t)(0x1u));
  /* 1043036c call 0x10433ba0 */
  push32(0x10430371u); f_10433ba0();
  /* 10430371 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430374 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10430377 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10430379 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1043037c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043037f push edx */
  push32((uint32_t)(EDX));
  /* 10430380 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 10430382 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10430385 push eax */
  push32((uint32_t)(EAX));
  /* 10430386 push 1 */
  push32((uint32_t)(0x1u));
  /* 10430388 call 0x10433ba0 */
  push32(0x1043038du); f_10433ba0();
  /* 1043038d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430390 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10430393 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10430395 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10430398 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043039b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1043039e push edx */
  push32((uint32_t)(EDX));
  /* 1043039f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 104303a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104303a4 push eax */
  push32((uint32_t)(EAX));
  /* 104303a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 104303a7 call 0x10433ba0 */
  push32(0x104303acu); f_10433ba0();
  /* 104303ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104303af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104303b2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104303b4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104303b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104303ba add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104303bd push edx */
  push32((uint32_t)(EDX));
  /* 104303be push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 104303c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104303c3 push eax */
  push32((uint32_t)(EAX));
  /* 104303c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 104303c6 call 0x10433ba0 */
  push32(0x104303cbu); f_10433ba0();
  /* 104303cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104303ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104303d1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104303d3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104303d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104303d9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104303dc push edx */
  push32((uint32_t)(EDX));
  /* 104303dd push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 104303df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104303e2 push eax */
  push32((uint32_t)(EAX));
  /* 104303e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 104303e5 call 0x10433ba0 */
  push32(0x104303eau); f_10433ba0();
  /* 104303ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104303ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104303f0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104303f2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104303f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104303f8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104303fb push edx */
  push32((uint32_t)(EDX));
  /* 104303fc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 104303fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10430401 push eax */
  push32((uint32_t)(EAX));
  /* 10430402 push 1 */
  push32((uint32_t)(0x1u));
  /* 10430404 call 0x10433ba0 */
  push32(0x10430409u); f_10433ba0();
  /* 10430409 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043040c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1043040f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10430411 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10430414 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430417 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1043041a push edx */
  push32((uint32_t)(EDX));
  /* 1043041b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1043041d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10430420 push eax */
  push32((uint32_t)(EAX));
  /* 10430421 push 1 */
  push32((uint32_t)(0x1u));
  /* 10430423 call 0x10433ba0 */
  push32(0x10430428u); f_10433ba0();
  /* 10430428 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043042b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1043042e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10430430 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10430433 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430436 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10430439 push edx */
  push32((uint32_t)(EDX));
  /* 1043043a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1043043c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1043043f push eax */
  push32((uint32_t)(EAX));
  /* 10430440 push 1 */
  push32((uint32_t)(0x1u));
  /* 10430442 call 0x10433ba0 */
  push32(0x10430447u); f_10433ba0();
  /* 10430447 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043044a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1043044d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1043044f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10430452 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430455 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10430458 push edx */
  push32((uint32_t)(EDX));
  /* 10430459 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1043045b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1043045e push eax */
  push32((uint32_t)(EAX));
  /* 1043045f push 1 */
  push32((uint32_t)(0x1u));
  /* 10430461 call 0x10433ba0 */
  push32(0x10430466u); f_10433ba0();
  /* 10430466 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430469 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1043046c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1043046e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10430471 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430474 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10430477 push edx */
  push32((uint32_t)(EDX));
  /* 10430478 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1043047a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1043047d push eax */
  push32((uint32_t)(EAX));
  /* 1043047e push 1 */
  push32((uint32_t)(0x1u));
  /* 10430480 call 0x10433ba0 */
  push32(0x10430485u); f_10433ba0();
  /* 10430485 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430488 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1043048b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1043048d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10430490 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430493 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10430496 push edx */
  push32((uint32_t)(EDX));
  /* 10430497 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10430499 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1043049c push eax */
  push32((uint32_t)(EAX));
  /* 1043049d push 1 */
  push32((uint32_t)(0x1u));
  /* 1043049f call 0x10433ba0 */
  push32(0x104304a4u); f_10433ba0();
  /* 104304a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104304a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104304aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104304ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104304af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104304b2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104304b5 push edx */
  push32((uint32_t)(EDX));
  /* 104304b6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 104304b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104304bb push eax */
  push32((uint32_t)(EAX));
  /* 104304bc push 1 */
  push32((uint32_t)(0x1u));
  /* 104304be call 0x10433ba0 */
  push32(0x104304c3u); f_10433ba0();
  /* 104304c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104304c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104304c9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104304cb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104304ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104304d1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104304d4 push edx */
  push32((uint32_t)(EDX));
  /* 104304d5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 104304d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104304da push eax */
  push32((uint32_t)(EAX));
  /* 104304db push 1 */
  push32((uint32_t)(0x1u));
  /* 104304dd call 0x10433ba0 */
  push32(0x104304e2u); f_10433ba0();
  /* 104304e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104304e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104304e8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104304ea mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104304ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104304f0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104304f3 push edx */
  push32((uint32_t)(EDX));
  /* 104304f4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 104304f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104304f9 push eax */
  push32((uint32_t)(EAX));
  /* 104304fa push 1 */
  push32((uint32_t)(0x1u));
  /* 104304fc call 0x10433ba0 */
  push32(0x10430501u); f_10433ba0();
  /* 10430501 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430504 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10430507 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10430509 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1043050c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043050f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10430512 push edx */
  push32((uint32_t)(EDX));
  /* 10430513 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 10430515 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10430518 push eax */
  push32((uint32_t)(EAX));
  /* 10430519 push 1 */
  push32((uint32_t)(0x1u));
  /* 1043051b call 0x10433ba0 */
  push32(0x10430520u); f_10433ba0();
  /* 10430520 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430523 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10430526 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10430528 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1043052b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043052e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10430531 push edx */
  push32((uint32_t)(EDX));
  /* 10430532 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10430534 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10430537 push eax */
  push32((uint32_t)(EAX));
  /* 10430538 push 1 */
  push32((uint32_t)(0x1u));
  /* 1043053a call 0x10433ba0 */
  push32(0x1043053fu); f_10433ba0();
  /* 1043053f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430542 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10430545 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10430547 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1043054a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043054d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10430550 push edx */
  push32((uint32_t)(EDX));
  /* 10430551 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10430553 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10430556 push eax */
  push32((uint32_t)(EAX));
  /* 10430557 push 1 */
  push32((uint32_t)(0x1u));
  /* 10430559 call 0x10433ba0 */
  push32(0x1043055eu); f_10433ba0();
  /* 1043055e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430561 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10430564 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10430566 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10430569 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043056c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1043056f push edx */
  push32((uint32_t)(EDX));
  /* 10430570 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 10430572 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10430575 push eax */
  push32((uint32_t)(EAX));
  /* 10430576 push 1 */
  push32((uint32_t)(0x1u));
  /* 10430578 call 0x10433ba0 */
  push32(0x1043057du); f_10433ba0();
  /* 1043057d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430580 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10430583 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10430585 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10430588 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043058b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1043058e push edx */
  push32((uint32_t)(EDX));
  /* 1043058f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 10430591 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10430594 push eax */
  push32((uint32_t)(EAX));
  /* 10430595 push 1 */
  push32((uint32_t)(0x1u));
  /* 10430597 call 0x10433ba0 */
  push32(0x1043059cu); f_10433ba0();
  /* 1043059c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043059f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104305a2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104305a4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104305a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104305aa add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104305ad push edx */
  push32((uint32_t)(EDX));
  /* 104305ae push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 104305b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104305b3 push eax */
  push32((uint32_t)(EAX));
  /* 104305b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 104305b6 call 0x10433ba0 */
  push32(0x104305bbu); f_10433ba0();
  /* 104305bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104305be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104305c1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104305c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104305c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104305c9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104305cc push edx */
  push32((uint32_t)(EDX));
  /* 104305cd push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 104305cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104305d2 push eax */
  push32((uint32_t)(EAX));
  /* 104305d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 104305d5 call 0x10433ba0 */
  push32(0x104305dau); f_10433ba0();
  /* 104305da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104305dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104305e0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104305e2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104305e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104305e8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104305eb push edx */
  push32((uint32_t)(EDX));
  /* 104305ec push 0x38 */
  push32((uint32_t)(0x38u));
  /* 104305ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104305f1 push eax */
  push32((uint32_t)(EAX));
  /* 104305f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 104305f4 call 0x10433ba0 */
  push32(0x104305f9u); f_10433ba0();
  /* 104305f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104305fc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104305ff or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10430601 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10430604 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430607 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1043060a push edx */
  push32((uint32_t)(EDX));
  /* 1043060b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1043060d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10430610 push eax */
  push32((uint32_t)(EAX));
  /* 10430611 push 1 */
  push32((uint32_t)(0x1u));
  /* 10430613 call 0x10433ba0 */
  push32(0x10430618u); f_10433ba0();
  /* 10430618 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043061b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1043061e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10430620 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10430623 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430626 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10430629 push edx */
  push32((uint32_t)(EDX));
  /* 1043062a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1043062c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1043062f push eax */
  push32((uint32_t)(EAX));
  /* 10430630 push 1 */
  push32((uint32_t)(0x1u));
  /* 10430632 call 0x10433ba0 */
  push32(0x10430637u); f_10433ba0();
  /* 10430637 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043063a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1043063d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1043063f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10430642 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430645 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10430648 push edx */
  push32((uint32_t)(EDX));
  /* 10430649 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1043064b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1043064e push eax */
  push32((uint32_t)(EAX));
  /* 1043064f push 1 */
  push32((uint32_t)(0x1u));
  /* 10430651 call 0x10433ba0 */
  push32(0x10430656u); f_10433ba0();
  /* 10430656 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430659 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1043065c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1043065e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10430661 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430664 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10430667 push edx */
  push32((uint32_t)(EDX));
  /* 10430668 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1043066a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1043066d push eax */
  push32((uint32_t)(EAX));
  /* 1043066e push 1 */
  push32((uint32_t)(0x1u));
  /* 10430670 call 0x10433ba0 */
  push32(0x10430675u); f_10433ba0();
  /* 10430675 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430678 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1043067b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1043067d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10430680 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430683 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10430686 push edx */
  push32((uint32_t)(EDX));
  /* 10430687 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10430689 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1043068c push eax */
  push32((uint32_t)(EAX));
  /* 1043068d push 1 */
  push32((uint32_t)(0x1u));
  /* 1043068f call 0x10433ba0 */
  push32(0x10430694u); f_10433ba0();
  /* 10430694 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430697 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1043069a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1043069c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1043069f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104306a2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104306a8 push edx */
  push32((uint32_t)(EDX));
  /* 104306a9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 104306ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104306ae push eax */
  push32((uint32_t)(EAX));
  /* 104306af push 1 */
  push32((uint32_t)(0x1u));
  /* 104306b1 call 0x10433ba0 */
  push32(0x104306b6u); f_10433ba0();
  /* 104306b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104306b9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104306bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104306be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104306c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104306c4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104306ca push edx */
  push32((uint32_t)(EDX));
  /* 104306cb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 104306cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104306d0 push eax */
  push32((uint32_t)(EAX));
  /* 104306d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 104306d3 call 0x10433ba0 */
  push32(0x104306d8u); f_10433ba0();
  /* 104306d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104306db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104306de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104306e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104306e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104306e6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104306ec push edx */
  push32((uint32_t)(EDX));
  /* 104306ed push 0x40 */
  push32((uint32_t)(0x40u));
  /* 104306ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104306f2 push eax */
  push32((uint32_t)(EAX));
  /* 104306f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 104306f5 call 0x10433ba0 */
  push32(0x104306fau); f_10433ba0();
  /* 104306fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104306fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10430700 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10430702 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10430705 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430708 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1043070e push edx */
  push32((uint32_t)(EDX));
  /* 1043070f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10430711 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10430714 push eax */
  push32((uint32_t)(EAX));
  /* 10430715 push 1 */
  push32((uint32_t)(0x1u));
  /* 10430717 call 0x10433ba0 */
  push32(0x1043071cu); f_10433ba0();
  /* 1043071c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043071f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10430722 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10430724 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10430727 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043072a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10430730 push edx */
  push32((uint32_t)(EDX));
  /* 10430731 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10430733 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10430736 push eax */
  push32((uint32_t)(EAX));
  /* 10430737 push 1 */
  push32((uint32_t)(0x1u));
  /* 10430739 call 0x10433ba0 */
  push32(0x1043073eu); f_10433ba0();
  /* 1043073e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430741 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10430744 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10430746 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10430749 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043074c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10430752 push edx */
  push32((uint32_t)(EDX));
  /* 10430753 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10430755 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10430758 push eax */
  push32((uint32_t)(EAX));
  /* 10430759 push 1 */
  push32((uint32_t)(0x1u));
  /* 1043075b call 0x10433ba0 */
  push32(0x10430760u); f_10433ba0();
  /* 10430760 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430763 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10430766 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10430768 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1043076b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043076e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10430774 push edx */
  push32((uint32_t)(EDX));
  /* 10430775 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10430777 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1043077a push eax */
  push32((uint32_t)(EAX));
  /* 1043077b push 1 */
  push32((uint32_t)(0x1u));
  /* 1043077d call 0x10433ba0 */
  push32(0x10430782u); f_10433ba0();
  /* 10430782 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430785 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10430788 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1043078a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1043078d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430790 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10430796 push edx */
  push32((uint32_t)(EDX));
  /* 10430797 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10430799 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1043079c push eax */
  push32((uint32_t)(EAX));
  /* 1043079d push 1 */
  push32((uint32_t)(0x1u));
  /* 1043079f call 0x10433ba0 */
  push32(0x104307a4u); f_10433ba0();
  /* 104307a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104307a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104307aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104307ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104307af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104307b2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104307b8 push edx */
  push32((uint32_t)(EDX));
  /* 104307b9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 104307bb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104307be push eax */
  push32((uint32_t)(EAX));
  /* 104307bf push 1 */
  push32((uint32_t)(0x1u));
  /* 104307c1 call 0x10433ba0 */
  push32(0x104307c6u); f_10433ba0();
  /* 104307c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104307c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104307cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104307ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104307d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104307d4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104307da push edx */
  push32((uint32_t)(EDX));
  /* 104307db push 0x20 */
  push32((uint32_t)(0x20u));
  /* 104307dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104307e0 push eax */
  push32((uint32_t)(EAX));
  /* 104307e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 104307e3 call 0x10433ba0 */
  push32(0x104307e8u); f_10433ba0();
  /* 104307e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104307eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104307ee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104307f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104307f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104307f6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104307fc push edx */
  push32((uint32_t)(EDX));
  /* 104307fd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 10430802 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10430805 push eax */
  push32((uint32_t)(EAX));
  /* 10430806 push 1 */
  push32((uint32_t)(0x1u));
  /* 10430808 call 0x10433ba0 */
  push32(0x1043080du); f_10433ba0();
  /* 1043080d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430810 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10430813 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10430815 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10430818 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1043081b:;
  /* 1043081b mov esp, ebp */
  ESP = (EBP);
  /* 1043081d pop ebp */
  EBP = (pop32());
  /* 1043081e ret  */
  ESPCHK(0x10430290u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x10430820 (779 bytes, 265 insns) */
void f_10430820(void) {
  FTRACE(0x10430820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10430820 push ebp */
  push32((uint32_t)(EBP));
  /* 10430821 mov ebp, esp */
  EBP = (ESP);
  /* 10430823 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10430827 jne 0x1043082e */
  if (!C.zf) goto L_1043082e;
  /* 10430829 jmp 0x10430b29 */
  goto L_10430b29;
L_1043082e:;
  /* 1043082e push 2 */
  push32((uint32_t)(0x2u));
  /* 10430830 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430833 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10430836 push ecx */
  push32((uint32_t)(ECX));
  /* 10430837 call 0x10426470 */
  push32(0x1043083cu); f_10426470();
  /* 1043083c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043083f push 2 */
  push32((uint32_t)(0x2u));
  /* 10430841 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430844 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10430847 push eax */
  push32((uint32_t)(EAX));
  /* 10430848 call 0x10426470 */
  push32(0x1043084du); f_10426470();
  /* 1043084d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430850 push 2 */
  push32((uint32_t)(0x2u));
  /* 10430852 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430855 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10430858 push edx */
  push32((uint32_t)(EDX));
  /* 10430859 call 0x10426470 */
  push32(0x1043085eu); f_10426470();
  /* 1043085e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430861 push 2 */
  push32((uint32_t)(0x2u));
  /* 10430863 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430866 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10430869 push ecx */
  push32((uint32_t)(ECX));
  /* 1043086a call 0x10426470 */
  push32(0x1043086fu); f_10426470();
  /* 1043086f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430872 push 2 */
  push32((uint32_t)(0x2u));
  /* 10430874 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430877 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1043087a push eax */
  push32((uint32_t)(EAX));
  /* 1043087b call 0x10426470 */
  push32(0x10430880u); f_10426470();
  /* 10430880 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430883 push 2 */
  push32((uint32_t)(0x2u));
  /* 10430885 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430888 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1043088b push edx */
  push32((uint32_t)(EDX));
  /* 1043088c call 0x10426470 */
  push32(0x10430891u); f_10426470();
  /* 10430891 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430894 push 2 */
  push32((uint32_t)(0x2u));
  /* 10430896 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430899 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1043089b push ecx */
  push32((uint32_t)(ECX));
  /* 1043089c call 0x10426470 */
  push32(0x104308a1u); f_10426470();
  /* 104308a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104308a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 104308a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104308a9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 104308ac push eax */
  push32((uint32_t)(EAX));
  /* 104308ad call 0x10426470 */
  push32(0x104308b2u); f_10426470();
  /* 104308b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104308b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 104308b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104308ba mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 104308bd push edx */
  push32((uint32_t)(EDX));
  /* 104308be call 0x10426470 */
  push32(0x104308c3u); f_10426470();
  /* 104308c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104308c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 104308c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104308cb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 104308ce push ecx */
  push32((uint32_t)(ECX));
  /* 104308cf call 0x10426470 */
  push32(0x104308d4u); f_10426470();
  /* 104308d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104308d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 104308d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104308dc mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 104308df push eax */
  push32((uint32_t)(EAX));
  /* 104308e0 call 0x10426470 */
  push32(0x104308e5u); f_10426470();
  /* 104308e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104308e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 104308ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104308ed mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 104308f0 push edx */
  push32((uint32_t)(EDX));
  /* 104308f1 call 0x10426470 */
  push32(0x104308f6u); f_10426470();
  /* 104308f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104308f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 104308fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104308fe mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 10430901 push ecx */
  push32((uint32_t)(ECX));
  /* 10430902 call 0x10426470 */
  push32(0x10430907u); f_10426470();
  /* 10430907 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043090a push 2 */
  push32((uint32_t)(0x2u));
  /* 1043090c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043090f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10430912 push eax */
  push32((uint32_t)(EAX));
  /* 10430913 call 0x10426470 */
  push32(0x10430918u); f_10426470();
  /* 10430918 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043091b push 2 */
  push32((uint32_t)(0x2u));
  /* 1043091d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430920 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 10430923 push edx */
  push32((uint32_t)(EDX));
  /* 10430924 call 0x10426470 */
  push32(0x10430929u); f_10426470();
  /* 10430929 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043092c push 2 */
  push32((uint32_t)(0x2u));
  /* 1043092e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430931 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 10430934 push ecx */
  push32((uint32_t)(ECX));
  /* 10430935 call 0x10426470 */
  push32(0x1043093au); f_10426470();
  /* 1043093a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043093d push 2 */
  push32((uint32_t)(0x2u));
  /* 1043093f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430942 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10430945 push eax */
  push32((uint32_t)(EAX));
  /* 10430946 call 0x10426470 */
  push32(0x1043094bu); f_10426470();
  /* 1043094b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043094e push 2 */
  push32((uint32_t)(0x2u));
  /* 10430950 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430953 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 10430956 push edx */
  push32((uint32_t)(EDX));
  /* 10430957 call 0x10426470 */
  push32(0x1043095cu); f_10426470();
  /* 1043095c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043095f push 2 */
  push32((uint32_t)(0x2u));
  /* 10430961 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430964 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 10430967 push ecx */
  push32((uint32_t)(ECX));
  /* 10430968 call 0x10426470 */
  push32(0x1043096du); f_10426470();
  /* 1043096d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430970 push 2 */
  push32((uint32_t)(0x2u));
  /* 10430972 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430975 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 10430978 push eax */
  push32((uint32_t)(EAX));
  /* 10430979 call 0x10426470 */
  push32(0x1043097eu); f_10426470();
  /* 1043097e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430981 push 2 */
  push32((uint32_t)(0x2u));
  /* 10430983 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430986 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10430989 push edx */
  push32((uint32_t)(EDX));
  /* 1043098a call 0x10426470 */
  push32(0x1043098fu); f_10426470();
  /* 1043098f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430992 push 2 */
  push32((uint32_t)(0x2u));
  /* 10430994 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430997 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1043099a push ecx */
  push32((uint32_t)(ECX));
  /* 1043099b call 0x10426470 */
  push32(0x104309a0u); f_10426470();
  /* 104309a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104309a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 104309a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104309a8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 104309ab push eax */
  push32((uint32_t)(EAX));
  /* 104309ac call 0x10426470 */
  push32(0x104309b1u); f_10426470();
  /* 104309b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104309b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 104309b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104309b9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 104309bc push edx */
  push32((uint32_t)(EDX));
  /* 104309bd call 0x10426470 */
  push32(0x104309c2u); f_10426470();
  /* 104309c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104309c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 104309c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104309ca mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 104309cd push ecx */
  push32((uint32_t)(ECX));
  /* 104309ce call 0x10426470 */
  push32(0x104309d3u); f_10426470();
  /* 104309d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104309d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 104309d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104309db mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 104309de push eax */
  push32((uint32_t)(EAX));
  /* 104309df call 0x10426470 */
  push32(0x104309e4u); f_10426470();
  /* 104309e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104309e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 104309e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104309ec mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 104309ef push edx */
  push32((uint32_t)(EDX));
  /* 104309f0 call 0x10426470 */
  push32(0x104309f5u); f_10426470();
  /* 104309f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104309f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 104309fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104309fd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 10430a00 push ecx */
  push32((uint32_t)(ECX));
  /* 10430a01 call 0x10426470 */
  push32(0x10430a06u); f_10426470();
  /* 10430a06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430a09 push 2 */
  push32((uint32_t)(0x2u));
  /* 10430a0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430a0e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 10430a11 push eax */
  push32((uint32_t)(EAX));
  /* 10430a12 call 0x10426470 */
  push32(0x10430a17u); f_10426470();
  /* 10430a17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430a1a push 2 */
  push32((uint32_t)(0x2u));
  /* 10430a1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430a1f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 10430a22 push edx */
  push32((uint32_t)(EDX));
  /* 10430a23 call 0x10426470 */
  push32(0x10430a28u); f_10426470();
  /* 10430a28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430a2b push 2 */
  push32((uint32_t)(0x2u));
  /* 10430a2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430a30 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 10430a33 push ecx */
  push32((uint32_t)(ECX));
  /* 10430a34 call 0x10426470 */
  push32(0x10430a39u); f_10426470();
  /* 10430a39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430a3c push 2 */
  push32((uint32_t)(0x2u));
  /* 10430a3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430a41 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 10430a44 push eax */
  push32((uint32_t)(EAX));
  /* 10430a45 call 0x10426470 */
  push32(0x10430a4au); f_10426470();
  /* 10430a4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430a4d push 2 */
  push32((uint32_t)(0x2u));
  /* 10430a4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430a52 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 10430a58 push edx */
  push32((uint32_t)(EDX));
  /* 10430a59 call 0x10426470 */
  push32(0x10430a5eu); f_10426470();
  /* 10430a5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430a61 push 2 */
  push32((uint32_t)(0x2u));
  /* 10430a63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430a66 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 10430a6c push ecx */
  push32((uint32_t)(ECX));
  /* 10430a6d call 0x10426470 */
  push32(0x10430a72u); f_10426470();
  /* 10430a72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430a75 push 2 */
  push32((uint32_t)(0x2u));
  /* 10430a77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430a7a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 10430a80 push eax */
  push32((uint32_t)(EAX));
  /* 10430a81 call 0x10426470 */
  push32(0x10430a86u); f_10426470();
  /* 10430a86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430a89 push 2 */
  push32((uint32_t)(0x2u));
  /* 10430a8b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430a8e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 10430a94 push edx */
  push32((uint32_t)(EDX));
  /* 10430a95 call 0x10426470 */
  push32(0x10430a9au); f_10426470();
  /* 10430a9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430a9d push 2 */
  push32((uint32_t)(0x2u));
  /* 10430a9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430aa2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 10430aa8 push ecx */
  push32((uint32_t)(ECX));
  /* 10430aa9 call 0x10426470 */
  push32(0x10430aaeu); f_10426470();
  /* 10430aae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430ab1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10430ab3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430ab6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 10430abc push eax */
  push32((uint32_t)(EAX));
  /* 10430abd call 0x10426470 */
  push32(0x10430ac2u); f_10426470();
  /* 10430ac2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430ac5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10430ac7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430aca mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 10430ad0 push edx */
  push32((uint32_t)(EDX));
  /* 10430ad1 call 0x10426470 */
  push32(0x10430ad6u); f_10426470();
  /* 10430ad6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430ad9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10430adb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430ade mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10430ae4 push ecx */
  push32((uint32_t)(ECX));
  /* 10430ae5 call 0x10426470 */
  push32(0x10430aeau); f_10426470();
  /* 10430aea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430aed push 2 */
  push32((uint32_t)(0x2u));
  /* 10430aef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430af2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10430af8 push eax */
  push32((uint32_t)(EAX));
  /* 10430af9 call 0x10426470 */
  push32(0x10430afeu); f_10426470();
  /* 10430afe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430b01 push 2 */
  push32((uint32_t)(0x2u));
  /* 10430b03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430b06 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10430b0c push edx */
  push32((uint32_t)(EDX));
  /* 10430b0d call 0x10426470 */
  push32(0x10430b12u); f_10426470();
  /* 10430b12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430b15 push 2 */
  push32((uint32_t)(0x2u));
  /* 10430b17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430b1a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 10430b20 push ecx */
  push32((uint32_t)(ECX));
  /* 10430b21 call 0x10426470 */
  push32(0x10430b26u); f_10426470();
  /* 10430b26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10430b29:;
  /* 10430b29 pop ebp */
  EBP = (pop32());
  /* 10430b2a ret  */
  ESPCHK(0x10430820u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b30 @ 0x10430b30 (678 bytes, 180 insns) */
void f_10430b30(void) {
  FTRACE(0x10430b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10430b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10430b31 mov ebp, esp */
  EBP = (ESP);
  /* 10430b33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10430b36 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10430b3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10430b3f mov ax, word ptr [0x104517da] */
  AX = (r16((uint32_t)(0x104517da)));
  /* 10430b45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10430b48 cmp dword ptr [0x10451780], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10451780))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10430b4f je 0x10430caa */
  if (C.zf) goto L_10430caa;
  /* 10430b55 push 0x104517a8 */
  push32((uint32_t)(0x104517a8u));
  /* 10430b5a push 0xe */
  push32((uint32_t)(0xeu));
  /* 10430b5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10430b5f push ecx */
  push32((uint32_t)(ECX));
  /* 10430b60 push 1 */
  push32((uint32_t)(0x1u));
  /* 10430b62 call 0x10433ba0 */
  push32(0x10430b67u); f_10433ba0();
  /* 10430b67 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430b6a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10430b6d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10430b6f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10430b72 push 0x104517ac */
  push32((uint32_t)(0x104517acu));
  /* 10430b77 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10430b79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10430b7c push eax */
  push32((uint32_t)(EAX));
  /* 10430b7d push 1 */
  push32((uint32_t)(0x1u));
  /* 10430b7f call 0x10433ba0 */
  push32(0x10430b84u); f_10433ba0();
  /* 10430b84 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430b87 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10430b8a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10430b8c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10430b8f push 0x104517b0 */
  push32((uint32_t)(0x104517b0u));
  /* 10430b94 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10430b96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10430b99 push edx */
  push32((uint32_t)(EDX));
  /* 10430b9a push 1 */
  push32((uint32_t)(0x1u));
  /* 10430b9c call 0x10433ba0 */
  push32(0x10430ba1u); f_10433ba0();
  /* 10430ba1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430ba4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10430ba7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10430ba9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10430bac mov edx, dword ptr [0x104517b0] */
  EDX = (r32((uint32_t)(0x104517b0)));
  /* 10430bb2 push edx */
  push32((uint32_t)(EDX));
  /* 10430bb3 call 0x10430de0 */
  push32(0x10430bb8u); f_10430de0();
  /* 10430bb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430bbb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10430bbf je 0x10430c19 */
  if (C.zf) goto L_10430c19;
  /* 10430bc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10430bc3 mov eax, dword ptr [0x104517a8] */
  EAX = (r32((uint32_t)(0x104517a8)));
  /* 10430bc8 push eax */
  push32((uint32_t)(EAX));
  /* 10430bc9 call 0x10426470 */
  push32(0x10430bceu); f_10426470();
  /* 10430bce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430bd1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10430bd3 mov ecx, dword ptr [0x104517ac] */
  ECX = (r32((uint32_t)(0x104517ac)));
  /* 10430bd9 push ecx */
  push32((uint32_t)(ECX));
  /* 10430bda call 0x10426470 */
  push32(0x10430bdfu); f_10426470();
  /* 10430bdf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430be2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10430be4 mov edx, dword ptr [0x104517b0] */
  EDX = (r32((uint32_t)(0x104517b0)));
  /* 10430bea push edx */
  push32((uint32_t)(EDX));
  /* 10430beb call 0x10426470 */
  push32(0x10430bf0u); f_10426470();
  /* 10430bf0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430bf3 mov dword ptr [0x104517a8], 0 */
  w32((uint32_t)(0x104517a8), (0x0u));
  /* 10430bfd mov dword ptr [0x104517ac], 0 */
  w32((uint32_t)(0x104517ac), (0x0u));
  /* 10430c07 mov dword ptr [0x104517b0], 0 */
  w32((uint32_t)(0x104517b0), (0x0u));
  /* 10430c11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10430c14 jmp 0x10430dd2 */
  goto L_10430dd2;
L_10430c19:;
  /* 10430c19 mov eax, dword ptr [0x10450d88] */
  EAX = (r32((uint32_t)(0x10450d88)));
  /* 10430c1e cmp dword ptr [eax], 0x10450d50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x10450d50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10430c24 je 0x10430c60 */
  if (C.zf) goto L_10430c60;
  /* 10430c26 push 2 */
  push32((uint32_t)(0x2u));
  /* 10430c28 mov ecx, dword ptr [0x10450d88] */
  ECX = (r32((uint32_t)(0x10450d88)));
  /* 10430c2e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10430c30 push edx */
  push32((uint32_t)(EDX));
  /* 10430c31 call 0x10426470 */
  push32(0x10430c36u); f_10426470();
  /* 10430c36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430c39 push 2 */
  push32((uint32_t)(0x2u));
  /* 10430c3b mov eax, dword ptr [0x10450d88] */
  EAX = (r32((uint32_t)(0x10450d88)));
  /* 10430c40 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10430c43 push ecx */
  push32((uint32_t)(ECX));
  /* 10430c44 call 0x10426470 */
  push32(0x10430c49u); f_10426470();
  /* 10430c49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430c4c push 2 */
  push32((uint32_t)(0x2u));
  /* 10430c4e mov edx, dword ptr [0x10450d88] */
  EDX = (r32((uint32_t)(0x10450d88)));
  /* 10430c54 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10430c57 push eax */
  push32((uint32_t)(EAX));
  /* 10430c58 call 0x10426470 */
  push32(0x10430c5du); f_10426470();
  /* 10430c5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10430c60:;
  /* 10430c60 mov ecx, dword ptr [0x10450d88] */
  ECX = (r32((uint32_t)(0x10450d88)));
  /* 10430c66 mov edx, dword ptr [0x104517a8] */
  EDX = (r32((uint32_t)(0x104517a8)));
  /* 10430c6c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10430c6e mov eax, dword ptr [0x10450d88] */
  EAX = (r32((uint32_t)(0x10450d88)));
  /* 10430c73 mov ecx, dword ptr [0x104517ac] */
  ECX = (r32((uint32_t)(0x104517ac)));
  /* 10430c79 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10430c7c mov edx, dword ptr [0x10450d88] */
  EDX = (r32((uint32_t)(0x10450d88)));
  /* 10430c82 mov eax, dword ptr [0x104517b0] */
  EAX = (r32((uint32_t)(0x104517b0)));
  /* 10430c87 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10430c8a mov ecx, dword ptr [0x10450d88] */
  ECX = (r32((uint32_t)(0x10450d88)));
  /* 10430c90 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10430c92 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10430c94 mov byte ptr [0x1044fea8], al */
  w8((uint32_t)(0x1044fea8), (AL));
  /* 10430c99 mov dword ptr [0x1044feac], 1 */
  w32((uint32_t)(0x1044feac), (0x1u));
  /* 10430ca3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10430ca5 jmp 0x10430dd2 */
  goto L_10430dd2;
L_10430caa:;
  /* 10430caa push 2 */
  push32((uint32_t)(0x2u));
  /* 10430cac mov ecx, dword ptr [0x104517a8] */
  ECX = (r32((uint32_t)(0x104517a8)));
  /* 10430cb2 push ecx */
  push32((uint32_t)(ECX));
  /* 10430cb3 call 0x10426470 */
  push32(0x10430cb8u); f_10426470();
  /* 10430cb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430cbb push 2 */
  push32((uint32_t)(0x2u));
  /* 10430cbd mov edx, dword ptr [0x104517ac] */
  EDX = (r32((uint32_t)(0x104517ac)));
  /* 10430cc3 push edx */
  push32((uint32_t)(EDX));
  /* 10430cc4 call 0x10426470 */
  push32(0x10430cc9u); f_10426470();
  /* 10430cc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430ccc push 2 */
  push32((uint32_t)(0x2u));
  /* 10430cce mov eax, dword ptr [0x104517b0] */
  EAX = (r32((uint32_t)(0x104517b0)));
  /* 10430cd3 push eax */
  push32((uint32_t)(EAX));
  /* 10430cd4 call 0x10426470 */
  push32(0x10430cd9u); f_10426470();
  /* 10430cd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430cdc mov dword ptr [0x104517a8], 0 */
  w32((uint32_t)(0x104517a8), (0x0u));
  /* 10430ce6 mov dword ptr [0x104517ac], 0 */
  w32((uint32_t)(0x104517ac), (0x0u));
  /* 10430cf0 mov dword ptr [0x104517b0], 0 */
  w32((uint32_t)(0x104517b0), (0x0u));
  /* 10430cfa push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10430cff push 0x1044d21c */
  push32((uint32_t)(0x1044d21cu));
  /* 10430d04 push 2 */
  push32((uint32_t)(0x2u));
  /* 10430d06 push 2 */
  push32((uint32_t)(0x2u));
  /* 10430d08 call 0x104259e0 */
  push32(0x10430d0du); f_104259e0();
  /* 10430d0d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430d10 mov ecx, dword ptr [0x10450d88] */
  ECX = (r32((uint32_t)(0x10450d88)));
  /* 10430d16 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10430d18 mov edx, dword ptr [0x10450d88] */
  EDX = (r32((uint32_t)(0x10450d88)));
  /* 10430d1e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10430d21 jne 0x10430d2b */
  if (!C.zf) goto L_10430d2b;
  /* 10430d23 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10430d26 jmp 0x10430dd2 */
  goto L_10430dd2;
L_10430d2b:;
  /* 10430d2b push 0x1044d1ec */
  push32((uint32_t)(0x1044d1ecu));
  /* 10430d30 mov eax, dword ptr [0x10450d88] */
  EAX = (r32((uint32_t)(0x10450d88)));
  /* 10430d35 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10430d37 push ecx */
  push32((uint32_t)(ECX));
  /* 10430d38 call 0x10428990 */
  push32(0x10430d3du); f_10428990();
  /* 10430d3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430d40 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 10430d45 push 0x1044d21c */
  push32((uint32_t)(0x1044d21cu));
  /* 10430d4a push 2 */
  push32((uint32_t)(0x2u));
  /* 10430d4c push 2 */
  push32((uint32_t)(0x2u));
  /* 10430d4e call 0x104259e0 */
  push32(0x10430d53u); f_104259e0();
  /* 10430d53 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430d56 mov edx, dword ptr [0x10450d88] */
  EDX = (r32((uint32_t)(0x10450d88)));
  /* 10430d5c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10430d5f mov eax, dword ptr [0x10450d88] */
  EAX = (r32((uint32_t)(0x10450d88)));
  /* 10430d64 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10430d68 jne 0x10430d6f */
  if (!C.zf) goto L_10430d6f;
  /* 10430d6a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10430d6d jmp 0x10430dd2 */
  goto L_10430dd2;
L_10430d6f:;
  /* 10430d6f mov ecx, dword ptr [0x10450d88] */
  ECX = (r32((uint32_t)(0x10450d88)));
  /* 10430d75 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10430d78 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10430d7b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 10430d80 push 0x1044d21c */
  push32((uint32_t)(0x1044d21cu));
  /* 10430d85 push 2 */
  push32((uint32_t)(0x2u));
  /* 10430d87 push 2 */
  push32((uint32_t)(0x2u));
  /* 10430d89 call 0x104259e0 */
  push32(0x10430d8eu); f_104259e0();
  /* 10430d8e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430d91 mov ecx, dword ptr [0x10450d88] */
  ECX = (r32((uint32_t)(0x10450d88)));
  /* 10430d97 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10430d9a mov edx, dword ptr [0x10450d88] */
  EDX = (r32((uint32_t)(0x10450d88)));
  /* 10430da0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10430da4 jne 0x10430dab */
  if (!C.zf) goto L_10430dab;
  /* 10430da6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10430da9 jmp 0x10430dd2 */
  goto L_10430dd2;
L_10430dab:;
  /* 10430dab mov eax, dword ptr [0x10450d88] */
  EAX = (r32((uint32_t)(0x10450d88)));
  /* 10430db0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10430db3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10430db6 mov edx, dword ptr [0x10450d88] */
  EDX = (r32((uint32_t)(0x10450d88)));
  /* 10430dbc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10430dbe mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10430dc0 mov byte ptr [0x1044fea8], cl */
  w8((uint32_t)(0x1044fea8), (CL));
  /* 10430dc6 mov dword ptr [0x1044feac], 1 */
  w32((uint32_t)(0x1044feac), (0x1u));
  /* 10430dd0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10430dd2:;
  /* 10430dd2 mov esp, ebp */
  ESP = (EBP);
  /* 10430dd4 pop ebp */
  EBP = (pop32());
  /* 10430dd5 ret  */
  ESPCHK(0x10430b30u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10430de0 (125 bytes, 49 insns) */
void f_10430de0(void) {
  FTRACE(0x10430de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10430de0 push ebp */
  push32((uint32_t)(EBP));
  /* 10430de1 mov ebp, esp */
  EBP = (ESP);
  /* 10430de3 push ecx */
  push32((uint32_t)(ECX));
L_10430de4:;
  /* 10430de4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430de7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10430dea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10430dec je 0x10430e59 */
  if (C.zf) goto L_10430e59;
  /* 10430dee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430df1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10430df4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10430df7 jl 0x10430e1d */
  if ((C.sf!=C.of)) goto L_10430e1d;
  /* 10430df9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430dfc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10430dff cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10430e02 jg 0x10430e1d */
  if ((!C.zf&&C.sf==C.of)) goto L_10430e1d;
  /* 10430e04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430e07 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10430e0a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10430e0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430e10 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10430e12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430e15 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10430e18 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10430e1b jmp 0x10430e57 */
  goto L_10430e57;
L_10430e1d:;
  /* 10430e1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430e20 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10430e23 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10430e26 jne 0x10430e4e */
  if (!C.zf) goto L_10430e4e;
  /* 10430e28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430e2b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10430e2e:;
  /* 10430e2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10430e31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10430e34 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10430e37 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10430e39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10430e3c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10430e3f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10430e42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10430e45 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10430e48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10430e4a jne 0x10430e2e */
  if (!C.zf) goto L_10430e2e;
  /* 10430e4c jmp 0x10430e57 */
  goto L_10430e57;
L_10430e4e:;
  /* 10430e4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430e51 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10430e54 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10430e57:;
  /* 10430e57 jmp 0x10430de4 */
  goto L_10430de4;
L_10430e59:;
  /* 10430e59 mov esp, ebp */
  ESP = (EBP);
  /* 10430e5b pop ebp */
  EBP = (pop32());
  /* 10430e5c ret  */
  ESPCHK(0x10430de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e60 @ 0x10430e60 (304 bytes, 85 insns) */
void f_10430e60(void) {
  FTRACE(0x10430e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10430e60 push ebp */
  push32((uint32_t)(EBP));
  /* 10430e61 mov ebp, esp */
  EBP = (ESP);
  /* 10430e63 push ecx */
  push32((uint32_t)(ECX));
  /* 10430e64 cmp dword ptr [0x1045177c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1045177c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10430e6b je 0x10430f2c */
  if (C.zf) goto L_10430f2c;
  /* 10430e71 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10430e73 push 0x1044d228 */
  push32((uint32_t)(0x1044d228u));
  /* 10430e78 push 2 */
  push32((uint32_t)(0x2u));
  /* 10430e7a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10430e7c push 1 */
  push32((uint32_t)(0x1u));
  /* 10430e7e call 0x10425df0 */
  push32(0x10430e83u); f_10425df0();
  /* 10430e83 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430e86 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10430e89 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10430e8d jne 0x10430e99 */
  if (!C.zf) goto L_10430e99;
  /* 10430e8f mov eax, 1 */
  EAX = (0x1u);
  /* 10430e94 jmp 0x10430f8c */
  goto L_10430f8c;
L_10430e99:;
  /* 10430e99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10430e9c push eax */
  push32((uint32_t)(EAX));
  /* 10430e9d call 0x10430f90 */
  push32(0x10430ea2u); f_10430f90();
  /* 10430ea2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430ea5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10430ea7 je 0x10430ecd */
  if (C.zf) goto L_10430ecd;
  /* 10430ea9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10430eac push ecx */
  push32((uint32_t)(ECX));
  /* 10430ead call 0x10431220 */
  push32(0x10430eb2u); f_10431220();
  /* 10430eb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430eb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10430eb7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10430eba push edx */
  push32((uint32_t)(EDX));
  /* 10430ebb call 0x10426470 */
  push32(0x10430ec0u); f_10426470();
  /* 10430ec0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430ec3 mov eax, 1 */
  EAX = (0x1u);
  /* 10430ec8 jmp 0x10430f8c */
  goto L_10430f8c;
L_10430ecd:;
  /* 10430ecd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10430ed0 mov ecx, dword ptr [0x10450d88] */
  ECX = (r32((uint32_t)(0x10450d88)));
  /* 10430ed6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10430ed8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10430eda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10430edd mov ecx, dword ptr [0x10450d88] */
  ECX = (r32((uint32_t)(0x10450d88)));
  /* 10430ee3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10430ee6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10430ee9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10430eec mov ecx, dword ptr [0x10450d88] */
  ECX = (r32((uint32_t)(0x10450d88)));
  /* 10430ef2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10430ef5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10430ef8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10430efb mov dword ptr [0x10450d88], eax */
  w32((uint32_t)(0x10450d88), (EAX));
  /* 10430f00 mov ecx, dword ptr [0x104517b4] */
  ECX = (r32((uint32_t)(0x104517b4)));
  /* 10430f06 push ecx */
  push32((uint32_t)(ECX));
  /* 10430f07 call 0x10431220 */
  push32(0x10430f0cu); f_10431220();
  /* 10430f0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430f0f push 2 */
  push32((uint32_t)(0x2u));
  /* 10430f11 mov edx, dword ptr [0x104517b4] */
  EDX = (r32((uint32_t)(0x104517b4)));
  /* 10430f17 push edx */
  push32((uint32_t)(EDX));
  /* 10430f18 call 0x10426470 */
  push32(0x10430f1du); f_10426470();
  /* 10430f1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430f20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10430f23 mov dword ptr [0x104517b4], eax */
  w32((uint32_t)(0x104517b4), (EAX));
  /* 10430f28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10430f2a jmp 0x10430f8c */
  goto L_10430f8c;
L_10430f2c:;
  /* 10430f2c mov ecx, dword ptr [0x10450d88] */
  ECX = (r32((uint32_t)(0x10450d88)));
  /* 10430f32 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10430f34 mov dword ptr [0x10450d58], edx */
  w32((uint32_t)(0x10450d58), (EDX));
  /* 10430f3a mov eax, dword ptr [0x10450d88] */
  EAX = (r32((uint32_t)(0x10450d88)));
  /* 10430f3f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10430f42 mov dword ptr [0x10450d5c], ecx */
  w32((uint32_t)(0x10450d5c), (ECX));
  /* 10430f48 mov edx, dword ptr [0x10450d88] */
  EDX = (r32((uint32_t)(0x10450d88)));
  /* 10430f4e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10430f51 mov dword ptr [0x10450d60], eax */
  w32((uint32_t)(0x10450d60), (EAX));
  /* 10430f56 mov dword ptr [0x10450d88], 0x10450d58 */
  w32((uint32_t)(0x10450d88), (0x10450d58u));
  /* 10430f60 mov ecx, dword ptr [0x104517b4] */
  ECX = (r32((uint32_t)(0x104517b4)));
  /* 10430f66 push ecx */
  push32((uint32_t)(ECX));
  /* 10430f67 call 0x10431220 */
  push32(0x10430f6cu); f_10431220();
  /* 10430f6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430f6f push 2 */
  push32((uint32_t)(0x2u));
  /* 10430f71 mov edx, dword ptr [0x104517b4] */
  EDX = (r32((uint32_t)(0x104517b4)));
  /* 10430f77 push edx */
  push32((uint32_t)(EDX));
  /* 10430f78 call 0x10426470 */
  push32(0x10430f7du); f_10426470();
  /* 10430f7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430f80 mov dword ptr [0x104517b4], 0 */
  w32((uint32_t)(0x104517b4), (0x0u));
  /* 10430f8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10430f8c:;
  /* 10430f8c mov esp, ebp */
  ESP = (EBP);
  /* 10430f8e pop ebp */
  EBP = (pop32());
  /* 10430f8f ret  */
  ESPCHK(0x10430e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f90 @ 0x10430f90 (525 bytes, 200 insns) */
void f_10430f90(void) {
  FTRACE(0x10430f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10430f90 push ebp */
  push32((uint32_t)(EBP));
  /* 10430f91 mov ebp, esp */
  EBP = (ESP);
  /* 10430f93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10430f96 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10430f9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10430f9f mov ax, word ptr [0x104517d4] */
  AX = (r16((uint32_t)(0x104517d4)));
  /* 10430fa5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10430fa8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10430fac jne 0x10430fb6 */
  if (!C.zf) goto L_10430fb6;
  /* 10430fae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10430fb1 jmp 0x10431199 */
  goto L_10431199;
L_10430fb6:;
  /* 10430fb6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430fb9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10430fbc push ecx */
  push32((uint32_t)(ECX));
  /* 10430fbd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10430fbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10430fc2 push edx */
  push32((uint32_t)(EDX));
  /* 10430fc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10430fc5 call 0x10433ba0 */
  push32(0x10430fcau); f_10433ba0();
  /* 10430fca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430fcd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10430fd0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10430fd2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10430fd5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430fd8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10430fdb push edx */
  push32((uint32_t)(EDX));
  /* 10430fdc push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10430fde mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10430fe1 push eax */
  push32((uint32_t)(EAX));
  /* 10430fe2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10430fe4 call 0x10433ba0 */
  push32(0x10430fe9u); f_10433ba0();
  /* 10430fe9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10430fec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10430fef or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10430ff1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10430ff4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10430ff7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10430ffa push edx */
  push32((uint32_t)(EDX));
  /* 10430ffb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10430ffd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10431000 push eax */
  push32((uint32_t)(EAX));
  /* 10431001 push 1 */
  push32((uint32_t)(0x1u));
  /* 10431003 call 0x10433ba0 */
  push32(0x10431008u); f_10433ba0();
  /* 10431008 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043100b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1043100e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10431010 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10431013 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10431016 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10431019 push edx */
  push32((uint32_t)(EDX));
  /* 1043101a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1043101c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1043101f push eax */
  push32((uint32_t)(EAX));
  /* 10431020 push 1 */
  push32((uint32_t)(0x1u));
  /* 10431022 call 0x10433ba0 */
  push32(0x10431027u); f_10433ba0();
  /* 10431027 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043102a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1043102d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1043102f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10431032 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10431035 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10431038 push edx */
  push32((uint32_t)(EDX));
  /* 10431039 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1043103b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1043103e push eax */
  push32((uint32_t)(EAX));
  /* 1043103f push 1 */
  push32((uint32_t)(0x1u));
  /* 10431041 call 0x10433ba0 */
  push32(0x10431046u); f_10433ba0();
  /* 10431046 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10431049 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1043104c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1043104e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10431051 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10431054 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10431057 push eax */
  push32((uint32_t)(EAX));
  /* 10431058 call 0x104311a0 */
  push32(0x1043105du); f_104311a0();
  /* 1043105d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10431060 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10431063 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10431066 push ecx */
  push32((uint32_t)(ECX));
  /* 10431067 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10431069 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1043106c push edx */
  push32((uint32_t)(EDX));
  /* 1043106d push 1 */
  push32((uint32_t)(0x1u));
  /* 1043106f call 0x10433ba0 */
  push32(0x10431074u); f_10433ba0();
  /* 10431074 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10431077 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1043107a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1043107c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1043107f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10431082 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10431085 push edx */
  push32((uint32_t)(EDX));
  /* 10431086 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 10431088 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1043108b push eax */
  push32((uint32_t)(EAX));
  /* 1043108c push 1 */
  push32((uint32_t)(0x1u));
  /* 1043108e call 0x10433ba0 */
  push32(0x10431093u); f_10433ba0();
  /* 10431093 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10431096 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10431099 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1043109b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1043109e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104310a1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104310a4 push edx */
  push32((uint32_t)(EDX));
  /* 104310a5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 104310a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104310aa push eax */
  push32((uint32_t)(EAX));
  /* 104310ab push 0 */
  push32((uint32_t)(0x0u));
  /* 104310ad call 0x10433ba0 */
  push32(0x104310b2u); f_10433ba0();
  /* 104310b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104310b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104310b8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104310ba mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104310bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104310c0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104310c3 push edx */
  push32((uint32_t)(EDX));
  /* 104310c4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 104310c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104310c9 push eax */
  push32((uint32_t)(EAX));
  /* 104310ca push 0 */
  push32((uint32_t)(0x0u));
  /* 104310cc call 0x10433ba0 */
  push32(0x104310d1u); f_10433ba0();
  /* 104310d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104310d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104310d7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104310d9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104310dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104310df add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104310e2 push edx */
  push32((uint32_t)(EDX));
  /* 104310e3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 104310e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104310e8 push eax */
  push32((uint32_t)(EAX));
  /* 104310e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 104310eb call 0x10433ba0 */
  push32(0x104310f0u); f_10433ba0();
  /* 104310f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104310f3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104310f6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104310f8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104310fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104310fe add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10431101 push edx */
  push32((uint32_t)(EDX));
  /* 10431102 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10431104 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10431107 push eax */
  push32((uint32_t)(EAX));
  /* 10431108 push 0 */
  push32((uint32_t)(0x0u));
  /* 1043110a call 0x10433ba0 */
  push32(0x1043110fu); f_10433ba0();
  /* 1043110f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10431112 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10431115 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10431117 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1043111a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043111d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10431120 push edx */
  push32((uint32_t)(EDX));
  /* 10431121 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 10431123 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10431126 push eax */
  push32((uint32_t)(EAX));
  /* 10431127 push 0 */
  push32((uint32_t)(0x0u));
  /* 10431129 call 0x10433ba0 */
  push32(0x1043112eu); f_10433ba0();
  /* 1043112e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10431131 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10431134 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10431136 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10431139 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043113c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1043113f push edx */
  push32((uint32_t)(EDX));
  /* 10431140 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 10431142 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10431145 push eax */
  push32((uint32_t)(EAX));
  /* 10431146 push 0 */
  push32((uint32_t)(0x0u));
  /* 10431148 call 0x10433ba0 */
  push32(0x1043114du); f_10433ba0();
  /* 1043114d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10431150 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10431153 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10431155 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10431158 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043115b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1043115e push edx */
  push32((uint32_t)(EDX));
  /* 1043115f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 10431161 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10431164 push eax */
  push32((uint32_t)(EAX));
  /* 10431165 push 0 */
  push32((uint32_t)(0x0u));
  /* 10431167 call 0x10433ba0 */
  push32(0x1043116cu); f_10433ba0();
  /* 1043116c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043116f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10431172 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10431174 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10431177 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043117a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1043117d push edx */
  push32((uint32_t)(EDX));
  /* 1043117e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 10431180 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10431183 push eax */
  push32((uint32_t)(EAX));
  /* 10431184 push 0 */
  push32((uint32_t)(0x0u));
  /* 10431186 call 0x10433ba0 */
  push32(0x1043118bu); f_10433ba0();
  /* 1043118b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043118e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10431191 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10431193 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10431196 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10431199:;
  /* 10431199 mov esp, ebp */
  ESP = (EBP);
  /* 1043119b pop ebp */
  EBP = (pop32());
  /* 1043119c ret  */
  ESPCHK(0x10430f90u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x104311a0 (125 bytes, 49 insns) */
void f_104311a0(void) {
  FTRACE(0x104311a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104311a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104311a1 mov ebp, esp */
  EBP = (ESP);
  /* 104311a3 push ecx */
  push32((uint32_t)(ECX));
L_104311a4:;
  /* 104311a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104311a7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104311aa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104311ac je 0x10431219 */
  if (C.zf) goto L_10431219;
  /* 104311ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104311b1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104311b4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104311b7 jl 0x104311dd */
  if ((C.sf!=C.of)) goto L_104311dd;
  /* 104311b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104311bc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104311bf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104311c2 jg 0x104311dd */
  if ((!C.zf&&C.sf==C.of)) goto L_104311dd;
  /* 104311c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104311c7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104311ca sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104311cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104311d0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 104311d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104311d5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104311d8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104311db jmp 0x10431217 */
  goto L_10431217;
L_104311dd:;
  /* 104311dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104311e0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104311e3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104311e6 jne 0x1043120e */
  if (!C.zf) goto L_1043120e;
  /* 104311e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104311eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104311ee:;
  /* 104311ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104311f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104311f4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 104311f7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 104311f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104311fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104311ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10431202 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10431205 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10431208 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1043120a jne 0x104311ee */
  if (!C.zf) goto L_104311ee;
  /* 1043120c jmp 0x10431217 */
  goto L_10431217;
L_1043120e:;
  /* 1043120e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10431211 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10431214 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10431217:;
  /* 10431217 jmp 0x104311a4 */
  goto L_104311a4;
L_10431219:;
  /* 10431219 mov esp, ebp */
  ESP = (EBP);
  /* 1043121b pop ebp */
  EBP = (pop32());
  /* 1043121c ret  */
  ESPCHK(0x104311a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011220 @ 0x10431220 (147 bytes, 52 insns) */
void f_10431220(void) {
  FTRACE(0x10431220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10431220 push ebp */
  push32((uint32_t)(EBP));
  /* 10431221 mov ebp, esp */
  EBP = (ESP);
  /* 10431223 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10431227 jne 0x1043122e */
  if (!C.zf) goto L_1043122e;
  /* 10431229 jmp 0x104312b1 */
  goto L_104312b1;
L_1043122e:;
  /* 1043122e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10431231 cmp dword ptr [eax + 0xc], 0x10451810 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x10451810u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10431238 je 0x104312b1 */
  if (C.zf) goto L_104312b1;
  /* 1043123a push 2 */
  push32((uint32_t)(0x2u));
  /* 1043123c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043123f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10431242 push edx */
  push32((uint32_t)(EDX));
  /* 10431243 call 0x10426470 */
  push32(0x10431248u); f_10426470();
  /* 10431248 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043124b push 2 */
  push32((uint32_t)(0x2u));
  /* 1043124d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10431250 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10431253 push ecx */
  push32((uint32_t)(ECX));
  /* 10431254 call 0x10426470 */
  push32(0x10431259u); f_10426470();
  /* 10431259 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043125c push 2 */
  push32((uint32_t)(0x2u));
  /* 1043125e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10431261 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10431264 push eax */
  push32((uint32_t)(EAX));
  /* 10431265 call 0x10426470 */
  push32(0x1043126au); f_10426470();
  /* 1043126a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043126d push 2 */
  push32((uint32_t)(0x2u));
  /* 1043126f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10431272 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10431275 push edx */
  push32((uint32_t)(EDX));
  /* 10431276 call 0x10426470 */
  push32(0x1043127bu); f_10426470();
  /* 1043127b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043127e push 2 */
  push32((uint32_t)(0x2u));
  /* 10431280 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10431283 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10431286 push ecx */
  push32((uint32_t)(ECX));
  /* 10431287 call 0x10426470 */
  push32(0x1043128cu); f_10426470();
  /* 1043128c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043128f push 2 */
  push32((uint32_t)(0x2u));
  /* 10431291 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10431294 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10431297 push eax */
  push32((uint32_t)(EAX));
  /* 10431298 call 0x10426470 */
  push32(0x1043129du); f_10426470();
  /* 1043129d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104312a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 104312a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104312a5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 104312a8 push edx */
  push32((uint32_t)(EDX));
  /* 104312a9 call 0x10426470 */
  push32(0x104312aeu); f_10426470();
  /* 104312ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104312b1:;
  /* 104312b1 pop ebp */
  EBP = (pop32());
  /* 104312b2 ret  */
  ESPCHK(0x10431220u, _esp0);
  ESP += 4; return;
}

/* FUN_100112c0 @ 0x104312c0 (928 bytes, 284 insns) */
void f_104312c0(void) {
  FTRACE(0x104312c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104312c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104312c1 mov ebp, esp */
  EBP = (ESP);
  /* 104312c3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104312c6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 104312cd mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 104312d4 cmp dword ptr [0x10451778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10451778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104312db je 0x10431611 */
  if (C.zf) goto L_10431611;
  /* 104312e1 cmp dword ptr [0x10451788], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10451788))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104312e8 jne 0x10431310 */
  if (!C.zf) goto L_10431310;
  /* 104312ea push 0x10451788 */
  push32((uint32_t)(0x10451788u));
  /* 104312ef push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 104312f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104312f6 mov ax, word ptr [0x104517cc] */
  AX = (r16((uint32_t)(0x104517cc)));
  /* 104312fc push eax */
  push32((uint32_t)(EAX));
  /* 104312fd push 0 */
  push32((uint32_t)(0x0u));
  /* 104312ff call 0x10433ba0 */
  push32(0x10431304u); f_10433ba0();
  /* 10431304 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10431307 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10431309 je 0x10431310 */
  if (C.zf) goto L_10431310;
  /* 1043130b jmp 0x104315d2 */
  goto L_104315d2;
L_10431310:;
  /* 10431310 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10431312 push 0x1044d234 */
  push32((uint32_t)(0x1044d234u));
  /* 10431317 push 2 */
  push32((uint32_t)(0x2u));
  /* 10431319 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1043131e call 0x104259e0 */
  push32(0x10431323u); f_104259e0();
  /* 10431323 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10431326 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10431329 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1043132b push 0x1044d234 */
  push32((uint32_t)(0x1044d234u));
  /* 10431330 push 2 */
  push32((uint32_t)(0x2u));
  /* 10431332 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10431337 call 0x104259e0 */
  push32(0x1043133cu); f_104259e0();
  /* 1043133c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043133f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10431342 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10431344 push 0x1044d234 */
  push32((uint32_t)(0x1044d234u));
  /* 10431349 push 2 */
  push32((uint32_t)(0x2u));
  /* 1043134b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10431350 call 0x104259e0 */
  push32(0x10431355u); f_104259e0();
  /* 10431355 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10431358 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1043135b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1043135d push 0x1044d234 */
  push32((uint32_t)(0x1044d234u));
  /* 10431362 push 2 */
  push32((uint32_t)(0x2u));
  /* 10431364 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10431369 call 0x104259e0 */
  push32(0x1043136eu); f_104259e0();
  /* 1043136e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10431371 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10431374 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10431378 je 0x1043138c */
  if (C.zf) goto L_1043138c;
  /* 1043137a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043137e je 0x1043138c */
  if (C.zf) goto L_1043138c;
  /* 10431380 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10431384 je 0x1043138c */
  if (C.zf) goto L_1043138c;
  /* 10431386 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043138a jne 0x10431391 */
  if (!C.zf) goto L_10431391;
L_1043138c:;
  /* 1043138c jmp 0x104315d2 */
  goto L_104315d2;
L_10431391:;
  /* 10431391 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10431394 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10431397 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1043139e jmp 0x104313a9 */
  goto L_104313a9;
L_104313a0:;
  /* 104313a0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 104313a3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104313a6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_104313a9:;
  /* 104313a9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104313b0 jge 0x104313c5 */
  if ((C.sf==C.of)) goto L_104313c5;
  /* 104313b2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104313b5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 104313b8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 104313ba mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104313bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104313c0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 104313c3 jmp 0x104313a0 */
  goto L_104313a0;
L_104313c5:;
  /* 104313c5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 104313c8 push eax */
  push32((uint32_t)(EAX));
  /* 104313c9 mov ecx, dword ptr [0x10451788] */
  ECX = (r32((uint32_t)(0x10451788)));
  /* 104313cf push ecx */
  push32((uint32_t)(ECX));
  /* 104313d0 call dword ptr [0x104542d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542d8))), 0x104313d6u);
  /* 104313d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104313d8 jne 0x104313df */
  if (!C.zf) goto L_104313df;
  /* 104313da jmp 0x104315d2 */
  goto L_104315d2;
L_104313df:;
  /* 104313df cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104313e3 jbe 0x104313ea */
  if ((C.cf||C.zf)) goto L_104313ea;
  /* 104313e5 jmp 0x104315d2 */
  goto L_104315d2;
L_104313ea:;
  /* 104313ea mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104313ed and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104313f3 mov dword ptr [0x1044fea4], edx */
  w32((uint32_t)(0x1044fea4), (EDX));
  /* 104313f9 cmp dword ptr [0x1044fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1044fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10431400 jle 0x10431459 */
  if ((C.zf||C.sf!=C.of)) goto L_10431459;
  /* 10431402 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 10431405 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10431408 jmp 0x10431413 */
  goto L_10431413;
L_1043140a:;
  /* 1043140a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1043140d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10431410 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10431413:;
  /* 10431413 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10431416 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10431418 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1043141a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1043141c je 0x10431459 */
  if (C.zf) goto L_10431459;
  /* 1043141e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10431421 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10431423 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10431426 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10431428 je 0x10431459 */
  if (C.zf) goto L_10431459;
  /* 1043142a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1043142d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1043142f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10431431 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10431434 jmp 0x1043143f */
  goto L_1043143f;
L_10431436:;
  /* 10431436 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10431439 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1043143c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1043143f:;
  /* 1043143f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10431442 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10431444 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10431447 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043144a jg 0x10431457 */
  if ((!C.zf&&C.sf==C.of)) goto L_10431457;
  /* 1043144c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1043144f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10431452 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10431455 jmp 0x10431436 */
  goto L_10431436;
L_10431457:;
  /* 10431457 jmp 0x1043140a */
  goto L_1043140a;
L_10431459:;
  /* 10431459 push 0 */
  push32((uint32_t)(0x0u));
  /* 1043145b push 0 */
  push32((uint32_t)(0x0u));
  /* 1043145d push 0 */
  push32((uint32_t)(0x0u));
  /* 1043145f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10431462 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10431465 push eax */
  push32((uint32_t)(EAX));
  /* 10431466 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1043146b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1043146e push ecx */
  push32((uint32_t)(ECX));
  /* 1043146f push 1 */
  push32((uint32_t)(0x1u));
  /* 10431471 call 0x1042dc10 */
  push32(0x10431476u); f_1042dc10();
  /* 10431476 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10431479 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1043147b jne 0x10431482 */
  if (!C.zf) goto L_10431482;
  /* 1043147d jmp 0x104315d2 */
  goto L_104315d2;
L_10431482:;
  /* 10431482 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10431485 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 1043148a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1043148d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10431490 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10431497 jmp 0x104314a2 */
  goto L_104314a2;
L_10431499:;
  /* 10431499 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1043149c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1043149f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_104314a2:;
  /* 104314a2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104314a9 jge 0x104314c0 */
  if ((C.sf==C.of)) goto L_104314c0;
  /* 104314ab mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104314ae mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 104314b2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 104314b5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104314b8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104314bb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 104314be jmp 0x10431499 */
  goto L_10431499;
L_104314c0:;
  /* 104314c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104314c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 104314c4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104314c7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104314ca push edx */
  push32((uint32_t)(EDX));
  /* 104314cb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 104314d0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104314d3 push eax */
  push32((uint32_t)(EAX));
  /* 104314d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 104314d6 call 0x10433e40 */
  push32(0x104314dbu); f_10433e40();
  /* 104314db add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104314de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104314e0 jne 0x104314e7 */
  if (!C.zf) goto L_104314e7;
  /* 104314e2 jmp 0x104315d2 */
  goto L_104315d2;
L_104314e7:;
  /* 104314e7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104314ea mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 104314ef cmp dword ptr [0x1044fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1044fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104314f6 jle 0x10431553 */
  if ((C.zf||C.sf!=C.of)) goto L_10431553;
  /* 104314f8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 104314fb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 104314fe jmp 0x10431509 */
  goto L_10431509;
L_10431500:;
  /* 10431500 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10431503 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10431506 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10431509:;
  /* 10431509 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1043150c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1043150e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10431510 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10431512 je 0x10431553 */
  if (C.zf) goto L_10431553;
  /* 10431514 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10431517 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10431519 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1043151c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1043151e je 0x10431553 */
  if (C.zf) goto L_10431553;
  /* 10431520 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10431523 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10431525 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10431527 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1043152a jmp 0x10431535 */
  goto L_10431535;
L_1043152c:;
  /* 1043152c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1043152f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10431532 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10431535:;
  /* 10431535 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10431538 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1043153a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1043153d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10431540 jg 0x10431551 */
  if ((!C.zf&&C.sf==C.of)) goto L_10431551;
  /* 10431542 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10431545 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10431548 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 1043154f jmp 0x1043152c */
  goto L_1043152c;
L_10431551:;
  /* 10431551 jmp 0x10431500 */
  goto L_10431500;
L_10431553:;
  /* 10431553 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10431556 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10431559 mov dword ptr [0x1044fc98], eax */
  w32((uint32_t)(0x1044fc98), (EAX));
  /* 1043155e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10431561 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10431564 mov dword ptr [0x1044fc9c], ecx */
  w32((uint32_t)(0x1044fc9c), (ECX));
  /* 1043156a cmp dword ptr [0x104517b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104517b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10431571 je 0x10431584 */
  if (C.zf) goto L_10431584;
  /* 10431573 push 2 */
  push32((uint32_t)(0x2u));
  /* 10431575 mov edx, dword ptr [0x104517b8] */
  EDX = (r32((uint32_t)(0x104517b8)));
  /* 1043157b push edx */
  push32((uint32_t)(EDX));
  /* 1043157c call 0x10426470 */
  push32(0x10431581u); f_10426470();
  /* 10431581 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10431584:;
  /* 10431584 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10431587 mov dword ptr [0x104517b8], eax */
  w32((uint32_t)(0x104517b8), (EAX));
  /* 1043158c cmp dword ptr [0x104517bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104517bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10431593 je 0x104315a6 */
  if (C.zf) goto L_104315a6;
  /* 10431595 push 2 */
  push32((uint32_t)(0x2u));
  /* 10431597 mov ecx, dword ptr [0x104517bc] */
  ECX = (r32((uint32_t)(0x104517bc)));
  /* 1043159d push ecx */
  push32((uint32_t)(ECX));
  /* 1043159e call 0x10426470 */
  push32(0x104315a3u); f_10426470();
  /* 104315a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104315a6:;
  /* 104315a6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104315a9 mov dword ptr [0x104517bc], edx */
  w32((uint32_t)(0x104517bc), (EDX));
  /* 104315af push 2 */
  push32((uint32_t)(0x2u));
  /* 104315b1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104315b4 push eax */
  push32((uint32_t)(EAX));
  /* 104315b5 call 0x10426470 */
  push32(0x104315bau); f_10426470();
  /* 104315ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104315bd push 2 */
  push32((uint32_t)(0x2u));
  /* 104315bf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104315c2 push ecx */
  push32((uint32_t)(ECX));
  /* 104315c3 call 0x10426470 */
  push32(0x104315c8u); f_10426470();
  /* 104315c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104315cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104315cd jmp 0x1043165c */
  goto L_1043165c;
L_104315d2:;
  /* 104315d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 104315d4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104315d7 push edx */
  push32((uint32_t)(EDX));
  /* 104315d8 call 0x10426470 */
  push32(0x104315ddu); f_10426470();
  /* 104315dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104315e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 104315e2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104315e5 push eax */
  push32((uint32_t)(EAX));
  /* 104315e6 call 0x10426470 */
  push32(0x104315ebu); f_10426470();
  /* 104315eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104315ee push 2 */
  push32((uint32_t)(0x2u));
  /* 104315f0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104315f3 push ecx */
  push32((uint32_t)(ECX));
  /* 104315f4 call 0x10426470 */
  push32(0x104315f9u); f_10426470();
  /* 104315f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104315fc push 2 */
  push32((uint32_t)(0x2u));
  /* 104315fe mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10431601 push edx */
  push32((uint32_t)(EDX));
  /* 10431602 call 0x10426470 */
  push32(0x10431607u); f_10426470();
  /* 10431607 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043160a mov eax, 1 */
  EAX = (0x1u);
  /* 1043160f jmp 0x1043165c */
  goto L_1043165c;
L_10431611:;
  /* 10431611 mov dword ptr [0x1044fc98], 0x1044fca2 */
  w32((uint32_t)(0x1044fc98), (0x1044fca2u));
  /* 1043161b mov dword ptr [0x1044fc9c], 0x1044fca2 */
  w32((uint32_t)(0x1044fc9c), (0x1044fca2u));
  /* 10431625 push 2 */
  push32((uint32_t)(0x2u));
  /* 10431627 mov eax, dword ptr [0x104517b8] */
  EAX = (r32((uint32_t)(0x104517b8)));
  /* 1043162c push eax */
  push32((uint32_t)(EAX));
  /* 1043162d call 0x10426470 */
  push32(0x10431632u); f_10426470();
  /* 10431632 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10431635 push 2 */
  push32((uint32_t)(0x2u));
  /* 10431637 mov ecx, dword ptr [0x104517bc] */
  ECX = (r32((uint32_t)(0x104517bc)));
  /* 1043163d push ecx */
  push32((uint32_t)(ECX));
  /* 1043163e call 0x10426470 */
  push32(0x10431643u); f_10426470();
  /* 10431643 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10431646 mov dword ptr [0x104517b8], 0 */
  w32((uint32_t)(0x104517b8), (0x0u));
  /* 10431650 mov dword ptr [0x104517bc], 0 */
  w32((uint32_t)(0x104517bc), (0x0u));
  /* 1043165a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1043165c:;
  /* 1043165c mov esp, ebp */
  ESP = (EBP);
  /* 1043165e pop ebp */
  EBP = (pop32());
  /* 1043165f ret  */
  ESPCHK(0x104312c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011660 @ 0x10431660 (7 bytes, 5 insns) */
void f_10431660(void) {
  FTRACE(0x10431660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10431660 push ebp */
  push32((uint32_t)(EBP));
  /* 10431661 mov ebp, esp */
  EBP = (ESP);
  /* 10431663 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10431665 pop ebp */
  EBP = (pop32());
  /* 10431666 ret  */
  ESPCHK(0x10431660u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x10431670 (129 bytes, 56 insns) */
void f_10431670(void) {
  FTRACE(0x10431670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10431670 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10431674 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10431678 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1043167e jne 0x104316bc */
  if (!C.zf) goto L_104316bc;
L_10431680:;
  /* 10431680 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10431682 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10431684 jne 0x104316b4 */
  if (!C.zf) goto L_104316b4;
  /* 10431686 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10431688 je 0x104316b0 */
  if (C.zf) goto L_104316b0;
  /* 1043168a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1043168d jne 0x104316b4 */
  if (!C.zf) goto L_104316b4;
  /* 1043168f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10431691 je 0x104316b0 */
  if (C.zf) goto L_104316b0;
  /* 10431693 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10431696 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10431699 jne 0x104316b4 */
  if (!C.zf) goto L_104316b4;
  /* 1043169b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1043169d je 0x104316b0 */
  if (C.zf) goto L_104316b0;
  /* 1043169f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104316a2 jne 0x104316b4 */
  if (!C.zf) goto L_104316b4;
  /* 104316a4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104316a7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104316aa or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 104316ac jne 0x10431680 */
  if (!C.zf) goto L_10431680;
  /* 104316ae mov edi, edi */
  EDI = (EDI);
L_104316b0:;
  /* 104316b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104316b2 ret  */
  ESPCHK(0x10431670u, _esp0);
  ESP += 4; return;
  /* 104316b3 nop  */
  /* nop */
L_104316b4:;
  /* 104316b4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104316b6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 104316b8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 104316b9 ret  */
  ESPCHK(0x10431670u, _esp0);
  ESP += 4; return;
  /* 104316ba mov edi, edi */
  EDI = (EDI);
L_104316bc:;
  /* 104316bc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 104316c2 je 0x104316d8 */
  if (C.zf) goto L_104316d8;
  /* 104316c4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104316c6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 104316c7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104316c9 jne 0x104316b4 */
  if (!C.zf) goto L_104316b4;
  /* 104316cb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 104316cc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 104316ce je 0x104316b0 */
  if (C.zf) goto L_104316b0;
  /* 104316d0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 104316d6 je 0x10431680 */
  if (C.zf) goto L_10431680;
L_104316d8:;
  /* 104316d8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 104316db add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104316de cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104316e0 jne 0x104316b4 */
  if (!C.zf) goto L_104316b4;
  /* 104316e2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 104316e4 je 0x104316b0 */
  if (C.zf) goto L_104316b0;
  /* 104316e6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104316e9 jne 0x104316b4 */
  if (!C.zf) goto L_104316b4;
  /* 104316eb or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 104316ed je 0x104316b0 */
  if (C.zf) goto L_104316b0;
  /* 104316ef add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104316f2 jmp 0x10431680 */
  goto L_10431680;
}

/* FUN_10011700 @ 0x10431700 (62 bytes, 35 insns) */
void f_10431700(void) {
  FTRACE(0x10431700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10431700 push ebp */
  push32((uint32_t)(EBP));
  /* 10431701 mov ebp, esp */
  EBP = (ESP);
  /* 10431703 push esi */
  push32((uint32_t)(ESI));
  /* 10431704 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10431706 push eax */
  push32((uint32_t)(EAX));
  /* 10431707 push eax */
  push32((uint32_t)(EAX));
  /* 10431708 push eax */
  push32((uint32_t)(EAX));
  /* 10431709 push eax */
  push32((uint32_t)(EAX));
  /* 1043170a push eax */
  push32((uint32_t)(EAX));
  /* 1043170b push eax */
  push32((uint32_t)(EAX));
  /* 1043170c push eax */
  push32((uint32_t)(EAX));
  /* 1043170d push eax */
  push32((uint32_t)(EAX));
  /* 1043170e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10431711 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10431714:;
  /* 10431714 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10431716 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10431718 je 0x10431721 */
  if (C.zf) goto L_10431721;
  /* 1043171a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1043171b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1043171b");
  /* 1043171f jmp 0x10431714 */
  goto L_10431714;
L_10431721:;
  /* 10431721 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10431724 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10431727 nop  */
  /* nop */
L_10431728:;
  /* 10431728 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10431729 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1043172b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1043172d je 0x10431736 */
  if (C.zf) goto L_10431736;
  /* 1043172f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10431730 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10431730");
  /* 10431734 jae 0x10431728 */
  if (!C.cf) goto L_10431728;
L_10431736:;
  /* 10431736 mov eax, ecx */
  EAX = (ECX);
  /* 10431738 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043173b pop esi */
  ESI = (pop32());
  /* 1043173c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1043173d ret  */
  ESPCHK(0x10431700u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x10431740 (56 bytes, 31 insns) */
void f_10431740(void) {
  FTRACE(0x10431740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10431740 push ebp */
  push32((uint32_t)(EBP));
  /* 10431741 mov ebp, esp */
  EBP = (ESP);
  /* 10431743 push edi */
  push32((uint32_t)(EDI));
  /* 10431744 push esi */
  push32((uint32_t)(ESI));
  /* 10431745 push ebx */
  push32((uint32_t)(EBX));
  /* 10431746 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10431749 jecxz 0x10431771 */
  x86_unimpl("jecxz @ 0x10431749");
  /* 1043174b mov ebx, ecx */
  EBX = (ECX);
  /* 1043174d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10431750 mov esi, edi */
  ESI = (EDI);
  /* 10431752 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10431754 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10431756 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10431758 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1043175a mov edi, esi */
  EDI = (ESI);
  /* 1043175c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1043175f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 10431761 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 10431764 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10431766 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10431769 ja 0x1043176f */
  if ((!C.cf&&!C.zf)) goto L_1043176f;
  /* 1043176b je 0x10431771 */
  if (C.zf) goto L_10431771;
  /* 1043176d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1043176e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1043176f:;
  /* 1043176f not ecx */
  ECX = (~(ECX));
L_10431771:;
  /* 10431771 mov eax, ecx */
  EAX = (ECX);
  /* 10431773 pop ebx */
  EBX = (pop32());
  /* 10431774 pop esi */
  ESI = (pop32());
  /* 10431775 pop edi */
  EDI = (pop32());
  /* 10431776 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10431777 ret  */
  ESPCHK(0x10431740u, _esp0);
  ESP += 4; return;
}

/* FUN_10011780 @ 0x10431780 (58 bytes, 32 insns) */
void f_10431780(void) {
  FTRACE(0x10431780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10431780 push ebp */
  push32((uint32_t)(EBP));
  /* 10431781 mov ebp, esp */
  EBP = (ESP);
  /* 10431783 push esi */
  push32((uint32_t)(ESI));
  /* 10431784 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10431786 push eax */
  push32((uint32_t)(EAX));
  /* 10431787 push eax */
  push32((uint32_t)(EAX));
  /* 10431788 push eax */
  push32((uint32_t)(EAX));
  /* 10431789 push eax */
  push32((uint32_t)(EAX));
  /* 1043178a push eax */
  push32((uint32_t)(EAX));
  /* 1043178b push eax */
  push32((uint32_t)(EAX));
  /* 1043178c push eax */
  push32((uint32_t)(EAX));
  /* 1043178d push eax */
  push32((uint32_t)(EAX));
  /* 1043178e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10431791 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10431794:;
  /* 10431794 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10431796 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10431798 je 0x104317a1 */
  if (C.zf) goto L_104317a1;
  /* 1043179a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1043179b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1043179b");
  /* 1043179f jmp 0x10431794 */
  goto L_10431794;
L_104317a1:;
  /* 104317a1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_104317a4:;
  /* 104317a4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104317a6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 104317a8 je 0x104317b4 */
  if (C.zf) goto L_104317b4;
  /* 104317aa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 104317ab bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x104317ab");
  /* 104317af jae 0x104317a4 */
  if (!C.cf) goto L_104317a4;
  /* 104317b1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_104317b4:;
  /* 104317b4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104317b7 pop esi */
  ESI = (pop32());
  /* 104317b8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104317b9 ret  */
  ESPCHK(0x10431780u, _esp0);
  ESP += 4; return;
}

/* FUN_100117c0 @ 0x104317c0 (512 bytes, 147 insns) */
void f_104317c0(void) {
  FTRACE(0x104317c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104317c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104317c1 mov ebp, esp */
  EBP = (ESP);
  /* 104317c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104317c6 cmp dword ptr [0x10451804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10451804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104317cd jne 0x104317f2 */
  if (!C.zf) goto L_104317f2;
  /* 104317cf call 0x10432290 */
  push32(0x104317d4u); f_10432290();
  /* 104317d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104317d6 je 0x104317e2 */
  if (C.zf) goto L_104317e2;
  /* 104317d8 mov eax, dword ptr [0x1045429c] */
  EAX = (r32((uint32_t)(0x1045429c)));
  /* 104317dd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104317e0 jmp 0x104317e9 */
  goto L_104317e9;
L_104317e2:;
  /* 104317e2 mov dword ptr [ebp - 8], 0x104322e0 */
  w32((uint32_t)(EBP + -0x8), (0x104322e0u));
L_104317e9:;
  /* 104317e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104317ec mov dword ptr [0x10451804], ecx */
  w32((uint32_t)(0x10451804), (ECX));
L_104317f2:;
  /* 104317f2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104317f6 jne 0x10431802 */
  if (!C.zf) goto L_10431802;
  /* 104317f8 call 0x104320e0 */
  push32(0x104317fdu); f_104320e0();
  /* 104317fd jmp 0x104318ce */
  goto L_104318ce;
L_10431802:;
  /* 10431802 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10431805 mov dword ptr [0x104517f4], edx */
  w32((uint32_t)(0x104517f4), (EDX));
  /* 1043180b cmp dword ptr [0x104517f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104517f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10431812 je 0x10431834 */
  if (C.zf) goto L_10431834;
  /* 10431814 mov eax, dword ptr [0x104517f4] */
  EAX = (r32((uint32_t)(0x104517f4)));
  /* 10431819 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1043181c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1043181e je 0x10431834 */
  if (C.zf) goto L_10431834;
  /* 10431820 push 0x104517f4 */
  push32((uint32_t)(0x104517f4u));
  /* 10431825 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10431827 push 0x10450a90 */
  push32((uint32_t)(0x10450a90u));
  /* 1043182c call 0x104319c0 */
  push32(0x10431831u); f_104319c0();
  /* 10431831 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10431834:;
  /* 10431834 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10431837 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1043183a mov dword ptr [0x104517f8], edx */
  w32((uint32_t)(0x104517f8), (EDX));
  /* 10431840 cmp dword ptr [0x104517f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104517f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10431847 je 0x10431869 */
  if (C.zf) goto L_10431869;
  /* 10431849 mov eax, dword ptr [0x104517f8] */
  EAX = (r32((uint32_t)(0x104517f8)));
  /* 1043184e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10431851 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10431853 je 0x10431869 */
  if (C.zf) goto L_10431869;
  /* 10431855 push 0x104517f8 */
  push32((uint32_t)(0x104517f8u));
  /* 1043185a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1043185c push 0x104509d8 */
  push32((uint32_t)(0x104509d8u));
  /* 10431861 call 0x104319c0 */
  push32(0x10431866u); f_104319c0();
  /* 10431866 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10431869:;
  /* 10431869 mov dword ptr [0x104517fc], 0 */
  w32((uint32_t)(0x104517fc), (0x0u));
  /* 10431873 cmp dword ptr [0x104517f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104517f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043187a je 0x104318ad */
  if (C.zf) goto L_104318ad;
  /* 1043187c mov edx, dword ptr [0x104517f4] */
  EDX = (r32((uint32_t)(0x104517f4)));
  /* 10431882 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10431885 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10431887 je 0x104318ad */
  if (C.zf) goto L_104318ad;
  /* 10431889 cmp dword ptr [0x104517f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104517f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10431890 je 0x104318a6 */
  if (C.zf) goto L_104318a6;
  /* 10431892 mov ecx, dword ptr [0x104517f8] */
  ECX = (r32((uint32_t)(0x104517f8)));
  /* 10431898 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1043189b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1043189d je 0x104318a6 */
  if (C.zf) goto L_104318a6;
  /* 1043189f call 0x10431a50 */
  push32(0x104318a4u); f_10431a50();
  /* 104318a4 jmp 0x104318ab */
  goto L_104318ab;
L_104318a6:;
  /* 104318a6 call 0x10431e40 */
  push32(0x104318abu); f_10431e40();
L_104318ab:;
  /* 104318ab jmp 0x104318ce */
  goto L_104318ce;
L_104318ad:;
  /* 104318ad cmp dword ptr [0x104517f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104517f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104318b4 je 0x104318c9 */
  if (C.zf) goto L_104318c9;
  /* 104318b6 mov eax, dword ptr [0x104517f8] */
  EAX = (r32((uint32_t)(0x104517f8)));
  /* 104318bb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104318be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104318c0 je 0x104318c9 */
  if (C.zf) goto L_104318c9;
  /* 104318c2 call 0x10431fe0 */
  push32(0x104318c7u); f_10431fe0();
  /* 104318c7 jmp 0x104318ce */
  goto L_104318ce;
L_104318c9:;
  /* 104318c9 call 0x104320e0 */
  push32(0x104318ceu); f_104320e0();
L_104318ce:;
  /* 104318ce cmp dword ptr [0x104517fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104517fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104318d5 jne 0x104318de */
  if (!C.zf) goto L_104318de;
  /* 104318d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104318d9 jmp 0x104319bc */
  goto L_104319bc;
L_104318de:;
  /* 104318de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104318e1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104318e7 push edx */
  push32((uint32_t)(EDX));
  /* 104318e8 call 0x10432110 */
  push32(0x104318edu); f_10432110();
  /* 104318ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104318f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104318f3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104318f7 je 0x1043190c */
  if (C.zf) goto L_1043190c;
  /* 104318f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104318fc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10431901 push eax */
  push32((uint32_t)(EAX));
  /* 10431902 call dword ptr [0x104542a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542a0))), 0x10431908u);
  /* 10431908 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1043190a jne 0x10431913 */
  if (!C.zf) goto L_10431913;
L_1043190c:;
  /* 1043190c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1043190e jmp 0x104319bc */
  goto L_104319bc;
L_10431913:;
  /* 10431913 push 1 */
  push32((uint32_t)(0x1u));
  /* 10431915 mov ecx, dword ptr [0x104517e4] */
  ECX = (r32((uint32_t)(0x104517e4)));
  /* 1043191b push ecx */
  push32((uint32_t)(ECX));
  /* 1043191c call dword ptr [0x104542b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542b0))), 0x10431922u);
  /* 10431922 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10431924 jne 0x1043192d */
  if (!C.zf) goto L_1043192d;
  /* 10431926 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10431928 jmp 0x104319bc */
  goto L_104319bc;
L_1043192d:;
  /* 1043192d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10431931 je 0x10431958 */
  if (C.zf) goto L_10431958;
  /* 10431933 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10431936 mov ax, word ptr [0x104517e4] */
  AX = (r16((uint32_t)(0x104517e4)));
  /* 1043193c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1043193f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10431942 mov dx, word ptr [0x10451800] */
  DX = (r16((uint32_t)(0x10451800)));
  /* 10431949 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 1043194d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10431950 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 10431954 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_10431958:;
  /* 10431958 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043195c je 0x104319b7 */
  if (C.zf) goto L_104319b7;
  /* 1043195e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10431960 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10431963 push edx */
  push32((uint32_t)(EDX));
  /* 10431964 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 10431969 mov eax, dword ptr [0x104517e4] */
  EAX = (r32((uint32_t)(0x104517e4)));
  /* 1043196e push eax */
  push32((uint32_t)(EAX));
  /* 1043196f call dword ptr [0x10451804] */
  call_ind((uint32_t)(r32((uint32_t)(0x10451804))), 0x10431975u);
  /* 10431975 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10431977 jne 0x1043197d */
  if (!C.zf) goto L_1043197d;
  /* 10431979 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1043197b jmp 0x104319bc */
  goto L_104319bc;
L_1043197d:;
  /* 1043197d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1043197f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10431982 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10431985 push ecx */
  push32((uint32_t)(ECX));
  /* 10431986 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 1043198b mov edx, dword ptr [0x10451800] */
  EDX = (r32((uint32_t)(0x10451800)));
  /* 10431991 push edx */
  push32((uint32_t)(EDX));
  /* 10431992 call dword ptr [0x10451804] */
  call_ind((uint32_t)(r32((uint32_t)(0x10451804))), 0x10431998u);
  /* 10431998 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1043199a jne 0x104319a0 */
  if (!C.zf) goto L_104319a0;
  /* 1043199c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1043199e jmp 0x104319bc */
  goto L_104319bc;
L_104319a0:;
  /* 104319a0 push 0xa */
  push32((uint32_t)(0xau));
  /* 104319a2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104319a5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104319aa push eax */
  push32((uint32_t)(EAX));
  /* 104319ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104319ae push ecx */
  push32((uint32_t)(ECX));
  /* 104319af call 0x10428520 */
  push32(0x104319b4u); f_10428520();
  /* 104319b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104319b7:;
  /* 104319b7 mov eax, 1 */
  EAX = (0x1u);
L_104319bc:;
  /* 104319bc mov esp, ebp */
  ESP = (EBP);
  /* 104319be pop ebp */
  EBP = (pop32());
  /* 104319bf ret  */
  ESPCHK(0x104317c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100119c0 @ 0x104319c0 (130 bytes, 47 insns) */
void f_104319c0(void) {
  FTRACE(0x104319c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104319c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104319c1 mov ebp, esp */
  EBP = (ESP);
  /* 104319c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104319c6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 104319cd mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_104319d4:;
  /* 104319d4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104319d7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104319da jg 0x10431a3e */
  if ((!C.zf&&C.sf==C.of)) goto L_10431a3e;
  /* 104319dc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104319e0 je 0x10431a3e */
  if (C.zf) goto L_10431a3e;
  /* 104319e2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104319e5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104319e8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104319e9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104319eb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 104319ed mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104319f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104319f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104319f6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 104319f9 push eax */
  push32((uint32_t)(EAX));
  /* 104319fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104319fd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104319ff push edx */
  push32((uint32_t)(EDX));
  /* 10431a00 call 0x104340b0 */
  push32(0x10431a05u); f_104340b0();
  /* 10431a05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10431a08 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10431a0b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10431a0f jne 0x10431a22 */
  if (!C.zf) goto L_10431a22;
  /* 10431a11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10431a14 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10431a17 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 10431a1b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10431a1e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10431a20 jmp 0x10431a3c */
  goto L_10431a3c;
L_10431a22:;
  /* 10431a22 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10431a26 jge 0x10431a33 */
  if ((C.sf==C.of)) goto L_10431a33;
  /* 10431a28 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10431a2b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10431a2e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10431a31 jmp 0x10431a3c */
  goto L_10431a3c;
L_10431a33:;
  /* 10431a33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10431a36 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10431a39 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10431a3c:;
  /* 10431a3c jmp 0x104319d4 */
  goto L_104319d4;
L_10431a3e:;
  /* 10431a3e mov esp, ebp */
  ESP = (EBP);
  /* 10431a40 pop ebp */
  EBP = (pop32());
  /* 10431a41 ret  */
  ESPCHK(0x104319c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a50 @ 0x10431a50 (186 bytes, 50 insns) */
void f_10431a50(void) {
  FTRACE(0x10431a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10431a50 push ebp */
  push32((uint32_t)(EBP));
  /* 10431a51 mov ebp, esp */
  EBP = (ESP);
  /* 10431a53 push ecx */
  push32((uint32_t)(ECX));
  /* 10431a54 mov eax, dword ptr [0x104517f4] */
  EAX = (r32((uint32_t)(0x104517f4)));
  /* 10431a59 push eax */
  push32((uint32_t)(EAX));
  /* 10431a5a call 0x10428810 */
  push32(0x10431a5fu); f_10428810();
  /* 10431a5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10431a62 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10431a64 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10431a67 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10431a6a mov dword ptr [0x104517f0], ecx */
  w32((uint32_t)(0x104517f0), (ECX));
  /* 10431a70 mov edx, dword ptr [0x104517f8] */
  EDX = (r32((uint32_t)(0x104517f8)));
  /* 10431a76 push edx */
  push32((uint32_t)(EDX));
  /* 10431a77 call 0x10428810 */
  push32(0x10431a7cu); f_10428810();
  /* 10431a7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10431a7f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10431a81 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10431a84 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10431a87 mov dword ptr [0x104517e8], ecx */
  w32((uint32_t)(0x104517e8), (ECX));
  /* 10431a8d mov dword ptr [0x104517e4], 0 */
  w32((uint32_t)(0x104517e4), (0x0u));
  /* 10431a97 cmp dword ptr [0x104517f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104517f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10431a9e je 0x10431aa9 */
  if (C.zf) goto L_10431aa9;
  /* 10431aa0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10431aa7 jmp 0x10431abb */
  goto L_10431abb;
L_10431aa9:;
  /* 10431aa9 mov edx, dword ptr [0x104517f4] */
  EDX = (r32((uint32_t)(0x104517f4)));
  /* 10431aaf push edx */
  push32((uint32_t)(EDX));
  /* 10431ab0 call 0x104324f0 */
  push32(0x10431ab5u); f_104324f0();
  /* 10431ab5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10431ab8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10431abb:;
  /* 10431abb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10431abe mov dword ptr [0x104517ec], eax */
  w32((uint32_t)(0x104517ec), (EAX));
  /* 10431ac3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10431ac5 push 0x10431b10 */
  push32((uint32_t)(0x10431b10u));
  /* 10431aca call dword ptr [0x104542a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542a4))), 0x10431ad0u);
  /* 10431ad0 mov ecx, dword ptr [0x104517fc] */
  ECX = (r32((uint32_t)(0x104517fc)));
  /* 10431ad6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10431adc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10431ade je 0x10431afc */
  if (C.zf) goto L_10431afc;
  /* 10431ae0 mov edx, dword ptr [0x104517fc] */
  EDX = (r32((uint32_t)(0x104517fc)));
  /* 10431ae6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 10431aec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10431aee je 0x10431afc */
  if (C.zf) goto L_10431afc;
  /* 10431af0 mov eax, dword ptr [0x104517fc] */
  EAX = (r32((uint32_t)(0x104517fc)));
  /* 10431af5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 10431af8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10431afa jne 0x10431b06 */
  if (!C.zf) goto L_10431b06;
L_10431afc:;
  /* 10431afc mov dword ptr [0x104517fc], 0 */
  w32((uint32_t)(0x104517fc), (0x0u));
L_10431b06:;
  /* 10431b06 mov esp, ebp */
  ESP = (EBP);
  /* 10431b08 pop ebp */
  EBP = (pop32());
  /* 10431b09 ret  */
  ESPCHK(0x10431a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b10 @ 0x10431b10 (804 bytes, 220 insns) */
void f_10431b10(void) {
  FTRACE(0x10431b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10431b10 push ebp */
  push32((uint32_t)(EBP));
  /* 10431b11 mov ebp, esp */
  EBP = (ESP);
  /* 10431b13 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10431b16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10431b19 push eax */
  push32((uint32_t)(EAX));
  /* 10431b1a call 0x10432470 */
  push32(0x10431b1fu); f_10432470();
  /* 10431b1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10431b22 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10431b25 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10431b27 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10431b2a push ecx */
  push32((uint32_t)(ECX));
  /* 10431b2b mov edx, dword ptr [0x104517e8] */
  EDX = (r32((uint32_t)(0x104517e8)));
  /* 10431b31 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10431b33 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10431b35 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10431b3b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10431b41 push edx */
  push32((uint32_t)(EDX));
  /* 10431b42 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10431b45 push eax */
  push32((uint32_t)(EAX));
  /* 10431b46 call dword ptr [0x10451804] */
  call_ind((uint32_t)(r32((uint32_t)(0x10451804))), 0x10431b4cu);
  /* 10431b4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10431b4e jne 0x10431b64 */
  if (!C.zf) goto L_10431b64;
  /* 10431b50 mov dword ptr [0x104517fc], 0 */
  w32((uint32_t)(0x104517fc), (0x0u));
  /* 10431b5a mov eax, 1 */
  EAX = (0x1u);
  /* 10431b5f jmp 0x10431e2e */
  goto L_10431e2e;
L_10431b64:;
  /* 10431b64 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10431b67 push ecx */
  push32((uint32_t)(ECX));
  /* 10431b68 mov edx, dword ptr [0x104517f8] */
  EDX = (r32((uint32_t)(0x104517f8)));
  /* 10431b6e push edx */
  push32((uint32_t)(EDX));
  /* 10431b6f call 0x104340b0 */
  push32(0x10431b74u); f_104340b0();
  /* 10431b74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10431b77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10431b79 jne 0x10431c9f */
  if (!C.zf) goto L_10431c9f;
  /* 10431b7f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10431b81 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10431b84 push eax */
  push32((uint32_t)(EAX));
  /* 10431b85 mov ecx, dword ptr [0x104517f0] */
  ECX = (r32((uint32_t)(0x104517f0)));
  /* 10431b8b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10431b8d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10431b8f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10431b95 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10431b9b push ecx */
  push32((uint32_t)(ECX));
  /* 10431b9c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10431b9f push edx */
  push32((uint32_t)(EDX));
  /* 10431ba0 call dword ptr [0x10451804] */
  call_ind((uint32_t)(r32((uint32_t)(0x10451804))), 0x10431ba6u);
  /* 10431ba6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10431ba8 jne 0x10431bbe */
  if (!C.zf) goto L_10431bbe;
  /* 10431baa mov dword ptr [0x104517fc], 0 */
  w32((uint32_t)(0x104517fc), (0x0u));
  /* 10431bb4 mov eax, 1 */
  EAX = (0x1u);
  /* 10431bb9 jmp 0x10431e2e */
  goto L_10431e2e;
L_10431bbe:;
  /* 10431bbe lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10431bc1 push eax */
  push32((uint32_t)(EAX));
  /* 10431bc2 mov ecx, dword ptr [0x104517f4] */
  ECX = (r32((uint32_t)(0x104517f4)));
  /* 10431bc8 push ecx */
  push32((uint32_t)(ECX));
  /* 10431bc9 call 0x104340b0 */
  push32(0x10431bceu); f_104340b0();
  /* 10431bce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10431bd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10431bd3 jne 0x10431c00 */
  if (!C.zf) goto L_10431c00;
  /* 10431bd5 mov edx, dword ptr [0x104517fc] */
  EDX = (r32((uint32_t)(0x104517fc)));
  /* 10431bdb or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 10431be1 mov dword ptr [0x104517fc], edx */
  w32((uint32_t)(0x104517fc), (EDX));
  /* 10431be7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10431bea mov dword ptr [0x10451800], eax */
  w32((uint32_t)(0x10451800), (EAX));
  /* 10431bef mov ecx, dword ptr [0x10451800] */
  ECX = (r32((uint32_t)(0x10451800)));
  /* 10431bf5 mov dword ptr [0x104517e4], ecx */
  w32((uint32_t)(0x104517e4), (ECX));
  /* 10431bfb jmp 0x10431c9f */
  goto L_10431c9f;
L_10431c00:;
  /* 10431c00 mov edx, dword ptr [0x104517fc] */
  EDX = (r32((uint32_t)(0x104517fc)));
  /* 10431c06 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10431c09 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10431c0b jne 0x10431c9f */
  if (!C.zf) goto L_10431c9f;
  /* 10431c11 cmp dword ptr [0x104517ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104517ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10431c18 je 0x10431c6d */
  if (C.zf) goto L_10431c6d;
  /* 10431c1a mov eax, dword ptr [0x104517ec] */
  EAX = (r32((uint32_t)(0x104517ec)));
  /* 10431c1f push eax */
  push32((uint32_t)(EAX));
  /* 10431c20 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10431c23 push ecx */
  push32((uint32_t)(ECX));
  /* 10431c24 mov edx, dword ptr [0x104517f4] */
  EDX = (r32((uint32_t)(0x104517f4)));
  /* 10431c2a push edx */
  push32((uint32_t)(EDX));
  /* 10431c2b call 0x10434180 */
  push32(0x10431c30u); f_10434180();
  /* 10431c30 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10431c33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10431c35 jne 0x10431c6d */
  if (!C.zf) goto L_10431c6d;
  /* 10431c37 mov eax, dword ptr [0x104517fc] */
  EAX = (r32((uint32_t)(0x104517fc)));
  /* 10431c3c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 10431c3e mov dword ptr [0x104517fc], eax */
  w32((uint32_t)(0x104517fc), (EAX));
  /* 10431c43 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10431c46 mov dword ptr [0x10451800], ecx */
  w32((uint32_t)(0x10451800), (ECX));
  /* 10431c4c mov edx, dword ptr [0x104517f4] */
  EDX = (r32((uint32_t)(0x104517f4)));
  /* 10431c52 push edx */
  push32((uint32_t)(EDX));
  /* 10431c53 call 0x10428810 */
  push32(0x10431c58u); f_10428810();
  /* 10431c58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10431c5b cmp eax, dword ptr [0x104517ec] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x104517ec))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10431c61 jne 0x10431c6b */
  if (!C.zf) goto L_10431c6b;
  /* 10431c63 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10431c66 mov dword ptr [0x104517e4], eax */
  w32((uint32_t)(0x104517e4), (EAX));
L_10431c6b:;
  /* 10431c6b jmp 0x10431c9f */
  goto L_10431c9f;
L_10431c6d:;
  /* 10431c6d mov ecx, dword ptr [0x104517fc] */
  ECX = (r32((uint32_t)(0x104517fc)));
  /* 10431c73 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10431c76 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10431c78 jne 0x10431c9f */
  if (!C.zf) goto L_10431c9f;
  /* 10431c7a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10431c7d push edx */
  push32((uint32_t)(EDX));
  /* 10431c7e call 0x104321b0 */
  push32(0x10431c83u); f_104321b0();
  /* 10431c83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10431c86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10431c88 je 0x10431c9f */
  if (C.zf) goto L_10431c9f;
  /* 10431c8a mov eax, dword ptr [0x104517fc] */
  EAX = (r32((uint32_t)(0x104517fc)));
  /* 10431c8f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10431c91 mov dword ptr [0x104517fc], eax */
  w32((uint32_t)(0x104517fc), (EAX));
  /* 10431c96 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10431c99 mov dword ptr [0x10451800], ecx */
  w32((uint32_t)(0x10451800), (ECX));
L_10431c9f:;
  /* 10431c9f mov edx, dword ptr [0x104517fc] */
  EDX = (r32((uint32_t)(0x104517fc)));
  /* 10431ca5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 10431cab cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10431cb1 je 0x10431e21 */
  if (C.zf) goto L_10431e21;
  /* 10431cb7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10431cb9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10431cbc push eax */
  push32((uint32_t)(EAX));
  /* 10431cbd mov ecx, dword ptr [0x104517f0] */
  ECX = (r32((uint32_t)(0x104517f0)));
  /* 10431cc3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10431cc5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10431cc7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10431ccd add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10431cd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10431cd4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10431cd7 push edx */
  push32((uint32_t)(EDX));
  /* 10431cd8 call dword ptr [0x10451804] */
  call_ind((uint32_t)(r32((uint32_t)(0x10451804))), 0x10431cdeu);
  /* 10431cde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10431ce0 jne 0x10431cf6 */
  if (!C.zf) goto L_10431cf6;
  /* 10431ce2 mov dword ptr [0x104517fc], 0 */
  w32((uint32_t)(0x104517fc), (0x0u));
  /* 10431cec mov eax, 1 */
  EAX = (0x1u);
  /* 10431cf1 jmp 0x10431e2e */
  goto L_10431e2e;
L_10431cf6:;
  /* 10431cf6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10431cf9 push eax */
  push32((uint32_t)(EAX));
  /* 10431cfa mov ecx, dword ptr [0x104517f4] */
  ECX = (r32((uint32_t)(0x104517f4)));
  /* 10431d00 push ecx */
  push32((uint32_t)(ECX));
  /* 10431d01 call 0x104340b0 */
  push32(0x10431d06u); f_104340b0();
  /* 10431d06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10431d09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10431d0b jne 0x10431dc0 */
  if (!C.zf) goto L_10431dc0;
  /* 10431d11 mov edx, dword ptr [0x104517fc] */
  EDX = (r32((uint32_t)(0x104517fc)));
  /* 10431d17 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10431d1a mov dword ptr [0x104517fc], edx */
  w32((uint32_t)(0x104517fc), (EDX));
  /* 10431d20 cmp dword ptr [0x104517f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104517f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10431d27 je 0x10431d4a */
  if (C.zf) goto L_10431d4a;
  /* 10431d29 mov eax, dword ptr [0x104517fc] */
  EAX = (r32((uint32_t)(0x104517fc)));
  /* 10431d2e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10431d31 mov dword ptr [0x104517fc], eax */
  w32((uint32_t)(0x104517fc), (EAX));
  /* 10431d36 cmp dword ptr [0x104517e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104517e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10431d3d jne 0x10431d48 */
  if (!C.zf) goto L_10431d48;
  /* 10431d3f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10431d42 mov dword ptr [0x104517e4], ecx */
  w32((uint32_t)(0x104517e4), (ECX));
L_10431d48:;
  /* 10431d48 jmp 0x10431dbe */
  goto L_10431dbe;
L_10431d4a:;
  /* 10431d4a cmp dword ptr [0x104517ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104517ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10431d51 je 0x10431d9f */
  if (C.zf) goto L_10431d9f;
  /* 10431d53 mov edx, dword ptr [0x104517f4] */
  EDX = (r32((uint32_t)(0x104517f4)));
  /* 10431d59 push edx */
  push32((uint32_t)(EDX));
  /* 10431d5a call 0x10428810 */
  push32(0x10431d5fu); f_10428810();
  /* 10431d5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10431d62 cmp eax, dword ptr [0x104517ec] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x104517ec))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10431d68 jne 0x10431d9f */
  if (!C.zf) goto L_10431d9f;
  /* 10431d6a push 1 */
  push32((uint32_t)(0x1u));
  /* 10431d6c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10431d6f push eax */
  push32((uint32_t)(EAX));
  /* 10431d70 call 0x10432200 */
  push32(0x10431d75u); f_10432200();
  /* 10431d75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10431d78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10431d7a je 0x10431d9d */
  if (C.zf) goto L_10431d9d;
  /* 10431d7c mov ecx, dword ptr [0x104517fc] */
  ECX = (r32((uint32_t)(0x104517fc)));
  /* 10431d82 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10431d85 mov dword ptr [0x104517fc], ecx */
  w32((uint32_t)(0x104517fc), (ECX));
  /* 10431d8b cmp dword ptr [0x104517e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104517e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10431d92 jne 0x10431d9d */
  if (!C.zf) goto L_10431d9d;
  /* 10431d94 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10431d97 mov dword ptr [0x104517e4], edx */
  w32((uint32_t)(0x104517e4), (EDX));
L_10431d9d:;
  /* 10431d9d jmp 0x10431dbe */
  goto L_10431dbe;
L_10431d9f:;
  /* 10431d9f mov eax, dword ptr [0x104517fc] */
  EAX = (r32((uint32_t)(0x104517fc)));
  /* 10431da4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10431da7 mov dword ptr [0x104517fc], eax */
  w32((uint32_t)(0x104517fc), (EAX));
  /* 10431dac cmp dword ptr [0x104517e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104517e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10431db3 jne 0x10431dbe */
  if (!C.zf) goto L_10431dbe;
  /* 10431db5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10431db8 mov dword ptr [0x104517e4], ecx */
  w32((uint32_t)(0x104517e4), (ECX));
L_10431dbe:;
  /* 10431dbe jmp 0x10431e21 */
  goto L_10431e21;
L_10431dc0:;
  /* 10431dc0 cmp dword ptr [0x104517f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104517f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10431dc7 jne 0x10431e21 */
  if (!C.zf) goto L_10431e21;
  /* 10431dc9 cmp dword ptr [0x104517ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104517ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10431dd0 je 0x10431e21 */
  if (C.zf) goto L_10431e21;
  /* 10431dd2 mov edx, dword ptr [0x104517ec] */
  EDX = (r32((uint32_t)(0x104517ec)));
  /* 10431dd8 push edx */
  push32((uint32_t)(EDX));
  /* 10431dd9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10431ddc push eax */
  push32((uint32_t)(EAX));
  /* 10431ddd mov ecx, dword ptr [0x104517f4] */
  ECX = (r32((uint32_t)(0x104517f4)));
  /* 10431de3 push ecx */
  push32((uint32_t)(ECX));
  /* 10431de4 call 0x10434180 */
  push32(0x10431de9u); f_10434180();
  /* 10431de9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10431dec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10431dee jne 0x10431e21 */
  if (!C.zf) goto L_10431e21;
  /* 10431df0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10431df2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10431df5 push edx */
  push32((uint32_t)(EDX));
  /* 10431df6 call 0x10432200 */
  push32(0x10431dfbu); f_10432200();
  /* 10431dfb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10431dfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10431e00 je 0x10431e21 */
  if (C.zf) goto L_10431e21;
  /* 10431e02 mov eax, dword ptr [0x104517fc] */
  EAX = (r32((uint32_t)(0x104517fc)));
  /* 10431e07 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10431e0a mov dword ptr [0x104517fc], eax */
  w32((uint32_t)(0x104517fc), (EAX));
  /* 10431e0f cmp dword ptr [0x104517e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104517e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10431e16 jne 0x10431e21 */
  if (!C.zf) goto L_10431e21;
  /* 10431e18 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10431e1b mov dword ptr [0x104517e4], ecx */
  w32((uint32_t)(0x104517e4), (ECX));
L_10431e21:;
  /* 10431e21 mov eax, dword ptr [0x104517fc] */
  EAX = (r32((uint32_t)(0x104517fc)));
  /* 10431e26 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10431e29 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10431e2b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10431e2d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10431e2e:;
  /* 10431e2e mov esp, ebp */
  ESP = (EBP);
  /* 10431e30 pop ebp */
  EBP = (pop32());
  /* 10431e31 ret 4 */
  ESPCHK(0x10431b10u, _esp0);
  ESP += 8; return;
}

/* FUN_10011e40 @ 0x10431e40 (116 bytes, 33 insns) */
void f_10431e40(void) {
  FTRACE(0x10431e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10431e40 push ebp */
  push32((uint32_t)(EBP));
  /* 10431e41 mov ebp, esp */
  EBP = (ESP);
  /* 10431e43 push ecx */
  push32((uint32_t)(ECX));
  /* 10431e44 mov eax, dword ptr [0x104517f4] */
  EAX = (r32((uint32_t)(0x104517f4)));
  /* 10431e49 push eax */
  push32((uint32_t)(EAX));
  /* 10431e4a call 0x10428810 */
  push32(0x10431e4fu); f_10428810();
  /* 10431e4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10431e52 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10431e54 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10431e57 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10431e5a mov dword ptr [0x104517f0], ecx */
  w32((uint32_t)(0x104517f0), (ECX));
  /* 10431e60 cmp dword ptr [0x104517f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104517f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10431e67 je 0x10431e72 */
  if (C.zf) goto L_10431e72;
  /* 10431e69 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10431e70 jmp 0x10431e84 */
  goto L_10431e84;
L_10431e72:;
  /* 10431e72 mov edx, dword ptr [0x104517f4] */
  EDX = (r32((uint32_t)(0x104517f4)));
  /* 10431e78 push edx */
  push32((uint32_t)(EDX));
  /* 10431e79 call 0x104324f0 */
  push32(0x10431e7eu); f_104324f0();
  /* 10431e7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10431e81 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10431e84:;
  /* 10431e84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10431e87 mov dword ptr [0x104517ec], eax */
  w32((uint32_t)(0x104517ec), (EAX));
  /* 10431e8c push 1 */
  push32((uint32_t)(0x1u));
  /* 10431e8e push 0x10431ec0 */
  push32((uint32_t)(0x10431ec0u));
  /* 10431e93 call dword ptr [0x104542a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542a4))), 0x10431e99u);
  /* 10431e99 mov ecx, dword ptr [0x104517fc] */
  ECX = (r32((uint32_t)(0x104517fc)));
  /* 10431e9f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10431ea2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10431ea4 jne 0x10431eb0 */
  if (!C.zf) goto L_10431eb0;
  /* 10431ea6 mov dword ptr [0x104517fc], 0 */
  w32((uint32_t)(0x104517fc), (0x0u));
L_10431eb0:;
  /* 10431eb0 mov esp, ebp */
  ESP = (EBP);
  /* 10431eb2 pop ebp */
  EBP = (pop32());
  /* 10431eb3 ret  */
  ESPCHK(0x10431e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ec0 @ 0x10431ec0 (287 bytes, 86 insns) */
void f_10431ec0(void) {
  FTRACE(0x10431ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10431ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 10431ec1 mov ebp, esp */
  EBP = (ESP);
  /* 10431ec3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10431ec6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10431ec9 push eax */
  push32((uint32_t)(EAX));
  /* 10431eca call 0x10432470 */
  push32(0x10431ecfu); f_10432470();
  /* 10431ecf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10431ed2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10431ed5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10431ed7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10431eda push ecx */
  push32((uint32_t)(ECX));
  /* 10431edb mov edx, dword ptr [0x104517f0] */
  EDX = (r32((uint32_t)(0x104517f0)));
  /* 10431ee1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10431ee3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10431ee5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 10431eeb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10431ef1 push edx */
  push32((uint32_t)(EDX));
  /* 10431ef2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10431ef5 push eax */
  push32((uint32_t)(EAX));
  /* 10431ef6 call dword ptr [0x10451804] */
  call_ind((uint32_t)(r32((uint32_t)(0x10451804))), 0x10431efcu);
  /* 10431efc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10431efe jne 0x10431f14 */
  if (!C.zf) goto L_10431f14;
  /* 10431f00 mov dword ptr [0x104517fc], 0 */
  w32((uint32_t)(0x104517fc), (0x0u));
  /* 10431f0a mov eax, 1 */
  EAX = (0x1u);
  /* 10431f0f jmp 0x10431fd9 */
  goto L_10431fd9;
L_10431f14:;
  /* 10431f14 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10431f17 push ecx */
  push32((uint32_t)(ECX));
  /* 10431f18 mov edx, dword ptr [0x104517f4] */
  EDX = (r32((uint32_t)(0x104517f4)));
  /* 10431f1e push edx */
  push32((uint32_t)(EDX));
  /* 10431f1f call 0x104340b0 */
  push32(0x10431f24u); f_104340b0();
  /* 10431f24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10431f27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10431f29 jne 0x10431f69 */
  if (!C.zf) goto L_10431f69;
  /* 10431f2b cmp dword ptr [0x104517f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104517f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10431f32 jne 0x10431f46 */
  if (!C.zf) goto L_10431f46;
  /* 10431f34 push 1 */
  push32((uint32_t)(0x1u));
  /* 10431f36 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10431f39 push eax */
  push32((uint32_t)(EAX));
  /* 10431f3a call 0x10432200 */
  push32(0x10431f3fu); f_10432200();
  /* 10431f3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10431f42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10431f44 je 0x10431f67 */
  if (C.zf) goto L_10431f67;
L_10431f46:;
  /* 10431f46 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10431f49 mov dword ptr [0x10451800], ecx */
  w32((uint32_t)(0x10451800), (ECX));
  /* 10431f4f mov edx, dword ptr [0x10451800] */
  EDX = (r32((uint32_t)(0x10451800)));
  /* 10431f55 mov dword ptr [0x104517e4], edx */
  w32((uint32_t)(0x104517e4), (EDX));
  /* 10431f5b mov eax, dword ptr [0x104517fc] */
  EAX = (r32((uint32_t)(0x104517fc)));
  /* 10431f60 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10431f62 mov dword ptr [0x104517fc], eax */
  w32((uint32_t)(0x104517fc), (EAX));
L_10431f67:;
  /* 10431f67 jmp 0x10431fcc */
  goto L_10431fcc;
L_10431f69:;
  /* 10431f69 cmp dword ptr [0x104517f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104517f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10431f70 jne 0x10431fcc */
  if (!C.zf) goto L_10431fcc;
  /* 10431f72 cmp dword ptr [0x104517ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104517ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10431f79 je 0x10431fcc */
  if (C.zf) goto L_10431fcc;
  /* 10431f7b mov ecx, dword ptr [0x104517ec] */
  ECX = (r32((uint32_t)(0x104517ec)));
  /* 10431f81 push ecx */
  push32((uint32_t)(ECX));
  /* 10431f82 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 10431f85 push edx */
  push32((uint32_t)(EDX));
  /* 10431f86 mov eax, dword ptr [0x104517f4] */
  EAX = (r32((uint32_t)(0x104517f4)));
  /* 10431f8b push eax */
  push32((uint32_t)(EAX));
  /* 10431f8c call 0x10434180 */
  push32(0x10431f91u); f_10434180();
  /* 10431f91 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10431f94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10431f96 jne 0x10431fcc */
  if (!C.zf) goto L_10431fcc;
  /* 10431f98 push 0 */
  push32((uint32_t)(0x0u));
  /* 10431f9a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10431f9d push ecx */
  push32((uint32_t)(ECX));
  /* 10431f9e call 0x10432200 */
  push32(0x10431fa3u); f_10432200();
  /* 10431fa3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10431fa6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10431fa8 je 0x10431fcc */
  if (C.zf) goto L_10431fcc;
  /* 10431faa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10431fad mov dword ptr [0x10451800], edx */
  w32((uint32_t)(0x10451800), (EDX));
  /* 10431fb3 mov eax, dword ptr [0x10451800] */
  EAX = (r32((uint32_t)(0x10451800)));
  /* 10431fb8 mov dword ptr [0x104517e4], eax */
  w32((uint32_t)(0x104517e4), (EAX));
  /* 10431fbd mov ecx, dword ptr [0x104517fc] */
  ECX = (r32((uint32_t)(0x104517fc)));
  /* 10431fc3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10431fc6 mov dword ptr [0x104517fc], ecx */
  w32((uint32_t)(0x104517fc), (ECX));
L_10431fcc:;
  /* 10431fcc mov eax, dword ptr [0x104517fc] */
  EAX = (r32((uint32_t)(0x104517fc)));
  /* 10431fd1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10431fd4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10431fd6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10431fd8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10431fd9:;
  /* 10431fd9 mov esp, ebp */
  ESP = (EBP);
  /* 10431fdb pop ebp */
  EBP = (pop32());
  /* 10431fdc ret 4 */
  ESPCHK(0x10431ec0u, _esp0);
  ESP += 8; return;
}

/* FUN_10011fe0 @ 0x10431fe0 (69 bytes, 20 insns) */
void f_10431fe0(void) {
  FTRACE(0x10431fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10431fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10431fe1 mov ebp, esp */
  EBP = (ESP);
  /* 10431fe3 mov eax, dword ptr [0x104517f8] */
  EAX = (r32((uint32_t)(0x104517f8)));
  /* 10431fe8 push eax */
  push32((uint32_t)(EAX));
  /* 10431fe9 call 0x10428810 */
  push32(0x10431feeu); f_10428810();
  /* 10431fee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10431ff1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10431ff3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10431ff6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10431ff9 mov dword ptr [0x104517e8], ecx */
  w32((uint32_t)(0x104517e8), (ECX));
  /* 10431fff push 1 */
  push32((uint32_t)(0x1u));
  /* 10432001 push 0x10432030 */
  push32((uint32_t)(0x10432030u));
  /* 10432006 call dword ptr [0x104542a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542a4))), 0x1043200cu);
  /* 1043200c mov edx, dword ptr [0x104517fc] */
  EDX = (r32((uint32_t)(0x104517fc)));
  /* 10432012 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10432015 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10432017 jne 0x10432023 */
  if (!C.zf) goto L_10432023;
  /* 10432019 mov dword ptr [0x104517fc], 0 */
  w32((uint32_t)(0x104517fc), (0x0u));
L_10432023:;
  /* 10432023 pop ebp */
  EBP = (pop32());
  /* 10432024 ret  */
  ESPCHK(0x10431fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012030 @ 0x10432030 (172 bytes, 54 insns) */
void f_10432030(void) {
  FTRACE(0x10432030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10432030 push ebp */
  push32((uint32_t)(EBP));
  /* 10432031 mov ebp, esp */
  EBP = (ESP);
  /* 10432033 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10432036 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10432039 push eax */
  push32((uint32_t)(EAX));
  /* 1043203a call 0x10432470 */
  push32(0x1043203fu); f_10432470();
  /* 1043203f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432042 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10432045 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10432047 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1043204a push ecx */
  push32((uint32_t)(ECX));
  /* 1043204b mov edx, dword ptr [0x104517e8] */
  EDX = (r32((uint32_t)(0x104517e8)));
  /* 10432051 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10432053 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10432055 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1043205b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10432061 push edx */
  push32((uint32_t)(EDX));
  /* 10432062 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10432065 push eax */
  push32((uint32_t)(EAX));
  /* 10432066 call dword ptr [0x10451804] */
  call_ind((uint32_t)(r32((uint32_t)(0x10451804))), 0x1043206cu);
  /* 1043206c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1043206e jne 0x10432081 */
  if (!C.zf) goto L_10432081;
  /* 10432070 mov dword ptr [0x104517fc], 0 */
  w32((uint32_t)(0x104517fc), (0x0u));
  /* 1043207a mov eax, 1 */
  EAX = (0x1u);
  /* 1043207f jmp 0x104320d6 */
  goto L_104320d6;
L_10432081:;
  /* 10432081 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10432084 push ecx */
  push32((uint32_t)(ECX));
  /* 10432085 mov edx, dword ptr [0x104517f8] */
  EDX = (r32((uint32_t)(0x104517f8)));
  /* 1043208b push edx */
  push32((uint32_t)(EDX));
  /* 1043208c call 0x104340b0 */
  push32(0x10432091u); f_104340b0();
  /* 10432091 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432094 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10432096 jne 0x104320c9 */
  if (!C.zf) goto L_104320c9;
  /* 10432098 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1043209b push eax */
  push32((uint32_t)(EAX));
  /* 1043209c call 0x104321b0 */
  push32(0x104320a1u); f_104321b0();
  /* 104320a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104320a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104320a6 je 0x104320c9 */
  if (C.zf) goto L_104320c9;
  /* 104320a8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 104320ab mov dword ptr [0x10451800], ecx */
  w32((uint32_t)(0x10451800), (ECX));
  /* 104320b1 mov edx, dword ptr [0x10451800] */
  EDX = (r32((uint32_t)(0x10451800)));
  /* 104320b7 mov dword ptr [0x104517e4], edx */
  w32((uint32_t)(0x104517e4), (EDX));
  /* 104320bd mov eax, dword ptr [0x104517fc] */
  EAX = (r32((uint32_t)(0x104517fc)));
  /* 104320c2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 104320c4 mov dword ptr [0x104517fc], eax */
  w32((uint32_t)(0x104517fc), (EAX));
L_104320c9:;
  /* 104320c9 mov eax, dword ptr [0x104517fc] */
  EAX = (r32((uint32_t)(0x104517fc)));
  /* 104320ce and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 104320d1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 104320d3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104320d5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_104320d6:;
  /* 104320d6 mov esp, ebp */
  ESP = (EBP);
  /* 104320d8 pop ebp */
  EBP = (pop32());
  /* 104320d9 ret 4 */
  ESPCHK(0x10432030u, _esp0);
  ESP += 8; return;
}

/* FUN_100120e0 @ 0x104320e0 (43 bytes, 11 insns) */
void f_104320e0(void) {
  FTRACE(0x104320e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104320e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104320e1 mov ebp, esp */
  EBP = (ESP);
  /* 104320e3 mov eax, dword ptr [0x104517fc] */
  EAX = (r32((uint32_t)(0x104517fc)));
  /* 104320e8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 104320ed mov dword ptr [0x104517fc], eax */
  w32((uint32_t)(0x104517fc), (EAX));
  /* 104320f2 call dword ptr [0x10454294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454294))), 0x104320f8u);
  /* 104320f8 mov dword ptr [0x10451800], eax */
  w32((uint32_t)(0x10451800), (EAX));
  /* 104320fd mov ecx, dword ptr [0x10451800] */
  ECX = (r32((uint32_t)(0x10451800)));
  /* 10432103 mov dword ptr [0x104517e4], ecx */
  w32((uint32_t)(0x104517e4), (ECX));
  /* 10432109 pop ebp */
  EBP = (pop32());
  /* 1043210a ret  */
  ESPCHK(0x104320e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012110 @ 0x10432110 (155 bytes, 57 insns) */
void f_10432110(void) {
  FTRACE(0x10432110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10432110 push ebp */
  push32((uint32_t)(EBP));
  /* 10432111 mov ebp, esp */
  EBP = (ESP);
  /* 10432113 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10432116 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043211a je 0x1043213b */
  if (C.zf) goto L_1043213b;
  /* 1043211c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043211f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10432122 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10432124 je 0x1043213b */
  if (C.zf) goto L_1043213b;
  /* 10432126 push 0x1044d8c4 */
  push32((uint32_t)(0x1044d8c4u));
  /* 1043212b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043212e push edx */
  push32((uint32_t)(EDX));
  /* 1043212f call 0x10431670 */
  push32(0x10432134u); f_10431670();
  /* 10432134 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432137 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10432139 jne 0x10432163 */
  if (!C.zf) goto L_10432163;
L_1043213b:;
  /* 1043213b push 8 */
  push32((uint32_t)(0x8u));
  /* 1043213d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10432140 push eax */
  push32((uint32_t)(EAX));
  /* 10432141 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10432146 mov ecx, dword ptr [0x10451800] */
  ECX = (r32((uint32_t)(0x10451800)));
  /* 1043214c push ecx */
  push32((uint32_t)(ECX));
  /* 1043214d call dword ptr [0x10451804] */
  call_ind((uint32_t)(r32((uint32_t)(0x10451804))), 0x10432153u);
  /* 10432153 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10432155 jne 0x1043215b */
  if (!C.zf) goto L_1043215b;
  /* 10432157 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10432159 jmp 0x104321a7 */
  goto L_104321a7;
L_1043215b:;
  /* 1043215b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 1043215e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10432161 jmp 0x1043219b */
  goto L_1043219b;
L_10432163:;
  /* 10432163 push 0x1044d8c0 */
  push32((uint32_t)(0x1044d8c0u));
  /* 10432168 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043216b push eax */
  push32((uint32_t)(EAX));
  /* 1043216c call 0x10431670 */
  push32(0x10432171u); f_10431670();
  /* 10432171 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432174 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10432176 jne 0x1043219b */
  if (!C.zf) goto L_1043219b;
  /* 10432178 push 8 */
  push32((uint32_t)(0x8u));
  /* 1043217a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1043217d push ecx */
  push32((uint32_t)(ECX));
  /* 1043217e push 0xb */
  push32((uint32_t)(0xbu));
  /* 10432180 mov edx, dword ptr [0x10451800] */
  EDX = (r32((uint32_t)(0x10451800)));
  /* 10432186 push edx */
  push32((uint32_t)(EDX));
  /* 10432187 call dword ptr [0x10451804] */
  call_ind((uint32_t)(r32((uint32_t)(0x10451804))), 0x1043218du);
  /* 1043218d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1043218f jne 0x10432195 */
  if (!C.zf) goto L_10432195;
  /* 10432191 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10432193 jmp 0x104321a7 */
  goto L_104321a7;
L_10432195:;
  /* 10432195 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10432198 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1043219b:;
  /* 1043219b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043219e push ecx */
  push32((uint32_t)(ECX));
  /* 1043219f call 0x10434290 */
  push32(0x104321a4u); f_10434290();
  /* 104321a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104321a7:;
  /* 104321a7 mov esp, ebp */
  ESP = (EBP);
  /* 104321a9 pop ebp */
  EBP = (pop32());
  /* 104321aa ret  */
  ESPCHK(0x10432110u, _esp0);
  ESP += 4; return;
}

/* FUN_100121b0 @ 0x104321b0 (79 bytes, 26 insns) */
void f_104321b0(void) {
  FTRACE(0x104321b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104321b0 push ebp */
  push32((uint32_t)(EBP));
  /* 104321b1 mov ebp, esp */
  EBP = (ESP);
  /* 104321b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104321b6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 104321ba mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 104321be mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104321c5 jmp 0x104321d0 */
  goto L_104321d0;
L_104321c7:;
  /* 104321c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104321ca add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104321cd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_104321d0:;
  /* 104321d0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104321d4 jae 0x104321f6 */
  if (!C.cf) goto L_104321f6;
  /* 104321d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104321d9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104321df mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104321e2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104321e4 mov cx, word ptr [eax*2 + 0x104509c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x104509c4)));
  /* 104321ec cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104321ee jne 0x104321f4 */
  if (!C.zf) goto L_104321f4;
  /* 104321f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104321f2 jmp 0x104321fb */
  goto L_104321fb;
L_104321f4:;
  /* 104321f4 jmp 0x104321c7 */
  goto L_104321c7;
L_104321f6:;
  /* 104321f6 mov eax, 1 */
  EAX = (0x1u);
L_104321fb:;
  /* 104321fb mov esp, ebp */
  ESP = (EBP);
  /* 104321fd pop ebp */
  EBP = (pop32());
  /* 104321fe ret  */
  ESPCHK(0x104321b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012200 @ 0x10432200 (135 bytes, 48 insns) */
void f_10432200(void) {
  FTRACE(0x10432200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10432200 push ebp */
  push32((uint32_t)(EBP));
  /* 10432201 mov ebp, esp */
  EBP = (ESP);
  /* 10432203 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10432206 push esi */
  push32((uint32_t)(ESI));
  /* 10432207 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043220a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1043220f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 10432214 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10432219 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 1043221c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10432221 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10432224 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10432226 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 10432229 push ecx */
  push32((uint32_t)(ECX));
  /* 1043222a push 1 */
  push32((uint32_t)(0x1u));
  /* 1043222c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1043222f push edx */
  push32((uint32_t)(EDX));
  /* 10432230 call dword ptr [0x10451804] */
  call_ind((uint32_t)(r32((uint32_t)(0x10451804))), 0x10432236u);
  /* 10432236 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10432238 jne 0x1043223e */
  if (!C.zf) goto L_1043223e;
  /* 1043223a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1043223c jmp 0x10432282 */
  goto L_10432282;
L_1043223e:;
  /* 1043223e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 10432241 push eax */
  push32((uint32_t)(EAX));
  /* 10432242 call 0x10432470 */
  push32(0x10432247u); f_10432470();
  /* 10432247 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043224a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043224d je 0x1043227d */
  if (C.zf) goto L_1043227d;
  /* 1043224f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10432253 je 0x1043227d */
  if (C.zf) goto L_1043227d;
  /* 10432255 mov ecx, dword ptr [0x104517f4] */
  ECX = (r32((uint32_t)(0x104517f4)));
  /* 1043225b push ecx */
  push32((uint32_t)(ECX));
  /* 1043225c call 0x104324f0 */
  push32(0x10432261u); f_104324f0();
  /* 10432261 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432264 mov esi, eax */
  ESI = (EAX);
  /* 10432266 mov edx, dword ptr [0x104517f4] */
  EDX = (r32((uint32_t)(0x104517f4)));
  /* 1043226c push edx */
  push32((uint32_t)(EDX));
  /* 1043226d call 0x10428810 */
  push32(0x10432272u); f_10428810();
  /* 10432272 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432275 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10432277 jne 0x1043227d */
  if (!C.zf) goto L_1043227d;
  /* 10432279 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1043227b jmp 0x10432282 */
  goto L_10432282;
L_1043227d:;
  /* 1043227d mov eax, 1 */
  EAX = (0x1u);
L_10432282:;
  /* 10432282 pop esi */
  ESI = (pop32());
  /* 10432283 mov esp, ebp */
  ESP = (EBP);
  /* 10432285 pop ebp */
  EBP = (pop32());
  /* 10432286 ret  */
  ESPCHK(0x10432200u, _esp0);
  ESP += 4; return;
}

/* FUN_10012290 @ 0x10432290 (77 bytes, 18 insns) */
void f_10432290(void) {
  FTRACE(0x10432290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10432290 push ebp */
  push32((uint32_t)(EBP));
  /* 10432291 mov ebp, esp */
  EBP = (ESP);
  /* 10432293 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10432299 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 104322a3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 104322a9 push eax */
  push32((uint32_t)(EAX));
  /* 104322aa call dword ptr [0x10454290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454290))), 0x104322b0u);
  /* 104322b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104322b2 je 0x104322c9 */
  if (C.zf) goto L_104322c9;
  /* 104322b4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104322bb jne 0x104322c9 */
  if (!C.zf) goto L_104322c9;
  /* 104322bd mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 104322c7 jmp 0x104322d3 */
  goto L_104322d3;
L_104322c9:;
  /* 104322c9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_104322d3:;
  /* 104322d3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 104322d9 mov esp, ebp */
  ESP = (EBP);
  /* 104322db pop ebp */
  EBP = (pop32());
  /* 104322dc ret  */
  ESPCHK(0x10432290u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x104322e0 (388 bytes, 118 insns) */
void f_104322e0(void) {
  FTRACE(0x104322e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104322e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104322e1 mov ebp, esp */
  EBP = (ESP);
  /* 104322e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104322e6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 104322ed mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 104322f4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_104322fb:;
  /* 104322fb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104322fe cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10432301 jg 0x10432448 */
  if ((!C.zf&&C.sf==C.of)) goto L_10432448;
  /* 10432307 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1043230a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1043230d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1043230e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10432310 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10432312 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10432315 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10432318 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1043231b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043231e cmp edx, dword ptr [ecx + 0x10450520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10450520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10432324 jne 0x1043241e */
  if (!C.zf) goto L_1043241e;
  /* 1043232a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1043232d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10432330 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10432334 ja 0x10432357 */
  if ((!C.cf&&!C.zf)) goto L_10432357;
  /* 10432336 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043233a je 0x104323c9 */
  if (C.zf) goto L_104323c9;
  /* 10432340 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10432344 je 0x10432374 */
  if (C.zf) goto L_10432374;
  /* 10432346 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043234a je 0x10432396 */
  if (C.zf) goto L_10432396;
  /* 1043234c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10432350 je 0x104323b8 */
  if (C.zf) goto L_104323b8;
  /* 10432352 jmp 0x104323e8 */
  goto L_104323e8;
L_10432357:;
  /* 10432357 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043235e je 0x10432385 */
  if (C.zf) goto L_10432385;
  /* 10432360 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10432367 je 0x104323a7 */
  if (C.zf) goto L_104323a7;
  /* 10432369 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10432370 je 0x104323da */
  if (C.zf) goto L_104323da;
  /* 10432372 jmp 0x104323e8 */
  goto L_104323e8;
L_10432374:;
  /* 10432374 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10432377 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1043237a add ecx, 0x10450524 */
  { uint32_t _a=(ECX),_b=(0x10450524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10432380 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10432383 jmp 0x104323e8 */
  goto L_104323e8;
L_10432385:;
  /* 10432385 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10432388 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1043238b mov eax, dword ptr [edx + 0x1045052c] */
  EAX = (r32((uint32_t)(EDX + 0x1045052c)));
  /* 10432391 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10432394 jmp 0x104323e8 */
  goto L_104323e8;
L_10432396:;
  /* 10432396 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10432399 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1043239c add ecx, 0x10450530 */
  { uint32_t _a=(ECX),_b=(0x10450530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104323a2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104323a5 jmp 0x104323e8 */
  goto L_104323e8;
L_104323a7:;
  /* 104323a7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104323aa imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104323ad mov eax, dword ptr [edx + 0x10450534] */
  EAX = (r32((uint32_t)(EDX + 0x10450534)));
  /* 104323b3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104323b6 jmp 0x104323e8 */
  goto L_104323e8;
L_104323b8:;
  /* 104323b8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104323bb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104323be add ecx, 0x10450538 */
  { uint32_t _a=(ECX),_b=(0x10450538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104323c4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104323c7 jmp 0x104323e8 */
  goto L_104323e8;
L_104323c9:;
  /* 104323c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104323cc imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104323cf add edx, 0x1045053c */
  { uint32_t _a=(EDX),_b=(0x1045053cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104323d5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 104323d8 jmp 0x104323e8 */
  goto L_104323e8;
L_104323da:;
  /* 104323da mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104323dd imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104323e0 add eax, 0x10450544 */
  { uint32_t _a=(EAX),_b=(0x10450544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104323e5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_104323e8:;
  /* 104323e8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104323ec je 0x104323f4 */
  if (C.zf) goto L_104323f4;
  /* 104323ee cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104323f2 jge 0x104323f6 */
  if ((C.sf==C.of)) goto L_104323f6;
L_104323f4:;
  /* 104323f4 jmp 0x10432448 */
  goto L_10432448;
L_104323f6:;
  /* 104323f6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104323f9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104323fc push ecx */
  push32((uint32_t)(ECX));
  /* 104323fd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10432400 push edx */
  push32((uint32_t)(EDX));
  /* 10432401 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10432404 push eax */
  push32((uint32_t)(EAX));
  /* 10432405 call 0x10429200 */
  push32(0x1043240au); f_10429200();
  /* 1043240a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043240d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10432410 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10432413 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 10432417 mov eax, 1 */
  EAX = (0x1u);
  /* 1043241c jmp 0x1043245e */
  goto L_1043245e;
L_1043241e:;
  /* 1043241e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10432421 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10432424 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10432427 cmp eax, dword ptr [edx + 0x10450520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10450520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043242d jae 0x1043243a */
  if (!C.cf) goto L_1043243a;
  /* 1043242f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10432432 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10432435 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10432438 jmp 0x10432443 */
  goto L_10432443;
L_1043243a:;
  /* 1043243a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1043243d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10432440 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10432443:;
  /* 10432443 jmp 0x104322fb */
  goto L_104322fb;
L_10432448:;
  /* 10432448 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1043244b push eax */
  push32((uint32_t)(EAX));
  /* 1043244c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1043244f push ecx */
  push32((uint32_t)(ECX));
  /* 10432450 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10432453 push edx */
  push32((uint32_t)(EDX));
  /* 10432454 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10432457 push eax */
  push32((uint32_t)(EAX));
  /* 10432458 call dword ptr [0x1045429c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045429c))), 0x1043245eu);
L_1043245e:;
  /* 1043245e mov esp, ebp */
  ESP = (EBP);
  /* 10432460 pop ebp */
  EBP = (pop32());
  /* 10432461 ret 0x10 */
  ESPCHK(0x104322e0u, _esp0);
  ESP += 20; return;
}

/* FUN_10012470 @ 0x10432470 (118 bytes, 42 insns) */
void f_10432470(void) {
  FTRACE(0x10432470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10432470 push ebp */
  push32((uint32_t)(EBP));
  /* 10432471 mov ebp, esp */
  EBP = (ESP);
  /* 10432473 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10432476 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1043247d:;
  /* 1043247d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10432480 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10432482 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10432485 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10432489 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043248c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1043248f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10432492 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10432494 je 0x104324df */
  if (C.zf) goto L_104324df;
  /* 10432496 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1043249a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043249d jl 0x104324b2 */
  if ((C.sf!=C.of)) goto L_104324b2;
  /* 1043249f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104324a3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104324a6 jg 0x104324b2 */
  if ((!C.zf&&C.sf==C.of)) goto L_104324b2;
  /* 104324a8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 104324ab add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 104324ad mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 104324b0 jmp 0x104324cc */
  goto L_104324cc;
L_104324b2:;
  /* 104324b2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104324b6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104324b9 jl 0x104324cc */
  if ((C.sf!=C.of)) goto L_104324cc;
  /* 104324bb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104324bf cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104324c2 jg 0x104324cc */
  if ((!C.zf&&C.sf==C.of)) goto L_104324cc;
  /* 104324c4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 104324c7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 104324c9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_104324cc:;
  /* 104324cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104324cf shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 104324d2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 104324d6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 104324da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104324dd jmp 0x1043247d */
  goto L_1043247d;
L_104324df:;
  /* 104324df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104324e2 mov esp, ebp */
  ESP = (EBP);
  /* 104324e4 pop ebp */
  EBP = (pop32());
  /* 104324e5 ret  */
  ESPCHK(0x10432470u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x104324f0 (101 bytes, 36 insns) */
void f_104324f0(void) {
  FTRACE(0x104324f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104324f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104324f1 mov ebp, esp */
  EBP = (ESP);
  /* 104324f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104324f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104324fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10432500 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10432502 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10432505 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10432508 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1043250b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1043250e:;
  /* 1043250e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10432512 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10432515 jl 0x10432520 */
  if ((C.sf!=C.of)) goto L_10432520;
  /* 10432517 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1043251b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043251e jle 0x10432532 */
  if ((C.zf||C.sf!=C.of)) goto L_10432532;
L_10432520:;
  /* 10432520 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10432524 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10432527 jl 0x1043254e */
  if ((C.sf!=C.of)) goto L_1043254e;
  /* 10432529 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1043252d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10432530 jg 0x1043254e */
  if ((!C.zf&&C.sf==C.of)) goto L_1043254e;
L_10432532:;
  /* 10432532 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10432535 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10432538 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1043253b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043253e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10432540 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10432543 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10432546 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10432549 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1043254c jmp 0x1043250e */
  goto L_1043250e;
L_1043254e:;
  /* 1043254e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10432551 mov esp, ebp */
  ESP = (EBP);
  /* 10432553 pop ebp */
  EBP = (pop32());
  /* 10432554 ret  */
  ESPCHK(0x104324f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012560 @ 0x10432560 (122 bytes, 39 insns) */
void f_10432560(void) {
  FTRACE(0x10432560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10432560 push ebp */
  push32((uint32_t)(EBP));
  /* 10432561 mov ebp, esp */
  EBP = (ESP);
  /* 10432563 push ecx */
  push32((uint32_t)(ECX));
  /* 10432564 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10432567 cmp eax, dword ptr [0x1045309c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1045309c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043256d jae 0x10432591 */
  if (!C.cf) goto L_10432591;
  /* 1043256f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10432572 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10432575 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10432578 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1043257b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1043257e mov eax, dword ptr [ecx*4 + 0x10452f60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10452f60)));
  /* 10432585 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1043258a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1043258d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1043258f jne 0x104325ac */
  if (!C.zf) goto L_104325ac;
L_10432591:;
  /* 10432591 call 0x1042d8b0 */
  push32(0x10432596u); f_1042d8b0();
  /* 10432596 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1043259c call 0x1042d8c0 */
  push32(0x104325a1u); f_1042d8c0();
  /* 104325a1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104325a7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104325aa jmp 0x104325d6 */
  goto L_104325d6;
L_104325ac:;
  /* 104325ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104325af push edx */
  push32((uint32_t)(EDX));
  /* 104325b0 call 0x1042f0d0 */
  push32(0x104325b5u); f_1042f0d0();
  /* 104325b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104325b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104325bb push eax */
  push32((uint32_t)(EAX));
  /* 104325bc call 0x104325e0 */
  push32(0x104325c1u); f_104325e0();
  /* 104325c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104325c4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104325c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104325ca push ecx */
  push32((uint32_t)(ECX));
  /* 104325cb call 0x1042f160 */
  push32(0x104325d0u); f_1042f160();
  /* 104325d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104325d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_104325d6:;
  /* 104325d6 mov esp, ebp */
  ESP = (EBP);
  /* 104325d8 pop ebp */
  EBP = (pop32());
  /* 104325d9 ret  */
  ESPCHK(0x10432560u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x104325e0 (170 bytes, 59 insns) */
void f_104325e0(void) {
  FTRACE(0x104325e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104325e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104325e1 mov ebp, esp */
  EBP = (ESP);
  /* 104325e3 push ecx */
  push32((uint32_t)(ECX));
  /* 104325e4 push esi */
  push32((uint32_t)(ESI));
  /* 104325e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104325e8 push eax */
  push32((uint32_t)(EAX));
  /* 104325e9 call 0x1042ef50 */
  push32(0x104325eeu); f_1042ef50();
  /* 104325ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104325f1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104325f4 je 0x10432633 */
  if (C.zf) goto L_10432633;
  /* 104325f6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104325fa je 0x10432602 */
  if (C.zf) goto L_10432602;
  /* 104325fc cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10432600 jne 0x1043261c */
  if (!C.zf) goto L_1043261c;
L_10432602:;
  /* 10432602 push 1 */
  push32((uint32_t)(0x1u));
  /* 10432604 call 0x1042ef50 */
  push32(0x10432609u); f_1042ef50();
  /* 10432609 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043260c mov esi, eax */
  ESI = (EAX);
  /* 1043260e push 2 */
  push32((uint32_t)(0x2u));
  /* 10432610 call 0x1042ef50 */
  push32(0x10432615u); f_1042ef50();
  /* 10432615 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432618 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043261a je 0x10432633 */
  if (C.zf) goto L_10432633;
L_1043261c:;
  /* 1043261c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043261f push ecx */
  push32((uint32_t)(ECX));
  /* 10432620 call 0x1042ef50 */
  push32(0x10432625u); f_1042ef50();
  /* 10432625 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432628 push eax */
  push32((uint32_t)(EAX));
  /* 10432629 call dword ptr [0x10454298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454298))), 0x1043262fu);
  /* 1043262f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10432631 je 0x1043263c */
  if (C.zf) goto L_1043263c;
L_10432633:;
  /* 10432633 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1043263a jmp 0x10432645 */
  goto L_10432645;
L_1043263c:;
  /* 1043263c call dword ptr [0x10454338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454338))), 0x10432642u);
  /* 10432642 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10432645:;
  /* 10432645 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10432648 push edx */
  push32((uint32_t)(EDX));
  /* 10432649 call 0x1042ee70 */
  push32(0x1043264eu); f_1042ee70();
  /* 1043264e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432651 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10432654 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10432657 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043265a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1043265d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10432660 mov edx, dword ptr [eax*4 + 0x10452f60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10452f60)));
  /* 10432667 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 1043266c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10432670 je 0x10432683 */
  if (C.zf) goto L_10432683;
  /* 10432672 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10432675 push eax */
  push32((uint32_t)(EAX));
  /* 10432676 call 0x1042d810 */
  push32(0x1043267bu); f_1042d810();
  /* 1043267b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043267e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10432681 jmp 0x10432685 */
  goto L_10432685;
L_10432683:;
  /* 10432683 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10432685:;
  /* 10432685 pop esi */
  ESI = (pop32());
  /* 10432686 mov esp, ebp */
  ESP = (EBP);
  /* 10432688 pop ebp */
  EBP = (pop32());
  /* 10432689 ret  */
  ESPCHK(0x104325e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012690 @ 0x10432690 (146 bytes, 52 insns) */
void f_10432690(void) {
  FTRACE(0x10432690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10432690 push ebp */
  push32((uint32_t)(EBP));
  /* 10432691 mov ebp, esp */
  EBP = (ESP);
  /* 10432693 push ebx */
  push32((uint32_t)(EBX));
  /* 10432694 push esi */
  push32((uint32_t)(ESI));
  /* 10432695 push edi */
  push32((uint32_t)(EDI));
L_10432696:;
  /* 10432696 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043269a jne 0x104326ba */
  if (!C.zf) goto L_104326ba;
  /* 1043269c push 0x1044d200 */
  push32((uint32_t)(0x1044d200u));
  /* 104326a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 104326a3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 104326a5 push 0x1044d8c8 */
  push32((uint32_t)(0x1044d8c8u));
  /* 104326aa push 2 */
  push32((uint32_t)(0x2u));
  /* 104326ac call 0x10424aa0 */
  push32(0x104326b1u); f_10424aa0();
  /* 104326b1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104326b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104326b7 jne 0x104326ba */
  if (!C.zf) goto L_104326ba;
  /* 104326b9 int3  */
  x86_unimpl("int3 @ 0x104326b9");
L_104326ba:;
  /* 104326ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104326bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104326be jne 0x10432696 */
  if (!C.zf) goto L_10432696;
  /* 104326c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104326c3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104326c6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 104326cc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104326ce je 0x1043271d */
  if (C.zf) goto L_1043271d;
  /* 104326d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104326d3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 104326d6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 104326d9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104326db je 0x1043271d */
  if (C.zf) goto L_1043271d;
  /* 104326dd push 2 */
  push32((uint32_t)(0x2u));
  /* 104326df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104326e2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 104326e5 push eax */
  push32((uint32_t)(EAX));
  /* 104326e6 call 0x10426470 */
  push32(0x104326ebu); f_10426470();
  /* 104326eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104326ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104326f1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104326f4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 104326fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104326fd mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10432700 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10432703 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10432709 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1043270c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10432713 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10432716 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_1043271d:;
  /* 1043271d pop edi */
  EDI = (pop32());
  /* 1043271e pop esi */
  ESI = (pop32());
  /* 1043271f pop ebx */
  EBX = (pop32());
  /* 10432720 pop ebp */
  EBP = (pop32());
  /* 10432721 ret  */
  ESPCHK(0x10432690u, _esp0);
  ESP += 4; return;
}

/* FUN_10012730 @ 0x10432730 (289 bytes, 97 insns) */
void f_10432730(void) {
  FTRACE(0x10432730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10432730 push ebp */
  push32((uint32_t)(EBP));
  /* 10432731 mov ebp, esp */
  EBP = (ESP);
  /* 10432733 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10432736 push esi */
  push32((uint32_t)(ESI));
  /* 10432737 mov eax, dword ptr [0x10450c98] */
  EAX = (r32((uint32_t)(0x10450c98)));
  /* 1043273c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1043273f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10432746 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1043274d jmp 0x10432758 */
  goto L_10432758;
L_1043274f:;
  /* 1043274f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10432752 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10432755 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10432758:;
  /* 10432758 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043275c jae 0x10432791 */
  if (!C.cf) goto L_10432791;
  /* 1043275e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10432761 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10432764 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10432767 push ecx */
  push32((uint32_t)(ECX));
  /* 10432768 call 0x10428810 */
  push32(0x1043276du); f_10428810();
  /* 1043276d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432770 mov esi, eax */
  ESI = (EAX);
  /* 10432772 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10432775 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10432778 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1043277c push ecx */
  push32((uint32_t)(ECX));
  /* 1043277d call 0x10428810 */
  push32(0x10432782u); f_10428810();
  /* 10432782 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432785 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10432788 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1043278c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1043278f jmp 0x1043274f */
  goto L_1043274f;
L_10432791:;
  /* 10432791 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10432794 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10432797 push eax */
  push32((uint32_t)(EAX));
  /* 10432798 call 0x104259c0 */
  push32(0x1043279du); f_104259c0();
  /* 1043279d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104327a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104327a3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104327a7 je 0x10432849 */
  if (C.zf) goto L_10432849;
  /* 104327ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104327b0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 104327b3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 104327ba jmp 0x104327c5 */
  goto L_104327c5;
L_104327bc:;
  /* 104327bc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104327bf add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104327c2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_104327c5:;
  /* 104327c5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104327c9 jae 0x1043283a */
  if (!C.cf) goto L_1043283a;
  /* 104327cb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104327ce mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 104327d1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104327d4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104327d7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 104327da mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104327dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104327e0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 104327e3 push ecx */
  push32((uint32_t)(ECX));
  /* 104327e4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104327e7 push edx */
  push32((uint32_t)(EDX));
  /* 104327e8 call 0x10428990 */
  push32(0x104327edu); f_10428990();
  /* 104327ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104327f0 push eax */
  push32((uint32_t)(EAX));
  /* 104327f1 call 0x10428810 */
  push32(0x104327f6u); f_10428810();
  /* 104327f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104327f9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104327fc add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104327fe mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10432801 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10432804 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10432807 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1043280a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1043280d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10432810 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10432813 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10432816 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1043281a push eax */
  push32((uint32_t)(EAX));
  /* 1043281b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1043281e push ecx */
  push32((uint32_t)(ECX));
  /* 1043281f call 0x10428990 */
  push32(0x10432824u); f_10428990();
  /* 10432824 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432827 push eax */
  push32((uint32_t)(EAX));
  /* 10432828 call 0x10428810 */
  push32(0x1043282du); f_10428810();
  /* 1043282d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432830 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10432833 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10432835 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10432838 jmp 0x104327bc */
  goto L_104327bc;
L_1043283a:;
  /* 1043283a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1043283d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10432840 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10432843 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10432846 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10432849:;
  /* 10432849 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1043284c pop esi */
  ESI = (pop32());
  /* 1043284d mov esp, ebp */
  ESP = (EBP);
  /* 1043284f pop ebp */
  EBP = (pop32());
  /* 10432850 ret  */
  ESPCHK(0x10432730u, _esp0);
  ESP += 4; return;
}

/* FUN_10012860 @ 0x10432860 (291 bytes, 97 insns) */
void f_10432860(void) {
  FTRACE(0x10432860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10432860 push ebp */
  push32((uint32_t)(EBP));
  /* 10432861 mov ebp, esp */
  EBP = (ESP);
  /* 10432863 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10432866 push esi */
  push32((uint32_t)(ESI));
  /* 10432867 mov eax, dword ptr [0x10450c98] */
  EAX = (r32((uint32_t)(0x10450c98)));
  /* 1043286c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1043286f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10432876 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1043287d jmp 0x10432888 */
  goto L_10432888;
L_1043287f:;
  /* 1043287f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10432882 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10432885 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10432888:;
  /* 10432888 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1043288c jae 0x104328c2 */
  if (!C.cf) goto L_104328c2;
  /* 1043288e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10432891 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10432894 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10432898 push ecx */
  push32((uint32_t)(ECX));
  /* 10432899 call 0x10428810 */
  push32(0x1043289eu); f_10428810();
  /* 1043289e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104328a1 mov esi, eax */
  ESI = (EAX);
  /* 104328a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104328a6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104328a9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 104328ad push ecx */
  push32((uint32_t)(ECX));
  /* 104328ae call 0x10428810 */
  push32(0x104328b3u); f_10428810();
  /* 104328b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104328b6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104328b9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 104328bd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 104328c0 jmp 0x1043287f */
  goto L_1043287f;
L_104328c2:;
  /* 104328c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104328c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104328c8 push eax */
  push32((uint32_t)(EAX));
  /* 104328c9 call 0x104259c0 */
  push32(0x104328ceu); f_104259c0();
  /* 104328ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104328d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104328d4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104328d8 je 0x1043297b */
  if (C.zf) goto L_1043297b;
  /* 104328de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104328e1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 104328e4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 104328eb jmp 0x104328f6 */
  goto L_104328f6;
L_104328ed:;
  /* 104328ed mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104328f0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104328f3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_104328f6:;
  /* 104328f6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104328fa jae 0x1043296c */
  if (!C.cf) goto L_1043296c;
  /* 104328fc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104328ff mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10432902 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10432905 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10432908 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1043290b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1043290e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10432911 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10432915 push ecx */
  push32((uint32_t)(ECX));
  /* 10432916 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10432919 push edx */
  push32((uint32_t)(EDX));
  /* 1043291a call 0x10428990 */
  push32(0x1043291fu); f_10428990();
  /* 1043291f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432922 push eax */
  push32((uint32_t)(EAX));
  /* 10432923 call 0x10428810 */
  push32(0x10432928u); f_10428810();
  /* 10432928 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1043292b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1043292e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10432930 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10432933 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10432936 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10432939 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1043293c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1043293f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10432942 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10432945 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10432948 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1043294c push eax */
  push32((uint32_t)(EAX));
  /* 1043294d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10432950 push ecx */
  push32((uint32_t)(ECX));
  /* 10432951 call 0x10428990 */
  push32(0x10432956u); f_10428990();
  /* 10432956 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432959 push eax */
  push32((uint32_t)(EAX));
  /* 1043295a call 0x10428810 */
  push32(0x1043295fu); f_10428810();
  /* 1043295f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10432962 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10432965 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10432967 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1043296a jmp 0x104328ed */
  goto L_104328ed;
L_1043296c:;
  /* 1043296c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1043296f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10432972 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10432975 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10432978 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1043297b:;
  /* 1043297b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1043297e pop esi */
  ESI = (pop32());
  /* 1043297f mov esp, ebp */
  ESP = (EBP);
  /* 10432981 pop ebp */
  EBP = (pop32());
  /* 10432982 ret  */
  ESPCHK(0x10432860u, _esp0);
  ESP += 4; return;
}

